CPE212-Project05
# CPE212-Project05
I plan on adding a new hero class called the Gambler. The Gambler will have a basic attack that does a flat amount of damage, and a special attack that has a chance to do either high damage, varied amount of damage, or miss entirely. The gambler's attribute will be called luck, which modifies the rate of sucesses.

New gambler.cpp and gambler.hpp files will be required. 
A new entity will needed to be added to the database.json.
I plan to name the new entity Jeremy the Greedy Grinner.
Jeremy will have 7 HP, race be Goblin, have a luck of 7, and have a base weapon damage of 4.


Update 4/28/2021:
+Added gambler.cpp and gambler.hpp
    -Proper implementation of attacks has not been added yet, just getting the hero class in first
+Added dice throw, pick a card, and punch attacks to gambler
+Added gambler files to the makefile
+Added _luck to entity
+Added GetLuck() function to entity
+Added luck to JsonEntityBuilder
-Luck seems to currently be improperly added
+Updated database.json
+Added gambler case to main.cpp
+Changed references to Project04 in makefile to Project05