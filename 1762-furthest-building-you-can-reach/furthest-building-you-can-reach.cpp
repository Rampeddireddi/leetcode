class Solution {
public:
    int furthestBuilding(vector<int>& v, int bricks, int ladders) {
       int currentstage=v[0];
       priority_queue<int>q;
      for(int i=1;i<v.size();i++){
          if(v[i]<currentstage){
               currentstage=v[i];
              continue;
          }
          else{
            bricks-=v[i]-currentstage;
            q.push(v[i]-currentstage);
            if(bricks<0){
                bricks+=q.top();
                q.pop();
                ladders--;
            }  
            if(ladders<0)return i-1;
          }
          currentstage=v[i];
      }
      return v.size()-1;
    }
};