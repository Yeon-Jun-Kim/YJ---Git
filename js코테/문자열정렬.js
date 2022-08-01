function solution(strings, n) {
    strings.sort(function(a,b){
        (a>b) ? 1 : -1

    })
    
    strings.sort(function(a,b){
        return (a[n] > b[n]) ? 1 : -1

    })
    return strings
}


console.log(solution(["abce", "abcd", "cdx"],2))