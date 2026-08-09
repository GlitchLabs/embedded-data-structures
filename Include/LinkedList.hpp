
template<typename T>
struct Node {
    T value;
    Node<T>* next = nullptr;
};

template<typename T>
class LinkedList {
public: 
    /*
    Constructor
    */
    LinkedList(): m_head(nullptr), m_tail(nullptr), m_size(0){
    
    }

    /*
    Copy Constructor
    */
    LinkedList(const LinkedList<T>&other) {
        m_head = nullptr;
        m_tail = nullptr;
        m_size = 0;
        Node<T>*current = other.m_head;
        while(current != nullptr){
            push_back(current->value);
            current = current->next;
        }
    }
    //copy assignment operator
    LinkedList<T>& operator=(const LinkedList<T>& other){
        if(this == &other) return *this;
        while(m_head != nullptr){
            Node<T>* next = m_head->next;//i am getting pointers and allocating heap memory mixed up. i just realized that. this is just a pointer. 
            delete m_head; //this frees the data stored in the memory location not delets the pointer to it, that is still active
            std::cout<<"Freed memory at "<<m_head<<"\n";
            m_size--;
            m_head = next;
        }
        m_tail = nullptr;
        Node<T>*current = other.m_head;
        while(current != nullptr){
            push_back(current->value);
            current = current->next;
        }
        return *this;
    }
    size_t size()const{
        return m_size;
    }

    /*
    Params: data to be added to the LinkedList
    Purpose: Add data to the back of the LinkedList and changing the tail
    Returns: None
    */
    void push_back(T value) {
        if(m_size == 0){
            Node<T>* newNode = new Node<T>();
            newNode->value = value;
            m_head = newNode;
            m_tail = newNode;
            m_size++;
            return;
        }
        Node<T>* newNode = new Node<T>();
        newNode->value = value;
        m_tail->next = newNode;
        m_tail = newNode;
        m_size++;
        return;

    }

    /*
    Params: None
    Purpose: Prints the current contents of the LinkedList.
    Returns: None
    */
    void print()const {
        Node<T> *node = m_head;
        while(node != nullptr){
            std::cout<<node->value<<std::endl;
            node = node->next;
        }
        return;
    }

    /*
    Destructor
    Purpose: to free all the heap memory used by this class
    */
    ~LinkedList(){
        while(m_head != nullptr){
            Node<T>* next = m_head->next;
            delete m_head;
            std::cout<<"Freed memory at "<<m_head<<"\n";
            m_head = next;
        }
        return;
    }
private:
    Node<T>* m_head;
    Node<T>* m_tail;
    size_t m_size;
};