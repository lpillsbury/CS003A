#include <string>
#include <cstdio>
#include <iostream>

bool isPalindrome(std::string);
std::string rem_stuff(std::string);


bool isPalindrome(std::string s) {
    std::string onlyLetters;
    onlyLetters = rem_stuff(s);
    int l = onlyLetters.length();
    if(l == 1){
        return true;
    }
    int low_indx, high_indx;
    if (l%2 == 0){
        high_indx = l/2;
        low_indx = high_indx - 1;
    }
    else{
        low_indx = l/2 - 1;
        high_indx = l/2 + 1;
    }
    std::cout<<"high index: "<<high_indx<<" low index: "<<low_indx<<std::endl;

    // at this point all phrases are at least 2 characters long
    do{
        if(onlyLetters[low_indx]==onlyLetters[high_indx]){
            
            low_indx--;
            high_indx++;
            std::cout<<"high index: "<<high_indx<<" low index: "<<low_indx<<std::endl;
        }
        else{
            return false;
        }
    }while(low_indx>=0);
    return true;
}

std::string rem_stuff(std::string s){
    int stl = s.length(); //compute length of incoming string only once;
    std::string f = s; // set it equal to s then take out spaces and punctuation
    int findx = 0;
    std::cout<<"string length: "<<stl<<std::endl;
    for(int i=0; i<stl; i++){
        if(ispunct(s[i]) || isspace(s[i])){
            //if it's any of those things remove it and continue to next
            f.erase(findx, 1);
            // don't update findx becasue now that index contains the next value
        }
        else{
            
            f[findx]=tolower(f[findx]);  // can I do this if digits are an option?
            ++findx;
            //update findx every time a character is one I want to keep
        }
        std::cout<<"string removal: "<<f<<std::endl;
    }
    return f;
}

int main(){
  std::string mystr;
  bool ans;
  //std::cout<<"enter a palindrome\n";
  //std::cin>> mystr;
  mystr = "56 hugs sguh 6r";
  ans = isPalindrome(mystr);
  std::cout<<"your answer is: "<<ans<<std::endl;
  return 0;
}