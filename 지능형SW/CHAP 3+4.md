

- global optimal : 전체 가능한 모든 state들 중 가장 좋은 objective function을 갖는 state를 찾는 것
- local optimal : global optimal보단 작지만 어느정도 괜찮은, reasonable한 objective function 값을 갖는 state를 찾는 것

#### global optimal을 찾으려면 모든 state를 탐색해야해 memory를 많이 필요로 하고 시간도 많이 걸린다는 단점으로 local optimal을 찾는 local search를 많이 사용한다.

아래는 local search 6가지를 알아본다. 



### observable, known, deterministic 하지 않은 환경 즉, beyond classical search 4가지+ 2가지 공부함 

### LOCAL SEARCH 6가지 

1. hill climbing search

  > greedy search와 비슷한 알고리즘으로 current state보다 더 큰 cost를 가진 state중 가장 좋은 state로가는 action을 택한다.   ==> local optimal 을 찾는다.
  >
  > 따라서 더 올라갈 곳이 있으면 올라가고 아니면 그곳을 peak이라고 간주하고 멈춘다. 
  >
  > 장점 : 현재 state로만 비교 하기 때문에 memory에 current node 하나만 저장하고 있다. 
  >
  > 단점 : 
  >
  > 1. plateaux :  가능한 next state들이 current state값과 같다면 거기서 멈추게 된다. shoulder or flat local maximum 이라고도 한다.
  > 2. ridges :  능선, 날카로운 능선에 위치하면 동서남북 어디로 이동하더라도 고도가 낮아져 peak을 잘못 판단하게 된다. 
  > 3. local maxima : 주변 neighbor보다는 값이 크지만 global보다는 작다는 문제

  

  1- 1 stochastic hill climbing search

  >  current state보다 더 큰 cost를 가진 state가 1개 이상이면 그것에 대해 랜덤으로 선택한다. 따라서 global 한 값을 찾을 가능성이 높아진다. 

  

  -- random walk : 랜덤하게 선택하는 것! ->  global 값을 찾을 수 있다. 

  

2. simulated annealing

   > random walk와 hill climbing을 섞은 알고리즘 
   >
   > 두 특징을 합친 것이기 때문에 local maxima 를 해결 할 수 있다. successor 중 랜덤하게 1개의 node를 뽑아 current state와 비교한다. 만약 next cost 가 current cost보다 크다면 그대로 진행! 그렇지 않다면 n.c 가 c.c 보다 얼마나 작은지 비율을 따진다. 그리고 그 비율의 확률로 선택된 node가 current state가 된다. 
   >
   >  
   >
   > 즉, 높은 값만 가지고 가는 hill climbing과 다르게 확률에 따라 작은 값도 current state로 선택할 수 있다. 이로 인해 global값을 찾을 가능성이 높아진다. 시간은 많이 걸리지만..

   

3. local beam search algorithm

  > k 개의 노드를 유지하면서 좋은 값을 갖는 k개의 노드들을 전개하다가 goal을 만나면 끝난다. 따라서 memory엔 항상 k개만이 필요하다. 

  3-1 stochastic local beam search

  > k개를 유지하지만 펼칠때 랜덤한 k개의 노드를 펼친다. 대신 이때, 좋은 ㄱ밧을 가진 node를 뽑을 확률이 더 높아진다. 값이 좋을 수록 선택될 확률이 높아지는 것이다. 항상 그렇지는 않다. 

<HR>

#### < memory 용량 >

hill climbing < local beam search  <<<  BFS

​		1개                         k개 						ALL

<HR>

4. genetic algorithm

   > 두개의 parent state로부터 한개의 successor state 가 나온다.
   >
   > initial population --> fitness function  -->  selection --> crossover  --> mutation

   

### nondeterministic 한 환경

current state에서 action을 취해 나오는 next state가 한가지가 아닌 여러 경우의 수가 있다.

따라서 모든 경우의 수에 대한 비상 계획 (contingency plan) 을 두어야 한다.

1. and-or

   

2. try, try again



### partially observable 한 환경

current state에 대한 정보가 없기 때문에 가능한 state들로 시작한다 이 state를 belief state라고 한다. 

1. with no observation

   아예 아무 정보도 없는 상태에서 무수히 많은 belief state를 갖고 진행한다.

   

2. with partial obervation

- prediction stage

  어떤 belief state에서 action을 택했을 때 나오는 next belief state 를 말한다. 

- observation prediction stage

  위에서 나온 prediction stage에서 observation 을 진행해 가능한 belief state를 줄인다. 

- update

  새로운 observation 결과를 갖고 belief state를 만든다. 

### unknown 환경

 1. online search problems

    보통 dynamic한 환경을 가정하며 result 와 cost를 모른다. 어떤 state에서 action을 취하면 어떤 next state가 될지 모르기 때문이다. 

 2. online search agent

    online-DFS-agent.. 가 있다. current state >s 에서 시작하며 가능한 action들을 모두 탐색 후 backtrack 하면서 DFS search를 진행한다. 

    - untried : 아직 탐색되지 않은 action
    - unbacktracked : 아직 탐색되지 않은 parent node 

	3.  online local search



4. LRTA*



