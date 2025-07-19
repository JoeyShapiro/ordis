segments = {}
isblock = False
current_segment = 0

with open('a.out', 'rb') as f:
    data = f.read()
    for i, d in enumerate(data):
        if d == 0 and not isblock:
            isblock = True
            segments[i] = 1
            current_segment = i
        elif d == 0 and isblock:
            segments[current_segment] = segments[current_segment] + 1
        elif d != 0 and isblock:
            isblock = False

count = 0
for segment in segments:
    if segments[segment] > 10:
        print(f"{segment}: {segments[segment]}")
        count += 1

print("Total segments:", count)