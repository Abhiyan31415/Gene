#include "CircleManager.h"
#include <cstdlib>
#include <ctime>

CircleManager::CircleManager() {
    std::srand(std::time(nullptr));
    for (int i = 0; i < 100; ++i) {
        positions.push_back(std::make_tuple(std::rand() % 800, std::rand() % 600));
    }
}

void CircleManager::updatePositions() {
    randomizePositions();
}

std::vector<std::tuple<int, int>> CircleManager::getPositions() {
    return positions;
}

void CircleManager::randomizePositions() {
    for (auto& position : positions) {
        position = std::make_tuple(std::rand() % 800, std::rand() % 600);
    }
}
