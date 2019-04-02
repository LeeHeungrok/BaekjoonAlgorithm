#include <iostream>
#include <vector>

using namespace std;

unsigned int InputInt()
{
    unsigned int iInput;

    while (true)
    {
        cin >> iInput;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(!024, '\n');
            continue;
        }
        break;
    }
    return iInput;
}

void Heapify(vector<unsigned int>& arr, int size, int i)
{
    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if (left < size && arr[left] > arr[largest])
        largest = left;

    if (right < size && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        Heapify(arr, size, largest);
    }
}

void HeapSort(vector<unsigned int>& arr)
{
    // 힙 정렬 구축
    for (int i = arr.size() / 2 - 1; i >= 0; --i)
    {
        Heapify(arr, arr.size(), i);
    }

    // 맨 위의 값을 하나씩 뒤로 이동시키면서 힙 정렬 구축
    for (int i = arr.size() - 1; i >= 0; --i)
    {
        swap(arr[0], arr[i]);
        Heapify(arr, i, 0);
    }
}

int main()
{
    unsigned int iLength = InputInt();
    vector<unsigned int> iArr;

    for (unsigned int i = 0; i < iLength; ++i)
    {
        iArr.push_back(InputInt());
    }

    HeapSort(iArr);
    
    for (unsigned int i = 0; i < iLength; ++i)
    {
        cout << iArr[i] << endl;
    }

    return 0;
}

