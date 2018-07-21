#include<iostream>
#include<cstdlib>
using namespace std;

int compareIntsAscending(const void *pointer1, const void* pointer2)
{
	int num1 = *(const int *) pointer1;
	int num2 = *(const int *) pointer2;
	
	return (num1 > num2) ? 1 : ((num1 < num2) ? -1 : 0);
}

int compareIntsDescending(const void *pointer1, const void* pointer2)
{
	int num1 = *(const int *) pointer1;
	int num2 = *(const int *) pointer2;
	
	return (num1 > num2) ? -1 : ((num1 < num2) ? 1 : 0);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
       cout << arr[i] << " ";
}

int main()
{
	int arr[] = {1, 6, 5, 2, 3, 9, 4, 7, 8};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Unsorted rray : ";
    printArray(arr, size);
 
    qsort((void *) arr, size, sizeof(arr[0]), compareIntsAscending);
 
    cout << endl << "Sorted array (Ascending) : ";
    printArray(arr, size);
    
    qsort((void *) arr, size, sizeof(arr[0]), compareIntsDescending);
 
    cout << endl << "Sorted array (Descending) : ";
    printArray(arr, size);
    
	return 0;
}
