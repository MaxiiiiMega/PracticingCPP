//
// Created by Emilia on 01.10.2026.
//

#ifndef PRACTICINGCPP_PLAYER_H
#define PRACTICINGCPP_PLAYER_H

#include "../Object.h"
#include "raylib.h"

enum Direction {
    LEFT,
    RIGHT,
    UP,
    DOWN,
    NEUTRAL,
};

class Player : public Object {
    private:
        Color color = RAYWHITE;
        Vector2 position{};
        float size = 25.0f;
        float maxspeed = 5.0f;
        float curspeed = maxspeed; //acceleration logic is planed, but not implemented
        Direction dir = NEUTRAL;
    public:
        Player(Vector2 pos);

        void setPosition(Vector2 pos);
        Vector2 getPosition() const;
        void Update() override;

        void playermove();
        void playercontrol();
};


#endif //PRACTICINGCPP_PLAYER_H
