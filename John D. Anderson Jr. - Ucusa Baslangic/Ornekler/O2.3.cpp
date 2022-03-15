#include<iostream>
using namespace std;
int main()
{
	float basinc;
	float sicaklik;
	float ro;
	float sabit=287;
	float Dur;
	
	cout<<"Sayfa 73 Ornek 2.3"<<endl;
	cout<<"Bir ruzgar tunelinde yuksek hizla akmakta olan havanin hava basincina ve sicakligina gore ozgul hacmi nedir?"<<endl;
	cout<<"Basinci giriniz (N/m^2): ";
	cin>>basinc;
	cout<<"Sicakligi giriniz (K): ";
	cin>>sicaklik;
	
	ro=(sabit)*(sicaklik)/(basinc);
	cout<<ro<<"m^3/kg"<<endl;
	cout<<"twitter: ZiyaCraft";
	cin>>Dur;
}
