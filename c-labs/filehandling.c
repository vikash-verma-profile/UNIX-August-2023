#include <stdio.h>
#include <stdlib.h>

#define PI 3.14;
#define max(a,b) (a*b)
//Read data from file
int main()
{
    //Create a file fointer to get the value
    FILE* f;
    char dataToBeRead[50];
    f=fopen("sample.txt","r");
    if(f==NULL){
        printf("File is empty");
    }
    else{
        while (fgets(dataToBeRead,50,f))
        {
            printf("%s",dataToBeRead);
        }
    }
    fclose(f);
    //use method tp 
    return 0;
}
