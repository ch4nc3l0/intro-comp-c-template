# Chance Gurley Exam04 Design Tool

**Flow Chart:**
![Design Tool Picture](design_tool.png.png)


**Variables:**
- trumpVotes
- int bidenVotes
- char states
- menu choice

**Functions:**
- void printMenu();
- int stateSelectorMenu(char person[]);
- void votingTool(int cadidateVotes[50][2], char states[50][20], int person);
- void initCandidateArray(int candidateVotes[50][2]);
- int mainMenuChoiceValidator();
- void showVotes(int trumpVotes[50][2], int bidenVotes[50][2], char states[50][20]);
- void showTies(int trumpVotes[50][2], int bidenVotes[50][2], char states[50][20]);
- int stateSelectorValidator();
- void statePrinter();
- void highAndLow(int trumpVotes[50][2], int bidenVotes[50][2], char states[50][20]);