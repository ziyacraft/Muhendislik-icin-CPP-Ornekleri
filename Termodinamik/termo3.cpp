#include<iostream>
#include<cmath>
#include<clocale>
#include <iomanip>
using namespace std;

double kritiksicaklik (double T0, double k){
	double Tk;
	Tk=T0*2/(k+1);
	return (Tk);
}
double kritikbasinc (double P0, double k){
	double Pk;
	Pk=P0*pow(2/(k+1),k/(k-1));
	return (Pk);
}

int main(){
	
	setlocale(LC_ALL,"");
	
	double m,DP,R,cp,k,T,V,ro,A,c,ma,P;
	
	double P0;
	double T0;
	

	
	cout<<"Lüle gibi en-kesit alaný deðiþen bir kanalda bir gaz, m kütlesel debi ile daimi olarak akmaktadýr."<<endl;
	cout<<"Gazýmýz kanaldan, bizim belirleyeceðimiz basýnçta ve sýcaklýkta düþük hýzla girmekte ve lüle içerisinde istediðimiz basýnca kadar geniþlemektedir."<<endl;
	cout<<"Lüle, akýþ yaklaþýk olarak izentropik olacak þekilde tasarlanmýþtýr."<<endl;
	cout<<"Kanal boyunca her bir konumda DeltaP kPa'lýk bir basýnç düþüþüne karþýlýk gelen yoðunluk,hýz,akýþ alaný ve Ma sayýsýný bulacaðýz.\n"<<endl;
	cout<<"Gazýn R sabitini giriniz: ";
	cin>>R;
	cout<<"Gazýn k deðerini giriniz: ";
	cin>>k;
	cout<<"Gazýn cp deðerini giriniz: ";
	cin>>cp;
	cout<<"Lüleye giriþteki kütlesel debiyi giriniz: ";
	cin>>m;
	cout<<"Gazýn giriþ basýncýný giriniz: ";
	cin>>P0;
	cout<<"Gazýn giriþ sýcaklýðýný giriniz: ";
	cin>>T0;
	cout<<"Gazýn DP basýnç düþüþ kademesini giriniz: ";
	cin>>DP;
	cout<<endl;
	cout<<endl;
	
	
	cout<<"P, kPa"<<setw(20)<<"T, K"<<setw(20)<<"V, m/s"<<setw(20)<<"ro, kg/m^3"<<setw(20)<<"c, m/s"<<setw(20)<<"A, cm^2"<<setw(20)<<"Ma"<<endl;
	cout<<P0<<setw(22)<<T0<<setw(20)<<0<<setw(20)<<"xx"<<setw(20)<<"xx"<<setw(20)<<"inf"<<setw(20)<<"0"<<endl;
	
    
    for(int i=0;i<=5;i++){
    	
    	P=P0-DP*(i+1);
	    T=T0*pow(P/P0,(k-1)/k);
    	V=sqrt(2000*cp*(T0-T));
		ro=P/(R*T);
		A=10000*m/(ro*V);
		c=sqrt(k*R*T*1000);
		ma=V/c;
    	cout<<P<<setw(22)<<T<<setw(20)<<V<<setw(20)<<ro<<setw(20)<<c<<setw(20)<<A<<setw(20)<<ma<<endl;
    	
	}
	cout<<"\n"<<endl;	
	
	cout<<"Gazýn kritik basýnç ve kritik sýcaklýk deðerleri aþaðýdadýr."<<endl;
	double Tk,Pk;
	cout<<"Kritik sýcaklýk: "<<kritiksicaklik(T0,k)<<" K"<<endl;
	cout<<"Kritik basýnç: "<<kritikbasinc(P0,k)<<" kPa"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"\n"<<endl;
	cout<<"twitter: ZiyaCraft";	
}
