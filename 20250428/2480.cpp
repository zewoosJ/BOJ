#include <iostream>
using namespace std;

int main()
{
    // 코드 작성
    int a, b, c;
    cin >> a >> b >> c;
    if ((a == b) && (a == c))
    {
        cout << 10000 + a * 1000 << endl;
    }
    else if (a == b || a == c)
    {
        cout << 1000 + a * 100 << endl;
    }
    else if (b == c)
    {
        cout << 1000 + b * 100 << endl;
    }
    else
    {
        int max_val = a;
        if (max_val < b)
            max_val = b;
        if (max_val < c)
            max_val = c;

        cout << max_val * 100 << endl;
    }

    return 0;
}