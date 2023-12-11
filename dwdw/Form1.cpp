#include <iostream>
#include <list>
#include <stack>
#include <queue>
#include <unordered_map>
#include <string>

class TreeNode {
public:
    int Value;
    TreeNode* Left;
    TreeNode* Right;

    TreeNode(int value) : Value(value), Left(nullptr), Right(nullptr) {}
};

class Graph {
private:
    std::unordered_map<int, std::list<int>> adjacencyList;

public:
    void AddVertex(int vertex) {
        adjacencyList[vertex] = std::list<int>();
    }

    void AddEdge(int source, int destination) {
        adjacencyList[source].push_back(destination);
        adjacencyList[destination].push_back(source);
    }

    std::string GetGraphString() {
        std::string result = "";
        for (const auto& entry : adjacencyList) {
            result += std::to_string(entry.first) + ": ";
            for (int neighbor : entry.second) {
                result += std::to_string(neighbor) + " ";
            }
            result += "\n";
        }
        return result;
    }
};

class MainForm {
private:
    std::list<int> linkedList;
    std::stack<int> stack;
    std::queue<int> queue;
    TreeNode* rootNode;
    Graph graph;

public:
    MainForm() {
        InitializeDataStructures();
    }

    void InitializeDataStructures() {
        // Lista Enlazada
        linkedList.push_back(1);
        linkedList.push_back(2);
        linkedList.push_back(3);

        // Pila
        stack.push(1);
        stack.push(2);
        stack.push(3);

        // Cola
        queue.push(1);
        queue.push(2);
        queue.push(3);

        // Árbol Binario
        rootNode = new TreeNode(1);
        rootNode->Left = new TreeNode(2);
        rootNode->Right = new TreeNode(3);

        // Grafo No Dirigido
        graph.AddVertex(1);
        graph.AddVertex(2);
        graph.AddVertex(3);

        graph.AddEdge(1, 2);
        graph.AddEdge(2, 3);
    }

    void DisplayData() {
        // Mostrar en la interfaz gráfica
        std::cout << "Linked List: ";
        for (int item : linkedList) {
            std::cout << item << " -> ";
        }
        std::cout << std::endl;

        std::cout << "Stack: ";
        while (!stack.empty()) {
            std::cout << stack.top() << " -> ";
            stack.pop();
        }
        std::cout << std::endl;

        std::cout << "Queue: ";
        while (!queue.empty()) {
            std::cout << queue.front() << " -> ";
            queue.pop();
        }
        std::cout << std::endl;

        // Árbol Binario (Inorder Traversal)
        std::cout << "Binary Tree (Inorder Traversal): ";
        InorderTraversal(rootNode);
        std::cout << std::endl;

        // Grafo No Dirigido
        std::cout << "Graph Representation:\n" << graph.GetGraphString();
    }

    void InorderTraversal(TreeNode* node) {
        if (node != nullptr) {
            InorderTraversal(node->Left);
            std::cout << node->Value << " ";
            InorderTraversal(node->Right);
        }
    }

    void MainForm_Load() {
        DisplayData();
    }
};

int main() {
    MainForm mainForm;
    mainForm.MainForm_Load();
    return 0;
}

