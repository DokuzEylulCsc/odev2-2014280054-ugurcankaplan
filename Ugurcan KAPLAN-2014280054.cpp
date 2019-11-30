#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int donustur(char s1)
{
int sayi;

switch (s1)
{
case 'M': sayi = 1000; break;
case 'D': sayi = 500; break;
case 'C': sayi = 100; break;
case 'L': sayi = 50; break;
case 'X': sayi = 10; break;
case 'V': sayi = 5; break;
case 'I': sayi = 1; break;
default: sayi = 0; break;
}
return sayi;
}

int romaToInt(char *s)

{
	
int sonuc=0,sayi1=0,sayi2=0,onDeger=0,sayi;
int i;

sayi1+=donustur(s[0]);
for(i=1;i<10;i++)
{
sayi= donustur(s[i]);

if(onDeger == 0)
{
if(sayi1 >= sayi)
{
sayi1+=sayi;
onDeger = sayi;
}
else
{
sayi1 = sayi-sayi1;
onDeger = sayi;
}
}
else{
if(onDeger >= sayi)
{
sayi1+= sayi;
onDeger= sayi;
}
else
{
sayi1+= sayi-(onDeger*2);
onDeger= sayi;
}
}
}
return sayi1;
}

string intToRoma(int s)
{

int sayi;
if (s>3999){
	return  "Limiti astiniz.";

}
string sonuc="DONUSTURULEN SAYI:" ;
sayi = s/1000;

switch (sayi)
{
case 1: sonuc+= 'M';  break;
case 2: sonuc+= 'M';sonuc+= 'M' ;  break;
case 3: sonuc+= 'M';sonuc+= 'M' ;sonuc+= 'M'; break;
default: break;
}
sayi = s%1000;
sayi = sayi/100;

switch (sayi)
{
case 1: sonuc+= 'C';  break;
case 2: sonuc+= 'C'; sonuc+= 'C' ; break;
case 3: sonuc+= 'C'; sonuc+= 'C' ;sonuc+= 'C' ; break;
case 4: sonuc+= 'C';sonuc+='D';  break;
case 5: sonuc+= 'D';  break;
case 6: sonuc+= 'D';sonuc+= 'C' ;  break;
case 7: sonuc+= 'D';sonuc+= 'C' ;sonuc+= 'C' ;  break;
case 8: sonuc+= 'D';sonuc+= 'C' ;sonuc+= 'C' ;sonuc+= 'C' ; break;
case 9: sonuc+= 'C';sonuc+= 'M' ; break;
default: break;
}
sayi = s%100;
sayi = sayi / 10;

switch (sayi)
{
case 1: sonuc+= 'X';  break;
case 2: sonuc+= 'X'; sonuc+='X';  break;
case 3: sonuc+= 'X';sonuc+= 'X'; sonuc+= 'X';  break;
case 4: sonuc+= 'X'; sonuc+='L'; break;
case 5: sonuc+= 'L'; break;
case 6: sonuc+= 'L'; sonuc+='X'; break;
case 7: sonuc+= 'L';sonuc+= 'X'; sonuc+= 'X'; break;
case 8: sonuc+= 'L';sonuc+= 'X'; sonuc+= 'X';sonuc+='X' ; break;
case 9: sonuc+= 'X'; sonuc+='C'; break;
default: break;
}
sayi = s%10;
sayi = sayi / 1;
switch (sayi)
{
case 1: sonuc+= 'I'; break;
case 2: sonuc+= 'I';sonuc+= 'I' ; break;
case 3: sonuc+= 'I';sonuc+= 'I' ;sonuc+= 'I' ; break;
case 4: sonuc+= 'I';sonuc+= 'V' ; break;
case 5: sonuc+= 'V';  break;
case 6: sonuc+= 'V'; sonuc+= 'I' ; break;
case 7: sonuc+= 'V'; sonuc+= 'I' ;sonuc+= 'I'; break;
case 8: sonuc+= 'V'; sonuc+= 'I' ;sonuc+= 'I' ;sonuc+= 'I' ; break;
case 9: sonuc+= 'I';sonuc+= 'X' ; break;
default: break;
}

return sonuc;

}

int main(){
	while(true){
	
char s1[10];
	
char result[20];
int s2;
int i,sonuc;
cout<<endl;
cout<<"ROMA TO INT =1"<<endl ;

cout<<"INT TO ROMA =2"<<endl ;
gets(s1);


if(s1[0]=='1'){
cout<<"GIR(ROMA RAKAMI):" ;
gets(s1);

sonuc = romaToInt(s1);

cout<<"DONUSTURULEN SAYI:" ;
cout<<sonuc<<endl;

}
else if(s1[0]=='2'){
	cout<<"GIR(SAYI):" ;
cin >> s2;


cout<< intToRoma(s2)<<endl;
}
getch();
}
return 0;
}
