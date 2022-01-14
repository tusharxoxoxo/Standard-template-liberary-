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
 
      //maps always store key in sorted 
        //even when we input keys in random order
        //they will automatically be stored in sorted manner

        map<int,string>m;
        m[1]="abc";
        m[34]="skjsdf ljj ldfj";
        m.insert({334,"slfjksdj"});

        map<int,string>::iterator it;
        for(it =m.begin();it!=m.end();++it){
                cout<<(it->first)<<" "<<(it->second)<<endl;
        }
        cout<<endl;


        map<int,string>mm;
        mm [45]="sdfj";  //O(logn) time complexity where n is equal to current size of map 
        mm[33333]="sljf";

        for(auto &value:mm){
                cout<<(value.first)<<" "<<(value.second)<<endl;
        }
cout<<endl;

       //u can't insert duplicate keys in map
       
        
         













}