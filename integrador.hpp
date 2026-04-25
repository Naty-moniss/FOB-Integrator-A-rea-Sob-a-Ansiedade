#ifndef INTEGRADOR_HPP
#define INTEGRADOR_HPP

#include <cmath>
#include <stdexcept>

class Integrador {
private:
    double inicio, fim;
    int intervalos;

public:
    Integrador(double a, double b, int n) : inicio(a), fim(b), intervalos(n) {
        if (n <= 0) throw std::invalid_argument("A precisao deve ser maior que 0.");
        if (b <= a) throw std::invalid_argument("O tempo final deve ser maior que o inicial.");
    }

    double calcularIntegral() {
        double h = (fim - inicio) / intervalos;
        double soma = 0.0;
        for (int i = 1; i <= intervalos; i++) {
            double x = inicio + i * h;
            soma += (std::pow(x, 2) + (2 * std::sin(x)) + 5) * h;
        }
        return soma;
    }
};

#endif 