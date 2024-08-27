#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int x){
    v.push_back(x);

    int cur_index = v.size() - 1;
    while (cur_index != 0){
        int parent_index = (cur_index - 1) / 2;
        if(v[parent_index] > v[cur_index])
            swap(v[parent_index], v[cur_index]);
        else 
            break;
        cur_index = parent_index;
    }
}

void delete_heap(vector <int> &v ){
    v[0] = v[v.size()-1];
    v.pop_back();
    int cur = 0;
    while(true){
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int last_idx = v.size() -1;
        if(left_idx <= last_idx && right_idx <= last_idx){
            if(v[left_idx] <= v[right_idx] && v[left_idx] < v[cur]){
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if(v[right_idx] <= v[left_idx] && v[right_idx] < v[cur]){
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else {
                break;
            }
        }
        else if (left_idx <= last_idx ){
            if(v[left_idx] < v[cur]){
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
             else {
                break;
            }
        }
        else if(right_idx <= last_idx){
            if(v[right_idx] < v[cur]){
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
             else {
                break;
            }
        }
        else {
            break;
        }
    }
}

void print_heap(vector<int> v){
    for(int x: v){
        cout << x << " ";
    }
    cout << " ";
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    delete_heap(v);
    print_heap(v);
    
    return 0;
}