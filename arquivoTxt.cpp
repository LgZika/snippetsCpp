#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int numero;
    fstream arquivo;
    arquivo.open("save.txt", ios::out);

    cout << "Entre com um numero: ";
    cin >> numero;
    
    if(arquivo.is_open()){
        arquivo << numero;
        arquivo.close(); 
    }else{
        cout << "Erro na Abertura do Arquivo." << endl;
    }

    arquivo.open("save.txt", ios::in);
    if(arquivo.is_open()){
        while(!arquivo.eof()){
            arquivo >> numero;
        }
        cout << numero << endl;
        arquivo.close(); 
    }else{
        cout << "Erro na Abertura do Arquivo." << endl;
    }
    
    return 0;
}
