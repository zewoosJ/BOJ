#include <iostream>
using namespace std;

int main()
{
    // 코드 작성
    int h, m, t, time;
    cin >> h >> m >> t;
    time = h * 60 + m + t;
    if (time >= 1440)
    {
        time -= 1440;
    }
    h = time / 60;
    m = time - (h * 60);
    cout << h << " " << m << endl;

    return 0;
}