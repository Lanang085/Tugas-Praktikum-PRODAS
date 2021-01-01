#include <iostream>
#include<windows.h>
//M Gigih lanang P
//22020A
//NIM 20051397053


using namespace std ;

int main ()
{
system ("color 4");
	int i, j ;
	cout<< "Tabel Perkalian 1 2 3 4 5 6 7 8 9 10 \n\n";
	
	
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			
			cout << " " << i * j << " \t";
		}
		cout << endl ;	
	}
}
