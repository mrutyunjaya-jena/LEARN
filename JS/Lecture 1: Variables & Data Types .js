// SINGLE LINE COMMENT 
/* MULTI LINE COMMENT */
// HTML BOILER PLATE CODE = SHIFT + !
//SCRIPT TAG CAN BR PRESENT MUST BEFORE THE ONE LINE OF BODY TAG 
// O/P IN JS 



console.log("hello \nmy name is mantu ");



// VARIBLES IN JS 
// CASE SENSETIVE
// ALLOWED DOLAR SIGN, UNDER SCORE , NUMBERS AND SMALL OR CAPITAL LETTERS 
// SPACE NOT ALLOWED
// DYNAMIC VARIBLES LIKE PYTHON 
// FIRST OF THE VARIBLE  SHOULD BE LETTER , DOLAR OR UNDERSCORE , CAN'T BE A NUMBER
// CAMEL CASE , SNAKE CASE 
name = "mantu";
age = 19;
price = 90.00;
emptyValue = null; // EMPTY VALUE
undefinedValue = undefined; //  DON'T KNOW WHAT IS THERE  
isFollowed = true, 

console.log(name,age,price,emptyValue,undefinedValue, isFollowed,"printed" );


// USING "let , const and var" VARIBLE DEFINATION 
/* 
var = old one not used , re declarable , updatable , a global varible scope 
let = can't redeclareable , can be  updatable , blocks global scope 
const =  can't redeclareable , can't  updatable , blocks global scope 
*/
let newName = "vineet";
console.log(newName);


let age1 = 13;
age1 = 90; // UPDATABLE 
console.log(age1);
const PI = 3.141; // CAN'T BE UPDATED 
console.log(PI)

// DATA TYPES 
let b = BigInt("1");
let y = Symbol("mj");

console.log(typeof(b),typeof(y),y,b);

// OBJECT (KEY : VALUE )

const student ={

    fullName : "mantu",
    cgpa : 9.0,
    roll : 90,
    reg : 2401305116,
    age :18,

};

console.log(student);
console.log(student.fullName , student.cgpa);
console.log(student["cgpa"]);

// UPDATE IN OBJECT
// OBJECT IS A CONST BUT STILL UPDATABLE , 
// BECAUSE WE ARE NOT CHANGING THE OBJECT MEMORY ADDRESS ,
//  WE ARE CHANGING THE KEY AND VALUES ONLY 

student["age"] = student["age"] + 1;
student.cgpa = student.cgpa + 1;
student.fullName = "mrutyunjaya";
console.log(student.age)
console.log(student.cgpa)
console.log(student.fullName);