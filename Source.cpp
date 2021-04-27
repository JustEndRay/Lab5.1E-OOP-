#include <iostream>
#include "LongLong.h"
#include "Object.h"
int main()
{
    cout << "Number of elements of class LongLong : " << Object::Count() << endl;

    LongLong A;
    cout << "Number of elements of class LongLong : " << Object::Count() << endl;

    LongLong B;
    cout << "Number of elements of class LongLong : " << Object::Count() << endl;
	bool init;
	do
	{
		try
		{
			init = true;
			std::cout << "LongLong A" << endl;
			std::cin >> A;
			std::cout << "\nLongLong B\n" << endl;
			std::cin >> B;
		}
		catch (Exception& e)
		{
			init = false;
			cout << e.what() << endl;
		}
		catch (invalid_argument e)
		{
			init = false;
			cout << e.what() << endl;
		}
		catch (bad_exception& e)
		{
			init = false;
			cerr << e.what() << endl;
		}
	} while (!init);

	if (A > B) { cout << "A>B" << endl; }
	else
	{
		if (A < B) { cout << "A<B" << endl; }
		else
		{
			if (A == B) { cout << "A=B" << endl; }
		}
	}

    cout << "Size of class is equal to " << sizeof(LongLong);

    return 0;


}