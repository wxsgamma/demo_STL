#include<iostream>

//看一下要不要从实现algo_base开始实现整个STL，还是说单纯实现vector deque unordered_map algorithm等
template<typename P>
class Vector{
public:
    Vector();
    Vector(Vector &&vector);
    Vector(Vector &vector);
private:
    
};
