#include <iostream>

int add(int a, int b){
return a+b;
}

int main(){
int a;
int b;
int product;
std::cin >> a >> b;

product = add(a,b);

std::cout << product<<std::endl;
return 0;
}
