// graph isnetwork of the nodes
// it is shown as the vertex and the edges
// types of graph edges are unidirectional 1->2
// undirected graph 1-2 also knownn as the bidertional graph
// edge weigthed or unweighted
//  graphs can  be connected or unconnected
// list is basicall the double linklist 
// function of list are push_back,pop_back,push_front,pop_front
// but we are making the dynamic array
#include <iostream>
#include <vector>
#include <list>
using namespace std;


class Graph{
    int V;
    list<int> *l;// int *arr 
    // this is the dynamic arr of the int
    // simliarly this is the list arry dyanamic

public:
    Graph(int V){
        this->V=V;
        // arr=new int[v];
        l=new list<int> [V];
    }
    // u-v
    // undirected edge
    void addedge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    // but if we have the directed geaph then we from uto v then will only store v in u
    void printAdjList(){
        for(int i=0;i<V;i++){
            cout<<i<<":";
            for(int neigh: l[i]){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }
};


int main(){
    Graph g(5);
    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(1,3);
    g.addedge(2,3);
    g.addedge(2,4);
    g.printAdjList();
    return 0;
}

// adjacency list (store neighbore for all V)
// means we store the neighbour information means the edge information that is the connection
// their are V vertices so we need to store all the nerghboure for each vertice so we use 
// vectore<list<int>>