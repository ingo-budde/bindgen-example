# bindgen-example

This rust library demonstrates how to use bindgen to access constants from a C-Header.

In C there are multiple ways to define constants:
* **Preprocessor definitions:** These are supported by bindgen and can be used without unsafe in Rust as `CONSTANT_NAME`.
* **Enumeration constants**: These are supported by bindgen and can be accessed without unsafe in Rust as `EnumName_ConstantName`.
* **Constant global variables**: These are supported by bindgen, but require C code that initializes it (see `definition.c`) and need to be accessed using unsafe. Of course, we can wrap the unsafe into a helper function on the Rust side.
