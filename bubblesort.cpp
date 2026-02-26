#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, i, j, temp;

    // Input number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    // Input elements
    cout << "Enter elements:\n";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort logic
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                // swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    cout << "Sorted array:\n";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
