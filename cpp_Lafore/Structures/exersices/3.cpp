#include <iostream>

int main() {
    struct Distance {
        int feet;
        float inches;
    };

    struct Volume {
        Distance length;
        Distance width;
        Distance height;
    };

    Volume volume = {{2, 4.5}, {3, 7.6}, {8, 5.4}};
    float l = volume.length.feet + volume.length.inches / 12.0;
    float w = volume.width.feet + volume.width.inches / 12.0;
    float h = volume.height.feet + volume.height.inches / 12.0;
    
    float V = l * w * h;
    std::cout << "Объём равен " << V << std::endl;
    return 0;
}
