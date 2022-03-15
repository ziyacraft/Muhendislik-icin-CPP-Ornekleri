#include<iostream>
#include<cmath>
#define PI 3.14159265
using namespace std;
int main(){
	
	float x;
	float y;
	float a;
	float b;
	
	cout<<"Sayfa 107 Problem 9"<<endl;
	cout<<"Bir aerodinamik akis icerisinde duzlemsel bir yuzey goz onune aliniz (bir ruzgar tunelinin duzlemsel yan duvari gibi). Bu yuzeyin boyutlari"<<endl;
	cout<<"sekilde gosterildigi gibi (bunu program icerisinde biz taslak olarak olusturacagiz) akim dogrultusunda (x dogrultusu) X (3) ft ve akima dik"<<endl;
	cout<<"dogrultuda (y dogrultusu) Y(1) ft'tir. Basinc dagiliminin (foot kareye pound olarak) p=2116-10x seklinde verildigi ve y'den bagimsiz oldugunu ve"<<endl;
	cout<<"ayrica kayma gerilmesi dagiliminin da (foot kareye pound olarak) to=90/((x+9)^0.5) ile verildigini ve y den bagimsiz oldugunu kabul ediniz. Bu"<<endl;
	cout<<"ifadelerde x feet cinsinden olup yuzeyin onunde x=0'dir. Yuzey uzerindeki bileske aerodinamik kuvvetin buyuklugunu hesaplayiniz."<<endl;
	
	cout<<"Simdi ilk olarak sekli buraya aktarmaya calisalim."<<endl;
	cout<<"x gir: ";
	cin>>x;
	cout<<"y gir: ";
	cin>>y;
	for(b=0;b<y;b++){
		cout<<"\n";
		for(a=0;a<x;a++)
		cout<<"OO";
	}
	cout<<"\nBurada kaba-taslak bir sekil yaptim. Gorsellik olarak faydali olabilir diye dusundum."<<endl;
	cout<<"Artik probleme donebiliriz. Problemdeki integral cozulmemistir."<<endl;
	
	float Fp;
	float Fto;
	float Fnet;
	float R;
	float Radaci;
	float Dur;
	
	Fp=2116*x-5*x*x;
	cout<<Fp<<"lb duvara dik Fp kuvveti"<<endl;
	Fto=(180*pow(x+9,0.5)-540);
	cout<<Fto<<"lb kayma gerilmesi Fto kuvveti"<<endl;
	Fnet=pow((Fto*Fto)+(Fp*Fp),0.5);
	cout<<"Ortaya cikan aerodinamik kuvvetin buyuklugu= "<<Fnet<<"lb"<<endl;
	R=Fto/Fp;
	Radaci=atan(R)*180/PI;
	cout<<"Kuvvetler arasindaki acimiz (derece): "<<Radaci<<endl;
	cout<<"twitter: ZiyaCraft"<<endl;
	cin>>Dur;
	
}

