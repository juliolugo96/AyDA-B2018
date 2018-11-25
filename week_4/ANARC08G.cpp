# include <bits/stdc++.h>

using namespace std;

int f(int a, int b)
{
	a = a < 0 ? a : 0;
	b = b < 0 ? b : 0;
	return (a + b);
}

int main()
{
	int n;

	int k = 0;

	scanf("%d", &n);
	while(n != 0)
	{
		vector<int> v(n);
		k++;
		int acc = 0;
		for(short i{0}; i < n; i++)	
			for(short j{0}; j < n; j++)
			{	
				int val{0};
				scanf("%d", &val);
				acc += val;
				v[j] += val;
				v[i] -= val;
			}

		int sum = -1*accumulate(v.begin(), v.end(), 0, f);
		printf("%d. %d %d\n",k, acc, sum);
		scanf("%d", &n);
	}

	return 0;
}