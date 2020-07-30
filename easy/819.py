import sys
import re
import collections

paragraph = "Bob hit a ball, the the BALL flew far after it was hit."
banned = ["hit"]


#words = [ word for word in re.sub(r'[^\w]',' ',paragraph).lower().split() if word not in banned]
words = [ word for word in re.sub('[^\w]',' ',paragraph).lower().split() if word not in banned]
#words = [ word for word in re.sub(r'[\W]',' ',paragraph).lower().split() if word not in banned]
print(words)

counts = collections.defaultdict(int)
for word in words:
    counts[word] += 1
print(counts)

counts = collections.Counter(words)
print(counts)
print (counts.most_common())
print (counts.most_common()[0][0])
print (counts.most_common(1)[0][0])
print (counts.most_common(2))