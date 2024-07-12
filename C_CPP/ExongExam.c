#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int taker, questions, currentQuestionNum = 0, currentQuestion;
    
    scanf("%d %d", &taker, &questions);

    int count = 0;
    char *answers[questions];
    char inputCorrectAnswer[(questions*2)-1];

    scanf(" %[^\n]s", &inputCorrectAnswer);

    char *token = strtok(inputCorrectAnswer, " ");
    while (token != NULL && count < questions) {
        answers[count] = token;
        count++;
        token = strtok(NULL, " ");
    }

    int currentTaker = 0, currentTakerScore = 0;
    int takerScore[taker];
    char currentTakerInput[(questions*2)-1];
    char *currentTakerAnswer[questions];
    while (currentTaker < taker) {
        scanf(" %[^\n]s", &currentTakerInput);
        char *inputToken = strtok(currentTakerInput, " ");
        count = 0;
        while (inputToken != NULL && count < questions) {
            currentTakerAnswer[count] = inputToken;
            count++;
            inputToken = strtok(NULL, " ");
        }
        
        for (int i = 0; i < questions; i++) {
            if (atoi(currentTakerAnswer[i]) == atoi(answers[i])) {
                currentTakerScore++;
            }
        }
        takerScore[currentTaker] = currentTakerScore;
        currentTaker++;
        currentTakerScore = 0;
    }
    for (int i = 0; i < taker; i++) {
        printf("%d ", takerScore[i]);
    }
}