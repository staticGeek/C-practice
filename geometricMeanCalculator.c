#include <stdio.h>
#include <math.h>

// geometric mean calculator function
float geometricMeanCalculator(int count, float *arr)
{
    float product = 1, geometricMean;
    for (int i = 0; i < count; i++)
    {
        product *= arr[i];
    }
    geometricMean = pow(product, (1/(double)count));
    return geometricMean;
}

int main()
{
    int count;
    printf("How many numbers do you wanna input? : ");
    scanf("%d", &count);
    float arr[count - 1];

    // taking inputs
    for (int i = 0; i < count; i++)
    {
        printf("Enter value: ");
        if (scanf("%f", &arr[i]) == 0)
        {
            printf("Wrong input. program terminated");
            return -1;
        }
    }

    // calculating geometric mean
    float geometricMean;
    geometricMean = geometricMeanCalculator(count, arr);

    // printing the geometric mean
    printf("\nThe geometric mean of the given data is: %f", geometricMean);

    return 0;
}
