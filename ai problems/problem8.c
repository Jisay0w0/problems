#include <stdio.h>
// make a simple atm console

int main()
{

    int balance = 1000;
    int input;
    int n;

    do
    {
        printf("===== ATM =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Choose an option: ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            printf("Balance = %d\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%d", &n);
            balance += n;
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%d", &n);
            balance -= n;
            break;

        default:
            printf("Invalid input!\n");
        }

    } while (input != 4);
}