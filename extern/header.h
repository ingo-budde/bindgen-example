#ifndef HEADER_H
#define HEADER_H

#define CONST_DEFINE_INT 42
#define CONST_DEFINE_FLOAT 3.14f

enum MyEnum {
    ENUM_VALUE_ONE = 1,
    ENUM_VALUE_TWO = 2,
    ENUM_VALUE_THREE = 3,
};

// This does not work without `static`
// const int GLOBAL_VARIABLE = 4;
static const int GLOBAL_VARIABLE = 4;

int __force_to_compile_this_file2();

#endif
