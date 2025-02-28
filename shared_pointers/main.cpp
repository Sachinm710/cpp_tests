#include <iostream>
#include <memory>
#include <type_traits>

int main()
{
    std::shared_ptr<int> p1{new int{100}};
    std::cout << "Use count " << p1.use_count() << std::endl;

    std::shared_ptr<int>p2{p1};
    std::cout << "Use count " << p1.use_count() << std::endl;

    p1.reset();
    std::cout << "Use count " << p1.use_count() << std::endl;
    std::cout << "Use count " << p2.use_count() << std::endl;

    // making use of make_shared is very efficient
}