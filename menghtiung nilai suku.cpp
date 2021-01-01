#include <iostream>
#include <conio.h>
#include<windows.h>

using namespace std;

int main() {
	system ("color 6");
	int hasil = 0, a, b, kali;
	
	cout <<";;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;"<<endl;
	cout <<"||  	                      Menghitung Nilai Suku                           ||"<<endl;
	cout <<"||                                 A_20051397053                              ||"<<endl;   
	cout <<"||                                M Gigih Lanang P                            ||"<<endl;                  
	cout <<"--------------------------------------------------------------------------------"<<endl;
	cout <<"\n";
	cout <<"Masukkan Jumlah Nilai Suku : ";
	cin >>b;
	
	for(a = 1; a <= b; a++){
		hasil = hasil + a * a * a;	
		kali = a * a * a;
		cout << kali <<"\n";
}
cout <<"Jumlah Total : ";	
cout <<hasil;
cin >> b;

    getch ();
	return 0;
}
