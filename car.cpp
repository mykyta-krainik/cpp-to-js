//
// Created by mykyta on 09/03/24.
//

#include "car.h"
#include <iostream>
#include <utility>

car::car()
{
    constexpr int year_produced = 2020;

    this->year = year_produced;
    this->model = "Kona";
    this->petrol_consumption = 7.5f;
    this->engine_volume = 2.0;
};

car::car(const int year, string model, float petrol_consumption, double engine_volume) : year(year),
    petrol_consumption(petrol_consumption), engine_volume(engine_volume), model(std::move(model))
{
}

car::~car() = default;

void car::set_year(const int year)
{
    this->year = year;
}

void car::set_model(const string& model)
{
    this->model = model;
}

void car::set_petrol_consumption(const float petrol_consumption)
{
    this->petrol_consumption = petrol_consumption;
}

void car::set_engine_volume(const double engine_volume)
{
    this->engine_volume = engine_volume;
}

auto car::get_year() const -> int
{
    return this->year;
}

auto car::get_model() const -> const string&
{
    return this->model;
}

auto car::get_petrol_consumption() const -> float
{
    return this->petrol_consumption;
}

auto car::get_engine_volume() const -> double
{
    return this->engine_volume;
}

void car::print() const
{
    std::cout << "--------------------" << std::endl;
    std::cout << "Year: " << this->year << std::endl;
    std::cout << "Model: " << this->model << std::endl;
    std::cout << "Petrol consumption: " << this->petrol_consumption << std::endl;
    std::cout << "Engine volume: " << this->engine_volume << std::endl;
    std::cout << "--------------------" << std::endl;
}

extern "C" {
car* get_car(int year, string model, float petrol_consumption, double engine_volume)
{
    return new car(year, std::move(model), petrol_consumption, engine_volume);
}
}
