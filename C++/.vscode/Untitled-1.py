from selenium.webdriver.chrome.options import Options
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.common.by import By
from selenium.webdriver.support import expected_conditions as EC
import time
from bs4 import BeautifulSoup
s=Service(ChromeDriverManager().install())
driver = webdriver.Chrome(service=s)
driver.maximize_window()
driver.get("https://www.nettiauto.com/audi/100")
##soup=BeautifulSoup(driver.page_source,"html.parser")
##Links=soup.find_all("a",{"class":"tricky_link"})
##for Link in Links:
##    print(Link["href"])
T=driver.find_elements(By.CLASS_NAME,"tricky_link")
for i in T:
     print(i.get_attribute("href"))
print(len(T))