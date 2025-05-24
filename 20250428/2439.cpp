#include <iostream>
using namespace std;

int main()
{
    // 코드 작성
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int space = 0; space < n - i; space++)
        {
            cout << ' ';
        }

        for (int j = 0; j < i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}