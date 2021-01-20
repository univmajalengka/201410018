#include <iostream>
using namespace std;

 main()
{
	int n;
	cout << "Masukkan Panjang Piramida ";
	cin >> n;
	cout << "\n";
	for (int a = 1; a <= n; a++){
		for (int b = 1; b <= a; b++){
			cout << "*" ;
		}
		cout << endl;
	}
	cin.get();
	
	cout<<"--------------------------------"<<endl;
	cout<<"	Aef Syaefuddin Zuhri";
	return 0;
}



