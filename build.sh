rm obj_dir -rf
verilator --cc src/test.sv --exe src/main.cpp --compiler clang -O3 -LDFLAGS "--shell-file ../src/index.html" -CFLAGS "--shell-file ../src/index.html"
make -C obj_dir -f Vtest.mk Vtest CXX=emcc LINK=emcc
cp obj_dir/Vtest.wasm docs/Vtest.wasm
cp obj_dir/Vtest docs/Vtest.js

# CPPFLAGS += $(USER_CPPFLAGS)
# LDFLAGS  += $(USER_LDFLAGS)