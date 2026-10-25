// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1458561b0 FUN_1458561b0 body=496 status=ok
// SIG undefined FUN_1458561b0(void)

undefined8 * FUN_1458561b0(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 == '\x02') {
    puVar2 = (undefined8 *)FUN_14001cc68(0xf8,0x10);
    *puVar2 = &PTR_FUN_149f61740;
    puVar2[1] = 0xffefffffffffffff;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0xffefffffffffffff;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 0x80;
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
    puVar2[0xf] = 0xffefffffffffffff;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0xffefffffffffffff;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc4) = 0xffffffff00000080;
    puVar2[0x1d] = puVar2 + 1;
    puVar2[0x1e] = puVar2 + 0xf;
  }
  else if (param_2 == '\x04') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    FUN_146e9eb34(puVar2);
  }
  else if (param_2 == '\x03') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x160,0x10);
    *puVar2 = &PTR_FUN_149f61780;
    lVar3 = 0x58;
    do {
      *(undefined8 *)((longlong)puVar2 + lVar3 + -0x50) = 0xffefffffffffffff;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x48);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)puVar2 + lVar3 + -0x38) = 0xffefffffffffffff;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)puVar2 + lVar3) = 0;
      ((undefined8 *)((longlong)puVar2 + lVar3))[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x30);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)((longlong)puVar2 + lVar3 + -4) = 0x80;
      *(undefined4 *)((longlong)puVar2 + lVar3) = 0xffffffff;
      lVar3 = lVar3 + 0x70;
    } while (lVar3 != 0x1a8);
    *(undefined4 *)(puVar2 + 0x2b) = 1;
    *(undefined4 *)((longlong)puVar2 + 0x15c) = 0;
  }
  else if (param_2 == '\x01') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x78,0x10);
    *puVar2 = &PTR_FUN_149f61700;
    puVar2[1] = 0xffefffffffffffff;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0xffefffffffffffff;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 0x80;
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  *param_1 = puVar2;
  return param_1;
}



// FUNCTION 1458563a0 FUN_1458563a0 body=496 status=ok
// SIG undefined FUN_1458563a0(void)

undefined8 * FUN_1458563a0(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 == '\x02') {
    puVar2 = (undefined8 *)FUN_14001cc68(0xf8,0x10);
    *puVar2 = &PTR_FUN_149f61a20;
    puVar2[1] = 0xffefffffffffffff;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0xffefffffffffffff;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 0x80;
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
    puVar2[0xf] = 0xffefffffffffffff;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0xffefffffffffffff;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc4) = 0xffffffff00000080;
    puVar2[0x1d] = puVar2 + 1;
    puVar2[0x1e] = puVar2 + 0xf;
  }
  else if (param_2 == '\x04') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    FUN_146ea06b4(puVar2);
  }
  else if (param_2 == '\x03') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x160,0x10);
    *puVar2 = &PTR_FUN_149f61a60;
    lVar3 = 0x58;
    do {
      *(undefined8 *)((longlong)puVar2 + lVar3 + -0x50) = 0xffefffffffffffff;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x48);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)puVar2 + lVar3 + -0x38) = 0xffefffffffffffff;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)puVar2 + lVar3) = 0;
      ((undefined8 *)((longlong)puVar2 + lVar3))[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x30);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)((longlong)puVar2 + lVar3 + -4) = 0x80;
      *(undefined4 *)((longlong)puVar2 + lVar3) = 0xffffffff;
      lVar3 = lVar3 + 0x70;
    } while (lVar3 != 0x1a8);
    *(undefined4 *)(puVar2 + 0x2b) = 1;
    *(undefined4 *)((longlong)puVar2 + 0x15c) = 0;
  }
  else if (param_2 == '\x01') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x78,0x10);
    *puVar2 = &PTR_FUN_149f619e0;
    puVar2[1] = 0xffefffffffffffff;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0xffefffffffffffff;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 0x80;
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  *param_1 = puVar2;
  return param_1;
}



// FUNCTION 145856590 FUN_145856590 body=496 status=ok
// SIG undefined FUN_145856590(void)

undefined8 * FUN_145856590(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 == '\x02') {
    puVar2 = (undefined8 *)FUN_14001cc68(0xf8,0x10);
    *puVar2 = &PTR_FUN_149f61d00;
    puVar2[1] = 0xffefffffffffffff;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0xffefffffffffffff;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 0x80;
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
    puVar2[0xf] = 0xffefffffffffffff;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0xffefffffffffffff;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc4) = 0xffffffff00000080;
    puVar2[0x1d] = puVar2 + 1;
    puVar2[0x1e] = puVar2 + 0xf;
  }
  else if (param_2 == '\x04') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    FUN_146ea0e20(puVar2);
  }
  else if (param_2 == '\x03') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x160,0x10);
    *puVar2 = &PTR_FUN_149f61d40;
    lVar3 = 0x58;
    do {
      *(undefined8 *)((longlong)puVar2 + lVar3 + -0x50) = 0xffefffffffffffff;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x48);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)puVar2 + lVar3 + -0x38) = 0xffefffffffffffff;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)puVar2 + lVar3) = 0;
      ((undefined8 *)((longlong)puVar2 + lVar3))[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x30);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)((longlong)puVar2 + lVar3 + -4) = 0x80;
      *(undefined4 *)((longlong)puVar2 + lVar3) = 0xffffffff;
      lVar3 = lVar3 + 0x70;
    } while (lVar3 != 0x1a8);
    *(undefined4 *)(puVar2 + 0x2b) = 1;
    *(undefined4 *)((longlong)puVar2 + 0x15c) = 0;
  }
  else if (param_2 == '\x01') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x78,0x10);
    *puVar2 = &PTR_FUN_149f61cc0;
    puVar2[1] = 0xffefffffffffffff;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0xffefffffffffffff;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 0x80;
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  *param_1 = puVar2;
  return param_1;
}



// FUNCTION 145856780 FUN_145856780 body=522 status=ok
// SIG undefined FUN_145856780(void)

undefined8 * FUN_145856780(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 == '\x02') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x108);
    *puVar2 = &PTR_FUN_149f618b0;
    puVar2[1] = 0xffefffffffffffff;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2[5] = 0xffefffffffffffff;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0x80;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    puVar2[0x10] = 0xffefffffffffffff;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    *(undefined1 *)(puVar2 + 0x13) = 0;
    puVar2[0x14] = 0xffefffffffffffff;
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    *(undefined8 *)((longlong)puVar2 + 0xd4) = 0xffffffff00000080;
    puVar2[0x1f] = puVar2 + 1;
    puVar2[0x20] = puVar2 + 0x10;
  }
  else if (param_2 == '\x04') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    FUN_146e9fe5a(puVar2);
  }
  else if (param_2 == '\x03') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x178,0x10);
    *puVar2 = &PTR_FUN_149f618f0;
    lVar3 = 0x60;
    do {
      *(undefined8 *)((longlong)puVar2 + lVar3 + -0x58) = 0xffefffffffffffff;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x50);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)((longlong)puVar2 + lVar3 + -0x40) = 0;
      *(undefined8 *)((longlong)puVar2 + lVar3 + -0x38) = 0xffefffffffffffff;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)puVar2 + lVar3) = 0;
      ((undefined8 *)((longlong)puVar2 + lVar3))[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x30);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)((longlong)puVar2 + lVar3 + -4) = 0x80;
      *(undefined4 *)((longlong)puVar2 + lVar3) = 0xffffffff;
      lVar3 = lVar3 + 0x78;
    } while (lVar3 != 0x1c8);
    *(undefined4 *)(puVar2 + 0x2e) = 1;
    *(undefined4 *)((longlong)puVar2 + 0x174) = 0;
  }
  else if (param_2 == '\x01') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    *puVar2 = &PTR_FUN_149f61870;
    puVar2[1] = 0xffefffffffffffff;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2[5] = 0xffefffffffffffff;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0x80;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  *param_1 = puVar2;
  return param_1;
}



// FUNCTION 14585698a FUN_14585698a body=522 status=ok
// SIG undefined FUN_14585698a(void)

undefined8 * FUN_14585698a(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 == '\x02') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x108);
    *puVar2 = &PTR_FUN_149f61e70;
    puVar2[1] = 0xffefffffffffffff;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2[5] = 0xffefffffffffffff;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0x80;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
    puVar2[0x10] = 0xffefffffffffffff;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    *(undefined1 *)(puVar2 + 0x13) = 0;
    puVar2[0x14] = 0xffefffffffffffff;
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    *(undefined8 *)((longlong)puVar2 + 0xd4) = 0xffffffff00000080;
    puVar2[0x1f] = puVar2 + 1;
    puVar2[0x20] = puVar2 + 0x10;
  }
  else if (param_2 == '\x04') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    FUN_146ea1238(puVar2);
  }
  else if (param_2 == '\x03') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x178,0x10);
    *puVar2 = &PTR_FUN_149f61eb0;
    lVar3 = 0x60;
    do {
      *(undefined8 *)((longlong)puVar2 + lVar3 + -0x58) = 0xffefffffffffffff;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x50);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)((longlong)puVar2 + lVar3 + -0x40) = 0;
      *(undefined8 *)((longlong)puVar2 + lVar3 + -0x38) = 0xffefffffffffffff;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)puVar2 + lVar3) = 0;
      ((undefined8 *)((longlong)puVar2 + lVar3))[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x30);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)((longlong)puVar2 + lVar3 + -4) = 0x80;
      *(undefined4 *)((longlong)puVar2 + lVar3) = 0xffffffff;
      lVar3 = lVar3 + 0x78;
    } while (lVar3 != 0x1c8);
    *(undefined4 *)(puVar2 + 0x2e) = 1;
    *(undefined4 *)((longlong)puVar2 + 0x174) = 0;
  }
  else if (param_2 == '\x01') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    *puVar2 = &PTR_FUN_149f61e30;
    puVar2[1] = 0xffefffffffffffff;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2[5] = 0xffefffffffffffff;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0x80;
    *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  *param_1 = puVar2;
  return param_1;
}



// FUNCTION 145856b94 FUN_145856b94 body=84 status=ok
// SIG undefined FUN_145856b94(void)

longlong * FUN_145856b94(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 145856be8 FUN_145856be8 body=276 status=ok
// SIG undefined FUN_145856be8(void)

float * FUN_145856be8(longlong param_1,float *param_2)

{
  float fVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = *(int *)(param_1 + 0x88);
  if (iVar5 == 1) {
    fVar6 = *(float *)(param_1 + 0x8c);
    fVar1 = *(float *)(param_1 + 0x90);
    uVar3 = rand();
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = ((float)(uVar3 & 0x7fff) / 32767.0) * (fVar1 - fVar6) + fVar6;
    uVar2 = 3;
  }
  else if (iVar5 == 2) {
    fVar6 = *(float *)(param_1 + 0x8c);
    iVar5 = (int)*(float *)(param_1 + 0x90) - (int)fVar6;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else {
      uVar3 = rand();
      iVar4 = (int)((float)(iVar5 + 1) * ((float)(uVar3 & 0x7fff) / 32767.0));
      if (iVar4 < iVar5) {
        iVar5 = iVar4;
      }
    }
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = (float)(iVar5 + (int)fVar6);
    uVar2 = 2;
  }
  else if (iVar5 == 0) {
    uVar3 = rand();
    fVar6 = (float)(uVar3 & 0x7fff) / 32767.0;
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = (float)(uint)(0 < (int)(fVar6 + fVar6));
    uVar2 = 1;
  }
  else {
    *(undefined2 *)(param_2 + 6) = 0;
    uVar2 = 0;
  }
  *(undefined1 *)(param_2 + 8) = uVar2;
  return param_2;
}



// FUNCTION 145856d0a FUN_145856d0a body=40 status=ok
// SIG undefined FUN_145856d0a(void)

undefined8 FUN_145856d0a(undefined8 param_1,int param_2)

{
  FUN_145856d32();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145856d32 FUN_145856d32 body=58 status=ok
// SIG undefined FUN_145856d32(void)

void FUN_145856d32(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b07f180;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145856d6c FUN_145856d6c body=39 status=ok
// SIG undefined FUN_145856d6c(void)

void FUN_145856d6c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000145856d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 145856d94 FUN_145856d94 body=177 status=ok
// SIG undefined FUN_145856d94(void)

void FUN_145856d94(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x220);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
  *(int *)(lVar3 + 0x1b0) = *(int *)(lVar3 + 0x1b0) + 1;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (*(char *)(lVar3 + 0x38) == '\0') {
    if (*(int *)(lVar3 + 0x3c) != 0) goto LAB_145856df3;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x3c) + 1;
  }
  *(undefined1 *)(lVar3 + 0x38) = 0;
  *(int *)(lVar3 + 0x3c) = iVar4;
LAB_145856df3:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145856e46 FUN_145856e46 body=190 status=ok
// SIG undefined FUN_145856e46(void)

undefined8 FUN_145856e46(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    uVar1 = (uint)((ulonglong)DAT_14cb8ae68 >> 0x10);
    uVar3 = (uint)DAT_14cb8ae68 & 0xffff;
    lVar2 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x88);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (int)((ulonglong)DAT_14cb8ae68 >> 0x20) +
                             ((uint)DAT_14cb8ae68 << 0x10 | uVar3) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x48) + (longlong)iVar4 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar4 * 0x38) == DAT_14cb8ae68)
        {
          if ((lVar2 != 0) && (lVar2 + 8 != 0)) {
            FUN_145856f04(lVar2 + 8,param_2);
            return param_2;
          }
          break;
        }
        iVar4 = *(int *)(lVar2 + 0x30);
      } while (iVar4 != -1);
    }
  }
  FUN_14124ed18(param_2,param_3);
  return param_2;
}



// FUNCTION 145856f04 FUN_145856f04 body=197 status=ok
// SIG undefined FUN_145856f04(void)

undefined8 FUN_145856f04(longlong param_1,undefined8 param_2,undefined8 ***param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x20) == '\x1d') {
    FUN_14124ed18(param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  FUN_1400b56fe(local_48,param_1,0x1d);
  if (local_28 != 0) {
    param_3 = local_48;
  }
  FUN_14124ed18(param_2,param_3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_48;
    if (0x18 < local_30) {
      pppuVar2 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145856fca FUN_145856fca body=40 status=ok
// SIG undefined FUN_145856fca(void)

undefined8 FUN_145856fca(undefined8 param_1,int param_2)

{
  FUN_145856ff2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145856ff2 FUN_145856ff2 body=867 status=ok
// SIG undefined FUN_145856ff2(void)

void FUN_145856ff2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b7bea10;
  if (((*(uint *)(param_1 + 1) & 0x10) == 0) && (param_1[0xb2] != 0)) {
    FUN_1411ebbe4();
    param_1[0xb2] = 0;
  }
  plVar3 = (longlong *)param_1[0x121];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (*(char *)(param_1 + 0x119) == '\x01') {
    FUN_148d94d7e(param_1 + 0x108);
    *(undefined1 *)(param_1 + 0x119) = 0;
  }
  if ((longlong *)param_1[0x102] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x102] + 0x10))();
  }
  FUN_14127b1cd(param_1[0x100],*(undefined4 *)(param_1 + 0x101));
  if (param_1[0x100] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xff) = 0;
  if (param_1[0xfe] != 0) {
    FUN_1400020a8();
  }
  FUN_145857356(param_1 + 0xf6);
  plVar3 = (longlong *)param_1[0xf4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (param_1[0xef] != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0xe7);
  FUN_140b6c454(param_1[0xdf],*(undefined4 *)(param_1 + 0xe0));
  if (param_1[0xdf] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0xde) == '\x01') {
    FUN_14124efea(param_1 + 0xba);
    *(undefined1 *)(param_1 + 0xde) = 0;
  }
  if (*(char *)(param_1 + 0xb7) == '\x01') {
    *(undefined1 *)(param_1 + 0xb7) = 0;
  }
  plVar3 = (longlong *)param_1[0xb4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_144760e21(param_1[0xaf],*(undefined4 *)(param_1 + 0xb0));
  if (param_1[0xaf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xac],*(undefined4 *)(param_1 + 0xad));
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xa9],*(undefined4 *)(param_1 + 0xaa));
  if (param_1[0xa9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xa6],*(undefined4 *)(param_1 + 0xa7));
  if (param_1[0xa6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xa3],*(undefined4 *)(param_1 + 0xa4));
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xa0],*(undefined4 *)(param_1 + 0xa1));
  if (param_1[0xa0] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x9d],*(undefined4 *)(param_1 + 0x9e));
  if (param_1[0x9d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x9a],*(undefined4 *)(param_1 + 0x9b));
  if (param_1[0x9a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x97],*(undefined4 *)(param_1 + 0x98));
  if (param_1[0x97] != 0) {
    FUN_1400020a8();
  }
  FUN_14585751c(param_1);
  return;
}



// FUNCTION 145857356 FUN_145857356 body=55 status=ok
// SIG undefined FUN_145857356(void)

void FUN_145857356(longlong *param_1)

{
  FUN_14585738e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14585738e FUN_14585738e body=397 status=ok
// SIG undefined FUN_14585738e(void)

void FUN_14585738e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      plVar4 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14585751c FUN_14585751c body=848 status=ok
// SIG undefined FUN_14585751c(void)

void FUN_14585751c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e4020;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    if (param_1[0x69] != 0) {
      FUN_1411ebbe4();
      param_1[0x69] = 0;
    }
    if (param_1[0x6a] != 0) {
      FUN_1411ebbe4();
      param_1[0x6a] = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x95) = 0;
  if (param_1[0x94] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x8b) = 0;
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x82);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  FUN_14585786c(param_1 + 0x77);
  plVar2 = (longlong *)param_1[0x76];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0x67];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(char *)((longlong)param_1 + 0x329) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x329) = 0;
  }
  if (*(char *)(param_1 + 100) == '\x01') {
    if (param_1[0x62] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 100) = 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    if (param_1[0x5e] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x54],*(undefined4 *)(param_1 + 0x55));
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x51],*(undefined4 *)(param_1 + 0x52));
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4e],*(undefined4 *)(param_1 + 0x4f));
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4b],*(undefined4 *)(param_1 + 0x4c));
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x48],*(undefined4 *)(param_1 + 0x49));
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x45],*(undefined4 *)(param_1 + 0x46));
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x42],*(undefined4 *)(param_1 + 0x43));
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3c],*(undefined4 *)(param_1 + 0x3d));
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_1458578a4(param_1);
  return;
}



// FUNCTION 14585786c FUN_14585786c body=55 status=ok
// SIG undefined FUN_14585786c(void)

void FUN_14585786c(longlong *param_1)

{
  FUN_145857902(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458578a4 FUN_1458578a4 body=93 status=ok
// SIG undefined FUN_1458578a4(void)

void FUN_1458578a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4c0760;
  FUN_14124efea(param_1 + 0x17);
  FUN_1449db362(param_1 + 0xd);
  FUN_1449db362(param_1 + 0xb);
  FUN_1449db362(param_1 + 9);
  FUN_1449db362(param_1 + 7);
  FUN_1449db362(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145857902 FUN_145857902 body=121 status=ok
// SIG undefined FUN_145857902(void)

void FUN_145857902(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14585797c FUN_14585797c body=29 status=ok
// SIG undefined FUN_14585797c(void)

void FUN_14585797c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14585799a FUN_14585799a body=73 status=ok
// SIG undefined FUN_14585799a(void)

undefined8 * FUN_14585799a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b47add0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458579e4 FUN_1458579e4 body=99 status=ok
// SIG undefined FUN_1458579e4(void)

void FUN_1458579e4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145857a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145857a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 145857a8e FUN_145857a8e body=493 status=ok
// SIG undefined FUN_145857a8e(void)

undefined8 FUN_145857a8e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x128) == '\x01') {
    *(undefined1 *)(param_1 + 0x128) = 0;
    FUN_145857cae();
    plVar3 = *(longlong **)(param_1 + 0xe8);
    if ((plVar3 != (longlong *)0x0) && (DAT_14c872bd8 == '\0')) {
      (**(code **)(*plVar3 + 0xb0))(plVar3,0xffffffff);
    }
    if (*(longlong *)(param_1 + 0x118) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x120);
      if (plVar3 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x118) = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x118) = 0;
        *(undefined8 *)(param_1 + 0x120) = 0;
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0x108) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x110);
      if (plVar3 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x108) = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x108) = 0;
        *(undefined8 *)(param_1 + 0x110) = 0;
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x100);
      if (plVar3 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0xf8) = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0xf8) = 0;
        *(undefined8 *)(param_1 + 0x100) = 0;
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    plVar3 = (longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      plVar4 = *(longlong **)(param_1 + 0xe0);
      if (plVar4 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0xd8) = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0xd8) = 0;
        *(undefined8 *)(param_1 + 0xe0) = 0;
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    if (*plVar3 != 0) {
      plVar4 = *(longlong **)(param_1 + 0xf0);
      if (plVar4 == (longlong *)0x0) {
        *plVar3 = 0;
      }
      else {
        *plVar3 = 0;
        *(undefined8 *)(param_1 + 0xf0) = 0;
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
  }
  return 1;
}



// FUNCTION 145857c7c FUN_145857c7c body=9 status=ok
// SIG undefined FUN_145857c7c(void)

void FUN_145857c7c(longlong param_1)

{
  FUN_145857e72(param_1 + 0x10);
  return;
}



// FUNCTION 145857c86 FUN_145857c86 body=9 status=ok
// SIG undefined FUN_145857c86(void)

void FUN_145857c86(longlong param_1)

{
  FUN_14585837c(param_1 + 0x10);
  return;
}



// FUNCTION 145857c90 FUN_145857c90 body=9 status=ok
// SIG undefined FUN_145857c90(void)

void FUN_145857c90(longlong param_1)

{
  FUN_145857d74(param_1 + 0x10);
  return;
}



// FUNCTION 145857c9a FUN_145857c9a body=9 status=ok
// SIG undefined FUN_145857c9a(void)

void FUN_145857c9a(longlong param_1)

{
  FUN_145858712(param_1 + 0x10);
  return;
}



// FUNCTION 145857ca4 FUN_145857ca4 body=9 status=ok
// SIG undefined FUN_145857ca4(void)

void FUN_145857ca4(longlong param_1)

{
  FUN_145857fc2(param_1 + 0x10);
  return;
}



// FUNCTION 145857cae FUN_145857cae body=47 status=ok
// SIG undefined FUN_145857cae(void)

undefined1 FUN_145857cae(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145857cde();
  FUN_14126849c(uVar1,param_1);
  FUN_14124fa2e(param_1);
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return 1;
}



// FUNCTION 145857cde FUN_145857cde body=149 status=ok
// SIG undefined FUN_145857cde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145857cde(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867948) {
    FUN_144b3d300(&DAT_14c867948);
    if (DAT_14c867948 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c867908);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c867908,4000);
      DAT_14c867930 = 0;
      _DAT_14c867938 = 0;
      _DAT_14c867940 = 2;
      atexit(FUN_14277fb9a);
      _Init_thread_footer(&DAT_14c867948);
    }
  }
  return &DAT_14c867908;
}



// FUNCTION 145857d74 FUN_145857d74 body=115 status=ok
// SIG undefined FUN_145857d74(void)

void FUN_145857d74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba3c780;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145857356(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145857e3c(param_1 + 8);
  FUN_145857de8(param_1);
  return;
}



// FUNCTION 145857de8 FUN_145857de8 body=83 status=ok
// SIG undefined FUN_145857de8(void)

void FUN_145857de8(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ba41730;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145857e3c FUN_145857e3c body=53 status=ok
// SIG undefined FUN_145857e3c(void)

void FUN_145857e3c(longlong *param_1)

{
  FUN_14585845e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145857e72 FUN_145857e72 body=157 status=ok
// SIG undefined FUN_145857e72(void)

void FUN_145857e72(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba3d230;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_145857f10(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_145857f10(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145857f8c(param_1 + 0xe);
  FUN_145857f46(param_1);
  return;
}



// FUNCTION 145857f10 FUN_145857f10 body=53 status=ok
// SIG undefined FUN_145857f10(void)

void FUN_145857f10(longlong *param_1)

{
  FUN_145858222();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145857f46 FUN_145857f46 body=70 status=ok
// SIG undefined FUN_145857f46(void)

void FUN_145857f46(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14ba3d8c0;
  lVar1 = 0x50;
  do {
    FUN_144760e21(*(undefined8 *)((longlong)param_1 + lVar1),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 8));
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x10);
  return;
}



// FUNCTION 145857f8c FUN_145857f8c body=53 status=ok
// SIG undefined FUN_145857f8c(void)

void FUN_145857f8c(longlong *param_1)

{
  FUN_14124fa98();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145857fc2 FUN_145857fc2 body=162 status=ok
// SIG undefined FUN_145857fc2(void)

void FUN_145857fc2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba3c5e0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_145858064(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_14585809a(param_1 + 0x32);
  FUN_1458580d0(param_1);
  return;
}



// FUNCTION 145858064 FUN_145858064 body=53 status=ok
// SIG undefined FUN_145858064(void)

void FUN_145858064(longlong *param_1)

{
  FUN_1458585d6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14585809a FUN_14585809a body=53 status=ok
// SIG undefined FUN_14585809a(void)

void FUN_14585809a(longlong *param_1)

{
  FUN_145858cae();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458580d0 FUN_1458580d0 body=337 status=ok
// SIG undefined FUN_1458580d0(void)

void FUN_1458580d0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14ba41590;
  FUN_144760e21(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0;
  do {
    FUN_144760e21(*(undefined8 *)((longlong)param_1 + lVar1 + 0x158),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 0x160));
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x158) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x60);
  lVar1 = 0;
  do {
    FUN_144760e21(*(undefined8 *)((longlong)param_1 + lVar1 + 0xf8),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 0x100));
    if (*(longlong *)((longlong)param_1 + lVar1 + 0xf8) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x60);
  FUN_144760e21(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x70;
  do {
    FUN_144760e21(*(undefined8 *)((longlong)param_1 + lVar1 + -8),
                  *(undefined4 *)((longlong)param_1 + lVar1));
    if (*(longlong *)((longlong)param_1 + lVar1 + -8) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x10);
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145858222 FUN_145858222 body=345 status=ok
// SIG undefined FUN_145858222(void)

void FUN_145858222(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x38);
      FUN_145a1b312(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585837c FUN_14585837c body=183 status=ok
// SIG undefined FUN_14585837c(void)

void FUN_14585837c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3c8f0;
  plVar3 = (longlong *)param_1[0x59];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x55];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_145858433(param_1[0x52],*(undefined4 *)(param_1 + 0x53));
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x50];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_145859142(param_1);
  return;
}



// FUNCTION 145858433 FUN_145858433 body=43 status=ok
// SIG undefined FUN_145858433(void)

void FUN_145858433(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14592e5d6(param_1);
    param_1 = param_1 + 0x150;
  }
  return;
}



// FUNCTION 14585845e FUN_14585845e body=305 status=ok
// SIG undefined FUN_14585845e(void)

void FUN_14585845e(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_145858590((longlong)iStack_4c * 0x68 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145858590 FUN_145858590 body=69 status=ok
// SIG undefined FUN_145858590(void)

void FUN_145858590(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf04cc(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458585d6 FUN_1458585d6 body=315 status=ok
// SIG undefined FUN_1458585d6(void)

void FUN_1458585d6(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_145c39dac((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145858712 FUN_145858712 body=320 status=ok
// SIG undefined FUN_145858712(void)

void FUN_145858712(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba40870;
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (param_1[0xab] != 0) {
    FUN_1400020a8();
  }
  FUN_145858852(param_1 + 0xa3);
  *(undefined4 *)(param_1 + 0xa2) = 0;
  if (param_1[0xa1] != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(param_1 + 0x99);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (param_1[0x97] != 0) {
    FUN_1400020a8();
  }
  FUN_145858888(param_1 + 0x8f);
  *(undefined4 *)(param_1 + 0x8e) = 0;
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  FUN_1458588be(param_1 + 0x85);
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x7b);
  *(undefined4 *)(param_1 + 0x7a) = 0;
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  FUN_145857356(param_1 + 0x71);
  FUN_145858e14(param_1);
  return;
}



// FUNCTION 145858852 FUN_145858852 body=53 status=ok
// SIG undefined FUN_145858852(void)

void FUN_145858852(longlong *param_1)

{
  FUN_145858b64();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145858888 FUN_145858888 body=53 status=ok
// SIG undefined FUN_145858888(void)

void FUN_145858888(longlong *param_1)

{
  FUN_1458588f4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458588be FUN_1458588be body=53 status=ok
// SIG undefined FUN_1458588be(void)

void FUN_1458588be(longlong *param_1)

{
  FUN_145858a2c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458588f4 FUN_1458588f4 body=311 status=ok
// SIG undefined FUN_1458588f4(void)

void FUN_1458588f4(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_145d2362a((longlong)iStack_4c * 0x68 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145858a2c FUN_145858a2c body=311 status=ok
// SIG undefined FUN_145858a2c(void)

void FUN_145858a2c(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1459b0910((longlong)iStack_4c * 0x68 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145858b64 FUN_145858b64 body=329 status=ok
// SIG undefined FUN_145858b64(void)

void FUN_145858b64(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1461e1494((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145858cae FUN_145858cae body=356 status=ok
// SIG undefined FUN_145858cae(void)

void FUN_145858cae(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145858e14 FUN_145858e14 body=813 status=ok
// SIG undefined FUN_145858e14(void)

void FUN_145858e14(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14ba412b0;
  FUN_144760e21(param_1[0x6d],*(undefined4 *)(param_1 + 0x6e));
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x67],*(undefined4 *)(param_1 + 0x68));
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[100],*(undefined4 *)(param_1 + 0x65));
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0;
  do {
    FUN_144760e21(*(undefined8 *)((longlong)param_1 + lVar1 + 0x308),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 0x310));
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x308) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x60);
  lVar1 = 0;
  do {
    FUN_144760e21(*(undefined8 *)((longlong)param_1 + lVar1 + 0x2a8),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 0x2b0));
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x2a8) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x60);
  lVar1 = 0;
  do {
    FUN_144760e21(*(undefined8 *)((longlong)param_1 + lVar1 + 0x248),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 0x250));
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x248) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x60);
  lVar1 = 0;
  do {
    FUN_144760e21(*(undefined8 *)((longlong)param_1 + lVar1 + 0x1e8),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 0x1f0));
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x1e8) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x60);
  lVar1 = 0;
  do {
    FUN_144760e21(*(undefined8 *)((longlong)param_1 + lVar1 + 0x188),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 400));
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x188) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x60);
  FUN_144760e21(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0;
  do {
    FUN_144760e21(*(undefined8 *)((longlong)param_1 + lVar1 + 0xb0),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 0xb8));
    if (*(longlong *)((longlong)param_1 + lVar1 + 0xb0) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x60);
  lVar1 = 0x50;
  do {
    FUN_144760e21(*(undefined8 *)((longlong)param_1 + lVar1),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 8));
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x10);
  return;
}



// FUNCTION 145859142 FUN_145859142 body=961 status=ok
// SIG undefined FUN_145859142(void)

void FUN_145859142(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR__purecall_14ba3d3e0;
  FUN_144760e21(param_1[0x4c],*(undefined4 *)(param_1 + 0x4d));
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x49],*(undefined4 *)(param_1 + 0x4a));
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x46],*(undefined4 *)(param_1 + 0x47));
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x43],*(undefined4 *)(param_1 + 0x44));
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x40],*(undefined4 *)(param_1 + 0x41));
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3d],*(undefined4 *)(param_1 + 0x3e));
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0;
  do {
    FUN_144760e21(*(undefined8 *)((longlong)param_1 + lVar1 + 0x1d0),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 0x1d8));
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x1d0) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x60);
  FUN_144760e21(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145859504 FUN_145859504 body=104 status=ok
// SIG undefined FUN_145859504(void)

undefined8 FUN_145859504(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_14585956e(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585956e FUN_14585956e body=22 status=ok
// SIG undefined FUN_14585956e(void)

undefined8 FUN_14585956e(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb784e8;
  if (DAT_14cb784e8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb784e8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb784e8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb784e8[0x3a] <= *(int *)((longlong)DAT_14cb784e8 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb784e8 + 0x300))(DAT_14cb784e8);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 145859584 FUN_145859584 body=75 status=ok
// SIG undefined FUN_145859584(void)

undefined1 FUN_145859584(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_14124fed2(param_2 + -0x18,param_3 + -0x18);
      FUN_1458595d0(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1458595d0 FUN_1458595d0 body=84 status=ok
// SIG undefined FUN_1458595d0(void)

longlong * FUN_1458595d0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 145859624 FUN_145859624 body=81 status=ok
// SIG undefined FUN_145859624(void)

undefined4 FUN_145859624(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_2;
  uVar6 = FUN_145859676();
  uVar5 = FUN_1448093f4(uVar3,uVar6);
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return uVar5;
}



// FUNCTION 145859676 FUN_145859676 body=57 status=ok
// SIG undefined FUN_145859676(void)

void FUN_145859676(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc01f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc01f0 = FUN_140002ddd(FUN_146615ecc,uVar1,L"SpawnerStyleDef_OakTown");
  }
  return;
}



// FUNCTION 1458596b6 FUN_1458596b6 body=221 status=ok
// SIG undefined FUN_1458596b6(void)

longlong FUN_1458596b6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c975198 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1469636d1;
    local_40 = FUN_14627c685;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/SlateCore",L"SlateWidgetStyleContainerBase",&DAT_14c975198,
                  &DAT_1469636d0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c975198;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585979a FUN_14585979a body=221 status=ok
// SIG undefined FUN_14585979a(void)

longlong FUN_14585979a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabf0f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14785cdad;
    local_40 = FUN_14636e9c3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"AsyncPhysicsData",&DAT_14cabf0f0,&DAT_14785cdac);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabf0f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585987e FUN_14585987e body=221 status=ok
// SIG undefined FUN_14585987e(void)

longlong FUN_14585987e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac7960 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478a066f;
    local_40 = &LAB_140612ce9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshSocket",&DAT_14cac7960,FUN_146394488);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac7960;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145859962 FUN_145859962 body=221 status=ok
// SIG undefined FUN_145859962(void)

longlong FUN_145859962(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad49c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a4509d;
    local_40 = FUN_1463c1eab;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/Engine",L"CurveTable",&DAT_14cad49c8,&DAT_147a4509c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad49c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145859a46 FUN_145859a46 body=221 status=ok
// SIG undefined FUN_145859a46(void)

longlong FUN_145859a46(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb29768 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fe76cb;
    local_40 = FUN_146458bda;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"CameraValueInterpolator",&DAT_14cb29768,
                  &DAT_147fe76ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29768;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145859b2a FUN_145859b2a body=221 status=ok
// SIG undefined FUN_145859b2a(void)

longlong FUN_145859b2a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4ad00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148422c25;
    local_40 = &LAB_14648c37a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x108;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoElementBase",&DAT_14cb4ad00,
                  &DAT_148422c24);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4ad00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145859c0e FUN_145859c0e body=221 status=ok
// SIG undefined FUN_145859c0e(void)

longlong FUN_145859c0e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4b868 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14845043b;
    local_40 = FUN_14648fa9d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractiveToolBuilder",&DAT_14cb4b868,
                  &DAT_14845043a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b868;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145859cf2 FUN_145859cf2 body=221 status=ok
// SIG undefined FUN_145859cf2(void)

longlong FUN_145859cf2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4b710 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1484445f9;
    local_40 = FUN_14648ec9a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractionMechanic",&DAT_14cb4b710,
                  &DAT_1484445f8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b710;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145859dd0 FUN_145859dd0 body=103 status=ok
// SIG undefined FUN_145859dd0(void)

ulonglong FUN_145859dd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145859e28:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145859e28;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 145859e64 FUN_145859e64 body=45 status=ok
// SIG undefined FUN_145859e64(void)

void FUN_145859e64(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b426960;
  FUN_145859e92(param_1 + 0xd0);
  FUN_145859eca(param_1 + 0x10);
  return;
}



// FUNCTION 145859e92 FUN_145859e92 body=56 status=ok
// SIG undefined FUN_145859e92(void)

void FUN_145859e92(longlong param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_144a2da94(param_1 + 0x78);
    FUN_144a2da94(param_1 + 0x40);
    FUN_144a2da94(param_1);
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 145859eca FUN_145859eca body=92 status=ok
// SIG undefined FUN_145859eca(void)

void FUN_145859eca(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4269f0;
  if (*(char *)((longlong)param_1 + 0xb9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xb9) = 0;
  }
  plVar3 = (longlong *)param_1[0x15];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_145859f26(param_1);
  return;
}



// FUNCTION 145859f26 FUN_145859f26 body=76 status=ok
// SIG undefined FUN_145859f26(void)

void FUN_145859f26(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b426a80;
  plVar3 = (longlong *)param_1[0x13];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140f97a52(param_1);
  return;
}



// FUNCTION 145859f7e FUN_145859f7e body=53 status=ok
// SIG undefined FUN_145859f7e(void)

undefined8 * FUN_145859f7e(undefined8 *param_1)

{
  FUN_1406078d6();
  *param_1 = &PTR_FUN_14b213a70;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 3;
  return param_1;
}



// FUNCTION 145859fb4 FUN_145859fb4 body=38 status=ok
// SIG undefined FUN_145859fb4(void)

void FUN_145859fb4(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1407eda54(*param_3);
  FUN_145859fda(param_1 + -0x430,uVar1);
  return;
}



// FUNCTION 145859fda FUN_145859fda body=75 status=ok
// SIG undefined FUN_145859fda(void)

void FUN_145859fda(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar1 = FUN_14585a026(lVar1);
    if (lVar1 != 0) {
      *(char *)(param_1 + 0x448) = (char)param_2;
      FUN_14585a0dc(lVar1,param_1 + 0x438,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14585a026 FUN_14585a026 body=105 status=ok
// SIG undefined FUN_14585a026(void)

void FUN_14585a026(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14125102c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14585a090(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585a090 FUN_14585a090 body=76 status=ok
// SIG undefined FUN_14585a090(void)

void FUN_14585a090(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14125102c();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14585a0cd;
    }
  }
  lVar2 = 0;
LAB_14585a0cd:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 14585a0dc FUN_14585a0dc body=308 status=ok
// SIG undefined FUN_14585a0dc(void)

void FUN_14585a0dc(longlong param_1,longlong *param_2,byte param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  longlong *local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      local_88 = (longlong *)0x0;
      uStack_80 = 0;
      local_a8 = *(double *)(lVar1 + 8 + lVar3) + -50.0;
      local_b0 = *(double *)(lVar1 + lVar3) + -50.0;
      local_98 = local_a8 + 100.0;
      local_a0 = local_b0 + 100.0;
      FUN_1400ede88(param_1 + 0x48,&local_b0,&local_88);
      if (((int)uStack_80 != 0) && (*local_88 != 0)) {
        *(byte *)(*local_88 + 0x20) = param_3 ^ 1;
      }
      if (local_88 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 0x18;
    } while ((longlong)(int)lVar2 * 0x18 != lVar3);
  }
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14585a212 FUN_14585a212 body=40 status=ok
// SIG undefined FUN_14585a212(void)

undefined8 FUN_14585a212(undefined8 param_1,int param_2)

{
  FUN_14585a23a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585a23a FUN_14585a23a body=84 status=ok
// SIG undefined FUN_14585a23a(void)

void FUN_14585a23a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b763870;
  param_1[5] = &PTR_FUN_14b763cf0;
  param_1[6] = &PTR_LAB_14b763d30;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_14585a28e(param_1 + 0x22);
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 14585a28e FUN_14585a28e body=111 status=ok
// SIG undefined FUN_14585a28e(void)

void FUN_14585a28e(longlong param_1)

{
  *(undefined **)(param_1 + 200) = &DAT_14a176f00;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 200) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0xd0);
  *(undefined **)(param_1 + 0x38) = &DAT_14a176f00;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x40);
  return;
}



// FUNCTION 14585a2fe FUN_14585a2fe body=129 status=ok
// SIG undefined FUN_14585a2fe(void)

void FUN_14585a2fe(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_1;
  uVar1 = FUN_14585a380(&local_28);
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  FUN_1449668a2(uVar1,*param_2,iVar2);
  uVar1 = FUN_14585a380(&local_28);
  iVar2 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1449668a2(uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48,*param_3,iVar2);
}



// FUNCTION 14585a380 FUN_14585a380 body=98 status=ok
// SIG undefined FUN_14585a380(void)

longlong * FUN_14585a380(longlong *param_1)

{
  undefined2 *puVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  puVar1 = (undefined2 *)plVar2[1];
  if ((((int)((ulonglong)((longlong)puVar1 - *plVar2) >> 1) != 0) && (puVar1[-1] != 0x2f)) &&
     (puVar1[-1] != 0x5c)) {
    if ((undefined2 *)plVar2[2] <= puVar1 + 1) {
      FUN_140213274(plVar2,1);
      puVar1 = (undefined2 *)plVar2[1];
    }
    plVar2[1] = (longlong)(puVar1 + 1);
    *puVar1 = 0x2f;
    plVar2 = (longlong *)*param_1;
  }
  return plVar2;
}



// FUNCTION 14585a3e2 FUN_14585a3e2 body=165 status=ok
// SIG undefined FUN_14585a3e2(void)

bool FUN_14585a3e2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585a48e FUN_14585a48e body=67 status=ok
// SIG undefined FUN_14585a48e(void)

void FUN_14585a48e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14585a500(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014585a4a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_140ef166c(&DAT_14cb7d548);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14b401660;
  puVar2[3] = 0;
  return;
}



// FUNCTION 14585a4d2 FUN_14585a4d2 body=46 status=ok
// SIG undefined FUN_14585a4d2(void)

void FUN_14585a4d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140ef166c(&DAT_14cb7d548);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b401660;
  puVar1[3] = 0;
  return;
}



// FUNCTION 14585a500 FUN_14585a500 body=191 status=ok
// SIG undefined FUN_14585a500(void)

longlong FUN_14585a500(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_14585a5c0();
  lVar3 = *param_1;
  if (DAT_14cb7d4f8 != DAT_14cb7d524) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb7d528;
    if (DAT_14cb7d530 != (undefined *)0x0) {
      puVar7 = DAT_14cb7d530;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb7d538 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb7d4f0 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb7d4e8;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 14585a5c0 FUN_14585a5c0 body=152 status=ok
// SIG undefined FUN_14585a5c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14585a5c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7d540) {
    FUN_144b3d300(&DAT_14cb7d540);
    if (DAT_14cb7d540 == -1) {
      DAT_14cb7d510 = 0;
      DAT_14cb7d518 = 0;
      DAT_14cb7d4f0 = 0;
      _DAT_14cb7d4f8 = 0;
      _DAT_14cb7d51c = 0xffffffff00000080;
      DAT_14cb7d524 = 0;
      DAT_14cb7d530 = 0;
      DAT_14cb7d538 = 0;
      atexit(FUN_143d46d97);
      _Init_thread_footer(&DAT_14cb7d540);
      return;
    }
  }
  return;
}



// FUNCTION 14585a666 FUN_14585a666 body=114 status=ok
// SIG undefined FUN_14585a666(void)

undefined4 * FUN_14585a666(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar2 = *(longlong *)(param_2 + 2);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 2);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 2) = lVar2;
  lVar2 = *(longlong *)(param_2 + 4);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 4);
    }
  }
  *(longlong *)(param_1 + 4) = lVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 14585a6e6 FUN_14585a6e6 body=61 status=ok
// SIG undefined FUN_14585a6e6(void)

undefined8 * FUN_14585a6e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b260270;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585a72c FUN_14585a72c body=52 status=ok
// SIG undefined FUN_14585a72c(void)

undefined8 * FUN_14585a72c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14585a760(param_1,uVar1);
  *param_1 = &PTR_FUN_14b283220;
  uVar1 = FUN_141483710();
  param_1[5] = uVar1;
  return param_1;
}



// FUNCTION 14585a760 FUN_14585a760 body=40 status=ok
// SIG undefined FUN_14585a760(void)

undefined8 * FUN_14585a760(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b287290;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 14585a788 FUN_14585a788 body=71 status=ok
// SIG undefined FUN_14585a788(void)

void FUN_14585a788(longlong param_1)

{
  FUN_14585a7d0();
  *(undefined2 *)(param_1 + 0x41d) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0x3f333333;
  *(undefined1 *)(param_1 + 0x3aa) = 0;
  if (*(char *)(param_1 + 0x410) == '\x01') {
    *(undefined1 *)(param_1 + 0x410) = 0;
  }
  return;
}



// FUNCTION 14585a7d0 FUN_14585a7d0 body=270 status=ok
// SIG undefined FUN_14585a7d0(void)

void FUN_14585a7d0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_158 [32];
  undefined *local_138 [35];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_140f00e4c();
  if (*(char *)(param_1 + 0x180) == '\x01') {
    *(undefined1 *)(param_1 + 0x180) = 0;
  }
  *(undefined1 *)(param_1 + 0x36c) = 0;
  lVar1 = FUN_14479d2ce(param_1 + 0x360);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0x14b8)) {
      local_138[0] = &DAT_14cbca5e4;
      FUN_140b042ce(lVar1 + 0x1430);
    }
    FUN_14483674a(lVar1 + 0x1288);
    FUN_1400bc8c2(lVar1 + 0x1218,&DAT_14cbca5e4);
    FUN_140457ffc(lVar1 + 0x41e8,param_1);
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_14103b6f6(*(longlong *)(param_1 + 800),1);
  }
  FUN_14125c7ea(local_138);
  FUN_14585a8e0(param_1 + 0x188,local_138);
  FUN_141251f9a(local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585a8e0 FUN_14585a8e0 body=227 status=ok
// SIG undefined FUN_14585a8e0(void)

undefined8 * FUN_14585a8e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 5);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar8 = *(undefined4 *)(param_2 + 6);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar10 = *(undefined4 *)(param_2 + 7);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 5) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar7;
  *(undefined4 *)(param_1 + 6) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar9;
  *(undefined4 *)(param_1 + 7) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar11;
  FUN_144a7c4b8(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)((longlong)param_2 + 100);
  uVar4 = *(undefined4 *)(param_2 + 0xd);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar6 = *(undefined4 *)(param_2 + 0xe);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar8 = *(undefined4 *)(param_2 + 0xf);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uVar10 = *(undefined4 *)(param_2 + 0x10);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0xd) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar5;
  *(undefined4 *)(param_1 + 0xe) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar7;
  *(undefined4 *)(param_1 + 0xf) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar9;
  *(undefined4 *)(param_1 + 0x10) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar11;
  FUN_144a7c4b8(param_1 + 0x11,param_2 + 0x11);
  param_1[0x14] = param_2[0x14];
  uVar1 = *(undefined4 *)(param_2 + 0x15);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xac);
  uVar3 = *(undefined4 *)(param_2 + 0x16);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xb4);
  uVar5 = *(undefined4 *)(param_2 + 0x17);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xbc);
  uVar7 = *(undefined4 *)(param_2 + 0x18);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0xc4);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar10 = *(undefined4 *)(param_2 + 0x1a);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar9;
  *(undefined4 *)(param_1 + 0x1a) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar11;
  *(undefined4 *)(param_1 + 0x17) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar6;
  *(undefined4 *)(param_1 + 0x18) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar8;
  *(undefined4 *)(param_1 + 0x15) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar2;
  *(undefined4 *)(param_1 + 0x16) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar4;
  FUN_144a7c4b8(param_1 + 0x1b,param_2 + 0x1b);
  param_1[0x1e] = param_2[0x1e];
  uVar12 = param_2[0x1f];
  uVar13 = param_2[0x20];
  uVar14 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = uVar14;
  param_1[0x1f] = uVar12;
  param_1[0x20] = uVar13;
  return param_1;
}



// FUNCTION 14585a9c4 FUN_14585a9c4 body=94 status=ok
// SIG undefined FUN_14585a9c4(void)

void FUN_14585a9c4(void)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong *local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_18;
  local_18 = DAT_14cadb9f0;
  local_10 = DAT_14c9a40a0;
  local_20 = &local_8;
  FUN_14585aa24();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585aa24 FUN_14585aa24 body=50 status=ok
// SIG undefined FUN_14585aa24(void)

void FUN_14585aa24(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    FUN_14585aa56(param_1,lVar2);
  }
  return;
}



// FUNCTION 14585aa56 FUN_14585aa56 body=129 status=ok
// SIG undefined FUN_14585aa56(void)

void FUN_14585aa56(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  lVar3 = (longlong)iVar1;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4) == *param_2) {
        return;
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 - lVar4 != 0);
  }
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_1446f84a2((longlong *)(param_1 + 0x20),iVar1);
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  *(longlong *)(lVar2 + lVar3 * 8) = *param_2;
  FUN_14125202e();
  FUN_14585aad8(param_1,param_2);
  return;
}



// FUNCTION 14585aad8 FUN_14585aad8 body=193 status=ok
// SIG undefined FUN_14585aad8(void)

void FUN_14585aad8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_2;
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  lVar4 = FUN_14133aade(&DAT_14c9a3cc0,
                        ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4),param_2);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(longlong *)(param_1 + 0x10);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14585abaa(lVar4 + 8,&local_28);
  if (local_20 != 0) {
    LOCK();
    piVar1 = (int *)(local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585abaa FUN_14585abaa body=85 status=ok
// SIG undefined FUN_14585abaa(void)

void FUN_14585abaa(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_14585ac00();
  if (iVar2 == -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_14585acf4(param_1,iVar2);
    }
    lVar1 = *param_1;
    *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x10) = *param_2;
    *(undefined8 *)(lVar1 + 8 + (longlong)iVar2 * 0x10) = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}



// FUNCTION 14585ac00 FUN_14585ac00 body=243 status=ok
// SIG undefined FUN_14585ac00(void)

ulonglong FUN_14585ac00(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    param_1 = (longlong *)*param_1;
    plVar10 = param_1;
    do {
      plVar7 = (longlong *)plVar10[1];
      if (plVar7 == (longlong *)0x0) {
LAB_14585ac9e:
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_14585ac9e;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
      }
      lVar8 = *plVar10;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_14585aca2:
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_14585aca2;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *param_2;
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (plVar7 == (longlong *)0x0) {
        lVar8 = 0;
      }
      else {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (lVar8 == lVar9) {
        return (ulonglong)((longlong)plVar10 - (longlong)param_1) >> 4 & 0xffffffff;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != param_1 + (longlong)(int)lVar4 * 2);
  }
  return 0xffffffff;
}



// FUNCTION 14585acf4 FUN_14585acf4 body=132 status=ok
// SIG undefined FUN_14585acf4(void)

void FUN_14585acf4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14585ad7e FUN_14585ad7e body=224 status=ok
// SIG undefined FUN_14585ad7e(void)

undefined8 FUN_14585ad7e(ushort *param_1)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar2 = DAT_14ca1cdc0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar6 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar6 = (ulonglong)(bVar3 ^ 1);
  }
  uVar1 = *(uint *)(param_1 + 2);
  uVar8 = uVar1 + 7;
  uVar7 = uVar1 + 3;
  if (-1 < (int)uVar1) {
    uVar8 = uVar1;
    uVar7 = uVar1;
  }
  uVar7 = (int)uVar7 >> 2 & 0x80000001;
  if (*(char *)(lVar2 + uVar6) == '\0') {
    if (((uVar1 & 0x80000001) != 1 || ((int)uVar1 / 2 & 0x80000001U) == 1) || uVar7 == 1) {
      return 0;
    }
  }
  else if (uVar7 == 1) {
    if ((~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0xc00000) != 0) {
      return 0;
    }
    cVar4 = FUN_14019108b();
    if (cVar4 == '\0') {
      return 0;
    }
  }
  cVar4 = FUN_14473b0f0();
  if ((cVar4 == '\0') && (((int)uVar8 >> 3 & 0x80000001U) == 1)) {
    return 0;
  }
  uVar5 = FUN_1406ef37d(*param_1);
  return uVar5;
}



// FUNCTION 14585ae5e FUN_14585ae5e body=12 status=ok
// SIG undefined FUN_14585ae5e(void)

void FUN_14585ae5e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014585ae67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14585ae6a FUN_14585ae6a body=31 status=ok
// SIG undefined FUN_14585ae6a(void)

undefined8 FUN_14585ae6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585ae96 FUN_14585ae96 body=31 status=ok
// SIG undefined FUN_14585ae96(void)

undefined8 FUN_14585ae96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585aec2 FUN_14585aec2 body=31 status=ok
// SIG undefined FUN_14585aec2(void)

undefined8 FUN_14585aec2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585aeee FUN_14585aeee body=31 status=ok
// SIG undefined FUN_14585aeee(void)

undefined8 FUN_14585aeee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585af0e FUN_14585af0e body=116 status=ok
// SIG undefined FUN_14585af0e(void)

undefined8 * FUN_14585af0e(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = FUN_14585af82();
  if (lVar2 == 0) {
    FUN_140056680(param_2,L"unset");
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 0x2b0);
    _Src = *(void **)(lVar2 + 0x2a8);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  return param_2;
}



// FUNCTION 14585af82 FUN_14585af82 body=56 status=ok
// SIG undefined FUN_14585af82(void)

longlong FUN_14585af82(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar2 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = *(longlong *)(lVar1 + 0x2c8);
    }
  }
  return lVar2;
}



// FUNCTION 14585afba FUN_14585afba body=106 status=ok
// SIG undefined FUN_14585afba(void)

undefined8 * FUN_14585afba(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a4527d0;
  param_1[1] = 0x20000000400;
  *(undefined4 *)(param_1 + 2) = 0x200;
  FUN_141253acc(L"GrayscaleFontAtlasSize",param_1 + 1);
  FUN_141253acc(L"ColorFontAtlasSize",(longlong)param_1 + 0xc);
  FUN_141253acc(L"SdfFontAtlasSize",param_1 + 2);
  return param_1;
}



// FUNCTION 14585b024 FUN_14585b024 body=892 status=ok
// SIG undefined FUN_14585b024(void)

undefined8 * FUN_14585b024(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_98 [40];
  undefined1 local_70 [12];
  undefined1 local_64 [4];
  code *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_LAB_149ed8d00;
  FUN_14585b3a2(param_1 + 1,&DAT_14c75ed2c);
  *param_1 = &PTR_FUN_149ed1e10;
  param_1[1] = &PTR_FUN_149ed1e30;
  uVar4 = FUN_14001cc68(0x10,0x10);
  FUN_141253d9c(uVar4);
  param_1[6] = uVar4;
  uVar4 = FUN_14001cc68(0x100,0x10);
  FUN_14585b7e2(uVar4);
  param_1[7] = uVar4;
  uVar5 = FUN_14001cc68(0xb8,0x10);
  FUN_14585b3c8(uVar5,param_1[6]);
  param_1[8] = uVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar4 = param_1[7];
  *puVar6 = param_1[6];
  puVar6[1] = uVar4;
  puVar6[2] = uVar5;
  param_1[9] = puVar6;
  puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar7 = uVar4;
  puVar7[1] = uVar5;
  puVar7[2] = puVar6;
  puVar7[3] = param_1;
  FUN_141253c85(puVar7 + 4);
  FUN_140e9ef24(puVar7 + 5);
  FUN_14585b6ca(puVar7 + 7,*puVar7);
  param_1[10] = puVar7;
  uVar4 = FUN_14001cc68(0x50,0x10);
  FUN_14585b52e(uVar4);
  param_1[0xb] = uVar4;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = *param_2;
  lVar8 = param_2[1];
  param_1[0x3f] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x41));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x41),4000);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 2;
  *(undefined4 *)(param_1 + 0x4b) = param_3;
  local_60 = (code *)0x149ed1e44;
  local_58 = 0x15;
  FUN_1446e940c(local_70,&local_60);
  local_60 = (code *)0x149ed1e70;
  local_58 = 9;
  FUN_1446e940c(local_64,&local_60);
  FUN_140208bae(param_1 + 0x4c,local_64,local_70,&DAT_149ed1e40);
  lVar8 = FUN_140d5712e();
  local_60 = FUN_146936112;
  local_58 = 0;
  FUN_14585b5fa(lVar8 + 8,local_70,param_1,&local_60);
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585b3a2 FUN_14585b3a2 body=37 status=ok
// SIG undefined FUN_14585b3a2(void)

void FUN_14585b3a2(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_LAB_149eee450;
  param_1[1] = param_2;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_2[1];
  return;
}



// FUNCTION 14585b3c8 FUN_14585b3c8 body=166 status=ok
// SIG undefined FUN_14585b3c8(void)

undefined8 * FUN_14585b3c8(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_1 = param_2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  lVar1 = FUN_140d5712e();
  FUN_14585b470(lVar1 + 8,local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585b470 FUN_14585b470 body=189 status=ok
// SIG undefined FUN_14585b470(void)

undefined8 FUN_14585b470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149eda280;
  puVar1[3] = param_3;
  puVar1[4] = FUN_146936932;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585b52e FUN_14585b52e body=202 status=ok
// SIG undefined FUN_14585b52e(void)

undefined8 * FUN_14585b52e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_149ed38d0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149eda490;
  puVar1[3] = param_1;
  FUN_141253d16(param_1 + 7,&local_38);
  FUN_1449db362(&local_38);
  FUN_141253e76(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585b5fa FUN_14585b5fa body=207 status=ok
// SIG undefined FUN_14585b5fa(void)

undefined8
FUN_14585b5fa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_149eda1b0;
  puVar3[3] = param_3;
  puVar3[4] = uVar2;
  *(undefined4 *)(puVar3 + 5) = uVar1;
  FUN_1448b6402(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585b6ca FUN_14585b6ca body=279 status=ok
// SIG undefined FUN_14585b6ca(void)

undefined8 * FUN_14585b6ca(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  uVar1 = FUN_144b490e0();
  param_1[1] = uVar1;
  FUN_144b48aa0(uVar1,FUN_146937212,0,0);
  FUN_144b48b30(param_1[1],FUN_1469372f0,0,0);
  FUN_144b48bc0(param_1[1],FUN_146937248,0,0);
  FUN_144b48c50(param_1[1],FUN_1469374aa,0,0);
  FUN_144b48ce0(param_1[1],FUN_146937351,0,0);
  FUN_144b48d70(param_1[1],FUN_146937669,0,0);
  FUN_144b48e00(param_1[1],FUN_14693750d,0,0);
  FUN_144b48e90(param_1[1],FUN_1469376cc,0,0);
  FUN_144b48f20(param_1[1],FUN_146937829,0,0);
  FUN_144b48fb0(param_1[1],FUN_1469378f9,0,0);
  FUN_144b49040(param_1[1],FUN_146937a5c,0,0);
  FUN_144b48a90(param_1[1]);
  return param_1;
}



// FUNCTION 14585b7e2 FUN_14585b7e2 body=286 status=ok
// SIG undefined FUN_14585b7e2(void)

undefined8 * FUN_14585b7e2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  plVar3 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149eda390;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  *(undefined4 *)((longlong)plVar3 + 0x4c) = 0x80;
  *(undefined4 *)(plVar3 + 10) = 0xffffffff;
  param_1[0x1e] = plVar3 + 2;
  param_1[0x1f] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14585b900 FUN_14585b900 body=95 status=ok
// SIG undefined FUN_14585b900(void)

void FUN_14585b900(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14585b960 FUN_14585b960 body=93 status=ok
// SIG undefined FUN_14585b960(void)

void FUN_14585b960(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14585b9be FUN_14585b9be body=142 status=ok
// SIG undefined FUN_14585b9be(void)

void FUN_14585b9be(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149e06640;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 3;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_149eda500;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  param_1[0x1b] = 0x3ff0000000000000;
  param_1[0x1c] = 0x3ff0000000000000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x3ff0000000000000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return;
}



// FUNCTION 14585ba4c FUN_14585ba4c body=889 status=ok
// SIG undefined FUN_14585ba4c(void)

undefined8 * FUN_14585ba4c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70 [4];
  int local_6c;
  undefined8 *local_68;
  undefined4 local_60;
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_LAB_149ed8d00;
  FUN_14585bdc6(param_1 + 1);
  FUN_1409e1656(param_1 + 0xc);
  *param_1 = &PTR_FUN_14a4508d0;
  param_1[1] = &PTR_FUN_14a450900;
  param_1[0xc] = &PTR_LAB_14a450930;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xd),4000);
  *(undefined2 *)(param_1 + 0x12) = 0;
  FUN_14585becc(param_1 + 0x13);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar3 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar3[2] = uVar2;
  *puVar3 = &PTR_FUN_14a452ce0;
  puVar3[3] = param_1;
  puVar3[4] = FUN_14750ee68;
  *(undefined4 *)(puVar3 + 5) = 0;
  local_58 = (code *)0x14a450a16;
  local_50 = 0x1b;
  FUN_1446e940c(&local_6c,&local_58);
  local_58 = (code *)0x149ec9eb0;
  local_50 = 5;
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_58,local_70,&local_6c,
                L"Flushes and deletes all resources created by Slate\'s RHI Resource Manager.");
  puVar3 = (undefined8 *)FUN_1447a1f4a(&local_58);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*puVar3;
  }
  local_78 = (undefined8 *)((ulonglong)local_78._4_4_ << 0x20);
  FUN_14152bcb8(param_1 + 0x4a,L"Slate.DeleteResources",puVar6,&local_68);
  if (local_58 != (code *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_1449db362(&local_68);
  param_1[0x4c] = 0;
  local_58 = FUN_1457f6e0e;
  local_50 = 0;
  FUN_14585bdfc(&DAT_14c8673d8,&local_68,param_1,&local_58);
  uVar2 = FUN_140c61bfa();
  local_58 = (code *)&LAB_1410bde52;
  local_50 = 0;
  FUN_14585bdfc(uVar2,&local_68,param_1,&local_58);
  uVar2 = FUN_140b631de();
  local_58 = FUN_1410bde82;
  local_50 = 0;
  FUN_14585bdfc(uVar2,&local_68,param_1,&local_58);
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0x10000000100;
  *(undefined4 *)(param_1 + 0x45) = 0x400;
  if (DAT_14c872ce0 != 0) {
    local_58 = (code *)CONCAT44(local_58._4_4_,0x400);
    local_78 = &DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"SlateRenderer",L"TextureAtlasSize",&local_58);
    uVar4 = 0x800;
    if ((uint)local_58 < 0x800) {
      uVar4 = (uint)local_58;
    }
    *(uint *)(param_1 + 0x45) = uVar4;
    local_68 = (undefined8 *)CONCAT44(local_68._4_4_,0x100);
    local_6c = 0x100;
    local_78 = &DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"SlateRenderer",L"MaxAtlasedTextureWidth",&local_68);
    local_78 = &DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"SlateRenderer",L"MaxAtlasedTextureHeight",&local_6c);
    iVar1 = *(int *)(param_1 + 0x45);
    iVar5 = (int)local_68;
    if (iVar1 <= (int)local_68) {
      iVar5 = iVar1;
    }
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    *(int *)((longlong)param_1 + 0x22c) = iVar5;
    if (local_6c < iVar1) {
      iVar1 = local_6c;
    }
    if (iVar1 < 1) {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x46) = iVar1;
  }
  FUN_14585bf76(param_1);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585bdc6 FUN_14585bdc6 body=54 status=ok
// SIG undefined FUN_14585bdc6(void)

void FUN_14585bdc6(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149edad80;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}



// FUNCTION 14585bdfc FUN_14585bdfc body=207 status=ok
// SIG undefined FUN_14585bdfc(void)

undefined8
FUN_14585bdfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a452ce0;
  puVar3[3] = param_3;
  puVar3[4] = uVar2;
  *(undefined4 *)(puVar3 + 5) = uVar1;
  FUN_1448b6402(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585becc FUN_14585becc body=169 status=ok
// SIG undefined FUN_14585becc(void)

void FUN_14585becc(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  return;
}



// FUNCTION 14585bf76 FUN_14585bf76 body=233 status=ok
// SIG undefined FUN_14585bf76(void)

void FUN_14585bf76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a452d50;
  plVar4[2] = (longlong)&PTR_FUN_14a452d70;
  uVar5 = FUN_14001cc68(0xc0,0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = plVar4 + 2;
  local_30 = plVar4;
  FUN_14585c060(uVar5,&local_38);
  puVar3 = *(undefined8 **)(param_1 + 0x260);
  *(undefined8 *)(param_1 + 0x260) = uVar5;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585c060 FUN_14585c060 body=179 status=ok
// SIG undefined FUN_14585c060(void)

undefined8 * FUN_14585c060(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_14585b3a2(param_1,&DAT_14c75ed4c);
  *param_1 = &PTR_FUN_149edb358;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = *param_2;
  lVar3 = param_2[1];
  param_1[0x14] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14585c114 FUN_14585c114 body=42 status=ok
// SIG undefined FUN_14585c114(void)

void FUN_14585c114(longlong param_1)

{
  FUN_14585c13e();
  if (*(char *)(param_1 + 0x4ac8) == '\x01') {
    FUN_1412540d8(param_1);
    return;
  }
  return;
}



// FUNCTION 14585c13e FUN_14585c13e body=91 status=ok
// SIG undefined FUN_14585c13e(void)

void FUN_14585c13e(longlong *param_1)

{
  FUN_141253ff6();
  param_1[0xad] = 0;
  *(byte *)(param_1 + 0xaa) = *(byte *)(param_1 + 0xaa) & 0xf7;
  (**(code **)(*param_1 + 0x808))(param_1);
  (**(code **)(*param_1 + 0x868))(param_1,1);
  if ((longlong *)param_1[0x86] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014585c18b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0x86] + 0x828))();
    return;
  }
  return;
}



// FUNCTION 14585c19a FUN_14585c19a body=88 status=ok
// SIG undefined FUN_14585c19a(void)

undefined8
FUN_14585c19a(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_3 = uVar1;
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[3] = uVar4;
  lVar5 = (**(code **)(*param_1 + 0x7b8))(uVar1,param_4,0,0xffffffff);
  if (lVar5 != 0) {
    uVar6 = FUN_14585c1f2(lVar5,param_2,param_3);
    return uVar6;
  }
  return 0xbf800000;
}



// FUNCTION 14585c1f2 FUN_14585c1f2 body=106 status=ok
// SIG undefined FUN_14585c1f2(void)

void FUN_14585c1f2(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  float fVar2;
  undefined1 auStack_38 [44];
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = -1.0;
  cVar1 = FUN_14004245a(param_1,param_2,&local_c,param_3);
  if (cVar1 == '\0') {
    fVar2 = -1.0;
  }
  else if (local_c < 0.0) {
    fVar2 = sqrtf(local_c);
  }
  else {
    fVar2 = SQRT(local_c);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2);
}



// FUNCTION 14585c26c FUN_14585c26c body=40 status=ok
// SIG undefined FUN_14585c26c(void)

undefined8 FUN_14585c26c(undefined8 param_1,int param_2)

{
  FUN_140280aac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585c294 FUN_14585c294 body=37 status=ok
// SIG undefined FUN_14585c294(void)

void FUN_14585c294(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x270);
  FUN_14585c2ba(param_2);
  return;
}



// FUNCTION 14585c2ba FUN_14585c2ba body=161 status=ok
// SIG undefined FUN_14585c2ba(void)

undefined8 * FUN_14585c2ba(undefined8 *param_1)

{
  bool bVar1;
  
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14ac474d0;
  FUN_140785382(param_1 + 0x10,10);
  FUN_140785382(param_1 + 0x17,10);
  FUN_141507444(param_1 + 0x1e);
  param_1[0x40] = 0;
  *(undefined2 *)(param_1 + 0x44) = 4;
  *(undefined4 *)(param_1 + 0x41) = 1;
  *(undefined1 *)(param_1 + 0x45) = 1;
  bVar1 = (DAT_14c9a8634 & 0x20) == 0;
  *(bool *)(param_1 + 0x46) = bVar1;
  param_1[0x47] = 0;
  *(undefined2 *)(param_1 + 0x4b) = 4;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(bool *)(param_1 + 0x4d) = bVar1;
  return param_1;
}



// FUNCTION 14585c364 FUN_14585c364 body=82 status=ok
// SIG undefined FUN_14585c364(void)

undefined8 * FUN_14585c364(undefined8 *param_1)

{
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac80f40;
  FUN_140fbcb60(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 14585c3b6 FUN_14585c3b6 body=38 status=ok
// SIG undefined FUN_14585c3b6(void)

undefined8 FUN_14585c3b6(undefined8 param_1,int param_2)

{
  FUN_14585c3dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585c3dc FUN_14585c3dc body=92 status=ok
// SIG undefined FUN_14585c3dc(void)

void FUN_14585c3dc(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b3fc7b0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14585c46e(param_1 + 0xd);
  FUN_14585c438(param_1 + 6);
  return;
}



// FUNCTION 14585c438 FUN_14585c438 body=53 status=ok
// SIG undefined FUN_14585c438(void)

void FUN_14585c438(longlong *param_1)

{
  FUN_14107ed14();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14585c46e FUN_14585c46e body=53 status=ok
// SIG undefined FUN_14585c46e(void)

void FUN_14585c46e(longlong *param_1)

{
  FUN_14585c4a4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14585c4a4 FUN_14585c4a4 body=88 status=ok
// SIG undefined FUN_14585c4a4(void)

void FUN_14585c4a4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14585c4fc FUN_14585c4fc body=215 status=ok
// SIG undefined FUN_14585c4fc(void)

undefined8 * FUN_14585c4fc(undefined8 *param_1)

{
  int iVar1;
  
  FUN_144a7c5d8();
  *param_1 = &PTR_FUN_14a2417f0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_145904d7e(param_1 + 0x10,0,0,0,DAT_14c760430,DAT_14c760430,DAT_14c760430,0,0,1);
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar1 = DAT_14c760430;
  *(int *)(param_1 + 0x36) = DAT_14c760430 + 1;
  *(int *)((longlong)param_1 + 0x14) = iVar1;
  return param_1;
}



// FUNCTION 14585c5d4 FUN_14585c5d4 body=40 status=ok
// SIG undefined FUN_14585c5d4(void)

undefined8 FUN_14585c5d4(undefined8 param_1,int param_2)

{
  FUN_14585c5fc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585c5fc FUN_14585c5fc body=133 status=ok
// SIG undefined FUN_14585c5fc(void)

void FUN_14585c5fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd1a670;
  param_1[5] = &PTR_FUN_14bd1a910;
  FUN_144760e21(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14585c682 FUN_14585c682 body=104 status=ok
// SIG undefined FUN_14585c682(void)

void FUN_14585c682(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  thunk_FUN_14585c6f0();
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar3 = FUN_144a74fb4();
    lVar1 = *(longlong *)(param_1 + 0x110);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) && ((*(byte *)(lVar1 + 0xc61) & 0x20) != 0)))) {
      *(byte *)(lVar1 + 0xc61) = *(byte *)(lVar1 + 0xc61) & 0xdf;
    }
  }
  return;
}



// FUNCTION 14585c6ea thunk_FUN_14585c6f0 body=5 status=ok
// SIG undefined thunk_FUN_14585c6f0(void)

void thunk_FUN_14585c6f0(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141255c6e();
  *(undefined4 *)(param_1 + 0x62) = 0;
  lVar5 = param_1[0x16];
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  bVar1 = *(byte *)(lVar5 + 0x152);
  if (((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
     (lVar5 = *(longlong *)(lVar5 + 0x260), lVar5 != 0)) {
    lVar4 = FUN_140da6e0e(lVar5);
    if (lVar4 != 0) {
      (**(code **)(*param_1 + 0x630))(param_1);
      (**(code **)(*param_1 + 0x640))(param_1);
      if (param_1[0x130] != 0) {
        lVar5 = FUN_140da6e0e(lVar5);
        uStack_38 = 0;
        FUN_14485c47a(&uStack_38,param_1);
        uVar3 = uStack_38;
        iVar2 = *(int *)(lVar5 + 0x10);
        *(uint *)(lVar5 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar5 + 0x14) < iVar2 + 1U) {
          FUN_14585c96c((longlong *)(lVar5 + 8),iVar2);
        }
        *(undefined8 *)(*(longlong *)(lVar5 + 8) + (longlong)iVar2 * 8) = uVar3;
      }
    }
    if ((char)param_1[0x137] == '\x01') {
      (**(code **)(*param_1 + 0x670))(param_1);
    }
  }
  if (param_1[0x22] == 0) {
    if ((uStack_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 14585c6f0 FUN_14585c6f0 body=328 status=ok
// SIG undefined FUN_14585c6f0(void)

void FUN_14585c6f0(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141255c6e();
  *(undefined4 *)(param_1 + 0x62) = 0;
  lVar5 = param_1[0x16];
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  bVar1 = *(byte *)(lVar5 + 0x152);
  if (((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
     (lVar5 = *(longlong *)(lVar5 + 0x260), lVar5 != 0)) {
    lVar4 = FUN_140da6e0e(lVar5);
    if (lVar4 != 0) {
      (**(code **)(*param_1 + 0x630))(param_1);
      (**(code **)(*param_1 + 0x640))(param_1);
      if (param_1[0x130] != 0) {
        lVar5 = FUN_140da6e0e(lVar5);
        local_38 = 0;
        FUN_14485c47a(&local_38,param_1);
        uVar3 = local_38;
        iVar2 = *(int *)(lVar5 + 0x10);
        *(uint *)(lVar5 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar5 + 0x14) < iVar2 + 1U) {
          FUN_14585c96c((longlong *)(lVar5 + 8),iVar2);
        }
        *(undefined8 *)(*(longlong *)(lVar5 + 8) + (longlong)iVar2 * 8) = uVar3;
      }
    }
    if ((char)param_1[0x137] == '\x01') {
      (**(code **)(*param_1 + 0x670))(param_1);
    }
  }
  if (param_1[0x22] == 0) {
    if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 14585c856 FUN_14585c856 body=88 status=ok
// SIG undefined FUN_14585c856(void)

undefined8 * FUN_14585c856(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14585c90a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14585c8ae FUN_14585c8ae body=92 status=ok
// SIG undefined FUN_14585c8ae(void)

longlong FUN_14585c8ae(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar3 = FUN_14081cebe();
    lVar1 = *(longlong *)(param_1 + 0x110);
    if (lVar1 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30) {
          return 0;
        }
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14585c90a FUN_14585c90a body=98 status=ok
// SIG undefined FUN_14585c90a(void)

void FUN_14585c90a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14585c96c FUN_14585c96c body=132 status=ok
// SIG undefined FUN_14585c96c(void)

void FUN_14585c96c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14585c9f0 FUN_14585c9f0 body=84 status=ok
// SIG undefined FUN_14585c9f0(void)

void FUN_14585c9f0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_14585ca46(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585ca46 FUN_14585ca46 body=135 status=ok
// SIG undefined FUN_14585ca46(void)

void FUN_14585ca46(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140b5f774(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x30,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x48,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x60,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x78,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140b5f6dc(param_2 + 0x90,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14585cace FUN_14585cace body=37 status=ok
// SIG undefined FUN_14585cace(void)

void FUN_14585cace(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf8);
  FUN_14585caf4(param_2);
  return;
}



// FUNCTION 14585caf4 FUN_14585caf4 body=104 status=ok
// SIG undefined FUN_14585caf4(void)

undefined8 * FUN_14585caf4(undefined8 *param_1)

{
  FUN_1410df32e();
  *param_1 = &PTR_FUN_14b1bc6d0;
  FUN_14044066a(param_1 + 0x10,0x11,7);
  FUN_144a7a8f6(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return param_1;
}



// FUNCTION 14585cb5c FUN_14585cb5c body=42 status=ok
// SIG undefined FUN_14585cb5c(void)

void FUN_14585cb5c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1412573a8(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014585cb71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_14585cb9c();
  FUN_14589237c(uVar2);
  return;
}



// FUNCTION 14585cb86 FUN_14585cb86 body=21 status=ok
// SIG undefined FUN_14585cb86(void)

void FUN_14585cb86(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14585cb9c();
  FUN_14589237c(uVar1);
  return;
}



// FUNCTION 14585cb9c FUN_14585cb9c body=111 status=ok
// SIG undefined FUN_14585cb9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14585cb9c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb75b10;
  if (DAT_14cb75b10 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x2600,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x4c;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb75b10;
    DAT_14cb75b18 = DAT_14cb75b18 + 0x10;
  }
  DAT_14cb75b10 = (undefined8 *)*puVar2;
  _DAT_14cb75b1c = _DAT_14cb75b1c + 1;
  return;
}



// FUNCTION 14585cc1a FUN_14585cc1a body=40 status=ok
// SIG undefined FUN_14585cc1a(void)

undefined8 FUN_14585cc1a(undefined8 param_1,int param_2)

{
  FUN_14585cc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585cc42 FUN_14585cc42 body=108 status=ok
// SIG undefined FUN_14585cc42(void)

void FUN_14585cc42(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b754c80;
  lVar1 = 0x218;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != 0x128);
  lVar1 = 0x120;
  do {
    FUN_14585ccae((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x90);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14585ccae FUN_14585ccae body=55 status=ok
// SIG undefined FUN_14585ccae(void)

void FUN_14585ccae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b29c310;
  FUN_140ee73f4(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14585ccf0 FUN_14585ccf0 body=141 status=ok
// SIG undefined FUN_14585ccf0(void)

undefined8 * FUN_14585ccf0(undefined8 *param_1)

{
  FUN_1400ea704();
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x732) = 0;
  *(undefined8 *)((longlong)param_1 + 0x73a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x742) = 1;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  *param_1 = &PTR_FUN_14b7a4ad0;
  param_1[5] = &PTR_FUN_14b7a55d0;
  param_1[6] = &PTR_FUN_14b7a5610;
  param_1[0x55] = &PTR_FUN_14b7a5660;
  param_1[0x56] = &PTR_FUN_14b7a56e0;
  param_1[0x57] = &PTR_FUN_14b7a56f0;
  *(undefined1 *)(param_1 + 0xeb) = 0;
  return param_1;
}



// FUNCTION 14585cd8c FUN_14585cd8c body=40 status=ok
// SIG undefined FUN_14585cd8c(void)

undefined8 FUN_14585cd8c(undefined8 param_1,int param_2)

{
  FUN_14585cdb4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585cdb4 FUN_14585cdb4 body=71 status=ok
// SIG undefined FUN_14585cdb4(void)

void FUN_14585cdb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1249d0;
  FUN_14585cdfb(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14585cdfb FUN_14585cdfb body=49 status=ok
// SIG undefined FUN_14585cdfb(void)

void FUN_14585cdfb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14585ce2c FUN_14585ce2c body=144 status=ok
// SIG undefined FUN_14585ce2c(void)

void FUN_14585ce2c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1401499b2();
  if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x160) != (longlong *)0x0)) {
    lVar1 = (**(code **)(**(longlong **)(lVar1 + 0x160) + 0x88))();
    if (lVar1 != 0) {
      local_29 = 0;
      FUN_141257bd2(param_2 + 0x40,&local_29);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585cf18 FUN_14585cf18 body=40 status=ok
// SIG undefined FUN_14585cf18(void)

undefined8 FUN_14585cf18(undefined8 param_1,int param_2)

{
  FUN_14585cf40();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585cf40 FUN_14585cf40 body=126 status=ok
// SIG undefined FUN_14585cf40(void)

void FUN_14585cf40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b72d4d0;
  param_1[5] = &PTR_FUN_14b72ded0;
  param_1[6] = &PTR_LAB_14b72df10;
  param_1[0x55] = &PTR_FUN_14b72df60;
  param_1[0x56] = &PTR_FUN_14b72dfe0;
  param_1[0x57] = &PTR_FUN_14b72dff0;
  if (param_1[0xc9] != 0) {
    FUN_1400020a8();
  }
  FUN_14585cfbe(param_1 + 0xc4);
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 14585cfbe FUN_14585cfbe body=124 status=ok
// SIG undefined FUN_14585cfbe(void)

void FUN_14585cfbe(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14585d03a FUN_14585d03a body=161 status=ok
// SIG undefined FUN_14585d03a(void)

void FUN_14585d03a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1410be2c2(&local_1a);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xfb0))(param_1,local_1a);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585d0dc FUN_14585d0dc body=61 status=ok
// SIG undefined FUN_14585d0dc(void)

void FUN_14585d0dc(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar1 = FUN_140995560(lVar1);
    if (lVar1 != 0) {
      FUN_14585d11a(lVar1,param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14585d11a FUN_14585d11a body=35 status=ok
// SIG undefined FUN_14585d11a(void)

void FUN_14585d11a(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14148624c();
  FUN_141257c40(uVar1,param_2,param_3);
  return;
}



// FUNCTION 14585d13e FUN_14585d13e body=38 status=ok
// SIG undefined FUN_14585d13e(void)

undefined8 FUN_14585d13e(undefined8 param_1,int param_2)

{
  FUN_14585d1fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585d164 FUN_14585d164 body=62 status=ok
// SIG undefined FUN_14585d164(void)

void FUN_14585d164(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14585d1a2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14585d1a2 FUN_14585d1a2 body=91 status=ok
// SIG undefined FUN_14585d1a2(void)

ulonglong FUN_14585d1a2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14585d1fe FUN_14585d1fe body=96 status=ok
// SIG undefined FUN_14585d1fe(void)

void FUN_14585d1fe(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ac97930;
  FUN_14585d2b6(param_1 + 0xc);
  FUN_14585d25e(param_1 + 10);
  FUN_14585d25e(param_1 + 8);
  *param_1 = &PTR_LAB_14ac97940;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14585d25e FUN_14585d25e body=88 status=ok
// SIG undefined FUN_14585d25e(void)

void FUN_14585d25e(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    if (puVar1[0x26] != 0) {
      plVar2 = puVar1 + 0x2a;
      if ((longlong *)puVar1[0x28] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar1[0x28];
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 14585d2b6 FUN_14585d2b6 body=79 status=ok
// SIG undefined FUN_14585d2b6(void)

void FUN_14585d2b6(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    if (puVar1[2] != 0) {
      plVar2 = puVar1 + 6;
      if ((longlong *)puVar1[4] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar1[4];
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 14585d314 FUN_14585d314 body=67 status=ok
// SIG undefined FUN_14585d314(void)

void FUN_14585d314(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140e3cd36(param_2);
  if (lVar1 != 0) {
    FUN_140e3cd9a(lVar1,*(undefined4 *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  FUN_140457ffc(param_2 + 0x640,param_1);
  return;
}



// FUNCTION 14585d358 FUN_14585d358 body=218 status=ok
// SIG undefined FUN_14585d358(void)

void FUN_14585d358(longlong param_1)

{
  FUN_14585d432(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(param_1 + 0x40);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_14585d45a(param_1 + 0x28,*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 14585d432 FUN_14585d432 body=40 status=ok
// SIG undefined FUN_14585d432(void)

void FUN_14585d432(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1478d9c32(param_1);
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 14585d45a FUN_14585d45a body=62 status=ok
// SIG undefined FUN_14585d45a(void)

void FUN_14585d45a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 14585d498 FUN_14585d498 body=105 status=ok
// SIG undefined FUN_14585d498(void)

void FUN_14585d498(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  FUN_14585d508();
  plVar3 = *(longlong **)(param_1 + 0x75e0);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (*(longlong *)(param_1 + 0x75d8) != 0) {
      thunk_FUN_1411b6e1a(*(longlong *)(param_1 + 0x75d8),1);
    }
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014585d4fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14585d502 thunk_FUN_1411b6e1a body=5 status=ok
// SIG undefined thunk_FUN_1411b6e1a(void)

void thunk_FUN_1411b6e1a(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x1b8) != '\x01') {
    return;
  }
  if (*(longlong *)(param_1 + 0x208) == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x3d8);
  FUN_1411b6fca(param_1);
  bVar2 = *(byte *)(param_1 + 0x3d8);
  if (bVar2 == bVar1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x2f0);
  if (bVar1 == 0) {
    if ((byte)(bVar2 - 1) < 2) {
      *(double *)(param_1 + 0x308) =
           (double)*(float *)(param_1 + 0x3d4) + *(double *)(param_1 + 0x308);
    }
LAB_1411b6ef0:
    if (bVar2 == 1) {
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2a8);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x298);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2a0);
      *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1c0);
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1c4);
    }
    else if (bVar2 == 2) {
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2c0);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2b0);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2b8);
      *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1c8);
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1cc);
    }
    else {
      if (bVar2 != 3) goto LAB_1411b6eaf;
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2d8);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2c8);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2d0);
      *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1d0);
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1d4);
    }
    *(undefined4 *)(param_1 + 0x3cc) = uVar3;
  }
  else {
    if ((2 < bVar1) || (bVar2 != 0)) goto LAB_1411b6ef0;
    *(double *)(param_1 + 0x308) =
         *(double *)(param_1 + 0x308) - (double)*(float *)(param_1 + 0x3d4);
LAB_1411b6eaf:
    *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x290);
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x280);
    *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x288);
  }
  return;
}



// FUNCTION 14585d508 FUN_14585d508 body=10 status=ok
// SIG undefined FUN_14585d508(void)

void FUN_14585d508(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014585d50b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6c8))();
  return;
}



// FUNCTION 14585d512 FUN_14585d512 body=46 status=ok
// SIG undefined FUN_14585d512(void)

void FUN_14585d512(ushort *param_1,longlong *param_2)

{
  ushort uVar1;
  
  uVar1 = param_1[1];
  *param_2 = (longlong)*(int *)(param_1 + 2) * 8 +
             *(longlong *)
              (*(longlong *)(&DAT_14c927ae8 + (ulonglong)(*param_1 & 0xfffffffc) * 2) + 0x10);
  *(uint *)(param_2 + 1) = (uint)uVar1;
  return;
}



// FUNCTION 14585d540 FUN_14585d540 body=40 status=ok
// SIG undefined FUN_14585d540(void)

undefined8 FUN_14585d540(undefined8 param_1,int param_2)

{
  FUN_14125a92a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585d568 FUN_14585d568 body=230 status=ok
// SIG undefined FUN_14585d568(void)

void FUN_14585d568(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14585d650(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585d650 FUN_14585d650 body=87 status=ok
// SIG undefined FUN_14585d650(void)

void FUN_14585d650(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  lVar1 = FUN_141306a67("static UGbxCinematicFunctionLibrary::PopPlayerCinematicModeWithReason",
                        param_1);
  if (lVar1 != 0) {
    FUN_14585d6a8(lVar1,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585d6a8 FUN_14585d6a8 body=100 status=ok
// SIG undefined FUN_14585d6a8(void)

void FUN_14585d6a8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if (0 < *(int *)(param_1 + 0xb90)) {
      local_18 = param_2;
      FUN_14585d70e(param_1 + 0xb48,&local_18);
    }
    FUN_14125a962(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585d70e FUN_14585d70e body=287 status=ok
// SIG undefined FUN_14585d70e(void)

int FUN_14585d70e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  
  iVar5 = *(int *)(param_1 + 0x48);
  lVar6 = (longlong)iVar5;
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar12 = param_1;
    }
    iVar4 = 0;
    bVar13 = *(longlong *)(lVar12 + 8) == *(longlong *)*param_2;
    iVar9 = 0;
    do {
      lVar8 = (longlong)iVar9;
      iVar2 = iVar9 + 1;
      if (iVar9 + 1 < iVar5) {
        iVar2 = iVar5;
      }
      lVar3 = lVar8 * 0x10;
      plVar7 = (longlong *)(lVar12 + 0x18 + lVar3);
      iVar11 = iVar9;
      do {
        lVar8 = lVar8 + 1;
        iVar10 = iVar2;
        if (lVar6 <= lVar8) break;
        lVar1 = *plVar7;
        iVar11 = iVar11 + 1;
        plVar7 = plVar7 + 2;
        iVar10 = iVar11;
      } while (bVar13 == (lVar1 == *(longlong *)*param_2));
      if (bVar13 == false) {
        if (iVar4 != iVar9) {
          memmove((void *)((longlong)iVar4 * 0x10 + lVar12),(void *)(lVar3 + lVar12),
                  (longlong)(iVar10 - iVar9) << 4);
        }
        iVar4 = iVar4 + (iVar10 - iVar9);
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar9 = iVar10;
    } while (lVar8 < lVar6);
    *(int *)(param_1 + 0x48) = iVar4;
    iVar5 = iVar5 - iVar4;
  }
  return iVar5;
}



// FUNCTION 14585d834 FUN_14585d834 body=228 status=ok
// SIG undefined FUN_14585d834(void)

longlong FUN_14585d834(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a0650 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458e61dc;
    local_38 = &LAB_147088ee3;
    local_40 = &LAB_1462a0c23;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2d0;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusConfigStoreFlat",&DAT_14c9a0650,&DAT_147088ee2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a0650;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585d91e FUN_14585d91e body=228 status=ok
// SIG undefined FUN_14585d91e(void)

longlong FUN_14585d91e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8cd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_1474900fd;
    local_40 = FUN_14632af81;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"FieldSystemMetaData",&DAT_14caa8cd0,&DAT_1474900fc)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8cd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585da08 FUN_14585da08 body=228 status=ok
// SIG undefined FUN_14585da08(void)

longlong FUN_14585da08(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab6068 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145893078;
    local_38 = &LAB_14769ab90;
    local_40 = FUN_14634bc9b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneAsyncAction_SequencePrediction",
                  &DAT_14cab6068,FUN_14634bc74);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6068;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585daf2 FUN_14585daf2 body=228 status=ok
// SIG undefined FUN_14585daf2(void)

longlong FUN_14585daf2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1ee08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_147eac2f4;
    local_40 = &LAB_145fd2458;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x218;
    FUN_14081cfa3(L"/Script/AIModule",L"BlackboardComponent",&DAT_14cb1ee08,FUN_146429376);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1ee08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585dbdc FUN_14585dbdc body=228 status=ok
// SIG undefined FUN_14585dbdc(void)

longlong FUN_14585dbdc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb20560 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_147ef6cf4;
    local_40 = &LAB_1458caf1c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x360;
    FUN_14081cfa3(L"/Script/AIModule",L"PathFollowingComponent",&DAT_14cb20560,FUN_14642edf0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20560;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585dcc6 FUN_14585dcc6 body=228 status=ok
// SIG undefined FUN_14585dcc6(void)

longlong FUN_14585dcc6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb42ff8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a5436e;
    local_38 = &LAB_1481de8b9;
    local_40 = FUN_1403d256d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x3c0;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraScript",&DAT_14cb42ff8,FUN_146479024);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb42ff8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585ddb0 FUN_14585ddb0 body=228 status=ok
// SIG undefined FUN_14585ddb0(void)

longlong FUN_14585ddb0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4a9a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458d557a;
    local_38 = &LAB_14840d873;
    local_40 = &LAB_145f8fbca;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x140;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"ClickDragInputBehavior",&DAT_14cb4a9a8,
                  &DAT_14840d872);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4a9a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585de9a FUN_14585de9a body=228 status=ok
// SIG undefined FUN_14585de9a(void)

longlong FUN_14585de9a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb556d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_14862486b;
    local_40 = &LAB_145acc775;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"BreadcrumbRouteComponent",&DAT_14cb556d8,&DAT_14862486a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb556d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585df86 FUN_14585df86 body=228 status=ok
// SIG undefined FUN_14585df86(void)

longlong FUN_14585df86(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb98ca8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_148ac9fe3;
    local_40 = FUN_14658ab92;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxWorldPainter",L"GbxWorldPainterLayer",&DAT_14cb98ca8,&DAT_148ac9fe2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb98ca8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585e076 FUN_14585e076 body=140 status=ok
// SIG undefined FUN_14585e076(void)

undefined8 * FUN_14585e076(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_14585e102();
  *param_1 = &PTR_FUN_14b52e070;
  param_1[5] = &PTR_LAB_14b52e540;
  param_1[0x2d] = &PTR_LAB_14b52e580;
  param_1[0x5f] = &PTR_LAB_14b52e5b0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x62] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 99) = (int)plVar2[1];
  param_1[100] = 0;
  return param_1;
}



// FUNCTION 14585e102 FUN_14585e102 body=83 status=ok
// SIG undefined FUN_14585e102(void)

undefined8 * FUN_14585e102(undefined8 *param_1)

{
  FUN_140e2f36c();
  *param_1 = &PTR_FUN_14ae5cef0;
  param_1[5] = &PTR_FUN_14ae5d390;
  param_1[0x2d] = &PTR_FUN_14ae5d3d0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  return param_1;
}



// FUNCTION 14585e15a FUN_14585e15a body=228 status=ok
// SIG undefined FUN_14585e15a(void)

longlong FUN_14585e15a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc1cc28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14673ab44;
    local_38 = &LAB_1494bcb40;
    local_40 = FUN_14597be6f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x158;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusFunctionNodeGraph",&DAT_14cc1cc28,FUN_14673ab22);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1cc28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585e240 FUN_14585e240 body=38 status=ok
// SIG undefined FUN_14585e240(void)

undefined8 FUN_14585e240(undefined8 param_1,int param_2)

{
  FUN_14585e266();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585e266 FUN_14585e266 body=165 status=ok
// SIG undefined FUN_14585e266(void)

void FUN_14585e266(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a7da480;
  puVar2 = (undefined8 *)param_1[0x52];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_144760f98(param_1 + 0x4a);
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_140e3acee(param_1 + 0x40);
  FUN_14585e30b(param_1[0x3e],*(undefined4 *)(param_1 + 0x3f));
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_14585e356(param_1 + 2);
  FUN_140af926c(param_1);
  return;
}



// FUNCTION 14585e30b FUN_14585e30b body=74 status=ok
// SIG undefined FUN_14585e30b(void)

void FUN_14585e30b(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x40);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-6] != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14585e356 FUN_14585e356 body=61 status=ok
// SIG undefined FUN_14585e356(void)

void FUN_14585e356(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar1 = param_1;
  }
  FUN_14585e30b(lVar1,*(undefined4 *)(param_1 + 0x1d0));
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14585e394 FUN_14585e394 body=155 status=ok
// SIG undefined FUN_14585e394(void)

undefined8 FUN_14585e394(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_14585e430(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14585e430 FUN_14585e430 body=85 status=ok
// SIG undefined FUN_14585e430(void)

void FUN_14585e430(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_14585e486();
  return;
}



// FUNCTION 14585e486 FUN_14585e486 body=112 status=ok
// SIG undefined FUN_14585e486(void)

void FUN_14585e486(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14585e4f6 FUN_14585e4f6 body=204 status=ok
// SIG undefined FUN_14585e4f6(void)

undefined8 FUN_14585e4f6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_88 [32];
  int local_68;
  longlong local_58;
  int local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_58,param_3);
  iVar1 = local_50 + -1;
  if (local_50 == 0) {
    iVar1 = 0;
  }
  local_68 = iVar1 + 1 + (uint)(*(int *)(param_1 + 0x28) == 0);
  local_48[0] = 0;
  FUN_14125bce8(local_48,*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x28),0);
  FUN_1401aebe8(local_48,local_58,iVar1);
  FUN_144a882a8(param_2,local_48,param_4);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585e5c4 FUN_14585e5c4 body=185 status=ok
// SIG undefined FUN_14585e5c4(void)

bool FUN_14585e5c4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585e684 FUN_14585e684 body=415 status=ok
// SIG undefined FUN_14585e684(void)

void FUN_14585e684(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  void **ppvVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *_Src;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar6 != 0) {
    lVar7 = FUN_144a5dd5e();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      FUN_1402815f4(param_1,&local_48);
      plVar4 = *(longlong **)((longlong)local_48 + 0x3c0);
      AcquireSRWLockExclusive((PSRWLOCK)(plVar4 + 0xd));
      *(int *)(plVar4 + 0xc) = (int)plVar4[0xc] + 1;
      plVar5 = (longlong *)CONCAT44(uStack_3c,local_40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      FUN_14125bd50(&local_48,lVar6);
      FUN_14125bea2(param_1,&local_48);
      _Src = local_48;
      ppvVar3 = (void **)(plVar4 + 9);
      if (ppvVar3 != &local_48) {
        *(int *)(plVar4 + 10) = local_40;
        if (local_40 == 0 && *(int *)((longlong)plVar4 + 0x54) == 0) {
          *(undefined4 *)((longlong)plVar4 + 0x54) = 0;
        }
        else {
          FUN_141208f94(ppvVar3,local_40);
          if (local_40 != 0) {
            memcpy(*ppvVar3,_Src,(longlong)local_40 << 3);
          }
        }
      }
      lVar6 = *plVar4;
      *(int *)(plVar4 + 2) = (int)plVar4[2] + 2;
      if ((longlong)(int)plVar4[1] != 0) {
        lVar7 = (longlong)(int)plVar4[1] * 0x308;
        do {
          FUN_1412dab52(param_1,lVar6);
          lVar6 = lVar6 + 0x308;
          lVar7 = lVar7 + -0x308;
        } while (lVar7 != 0);
      }
      if (local_48 != (void *)0x0) {
        FUN_1400020a8();
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar4 + 0xd));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14585e824 FUN_14585e824 body=132 status=ok
// SIG undefined FUN_14585e824(void)

void FUN_14585e824(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14585e8b4 FUN_14585e8b4 body=200 status=ok
// SIG undefined FUN_14585e8b4(void)

undefined8 * FUN_14585e8b4(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a8d4570;
  param_1[5] = &PTR_FUN_14a8d4810;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_14585e97c(param_1 + 0xe);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 1;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x27] = 0x93f800000;
  return param_1;
}



// FUNCTION 14585e97c FUN_14585e97c body=156 status=ok
// SIG undefined FUN_14585e97c(void)

longlong FUN_14585e97c(longlong param_1)

{
  FUN_1400b22c2(param_1,"Arial");
  *(undefined4 *)(param_1 + 0x10) = 0x41800000;
  *(uint *)(param_1 + 0x14) = (*(uint *)(param_1 + 0x14) & 0xffffffe0) + 1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffc | 2;
  *(undefined1 **)(param_1 + 100) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x6c) = &DAT_3f8000003f800000;
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xfe;
  *(undefined8 *)(param_1 + 0x78) = 0x10000000100;
  *(undefined1 **)(param_1 + 0x80) = &DAT_100000001;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) & 0xfe;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0xfe;
  *(undefined8 *)(param_1 + 0xa4) = 0x3f80000000000010;
  return param_1;
}



// FUNCTION 14585ea20 FUN_14585ea20 body=76 status=ok
// SIG undefined FUN_14585ea20(void)

undefined8 * FUN_14585ea20(undefined8 *param_1)

{
  memset(param_1,0,0x398);
  FUN_14125c604(param_1);
  *param_1 = &PTR_FUN_14b603d30;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41b) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  return param_1;
}



// FUNCTION 14585ea7a FUN_14585ea7a body=45 status=ok
// SIG undefined FUN_14585ea7a(void)

undefined8 FUN_14585ea7a(undefined8 param_1,int param_2)

{
  FUN_14585eaa8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1300);
  }
  return param_1;
}



// FUNCTION 14585eaa8 FUN_14585eaa8 body=125 status=ok
// SIG undefined FUN_14585eaa8(void)

void FUN_14585eaa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5d10c0;
  FUN_14051f4c4(param_1 + 0x24a);
  if (param_1[0x248] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x237] != 0) {
    FUN_1400020a8();
  }
  FUN_14051f4c4(param_1 + 0x11c);
  if (param_1[0x11a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x109] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14585ebb4 FUN_14585ebb4 body=95 status=ok
// SIG undefined FUN_14585ebb4(void)

void FUN_14585ebb4(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1402af7f0(param_1,param_2,1);
  return;
}



// FUNCTION 14585ec14 FUN_14585ec14 body=55 status=ok
// SIG undefined FUN_14585ec14(void)

void FUN_14585ec14(longlong *param_1)

{
  FUN_14585ec4c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14585ec4c FUN_14585ec4c body=121 status=ok
// SIG undefined FUN_14585ec4c(void)

void FUN_14585ec4c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14585ecc6 FUN_14585ecc6 body=55 status=ok
// SIG undefined FUN_14585ecc6(void)

void FUN_14585ecc6(longlong *param_1)

{
  FUN_14585ecfe(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14585ecfe FUN_14585ecfe body=121 status=ok
// SIG undefined FUN_14585ecfe(void)

void FUN_14585ecfe(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14585ed78 FUN_14585ed78 body=55 status=ok
// SIG undefined FUN_14585ed78(void)

void FUN_14585ed78(longlong *param_1)

{
  FUN_14585edb0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14585edb0 FUN_14585edb0 body=121 status=ok
// SIG undefined FUN_14585edb0(void)

void FUN_14585edb0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14585ee2a FUN_14585ee2a body=55 status=ok
// SIG undefined FUN_14585ee2a(void)

void FUN_14585ee2a(longlong *param_1)

{
  FUN_14585ee62(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14585ee62 FUN_14585ee62 body=121 status=ok
// SIG undefined FUN_14585ee62(void)

void FUN_14585ee62(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14585eedc FUN_14585eedc body=129 status=ok
// SIG undefined FUN_14585eedc(void)

undefined8 * FUN_14585eedc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5b49f0;
  param_1[5] = &PTR_LAB_14b5b5400;
  param_1[6] = &PTR_LAB_14b5b5440;
  param_1[0x55] = &PTR_LAB_14b5b5490;
  param_1[0x56] = &PTR_LAB_14b5b5510;
  param_1[0x57] = &PTR_LAB_14b5b5520;
  FUN_14585efca(param_1 + 0xce);
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585ef5e FUN_14585ef5e body=107 status=ok
// SIG undefined FUN_14585ef5e(void)

void FUN_14585ef5e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8ae410;
  param_1[5] = &PTR_LAB_14a8aee20;
  param_1[6] = &PTR_LAB_14a8aee60;
  param_1[0x55] = &PTR_LAB_14a8aeeb0;
  param_1[0x56] = &PTR_LAB_14a8aef30;
  param_1[0x57] = &PTR_LAB_14a8aef40;
  FUN_14125d002(param_1 + 0xc4);
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 14585efca FUN_14585efca body=52 status=ok
// SIG undefined FUN_14585efca(void)

void FUN_14585efca(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5b68a0;
  FUN_145bcf3ac();
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14125d002(param_1);
  return;
}



// FUNCTION 14585effe FUN_14585effe body=40 status=ok
// SIG undefined FUN_14585effe(void)

undefined8 FUN_14585effe(undefined8 param_1,int param_2)

{
  FUN_14585f026();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585f026 FUN_14585f026 body=57 status=ok
// SIG undefined FUN_14585f026(void)

void FUN_14585f026(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b21e640;
  FUN_14585f05f(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14585f05f FUN_14585f05f body=58 status=ok
// SIG undefined FUN_14585f05f(void)

void FUN_14585f05f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_140d962ed(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14585f09a FUN_14585f09a body=78 status=ok
// SIG undefined FUN_14585f09a(void)

undefined8 * FUN_14585f09a(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2f8))();
  if (cVar1 == '\x01') {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar2 = &PTR_FUN_14adf1030;
    puVar2[1] = param_1 + 0x5d;
    puVar2[2] = param_1 + 0x5f;
  }
  return puVar2;
}



// FUNCTION 14585f0f0 FUN_14585f0f0 body=156 status=ok
// SIG undefined FUN_14585f0f0(void)

bool FUN_14585f0f0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585f1ac FUN_14585f1ac body=446 status=ok
// SIG undefined FUN_14585f1ac(void)

void FUN_14585f1ac(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
                  char param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = param_1[0x16];
  if ((lVar3 != 0) || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)) {
    if ((*(char *)(param_1[0x15] + 0x178) == '\x03') ||
       ((*(byte *)(param_1[0x7c] + 0x590) & 1) == 0)) {
      if ((param_5 != '\0') && (param_1[0x59] == 0)) {
        (**(code **)(*param_1 + 0x5e8))(param_1);
      }
      if ((param_1[0x59] != 0) && (*(longlong *)(param_1[0x59] + 0x1c8) != 0)) {
        FUN_140ee5bf8(param_1,0);
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        lVar1 = *(longlong *)(param_1[0x59] + 0x1c8);
        if (lVar1 == 0) {
          puVar2 = &DAT_14c8464e0;
          uVar4 = (undefined4)DAT_14c8464f0;
          uVar5 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar4 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
          uVar5 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
          puVar2 = (undefined8 *)(lVar1 + 0x260);
        }
        local_98 = *(undefined4 *)puVar2;
        uStack_94 = *(undefined4 *)((longlong)puVar2 + 4);
        uStack_90 = *(undefined4 *)(puVar2 + 1);
        uStack_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
        local_88 = CONCAT44(uVar5,uVar4);
        uVar4 = FUN_144a7c670(lVar3);
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        local_80 = *param_2;
        uStack_7c = param_2[1];
        uStack_78 = param_2[2];
        uStack_74 = param_2[3];
        local_70 = *(undefined8 *)(param_2 + 4);
        FUN_14125d694(param_3,local_b8,&local_98);
        (**(code **)(*param_1 + 0x648))(param_1,local_b8,local_a0,param_4);
      }
    }
    else if ((*(byte *)(param_1[0x7c] + 0x590) & 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14585f38a FUN_14585f38a body=124 status=ok
// SIG undefined FUN_14585f38a(void)

longlong * FUN_14585f38a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b5dc760;
  FUN_14585f406(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return param_2;
}



// FUNCTION 14585f406 FUN_14585f406 body=91 status=ok
// SIG undefined FUN_14585f406(void)

undefined8 * FUN_14585f406(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_140fc6ae8(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_140fc6ae8();
  }
  FUN_140aed1ce(param_1,param_2);
  *param_1 = &PTR_FUN_14b962980;
  return param_1;
}



// FUNCTION 14585f462 FUN_14585f462 body=55 status=ok
// SIG undefined FUN_14585f462(void)

void FUN_14585f462(longlong *param_1)

{
  FUN_14585f49a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14585f49a FUN_14585f49a body=123 status=ok
// SIG undefined FUN_14585f49a(void)

void FUN_14585f49a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14585f516 FUN_14585f516 body=40 status=ok
// SIG undefined FUN_14585f516(void)

undefined8 FUN_14585f516(undefined8 param_1,int param_2)

{
  FUN_14585f53e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585f53e FUN_14585f53e body=144 status=ok
// SIG undefined FUN_14585f53e(void)

void FUN_14585f53e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aea7170;
  param_1[5] = &PTR_FUN_14aea7410;
  if (param_1[0x1a] != 0) {
    plVar1 = param_1 + 0x1e;
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1c];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_14585f5fa(param_1);
  return;
}



// FUNCTION 14585f5da FUN_14585f5da body=31 status=ok
// SIG undefined FUN_14585f5da(void)

undefined8 FUN_14585f5da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


