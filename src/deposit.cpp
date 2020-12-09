#include "deposit.h"


int main()
{
	int d, x, s;


    cout << "Введите размер вклада (минимум 1000): ";
	cin >> x;
    if(!verifyDeposit(x)) {		
		cout << "Размер вклада не должен быть меньше 1000" << endl;
		return 1;
	}

	cout << "Введите срок вклада (не более 365 дней): ";
	cin >> d;
	if(verifyDays(d)) {
	
		cout << "Срок должен быть не более 365 дней" << endl;
		return 1;
	}
	s= calculateDohod(x, d, s);

	cout << "доход\n" << s << endl;

	return 0;
}
