  
#include<iostream>
using namespace std;
int main ()
{
	cout<<"::::: Menghitung Diskon :::::\n"<<endl;
	
	float diskon0, diskon1, diskon2, diskon3;
	int totalbelanja, totalbayar, diskon;
	diskon0 = 0.05;
	diskon1 = 0.075;
	diskon2 = 0.1;
	diskon3 = 0.15;
	
	cout << "Masukan Total Belanja : Rp. ";
	cin >> totalbelanja;
	cout <<endl;
	
	if (totalbelanja <= 25000){
		diskon = totalbelanja * diskon0;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 5%		: Rp. " << diskon <<endl;
		cout << "Total Pembayaran	: Rp. " << totalbayar <<endl<<endl;
					
	} else if (totalbelanja <= 50000){
		diskon = totalbelanja * diskon1;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 7.5%		: Rp. " << diskon <<endl;
		cout << "Total Pembayaran	: Rp. " << totalbayar <<endl<<endl;
			
	} else if (totalbelanja <= 100000){
		diskon = totalbelanja * diskon2;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 10%		: Rp. " << diskon <<endl;
		cout << "Total Pembayaran	: Rp. " << totalbayar <<endl<<endl;
		 	
	} else if (totalbelanja > 100000){
		diskon = totalbelanja * diskon3;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 15%		: Rp. " << diskon <<endl;
		cout << "Total Pembayaran	: Rp. " << totalbayar <<endl<<endl;
 	}
	return 0;
}
