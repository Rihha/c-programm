#include<stdio.h>
int main(){
    int balance = 0;
    int pin = 2005;
    int anotherTransaction = 1; //do another transaction, 2 don't do another transaction
    int language;
    int amountWithdraw;

    printf("PLEASE ENTER YOUR PIN: ");
    scanf("%d", &pin);
    if(pin != 2005){
        printf("Invalid pin."); 

        return 0;
    }
    while(anotherTransaction == 1)
    {
	
        int option;
        printf("*********************WELCOME TO MY ATM SERVICES*************************\n");
        printf("******************KINDLY CHOOSE AN OPTION******************** \n");
        printf("1. CHECK BALANCE \n");
        printf("2. DEPOSIT \n");
        printf("3. WITHDRAWAL \n");
        scanf("%d", &option);

        if(option == 1) //check balance
        {
            printf("YOUR BALANCE IS #%d\n", balance);
        }
        else if(option == 2) //deposit
        {
            int amountDeposit;
            printf("HOW MUCH DO YOU WANT TO DEPOSIT: #");
            scanf("%d", &amountDeposit);
            if(amountDeposit > 0)
            {
            	balance += amountDeposit;
			}
			else
			{
				printf("INVALID AMOUNT DEPOSITED\n");
			}
        }
        else if(option == 3) //withdraw
        {
            int amountWithdraw;
            printf("HOW MUCH DO YOU WANT TO WITHDRAW: $\n");
            scanf("%d", &amountWithdraw);
            balance -= amountWithdraw;
        }
        if( amountWithdraw > balance)
            {
            	printf("SORRY, YOU DO NOT HAVE SUFFICIENT BALANCE IN YOUR ACCOUNT");
			}
        else{
            printf("INVALID TRANSACTION!!!\n");
    }
    
        anotherTransaction = 0;
        while(anotherTransaction != 1 && anotherTransaction !=2)
		{
        printf("Do you want to do another transaction: \n");
        printf("1 - yes, 2 - no");
        scanf("%d", &anotherTransaction);
        }
    }
        return 0;
    }
