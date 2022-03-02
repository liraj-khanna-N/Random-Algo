/***********Kth smallest element Main***********/
//TC => O(N) SC => O(K)
int kthSmallest(int arr[], int l, int r, int k) {
   priority_queue<int> pq;
   for (int i = 0; i < k; i++)
       pq.push(arr[i]);
   for (int i = k; i <= r; i++) {
       if (pq.top() > arr[i] && pq.size() == k) {
           pq.pop();
           pq.push(arr[i]);
       }
   }
   return pq.top();
}

