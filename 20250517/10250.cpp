#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 코드 작성
    int t, h, w, n;
    string room;
    cin >> t;
    for (int i = 0; i < t; i++) // 전체 테스트케이스 시행이 수행되는 반복문
    {
        /* code */
        cin >> h >> w >> n;
        if ((n - 1) / h + 1 <= 9)
        {
            /* code */
            room = to_string((n - 1) % h + 1) + '0' + to_string((n - 1) / h + 1);
        }
        else
        {
            room = to_string((n - 1) % h + 1) + to_string((n - 1) / h + 1);
        }

        cout << room << "\n";
    }

    return 0;
}