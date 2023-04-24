export V=1

BUILD_DIR=$(pwd)/build-out-ta-lib
rm -rf $BUILD_DIR
mkdir -p $BUILD_DIR

source gcc.sh

CROSS_COMPILE=aarch64-linux-gnu-
TA_DEV_KIT_DIR=$(pwd)/prebuilt/optee-os/export-ta_arm64

TA_CROSS_COMPILE=${CROSS_COMPILE}

MAKE_PARAMS="CROSS_COMPILE=${TA_CROSS_COMPILE} TA_DEV_KIT_DIR=${TA_DEV_KIT_DIR} LDFLAGS="" "

MAKE_PARAMS+="O=${BUILD_DIR} "

make -C ta_lib clean ${MAKE_PARAMS}
make -C ta_lib ${MAKE_PARAMS}
