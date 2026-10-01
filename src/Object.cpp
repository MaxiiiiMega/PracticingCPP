//
// Created by Emilia on 01.10.2026.
//

#include "Object.h"

void ObjectManager::AddObject(Object* object) {
    objects.push_back(object);
}

void ObjectManager::Update() const {
    for (const auto& object : objects) {
        if (object != nullptr) {
            object->Update();
        }
    }
}
