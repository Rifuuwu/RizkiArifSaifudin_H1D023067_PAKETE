#include <iostream>
#define maxstack 5
using namespace std;

typedef struct stack *alamat;
struct stack{
    int item[maxstack];
    int count;
};

void push(int data, alamat x){
    if (x->count == maxstack) {
        printf("stack penuh\n");}
    else{
        x->item[x->count]=data;
        ++(x->count);
        printf("berhasil memasukan\n");
    }
}

void cetak(int n, alamat s){
    for (int i=0;i<n;i++){
        printf("%d \n", s->item[i]);
    }
}

int main(){
    stack ganjil;
    int n;
    cin>>n;
    do{
        int i = 1;
        if(i%2==1){
            push(i, &ganjil);
        }
    }
    while(ganjil.count!=n);
    cetak(n,&ganjil);

}