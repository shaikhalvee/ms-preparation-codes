#include <bits/stdc++.h>
#define NUM_THREADS	5

using namespace std;

/**
*	library: pthread.h
	pthread_create (thread, attr, start_routine, arg)
*/
void *PrintHello(void *threadid) {
	long tid;
	tid = (long)threadid;
	cout << "Hello World! Thread ID, " << tid << endl;
	pthread_exit(NULL);
}

int main ()
{
	pthread_t threads[NUM_THREADS];
	int rc;
	int i;

	for( i = 0; i < NUM_THREADS; i++ ) {
		cout << "main() : creating thread, " << i << endl;
		rc = pthread_create(&threads[i], NULL, PrintHello, (void *)i);

		if (rc) {
			cout << "Error:unable to create thread," << rc << endl;
			exit(-1);
		}
	}
	pthread_exit(NULL);
}
