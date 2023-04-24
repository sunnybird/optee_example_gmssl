#include "calc.h"

#include "calc_add.h"
#include "calc_sub.h"

uint32_t add(uint32_t a, uint32_t b) { return calc_add(a, b); }
uint32_t sub(uint32_t a, uint32_t b) { return calc_sub(a, b); }