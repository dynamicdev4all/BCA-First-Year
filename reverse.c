#include <stdio.h>

int main()
{

    int num = 12345678;
    int result = 0;

    while (num!=0)
    {
        int rem = num % 10; // 7 6 5 4
        result = result*10 + rem;
        num = num /10;
        /* code */
    }
    

    // int result = num % 10 * 100 + ((num / 10) % 10) * 10 + ((num/10) /10) *1;

    printf("%d", result);

    return 0;
}