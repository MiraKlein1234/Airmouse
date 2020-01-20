# Airmouse

**Zadání:** S využitím senzorů vývojové desky FRDM-FXS-MULTI-B realizujte tzv. Air mouse. Zařízení bude do PC připojeno jako HID myš a bude pohybovat kurzorem myši na základě údajů ze senzorů orientace a zrychlení. 

**Řešení:**

**HARDWARE:** Hardware projektu tvoří vývojová deska FRDM-KL25Z doplněná o shield FRDM-FXS-MULTI2-B, který obsahuje akcelerometr, magnetometr, gyroskop, i senzory tlaku.//

**SOFTWARE:** Pro tvorbu softwaru byla vybrána platforma mbed (https://os.mbed.com/)
 Připojení k počítači je realizovánu pomocí USB na desce FRDM-KL25Z. Pomocí standardu HID jsou počítači předávány pohyby pro pohyb kurzoru v osách x a y. HID standard je rozpoznáván každým počítačem, protože slouží k připojení základních zařízení jako myš, klávesnice atd. Airmous lze tedy připojit ke každému počítači bez nutnosti předchozí instalace softwaru. Použití vývojové desky jako HID myši umožňuje knihovna USBMouse.h
 
 Pro určování náklonu v jednotlivých úsách je využit čip  FXOS8700Q na desce RDM-FXS-MULTI2-B. jedná se o kombinaci akcelerometru a magnetometru. Pro pohyb myší v ose Y jsou využívány udaje z osy X akcelerometru. Vychýlení desky z vodorovné polohy způsobuje pohyb myši nahoru nebo dolů. Pro pohyb myši v ose X jsou dle stejného principu využívány údaje z osy Y akcelerometru. Bylo by vhodnější použít údaje z magnetometru, ty se však nepovedlo vhodně zpracovat aby byl pohyb kurzoru přijatelný.


Soubory projektu, včetně knihoven a hlavního programu lze nalézt na https://os.mbed.com/users/miroslavklein/code/Airmouse_MPOA/
