#include <stdio.h>


void parse(char record[], int *acct, float *amnt){

    char account[10], amount[10]; // initializing fields

    sscanf(record, "%d %f", account, amount); // writing fields into appropriate string arrays

    acct = atoi(account); // using call-by-reference to return account number 
    amnt = atof(amount);  // and transaction amount
}