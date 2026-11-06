#include<iostream>
#include <string>
using namespace std;

/*
 dicas: Use getline(cin,var); e using namespace.
 getline = use para capturar strings.
 namespace = use para evitar o std<<cout<< em tudo.
*/

int main(){
    
    string name;
    int idade;
    float altura,peso;
    
    cout<<"Digite seu nome pfv:"<<endl;
    getline(cin, name);
    cout<<"Digite sua idade:"<<endl;
    cin>>idade;
    cout<<"Digite seu peso:"<<endl;
    cin>>peso;
    cout<<"Digite sua altura:"<<endl;
    cin>>altura;
    
    cout<<name<<endl;
    cout<<idade<<endl;
    cout<<peso<<endl;
    cout<<altura<<endl;
    
    return 0;
}