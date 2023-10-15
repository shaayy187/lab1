#include<iostream>

using namespace std;

int main(){
string imie; 
string nazwisko; 
string wynik;


cout<<"Prosze podac swoje imie"<<endl;
cin>>imie;
cout<<"Prosze teraz podac swoje nazwisko"<<endl;
cin>>nazwisko;
wynik=imie+" "+nazwisko;
if(imie.back()=='a'){ 
cout<<"Witam Pani "<<wynik<<endl;
}
else{
    cout<<"Witam Panie "<<wynik<<endl;
}




    
}