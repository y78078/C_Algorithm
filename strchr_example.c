#include "string.h"
#include "stdlib.h"
#include "stdio.h"

int main ()
{
  char str[] = ":This is a sample string is:";
  char * pch;
  int s_count=0;
  printf ("Looking for the 's' character in \"%s\"...\n",str);
  pch=strchr(str,0x3a);
  while (pch!=NULL)
  {
    printf ("found at %d\n",pch-str+1);
    pch=strchr(pch+1,0x3a);
  }
  return 0;
}
