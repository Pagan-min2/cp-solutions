#include <stdio.h>

int main()
{
    int n,counter = 0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int op1,op2,op3;
        scanf("%d", &op1);
        scanf("%d", &op2);
        scanf("%d", &op3);
        if ((op1 == 1 && op2 == 1) || (op2 == 1 && op3 == 1) || (op1 == 1 && op3 == 1))
        {
            counter++;
        }
    }
    printf("%d",counter);
}