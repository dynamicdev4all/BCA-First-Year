#include <stdio.h>

int main()
{

    char [100] choice = "Mon";

    switch (choice)
    {
    case "Mon":
    case "Sat":
    case "Tue":
        printf("ZERO");
    case "Wed":
    case "Thu":
    case "Fri":
    case "Sun":
        printf("TWO");
    
    default:
       
    }

    return 0;
}