// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
//#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

using namespace std;



int main()
{

#ifndef ONLINE_JUDGE
        //for getting input from input1.txt
        freopen("input1.txt","r",stdin);
        //for writing output to output1.txt 
        freopen("output1.txt","w",stdout);
#endif
       
       //special feature of c++11

        vector<int>v={3,4,5555,333};
           for (int i = 0; i < v.size(); ++i){cout<<v[i]<<" ";}cout<<endl;

           vector<int>::iterator it;
           for(it=v.begin();it<v.end();++it){cout<<(*it)<<" ";}cout<<endl;

           //special way and easier to code 
           //special feature of c++11 and all the versions that come after it

           for(int value:v){//yeah the joh "value " hai yeh copy hoti hai
                //yeah actual value nahi hai
                cout<<value<<" ";
           }cout<<endl<<"\n";

           for(int value:v){value++;}

           for(int value:v){value;cout<<value<<" ";}cout<<endl;

           for(int value:v){value++;cout<<value<<" ";}cout<<endl;

           for(int &value:v){value++;}

           for(int value:v){cout<<value<<" ";}cout<<endl<<endl;

           vector<pair<int,int>>v_p={{2334,3434},{33455,33424}};
           for(pair<int,int>&value:v_p){
                cout<<value.first<<" "<<value.second<<endl;
           }









 } 