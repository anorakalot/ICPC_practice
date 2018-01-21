#include <iostream>
#include <cmath>

int main(){
  double sum = 0;
  double input;

  for(int x = 0; x < 12; ++x){
    std::cin >> input;
    sum += input;
  }
  sum /= 12.0;
  sum = floor((sum * 100 ) + 0.5) / 100;
  std::cout <<"$"<<sum<<std::endl;
}
