#include <iostream>

using namespace std;

int InputInt();
void BubbleSort(int* arr, int length);
void swap(int* left, int* right);

int main()
{
    int iLength = InputInt();

    int iArr[iLength];

    for (int i = 0; i < iLength; ++i)
    {
        iArr[i] = InputInt();
    }

    BubbleSort(iArr, iLength);

    for (int i = 0; i < iLength; ++i)
    {
        cout << iArr[i] << endl;
    }

    return 0;
}

void BubbleSort(int* arr, int length)
{
    for (int i = 0; i < length; ++i)
    {
        for (int j = 0; j < length - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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