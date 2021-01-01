#include<iostream>
#include<conio.h>
#include<windows.h>
//M Gigih Lanang P
//A_20051397045
//
using namespace std;
main() {
system ("color 8");
int n,i,j;
cout<<"Masukkan Segitiga Angka : ";
cin>>n;
cout<<"\n";
	for (i=1; i<=n; i++){
	 for (j=1;j<=i;j++){
		cout<<" "<<j;
		}
	cout<<" \n";
	}
	for (i=n-1;i>=1;i--){ 
	 for(j=1;j<=i;j++){
		cout<<" "<<j;
		}
	cout<<" \n";
	}
getch();
}
