#include "kosaraju.h"
#include "graph.h"
#include <iostream>

using namespace std;

int main() {
    /*
    print the number of strongly connected components for airport routes and their components
    */
    Graph G('../data/adjacency_list.csv');
    Kosaraju K(G);
    K.calculateSSC();
    vector<vector<int>> ssc = K.calculateSSC();
    cout << "The number of strongly connected components is " << vec.size() << endl;
    int num = 0;
    for(auto vec: ssc){
        cout << "The " << num << "strongly connected component: " << endl;
        for(auto v: vec){
            cout << v << " ";
        }
        cout << endl;
        num++;
    }
    return 0;
}