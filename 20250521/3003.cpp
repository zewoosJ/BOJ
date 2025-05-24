#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 코드 작성
    vector<int> whitePiece = {1, 1, 2, 2, 2, 8};
    vector<int> currentPiece(6, 0);
    for (int i = 0; i < currentPiece.size(); i++)
    {
        cin >> currentPiece[i];
        whitePiece[i] -= currentPiece[i];
    }

    for (int i = 0; i < whitePiece.size(); i++)
    {
        cout << whitePiece[i] << " ";
    }
    cout << endl;

    return 0;
}