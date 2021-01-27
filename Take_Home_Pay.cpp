//Tugas #10 Menghitung Take Home Pay (Gaji Bersih) 
#include<iostream>
#include<string>
const float persentunjangan = 0.2;
const float persenpajak = 0.15;

void line()
{
	std::cout<<"================================\n"<<std::endl;
}

int main()
{
	std::string namakaryawan;
	int gajipokok, gajibersih, pajak, tunjangan;
	
	std::cout<<"::::::::: Menghitung Take Home Pay Karyawan :::::::::\n"<<std::endl;
	
	std::cout<<"Masukan Nama Karyawan : ";
	getline(std::cin,namakaryawan);
	
	std::cout<<"Masukan Gaji Pokok : Rp. ";
	std::cin>>gajipokok;
	line();
	
	tunjangan = persentunjangan * gajipokok;
	pajak = persenpajak * gajipokok;
	gajibersih = gajipokok + tunjangan - pajak;
	
	std::cout<<"  Berikut gaji bersih yang di terima : "<<std::endl;
	std::cout<<"    Nama Karyawan : "<<namakaryawan<<std::endl;
	std::cout<<"    Gaji Bersih   : Rp. "<<gajibersih<<std::endl;
	
	return 0;
}
