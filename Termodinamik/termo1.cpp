#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main(){
	const double k=2;
	
	setlocale(LC_ALL,"");
	char enerji;
	
	cout<<"Enerji hesaplama program�na ho� geldiniz. Numaras�n� yazarak bir i� t�r� se�iniz. "<<endl;
	cout<<"1-Elektrik i�i\n2-Yay i�i"<<endl;
	cin>>enerji;
	
	switch(enerji){
	
	case '1':
		int V;
		int I;
		int t;
		int We;
		cout<<"Elektrik enerjisi"<<endl;
		cout<<"S�rayla V, I ve t de�erleriniz giriniz"<<endl;
		cin>>V;
		cin>>I;
		cin>>t;
		We=V*I*t;
		cout<<We<<" Kj"<<endl;
		break;
		
	case '2':
		cout<<"Yay i�i"<<endl;
		double Wyay;
		double x2;
		double x1;
		cout<<"S�ras�yla yay�n son (x2) ve ba�lang�� (x1) uzunluklar�n� s�ras� ile giriniz"<<endl;
		cin>>x2;
		cin>>x1;
		Wyay=0.5*(pow(x2,2)-pow(x1,2))*k;
		cout<<Wyay<<" Kj"<<endl;
		break;
		
	default:
		cout<<"Ge�ersiz i�lem"<<endl;
		break;
	}
	cout<<"twitter: ZiyaCraft";
}
