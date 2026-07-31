#include <iostream>
using namespace std;

#define ll long long int
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

    int a,b;
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a>>b;
        cout << a+b << endl;
    }

    return 0;
}