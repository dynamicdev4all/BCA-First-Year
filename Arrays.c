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
            if (j == 2)
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
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", a[i]);
    }
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