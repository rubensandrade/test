/*
    This program:
        -Asks how many numbers you want to add
        -Lets you input the numbers and print out the total sum
*/

#include <stdio.h>
 
int main()
{
    int n, c, value;

    printf("How many numbers you want to add?\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (c = 1; c < n; c++)
    {
    int sum = 0;
    scanf("%d", &value);
    sum = sum + value;
    }

    printf("Sum of the integers = %d\n", sum);

    return 0;
}