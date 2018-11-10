//B8 x = -0.3    y = 0.4
//y(x) = exp^x + exp ^ (-x)
//s(x) = sum[n = 0, бесконечность](((-x) ^ n + x^n) / n!)
//e = 10 ^ -5

#include <iostream>	

using namespace std;

float e_X_teilor1(float x, float e);

float e_X(float x);
int main()
{
	float a = -0.3, b = 0.4;
	float x=a, h = (b - a) / 10;
	cout << " x\t y(x)\t s(x)" << endl;
	while (x<b)
	{
		cout << x << "\t" <<e_X(x)<<"\t"<<e_X_teilor1(x,1E-5)<<endl;
		x += h;
	}



	system("pause");
	return 0;
}



float e_X(float x)
{
	return exp(-x) + exp(x);
}


float e_X_teilor1(float x, float e)
{
	float n = 1;
	float sum = 1.0;
	int i = 1;
	do
	{
		sum += n;
		n *= x*x / i;
		i++;
	} while (n > e);

	return sum;
}