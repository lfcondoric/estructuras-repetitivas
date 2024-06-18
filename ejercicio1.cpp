//sumaedades
//Luis Fernando Condori Caljaro
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int edad,n,i=1,s=0;
	
	cout<<"Ingrese la cantidad de alumnos de ESIS: ";cin>>n;
	
	while(i<=n){
		cout<<"Ingrese la edad: ";cin>>edad;
		s+=edad;
		i++;
	}
	
	cout<<"La suma de sus edades es: "<<s<<endl;
	system("pause");
	return 0;
}
