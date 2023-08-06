#include <iostream>
using namespace std;

int factorial(int N);

int main() {



}


int factorial(int N) {

	if (N == 0)
		return 1;

	return N * factorial(N - 1);
}