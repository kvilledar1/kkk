#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    std::string dirName = "testdir";

    std::cout << "Creating directory: " << dirName << std::endl;
    fs::create_directory(dirName);
    std::cout << "Directory created." << std::endl;

    std::cout << "Removing directory: " << dirName << std::endl;
    fs::remove(dirName);
    std::cout << "Directory removed." << std::endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    char operacion;
    float num1, num2;
    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> operacion;
    cout << "Ingrese los dos numeros: ";
    cin >> num1 >> num2;

    switch(operacion){
        case '+':
            cout << "Resultado: " << num1 + num2;
            break;

        case '-':
            cout << "Resultado: " << num1 - num2;
            break;

        case '*':
            cout << "Resultado: " << num1 * num2;
            break;

        case '/':
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2;
            } else {
                cout << "No se puede dividir por cero";
            }
            break;

        default:
            cout << "Operacion no valida";
            break;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    char operacion;
    float num1, num2;
    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> operacion;
    cout << "Ingrese los dos numeros: ";
    cin >> num1 >> num2;

    switch(operacion){
        case '+':
            cout << "Resultado: " << num1 + num2;
            break;

        case '-':
            cout << "Resultado: " << num1 - num2;
            break;

        case '*':
            cout << "Resultado: " << num1 * num2;
            break;

        case '/':
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2;
            } else {
                cout << "No se puede dividir por cero";
            }
            break;

        default:
            cout << "Operacion no valida";
            break;
    }

    return 0;
}
