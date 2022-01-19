#include "task4.h"
#include "task3.h"
//#include "task1.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Person* ParseCmdLine(int argc, char * argv[]) {
    struct Person defaultPerson;
    defaultPerson.firstName = "None";
    defaultPerson.middleName = "None";
    defaultPerson.lastName = "None";
    defaultPerson.age = 0;
    struct Person* a = 0;

    size_t count = 0;
    int i = 1;
    for (i = 1; i < argc; i++) {
        if (CompareStrings(argv[i], "-person")==0) {
            count++;
        }
    }
    a = malloc(count * sizeof (struct Person));

    for (i = 0; i < count; i++) {
        a[i] = defaultPerson;
    }
    int iter = 0;
    int j = 1;
    for (j = 1; j < argc; j++) {
        if (CompareStrings(argv[j], "-person")==0) {
            iter += 1;
        } else {
            if (CompareStrings(argv[j], "--fn")==0) {
                j++;
                a[(iter) - 1].firstName = argv[j];
            } else {
                if (CompareStrings(argv[j], "--mn")==0) {
                    j++;
                    a[(iter) - 1].middleName = argv[j];
                } else {
                    if (!CompareStrings(argv[j], "--ln")) {
                        j++;
                        a[(iter) - 1].lastName = argv[j];
                    } else {
                        if (CompareStrings(argv[j], "--age")==0) {
                            j++;
                            a[(iter) - 1].age = atoi(argv[j]);
                        } else {
                            puts("Неверный аргумент");
                            exit(-1);
                        };
                    };
                };
            };
        };
    };
    return a;
}
