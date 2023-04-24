global-incdirs-y += include
global-incdirs-y += public

# Adds the static library foo to the list of the linker directive -lfoo.

srcs-y += src/calc.c

# all_test_c_source = $(wildcard test/*.c)
all_calc_sub_source = src/calc_add.c \
					  src/calc_sub.c


srcs-y += $(all_calc_sub_source)

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