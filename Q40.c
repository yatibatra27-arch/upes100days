#include <stdio.h>

int main()
{
    long long n, temp, digit;
    long long complement = 0, place = 1;

    scanf("%lld", &n);

    temp = n;

    while(temp != 0)
    {
        digit = temp % 10;

        if(digit == 0)
            digit = 1;
        else
            digit = 0;

        complement = complement + digit * place;
        place = place * 10;
        temp = temp / 10;
    }

    printf("1's Complement = %lld\n", complement);

    return 0;
}
