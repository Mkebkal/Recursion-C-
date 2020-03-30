#include<iostream>
using std::cin;
using std::cout;
using std::endl;

void elevator(int floor);
int factorial(int f);
double power(double  a, double  b);

void Fibonacci(int n, unsigned long long  int a = 0, unsigned long long   int b = 1)
{
	if (n == 0)return;
	cout << a << "\n";
	Fibonacci(n - 1, b, a + b);
}
void main()
{
	setlocale(LC_ALL, "");
	cout << " Hello World ";
	cout << endl;
	int floor;
	cout << " In which floor you been: ";
	cin >> floor;
	elevator(floor);

	int f;
	cout << "Enter number to facrotial: " << endl;
	cin >> f;
	cout << factorial(f) << endl;


	int a, b;
	cout << "Enter number: " << endl;
	cin >> a;
	cout << "Enter power: " << endl;
	cin >> b;
	cout << power(a, b) << endl;
	cout << endl;


	int n;
	cout << "До какого предела вывести ряд Фибаначчи? "; cin >> n;
	Fibonacci(n);

}

void elevator(int floor)
{
	cout << "You are on the " << floor << " floor;\n";
	if (floor == 0)return;
	elevator(floor - 1);
	cout << "You are on the " << floor << " floor;\n";

}

int factorial(int f)
{

	/*return n == 0 ? 1 : factorial(n - 1)*n;*/


	if (f == 1)
	{
		return 1;
	}

	return f * factorial(f - 1);
}

double power(double a, double b)
{
	//return b == 0 ? 1 : a * power(a, b - 1);

	/*if (b == 0)return 1;
	if (b > 0)return a * power(a, b - 1);
	if (b < 0)return 1 / a * power(a, -b);*/
	return b > 0 ? a * power(a, b - 1) : b < 0 ? 1 / power(a, -b) : 1;
}



