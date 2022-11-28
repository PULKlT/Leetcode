# Write your MySQL query statement below
# select distinct(a.actor_id), a.director_id
# from ActorDirector a, ActorDirector b
# where  
# a.actor_id = b.actor_id and a.director_id = b.director_id and
# a.timestamp <> b.timestamp
# and (select count(c.actor_id) from ActorDirector c where c.actor_id=a.actor_id group by actor_id) > 2
# # and (select count(c.director_id) from ActorDirector c where c.director_id=a.director_id group by director_id) > 2
# group by actor_id
# ;

SELECT actor_id, director_id FROM ActorDirector
GROUP BY 1,2 
HAVING COUNT(timestamp)>=3