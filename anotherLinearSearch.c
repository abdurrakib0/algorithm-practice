#include <stdio.h>
#include <cs50.h>

int linearSearch(int b[], int n, int x); // function prototype

int main()
{
    int a[] = {2, 45, -1, 0, 25, 29, 78, 4528}; //sample arry
    int size = sizeof(a)/sizeof(a[0]); //counting hoe many elements in the array
    int find = get_int("which number do you want to find?: "); // user input

    int result = linearSearch(a, size, find); //function call

    if(result == -1) printf("sorry not found\n"); //-1 means the number isn't in the array
    else printf("found the number in the array and index: %i\n", result); //we found the number and the index will return index, stored in result variable


}

// linear search function
// this function will return index of the number, if the element presents or not in array.

int linearSearch(int b[], int n, int x)
{
    for(int i = 0; i <= n; i++) //to iterate through every element of the array
    {
        if(b[i] == x) return i; //if we find the the number in the sample array it will return the index
    }

    return -1; //if the number dosen't exist in the array it will return -1
}
