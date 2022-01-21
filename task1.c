#include "task1.h"
#include <string.h>

int CompareStrings(const char *lhs, const char *rhs){
    if (strcmp(lhs,rhs) == 0)
        return 0;
    else if (strcmp(lhs,rhs) == 4294967295) // b < c
        return -1;
    else
        return 1;
    return 0;
}
