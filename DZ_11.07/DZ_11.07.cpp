#include <iostream>
#include <vector>
#include <string>
#include"Queue.h"
#include"Ingredient.h"

void task_2() {
    std::priority_queue<Ingredient> queue;

    int choice;
    do {
        std::cout << "Enter what you want to do:\n1 - Add ingredient\n2 - Cook a dish\n";
        std::cin >> choice;

        if (choice == 1) {
            std::string name;
            int time;
            std::cout << "Enter name of ingredient: ";
            std::cin >> name;
            std::cout << "Enter time of cooking(seconds): ";
            std::cin >> time;
            queue.push(Ingredient(name, time));
        }
        else if (choice == 2) {
            while (!queue.empty()) {
                Ingredient current = queue.top();
                queue.pop();
                std::cout << "Cooking " << current.getName() << " for " << current.getCookingTime() << " seconds.\n";
            }
        }
    } while (choice != 0);
}

void task_1() {
    Queue<std::string> stringQueue;
    stringQueue.push("one");
    stringQueue.push("two");
    stringQueue.push("three");
    stringQueue.push("four");
    stringQueue.push("five");
    stringQueue.push("six");

    std::cout << "Initial queue: ";
    stringQueue.show();


    stringQueue.pop();
    stringQueue.pop();


    stringQueue.push("seven");

    std::cout << "Updated queue: ";
    stringQueue.show();


    int count = 0;
    for (const auto& item : stringQueue) {
        if (item[0] == 'f' || item[0] == 't') {
            count++;
        }
    }

    std::cout << "Number of strings starting with 'f' or 't': " << count << std::endl;
}

int main() {
    
    task_2();
    return 0;
}

