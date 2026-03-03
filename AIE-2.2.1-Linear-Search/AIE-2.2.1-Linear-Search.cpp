
#include <iostream>

using namespace std;


int LinearSearch(int Target, int Array[], size_t Size) {

	for (int i = 0; i < Size; i++) {

		if (Array[i] == Target) {
			return i;
		}

	}

	return -1;
}


int main()
{
    
}
