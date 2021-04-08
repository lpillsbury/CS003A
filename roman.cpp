// do// do I need to check for string length or that it has the right letters?

#include <string>
#include <cstdio>
#include <iostream>

int romanToInt(std::string s);
int getcurrent(char c);

int romanToInt(std::string s) {
    int charnum = s.length();
    int current, cumulative, prev;
    prev = 0;
    cumulative = 0;
    for (int i=0; i<charnum; ++i){
        current = getcurrent(s[i]);
        if((current==5 || current==10) && prev==1){
            current = current - prev;
            cumulative = cumulative - prev;
            std::cout<<"in first if \n";
        }
        if ((current==50 || current==100) && prev==10){
            current = current - prev;
            cumulative = cumulative - prev;
            std::cout<<"in second if \n";
        }
        if ((current==500 || current==1000) && prev==100){
            current = current - prev;
            cumulative = cumulative - prev;
            std::cout<<"in third if \n";
        }
        std::cout<<"index: "<<i<< " current val: "<<current<<std::endl;
        cumulative = cumulative + current;
        prev = current;
    }
    return cumulative;
}

int getcurrent(char c){
    int current;
    switch(c){
        case 'I':
            current = 1;
            break;
        case 'V':
            current = 5;
            break;
        case 'X':
            current = 10;
            break;
        case 'L':
            current = 50;
            break;
        case 'C':
            current = 100;
            break;
        case 'D':
            current = 500;
            break;
        case 'M':
            current = 1000;
            break;
        }
    return current;
}

int main(){
  std::string mystr;
  int ans;
  std::cout<<"enter a roman numeral\n";
  std::cin>> mystr;
  ans = romanToInt(mystr);
  std::cout<<"your answer is: "<<ans<<std::endl;
  return 0;
}
