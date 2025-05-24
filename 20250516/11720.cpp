#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 코드 작성
    string n;
    int count, sum = 0;
    cin >> count >> n;

    for (int i = 0; i < count; i++)
    {
        sum += n[i] - '0';
    };

    cout << sum << endl;

    return 0;
}