class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
      sort(players.begin(),players.end());
      sort(trainers.begin(),trainers.end());
      int i=0,j=0,c=0;
      while(i<players.size() && j<trainers.size())
      {
          if(players[i]<=trainers[j]){
              c+=1;
              i++;
              j++;
          }
          else if(players[i]>trainers[j]){
              while(j<trainers.size() && players[i]>trainers[j])j++;
              if(j<trainers.size())c+=1;
              i++;
              j++;
          }
      }  
      return c;
    }
};