#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main(){
	const double k=2;
	
	setlocale(LC_ALL,"");
	char enerji;
	
	cout<<"Enerji hesaplama programýna hoþ geldiniz. Numarasýný yazarak bir iþ türü seçiniz. "<<endl;
	cout<<"1-Elektrik iþi\n2-Yay iþi"<<endl;
	cin>>enerji;
	
	switch(enerji){
	
	case '1':
		int V;
		int I;
		int t;
		int We;
		cout<<"Elektrik enerjisi"<<endl;
		cout<<"Sýrayla V, I ve t deðerleriniz giriniz"<<endl;
		cin>>V;
		cin>>I;
		cin>>t;
		We=V*I*t;
		cout<<We<<" Kj"<<endl;
		break;
		
	case '2':
		cout<<"Yay iþi"<<endl;
		double Wyay;
		double x2;
		double x1;
		cout<<"Sýrasýyla yayýn son (x2) ve baþlangýç (x1) uzunluklarýný sýrasý ile giriniz"<<endl;
		cin>>x2;
		cin>>x1;
		Wyay=0.5*(pow(x2,2)-pow(x1,2))*k;
		cout<<Wyay<<" Kj"<<endl;
		break;
		
	default:
		cout<<"Geçersiz iþlem"<<endl;
		break;
	}
	cout<<"twitter: ZiyaCraft";
}
