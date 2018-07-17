#include<iostream>
#include<unordered_map>
using namespace std;

#define HASH_SIZE 1000

void printPairsWithSum(int values[], int arraySize, int sum)
{
    bool binaryMap[HASH_SIZE] = { false };

    for(int i = 0 ; i < arraySize ; i++)
    {
        int temp = sum - values[i];

		binaryMap[values[i]] = true;
		
        if(temp >= 0 && binaryMap[temp] == true)
            cout << "Pair with sum : " << sum << " is (" << values[i] << ", " << temp << ")\n";
    }
}

void printPairsWithSumUsingStl(int values[], int arraySize, int sum)
{
	unordered_map<int, bool> binaryMap;
	
	for(int i = 0 ; i < arraySize ; i++)
    {
        int temp = sum - values[i];

		binaryMap[values[i]] = true;
		
        if(temp >= 0 && binaryMap.find(temp) != binaryMap.end())
            cout << "Pair with sum : " << sum << " is (" << values[i] << ", " << temp << ")\n";
    }
}

int main()
{
    int values[] = {10, 20, 5, 63, 2, 4, 30};

    printPairsWithSumUsingStl(values, sizeof(values)/sizeof(values[0]), 40);

    return 0;
}