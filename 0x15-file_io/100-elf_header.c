#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

/**
 * print_elf_header - Prints information from the ELF header.
 * @header: Pointer to the ELF header structure
 */
void print_elf_header(Elf64_Ehdr *header)
{
int i = 0;
printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf(" %02x", header->e_ident[i]);
}
printf("\n");
printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : (header->e_type == ET_DYN ? "DYN (Shared object file)" : "REL (Relocatable file)"));
printf("  Entry point address:               %lx\n", (unsigned long)header->e_entry);
}
int main(int argc, char *argv[])
{
Elf64_Ehdr header;
int fd = open(argv[1], O_RDONLY);
if (argc != 2)
{
dprintf(2, "Usage: %s elf_filename\n", argv[0]);
return (98);
}
if (fd == -1)
{
dprintf(2, "Error: Cannot open file %s\n", argv[1]);
return (98);
if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
{
dprintf(2, "Error: Cannot read ELF header from file %s\n", argv[1]);
close(fd);
return (98);
}
if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
{
dprintf(2, "Error: %s is not an ELF file\n", argv[1]);
close(fd);
return (98);
}
print_elf_header(&header);
close(fd);
return (0);
}
return (0);
}
