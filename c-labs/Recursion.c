#include <stdio.h>
int printSum(int a);
int main()
{
    int a=5;
    int output=printSum(a);
    printf("%d",output);
    return 0;
}
int printSum(int a){
    if(a>0){
        return a+printSum(a-1);
    }
    else{
        return 0;
    }
}