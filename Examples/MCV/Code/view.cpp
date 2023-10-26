#include <iostream>
#include "view.h"

View::View(Model& m) : model(m) {
    model.addObserver([this]() { update(); });
}

void View::update() {
    std::cout << "Data updated to: " << model.getData() << std::endl;
}
