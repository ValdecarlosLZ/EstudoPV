const control = document.querySelectorAll(".control");
let itematual = 0;
const item = 0;
const images = document.querySelectorAll(".imagatual");
const itemax = images.length;
let i = 1;
let y = 1;
let k;

function mudarfoto() {
  let c = document.getElementById("foto" + i);

  if (c.classList.contains("hyy")) {
    c.classList.remove("hyy");
  } else {
    c.classList.add("hyy");
  }

  console.log(i);
  i++;

  if (i >= 5) {
    i--;
    if (i >= 4) {
      i--;
      if (i >= 3) {
        i--;

        if (i >= 2) {
          i--;

          if (i >= 4) {
            i--;
          }
        }
      }
    }
  }
}

setTimeout

function mudardireita() {
  let b = document.getElementById("foto" + y);

  if (b.classList.contains("hyy")) {
    b.classList.remove("hyy");
  } else {
    b.classList.add("hyy");
  }

  y++;
  console.log(b.classList);

  if (y === 5) {
    y = 1;
  }
}
