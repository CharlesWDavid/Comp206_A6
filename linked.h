#ifndef LINKEDH   
#define LINKEDH   

struct ACCOUNT {
    int accountNumber;
    float balance;
    struct ACCOUNT *next;
};

void findUpdate(int account, float amount);

void prettyPrint();

#endif