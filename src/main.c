#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE_OF_SORT 100
#define FIRST_ARGUMENT 7
#define SECOND_ARGUMENT 5

void buble_sort(long long input_sort[], int input_count);

int input(long long sorted[MAX_SIZE_OF_SORT], long long not_sorted[MAX_SIZE_OF_SORT], int count, int to_count, long long value, long long to_value){
 char ch;
 long long ll;
 int numbers_for_sorting = 0;
 for(int i = 0; i < MAX_SIZE_OF_SORT; i++){
        if(scanf("%lld%c", &ll, &ch));
        if ((count == 1 && ll <= value) || (to_count == 1 && ll >= to_value)) {
            if (count == 1 && ll <= value) 
                fprintf(stdout,"%lld ", ll);
            if (to_count == 1 && ll >= to_value) 
                fprintf(stderr,"%lld ", ll);
        }
        else {
            sorted[numbers_for_sorting] = ll;
            not_sorted[numbers_for_sorting] = ll;
            numbers_for_sorting++;
        }
        if (ch != ' ') break;
    }
    return numbers_for_sorting;
}
 

int main(char** argv, int argc){
    char *end = NULL;
    long long value = 0, to_value = 0;
    int count = 0, to_count = 0;
    if(argc < 2) return -1;
    if(argc > 3) return -2;
    for (int i = 1; i < argc; i++) {
        if(strncmp(argv[i], "--from=", FIRST_ARGUMENT) == 0){
            value = strtol(argv[i] + FIRST_ARGUMENT, &end, 10);
            count = 1;
        }
        if(strncmp(argv[i], "--to=", SECOND_ARGUMENT) == 0){
            to_value = strtol(argv[i] + SECOND_ARGUMENT, &end, 10);
            to_count = 1;
        }
        end = NULL;
    }
    if (to_count == 0 && count == 0 && argc == 3) return -4;
    if ((argc == 3 && !strncmp(argv[1], argv[2], SECOND_ARGUMENT)) || (to_value == value && (to_count == 1 && value == 1))) return -3;
 
 return 0;
}