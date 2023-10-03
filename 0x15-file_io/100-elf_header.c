#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

void print_elf_header(Elf64_Ehdr *header) {
   int i = 0;
       	printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf(" %02x", header->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : (header->e_type == ET_DYN ? "DYN (Shared object file)" : "REL (Relocatable file)"));
    printf("  Entry point address:               %lx\n", (unsigned long) header->e_entry);
}

int main(int argc, char *argv[]) {
int fd = open(argv[1], O_RDONLY);
 Elf64_Ehdr header;
	if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
   }
    if (fd == -1) {
        fprintf(stderr, "Error: Cannot open file %s\n", argv[1]);
        exit(98);
    }
    if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        fprintf(stderr, "Error: Cannot read ELF header from file %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    if (lseek(fd, 0, SEEK_SET) == -1) {
        fprintf(stderr, "Error: Cannot reset file pointer\n");
        close(fd);
        exit(98);
    }

    print_elf_header(&header);

    close(fd);
    return 0;
}

