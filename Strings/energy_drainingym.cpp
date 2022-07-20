#include <bits/stdc++.h>
using namespace std;
int solve(int drainenergy[], int N, int E)
{
    priority_queue<int> maxheap;
    for (int i = 0; i < N; ++i)
    {
        maxheap.push(drainenergy[i]);
    }
    int countminexercise = 0;
    while (!maxheap.empty() || E != 0)
    {
        int top = maxheap.top();
        int i = 1;
        for (int i = 0; i < 2; ++i)
        {
            if (top <= E)
            {
                E -= top;
            }
            countminexercise++;
        }
        maxheap.pop();
    }
    return countminexercise;
}
int main()
{
    int E, N;
    cin >> E >> N;
    int drainenergy[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> drainenergy[i];
    }
    cout << solve(drainenergy, N, E) << endl;
    return 0;
}