#include <stdio.h>
#include <string.h>
#include "config.h"

int load_config(const char *path, Config *config) {
    FILE *f = fopen(path, "r");

    if (!f) {
        perror("Config open error");
        return 1;
    }

    char line[256];

    while (fgets(line, sizeof(line), f)) {
        if (strncmp(line, "project_name=", 13) == 0) {
            sscanf(line, "project_name=%s", config->project_name);
        }
    }

    fclose(f);
    return 0;
}