#include <stdio.h>
#include <stdlib.h>
#include "linked.h"

// struct ACCOUNT {
//     int accountNumber;
//     float balance;
//     struct ACCOUNT *next;
// };

// initializing the list
struct ACCOUNT *head = NULL;

void findUpdate(int account, float amount){

    struct ACCOUNT *curr = head; // pointer to iterate over the list

    // updates balance of account if found in list
    int match = 0;
    while(curr != NULL){
        if (curr->accountNumber == account){
            curr->balance += amount;
            match++;
        }
        curr = curr->next;
    }

    // Add new account at top of list if not found
    if (match == 0){
        struct ACCOUNT *new_acc;
        new_acc = malloc(sizeof(struct ACCOUNT));
        new_acc->accountNumber = account;
        new_acc->balance = amount;
        if (head == NULL){
            new_acc->next = NULL;
        } else {
            new_acc->next = head;
        }
        head = new_acc;
        new_acc = NULL;
    }

}

void prettyPrint(){

    struct ACCOUNT *curr = head;

    while(curr != NULL){
        printf("ACCOUNT ID: %5d\tBALANCE: $ %6.2f\n", curr->accountNumber, curr->balance);
        curr = curr->next;
    }
}