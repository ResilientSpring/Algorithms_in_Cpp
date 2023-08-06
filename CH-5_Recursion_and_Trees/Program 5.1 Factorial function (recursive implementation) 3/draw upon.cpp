#include <iostream>
using namespace std;

long long factorial(long long N);

int main() {

    long long result = factorial(17);

	cout << "The factorial of 17 is " << result << endl;

}


long long factorial(long long N) {

	if (N == 0)
		return 1;

	return N * factorial(N - 1);
}