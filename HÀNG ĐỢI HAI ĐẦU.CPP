#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<int> dq;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "PUSHBACK")
        {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        if (s == "PUSHFRONT")
        {
            int x;
            cin >> x;
            dq.push_front(x);
        }
        if (s == "POPBACK")
        {
            if (dq.size())
            {
                dq.pop_back();
            }
        }
        if (s == "POPFRONT")
        {
            if (dq.size())
            {
                dq.pop_front();
            }
        }
        if (s == "PRINTFRONT")
        {
            if (dq.size())
            {
                cout << dq.front() << endl;
            }
            else
            {
                cout << "NONE\n";
            }
        }
        if (s == "PRINTBACK")
        {
            if (dq.size())
            {
                cout << dq.back() << endl;
            }
            else
            {
                cout << "NONE\n";
            }
        }
    }
}