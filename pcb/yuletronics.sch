EESchema Schematic File Version 2
LIBS:swd_tc
LIBS:conn
LIBS:microusb
LIBS:switch
LIBS:tlv61225
LIBS:stm32f0xxfxpx
LIBS:l
LIBS:led
LIBS:c
LIBS:r
LIBS:pwr
LIBS:power
LIBS:mcp1700
LIBS:device
LIBS:agg-kicad
LIBS:uln2003
LIBS:xc6210b332mr
LIBS:yuletronics-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Electronics Club Michalmas Project"
Date "2016-10-11"
Rev "1"
Comp ""
Comment1 "Drawn By: D Turner & A Greig"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L STM32F0xxFxPx IC1
U 1 1 57FD69DB
P 2700 4200
F 0 "IC1" H 2200 4900 50  0000 L CNN
F 1 "STM32F042F6P6" H 2200 3500 50  0000 L CNN
F 2 "agg:TSSOP-20" H 2200 3400 50  0001 L CNN
F 3 "http://www.st.com/st-web-ui/static/active/en/resource/technical/document/datasheet/DM00105814.pdf" H 2200 3300 50  0001 L CNN
F 4 "2469549" H 2200 3200 50  0001 L CNN "Farnell"
	1    2700 4200
	1    0    0    -1  
$EndComp
$Comp
L SWD_TC P1
U 1 1 57FD6AC0
P 2700 5350
F 0 "P1" H 2400 5550 50  0000 L CNN
F 1 "SWD_TC" H 2400 5150 50  0000 L CNN
F 2 "agg:TC2030-NL" H 2400 5050 50  0001 L CNN
F 3 "" H 2300 5450 50  0001 C CNN
	1    2700 5350
	1    0    0    -1  
$EndComp
$Comp
L MICROUSB J2
U 1 1 57FD6B23
P 5250 4600
F 0 "J2" H 5100 4900 50  0000 L CNN
F 1 "MICROUSB" H 5100 4200 50  0000 L CNN
F 2 "agg:MICROUSB_MOLEX_47589-0001" H 5100 4100 50  0001 L CNN
F 3 "" H 5550 4800 50  0001 C CNN
F 4 "1568023" H 5100 4000 50  0001 L CNN "Farnell"
	1    5250 4600
	-1   0    0    -1  
$EndComp
NoConn ~ 3100 5450
$Comp
L GND #PWR01
U 1 1 57FD6CFB
P 2250 5500
F 0 "#PWR01" H 2120 5540 50  0001 L CNN
F 1 "GND" H 2250 5400 50  0000 C CNN
F 2 "" H 2250 5500 60  0001 C CNN
F 3 "" H 2250 5500 60  0001 C CNN
	1    2250 5500
	1    0    0    -1  
$EndComp
$Comp
L 3v3 #PWR02
U 1 1 57FD6D15
P 2250 5200
F 0 "#PWR02" H 2250 5310 50  0001 L CNN
F 1 "3v3" H 2250 5290 50  0000 C CNN
F 2 "" H 2250 5200 60  0001 C CNN
F 3 "" H 2250 5200 60  0001 C CNN
	1    2250 5200
	1    0    0    -1  
$EndComp
NoConn ~ 2300 5350
NoConn ~ 2100 4000
NoConn ~ 2100 4500
NoConn ~ 2100 4600
$Comp
L 3v3 #PWR03
U 1 1 57FD6D87
P 1950 3550
F 0 "#PWR03" H 1950 3660 50  0001 L CNN
F 1 "3v3" H 1950 3640 50  0000 C CNN
F 2 "" H 1950 3550 60  0001 C CNN
F 3 "" H 1950 3550 60  0001 C CNN
	1    1950 3550
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR04
U 1 1 57FD6DBF
P 1950 3850
F 0 "#PWR04" H 1820 3890 50  0001 L CNN
F 1 "GND" H 1950 3750 50  0000 C CNN
F 2 "" H 1950 3850 60  0001 C CNN
F 3 "" H 1950 3850 60  0001 C CNN
	1    1950 3850
	1    0    0    -1  
$EndComp
$Comp
L C C3
U 1 1 57FD6DEE
P 1500 3700
F 0 "C3" H 1550 3770 50  0000 C CNN
F 1 "100n" H 1550 3630 50  0000 C CNN
F 2 "agg:0805" H 1500 3700 50  0001 C CNN
F 3 "" H 1500 3700 50  0001 C CNN
F 4 "1759265" H 1500 3700 60  0001 C CNN "Farnell"
	1    1500 3700
	0    -1   -1   0   
$EndComp
$Comp
L C C2
U 1 1 57FD6E2B
P 1250 3700
F 0 "C2" H 1300 3770 50  0000 C CNN
F 1 "100n" H 1300 3630 50  0000 C CNN
F 2 "agg:0805" H 1250 3700 50  0001 C CNN
F 3 "" H 1250 3700 50  0001 C CNN
F 4 "1759265" H 1250 3700 60  0001 C CNN "Farnell"
	1    1250 3700
	0    -1   -1   0   
$EndComp
$Comp
L C C1
U 1 1 57FD6E81
P 1000 3700
F 0 "C1" H 1050 3770 50  0000 C CNN
F 1 "10u" H 1050 3630 50  0000 C CNN
F 2 "agg:0805" H 1000 3700 50  0001 C CNN
F 3 "" H 1000 3700 50  0001 C CNN
F 4 "2320851" H 1000 3700 60  0001 C CNN "Farnell"
	1    1000 3700
	0    -1   -1   0   
$EndComp
$Comp
L 3v3 #PWR05
U 1 1 57FD6F19
P 1500 3550
F 0 "#PWR05" H 1500 3660 50  0001 L CNN
F 1 "3v3" H 1500 3640 50  0000 C CNN
F 2 "" H 1500 3550 60  0001 C CNN
F 3 "" H 1500 3550 60  0001 C CNN
	1    1500 3550
	1    0    0    -1  
$EndComp
$Comp
L 3v3 #PWR06
U 1 1 57FD6F36
P 1250 3550
F 0 "#PWR06" H 1250 3660 50  0001 L CNN
F 1 "3v3" H 1250 3640 50  0000 C CNN
F 2 "" H 1250 3550 60  0001 C CNN
F 3 "" H 1250 3550 60  0001 C CNN
	1    1250 3550
	1    0    0    -1  
$EndComp
$Comp
L 3v3 #PWR07
U 1 1 57FD6F53
P 1000 3550
F 0 "#PWR07" H 1000 3660 50  0001 L CNN
F 1 "3v3" H 1000 3640 50  0000 C CNN
F 2 "" H 1000 3550 60  0001 C CNN
F 3 "" H 1000 3550 60  0001 C CNN
	1    1000 3550
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR08
U 1 1 57FD6F70
P 1500 3750
F 0 "#PWR08" H 1370 3790 50  0001 L CNN
F 1 "GND" H 1500 3650 50  0000 C CNN
F 2 "" H 1500 3750 60  0001 C CNN
F 3 "" H 1500 3750 60  0001 C CNN
	1    1500 3750
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR09
U 1 1 57FD6F8D
P 1250 3750
F 0 "#PWR09" H 1120 3790 50  0001 L CNN
F 1 "GND" H 1250 3650 50  0000 C CNN
F 2 "" H 1250 3750 60  0001 C CNN
F 3 "" H 1250 3750 60  0001 C CNN
	1    1250 3750
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR010
U 1 1 57FD6FAA
P 1000 3750
F 0 "#PWR010" H 870 3790 50  0001 L CNN
F 1 "GND" H 1000 3650 50  0000 C CNN
F 2 "" H 1000 3750 60  0001 C CNN
F 3 "" H 1000 3750 60  0001 C CNN
	1    1000 3750
	1    0    0    -1  
$EndComp
NoConn ~ 4950 4700
NoConn ~ 4950 4900
$Comp
L GND #PWR011
U 1 1 57FD71E8
P 4850 4850
F 0 "#PWR011" H 4720 4890 50  0001 L CNN
F 1 "GND" H 4850 4750 50  0000 C CNN
F 2 "" H 4850 4850 60  0001 C CNN
F 3 "" H 4850 4850 60  0001 C CNN
	1    4850 4850
	1    0    0    -1  
$EndComp
$Comp
L 5v #PWR012
U 1 1 57FD73DF
P 4700 4350
F 0 "#PWR012" H 4700 4460 50  0001 L CNN
F 1 "5v" H 4700 4440 50  0000 C CNN
F 2 "" H 4700 4350 60  0001 C CNN
F 3 "" H 4700 4350 60  0001 C CNN
	1    4700 4350
	1    0    0    -1  
$EndComp
$Comp
L TLV61225 IC3
U 1 1 57FD7549
P 2800 1400
F 0 "IC3" H 2500 1600 50  0000 L CNN
F 1 "TLV61225" H 2500 1200 50  0000 L CNN
F 2 "agg:SC-70-6" H 2500 1100 50  0001 L CNN
F 3 "http://www.ti.com/lit/ds/symlink/tlv61225.pdf" H 2500 1000 50  0001 L CNN
F 4 "2492362" H 2500 900 50  0001 L CNN "Farnell"
	1    2800 1400
	1    0    0    -1  
$EndComp
$Comp
L CONN_01x02 J1
U 1 1 57FD7790
P 1300 1400
F 0 "J1" H 1200 1200 50  0000 L CNN
F 1 "BATT" V 1200 1350 50  0000 C CNN
F 2 "agg:AAA_HOLDER" H 1300 1400 50  0001 C CNN
F 3 "http://www.farnell.com/datasheets/1703957.pdf" H 1300 1400 50  0001 C CNN
F 4 "1702632" H 1300 1400 60  0001 C CNN "Farnell"
	1    1300 1400
	1    0    0    1   
$EndComp
$Comp
L GND #PWR013
U 1 1 57FD78D7
P 1450 1650
F 0 "#PWR013" H 1320 1690 50  0001 L CNN
F 1 "GND" H 1450 1550 50  0000 C CNN
F 2 "" H 1450 1650 60  0001 C CNN
F 3 "" H 1450 1650 60  0001 C CNN
	1    1450 1650
	1    0    0    -1  
$EndComp
$Comp
L C C4
U 1 1 57FD795E
P 1950 1450
F 0 "C4" H 2000 1520 50  0000 C CNN
F 1 "10u" H 2000 1380 50  0000 C CNN
F 2 "agg:0805" H 1950 1450 50  0001 C CNN
F 3 "" H 1950 1450 50  0001 C CNN
F 4 "2320851" H 1950 1450 60  0001 C CNN "Farnell"
	1    1950 1450
	0    1    1    0   
$EndComp
$Comp
L GND #PWR014
U 1 1 57FD7A66
P 1950 1650
F 0 "#PWR014" H 1820 1690 50  0001 L CNN
F 1 "GND" H 1950 1550 50  0000 C CNN
F 2 "" H 1950 1650 60  0001 C CNN
F 3 "" H 1950 1650 60  0001 C CNN
	1    1950 1650
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR015
U 1 1 57FD7ACA
P 2350 1550
F 0 "#PWR015" H 2220 1590 50  0001 L CNN
F 1 "GND" H 2350 1450 50  0000 C CNN
F 2 "" H 2350 1550 60  0001 C CNN
F 3 "" H 2350 1550 60  0001 C CNN
	1    2350 1550
	1    0    0    -1  
$EndComp
$Comp
L C C7
U 1 1 57FD7B28
P 3450 1450
F 0 "C7" H 3500 1520 50  0000 C CNN
F 1 "10u" H 3500 1380 50  0000 C CNN
F 2 "agg:0805" H 3450 1450 50  0001 C CNN
F 3 "" H 3450 1450 50  0001 C CNN
F 4 "2320851" H 3450 1450 60  0001 C CNN "Farnell"
	1    3450 1450
	0    1    1    0   
$EndComp
$Comp
L L L1
U 1 1 57FD7C5C
P 2750 1800
F 0 "L1" H 2800 1850 50  0000 C CNN
F 1 "4u7" H 2800 1750 50  0000 C CNN
F 2 "agg:2016M" H 2750 1800 50  0001 C CNN
F 3 "http://www.farnell.com/datasheets/2113219.pdf" H 2750 1800 50  0001 C CNN
F 4 "2616849" H 2750 1800 60  0001 C CNN "Farnell"
	1    2750 1800
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR016
U 1 1 57FD7E88
P 3450 1650
F 0 "#PWR016" H 3320 1690 50  0001 L CNN
F 1 "GND" H 3450 1550 50  0000 C CNN
F 2 "" H 3450 1650 60  0001 C CNN
F 3 "" H 3450 1650 60  0001 C CNN
	1    3450 1650
	1    0    0    -1  
$EndComp
$Comp
L SWITCH_SPDT SW2
U 1 1 57FD810A
P 4350 1400
F 0 "SW2" H 4350 1600 50  0000 C CNN
F 1 "PWR_SWITCH" H 4350 1300 50  0000 C CNN
F 2 "agg:SPDT_SWITCH" H 4350 1400 50  0001 C CNN
F 3 "http://www.farnell.com/datasheets/2044662.pdf" H 4350 1400 50  0001 C CNN
F 4 "1201430" H 4350 1400 60  0001 C CNN "Farnell"
	1    4350 1400
	-1   0    0    -1  
$EndComp
$Comp
L PWR #FLG017
U 1 1 57FD81B9
P 1450 1200
F 0 "#FLG017" H 1450 1360 50  0001 C CNN
F 1 "PWR" H 1450 1290 50  0000 C CNN
F 2 "" H 1450 1200 50  0001 C CNN
F 3 "" H 1450 1200 50  0001 C CNN
	1    1450 1200
	1    0    0    -1  
$EndComp
$Comp
L PWR #FLG018
U 1 1 57FD8257
P 1350 1600
F 0 "#FLG018" H 1350 1760 50  0001 C CNN
F 1 "PWR" H 1350 1690 50  0000 C CNN
F 2 "" H 1350 1600 50  0001 C CNN
F 3 "" H 1350 1600 50  0001 C CNN
	1    1350 1600
	0    -1   -1   0   
$EndComp
$Comp
L 3v3 #PWR019
U 1 1 57FD85D5
P 4850 1350
F 0 "#PWR019" H 4850 1460 50  0001 L CNN
F 1 "3v3" H 4850 1440 50  0000 C CNN
F 2 "" H 4850 1350 60  0001 C CNN
F 3 "" H 4850 1350 60  0001 C CNN
	1    4850 1350
	1    0    0    -1  
$EndComp
$Comp
L SWITCH_MOM SW1
U 1 1 57FD6EFE
P 1150 4300
F 0 "SW1" H 1150 4450 50  0000 C CNN
F 1 "BOOTLOAD" H 1150 4200 50  0000 C CNN
F 2 "yule:MOM_SWITCH" H 1150 4300 50  0001 C CNN
F 3 "http://www.farnell.com/datasheets/1582297.pdf" H 1150 4300 50  0001 C CNN
F 4 "2056809" H 1150 4300 60  0001 C CNN "Farnell"
	1    1150 4300
	-1   0    0    -1  
$EndComp
$Comp
L R R1
U 1 1 57FD708A
P 1500 4450
F 0 "R1" H 1550 4500 50  0000 C CNN
F 1 "10k" H 1550 4400 50  0000 C CNN
F 2 "agg:0805" H 1500 4450 50  0001 C CNN
F 3 "" H 1500 4450 50  0001 C CNN
F 4 "9332391" H 1500 4450 60  0001 C CNN "Farnell"
	1    1500 4450
	0    1    1    0   
$EndComp
$Comp
L GND #PWR020
U 1 1 57FD71C0
P 1500 4600
F 0 "#PWR020" H 1370 4640 50  0001 L CNN
F 1 "GND" H 1500 4500 50  0000 C CNN
F 2 "" H 1500 4600 60  0001 C CNN
F 3 "" H 1500 4600 60  0001 C CNN
	1    1500 4600
	1    0    0    -1  
$EndComp
$Comp
L 3v3 #PWR021
U 1 1 57FD72D7
P 900 4250
F 0 "#PWR021" H 900 4360 50  0001 L CNN
F 1 "3v3" H 900 4340 50  0000 C CNN
F 2 "" H 900 4250 60  0001 C CNN
F 3 "" H 900 4250 60  0001 C CNN
	1    900  4250
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 4500 4950 4500
Wire Wire Line
	3300 4600 4950 4600
Wire Wire Line
	3300 4700 3900 4700
Wire Wire Line
	3900 4700 3900 5250
Wire Wire Line
	3900 5250 3100 5250
Wire Wire Line
	3300 4800 3800 4800
Wire Wire Line
	3800 4800 3800 5350
Wire Wire Line
	3800 5350 3100 5350
Wire Wire Line
	1950 3550 1950 3700
Wire Wire Line
	1950 3700 2100 3700
Wire Wire Line
	1950 3600 2100 3600
Connection ~ 1950 3600
Wire Wire Line
	1950 3800 2100 3800
Wire Wire Line
	1950 3800 1950 3850
Wire Wire Line
	1000 3750 1000 3700
Wire Wire Line
	1000 3600 1000 3550
Wire Wire Line
	1250 3550 1250 3600
Wire Wire Line
	1500 3550 1500 3600
Wire Wire Line
	1500 3700 1500 3750
Wire Wire Line
	1250 3700 1250 3750
Wire Wire Line
	4950 4800 4850 4800
Wire Wire Line
	4850 4800 4850 4850
Wire Wire Line
	4900 4350 4900 4400
Wire Wire Line
	1400 1400 1450 1400
Wire Wire Line
	1450 1400 1450 1650
Wire Wire Line
	1400 1300 2400 1300
Wire Wire Line
	1950 1450 1950 1300
Connection ~ 1950 1300
Wire Wire Line
	2400 1400 2350 1400
Wire Wire Line
	2350 1400 2350 1300
Connection ~ 2350 1300
Wire Wire Line
	1950 1550 1950 1650
Wire Wire Line
	2400 1500 2350 1500
Wire Wire Line
	2350 1500 2350 1550
Wire Wire Line
	3200 1300 4250 1300
Wire Wire Line
	3450 1300 3450 1450
Wire Wire Line
	3200 1400 3250 1400
Wire Wire Line
	3250 1400 3250 1300
Connection ~ 3250 1300
Connection ~ 3450 1300
Wire Wire Line
	2850 1800 3250 1800
Wire Wire Line
	3250 1800 3250 1500
Wire Wire Line
	3250 1500 3200 1500
Wire Wire Line
	2750 1800 2150 1800
Wire Wire Line
	2150 1800 2150 1300
Connection ~ 2150 1300
Wire Wire Line
	3450 1550 3450 1650
Wire Wire Line
	1450 1200 1450 1300
Connection ~ 1450 1300
Wire Wire Line
	1350 1600 1450 1600
Connection ~ 1450 1600
Wire Wire Line
	4450 1400 4850 1400
Wire Wire Line
	4850 1400 4850 1350
Wire Wire Line
	1250 4300 2100 4300
Wire Wire Line
	1500 4600 1500 4550
Wire Wire Line
	1500 4450 1500 4300
Connection ~ 1500 4300
Wire Wire Line
	900  4250 900  4300
Wire Wire Line
	900  4300 1050 4300
Text Label 3450 3800 0    60   ~ 0
led_1R
Text Label 3450 3900 0    60   ~ 0
led_1G
Text Label 3450 4200 0    60   ~ 0
led_1B
Text Label 3450 3600 0    60   ~ 0
led_2R
Text Label 3450 3700 0    60   ~ 0
led_2G
Text Label 3450 4300 0    60   ~ 0
led_2B
Wire Wire Line
	3450 4300 3300 4300
Wire Wire Line
	3300 4200 3450 4200
Wire Wire Line
	3450 4000 3300 4000
Wire Wire Line
	3300 3900 3450 3900
Wire Wire Line
	3450 3800 3300 3800
Wire Wire Line
	3300 3700 3450 3700
Wire Wire Line
	3450 3600 3300 3600
$Comp
L R R2
U 1 1 57FD8940
P 4200 3950
F 0 "R2" H 4250 4000 50  0000 C CNN
F 1 "10k" H 4250 3900 50  0000 C CNN
F 2 "agg:0805" H 4200 3950 50  0001 C CNN
F 3 "" H 4200 3950 50  0001 C CNN
F 4 "9332391" H 4200 3950 60  0001 C CNN "Farnell"
	1    4200 3950
	0    1    1    0   
$EndComp
$Comp
L R R3
U 1 1 57FD8C2E
P 4200 4150
F 0 "R3" H 4250 4200 50  0000 C CNN
F 1 "10k" H 4250 4100 50  0000 C CNN
F 2 "agg:0805" H 4200 4150 50  0001 C CNN
F 3 "" H 4200 4150 50  0001 C CNN
F 4 "9332391" H 4200 4150 60  0001 C CNN "Farnell"
	1    4200 4150
	0    1    1    0   
$EndComp
$Comp
L GND #PWR022
U 1 1 57FD8C7C
P 4200 4300
F 0 "#PWR022" H 4070 4340 50  0001 L CNN
F 1 "GND" H 4200 4200 50  0000 C CNN
F 2 "" H 4200 4300 60  0001 C CNN
F 3 "" H 4200 4300 60  0001 C CNN
	1    4200 4300
	1    0    0    -1  
$EndComp
Wire Wire Line
	4200 4300 4200 4250
Wire Wire Line
	4450 4400 4450 3900
Wire Wire Line
	4450 3900 4200 3900
Wire Wire Line
	4200 3900 4200 3950
Connection ~ 4900 4400
Wire Wire Line
	3300 4100 4200 4100
Wire Wire Line
	4200 4050 4200 4150
Connection ~ 4200 4100
Text Label 3450 4500 0    60   ~ 0
USB_DM
Text Label 3450 4600 0    60   ~ 0
USB_DP
Text Label 1600 1300 0    60   ~ 0
VBATT
Text Label 3600 1300 0    60   ~ 0
BATT_3V3
$Comp
L 5v #PWR023
U 1 1 57FDB93E
P 1950 2150
F 0 "#PWR023" H 1950 2260 50  0001 L CNN
F 1 "5v" H 1950 2240 50  0000 C CNN
F 2 "" H 1950 2150 60  0001 C CNN
F 3 "" H 1950 2150 60  0001 C CNN
	1    1950 2150
	1    0    0    -1  
$EndComp
Wire Wire Line
	1950 2200 1950 2150
$Comp
L GND #PWR024
U 1 1 57FDBD78
P 3300 2550
F 0 "#PWR024" H 3170 2590 50  0001 L CNN
F 1 "GND" H 3300 2450 50  0000 C CNN
F 2 "" H 3300 2550 60  0001 C CNN
F 3 "" H 3300 2550 60  0001 C CNN
	1    3300 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	4050 2200 4050 1400
Wire Wire Line
	4050 1400 4250 1400
Text Label 3600 2200 0    60   ~ 0
USB_3V3
Text Label 3450 4100 0    60   ~ 0
USB_DETECT
Wire Wire Line
	4450 4400 4950 4400
Text Label 3450 4700 0    60   ~ 0
SWDIO
Text Label 3450 4800 0    60   ~ 0
SWCLK
Text Label 2000 4300 2    60   ~ 0
SWITCH
Text Notes 850  2800 0    100  ~ 0
Power Supply
Wire Notes Line
	750  2900 750  900 
Text Notes 850  5900 0    100  ~ 0
Microcontroller
Wire Notes Line
	750  3300 750  6000
Text Notes 6050 5450 0    100  ~ 0
LEDs
Wire Notes Line
	5950 900  10000 900 
Wire Notes Line
	5950 900  5950 5500
$Comp
L PWR #FLG025
U 1 1 57FE1C19
P 4650 1350
F 0 "#FLG025" H 4650 1510 50  0001 C CNN
F 1 "PWR" H 4650 1440 50  0000 C CNN
F 2 "" H 4650 1350 50  0001 C CNN
F 3 "" H 4650 1350 50  0001 C CNN
	1    4650 1350
	1    0    0    -1  
$EndComp
Wire Wire Line
	4650 1400 4650 1350
Connection ~ 4650 1400
Wire Wire Line
	2250 5250 2300 5250
Wire Wire Line
	2250 5200 2250 5250
Wire Wire Line
	2250 5450 2250 5500
Wire Wire Line
	2300 5450 2250 5450
$Comp
L PWR #FLG026
U 1 1 57FEA647
P 4900 4350
F 0 "#FLG026" H 4900 4510 50  0001 C CNN
F 1 "PWR" H 4900 4440 50  0000 C CNN
F 2 "" H 4900 4350 50  0001 C CNN
F 3 "" H 4900 4350 50  0001 C CNN
	1    4900 4350
	1    0    0    -1  
$EndComp
Wire Wire Line
	4700 4350 4700 4400
Connection ~ 4700 4400
Wire Notes Line
	750  900  5550 900 
Wire Notes Line
	5550 900  5550 2900
Wire Notes Line
	5550 2900 750  2900
Wire Notes Line
	750  6000 5550 6000
Wire Notes Line
	5550 3300 750  3300
Wire Notes Line
	5550 6000 5550 3300
$Comp
L LED_RABG D3
U 1 1 5801FAD5
P 6450 4450
F 0 "D3" H 6525 4800 50  0000 C CNN
F 1 "LED_RABG" H 6475 4100 50  0000 C CNN
F 2 "yule:CREE_RGB_LED" H 6400 4400 50  0001 C CNN
F 3 "" H 6400 4400 50  0000 C CNN
F 4 "1855553" H 6450 4450 60  0001 C CNN "Farnell"
	1    6450 4450
	0    -1   -1   0   
$EndComp
$Comp
L 3v3 #PWR027
U 1 1 5801FADC
P 6450 4100
F 0 "#PWR027" H 6450 4210 50  0001 L CNN
F 1 "3v3" H 6450 4190 50  0000 C CNN
F 2 "" H 6450 4100 60  0001 C CNN
F 3 "" H 6450 4100 60  0001 C CNN
	1    6450 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	6450 4150 6450 4100
$Comp
L R R15
U 1 1 5801FAE3
P 6650 4800
F 0 "R15" H 6700 4850 50  0000 C CNN
F 1 "30" H 6700 4750 50  0000 C CNN
F 2 "agg:0805" H 6650 4800 50  0001 C CNN
F 3 "" H 6650 4800 50  0001 C CNN
F 4 "9333029" H 6650 4800 60  0001 C CNN "Farnell"
	1    6650 4800
	0    1    1    0   
$EndComp
$Comp
L R R12
U 1 1 5801FAEA
P 6450 4800
F 0 "R12" H 6500 4850 50  0000 C CNN
F 1 "30" H 6500 4750 50  0000 C CNN
F 2 "agg:0805" H 6450 4800 50  0001 C CNN
F 3 "" H 6450 4800 50  0001 C CNN
F 4 "9333029" H 6450 4800 60  0001 C CNN "Farnell"
	1    6450 4800
	0    1    1    0   
$EndComp
$Comp
L R R7
U 1 1 5801FAF1
P 6250 4800
F 0 "R7" H 6300 4850 50  0000 C CNN
F 1 "100" H 6300 4750 50  0000 C CNN
F 2 "agg:0805" H 6250 4800 50  0001 C CNN
F 3 "" H 6250 4800 50  0001 C CNN
F 4 "9332375" H 6250 4800 60  0001 C CNN "Farnell"
	1    6250 4800
	0    1    1    0   
$EndComp
Wire Wire Line
	6250 4800 6250 4750
Wire Wire Line
	6450 4800 6450 4750
Wire Wire Line
	6650 4800 6650 4750
Text Label 6250 4950 3    60   ~ 0
LED1R
Text Label 6450 4950 3    60   ~ 0
LED1G
Text Label 6650 4950 3    60   ~ 0
LED1B
Wire Wire Line
	6250 4950 6250 4900
Wire Wire Line
	6450 4950 6450 4900
Wire Wire Line
	6650 4950 6650 4900
$Comp
L LED_RABG D5
U 1 1 5802013F
P 6450 3050
F 0 "D5" H 6525 3400 50  0000 C CNN
F 1 "LED_RABG" H 6475 2700 50  0000 C CNN
F 2 "yule:CREE_RGB_LED" H 6400 3000 50  0001 C CNN
F 3 "" H 6400 3000 50  0000 C CNN
F 4 "1855553" H 6450 3050 60  0001 C CNN "Farnell"
	1    6450 3050
	0    -1   -1   0   
$EndComp
$Comp
L 3v3 #PWR028
U 1 1 58020146
P 6450 2700
F 0 "#PWR028" H 6450 2810 50  0001 L CNN
F 1 "3v3" H 6450 2790 50  0000 C CNN
F 2 "" H 6450 2700 60  0001 C CNN
F 3 "" H 6450 2700 60  0001 C CNN
	1    6450 2700
	1    0    0    -1  
$EndComp
Wire Wire Line
	6450 2750 6450 2700
$Comp
L R R23
U 1 1 5802014D
P 6650 3400
F 0 "R23" H 6700 3450 50  0000 C CNN
F 1 "30" H 6700 3350 50  0000 C CNN
F 2 "agg:0805" H 6650 3400 50  0001 C CNN
F 3 "" H 6650 3400 50  0001 C CNN
F 4 "9333029" H 6650 3400 60  0001 C CNN "Farnell"
	1    6650 3400
	0    1    1    0   
$EndComp
$Comp
L R R20
U 1 1 58020154
P 6450 3400
F 0 "R20" H 6500 3450 50  0000 C CNN
F 1 "30" H 6500 3350 50  0000 C CNN
F 2 "agg:0805" H 6450 3400 50  0001 C CNN
F 3 "" H 6450 3400 50  0001 C CNN
F 4 "9333029" H 6450 3400 60  0001 C CNN "Farnell"
	1    6450 3400
	0    1    1    0   
$EndComp
$Comp
L R R17
U 1 1 5802015B
P 6250 3400
F 0 "R17" H 6300 3450 50  0000 C CNN
F 1 "100" H 6300 3350 50  0000 C CNN
F 2 "agg:0805" H 6250 3400 50  0001 C CNN
F 3 "" H 6250 3400 50  0001 C CNN
F 4 "9332375" H 6250 3400 60  0001 C CNN "Farnell"
	1    6250 3400
	0    1    1    0   
$EndComp
Wire Wire Line
	6250 3400 6250 3350
Wire Wire Line
	6450 3400 6450 3350
Wire Wire Line
	6650 3400 6650 3350
Text Label 6250 3550 3    60   ~ 0
LED1R
Text Label 6450 3550 3    60   ~ 0
LED1G
Text Label 6650 3550 3    60   ~ 0
LED1B
Wire Wire Line
	6250 3550 6250 3500
Wire Wire Line
	6450 3550 6450 3500
Wire Wire Line
	6650 3550 6650 3500
$Comp
L LED_RABG D6
U 1 1 5802016B
P 6450 1650
F 0 "D6" H 6525 2000 50  0000 C CNN
F 1 "LED_RABG" H 6475 1300 50  0000 C CNN
F 2 "yule:CREE_RGB_LED" H 6400 1600 50  0001 C CNN
F 3 "" H 6400 1600 50  0000 C CNN
F 4 "1855553" H 6450 1650 60  0001 C CNN "Farnell"
	1    6450 1650
	0    -1   -1   0   
$EndComp
$Comp
L 3v3 #PWR029
U 1 1 58020172
P 6450 1300
F 0 "#PWR029" H 6450 1410 50  0001 L CNN
F 1 "3v3" H 6450 1390 50  0000 C CNN
F 2 "" H 6450 1300 60  0001 C CNN
F 3 "" H 6450 1300 60  0001 C CNN
	1    6450 1300
	1    0    0    -1  
$EndComp
Wire Wire Line
	6450 1350 6450 1300
$Comp
L R R24
U 1 1 58020179
P 6650 2000
F 0 "R24" H 6700 2050 50  0000 C CNN
F 1 "30" H 6700 1950 50  0000 C CNN
F 2 "agg:0805" H 6650 2000 50  0001 C CNN
F 3 "" H 6650 2000 50  0001 C CNN
F 4 "9333029" H 6650 2000 60  0001 C CNN "Farnell"
	1    6650 2000
	0    1    1    0   
$EndComp
$Comp
L R R21
U 1 1 58020180
P 6450 2000
F 0 "R21" H 6500 2050 50  0000 C CNN
F 1 "30" H 6500 1950 50  0000 C CNN
F 2 "agg:0805" H 6450 2000 50  0001 C CNN
F 3 "" H 6450 2000 50  0001 C CNN
F 4 "9333029" H 6450 2000 60  0001 C CNN "Farnell"
	1    6450 2000
	0    1    1    0   
$EndComp
$Comp
L R R18
U 1 1 58020187
P 6250 2000
F 0 "R18" H 6300 2050 50  0000 C CNN
F 1 "100" H 6300 1950 50  0000 C CNN
F 2 "agg:0805" H 6250 2000 50  0001 C CNN
F 3 "" H 6250 2000 50  0001 C CNN
F 4 "9332375" H 6250 2000 60  0001 C CNN "Farnell"
	1    6250 2000
	0    1    1    0   
$EndComp
Wire Wire Line
	6250 2000 6250 1950
Wire Wire Line
	6450 2000 6450 1950
Wire Wire Line
	6650 2000 6650 1950
Text Label 6250 2150 3    60   ~ 0
LED1R
Text Label 6450 2150 3    60   ~ 0
LED1G
Text Label 6650 2150 3    60   ~ 0
LED1B
Wire Wire Line
	6250 2150 6250 2100
Wire Wire Line
	6450 2150 6450 2100
Wire Wire Line
	6650 2150 6650 2100
Wire Notes Line
	5950 5500 10900 5500
$Comp
L 3v3 #PWR030
U 1 1 58024A68
P 4250 5200
F 0 "#PWR030" H 4250 5310 50  0001 L CNN
F 1 "3v3" H 4250 5290 50  0000 C CNN
F 2 "" H 4250 5200 60  0001 C CNN
F 3 "" H 4250 5200 60  0001 C CNN
	1    4250 5200
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR031
U 1 1 58025545
P 4800 5650
F 0 "#PWR031" H 4670 5690 50  0001 L CNN
F 1 "GND" H 4800 5550 50  0000 C CNN
F 2 "" H 4800 5650 60  0001 C CNN
F 3 "" H 4800 5650 60  0001 C CNN
	1    4800 5650
	1    0    0    -1  
$EndComp
Text Label 3450 4000 0    60   ~ 0
BUTTON
Text Label 4950 5350 0    60   ~ 0
BUTTON
Text Notes 3800 5900 0    60   ~ 0
Brightness (pwm) control?
Wire Wire Line
	7800 4950 7800 4900
Wire Wire Line
	7600 4950 7600 4900
Wire Wire Line
	7400 4950 7400 4900
Text Label 7800 4950 3    60   ~ 0
LED2B
Text Label 7600 4950 3    60   ~ 0
LED2G
Text Label 7400 4950 3    60   ~ 0
LED2R
Wire Wire Line
	7800 4800 7800 4750
Wire Wire Line
	7600 4800 7600 4750
Wire Wire Line
	7400 4800 7400 4750
$Comp
L R R36
U 1 1 58020685
P 7400 4800
F 0 "R36" H 7450 4850 50  0000 C CNN
F 1 "100" H 7450 4750 50  0000 C CNN
F 2 "agg:0805" H 7400 4800 50  0001 C CNN
F 3 "" H 7400 4800 50  0001 C CNN
F 4 "9332375" H 7400 4800 60  0001 C CNN "Farnell"
	1    7400 4800
	0    1    1    0   
$EndComp
$Comp
L R R39
U 1 1 5802067E
P 7600 4800
F 0 "R39" H 7650 4850 50  0000 C CNN
F 1 "30" H 7650 4750 50  0000 C CNN
F 2 "agg:0805" H 7600 4800 50  0001 C CNN
F 3 "" H 7600 4800 50  0001 C CNN
F 4 "9333029" H 7600 4800 60  0001 C CNN "Farnell"
	1    7600 4800
	0    1    1    0   
$EndComp
$Comp
L R R42
U 1 1 58020677
P 7800 4800
F 0 "R42" H 7850 4850 50  0000 C CNN
F 1 "30" H 7850 4750 50  0000 C CNN
F 2 "agg:0805" H 7800 4800 50  0001 C CNN
F 3 "" H 7800 4800 50  0001 C CNN
F 4 "9333029" H 7800 4800 60  0001 C CNN "Farnell"
	1    7800 4800
	0    1    1    0   
$EndComp
Wire Wire Line
	7600 4150 7600 4100
$Comp
L 3v3 #PWR032
U 1 1 58020670
P 7600 4100
F 0 "#PWR032" H 7600 4210 50  0001 L CNN
F 1 "3v3" H 7600 4190 50  0000 C CNN
F 2 "" H 7600 4100 60  0001 C CNN
F 3 "" H 7600 4100 60  0001 C CNN
	1    7600 4100
	1    0    0    -1  
$EndComp
$Comp
L LED_RABG D14
U 1 1 58020669
P 7600 4450
F 0 "D14" H 7675 4800 50  0000 C CNN
F 1 "LED_RABG" H 7625 4100 50  0000 C CNN
F 2 "yule:CREE_RGB_LED" H 7550 4400 50  0001 C CNN
F 3 "" H 7550 4400 50  0000 C CNN
F 4 "1855553" H 7600 4450 60  0001 C CNN "Farnell"
	1    7600 4450
	0    -1   -1   0   
$EndComp
Wire Wire Line
	7800 3550 7800 3500
Wire Wire Line
	7600 3550 7600 3500
Wire Wire Line
	7400 3550 7400 3500
Text Label 7800 3550 3    60   ~ 0
LED2B
Text Label 7600 3550 3    60   ~ 0
LED2G
Text Label 7400 3550 3    60   ~ 0
LED2R
Wire Wire Line
	7800 3400 7800 3350
Wire Wire Line
	7600 3400 7600 3350
Wire Wire Line
	7400 3400 7400 3350
$Comp
L R R35
U 1 1 58020659
P 7400 3400
F 0 "R35" H 7450 3450 50  0000 C CNN
F 1 "100" H 7450 3350 50  0000 C CNN
F 2 "agg:0805" H 7400 3400 50  0001 C CNN
F 3 "" H 7400 3400 50  0001 C CNN
F 4 "9332375" H 7400 3400 60  0001 C CNN "Farnell"
	1    7400 3400
	0    1    1    0   
$EndComp
$Comp
L R R38
U 1 1 58020652
P 7600 3400
F 0 "R38" H 7650 3450 50  0000 C CNN
F 1 "30" H 7650 3350 50  0000 C CNN
F 2 "agg:0805" H 7600 3400 50  0001 C CNN
F 3 "" H 7600 3400 50  0001 C CNN
F 4 "9333029" H 7600 3400 60  0001 C CNN "Farnell"
	1    7600 3400
	0    1    1    0   
$EndComp
$Comp
L R R41
U 1 1 5802064B
P 7800 3400
F 0 "R41" H 7850 3450 50  0000 C CNN
F 1 "30" H 7850 3350 50  0000 C CNN
F 2 "agg:0805" H 7800 3400 50  0001 C CNN
F 3 "" H 7800 3400 50  0001 C CNN
F 4 "9333029" H 7800 3400 60  0001 C CNN "Farnell"
	1    7800 3400
	0    1    1    0   
$EndComp
Wire Wire Line
	7600 2750 7600 2700
$Comp
L 3v3 #PWR033
U 1 1 58020644
P 7600 2700
F 0 "#PWR033" H 7600 2810 50  0001 L CNN
F 1 "3v3" H 7600 2790 50  0000 C CNN
F 2 "" H 7600 2700 60  0001 C CNN
F 3 "" H 7600 2700 60  0001 C CNN
	1    7600 2700
	1    0    0    -1  
$EndComp
$Comp
L LED_RABG D13
U 1 1 5802063D
P 7600 3050
F 0 "D13" H 7675 3400 50  0000 C CNN
F 1 "LED_RABG" H 7625 2700 50  0000 C CNN
F 2 "yule:CREE_RGB_LED" H 7550 3000 50  0001 C CNN
F 3 "" H 7550 3000 50  0000 C CNN
F 4 "1855553" H 7600 3050 60  0001 C CNN "Farnell"
	1    7600 3050
	0    -1   -1   0   
$EndComp
Wire Wire Line
	7800 2150 7800 2100
Wire Wire Line
	7600 2150 7600 2100
Wire Wire Line
	7400 2150 7400 2100
Text Label 7800 2150 3    60   ~ 0
LED2B
Text Label 7600 2150 3    60   ~ 0
LED2G
Text Label 7400 2150 3    60   ~ 0
LED2R
Wire Wire Line
	7800 2000 7800 1950
Wire Wire Line
	7600 2000 7600 1950
Wire Wire Line
	7400 2000 7400 1950
$Comp
L R R26
U 1 1 580205D5
P 7400 2000
F 0 "R26" H 7450 2050 50  0000 C CNN
F 1 "100" H 7450 1950 50  0000 C CNN
F 2 "agg:0805" H 7400 2000 50  0001 C CNN
F 3 "" H 7400 2000 50  0001 C CNN
F 4 "9332375" H 7400 2000 60  0001 C CNN "Farnell"
	1    7400 2000
	0    1    1    0   
$EndComp
$Comp
L R R29
U 1 1 580205CE
P 7600 2000
F 0 "R29" H 7650 2050 50  0000 C CNN
F 1 "30" H 7650 1950 50  0000 C CNN
F 2 "agg:0805" H 7600 2000 50  0001 C CNN
F 3 "" H 7600 2000 50  0001 C CNN
F 4 "9333029" H 7600 2000 60  0001 C CNN "Farnell"
	1    7600 2000
	0    1    1    0   
$EndComp
$Comp
L R R32
U 1 1 580205C7
P 7800 2000
F 0 "R32" H 7850 2050 50  0000 C CNN
F 1 "30" H 7850 1950 50  0000 C CNN
F 2 "agg:0805" H 7800 2000 50  0001 C CNN
F 3 "" H 7800 2000 50  0001 C CNN
F 4 "9333029" H 7800 2000 60  0001 C CNN "Farnell"
	1    7800 2000
	0    1    1    0   
$EndComp
Wire Wire Line
	7600 1350 7600 1300
$Comp
L 3v3 #PWR034
U 1 1 580205C0
P 7600 1300
F 0 "#PWR034" H 7600 1410 50  0001 L CNN
F 1 "3v3" H 7600 1390 50  0000 C CNN
F 2 "" H 7600 1300 60  0001 C CNN
F 3 "" H 7600 1300 60  0001 C CNN
	1    7600 1300
	1    0    0    -1  
$EndComp
$Comp
L LED_RABG D10
U 1 1 580205B9
P 7600 1650
F 0 "D10" H 7675 2000 50  0000 C CNN
F 1 "LED_RABG" H 7625 1300 50  0000 C CNN
F 2 "yule:CREE_RGB_LED" H 7550 1600 50  0001 C CNN
F 3 "" H 7550 1600 50  0000 C CNN
F 4 "1855553" H 7600 1650 60  0001 C CNN "Farnell"
	1    7600 1650
	0    -1   -1   0   
$EndComp
NoConn ~ 2100 4200
$Comp
L CONN_01x08 J3
U 1 1 58029304
P 9000 3000
F 0 "J3" H 8950 3100 50  0000 L CNN
F 1 "CONN_01x08" H 8950 2200 50  0000 L CNN
F 2 "yule:Interboard" H 9000 3000 50  0001 C CNN
F 3 "" H 9000 3000 50  0001 C CNN
	1    9000 3000
	1    0    0    -1  
$EndComp
Text Label 9300 3000 0    60   ~ 0
LED1R
Text Label 9300 3100 0    60   ~ 0
LED1G
Text Label 9300 3200 0    60   ~ 0
LED1B
Wire Wire Line
	9100 3200 9300 3200
Wire Wire Line
	9100 3100 9300 3100
Wire Wire Line
	9100 3000 9300 3000
Wire Wire Line
	9100 3400 9400 3400
Text Label 9300 3700 0    60   ~ 0
LED2G
Text Label 9300 3600 0    60   ~ 0
LED2R
Text Label 9300 3500 0    60   ~ 0
LED2B
Wire Wire Line
	9100 3500 9300 3500
Wire Wire Line
	9100 3600 9300 3600
Wire Wire Line
	9300 3700 9100 3700
$Comp
L 3v3 #PWR035
U 1 1 5802A71D
P 9400 3350
F 0 "#PWR035" H 9400 3460 50  0001 L CNN
F 1 "3v3" H 9400 3440 50  0000 C CNN
F 2 "" H 9400 3350 60  0001 C CNN
F 3 "" H 9400 3350 60  0001 C CNN
	1    9400 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	9100 3300 9150 3300
Wire Wire Line
	9150 3300 9150 3400
Wire Wire Line
	9400 3400 9400 3350
Connection ~ 9150 3400
$Comp
L PART X1
U 1 1 5802B8A6
P 6050 5900
F 0 "X1" H 6100 6000 50  0000 L CNN
F 1 "Silk_art" H 6100 5900 50  0000 L CNN
F 2 "yule:tree_silk_scaled" H 6050 5900 50  0001 C CNN
F 3 "" H 6050 5900 50  0001 C CNN
	1    6050 5900
	1    0    0    -1  
$EndComp
$Comp
L ULN2003D1013TR U2
U 1 1 5807DADE
P 9150 1550
F 0 "U2" H 9750 700 60  0000 C CNN
F 1 "ULN2003D1013TR" H 9750 1700 60  0000 C CNN
F 2 "agg:SOIC-16" H 9750 600 60  0001 C CNN
F 3 "http://www.farnell.com/datasheets/1955910.pdf" H 9750 400 60  0001 C CNN
F 4 "1467825" H 9750 500 60  0001 C CNN "Farnell"
	1    9150 1550
	1    0    0    -1  
$EndComp
Wire Notes Line
	10900 5500 10900 900 
Wire Notes Line
	10900 900  9950 900 
Text Label 8950 1550 2    60   ~ 0
led_1B
Text Label 8950 1650 2    60   ~ 0
led_1G
Text Label 8950 1750 2    60   ~ 0
led_1R
Text Label 8950 1850 2    60   ~ 0
led_2G
Text Label 8950 1950 2    60   ~ 0
led_2R
Text Label 8950 2050 2    60   ~ 0
led_2B
NoConn ~ 9150 2150
NoConn ~ 10350 2250
NoConn ~ 10350 2150
$Comp
L GND #PWR036
U 1 1 58081AA3
P 9100 2300
F 0 "#PWR036" H 8970 2340 50  0001 L CNN
F 1 "GND" H 9100 2200 50  0000 C CNN
F 2 "" H 9100 2300 60  0001 C CNN
F 3 "" H 9100 2300 60  0001 C CNN
	1    9100 2300
	1    0    0    -1  
$EndComp
Wire Wire Line
	9100 2300 9100 2250
Wire Wire Line
	9100 2250 9150 2250
Wire Wire Line
	8950 1550 9150 1550
Wire Wire Line
	8950 1650 9150 1650
Wire Wire Line
	8950 1750 9150 1750
Wire Wire Line
	8950 1850 9150 1850
Wire Wire Line
	8950 1950 9150 1950
Wire Wire Line
	8950 2050 9150 2050
Text Label 10500 1550 0    60   ~ 0
LED1B
Text Label 10500 1650 0    60   ~ 0
LED1G
Text Label 10500 1750 0    60   ~ 0
LED1R
Text Label 10500 1850 0    60   ~ 0
LED2G
Text Label 10500 1950 0    60   ~ 0
LED2R
Text Label 10500 2050 0    60   ~ 0
LED2B
Wire Wire Line
	10350 1550 10500 1550
Wire Wire Line
	10350 1650 10500 1650
Wire Wire Line
	10350 1750 10500 1750
Wire Wire Line
	10350 1850 10500 1850
Wire Wire Line
	10350 1950 10500 1950
Wire Wire Line
	10350 2050 10500 2050
$Comp
L XC6210B332MR U1
U 1 1 5808BB90
P 2400 2200
F 0 "U1" H 2850 1850 60  0000 C CNN
F 1 "XC6210B332MR" H 2850 2350 60  0000 C CNN
F 2 "agg:SOT-23-5" H 2850 1750 60  0001 C CNN
F 3 "http://www.farnell.com/datasheets/2012972.pdf" H 2850 1550 60  0001 C CNN
F 4 "1057803" H 2850 1650 60  0001 C CNN "Farnell"
	1    2400 2200
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 2200 4050 2200
Wire Wire Line
	2400 2200 1950 2200
Wire Wire Line
	2400 2400 2250 2400
Wire Wire Line
	2250 2200 2250 2450
Connection ~ 2250 2200
Wire Wire Line
	3300 2550 3300 2400
$Comp
L C C6
U 1 1 5808CA0D
P 3400 2250
F 0 "C6" H 3450 2320 50  0000 C CNN
F 1 "1u" H 3450 2180 50  0000 C CNN
F 2 "agg:0805" H 3400 2250 50  0001 C CNN
F 3 "" H 3400 2250 50  0001 C CNN
F 4 "2320853" H 3400 2250 60  0001 C CNN "Farnell"
	1    3400 2250
	0    1    1    0   
$EndComp
$Comp
L C C5
U 1 1 5808CF05
P 2250 2450
F 0 "C5" H 2300 2520 50  0000 C CNN
F 1 "1u" H 2300 2380 50  0000 C CNN
F 2 "agg:0805" H 2250 2450 50  0001 C CNN
F 3 "" H 2250 2450 50  0001 C CNN
F 4 "2320853" H 2250 2450 60  0001 C CNN "Farnell"
	1    2250 2450
	0    1    1    0   
$EndComp
$Comp
L GND #PWR037
U 1 1 5808CFD7
P 2250 2600
F 0 "#PWR037" H 2120 2640 50  0001 L CNN
F 1 "GND" H 2250 2500 50  0000 C CNN
F 2 "" H 2250 2600 60  0001 C CNN
F 3 "" H 2250 2600 60  0001 C CNN
	1    2250 2600
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 2400 3400 2400
Wire Wire Line
	3400 2400 3400 2350
Wire Wire Line
	3400 2250 3400 2200
Connection ~ 3400 2200
Connection ~ 2250 2400
Wire Wire Line
	2250 2550 2250 2600
$Comp
L SWITCH_MOM SW3
U 1 1 5808E24A
P 4450 5350
F 0 "SW3" H 4450 5500 50  0000 C CNN
F 1 "BUTTON" H 4450 5250 50  0000 C CNN
F 2 "yule:MOM_SWITCH" H 4450 5350 50  0001 C CNN
F 3 "http://www.farnell.com/datasheets/1582297.pdf" H 4450 5350 50  0001 C CNN
F 4 "2056809" H 4450 5350 60  0001 C CNN "Farnell"
	1    4450 5350
	-1   0    0    -1  
$EndComp
$Comp
L R R4
U 1 1 5808FB7A
P 4800 5450
F 0 "R4" H 4850 5500 50  0000 C CNN
F 1 "10k" H 4850 5400 50  0000 C CNN
F 2 "agg:0805" H 4800 5450 50  0001 C CNN
F 3 "" H 4800 5450 50  0001 C CNN
F 4 "9332391" H 4800 5450 60  0001 C CNN "Farnell"
	1    4800 5450
	0    1    1    0   
$EndComp
Wire Wire Line
	4550 5350 4950 5350
Wire Wire Line
	4800 5450 4800 5350
Connection ~ 4800 5350
Wire Wire Line
	4800 5550 4800 5650
Wire Wire Line
	4350 5350 4250 5350
Wire Wire Line
	4250 5350 4250 5200
$Comp
L LED D1
U 1 1 58097B31
P 9200 4700
F 0 "D1" H 9200 4800 50  0000 L CNN
F 1 "LED" H 9200 4625 50  0000 L CNN
F 2 "agg:0805-LED" H 9200 4700 50  0001 C CNN
F 3 "" H 9200 4700 50  0001 C CNN
F 4 "2099242" H 9200 4700 60  0001 C CNN "Farnell"
	1    9200 4700
	0    -1   -1   0   
$EndComp
$Comp
L 3v3 #PWR038
U 1 1 58098160
P 9200 4200
F 0 "#PWR038" H 9200 4310 50  0001 L CNN
F 1 "3v3" H 9200 4290 50  0000 C CNN
F 2 "" H 9200 4200 60  0001 C CNN
F 3 "" H 9200 4200 60  0001 C CNN
	1    9200 4200
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR039
U 1 1 580987D6
P 9200 4800
F 0 "#PWR039" H 9070 4840 50  0001 L CNN
F 1 "GND" H 9200 4700 50  0000 C CNN
F 2 "" H 9200 4800 60  0001 C CNN
F 3 "" H 9200 4800 60  0001 C CNN
	1    9200 4800
	1    0    0    -1  
$EndComp
Wire Wire Line
	9200 4200 9200 4400
Wire Wire Line
	9200 4500 9200 4600
Wire Wire Line
	9500 4400 9500 4300
Wire Wire Line
	9500 4300 9200 4300
Connection ~ 9200 4300
Wire Wire Line
	9500 4500 9500 4600
Wire Wire Line
	9500 4700 9500 4750
Wire Wire Line
	9500 4750 9200 4750
Wire Wire Line
	9200 4700 9200 4800
Connection ~ 9200 4750
Text Notes 9050 5100 0    60   ~ 0
Power indicators/star light
$Comp
L LED D2
U 1 1 580998C3
P 9500 4700
F 0 "D2" H 9500 4800 50  0000 L CNN
F 1 "LED" H 9500 4625 50  0000 L CNN
F 2 "agg:0805-LED" H 9500 4700 50  0001 C CNN
F 3 "" H 9500 4700 50  0001 C CNN
F 4 "2099242" H 9500 4700 60  0001 C CNN "Farnell"
	1    9500 4700
	0    -1   -1   0   
$EndComp
$Comp
L R R5
U 1 1 58099A5B
P 9200 4400
F 0 "R5" H 9250 4450 50  0000 C CNN
F 1 "100" H 9250 4350 50  0000 C CNN
F 2 "agg:0805" H 9200 4400 50  0001 C CNN
F 3 "" H 9200 4400 50  0001 C CNN
F 4 "9332375" H 9200 4400 60  0001 C CNN "Farnell"
	1    9200 4400
	0    1    1    0   
$EndComp
$Comp
L R R6
U 1 1 58099CFF
P 9500 4400
F 0 "R6" H 9550 4450 50  0000 C CNN
F 1 "100" H 9550 4350 50  0000 C CNN
F 2 "agg:0805" H 9500 4400 50  0001 C CNN
F 3 "" H 9500 4400 50  0001 C CNN
F 4 "9332375" H 9500 4400 60  0001 C CNN "Farnell"
	1    9500 4400
	0    1    1    0   
$EndComp
$EndSCHEMATC
