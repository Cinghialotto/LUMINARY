; ============================================================================================
; LUMINARY - a game engine and framework for the SEGA Mega Drive
; ============================================================================================
; Matt Phillips - Big Evil Corporation Ltd - 2nd August 2019
; ============================================================================================
; TILES.ASM - Tile loading and management routines
; ============================================================================================

VDP_LoadTiles:
    ; ======================================
    ; Loads tiles into VRAM (via immediate
    ; DMA transfer)
    ; ======================================
    ; a0   Tiles
    ; d0.w VRAM address (tiles)
    ; d1.w Num tiles
    ; ======================================

    ; Address to bytes, count to words
    lsl.w  #SIZE_TILE_SHIFT_B, d0
    lsl.w  #SIZE_TILE_SHIFT_W, d1
	
	; Immediate DMA
	bsr    VDPDMA_TransferImmediateVRAM

    rts