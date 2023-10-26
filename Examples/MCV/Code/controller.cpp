#include "controller.h"

Controller::Controller(Model& m, View& v) : model(m), view(v) {}

void Controller::setData(int data) {
    model.setData(data);
}
