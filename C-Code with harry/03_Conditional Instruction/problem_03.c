
/*3.Calculate income tax paid by an employee to the 
government as per the slabs mentioned below:
Income Slab Tax
2.5L-5.0L 5%
5.0L-10.0L 20%
Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/

// by me 
/*#include<stdio.h>
int main()
{
    float income;
    printf("enter your yearly income in lakh\n");
    scanf("%f", &income);
    if(income<2.5){
          printf("you don't have to pay tax\n");
    }
    else if(income>=2.5 && income<5){
        printf("you have to pay 5 percent tax\n");
    }
    else if(income>=5 && income<10){
        printf("you have to pay 20 percent tax\n");
    }
    else if(income>=10){
        printf("you have to pay 30 percent tax\n");
    }
    return 0;
}*/

// by harry
#include<stdio.h>
int main()
{
    float tax=0, income;
    printf("enter your yearly income\n");
    scanf("%f", &income);

    
    if(income>=250000 && income<500000){
        tax=tax+0.05*(income-250000);
}
    if(income>=500000 && income<1000000){
        tax=tax+0.2*(income-250000);
}
    if(income>=1000000){
       tax=tax+0.3*(income-250000);
}
       printf("you have to pay %f Rs\n", tax);
    
    return 0;
}
