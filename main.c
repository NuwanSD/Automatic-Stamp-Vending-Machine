#include <stdio.h>
#include <stdlib.h>


int main()
{
    // my variables
    int S25 = 8, S15 = 5, S10 = 10; // available stamps
    int RS50 = 10, RS25 = 6, RS10 = 8, RS05 = 7; // available coins
    int stamp,value,coins; // user input values store here
    int balance,fbalance,pass1,pass2;
    int B1,B2,B3,B4,B5,B6,B7,B8; // Input coins
    char end;    //  balance of each transaction

    printf("\n................Automatic stamp vending machine..................\n");
    printf("\n...........Created by Sagara Nuwan - CT/2020/019............\n");

    // begin here
    while(1){

        while(1){
            pass1 = 0; // this is used to pass the next main if condition
            printf("\n____________________Welcome___________________\n");
            printf("\nWhat stamp do you need?\n");
            printf("\nAvailable stamps in the machine\n\n\t| RS 25 |\n\t| RS 15 |\n\t| RS 10 |\n");
            printf("\nPlease Enter choice here: \t");
            scanf("%d",&stamp);

            if(stamp == 25){
                if(S25>0){
                    printf("\nYou need RS %d worth of stamp\n",stamp);
                    value = 25;
                    --S25;
                }//else
                //exit(1);

            }else if(stamp == 15 ){
                if(S15>0){
                    printf("\nYou need RS %d worth of stamp\n",stamp);
                    value = 15;
                    --S15;
                }

            }else if(stamp == 10){
                if(S10>0){
                    printf("\nYou need RS %d worth of stamp\n",stamp);
                    value = 10;
                    --S10;
                }

            }
            else{
                printf("\n_______Invalid!_______\n\nPlease check again!!!\n");

                printf("\nDo you need to do another transaction ???\n");
                printf("\nPlease confrim Yes --> [Y] or No --> [N]: \t");
                scanf(" %c",&end);


                if(end == 'N' || end == 'n'){
                    printf("\nThank you!!!\n");
                    exit(1);
                }else if( end == 'Y' || end == 'y'){
                    printf("\n-------------------------------------\n");
                    printf("\n-----------------Hello Again---------------\n");
                    ++pass1;
                }else{
                    printf("\nTry again!!!\n");
                    printf("\nSorry for the inconvenience !!!\n\nThank you!\n");
                    exit(1);
                }

            }

            break;
        }

        if(!(pass1>=1)){
            printf("\nYou have to pay -----> %d RS\n",value);
            printf("\nPlease verify your payment\n");
            printf("\nPlease enter the valid coin\n");
            printf("\n_______Accepted coin of the machine_______\n"
                   "\n\t----> RS 50\n\t----> RS 25\n\t----> RS 10\n\t----> RS 05\n"
                   );
            printf("\nEnter here: \t");
            scanf("%d",&coins);
            printf("\nYou entered RS %d coin\n",coins);
            pass2 = 0;

            if(coins == 50 || coins == 25 || coins == 10 || coins == 5){
                B1 = 0;
                (coins == 50)? RS50++ : (coins == 25) ? RS25++ : (coins == 10) ? RS10++ : RS05++ ; // increment the available coin
                //printf("coins %d",RS50);
                balance = coins - value;
                if(balance >= 0){
                    B1 = balance/50;    // Number of RS 50 coins
                    B2 = balance%50;
                    B3 = B2/25;          // Number of RS 25 coins
                    B4 = B2%25;
                    B5 = B4/10;         // Number of RS 10 coins
                    B6 = B4%10;
                    B7 = B6/5;          // Number of RS 5 coins
                    B8 = B6%5;

                }else{
                    printf("\nInsufficient amount\n\nUnsuccessful transaction\n");
                    ++pass2;
                }

                if(pass2 == 0){
                    printf("\nYour balance : %d\n",balance);
                    printf("\nYou can receive the coins\n");
                    printf("\n RS 50 ---> %d\n",B1);
                    printf("\n RS 25 ---> %d\n",B3);
                    printf("\n RS 10 ---> %d\n",B5);
                    printf("\n RS 05 ---> %d\n",B7);
                }

            }else{
                printf("\n__________Invalid coin__________!!!\n");
                printf("\nPlease remove the coin !!!\n");
                (coins == 50)? RS50-- : (coins == 25) ? RS25-- : (coins == 10) ? RS10-- : RS05-- ;  // fail transaction therefore remove the coin entered the user
            }

            printf("\nDo you need to do another transaction ???\n");
            printf("\nPlease confirm Yes --> [Y] or No --> [N]: \t");
            scanf(" %c",&end);

            if(end == 'N' || end == 'n'){
                printf("\nThank you!!!\n");
                exit(1);
            }else if( end == 'Y' || end == 'y'){
                printf("\n-------------------------------------\n");
                printf("\n-----------------Hello Again---------------\n");
            }else{
                printf("\nTry again!!!\n");
                printf("\nSorry for the inconvenience !!!\n");
                exit(1);
            }

        }

    }

}
