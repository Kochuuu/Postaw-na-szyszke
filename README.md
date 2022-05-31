# Postaw na szyszke
 Quiz application based on the "Postaw na milion" program, created for the board games tournament organized by ZHP Hufiec Olkusz

The application is used to display questions and check the player's knowledge about scouting in Poland. The database of questions is provided by means of a text file "questions.txt" which contains all the questions regardless of the number of answers. The application divides the file into individual lists of questions, then, during the game, each time it draws a question, and the order of answers is randomly selected. The player has the option to mark the answer any number of times before deciding to check the result and move on to the next question. The game ends after answering the final question and getting 8 points.

The game consists of three stages:
1) 0-3 points - the player gets random questions from the pool with four answers,
2) 4-6 points - the player gets random questions from the pool with three answers,
3) 7 points - the player gets a random question from the pool of final questions with two answers.

The application uses the QT framework.
