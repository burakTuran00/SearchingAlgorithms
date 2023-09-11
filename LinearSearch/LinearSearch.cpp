#include <iostream>
#include <array>

using namespace std;

int linearSearch(int arr[], int size, int numberToFind)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == numberToFind)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int array[] = {1, 2, 4, 5, 7, 8, 9, 10, 12};
    int size = sizeof(array) / sizeof(array[0]);

    int index = linearSearch(array, size, 9);

    if (index != -1)
    {
        cout << "The element is at the index of " << index << endl;
    }
    else
    {
        cout << "The element is not fount!" << endl;
    }
}
