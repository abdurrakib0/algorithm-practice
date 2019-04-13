#include <stdio.h>
#include <cs50.h>

bool linearSearch(int b[], int n, int x); // function prototype

int main()
{
    int a[] = {2, 45, -1, 0, 25, 29, 78, 4528}; //sample arry
    int size = sizeof(a)/sizeof(a[0]); //counting hoe many elements in the array
    int find = get_int("which number do you want to find?: "); // user input

    int result = linearSearch(a, size, find); //function call

    if(result == true) printf("found the number in the array\n");
    else printf("sorry\n");


}

// linear search function
// this function will return only true false, if the element presents or not.

bool linearSearch(int b[], int n, int x)
{
    for(int i = 0; i <= n; i++) //to iterate through every element of the array
    {
        if(b[i] == x) return true; //if we find the the number in the sample array it will return true
    }

    return false; //if the number dosen't exist in the array it will return false
}
