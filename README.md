# Airmouse - projekt MPOA by Miroslav Klein

**Zadání:** S využitím senzorů vývojové desky FRDM-FXS-MULTI-B realizujte tzv. Air mouse. Zařízení bude do PC připojeno jako HID myš a bude pohybovat kurzorem myši na základě údajů ze senzorů orientace a zrychlení. 

**Řešení:**

**HARDWARE:** Hardware projektu tvoří vývojová deska FRDM-KL25Z doplněná o shield FRDM-FXS-MULTI2-B, který obsahuje akcelerometr, magnetometr, gyroskop, i senzory tlaku.//

**SOFTWARE:** Pro tvorbu softwaru byla vybrána platforma mbed (https://os.mbed.com/)
 Připojení k počítači je realizovánu pomocí USB na desce FRDM-KL25Z. Pomocí standardu HID jsou počítači předávány pohyby pro pohyb kurzoru v osách x a y. HID standard je rozpoznáván každým počítačem, protože slouží k připojení základních zařízení jako myš, klávesnice atd. Airmous lze tedy připojit ke každému počítači bez nutnosti předchozí instalace softwaru. Použití vývojové desky jako HID myši umožňuje knihovna USBMouse.h
 
 Pro určování náklonu v jednotlivých úsách je využit čip  FXOS8700Q na desce RDM-FXS-MULTI2-B. jedná se o kombinaci akcelerometru a magnetometru. Pro pohyb myší v ose Y jsou využívány udaje z osy X akcelerometru. Vychýlení desky z vodorovné polohy způsobuje pohyb myši nahoru nebo dolů. Pro pohyb myši v ose X jsou dle stejného principu využívány údaje z osy Y akcelerometru. Bylo by vhodnější použít údaje z magnetometru, ty se však nepovedlo vhodně zpracovat aby byl pohyb kurzoru přijatelný.


Všechny soubory projektu **mbed** lze nalézt na https://os.mbed.com/users/miroslavklein/code/Airmouse_MPOA/ a importovat do vlastního projektu

Soubor **Airmouse.KL25Z(22).bin** lze přímo nahrát do desky FRDM-KL25Z a aplikace ihned funguje

**Video** demonstrující funkci programu lze nalézt na https://uloz.to/file/wFyZZZPO8BY2/airmouse-video-mp4 *

*poznámka k videu: omlouvám se za kvalitu, natáčení pouze za pomoci dvou končetin bylo obtížné
