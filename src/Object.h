//
// Created by Emilia on 01.10.2026.
//

#ifndef PRACTICINGCPP_OBJECT_H
#define PRACTICINGCPP_OBJECT_H
#include <vector>

class Object {
    public:
        virtual ~Object() = default;
        virtual void Update() = 0;
};

class ObjectManager {
    private:
        std::vector<Object*> objects;

    public:
        ObjectManager() = default;
        ~ObjectManager() = default;

        void AddObject(Object* object);
        void Update() const;
};

#endif //PRACTICINGCPP_OBJECT_H
