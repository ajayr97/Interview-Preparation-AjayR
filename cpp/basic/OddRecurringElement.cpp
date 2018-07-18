#include<iostream>
using namespace std;

int main()
{
	int arr[] = {1, 1, 2, 3, 5, 5, 4, 2, 4, 3, 4};
	int sizeOfArray = sizeof(arr)/sizeof(arr[0]);
	int xorOutput = 0;
	
	for(int i = 0 ; i < sizeOfArray ; i++)	
		xorOutput ^= arr[i];
		
	cout << "Odd recurring element in array is : " << xorOutput;
		
	return 0;
}
