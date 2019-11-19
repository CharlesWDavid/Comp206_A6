#include <stdio.h>
#include <stdlib.h>


void parse(char record[], int *acct, float *amnt){

    char account[10], amount[10]; // initializing fields

    sscanf(record, "%d %f", account, amount); // writing fields into appropriate string arrays

    int accNum = atoi(account);
    float accAmount = atof(amount);

    acct = &accNum;     // using call-by-reference to return account number 
    amnt = &accAmount;  // and transaction amount
}