// Special credits to David Cedres

# include <bits/stdc++.h>

using namespace std;

using memory = map<pair<string, string>, string>;

string scs(string a, string b, memory &m)
{
    string ret_val;
    auto p = make_pair(a, b);
    
    if(m[p] != "")
        return m[p];

    if(a.empty())
        ret_val = b;
    else if(b.empty())
        ret_val = a;
    else if(a[0] == b[0])
        ret_val = a[0] + scs(a.substr(1), b.substr(1), m);
    else
    {
        auto b1 = scs(a, b.substr(1), m);
        auto b2 = scs(a.substr(1), b, m);
        ret_val = b1.size() < b2.size() ? b[0] + b1 : a[0] + b2;
    }

    m[p] = ret_val;

    return ret_val;
}

int main()
{
    memory mem;
    string a, b;

    while(!cin.eof())
    {
        cin >> a >> b;
        cout << scs(a, b, mem) << endl;
    }

    return 0;
}