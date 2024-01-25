import os

path = "F://Other//Test//"
dir_list = os.listdir(path)
print("File list:")

for x in os.listdir(path):
    if x.endswith(""):
        print(x)-