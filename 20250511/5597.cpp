#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 코드 작성
    vector<int> arr(30, 1); // 0-based-index 를 사용할 것이다.

    // 28개의 숫자 입력받기
    for (int i = 0; i < 28; i++)
    {
        int n;
        cin >> n;
        arr[n - 1] = 0;
    }

    for (int i = 0; i < 30; i++) // 없는 두 명 순차적으로 출력하기
    {
        if (arr[i] != 0)
        {
            cout << i + 1 << "\n";
        }
    }

    return 0;
}