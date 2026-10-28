# Write your MySQL query statement below
select Customer.name
from Customer 
where Customer.referee_id  !=2
or Customer.referee_id is NULL



