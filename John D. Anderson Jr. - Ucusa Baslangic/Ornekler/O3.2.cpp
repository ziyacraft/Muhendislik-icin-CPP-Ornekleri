#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main(){
	
	const double rods=0.0023769;
	float ro;
	float h;
	int deger;
	int i;
	float ust;
	float tablo;
	float yuzdefark;
	int a;
	int kere;
	float yuzdefarkkucuk;
	
	
	setlocale(LC_ALL,"");
	cout<<"Sayfa 123 �rnek 3.2"<<endl;
	cout<<"Yo�unlu�un h irtifas� ile de�i�imini hesaplama program�. Deniz seviyesindeki yo�unluk sabittir."<<endl;
	cout<<"Ve bulaca��m�z de�erleri, tablo de�erleri ile de kar��la�t�raca��z.\n\n"<<endl;
	cout<<"En fazla 5 de�er girebilirsiniz"<<endl;
	
	cout<<"Ka� kere giri� yap�lacak:  "<<endl;
	cin>>kere;
	i=kere-1;
	if(i<=4){
		for(a=0;a<=i;a++){
			cout<<"Bir irtifa(h) de�eri giriniz:\t";
			cin>>h;
			ro=(rods)*exp(0.000033555*(-h));
			cout<<h<<"\tfeette yo�unluk de�erimiz \t"<<ro<<endl;
			cout<<"Tablodan "<<h<<" y�ksekli�indeki yo�unluk de�erini giriniz:\t";
			cin>>tablo;
			yuzdefark=(tablo/ro)*100-100;
			if(yuzdefark>0){
				cout<<"Tablodaki yo�unluk de�erimiz, bizim buldu�umuz yo�unluktan "<<"%"<<yuzdefark<<" kadar b�y�km��.\n"<<endl;
			}
			else{
				yuzdefarkkucuk=-1*yuzdefark;
				cout<<"Tablodaki yo�unluk de�erimiz, bizim buldu�umuz yo�unluktan "<<"%"<<yuzdefarkkucuk<<" kadar k���km��."<<endl;
			
			}
			
		
		} 
	
	}
	else{
		cout<<"10 dan az de�er giriniz";
	}
	cout<<"twitter: ZiyaCraft";
}
