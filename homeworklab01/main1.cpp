/*
  Data Structures - Lab 1: Recursive Algorithms
  Project: Blob Detection (Counting & Center of Mass)
  Author: [Ad Soyad] - [Student ID]
  Group Members: [Eğer varsa diğer isimler ve ID'ler]
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip> // setw kullanabilmek için
#include <limits>   // numeric_limits kullanabilmek için

using namespace std;

// 1. Dosyayı okuyup grid oluşturma (sağlamlaştırılmış versiyon)
bool readFile(const string &filename, vector<vector<char>> &grid, int &rows, int &cols) {
    ifstream file(filename);
    if (!file.is_open()) {
        return false;
    }

    file >> rows >> cols;
    // Satır sonundaki tüm görünmez karakterleri atlayarak bir sonraki satıra güvenle geçer.
    file.ignore(numeric_limits<streamsize>::max(), '\n');

    grid.assign(rows, vector<char>(cols, ' '));
    string line;
    for (int i = 0; i < rows; i++) {
        if (!getline(file, line)) break;
        for (int j = 0; j < (int)line.size() && j < cols; j++) {
            grid[i][j] = line[j];
        }
    }

    file.close();
    return true;
}

// 2. Grid'i ekrana basma
void printGrid(const vector<vector<char>> &grid) {
    if (grid.empty() || grid[0].empty()) return;
    int rows = grid.size();
    int cols = grid[0].size();

    cout << "   ";
    for (int j = 0; j < cols; j++) cout << j % 10;
    cout << endl;

    cout << "  +";
    for (int j = 0; j < cols; j++) cout << "-";
    cout << "+" << endl;

    for (int i = 0; i < rows; i++) {
        cout << setw(2) << i << "|";
        for (int j = 0; j < cols; j++) {
            cout << grid[i][j];
        }
        cout << "|" << endl;
    }

    cout << "  +";
    for (int j = 0; j < cols; j++) cout << "-";
    cout << "+" << endl;

    cout << "   ";
    for (int j = 0; j < cols; j++) cout << j % 10;
    cout << endl;
}

// 3. Recursive DFS ile blob keşfetme
void exploreBlob(vector<vector<char>> &grid, int r, int c,
                 int &count, int &sumRow, int &sumCol) {
    int rows = grid.size();
    int cols = grid[0].size();
    
    if (r < 0 || r >= rows || c < 0 || c >= cols) return;
    
    // PDF KURALI: Yalnızca 'X' karakterleri blob pikselidir.
    if (grid[r][c] != 'x') return;

    count++;
    sumRow += r;
    sumCol += c;
    
    // Ziyaret edilen pikseli boşluk yaparak tekrar sayılmasını önle.
    grid[r][c] = ' '; 

    // PDF KURALI: Pikseller sadece 4 yönde komşudur.
    exploreBlob(grid, r - 1, c, count, sumRow, sumCol); // Yukarı
    exploreBlob(grid, r + 1, c, count, sumRow, sumCol); // Aşağı
    exploreBlob(grid, r, c - 1, count, sumRow, sumCol); // Sol
    exploreBlob(grid, r, c + 1, count, sumRow, sumCol); // Sağ
}

// 4. Blobları bulma ve istatistikleri yazdırma
void findBlobs(vector<vector<char>> &grid) {
    if (grid.empty() || grid[0].empty()) return;
    int rows = grid.size();
    int cols = grid[0].size();
    int blobIndex = 1;
    
    // PDF KURALI: Çıktı formatı PDF'teki gibi olmalı.
    cout << "\nBLOB | NoOfPixels | CoM Row | CoM Column |\n";
    cout << "------------------------------------------\n";
    
    cout << fixed << setprecision(2);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 'x') {
                int count = 0, sumRow = 0, sumCol = 0;
                
                exploreBlob(grid, i, j, count, sumRow, sumCol);
                
                if (count > 0) {
                    double centerY = static_cast<double>(sumRow) / count;
                    double centerX = static_cast<double>(sumCol) / count;
                    
                    cout << setw(4) << blobIndex++ << " |" 
                         << setw(11) << count << " |"
                         << setw(8) << centerY << " |"
                         << setw(11) << centerX << " |\n";
                }
            }
        }
    }
}

// 5. Main fonksiyon
int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    vector<vector<char>> grid;
    int rows = 0, cols = 0;

    if (!readFile(filename, grid, rows, cols)) {
        cerr << "Error: Could not read file or file does not exist.\n";
        return 1;
    }

    // PDF KURALI: Önce girdi matrisini ekrana bas.
    printGrid(grid);

    // Sonra blob istatistiklerini hesapla ve bas.
    findBlobs(grid);

    return 0;
}