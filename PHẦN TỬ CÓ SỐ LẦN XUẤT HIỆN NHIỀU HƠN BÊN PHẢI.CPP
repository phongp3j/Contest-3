#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n], d[100005] = {0};
        for (int &x : a)
        {
            cin >> x;
            d[x]++;
        }
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && d[a[i]] > d[a[st.top()]])
            {
                b[st.top()] = a[i];
                st.pop();
            }
            st.push(i);
        }
        while (!st.empty())
        {
            b[st.top()] = -1;
            st.pop();
        }
        for (int x : b)
            cout << x << " ";
        cout << endl;
    }
}