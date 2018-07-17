#include <iostream>
using namespace std;

int findCandidate(int *, int);
int isMajority(int *, int, int);

void printMajority(int a[], int size)
{
    int cand = findCandidate(a, size);

    if (isMajority(a, size, cand))
        cout << "Majority element is : " << cand;
    else
        cout << "No Majority Element";
}

int findCandidate(int a[], int size)
{
    int maj_index = 0, count = 1;
    int i;
    for (i = 1; i < size; i++)
    {
        if (a[maj_index] == a[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }
    return a[maj_index];
}

int isMajority(int a[], int size, int cand)
{
    int i, count = 0;
    for (i = 0; i < size; i++)
        if (a[i] == cand)
            count++;
    if (count > size / 2)
        return 1;
    else
        return 0;
}

int main()
{
    int a[] = {1, 2, 2, 2, 3};
    int size = (sizeof(a)) / sizeof(a[0]);
    printMajority(a, size);
    return 0;
}