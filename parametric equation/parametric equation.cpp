// parametric equation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float a, b, c, d, f, e, x, y, E1;
	cout << " You have two equations which type is: ax+by=c " << endl << endl;
	cout << " First equation: " << endl;
	cout << " Enter a " << endl;
	cin >> a;
	cout << " Enter b " << endl;
	cin >> b;
	cout << " Enter c " << endl;
	cin >> c;
	cout << " Your first equation is " << a << "x+" << b << "y=" << c << endl << endl;
	cout << " Second equation: " << endl;
	cout << " Enter a " << endl;
	cin >> d;
	cout << " Enter b " << endl;
	cin >> f;
	cout << " Enter c " << endl;
	cin >> e;
	cout << " Your second equation is " << d << "x+" << f << "y=" << e << endl << endl;
	if (a / d == b / f && b / f != c / e)
	{/*a / b == d / f && b / b == f / f && c / b != e / f*/
		cout << " The systeme is INFINITE(IN R) " << endl;

	}
	else if (a / d == b / f && b / f == c / e)
	{/*a / b == d / f && b / b == f / f && c / b == e / f*/
		cout << " The systeme has inlimited solutions (x,y)="<<"(x"<<","<<c/b<<"-"<<a/b<<"x)" << endl;

	}
	else
	{
		E1 = b * (-d) + f * a;
		y = (c * (-d) + e * a) / E1;
		x = (c - b * y) / a;
		cout << " The systeme has one single solution: (x,y)=("<<x<<","<<y<<")"<<endl;

	}





	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
