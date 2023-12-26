#include <iostream>
#include "BinSTree/lab/randomTree.hpp"
#include "BinSTree/BinSTree.hpp"


int main() {
    BinSTree<int> tree;

    randomIntT(tree, 1'000'000, 0, 1'000);
    std::cout<<"depth before random insertion deletion pairs: "<<tree.getDepth()<<std::endl;
    randomInsertRemove(tree, 1'000'000, 0, 1'000'000);
    std::cout<<"depth after random insertion deletion pairs: "<<tree.getDepth()<<std::endl;
    return 0;
}
