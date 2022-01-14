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
           //auto keyword
           //auto will automatically determine the data type of the given variable
           auto a=1;cout<<a;cout<<endl;
           auto b=2323.2323;cout<<b<<endl;

        //more uses
           vector<int>v={334,3434};
           for (int i = 0; i < v.size(); ++i){cout<<v[i]<<" ";}cout<<endl;
           vector<int>::iterator it;
           for (it=v.begin();it<v.end(); ++it){cout<<(*it)<<" ";}cout<<endl;


          //doing the same using auto

                vector<int>j={2323,2323};
        for(auto it=j.begin();it<j.end();++it){cout<<(*it)<<" ";}cout<<endl<<"\n" ;


         //similiar kind of thing can be done with pair

                vector<pair<int,int>>v_p={{223,23},{34343,3434}};
        for(pair<int,int>&value:v_p){
                cout<<value.first<<" "<<value.second<<endl;
        }

cout<<endl;
          //using auto in pair case
        vector<pair<int,int>>v_pp={{3343,3434},{343456,3434}};
        for(auto &value:v_pp){
                cout<<value.first<<" "<<value.second<<endl;
        }




} 