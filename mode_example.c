#include <stdio.h>

int Mi=0;

int mode(int a[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      for (j = 0; j < n; ++j) {
         if (a[j] == a[i]){
            ++count;
         }
      }
      
      if (count > maxCount) {
          printf("count %d %d \n",count,a[i]);
         maxCount = count;
         maxValue = a[i];
      }
      else if (count == maxCount){
          printf("same %d\n",a[i]);
      }
   }

   return maxValue;
}

int main() {
   int n = 5;
   int a[5] ={3,4,3,4,5};
   
   

    
   printf("Mode = %d\n MI : %d ", mode(a,n),Mi);

   return 0;
}
/*
int main(void)
{
        int number = 5;
        int x,y;
        int mode,count,oldmode;
        int oldcount = 0;
        
        int stats[] = {1,3,3,4,5};
        //find the mode
        
        for(x=0;x<number;x++){
                mode=stats[1];
                count =1;
                
                //count the occurrences of this value.
                
                for(y=x+1;y<number;y++)
                if(mode==stats[y]) count++;
                
                //if count is greater than old count,use new mode.
                if(count>oldcount){
                        oldmode=mode;
                        oldcount=count;
                }
        }
        printf("the mode is %d\n",oldmode);
        return 0;
}
*/
