#include <stdio.h>
#include <conio.h>
//This program is goes to find the max. element of given array.
int main()
{
    int data[10]={2,4,3,56,23,76,4,12,51,45};
    int element,pos=0,flag=0;
    element=data[0];
    for(int i=0;i<(sizeof(data)/sizeof(data[0]));i++)
    {
        if(data[i]>element)
        {
            element=data[i];
            pos=i+1;
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("The maximum element is %d and it's location is %d",element,pos);
    }
    else{
        printf("The maximum element is %d and it's location is %d",element,pos);

    }
    getch();
    return 0;
}