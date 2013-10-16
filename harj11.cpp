/* 
Teht„v„: Harjoitus 11
Tekij„: Hanna Lukkarinen, IIO13S1
Pvm: 16.10.2013

Kuvaus: Muuta teht„v„n 9 laskin-ohjelmaa niin, etta valikko nayttaa
seuraavalta:

VALIKKO
0. Lopetus
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos
6. Syota uudet luvut laskemista varten

Laskimella on siis mahdollista k„sitell„
useita lukupareja k„ytt„j„n toiveiden
mukaisesti. Mita tapahtuu, jos luku2 on 0?
HUOM! goto -lauseen k„ytt„ on KIELLETTY!!!!

Lopuksi ohjelma tulostaa valitun tuloksen nayt”lle. */

 #include <iostream> 
using namespace std; 

int main() 
{
	int luku1, luku2, valinta, keskeytys = 0;

	cout<<"Anna luku: "<<endl;
	cin>>luku1;
	cout<<"Anna toinen luku: "<<endl;
	cin>>luku2;

	while(keskeytys == 0)

	{

	cout<<	"VALIKKO\n"
			"0. Lopetus\n"
			"1. Summa\n"
			"2. Erotus\n"
			"3. Tulo\n"
			"4. Osam„„r„\n"
			"5. Jakoj„„nn”s\n"
			"6. Sy”t„ uudet luvut laskemista varten"<<endl;
	cin>>valinta;
	switch(valinta) 
 { 
	case 0:
	 keskeytys = 1;
	 break;
	case 1:	cout<<"Lukujen summa: "<<(luku1 + luku2)<<endl; 
 	 break; 
	case 2: cout<<"Lukujen erotus: "<<(luku1 - luku2)<<endl; 
 	 break; 
	case 3:	cout<<"Lukujen tulo: "<<(luku1 * luku2)<<endl; 
 	 break; 
	case 4:	cout<<"Lukujen osam„„r„: "<<(luku1 / luku2)<<endl; 
 	 break; 
	case 5:	cout<<"Lukujen jakoj„„nn”s: "<<(luku1 % luku2)<<endl; 
 	 break; 
	case 6:
	 cout<<"Anna luku: "<<endl;
	 cin>>luku1;
	 cout<<"Anna toinen luku: "<<endl;
	 cin>>luku2;
	 continue;
	 default:
      keskeytys = 1;
	 break;
 } 
	}
 return 0; 

}