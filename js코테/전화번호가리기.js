function solution(phone_number) {
    var c = phone_number.length
    var answer = '*'.repeat(c-4) + phone_number.slice(c-4,)
    return answer
}


console.log(solution("01033334444"))