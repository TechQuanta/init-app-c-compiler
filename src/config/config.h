#ifndef CONFIG_H
#define CONFIG_H

typedef struct {
    char project_name[100];
} Config;

int load_config(const char *path, Config *config);

#endif