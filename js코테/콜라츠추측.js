function solution(num) {
    var c = 0
    while(num != 1){
        c++
        if(num %  2 == 0 ){
            num = num/2
        }
        else{
            num = num * 3 +1
        }
        if(c ==500 & num != 1)
        { return -1}

    }
return c
}


console.log(solution(16))