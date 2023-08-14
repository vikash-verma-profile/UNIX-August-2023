#include <stdio.h>
int main()
{
   int sample=1;
   int *ptr=&sample;
   int **p=&ptr;
//    printf("%d\n",sample);
//    printf("%d\n",*ptr);
//    printf("%d\n",ptr);
//    printf("%d\n",&sample);
//    printf("%d\n",&ptr);
//    printf("%d\n",**p);
printf("%d\n",**p);
printf("%d\n",*ptr);
sample=10;
printf("%d\n",**p);
printf("%d\n",*ptr);
    return 0;
}
