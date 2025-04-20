# Write your MySQL query statement below
select round((
(select count(*)
from (select *, row_number() over (partition by customer_id order by order_date) as rnk
from delivery
order by customer_id, order_date) as tbl
where rnk = 1 and order_date = customer_pref_delivery_date
group by rnk) * 100.0
/
cast((select count(*)
from (select *, row_number() over (partition by customer_id order by order_date) as rnk
from delivery
order by customer_id, order_date) as tbl
where rnk = 1
group by rnk) as float)
), 2) as immediate_percentage