#ifndef NEURONA_H
#define NEURONA_H

#include <iostream>
#include <list>
#include <string>
#include<fstream>
#include<sstream>
#include <cmath> // Para usar sqrt y pow

class Neurona {
private:
    int id;
    double voltaje;
    int posX;
    int posY;
    int red;
    int green;
    int blue;

public:
    Neurona(int id, double voltaje, int posX, int posY, int red, int green, int blue)
        : id(id), voltaje(voltaje), posX(posX), posY(posY), red(red), green(green), blue(blue) {}

    void print() const {
        std::cout << "Neurona " << id << ": Voltaje=" << voltaje << ", Posición=(" << posX << ", " << posY << "), RGB=(" << red << ", " << green << ", " << blue << ")" << std::endl;
    }

    std::string to_string() const {
        return "Neurona " + std::to_string(id) + ": Voltaje=" + std::to_string(voltaje) + ", Posición=(" + std::to_string(posX) + ", " + std::to_string(posY) + "), RGB=(" + std::to_string(red) + ", " + std::to_string(green) + ", " + std::to_string(blue) + ")";
    }

    std::string to_string_delimitado() const {

        return std::to_string(id) + "," + std::to_string(voltaje) + ","
               + std::to_string(posX) + "," + std::to_string(posY) + ","
               + std::to_string(red) + "," + std::to_string(green) + ","
               + std::to_string(blue);
    }

    int getId() const {
        return id;
    }

    int getRed() const{
        return red;
    }

    int getGreen() const{
        return green;
    }

    int getBlue() const {
        return blue;
    }

    double getVoltaje() const{
        return voltaje;
    }

    int getX() const{
        return posX;
    }

    int getY () const{
        return posY;
    }

};

class AdministradorNeuronas {
private:
    std::list<Neurona> neuronas;
    Neurona parsear_linea_delimitada(std::istringstream& ss) {
        int id;
        double voltaje;
        int posX, posY, red, green, blue;

        // Lee los valores de la línea usando delimitadores
        char delimiter;

        if (ss >> id >> delimiter >> voltaje >> delimiter >> posX >> delimiter >> posY >> delimiter >> red >> delimiter >> green >> delimiter >> blue) {
            return Neurona(id, voltaje, posX, posY, red, green, blue);
        } else {
            // Manejo de error en caso de que la línea no tenga el formato esperado
            throw std::runtime_error("Error al analizar la línea del archivo.");
        }
    }

public:

    std::string obtener_neurona_en_posicion(int posicion) {
        if (posicion >= 0 && posicion < tam()) {
            auto it = neuronas.begin();
            std::advance(it, posicion); // Avanza el iterador a la posición deseada
            const Neurona& neurona = *it;
            return neurona.to_string();
        } else {
            return "Posición fuera de rango.";
        }
    }


    void agregar_inicio(Neurona neurona) {
        neuronas.push_front(neurona);
    }

    int tam(){
        return neuronas.size();
    }

    void agregar_final(Neurona neurona) {
        neuronas.push_back(neurona);
    }

    void mostrar() {
        for (const auto& neurona : neuronas) {
            neurona.print();
        }
    }

    std::string imprimir() const {
        std::string resultado;
        for (const auto& neurona : neuronas) {
            resultado += neurona.to_string() + "\n";
        }
        return resultado;
    }

    void guardar_en_archivo(const std::string& nombre_archivo) {
        std::ofstream archivo(nombre_archivo);

        if (archivo.is_open()) {
            for (const auto& neurona : neuronas) {
                archivo << neurona.to_string_delimitado() << "\n"; // Guarda cada neurona con delimitadores
            }
            archivo.close();
            std::cout << "Contenido guardado en el archivo " << nombre_archivo << std::endl;
        } else {
            std::cerr << "No se pudo abrir el archivo " << nombre_archivo << std::endl;
        }
    }

    void cargar_desde_archivo(const std::string& ruta_completa_archivo) {
        std::ifstream archivo(ruta_completa_archivo);

        if (archivo.is_open()) {


            std::string linea;
            while (std::getline(archivo, linea)) {
                // Utiliza stringstream para analizar la línea y crear una neurona
                std::istringstream ss(linea);
                Neurona neurona = parsear_linea_delimitada(ss);
                agregar_final(neurona);
            }

            archivo.close();
            std::cout << "Contenido cargado desde el archivo " << ruta_completa_archivo << std::endl;
        } else {
            std::cerr << "No se pudo abrir el archivo " << ruta_completa_archivo << std::endl;
        }
    }

    int string_a_entero(const std::string& str) {
        try {
            return std::stoi(str);
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: No se pudo convertir el string a un entero." << std::endl;
            return -1; // Valor sentinela para indicar error
        }
    }

    std::string encontrar_neurona_por_id(const std::string& id_str) {
        int id = string_a_entero(id_str);
        if (id == -1) {
            return "Error: ID no válido.";
        }

        for (const Neurona& neurona : neuronas) {
            if (neurona.getId() == id) {
                return neurona.to_string();
            }
        }

        return "No se encontró una neurona con el ID proporcionado.";
    }

    int obtener_red_en_posicion(int posicion) {
        if (posicion >= 0 && posicion < tam()) {
            auto it = neuronas.begin();
            std::advance(it, posicion); // Avanza el iterador a la posición deseada
            const Neurona& neurona = *it;
            return neurona.getRed();
        } else {
            std::cerr << "Posición fuera de rango." << std::endl;
                return -1; // Valor sentinela
        }
    }

    int obtener_green_en_posicion(int posicion) {
        if (posicion >= 0 && posicion < tam()) {
            auto it = neuronas.begin();
            std::advance(it, posicion);
            const Neurona& neurona = *it;
            return neurona.getGreen();
        } else {
            std::cerr << "Posición fuera de rango." << std::endl;
                return -1;
        }
    }

    int obtener_blue_en_posicion(int posicion) {
        if (posicion >= 0 && posicion < tam()) {
            auto it = neuronas.begin();
            std::advance(it, posicion);
            const Neurona& neurona = *it;
            return neurona.getBlue();
        } else {
            std::cerr << "Posición fuera de rango." << std::endl;
                return -1;
        }
    }

    double obtener_voltaje_en_posicion(int posicion) {
        if (posicion >= 0 && posicion < tam()) {
                auto it = neuronas.begin();
                std::advance(it, posicion); // Avanza el iterador a la posición deseada
                const Neurona& neurona = *it;
                return neurona.getVoltaje();
        } else {
                std::cerr << "Posición fuera de rango." << std::endl;
                    return -1.0; // Valor sentinela para indicar error
        }
    }

    int obtener_posX_en_posicion(int posicion) {
        if (posicion >= 0 && posicion < tam()) {
                auto it = neuronas.begin();
                std::advance(it, posicion); // Avanza el iterador a la posición deseada
                const Neurona& neurona = *it;
                return neurona.getX();
        } else {
                std::cerr << "Posición fuera de rango." << std::endl;
                    return -1; // Valor sentinela para indicar error
        }
    }

    int obtener_posY_en_posicion(int posicion) {
        if (posicion >= 0 && posicion < tam()) {
                auto it = neuronas.begin();
                std::advance(it, posicion); // Avanza el iterador a la posición deseada
                const Neurona& neurona = *it;
                return neurona.getY();
        } else {
                std::cerr << "Posición fuera de rango." << std::endl;
                    return -1; // Valor sentinela para indicar error
        }
    }

    void ordenar_por_id() {
        std::list<Neurona> lista_ordenada;
        while (!neuronas.empty()) {
                    auto it_min = neuronas.begin();
                    for (auto it = std::next(neuronas.begin()); it != neuronas.end(); ++it) {
                if (it->getId() < it_min->getId()) {
                    it_min = it;
                }
                    }
                    lista_ordenada.push_back(*it_min);
                    neuronas.erase(it_min);
        }
        neuronas = lista_ordenada;
    }

    void ordenar_por_voltaje() {
        std::list<Neurona> lista_ordenada;
        while (!neuronas.empty()) {
                    auto it_min = neuronas.begin();
                    for (auto it = std::next(neuronas.begin()); it != neuronas.end(); ++it) {
                if (it->getVoltaje() < it_min->getVoltaje()) {
                    it_min = it;
                }
                    }
                    lista_ordenada.push_back(*it_min);
                    neuronas.erase(it_min);
        }
        neuronas = lista_ordenada;
    }

    std::pair<int, int> encontrar_neurona_mas_cercana(int posicion) {
        if (neuronas.empty()) {
                    std::cerr << "No hay neuronas para calcular la más cercana." << std::endl;
                        return std::make_pair(-1, -1); // Valor sentinela para indicar error
        }

        if (posicion < 0 || posicion >= neuronas.size()) {
                    std::cerr << "Posición fuera de rango." << std::endl;
                        return std::make_pair(-1, -1); // Valor sentinela para indicar error
        }

        const Neurona& neurona_referencia = *std::next(neuronas.begin(), posicion);
        double distancia_minima = std::numeric_limits<double>::max();
        std::pair<int, int> posicion_mas_cercana = std::make_pair(-1, -1);

        for (const Neurona& neurona : neuronas) {
                    if (&neurona == &neurona_referencia) {
                // No se compara una neurona consigo misma
                continue;
                    }

                    double distancia = std::sqrt(
                        std::pow(neurona_referencia.getX() - neurona.getX(), 2) +
                        std::pow(neurona_referencia.getY() - neurona.getY(), 2)
                        );

                    if (distancia < distancia_minima) {
                distancia_minima = distancia;
                posicion_mas_cercana = std::make_pair(neurona.getX(), neurona.getY());
                    }
        }

        return posicion_mas_cercana;
    }
};









#endif // NEURONA_H
