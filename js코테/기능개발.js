function solution(progresses, speeds) {
    answer = []
    comp = []
    temp = 0
   for(var i = 0; i < progresses.length; i++){
    var count = 0;
    while(progresses[i]<100){
        progresses[i] = progresses[i] + speeds[i]
        count += 1
    }
    answer.push(count)
   }
temp = []
  for(var i in answer){
  if(temp.length == 0){
    temp.push(answer[i])
  }
  else{
    var prevnumber = temp[0]
    if(prevnumber>=answer[i]){
        temp.push(answer[i])

    }
    if(prevnumber< answer[i]){
        comp.push(temp.length)
        temp = []
        temp.push(answer[i])
    }
    if(i == answer.length-1){
        comp.push(temp.length)
    }
  }
  }
  return comp
}

console.log(solution([77,65,34,34,65,100], [1, 2, 3, 4, 1, 1,1]))