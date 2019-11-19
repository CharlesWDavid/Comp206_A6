// Charles David
// Student ID: 260924868

#include <stdio.h>
#include "linked.h"
#include "ssv.h"

int main(){

    char line[30];
    for (int i=0; i<30; i++) line[i] = '\0';

    FILE *p=fopen("students.ssv", "rt");
    while(fgets(line, 29, p) != NULL){
        int *acct;
        float *amnt;
        parse(line, acct, amnt);
        findUpdate(*acct, *amnt);
    }
    prettyPrint();

    return 0;
}