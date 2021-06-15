#include <bits/stdc++.h>
using namespace std;
int max(int a, int b) { return (a > b) ? a : b; }
int kSk(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0)
        return 0;
    if (wt[n - 1] > W)
        return kSk(W, wt, val, n - 1);
    else
        return max(
            val[n - 1]
                + kSk(W - wt[n - 1],
                           wt, val, n - 1),
            kSk(W, wt, val, n - 1));
}
int main()
{
    int wt[] = { 2,1,3,2};
    int val[] = { 12,10,21,15 };
    int W = 7;
    int n = sizeof(val) / sizeof(val[0]);
    cout << kSk(W, wt, val, n);
    return 0;
}
