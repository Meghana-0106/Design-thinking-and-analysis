#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, i, j, key;

    // Input number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    // Input elements
    cout << "Enter elements:\n";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Insertion Sort logic
    for(i = 1; i < n; i++)
    {
        key = arr[i];      // element to insert
        j = i - 1;

        // move elements greater than key one position ahead
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }

    // Print sorted array
    cout << "Sorted array:\n";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
