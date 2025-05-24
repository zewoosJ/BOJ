#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // 코드 작성
    string input;
    vector<int> arr(26, -1);
    cin >> input;
    for (int i = 0; i < input.length(); i++)
    {
        if (arr[int(input[i]) - 97] == -1)
        {
            arr[int(input[i]) - 97] = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}