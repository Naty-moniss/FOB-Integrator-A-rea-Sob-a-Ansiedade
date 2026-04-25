#include <iostream>
#include <cmath>
#include <iomanip>

// Função que representa a oscilação da energia sonora
double f(double x) {
    return std::pow(x, 2) + (2 * std::sin(x)) + 5;
}

int main() {
    double a, b, soma = 0.0;
    int n;

    std::cout << "--- FOB ENERGY ANALYZER v2.0 ---" << std::endl;
    
    // Agora o usuário define o trecho da música (ex: de 0 a 10 segundos)
    std::cout << "Digite o tempo inicial (segundos): ";
    std::cin >> a;
    
    std::cout << "Digite o tempo final (segundos): ";
    std::cin >> b;
    
    std::cout << "Digite a precisao (n de intervalos, ex: 1000): ";
    std::cin >> n;

    double h = (b - a) / n;

    for (int i = 1; i <= n; i++) {
        soma += f(a + i * h) * h;
    }

    std::cout << "\n>>> RESULTADO DA INTEGRAL <<<" << std::endl;
    std::cout << "Energia acumulada no trecho: " << std::fixed << std::setprecision(4) << soma << " J" << std::endl;
    std::cout << "-----------------------------" << std::endl;

    system("pause");
    return 0;
}

