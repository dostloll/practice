#include<iostream>
#include<iterator>
#include<cstddef>

struct SimpleIterator {
    using difference_type = std::ptrdiff_t;
    using value_type = int;
    using pointer = int*;
    using reference = int&;
    using iterator_category = std::input_iterator_tag;

    SimpleIterator(int* ptr) : m_ptr(ptr){}

    int& operator*() const {return *m_ptr;}

    SimpleIterator& operator++(){
        ++m_ptr;
        return *this;
    }

    void operator++(int){++*this;}
    bool operator==(const SimpleIterator& other) const{
        return m_ptr == other.m_ptr;
    }

    bool operator!=(const SimpleIterator& other) const{
        return m_ptr != other.m_ptr;
    }

    private:
    int* m_ptr;
};



int main(){
    int nubmers[]= {10,20,30,40,50};

    SimpleIterator begin(nubmers);
    SimpleIterator end(nubmers+5);

    std::cout<<"Iterating through array using SimpleIterator: \n";

    for(SimpleIterator it = begin; it!=end; ++it){
        std::cout<< *it<<" ";
    }

    std::cout<<"\n";
    return 0;
}