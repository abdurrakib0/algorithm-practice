// 9 8 2 5 1 6 45
// 0 1 2 3 4 5 6 index
#include <stdio.h>
#include <cs50.h>

void selectionSort(int b[], int n);

int main()
{
    int a[] = {9, 8, 2, 5, 7852426, 6, 45};
    int n = sizeof(a)/sizeof(a[0]);
    selectionSort(a, n);

    for(int i = 0; i < n; i++){
        printf("%i ", a[i]);
    }
}

//selection sort
void selectionSort(int b[], int n)
{
    for(int i = 0; i < n-1; i++){
        int iMin = i;

        for(int j = i+1; j < n; j++){
            if(b[j] < b[iMin]){
                iMin = j;
            }
        }
        int temp = b[i];
        b[i] = b[iMin];
        b[iMin] = temp;
    }
}
