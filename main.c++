#include <iostream>
#include <cctype>

#define LINES cout << "\n\n";

using namespace std;

int main() {

    int n1, n2, res;
    char opc;

    inicio:

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res = (n1 + n2) / 2;

    if(res >= 8){
        cout << "\nAluno: Aprovado\n";
    } else if (res >= 6) {
        cout << "\nAluno: Recuperação\n";
    } else {
        cout << "\nAluno: Reprovado\n";
    }

    LINES;

    cout << "\n Concorda com o resultado: [s/n] \n";
    cin >> opc;
    opc = tolower(opc);

    if (opc == 'n') {
        cout << "\nReveja suas notas\n";
        goto inicio;
    } else {
        cout << "\nok\n";
    }

    system("pause");
    system("cls");
    return 0;
}
