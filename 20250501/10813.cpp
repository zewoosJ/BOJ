#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 코드 작성

    int n, m;

    cin >> n >> m;
    vector<int> arr(n);

    for (int array_val = 0; array_val < n; array_val++)
    {
        arr[array_val] = array_val + 1;
    }

    for (int repeat = 0; repeat < m; repeat++)
    {
        int i, j, tmp;
        cin >> i >> j;
        tmp = arr[i - 1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = tmp;
    }

    for (int array_opt = 0; array_opt < n; array_opt++)
    {
        cout << arr[array_opt] << " ";
    }

    return 0;
}