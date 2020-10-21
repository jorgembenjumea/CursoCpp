

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char frase[30];
    int vocal_a=0, vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0; //inicializar contador del

    cout<<"Digita una frase";
    cin.getline(frase,30,'\n');

    for(int i=0;i<30;i++){
        switch(frase[i]){
            case 'a':vocal_a++;break;
            case 'e':vocal_e++;break;
            case 'u':vocal_u++;break;
            case 'o':vocal_o++;break;
            case 'i':vocal_i++;break;

        }

    }
    cout<<"La vocal a fue encontrada :"<<vocal_a<<endl;
    cout<<"La vocal e fue encontrada :"<<vocal_e<<endl;
    cout<<"La vocal u fue encontrada :"<<vocal_u<<endl;
    cout<<"La vocal i fue encontrada :"<<vocal_i<<endl;
    cout<<"La vocal o fue encontrada :"<<vocal_o<<endl;


    getch();
    return 0;
}