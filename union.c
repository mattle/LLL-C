#include <stdio.h>

union vault
{
    float cash;
    float gold;
    float jewelry;
};

int main()
{
    union vault myVault;
    myVault.cash = 3.14;
    myVault.gold = 1.23; // overwrites myVault.cash
    printf("%f\n",myVault.cash); // 1.23
}