#include <stdio.h>
int main()
{
   int sample=1;
   int *ptr=&sample;
   printf("%d\n",sample);
   printf("%d\n",*ptr);
   printf("%d\n",ptr);
   printf("%d\n",&sample);
   //printf("%d\n",**ptr);
    return 0;
}
