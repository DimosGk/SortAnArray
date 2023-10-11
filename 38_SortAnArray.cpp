#include <iostream>

void sort(int array[], int size);

int main()
{
    int array[] = {10, 5, 9, 1, 2, 8, 6, 4, 7, 3};
    int size = sizeof(array) / sizeof(int);

    sort(array, size);

    for(int element : array)
    {
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size)
{
    int temp;
    for(int i = 0; i < size - 1; i++) // It is "size - 1", because we don't need to compare the last element to anything. The larger values will naturally gravitate towards the end of the array.
    {
        for(int j = 0; j < size - i - 1; j++) // Once we place the larger elements all the way to the right, they should already be in order. We don't need to sort any elements that are already sorted.
        {    
            if(array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}