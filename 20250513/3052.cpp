#include <iostream>
using namespace std;

int main()
{
    // 코드 작성
    int ans[42] = {0};           // 0~41까지의 나머지 값을 저장할 배열을 지정해준다.
    for (int i = 0; i < 10; i++) // 10번 반복되는 반복문
    {
        int n;
        int var; // 나머지 값을 의미한다
        cin >> n;
        var = n % 42;
        ans[var] = 1; // 입력받은 n의 값을 42로 나눈 나머지에 해당하는 변수를 0으로 지정한다.
    }
    int sum = 0;

    for (int i = 0; i < 42; i++) // 42번동안 반복하며 배열값이 1인 배열을 찾는다.
    {
        if (ans[i] == 1)
        {
            sum++;
        }
    }
    cout << sum << endl;

    return 0;
}