#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 1000  /* Maximum number of participants */

struct ParticipantInfo{
    char name[50];
    int age;
    char school[50];
    int grade;
};

int main(){
    struct ParticipantInfo Participants[MAX]; /* Array to maintain all participants */
    int num_participants = 0;
    int i;
    FILE *fp;
    char filename[50];
    
    /* Get the name of the file from the user */
    printf("Please enter the name of the file: ");
    gets(filename);
    
    /* Open the file for reading */
    fp = fopen(filename, "r");
    if(fp == NULL){
        printf("Error opening file.\n");
        return 0;
    }
    
    /* Read the file and populate the Participants array */
    while (fscanf(fp,"%s %d %s %d\n", Participants[num_participants].name, &Participants[num_participants].age, 
		Participants[num_participants].school, &Participants[num_participants].grade) != EOF){
        num_participants++;
    }
    
    /* Close the file */
    fclose(fp);
    
    /* Print the list of participants */
    printf("Name\t\tAge\tSchool\tGrade\n");
    printf("-------------------------------------\n");
    for(i = 0; i < num_participants; i++){
        printf("%s\t\t%d\t%s\t%d\n", Participants[i].name, Participants[i].age, Participants[i].school, Participants[i].grade);
    }
    
    /* Give an introductory message */
    printf("Welcome to the Youth Empowerment Project!\n");
    printf("We have %d participants and we're ready to begin!\n", num_participants);
    
    /* Provide additional information */
    printf("The goal of this project is to provide a safe, fun, and educational environment for our participants.\n");
    printf("We want to ensure that our participants have the skills, knowledge, and resources to become leaders in their communities.\n");
    printf("We are looking forward to an amazing learning experience!\n");
    
    /* Create an array to store the feedback from the participants */
    char feedback[MAX][50];
    int num_feedback = 0;
    
    /* Ask for feedback from each participant */
    for(i = 0; i < num_participants; i++){
        printf("%s, please provide your feedback: ", Participants[i].name);
        gets(feedback[num_feedback]);
        num_feedback++;
    }
    
    /* Print the feedback from the participants */
    printf("\nFeedback from Participants:\n");
    for(i = 0; i < num_feedback; i++){
        printf("%s\n", feedback[i]);
    }
    
    /* Ask participants to share their success stories */
    printf("\nWe want to hear your success stories! Please share your success stories with us: \n");
    char success_stories[MAX][200];
    int num_stories = 0;
    for(i = 0; i < num_participants; i++){
        printf("%s, please share your success story: ", Participants[i].name);
        gets(success_stories[num_stories]);
        num_stories++;
    }
    
    /* Print the success stories */
    printf("\nSuccess Stories:\n");
    for(i = 0; i < num_stories; i++){
        printf("%s\n", success_stories[i]);
    }
    
    /* Give closing remarks */
    printf("\nThank you for participating in the Youth Empowerment Project!\n");
    printf("We wish all of our participants luck on their future endeavors!\n");
    
    return 0;
}