int lower_bound(vector<ll> &ar, int start_index, int end_index, ll search_value) {

	if (start_index == end_index)
		return (ar[start_index] <= search_value ? start_index : -1);
	int mid = start_index + (end_index - start_index) / 2;
	if (ar[mid] == search_value) return mid;
	else if (ar[mid] > search_value) return lower_bound(ar, start_index, mid, search_value);
	else {
		int t = lower_bound(ar, mid + 1, end_index, search_value);
		return (t == -1 ? mid : t);
	}
}