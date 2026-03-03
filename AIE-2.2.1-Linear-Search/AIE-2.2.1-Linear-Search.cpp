
#include <iostream>
#include <cassert>

using namespace std;


int LinearSearch(int Target, int Array[], size_t Size) {

	for (int i = 0; i < Size; i++) {

		if (Array[i] == Target) {
			return i;						// Another return here is safe enough to use because it immediately kills the
		}									// function, meaning the loop doesn't continue, and the -1 return never runs.

	}

	return -1;
}


int main()
{
    
	int IntArray[20] {67, 13, 3, 89, 43, 2, 19, 71, 5, 61, 97, 7, 37, 31, 17, 11, 83, 53, 23, 29};
	size_t ArraySize = sizeof(IntArray) / sizeof(IntArray[0]);				// The assessment told us the array will have 20 ints, but i'm trying to keep
																			// this modular anyways by calculating the array size instead of assuming it.
	assert(LinearSearch(3, IntArray, ArraySize) == 2);
	assert(LinearSearch(7, IntArray, ArraySize) == 11);
	assert(LinearSearch(67, IntArray, ArraySize) == 0);
	assert(LinearSearch(88, IntArray, ArraySize) == -1);

}
