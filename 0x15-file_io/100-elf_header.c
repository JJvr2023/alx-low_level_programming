#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ELF_MAGIC 0x7f454c46

int main(int argc, char *argv[]) {
    FILE *fp;
    unsigned char magic[4];

    if (argc != 2) {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        exit(1);
    }

    fp = fopen(argv[1], "rb");
    if (fp == NULL) {
        perror("fopen");
        exit(1);
    }

    if (fread(magic, 1, 4, fp) != 4) {
        perror("fread");
        exit(1);
    }

    if (magic[0] != 0x7f) {
        fprintf(stderr, "Not an ELF file\n");
        exit(98);
    }

    printf("Magic: %02x%02x%02x%02x\n", magic[0], magic[1], magic[2], magic[3]);
    printf("Class: %d\n", magic[1]);
    printf("Data: %d\n", magic[2]);
    printf("Version: %d\n", magic[3]);
    printf("OS/ABI: %02x%02x\n", magic[4], magic[5]);
    printf("ABI Version: %02x\n", magic[6]);
    printf("Type: %02x\n", magic[7]);
    printf("Entry point: %08x\n", *(unsigned int *)(&magic[8]));

    fclose(fp);
    return 0;
}
