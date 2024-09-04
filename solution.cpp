// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>
class Solution {
public:
    int getLucky(std::string str, int k) {
        std::vector<int> v;
        int result =0;
        for (int i=0;i<str.size();i++)
        {
            std::cout << str[i] << ","<< str[i]-'a'+1<< std::endl;
            v.push_back(str[i]-'a'+1);
        }
        std::cout << "===" << std::endl;
        int index=0;
        int sum=0;
        std::vector<int>::iterator it;
        for( it=v.begin();it !=v.end() ;++it)
        {
           // std::cout << *it <<";";
           
            while (*it/10>0)
            {
                sum +=*it%10;
                *it =*it/10;
            }
            
            sum +=*it%10;
            std::cout << sum <<  std::endl;
            
        }
        index++;
        result =0;
        if (index >k)
        {
            result =sum;
            std::cout << result << std::endl;
            return result;
        }
      //  std::cout << index << "," <<k<< std::endl;
         int a=0;
         a=sum;
        while (index <k)
        {
            
          //std::cout << result << "," <<sum<< std::endl;
          if (a>10)
          {
            while (a/10>0)
            {
                result +=a%10;
                a =a/10;
                
            }
           
            result +=a%10;
             std::cout << result << "," <<a<< std::endl;
          }
            a=result;
          
            index++;
            
        }
        
          std::cout << result << std::endl;
    return result;
        
    }
};

int main() {
    // Write C++ code here
    Solution s;
    /*std::string str ="iiii";
    int k=1;
    int result =0;
    result= s.getLucky(str,k);
    std::cout << result << std::endl;*/
    
    std::string str= "dbvmfhnttvr";
    int k = 5;
    int result =0;
    result= s.getLucky(str,k);
    std::cout << result << std::endl;

    return 0;
}
