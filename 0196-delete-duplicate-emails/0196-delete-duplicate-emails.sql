# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
# delete p1 from Person p1 , person p2
# where p1.email = p2.email
# and p1.id>p2.id;

delete from 
Person
where  
Id not in (select Id 
           from 
            (select min(Id) as Id 
             from Person 
             group by Email
            ) p
          );