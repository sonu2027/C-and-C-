#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct aarr
{
    int a [MAX];
    int len;
}ARR;

//function to insert
int insert(ARR *p, int pos, int item)
{
    int i;
    if(p->len==MAX)
        return 0;
    else if (pos<0|| pos>p->len)
        return 0;
    else
    {
        for(i=p->len;i>=pos; i--)
        {
            p->a[i]=p->a[i-1];
        }
        p->a[i]=item;
        p->len=p->len+1;
        return 1;
    }
}

//function to  delete an element from the array

int delete(ARR *p,int pos)
{
    int i;
    if(p->len==0)
        return 0;
    else if (pos<0|| pos>p->len)
        return 0;
    else
    {

        for(i=pos-1;i<p->len; i++)
        {
           p->a[i]=p->a[i+1];
        }
    }
    p->len=p->len-1;
        return 1;

}


//display function

void display(ARR p)
{
    int i;
    for(i=0;i<p.len;i++)
        printf("%d\t",p.a[i]);
}

//create function

int create(ARR *p,int n)
{
    int i;
    if(n>MAX)
        return 0;
    else
    {
        printf("enter %d elements in the array\n",n);
        for(i=0;i<n;i++)
            scanf("%d",&p->a[i]);
        p->len= n;
        return 1;

    }
}


int main()
{
    int i,choice,m,item,pos,n;

    ARR p;
    while(1)
    {
         printf("\n 1.for insert \n 2. for delete\n 3. for display \n 4. for create \n 5. for exit\n");
    printf(" enter your choice");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:printf("enter the item to be inserted\n");
               scanf("%d",&item);
               printf("enter the position at which you want to insert the item\n");
               scanf("%d",&pos);
               m=insert(&p,pos,item);
               if(m==0)
                printf("insertion not possible");
               else
                printf("item has been inserted");

               break;



        case 2: printf("enter the position from where you want to delete\n");
                scanf("%d",&pos);

            m=delete(&p,pos);
               if(m==0)
                printf("deletion  not possible");
               else
                printf("item has been deleted");

               break;

        case 3:display(p);
             break;


       case 4:printf("enter the length of array\n");
              scanf("%d",&n);
              m=create(&p,n);
              if(m==0)
                printf("creation not possible");
              else
                printf("creation done");

              break;

         case 5 :exit(0);
                break;

                default: printf("invalid choice");


    }

    }

}