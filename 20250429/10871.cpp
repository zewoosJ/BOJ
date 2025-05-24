#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 코드 작성
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < x)
        {
            cout << arr[i] << ' ';
        }
    }

    return 0;
}