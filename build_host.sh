BUILD_DIR=build-out-host
rm -rf $BUILD_DIR
mkdir -p $BUILD_DIR

source gcc.sh

cmake \
    -DCMAKE_TOOLCHAIN_FILE=./gcc.toolchain.cmake \
    -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE \
    -DCMAKE_BUILD_TYPE:STRING=Debug \
    -DCMAKE_INSTALL_PREFIX=$(pwd)/$BUILD_DIR/out-br \
    -DBUILD_SHARED_LIBS=OFF \
    -DTEEC_EXPORT=$(pwd)/prebuilt/optee-client \
    -S$(pwd) \
    -B$(pwd)/$BUILD_DIR \
    -G Ninja

ninja -C $BUILD_DIR install
