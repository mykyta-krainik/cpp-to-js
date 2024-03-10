const {car: Car} = require('./build/Release/CarJS');

const car = new Car(2020, "X5", 7.5, 2.0);

const printCar = (car) => {
  console.log('********************');
  car.print();
  console.log('year', typeof car.get_year(), car.get_year());
  console.log('model', typeof car.get_model(), car.get_model());
  console.log('petrol_consumption', typeof car.get_petrol_consumption(), car.get_petrol_consumption());
  console.log('engine_volume', typeof car.get_engine_volume(), car.get_engine_volume());
  console.log('********************');
};

printCar(car);

car.set_year(2021);
car.set_model("X6");
car.set_petrol_consumption(8.5);
car.set_engine_volume(2.5);

printCar(car);
