#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    // 코드 작성
    int a, b, c;
    string result;
    vector<int> numArray(10, 0);
    cin >> a >> b >> c;
    result = to_string(a * b * c);
    for (int i = 0; i < result.length(); i++)
    {
        numArray[result[i] - '0'] += 1;
    }

    for (int i = 0; i < numArray.size(); i++)
    {
        cout << numArray[i] << "\n";
    }
    cout << endl;

    return 0;
}