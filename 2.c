#include <stdio.h>

int main() {
    int n, k, c, i;
    scanf("%d %d", &n, &k);

    //пробелы по дню недели
    for(c = 1; c < n; c++)
        {
            printf("    ");
        }

  
    for(c = 1; c <= k; c++)
        {
        printf("%4d", c);
        i = n + c - 1;

            if(i % 7 == 0 || c == k)
                {
                printf("\n");
                }
        }


    return 0;
}
