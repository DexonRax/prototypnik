#include<iostream>

int oblicz(const int*, const unsigned short int);

struct punkt
{
	int x;
	int y;
};

punkt podwojenie(punkt&);

int main(){
	const unsigned short int N = 5;
	int tablica[N] = {1,2,3,4,5};

	punkt a = {5,6};

	punkt b = podwojenie(a);

	std::cout<<"("<<a.x<<","<<a.y<<")"<<std::endl;

	int wynik = oblicz(tablica, N);
	std::cout<<"Suma: "<<wynik;
	return 0;
}

punkt podwojenie(punkt& p){

	//p.x = p.x*2;
	//p.y = p.y*2;

	//std::cout<<"("<<p.x<<","<<p.y<<")"<<std::endl;
	return {p.x*2,p.y*2};
}

int oblicz(const int* tab, const unsigned short int n){

	int suma = 0;

	for(int i = 0; i<n; i++){
		suma += tab[i];
	}

	return suma;
}