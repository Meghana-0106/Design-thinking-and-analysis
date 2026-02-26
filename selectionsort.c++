#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, i, j, min_index, temp;

    // Input number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    // Input elements
    cout << "Enter elements:\n";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Selection Sort logic
    for(i = 0; i < n - 1; i++)
    {
        min_index = i;

        // find smallest element in remaining array
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        // swap elements
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    // Print sorted array
    cout << "Sorted array:\n";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
