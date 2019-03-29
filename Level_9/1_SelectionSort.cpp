#include <iostream>

using namespace std;

int InputInt();
void SelectionSort(int* arr, int length);
void swap(int* left, int* right);

int main()
{
    int iLength = InputInt();

    int iArr[iLength];

    for (int i = 0; i < iLength; ++i)
    {
        iArr[i] = InputInt();
    }

    SelectionSort(iArr, iLength);

    for (int i = 0; i < iLength; ++i)
    {
        cout << iArr[i] << endl;
    }

    return 0;
}

void SelectionSort(int* arr, int length)
{
    int minIndex;
    for (int i = 0; i < length; ++i)
    {
        minIndex = i;
        for(int j = i + 1; j < length; ++j)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int InputInt()
{
    int iInput;

    while (true)
    {
        cin >> iInput;

        if(cin.fail())
        {
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
        }
        break;
    }

    return iInput;
}

void swap(int* left, int* right)
{
    int temp = *left;
    *left = *right;
    *right = temp;
}