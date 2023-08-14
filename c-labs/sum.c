#include <stdio.h>
void printSum(int a,int b);
int main()
{
    int a=5,b=6;
    printSum(a,b);
    return 0;
}
void printSum(int a,int b){
    printf("%d",(a+b));
}