#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int repeatPrint;
        string repeatSameWord;
        cin >> repeatPrint >> repeatSameWord;

        for (int j = 0; j < repeatSameWord.length(); j++)
        {
            for (int k = 0; k < repeatPrint; k++)
            {
                cout << repeatSameWord[j];
            }
        }
        cout << "\n";
    }

    return 0;
}