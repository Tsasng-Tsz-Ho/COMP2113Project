# Member 1: Tsang Yat Long 3035941083 (Ernestyltsang)
# Member 2: Tsang Tsz Ho 3035939767 (Tsasng-Tsz-Ho)
# Game Description and Rules:
#   Our game is a basic penalty shootout game, where a team of 1 goalkeeper and 5 offensive players forms a team. Users will be able to choose to go left, centre or right for each shot. Individual power ratings, ranging from 70 to 90, are given to players. An offesnive player's power determines their accuracy and ability to score past the keeper (if they choose the same side), while the goalkeeper's power determines their probability to save the penalty. A new user will receive a starter team with lower power players. After each game they play, they will receive boosters to increase the power of their players. There are 3 game levels, the higher the level, the higher the power of players there are. 
# Code Requirements
# 1. Random events: We will generate random outcomes of the penalty shootout, and output different text descriptions based on the result.
# 2. Data structure to store match status: A structure, MatchStatus, is declared to store match status. The user team (including the updated power of players), the opponent team, the turn of shootout, and the live score is stored by using this structure.
# 3. Dynamic memory management: We use vectors to store the teams of the user and the opponent. This also allows us to change the power of players by accessing them through the vector.
# 4. File input/output: The contents of the starter team, opponent teams are stored in text files. When they are used, we use a ifstream varaible to call it and store their content in a vector. When the user wants to save the content of the game, we will write the contents of the vector of user_team in Savefile.txt. This also allows the user to load up their squad by reading Savefile.txt. 
# 5. Multiple files: We used a header file, functions.h, to declare all functions and structures we need to use. We used multiple files to declare functions for determining whether a shot goes in (Is it on target? Does the keeper save it?), whether the user team wins, which player receives the booster, and to save or load game content.
# Compilation and Execution Instructions:
# Enter the following commands to compile and execute the game
# 1. make main
# 2. ./main
# 3. New
# 4. Follow to instructions in the terminal and enjoy the game
