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
	
	cout<<"Bir u�ak h metre y�kseklikte v m/s h�zla u�maktad�r. Bu y�kseklikteki Patm atmosferik bas�n� ve Tatm �evre s�cakl���d�r."<<endl;
	cout<<"�evredeki hava kompres�re girmeden �nce yay�c�da yava�lat�lmaktad�r. Hem yay�c�n�n hem de kompres�r�n izentropik oldu�unu kabul ediyoruz."<<endl;
	cout<<"a)Kompres�r giri�indeki durma bas�n�c� nedir?\nb)Kompres�r�n durma bas�nc� oran� X oldu�una g�re birim k�tle ba��na gerekli olan kompres�r i�i nedir?\n\n"<<endl;
	
	cout<<"Havan�n y�ksekli�e g�re atmosferik bas�nc� nedir:\t";
	cin>>Patm;
	cout<<"Havan�n y�ksekli�e g�re atmosferik s�cakl��� nedir:\t";
	cin>>Tatm;
	cout<<"U�a��n h�z�n� giriniz:\t";
	cin>>v;
	
	double Tk01;
	Tk01= Tyayici(v,Tatm);
	cout<<"Kompres�r giri�i, yani yay�c� ��k��� s�cakl���:  "<<Tk01<<" K"<<endl;
	
	double P01;
	P01=Pyayici(Tk01,Tatm,Patm);
	cout<<"Kompres�r giri�i, yani yay�c� ��k��� bas�nc�:  "<<P01<<" kPa"<<endl;
	
	double T02;
	cout<<"Kompres�r�n ��k��� ve giri�in aras�ndaki durma bas�nc� oran� P02/P01=X'dir. X= ";
	cin>>X;
	T02=Tk01*pow(X,(k-1)/k);
	cout<<"Kompres�r ��k���ndaki havan�n durma s�cakl��� T02=  "<<T02<<" K"<<endl;
	
	double wkomp;
	wkomp=cp*(T02-Tk01);
	cout<<"Kompres�re verilen i�:  "<<wkomp<<" kJ/kg"<<endl;
	
	cout<<"twitter: ZiyaCraft";
}
