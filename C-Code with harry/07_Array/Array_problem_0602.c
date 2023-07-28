// method:2
 #include <stdio.h>
 void count(int arr[],int n,int m);
 int main()
 {
     int n,m=0;
     int arr[50];
 printf("enter the value of n\n");
     scanf("%d", &n);
     for (int i = 0; i < n; i++)
     {
         printf("enter the %d no\n", i + 1);
         scanf("%d", &arr[i]);
     }
     count(arr,n,m);
 }
 void count(int arr[],int n,int m){

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            m++;
        }
    }
    printf("the total no of even no in this array is:%d\n", m);
}