#include <iostream>
using namespace std;

int main()
{
    // 코드 작성
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << ">" << endl;
    }
    else if (a < b)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "==" << endl;
    }

    return 0;
}