# Write your MySQL query statement below

select email from (select email,count(email) as num from Person group by email) as stats where num>1