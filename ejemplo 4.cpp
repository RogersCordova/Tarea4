#include <iostream>
using namespace std;

main() {

    
		
	int tam=0, suma=0,prom=0;
	cout<<"ingrese cuantas notas desea ingresar "<<endl;
	cin>>tam;
	int notas[tam];		
	for(int i=0; i<tam;i++)
	{
		cout<<"ingrese nota : "<<i<<endl;
		cin>>notas[i];
	}
		for(int i=0; i<tam;i++)
	{
		cout<<notas[i]<<endl;
		suma += notas[i];
	}
	prom= suma/tam;
	cout<<"el promedio es "<<prom<<endl;
system("pause");
	

}
