#include <iostream>
using namespace std;

int main()
{
    // 코드 작성
    int n, sum = 0;
    cin >> n;

    for (; n > 0; n--)
    {
        sum += n;
    }
    cout << sum << endl;

    return 0;
}