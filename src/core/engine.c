#include <stdio.h>
#include "../config/config.h"
#include "../env/env_check.h"
#include "../scanner/scanner.h"
#include "../generator/generator.h"

int run_engine(const char *config_path) {
    printf("Starting engine...\n");

    Config config;

    if (load_config(config_path, &config) != 0) {
        printf("Failed to load config\n");
        return 1;
    }

    printf("Project: %s\n", config.project_name);

    if (check_python() != 0) {
        printf("Python not found!\n");
    } else {
        printf("Python detected.\n");
    }

    printf("Scanning current directory...\n");
    scan_directory(".");

    printf("Generating file...\n");
    generate_file("output.txt", "Hello from C compiler\n");

    printf("Done.\n");
    return 0;
}