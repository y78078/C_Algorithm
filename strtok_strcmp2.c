 #include <stdio.h>
#include "string.h"
#include "stdlib.h"
#include "stdio.h"

int main() {
    //char str[8] = {0x30, 0x1E, 0x31, 0x1E, 0x32, 0x1E, 0x33, 0x00}; //要被分割的
    char str[] = {0x0a, 0x30, 0x31, 0x1E, 0x32, 0x34, 0x33, 0x1E, 0x0a, 0x0a, 0x41, 0x42, 0x1E, 0x43, 0x44, 0x45, 0x1E, 0x0a, 0x00};
    char t[3] = {0x0A};
    char ts[7] = {0x41, 0x42, 0x1E, 0x43, 0x44, 0x45, 0x1E};
    
    
    char *s = strtok(str, t); //分割的判斷字元
    char *put[100];
    //char *ans[40];
    char *put2[100]; //分割後放入新的字串陣列
    char *put3[100];
    int s_count=0; //分幾個了
    int ret;
    int s_count2=0;

    char t2[3] = {0x1E};

    while(s != NULL) {
        
        printf("counter: %d", s_count);
        put[s_count++]=s;  //把分出來的丟進去 結果陣列
        printf("s: %s \n",s);
        s = strtok(NULL, t); //我不知道 這行幹嘛
    }

    for(int x=0;x<s_count;x++){ //驗收成果
        printf("%d %s\n",x,put[x]);
        char *s2 = strtok(put[x], t2);
        char *put2[100]; //分割後放入新的字串陣列
        while(s2 != NULL) {
        
            printf("counter2: %d\n", s_count2);
            put2[s_count2++]=s2;  //把分出來的丟進去 結果陣列
            printf("s2: %s \n",s2);
            s2 = strtok(NULL, t2); //我不知道 這行幹嘛
            printf("-----------------\n");
        } 
        printf("put2 : %s\n",put2[1]);
        for(int y=0;y<s_count2;y++){
            ret1 = strcmp(put2[y], "01");
            if(ret > 0)
            {
                printf("str1 is less than str2\n");
            }
            else if(ret < 0) 
            {
                printf("str2 is less than str1\n");
            }
            else 
            {
                printf("str1 is equal to str2\n");
                printf("data:%s \n",put2[y+1]);
            } 
        }
        /*

        */
        
    }
    
    
    // z=0;
    /*
    for(int y=0;y<s_count2;y++){
        
        ret = strcmp(put2[y], "01");
    
        if(ret > 0)
        {
            printf("str1 is less than str2\n");
        }
        else if(ret < 0) 
        {
            printf("str2 is less than str1\n");
        }
        else 
        {
            printf("str1 is equal to str2\n");
            printf("data:%s \n",put2[y+1]);
        } 
    } */
    
    
     //分割的判斷字元

 
    return 0;
}
