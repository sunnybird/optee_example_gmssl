#include "func.h"
#include <trace.h>

int fprintf(void *file, const char *fmt, ...)
{

  UNUSED(file);
  va_list arg;
  va_start(arg, fmt);
  trace_vprintf(__FUNCTION__, __LINE__, (TRACE_ERROR), true, fmt, arg);
  va_end(arg);
  return 0;
}

int vfprintf(void *file, const char *fmt, ...)
{
  UNUSED(file);
  va_list arg;
  va_start(arg, fmt);
  trace_vprintf(__FUNCTION__, __LINE__, (TRACE_ERROR), true, fmt, arg);
  va_end(arg);
  return 0;
}

void __assert_fail(const char *__assertion, const char *__file,
                   unsigned int __line, const char *__function)
{
  DMSG("[%s]-[$%s]-[%d]-[%s]", __assertion, __file, __line, __function);
}