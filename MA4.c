#include <stdio.h>
#include <math.h>
#define MA_point 3    
//void case2(int number[5]);   
static float MA_speed = 0;
static float sum_speed = 0;
static int count = 0;
static int MA[MA_point]={0};
static int MA_pre[MA_point]={0};
int main()
{
    int i = 0;
    for(i=0; i<9; i++)
    {
        MA[count]=13+i;
        printf("i=%d\t sum=pre_sum:%.1f\t -MA_pre[%d]:%d\t +MA[%d]:%d\t=",i,sum_speed,count,MA_pre[count],count,MA[count]);
        sum_speed=sum_speed-MA_pre[count]+MA[count];
        printf("%.1f\n",sum_speed/3);
        MA_pre[count]=MA[count];
        if(count==MA_point-1)
        {
            count=0;
        }
        else
        {
            count++;
        }
    }
}
