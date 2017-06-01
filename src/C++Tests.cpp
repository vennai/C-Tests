//============================================================================
// Name        : C++Tests.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
using namespace std;

typedef std::unique_ptr<int> IntPtr;

void passUniquePtr(IntPtr &x)
{
	//auto y =x;
}


int main() {
	IntPtr up = std::make_unique<int>(1298);
	//cout << up. << "--> Is the Unique ptr content" << endl;
	passUniquePtr(up);
	IntPtr up2;
	up2=up;
	cout << up.get() << "--> Is the Unique ptr content with get " << endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
