#include <iostream>
#include <iomanip>
#include "Integrador.hpp"

int main() {
    double a, b;
    int n;

    try {
        std::cout << "--- STEM-MATCH: ANALISADOR DE ENERGIA v4.0 ---" << std::endl;
        std::cout << "Tempo inicial (s): "; std::cin >> a;
        std::cout << "Tempo final (s): ";   std::cin >> b;
        std::cout << "Intervalos (n): ";    std::cin >> n;

        Integrador calc(a, b, n);
        std::cout << "\nRESULTADO FINAL: " << std::fixed << std::setprecision(4) 
                  << calc.calcularIntegral() << " Joules" << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "\n[ERRO DE LOGICA]: " << e.what() << std::endl;
    }

    system("pause");
    return 0;
}  