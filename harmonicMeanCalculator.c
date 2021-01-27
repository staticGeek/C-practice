#include <stdio.h>

// harmonic mean calculator function
double harmonicMeanCalculator(int count, double *arr)
{
    double sum = 0, harmonicMean;
    for (int i = 0; i < count; i++)
    {
        sum += (1 / arr[i]);
    }
    harmonicMean = count / sum;
    return harmonicMean;
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

    // calculating harmonic mean
    double harmonicMean;
    harmonicMean = harmonicMeanCalculator(count, arr);

    // printing the harmonic mean
    printf("\nThe harmonic mean of the given data is: %lf", harmonicMean);

    return 0;
}
