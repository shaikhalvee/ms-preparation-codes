#include <bits/stdc++.h>
#define MAX 10000000000
using namespace std;

vector<unsigned long long> cycle_len(200000009, 0);

unsigned long long update(unsigned long long);
int ct =0;
int main()
{
	unsigned long long i, j;
	cycle_len[1] = 1;
	while (scanf("%llu %llu", &i, &j) == 2) {
		if (i > j) swap(i, j);
		//cout << i << " " << j << "\n";
		unsigned long long max = update(j);
		//cout << max;
        for (unsigned long long start = i; start < j; start++) {
			unsigned long long cur = update(start);
			//cout << "crash 1\n";
			max = cur > max ? cur : max;
        }
		printf("%llu %llu %llu\n", i, j, max);
	}
	return 0;
}

unsigned long long update(unsigned long long num)
{
	if (!cycle_len[num])
		cycle_len[num] = (num % 2) ? update(3 * num + 1) + 1 : update(num >> 1) + 1;
	ct++;
	if(ct%1000==0)printf("%d \n",ct);
	return cycle_len[num];
}
