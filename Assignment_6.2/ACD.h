#include "Call.h"
// TODO:  Include a header for a queue.  You may use
// the one we made in class (#include "Queue.h")  
// or the one built in to C++ (#include <queue>).

#include "Queue.h"
using namespace std;

class ACD{
public:
	void newCall();
	void handleCall();
	void display();
	bool isCallWaiting();
private:
	// TODO:  Declare a queue named "callQueue";
    Queue<Call> callQueue;
	string random(int min, int max);
};
