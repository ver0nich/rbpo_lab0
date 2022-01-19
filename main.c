#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"


int main(int argc, char* argv[]) {
    struct Person *a = NULL;
    a = malloc(sizeof(ParseCmdLine(argc, argv)));
    a = ParseCmdLine(argc, argv);
    Sort(a, 3, Asc);

    int count = 0;
    int i = 1;
    for (i = 1; i < argc; i++) {
        if (CompareStrings(argv[i], "-person") == 0) {
            count++;
        }
    }

    Funks(a, count);

    getchar();
    return 0;
}

