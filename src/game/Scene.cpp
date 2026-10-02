//
// Created by Emilia on 02.10.2026.
//

#include "Scene.h"
Scene::Scene(const int screenWidth, const int screenHeight) : screenWidth(screenWidth), screenHeight(screenHeight) {
    Scene::calcgridsize();
}
void Scene::calcgridsize() {
    gridtilesize.first = this->screenWidth / gridsize;
    gridtilesize.second = this->screenHeight / gridsize;
}
