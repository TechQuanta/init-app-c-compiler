#include <stdio.h>
#include "core/engine.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <config_file>\n", argv[0]);
        return 1;
    }

    return run_engine(argv[1]);
}