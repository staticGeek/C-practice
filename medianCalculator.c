#include <stdio.h>

// swap function
void swap(float *first, float *second)
{
    float temp;
    temp = *first, *first = *second, *second = temp;
}

// sorting given array
void sortArr(int count, float *arr)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// median calculator function
float medianCalculator(int count, float *sorted_arr)
{
    if (count % 2 == 0)
        return (sorted_arr[(count - 1) / 2] + sorted_arr[count / 2]) / 2.0;
    return sorted_arr[count / 2];
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

    // sorting the array
    sortArr(count, arr);

    // calculating median
    float median;
    median = medianCalculator(count, arr);

    // printing the median
    printf("\nThe median of the given data is: %f", median);

    return 0;
}
