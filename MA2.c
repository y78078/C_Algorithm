#include <stdio.h>
#include <math.h>
#define n 5    
void case2(int number[10]);     
int main()
{
    int number[10]={0,1,2,3,4,0,1,2,3,4};
    printf("---------------------------------------------\n");
    case2(number);
    system("pause");
    return 0;
}
void case2(int number[10])
{
    int sum=0;
    int i, count=0, count_max=n,a[n]={0},a_pre[n]={0};
    for(i=0; i<10; i++)
    {
        a[count]=number[i];
        printf("i=%d\t sum=pre_sum:%d\t -a_pre[%d]:%d\t +a[%d]:%d\t=",i,sum,count,a_pre[count],count,a[count]);
        sum=sum-a_pre[count]+a[count];
        printf("%d\n",sum);
        a_pre[count]=a[count];
        if(count==count_max-1){count=0;}
        else{count++;}
    }        
}
