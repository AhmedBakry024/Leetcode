/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node* , Node*> m1;
    Node* cloneGraph(Node* node) {
        if(!node) return nullptr;

        if(m1.find(node) != m1.end()) return m1[node];
        Node* cloned = new Node(node -> val);
        m1[node] = cloned;

        for(Node* nei: node -> neighbors)
            cloned->neighbors.push_back(cloneGraph(nei));

        return cloned;
    }
};