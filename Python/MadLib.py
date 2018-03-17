# Mad Libs
# Lorraine Bichara Assad
# march 16, 2018
# The program will first prompt the user for a series of inputs a la Mad Libs. For example, a singular noun, an adjective, etc. Then, once all the information has been inputted, the program will take that data and place them into a premade story template.

noun = raw_input("Introduce a noun: ")
noun2 = raw_input("Introduce another noun: ")
adjective = raw_input("Introduce an adjective: ")
verb = raw_input("Introduce a verb: ")

madLib = "I am a teen-age " + noun + " who lives in a two-story " + noun2 + " on Mars. I will put this message in a/an " + adjective + " bottle and " + verb + " it into space and hope that it gets to Earth."
print(madLib)