#include <stdio.h>

// swap function
void swap(float *first, float *second)
{
    float temp;
    temp = *first, *first = *second, *second = temp;
}

int main()
{
    int count;
    printf("How many numbers do you wanna input? : ");
    scanf("%d", &count);
    float n[count - 1];

    // taking inputs
    for (int i = 0; i < count; i++)
    {
        printf("Enter value: ");
        scanf("%f", &n[i]);
    }
    
    // sorting
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count-i-1; j++)
        {
            if (n[j]>n[j+1])
            {   
                swap(&n[j],&n[j+1]);
            }
            
        }
        
    }

    
    // calculating median
    double median;
    if (count%2 == 0) median = (n[(count-1)/2]+n[count/2])/2.0;
    else median = n[count/2];

    printf("The median of the given data is: %lf",median);

    return 0;
}
