function solution(n) {
    let a = String(n)
    a = Array.from(a)
    a.reverse()
    for(var i in a){
        a[i] = Number(a[i])
    }
    return a
}

console.log(solution(12345))