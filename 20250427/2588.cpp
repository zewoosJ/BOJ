#include <iostream>
using namespace std;

int main()
{
    // 코드 작성
    int a, b, sum1, sum2, sum3, sum;
    cin >> a >> b;
    cout << a * (b % 10) << "\n"
         << a * ((b % 100) / 10) << "\n"
         << a * (b / 100) << "\n"
         << a * b << endl;

    return 0;
}