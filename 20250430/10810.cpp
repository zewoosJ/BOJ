#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 코드 작성
    // 1. 첫째 줄에 n개의 바구니와 m개의 공의 종류가 주어진다.
    int n, m;
    cin >> n >> m;
    vector<int> arr(n); // 특별히 지정하지 않을 경우 원소는 전부 0으로 초기화된다.

    // 2. 두 번째 줄부터 m개의 줄에 걸쳐서 i, j, k가 주어진다. m번 반복한다.
    for (int num = 0; num < m; num++)
    {
        int i, j, k;
        cin >> i >> j >> k;
        // 3. 각 바구니에 순차적으로 정해진 범위 i~j까지 값 k를 입력한다.
        for (; i <= j; i++)
        {
            arr[i - 1] = k;
        }
    }

    for (int num = 0; num < n; num++)
    {
        cout << arr[num] << " ";
    }
}