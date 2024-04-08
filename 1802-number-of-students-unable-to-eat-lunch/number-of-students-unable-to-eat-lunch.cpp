class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
      
      queue<int> q;
      for(int i=0;i<students.size();i++){
        q.push(students[i]);
      }
      int r=0,i=0;
      while(q.size() && r<q.size()){
        if(sandwiches[i]==q.front()){
            q.pop();
            i++;
            r=0;
        }
        else{
            int choice=q.front();
            q.pop();
            q.push(choice);
            r++;
        }
      }
      return q.size();
    }
};