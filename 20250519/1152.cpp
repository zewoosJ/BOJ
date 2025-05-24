#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 코드 작성
    string S;
    int word = 0;
    while (cin >> S)
    {
        word++;
    }
    cout << word << endl;

    return 0;
}

/*
if (S[i] != ' ' && (i == 0 || S[i - 1] == ' '))
    count++;
*/