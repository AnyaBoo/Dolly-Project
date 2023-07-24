//
//  main.c
//  Dolly_USE THIS ONE
//
//  Created by Al on 18/6/20.
//  Copyright © 2020 Al. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void help(void);

//Check two strings (not case sensitive)
int NameCheck (const char * nc1, const char * nc2) {
    int i;
    char nc1new [30]= "", nc2new[30]= "";
    for (i = 0; i <= strlen(nc1); i++)    {
    nc1new[i] = toupper(nc1[i]);
}
    for (i = 0; i <= strlen(nc2); i++)    {
        nc2new[i] = toupper(nc2[i]);
}
    if (strcmp (nc1new,nc2new) == 0)
        return 1;
    else
        return 0;
}

int main(void) {
    //Declare general variables for games
    int choice = 0, currentLevel = 0;
    //Memory of MC and Dolly's clue[Key PASSWORD]
    int memory = 0, clue = 0;
    //Main character's name
    int yuri = 0, maxim = 0;
    //Player's name
    char name[30];
    //Game title
    mainhome:

    printf("\n\t\t.....    ....   ...     ...    ...  ...\n");
    printf("\n\t\t...  . ...  ... ...     ...    ...  ...\n");
    printf("\n\t\t...  . ...  ... ...     ...    ........\n");
    printf("\n\t\t...  . ...  ... ...     ...      .... \n");
    printf("\n\t\t...  . ...  ... ...     ...       ..  \n");
    printf("\n\t\t.....    ....   ....... .......   ..  \n");
    printf("\n\t\t-----------------------------------");
    printf("\n\n\t\t START YOUR EPIC JOURNEY!!!!!!");
    printf("\n\t\t-----------------------------------");
    printf("\n\t\t Press S to start the journey");
    printf("\n\t\t Press H for help");
    printf("\n\t\t Press Q to quit\n");

    choice = toupper(getchar());
    if (choice == 'H') {
        help();
        getchar();
        goto mainhome;
    } else if (choice == 'Q') {
        exit(1);
    } else if (choice == 'S') {
    }

//Prologue
    while (currentLevel == 0) {
        printf("\nP R O L O G U E\n\n");
        printf("'Where am I?'\nThat was the first thought after I gained consciousness.\nI touched my face, looked at my clothes\n'Why am I wearing this neat black suit\nMaybe I am a businessman or lawyer?'\nI could not remember anything\nAnything at all\n\n");
        printf("Who am I?\n\n");
        printf("I looked around.\nEverything around me was so unfamiliar. Seems like they tried to make this place to looks like an airport.\n But it was strange that this place has no window at all...\nMy left and right were doors and filled with sign saying\n'Gate C3\n flight AB123 to New York\nor another one\n'Gate C4\nFlightKM48 to Amsterdam'\nI tried to open the door but it's locked\nI walked around a bit and as far as I could see was doors, doors, and doors.\nSuddenly, an old-fashion elevator appeared behind me\nIt said 'B1'\n\n");

    printf("Are you going to explore the elevator?\n");
        printf("1 - Yes\n");
        printf("2 - No\n\n");
        scanf("%d", &choice);
        while (choice != 1) {
             //Repeat until MC choose "1"
             printf("Are you going to explore the elevator?\n");
             printf("1 - Yes\n");
             printf("2 - No\n\n");
             scanf("%d", &choice);
        }

//Proceed with the story
        printf("\n'DING' The elevator's door opened as I pressed UP\n As soon as I walked in,\nI saw B1 down to B6 and then G floor\nI believe that I was now underground\nAnd as of now this was... obviously the only option I had\nWhat... the elevator didn't move after I did 'command' this thing to go up to G floor\nMaybe some functions didn't work?\nSo I tried again, it maybe because of my luck today\nAgain, same thing occured\nRight above those floor buttons, there was an elevator instruction.\n\n");
        printf("Elevator Rules\n");
        printf("1. Only authorized people with 'key' are allowed to use the elevator\n");
        printf("2. This elevator only travel down. You are allowed to travel up only of you are at B6 floor with 'key'.\n\n");

        printf("What is your next move?\n");
        printf("1 - Find someone\n");
        printf("2 - Walk out and find another solution by yourself\n");
        printf("3 - Stay inside the elevator\n\n");
        scanf("%d", &choice);
        while (choice != 2) {
//Repeat until MC choose '2'
        printf("What is your next move?\n");
            printf("1 - Find someone\n");
            printf("2 - Walk out and find another solution by yourself\n");
            printf("3 - Stay inside the elevator\n\n");
            scanf("%d", &choice);
        }
//Proceed
        printf("\nSuddenly, something white and small fell down to the front of my sight.\nI was obviously a small plain note\nWithout hesitation, I picked it up and I saw a faded handwriting on it.\n\n");
        printf("'FINDDOLLY'\n\n");
        printf("Who is Dolly?\n\n");
        printf("I did not see any people so far.\nThere was.. only me and a little note.\nIf I find this Dolly person, she maybe able to help me get out of here but I just can't stay here and do nothing.\nOkay... take a deep breath and ...\nLet the journey begin...\n\n");

        printf("What is your name? If you don't remember, make one!\n");
        scanf("%s", name);
        printf("Hi, %s! Press 1 to continue\n", name);
        scanf("%d", &choice);
        while(choice != 1) {
            printf("Try again! Please press 1 to continue\n");
            scanf("%d", &choice);
        }
        printf("\n*****\n");
        currentLevel = 1;
    } //End currentLevel 0;

//B1 - Airport
    while (currentLevel == 1) {
        printf("\n\n\nB1 - A I R P O R T\n\n\n");
        printf("You are now at the (fake) airport consists of uncountable number of gates. Each gates filled with gate numbers, flight numbers and its destination:\n AB123 to New York,\n KH48 to Amsterdam,\n CH7102 to Shanghai,\n DY1213 to Moscow,\n MT96 to Rio de Janeiro\n and many more\n You know that all doors are locked. So will you...\n\n");
        printf("1 - Kick so hard at the random door to get it open\n");
        printf("2 - Find some hammer or any tools to get it open\n");
        printf("3 - Read the small note again\n\n");
        scanf("%d", &choice);

        while (choice != 3) {
        printf("You are wasting your time! Try again!\n");
        printf("1 - Kick so hard at the random door to get it open\n");
        printf("2 - Find some hammer or any tools to get it open\n");
        printf("3 - Read the small note again\n\n");
        scanf("%d", &choice);
    }

            printf("\n'FINDDOLLY'\n.. Dolly...\nYou then figured out something that maybe relevant!\n\n'Dolly = DY1213 to Moscow'\n\n You walked to that door, C13, right away.\nSomehow, you found a black-colored hair pin on the floor.\nIt was not there before.\nSince it was here now, so you tried unlocked the door with it.\n");
                printf("'Click' You heard the sound. Now you can open the door!\n");
                printf("You are about to go inside\n But you feel the iron, few inched away from your head\n Someone is poiting a gun on you right now\n\n");
                printf("???: What the hell are you doing here?\n");
                NameCheck(name, "Yuri");
                yuri = 1;
                currentLevel = 2;
                clue = 1;
            printf("\n*****\n");
    } //End currentLevel 1

//Alternate Ending
    while(currentLevel == -1) {
    printf("\n\nYou reached an ALTERNATE ENDING\n\nThank you for playing Dolly!\n\n");
        break;
    }

//B2 - Park
    while(currentLevel == 2){
        printf("\n\n\nB2 - P A R K\n\n\n");
        printf("A mysterious man appeared and pretended to fire his gun. *POP POW*\n");
        printf("The man puts down his gun and introduced himself as Yuri.\n");
        printf("He told you that this asylum is very dangerous and that YOU needs to leave ASAP!\n");
        printf("You were frightened, but also curious to find out more. So Yuri told you more about this Asylum's story\n");
        printf("\n");
        printf("Will you listen to Yuri's story?\n");
        printf("1 - Yes, I need to know more..\n");
        printf("2 - No, I'm too afraid..\n");
        printf("3 - I don't know..\n\n");
        scanf("%d", &choice);

            while (choice == 2) {
            printf("You need to get it together..\n");
            printf("Will you listen to Yuri's story?\n");
            printf("1 - Yes, I need to know more..\n");
            printf("2 - No, I'm too afraid..\n");
            printf("3 - I don't know..\n\n");
            scanf("%d", &choice);
            }
            
            while (choice == 3) {
            printf("Yuri: You have to be brave, %s!\n",name);
            printf("Will you listen to Yuri's story?\n");
            printf("1 - Yes, I need to know more..\n");
            printf("2 - No, I'm too afraid..\n");
            printf("3 - I don't know..\n\n");
            scanf("%d", &choice);
            }
            printf("\n");
            printf("Yuri: There's a very dangerous man in this asylum.. he's a patient and his name is Dimo.\nHe escaped from his isolation on floor B6..\n");
            printf("%s: What do you mean.. dangerous.. man.. What makes him so dangerous?\nYuri: You do not need to worry about that.. everyone has been frantically searching for him.",name);
            printf("Yuri: I need you to promise me that you will not eat or drink anything provided to you by the staff.\n");
            printf("%s: Okay...\n",name);
 

        while (currentLevel == 2) {
            printf("\n");
            printf("Yuri asked you to follow him. He led him to floor B2 and they saw a huge park with many patients outside.\nThis floor is surrounded by green grass, a fake blue sky, and a bright yellow sun.\n");
            printf("Yuri asked some patients if they knew who this Dolly person was.\nA young boy said he will take them to see a fellow named Maxim, the kindest and most ethical doctor in the asylum.\n\n");
            printf("Would you like to follow the little boy?\n");
            printf("1 - Yes\n");
            printf("2 - No\n\n");
            scanf("%d", &choice);

            if (choice != 2) {
                printf("Little Boy: Please follow me this way!\n");
                printf("Press 1 to continue.\n\n");
                scanf("%d", &choice);
                while(choice != 1) {
                    printf("Try again! Please press 1 to continue\n\n");
                    scanf("%d", &choice);
                }
        } else {
                printf("Little Boy: I think you should come with me.. I can take you to see the great Maxim!\n");
                printf("1 - Yes\n");
                printf("2 - No\n\n");
                scanf("%d", &choice);
            }

    while (maxim == 0) {
            printf("\n");
            printf("The group met Maxim in his office. Maxim looked very presentable, but he had an eye patch over his left eye.\nHis office was very neat and furnished.\nYou noticed two swords hanging on the wall.\n");
            printf("\n");
            printf("Maxim: Hello, My name is Maxim. Oh, we have a new guest here?\nWould it be possible to speak with %s in private?\n",name);
            printf("Yuri: Sure, I will wait outside.\n");
            printf("Maxim: Would you like a glass of water?\n\n");
            printf("1 - Yes please\n");
            printf("2 - No thank you\n\n");
            scanf("%d",&maxim);

        
        switch (maxim) {
            case 1:
                printf("Maxim handed you a glass of water with a grin on his face..\nYou did not realize what was happening... because you were lying dead.\nEnd\n");
                currentLevel = -1;
                break;

            case 2:
            printf("\n");
            printf("Maxim noticed that you has not drank his water yet.. but he continued to ask you questions about who you were. Of course you did not even remember a thing.\nHe offered to take you out to find more information about Dimo so you would be safe from him.\nMaxim told you that he had friends on B6 that can help him.\n");
            printf("\n");
            printf("%s: You don't have to do all that, I will be sure to let you know if I need your help.\nAre you sure you don't have anymore details about Dimo?\n",name);
            printf("Maxim: Dimo is a big hairy man with a big scar on his left cheek. If you find him, please report him to me immediately.\n");
            printf("\n");
            printf("%s: Absolutely, and here I have another question.\nDo you happen to know someone named Dolly?\n",name);
            printf("Maxim: I do not know who Dolly is.\n");
            printf("You peered over at Maxim and noticed a small note and a heart locket stick out of Maxim's pocket.\nThe note was difficult to read, but it reads: \"1 am 100king f0r y0u.\"\n");
            printf("\n");
            printf("You somehow told Maxim that you need to leave..\n Maxim does not let you leave and punched you in the face! Maxim was staring at you with a sadistic look on his face.\nThen revealed his eye under his eye patch, which is an opal color. Maxim told you that he likes his green eyes and would like to add your eyes to his collection.\n");
            printf("Maxim took a knife from his shelf and attempts to stab you!\nBut you were faster, so you stabbed Maxim with the only object available, a hairpin. Maxim became unconscious and you looked at the note and heart locket.\n");
            printf("\n");
            printf("Will you take the note and heart locket?\n");
            printf("1 - I don't know if this is a good idea..!\n");
            printf("2 - Take note and heart locket and escape!\n\n");
            scanf("%d",&choice);

            while (choice != 2) {
                    printf("There's no time to waste..\n");
                    printf("Will you take the note and heart locket?\n");
                    printf("1 - I don't know if this is a good idea..!\n");
                    printf("2 - Take note and heart locket and escape!\n\n");
                    scanf("%d",&choice);
                }
                    printf("You escape with the note and heart locket and run to Yuri!\n");
                    printf("Press 1 to continue.\n\n");
                    scanf("%d",&choice);
                    clue = 2;
                    memory = 1;
                    currentLevel = 3;
                break;
                
            default:
                break;
        }
printf("\n*****\n");
} //End currentLevel 2

//B3 - school
    while (currentLevel == 3) {
            printf("\n\n\nB3 - S C H O O L\n\n\n");
            printf("You managed to escape with Yuri, but was in a deep sleep.\nYou are now dreaming about Dimo and Dimo is exactly like how Maxim described him to be.\nDimo was siting on a couch in an eerie living room, telling you that you will never leave Sunburst Asylum.\n");
            printf("Yuri attempted to wake you up from your sleep by calling out your name many times. You finally woke up in a classroom and a teacher asked you a question.");
            printf("\n");
            printf("Teacher: %s, please answer the math question on page 33 of the textbook.\n",name);
            printf("You realized that you were in a classroom and was discombobulated.\nYou attempted to answer the teacher's questions.\n");
            printf("\n");
            printf("%s: The answer to the question is.. uh.. 666.\n",name);
            printf("\n");
            printf("Teacher: %s, that is incorrect.. are you even paying attention??\nIt's like you have been daydreaming this whole time.\n",name);
            printf("\n");
            printf("%s: I'm sorry, it's been a rough past couple of days for me..\n",name);
            printf("\n");
            printf("Teacher: You really need to start paying more attention in class or you will leave me no choice but to fail you!\n");
            printf("You stormed out of the classroom then followed by Yuri.\nThey began to discuss the events that happened with Maxim.. was it just a dream??\n");
            printf("Yuri is concerned with you because of the disgruntled look on your face.\n");
            printf("\n");
            printf("Where would you like to go?\n");
            printf("1 - Somewhere private to speak with Yuri\n");
            printf("2 - Back to the classroom\n\n");
            scanf("%d", &yuri);

            switch (yuri) {
                case 1:
                    printf("Yuri leads %s to an empty classroom to talk.\n",name);
                    printf("Press 1 to continue.\n\n");
                    scanf("%d", &yuri);
                    break;
                case 2:
                    printf("You decided to go back to the classroom, but the classroom is now empty..\n");
                    printf("Yuri: Looks eerie in here, let's find somewhere else to talk.\n");
                    printf("Where would you like to go?\n");
                    printf("1 - Somewhere private to speak with Yuri\n");
                    printf("2 - Back to the classroom\n\n");
                    scanf("%d", &yuri);
                    break;

                default:
                    break;
                }

                printf("Yuri asked you if something is wrong.\n You looked frightened and confused and unable to stay composed.\n\n");
                printf("You asked Yuri a question:\n");
                printf("1 - Is this all just a dream?\n");
                printf("2 - How did I end up in a classroom?\n");
                printf("3 - Where is Maxim??\n\n");
                scanf("%d", &yuri);
                    switch (yuri) {
                        case 1:
                        printf("Yuri: No, this is not a dream.. is everything alright %s?\n",name);
                        printf("Press 1 to continue.\n\n");
                        scanf("%d", &yuri);
                        break;
                    case 2:
                        printf("When ywe frantically left Maxim's office, you fainted right before we got back to the park.\nI took you to get some rest and we came to this classroom this morning..\nDo you not remember?\n");
                        printf("1 - Is this all just a dream?\n");
                        printf("3 - Where is Maxim??\n\n");
                        scanf("%d", &yuri);
                        break;
                    case 3:
                        printf("I do not know where Maxim is.. I can't believe you said that he attacked you.\nHe is well known as a gentle man and exceptional doctor.\n");
                        printf("1 - Is this all just a dream?\n");
                        printf("2 - How did I end up in a classroom?\n\n");
                        scanf("%d", &yuri);
                        break;
                    default:
                        break;
                }
                printf("You were beyond confused and ready to wake up from this nightmare.\nMaxim was no where to be found, and Dimo was still on everyone's mind.\n");
                printf("Yuri asked you to take a walk.\nOn their walk, Yuri asked you if there was anything that he can do to help.\nYou told Yuri that if he wants to help, he can help find Dolly and find out more information about Dima.\n");
                printf("Yuri reassured you and vowed to find Dolly and got help from others about finding out more about Dimo.\nUpon searching for answers, Yuri ran into a patient in the park named Victor. Victor and Yuri exchanged words.\n");
                printf("\n");
                printf("Yuri: Hello Victor, how are you doing today?\n");
                printf("\n");
                printf("Victor: Hi Yuri, I'm doing well.. enjoying the park on this lovely day. What brings you here?\n");
                printf("\n");
                printf("Yuri: %s and I are looking for a person named Dimo. Have you heard of him?\n",name);
                printf("\n");
                printf("Victor: Dimo you say? I've heard stories of d man named Dimo on B6.\nThey say he's very dangerous and should be avoided at all costs. He's usually in confinement on this floor.\nI've never personally met or encountered him, sorry to say.\n");
                printf("You looked at Victor and then back at Yuri. They were both curious to see what's on B6 and why everyone was saying Dimo was so dangerous.\nThey needed to find him at all costs in hopes of finding this Dolly person.\n");
                printf("\n");
                printf("Victor: Well guys, my time out here is up, I must get back to my room?\nTry not to let a good day like today go to waste.\n");
                printf("\n");
                printf("Victor went back in and there appears to be fire in your eyes. Yuri asked you if you wanted to go back in to find more answers.\nYou nodded your head and began to walk back in.\n");
                printf("\n");
                printf("Do you want to go back inside?\n");
                printf("1 - Yes!\n");
                printf("2 - No, it's nice outside..\n\n");
                scanf("%d",&choice);

                switch (yuri) {
                    case 1:
                        printf("You and Yuri walked back inside and bumped into Victor again.\nThis time, something felt awfully different about Victor.. almost eerie.\n");
                        printf("Press 1 to continue.\n\n");
                        scanf("%d",&choice);
                        break;

                    case 2:
                        printf("Yuri told you that he had important matters to tend to.\n");
                        printf("Do you want to go back inside?\n");
                        printf("1 - Yes!\n");
                        printf("2 - No, it's nice outside..\n\n");
                        scanf("%d",&choice);
                        break;

                    default:
                        break;
                }

                printf("Yuri asked Victor if everything is okay. Victor did not respond and just stared blankly at them.\nYuri is concerned and is beginning to get worried.\n");
                printf("\nYuri: Victor?? Why are you staring at us like that?\n");
                printf("The lights on floor B3 begin to flicker.\n");
                printf("Yuri and you started to panic and began to run towards the elevator.\n");
                printf("Victor ran after the both of them with hatred in his eyes.\n You two made it to the elevator and must make a decision.\n\n");
                printf("\nDo you want to run away to B4?\n");
                printf("1 - Go to B4 ASAP!\n");
                printf("2 - Help a scary Victor??\n\n");
                scanf("%d",&choice);
                        switch (choice) {
                            case 1:
                                printf("You two got in the elevator and head to B4.\n");
                                printf("Press 1 to continue.\n\n");
                                scanf("%d",&choice);
                                while(choice != 1) {
                                    printf("Oops! Try Again!\n\n");
                                    scanf("%d", &choice);
                                }
                                    currentLevel = 4;
                                    printf("\n*****\n");
                                break;

                            case 2:
                                printf("Victor is running at them with haste, they both get in the elevator to prevent themselves from getting hurt.\n");
                                printf("Press 1 to continue.\n\n");
                                scanf("%d",&choice);
                                while(choice != 1) {
                                    printf("Try Again!\n\n");
                                    scanf("%d", &choice);
                                }
                                currentLevel = 4;
                                printf("\n*****\n");
                                break;

                            default:
                                break;
                        }
                    } //End cureentLevel 3

//B4 - sunburst Cafe
                    while (currentLevel == 4) {
                    printf("\n\n\nB4 - S U N B U R S T   C A F E\n\n\n");
                    printf("\nSomeone was shouting and the shouting was slowly increasing in volume..\n");
                    printf("\nYuri: %s! Wake up! Are you okay??\n",name);
                    printf("\nYou opened your eyes and was once again disoriented.\nYou saw Victor hovering over you at a cafeteria table and did not know why or how he got there.\n");
                    printf("\n%s: Wha.. what happened? Where are we? How did we get here?\n",name);
                    printf("\nYuri: You fainted again.. do you not remember anything? We're at Sunburst Cafe. I figured it would be a good idea to get you something to eat.\n");
                    printf("\n%s: Wait what happened to Victor? I'm so lost..\n",name);
                    printf("\nYuri: Who are you talking about? Who is Victor?\n");
                    printf("\n%s is now even more confused than he was when he woke up. Was he dreaming again?\n",name);
                    printf("\nYuri went to grab them both some food, telling you that no need to worry about the poisionong here in the cafe.\nYou were still trying to figure out what was going on.\n Is Dimo even real? Is Dolly a real person?\nYou were beyond confused and ready to wake up from your nightmare.\n");
                    printf("Yuri came back with the food and asked you if you were ready to continue to look for Dolly.\n");
                    printf("%s: I'm glad that you asked because it has been bothering me that we have not been able to find more information on this Dolly person.\n",name);
                    printf("\nYuri: I think we need to head towards the Library to see if anyone there can help us.\n");
                    printf("\nWant to go to the Library to find more information?\n");
                    printf("1 - Yes of course!\n");
                    printf("2 - No, I would like to stay and finish my food.\n\n");
                    scanf("%d", &choice);
                    switch (choice) {
                        case 1:
                            printf("Let's get rolling then!\n");
                            printf("Press 1 to continue\n\n");
                            scanf("%d",&choice);
                            while(choice != 1) {
                                printf("Try again!\n\n");
                                scanf("%d",&choice);
                            }
                            break;

                        case 2:
                            printf("Yuri: Well hurry up and eat so we can go.\n");
                            printf("Press 1 to continue\n\n");
                            scanf("%d",&choice);
                            while(choice != 1) {
                                printf("Try again!\n\n");
                                scanf("%d",&choice);
                            }
                            break;

                        default:
                            break;
                    }
                    currentLevel = 5;
                    printf("\n*****\n");
                } //end currentLevel 4

// B5 Library
    while(currentLevel == 5) {
        printf("\n\n\nB5 - L I B R A R Y\n\n\n");
        printf("You and Yuri thought this was an illusion.\nIn front of you was the most beautiful floors among all.\n It was a enormous library decorated with limestone exterior which made this place even looked like a European royal palace\nThere were series of frescoes brought from Europe which depicted the beauty of the liberal arts.\nThis place was the music to their eyes and the classical music which was turned-on was the music to their ears.\nSmell of flowers, the golden stairway, made this floor like a stairway to heaven.\n However,...\n\n");
        printf("There was no people is here, not even a single human-being\n\n");
        printf("Yuri: %s, let's go up the stairs\n", name);
        printf("You two went up the stairs Yuri picked up some interesting books from the shelf. Books founded include: 'How to fake a smile like a pro', 'How not to be caught by police' or 'Cheating made Easy'\nOkay, who in the world would read these kind of trash books\n Well, I think I do... You thought to yourself\n");
        printf("%s: don't forget that we are looking for Maxim's file!\n", name);
        printf("Yuri: I know, I know! Just Shh!\n\n");

        printf("Yuri and you reached the top floor and their were two ways, Which direction would you go?\n");
        printf("1 - Go left because no one was there\n");
        printf("2 - Go right because there was a nerdy librarian working, you can asked for assistance\n\n");
        scanf("%d", &choice);

        while (choice == 1) {
            printf("\nYou spent many hours here, but there is nothing to be found!\n");
            printf("Yuri: Didn't I just tell you to go right?\n");
            printf("1 - Go left because no one was there\n");
            printf("2 - Go right because there was a nerdy librarian working, you can asked for assistance\n\n");
            scanf("%d", &choice);
        }

        printf("\n\n%s: We are interested in learning Human Anatomy, could you please take us to this section?\n", name);
        printf("The nerdy librarian moved his rounded glasses and smile as if no lies can be hidden from him.\nHe did not reply but silently led them to the section.\n");
        printf("Librarian: Here is the Human Anatomy section sir. Everything is set up alphabetically, enjoy reading.\n");
        printf("As the young librarian is gone, Yuri and you started to find the next clue as soon as possible.\n Hours after hours, you two haven't found anything until Yuri accudentally hit his head so hard on the wall, then you heard the door open from behind him\n");
        printf("%s: Yuri, look at that!\n\n", name);
        
        printf("Press 1 to continue!\n\n");
        scanf("%d", &choice);
        while(choice != 1 && choice != 2) {
            printf("Try again! Please press 1 to continue\n\n");
            scanf("%d", &choice);
        }
        
        printf("\nYuri: Isn't this a secret door or something? let's search for it!\n");
        printf("You two went inside that small door on the wall without noticing someone's eyes were looking at you from far away.\n");
        printf("Yuri: Even the secret door is still gorgeous!\n");
        printf("%s: Let's search for the clue!\n", name);
        printf("Dimo: %s! %s! Listen to me!\n", name, name);
        printf("%s: What is it now?\n", name);
        printf("Dimo: Grab that grey folder from the last shelf next to the portrait. See the French portrait there? The blonde lady in black\n");
        printf("%s: Yes.. okay... Blonde portrait... I found it!\n", name);
        printf("You grabbed the file and open it.\n\n Maxim's Cases\n\n");
        printf("%s: I will open it now.\n", name);
        printf("Many pages filled with patients case, every bit of information were in here. This was his secret.\nBut then, you found that the middle page was torn out but still could see the name 'Dimo'and '2'");
        printf("Yuri: Does the missing page include another code? What do you think?\n");
        printf("%s: Very possible, but how do we find it?", name);
        printf("Dimo: Listen to me. Go to the B6 floor right now, in Maxim's office.\nEverything will be revealed soon.\n");
        printf("%s: Why should we believe you? What is your real purpose?\n", name);
        printf("Dimo: If you want to be free, believe me.\n\n");

        printf("Will you believe Dimo?\n");
        printf("1 - Yes\n");
        printf("2 - No\n\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYou too walked out for the secret room slowly and silently but was founded by the nerdy librarian. Behind him were tons of patients which looked 'inhuman'\n");
                printf("Librarian: Catch them!\n");
                printf("Those inhuman creatures suddenly attacked Yuri and you who were running to the elevator.\nAs you reached the elevator and luckily, it was there waiting for you.\n You two hurriedly jump into the elevator and press closed, couple or hands reached to grab you.\nSo you...?\n");
                printf("1 - Shoot their hands\n");
                printf("2 - Don't shoot\n\n");
                scanf("%d", &choice);
                if (choice == 2) {
                    printf("\nThey reached Yuri and took him out of the elevator, and then they did the same to you. You couldn't see anything but darkness and the smell of blood\n");
                    currentLevel = -1;
                } else {
                    printf("\nYou two heard the scream of pain and rushed out of the area asap.\n\n ESCAPE SUCCESS!\n");
                    currentLevel = 6;
                    memory = 2;
                    clue = 3;
                 printf("\n*****\n");
                }
                break;


            case 2:
                printf("\nYou two staying in the secret room, looking for more evidence but now Maxim, the owner of the file is smiling right behind you.\nGuess he already read that 'How to Fake a Smile like a Pro' book. Pointing a gun at you two/n");
                printf("Maxim: There is no second chance for someone who know too much of everything");
                printf("You are now trapped in the darkness, no chance to escape f o r e v e r.\n");
                printf("GAME OVER\n");
                currentLevel = -1;
            default:
                break;
        }

    } // End currentLevel 5

//B6 - Prison
    while (currentLevel == 6) {
    printf("\n\n\nB6 - P R I S O N\n\n\n");
    printf("You finally made it to B6! You are now standing in front of the elevator and felt surprised that everything here was completely in another dimension.\nIt was dirty, smelly, dimly lit, and full of cockroaches and rats.\n");
    printf("Yuri: Are you sure that Maxim's office is here?\n");
    printf("%s: Well, we've come this far so let's find it real quick\n", name);
    printf("You, along with Yuri, followed the path until you see the dead end. In front of you were intersection, there were 2 paths to choose, would you go to...?\n");
    printf("1 - Maxim's Office\n");
    printf("2 - Prison Cells\n\n");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) {
        currentLevel = 6;
    } else if (choice == 1) {
            printf("\nYuri: There it is! Maxim's office!\n");
            printf("%s: Let's go inside, Yuri!\n", name);
            printf("\nThe two of you walked straight to the office but along the way were prison cells with 'prisoners' inside shouting, screaming, or whispering with the deepest of pain.\nIt was eerie everywhere in this floor.\nOnce you opened the door, the first thing you guys saw was the body of the woman lying on the white sheet\nShe still wore the lab coat which indicated that she was one of the scientist or doctor here.\nBut the question was that.. is she died or not?\nSo you two started to examine her body\n");
            printf("\nYuri: This is interesting! She was indeed a beautiful lady. Hmm?? Is this her card? Her name is... Lloyd..?\n");
            printf("\n%s: Wait! Did you just say that her name is Lloyd\n?", name);
            printf("\nYou walked to Yuri, looked at her card closely. It was an ID card.\nIt showed her name, birthday, bloodtype, and the her home address.\nYou were about to speak but then you saw a neon yellow post-it behind her card.\n\nIt was written 'Safe password is what you have found at every floors'\n\nThis made you noticed the iron safe next to Maxim's table.\n");
            printf("\nYuri: Let see every clue we collected so far, %s\n", name);
            printf("\n%s: DY1213102 are what we have, also her picture inside this locket.\nBut what about the torn page from Maxim's file? Is there any clue here?\n", name);
            printf("%s: DY1213102 and her picture right here inside this locket... Hey, Yuri! Dolly and Lloyd are anagrams so DY is actually her, also 1213 is her birthday as shown here on this card.\nBut 102...There is no any 102 on this card.\n", name);
                    printf("You used this number to unlock the safe, but it didn't work even if you rearranged it.\n");
                    printf("Yuri: You know what? I think we missed one number. If the first four digits are mm/dd so the last two should be the same right?\n");
                    printf("%s: That makes sense too but how?\n", name);
                    printf("Yuri: Take out everything you have now! We are possibly missed something.\n");
                    printf("Which items contain the last code?\n\n");
                    printf("1 - Small note 'FINDDOLLY'\n");
                    printf("2 - Hairpin\n");
                    printf("3 - Torn paper 'Dimo' found in the secret room\n");
                    scanf("%d", &choice);
                
                    while (choice != 2) {
                        currentLevel = 6;
                        scanf("%d", &choice);
                    }

                    printf("Found the code! It was very faded so it was hard to see. It was number 4.\nNow it is time to combine the code.\n What is the correct format?\n\n");
                    printf("1 - DY12131024\n");
                    printf("2 - DY12130124\n");
                    printf("3 - DY12130214\n");
                    printf("4 - DY12130412\n");
                    scanf("%d", &choice);
                        while (choice != 3) {
                            currentLevel = 6;
                            scanf("%d", &choice);
                    }

                    printf("\nYou tried DY12130214 on the safe and \n\nDING\n\n The safe is unlocked! You saw the torn page of Maxim's file and the key card to get out to G floor. You two decided to leave.\n");
            clue = 4;
            memory = 3;

            printf("\nPress 1 to continue\n");
            scanf("%d", &choice);
                while(choice != 1) {
                    printf("You can't proceed!");
                    scanf("%d", &choice);
                }

            printf("\n\t\t -G Floor-\n\n");
            printf("Maxim: Hello my dear friend! Long time no see.. Did you have fun at my office?\nSo tell me, how's your trip in Sunburst?\n");
            printf("Maxim's underlings were arresting you and took Yuri to the other land where he could ever return.\nYou saw the body of your partner, your friend, your true friend.. dying in red... will you..?\n\n");
            printf("1 - Give up and let them arrest you\n");
            printf("2 - Go on rampage\n\n");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("\nYou were taken to the lowest part of the Sunburst Asylum and never be seen again forever\n");
                currentLevel = -1;
            } else if (choice == 2) {
                printf("\nBecause of your violent action and Maxim's staff were more than 6 people, his staff locked your body to the ground and Maxim shot you through the head... died at instant...\n");
                printf("End!\n");
                currentLevel = -1;
            } else {
                currentLevel = 6;
            }
            
    }  else if (choice == 2) {
            printf("\nThere was nothing.. nothing at all except prison and and sticky smell.\nBut for the sake of you and your partner, you walked pass those scream and shout along this block\n Suddenly, Yuri noticed someone at the last cell. His body was dirty but his eyes were sharp like a knife.\nAs you turned to greet him, you remembered that this was... Victor???.\nHow come he lived in here?\nThis time, he did not say anything, instead handed you a box.\n Will you:\n");
            printf("1 - Accept it\n");
            printf("2 - Denied\n\n");
            scanf("%d", &choice);
                if (choice == 2) {
                    scanf("%d",&choice);
                } else if (choice == 1) {
                    printf("\nVictor used his dirty index fingers pointing at the direction. Yuri and you followed the direction, said thank you before left him.\nYou found Maxim's office, but it was the other route than Block A.\nInside Maxim's office, you saw the safe, next to it was the body of the woman lying on the white sheet. Assuimg that she was a doctor as she was wearing a labcoat.\nOn her breast, there was an ID card (name Lloyd, birthday 12-13-1985, bloodtype B, address 675 Argen St, XXX) with a neon-yellow post it at the back of it, saying 'Safe password is what you have found at every floors'.\n ");
                    printf("Yuri: Let see every clues we collected so far, %s\n", name);
                    printf("%s: DY1213102 and her picture right here inside this locket... Hey, Yuri! Dolly and Lloyd are anagrams so DY is actually her, also 1213 is her birthday as shown here on this card.\nBut 102...There is no any 102 on this card.\n", name);
                    printf("You used this number to unlock the safe, but it didn't work even if you rearranged it.\n");
                    printf("Yuri: You know what? I think we missed one number. If the first four digits are mm/dd so the last two should be the same right?\n");
                    printf("%s: That makes sense too but how?\n", name);
                    printf("Yuri: Take out everything you have now! We are possibly missed something.\n");
                    printf("Which items contain the last code?\n\n");
                    printf("1 - Small note 'FINDDOLLY'\n");
                    printf("2 - Hairpin\n");
                    printf("3 - Torn paper 'Dimo' found in the secret room\n\n");
                    scanf("%d", &choice);
                }
                    while (choice != 2) {
                        currentLevel = 6;
                        scanf("%d", &choice);
                    }

                    printf("\nFound the code! It was very faded so it was hard to see. It was number 4.\nNow it is time to combine the code.\n What is the correct format?\n\n");
                    printf("1 - DY12131024\n");
                    printf("2 - DY12130124\n");
                    printf("3 - DY12130214\n");
                    printf("4 - DY12130412\n\n");
                    scanf("%d", &choice);
                        while (choice != 3) {
                            currentLevel = 6;
                            scanf("%d", &choice);
                    }

                    printf("\nYou tried DY12130214 on the safe and \n\nDING\n\n The safe is unlocked! You saw the torn page of Maxim's file and the key card to get out to G floor. You two decided to leave.\n");
            clue = 4;
            memory = 3;
             printf("Press 1 to continue\n");
             scanf("%d", &choice);
                 while(choice != 1) {
                     printf("You can't proceed!\n");
                     scanf("%d", &choice);//stuck here
                }

            printf("\n\n\n-G Floor\n\n\n");
            printf("Maxim: Hello my dear friend! Long time no see.. Did you have fun at my office?\nSo tell me, how's your trip in Sunburst?\n");
            printf("Before Maxim's underlings came to split you and Yuri apart, you presented: \n");
            printf("1 - Locket\n");
            printf("2 - Hairpin\n");
            printf("3 - Box given by the boy\n\n");
            scanf("%d", &choice);

            while (choice != 3) {
                printf("\nYou presented the wrong item. Maxim and his underlings were faster.\nYou and your partner were soon trapped in the eternal darkness.\n");
                currentLevel = -1;
                scanf("%d", &choice);
            }

            printf("\nAs soon as you presented that box, it opened and the light shined from it.\n");
            printf("\nMaxim:... Where did you get that box?\n");
                while (clue != 4 || memory != 3)  {
                    printf("\nLights gone. Nothing happened and you ended up in darkness\n");
                    currentLevel = -1;
                    scanf("%d", &choice);
                }
            printf("\nYou are now awake.\n\n Congratulations! You reached True Ending!\n");
            currentLevel = 7;
            
            printf("\n*****\n");
}
}//End currentLevel 6

//Epilogue
    while (currentLevel == 7) {
            printf("\n\n\nE P I L O G U E\n\n\n");
            printf("\nDimo came to Sunburst Asylum as he was a violent person.\nHe had a tragic past where he saw his abusive father abuse his own mother everyday to the point that she committed suicide. Dimo ended up killing his own father.\nNobody loved him until Dr. Lloyd was the psychiatrist who was in charge of Dimo's case. Lloyd became his first love but unfortunately, his love was rejected.\nHe killed Lloyd with his own hand on Valentine's Day.\nAfter that, his case was transfered to Maxim and he was sent to to B6 for good.\nMaxim is actually a good person. He takes care his patients very well and devote his energy to make his patient mentally happy.\n\nYuri was the new case, because his case was not considered as severe, just a normal stressful person.\n\nThere was only once that Yuri had a conversation Dimo.\n");
            printf("\n\nNow, who is Dimo?\n\n");
            printf("If you want to know the truth, what is the last digit of Lloyd's birthday (MM/DD) ?\n\n");
            scanf("%d", &choice);
            
            if (choice == 4) {
                currentLevel = 8;
            } else {
                printf("Wrong Day! Try again\n");
                scanf("%d",&choice);
            }
        } //End currentLevel 7
            
    while (currentLevel == 8) {
                printf("\n\n%s\n\n", name);
                printf("Madness is %s creation.\n\n", name);
                printf("Thank you for playing DOLLY\n\n");
        break;
            }
        }
    }
}//main function bracket

void help() {
    printf("\n\t\tDolly: Rules\n");
    printf("\n\t\t------------------\n");
    printf("This is a Novel Escape Game.\nYou need to make a choice decision, as well as get items (clues, memories).\nEach choice you make will determine the chance of finding items, also the ending of the story.\nNote that this game have many endings called 'Multi-Endings'\nDepend on your choices and items you used.\n The story will have branches.\n");
}

