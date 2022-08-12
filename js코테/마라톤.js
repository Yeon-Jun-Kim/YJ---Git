function solution(participant, completion) {
    var participant_2 = {}
    for(var x of participant){
        participant_2[x] = 0
    }
    for(var x of participant){
        participant_2[x] += 1
    }
    for(var x of completion){
        participant_2[x] -= 1
    }
    for(var x in participant_2){
        if(participant_2[x] == 1 ){
            return x
        }

    }

    return participant_2

}

console.log(solution(["leo", "kiki", "eden"],["eden", "kiki"]))