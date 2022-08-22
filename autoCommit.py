import os
os.chdir(os.path.dirname(__file__))
print(os.getcwd())

os.system('git add --all')
os.system('git commit -m "AUTOMATED"')

os.system('git push')

print(__file__)