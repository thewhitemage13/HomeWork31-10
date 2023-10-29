#include <iostream>
using namespace std;

int main()
{
	//Home Work number1
	double number1;
	double number2;
	double sum1;

	cout << "Input number 1: ";
	cin >> number1;
	cout << "Input number 2: ";
	cin >> number2;

	double* pnumber1 = &number1;
	double* pnumber2 = &number2;
	double* psum1 = &sum1;

	double** pnum1 = &pnumber1;
	double** pnum2 = &pnumber2;
	double** psum2 = &psum1;

	**psum2 = **pnum1 + **pnum2;

	cout << "Sum: " << **psum2;

	cout << "\n";

	//Home Work number2


	double height;
	double weight;
	double PerfectWeight;

	cout << "Input your height: ";
	cin >> height;
	cout << "Input your weight: ";
	cin >> weight;

	double* pheight = &height;
	double* pweight = &weight;
	double* pPerfectWeight = &PerfectWeight;

	double** pphg = &pheight;
	double** ppwg = &pweight;
	double** pPW = &pPerfectWeight;

	int userchoice;
	int* nuserchoice = &userchoice;
	int** nchoice = &nuserchoice;
	cout << "Are you a girl or a boy?1-Girl/2-Boy";
	cin >> **nchoice;

	switch (**nchoice)
	{
	case 1:
		**pPW = **pphg - 110;
		cout << "Your perfect weight: " << **pPW << "\n";
		if (**pPW < **ppwg)
		{
			double lose;
			double* plose = &lose;
			double** pplose = &plose;
			**pplose = **ppwg - **pPW;
			cout << "You need to lose weight on  : " << **pplose << "kg.";
		}
		else if (**pPW > **ppwg)
		{
			double gain;
			double* pgain = &gain;
			double** ppgain = &pgain;
			**ppgain = **pPW - **ppwg;
			cout << "You need to gain weight on :" << **ppgain << "\n";
		}
		else
			cout << "You're at your ideal weight!!!!" << "\n";
		break;

	case 2:
		**pPW = **pphg - 100;
		cout << "Your perfect weight: " << **pPW << "\n";
		if (**pPW < **ppwg)
		{
			double lose;
			double* plose = &lose;
			double** pplose = &plose;
			**pplose = **ppwg - **pPW;
			cout << "You need to lose weight on  : " << **pplose << "kg.";
		}
		else if (**pPW > **ppwg)
		{
			double gain;
			double* pgain = &gain;
			double** ppgain = &pgain;
			**ppgain = **pPW - **ppwg;
			cout << "You need to gain weight on :" << **ppgain << "\n";
		}
		else
			cout << "You're at your ideal weight!!!!" << "\n";
		break;
	}
}