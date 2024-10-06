// Divide Players Into Teams of Equal Skill

// You are given a positive integer array skill of even length n where skill[i] denotes the skill of the ith player. Divide the players into n / 2 teams of size 2 such that the total skill of each team is equal.

// The chemistry of a team is equal to the product of the skills of the players on that team.

// Return the sum of the chemistry of all the teams, or return -1 if there is no way to divide the players into teams such that the total skill of each team is equal.

 

// Example 1:
// Input: skill = [3,2,5,1,3,4]
// Output: 22
// Explanation: 
// Divide the players into the following teams: (1, 5), (2, 4), (3, 3), where each team has a total skill of 6.
// The sum of the chemistry of all the teams is: 1 * 5 + 2 * 4 + 3 * 3 = 5 + 8 + 9 = 22.

// Example 2:
// Input: skill = [3,4]
// Output: 12
// Explanation: 
// The two players form a team with a total skill of 7.
// The chemistry of the team is 3 * 4 = 12.

// Example 3:
// Input: skill = [1,1,2,3]
// Output: -1
// Explanation: 
// There is no way to divide the players into teams such that the total skill of each team is equal.

#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b){
    return(*(int*)a - *(int*)b);
}

long long dividePlayers(int* skill, int skillSize) {
    qsort(skill, skillSize, sizeof(int), compare);
    int teamSkill = skill[0] + skill[skillSize - 1];
    long chem = skill[0]*skill[skillSize - 1];

    for(int i = 1; i<skillSize/2 ; i++){
        if(skill[i]+skill[skillSize - 1 - i] != teamSkill) return -1;
        else{
            chem = chem + (skill[i] * skill[skillSize - 1 - i]);
        }
    }
    return chem;
}

int main(){
    int skill[] = {3,2,5,1,3,4};
    int skillSize = 6;
    int result = dividePlayers(skill, skillSize);
    printf("Test 1 : %d\n", result);
    
    int skill2[] = {3,4};
    int skillSize2 = 2;
    int result2 = dividePlayers(skill2, skillSize2);
    printf("Test 2 : %d\n", result2);
    
    int skill3[] = {1,1,2,3};
    int skillSize3 = 4;
    int result3 = dividePlayers(skill3, skillSize3);
    printf("Test 3 : %d\n", result3);
}