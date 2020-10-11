 
//M Gigih Lanang//
//program billing warnet//



#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

int main (){
	int j1,m1,j2,m2,tot_waktu,tot_bayar,total_menit_mulai,total_menit_selesai,durasi,lama_pemakaian,menit_pemakaian;
	char name_user[50];
	system("color 5");
	 cout<<"---------------Welcome to REQ REGUM net-----------\n";
	 cout<<"---------------M Gigih Lanang----------------\n";
	 cout<<"----------------20051397053------------------\n";
	 cout<<"_______________\n";
	 cout<<"_______________\n";
	 cout<<"name user=";
	 cin>>name_user;
	 cout<<"---------------------------------------------\n";
	 cout<<"jam mulai=";
	 cin>>j1;
	 cout<<"menit mulai=";
	 cin>>m1;
	 total_menit_mulai=(j1*60)+m1;
	 cout<<"---------------------------------------------\n";
	 cout<<"---------------------------------------------\n";
	 cout<<"jam selesai=";
	 cin>>j2;
	 cout<<"menit selesai=";
	 cin>>m2;
	 total_menit_selesai=(j2*60)+m2;
	 cout<<"---------------------------------------------\n";
	 cout<<"---------------------------------------------\n";
	 durasi=total_menit_selesai-total_menit_mulai;
	 tot_bayar=durasi*5000/60;
	 lama_pemakaian=durasi/60;
	 menit_pemakaian=durasi%60;
	 cout<<"--------------lama waktu pemakaian-----------------\n";
	 cout<<"jam:"<<lama_pemakaian<<endl;
	 cout<<"menit:"<<menit_pemakaian<<endl;
	 cout<<"----------------membayar---------------------\n";
	 cout<<"total yang harus dibayar="<<tot_bayar<<endl;
	 cout<<"tarif per jam=5000\n";
	 cout<<"_______________\n";
	 cout<<"_______________\n";
	 cout<<"______Thanks You_______\n";
	 return 0;
}
