//
// Created by mykyta on 09/03/24.
//

#ifndef CAR_H
#define CAR_H

#include <string>

using std::string;

class car
{
private:
    long long unsigned int id{};
    int year{};
    float petrol_consumption{};
    double engine_volume{};
    string model;

public:
    car();
    car(int year, string model, float petrol_consumption, double engine_volume);
    ~car();
    void set_year(int year);
    void set_model(const string& model);
    void set_petrol_consumption(float petrol_consumption);
    void set_engine_volume(double engine_volume);

    [[nodiscard]] auto get_year() const -> int;
    [[nodiscard]] const string& get_model() const;
    [[nodiscard]] auto get_petrol_consumption() const -> float;
    [[nodiscard]] auto get_engine_volume() const -> double;

    void print() const;
};

#endif //CAR_H

extern "C" {
car* get_car(int year, string model, float petrol_consumption, double engine_volume);
}
