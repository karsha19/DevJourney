import re

s="""
24BCE5002 is working @PRP233 10.0.0.233
24BAI5567 is working @SJT201 11.3.6.23
23BKT3356 is working @SJT417 100.20.21.67
23BCI6678 is working @SJT418 34.45.56.78
22BCT7890 is working @TT135 24.67.84.123
24BKT6666 is working @SJT201 11.3.6.24
"""

countSJT = len(re.findall(r'SJT',s))
countPRP = len(re.findall(r'PRP',s))
countTT = len(re.findall(r'TT',s))
print(f"SJT Students Count: {countSJT}\nPRP Students Count: {countPRP}\nTT Students Count: {countTT}")