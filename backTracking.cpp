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


struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};

ListNode* sin(int n) {
	ListNode* prev ; ListNode* start;
	prev = NULL;
	while (n--) {
		int t; in t;
		ListNode* head = new ListNode(t);
		// ListNode* head = (struct ListNode*) malloc(sizeof(struct ListNode));
		head -> val = t; head -> next = NULL;
		if (prev != NULL) prev -> next = head;
		else if (prev == NULL) start = head;
		prev = head;
	}
	return start;
}

void sout(ListNode* head) {
	while (head != NULL) {
		out head-> val << " ";
		head = head-> next;
	}
}


// vector<string> ans;

// void makeString(vector<string> &ar, int num, string sr) {
//     for(int i = 0; i<ar[num].length(); i++){
//         string tmp ; tmp = sr + ar[num][i];
//         if(num == ar.size()-1) {
//             ans.push_back(tmp);
//             } else {
//                 makeString(ar, num+1, tmp);
//                 }
//             }
// }


// vString specialStrings(vector<string> &ar) {
//     ans.clear();
//     makeString(ar,0,"");
//     return ans;
// }

// vector<vector<int>> ans;

// bool compare(vector<int> &ar, vector<int> &br) {
// 	string a, b;
// 	for (int i : ar) {
// 		a += i + '0';
// 	}
// 	for (int i : br)
// 		b += i + '0';
// 	return (a < b);
// }




// // vector<vector<int>> subsets(vector<int> &ar) {
// // 	ans.clear();
// // 	if(ar.size() == 0) return ans;
// // 	sort(ar.begin(), ar.end());
// // 	vInt tmp;
// // 	subsets(ar,tmp,0);
// // 	sort(ans.begin(), ans.end(), compare);
// // 	return ans;

// // }


// void makeAns(vInt& ar, int b, int num, vInt result) {
// 	int csum = 0;
// 	if (num == ar.size() - 1) {
// 		csum += ar[num]; result.push_back(ar[num]);
// 		if (csum == b) {ans.push_back(result);}
// 	} else {
// 		makeAns(ar, b, num + 1, result);
// 		csum += ar[num];
// 		result.push_back(ar[num]);
// 		if (csum == b) {ans.push_back(result);}
// 		else if (csum < b) {makeAns(ar, b - csum, num + 1, result);}
// 	}
// }


// vector<vector<int> > combinationSum(vector<int> &ar, int b) {
// 	ans.clear();
// 	if (ar.size() == 0) return ans;
// 	sort(ar.begin(), ar.end());
// 	// vInt newAr; newAr.push_back(ar[0]);
// 	// for(int i=1; i<ar.size(); i++){
// 	// 	if(ar[i] != ar[i-1]) newAr.push_back(ar[i]);
// 	// }
// 	vInt tmp;
// 	makeAns(ar, b, 0, tmp);
// 	sort(ans.begin(), ans.end());
// 	ans.erase(unique(ans.begin(), ans.end()), ans.end());
// 	// remove_duplicate(ans);
// 	return ans;
// }

// void makeAns(vInt result, int k, int n, int num)
// {
// 	if ( num == n) {
// 		if (k == 1) {
// 			result.push_back(num);
// 			ans.push_back(result);
// 		}
// 	} else {
// 		makeAns(result, k, n, num + 1);
// 		result.push_back(num);
// 		if (k != 1) makeAns(result, k - 1, n, num + 1);
// 		else ans.push_back(result);
// 	}
// }


// vector<vector<int> > combine(int n, int k) {
// 	ans.clear();
// 	vInt result;
// 	makeAns(result, k, n, 1);
// 	sort(ans.begin(), ans.end());
// 	return ans;
// }

// void subsets(vector<int> &ar, vector<int> tmp, int num) {
// 	if (num == ar.size() - 1) {
// 		// out " here we are\n";
// 		// vout(tmp);
// 		// out " here we finished\n";
// 		ans.push_back(tmp);
// 		tmp.push_back(ar[num]);
// 		ans.push_back(tmp);
// 	} else {
// 		subsets(ar, tmp, num + 1);
// 		tmp.push_back(ar[num]);
// 		subsets(ar, tmp, num + 1);
// 	}

// }


// vector<vector<int> > subsetsWithDup(vector<int> &ar) {
// 	ans.clear();
// 	sort(ar.begin(), ar.end());
// 	vInt tmp;
// 	subsets(ar, tmp, 0);
// 	sort(ans.begin(), ans.end());
// 	ans.erase(unique(ans.begin(), ans.end()), ans.end());
// 	return ans;
// }


// void makestring(string ar, int pos, int b, string& str) {
// 	if (pos == ar.length() - 1)  {if(str<ar) str = ar; return;}
// 	if ( b == 0)  {if(str<ar) str = ar; return;}
// 	int  num = INT_MIN;
// 	for (int i = pos; i < ar.length() ; i++) {
// 		int k = ar[i] - '0';
// 		if (k >= num) {num = k; }
// 	}

// 	for (int i = pos; i < ar.length(); i++) {
// 		int k = ar[i] - '0';
// 		if(k == num) {
// 			if(i == pos ) {makestring(ar,pos+1, b, str);}
// 			else {
// 				swap(ar[pos], ar[i]);
// 				makestring(ar,pos+1, b-1, str);
// 				swap(ar[pos], ar[i]);
// 			}
// 		}

// 	}
// }

// string solve(string ar, int b) {
// 	string str = "0";
// 	 makestring(ar, 0, b, str);
// 	 return str;
// }


// void m(string ar, int pos, vector<string>& result, vector<string> &d, string current) {
//     bool toInsert = false;
//     if(pos == ar.length()-1){
//         // last one it is ;
//         toInsert = 1;
//     }
//     int num = ar[pos]-'0';
//     string telephone_string = d[num];
//     for(auto i: telephone_string) {
//         string tmp = current;
//         tmp += i;
//         if(toInsert) result.push_back(tmp);
//         else m(ar,pos+1, result, d, tmp);
//     }
// }



// vector<string> letterCombinations(string ar) {
//     vector<string>d{10};
//     d[0] = "0";
//     d[1] = "1";
//     d[2] = "abc";
//     d[3] = "def";
//     d[4] = "ghi";
//     d[5] = "jkl";
//     d[6] = "mno";
//     d[7] = "pqrs";
//     d[8] = "tuv";
//     d[9] = "wxyz";
//     vector<string> result;
//     m(ar, 0, result, d, "");
//     return result;

// }

vector<vector<string>> ans;

bool ispalindrom(string str, int start, int end) {
	while (start < end) {
		if (str[start] != str[end]) return 0;
		start++; end--;
	}
	return 1;
}

void makePalindrom(string str, int pos , vector<string> result) {
	out " pos " << pos << " ";
	int n = str.length();
	if (pos == n) { ans.push_back(result);}
	else {
		for (int i = pos; i < n; i++) {
			out " pos "<<pos<<" i "<<i<<" ";
			if (ispalindrom(str, pos, i)) {
				string tmp = str.substr(pos, i - pos + 1);
				out " tmp " << tmp << endl;
				result.push_back(tmp);
				makePalindrom(str, i + 1, result);
				result.pop_back();
				out " here it is "<<pos<<endl;
			}
		}
	}
}


vector<vector<string> > partition(string str) {
	ans.clear();
	vector<string>result;
	makePalindrom(str, 0, result);
	// sort(ans.begin(), ans.end());
	return ans;
}

void createParenthesis(string str, int pos, int total, int open_count, int close_count, vector<string>& result) {
	string open = "(", close = ")";
	if(pos == total) {
		str += close; 
		result.push_back(str);
		return ;
	} 
	int diff = close_count-open_count; 
	if(open_count) {
		str += open;
		createParenthesis(str,pos+1,total,open_count-1,close_count,result);
		str.pop_back();
	}
	if(diff) {
		str += close;
		createParenthesis(str,pos+1,total,open_count, close_count-1,result);
	}


}

vector<string> generateParenthesis(int n) {
	vector<string> result; 
	createParenthesis("",1,2*n,n,n,result);
	return result;
}

int main() {

	// string s; in s;
	int n; in n;
	vString ar = generateParenthesis(n);
	vout(ar);
	rn 0;
}