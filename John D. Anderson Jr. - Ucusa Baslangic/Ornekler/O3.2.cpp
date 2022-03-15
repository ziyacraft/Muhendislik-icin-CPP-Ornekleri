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
	cout<<"Sayfa 123 Örnek 3.2"<<endl;
	cout<<"Yoðunluðun h irtifasý ile deðiþimini hesaplama programý. Deniz seviyesindeki yoðunluk sabittir."<<endl;
	cout<<"Ve bulacaðýmýz deðerleri, tablo deðerleri ile de karþýlaþtýracaðýz.\n\n"<<endl;
	cout<<"En fazla 5 deðer girebilirsiniz"<<endl;
	
	cout<<"Kaç kere giriþ yapýlacak:  "<<endl;
	cin>>kere;
	i=kere-1;
	if(i<=4){
		for(a=0;a<=i;a++){
			cout<<"Bir irtifa(h) deðeri giriniz:\t";
			cin>>h;
			ro=(rods)*exp(0.000033555*(-h));
			cout<<h<<"\tfeette yoðunluk deðerimiz \t"<<ro<<endl;
			cout<<"Tablodan "<<h<<" yüksekliðindeki yoðunluk deðerini giriniz:\t";
			cin>>tablo;
			yuzdefark=(tablo/ro)*100-100;
			if(yuzdefark>0){
				cout<<"Tablodaki yoðunluk deðerimiz, bizim bulduðumuz yoðunluktan "<<"%"<<yuzdefark<<" kadar büyükmüþ.\n"<<endl;
			}
			else{
				yuzdefarkkucuk=-1*yuzdefark;
				cout<<"Tablodaki yoðunluk deðerimiz, bizim bulduðumuz yoðunluktan "<<"%"<<yuzdefarkkucuk<<" kadar küçükmüþ."<<endl;
			
			}
			
		
		} 
	
	}
	else{
		cout<<"10 dan az deðer giriniz";
	}
	cout<<"twitter: ZiyaCraft";
}
