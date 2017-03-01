#include "Entity.h"

Entity::Entity() {
}

Entity::~Entity() {
}

void Entity::setID(unsigned int id) {
    this->id = id;
}

unsigned int Entity::getID() {
    return this->id;
}

void Entity::setName(std::string name) {
    this->name = name;
}

std::string Entity::getName() {
    return this->name;
}

void Entity::setLocation(Vector3D vec3d) {
    this->location = vec3d;
}

Vector3D Entity::getLocation() {
    return this->location;
}

void Entity::destroy() {
    // TODO
    return;
}
