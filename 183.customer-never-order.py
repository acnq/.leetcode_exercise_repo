import pandas as pd;

customers = pd.DataFrame(columns=['id', 'name'])
orders = pd.DataFrame(columns=['id', 'customerId'])

df = customers[~(customers['id'].isin(orders['customerId']))]
df = df[['name']].rename(columns={'name': 'Customers'})

def find_customers(customers: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
  df = customers.merge(orders, left_on='id', right_on='customerId', how='left')
  df = df[df['customerId'].isna()]
  df = df[['name']].rename(columns={'name': 'Customers'})
  return df
  # # 选择 orders['customerId'] 中 'id' 不存在的行。
  # df = customers[~(customers['id'].isin(orders['customerId']))] 
  # # 创建一个只包含 name 列的数据框架
	# # 并将列 name 重命名为 Customers。
  # df = df[['name']].rename(columns={'name': 'Customers'})
  # return df