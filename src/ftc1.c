﻿#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <malloc.h>

#pragma warning(disable : 4996) 

unsigned long choose_form(long long*, unsigned long);

short args_solve(int argc, char** argv, long long* from, long long* to) {

    if (argc <= 1) return -1;
    if (argc > 3) return -2;
    if (argc > 2 && strchr(argv[1], '=') == NULL && strchr(argv[2], '=') == NULL) return -4;
    char* temp3, * temp4;
    unsigned long opt_len;
    if (strchr(argv[1], '=') != NULL) {

        opt_len = strlen(argv[1]) - strlen(strchr(argv[1], '=')) + 1;
        if (opt_len < strlen(argv[1])) {

            temp3 = malloc(sizeof(char) * opt_len);
            strncpy(temp3, argv[1], opt_len);
            temp3[opt_len] = '\0';
            char* buf_string;
            long long buf_int = 0;
            buf_string = malloc(sizeof(char) * strlen(argv[1]) - opt_len);
            buf_string = strchr(argv[1], '=') + 1;
            if ((buf_string[0] >= 49 && buf_string[0] <= 57) || buf_string[0] == '-')
                buf_int = strtoll(buf_string, &buf_string, 10);
            if (!strcmp(temp3, "--from=<>")) {

                if (strlen(buf_string) == 0) *from = buf_int; else *from = 0;
            }
            else if (!strcmp(temp3, "--to<>")) {

                if (strlen(buf_string) == 0) *to = buf_int; else *to = 0;
            }
        }
        else {

            if (strcmp(argv[1], "--from=<>") == 0) *from = 0;
            if (strcmp(argv[1], "--to=<>") == 0) *to = 0;
        }
    }
    if (argc < 3 || strchr(argv[2], '=') == NULL) return 0;
    opt_len = strlen(argv[2]) - strlen(strchr(argv[2], '=')) + 1;
    if (opt_len < strlen(argv[2])) {

        temp4 = malloc(sizeof(char) * opt_len);
        strncpy(temp4, argv[2], opt_len);
        temp4[opt_len] = '\0'; \
            char* buf_string;
        long long buf_int;
        buf_string = malloc(sizeof(char) * (strlen(argv[2]) - opt_len));
        buf_string = strchr(argv[2], '=') + 1;
        if ((buf_string[0] >= 49 && buf_string[0] <= 57) || buf_string[0] == '-')
            buf_int = strtoll(buf_string, &buf_string, 10);
        if (!strcmp(temp4, "--from=<>")) {

            if (strlen(buf_string) == 0) *from = buf_int; else *from = 0;
        }
        else if (!strcmp(temp4, "--to=<>")) {

            if (strlen(buf_string) == 0) *to = buf_int; else *to = 0;
        }
    }
    else {

        if (strcmp(argv[2], "--from=<>") == 0) *from = 0;
        if (strcmp(argv[2], "--to=<>") == 0) *to = 0;
    }
    if (*from == LLONG_MIN && *to == LLONG_MAX) return -4;
    if (!strcmp(temp3, temp4)) return -3;
    return 0;
}
int main(int argc, char** argv) {

    long long sort_from = LLONG_MIN, sort_to = LLONG_MAX;
    int error_value = args_solve(argc, argv, &sort_from, &sort_to);
    if (error_value) return error_value;
    long long* array = malloc(sizeof(long long) * 100);
    char divider = ' ';
    unsigned long elems_count = 0;
    while (divider == ' ') {

        scanf("%lld%c", &array[elems_count], &divider);
        elems_count++;
    }
    unsigned long counter = 0;
    for (unsigned long i = 0; i < elems_count; i++) {

        if (array[i] > sort_from && array[i] < sort_to) counter++;
    }
    long long* array_reduced = malloc(sizeof(long long) * counter);
    counter = 0;
    for (unsigned long i = 0; i < elems_count; i++) {

        if (array[i] > sort_from && array[i] < sort_to) {

            array_reduced[counter] = array[i];
            counter++;
        }
        else {

            if (array[i] <= sort_from) fprintf(stdout, "%lld ", array[i]);
            if (array[i] >= sort_to) fprintf(stderr, "%lld ", array[i]);
        }
    }
    unsigned long swapped_count = 0;
    if (counter > 0) swapped_count = choose_form(array_reduced, counter);
    free(array);
    free(array_reduced);
    return swapped_count;
}