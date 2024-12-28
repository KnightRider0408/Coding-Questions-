//LeetCode Question No:- 217
//Date: 21/12/2024.

//Brute Force In this Code//

 //C- CODE:

bool containsDuplicate(int* nums, int numsSize) {
    for ( int i=0; i<numsSize;i++){
        for ( int j=i+1; j<numsSize ; j++)
        {
            if ( nums[i]==nums[j]){
                return true ; 
            }
          
        }
    }

    return false;
}


//Note:- I had Brute Force in this Questions.
// Solution in next file.
