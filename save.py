
from pathlib import Path

topic = input("topic: ")
problem_name = input("enter problem name: ")
problem_number = input("enter problem number: ")

problem_number = problem_number.zfill(4)

slug = problem_name.lower().replace(" ", "-")

approach = input("approach (brute/better/optimal): ")
language = input("language (cpp/python): ")

filename = f"{problem_number}-{slug}-{approach}.{language}"

folder = Path(topic)
folder.mkdir(exist_ok=True)

filepath = folder / filename

print("paste your code. type END on a new line when finished.")
lines = []

while True:
    line = input()
    if line == "END":
        break
    lines.append(line)

code = "\n".join(lines)

filepath.write_text(code)

print("saved to:", filepath)


