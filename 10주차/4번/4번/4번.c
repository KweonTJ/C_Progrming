#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int g_Balance = 0;

void deposit(int amount)
{
    g_Balance += amount;
    printf("balance: %d\n", g_Balance);
}

int withdraw(int amount)
{
    if (amount > g_Balance)
    {
        printf("Insufficient funds\n");
        return 0;
    }
    else
    {
        g_Balance -= amount;
        printf("balance: %d\n", g_Balance);
        return amount;
    }
}

int show_balance()
{
    printf("balance: %d\n", g_Balance);
    return g_Balance;
}

int main()
{
    bool done = false;
    while (!done)
    {
        char cmd;
        int money = 0;
        printf("input: ");

        scanf("%c %d%*c", &cmd, &money);

        switch (cmd)
        {
        case '+':
            deposit(money);
            break;
        case '-':
            withdraw(money);
            break;
        case '.':
            show_balance(); 
            done = true;
            break;
        default:
            printf("ERROR: %c\n", cmd);
            break;
        }
    }

    return 0;
}
