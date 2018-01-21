#include <iostream>
#include <vector>

int main(){
  double input;
  std::vector<double> test_cases;
  std::vector<int> card_sizes;
  std::cin >> input;

  while (input != 0.00){
  test_cases.push_back(input);
  std::cin >> input;
  }


  for(int x = 0; x < test_cases.size(); ++x){
    double increment_sum = 0;
    int card_size = 0;
    int times=1;
    while(test_cases.at(x) > increment_sum){

      increment_sum += (1/(static_cast<double>(times)+1));
      times ++;
      card_size ++;

    }
    card_sizes.push_back(card_size);
  }

for(int x = 0; x < card_sizes.size(); ++x){
  std::cout << card_sizes.at(x) << " card(s)"<< std::endl;
}

return 0;
}
