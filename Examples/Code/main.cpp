#include "model.h"
#include "view.h"
#include "controller.h"

int main() {
    Model model;
    View view(model);
    Controller controller(model, view);

    controller.setData(42);
    controller.setData(100);
    
    return 0;
}
