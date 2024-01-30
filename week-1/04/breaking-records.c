
void breakingRecords(scores)  {
int highestScore = scores[0], lowestScore = scores[0];
int min = 0, max = 0;
for (let i = 0;  i < scores.length; i++)  {
 if  (scores[i] > highestScore)  {
     highestScore = scores[i]
     max = max + 1;
  }  else
       if(scores[i] < lowestScore)  {
          lowestScore = scores[i]
          min = min + 1
        }
  }
  printf(max,min);
}
