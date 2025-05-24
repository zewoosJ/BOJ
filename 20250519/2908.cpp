#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    // 코드 작성
    string num1, num2;
    cin >> num1 >> num2;
    swap(num1[0], num1[2]);
    swap(num2[0], num2[2]);
    cout << max(stoi(num1), stoi(num2)) << endl;

    return 0;
}