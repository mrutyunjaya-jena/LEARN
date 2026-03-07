// OPERATORS AND CONDITIONAL STATEMENTS


let a =10;
let b ="10";
// ARTHEMATIC OPERATOR
//  =,+,-,%,/,*
console.log(a+b);

// ASSIGNMENT OPERATOR
//  ==, += , -=,*= , /= , 

// UNARY OPERATOR 
// var-- , --var , ++var , var++


// COMPARASION OPERATOR 
// ==,<=,>=,!=,<,> 
// EQUALLS TO AND  TYPE ===,
// NOT EQUALLS TO AND TYPE !==
 console.log(a===b)

// logical operator
//  &&, ||, !


// CONDITIONAL STATEMENTS  if , else if , else 

let modeCol = "DARK"; // LIGHT , AMOLED

if(modeCol == "LIGHT"){
    console.log("you are in light mod ");

}else if(modeCol == "DARK"){
    console.log("you are in dark mod ");
}else{
    console.log("you are in amoled mode ");
}


// TERNARY OPERATOR 
// condition ? true part : false part
let isPresent = true;

// isPresent == true ? console.log("person is present ") : console.log("person is not present "); // also working 
let result = isPresent == true ? "person is present ":"person is not present ";
console.log(result);


// SWITCH 


let ageMust = 18;

switch(ageMust){

    case 18:console.log("you can enter ");
    break;
    case 17:console.log("you can't enter ");
    break;
    case 16:console.log("you can enter ");
    break;
    case 15:console.log("you can enter ");
    break;
    case 14:console.log("you can enter ");
    break;
    case 18:console.log("you can enter ");
    break;
    case 18:console.log("you can enter ");
    break;
    default: console.log("may be ");
}

