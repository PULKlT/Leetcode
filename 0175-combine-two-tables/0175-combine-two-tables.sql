# Write your MySQL query statement below
#select p.firstName, p.lastName, a.city, a.state
#from Person p left join Address a
#on p.PersonId = a.PersonId;
select FirstName, LastName, City, State 
from Person left join Address 
on Person.PersonId = Address.PersonId;
