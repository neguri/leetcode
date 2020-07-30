import collections

words = ["eat", "tea", "tan", "ate", "nat", "bat"]

anagrams = collections.defaultdict(list)

for word in words:
    anagrams[''.join(sorted(word))].append(word)

print(anagrams)
print(anagrams.values())

