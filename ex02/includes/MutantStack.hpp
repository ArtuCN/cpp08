#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack();  // Costruttore
    void push(const T& value);  // Push
    void pop();  // Pop
    T& top();  // Top
    bool empty() const;  // Empty check
    size_t size() const;  // Size check

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin();
    iterator end();
    const_iterator begin() const;
    const_iterator end() const;
};

// Definizioni nel file header

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
void MutantStack<T>::push(const T& value) {
    std::stack<T>::push(value);
}

template <typename T>
void MutantStack<T>::pop() {
    std::stack<T>::pop();
}

template <typename T>
T& MutantStack<T>::top() {
    return std::stack<T>::top();
}

template <typename T>
bool MutantStack<T>::empty() const {
    return std::stack<T>::empty();
}

template <typename T>
size_t MutantStack<T>::size() const {
    return std::stack<T>::size();
}

// Iteratori
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {
    return this->c.end();
}

#endif