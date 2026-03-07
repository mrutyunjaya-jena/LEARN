// LOOPS AND STRINGS
/**/ 
// for loop 

let n = 5;

for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= i; j++) {
        process.stdout.write("*");  // like cout << "*"
    }
    console.log();  // like cout << endl
}

// let n = 5;

// for (let i = 1; i <= n; i++) {
//     let row = "";
//     for (let j = 1; j <= i; j++) {
//         row += "*";
//     }
//     console.log(row);
// }


// WHILE LOOP 
let a =0;
while(a != 10){
    process.stdout.write("hello "); //  PRINTS IN SAME LINE 
    // console.log("hello");  // PRINTS IN NEXT LINE AUTOMATICALLY
    a++;

}


// DO-WHILE LOOP 
let z =0;

do{
    console.log("mj");
    z++;
}while(z <= 5);


// for-of loop (SPECIALLY USED IN STRINGS AND ARRAY)
let str1 = "hello man ";
for(let val of str1){
    console.log(val);
}


// for-in (SPECIALLY USED FOR OBJECTS)

const student={
    name : "MJ ",
    roll : 90,
    reg : 5465345635,
    isPresent : true

}
for(let key in student){
    console.log(key);
}

// STRING  MOETHODS
//  .length, .toUpperCase(), .toLowerCase(), .trim(), .slice(), .concat(), .replace(), .charAt()
let str2 = "mantu";
console.log(str2.length);
console.log(str2[0]);

// Template litral
let specialString = `hi , my name is ${student.name} `; //${} can use to print data from object
console.log(specialString);

