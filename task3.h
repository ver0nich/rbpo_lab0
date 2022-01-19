#ifndef Task3_h
#define Task3_h
#include <stdio.h>
#include "task1.h"
#include "task2.h"
enum SortType { Asc, Desc };
void Sort(struct Person *persons, int count, enum SortType sortType);

#endif /* Task3_h */
