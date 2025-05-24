#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 코드 작성
    int n;
    vector<int> arr(31, 0); // 0번째 배열 쓰지 말기

    for (int i = 0; i < 28; i++)
    {
        cin >> n;
        arr[n] = 1;
    }

    for (int i = 1; i <= 30; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << "\n";
        }
    }

    return 0;
}