#include <iostream>

int main(){
    int dog_age;

    std::cout << "Enter your dog age in human years: ";
    std::cin >> dog_age;

    double human_age;

    if (dog_age == 1) {
        human_age = 10.5;
    } else if (dog_age == 2) {
        human_age = 21;
    } else if (dog_age > 2) {
        human_age = 21 + (dog_age - 2) *4;
    } else {
        std::cout << "Invalid input. Please enter a positive dog age." << std::endl;
        return 1;
    }

    std::cout << "Your dog age in human years is " << human_age << " years." << std::endl;

    return 0;
}