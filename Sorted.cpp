#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        long long A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        bool sorted = true;
        for (int i = 0; i < N-1; i++)
        {
            if (A[i] > A[i + 1])
            {
                sorted = false;
                break;
            }
        }
        if (sorted)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}