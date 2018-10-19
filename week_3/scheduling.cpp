# include <bits/stdc++.h>
 
using namespace std;
 
using activity = pair<size_t, size_t>;
 
struct Cmp
{
	bool operator()(const activity &a, const activity &b)
	{
		if(a.second != b.second) 
			return (a.second < b.second);
		else
			return (a.first < b.first); 
	}
};
 
 
size_t max_task(vector<activity> &v)
{
	Cmp cmp;
	sort(v.begin(), v.end(), cmp);
 
	size_t n = v.size();
	vector<activity> append_values;
 
	append_values.push_back(v[0]);
	
	for(size_t i = 1; i < n; i++)
	{
		if(v[i].first < append_values.back().second)
			continue;
 
		append_values.push_back(v[i]);
	}
 
	return append_values.size();
}
 
 
int main()
{
	
	size_t T, N;
	cin >> T;
 
	for(size_t i = 0; i < T; i++)
	{
		cin >> N;
		vector<activity> v;
		for(size_t j = 0; j < N; j++){
			size_t beg, end;
 
			cin >> beg >> end;
			v.push_back(make_pair(beg, end));
		}
 
		cout << max_task(v) << endl;
	}
 
	return 0;
} 