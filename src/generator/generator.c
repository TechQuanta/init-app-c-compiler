#include <stdio.h>

void generate_file(const char *filename, const char *content) {
    FILE *f = fopen(filename, "w");

    if (!f) {
        perror("File creation error");
        return;
    }

    fputs(content, f);
    fclose(f);
}