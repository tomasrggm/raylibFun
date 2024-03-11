#include <iostream>
#include "../../headers/GameCamera.h"

GameCamera::GameCamera(float zoom, Vector2 target, Vector2 offset, float rotation){
    camera.offset = offset;
    camera.target = target;
    camera.zoom = zoom;
    camera.rotation = rotation;
}

void GameCamera::setTarget (Vector2 target){
    camera.target.x = target.x;
    camera.target.y = target.y;
}

void GameCamera::setOffset (Vector2 offset){
    camera.offset.x = offset.x;
    camera.offset.y = offset.y;
}

void GameCamera::setRotation (float rotation){
    camera.rotation = rotation;
}

void GameCamera::setZoom (float zoom){
    camera.zoom = zoom;
}

Vector2 GameCamera::getTarget(){
    return camera.target;
}

Vector2 GameCamera::getOffset(){
    return camera.offset;
}

float GameCamera::getZoom(){
    return camera.zoom;
}

float GameCamera::getRotation(){
    return camera.rotation;
}

Camera2D GameCamera::getCamera(){
    return camera;
}