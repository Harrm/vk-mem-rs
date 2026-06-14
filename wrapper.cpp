#define VMA_IMPLEMENTATION

#ifdef VK_MEM_RS_ENABLE_DEBUG_LOG
#define VMA_DEBUG_LOG_FORMAT(format, ...)                                      \
  do {                                                                         \
    printf((format), __VA_ARGS__);                                             \
    printf("\n");                                                              \
  } while (false)
#endif

#include "vk_mem_alloc.h"
