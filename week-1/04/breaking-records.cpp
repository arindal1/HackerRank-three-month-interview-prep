/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */

vector<int> breakingRecords(vector<int> scores) {
    int highestScore = scores[0];
    int lowestScore = scores[0];
    int min = 0;
    int max = 0;
    for(int i = 0;i < scores.size(); i++ ){
        if(scores[i] > highestScore){
        highestScore = scores[i];
        max = max + 1;
        }
        else if (scores[i] < lowestScore){
            lowestScore = scores[i];
            min = min + 1;
        }
    }
    vector<int> ans;
    ans.emplace_back(max);
    ans.emplace_back(min);
    return ans;
}
