#include <iostream>

using namespace std;

int InputInt();
void MergeSort(int* arr, int* sortedArr, int startIndex, int endIndex);
void Merge(int* arr, int* sortedArr, int startIndex, int endIndex, int middleIndex);

int main()
{
    int iLength = InputInt();

    int iArr[iLength];
    int iSortedArr[iLength];
    for (int i = 0; i < iLength; ++i)
    {
        iArr[i] = InputInt();
    }

    MergeSort(iArr, iSortedArr, 0, iLength - 1);

    for (int i = 0; i < iLength; ++i)
    {
        cout << iArr[i] << endl;
    }

    return 0;
}

void MergeSort(int* arr, int* sortedArr, int startIndex, int endIndex)
{

    if(startIndex < endIndex)
    {
        int middleIndex = (endIndex + startIndex) / 2;
        MergeSort(arr, sortedArr, startIndex, middleIndex);
        MergeSort(arr, sortedArr, middleIndex + 1, endIndex);

        Merge(arr, sortedArr, startIndex, endIndex, middleIndex);
    }
}

void Merge(int* arr, int* sortedArr, int startIndex, int endIndex, int middleIndex)
{
    int i = startIndex, j = middleIndex + 1;
    int sortedIndex = startIndex;

    // 좌측과 우측을 비교, Sorted Arr에 값 넣기
    while (i <= middleIndex && j <= endIndex)
    {
        // 좌측이 작을 시 좌측 넣기
        if (arr[i] <= arr[j])
        {
            sortedArr[sortedIndex] = arr[i];
            sortedIndex ++;
            i ++;
        }
        // 우측이 작을 시 우측 넣기
        else
        {
            sortedArr[sortedIndex] = arr[j];
            sortedIndex ++;
            j ++;
        }
    }

    // 좌측에서 넣지 못한거 있는지 확인
    while (i <= middleIndex)
    {
        sortedArr[sortedIndex] = arr[i];
        sortedIndex ++;
        i ++;
    }
    // 우측에서 넣지 못한거 있는지 확인
    while (j <= endIndex)
    {
        sortedArr[sortedIndex] = arr[j];
        sortedIndex ++;
        j ++;
    }

    // Sorted Arr에 있는 값 다시 Arr에 넣기
    for (int k = startIndex; k <= endIndex; ++k)
    {
        arr[k] = sortedArr[k];
    }
}

int InputInt()
{
    int iInput;

    while (true){
        cin >> iInput;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
        } 
        break;
    }

    return iInput;
}