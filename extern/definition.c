// We need this file `definition.c`, to not get a linker error for the GLOBAL_VARIABLE declared in `header.h`
#include "header.h"

int __force_to_compile_this_file() {
    return 0;
}