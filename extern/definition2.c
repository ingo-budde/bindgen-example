// Another exemplary C-file to make sure that we do not have linker errors regarding duplicate definitions
#include "header.h"

int __force_to_compile_this_file();

int __force_to_compile_this_file2() { 
    return __force_to_compile_this_file();
}