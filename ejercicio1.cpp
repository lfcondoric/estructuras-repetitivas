//sumaedades
//Luis Fernando Condori Caljaro
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int edad,n,i=1,s=0;
	
	cout<<"\t\t\tSuma de edades\n";
	cout<<"Ingrese la cantidad de alumnos de ESIS: ";cin>>n;
	
	while(i<=n){
		cout<<"Ingrese la edad del alumno "<<i<<":";cin>>edad;
		s+=edad;
		i++;
	}
	
	cout<<"La suma de sus edades es: "<<s<<"\n";
	system("pause");
	return 0;
}
