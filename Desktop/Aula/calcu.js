var pri = getElementById("pri");
var seg = getElementById("seg");
var res = getElementById("res")
var op = getElementById("op")

function calc() {
    if (op.value === '+') {
        var res = parseInt(pri) + parseInt(seg);
    } else if (op.value === '-') {
        var res = pri - seg;
    } else if (op.value === '*') {
        var res = pri * seg;
    } else(op.value === '/') {
        var res = pri / seg;
    }

}