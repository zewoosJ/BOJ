#include <iostream>
using namespace std;

int main()
{
    // 코드 작성
    int a, b, t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a + b << "\n";
    }

    return 0;
}