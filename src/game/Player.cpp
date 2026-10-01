//
// Created by Emilia on 01.10.2026.
//

#include "Player.h"

Player::Player(Vector2 pos) : position(pos) {}
void Player::setPosition(Vector2 pos) {
    this->position = pos;
}
Vector2 Player::getPosition() const {
    return this->position;
}
void Player::Update() {
    playercontrol();
    playermove();
    playerbody();
}
void Player::playermove() {
    Vector2 newPos = position;
    switch (dir) {
        case Direction::UP: newPos.y -= curspeed; break;
        case Direction::DOWN: newPos.y += curspeed; break;
        case Direction::LEFT: newPos.x -= curspeed; break;
        case Direction::RIGHT: newPos.x += curspeed; break;
        case Direction::NEUTRAL: newPos.y += 0; break;
    }
    position = newPos;
}
void Player::playercontrol() {
    if (IsKeyDown(KEY_W)) dir = Direction::UP;
    else if (IsKeyDown(KEY_S)) dir = Direction::DOWN;
    else if (IsKeyDown(KEY_A)) dir = Direction::LEFT;
    else if (IsKeyDown(KEY_D)) dir = Direction::RIGHT;
    else dir = Direction::NEUTRAL;
}
void Player::playerbody() {
    DrawRectangleV(position, {size, size}, color);
}
