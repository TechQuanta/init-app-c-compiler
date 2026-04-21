#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include "scanner.h"

void scan_directory(const char *path) {
    struct dirent *entry;
    DIR *dir = opendir(path);

    if (!dir) {
        perror("Directory open error");
        return;
    }

    while ((entry = readdir(dir)) != NULL) {
        if (strcmp(entry->d_name, ".") == 0 ||
            strcmp(entry->d_name, "..") == 0)
            continue;

        printf("Found: %s/%s\n", path, entry->d_name);
    }

    closedir(dir);
}