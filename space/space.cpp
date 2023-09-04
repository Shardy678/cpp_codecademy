#include <iostream>

int main() {
  int planet_number;
  double earth_weight;
  std::cout << "Enter your earth weight: ";
  std::cin >> earth_weight;
  std::cout << "\n" <<"Enter a number for the planet you want to fight on: ";
  std::cin >> planet_number;
  switch (planet_number) {
    case 1:
      earth_weight = earth_weight * 0.38;
      break;
    case 2:
      earth_weight = earth_weight * 0.91;
      break;
    case 3:
      earth_weight = earth_weight * 0.38;
      break;
    case 4:
      earth_weight = earth_weight * 2.34;
      break;
    case 5:
      earth_weight = earth_weight * 1.06;
      break;
    case 6:
      earth_weight = earth_weight * 0.92;
      break;
    case 7:
      earth_weight = earth_weight * 1.19;
      break;
      

}
  std::cout << earth_weight;
  return 0;
}