/*
** EPITECH PROJECT, 2022
** 206neutrinos
** File description:
** compute operations
*/

#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include <math.h>
#include "../include/neutrinos.hpp"

using namespace std;

int help(void) {
    printf("USAGE\n    ./206neutrinos n a h sd\n\n");
    printf("DESCRIPTION\n    n    number of values");
    printf("\n    a    arithmetic mean");
    printf("\n    h    harmonic mean\n");
    return (0);
}

int arth(Val val)
{
    int res;
    int tmp = val.a;

    res = ((tmp * (val.n - 1.0)) + val.sd) / val.n;
    return (res);
}

int harm(Val val)
{
    int res = 0;

    res = val.n  / ((1.0 / res * (val.n - 1.0)) + (1.0 / val.sd));
    return (res);
}

int qudr(Val val)
{
    int res;
    int tmp = 0;

    res = sqrt((((pow(val.h, 2) + pow(tmp, 2)) * (val.n - 1.0)) + pow(val.sd, 2)) / val.n);
    return (res);
}

int cmp(Val val) {
    float x, res = arth(val);
    int values = val.n + 1;
    printf("Enter next value:    ");
    cin >> x;
    printf("    Number of values:    %d\n", values);
    printf("    Standard deviation:  %.2f\n", values);
    printf("    Arithmetic mean:     %.2f\n", res);
    printf("    Root mean square:    %.2f\n", values);
    printf("    Harmonic mean:       %.2f\n", values);
    cmp(val);
    return (0);
}

int main(int ac, char **av) {
    int x = 1;
    int y;

    if (ac == 2 && strcmp(av[1], "-h") == 0) {
        help();
    }
    else if (ac == 5) {
        for (; x <= 4; x++) {
            for (y = 0; y < strlen(av[x]); y++) {
                if (av[x][y] < '0' || av[x][y] > '9') {
                    cerr << "Enter -h for help" << endl;
                    return (84);
                }
            }
        }
        val.n = atof(av[1]);
        val.a = atof(av[2]);
        val.h = atof(av[3]);
        val.sd = atof(av[4]);
        cmp(val);
    }
    else {
        cerr << ("Enter -h for help") << endl;
        return (84);
    }
    return (0);
}
