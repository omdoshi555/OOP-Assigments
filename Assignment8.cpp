#include <iostream> 
using namespace std;
// Template function to sort the array
template <class T>
void sortArray(T arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        T temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Template function to display the array
template <class T>
void displayArray(T arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int choice;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n <= 0 || n > 50) {
        cout << "Invalid number of elements. Please enter a value between 1 and 50." << endl;
        return 1;
    }

    do
    {
        cout << "\nChoose data type:\n";

        cout << "1. Integer\n";
        cout << "2. Float\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int arr[50];
            cout << "Enter " << n << " integer elements: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            sortArray(arr, n);
            cout << "Sorted array (Integers): ";
            displayArray(arr, n);
            break;
        }

        case 2:
        {
            float arr[50];
            cout << "Enter " << n << " float elements: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            sortArray(arr, n);
            cout << "Sorted array (Floats): ";
            displayArray(arr, n);
            break;
        }

        case 3:
            cout << "\nExiting program..." << endl;
            break;

        default:
            cout << "\nInvalid choice! Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
