#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int main()
{
	while (true)
	{
		float a1, b1, c1, a2, b2, c2, D, Dx, Dy, x, y;
		cout << " You have two equations which type is: ax+by=c " << endl << endl;
		cout << " First equation: " << endl;
		cout << " Enter a " << endl;
		cin >> a1;
		cout << " Enter b " << endl;
		cin >> b1;
		cout << " Enter c " << endl;
		cin >> c1;
		cout << " Your first equation is " << a1 << "x+" << b1 << "y=" << c1 << endl << endl;
		cout << " Second equation: " << endl;
		cout << " Enter a " << endl;
		cin >> a2;
		cout << " Enter b " << endl;
		cin >> b2;
		cout << " Enter c " << endl;
		cin >> c2;
		cout << " Your second equation is " << a2 << "x+" << b2 << "y=" << c2 << endl << endl;
		D = a1 * b2 - a2 * b1;
		Dx = b2 * c1 - b1 * c2;
		Dy = a1 * c2 - a2 * c1;
		if (a1 == 0 && b1 == 0 && c1 == 0 && a2 == 0 && b2 == 0 && c2 == 0)
		{
			cout << "The system is indefinite: x e R , y e R" << endl;
			cout << "======================================================================" << endl << endl;
		}
		else if (a1 == 0 && b1 == 0 && c1 != 0 || a2 == 0 && b2 == 0 && c2 != 0)
		{
			cout << "The systeme is Imposible" << endl;
			cout << "======================================================================" << endl << endl;
		}
		else if (D == 0 && Dx == 0 && Dy == 0)
		{
			if (a1 == 0 && b1 == 0 && c1 == 0)
			{
				if (a2 != 0 && b2 == 0)
				{
					cout << "The systeme has inlimited solutions (x,y)=(" << c2 / a2 << ",k) k e R" << endl;
				}

				else if (a2 == 0 && b2 != 0)
				{
					cout << "The systeme has inlimited solutions (x,y)=(k," << c2 / b2 << ") k e R" << endl;
				}
				else if (a2 != 0 && b2 != 0)
				{
					if (c2 == 0)
					{
						cout << "The systeme has inlimited solutions (x,y)=(k," << -b2 / a2 << "k) k e R" << endl;
					}
					else {
						cout << "The systeme has inlimited solutions (x,y)=(k," << c2 / a2 << -b2 / a2 << "k) k e R" << endl;
					}

				}

			}

			else if (a2 == 0 && b2 == 0 && c2 == 0)
			{
				if (a1 != 0 && b1 == 0)
				{
					cout << "The systeme has inlimited solutions (x,y)=(" << c1 / a1 << ",k) k e R" << endl;
				}

				else if (a1 == 0 && b1 != 0)
				{
					cout << "The systeme has inlimited solutions (x,y)=(k," << c1 / b1 << ") k e R" << endl;
				}
				else if (a1 != 0 && b1 != 0)
				{
					if (c1 == 0)
					{
						cout << "The systeme has inlimited solutions (x,y)=(k," << -b1 / a1 << "k) k e R" << endl;
					}
					else {
						cout << "The systeme has inlimited solutions (x,y)=(k," << c1 / a1 << -b1 / a1 << "k) k e R" << endl;
					}

				}

			}
			else if (a1 == 0 && b1 != 0 && a2 == 0 && b2 != 0)
			{
				cout << "The systeme has inlimited solutions (x,y)=(k," << c1 / b1 << ") k e R" << endl;
			}
			else if (a1 != 0 && b1 == 0 && a2 != 0 && b2 == 0)
			{
				cout << "The systeme has inlimited solutions (x,y)=(" << c1 / a1 << ",k) k e R" << endl;
			}
			else if (a1 != 0 && b1 != 0 && c1 == 0 /*&& a2 != 0 && b2 != 0 && c2 == 0*/)
			{
				cout << "The systeme has inlimited solutions (x,y)=(k," << -b1 / a1 << "k) k e R" << endl;

			}
			else
			{
				cout << "The systeme has inlimited solutions (x,y)=(k," << c1 / a1 << -b1 / a1 << "k) k e R" << endl;
				cout << "======================================================================" << endl << endl;
			}





		}
		else if (D == 0 && Dx != 0 || D == 0 && Dy != 0)
		{
			cout << "The systeme is Imposible" << endl;
			cout << "======================================================================" << endl << endl;
		}
		else
		{
			x = Dx / D;
			y = Dy / D;
			// exei problhma bgazei -0 se kapoiew periptvseiw
			if (x == -0 && y == -0)
			{
				cout << "The systeme has one single solution: (x,y)=(" << -x << "," << -y << ")" << endl << endl;
			}
			else if (x != -0 && y == -0)
			{
				cout << "The systeme has one single solution: (x,y)=(" << x << "," << -y << ")" << endl << endl;
			}
			else if (x == -0 && y != -0)
			{
				cout << "The systeme has one single solution: (x,y)=(" << -x << "," << y << ")" << endl << endl;
			}
			else {
				cout << "The systeme has one single solution: (x,y)=(" << x << "," << y << ")" << endl << endl;
				cout << "======================================================================" << endl << endl;

			}




			/*x1 = c1 / (a1 + b1);
			x2 = c2 / (a2 + b2);
			cout << "For your first equation: " << a1 << "x+" << b1 << "y=" << c1 << " x=y in the position (x,y)=(" << x1 << "," << x1 << ")" << endl << endl;
			cout << "For your second equation: " << a2 << "x+" << b2 << "y=" << c2 << " x=y in the position (x,y)=(" << x2 << "," << x2 << ")" << endl << endl;*/

		}
	}

}
//float E1;
//if (c1 == 0 && c2 == 0)
//{
//	if (a1 / a2 == b1 / b2)
//	{
//		cout << " The systeme has inlimited solutions (x,y)=" << "(x" << "," << "-" << a1 / b1 << "x)" << endl;
//	}

//	else {
//		cout << " The systeme has one single solution: (x,y)=(0,0)" << endl;
//	}


//}

//else if (a1 / a2 == b1 / b2 && b1 / b2 != c1 / c2)
//{/*a / b == d / f && b / b == f / f && c / b != e / f*/
//	cout << " The systeme is INFINITE(IN R) " << endl;

//}
//else if (a1 / a2 == b1 / b2 && b1 / b2 == c1 / c2)
//{/*a / b == d / f && b / b == f / f && c / b == e / f*/
//	cout << " The systeme has inlimited solutions (x,y)=" << "(x" << "," << c1 / b1 << "-" << a1 / b1 << "x)" << endl;

//}
//else
//{
//	if (a1 == 0 && b1 != 0)
//	{
//		y = c1 / b1;
//		x = (c2 - b2 * y) / a2;
//		cout << " The systeme has one single solution: (x,y)=(" << x << "," << y << ")" << endl;
//	}




//	else {
//		E1 = b1 * (-a2) + b2 * a1;
//		y = (c1 * (-a2) + c2 * a1) / E1;
//		x = (c1 - b1 * y) / a1;

//		cout << " The systeme has one single solution: (x,y)=(" << x << "," << y << ")" << endl;
//	}


//}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
