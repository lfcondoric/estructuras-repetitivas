//sumaedades
//Luis Fernando Condori Caljaro
#include<iostream>
#include<stdlib.h>

using namespace std;

int sumaed(int e);

int main(){
	
	int e,n,p;
	float pr;
	
	cout<<"\t\t\tSuma de edades\n";
	cout<<"Ingrese la cantidad de alumnos de ESIS: ";cin>>n;
	
	p=sumaed(n);
	pr=p/n;
	
	cout<<"La suma de sus edades es: "<<p<<"\n";
	cout<<"El promedio es: "<<pr<<"\n";
	system("pause");
	return 0;
}

int sumaed(int n){
	int i=1,s=0,e;
	while(i<=n){
		cout<<"Ingrese la edad del alumno "<<i<<":";cin>>e;
		s+=e;
		i++;
	}
	return (s);
}
