#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#define SIZE 100
typedef struct term
{
    int coeff;
    int exp;
} term;
typedef struct poly
{
    term item[SIZE];
    int tCount;
} poly;
void add_poly(poly *p1, poly *p2, poly **p3);
void display(poly *p);
void create(poly **p);
int evaluate(poly *p,int x);
int power(int x,int n)
{
    int i,power=1;
    for(i=1;i<=n;i++)
    {
        power=power*x;
    }
    return power;
}
int evaluate(poly *p,int x)
{
    int result=0;
    for(int i=0;i<p->tCount;i++)
    {
        result=result+(p->item[i].coeff*(power(x,p->item[i].exp)));
    }
    return result;
}
int main()
{
    poly *p1, *p2, *p;
    int i, m, n, option,value,x;
    while(1)
    {
        printf("\nMENU: \n1. Add\n2. Evaluate\n3. Quit()\nSelect an option: ");
        scanf("%d", &option);
        switch(option)
          {
             case 1:    create(&p1);
                        display(p1);
                        create(&p2);
                        display(p2);
                        add_poly(p1,p2,&p);
                        printf("\nPolynomial after addition:\n");
                        display(p);
                        break;
              case 2:   printf("Enter the value of x: ");
                        scanf("%d",&x);
                        value=evaluate(p,x);
                        printf("The value evaluated is: %d",value);
              case 3: exit(1);
              default: printf("Wrong option entered.");

            }
        }
}
void create(poly **p)
{
    int i,n;
    poly *p1;
    p1=(poly*)malloc(sizeof(poly));
    printf("\nEnter the number of terms in the polynomial(max 100)\n");
    scanf("%d", &n);
    printf("\nEnter the terms in ascending order of exponent \n");
    for (i=0; i<n; i++)
       {
            printf("\nEnter coeffecient of term %d:",i+1);
            scanf("%d", &p1->item[i].coeff);
            printf("Enter exponent of term %d:",i+1);
            scanf("%d", &p1->item[i].exp);
       }
    p1->tCount=n;
    *p=p1;
}
void add_poly(poly *p1, poly *p2, poly **p3)                                //Function for sum and substract (0 for sum and 1 for substract
{
    poly *p;
    p=(poly*)malloc(sizeof(poly));
    int i,j,k;
    i=0;
    j=0;
    k=0;
    while(i<p1->tCount&&j<p2->tCount)
        {
            if(p1->item[i].exp<p2->item[j].exp)
            {
                p->item[k].exp=p1->item[i].exp;
                p->item[k].coeff=p1->item[i].coeff;
                i++;
                k++;
            }
            else if(p1->item[i].exp>p2->item[j].exp)
            {
                p->item[k].exp=p2->item[j].exp;
                p->item[k].coeff=p2->item[j].coeff;
                j++;
                k++;
            }
            else
            {
                if((p1->item[i].coeff+p2->item[j].coeff)!=0)
                {
                    p->item[k].exp=p1->item[i].exp;
                    p->item[k].coeff=p1->item[i].coeff+p2->item[j].coeff;
                    i++;
                    j++;
                    k++;
                }
                else
                {
                    i++;
                    j++;
                }
            }
        }
        while(i<p1->tCount)
        {
            p->item[k].exp=p1->item[i].exp;
            p->item[k].coeff=p1->item[i].coeff;
            i++;
            k++;
        }
        while(j<p2->tCount)
        {
            p->item[k].exp=p2->item[j].exp;
            p->item[k].coeff=p2->item[j].coeff;
            j++;
            k++;
        }
        p->tCount=k;
        *p3=p;
    }
void display(poly *p)                                             //Displaying a single polynomial
{
    int i;
    for (i=p->tCount-1; i>=0; i--)
    {
        if(i==p->tCount-1&&p->item[i].exp!=0)
            printf("%dx^(%d) ", p->item[i].coeff,p->item[i].exp);
        else if(i==p->tCount-1&&p->item[i].exp==0)
            printf("%d ", p->item[i].coeff);
        else
        {
            if(p->item[i].exp==0)
            {
                if(p->item[i].coeff<0)
                    printf("- %d", abs(p->item[i].coeff));
                else
                    printf("+ %d", p->item[i].coeff);
            }
            else
            {
                if(p->item[i].coeff<0) //yaha tak complete h iske baad likh 
                    printf("- %dx^(%d) ", abs(p->item[i].coeff), p->item[i].exp);
                else
                    printf("+ %dx^(%d) ",p->item[i].coeff, p->item[i].exp);
            }
        }
    }
}