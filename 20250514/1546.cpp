#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 코드 작성
    int count;
    cin >> count;
    vector<double> arr(count); // count 개의 과목의 각 점수를 배열 형태로 저장한다.
    cout.precision(10);
    double sum = 0;
    double max_each_score = 0;
    for (int i = 0; i < count; i++)
    {
        /* code */
        double each_score;
        cin >> each_score;
        arr[i] = each_score;
    }

    for (int i = 0; i < count; i++)
    {
        /* code */
        if (max_each_score < arr[i])
        {
            /* code */
            max_each_score = arr[i];
        }
    }

    for (int i = 0; i < count; i++)
    {
        /* code */
        arr[i] = arr[i] / max_each_score * 100;
    }

    for (int i = 0; i < count; i++)
    {
        /* code */
        sum += arr[i];
    }
    cout << fixed;
    cout << sum / (double)count << endl;

    return 0;
}