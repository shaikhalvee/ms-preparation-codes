#include <bits/stdc++.h>
#define NUM_THREADS	5

using namespace std;

/**
*	library: pthread.h
	pthread_create (thread, attr, start_routine, arg)
*/

struct thread_data
{
	int thread_id;
	char * message;
};

void * PrintHello(void * threadid) {
	long tid;
	tid = (long)threadid;
	cout << "Hello World! Thread ID, " << tid << endl;
	pthread_exit(NULL);
}

void * printHello(void * thread_args)
{
	thread_data * my_data;
	my_data = (thread_data *) thread_args;

	cout << "Thread ID: " << my_data->thread_id;
	cout << "  Message: " << my_data->message << endl;

	pthread_exit(NULL);
}

int main ()
{
	//ios_base::sync_with_stdio(0);
	pthread_t threads[NUM_THREADS];
	thread_data td[NUM_THREADS];
	int rc;
	int i;

	cout << "NUM_THREADS: " << NUM_THREADS << "\n";

	for( i = 0; i < NUM_THREADS; i++ ) {
		cout << "main() : creating thread, " << i << endl;
		td[i].thread_id = i;
		td[i].message = "This is the message";
		// rc = pthread_create(&threads[i], NULL, PrintHello, (void *)i);
		rc = pthread_create(&threads[i], NULL, printHello, (void *)&td[i]);	// &td[i] provides memory location of td[i]
		// struct process isn't working, don't know why.
		// found it, before finishing the pthreads, main function finishes. Thus resulting the crash

		if (rc) {
			cout << "Error:unable to create thread," << rc << endl;
			exit(-1);
		}
	}

	for(size_t i = 0; i<NUM_THREADS;++i) pthread_join(threads[i], NULL);

	//pthread_join()

	pthread_exit(NULL);
}
