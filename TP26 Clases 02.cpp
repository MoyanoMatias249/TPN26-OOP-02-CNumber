#include <bits/stdc++.h>
using namespace std;

class CNumber{
	
	private:
		int Numero1;
		int Numero2;
		int Numero3;
		
	public:
		CNumber(int N1, int N2, int N3);
		
		int SetN1(int N1);
		int SetN2(int N2);
		int SetN3(int N3);
		
		int Max();
		int Min();
		float Prom();
		int Pares();
		int Impares();
};

CNumber::CNumber(int N1, int N2, int N3){
	Numero1 = SetN1(N1);
	Numero2 = SetN2(N2);
	Numero3 = SetN3(N3);
}

int CNumber::SetN1(int N1){
	Numero1 = N1;
	return Numero1;
}

int CNumber::SetN2(int N2){
	Numero2 = N2;
	return Numero2;
}

int CNumber::SetN3(int N3){
	Numero3 = N3;
	return Numero3;
}

int CNumber::Max(){
	if(Numero1 > Numero2 && Numero1 > Numero3){
		return Numero1;
	}
	if(Numero2 > Numero1 && Numero2 > Numero3){
		return Numero2;
	}
	if(Numero3 > Numero1 && Numero3 > Numero2){
		return Numero3;
	}
}

int CNumber::Min(){
	if(Numero1 < Numero2 && Numero1 < Numero3){
		return Numero1;
	}
	if(Numero2 < Numero1 && Numero2 < Numero3){
		return Numero2;
	}
	if(Numero3 < Numero1 && Numero3 < Numero2){
		return Numero3;
	}
}

float CNumber::Prom(){
	return ((float) (Numero1 + Numero2 + Numero3) / 3);
}

int CNumber::Pares(){
	
	int cont = 0;
	if(Numero1 % 2 == 0){
		cont++;
	}
	if(Numero2 % 2 == 0){
		cont++;
	}
	if(Numero3 % 2 == 0){
		cont++;
	}
	return cont;
}

int CNumber::Impares(){
	
	int cont = 0;
	if(Numero1 % 2 != 0){
		cont++;
	}
	if(Numero2 % 2 != 0){
		cont++;
	}
	if(Numero3 % 2 != 0){
		cont++;
	}
	return cont;
}

int main(){
	
	int num1, num2, num3;
	
	cout<<"ingrese 3 numeros, separados por un espacio"<<endl;
	cin>>num1>>num2>>num3;
	
	CNumber Numeros(num1, num2, num3);
	
	int maximo = Numeros.Max();
	cout<<"El numero maximo es: "<<maximo<<endl;
	
	int minimo = Numeros.Min();
	cout<<"El numero minimo es: "<<minimo<<endl;

	float promedio = Numeros.Prom();
	cout<<"El promedio de los 3 numeros es: "<<promedio<<endl;
	
	int pares = Numeros.Pares();
	cout<<"La cantidad de numeros pares es: "<<pares<<endl;
	
	int impares = Numeros.Impares();
	cout<<"La cantidad de numeros impares es: "<<impares<<endl;
	
	return 0;
}
