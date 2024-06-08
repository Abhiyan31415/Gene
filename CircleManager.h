#ifndef CIRCLEMANAGER_H
#define CIRCLEMANAGER_H

#include <vector>
#include <tuple>

class CircleManager {
public:
    CircleManager();
    void updatePositions();
    std::vector<std::tuple<int, int>> getPositions();

private:
    std::vector<std::tuple<int, int>> positions;
    void randomizePositions();
};

#endif
