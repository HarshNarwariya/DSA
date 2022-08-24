print('Loading Data...')

import os
os.chdir(os.path.dirname(__file__))
print(os.getcwd())

import pandas as pd
from bs4 import BeautifulSoup
import numpy as np
import requests
import json


# data = requests.get("https://raw.githubusercontent.com/HarshNarwariya/DSA/main/Blind%2075%20Must%20Do%20Leetcode/Leetcode%2075%20Problems.json").json()
with open('Leetcode 75 Problems.json') as file:
    data = json.load(file)
markdown = ""


print('Processing')
Difficultys = []
Dislikes = []
Likes = []
Questions = []
Solutions = []
IsPaidOnlys = []
Problems = []
Statuss = []
Tags = []
for item in data:
    q = item['Question']
    text = q.split('/')[-1]
    title = text
    text = ''.join(map(lambda t: t[0].upper(), text.split('-')))
    question = f"<a href={q}>{text}</a>"
    if (item['Solution'] == "#"):
        solution = "`NOT DONE`"
    else:
        title = "%20".join(map(lambda word: word.title(), title.split('-')))
        solution = f"<a href=https://github.com/HarshNarwariya/DSA/tree/master/Blind%2075%20Must%20Do%20Leetcode/{title}>{text}-SOL</a>"
    Questions.append(question)
    Solutions.append(solution)
    Difficultys.append(item['Difficulty'])
    Dislikes.append(item['Dislikes'])
    Likes.append(item['Like'])
    IsPaidOnlys.append(item['IsPaidOnly'])
    Problems.append(item['Problem'])
    if (item['Status'] == True):
        Statuss.append(f"`DONE`")
    else:
        Statuss.append(f"--")
    Tags.append(item['Tag'])

df = pd.DataFrame({
    "Title": Problems,
    "Status": Statuss,
    "Question": Questions,
    "Solution": Solutions,
    "Difficulty": Difficultys,
    "Tag": Tags,
    "Like": Likes,
    "Dislike": Dislikes,
})


whole_table = df.to_markdown()
tag_wise_done = df[df['Status'] == '`DONE`']['Tag'].value_counts().to_markdown()
diff_wise_done = df[df['Status'] == '`DONE`']['Difficulty'].value_counts().to_markdown()
total_status = df['Status'].value_counts().to_markdown()
total_tags = df['Tag'].value_counts().to_markdown()
total_diffs = df['Difficulty'].value_counts().to_markdown()


markdown =  f'''
# Blind 75 Must Do Leetcode

{whole_table}

## Problems Done Yet
{total_status}

### Total Questions Done Acc To Tags & Difficuties

{tag_wise_done}



{diff_wise_done}

### Total Tags & Difficuties
{total_tags}



{total_diffs}
'''
print('Writing...')
with open('README.md', 'w') as file:
    file.write(markdown)

print('Done!')