/*3. Write a function to calculate the force of attraction on a body of mass m
exerted by earth. (g=9.8m/S2)
*/
#include<stdio.h>
float force(int m){
return 9.8*m;
}
int main(){
int m;
printf("enter mass of the body\n");
scanf("%d",&m);
printf("the force of attraction on a body will be:%.1f",force(m));
return 0;
}