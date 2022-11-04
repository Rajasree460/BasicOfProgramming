
int main() {
2
    int n; cin>>n;
3
    int a[n];
4
    for(int i=0;i<n;i++){
5
        cin>>a[i];
6
    }
7
    int j=0;
8
    for(int i=0;i<n;i++){
9
        if(a[i]<0) {
10
            swap(a[i],a[j]);
11
            j++;
12
        }
13
    }
14
    for(int i=0;i<n;i++){
15
        
16
​
17
    cout<<a[i]<<" ";
18
    }
19
}

