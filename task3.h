#ifndef Task3_h
#define Task3_h
#include <stdio.h>
#endif /* Task3_h */
#include "Task2.h"

enum SortType { Asc, Desc };
void Sort(struct Person *persons, int count, enum SortType sortType);
