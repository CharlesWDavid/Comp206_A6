#include <stdio.h>
#include <stdlib.h>

struct ACCOUNT {
    int accountNumber;
    float balance;
    struct ACCOUNT *next;
};

// initializing the list
struct ACCOUNT *head = NULL;
head = malloc(sizeof(struct ACCOUNT));
if(head == NULL) return 1;

void findUpdate(int account, float amount){

    struct ACCOUNT *curr = head; // pointer to iterate over the list

    // updates balance of account if found in list
    while(curr != NULL){
        if (curr->accountNumber == account){
            curr->balance += amount;
        }
    }

    // Add new account at top of list if not found
    struct ACCOUNT *new_acc;
    new_acc = malloc(sizeof(struct ACCOUNT));
    new_acc->accountNumber = account;
    new_acc->balance = amount;
    new_acc->next = *head;
    *head = new_acc;

}

void prettyPrint(){

    struct Account *curr = head;

    while(curr != NULL){
        printf("ACCOUNT ID: %5d BALANCE: $ %6.2f", curr->accountNumber, curr->balance);
        curr = curr->next;
    }
}