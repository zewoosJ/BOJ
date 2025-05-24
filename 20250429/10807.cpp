#include <iostream>
using namespace std;

int main()
{
    // 코드 작성
    int n, v, sum = 0;

    int arr[101];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> v;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == v)
        {
            sum++;
        }
    }
    cout << sum << endl;

    return 0;
}