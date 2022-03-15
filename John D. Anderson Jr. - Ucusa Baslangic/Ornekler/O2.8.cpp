#include<iostream>
using namespace std;
int main()
{
	double basinc;
	double sicaklik;
	double yogunluk;
	double hacim;
	double kutle;
	double zaman;
	double debi;
	double Dur;
	
	cout<<"Sayfa 79 Ornak 2.8"<<endl;
	cout<<"Belli bir irtifada ucmakta olan bir jet nakliye ucaginin basinclendirilmis kabini icindeki havanin basinci ve sicakliginin verecegimiz degerlere"<<endl;
	cout<<"gore halini goz onune alalim. Kabin icindeki havanin herhangi bir andaki toplam hacmini de biz belirleyelim. Sayet kabin icindeki havanin tam"<<endl;
	cout<<"dolasimi her t dakikada (bunu da biz belirleyelim) bir tekrarlaniyorsa sistemdeki havanin kutle akisini kg/s cinsinden hesaplayalim"<<endl;
	
	cout<<"Kabinin icindeki hava basincini giriniz (N/m^2): ";
	cin>>basinc;
	cout<<"Kabinin icindeki sicakligi giriniz (K): ";
	cin>>sicaklik;
	cout<<"Kabinin icindeki yogunluk asagidaki gibidir"<<endl;
	yogunluk=(basinc)/(sicaklik*287);
	cout<<yogunluk<<"kg/m^3"<<endl;
	cout<<"Herhangi bir anda kabin icindeki havanin toplam kutlesi 'M=yogunluk*hacim' idir. Burada V kabinin hacmidir ve bunu biz belirleyecegiz. Buna gore V: ";
	cin>>hacim;
	kutle=yogunluk*hacim;
	cout<<endl;
	cout<<"Kutlemiz: "<<kutle<<endl;
	cout<<"Bu hava kutlesi havalandirma sisteminde kac saniyede bir dolasmaktadir. Buna gore kutlesel debiyi bulabiliriz."<<endl;
	cout<<"Zaman (s) :";
	cin>>zaman;
	debi=kutle/zaman;
	cout<<"Kutlesel debimiz (kg/s): "<<debi<<endl;
	cout<<"twitter ZiyaCraft" ;
	cin>>Dur;
	
}
