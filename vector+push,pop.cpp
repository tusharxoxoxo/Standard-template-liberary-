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



void printVec(vector<int>&v){
        cout<<"size : "<<v.size()<<endl;
        for(int i=0;i<v.size();++i){
                //v.size() -> O(1)
                cout<<v[i]<<"  "<<endl;
        }
}

int main()
{

#ifndef ONLINE_JUDGE
        //for getting input from input1.txt
        freopen("input1.txt","r",stdin);
        //for writing output to output1.txt 
        freopen("output1.txt","w",stdout);
#endif
        vector<int> v;
        v.push_back(4);
        printVec(v);
        v.pop_back();
        printVec(v);
        

        vector<int>v54(6,44);
        v54.push_back(7);//O(1)
        printVec(v54);

        vector<int>v5=v54; //O(n)
        printVec(v5);

        v5.pop_back();     //O(1)
        printVec(v5);
       

       //using vector without making copy
        //using only through refrence
        
        v.push_back(45);
        vector<int>&v3=v;
        printVec(v3);
        v.push_back(34);
        printVec(v);printVec(v3);
}