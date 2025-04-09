#include<iostream>
int main(){
    
    //block-1
    int array[11], n, x; //declaring the datatypes
    std::cout<<"Enter the value of your array: ";
    std::cin>>n;
    
    if(n>11){
        std::cout<<"your array limitation is 11";
        return true;
    }
    //block-2
    std::cout<<"enter the elements: ";
    for(int i = 0; i<n;i++){
        std::cin>>array[i];
    }
    //block-3
    std::cout<<"enter a value in the beginning: ";
    std::cin>>x;
    for(int i=n;i>0;i--){
        array[i]=array[i-1];
    }
    array[0]=x;
    n++;
    
    //block-4
    std::cout<<"after the insertion the elements are: ";
    for(int i=0;i<n;i++){
        std::cout<<array[i]<< " ";
    }
   
}
