// complex_numbers.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <complex.h>
#include <iostream>
#include <math.h>
using namespace std;

class complex
{
public:
	double real, image;
	complex() {};
	complex(double r)
	{
		real = r;
		image = 0;
	}
	complex(double r, double i)
	{
		real = r;
		image = i;
	}
	~complex() {};
};
    complex add(complex x, complex y)
	{
		complex sum;
		sum.real = x.real + y.real;
		sum.image = x.image + y.image;
		return sum;
	}
	complex sub(complex x, complex y)
	{
		complex dif;
		dif.real = x.real - y.real;
		dif.image = x.image - y.image;
		return dif;
	}
	complex multiplication(complex x, int k)
	{
		complex mul;
		mul.real = x.real * k;
		mul.image = x.image * k;
		return mul;
	}
	complex mydiv(complex x, int l)
	{
		complex div;
		div.real = x.real / l;
		div.image = x.image / l;
		return div;
	}

	int main()
	{
		setlocale(LC_ALL, "Russian");
		double real1, image1, real2, image2;
		int k, l;
		cout << " ������� �������� real1: ";
		cin >> real1;
		cout << " ������� �������� image1: ";
		cin >> image1;
		cout << " ������� �������� real2: ";
		cin >> real2;
		cout << " ������� �������� image2: ";
		cin >> image2;
		cout << " ������� �������������� ����� ��� ���������: ";
		cin >> k;
		cout << " ������� �������������� ����� ��� �������: ";
		cin >> l;
		complex x = { real1,image1 };
		complex y = { real2,image2 };
		complex sum = add(x, y);
		complex dif = sub(x, y);
		complex mul = multiplication(x, k);
		complex div = mydiv(x, l);
		printf(" ����� ����������� ����� = (%5.2lf, %5.2lfi)\n", sum.real, sum.image);
		printf(" �������� ����������� ����� = (%5.2lf, %5.2lfi)\n", dif.real, dif.image);
		printf(" ������������ ������������ � ��������������� ����� = (%5.2lf, %5.2lfi)\n", mul.real, mul.image);
		if (l!=0)
		{ printf(" ������� ������������ � ��������������� ����� = (%5.2lf, %5.2lfi)\n", div.real, div.image);
		}
		if(l==0)
		{
			cout << " ������ �� ���� ��������!!!" << endl;
		}
	    system(" pause ");
	    return 0;
}
