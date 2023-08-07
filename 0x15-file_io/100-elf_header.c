#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// Définition des constantes pour les codes de sortie
#define ERROR_EXIT_CODE 98

// Fonction pour afficher un message d'erreur et quitter
void exitWithError(const char *message) {
    perror(message);
    exit(ERROR_EXIT_CODE);
}

// ... (les autres fonctions restent inchangées) ...

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <elf_file>\n", argv[0]);
        return ERROR_EXIT_CODE;
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        exitWithError("Error: Can't read file");
    }

    Elf64_Ehdr header;
    ssize_t bytesRead = read(fd, &header, sizeof(Elf64_Ehdr));
    if (bytesRead != sizeof(Elf64_Ehdr)) {
        close(fd);
        if (bytesRead == -1) {
            exitWithError("Error reading file");
        } else {
            fprintf(stderr, "Error: Incomplete header read\n");
            return ERROR_EXIT_CODE;
        }
    }

    // ... (le reste du code reste inchangé) ...
    
    close(fd);
    return 0;
}

