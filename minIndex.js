const s = readline().split('').map(e => parseInt(e));

print(s.reduce((a, b) => Math.min(a, b)))
print(s.reduce((a, b) => Math.max(a, b)))