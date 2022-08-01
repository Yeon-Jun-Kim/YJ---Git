function solution(maps) {
var dx = [0,0,-1,1]
var dy = [1,-1,0,0]
var stack = [[0,0,1]]
var map_2 = []
for(var i = 0; i<5; i++){
    map_2.push([false,false,false,false,false])
    
}
map_2[0][0] = true
while(stack.length != 0){
var node = stack.shift()
if(node[0] == 4 && node[1] == 4 ){
    return node[2]
}

for(var j = 0; j<5; j++){
   
    var xx = dx[j] + node[0]
    var yy = dy[j] + node[1]
    console.log(map_2[0][0])
    if(0<=xx<5 && 0<=yy<5) {
        console.log(xx,yy)
        if(map_2[xx][yy] == false && maps[xx][yy] == 1 ){
            map_2[xx][yy] = true
            stack.push([xx,yy,node[2] + 1])
        }
    }
    
    
        

    }
    
}
return -1
}




console.log(solution(
    [[1,0,1,1,1],[1,0,1,0,1],[1,0,1,1,1],[1,1,1,0,1],[0,0,0,0,1]]))