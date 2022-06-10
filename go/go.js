
function setup() {
    initializeFields();
    createCanvas(500, 500);
}

var bx;

// 棋子的座標 陣列
var by;

// 棋子的數量，一開始是0
var N;

function draw() {
    background(color(0xDB, 0xFF, 0x98));
    for (var y = 50; y < 500; y += 50) {
        line(0, y, 500, y);
    }
    for (var x = 50; x < 500; x += 50) {
        line(x, 0, x, 500);
    }
    // 黑
    fill(0);
    for (var i = 0; i < N; i++) {
        if (i % 2 == 0)
            fill(0);
        else
            fill(255);
        ellipse(bx[i], by[i], 40, 40);
    }
    if (N % 2 == 0)
        fill(0);
    else
        fill(255);
    ellipse(mouseX, mouseY, 40, 40);
}

function mousePressed() {
    bx[N] = mouseX;
    by[N] = mouseY;
    N++;
}

function initializeFields() {
    bx = new Array(100);
    by = new Array(100);
    N = 0;
}
