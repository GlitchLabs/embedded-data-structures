#include <cstddef>
template<typename T>
class DynamicArray {
public:
    /*params: None
      purpose: Construct a Dynamic Array of variable type
      Returns: None
    */

    DynamicArray(): m_size(0), m_capacity(0), m_data(nullptr){

    } 
private:
size_t m_size;
size_t m_capacity;
T * m_data;
};