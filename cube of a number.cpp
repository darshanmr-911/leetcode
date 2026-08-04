#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T,N,cube;

    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        cin >> N;
        
        cube = N * N * N ;

        cout << "Case #" << i <<" : "<< cube << endl;

    }

    return 0;
}