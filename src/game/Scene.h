//
// Created by Emilia on 02.10.2026.
//

#ifndef PRACTICINGCPP_SCENE_H
#define PRACTICINGCPP_SCENE_H
#include "raylib.h"
#include <utility>

#include "../Object.h"

class Scene : public Object {
private:
    int gridsize = 20;
    std::pair<float, float> gridtilesize;
    int gridtile;
    int screenHeight;
    int screenWidth;

    void calcgridsize();
    Vector2 identifygridtile(); //counts through grid and names them with ID
    std::pair<float, float> returngridtile(); //return centre of gridtile by ID

public:
    Scene(int screenWidth, int screenHeight);
};


#endif //PRACTICINGCPP_SCENE_H
