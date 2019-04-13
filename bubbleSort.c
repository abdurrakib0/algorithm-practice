// -2, 4, 8, 5, 9647, 0, 250, 350 -array
//  0  1  2  3   4    5   6    7  -index

#include <stdio.h>
#include <cs50.h>

void bubbleSort(int b[], int m);

int main()
{
    int a[] = {-2, 4, 8, 5, 9647, 0, 250, 350};
    int n = sizeof(a)/sizeof(a[2]);

    bubbleSort(a, n);

    printf("\nafter sorting the array: ");
    for(int i = 0; i < n; i++){
        printf("%i ", a[i]);
    }
}

//bubble sort function
void bubbleSort(int b[], int m)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < (m-1); j++)
        {
            if(b[j] > b[j+1]){
                int temp;
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
}
