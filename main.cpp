#include <iostream>
#include <vector>

#define ZERO 0
#define MAX_WAGONS 10
#define MAX_CAPACITY 20
#define FOR for (int i = 0; i < MAX_WAGONS; ++i)

struct Wagons {
    int filledIn = 0;
};

struct Train {
    std::vector<Wagons> wagon;
};

int main() {
    Train train;

    FOR {
        std::cout << "Введите количество пассажиров для " << i + 1 << " вагона: ";
        train.wagon.emplace_back();
        std::cin >> train.wagon[i].filledIn;
    }

    FOR {
        if (train.wagon[i].filledIn > MAX_CAPACITY) {
            std::cout << "Вагон " << i + 1 << " перегружен!\n";
        }
    }

    FOR {
        if (train.wagon[i].filledIn < MAX_CAPACITY) {
            std::cout << "В " << i + 1 << " вагоне " << MAX_CAPACITY - train.wagon[i].filledIn << " свободных мест.\n";
        }
    }


}
