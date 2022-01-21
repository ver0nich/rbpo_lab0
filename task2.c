#include "task2.h"
#include "task1.h"

int Compare(struct Person person1, struct Person person2){
    if (CompareStrings(person1.lastName, person2.lastName)==0){
        if (CompareStrings(person1.firstName, person2.firstName)==0){
            if (CompareStrings(person1.middleName, person2.middleName)==0){
                if (person1.age==person2.age){
                    return 0;
                }
                else if (person1.age<person2.age)
                    return -1;
                else
                    return 1;
            }
            else
                return CompareStrings(person1.middleName, person2.middleName);
        }
        else
            return CompareStrings(person1.firstName, person2.firstName);
    }
    else
        return CompareStrings(person1.lastName, person2.lastName);
};
