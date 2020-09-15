import re
data="ABcd123@?"
search=re.compile("[A-Z],[a-z],[0-9]")
matches=search.finditer(data)
for i in matches:
  print(i)