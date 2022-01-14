/*Monk stumbled upon N bags with candies. He picks up a bag increases magically! Say the bag thAT used to contain X candies(before eating) now contains [x/2] candies where [x] is the greatest integer less than x 

amazed by the magical spell monk can now have a lot more candies in a single bag regardless of the number of candies in it.
Find the max. no. of candies that Monk can consume*/


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

int t;
cin>>t;
while(t--){
	int n,k;
	cin>>n>>k;
	multiset<ll> bags;
	for (int i = 0; i < n; ++i)
	{
		ll candy_ct;
		cin>>candy_ct;
		bags.insert(candy_ct);
	}
	ll total_candies =0;
	for (int i = 0; i < k; ++i)
	{
		auto last_it=(--bags.end());
		int candy_ct=*last_it;
		total_candies+=candy_ct;
		bags.erase(last_it);
		bags.insert(candy_ct/2);
	}
	cout<<total_candies<<endl;
}












        
}