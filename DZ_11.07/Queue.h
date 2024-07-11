#pragma once
#include <iostream>
#include <vector>
#include <string>

template <typename T>
class Queue {
    std::vector<T> data;

public:
    bool isEmpty() const {
        return data.empty();
    }

    T first() const {
        if (!isEmpty()) {
            return data.front();
        }
        throw std::runtime_error("Queue is empty.");
    }

    void push(const T& item) {
        data.push_back(item);
    }

    void pop() {
        if (!isEmpty()) {
            data.erase(data.begin());
        }
    }

    void show() const {
        for (const auto& item : data) {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }


    typename std::vector<T>::iterator begin() { return data.begin(); }
    typename std::vector<T>::iterator end() { return data.end(); }
};