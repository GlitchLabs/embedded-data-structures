#include <iostream>
class Subsystem {
public:
    Subsystem(){}
    virtual ~Subsystem(){}
    virtual void update() = 0;
private:
    const char* name;
};

class GuidanceSystem : public Subsystem {
public:
    void update(){
        std::cout<<"GudanceSystem update\n";
    }
private:
};