#include <iostream>
#include <array>

using namespace std;

int binarySearch(int arr[], int size, int numberToFind)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int middle = (low + high) / 2;

        if (arr[middle] == numberToFind)
        {
            return middle;
        }
        else if (arr[middle] < numberToFind)
        {
            low = middle + 1;
        }
        else
        {
            high = middle - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 6, 7, 8, 9, 21, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = binarySearch(arr, size, 21);

    if (index != -1)
    {
        cout << "The element is at the index of " << index << endl;
    }
    else
    {
        cout << "The element is not fount!" << endl;
    }
}