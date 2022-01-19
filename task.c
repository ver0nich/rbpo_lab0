//
//  task.c
//
//  Created by Вероника Зотовa on 01.10.2021.
//

#include "task.h"
#include "task2.h"
int CompareStrings(const char *lhs, const char *rhs){
    if (lhs==rhs)
        return 0;
    else if (lhs<rhs)
        return -1;
    else
        return 1;
}
