#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, sum = 0, largest, smallest;
    int *p;
    float average;
    printf("Enter number of integers: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Number of elements must be positive.\n");
        return 0;
    }
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("Memory allocation failed.\n");
        return 0;
    }
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", p + i);
    largest = *p;
    smallest = *p;
    for (i = 0; i < n; i++)
    {
        sum = sum + *(p + i);
        if (*(p + i) > largest)
            largest = *(p + i);
        if (*(p + i) < smallest)
            smallest = *(p + i);
    }
    average = (float)sum / n;
    printf("Sum = %d\n", sum);
    printf("Average = %f\n", average);
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
    free(p);
    return 0;
}
