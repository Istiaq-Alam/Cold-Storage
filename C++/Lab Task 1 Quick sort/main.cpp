/*#include <iostream>

using namespace std;

int partition(int arr[], int p, int r)
{
    int pivot = arr[p];
    int i = p + 1;

    cout << "Pivot element: " << pivot << endl;
    cout << "Partitioning array: ";
    for (int k = p; k <= r; ++k)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

    for (int j = p + 1; j <= r; ++j)
    {
        if (arr[j] < pivot)
        {
            arr[i] = arr[j];
            i++;
        }
    }
    arr[p] = arr[i - 1];

    cout << "After partitioning: ";
    for (int k = p; k <= r; ++k)
    {
        cout << arr[k] << " ";
    } cout << endl<< "sorted : ";
    for(int i=0; i<r; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;

    return i - 1;
}

void quickSort(int arr[], int p, int r)
{
    if (p < r)
    {

        int pi = partition(arr, p, r);

        cout << "Pivot position: " << pi << endl << endl;

        quickSort(arr, p, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}

int main()
{

    cout<<"Enter array size: ";
    int n;
    cin >> n;
    int arr[n];

    cout<<"Enter array element: ";

    for(int f=0; f<n; f++)
    {
        cin>> arr[f];
    }

    cout << "Initial array: "<<endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "Array["<<i<<"] = "<<arr[i] << endl;
    }
    cout << endl << endl;

    quickSort(arr, 0, n - 1);

    cout << "Final Sorted array: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{

    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            arr[i++]=arr[j--];
        }
    }
    cout << "After partitioning: ";
    for (int k = start; k <= end; ++k)
    {
        cout << arr[k] << " ";
    }
    cout<<endl<<"pivot : " << pivot<<endl;
    cout << "pivotindex : "<< pivotIndex<<endl;
    cout << endl;

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{

    // base case
    if (start >= end)
        return;

    // partitioning the array
    int p = partition(arr, start, end);

    // Sorting the left part
    quickSort(arr, start, p - 1);

    // Sorting the right part
    quickSort(arr, p + 1, end);
}

int main()
{
    int n,i;
    cout<<"Enter array size: ";
    cin >> n;
    int arr[n];
    cout<< "Enter array element: ";
    for (i=0; i<n; i++)
    {
        cin>> arr[i] ;
    }


    quickSort(arr, 0, n - 1);

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}










