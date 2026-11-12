#include <stdio.h>

void main(void) {
    int i = 300; //300으로 변경해서도 해보기

    int *pi = &i;
    char *pc = (char *)&i;

    printf("%i, %i, %i\n", i, *pi, *pc);
}