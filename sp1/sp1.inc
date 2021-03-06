; defines specific the the diag bios

SP_INIT_ADDR			equ $110000
BIOS_CRC32_ADDR			equ $c03ffc
PALETTE_RAM_BACKUP_LOCATION	equ $10001c
FIXMAP_BACKUP_LOCATION		equ $10201c

; variable locations in ram
; $100000 ?
; $100002 ?
rtc_pulse_state			equ $100004
timer_count			equ $100006
p1_input			equ $100008	; active buttons are 1
p2_input			equ $10000a
p1_input_edge			equ $10000c
p2_input_edge			equ $10000e
p1_input_aux			equ $100010
p2_input_aux			equ $100012
p1_input_aux_edge		equ $100014
p2_input_aux_edge		equ $100016
main_menu_cursor		equ $100018	; highlighted main menu item
z80_test_flags			equ $10001a

; bits we can set/check in z80_test_flags
Z80_TEST_FLAG_ENABLED		equ $0
Z80_TEST_FLAG_SLOT_SWITCH	equ $1

; bits for p1/2_input_edge
UP				equ $0
DOWN				equ $1
LEFT				equ $2
RIGHT				equ $3
A_BUTTON			equ $4
B_BUTTON			equ $5
C_BUTTON			equ $6
D_BUTTON			equ $7

