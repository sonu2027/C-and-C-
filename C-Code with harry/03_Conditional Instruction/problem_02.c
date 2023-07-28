
/*2.Write a program to find out whether a student is pass
 or fail; if it requires a total of 40% and at least 33% 
 in each subject to pass. Assume 3 subjects and take marks
  as input from the user.*/

  
  /*//by me
#include<stdio.h>
int main()
{
    int math;
    int physics;
    int chemistry;

    printf("enter your math marks\n");
    scanf("%d", &math);
    printf("enter your physics marks\n");
    scanf("%d", &physics);
    printf("enter yor chemistry marks\n");
    scanf("%d", &chemistry);
  

    if(math>=33 && physics>=33 && chemistry>=33){
        if((math+physics+chemistry)/3>=40){
        printf("you are pass\n");
        }
        else{
            printf("you are fail\n");
        }
    }
    else{
        printf("you are fail\n");
    }

    return 0;
}*/
// by harry
#include<stdio.h>
int main()
{
    int math,physics,chemistry;
    float total;

    printf("enter your math, physics and chemistry marks respectively\n");
    scanf("%d%d%d", &math,&physics,&chemistry);
    total=(physics+chemistry+math)/3;
  

    if((total<40)||(physics<33)||(math<33)||(chemistry<33)){
        printf("your percentage is %f and you are fail\n", total);
        }
    
    else{
        printf("your percentage is %f and you are pass\n", total);
    }

    return 0;
}


