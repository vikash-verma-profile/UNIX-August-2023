#include <stdio.h>
int main()
{
    int a[]={1,2,3,4};
    int *p=a;
   for(int counter=0;counter<4;counter++){
        printf("%d",*(p+counter));
   }
    return 0;
}
