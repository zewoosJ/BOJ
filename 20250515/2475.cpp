#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 코드 작성
    vector<int> arr(5);
    int chk = 0;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin >> arr[i];
        chk += arr[i] * arr[i];
    }

    cout << chk % 10 << endl;

    return 0;
}