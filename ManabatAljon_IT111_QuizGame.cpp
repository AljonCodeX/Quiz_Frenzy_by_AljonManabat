/*ManabatAljon_BSIT-1C_FinalProject
Quiz Game with 3 Subjects to choose for, inside of that Subject there is also topic to choose.
Rules Option to let the user know what is the rules and Exit Option to Exit the Program.
All of the sytax i used is only Ma'am Memay taught us in Introduction to coding in C++ (IT-111)*/
#include <iostream>
using namespace std;

int main() {
    int x, i, choice, lives, subject, topic1, topic2, topic3;
    char back, retry;
    char ans1e1, ans2e1, ans3e1, ans4e1, ans5e1, ans6e1, ans7e1, ans8e1, ans9e1, ans10e1;
    char ans1m1, ans2m1, ans3m1, ans4m1, ans5m1, ans6m1, ans7m1, ans8m1, ans9m1, ans10m1;
    char ans1h1, ans2h1, ans3h1, ans4h1, ans5h1, ans6h1, ans7h1, ans8h1, ans9h1, ans10h1;
    char ans1sC, ans2sC, ans3sC, ans4sC, ans5sC, ans6sC, ans7sC, ans8sC, ans9sC, ans10sC;
    char ans1sP, ans2sP, ans3sP, ans4sP, ans5sP, ans6sP, ans7sP, ans8sP, ans9sP, ans10sP;
    char ans1mA, ans2mA, ans3mA, ans4mA, ans5mA, ans6mA, ans7mA, ans8mA, ans9mA, ans10mA;
    char ans1mC, ans2mC, ans3mC, ans4mC, ans5mC, ans6mC, ans7mC, ans8mC, ans9mC, ans10mC;
    char ans1mS, ans2mS, ans3mS, ans4mS, ans5mS, ans6mS, ans7mS, ans8mS, ans9mS, ans10mS;
    
    do {
        cout << "Welcome to Quiz Frenzy! by Aljon Manabat." << endl;
        cout << "1. Play the Game" << endl;
        cout << "2. View Rules" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 2) {
            do {
                cout << "\nRules: You have 3 lives. Answer the questions correctly to win." << endl;
                cout << "If you lose all your lives, you can try again." << endl;
                cout << "Enter (B) to go back to the main menu: ";
                cin >> back;
            } while (back != 'b' && back != 'B');
        } else if (choice == 1) {
            do {
                lives = 3;
                x = 0;

                cout << "\nChoose a subject:" << endl;
                cout << "1. Technology" << endl;
                cout << "2. Science" << endl;
                cout << "3. Mathematics" << endl;
                cout << "Enter your choice: ";
                cin >> subject;

                if (subject == 1) {
                    cout << "\nPick a topic:" << endl;
                cout << "1. IT111" << endl;
                cout << "2. IT110" << endl;
                cout << "Enter your choice: ";
                cin >> topic1;
                if (topic1 == 1){
                    cout << "\nIT111 Quiz" << endl;

        for (i = 1; i < 11 && lives > 0; i++) {
                if (i == 1) {
        cout << "1.) What is the primary purpose of a programming loop?" << endl;
        cout << "a. To repeat a block of code multiple times"<<endl;
        cout << "b. To make decisions in the program" << endl;
        cout << "c. To declare variables" << endl;
        cout << "d. To stop the program" << endl;
        cout << "Enter your answer: ";
        cin >> ans1e1;
                if (ans1e1 == 'a' || ans1e1 == 'A') {
         cout << "Correct!" << endl << endl;
         x++;
        } else {
         lives--;
        cout << "Incorrect! Lives remaining: " << lives << endl << endl;
        }
        } else if (i == 2) {
        cout << "2.) What is the role of an if statement in programming?" << endl;
        cout << "a. To repeat code" << endl;
        cout << "b. To check a condition and execute code if true" << endl;
        cout << "c. To define a variable" << endl;
        cout << "d. To terminate a program" << endl;
        cout << "Enter your answer: ";
        cin >> ans2e1;

                if (ans2e1 == 'b' || ans2e1 == 'B') {
        cout << "Correct!" << endl << endl;
         x++;
        } else {
         lives--;
         cout << "Incorrect! Lives remaining: " << lives << endl << endl;
        }
        }
        else if (i == 3) {
        cout << "3.) What happens if the condition in an if statement is false?" << endl;
        cout << "a. The program crashes." << endl;
        cout << "b. The code inside the if block is skipped." << endl;
        cout << "c. The program stops immediately." << endl;
        cout << "d. The code inside the if block is still executed." << endl;
        cout << "Enter your answer: ";
        cin >> ans3e1;

        if (ans3e1 == 'b' || ans3e1 == 'B') {
        cout << "Correct!" << endl << endl;
        x++;
        } else {
        lives--;
        cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        }
                        else if (i == 4) {
                        cout << "4.) What is the purpose of a for loop?" << endl;
                        cout << "a. To check conditions and execute code based on them" << endl;
                        cout << "b. To execute code a specific number of times" << endl;
                        cout << "c. To stop the program after a condition is met" << endl;
                        cout << "d. To randomly execute code" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans4e1;

                        if (ans4e1 == 'b' || ans4e1 == 'B') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 5) {
                        cout << "5.) Which type of loop will always execute at least once, regardless of the condition?" << endl;
                        cout << "a. A loop that checks the condition before running" << endl;
                        cout << "b. A loop that checks the condition after running" << endl;
                        cout << "c. A loop that runs indefinitely" << endl;
                        cout << "d. None of the above" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans5e1;

                        if (ans5e1 == 'b' || ans5e1 == 'B') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                     else if (i == 6) {
                        cout << "6.) In C++, what is the purpose of the else part of an if-else statement?" << endl;
                        cout << "a.To check a different condition" << endl;
                        cout << "b. To loop through code" << endl;
                        cout << "c. To stop the program" << endl;
                        cout << "d. To execute code when the if condition is false" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans6e1;

                        if (ans6e1 == 'd' || ans6e1 == 'D') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 7) {
                        cout << "7.) What is a loop condition used for?" << endl;
                        cout << "a. To declare variables for the loop" << endl;
                        cout << "b. To check syntax errors in the loop" << endl;
                        cout << "c. To decide whether the loop should continue or stop" << endl;
                        cout << "d. To exit the program" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans7e1;

                        if (ans7e1 == 'c' || ans7e1 == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 8) {
                        cout << "8.) What is the syntax for not ?" << endl;
                        cout << "a. !" << endl;
                        cout << "b. <not>" << endl;
                        cout << "c. ?" << endl;
                        cout << "d. #" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans8e1;

                        if (ans8e1 == 'a' || ans8e1 == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 9) {
                        cout << "9.) What or ||  used for?" << endl;
                        cout << "a. Nothing" << endl;
                        cout << "b. To equal" << endl;
                        cout << "c. If there is atleast one TRUE the answer is still TRUE" << endl;
                        cout << "d. None of the above" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans9e1;

                        if (ans9e1 == 'c' || ans9e1 == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                      else if (i == 10) {
                        cout << "10.) What happens when a loops condition is never met?"<< endl;
                        cout << "a. The loop runs once and then stops."<< endl;
                        cout << "b. The loop is skipped entirely." << endl;
                        cout << "c. The loop runs indefinitely" << endl;
                        cout << "d. The program stops with an error." << endl;
                        cout << "Enter your answer: ";
                        cin >> ans10e1;

                        if (ans10e1 == 'b' || ans10e1 == 'B') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    }

                    cout << "Quiz Over! Your score is: " << x << "/10." << endl;
                } 
                else if (topic1 == 2) {
                    cout << "\nIT110 Quiz" << endl;

                    for (i = 1; i < 11 && lives > 0; i++) {
                        if (i == 1) {
                            cout << "1.) Who is known as the Father of the Computer?" << endl;
                            cout << "a. Alan Turing" << endl;
                            cout << "b. Blaise Pascal" << endl;
                            cout << "c. Charles Babbage" << endl;
                            cout << "d. John von Neumann " << endl;
                            cout << "Enter your answer: ";
                            cin >> ans1m1;

                            if (ans1m1 == 'c' || ans1m1 == 'C') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        } else if (i == 2) {
                            cout << "2.) What number system is primarily used by computers to perform calculations?" << endl;
                            cout << "a. Decimal" << endl;
                            cout << "b. Binary" << endl;
                            cout << "c. Octal" << endl;
                            cout << "d. Hexadecimal" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans2m1;

                            if (ans2m1 == 'b' || ans2m1 == 'B') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        }
                        else if (i == 3) {
                        cout << "3.) Which of the following is an early mechanical device used for computations?" << endl;
                            cout << "a. ENIAC" << endl;
                            cout << "b. Altair 8800 " << endl;
                            cout << "c. Macintosh" << endl;
                            cout << "d. Abacus" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans3m1;

                            if (ans3m1 == 'd' || ans3m1 == 'D') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        }
                        else if (i == 4) {
                        cout << "4.) What is the default file extension for a Microsoft Word document in modern versions?" << endl;
                        cout << "a. .doc" << endl;
                        cout << "b. .txt" << endl;
                        cout << "c. .docx " << endl;
                        cout << "d. .pdf  " << endl;
                        cout << "Enter your answer: ";
                        cin >> ans4m1;

                        if (ans4m1 == 'c' || ans4m1 == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 5) {
                        cout << "5.) In Microsoft Excel, what is the purpose of the formula `=SUM(A1:A10)`?" << endl;
                        cout << "a. To count the number of cells from A1 to A10" << endl;
                        cout << "b. To add up the values in cells A1 through A10" << endl;
                        cout << "c. To find the largest value in A1 through A10" << endl;
                        cout << "d. To display the average of the values in A1 through A10 " << endl;
                        cout << "Enter your answer: ";
                        cin >> ans5m1;

                        if (ans5m1 == 'b' || ans5m1 == 'B') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                     else if (i == 6) {
                        cout << "6.) Which of the following is an example of an operating system?" << endl;
                        cout << "a. Linux" << endl;
                        cout << "b. Microsoft Word" << endl;
                        cout << "c. C++" << endl;
                        cout << "d. Excel" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans6m1;

                        if (ans6m1 == 'a' || ans6m1 == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 7) {
                        cout << "7.) What was the name of the first widely used personal computer introduced in 1981?" << endl;
                        cout << "a. IBM PC" << endl;
                        cout << "b. Altair 8800" << endl;
                        cout << "c. Commodore 64" << endl;
                        cout << "d. Macintosh" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans7m1;

                        if (ans7m1 == 'a' || ans7m1 == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 8) {
                        cout << "8.) What does Ctrl + S do in most Microsoft Office programs?" << endl;
                        cout << "a. Opens a new document" << endl;
                        cout << "b. Deletes the current document" << endl;
                       cout << "c. Copies the document to the clipboard" << endl;
                        cout << "d. Saves the current document" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans8m1;

                        if (ans8m1 == 'd' || ans8m1 == 'D') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 9) {
                        cout << "9.) In Excel, what type of chart is best for comparing parts of a whole?" << endl;
                        cout << "a. Line Chart" << endl;
                        cout << "b. Bar Chartr" << endl;
                        cout << "c. Pie Chart" << endl;
                        cout << "d. Scatter Plot" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans9m1;

                        if (ans9m1 == 'c' || ans9m1 == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                      else if (i == 10) {
                        cout << "10.) Which of the following best describes an operating system?" << endl;
                        cout << "a. A database management tool"<< endl;
                        cout << "b. A program used to browse the internet" << endl;
                        cout << "c. A document editor" << endl;
                        cout << "d. A set of programs that manage computer hardware and software resources" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans10m1;

                        if (ans10m1 == 'd' || ans10m1 == 'D') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    }

                    cout << "Quiz Over! Your score is: " << x << "/10." << endl;
                }
                }
                else if (subject == 2) {
                    cout << "\nPick a topic:" << endl;
                cout << "1. Biology" << endl;
                cout << "2. Chemistry" << endl;
                cout << "3. Physics" << endl;
                cout << "Enter your choice: ";
                cin >> topic2;
                if (topic2 == 1){
                    cout << "\nScience (Biology) Quiz" << endl;

                    for (i = 1; i < 11 && lives > 0; i++) {
                        if (i == 1) {
                            cout << "1.) What is the basic unit of life in all living organisms?" << endl;
                            cout << "a. Atom" << endl;
                            cout << "b. Tissue" << endl;
                            cout << "c. Cell" << endl;
                            cout << "d. Molecule" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans1h1;

                            if (ans1h1 == 'c' || ans1h1 == 'C') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        } else if (i == 2) {
                            cout << "2.) Which organelle is known as the powerhouse of the cell?" << endl;
                            cout << "a. Nucleus" << endl;
                            cout << "b. Ribosome" << endl;
                            cout << "c. Golgi apparatus" << endl;
                            cout << "d. Mitochondria" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans2h1;

                            if (ans2h1 == 'd' || ans2h1 == 'D') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        }
                        else if (i == 3) {
                            cout << "3.) What is the process by which plants make their food using sunlight?" << endl;
                            cout << "a. Respiration" << endl;
                            cout << "b. Fermentation" << endl;
                            cout << "c. Photosynthesis" << endl;
                            cout << "d. Digestion" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans3h1;

                            if (ans3h1 == 'c' || ans3h1 == 'C') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        }
                        else if (i == 4) {
                        cout << "4.) Which of the following is a characteristic of prokaryotic cells?" << endl;
                        cout << "a. They have a nucleus." << endl;
                    cout << "b. They lack membrane-bound organelles." << endl;
                        cout << "c. They are always multicellular." << endl;
                        cout << "d. They contain chloroplasts." << endl;
                        cout << "Enter your answer: ";
                        cin >> ans4h1;

                        if (ans4h1 == 'b' || ans4h1 == 'B') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 5) {
                        cout << "5.) What is the primary function of red blood cells in the human body?" << endl;
                        cout << "a. To carry oxygen" << endl;
                        cout << "b. To fight infections" << endl;
                        cout << "c. To transport hormones" << endl;
                        cout << "d. To digest food" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans5h1;

                        if (ans5h1 == 'a' || ans5h1 == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                     else if (i == 6) {
                        cout << "6.) Which type of macromolecule is responsible for storing genetic information?" << endl;
                        cout << "a. Protein" << endl;
                        cout << "b. Lipid" << endl;
                        cout << "c. Nucleic acid" << endl;
                        cout << "d. Carbohydrate" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans6h1;

                        if (ans6h1 == 'c' || ans6h1 == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 7) {
                        cout << "7.) What is the term for animals that maintain a constant body temperature?" << endl;
                        cout << "a. Ectothermic" << endl;
                        cout << "b. Endothermic" << endl;
                        cout << "c. Heterotrophic" << endl;
                        cout << "d. Autotrophic" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans7h1;

                        if (ans7h1 == 'b' || ans7h1 == 'B') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 8) {
                        cout << "8.) In the food chain, which organisms are typically at the top of the pyramid?" << endl;
                        cout << "a. Primary consumers" << endl;
                        cout << "b. Producers" << endl;
                        cout << "c. Apex predators" << endl;
                        cout << "d. Decomposers" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans8h1;

                        if (ans8h1 == 'c' || ans8h1 == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 9) {
                        cout << "9.) What is the largest organ in the human body?" << endl;
                        cout << "a. Skin" << endl;
                        cout << "b. Heart" << endl;
                        cout << "c. Liver" << endl;
                        cout << "d. Brain" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans9h1;

                        if (ans9h1 == 'a' || ans9h1 == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                      else if (i == 10) {
                        cout << "10.) Which biome is characterized by very low temperatures and permafrost?" << endl;
                        cout << "a. Tundra"<< endl;
                        cout << "b. Desert" << endl;
                        cout << "c. Tropical rainforest" << endl;
                        cout << "d. Savanna" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans10h1;

                        if (ans10h1 == 'a' || ans10h1 == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    }

                    cout << "Quiz Over! Your score is: " << x << "/10." << endl;
                }
                else if (topic2 == 2){
                    cout << "\nScience (Chemistry) Quiz" << endl;

                    for (i = 1; i < 11 && lives > 0; i++) {
                        if (i == 1) {
                            cout << "1.) What is the smallest unit of an element that retains its properties?" << endl;
                            cout << "a. Molecule" << endl;
                            cout << "b. Electron" << endl;
                            cout << "c. Proton" << endl;
                            cout << "d. Atom" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans1sC;

                            if (ans1sC == 'd' || ans1sC == 'D') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        } else if (i == 2) {
                            cout << "2.) Which subatomic particle has a negative charge?" << endl;
                            cout << "a. Proton" << endl;
                            cout << "b. Neutron" << endl;
                            cout << "c. Electron" << endl;
                            cout << "d. Nucleus" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans2sC;

                            if (ans2sC == 'c' || ans2sC == 'C') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        }
                        else if (i == 3) {
                            cout << "3.) What is the chemical symbol for gold?" << endl;
                            cout << "a. Ag" << endl;
                            cout << "b. Au" << endl;
                            cout << "c. Gd" << endl;
                            cout << "d. Ga" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans3sC;

                            if (ans3sC == 'b' || ans3sC == 'B') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        }
                        else if (i == 4) {
                        cout << "4.) What is the pH of a neutral solution, such as pure water?" << endl;
                        cout << "a. 10" << endl;
                        cout << "b. 14" << endl;
                        cout << "c. 0" << endl;
                        cout << "d. 7" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans4sC;

                        if (ans4sC == 'd' || ans4sC == 'D') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 5) {
                        cout << "5.) What type of bond is formed when electrons are shared between atoms?" << endl;
                        cout << "a. Covalent bond" << endl;
                        cout << "b. Ionic bond" << endl;
                        cout << "c. Hydrogen bond" << endl;
                        cout << "d. Metallic bond" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans5sC;

                        if (ans5sC == 'a' || ans5sC == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                     else if (i == 6) {
                        cout << "6.) Which gas is most abundant in Earth atmosphere?" << endl;
                        cout << "a. Oxygen" << endl;
                        cout << "b. Carbon dioxide" << endl;
                        cout << "c. Hydrogen" << endl;
                        cout << "d. Nitrogen" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans6sC;

                        if (ans6sC == 'd' || ans6sC == 'D') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 7) {
                        cout << "7.) What is the term for the amount of matter in an object?" << endl;
                        cout << "a. Density" << endl;
                        cout << "b. Mass" << endl;
                        cout << "c. Weight" << endl;
                        cout << "d. Volume" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans7sC;

                        if (ans7sC == 'b' || ans7sC == 'B') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 8) {
                        cout << "8.) What is the name of the chemical process by which a solid changes directly into a gas?" << endl;
                        cout << "a. Evaporation" << endl;
                        cout << "b. Melting" << endl;
                        cout << "c. Condensation" << endl;
                        cout << "d. Sublimation" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans8sC;

                        if (ans8sC == 'd' || ans8sC == 'D') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 9) {
                        cout << "9.) What is the main component of table salt?" << endl;
                        cout << "a. Sodium chloride" << endl;
                        cout << "b. Potassium iodide" << endl;
                        cout << "c. Calcium carbonate" << endl;
                        cout << "d. Magnesium sulfate" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans9sC;

                        if (ans9sC == 'a' || ans9sC == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                      else if (i == 10) {
                        cout << "10.)Which of the following is a noble gas?" << endl;
                        cout << "a. Helium"<< endl;
                        cout << "b. Oxygen" << endl;
                        cout << "c. Nitrogen" << endl;
                        cout << "d. Hydrogen" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans10sC;

                        if (ans10sC == 'a' || ans10sC == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    }
                }
                   else if (topic2 == 3){
                    cout << "\nScience (Physics) Quiz" << endl;

                    for (i = 1; i < 11 && lives > 0; i++) {
                        if (i == 1) {
                            cout << "1.) What is the unit of force in the SI system?" << endl;
                            cout << "a. Joule" << endl;
                            cout << "b. Newton" << endl;
                            cout << "c. Pascal" << endl;
                            cout << "d. Watt" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans1sP;

                            if (ans1sP == 'b' || ans1sP == 'B') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        } else if (i == 2) {
                            cout << "2.) Which of the following is an example of potential energy?" << endl;
                            cout << "a. A moving car" << endl;
                            cout << "b. Flowing water" << endl;
                            cout << "c. A spinning wheel" << endl;
                            cout << "d. A stretched rubber band" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans2sP;

                            if (ans2sP == 'd' || ans2sP == 'D') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        }
                        else if (i == 3) {
                            cout << "3.) What is the speed of light in a vacuum?" << endl;
                            cout << "a. 300,000 km/s" << endl;
                            cout << "b. 150,000 km/s" << endl;
                            cout << "c. 300,000 m/s" << endl;
                            cout << "d. 150,000 m/s" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans3sP;

                            if (ans3sP == 'a' || ans3sP == 'A') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        }
                        else if (i == 4) {
                        cout << "4.) What does Newtons First Law of Motion state?" << endl;
                        cout << "a. Force equals mass times acceleration." << endl;
                        cout << "b. For every action, there is an equal and opposite reaction." << endl;
                        cout << "c. An object in motion stays in motion unless acted on by an external force." << endl;
                        cout << "d. The acceleration of an object depends on its mass and the force applied." << endl;
                        cout << "Enter your answer: ";
                        cin >> ans4sP;

                        if (ans4sP == 'c' || ans4sP == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 5) {
                        cout << "5.) What type of wave is sound?" << endl;
                        cout << "a. Electromagnetic wave" << endl;
                        cout << "b. Longitudinal wave" << endl;
                        cout << "c. Transverse wave" << endl;
                        cout << "d. Standing wave" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans5sP;

                        if (ans5sP == 'b' || ans5sP == 'B') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                     else if (i == 6) {
                        cout << "6.) What happens to the kinetic energy of an object when its speed is doubled?" << endl;
                        cout << "a. It remains the same." << endl;
                        cout << "b. It doubles." << endl;
                        cout << "c. It quadruples." << endl;
                        cout << "d. It is halved." << endl;
                        cout << "Enter your answer: ";
                        cin >> ans6sP;

                        if (ans6sP == 'c' || ans6sP == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 7) {
                        cout << "7.) Which of the following is NOT a fundamental force of nature?" << endl;
                        cout << "a. Gravity" << endl;
                        cout << "b. Electromagnetic force" << endl;
                        cout << "c. Frictional force" << endl;
                        cout << "d. Nuclear force" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans7sP;

                        if (ans7sP == 'c' || ans7sP == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 8) {
                        cout << "8.) What does the term work mean in physics?" << endl;
                        cout << "a. The transfer of energy through motion" << endl;
                        cout << "b. The force exerted on an object without motion" << endl;
                        cout << "c. The effort applied to a task" << endl;
                        cout << "d. The energy stored in a system" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans8sP;

                        if (ans8sP == 'a' || ans8sP == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 9) {
                        cout << "9.) What is the term for the bending of light as it passes from one medium to another?" << endl;
                        cout << "a. Reflection" << endl;
                        cout << "b. Refraction" << endl;
                        cout << "c. Diffraction" << endl;
                        cout << "d. Dispersion" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans9sP;

                        if (ans9sP == 'b' || ans9sP == 'B') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                      else if (i == 10) {
                        cout << "10.) What is the property of an object that resists changes in its motion?" << endl;
                        cout << "a. Velocity"<< endl;
                        cout << "b. Inertia" << endl;
                        cout << "c. Momentum" << endl;
                        cout << "d. Acceleration" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans10sP;

                        if (ans10sP == 'b' || ans10sP == 'B') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    }
                   }
                }
                    else if (subject == 3) {
                    cout << "\nPick a topic:" << endl;
                cout << "1. Algebra" << endl;
                cout << "2. Calculus" << endl;
                cout << "3. Statistic" << endl;
                cout << "Enter your choice: ";
                cin >> topic3;
                if (topic3 == 1){
                    cout << "\nMathematics (Algebra) Quiz" << endl;

                    for (i = 1; i < 11 && lives > 0; i++) {
                        if (i == 1) {
                            cout << "1.) What is the value of x in the equation 2x + 3 = 7?" << endl;
                            cout << "a. 1" << endl;
                            cout << "b. 2" << endl;
                            cout << "c. 3" << endl;
                            cout << "d. 4" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans1mA;

                            if (ans1mA == 'b' || ans1mA == 'B') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        } else if (i == 2) {
                            cout << "2.) What is the slope of the line represented by the equation y = 3x + 5 ?" << endl;
                            cout << "a. 3" << endl;
                            cout << "b. 5" << endl;
                            cout << "c. -3" << endl;
                            cout << "d. -5" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans2mA;

                            if (ans2mA == 'a' || ans2mA == 'A') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        }
                        else if (i == 3) {
                            cout << "3.)  Simplify: 3(2x + 4)." << endl;
                            cout << "a. 2x + 7" << endl;
                            cout << "b. 6x + 12" << endl;
                            cout << "c. 6x + 4" << endl;
                            cout << "d. 3x + 12" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans3mA;

                            if (ans3mA == 'b' || ans3mA == 'B') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        }
                        else if (i == 4) {
                        cout << "4.) If x^2 = 16 , what are the possible values of x ?" << endl;
                        cout << "a. 4 only" << endl;
                        cout << "b. -4 only" << endl;
                        cout << "c. 4 and -4" << endl;
                        cout << "d. 8 and -8" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans4mA;

                        if (ans4mA == 'c' || ans4mA == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 5) {
                        cout << "5.) Solve for y : 3y - 9 = 0." << endl;
                        cout << "a. 3" << endl;
                        cout << "b. -3" << endl;
                        cout << "c. 9" << endl;
                        cout << "d. -9" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans5mA;

                        if (ans5mA == 'a' || ans5mA == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                     else if (i == 6) {
                        cout << "6.) What is the value of x in the equation 5x = 25 ?" << endl;
                        cout << "a. 10" << endl;
                        cout << "b. 25" << endl;
                        cout << "c. 5" << endl;
                        cout << "d. 1" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans6mA;

                        if (ans6mA == 'c' || ans6mA == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 7) {
                        cout << "7.) Which of the following is a quadratic equation?" << endl;
                        cout << "a. y = 3x + -5" << endl;
                        cout << "b. y = 3x + 5" << endl;
                        cout << "c. y = 5x" << endl;
                        cout << "d. y = x + 7" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans7mA;

                        if (ans7mA == 'b' || ans7mA == 'B') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 8) {
                        cout << "8.) What is the solution to the inequality 2x + 4 > 10 ?" << endl;
                        cout << "a. x > 3" << endl;
                        cout << "b. x < 3" << endl;
                        cout << "c. x > 6" << endl;
                        cout << "d. x < 6" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans8mA;

                        if (ans8mA == 'a' || ans8mA == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 9) {
                        cout << "9.) What is the product of (x + 3)(x - 3) ?" << endl;
                        cout << "a. x^2 - 6x + 9" << endl;
                        cout << "b. x^2 + 6x + 9" << endl;
                        cout << "c. x^2 - 9" << endl;
                        cout << "d. x^2 + 9" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans9mA;

                        if (ans9mA == 'c' || ans9mA == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                      else if (i == 10) {
                        cout << "10.) If y = 2x - 1 , what is y when x = 3 ?" << endl;
                        cout << "a. 5"<< endl;
                        cout << "b. 6" << endl;
                        cout << "c. 7" << endl;
                        cout << "d. 8" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans10mA;

                        if (ans10mA == 'a' || ans10mA == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    }

                    cout << "Quiz Over! Your score is: " << x << "/10." << endl;
                }
                else if (topic3 == 2){
                    cout << "\nMathematics (Calculus) Quiz" << endl;

                    for (i = 1; i < 11 && lives > 0; i++) {
                        if (i == 1) {
                            cout << "1.) What is the derivative of f(x) = 3x^2 + 2x - 5 ?" << endl;
                            cout << "a. 6x + 2" << endl;
                            cout << "b. 6x - 2" << endl;
                            cout << "c. 3x + 2" << endl;
                            cout << "d. 6x + 5" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans1mC;

                            if (ans1mC == 'a' || ans1mC == 'A') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        } else if (i == 2) {
                            cout << "2.) What does the integral of a function represent in terms of geometry?" << endl;
                            cout << "a. The rate of change of the function" << endl;
                            cout << "b. The slope of the function" << endl;
                            cout << "c. The area under the curve of the function" << endl;
                            cout << "d. The maximum value of the function" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans2mC;

                            if (ans2mC == 'c' || ans2mC == 'C') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        }
                        else if (i == 3) {
                            cout << "3.) What is the limit of 1/x as x to infite?" << endl;
                            cout << "a. 0" << endl;
                            cout << "b. 1" << endl;
                            cout << "c. Infinity" << endl;
                            cout << "d. Undefined" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans3mC;

                            if (ans3mC == 'a' || ans3mC == 'A') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        }
                        else if (i == 4) {
                        cout << "4.) What is the derivative of f(x) = sin(x) ?" << endl;
                        cout << "a. cos(x)" << endl;
                        cout << "b. - cos(x)" << endl;
                        cout << "c. sin(x)" << endl;
                        cout << "d. - sin(x)" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans4mC;

                        if (ans4mC == 'a' || ans4mC == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 5) {
                        cout << "5.) What is the integral of int x^2 , dx ?" << endl;
                        cout << "a. frac{x^3}{3} + C" << endl;
                        cout << "b. x^3 + C" << endl;
                        cout << "c. frac{x^3}{2} + C" << endl;
                        cout << "d. x^2 + C" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans5mC;

                        if (ans5mC == 'a' || ans5mC == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                     else if (i == 6) {
                        cout << "6.) The Fundamental Theorem of Calculus connects which two operations?" << endl;
                        cout << "a. Addition and subtraction" << endl;
                        cout << "b. Differentiation and integration" << endl;
                        cout << "c. Multiplication and division" << endl;
                        cout << "d. Limits and derivatives" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans6mC;

                        if (ans6mC == 'b' || ans6mC == 'B') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 7) {
                        cout << "7.) What is the derivative of f(x) = e^x ?" << endl;
                        cout << "a. e^x" << endl;
                        cout << "b. x e^x" << endl;
                        cout << "c. ln(x)" << endl;
                        cout << "d. 1" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans7mC;

                        if (ans7mC == 'a' || ans7mC == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 8) {
                        cout << "8.) Which of the following is an application of the derivative?" << endl;
                        cout << "a. Finding the area under a curve" << endl;
                        cout << "b. Solving for the roots of a function" << endl;
                        cout << "c. Determining the slope of a curve at a point" << endl;
                        cout << "d. Integrating a function over an interval" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans8mC;

                        if (ans8mC == 'c' || ans8mC == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 9) {
                        cout << "9.) What is the integral of int cos(x) , dx ?" << endl;
                        cout << "a. sin(x) + C" << endl;
                        cout << "b. -sin(x) + C" << endl;
                        cout << "c. cos(x)" << endl;
                        cout << "d. -cos(x)" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans9mC;

                        if (ans9mC == 'a' || ans9mC == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                      else if (i == 10) {
                        cout << "10.) What does it mean for a function to be continuous at a point x = a ?" << endl;
                        cout << "a. The derivative exists at x = a"<< endl;
                        cout << "b. The function value is equal to the limit as x to a" << endl;
                        cout << "c. The second derivative exists at x = a" << endl;
                        cout << "d. The function has no local maxima or minima at x = a" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans10mC;

                        if (ans10mC == 'b' || ans10mC == 'B') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    }
                    cout << "Quiz Over! Your score is: " << x << "/10." << endl;
                }
                   else if (topic3 == 3){
                    cout << "\nMathematics (Statistic) Quiz" << endl;

                    for (i = 1; i < 11 && lives > 0; i++) {
                        if (i == 1) {
                            cout << "1.) What is the mean of the data set 2, 4, 6, 8, 10 ?" << endl;
                            cout << "a. 6" << endl;
                            cout << "b. 5" << endl;
                            cout << "c. 4" << endl;
                            cout << "d. 7" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans1mS;

                            if (ans1mS == 'a' || ans1mS == 'A') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        } else if (i == 2) {
                            cout << "2.) What does the median represent in a data set?" << endl;
                            cout << "a. The most frequent value" << endl;
                            cout << "b. The average of all values" << endl;
                            cout << "c. The middle value when the data set is ordered" << endl;
                            cout << "d. The range between the highest and lowest values" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans2mS;

                            if (ans2mS == 'c' || ans2mS == 'C') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        }
                        else if (i == 3) {
                            cout << "3.) What is the mode of the data set 3, 7, 3, 10, 3, 9 ?" << endl;
                            cout << "a. 7" << endl;
                            cout << "b. 9" << endl;
                            cout << "c. 3" << endl;
                            cout << "d. 10" << endl;
                            cout << "Enter your answer: ";
                            cin >> ans3mS;

                            if (ans3mS == 'c' || ans3mS == 'C') {
                                cout << "Correct!" << endl << endl;
                                x++;
                            } else {
                                lives--;
                                cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                            }
                        }
                        else if (i == 4) {
                        cout << "4.) Which of the following measures of central tendency is most affected by extreme values (outliers)?" << endl;
                        cout << "a. Mean" << endl;
                        cout << "b. Median" << endl;
                        cout << "c. Mode" << endl;
                        cout << "d. Range" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans4mS;

                        if (ans4mS == 'a' || ans4mS == 'B') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 5) {
                        cout << "5.) What is the standard deviation a measure of?" << endl;
                        cout << "a. The middle value in a data set" << endl;
                        cout << "b. The spread or dispersion of data points from the mean" << endl;
                        cout << "c. The average of the data set" << endl;
                        cout << "d. The difference between the highest and lowest values" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans5mS;

                        if (ans5mS == 'b' || ans5mS == 'B') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                     else if (i == 6) {
                        cout << "6.) In probability, what is the sum of the probabilities of all possible outcomes in a sample space?" << endl;
                        cout << "a. 1" << endl;
                        cout << "b. 0" << endl;
                        cout << "c. 0.5" << endl;
                        cout << "d. 100" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans6mS;

                        if (ans6mS == 'a' || ans6mS == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 7) {
                        cout << "7.) What type of data is represented by categories with no inherent order, such as colors or types of fruit?" << endl;
                        cout << "a. Nominal" << endl;
                        cout << "b. Ordinal" << endl;
                        cout << "c. Interval" << endl;
                        cout << "d. Ratio" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans7mS;

                        if (ans7mS == 'a' || ans7mS == 'A') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 8) {
                        cout << "8.) Which of the following is a characteristic of a normal distribution?" << endl;
                        cout << "a. It is skewed to the right." << endl;
                        cout << "b. It has two peaks." << endl;
                        cout << "c. It is symmetric and bell-shaped." << endl;
                        cout << "d. It has a positive skew." << endl;
                        cout << "Enter your answer: ";
                        cin >> ans8mS;

                        if (ans8mS == 'c' || ans8mS == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    else if (i == 9) {
                        cout << "9.) What does a correlation coefficient of -1 indicate?" << endl;
                        cout << "a. No correlation" << endl;
                        cout << "b. A perfect positive correlation" << endl;
                        cout << "c. A perfect negative correlation" << endl;
                        cout << "d. A weak correlation" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans9mS;

                        if (ans9mS == 'c' || ans9mS == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                      else if (i == 10) {
                        cout << "10.) What is the probability of flipping a coin and getting heads?" << endl;
                        cout << "a. 0"<< endl;
                        cout << "b. 0.25" << endl;
                        cout << "c. 0.5" << endl;
                        cout << "d. 1" << endl;
                        cout << "Enter your answer: ";
                        cin >> ans10mS;

                        if (ans10mS == 'c' || ans10mS == 'C') {
                            cout << "Correct!" << endl << endl;
                            x++;
                        } else {
                            lives--;
                            cout << "Incorrect! Lives remaining: " << lives << endl << endl;
                        }
                    }
                    }
                    cout << "Quiz Over! Your score is: " << x << "/10." << endl;
                }
                }
                else {
                    cout << "\nInvalid Subject or Topic. Returning to main menu." << endl;
                    break;
                }

                if (lives == 0) {
                    cout << "\nYou have lost all lives. Do you want to try again? (y/n): ";
                    cin >> retry;
                } else {
                    retry = 'n';
                }
            } while (retry == 'y' || retry == 'Y');
        } else if (choice == 3) {
            cout <<"\nThank you for playing!"<<endl;
        } else {
            cout << "\nInvalid choice. Please try again."<<endl;
        }
    }while (choice != 3);

    return 0;
}
//HAPPY 1500 LINES!!!!!

/*ANSWER KEYS:

TECHNOLOGY:
IT111
1. A
2. B
3. B 
4. B
5. B
6. D
7. C
8. A
9. C
10. B
IT110
1. C
2. B
3. D 
4. C
5. B
6. A
7. A
8. D
9. C
10. D
SCIENCE:
Biology
1. C
2. D
3. C
4. B
5. A
6. C
7. B
8. C
9. A
10. A
Chemistry
1. D
2. C
3. B
4. D
5. A
6. D
7. B
8. D
9. A
10. A
Physics
1. B
2. D
3. A
4. C
5. B
6. C
7. C
8. A
9. B
10. B
MATHEMATICS:
Algebra 
1. B
2. A
3. B
4. C
5. A
6. C
7. B
8. A
9. C
10. A
Calculus
1. A
2. C
3. A
4. A
5. A
6. B
7. A
8. C
9. A
10. B
Statistics 
1. A
2. C
3. C
4. B
5. B
6. A
7. A
8. C
9. C
10. C*/
