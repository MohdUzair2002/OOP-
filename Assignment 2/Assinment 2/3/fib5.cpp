#include <iostream>
#include <algorithm>
#include <vector>

class Fib5 {

    int previous, current = 0, next = 1;
    public:
        std::vector<int> stream(int n){
            std::vector<int> range(n);
            std::generate(range.begin(), range.end(), [=](){
                previous = current;
                current = next;
                next = previous + next;
                return current;
            });
            return range;
        }
        
};
int main(){
    Fib5 fib5;
    std::vector<int> sequence = fib5.stream(41);
    std::for_each(sequence.begin(), sequence.end(), [](int x){std::cout << x << std::endl;});
    return 0;
}