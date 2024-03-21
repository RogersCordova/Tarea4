#include <iostream>
using namespace std;

main() {

    
		
	int tam=0,suma=0,promedio=0;
	int notas[tam];
	char res;
	do {
		tam++;
		cout<<"Ingrese Notas "<<endl;
		cin>>notas[tam-1];
		cout<<"Desea ingresar otra nota S/N "<<endl;
		cin>>res;
	}while(res== 'S'||res== 's');
	for (int i=0;i<tam;i++)
	{
	
	cout<<notas[i]<<endl;
    }
	
	
	
	
system("pause");
	

}
