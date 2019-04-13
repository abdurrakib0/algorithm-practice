#include <stdio.h>
#include <cs50.h>

int binarySearch(int a[], int start, int end, int x); // binary search function prototype

int main()
{
    int numbers[] = {7, 8, 9, 85, 95, 100}; //sample array
    int n = sizeof(numbers) / sizeof(numbers[5]); //counting how many elements in the array
    int x = get_int("which number do you want to find?: "); //user input
    int result = binarySearch(numbers, 0, n, x); //calling the binary search function & storing return value in result

    if(result == -1) printf("sorry not found.\n"); //result analysing it by return value from the binarySearch function
    else printf("found the number and index of your number is %i\n", result); //result analysing it by return value from the binarySearch function
}

// binary search function
int binarySearch(int a[], int start, int end, int x) // this function return index value so it's an integer
{
    if(end >= start) //it will search untill the arrays end
    {
        int mid = (start + end)/2; // find the mid index of the array
        if (a[mid] == x) return mid; // first we look at the middle index, if it matches our desired number then return mid index, program will end here
        else if (x > a[mid]) return binarySearch(a, mid+1, end, x); // recursive call, then we look at th right half of the array if it matches our desired number then return index, program will end here
        else return binarySearch(a, mid-1, start, x); // recursive call, then we look at th right half of the array if it matches our desired number then return index, program will end here
    }
    else return -1; // not found the desired number
}
