#include <iostream>
using namespace std;

int main (){
    system("clear");
    int n;

    int *nasigoreng = new int[n];

    cout << "Masukkan jumlah data: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "Data ke-" << i + 1 << ": ";
        cin >> nasigoreng[i];
    }

    cout << "Output Data:" << endl;
    for (int i = 0; i < n; i++){
        cout << "Output Data ke-" << i + 1 << ": ";
        cout << nasigoreng[i] << endl;
    }
    delete[] nasigoreng;
    return 0;
}