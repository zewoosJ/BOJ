#include <iostream>
using namespace std;

int main()
{
    // 코드 작성
    int arr[9];
    int maxValue = 0;
    int maxValueIndex;

    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        if (maxValue < arr[i])
        {
            maxValueIndex = i;
            maxValue = arr[i];
        }
    }

    cout << maxValue << "\n"
         << maxValueIndex + 1 << endl;

    return 0;
}