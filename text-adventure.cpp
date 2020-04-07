/*
 * File:   text-adventure.cpp
 * Author: goiri
 *
 * Created on March 30, 2020, 4:04 PM
 */

#include <cstdlib>
#include <iostream>
#include <time.h>

 /*
  *
  */
int main(int argc, char** argv) {

    char input;
    bool flag1 = false, flag2 = false;
    int diceRoll, count = 5;

    srand(time(NULL));

    //  Story setup:
    //  The player is an adventurer, whose family was just slain and is on a quest to seek vengeance.
    //  Intro:
    //  (Dream sequence) In a haze, a menacing hulk of a man with a large scar over his right eye stands over the player and laughs.
    //  He then spits on the player before turning around and leaving.
    //  The player begins by returning to consciousness in the wreckage of his family's farm.
    //  He observes a trail of carnage along the road north, clearly where the bandits headed.

    // This shit actually works! validates the user input, requiring that an <Enter> key is pressed to continue:
    std::cout << "Welcome to your adventure!\n";
    while (flag1 == false) {
        std::cout << "Please press <Enter> to continue: ";
        std::cin.get(input);
        if (input != '\n')
            std::cin.ignore(80, '\n');
        else
            flag1 = true;
    }

    std::cout << "\n\n";
    std::cout << "(Dream sequence) In a haze, a menacing hulk of a man with a large scar over his right eye stands over the player and laughs.\n";
    std::cout << "He then spits on the player before turning around and leaving.\n";
    std::cout << "The player begins by returning to consciousness in the wreckage of his family's farm.\n";
    std::cout << "He observes a trail of carnage along the road north, clearly where the bandits headed.\n";

    std::cout << "What shall you do next?\n";

    std::cout << "1)    Pursue the bandit onhorse, taking along a mace.\n";
    std::cout << "2)    Remain and search the property for your family members.\n";
    // Validate input:
    do {
        std::cout << "Choice:   ";
        std::cin >> input;
    } while (input != 2 && input != 1);
    if (input == 1) {

        //  Branching point 1-1:
        //      The player can choose to pursue the bandit by taking a horse and mace, and following the road north.
        //      The player comes upon caravan wreckage with an injured woman.

        std::cout << "The player comes upon caravan wreckage with an injured woman.\n";

        std::cout << "What shall you do next?\n";

        std::cout << "1)    Stop and attempt to help the woman, and see if she can provide any useful information regarding the bandits\n";
        std::cout << "2)    Ignore the caravan wreckage and continue pursuing the bandit brigade.\n";
        // Validate input:
        do {
            std::cout << "Choice:   ";
            std::cin >> input;
        } while (input != 2 && input != 1);
        if (input == 1) {

            //  Branching point 1-1-1:
            //      The player can choose to stop and attempt to help the woman, and see if she can provide any useful info regarding the bandits.
            //      The woman is bleeding heavily from the upper thigh, but the player is able to fashion a tourniquet and stem the hemorrhaging.
            //      The woman tells the player that she was attacked by a large man with a scar over one of his eyes. He was leading some other men,
            //      and mentioned how what he did to her caravan will pale in comparison to what will become of Villagedale. The player notes that 
            //      Villagedale is a nearby town, and can be reached quickly via a thick wooded offshoot slightly to the south. The player thanks the woman,
            //      mounts his horse, and takes off for Villagedale.
            //      - TO BE CONTINUED ... -

            std::cout << "The woman is bleeding heavily from the upper thigh, but the player is able to fashion a tourniquet and stem the hemorrhaging.\n";
            std::cout << "The woman tells the player that she was attacked by a large man with a scar over one of his eyes.He was leading some other men,\n";
            std::cout << "and mentioned how what he did to her caravan will pale in comparison to what will become of Villagedale.The player notes that\n";
            std::cout << "Villagedale is a nearby town, and can be reached quickly via a thick wooded offshoot slightly to the south.The player thanks the woman,\n";
            std::cout << "mounts his horse, and takes off for Villagedale.\n";
            std::cout << "- TO BE CONTINUED ... -\n";
        }
        else if (input == 2) {

            //  Branching point 1-1-2:
            //      The player can alternatively ignore the caravan wreckage and continue pursuing the bandit brigade.                    
            //      The player presses his horse ever harder, until he hits a roadblock of fiery wreckage. 
            //      Standing in front of the wreckage, weapons at their sides, is a group of four thugs. However, the man with the scar is nowhere to be seen.

            std::cout << "The player presses his horse ever harder, until he hits a roadblock of fiery wreckage.\n";
            std::cout << "Standing in front of the wreckage, weapons at their sides, is a group of four thugs. However, the man with the scar is nowhere to be seen.\n";

            std::cout << "What shall you do next?\n";

            std::cout << "1)    Confront the thugs head-on. The player charges his horse at a thug before leaping high into the air.\n";
            std::cout << "2)    Ride directly past the thugs and attempt to leap his horse over the wreckage.\n";
            // Validate input:
            do {
                std::cout << "Choice:   ";
                std::cin >> input;
            } while (input != 2 && input != 1);
            if (input == 1) {

                //  Branching point 1-1-2-1:
                //      The player can choose to confront the thugs head-on. The player charges his horse at a thug before leaping high into the air.
                //      The player brings his mace sweeping down on a stunned thug's skull before he can react, cavitating it.
                //      The remaining three thugs are punch-drunk and slow to react.
                //      The player is able to land a lethal cranial blow to one and an incapacitating stomach blow to another.
                //      The last thug has recovered though and faces the player. He appears more combat-experienced, with sure footing and form.

                std::cout << "The player charges his horse at a thug before leaping high into the air.\n";
                std::cout << "The player brings his mace sweeping down on a stunned thug's skull before he can react, cavitating it.\n";
                std::cout << "The remaining three thugs are punch - drunk and slow to react.\n";
                std::cout << "The player is able to land a lethal cranial blow to one and an incapacitating stomach blow to another.\n";
                std::cout << "The last thug has recovered though and faces the player. He appears more combat - experienced, with sure footing and form.\n";

                std::cout << "What shall you do next?\n";

                std::cout << "1)    Take on the thug in traditional combat.\n";
                std::cout << "2)    Keep your distance and search for something in the environment to give him the upper hand.\n";
                // Validate input:
                do {
                    std::cout << "Choice:   ";
                    std::cin >> input;
                } while (input != 2 && input != 1);
                if (input == 1) {

                    //  Branching point 1-1-2-1-1:
                    //      The player can choose to confront the thug in traditional combat. Having lost the element of surprise, and with no formal combat experience to speak of,
                    //      the player clumsily swings his mace in a high arc overhead as he unleashes a blood-curdling cry. The remaining thug chuckles, sidesteps the assault,
                    //      and drives his shortsword between the players lower ribs into his lung. The thug then pulls a small dagger and drives it into the player's neck.
                    //      - GAME OVER -

                    std::cout << "Having lost the element of surprise, and with no formal combat experience to speak of,\n";
                    std::cout << "the player clumsily swings his mace in a high arc overhead as he unleashes a blood - curdling cry.The remaining thug chuckles, sidesteps the assault,\n";
                    std::cout << "and drives his shortsword between the players lower ribs into his lung.The thug then pulls a small daggerand drives it into the player's neck.\n";
                    std::cout << "- GAME OVER -\n";
                }
                else if (input == 2) {

                    //  Branching point 1-1-2-1-2:
                    //      The player can keep his distance and search for something in the environment to give him the upper hand.
                    //	    As the bandit begins to approach, the player frantically searches for something to give him the upper hand:

                    std::cout << "As the bandit begins to approach, the player frantically searches for something to give him the upper hand:\n";

                    //  Randomized user choice point: (random dice roll, but when a choice is selected it should be removed from the pool of choices. If a choice does not end the game, 
                    //  another choice should be offered to the player)

                    do {
                        diceRoll = rand() % count + 1;
                        switch (diceRoll) {
                        case 1:
                            std::cout << "The player notes a small, anachronistic flintlock pistol lying next to a dead thug some distance from the remaining, breathing thug.\n";
                            std::cout << "He engages in conversation with the remaining thug as he subtly sidles over to the weapon. The thug falls for his ruse. He quickly picks up \n";
                            std::cout << "the gun and fires it center mass. The powerful sidearm punches a large, grisly hole through the thug and he falls to the ground.\n";

                            std::cout << "What shall you do next?\n";

                            std::cout << "1)    Push wreckage out of the way to clear a path for your horse.\n";
                            std::cout << "2)    Loot the dead bandits, looking for anything that may help determine the path of the lead bandit and perhaps intercept him.\n";
                            // Validate input:
                            do {
                                std::cout << "Choice:   ";
                                std::cin >> input;
                            } while (input != 2 && input != 1);
                            if (input == 1) {

                                //  Branching point 1-1-2-1-2-1:

                                std::cout << "The player hops his horse and continues pursuing the lead bandit, following the northern road in hopes that he'll come across \n";
                                std::cout << "further evidence of the bandit's intentions and direction.\n";
                                std::cout << "- TO BE CONTINUED ... -\N";
                            }
                            else if (input == 2) {
                                //  Branching point 1-1-2-1-2-2:   

                                std::cout << "The player finds a note on one of the bandits, conveniently outlining the lead bandit's intention to ransack and raze the nearby town of \n";
                                std::cout << "Villagedale. The player clears some of the wreckage and mounts his horse. He heads along the northern road before veering onto a little-known \n";
                                std::cout << "side path that leads straight to Villagedale.\n";
                                std::cout << "- TO BE CONTINUED ... -\N";
                            }
                            flag2 = true; // loop should exit because the story has ended
                            break;
                        case 2:
                            std::cout << "The player grabs a small skull fragment lying near one of the dead bandits. He hurls it at the living bandit. The bandit moves with blinding speed, \n";
                            std::cout << "deflecting it directly back at the player.The skull fragment strikes the player's nose, breaking it and sending the player flailing onto the ground. \n";
                            std::cout << "The bandit saunters up to the player, smiles, and drives his shortsword into the player's heart.\n";
                            std::cout << "- GAME OVER -\n";
                            flag2 = true;
                            break;
                        // cases 3 through 5 will continue the story, and provide the player with a choice between continuing to search for an object on the ground or returning to branching point 1-1-2-1-1
                        case 3:
                            std::cout << "The player grabs a large brick and hurls it weakly at the bandit. It lands next to the bandit's shoe and he continues pursuing the player.\n";
                            break;
                        case 4:
                            std::cout << "The player grabs a shoe and beams the bandit in the face. Though annoyed, the bandit continues forward.\n";
                            break;
                        case 5:
                            std::cout << "The player grabs a bottle of wine and throws. The bandit catches the bottle, uncorks it, and takes a swig before tossing it aside and continuing forward.\n";
                            break;
                        }
                        count--;
                    } while (flag2 != true) // this flag should control loop exit on an invalid input, choice to return to branching point 1-1-2-1-1, or a random choice that ends the story



                    //         1)	The player notes a small, anachronistic flintlock pistol lying next to a dead thug some distance from the remaining, breathing thug.
                    //          	He engages in conversation with the remaining thug as he subtly sidles over to the weapon. The thug falls for his ruse. He quickly picks up the gun
                    //          	and fires it center mass. The powerful sidearm punches a large, grisly hole through the thug and he falls to the ground.
                    //          	Branching point 1-1-2-1-2-1:
                    //              	The player can choose to push wreckage out of the way to clear a path for his horse. He then hops on the horse and continues pursuing the lead bandit,
                    //              	following the northern road in hopes that he'll come across further evidence of the bandit's intentions and direction.
                    //              	- TO BE CONTINUED ... -
                    //          	Branching point 1-1-2-1-2-2:
                    //              	The player can loot the dead bandits, looking for anything that may help determine the path of the lead bandit and perhaps intercept him.
                    //              	The player finds a note on one of the bandits, conveniently outlining the lead bandit's intention to ransack and raze the nearby town of Villagedale.
                    //              	The player clears some of the wreckage and mounts his horse. He heads along the northern road before veering onto a little-know side path that leads
                    //              	straight to Villagedale.
                    //              	- TO BE CONTINUED ... -
                    //	    2)	The player grabs a small skull fragment lying near one of the dead bandits. He hurls it at the living bandit. The bandit moves with blinding speed, deflecting it
                    //				directly back at the player. The skull fragment strikes the player's nose, breaking it and sending the player flailing onto the ground. The bandit saunters up to
                    //				the player, smiles, and drives his shortsword into the player's heart.
                    //				- GAME OVER -
                    //		3)	The player grabs a large brick and hurls it weakly at the bandit. It lands next to the bandit's shoe and he continues pursuing the player.
                    //		4)	The player grabs a shoe and beams the bandit in the face. Though annoyed, the bandit continues forward.
                    //		5)	The player grabs a bottle of wind and throws. The bandit catches the bottle, uncorks it, and takes a swig before tossing it aside and continuing forward.
                }
                else if (input == 2) {

                    //  Branching point 1-1-2-2:
                    //      The player can choose to ride directly past the thugs and attempt to leap his horse over the wreckage. Unfortunately, the horse was a larger, less agile
                    //      variety, bred to carry wagons and farm tools much like an ox. The lumbering beast doesn't come close to clearing the wreckage, smashing directly into it and
                    //      sending the player flying over the other side. The player lands neck-first and dies instantly.
                    //      - GAME OVER -

                    std::cout << "The player can choose to ride directly past the thugs and attempt to leap his horse over the wreckage. Unfortunately, the horse was a larger, less agile\n";
                    std::cout << "variety, bred to carry wagonsand farm tools much like an ox.The lumbering beast doesn't come close to clearing the wreckage, smashing directly into it and\n";
                    std::cout << "sending the player flying over the other side.The player lands neck - first and dies instantly.\n";
                    std::cout << "- GAME OVER -\n";
                }
            }

            else if (input == 2) {

                //  He comes across his mortally wounded father, who reveals that the player comes from a long line of wizards and carries the power in his blood.
                //  In his dying breath, the player's father urges him to avenge the family and hunt down the man with the scar over his eye.
                //  Upon learning this information, the player feels a bolt of energy propagate through his body. The player knows immediately that this has unlocked
                //  his newfound wizard powers. He closes his eyes, and is able to determine the precise location of the lead bandit (whose name the player gleans is Olmir.
                //  The player focuses his newfound magical energy, and blinks into the exact location of Olmir. Olmir is evaporated on the spot, his remains erupting in a sonic boom
                //  around the player. Olmir's crushed bones act as shrapnel, shredding his band of faithful rogues into fine piles of pulp.
                //  The player has successfully avenged his family. He blinks back to his farm to resurrect his parents and siblings.
                //  - THE END - 

                std::cout << "He comes across his mortally wounded father, who reveals that the player comes from a long line of wizards and carries the power in his blood.\n";
                std::cout << "In his dying breath, the player's father urges him to avenge the family and hunt down the man with the scar over his eye.\n";
                std::cout << "Upon learning this information, the player feels a bolt of energy propagate through his body. The player knows immediately that this has unlocked\n";
                std::cout << "his newfound wizard powers. He closes his eyes, and is able to determine the precise location of the lead bandit (whose name the player gleans is Olmir.\n";
                std::cout << "The player focuses his newfound magical energy, and blinks into the exact location of Olmir.Olmir is evaporated on the sprot, his remains erupting in a sonic boom\n";
                std::cout << "around the player. Olmir's crushed bones act as shrapnel, shredding his band of faithful rogues into fine piles of pulp.\n";
                std::cout << "The player has successfully avenged his family.He blinks back to his farm to resurrect his parents and siblings.\n";
                std::cout << " - THE END - \n";
            }
            return 0;
        }