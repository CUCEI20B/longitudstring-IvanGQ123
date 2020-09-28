#include <iostream>

using namespace std;

int main() {
    string cadena;
    //cin >> cadena;// Lee hasta el espacio o \n

    getline(cin, cadena);//Lee toda la cadena
    cout << cadena.size() << endl;

    return 0;
}
