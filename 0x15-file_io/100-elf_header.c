#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
 * print_elf_header_info - Print information from an
 * ELF header.
 * @header: Pointer to an Elf64_Ehdr structure
 * representing the ELF header.
 * Description: This function prints various
 * information contained in the
 * provided ELF header, following the specified format.
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
int i;
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");

printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
printf("  Entry point address:               0x%lx\n", header->e_entry);
}
/**
 * main - Entry point of the program to display ELF
 * header information.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the
 * command-line arguments.
 * Description: This function serves as the entry
 * point for the program. It
 * reads an ELF file, verifies its format, and
 * displays relevant information
 * from the ELF header.
 * Return: 0 on success, 98 on incorrect usage or errors
 */

int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (98);
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
perror("open");
return (98);
}
if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
{
perror("read");
close(fd);
return (98);
}
if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
{
fprintf(stderr, "Error: Not an ELF file\n");
close(fd);
return (98);
}
printf("ELF Header:\n");
print_elf_header_info(&header);
close(fd);
return (0);
}
