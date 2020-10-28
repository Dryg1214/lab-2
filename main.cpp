#include "c-fuction.h"
#include "cpp-function.h"
#include <iostream>
#include <conio.h>

bool test(char ch, const char* keys, unsigned int size)
{
	for (unsigned int i = 0; i < size; i++)
	{
		if (keys[i] == ch) return true;
	}
	return false;
}
double get_number()
{
	char numbers[10] = { '1','2','3','4','5','6','7','8','9','.' };
	std::string n;
	char last=' ';
	char ch;
	while ((ch = _getch()) != '\r')//найти функцию аналогичную getch но возвращающую char ;
	{
		if (ch == '.' && last == '.') ch = 'q';
		if (ch == '.'&& n=="" ) ch='q';
			if (test(ch, numbers, 10))
			{
				n += ch;
				last = ch;
				std::cout << ch;
			}
	}
	std::cout << std::endl;
	return atof(n.c_str());
}

cpp::function enter_data()
{
std::cout << "Enter a , b and c\n";
double a, b, c;
a = get_number();
b = get_number();
c = get_number();
cpp::function A(a,b,c);
	return A;
}
void print_data(cpp::function h)
{
	if (h.get_a() != 0 && h.get_b() != 0 && h.get_c()!=0)
		std::cout << h.get_a() << "*x*x+" << h.get_b() << "*x+" << h.get_c()<<"\n";
	else
	{
		if (h.get_a() == 0 && h.get_b() != 0 && h.get_c() != 0)
			std::cout << h.get_b() << "*x+" << h.get_c() << "\n";
		if (h.get_a() != 0 && h.get_b() == 0 && h.get_c() != 0)
			std::cout << h.get_a() << "*x*x+" << h.get_c() << "\n";
		if (h.get_a() != 0 && h.get_b() != 0 && h.get_c() == 0)
			std::cout << h.get_a() << "*x*x+" << h.get_b() << "*x\n";
	}
}

void print_dat(c::function h)
{
	if (h.a != 0 && h.b != 0 && h.c != 0)
		std::cout << h.a << "*x*x+" << h.b << "*x+" << h.c << "\n";
	else
	{
		if (h.a == 0 && h.b != 0 && h.c != 0)
			std::cout << h.b << "*x+" << h.c << "\n";
		if (h.a != 0 && h.b == 0 && h.c != 0)
			std::cout << h.a << "*x*x+" << h.c << "\n";
		if (h.a != 0 && h.b != 0 && h.c == 0)
			std::cout << h.a << "*x*x+" << h.b << "*x\n";
	}
}
c::function enter_dat()
{
	std::cout << "Enter a , b and c\n";
	double c, d, e;
	c = get_number();
	d = get_number();
	e = get_number();
	c::function A;
	A.a = c;
	A.b = d;
	A.c = e;
	return A;
}

int main()
{	
	using namespace cpp;
	{
		std::cout << "The function has the form  a*x*x+b*x+c\n";
		function h = enter_data();
		print_data(h);
		function p = enter_data();
		print_data(p);
		function sum;
		function sub;
		function sum_;
		sum_=sum_.sum_(h, p);
		sum=h.sum(p);
		sub = h.sub(p);
		double point;
		std::cout << "Enter point 'X' to find out the value of the function in it ";
		std::cin >> point;
		double rezult= h.value(point);
		function der;
		der=h.derivative();
		std::cout << "Sum: ";
		print_data(sum);
		std::cout << "Static Sum: ";
		print_data(sum_);
		std::cout << "Sub: ";
		print_data(sub);
		std::cout << "Value : "<<rezult;
		std::cout << "\nDerivative: ";
		print_data(der);
	}/*
	using namespace c;//если я указал пространство имен то все равно требует с:: для function
	{
		std::cout << "The function has the form  a*x*x+b*x+c\n";
		function h = enter_dat();
		function sum_;
		function sub_;
		function der_;
		print_dat(h);
		function d = enter_dat();
		print_dat(d);
		sum_ = sum(h, d);
		sub_ = sub(h, d);
		double point;
		std::cout << "Enter point 'X' to find out the value of the function in it ";
		std::cin >> point;
		double rezult=value(h, point);
		der_ = derivative(h);
		std::cout << "Sum: ";
		print_dat(sum_);
		std::cout << "Sub: ";
		print_dat(sub_);
		std::cout << "Derivative: ";
		print_dat(der_);
		std::cout << "Value : " << rezult;
	}*/
}