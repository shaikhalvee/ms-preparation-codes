#include <bits/stdc++.h>
using namespace std;

/// Can extract k largest/smallest number calling k times max/min heap.

void k_largest(int k, int * ara, size_t len);

int main()
{
	ios_base::sync_with_stdio(0);

	size_t len;
	int * ara;
	cout << "size of array: ";
	cin >> len;
	ara = new int[len];
	for (size_t i = 0; i < len; ++i) cin >> ara[i];
	k_largest(6, ara, len);
	for (size_t i = 0; i < len; ++i) cout << ara[i] << " ";
	cout << endl;

	return 0;
}

void k_largest(int k, int * ara, size_t len)
{
    // loop will run k times
    while (k--) {
        // full heapification of array
        for (int i = (len - 1) / 2; i >= 0; --i) {
			if (ara[i] <= ara[i << 1]) swap(ara[i], ara[i << 1]);
			if (ara[i] <= ara[(i << 1) + 1]) swap(ara[i], ara[(i << 1) + 1]);
        }
    }
}
