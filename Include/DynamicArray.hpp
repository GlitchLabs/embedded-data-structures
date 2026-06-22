#include <cstddef>
#include <cassert>
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
    copy constructor
    */
    DynamicArray(const DynamicArray<T>& other){
     m_size = other.m_size;
     m_capacity = other.m_capacity;
     //performing a deep copy. a showllow copy would be just the address
     T* newData = new T[m_capacity];
     for(size_t i = 0; i < m_size; i ++){
         *(newData + i) = other.m_data[i];
     }
     m_data = newData;
 
    }

    /*
    Copy operator
    */
    DynamicArray<T>& operator=(const DynamicArray<T>& other){
        if(this == &other) return *this;
        m_size = other.m_size;
        m_capacity = other.m_capacity;
        delete[] m_data;
        T* newData = new T[m_capacity];
        for(size_t i = 0; i < m_size; i++){
            *(newData + i) = *(other.m_data + i);
        }
        m_data = newData;
        return *this;
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
        for(size_t i = 0; i < m_size; i++){
            newData[i] = *(m_data+i);
        }
        delete[] m_data;
        m_data = newData;
    }
    *(m_data + m_size) = data;
    m_size++;
    }

    /*
    Params: An index inside the array that is occupied with data
    Purpose: Return the data at the index specified.
    Returns: element at index passed in as parameter.
    */
   T at(size_t index){
    assert(index < m_size);
    return *(m_data + index);
   }


   //destructor
   ~DynamicArray(){
    delete[] m_data;
   }
private:
size_t m_size;
size_t m_capacity;
T * m_data;
};