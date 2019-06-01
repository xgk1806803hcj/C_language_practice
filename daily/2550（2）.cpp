#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int len;
    int num;
}arrow;
int main(void)
{
    arrow a[1000], temp;
    int t, n, i, j, k;
    while (scanf("%d", &t) != EOF)
    {
        while (t-- > 0)
        {
            scanf("%d", &n);
            for (i = 0; i < n; i++)
                scanf("%d%d", &a[i].len, &a[i].num);
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n - 1; j++)
                {
                    if (a[j].len > a[j + 1].len)
                    {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                }
            }
            for (i = 0; i < n; i++)
            {
                for (k = 0; k < a[i].num; k++)
                {
                    printf(">+");
                    for (j = 0; j < a[i].len - 2; j++)
                        printf("-");
                    printf("+>\n");
                }
                printf("\n");
            }
        }
    }
    return 0;
}
