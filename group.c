// Group methods include name, year in school, major , hobbies, hometown, anything else interesting. 
#include <stdio.h>

void Linda(void){
	char myName[20] = "Linda Schimming";
	char myYearInSchool[3] = "3";
    char myMajor[30] = "Computer Science";
	char myHobbies[40] = "drawing, horseback riding";
    char myHometown[20] = "Puyallup,WA";
	char myInteresting[20] = "unsure";
  
  printf(" My Name: %s\n My year in school: %s\n My Major: %s \n My Hobbies: %s \n My Hometown: %s \n Someting interesting : %s \n",myName, myYearInSchool, myMajor, myHobbies, myHometown, myInteresting);
   
  

}


int main(){
  chars userName[20];
  int yearInSchool;
  chars major[15];
  chars hobbies[60];
  chars hometown[20];
  chars anythingElse[90];
  Linda();
  return 0;
  
}
