#include "raylib.h"
#pragma once

class GameCamera{
    Camera2D camera;
    public:
    GameCamera(float zoom, Vector2 target, Vector2 offset, float rotation);
    void setTarget (Vector2 target);
    void setOffset (Vector2 offset);
    void setRotation (float rotation);
    void setZoom (float zoom);
    Vector2 getTarget();
    Vector2 getOffset();
    float getZoom();
    float getRotation();
    Camera2D getCamera();
};