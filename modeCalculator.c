#include <stdio.h>

// mode calculator function
double modeCalculator(int count, double *arr, int *maxOccurrence)
{
    double mode;
    for (int i = 0; i < count; i++)
    {
        int occurrence = 0;
        for (int j = i; j < count; j++)
        {
            if (arr[i] == arr[j])
            {
                occurrence++;
            }
        }
        if (occurrence > *maxOccurrence)
        {
            *maxOccurrence = occurrence;
            mode = arr[i];
        }
    }
    return mode;
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

    // calculating mode
    double mode;
    int occurrence = 0;
    mode = modeCalculator(count, arr, &occurrence);

    // printing the mode
    printf("\nThe mode of the given data is: %lf\nOccurrence : %d", mode, occurrence);

    return 0;
}
