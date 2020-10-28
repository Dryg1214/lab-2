#include "c-fuction.h"
namespace c
{
	function sum(const function& h,const function &d)
	{
		function A;
		A.a = h.a + d.a;
		A.b = h.b + d.b;
		A.c = h.c + d.c;
		return A;
	}
	function sub(const function& h,const function& d)
	{
		function A;
		A.a = h.a - d.a;
		A.b = h.b - d.b;
		A.c = h.c - d.c;
		return A;
	}
	function derivative(const function &h)
	{
		function A;
		A.a = 0;
		A.b = 2 * h.a;
		A.c = h.b;
		return A;
	}
	double value(const function& h,double x)
	{
		return (h.a * x * x + h.b * x + h.c);
	}
}