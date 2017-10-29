#621 UAV practice problem
#include <iostream>
#include <string>
using namespace std;


int main(){
  int incrementor = 0;
  string first_result = "";
  int times;
  string input;
  string output = "";
  cin >> times;
  for (int i = 0; i < times; ++i){
    input.empty();
    cin >> input;


/*
    for (int x= 2; x < input.length(); ++x){
      if (input.find('4',x) > 1 && input.find('4',x) != string::npos ){
        if(incrementor == 0){
          output.append("*");
          first_result = "*";
          x = input.length();
        }

        else{
          output.append("*");
          x = input.length();
        }
      }
      }
//end of first if statement
  }
*/

//should be good
// S 35 check
if (input.find("35") > 0 && input.find("35") != string::npos ) {
  if (incrementor == 0){
    output.append("-");
    first_result = "-";
  }
  else{
  output.append("-");
}
}

//9 S 4 checker
  else if(input.find('9') == 0 && input.find('9') != string::npos) {
      if (/*input.find('4',2) >=2 &&*/ input.find('4',2) != string::npos){
        if (incrementor == 0){
          output.append("*");
          first_result = "*";
        }
        else{
        output.append("*");
        }
      }

      else{
        NULL;
      }
    }
    //should work
    //190 S check
  else if(input.find("190") == 0 && input.length()-3 > 0 && input.find("190") != string::npos){
      if (incrementor == 0){
        output.append("?");
        first_result = "?";
      }
      else{
      output.append("?");
    }
}
/*
    else if (input.find('9')>=0 && input.find('4')>=0 && input.find('4') - input.find('9') > 1 && input.find('9') != string::npos && input.find('4') != string::npos){
      output.append("*");
    }
*/



//should be good
  else if (input.find('1') >= 0 &&  input.length() == 1 && input.find('1') != string::npos){
    if (incrementor == 0){
    output.append("+");
    first_result = "+";
  }
    else{
      output.append("+");
  }
  }

//should be good
else if (input.find('4') >= 0  && input.length() == 1 && input.find('4') != string::npos){
  if (incrementor == 0){
  output.append("+");
  first_result = "+";
}
  else{
  output.append("+");
}
}

//should be good
else if (input.find("78")>=0  && input.length() == 2 && input.find("78") != string::npos){
  if (incrementor == 0){
    output.append("+");
    first_result = "+";
  }
  else{
  output.append("+");
}
}
//if it doesnt meet any of the other parameters then output first_result
  else{
    if (first_result == ""){
      output.append(" ");
    }
    else{
    output.append(first_result);
  }
}
  incrementor ++;
//end of of for loop
  }

for(int i = 0; i < output.length(); i++){
  cout << output.at(i)<<endl;
  //end of output loop
}





//end of program
return 0;
}
