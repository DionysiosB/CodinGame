#include <iostream>
#include <string>
#include <vector>

int main(){

    while (1) {
        int maxHeight(0), maxMountain(-1);
        for (int i = 0; i < 8; i++) {
            int mountainH;
            std::cin >> mountainH; std::cin.ignore();
            if(mountainH > maxHeight){maxHeight = mountainH; maxMountain = i;}
        }

        std::cout << maxMountain << std::endl;

    }
}
