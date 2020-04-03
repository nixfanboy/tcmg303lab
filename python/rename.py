import os

find = input("Find: ")
repl = input("Replace With: ")

for f in os.listdir("."):
	if f == "rename.py":
		continue
	os.rename(f, f.replace(find, repl))
