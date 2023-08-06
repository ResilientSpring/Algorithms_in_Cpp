#include <iostream>
using namespace std;

int factorial(int N);

int main() {

	long long result = factorial(17);

	cout << "The factorial of 17 is " << result << endl;

}


int factorial(int N) {

	if (N == 0)
		return 1;

	return N * factorial(N - 1);
}