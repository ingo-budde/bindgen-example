fn main() {

    // Generate bindings with bindgen
    {
        let bindings = bindgen::Builder::default()
            .header("extern/header.h")
            .parse_callbacks(Box::new(bindgen::CargoCallbacks::new()))
            .generate()
            .expect("Unable to generate bindings");

        let out_path = std::path::PathBuf::from(std::env::var("OUT_DIR").unwrap());
        bindings
            .write_to_file(out_path.join("bindings.rs"))
            .expect("Couldn't write bindings!");
        
        println!("cargo:rerun-if-changed=extern/header.h");
    }

    // Also link the C file that defines the global variable
    // (Only necessary if you actually use the global variable)
    cc::Build::new()
        .file("extern/definition.c")   // your C file
        .compile("code");        // library name: libvalue.a or value.lib
    println!("cargo:rerun-if-changed=extern/definition.c");
}