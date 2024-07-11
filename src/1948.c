#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int find_number (int a);
int main ()
{
    int number = 0;
    
if(scanf("%d", &number) != 1 || getchar() != '\n')
    {
        printf("n/a");
    }
    
    else 
    {
    number = abs(number);
    int temp = number;
    for (int j = number-1 ; j > 1; j--)
    {
        
        while (number > 0)
        {
            number -= j;
        }
        if (number == 0 && find_number(j) == 5)
        {
            printf("%d", j);
            return 0;
        }
        number = temp;



    }
    }
return 0;
}

int find_number (int a)
{
    int count = 0;
    int temp_1 = a;
    for (int i = 2; i <= a; i++)
    {
        while(a > 0)
        {
            a -= i;
        
        if (a == 0)
        {
            count += 1; 
        }
        }
        a = temp_1;
    }
    if (count == 1)
    {
        return 5;
    }
    return 1;
}
