#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long

#define in cin>>
#define out cout<<
#define rn return

// #define vi vecor
typedef vector<int> vInt;
typedef vector<string> vString;
typedef pair<int, int> pInt;
typedef unordered_map<int, int> iiumap;
typedef unordered_set<int> iuset;
typedef map<int, int> iimap;
typedef set<int> iset;

void vin(vInt & ar, int n) {
	while (n--) {
		int t; in t;
		ar.push_back(t);
	}
}
void vin(vString & ar, int n) {
	while (n--) {
		string t; in t;
		ar.push_back(t);
	}
}
void vout(vInt & ar) {
	// out ar.size()<<" ";
	for (auto i : ar) {
		out i << " ";
	}
	out endl;
}
void vout (vString & ar) {
	for (auto i : ar) {
		out i << " ";
	}
	out endl;
}

void vout(vInt &ar, int start, int end) {
	for (int i = 0; i <= end; i++)
		out ar[i] << " ";
	out endl;
}


// vector<vector<int> > fourSum(vector<int> &ar, int b) {
//  int n = ar.size();
// vector<vInt> solution;

// sort(ar.begin(), ar.end());

// for(int i=0; i<n; i++) {
// 	for(int j=i+1; j<n; j++) {
// 		int sum = ar[i] + ar[j];
// 		int k = j+1, l = n-1; 
// 		while(k<l) {
// 			// out " i "<<i<<" j "<<j<<" k "<<k<<" l "<<l<<endl;
// 			int tmp = ar[k] + ar[l];
// 			if(sum + tmp == b) {
// 				vInt result;
// 				result.push_back(ar[i]);result.push_back(ar[j]);result.push_back(ar[k]);result.push_back(ar[l]);
// 				sort(result.begin(), result.end());

// 				// out " i am here "; vout(result);
// 				solution.push_back(result);
// 				k++; l--;
// 			} else if(sum + tmp < b) {
// 				// out " k is less ";
// 				k++;
// 			} else l--;
// 		}
// 	}
// }
// sort(solution.begin(), solution.end());
// solution.erase(unique(solution.begin(), solution.end()), solution.end());
// return solution;
// }


// string fractionToDecimal(int A, int B) {
//     string result; 
//     long long int a = A, b = B;
//     if((a<0&&b>0) || (a>0&&b<0))result += "-"; 
//     a = abs(a); b = abs(b); 
//     long long int r = a/b;
//     result += to_string(r); 
//     long long int rem = a%b; 
//     if(rem == 0) return result; 
//     result += ".";
//     vector<int>ar;
//     unordered_map<int, int>map; int brac = -1, i=0;
//     out result<<endl;
//     while(rem) {
//     	map[rem] = i; 
//     	out " rem "<<rem<<" i "<<i<<" ";
//         rem *= 10; 
//         int k = rem/b; 
//         ar.push_back(k);
//         rem %= b; 
//         if(map.find(rem) != map.end()) {
//             brac = map[rem];
//             break;
//         }
        
//         ++i;
//     }
//     for(int i=0; i<ar.size(); i++){
//         if(i == brac) result += "(";
//         result += to_string(ar[i]);
//     }
//     if(brac != -1) result += ")";
//     return result;
// }

// int gcd(int a, int b) {
// 	return b==0 ?a : gcd(b,a%b);
// }


// int maxPoints(vector<int> &ar, vector<int> &br) {
// 	 int maxx = INT_MIN;
// 	for(int i=0; i<ar.size(); i++){
// 		unordered_map<double, int> map;
// 		int x1 = ar[i], y1 = br[i];
// 		for(int j=i+1; j<br.size(); j++) {
// 			int x2 = ar[j], y2 = br[j];
// 			double slope; 
//             if(x1 == x2) slope = 1000000000; 
//             else slope = (y2-y1)*1.0/(x2-x1);
//             out slope<<" i "<<i<<" j "<<j<<endl;
// 			if(map.find(slope)!=map.end()) 
// 			{
// 				++map[slope];
				
// 			} else {
// 				map[slope] = 2;

// 			}
// 			int second = map[slope];
// 			maxx = max(maxx, second);
// 		}
// 	}
// return maxx;
// }

// vector<int> solve(vector<int> &ar) {
// 	unordered_map<int, set<int> > map; 
// 	int n = ar.size();
// 	vector<int> vec(n); 
// 	for(int i=0; i<ar.size(); i++){
// 		if(map.find(ar[i])==map.end()){
// 			set<int>tmp; tmp.insert(i);
// 			map[ar[i]] = tmp;
// 			vec[i]=ar[i];
// 		} else {
// 			auto pos = map[ar[i]].begin();
// 			map[ar[i]].insert(i);
// 			map[ar[i]].erase(pos);
			
// 			++vec[*pos];
// 			if(map.find(vec[*pos]) == map.end()) {
// 				set<int>tmp; tmp.insert(*pos);
// 				map[vec[*pos]] = tmp;
// 			} else {
// 				map[vec[*pos]].insert(*pos);
// 			}
// 			vec[i] = ar[i];
// 		}
// 		// out " i "<<i<<endl;
// 		// vout(vec);

// 	}
// 	return vec;
// }
// "cac", "aaa", "aba", "aab", "abc" 
// abbaccaaabcabbbccbabbccabbacabcacbbaabbbbbaaabaccaacbccabcbababbbabccabacbbcabbaacaccccbaabcabaabaaaabcaabcacabaa

// vector<int> findSubstring(string str, const vector<string> &ar) {
//     unordered_map<string,int>map; 
//     vector<int>result;
//     for(string s : ar) {
//     	// out " s "<<s<<endl;
//     	if(map.find(s)!=map.end())map[s]++;
//     	else map[s] =1;
//     // map[s]++;    
//     }
   
//     long long int words = ar.size()*ar[0].length();
//     int len = ar[0].length();
//     if(str.length()<words) return result;
//     int n = str.length();
  
//     for(int i=0; i<=n-words; i++){
//         unordered_map<string,int>tmp_map;
//         tmp_map = map; 
//         //  for(auto i = tmp_map.begin(); i!=tmp_map.end(); i++){
//     	// out i->first<<" "<<i->second<<endl;
//     // }
//         int word_count = ar.size();
//         for(int j =i ;j<i+words; j+=len) {
//             string cur = str.substr(j,len);
//         	if(i == 94) {out " cur "<<cur<<" word_count "<<word_count<<" "<<tmp_map[cur]<<"\n";}
//         	if(map.find(cur)==map.end() || tmp_map[cur] == 0) {
//             	if(i == 94) out "here to break "<<cur<<" "<<tmp_map[cur]<<" ";
//             	break;
//             }

//             else if(map.find(cur)!=map.end()){--tmp_map[cur]; --word_count;}
             
//         }
//         if(i == 94) out " here "<<word_count<<endl;
//         if(word_count == 0) result.push_back(i);
  
//     }
//     return result;
// }

// abbaccaaabcabbbccbabbccabbacabcacbbaabbbbbaaabaccaacbccabcbababbbabccabacbbcabbaacaccccbaabcab aabaaaabcaabcacabaa

// string minWindow(string ar, string br) {
// 	unordered_map<char,int>map; 
// 	for(char r : br){
// 		map[r]++;
// 	}
// 	int m = br.size(); int len= INT_MAX;
// 	int i=0, j = i+m-1, n = ar.size(); string result;
// 	if(j>=n) return result;
// 	unordered_map<char,int>tmp_map;
// 	tmp_map = map;  int count = 0;
// 	for(int k = 0; k<=j ; k++){
// 		if(tmp_map.find(ar[k])!=tmp_map.end()) {
// 			if(tmp_map[ar[k]]>0)++count;
// 			--tmp_map[ar[k]]; 
// 		}
// 	}
// 	out "n "<<n<<endl;
// 	while(j<n) {
// 		// tmp_map = map;
// 		out " i "<<i<<" j "<<j<<" ";
// 		out " here "<<ar.substr(i,j-i+1)<<" count "<<count<<" ";
// 		if(count == m) {
// 			// out "there";
// 			if(len > j-i+1){
// 				len = j-i+1;
// 				result = ar.substr(i,len);
// 			}
// 			if(tmp_map.find(ar[i])!=tmp_map.end()){
// 				tmp_map[ar[i]]++;
// 				if(tmp_map[ar[i]]>0)count--;
// 			}
// 			i++;
// 		} else {
// 			j++; 
// 			if(tmp_map.find(ar[j])!=tmp_map.end()){
// 				if(tmp_map[ar[j]]>0)++count;
// 				--tmp_map[ar[j]]; 
// 			}
// 		}
// 		 out " count "<<count<<" j "<<j<<" i "<<i<<" "<<endl;

// 	}
// 	return result;
// }



int lengthOfLongestSubstring(string ar) {
	unordered_set<char>set; 
	int len = INT_MIN; int cur = 1;
	if(ar.size() == 1) return 1;
	set.insert(ar[0]);
	for(int i=0,j=1; j<ar.size(); ){
		if(set.find(ar[j])== set.end()) {
			++cur; 
			len = max(len,cur);
			set.insert(ar[j]);
			j++;
		} else {
			set.erase(ar[i]);
			cur--;
			i++;
		}
	}
	return len;
}




int main() {
	string str; in str; 

	int ans = lengthOfLongestSubstring(str);
    out ans;
rn 0;
}


