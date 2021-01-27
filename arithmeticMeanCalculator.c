#include <stdio.h>

// arithmetic mean calculator function
float arithmeticMeanCalculator(int count, float *arr)
{
    float sum=0, arithmeticMean;
     for (int i = 0; i < count; i++)
    {
        sum += arr[i];
    }
    arithmeticMean = sum/count;
    return arithmeticMean;
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

    // calculating arithmetic mean
    float arithmeticMean;
    arithmeticMean = arithmeticMeanCalculator(count, arr);

    // printing the arithmetic mean
    printf("\nThe arithmetic mean(average) of the given data is: %.2f", arithmeticMean);

    return 0;
}
