#include <stdio.h>

int main()
{
    int n;
    printf("enter a natural number: ");
    scanf("%d", &n);

    int sum = 0, lastDigit = 0;

    while(n!=0){
        lastDigit = n%10;
        n = n/10;
        if(lastDigit%2 == 0){
            sum = sum + lastDigit;
        }
    }
    printf("%d", sum);
    return 0;
}