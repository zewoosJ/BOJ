#include <iostream>
using namespace std;

int main()
{
    // 코드 작성
    int h, m, time;
    cin >> h >> m;
    time = h * 60 + m - 45; // 일어나야 할 시간을 분단위로 저장
    if (time < 0)
    {
        time += 1440; // 0보다 작으면 24시간에 대항하는 분을 더함.
    }
    h = time / 60; //
    m = time - (h * 60);
    cout << h << " "
         << m << endl;

    return 0;
}