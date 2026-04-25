#include <iostream>
#include <cmath>
#include <iomanip>

double f(double x) {
    // A função da sua análise: f(x) = x^2 + 2sin(x) + 5
    return std::pow(x, 2) + (2 * std::sin(x)) + 5;
}

int main() {
    double a = 0.0, b = 10.0, h, soma = 0.0;
    int n = 1000;
    h = (b - a) / n;

    for (int i = 1; i <= n; i++) {
        soma += f(a + i * h) * h;
    }

    std::cout << "\n========================================" << std::endl;
    std::cout << "       FOB ENERGY INTEGRATOR v1.0       " << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "Energia Total Acumulada: " << std::fixed << std::setprecision(4) << soma << std::endl;
    std::cout << "Analise concluida com n = " << n << " intervalos." << std::endl;
    std::cout << "========================================\n" << std::endl;

    system("pause"); // Mantém a tela aberta para você ver o resultado
    return 0;
} 

