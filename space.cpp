#include <iostream>

int main() {
  double earth_weight, target_weight;
  int planet;
  std::cout<<"Enter earth weight (lbs): "; std::cin>>earth_weight;
  std::cout<<"Destination Planets:\n(1) Mercury\n(2) Venus\n(3) Mars\n(4) Jupiter\n(5) Saturn\n(6) Uranus\n(7) Neptune\n";
  std::cout<<"Enter the number of your chosen destination: "; std::cin>>planet;

  switch (planet) {
    case 1:
      target_weight=earth_weight*0.38;
      std::cout<<"You will weigh "<<target_weight<<" lbs on this planet.\n";
      break;
    case 2:
      target_weight=earth_weight*0.91;
      std::cout<<"You will weigh "<<target_weight<<" lbs on this planet.\n";
      break;
    case 3:
      target_weight=earth_weight*0.38;
      std::cout<<"You will weigh "<<target_weight<<" lbs on this planet.\n";
      break;
    case 4:
      target_weight=earth_weight*2.34;
      std::cout<<"You will weigh "<<target_weight<<" lbs on this planet.\n";
      break;
    case 5:
      target_weight=earth_weight*1.06;
      std::cout<<"You will weigh "<<target_weight<<" lbs on this planet.\n";
      break;
    case 6:
      target_weight=earth_weight*0.92;
      std::cout<<"You will weigh "<<target_weight<<" lbs on this planet.\n";
      break;
    case 7:
      target_weight=earth_weight*1.19;
      std::cout<<"You will weigh "<<target_weight<<" lbs on this planet.\n";
      break;
    default:
      std::cout<<"Please enter a valid weight or destination planet.\n";
      break;
  }

  return 0;
}