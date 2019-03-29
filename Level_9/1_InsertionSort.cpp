#include <iostream>

using namespace std;

void InsertionSort(int* arr, int length);
int InputInt();

int main()
{
    int iLength;

    iLength = InputInt();
    
    int iArr[iLength];

    for (int i = 0; i < iLength; ++i)
    {
        iArr[i] = InputInt();
    }

    InsertionSort(iArr, iLength);

    for (int i = 0; i < iLength; ++i)
    {
        cout << iArr[i] << endl;
    }
    
    return 0;
}

void InsertionSort(int* arr, int length)
{
    int j;
    for (int i = 0; i < length; ++i)
    {
        int curValue = arr[i];
        for (j = i - 1; j >= 0; --j)
        {
            if(arr[j] > curValue)
                arr[j + 1] = arr[j];
            else
                break;
        }
        arr[j + 1] = curValue;
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