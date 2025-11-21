#include <stdio.h>

void createArray()
{
    int x;
    int y;
    printf("Please enter the size of the array.");
    scanf("%d", &x);
    scanf("%d", &y);
    int arr[x][y];

    int count = 0;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            int val;
            count++;
            printf("Please enter the ");
            printf("%d \n", count);
            scanf("%d", &val);
            arr[i][j] = val;
        }
    }

    // this code displays the data stored in the array.

    printf("The entered data is \n");
    for (int i = 0; i < x; i++)
    {
        printf("[");
        for (int j = 0; j < y; j++)
        {
            printf("%d", arr[i][j]);
            if (j == y-1)
            {
                continue;
            }
            printf(" , ");
        }
        printf("]");
        printf("\n");
    }

    int updateX;
    int updateY;
    int newVal;
    printf("\n Please enter the index value you want to update \n");
    scanf ("%d %d", &updateX, &updateY);
    printf("Please enter the new value");
    scanf("%d", &newVal);
    arr[updateX][updateY] = newVal;


     printf("The Updated data is \n");
    for (int i = 0; i < x; i++)
    {
        printf("[");
        for (int j = 0; j < y; j++)
        {
            printf("%d", arr[i][j]);
            if (j == y-1)
            {
                continue;
            }
            printf(" , ");
        }
        printf("]");
        printf("\n");
    }

}

void readArray(int a[])
{

}
void updateArray()
{
}
void deleteArray()
{
}

int main()
{

    // CRUD --> Create, Read, Update and Delete
    createArray();
    return 0;
}