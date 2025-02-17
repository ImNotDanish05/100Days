//Buat penjumlahan prima

#include <iostream>
#include <vector>
#include <string>   
using namespace std;

struct Settings{
    bool proses = false;
    bool show_prima = false;
    bool show_notprima = false;
};


bool PrimaChecker(int x){
    for (int i = 2; i < x ; i++ ){
        if (x % i == 0){//Jikalau tidak ada sisa = bukan prima
        return false;
        }
    }return true;
}

int main(){ // 1 == TRUE 0 == FALSE
    int Result, Counter, Add;
    Settings Rules;
    // string Out = "2", Helper;
    vector<int> CPrima, CBPrima;
    bool Prima;
    cout << "Menghitung penjumlahan prima" << endl;
    cout << "Berapa banyak untuk menjumlah: ";
    cin >> Counter;
    
    Result = 2;
    Add = 3;
    for (int i = 0; i < Counter; i++){
        if(PrimaChecker(Add)){
            if(Rules.proses){
            cout << "Prima: " << Add << endl;
            cout << Result << " + " << Add << " = " << Result + Add << " | Angka ke: " << i << endl;
            // CPrima[i] = Add;
            }
            CPrima.push_back(Add);
            Result = Result + Add;
            // Helper = " + " + to_string(Add);
            // Out = Out + Helper;
        }else{
            i--;
            // CBPrima[PCounter] = Add;
            CBPrima.push_back(Add);
            if(Rules.proses){
            cout << "Bukan Prima: " << Add << endl;}
        }Add = Add + 2;
    }
    cout << " " << endl;
    cout << "Hasil penjumlahan" << endl;
    for (int i = 0 ; i < CPrima.size() ; i++){
        cout << CPrima[i] << " + ";
    }
    cout << " = " << Result <<endl;

    //Prima
    if(Rules.show_prima){
    cout << " " << endl;
    cout << "Prima: { ";
    for (int i = 0 ; i < CPrima.size() ; i++){
        cout << CPrima[i] << ", ";
    }}
    cout << "} " << endl;

    //Bukan Prima
    if(Rules.show_notprima){
    cout << " " << endl;
    cout << "Bukan Prima: { 4, 6, 8, ";
    for (int i = 0 ; i < CBPrima.size() ; i++){
        cout << CBPrima[i] << ", ";
        for (int j = CBPrima[i] ; j < CBPrima[i + 1] ; j++){
            if (j % 2 == 0){
                cout << j << ", ";
            }
        }
    }cout << "} " << endl;
    }

    return 0;
} 

