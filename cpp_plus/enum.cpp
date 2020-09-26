#include <iostream>

int main()
{
	using namespace std;
	enum E_DEV_TYPE {
		DEV_LIGHT,
		DEV_COIN,
		DEV_STORE,
		DEV_DISK,
		DEV_UNKNOWN,
	};

	E_DEV_TYPE dev = (E_DEV_TYPE) 12;
	if (dev < DEV_UNKNOWN) {
		cout << "dev type: "
			<< dev << endl;
	} else {
		cout << "dev type invalid: "
			<< dev << endl;
	}
	

	
	return 0;
}
