#ifndef NVIM_STRINGS_H
#define NVIM_STRINGS_H

#include <stdbool.h>
#include <stdlib.h>
#include "nvim/ascii.h"

/// Test a char pointer to see if it is empty
///
/// @param ptr Pointer to be tested
/// @returns bool true if NULL or NUL, false if not
static inline bool is_empty(const char *ptr)
  FUNC_ATTR_ALWAYS_INLINE 
{
  return (ptr == NULL || *ptr == NUL) ? true : false;
}

#ifdef INCLUDE_GENERATED_DECLARATIONS
# include "strings.h.generated.h"
#endif
#endif  // NVIM_STRINGS_H
