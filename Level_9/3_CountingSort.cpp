#include <iostream>

using namespace std;

int main()
{
    int iLength;

    // 시간초과 해결
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    cin >> iLength;
    
    int count[10001] = {};

    int iInput;
    for (int i = 0; i < iLength; ++i)
    {
        cin >> iInput;
        count[iInput] ++;
    }

    for (int i = 1; i < 10001; ++i)
    {
        if (count[i] > 0)
        {
            for (int j = 0; j < count[i]; ++j)
            {
                cout << i << '\n';
            }
        }
    }

    return 0;
}