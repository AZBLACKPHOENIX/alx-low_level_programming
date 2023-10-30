#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>

/**
 * print_error - Prints an error message to stderr and exits with status 98.
 * @error_message: The error message to print.
 */
void print_error(const char *error_message)
{
    dprintf(STDERR_FILENO, "%s\n", error_message);
    exit(98);
}

/**
 * display_elf_header - Displays information contained in the ELF header of a file.
 * @filename: The name of the ELF file.
 */
void display_elf_header(const char *filename)
{
int i;
int fd = open(filename, O_RDONLY);
ssize_t read_bytes = read(fd, &elf_header, sizeof(Elf64_Ehdr));
Elf64_Ehdr elf_header;
if (fd == -1)
{
print_error("Error: Could not open file");
}
if (read_bytes < sizeof(Elf64_Ehdr))
{
close(fd);
print_error("Error: Could not read ELF header");
    }

    close(fd);

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; ++i)
    {
        printf("%02x ", elf_header.e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "2's complement, little endian");
    printf("  Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
    printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", elf_header.e_type == ET_REL ? "REL (Relocatable file)" : elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" : elf_header.e_type == ET_DYN ? "DYN (Shared object file)" : "Other");
printf("  Entry point address:               %#lx\n", (unsigned long)elf_header.e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
print_error("Usage: elf_header elf_filename");
}
display_elf_header(argv[1]);
return (0);
}
