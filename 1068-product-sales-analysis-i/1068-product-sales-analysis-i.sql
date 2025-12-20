# Write your MySQL query statement below
 select prod.product_name, sales.year,sales.price from Sales left join Product prod on sales.product_id=prod.product_id;