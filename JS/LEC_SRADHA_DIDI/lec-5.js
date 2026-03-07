// FUNCTIONS AND METHODS 
// FUNCTIONS

function greet(){ // NON PARAMETERIZED FUNCTION CREATION 

    console.log("hello my friend ");
}
greet(); // FUNCTION CALL 


function calc( a ,  b){ // PARAMETERIZED FUNCTION CREATION
    let x = a = b;
    console.log("addition is ",x);
    return x;
}

calc(12,12); //PARAMETERIZED FUNCTION CALL

// ARROW FUNCTIONS 

const sum = (a ,b) =>{ // ARROW FUNCTIONS CREATION
    let x = a + b ;
    console.log(`sum is ${x}`);
    return x;

};

sum(10,20);


// CALL BACK FUNCTION IN JS , FUNCTION IN FUNCTION CALL 

// function hell(){
//     console.log("hello , how are you ");
// }

// function ask(callback){
//     callback();   // call it
// }

// ask(hell);


function hell(){
    console.log("hello , how are you ");
}

function ask(callback){
    return callback;
}

const result = ask(hell);
result();   // calling returned function


// FOREACH LOOP ON ARRAYS USING CALLBACK FUNC
let arr = [1,2,3,4,5,6];

arr.forEach(function printVal(val){
    console.log(val);

});

arr.forEach((val) => {
    console.log(val);

});