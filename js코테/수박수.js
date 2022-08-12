function solution(n) {
    var a = '수박'
    var answer = ''
    while(answer.length < n){
        for(let i of a){
            answer += i
            if(answer.length==n){
                break
            }
        }
    }
    return answer
}
 

console.log(solution(3))