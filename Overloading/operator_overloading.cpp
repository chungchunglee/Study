//https://modoocode.com/202
#include "operator_overloading.h"


Complex Complex::operator+(const Complex& c) const
{
	Complex temp(this->real + c.real, this->img + c.img);
	return temp;
}

Complex Complex::operator-(const Complex& c) const
{
	Complex temp(this->real - c.real, this->img - c.img);
	return temp;
}

Complex Complex::operator*(const Complex& c) const
{
	Complex temp(
		real * c.real - img * c.img,
		real * c.img + img * c.real);
	return temp;
}

Complex Complex::operator/(const Complex& c) const
{
	Complex temp(
		(real * c.real + img * c.img) / (c.real * c.real + c.img * c.img),
		(img * c.real - real * c.img) / (c.real * c.real + c.img * c.img));
	return temp;
}

Complex& Complex::operator=(const Complex& c)
{
	real = c.real;
	img = c.img;
	return *this;
}

Complex& Complex::operator+=(const Complex& c)
{
	(*this) = (*this) + c;
	return (*this);
}

Complex& Complex::operator-=(const Complex& c)
{
	(*this) = (*this) - c;
	return (*this);
}

Complex& Complex::operator*=(const Complex& c)
{
	(*this) = (*this) * c;
	return (*this);
}

Complex& Complex::operator/=(const Complex& c)
{
	(*this) = (*this) / c;
	return (*this);
}

Complex Complex::operator+(const char* str)
{
	int begin = 0, end = strlen(str);
	double str_real = 0.0f, str_img = 0.0f;

	int pos_i = -1;
	for (int i = begin; i != end; i++)
	{
		if (str[i] == 'i')
		{
			pos_i = i;
			break;
		}
	}
	if (pos_i == -1)
	{
		//str_real = get_number(str, begin, end - 1);
		Complex temp(str_real, str_img);
		return (*this) + temp;
	}
	//str_real = get_number(str, begin, pos_i - 1);
	//str_img = get_number(str, pos_i + 1, end - 1);
}

void Complex::display()
{
	std::cout << "값은 " << real << " + " << img << "i 입니다." << std::endl;
}

int main()
{
	Complex a(1.0, 2.0);
	Complex b(3.0, -2.0);

	Complex c(0.0, 0.0);
	c = a * b + a / b + a + b;
	Complex d(0.0, 0.0);
	d += b;
	d.display();
	c.display();

	return 0;
}
