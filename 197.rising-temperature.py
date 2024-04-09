import pandas as pd

weather = pd.DataFrame(columns=['id', 'recordDate', 'temperature'])

def rising_temperature(weather: pd.DataFrame) -> pd.DataFrame:
  weather.sort_values(by=['recordDate'], inplace=True)
  res = weather[(weather.recordDate - weather.shift(1).recordDate == "1days") & (weather.temperature > weather.shift(1).temperature)]
  return res[['id']]