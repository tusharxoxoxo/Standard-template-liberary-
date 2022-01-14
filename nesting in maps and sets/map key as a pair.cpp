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
#define ll long long












int main()
{

#ifndef ONLINE_JUDGE
        //for getting input from input1.txt
        freopen("input1.txt","r",stdin);
        //for writing output to output1.txt 
        freopen("output1.txt","w",stdout);
#endif
 
 map<pair<ll,ll>,ll>m;//maps meh pair sorted order meh store hogeh
 pair<ll,ll>p1,p2;

 p1=make_pair(3,4);
 p2={3,5};

 cout<<(p1<p2)<<endl;

  

  map<set<ll>,ll>mm;
  set<ll>s1={3,34,5,4};
  set<ll>s2={3,34,5,323};
  cout<<(s1>s2)<<endl;  
 

map<pair<string,string>,vector<ll> > mmm;
int n;cin>>n;
for (int i = 0; i < n; ++i)
{
        string fn, ln;
        cin>>fn>>ln;
        ll ct;
        cin>>ct;
        for (int j = 0; j < ct; ++j)
        {
                int x;cin>>x;
                mmm[{fn,ln}].push_back(x);
        }

             

             for(auto &pr:mmm){
                auto &full_name=pr.first;
                auto &list=pr.second;
                cout<<full_name.first<<" "<<full_name.second<<" "<<list.size()<<endl;
                for(auto &element:list){
                        cout<<element;
                }
                cout<<endl;
             }


}
cout<<"output was printed in sorted order";












        
}