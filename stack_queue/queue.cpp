#include<bits/stdc++.h>
using namespace std;

struct q{
    int size;
    int f;
    int r;
    int* arr;
};

int isEmpty(struct q *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int isFull(struct q *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}

void enq(struct q *q, int value){
    if(isFull(q)){
        cout<<"queue is Full\n";
    }
    else{
        q->r++;
        q->arr[q->r] = value;
    }
}

int deq(struct q *q){
    int a=-1;
    if(isEmpty(q)){
        cout<<"queue is Empty\n";
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}

void display(struct q *q){
    for(int i=q->f+1;i<=q->r;i++){
        cout<<q->arr[i]<<endl;
    }
}

int main(){
    q q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int*)malloc(q.size*sizeof(int));

    enq(&q,45);
    enq(&q,16);
    enq(&q,12);
    enq(&q,40);
    enq(&q,1);
    cout<<"after enqueue: \n";
    display(&q);

    cout<<"deleted element is: "<<deq(&q)<<endl;
    cout<<"deleted element is: "<<deq(&q)<<endl;
    cout<<"deleted element is: "<<deq(&q)<<endl;


    if(isEmpty(&q)){
        cout<<"queue is Empty\n";
    }
    if(isFull(&q)){
        cout<<"queue is Full\n";
    }
    cout<<"after dequeue: \n";
    display(&q);
    return 0;
}