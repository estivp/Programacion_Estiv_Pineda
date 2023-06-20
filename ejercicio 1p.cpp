#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	

cout<<"Ingrese las frases: "<<endl;

char cad[50];	

cin.getline(cad,50,'\n');	
strrev(cad);

cout<<"La frase que escribio es"<<endl;
cout<<cad<<endl;

		
getch(); 
return 0;
}
