let buah = ["mangga", "jeruk"];

console.log(buah[0]);

buah.unshift("apel");
buah.splice(2, 0, "semangka");
buah.push("pisang");
console.log("setelah ditambah:", buah);

buah.shift();
buah.splice(1, 1);
buah.pop();
console.log("setelah dihapus:", buah);