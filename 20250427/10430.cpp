#include <iostream>
using namespace std;

int main()
{
    // 코드 작성
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b) % c << "\n"
         << ((a % c) + (b % c)) % c << "\n"
         << (a * b) % c << "\n"
         << ((a % c) * (b % c)) % c << endl;
    return 0;
}