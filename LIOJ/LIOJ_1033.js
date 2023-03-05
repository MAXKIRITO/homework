const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let n = 0;
let points = [];

rl.on('line', (line) => {
  if (n === 0) {
    n = parseInt(line);
  } else {
    const [x, y] = line.split(' ').map(Number);
    points.push([x, y]);
  }
});

rl.on('close', () => {
  let minDist = Number.MAX_SAFE_INTEGER;
  let p1, p2;

  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      const [x1, y1] = points[i];
      const [x2, y2] = points[j];
      const dist = Math.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2);
      if (dist < minDist) {
        minDist = dist;
        p1 = [x1, y1];
        p2 = [x2, y2];
      }
    }
  }

  if (p1[0] < p2[0] || (p1[0] === p2[0] && p1[1] < p2[1])) {
    console.log(p1[0], p1[1]);
    console.log(p2[0], p2[1]);
  } else {
    console.log(p2[0], p2[1]);
    console.log(p1[0], p1[1]);
  }
});