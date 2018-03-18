currentRoom = 1

room1 = ["Description", (2, "right"), (3, "down")]
room2 = ["Description", (1, "left"), (4, "down")]
room3 = ["Description", (1, "up"), (4, "right")]
room4 = ["Description", (2, "up"), (3, "left")]
# Both lists and tuples are accessed through indexes starting in 0.

while(raw_input != 'Q'):
	if currentRoom == 1:
		nextRoom = raw_input("Where would you like to move to next? Options are " + room1[1][1] + " & " + room1[2][1] + ": ")
		if nextRoom == "right":
			nextRoom = 2
		elif nextRoom == "down":
			nextRoom = 3
	elif currentRoom == 2:
		nextRoom = raw_input("Where would you like to move to next? Options are " + room2[1][1] + " & " + room2[2][1] + ": ")
		if nextRoom == "left":
			nextRoom = 1
		elif nextRoom == "down":
			nextRoom = 4
	elif currentRoom == 3:
		nextRoom = raw_input("Where would you like to move to next? Options are " + room3[1][1] + " & " + room3[2][1] + ": ")
		if nextRoom == "up":
			nextRoom = 1
		elif nextRoom == "right":
			nextRoom = 4
	elif currentRoom == 4:
		nextRoom = raw_input("Where would you like to move to next? Options are " + room4[1][1] + " & " + room4[2][1] + ": ")
		if nextRoom == "up":
			nextRoom = 2
		elif nextRoom == "left":
			nextRoom = 3



