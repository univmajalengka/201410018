//procedure dan function

#include <iostream>
using namespace std;

int function_td(int j, int m, int d);
void tampil(int show);

int main (){
	int td,waktu,a,b,c,d;
	td=function_td(a,b,c);
	tampil(td);
	return 0;
}

//function mencari total detik
int function_td(int j, int m, int d){
	int td;
	cout<<"Konversi Waktu Ke Total Detik"<<endl;
	cout<<"Jam \t: ";
	cin>>j;
	cout<<"Menit \t: ";
	cin>>m;
	cout<<"Detik \t: ";
	cin>>d;
	cout<<endl;
	cout<<"Hasilnya : ";
	td=(j*3600)+(m*60)+d;
	return td;	
}



void tampil(int show){
	cout<<show;
}
