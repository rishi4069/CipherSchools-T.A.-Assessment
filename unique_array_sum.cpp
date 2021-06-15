#include <bits/stdc++.h>
using namespace std;
vector<int>num_arr(int N)
{
    vector<int> v;
    for (int i = 1; i <= N / 2; i++) {
        v.push_back(i);
        v.push_back(-i);
    }
    if (N % 2 == 1)
        v.push_back(0);

    return v;
}
int main()
{
    int N;
    cin>>N;
    vector<int> v;
    v=num_arr(N);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
