#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1, num2, i, j, flag, temp,t, count = 0;

    scanf("%d %d", &num1, &num2);
    temp = num1;
    if ( num1 % 2 == 0)
    {
        num1++;
    }
    for (i = num1; i <= num2; i = i + 2)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if ((i % j) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            //t=i;
            count++;
        }
    }
    printf("%d\n",count);

}
