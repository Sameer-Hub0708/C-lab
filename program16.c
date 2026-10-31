#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;
    int i, j, k, choice;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Transpose\n");
    printf("4. Multiplication\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1 || choice == 2)
    {
        printf("Enter rows and columns of first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and columns of second matrix: ");
        scanf("%d %d", &r2, &c2);
        if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
            r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10)
        {
            printf("Matrix size must be between 1 and 10.\n");
            return 0;
        }
        if (r1 != r2 || c1 != c2)
        {
            printf("Matrices must have the same order.\n");
            return 0;
        }
        printf("Enter first matrix:\n");
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                scanf("%d", &a[i][j]);
        printf("Enter second matrix:\n");
        for (i = 0; i < r2; i++)
            for (j = 0; j < c2; j++)
                scanf("%d", &b[i][j]);
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                if (choice == 1)
                    c[i][j] = a[i][j] + b[i][j];
                else
                    c[i][j] = a[i][j] - b[i][j];
            }
        }
        printf("Result matrix:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
                printf("%d ", c[i][j]);
            printf("\n");
        }
    }
    else if (choice == 3)
    {
        printf("Enter rows and columns of matrix: ");
        scanf("%d %d", &r1, &c1);
        if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10)
        {
            printf("Matrix size must be between 1 and 10.\n");
            return 0;
        }
        printf("Enter matrix:\n");
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                scanf("%d", &a[i][j]);
        printf("Transpose matrix:\n");
        for (j = 0; j < c1; j++)
        {
            for (i = 0; i < r1; i++)

                printf("%d ", a[i][j]);
            printf("\n");
        }
    }
    else if (choice == 4)
    {
        printf("Enter rows and columns of first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and columns of second matrix: ");
        scanf("%d %d", &r2, &c2);
        if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
            r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10)
        {
            printf("Matrix size must be between 1 and 10.\n");
            return 0;
        }
        if (c1 != r2)
        {
            printf("Multiplication is not possible.\n");
            return 0;
        }
        printf("Enter first matrix:\n");
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                scanf("%d", &a[i][j]);
        printf("Enter second matrix:\n");
        for (i = 0; i < r2; i++)
            for (j = 0; j < c2; j++)
                scanf("%d", &b[i][j]);
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < c1; k++)
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
        printf("Product matrix:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
                printf("%d ", c[i][j]);
            printf("\n");
        }
    }
    else
    {
        printf("Invalid choice.\n");
    }
    return 0;
}
