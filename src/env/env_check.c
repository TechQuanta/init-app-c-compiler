#include <stdlib.h>

int check_python() {
#ifdef _WIN32
    return system("python --version >nul 2>&1");
#else
    return system("python3 --version >/dev/null 2>&1");
#endif
}