global-incdirs-y += include
global-incdirs-y += test
incdirs_ext-y += $(GMSSL_DIR)/include
# Adds the static library foo to the list of the linker directive -lfoo.
libdirs += $(GMSSL_DIR)/lib
libnames += gmssl

srcs-y += gmssl_ta.c

# all_test_c_source = $(wildcard test/*.c)
all_test_c_source = test/test.c \
					test/func.c \
					test/sm3test.c  \
					test/base64test.c \
					test/aestest.c 


srcs-y += $(all_test_c_source)

# $(info "global-incdirs-y: $(global-incdirs-y)")
# To remove a certain compiler flag, add a line like this
#cflags-template_ta.c-y += -Wno-strict-prototypes

cflags-y += -Wno-missing-prototypes \
			-Wno-unused-variable \
			-Wno-error=implicit-function-declaration \
			-Wno-implicit-function-declaration \
			-Wno-sign-compare 


$(info "global-incdirs-y: $(global-incdirs-y)")
$(info "srcs-y: $(srcs-y)")
$(info "cflags-y: $(cflags-y)")