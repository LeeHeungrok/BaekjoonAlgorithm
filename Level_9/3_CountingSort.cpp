#include <iostream>

using namespace std;

// int InputInt()
// {
//     int iInput;

//     while (true)
//     {
//         cin >> iInput;

//         if (cin.fail())
//         {
//             cin.clear();
//             cin.ignore(1024, '\n');
//             continue;
//         }
//         break;
//     }

//     return iInput;
// }

void CountingSort(int* arr, int* count, int size)
{
    int* result = new int[size + 1];

    // 카운트 배열에 카운팅을 앞에서부터 더해가져 저장
    for (int i = 1; i <= size; ++i)
    {
        count[i] += count[i - 1];
    }

    // arr 배열의 값의 카운트 배열 인덱스로 접근하고 카운트 배열의 값을 result에 저장
    for (int i = size - 1; i >= 0; --i)
    {
        result[count[arr[i]]] = arr[i];
        count[arr[i]] --;
    }

    // 정렬된 값 출력
    for (int i = 1; i <= size; ++i)
    {
        cout << result[i] << endl;
    }
}

int main()
{
    int iLength;

    cin >> iLength;
    
    int iArr[iLength];
    int* count = new int[iLength + 1];

    for (int i = 0; i < iLength; ++i)
    {
        scanf("%d", &iArr[i]);
        // 각 나온 Value를 카운트 배열에 카운팅
        count[iArr[i]] ++;
    }

    CountingSort(iArr, count, iLength);
    
    return 0;
}