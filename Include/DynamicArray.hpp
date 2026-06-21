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

    /*
    Params: Data to be stored.
    Purpose: to add data to the back of the array.
    Returns: None
    */
   void push_back(T data){
    if(m_size == m_capacity){
        //increae m_capacity by the doubling strategy
        m_capacity = (m_capacity == 0) ? 1 :  m_capacity * 2;
        T* newData = new T[m_capacity];
        for(int i = 0; i < m_size; i++){
            newData[i] = *(m_data+i);
        }
        delete[] m_data;
        m_data = newData;
    }
    *(m_data + m_size) = data;
    m_size++;
    }
private:
size_t m_size;
size_t m_capacity;
T * m_data;
};