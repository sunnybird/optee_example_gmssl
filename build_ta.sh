export V=0

BUILD_DIR=$(pwd)/build-out-ta
rm -rf $BUILD_DIR
mkdir -p $BUILD_DIR

AARCH64_GCC_PATH=/data2/workspace/optee/toolchains/aarch64/bin
PATH=$AARCH64_GCC_PATH:${PATH}

CROSS_COMPILE=aarch64-linux-gnu-
TA_DEV_KIT_DIR=$(pwd)/prebuilt/optee-os/export-ta_arm64

TA_CROSS_COMPILE=${CROSS_COMPILE}

MAKE_PARAMS="CROSS_COMPILE=${TA_CROSS_COMPILE} TA_DEV_KIT_DIR=${TA_DEV_KIT_DIR} LDFLAGS="" "

MAKE_PARAMS+="GMSSL_DIR=$(pwd)/prebuilt/gmssl "

MAKE_PARAMS+="O=${BUILD_DIR} "

make -C ta clean ${MAKE_PARAMS}
make -C ta ${MAKE_PARAMS}
