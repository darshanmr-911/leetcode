// Problem Statement
// Given T test cases, each containing two integers A and B.

// Print the larger of the two numbers.

// ---

// Input Format
// - First line contains T.
// - Each of the next T lines contains two integers A and B.

// ---

// Output Format
// For each test case print:

// Case #x: maximum_number

// ---

// Constraints
// - 1 ≤ T ≤ 100
// - 0 ≤ A, B ≤ 10^9

// ---

// Sample Input
// 5 
// 10 20 
// 50 30 
// 4 4 
// 100 99 
// 1 2

// Sample Output
// Case #1: 20 
// Case #2: 50 
// Case #3: 4 
// Case #4: 100 
// Case #5: 2

// ---

// Explanation
// Print the greater value between A and B for every test case.



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

    int T,A,B;

    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        cin >> A >> B;
        if (A < B)
        {
            cout << "Case #"<< i << " : " << B << endl;

        }
        else
        {
            cout << "Case #"<< i << " : " << A << endl;
        }
    }

    return 0;
}

// Time complexity O(T)
// Space complexity O(1)