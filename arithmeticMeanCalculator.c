#include <stdio.h>

// arithmetic mean calculator function
double arithmeticMeanCalculator(int count, double *arr)
{
    double sum = 0, arithmeticMean;
    for (int i = 0; i < count; i++)
    {
        sum += arr[i];
    }
    arithmeticMean = sum / count;
    return arithmeticMean;
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

    // calculating arithmetic mean
    double arithmeticMean;
    arithmeticMean = arithmeticMeanCalculator(count, arr);

    // printing the arithmetic mean
    printf("\nThe arithmetic mean(average) of the given data is: %lf", arithmeticMean);

    return 0;
}
