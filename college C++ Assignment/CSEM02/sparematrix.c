#include<stdio.h>
typedef struct ele
    {
        int row,col,val;
    }element;
typedef struct sp
    {
        int no_of_ele,no_of_row,no_of_col;
        element data[100];
    }spmat;
void disspmat(spmat *ps)
    {
        int i;
        printf("\nThe sparse matrix is:\n");
        printf("%d\t%d\t%d\n",ps->no_of_row,ps->no_of_col,ps->no_of_ele);
        for(i=0;i<ps->no_of_ele;i++)
            printf("%d\t%d\t%d\n",ps->data[i].row,ps->data[i].col,ps-> data[i].val);
    }
void transpose(spmat *ps,spmat *t)
{

    int i,k=0,j;
    t->no_of_row=ps->no_of_col;
    t->no_of_col=ps->no_of_row;
    t->no_of_ele=ps->no_of_ele;
    for(i=0;i<ps->no_of_col;i++){
        for(j=0;j<ps->no_of_ele;j++)
            if(i==ps->data[j].col){
                t->data[k].row=i;
                t->data[k].col=ps->data[j].row;
                t->data[k].val=ps->data[j].val;
                k++;
            }
    }
}
int main()
  {
        int a[5][5],i,j,n,m,k=0;
        spmat s,t;
        printf("Enter the dimension of the matrix.\n");
        scanf("%d%d",&n,&m);
        printf("Enter the elements\n");
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d",&a[i][j]);
        printf("Entered matrix is:\n");
        for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                    printf("%d\t",a[i][j]);
                printf("\n");
            }
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                if(a[i][j]!=0)
                    {
                        s.data[k].row=i;
                        s.data[k].col=j;
                        s.data[k++].val=a[i][j];
                    }
        s.no_of_ele=k;
        s.no_of_row=n;
        s.no_of_col=m;
        disspmat(&s);
        transpose(&s,&t);
        disspmat(&t);
  }