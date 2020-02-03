#include <iostream>

using namespace std;
string CalcularTiempo(int segundosRecibidos){

    int horas = segundosRecibidos/3600;
    int minutos= (segundosRecibidos-horas*3600)/60;
    int segundos = segundosRecibidos - (horas *3600+minutos*60);
    string resultado = "(El tiempo transformado es  Horas " + std::to_string(horas) + ",Minutos " +  std::to_string(minutos) + ", segundos"+ std::to_string(segundos) +")";

    return resultado;

}
int main() {
    int segundosRecibidos;

    cout << "Hola! ingresa el número de segundos quieres transformar" << endl;
    cin >> segundosRecibidos;
    cout << CalcularTiempo(segundosRecibidos);
    return 0;
}
