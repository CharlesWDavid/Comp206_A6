// Charles David
// Student ID: 260924868

#include <stdio.h>
#include <stdlib.h>
#include "linked.h"
#include "ssv.h"

int main(){

    char line[30];
    for (int i=0; i<30; i++) line[i] = '\0'; // wiping array at each read
    
    FILE *p=fopen("students.ssv", "rt");
    if(p == NULL) return 1;
    
    while(fgets(line, 29, p) != NULL){
        int *acct;
        float *amnt; // creating pointers to pass them into multiple functions
        parse(line, acct, amnt);
        findUpdate(*acct, *amnt);
    }
    fclose(p);
    prettyPrint();

    return 0;
}