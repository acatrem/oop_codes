#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void printGrid(vector<vector<char>>, int, int);



int main(){

    // kullanicidan dosya ismi alma islemi
    string file_name;
    cout<<"Enter the file name:";
    getline(cin, file_name);

    //dosya islemleri
    ifstream my_file(file_name);

    if(!my_file.is_open()){
        cout<<"Error: Unable to open file! "<<endl;
    }

    int rows, cols;
    my_file>>rows>>cols;
    my_file.ignore(); // \n'yi atlar

    vector<vector<char>>grid(rows, vector<char>(cols, ' '));  // 2D vector (dinamik array), boslukla dolduruldu

    

    // dosyadaki grid yaziliyor
    string line;
    for(int i = 0; i < rows; i++){
        getline(my_file, line);
        for(int j = 0; j < cols; j++){
            grid[i][j] = line[j];
        }
    }
    my_file.close();

    // grid'i yazdirma
    printGrid(grid, rows, cols);
    cout<<endl;


    return 0;
}

void printGrid(vector<vector<char>> grid, int rows, int cols){

    // ust sutun 0123...
    cout<<"   ";
    for(int j = 0; j < cols; j++) cout << j % 10;
    cout<<endl;

    //ust sinir
    cout<<"  +";
    for(int j = 0; j < cols; j++) cout << "-";
    cout<<"+"<<endl;


    //grid icerisi

    for(int i = 0; i < rows; i++){
        cout << i <<" |"; 
        for(int j = 0; j < cols; j++) cout<<grid[i][j];
        cout<< "|" << i << endl;
    }

    // alt sinir
    cout << "  +";
    for(int j = 0; j < cols; j++) cout << "-";
    cout << "+" << endl;

    // alt sutun 0123..
    cout<<"   ";
    for(int j=0; j < cols; j++) cout<< j % 10;
    cout<<endl;

}