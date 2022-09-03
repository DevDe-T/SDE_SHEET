#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//n/3

class Solution {
public:
  vector<int> majorityElement(vector<int> &a) 
  {
	  int y(-1), z(-1), cy(0), cz(0);
    
	  for (const auto & x: a) 
	  {
		  if (x == y) cy++;
		  else if (x == z) cz++;
		  else if (! cy) y = x, cy = 1;
		  else if (! cz) z = x, cz = 1;
		  else cy--, cz--;
     }
      
     cy = cz = 0;
     for (const auto & x: a)
		 if (x == y) cy++;
			 else if (x == z) cz++;
  
	  vector<int> r;
	  if (cy > size(a)/3) r.push_back(y);
	  if (cz > size(a)/3) r.push_back(z);
	  return r;
  }
};

//n/2

bool isMajInd(vector<int> &arr, int cand){
        int k = arr.size()/2;
        int cmp = 0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i] == cand){
                cmp++;
            }
        }
        if(cmp > k){
            return true;
        }
        return false;
    }
    int majorityElement(vector<int>& arr) {
        //Moore's Voting Algo
        
        int count =1, n =arr.size();
        int maj_ind = 0;
        for(int i=1;i<n;i++){
            if(arr[maj_ind] == arr[i]){
                count++;
            }
            else{
                count--;
            }
            if(count == 0){
                maj_ind = i;
                count = 1;
            }
        }
        if(isMajInd(arr, arr[maj_ind])){
            return arr[maj_ind];
        }
        else{
            return -1;
        }


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}



DROP TABLE emp_temp;

CREATE TABLE emp_temp AS
  SELECT employee_id,
         first_name,
         last_name,
		 department_id,
         salary
  FROM   employees;





DECLARE
    CURSOR employee_cur IS
      SELECT employee_id,
             salary
      FROM   emp_temp
      WHERE  department_id = 50
      FOR UPDATE;
    incr_sal NUMBER;
BEGIN
    FOR employee_rec IN employee_cur LOOP
        IF employee_rec.salary < 15000 THEN
          incr_sal := .15;
        ELSE
          incr_sal := .10;
        END IF;

        UPDATE emp_temp
        SET    salary = salary + salary * incr_sal
        WHERE  CURRENT OF employee_cur;
    END LOOP;
END;