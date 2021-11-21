#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
// -------------------------------LINEAR SEARCH Program--------------------------------
void print_array();
void search();
int main()
{
    int choice;
    int i=0;
    while (i<10)
    {
        printf("\n 1.Show array  ");
        printf("\n 2.Search element in array   ");
        printf("\n 3.Exit  ");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            print_array();
            break;
        case 2:
            search();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\n Wrong choice");
            break;
        }
        i++;
    }
    getch();
    return 0;
}
void print_array()
{
    int data[] = {2, 4, 6, 8, 0, 1, 3, 5, 4, 9};
    printf("The array is: ");
    for (int i = 0; i < (sizeof(data) / sizeof(data[0])); i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
}
void search()
{
    int data[] = {2, 4, 6, 8, 0, 1, 3, 5, 7, 9};

    int element, flag = 0;
    printf("\nEnter the element for which you want to find it's location: ");
    scanf("%d", &element);
    for (int i = 0; i < (sizeof(data) / sizeof(data[0])); i++)
    {
        if (element == data[i])
        {
            printf("%d found at %d\n", element, i + 1);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Element is not in the array. \nTRY AGAIN!\n");
    }
}