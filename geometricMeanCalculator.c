#include <stdio.h>
#include <math.h>

// geometric mean calculator function
double geometricMeanCalculator(int count, double *arr)
{
    double product = 1, geometricMean;
    for (int i = 0; i < count; i++)
    {
        product *= arr[i];
    }
    geometricMean = pow(product, (1 / (double)count));
    return geometricMean;
}

int main()
{
    int count;
    printf("How many numbers do you wanna input? : ");
    scanf("%d", &count);
    double arr[count - 1];

    // taking inputs
    for (int i = 0; i < count; i++)
    {
        printf("Enter value: ");
        if (scanf("%lf", &arr[i]) == 0)
        {
            printf("Wrong input. program terminated");
            return -1;
        }
    }

    // calculating geometric mean
    double geometricMean;
    geometricMean = geometricMeanCalculator(count, arr);

    // printing the geometric mean
    printf("\nThe geometric mean of the given data is: %lf", geometricMean);

    return 0;
}
