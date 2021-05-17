#include"score.h" // user-define header
//main function only sketches out the logic of Program
void main() {
	int score[MAX], mark[MAX];
	int statistic[6] = { 0,0,0,0,0,0 };  //holding how many students have got mark 0-5

	input_score(score);
	evaluation(score, mark);
	classification(mark, statistic);
	output_result(mark, statistic, score);
}