long long merge(long long *arr,vector<long long>&temp, int l,int m, int h){
    long long invs = 0;
    int i = l, j = m, k = l;
    while(i<m && j<=h){
        if(arr[i]<arr[j]){
            temp[k++] = arr[i];
            i++;
        }else{
            temp[k++] = (arr[j]);
            j++;
            invs += (mid-i);
        }
    }
    while (i < m) {
      temp[k++] = (arr[i++]);
    }
    while (j <= h){
        temp[k++] = (arr[j++]);
    }

    for(int i = l; i<=h; i++){
        arr[i] = temp[i];
    }
}