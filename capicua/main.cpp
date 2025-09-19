#include <iostream>

using namespace std;


bool capicua (const string & num, int inicio, int fin) {
    if ( inicio >= fin)
        return true;
    if (num[inicio] != num [fin])
        return false;
    return capicua(num, inicio+1, fin-1);
}

int main () {
    long long n;
    cout << "Ingresa un numero: ";
    cin >> n;

    string numero = to_string(n);

    if  (capicua(numero, 0, numero.size()-1))
        cout << n << "es capicua." <<endl;
    else
        cout << n << "no es capicua." << endl;
    return 0;

}+

