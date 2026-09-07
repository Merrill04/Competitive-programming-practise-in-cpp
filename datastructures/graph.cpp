#include<bits/stdc++.h>
using namespace std;
//The below is the adjencency list representation of the graph. 
//For example if there is a edge from 0 -> 1 and 0 -> 2 then its output is shown as 0 : [1, 2].
/*
class graph{
    public:

    unordered_map<int, vector<int>> adjecency_list;
// Another way to do is create a vector<pair> v where pair is pair{int val, vector<int> list};

    void insertedge(int a, int b, bool direction){// This method does handles both the cases the directed and undirected graph.
        if(direction == false){//undirected so both the nodes will have interconnection.
            adjecency_list[a].push_back(b);// Here we first push element in a as it exists.
            if(adjecency_list.find(b) == adjecency_list.end()){// Here we check if key b is present. If its not present then it
                                                               // returns ul.end(). If its ul.end() then we create a vector and push with key as b.
                vector<int> v;                    
                v.push_back(a);
                adjecency_list.insert({b, v});
                // Instead of these 3 above lines even if we directly write adjecency_list[b].push_back(a) it creates the entry.
            }else{// If present then directly we push in b.
                adjecency_list[b].push_back(a);
            }
        }else{//directed graph so according to given node b is connected to existing node a.
            if(adjecency_list.find(a) == adjecency_list.end()){
                vector<int> v;                    
                v.push_back(b);
                adjecency_list.insert({a, v});
            }else{
                adjecency_list[a].push_back(b);
            }
        }
    }

    void print(){
        for(auto i : adjecency_list){
            cout << i.first << ": ";
            for(int j = 0; j < i.second.size(); j++){
                cout << i.second[j] << " ";
            }

            cout << endl;
        }
    }
};
*/

//The below is the matrix representation of the graph.
class graph{
    public:

    int nodes;
    vector<vector<int>> matrix;

    graph(int n){

        nodes = n;
        matrix.resize(nodes, vector<int>(nodes, 0));// Create n x n matrix initialized with 0
    }

    void insertedge(int a, int b, bool direction){// This method does handles both the cases the directed and undirected graph.
        if(a < nodes && b < nodes){
            if(direction == false){// For case of undirected graph.
                matrix[a][b] = 1;
                matrix[b][a] = 1;
            }else{// For directed graph.
                matrix[a][b] = 1;
            }
        }else{// If the given edge is beyond the node number. that is we have 5 edges so valid nodes are 0 1 2 3 4. If 5 then limit exceeded.
            cout << "Cannot add new node!";
        }
    }

    void print(){
        for(int i = 0; i < nodes; i++){
            for(int j = 0; j < nodes; j++){
                cout << matrix[i][j] << " ";
            }
            
            cout << endl;
        }
    }

    void bfs(vector<int>& res){//At each node from start add the node in res, then add its neighbouring nodes in queue and mark
        //Them visited. If they are visited then do not add in queue next time else add in queue. This will give bfs traversal.
        //BFS traversal is nothing but from start just go on adding in result. Like if 0 is joining to 1 and 2 and 1 joins to 3
        //and 2 joins to 4 then first add 0 then add its both neighbours 1 and 2 and then neighbours of 1 and then neighbours of 2.
        vector<bool> check(nodes, false);
        queue<int> q;

        q.push(0);
        check[0] = true;
        while(!q.empty()){
            int temp = q.front();
            q.pop();

            res.push_back(temp);

            for(int i = 0; i < nodes; i++){
                if(matrix[temp][i] != 0 && check[i] == false){
                    q.push(i);
                    check[i] = true;
                }
            }
        }
    }

    void dfs(int start, vector<int>& res, vector<bool>& isvisited){
        if(isvisited[start] == true){
            return;
        }

        res.push_back(start);
        isvisited[start] = true;

        for(int i = 0; i < matrix[start].size(); i++){
            if(matrix[start][i] != 0 && isvisited[i] == false){
                dfs(i, res, isvisited);
            }
        }
    }
};

int main(){

    graph g(5);

    g.insertedge(0, 1, true);
    g.insertedge(0, 2, true);
    g.insertedge(1, 2, true);
    g.insertedge(2, 3, true);
    g.insertedge(3, 1, true);
    g.insertedge(3, 4, true);
    g.insertedge(4, 4, true);

    g.print();
    cout << "\n";

    vector<int> bfsres;

    g.bfs(bfsres);

    for(int i = 0; i < bfsres.size(); i++){
        cout << bfsres[i] << " ";
    }
    
    cout << "\n";

    vector<int> dfsres;
    vector<bool> visited(5 ,false);
    int start = 0;

    g.dfs(start, dfsres, visited);

    for(int i = 0; i < dfsres.size(); i++){
        cout << dfsres[i] << " ";
    }

    return 0;
}