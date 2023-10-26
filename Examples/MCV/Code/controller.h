#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "model.h"
#include "view.h"

class Controller {
public:
    Controller(Model& model, View& view);
    void setData(int data);
private:
    Model& model;
    View& view;
};

#endif // CONTROLLER_H
