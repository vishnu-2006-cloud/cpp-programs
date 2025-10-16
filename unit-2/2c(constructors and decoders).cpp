#include <iostream>
using namespace std;

class Demo 
{
public:
    Demo() 
	{
        cout << "Constructor called: Object is created." << endl;
    }

    ~Demo() 
	{
        cout << "Destructor called: Object is destroyed." << endl;
    }
};

int main() {
    cout << "Inside main function." << endl;

    Demo obj; 

    cout << "End of main function." << endl;

    return 0;
}

