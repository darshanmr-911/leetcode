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

    int T;
    cin>>T;
    for (int i=1; i<=T; i++)
    {
        int n;
        cin >> n;
    

        if (n%2==0)
            cout << "Case #" << i << ": Even\n";
        else
            cout << "Case #" << i << ": Odd\n";
    
    
    }
    return 0;
}