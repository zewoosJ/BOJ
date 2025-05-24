#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 코드 작성
    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        /* code */
        string str;
        cin >> str;
        cout << str[0] << str[str.length() - 1] << "\n";
    }

    return 0;
}
