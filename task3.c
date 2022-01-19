#include "task3.h"
//#include "task2.h"
#include "task1.h"
#include <stdlib.h>


void Sort(struct Person *persons, int count, enum SortType sortType){
    //struct Person temp;
    int i = 0;
    int j = 0;
    for (i = 0; i < count - 1; i++)
    {
        for (j = (count - 1); j > i; j--) {
            if (sortType == Asc) {
                if (CompareStrings(persons[j - 1].lastName,persons[j].lastName)==-1)
                {
                    struct Person temp = persons[j - 1];
                    persons[j - 1] = persons[j];
                    persons[j] = temp;
                    continue;
                }
                if (CompareStrings(persons[j - 1].lastName, persons[j].lastName) == 0)
                if (CompareStrings(persons[j - 1].firstName, persons[j].firstName) == -1)
                {
                    struct Person temp = persons[j - 1];
                    persons[j - 1] = persons[j];
                    persons[j] = temp;
                    continue;
                }
                if (CompareStrings(persons[j - 1].firstName, persons[j].firstName) == 0)
                if (CompareStrings(persons[j - 1].middleName, persons[j].middleName) == -1)
                {
                    struct Person temp = persons[j - 1];
                    persons[j - 1] = persons[j];
                    persons[j] = temp;
                    continue;
                }
                if (CompareStrings(persons[j - 1].middleName, persons[j].middleName) == 0)
                if (CompareStrings(persons[j - 1].age, persons[j].age) == -1)
                {
                    struct Person temp = persons[j - 1];
                    persons[j - 1] = persons[j];
                    persons[j] = temp;
                    continue;
                }
            }
            if (sortType == Desc) {
                if (CompareStrings(persons[j - 1].lastName, persons[j].lastName) == 1)
                {
                    struct Person temp = persons[j - 1];
                    persons[j - 1] = persons[j];
                    persons[j] = temp;
                    continue;
                }
                if (CompareStrings(persons[j - 1].firstName, persons[j].firstName) == 1)
                {
                    struct Person temp = persons[j - 1];
                    persons[j - 1] = persons[j];
                    persons[j] = temp;
                    continue;
                }
                if (CompareStrings(persons[j - 1].middleName, persons[j].middleName) == 1)
                {
                    struct Person temp = persons[j - 1];
                    persons[j - 1] = persons[j];
                    persons[j] = temp;
                    continue;
                }
                if (CompareStrings(atoi(persons[j - 1].age), atoi(persons[j].age)) == 1)
                {
                    struct Person temp = persons[j - 1];
                    persons[j - 1] = persons[j];
                    persons[j] = temp;
                    continue;
                }
            }
        }
    }
    
}
