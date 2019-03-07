
#include <stdio.h>
#include <string.h>
/*
int main(void)
{
    char s[] = "Speech is si1ver, silence is gold.";
    char t[] = " ";
    char *test = strtok(s, " ");
     
    while (test != NULL) {
        printf("%s\n", test);
        test = strtok(NULL, " ");
    }
     
    return 0;    
}
*/
int main() {
   char str[8] = {0x30, 0x1E, 0x31, 0x1E, 0x32, 0x1E, 0x33, 0x00}; //要被分割的
   char t[3] = {0x1E, 0x00, 0x0A};
   char ts[3] = {0x30,0x31,0x32};
   char* s = strtok(str, t); //分割的判斷字元
   //std::string strBuf[100];
   char put[100]; //分割後放入新的字串陣列
   int s_count=0; //分幾個了


   while(s != NULL) {
       //strBuf[s_count] = s;
     put[s_count++]=*s;  //把分出來的丟進去 結果陣列
     s = strtok(NULL, t); //我不知道 這行幹嘛
/*     printf("s: %s \n",s);
     if (*s == ts[1]){
         printf("OK\n");
     }
     else{
         printf("ER \n");
     }*/
   }

 //     printf("00000 0x%02X\n",put[0]);
      
 //     return 0;
   for(int x=0;x<s_count;x++){ //驗收成果
      printf("%d %c\n",x,put[x]);
   }
//   return 0;
   printf("put : %c \n",put[1]);
   if (put[0] == 0x30){
       printf("Y %c \n",put[2]);
   }
   else {
       printf("N\n");
   }
   return 0;
 }
