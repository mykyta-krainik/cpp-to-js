const Car = require('./build/Release/SwigJS');

const car = Car.get_car(2020, "X5", 7.5, 2.0);
car.print();

console.log(typeof car.get_year())
