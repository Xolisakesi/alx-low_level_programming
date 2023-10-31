#include "_elf.h"

/**
* checkElf - Checks if the provided
* @e_ident: An array of bytes representing the ELF
* Return: void nothing
*/

void checkElf(unsigned char *e_ident)
{
int i;
for (i = 0; i < 4; i++)
{
if (e_ident[i] != 127 && e_ident[i]
!= 'E' && e_ident[i] != 'L' && e_ident[i] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}
/**
* printMagic - Prints the magic bytes of the ELF
* @e_ident: An array of bytes representing the ELF
* Return: void nothing
*/

void printMagic(unsigned char *e_ident)
{
int i;
printf(" Magic: ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x%s", e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}
}
/**
* printClass - Prints the ELF file class
* @e_ident: An array of bytes representing the ELF
* Return: void nothing
*/

void printClass(unsigned char *e_ident)
{
printf(" Class: ");
switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}
/**
* printData - Prints the ELF data encoding
* @e_ident: An array of bytes representing the ELF
* Return: void nothing
*/

void printData(unsigned char *e_ident)
{
printf(" Data: ");
switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}
/**
* printVersion - Prints the ELF version.
* @e_ident: An array of bytes representing the ELF
* Return: void nothing
*/

void printVersion(unsigned char *e_ident)
{
printf(" Version: %d", e_ident[EI_VERSION]);
switch (e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}
/**
* printOsAbi - Prints the ELF OS/ABI information.
* @e_ident: An array of bytes representing the ELF
* Return: void nothing
*/

void printOsAbi(unsigned char *e_ident)
{
printf(" OS/ABI: ");
switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}
/**
* printAbi - Prints the ELF ABI
* @e_ident: An array of bytes
* Return: void nothing
*/

void printAbi(unsigned char *e_ident)
{
printf(" ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}
/**
* printType - Displays the ELF ABI
* @e_ident: An array of bytes representing the ELF
* @e_type: type variable
* Return: void nothing
*/

void printType(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB) e_type >>= 8;
printf(" Type: ");
switch (e_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", e_type);
}
}
/**
* printEntry - Displays the entry point address of an
* ELF file.
* @e_entry: The entry point address of the ELF file.
* @e_ident: An array of bytes
* Return: void nothing
*/

void printEntry(unsigned long int e_entry, unsigned char *e_ident)
{
printf(" Entry point address: ");
if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}
if (e_ident[EI_CLASS] == ELFCLASS32)
{
printf("%#x\n", (unsigned int)e_entry);
}
else
{
printf("%#lx\n", e_entry);
}
}
/**
* closeElf - Closes an open ELF file.
* @elf: The file descriptor of the open ELF file.
* Return: void nothing
*/

void closeElf(int elf)
{
if (close(elf) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
exit(98);
}
}
/**
* main - Entry point of the program.
* @argc: The number of arguments (unused).
* @argv: An array of pointers
* Return: 0 on successful execution.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
int o, r;

o = open(argv[1], O_RDONLY);
if (o == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
closeElf(o);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
r = read(o, header, sizeof(Elf64_Ehdr));
if (r == -1)
{
free(header);
closeElf(o);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}
checkElf(header->e_ident);
printf("ELF Header:\n");
printMagic(header->e_ident);
printClass(header->e_ident);
printData(header->e_ident);
printVersion(header->e_ident);
printOsAbi(header->e_ident);
printAbi(header->e_ident);
printType(header->e_type, header->e_ident);
printEntry(header->e_entry, header->e_ident);
free(header);
closeElf(o);
return (0);
}

