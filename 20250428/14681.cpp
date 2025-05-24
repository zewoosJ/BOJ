#include <iostream>
using namespace std;

int main()
{
    // 코드 작성
    int x, y;
    cin >> x >> y;
    if (y > 0)
    {
        if (x > 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
    else if (x > 0)
    {
        cout << "4" << endl;
    }
    else
    {
        cout << "3" << endl;
    }
    return 0;
}