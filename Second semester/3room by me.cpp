#include<iostream>
using namespace std;

struct room{
    string type;
    double length, width;
};

void in(room &r1){
    cout<<"Enter type, length and width: "<<endl;
    cin>>r1.type>>r1.length>>r1.width;
}

void out(room r1){
    cout<<"Room details "<<endl;
    cout<<"Type: "<<r1.type<<", Length: "<<r1.length<<", Width: "<<r1.width<<endl;
}

room maxi(room r1, room r2, room r3){
    room max=r1;
    if (r2.length*r2.width > max.length*max.width){
        max=r2;
    }
    if (r3.length*r3.width > max.length*max.width){
        max=r3;
    }
    return max;
}

int main(){
    room r1, r2, r3;
    in(r1);
    in(r2);
    in(r3);
    out(r1);
    out(r2);
    out(r3);
    room max = maxi(r1, r2, r3);
    cout<<"Max surface is: "<<max.type<<"\t"<<max.length<<"\t"<<max.width;
    cout<<"\tSurface is: "<<max.length*max.width<<endl;
    return 0;
}

