//// Лабораторна робота № 5.2
//#define M_PI 3.14159265358979323846
//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//void S(const double x, const double eps, int& n, double& s);
//void A(const double x, const int n, double& a);
//int main()
//{
//	double  xp, xk, x, dx, eps, s = 0;
//	int n = 0;
//	cout << "xp = "; cin >> xp;
//	cout << "xk = "; cin >> xk;
//	cout << "dx = "; cin >> dx;
//	cout << "eps = "; cin >> eps;
//	cout << fixed;
//	cout << "-------------------------------------------" << endl;
//	cout << "|" << setw(5) << "x" << "   |"
//		<< setw(10) << "arcctg(x)" << " |"
//		<< setw(7) << "S" << "    |"
//		<< setw(5) << "n" << "   |"
//		<< endl;
//	cout << "-------------------------------------------" << endl;
//	x = xp;
//	while (x <= xk)
//	{
//		S(x, eps, n, s);
//		cout << "|" << setw(7) << setprecision(2) << x << " |"
//			<< setw(10) << setprecision(5) << atan(1 / x) << " |"
//			<< setw(10) << setprecision(5) << s << " |"
//			<< setw(7) << n << " |"
//			<< endl;
//		x += dx;
//	}
//	cout << "-------------------------------------------" << endl;
//	return 0;
//}
//void S(const double x, const double eps, int& n, double& s)
//{
//	n = 0;
//	double a = -x;
//	s = (x < 0) ?  -x - (M_PI / 2) : -x + (M_PI / 2);
//	do {
//		n++;
//		A(x, n, a);
//		s += a;
//	} while (abs(a) >= eps);
//}
//void A(const double x, const int n, double& a)
//{
//	double R = -(x * x) * (2 * n - 1) / (2 * n + 1); 
//	a *= R;
//}


// Лабораторна робота № 5.2
#define M_PI 3.14159265358979323846
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double S(const double x, const double eps, int& n, double s);
double A(const double x, const int n, double a);
int main()
{
	double xp, xk, x, dx, eps, s = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(10) << "arcctg(x)" << " |"
		<< setw(7) << "S" << "    |"
		<< setw(5) << "n" << "  |"
		<< endl;
	cout << "------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		s = S(x, eps, n, s);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << atan(1 / x) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(7) << n << "|"
			<< endl;
		x += dx;
	}
	cout << "------------------------------------------" << endl;
	return 0;
}
double S(const double x, const double eps, int& n, double s)
{
	n = 0;
	double a = -x;
	s = (x < 0) ?  -x - (M_PI / 2) : -x + (M_PI / 2);
	do {
		n++;
		a = A(x, n, a);
		s += a;
	} while (abs(a) >= eps);
	return s;
}
double A(const double x, const int n, double a)
{
	double R = -(x * x) * (2 * n - 1) / (2 * n + 1);
	a *= R;
	return a;
}