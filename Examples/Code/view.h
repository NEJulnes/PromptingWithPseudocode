#ifndef VIEW_H
#define VIEW_H
#include "model.h"

class View {
public:
    View(Model& model);
    void update();
private:
    Model& model;
};

#endif // VIEW_H
