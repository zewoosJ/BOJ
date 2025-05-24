#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // 코드 작성
    int n, m; // n개의 바구니, m번의 역순 과정 진행
    cin >> n >> m;

    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int repeat = 0; repeat < m; repeat++)
    {
        int i, j;
        cin >> i >> j;
        for (; i < j;)
        {
            /* code */
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}