#include "main.h"

#define EI_NIDENT 16

/* ELF header structure */
typedef struct
{
unsigned char e_ident[EI_NIDENT];
uint16_t e_type;
uint16_t e_machine;
uint32_t e_version;
uint64_t e_entry;
uint64_t e_phoff;
uint64_t e_shoff;
uint32_t e_flags;
uint16_t e_ehsize;
uint16_t e_phentsize;
uint16_t e_phnum;
uint16_t e_shentsize;
uint16_t e_shnum;
uint16_t e_shstrndx;
} Elf64_Ehdr;

/**
 * error_exit - Prints an error message and exits the program
 * @msg: The error message to print
 * @code: The exit code
 */
void error_exit(const char *msg, int code)
{
dprintf(STDERR_FILENO, "%s\n", msg);
exit(code);
}

/**
 * print_elf_header - Prints the information contained in the ELF header
 * @header: Pointer to the ELF header structure
 */
void print_elf_header(const Elf64_Ehdr *header)
{
int i;
printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");
printf("  Class:                             ");
switch (header->e_ident[4])
{
case 1:
printf("ELF32\n");
break;
case 2:
printf("ELF64\n");
break;
default:
printf("<unknown>\n");
break;
}
printf("  Data:                              ");
switch (header->e_ident[5])
{
case 1:
printf("2's complement, little endian\n");
break;
case 2:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown>\n");
break;
}
printf("  Version:                           %d (current)\n", header->e_ident[6]);
printf("  OS/ABI:                            ");
switch (header->e_ident[7])
{
case 0:
printf("UNIX - System V\n");
break;
case 1:
printf("HP-UX\n");
break;
case 2:
printf("NetBSD\n");
break;
case 3:
printf("Linux\n");
break;
case 4:
printf("GNU Hurd\n");
break;
case 5:
printf("Solaris\n");
break;
case 6:
printf("AIX\n");
break;
case 7:
printf("IRIX\n");
break;
case 8:
printf("FreeBSD\n");
break;
case 9:
printf("Tru64\n");
break;
case 10:
printf("Novell Modesto\n");
break;
case 11:
printf("OpenBSD\n");
break;
case 12:
printf("OpenVMS\n");
break;
case 13:
printf("NonStop Kernel\n");
break;
case 14:
printf("AROS\n");
break;
case 15:
printf("Fenix OS\n");
break;
default:
printf("<unknown>\n");
break;
}
printf("  ABI Version:                       %d\n", header->e_ident[8]);
printf("  Type:                              ");
switch (header->e_type)
{
case 0:
printf("NONE (No file type)\n");
break;
case 1:
printf("REL (Relocatable file)\n");
break;
case 2:
printf("EXEC (Executable file)\n");
break;
case 3:
printf("DYN (Shared object file)\n");
break;
case 4:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown>\n");
break;
}
printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
error_exit("Usage: elf_header elf_filename", 98);

fd = open(argv[1], O_RDONLY);
if (fd == -1)
error_exit("Error: Cannot open file", 98);

if (read(fd, &header, sizeof(header)) != sizeof(header))
error_exit("Error: Cannot read ELF header", 98);

if (header.e_ident[0] != 0x7f || header.e_ident[1] != 'E' || header.e_ident[2] != 'L' || header.e_ident[3] != 'F')
error_exit("Error: Not an ELF file", 98);

print_elf_header(&header);

if (close(fd) == -1)
error_exit("Error: Cannot close file", 100);

return (0);
}

