
#include <stdio.h>
int main()
{
    int i, j, rows;

    printf("Enter rows: ");
    scanf("%d", &rows);

   
    for(i=1; i<=rows; i++)
    {
        
        for(j=rows-1; j>=i; j--)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Prints lower part of the pattern
    for(i=rows-1; i>=1; i--)
    {
        // Prints trailing spaces
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

