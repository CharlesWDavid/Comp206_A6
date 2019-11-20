#include <stdio.h>
#include <stdlib.h>


void parse(char record[], int *acct, float *amnt){

    char account[10], amount[10]; // initializing fields
    for (int i=0; i<10; i++) account[i] = '\0'; // wiping arrays at each read
    for (int i=0; i<10; i++) amount[i] = '\0';

    sscanf(record, "%s %s", account, amount); // writing fields into appropriate string arrays

    int accNum = atoi(account);
    float accAmount = atof(amount);

    *acct = accNum;     // using call-by-reference to return account number 
    *amnt = accAmount;  // and transaction amount
}