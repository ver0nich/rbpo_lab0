#include <stdio.h>
#include "task5.h"
#include "task2.h"

void Table(struct Person persons[], size_t size){
    int i = 0;
    for (i = 0; i < size; i++){
        printf("%s ", persons[i].firstName);
        printf("%s ", persons[i].middleName);
        printf("%s, ", persons[i].lastName);
        printf("%u \n", persons[i].age);
    }
}
