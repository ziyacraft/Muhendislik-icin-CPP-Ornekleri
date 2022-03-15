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
	

	
	cout<<"L�le gibi en-kesit alan� de�i�en bir kanalda bir gaz, m k�tlesel debi ile daimi olarak akmaktad�r."<<endl;
	cout<<"Gaz�m�z kanaldan, bizim belirleyece�imiz bas�n�ta ve s�cakl�kta d���k h�zla girmekte ve l�le i�erisinde istedi�imiz bas�nca kadar geni�lemektedir."<<endl;
	cout<<"L�le, ak�� yakla��k olarak izentropik olacak �ekilde tasarlanm��t�r."<<endl;
	cout<<"Kanal boyunca her bir konumda DeltaP kPa'l�k bir bas�n� d�����ne kar��l�k gelen yo�unluk,h�z,ak�� alan� ve Ma say�s�n� bulaca��z.\n"<<endl;
	cout<<"Gaz�n R sabitini giriniz: ";
	cin>>R;
	cout<<"Gaz�n k de�erini giriniz: ";
	cin>>k;
	cout<<"Gaz�n cp de�erini giriniz: ";
	cin>>cp;
	cout<<"L�leye giri�teki k�tlesel debiyi giriniz: ";
	cin>>m;
	cout<<"Gaz�n giri� bas�nc�n� giriniz: ";
	cin>>P0;
	cout<<"Gaz�n giri� s�cakl���n� giriniz: ";
	cin>>T0;
	cout<<"Gaz�n DP bas�n� d���� kademesini giriniz: ";
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
	
	cout<<"Gaz�n kritik bas�n� ve kritik s�cakl�k de�erleri a�a��dad�r."<<endl;
	double Tk,Pk;
	cout<<"Kritik s�cakl�k: "<<kritiksicaklik(T0,k)<<" K"<<endl;
	cout<<"Kritik bas�n�: "<<kritikbasinc(P0,k)<<" kPa"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"\n"<<endl;
	cout<<"twitter: ZiyaCraft";	
}
