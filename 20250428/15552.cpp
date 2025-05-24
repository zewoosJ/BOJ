#include <iostream>
using namespace std;

int main()
{
    // 코드 작성
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        cout << a + b << "\n";
    }

    return 0;
}