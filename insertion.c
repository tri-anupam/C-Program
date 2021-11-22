#include <stdio.h>
#include <conio.h>
//--------------------This program is goes to INSERT an element in the array at given position.--------------------------
int main()
{
    int data[] = {2, 3, 4, 5, 6, 7, 8, 9, 1, 23};
    int size;
    size=sizeof(data)/sizeof(data[0]);
    int element, pos;
    printf("Array before insertion:- \n");
    for(int i=0;i<size;i++){
            printf("data[%d]=%d\n",i,data[i]);
        }
    printf("Enter the new element and it's position(indexing start at 0) ");
    scanf("%d%d",&element,&pos);
    if(pos>=0 && pos<=size){
        for(int i=size;i>=pos;i--)
        {
            data[i+1]=data[i];
        }
        data[pos]=element;
        printf("Array after insertion:-\n");
        for(int i=0;i<=size;i++){
            printf("data[%d]=%d\n",i,data[i]);
        }
    }
    else{
       printf("You enter a invalid position.");
    }
     getch();
    return 0;
}
