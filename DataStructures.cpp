#include <iostream>
#include <bits/stdc++.h>
#include <string>
typedef long long ll;
#define for (n) for (int i = 0; i < n; i++)

using namespace std;

void estructuras_y_datos()
{

    //Estructuras lineales
    //Array
    int a[10];

    //Arraylist/Linkedlist (10 espacios llenados con 20's)
    vector<int> b(10, 20);
    b.push_back(37);

    //Cola
    queue<int> q;
    q.push(10);
    q.front(); //10, 20, 30
    q.pop();   //20, 30

    //Pila
    stack<int> z;
    z.push(10);
    z.top(); // 10 20 30
    z.pop(); // 10 20

    //Estructuras
    //Map Tree||Hash
    //TreeMap  ||  O(logn) O(logn)          hash tree
    map<string, int> n;
    n["hola"] = 10;

    //HashMap ||  O(1) O(1) - Collision (Repeticion de la formula de dispersion) O(n) O(n)
    unordered_map<string, int> m;

    //Set Tree||Hash
    //TreeSet ||  O(logn) O(logn)
    set<int> y;
    y.insert(2);
    y.count(3);

    //HashSet ||  O(1) O(1) - Collision (Repeticion de la formula de dispersio) O(n) O(n)
    unordered_set<int> x;

    //Priority_Queue - Heap (De menor a mayor generalmente) (Se define el orden con una funcion) || internamente un arbol O(logn) O(logn)
    priority_queue<int> l;
    l.push(10);
    l.push(5);
    l.push(20);
    l.top();

    //Otras estructuras
    pair<string, int> pa = make_pair("hola", 12);
}
