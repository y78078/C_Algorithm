#include <stdio.h>
#include <math.h>
#define MA_point 3    
//void case2(int number[5]);     
int main()
{
    int Data[5]={1,2,3,4,5};
    int i, count=0, sum=0, count_max=MA_point,MA[MA_point]={0},MA_pre[MA_point]={0};
    for(i=0; i<MA_point; i++)
    {
        MA[count]=13+i;
        printf("i=%d\t sum=pre_sum:%d\t -MA_pre[%d]:%d\t +MA[%d]:%d\t=",i,sum,count,MA_pre[count],count,MA[count]);
        sum=sum-MA_pre[count]+MA[count];
        printf("%d\n",sum);
        MA_pre[count]=MA[count];
        if(count==count_max-1)
        {
            count=count;
        }
        else
        {
            count++;
        }
    }
}
