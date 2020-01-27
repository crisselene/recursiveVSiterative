//CRISTINA DÍEZ SOBRINO
//RECURSIVE
#include<iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int fibonacciRecursion(int nthNumber) {
    //use recursion
    if (nthNumber == 0) {
        return 0;
    } else if (nthNumber == 1) {
        return 1;
    }
    return fibonacciRecursion(nthNumber - 1) + fibonacciRecursion(nthNumber - 2);
}


int main()
{
	int num = 40;
	auto start = high_resolution_clock::now();
    cout <<"RECURSIVE ";
	cout << "Fibonnacci de " << num << " es " << fibonacciRecursion(num) << endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Tiempo "<< duration.count()<< " microseconds" << endl;
	return 0;
}

/*


//ITERATIVE
#include<iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
// function to find factorial of given number

	  int fibonacciLoop(int nthNumber) {
        //use loop
        int previouspreviousNumber, previousNumber = 0, currentNumber = 1;

        for (int i = 1; i < nthNumber ; i++) {

            previouspreviousNumber = previousNumber;

            previousNumber = currentNumber;

            currentNumber = previouspreviousNumber + previousNumber;

        }
        return currentNumber;
    }


int main()
{
	long num = 40;
	auto start = high_resolution_clock::now();
	cout <<"ITERATIVE ";
	cout << "Fibonnaci de  " << num << " es " << fibonacciLoop(num) << endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Tiempo: "
	     << duration.count()<< " microseconds" << endl;
       return 0;
}
*/
// Checked
