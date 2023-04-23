#include "test.h"
#include <trace.h>

int run_all_test(void) {
   DMSG("%s" , __FUNCTION__);
   test_sm3();
   test_base64();
   test_aes();
   // test_aes_ctr();
   // test_aes_gcm();
}
