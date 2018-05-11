#include<iostream>
using namespace std;
#include<string>
typedef struct Info
{
        int ram,id,hdd;
        string brand;
        string processor;
        float price;
}Info;
class BinHeap
{
        private:
                Info *heap;
                int capacity;
                int hsize;
        public:
                void printData(Info info);
                Info getData();
                int enqueue(Info i);
                int dequeue();
                Info front();
                int rear();
                BinHeap(){}
                BinHeap(int,int);
                ~BinHeap(){delete[] heap;}
                int isFull();
                int isEmpty();
                void inOrder(int current);
                Info getRoot();
};

