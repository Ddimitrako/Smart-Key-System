# Smart-Key-System
Smart key- Light Key
Στο παρών έγγραφο παρουσιάζεται η βασική ιδέα γύρω από το smart key. Αρχικά παραπείθονται δύο τεχνολογίες από τις οποίες το smart key συνδυάζει τα πλεονεκτήματα. Οι δύο αυτές τεχνολογίες ασύρματου κλειδιού είναι οι συναγερμοί των οχημάτων και τα rfid tags.
Remote Keyless Systems
Τα ασύρματα κλειδιά των οχημάτων (Remote Keyless Systems) είναι εύκολο να υποκλαπούν από κάποιον τρίτο που ακολουθεί την τεχνική του Rf Phishing. Λόγω της μεγάλης εμβέλειας στην οποία εκπέμπουν το σήμα τους. Όμως το γεγονός ότι διαθέτουν rolling code algorithms που σε πολλές περιπτώσεις οι κώδικες είναι κρυπτογραφημένοι, καθιστά την συγκεκριμένη μέθοδο μεταφοράς του κωδικοποιημένου σήματος εξαιρετικά αξιόπιστη.
 ![image001](https://user-images.githubusercontent.com/73073984/103211599-4d97d580-4911-11eb-8452-e31c71ad1992.jpg)

 
Rfid tags
Τα rfid tags είναι ευάλωτες σε υποκλοπή και αντιγραφή. Όμως είναι  ασύρματες και κυρίως δεν κάνουν χρήση μπαταρίας.


![image003](https://user-images.githubusercontent.com/73073984/103211648-74eea280-4911-11eb-8d87-372d30ad8834.png)
![image004](https://user-images.githubusercontent.com/73073984/103211651-75873900-4911-11eb-9053-a4e99d3cd14c.jpg)
![image005](https://user-images.githubusercontent.com/73073984/103211654-76b86600-4911-11eb-8e22-8fe98359f765.jpg)
![image006](https://user-images.githubusercontent.com/73073984/103211661-791ac000-4911-11eb-92c3-6f4594efb1d4.jpg)
![image007](https://user-images.githubusercontent.com/73073984/103211664-7ae48380-4911-11eb-985c-95d090acda56.jpg)
![image008](https://user-images.githubusercontent.com/73073984/103211666-7d46dd80-4911-11eb-9b05-966b82710418.jpg)
![image009](https://user-images.githubusercontent.com/73073984/103211668-7f10a100-4911-11eb-9430-3807623869f1.jpg)
![image010](https://user-images.githubusercontent.com/73073984/103211669-8172fb00-4911-11eb-8e61-ac3bfb3865f2.jpg)
![image011](https://user-images.githubusercontent.com/73073984/103211675-85068200-4911-11eb-96e6-72840355da23.png)








![Uploading image001.jpg…
![image002](https://user-images.githubusercontent.com/73073984/103211645-74560c00-4911-11eb-9fea-c0123f3d5b8c.png)
]()

Light Key
Το Light Key συμπεριλαμβάνει τα πλεονεκτήματα και των δύο παραπάνω τεχνολογιών.  Απαιτεί μεν την κοντινή απόσταση με τον receiver της πόρτας. 
Το συγκεκριμένο σύστημα βασίζεται στη μεταφορά του σήματος από τον πομπό στον δέκτη με τη χρήση Laser. Η κατευθυντικότητα της ηλεκτρομαγνητική ακτινοβολία του laser καθιστά το σήμα εξαιρετικά δύσκολο να υποκλαπεί καθώς η υποκλοπή του σημαίνει και διακοπή του σήματος από τον πομπό στο δέκτη.
Δεν κάνει χρήση μπαταρίας καθώς λαμβάνει ασύρματη ενέργεια κατά την προσέγγιση του στην πόρτα.
Δεν χρειάζεται μέσω αποθήκευσης ενέργειας (μπαταρία) καθώς κάνει χρήση Wireless energy transfer τεχνολογίας. Ο  key receiver που βρίσκεται στην πόρτα παρέχει ρεύμα στο πρωτεύων πηνίο και έτσι to smart key που διαθέτει το δευτερεύων μπορεί να ενεργοποιηθεί σε κοντινή απόσταση.
Rolling Code:
 AES cryptography 254-128:
Με την κρυπτογράφηση του Rolling Code μηδενίζεται η πιθανότητα παραβίασης του συστήματος με τεχνική brute forcing.

Μαγνητικό Σύστημα Ενεργοποίησης Κλειδιού:
Ο key receiver διαθέτει τέσσερις μαγνήτες για την έλξη του smart key ώστε κάθε φορά αυτό να βρίσκεται στη σωστή θέση και να μην απαιτείται από τον χρήστη να το τοποθετήσει σωστά.
To light key διαθέτει 2 αισθητήρες Hall ώστε από τη στιγμή που ευθυγραμμιστεί με τον key receiver αλλά και πλησιάσει σε μια συγκεκριμένη απόσταση να παράξει τον παλμό laser ο οποίος θα προσπέσει στον light sensor.
Advantages-disadvantages of light communication systems:
https://www.rfwireless-world.com/Terminology/Advantages-and-Disadvantages-of-VLC-Visible-Light-Communication.html

Αλγόριθμος λειτουργείας Light Key

Ο rolling Code κρυπτογραφείται και στέλνετε στην πόρτα με σήματα laser. Η πόρτα αποκρυπτογραφεί το σήμα που έλαβε και ελέγχει αν ο rolling Code που προέκυψε από την αποκρυπτογράφηση είναι αποδεκτός (εντός του εύρους των αποδεκτών τιμών). Στην περίπτωση αποδοχής ξεκλειδώνει την πόρτα

 

Σχηματικό Πλακέτας Κλειδιού
 
Πλακέτα Κλειδιού
Bom File
ID	Name	Designator	Footprint	Quantity
1	Header-Female-2.54_1x2	BAT1,W.C	HDR-1X2/2.54	2
2	1N4148W	DIODE3,DIODE2	SOD-123_2PIN-L3.85-W1.70-L	2
3	Header-feMale-Hall Sensor	HALL2	HDR-TH_3P-P2.54-V	1
4	Header-feMale Hall sensor1	HALL1	HDR-TH_3P-P2.54-V	1
5	CJ2310	Q2	SOT-23-3_L2.9-W1.6-P1.90-LS2.8-BR	1
6	ARDUINO_PRO_MINI	U1	ARDUINO_PRO_MINI	1
7	220S-1*4P H=8.5MM Ytype Gold-plated	H1,H3,H4,H2	DIP-1X4P2.54	4
8	10K	R6	0603	1
9	47.5	R3	0402	1
10	MBR0520LT1G	DIODE1	SOD-123_L2.8-W1.8-LS3.7-RD	1
11	laser diode Header	L.D	HDR-1X2/2.54	1








Version 1 of light key:

 
   

Version 2 of light key:


 
 

Version 3 of light key (future Implementation):

Δεν θα διαθέτει πλαϊνούς μαγνήτες η πόρτα, συνεπώς δεν χρειάζονται και οι hall sensors του κλειδιού στο πλάι
Laser και στην πόρτα και αισθητήρας φωτός και στα δυο τμήματα του συστήματος (πόρτα & κλειδί). Η μέθοδος αυτή θα μπορούσε να αποτρέψει τη χρήση αλγορίθμου συγχρονισμού πόρτας και κλειδιού.

Νέος αλγόριθμος:
Η πόρτα στέλνει ένα σήμα και δέχεται ένα σήμα. Αν το σήμα που δέχτηκε η πόρτα είναι το σωστό τότε ξεκλειδώνει.
