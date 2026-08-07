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

    int T,A,B;
    
    cin >> T;
    
    for(int i = 1; i <= T; i++)
    {
        cin >> A;
        
        if(A == 0)
            cout << "Case # " << i << " : " << "Zero" << endl;
        
        else if(A < 0)
            cout << "Case # " << i << " : " << "Negative" << endl;
            
        else
            cout << "Case # " << i << " : " << "Positive" << endl;
    }

    return 0;
}