#include <bits/stdc++.h>
using namespace std;

void max3num(int *, int);
void min3num(int *, int);

int main()
{
	ios_base::sync_with_stdio(0);
	cout << "size of ara: ";
	int size;
	cin >> size;
	int * ara = new int[size];
	for (size_t i = 0; i < size; ++i) cin >> ara[i];
	max3num(ara, size);
	min3num(ara, size);
	return 0;
}

void max3num(int *ara, int len)
{
    int max1, max2, max3;
    max1 = max2 = max3 = -INT_MIN;
	for (size_t i = 0; i < len; ++i) {
		if (ara[i] > max1) {
			max3 = max2;
			max2 = max1;
			max1 = ara[i];
		}
		else if (ara[i] > max2) {
			max3 = max2;
			max2 = ara[i];
		}
		else if (ara[i] > max3) {
			max3 = ara[i];
		}
	}
	cout<<"max first: "<<max1<<" max second: "<<max2<<" max third: "<<max3<<endl;
}

void min3num(int *ara, int len)
{
	int min1, min2, min3;
	min1 = min2 = min3 = INT_MAX;
	for (size_t i = 0; i < len; ++i) {
		if (ara[i] < min1) {
			min3 = min2;
			min2 = min1;
			min1 = ara[i];
		}
		else if (ara[i] < min2) {
			min3 = min2;
			min2 = ara[i];
		}
		else if (ara[i] < min3) {
			min3 = ara[i];
		}
	}
	cout<<"min first: "<<min1<<" min second: "<<min2<<" min third: "<<min3<<endl;
}
