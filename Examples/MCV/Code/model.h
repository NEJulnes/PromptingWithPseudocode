#ifndef MODEL_H
#define MODEL_H
#include <vector>
#include <functional>

class Model {
public:
    void setData(int data);
    int getData() const;
    void addObserver(std::function<void()> observer);
private:
    int data;
    std::vector<std::function<void()>> observers;
};

#endif // MODEL_H
