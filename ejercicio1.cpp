//sumaedades
//Luis Fernando Condori Caljaro
#include<iostream>
#include<stdlib.h>

using namespace std;

int sumaed(int n);
float talla(int n);

int main(){
	
	int e,n,p,ta;
	float pr;
	
	cout<<"\t\t\tSuma de edades\n";
	cout<<"Ingrese la cantidad de alumnos de ESIS: ";cin>>n;
	
	p=sumaed(n);
	pr=p/n;
	ta=talla(n);
	
	cout<<"La suma de sus edades es: "<<p<<"\n";
	cout<<"El promedio de talla de los alumnos es: "<<ta<<"\n";
	cout<<"El promedio es: "<<pr<<"\n";
	system("pause");
	return 0;
}

int sumaed(int n){
	int i=1,s=0,s2=0,e,t;
	while(i<=n){
		cout<<"Ingrese la edad del alumno "<<i<<":";cin>>e;
		s+=e;
		i++;
	}
	return (s);
}

float talla(int n){
	float i=1,s=0,pr,e;
	while(i<=n){
		cout<<"Ingrese la talla del alumno "<<i<<":";cin>>e;
		s+=e;
		i++;
	}
	pr=s/n;
	return (pr);
}
