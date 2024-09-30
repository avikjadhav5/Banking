#include <stdio.h>
int main() 
{
    int a, ad = 1234, b, p, dep, bal = 10000;
    char c;
    printf("Enter the pin");
    scanf("%d", &a);
    if(ad == a){
    do
    {
    

        printf("Welcome to the bank\n");
        printf("Which service would you like to avail?\n");
        printf("1. Check balance, 2. Withdraw cash, 3. Deposit cash, 4. Quit,");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
        printf("Your balance is %d", bal);
            break;
        case 2:
        printf("Enter the amount that you would like to withdraw\n");
        scanf("%d", &p);
        if (p > bal)
        {
            printf("Insufficient balance");
        }
        else{
            bal = bal - p;
            printf("Kindly collect your cash");
            printf("Your balance is: %d ", bal);
        }
            break;
        case 3:
        printf("Enter the amount you want to deposit");
        scanf("%d", &dep);
        bal = bal + dep;
        printf("Money added!!! Your new balance is: %d", bal);
            break;

        default:
            break;
        }
        printf("Do you wish to continue?(y/n)");
        scanf(" %c", &c);

    } while(c == "y" || c == "Y");


    }
    
    else{
    printf("Enter correct pin");
    }
    return 0;
}