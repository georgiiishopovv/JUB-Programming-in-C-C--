#include <iostream>
using namespace std;

#ifndef _TEST_
#define _TEST_

class Test {
public:
   	Test();
   	~Test();
};
#endif

#include <iostream>
using namespace std;

// just print something when constructor/destructor is called.

Test::Test() {
	cout << "constructor for Test." << endl;
}

Test::~Test() {
	cout << "destructor for Test." << endl;
}

#ifndef _ERROR_
#define _ERROR_
#include <cstring>

/*
	defines an Error class
	receives objects via throw on exception

	provide methods to give additional information about error
*/
class Error {
	private:
		char msg[81];
	public:
		Error(const char * m) { strncpy(msg, m, 80); }
		~Error() {}
		const char *showMsg() const { return msg; }
};
#endif

#include <iostream>
using namespace std;
	
int main () {
	char *buffer;
	int mb;
	try {
		cout << "How many MB should be reserved? ";
		cin >> mb;
		if (mb <= 0)
			throw "Error getting memory!";
		buffer = new char[256 * 4 * 1024 * mb];
	}
	catch (const char * str){
		cout << "Exception: " << str << endl;
		return 1;
	}
	cout << "Programm completed without errors." << endl;
	return 0;
}

void function1() {
	try {
		Test t;
		cout<< "Starting function1. "
				"Exception 'Error' follows." << endl;
		throw Error("Error in function1.");
	}
	catch (Error e) {
		cout << "Starting catch-block in function1." << endl;
		cout << "Error in function1." << endl;
		throw;
	}
}

int main() {
	cout << "Starting program." << endl;
	try {
		cout << "Starting try-block, 'function1'"
					" is being called." << endl;
		function1();
	}
	catch(Error e) {
		cout << "Starting catch-block for "
					"'Error'-objects." << endl;
		cout << e.showMsg() << endl;
	}
	catch(char *str) {
		cout << "Starting catch-block for "
					"strings: " << str << endl;
	}
	cout << "Back in 'main'. Program "
				"stops." << endl;
	return 0;
}