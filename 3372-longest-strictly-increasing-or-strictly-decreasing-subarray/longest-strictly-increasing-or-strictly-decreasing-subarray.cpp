class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {
      int res=0,subres=0;
      int ele=arr[0];
      int siz=arr.size();
      if(siz==1)return 1;
      int inc=1,des=1;
      for(int i=0;i<siz-1;i++){
        if(arr[i]>arr[i+1]){
            des++;
            inc=1;
        }
        else if(arr[i]<arr[i+1]){
            inc++;
            des=1;
        }
        else{
            inc=1;
            des=1;
        }
        subres=max(inc,des);
        res=max(res,subres);
      }
    return res;
    }
};