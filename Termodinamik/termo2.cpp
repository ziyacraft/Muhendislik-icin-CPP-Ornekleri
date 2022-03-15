#include<iostream>
#include<cmath>
#include<clocale>
#define cp 1.005
#define k 1.4
using namespace std;

double Tyayici(double v,double Tatm){
	
	double Tk01;
	Tk01=Tatm+(v*v/2*cp)*0.001;
	return (Tk01);
	}
	
double Pyayici(double Tk01,double Tatm,double Patm){
		
	double P01;
	P01=Patm*pow(Tk01/Tatm,k/(k-1));
	return (P01);
	}

int main(){
	
	double Tatm;
	double Patm;
	double v;
	double X;
	
	setlocale(LC_ALL,"");
	
	cout<<"Bir uçak h metre yükseklikte v m/s hýzla uçmaktadýr. Bu yükseklikteki Patm atmosferik basýnç ve Tatm çevre sýcaklýðýdýr."<<endl;
	cout<<"Çevredeki hava kompresöre girmeden önce yayýcýda yavaþlatýlmaktadýr. Hem yayýcýnýn hem de kompresörün izentropik olduðunu kabul ediyoruz."<<endl;
	cout<<"a)Kompresör giriþindeki durma basýnýcý nedir?\nb)Kompresörün durma basýncý oraný X olduðuna göre birim kütle baþýna gerekli olan kompresör iþi nedir?\n\n"<<endl;
	
	cout<<"Havanýn yüksekliðe göre atmosferik basýncý nedir:\t";
	cin>>Patm;
	cout<<"Havanýn yüksekliðe göre atmosferik sýcaklýðý nedir:\t";
	cin>>Tatm;
	cout<<"Uçaðýn hýzýný giriniz:\t";
	cin>>v;
	
	double Tk01;
	Tk01= Tyayici(v,Tatm);
	cout<<"Kompresör giriþi, yani yayýcý çýkýþý sýcaklýðý:  "<<Tk01<<" K"<<endl;
	
	double P01;
	P01=Pyayici(Tk01,Tatm,Patm);
	cout<<"Kompresör giriþi, yani yayýcý çýkýþý basýncý:  "<<P01<<" kPa"<<endl;
	
	double T02;
	cout<<"Kompresörün çýkýþý ve giriþin arasýndaki durma basýncý oraný P02/P01=X'dir. X= ";
	cin>>X;
	T02=Tk01*pow(X,(k-1)/k);
	cout<<"Kompresör çýkýþýndaki havanýn durma sýcaklýðý T02=  "<<T02<<" K"<<endl;
	
	double wkomp;
	wkomp=cp*(T02-Tk01);
	cout<<"Kompresöre verilen iþ:  "<<wkomp<<" kJ/kg"<<endl;
	
	cout<<"twitter: ZiyaCraft";
}
