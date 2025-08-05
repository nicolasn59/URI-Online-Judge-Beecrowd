#include <stdio.h>

void feedbacks();

int main(){
    int inputs;
    scanf("%d", &inputs);
    for (int i=0; i < inputs; i++){
        feedbacks();
    }
    return 0;
}

void feedbacks(){
    int numFeedbacks;
    scanf("%d", &numFeedbacks);
    for (int i=0; i < numFeedbacks; i++){
        int member;
        scanf("%d", &member);
        if (member == 1){
            printf("Rolien\n");
        }
        else if (member == 2){
            printf("Naej\n");
        }
        else if (member == 3){
            printf("Elehcim\n");
        }
        else{
            printf("Odranoel\n");
        }
    }
}