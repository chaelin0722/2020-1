### chapter 5. Adversarial search


multi agent에서 solution 을 찾는다. 



- zero-sum game



1. MINMAX algorithm  -> 모든 가능한 경우의 state를 다 살펴본다 => optimal 한 값을 찾는다.
2. alpha-beta pruning -> final decision에 영향을 미치지 않는 가지를 pruning 한다. -> 1번의 단점 보완!
3. imperfect real-time decision  -> cutoff! 를 통해 non terminal state를 terminal하다고 가정하고 evaluation function을 한다. 
4. evaluation function -> terminal node 에 utility 값을 준다. feature을 정하고 이 feature 값을w(가중치)로 해서 각 functino마다 곱해주어 더한 결과가 evaluation function이 된다.
5. stochastic games -> MINMAX 알고리즘에 CHANCE 노드가 더해진 것! 총 3종류의 노드가 있다. 각 MIN과 MAX 의 값은 CHANCE값 곱하기 확률을 모두 더한 값이 MAX와 MIN으로 update된다. 그럼 min은 각 min중 가장 낮은 value, max는 max들중 가장 높은 value를 선택하게 된다. 