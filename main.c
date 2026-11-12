#include <stdio.h>

int main(void)
{
    int i;
    int grade[5];
    
    for (i=0;i<5;i++)
    {
        printf("grade[%i] = ", i);
        scanf("%d", &grade[i]);
    }

    for (i=0;i<5;i++)
    {
        printf("grade[%i] = %d\n", i, *(grade + i));
    }
    printf("average: %d\n", (*grade + *(grade + 1) + *(grade + 2) + *(grade + 3) + *(grade + 4)) / 5);

    return 0;
}