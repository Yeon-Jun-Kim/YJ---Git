class 학생{
    constructor(a,b){
        this.name = a
        this.age = b

    } // 생성자 부분

    sayHi(){console.log('안녕하세요')} // Prototype

}

let 철수 = new 학생('철수', 23)

console.log(철수)
철수.sayHi()

