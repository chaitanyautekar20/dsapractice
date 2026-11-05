// In bfs we travel to immidate neighn=bours first
// In trees we have the root 
// but in graph we dont know from where to start so we start from 0 th vertices
// we will mark visited
// like level order travelsal we also do it in the bfs src imitadt then their imedate
// so we use queues for this
// and boolean arr for visoted
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph{
    int V;
    list <int> *l;
    Public:
    void Graph(int V){
        this->V=V;
        l=new list<int>[V];
        
    }

    void addedge(int u,int v){
        l[u].push_back(u);
        l[v].push_back(v);
    }
};


int main(){
    
    return 0;
}
