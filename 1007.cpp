#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){
  int length;
  int num;

  cin >> length >> num;

  vector<string> strings(num);
  vector<int> counts(num);
  vector<string> originals(num);

  for(int x = 0; x < counts.size(); ++x){
    counts.at(x) =0;
  }

  for(int x = 0; x < strings.size(); ++x){
    cin >> strings.at(x);
  }
/*
  for(int x = 0; x < strings.size(); ++x){
    if (strings.at(x).size() > length ||strings.at(x).size() < length){
      std::cout << "Error in string size not identical to length var" << std::endl;
    }
  }
*/
  originals = strings;

//using selection sort
  /*char temp;
  for(int x = 0;x < strings.size();++x){
    for(int i = 0; i < strings.at(x).size();++i){
      for(int y = i+1; y < strings.at(x).size(); ++y){
        if (strings.at(x).at(i)> strings.at(x).at(y)){
          temp = strings.at(x).at(i);
          strings.at(x).at(i) =  strings.at(x).at(y);
          strings.at(x).at(y) = temp;
          counts.at(x) +=1;
        }
      }
    }
  }
*/

//using insertion sort
int j=0;
char key =0; // *always* initialize variables
for(int x = 0; x < strings.size();++x){
 for (int i=1; i<strings.at(x).size(); ++i) // use pre-increment to avoid unneccessary temorary object
 {
         key= strings.at(x).at(i);
         j = i-1;
         while((j >= 0) && (strings.at(x).at(j) > key))
         {
                 strings.at(x).at(j+1) = strings.at(x).at(j);
                 j -= 1;
                 counts.at(x) += 1;
         }
         strings.at(x).at(j+1)=key;
 }
}


string temp_str;
int temp_num;


for(int x = 0; x<counts.size(); ++x){
  for(int y = x+1; y <counts.size(); ++y){
    if (counts.at(x)> counts.at(y)){
    temp_num = counts.at(x);
    counts.at(x) = counts.at(y);
    counts.at(y) = temp_num;


    temp_str = originals.at(x);
    originals.at(x) = originals.at(y);
    originals.at(y) = temp_str;

      }

    }

  }


  for(int x = 0; x< originals.size(); ++x){
    cout << originals.at(x)<< endl;
  }
}

/*
cout << endl;

  for(int x = 0; x < strings.size(); ++x){
    cout << strings.at(x)<< " ";
  }
  cout << endl;
}
*/
/*
  for(int x = 0; x < counts.size(); ++x){
    cout << counts.at(x) << endl;
  }
}
*/
