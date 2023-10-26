#include "model.h"

void Model::setData(int newData) {
    data = newData;
    for (auto& observer : observers) {
        observer();
    }
}

int Model::getData() const {
    return data;
}

void Model::addObserver(std::function<void()> observer) {
    observers.push_back(observer);
}
