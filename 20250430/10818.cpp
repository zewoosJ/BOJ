#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 코드 작성
    int n, max_int = -1000000, min_int = 1000000;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max_int)
        {
            max_int = arr[i];
        }
        if (arr[i] < min_int)
        {
            min_int = arr[i];
        }
    }

    cout << min_int << " " << max_int << endl;
    return 0;
}