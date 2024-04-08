class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int total_studs=students.size();
        int cir=0,sqr=0;
        for(int i=0;i<students.size();i++){
            if(students[i]==0)cir++;
            else sqr++;
        }
        for(int i=0;i<sandwiches.size();i++){
            if(sandwiches[i]==0){
                if(cir>0){
                    cir--;
                    total_studs--;
                }
                else return total_studs;
            }
            else{
                if(sqr>0){
                    sqr--;
                    total_studs--;
                }
                else return total_studs;
            }
        }
        return  0;
    }
};