#include <stdio.h>
#include <math.h>
#define n 5    //五點移動平均
/* edited by Kermit  20131025*/
void case1(int number[10]);     //原本的寫法(發現實際會變成 n-1 點 SMA) 
void case2(int number[10]);     //改寫過的SMA，利用兩個數列存資料 
int main()
{
    int number[10]={0,1,2,3,4,0,1,2,3,4};//number[10]要先給值不能未給值就呼叫計算，模擬數列的值 
    case1(number);
    printf("---------------------------------------------\n");
    case2(number);
    system("pause");
    return 0;
}
void case1(int number[10])
{
    int sum=0;
    int i, count=0, count_max=n,a[n]={0};
    for(i=0; i<10; i++)
    {
        a[count]=number[i];
        printf("i=%d\t sum=pre_sum:%d\t -a[%d]:%d\t +a[%d]:%d\t=",i,sum,(count+1)%count_max,a[(count+1)%count_max],count,a[count]);
        sum=sum-a[(count+1)%count_max]+a[count];
        printf("%d\n",sum);
        if(count==count_max-1){count=0;}
        else{count++;}
    }        
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
