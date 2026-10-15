#include<iostream>
int main()
{
    short n;
    std::cin >> n;
    std::string s[n];
    while(n--){
        static int i=0;
        std::cin >> s[i];
        auto l = s[i].length();
        (l>10)? std::cout<< s[i][0] << l-2 <<s[i][l-1]<<"\n" : std::cout <<s[i] <<"\n" ;
        i++;
    }
    return 0;
}