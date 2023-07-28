/*Make a structure to store bank account information of a customer of ABC 
bank.Also, make an alias for it.
*/
#include<stdio.h>
#include<string.h>
typedef struct bankaccountinformation{
    char name[20];
    int account_no;
}account;
int main(){
    account sonu={"sonu mandal",8620};
    account anupam={"anupam mishra",7596};
    printf("name: %s\taccount number: %d\n",sonu.name,sonu.account_no);
    printf("name: %s\taccount number: %d\n",anupam.name,anupam.account_no);
return 0;
}