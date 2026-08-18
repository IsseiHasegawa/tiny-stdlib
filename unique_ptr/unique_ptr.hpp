#pragma once

namespace tynystl {
    
template<class T>
class unique_ptr {
public:
    unique_ptr() : p_(nullptr) {}
    explicit unique_ptr(T* p) : p_(p) {}
    ~unique_ptr() {delete p_; }
    T* get() const { return p_; }
    
private:
    T* p_;
};

}