void menu(){
    bool run = true;

    while(run){
        int choice;

        cout << "1 - Imprimir grafo \n";
        cout << "2 -  Buscar vértice \n";
        cout << "3 -  Buscar aresta \n";
        cout << "4 -  Adicionar vértice \n";
        cout << "5 -  Adicionar aresta \n";
        cout << "6 -  Remover vértice \n";
        cout << "7 -  Remover aresta \n";
        cout << "8 - \n"; // Decidir algoritmo a ser executado
        cout << "9 - Sair \n";
        cout << "Escolha uma opção: ";

        cin >> choice;

        switch(choice){
            case 1:
                // Imprimir grafo
                break;
            case 2:
                // Buscar vértice
                break;
            case 3:
                // Buscar aresta
                break;
            case 4:
                // Adicionar vértice
                break;
            case 5:
                // Adicionar aresta
                break;
            case 6:
                // Remover vértice
                break;
            case 7:
                // Remover aresta
                break;
            case 8:
                // Decidir algoritmo a ser executado
                break;
            case 9:
                run = false;
                break;
            default:
                cout << "Opção inválida. Tente novamente.\n";
        }
    }
}


int main(){

    return 0;
}