#include <iostream>
using namespace std;

int main (){
    system("clear");
    int ma1[2][3][3];

    for (int i = 0; i < 2; i++){
        cout << "Mahasiswa ke-" << i + 1 << ":" << endl;
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                cin >> ma1[i][j][k];
            }
        }
        cout << endl;
    } 

for (int i = 0; i < 2; i++){
        cout << "Mahasiswa ke-" << i + 1 << ":" << endl;
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                cout << ma1[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    } 
}