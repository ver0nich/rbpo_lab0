#ifndef Task2_h
#define Task2_h
#include <stdio.h>

struct Person
{
    char *lastName;
    char *firstName;
    char *middleName;
    unsigned int age;
};
#endif /* Task2_h */
int Compare(struct Person person1, struct Person person2);
