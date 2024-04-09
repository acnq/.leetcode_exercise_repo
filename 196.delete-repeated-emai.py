import pandas as pd
person = pd.DataFrame(columns=['id', 'email'])

def delete_duplicate_emails(person: pd.DataFrame) -> None:
  min_id = person.groupby('email')['id'].transform('min')
  removed_person = person[person['id'] != min_id]
  person.drop(removed_person.index, inplace=True)
  return 