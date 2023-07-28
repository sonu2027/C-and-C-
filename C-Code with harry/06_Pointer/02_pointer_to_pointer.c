#include<stdio.h>
int main(){
int i=5;
int *j=&i;
int **k=&j;
printf("%u\n",j);
printf("%u\n",*k);
printf("%u\n",**k);
return 0;
}