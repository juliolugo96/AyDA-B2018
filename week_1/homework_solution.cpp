# include <iostream>
# include <vector>

using namespace std;

using ull = unsigned long long int; 

bool filter(int a)
{
	return a > 9 and  a < 27;
}

ull test_char(vector<ull> &v, int i, string s)
{
	string conv;
    conv = s[i - 2];
	conv += s[i - 1];

	if(filter(atoi(conv.c_str())))
		return v[i - 2];
	else
		return 0;
}


int main()
{
	string s;

    while(true){
        getline(cin, s);

        if(s == "0")
            break;

        size_t n = s.size();
        vector<ull> v(5000);
        
        v[0] = v[1] = 1;

        for(int i = 2; i <= n; i++)
        {
            if(s[i - 1] != '0')
                v[i] = v[i - 1];

            v[i] +=  test_char(v, i, s);
        }

        cout << v[n] << endl;
    }


    return 0;    
		
}