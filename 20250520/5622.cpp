#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 코드 작성
    string phoneNumber;
    int totalTime = 0;
    cin >> phoneNumber;

    for (int i = 0; i < phoneNumber.length(); i++)
    {
        if (phoneNumber[i] == 'A' || phoneNumber[i] == 'B' || phoneNumber[i] == 'C')
        {
            totalTime += 3;
        }
        else if (phoneNumber[i] == 'D' || phoneNumber[i] == 'E' || phoneNumber[i] == 'F')
        {
            totalTime += 4;
        }
        else if (phoneNumber[i] == 'G' || phoneNumber[i] == 'H' || phoneNumber[i] == 'I')
        {
            totalTime += 5;
        }
        else if (phoneNumber[i] == 'J' || phoneNumber[i] == 'K' || phoneNumber[i] == 'L')
        {
            totalTime += 6;
        }
        else if (phoneNumber[i] == 'M' || phoneNumber[i] == 'N' || phoneNumber[i] == 'O')
        {
            totalTime += 7;
        }
        else if (phoneNumber[i] == 'P' || phoneNumber[i] == 'Q' || phoneNumber[i] == 'R' || phoneNumber[i] == 'S')
        {
            totalTime += 8;
        }
        else if (phoneNumber[i] == 'T' || phoneNumber[i] == 'U' || phoneNumber[i] == 'V')
        {
            totalTime += 9;
        }
        else if (phoneNumber[i] == 'W' || phoneNumber[i] == 'X' || phoneNumber[i] == 'Y' || phoneNumber[i] == 'Z')
        {
            totalTime += 10;
        }
    }

    cout << totalTime << endl;
    return 0;
}