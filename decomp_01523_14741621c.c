// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14741621c FUN_14741621c body=156 status=ok
// SIG undefined FUN_14741621c(void)

void FUN_14741621c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xf8,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 1474162b8 FUN_1474162b8 body=44 status=ok
// SIG undefined FUN_1474162b8(void)

void FUN_1474162b8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 1474162f0 FUN_1474162f0 body=67 status=ok
// SIG undefined FUN_1474162f0(void)

longlong FUN_1474162f0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147432e9e(lVar1,param_1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined2 *)(lVar1 + 0xf0) = 0;
  return lVar1;
}



// FUNCTION 147416334 FUN_147416334 body=156 status=ok
// SIG undefined FUN_147416334(void)

void FUN_147416334(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xf8,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 1474163d0 FUN_1474163d0 body=44 status=ok
// SIG undefined FUN_1474163d0(void)

void FUN_1474163d0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147416408 FUN_147416408 body=87 status=ok
// SIG undefined FUN_147416408(void)

longlong FUN_147416408(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425cf8(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 147416460 FUN_147416460 body=161 status=ok
// SIG undefined FUN_147416460(void)

void FUN_147416460(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147416502 FUN_147416502 body=44 status=ok
// SIG undefined FUN_147416502(void)

void FUN_147416502(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741653a FUN_14741653a body=87 status=ok
// SIG undefined FUN_14741653a(void)

longlong FUN_14741653a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425dba(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 147416592 FUN_147416592 body=161 status=ok
// SIG undefined FUN_147416592(void)

void FUN_147416592(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147416634 FUN_147416634 body=44 status=ok
// SIG undefined FUN_147416634(void)

void FUN_147416634(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741666c FUN_14741666c body=39 status=ok
// SIG undefined FUN_14741666c(void)

void FUN_14741666c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425e7c(uVar1,param_1);
  return;
}



// FUNCTION 147416694 FUN_147416694 body=161 status=ok
// SIG undefined FUN_147416694(void)

void FUN_147416694(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147416736 FUN_147416736 body=44 status=ok
// SIG undefined FUN_147416736(void)

void FUN_147416736(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741676e FUN_14741676e body=87 status=ok
// SIG undefined FUN_14741676e(void)

longlong FUN_14741676e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425f1e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 1474167c6 FUN_1474167c6 body=161 status=ok
// SIG undefined FUN_1474167c6(void)

void FUN_1474167c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147416868 FUN_147416868 body=44 status=ok
// SIG undefined FUN_147416868(void)

void FUN_147416868(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 1474168a0 FUN_1474168a0 body=87 status=ok
// SIG undefined FUN_1474168a0(void)

longlong FUN_1474168a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425fe0(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 1474168f8 FUN_1474168f8 body=161 status=ok
// SIG undefined FUN_1474168f8(void)

void FUN_1474168f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 14741699a FUN_14741699a body=44 status=ok
// SIG undefined FUN_14741699a(void)

void FUN_14741699a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 1474169d2 FUN_1474169d2 body=87 status=ok
// SIG undefined FUN_1474169d2(void)

longlong FUN_1474169d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425cf8(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 147416a2a FUN_147416a2a body=161 status=ok
// SIG undefined FUN_147416a2a(void)

void FUN_147416a2a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147416acc FUN_147416acc body=44 status=ok
// SIG undefined FUN_147416acc(void)

void FUN_147416acc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147416b04 FUN_147416b04 body=87 status=ok
// SIG undefined FUN_147416b04(void)

longlong FUN_147416b04(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425dba(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 147416b5c FUN_147416b5c body=161 status=ok
// SIG undefined FUN_147416b5c(void)

void FUN_147416b5c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147416bfe FUN_147416bfe body=44 status=ok
// SIG undefined FUN_147416bfe(void)

void FUN_147416bfe(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147416c36 FUN_147416c36 body=39 status=ok
// SIG undefined FUN_147416c36(void)

void FUN_147416c36(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426072(uVar1,param_1);
  return;
}



// FUNCTION 147416c5e FUN_147416c5e body=161 status=ok
// SIG undefined FUN_147416c5e(void)

void FUN_147416c5e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147416d00 FUN_147416d00 body=44 status=ok
// SIG undefined FUN_147416d00(void)

void FUN_147416d00(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147416d38 FUN_147416d38 body=87 status=ok
// SIG undefined FUN_147416d38(void)

longlong FUN_147416d38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425f1e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 147416d90 FUN_147416d90 body=161 status=ok
// SIG undefined FUN_147416d90(void)

void FUN_147416d90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147416e32 FUN_147416e32 body=44 status=ok
// SIG undefined FUN_147416e32(void)

void FUN_147416e32(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147416e6a FUN_147416e6a body=87 status=ok
// SIG undefined FUN_147416e6a(void)

longlong FUN_147416e6a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425fe0(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 147416ec2 FUN_147416ec2 body=161 status=ok
// SIG undefined FUN_147416ec2(void)

void FUN_147416ec2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147416f64 FUN_147416f64 body=44 status=ok
// SIG undefined FUN_147416f64(void)

void FUN_147416f64(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147416f9c FUN_147416f9c body=87 status=ok
// SIG undefined FUN_147416f9c(void)

longlong FUN_147416f9c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425cf8(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 147416ff4 FUN_147416ff4 body=161 status=ok
// SIG undefined FUN_147416ff4(void)

void FUN_147416ff4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147417096 FUN_147417096 body=44 status=ok
// SIG undefined FUN_147417096(void)

void FUN_147417096(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 1474170ce FUN_1474170ce body=87 status=ok
// SIG undefined FUN_1474170ce(void)

longlong FUN_1474170ce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425dba(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 147417126 FUN_147417126 body=161 status=ok
// SIG undefined FUN_147417126(void)

void FUN_147417126(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 1474171c8 FUN_1474171c8 body=44 status=ok
// SIG undefined FUN_1474171c8(void)

void FUN_1474171c8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147417200 FUN_147417200 body=39 status=ok
// SIG undefined FUN_147417200(void)

void FUN_147417200(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_1474260e4(uVar1,param_1);
  return;
}



// FUNCTION 147417228 FUN_147417228 body=161 status=ok
// SIG undefined FUN_147417228(void)

void FUN_147417228(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 1474172ca FUN_1474172ca body=44 status=ok
// SIG undefined FUN_1474172ca(void)

void FUN_1474172ca(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147417302 FUN_147417302 body=87 status=ok
// SIG undefined FUN_147417302(void)

longlong FUN_147417302(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425f1e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 14741735a FUN_14741735a body=161 status=ok
// SIG undefined FUN_14741735a(void)

void FUN_14741735a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 1474173fc FUN_1474173fc body=44 status=ok
// SIG undefined FUN_1474173fc(void)

void FUN_1474173fc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147417434 FUN_147417434 body=87 status=ok
// SIG undefined FUN_147417434(void)

longlong FUN_147417434(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425fe0(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 14741748c FUN_14741748c body=161 status=ok
// SIG undefined FUN_14741748c(void)

void FUN_14741748c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 14741752e FUN_14741752e body=44 status=ok
// SIG undefined FUN_14741752e(void)

void FUN_14741752e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147417566 FUN_147417566 body=87 status=ok
// SIG undefined FUN_147417566(void)

longlong FUN_147417566(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425fe0(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 1474175be FUN_1474175be body=161 status=ok
// SIG undefined FUN_1474175be(void)

void FUN_1474175be(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147417660 FUN_147417660 body=44 status=ok
// SIG undefined FUN_147417660(void)

void FUN_147417660(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147417698 FUN_147417698 body=87 status=ok
// SIG undefined FUN_147417698(void)

longlong FUN_147417698(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425fe0(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 1474176f0 FUN_1474176f0 body=161 status=ok
// SIG undefined FUN_1474176f0(void)

void FUN_1474176f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147417792 FUN_147417792 body=44 status=ok
// SIG undefined FUN_147417792(void)

void FUN_147417792(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 1474177ca FUN_1474177ca body=87 status=ok
// SIG undefined FUN_1474177ca(void)

longlong FUN_1474177ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425fe0(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 147417822 FUN_147417822 body=161 status=ok
// SIG undefined FUN_147417822(void)

void FUN_147417822(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 1474178c4 FUN_1474178c4 body=44 status=ok
// SIG undefined FUN_1474178c4(void)

void FUN_1474178c4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 1474178fc FUN_1474178fc body=39 status=ok
// SIG undefined FUN_1474178fc(void)

void FUN_1474178fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426186(uVar1,param_1);
  return;
}



// FUNCTION 147417924 FUN_147417924 body=161 status=ok
// SIG undefined FUN_147417924(void)

void FUN_147417924(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 1474179c6 FUN_1474179c6 body=44 status=ok
// SIG undefined FUN_1474179c6(void)

void FUN_1474179c6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 1474179fe FUN_1474179fe body=39 status=ok
// SIG undefined FUN_1474179fe(void)

void FUN_1474179fe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_1474261dc(uVar1,param_1);
  return;
}



// FUNCTION 147417a26 FUN_147417a26 body=161 status=ok
// SIG undefined FUN_147417a26(void)

void FUN_147417a26(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147417ac8 FUN_147417ac8 body=44 status=ok
// SIG undefined FUN_147417ac8(void)

void FUN_147417ac8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147417b00 FUN_147417b00 body=39 status=ok
// SIG undefined FUN_147417b00(void)

void FUN_147417b00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426232(uVar1,param_1);
  return;
}



// FUNCTION 147417b28 FUN_147417b28 body=161 status=ok
// SIG undefined FUN_147417b28(void)

void FUN_147417b28(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147417bca FUN_147417bca body=44 status=ok
// SIG undefined FUN_147417bca(void)

void FUN_147417bca(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147417c02 FUN_147417c02 body=39 status=ok
// SIG undefined FUN_147417c02(void)

void FUN_147417c02(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_1474262b8(uVar1,param_1);
  return;
}



// FUNCTION 147417c2a FUN_147417c2a body=161 status=ok
// SIG undefined FUN_147417c2a(void)

void FUN_147417c2a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147417ccc FUN_147417ccc body=44 status=ok
// SIG undefined FUN_147417ccc(void)

void FUN_147417ccc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147417d04 FUN_147417d04 body=39 status=ok
// SIG undefined FUN_147417d04(void)

void FUN_147417d04(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_14742632a(uVar1,param_1);
  return;
}



// FUNCTION 147417d2c FUN_147417d2c body=161 status=ok
// SIG undefined FUN_147417d2c(void)

void FUN_147417d2c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147417dce FUN_147417dce body=44 status=ok
// SIG undefined FUN_147417dce(void)

void FUN_147417dce(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147417e06 FUN_147417e06 body=39 status=ok
// SIG undefined FUN_147417e06(void)

void FUN_147417e06(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_14742639c(uVar1,param_1);
  return;
}



// FUNCTION 147417e2e FUN_147417e2e body=161 status=ok
// SIG undefined FUN_147417e2e(void)

void FUN_147417e2e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147417ed0 FUN_147417ed0 body=44 status=ok
// SIG undefined FUN_147417ed0(void)

void FUN_147417ed0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147417f08 FUN_147417f08 body=39 status=ok
// SIG undefined FUN_147417f08(void)

void FUN_147417f08(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_14742640e(uVar1,param_1);
  return;
}



// FUNCTION 147417f30 FUN_147417f30 body=161 status=ok
// SIG undefined FUN_147417f30(void)

void FUN_147417f30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147417fd2 FUN_147417fd2 body=44 status=ok
// SIG undefined FUN_147417fd2(void)

void FUN_147417fd2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741800a FUN_14741800a body=39 status=ok
// SIG undefined FUN_14741800a(void)

void FUN_14741800a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426480(uVar1,param_1);
  return;
}



// FUNCTION 147418032 FUN_147418032 body=161 status=ok
// SIG undefined FUN_147418032(void)

void FUN_147418032(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 1474180d4 FUN_1474180d4 body=44 status=ok
// SIG undefined FUN_1474180d4(void)

void FUN_1474180d4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741810c FUN_14741810c body=39 status=ok
// SIG undefined FUN_14741810c(void)

void FUN_14741810c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_1474264f2(uVar1,param_1);
  return;
}



// FUNCTION 147418134 FUN_147418134 body=161 status=ok
// SIG undefined FUN_147418134(void)

void FUN_147418134(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 1474181d6 FUN_1474181d6 body=44 status=ok
// SIG undefined FUN_1474181d6(void)

void FUN_1474181d6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741820e FUN_14741820e body=39 status=ok
// SIG undefined FUN_14741820e(void)

void FUN_14741820e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426564(uVar1,param_1);
  return;
}



// FUNCTION 147418236 FUN_147418236 body=161 status=ok
// SIG undefined FUN_147418236(void)

void FUN_147418236(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 1474182d8 FUN_1474182d8 body=44 status=ok
// SIG undefined FUN_1474182d8(void)

void FUN_1474182d8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147418310 FUN_147418310 body=39 status=ok
// SIG undefined FUN_147418310(void)

void FUN_147418310(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_1474265d6(uVar1,param_1);
  return;
}



// FUNCTION 147418338 FUN_147418338 body=161 status=ok
// SIG undefined FUN_147418338(void)

void FUN_147418338(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 1474183da FUN_1474183da body=44 status=ok
// SIG undefined FUN_1474183da(void)

void FUN_1474183da(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147418412 FUN_147418412 body=39 status=ok
// SIG undefined FUN_147418412(void)

void FUN_147418412(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426648(uVar1,param_1);
  return;
}



// FUNCTION 14741843a FUN_14741843a body=161 status=ok
// SIG undefined FUN_14741843a(void)

void FUN_14741843a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 1474184dc FUN_1474184dc body=44 status=ok
// SIG undefined FUN_1474184dc(void)

void FUN_1474184dc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147418514 FUN_147418514 body=39 status=ok
// SIG undefined FUN_147418514(void)

void FUN_147418514(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_1474266ba(uVar1,param_1);
  return;
}



// FUNCTION 14741853c FUN_14741853c body=161 status=ok
// SIG undefined FUN_14741853c(void)

void FUN_14741853c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 1474185de FUN_1474185de body=44 status=ok
// SIG undefined FUN_1474185de(void)

void FUN_1474185de(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147418616 FUN_147418616 body=87 status=ok
// SIG undefined FUN_147418616(void)

longlong FUN_147418616(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425dba(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 14741866e FUN_14741866e body=161 status=ok
// SIG undefined FUN_14741866e(void)

void FUN_14741866e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147418710 FUN_147418710 body=44 status=ok
// SIG undefined FUN_147418710(void)

void FUN_147418710(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147418748 FUN_147418748 body=87 status=ok
// SIG undefined FUN_147418748(void)

longlong FUN_147418748(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425dba(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 1474187a0 FUN_1474187a0 body=161 status=ok
// SIG undefined FUN_1474187a0(void)

void FUN_1474187a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147418842 FUN_147418842 body=44 status=ok
// SIG undefined FUN_147418842(void)

void FUN_147418842(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741887a FUN_14741887a body=87 status=ok
// SIG undefined FUN_14741887a(void)

longlong FUN_14741887a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147425dba(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 1474188d2 FUN_1474188d2 body=161 status=ok
// SIG undefined FUN_1474188d2(void)

void FUN_1474188d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147418974 FUN_147418974 body=44 status=ok
// SIG undefined FUN_147418974(void)

void FUN_147418974(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 1474189ac FUN_1474189ac body=87 status=ok
// SIG undefined FUN_1474189ac(void)

longlong FUN_1474189ac(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_14742675c(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 147418a04 FUN_147418a04 body=161 status=ok
// SIG undefined FUN_147418a04(void)

void FUN_147418a04(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147418aa6 FUN_147418aa6 body=44 status=ok
// SIG undefined FUN_147418aa6(void)

void FUN_147418aa6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147418ade FUN_147418ade body=87 status=ok
// SIG undefined FUN_147418ade(void)

longlong FUN_147418ade(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_14742675c(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 147418b36 FUN_147418b36 body=161 status=ok
// SIG undefined FUN_147418b36(void)

void FUN_147418b36(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147418bd8 FUN_147418bd8 body=44 status=ok
// SIG undefined FUN_147418bd8(void)

void FUN_147418bd8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147418c10 FUN_147418c10 body=87 status=ok
// SIG undefined FUN_147418c10(void)

longlong FUN_147418c10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_14742675c(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 147418c68 FUN_147418c68 body=161 status=ok
// SIG undefined FUN_147418c68(void)

void FUN_147418c68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147418d0a FUN_147418d0a body=44 status=ok
// SIG undefined FUN_147418d0a(void)

void FUN_147418d0a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147418d42 FUN_147418d42 body=87 status=ok
// SIG undefined FUN_147418d42(void)

longlong FUN_147418d42(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_14742675c(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 147418d9a FUN_147418d9a body=161 status=ok
// SIG undefined FUN_147418d9a(void)

void FUN_147418d9a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147418e3c FUN_147418e3c body=44 status=ok
// SIG undefined FUN_147418e3c(void)

void FUN_147418e3c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147418e74 FUN_147418e74 body=87 status=ok
// SIG undefined FUN_147418e74(void)

longlong FUN_147418e74(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_14742675c(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 147418ecc FUN_147418ecc body=161 status=ok
// SIG undefined FUN_147418ecc(void)

void FUN_147418ecc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 147418f6e FUN_147418f6e body=44 status=ok
// SIG undefined FUN_147418f6e(void)

void FUN_147418f6e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147418fa6 FUN_147418fa6 body=87 status=ok
// SIG undefined FUN_147418fa6(void)

longlong FUN_147418fa6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_14742675c(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  FUN_147440a6c(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"ClearResource",1);
  return lVar1;
}



// FUNCTION 147418ffe FUN_147418ffe body=161 status=ok
// SIG undefined FUN_147418ffe(void)

void FUN_147418ffe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  return;
}



// FUNCTION 14741909f FUN_14741909f body=688 status=ok
// SIG undefined FUN_14741909f(void)

void FUN_14741909f(void)

{
  FUN_145ddfcb6();
  FUN_14741cb5d(&DAT_14ca86458);
  FUN_145de0238();
  FUN_14741cb5d(&DAT_14ca867d0);
  FUN_145cca9fa();
  FUN_14741cb5d(&DAT_14ca868f8);
  FUN_1461343a2();
  FUN_14741cb5d(&DAT_14ca86a20);
  FUN_146134c36();
  FUN_14741cb5d(&DAT_14ca86d98);
  FUN_146134f12();
  FUN_14741cb5d(&DAT_14ca86ec0);
  FUN_1461351ee();
  FUN_14741cb5d(&DAT_14ca86fe8);
  FUN_146135a82();
  FUN_14741cb5d(&DAT_14ca87360);
  FUN_146135d5e();
  FUN_14741cb5d(&DAT_14ca87488);
  FUN_14613603a();
  FUN_14741cb5d(&DAT_14ca875b0);
  FUN_1415e10d0();
  FUN_14741cb5d(&DAT_14ca87800);
  FUN_1415e0fb6();
  FUN_14741cb5d(&DAT_14ca876d8);
  FUN_145de07ba();
  FUN_14741cb5d(&DAT_14ca87928);
  FUN_146136316();
  FUN_14741cb5d(&DAT_14ca87a50);
  FUN_1461365f2();
  FUN_14741cb5d(&DAT_14ca87b78);
  FUN_145d58158();
  FUN_14741cb5d(&DAT_14ca87ca0);
  FUN_1461368ce();
  FUN_14741cb5d(&DAT_14ca87dc8);
  FUN_146136baa();
  FUN_14741cb5d(&DAT_14ca87ef0);
  FUN_146136e86();
  FUN_14741cb5d(&DAT_14ca88018);
  FUN_146137162();
  FUN_14741cb5d(&DAT_14ca88140);
  FUN_14613743e();
  FUN_14741cb5d(&DAT_14ca88268);
  FUN_14613771a();
  FUN_14741cb5d(&DAT_14ca88390);
  FUN_1461379f6();
  FUN_14741cb5d(&DAT_14ca884b8);
  FUN_146137cd2();
  FUN_14741cb5d(&DAT_14ca885e0);
  FUN_146137fae();
  FUN_14741cb5d(&DAT_14ca88708);
  FUN_145cca478();
  FUN_14741cb5d(&DAT_14ca866a8);
  FUN_14613495a();
  FUN_14741cb5d(&DAT_14ca86c70);
  FUN_1461357a6();
  FUN_14741cb5d(&DAT_14ca87238);
  FUN_144a8d470();
  FUN_14741cb5d(&DAT_14ca86580);
  FUN_14613467e();
  FUN_14741cb5d(&DAT_14ca86b48);
  FUN_1461354ca();
  FUN_14741cb5d(&DAT_14ca87110);
  FUN_1415e11ea();
  FUN_14741cb5d(&DAT_14ca88830);
  FUN_1415e1304();
  FUN_14741cb5d(&DAT_14ca88958);
  FUN_14613828a();
  FUN_14741cb5d(&DAT_14ca88a80);
  FUN_145ccaf7c();
  FUN_14741cb5d(&DAT_14ca88ba8);
  FUN_146138566();
  FUN_14741cb5d(&DAT_14ca88cd0);
  FUN_146138842();
  FUN_14741cb5d(&DAT_14ca88df8);
  FUN_146138b1e();
  FUN_14741cb5d(&DAT_14ca88f20);
  FUN_146138dfa();
  FUN_14741cb5d(&DAT_14ca89048);
  FUN_1461390d6();
  FUN_14741cb5d(&DAT_14ca89170);
  return;
}



// FUNCTION 147419350 FUN_147419350 body=44 status=ok
// SIG undefined FUN_147419350(void)

void FUN_147419350(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147419388 FUN_147419388 body=96 status=ok
// SIG undefined FUN_147419388(void)

undefined8 FUN_147419388(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e0da2e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca911e0,1);
  return uVar3;
}



// FUNCTION 1474193e8 FUN_1474193e8 body=138 status=ok
// SIG undefined FUN_1474193e8(void)

void * FUN_1474193e8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147419472 FUN_147419472 body=44 status=ok
// SIG undefined FUN_147419472(void)

void FUN_147419472(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1474194a6 FUN_1474194a6 body=39 status=ok
// SIG undefined FUN_1474194a6(void)

void FUN_1474194a6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147422b3c(uVar1,param_1);
  return;
}



// FUNCTION 1474194ce FUN_1474194ce body=138 status=ok
// SIG undefined FUN_1474194ce(void)

void * FUN_1474194ce(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147419558 FUN_147419558 body=44 status=ok
// SIG undefined FUN_147419558(void)

void FUN_147419558(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741958c FUN_14741958c body=39 status=ok
// SIG undefined FUN_14741958c(void)

void FUN_14741958c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147422bc2(uVar1,param_1);
  return;
}



// FUNCTION 1474195b4 FUN_1474195b4 body=138 status=ok
// SIG undefined FUN_1474195b4(void)

void * FUN_1474195b4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14741963e FUN_14741963e body=44 status=ok
// SIG undefined FUN_14741963e(void)

void FUN_14741963e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147419676 FUN_147419676 body=89 status=ok
// SIG undefined FUN_147419676(void)

undefined8 FUN_147419676(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_1404e1e84();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 1474196d0 FUN_1474196d0 body=138 status=ok
// SIG undefined FUN_1474196d0(void)

void * FUN_1474196d0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14741975a FUN_14741975a body=44 status=ok
// SIG undefined FUN_14741975a(void)

void FUN_14741975a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147419792 FUN_147419792 body=89 status=ok
// SIG undefined FUN_147419792(void)

undefined8 FUN_147419792(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_145eb82a6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 1474197ec FUN_1474197ec body=138 status=ok
// SIG undefined FUN_1474197ec(void)

void * FUN_1474197ec(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147419876 FUN_147419876 body=44 status=ok
// SIG undefined FUN_147419876(void)

void FUN_147419876(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1474198da FUN_1474198da body=89 status=ok
// SIG undefined FUN_1474198da(void)

undefined8 FUN_1474198da(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_145f9b64a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 147419934 FUN_147419934 body=138 status=ok
// SIG undefined FUN_147419934(void)

void * FUN_147419934(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1474199be FUN_1474199be body=481 status=ok
// SIG undefined FUN_1474199be(void)

void FUN_1474199be(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined **local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined ***local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  uint local_4c;
  undefined1 local_48;
  undefined4 local_44;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = &local_98;
  local_98 = &PTR_FUN_14a249130;
  local_90 = &DAT_14ca89950;
  local_88 = 0xc0;
  local_70 = 0;
  local_60 = 1;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_48 = 0;
  local_44 = 0;
  local_40 = L"FScreenRectangleVertexBuffer";
  local_38 = 0;
  uStack_30 = 0;
  local_7c = 0xc0;
  local_74 = 0x4001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,CONCAT71((int7)((ulonglong)local_68 >> 8),1));
    local_b0 = &local_70;
    local_b8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_7c);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_70;
    local_b8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_7c);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_a0) {
    lVar3 = *plVar4;
    *plVar4 = local_a0;
    local_a0 = 0;
    if (lVar3 == 0) goto LAB_147419adf;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_147419adf:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147419ba0 FUN_147419ba0 body=487 status=ok
// SIG undefined FUN_147419ba0(void)

void FUN_147419ba0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined **local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined ***local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  uint local_4c;
  undefined1 local_48;
  undefined4 local_44;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = &local_98;
  local_98 = &PTR_FUN_14a249130;
  local_90 = &DAT_14a383940;
  local_88 = 0x18;
  local_70 = 0;
  local_60 = 1;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_48 = 0;
  local_44 = 0;
  local_40 = L"FScreenRectangleIndexBuffer";
  local_38 = 0;
  uStack_30 = 0;
  local_7c = 0x200000018;
  local_74 = 0x8001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,CONCAT71((int7)((ulonglong)local_68 >> 8),1));
    local_b0 = &local_70;
    local_b8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_7c);
    *(undefined4 *)(local_a0 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_70;
    local_b8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_7c);
    *(undefined4 *)(local_a0 + 0x18) = 8;
  }
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_a0) {
    lVar3 = *plVar4;
    *plVar4 = local_a0;
    local_a0 = 0;
    if (lVar3 == 0) goto LAB_147419cc7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_147419cc7:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147419d88 FUN_147419d88 body=44 status=ok
// SIG undefined FUN_147419d88(void)

void FUN_147419d88(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147419db8 FUN_147419db8 body=44 status=ok
// SIG undefined FUN_147419db8(void)

void FUN_147419db8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147419e04 FUN_147419e04 body=39 status=ok
// SIG undefined FUN_147419e04(void)

void FUN_147419e04(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 147419e2c FUN_147419e2c body=154 status=ok
// SIG undefined FUN_147419e2c(void)

void FUN_147419e2c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 147419ec6 FUN_147419ec6 body=44 status=ok
// SIG undefined FUN_147419ec6(void)

void FUN_147419ec6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147419f12 FUN_147419f12 body=39 status=ok
// SIG undefined FUN_147419f12(void)

void FUN_147419f12(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 147419f3a FUN_147419f3a body=154 status=ok
// SIG undefined FUN_147419f3a(void)

void FUN_147419f3a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 147419fd4 FUN_147419fd4 body=44 status=ok
// SIG undefined FUN_147419fd4(void)

void FUN_147419fd4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741a020 FUN_14741a020 body=39 status=ok
// SIG undefined FUN_14741a020(void)

void FUN_14741a020(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741a048 FUN_14741a048 body=154 status=ok
// SIG undefined FUN_14741a048(void)

void FUN_14741a048(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741a0e2 FUN_14741a0e2 body=44 status=ok
// SIG undefined FUN_14741a0e2(void)

void FUN_14741a0e2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741a12e FUN_14741a12e body=39 status=ok
// SIG undefined FUN_14741a12e(void)

void FUN_14741a12e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741a156 FUN_14741a156 body=154 status=ok
// SIG undefined FUN_14741a156(void)

void FUN_14741a156(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741a1f0 FUN_14741a1f0 body=44 status=ok
// SIG undefined FUN_14741a1f0(void)

void FUN_14741a1f0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741a23c FUN_14741a23c body=39 status=ok
// SIG undefined FUN_14741a23c(void)

void FUN_14741a23c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741a264 FUN_14741a264 body=154 status=ok
// SIG undefined FUN_14741a264(void)

void FUN_14741a264(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741a2fe FUN_14741a2fe body=44 status=ok
// SIG undefined FUN_14741a2fe(void)

void FUN_14741a2fe(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741a34a FUN_14741a34a body=39 status=ok
// SIG undefined FUN_14741a34a(void)

void FUN_14741a34a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741a372 FUN_14741a372 body=154 status=ok
// SIG undefined FUN_14741a372(void)

void FUN_14741a372(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741a40c FUN_14741a40c body=44 status=ok
// SIG undefined FUN_14741a40c(void)

void FUN_14741a40c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741a458 FUN_14741a458 body=39 status=ok
// SIG undefined FUN_14741a458(void)

void FUN_14741a458(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741a480 FUN_14741a480 body=154 status=ok
// SIG undefined FUN_14741a480(void)

void FUN_14741a480(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741a51a FUN_14741a51a body=44 status=ok
// SIG undefined FUN_14741a51a(void)

void FUN_14741a51a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741a566 FUN_14741a566 body=39 status=ok
// SIG undefined FUN_14741a566(void)

void FUN_14741a566(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741a58e FUN_14741a58e body=154 status=ok
// SIG undefined FUN_14741a58e(void)

void FUN_14741a58e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741a628 FUN_14741a628 body=44 status=ok
// SIG undefined FUN_14741a628(void)

void FUN_14741a628(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741a674 FUN_14741a674 body=39 status=ok
// SIG undefined FUN_14741a674(void)

void FUN_14741a674(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741a69c FUN_14741a69c body=154 status=ok
// SIG undefined FUN_14741a69c(void)

void FUN_14741a69c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741a736 FUN_14741a736 body=44 status=ok
// SIG undefined FUN_14741a736(void)

void FUN_14741a736(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741a782 FUN_14741a782 body=39 status=ok
// SIG undefined FUN_14741a782(void)

void FUN_14741a782(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741a7aa FUN_14741a7aa body=154 status=ok
// SIG undefined FUN_14741a7aa(void)

void FUN_14741a7aa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741a844 FUN_14741a844 body=44 status=ok
// SIG undefined FUN_14741a844(void)

void FUN_14741a844(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741a890 FUN_14741a890 body=39 status=ok
// SIG undefined FUN_14741a890(void)

void FUN_14741a890(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741a8b8 FUN_14741a8b8 body=154 status=ok
// SIG undefined FUN_14741a8b8(void)

void FUN_14741a8b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741a952 FUN_14741a952 body=44 status=ok
// SIG undefined FUN_14741a952(void)

void FUN_14741a952(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741a99e FUN_14741a99e body=39 status=ok
// SIG undefined FUN_14741a99e(void)

void FUN_14741a99e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741a9c6 FUN_14741a9c6 body=154 status=ok
// SIG undefined FUN_14741a9c6(void)

void FUN_14741a9c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741aa60 FUN_14741aa60 body=44 status=ok
// SIG undefined FUN_14741aa60(void)

void FUN_14741aa60(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741aaac FUN_14741aaac body=39 status=ok
// SIG undefined FUN_14741aaac(void)

void FUN_14741aaac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741aad4 FUN_14741aad4 body=154 status=ok
// SIG undefined FUN_14741aad4(void)

void FUN_14741aad4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741ab6e FUN_14741ab6e body=44 status=ok
// SIG undefined FUN_14741ab6e(void)

void FUN_14741ab6e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741abba FUN_14741abba body=39 status=ok
// SIG undefined FUN_14741abba(void)

void FUN_14741abba(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741abe2 FUN_14741abe2 body=154 status=ok
// SIG undefined FUN_14741abe2(void)

void FUN_14741abe2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741ac7c FUN_14741ac7c body=44 status=ok
// SIG undefined FUN_14741ac7c(void)

void FUN_14741ac7c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741acc8 FUN_14741acc8 body=39 status=ok
// SIG undefined FUN_14741acc8(void)

void FUN_14741acc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741acf0 FUN_14741acf0 body=154 status=ok
// SIG undefined FUN_14741acf0(void)

void FUN_14741acf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741ad8a FUN_14741ad8a body=44 status=ok
// SIG undefined FUN_14741ad8a(void)

void FUN_14741ad8a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741add6 FUN_14741add6 body=39 status=ok
// SIG undefined FUN_14741add6(void)

void FUN_14741add6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741adfe FUN_14741adfe body=154 status=ok
// SIG undefined FUN_14741adfe(void)

void FUN_14741adfe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741ae98 FUN_14741ae98 body=44 status=ok
// SIG undefined FUN_14741ae98(void)

void FUN_14741ae98(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741aee4 FUN_14741aee4 body=39 status=ok
// SIG undefined FUN_14741aee4(void)

void FUN_14741aee4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741af0c FUN_14741af0c body=154 status=ok
// SIG undefined FUN_14741af0c(void)

void FUN_14741af0c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741afa6 FUN_14741afa6 body=44 status=ok
// SIG undefined FUN_14741afa6(void)

void FUN_14741afa6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741aff2 FUN_14741aff2 body=39 status=ok
// SIG undefined FUN_14741aff2(void)

void FUN_14741aff2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741b01a FUN_14741b01a body=154 status=ok
// SIG undefined FUN_14741b01a(void)

void FUN_14741b01a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741b0b4 FUN_14741b0b4 body=44 status=ok
// SIG undefined FUN_14741b0b4(void)

void FUN_14741b0b4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741b100 FUN_14741b100 body=39 status=ok
// SIG undefined FUN_14741b100(void)

void FUN_14741b100(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741b128 FUN_14741b128 body=154 status=ok
// SIG undefined FUN_14741b128(void)

void FUN_14741b128(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741b1c2 FUN_14741b1c2 body=44 status=ok
// SIG undefined FUN_14741b1c2(void)

void FUN_14741b1c2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741b20e FUN_14741b20e body=39 status=ok
// SIG undefined FUN_14741b20e(void)

void FUN_14741b20e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741b236 FUN_14741b236 body=154 status=ok
// SIG undefined FUN_14741b236(void)

void FUN_14741b236(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741b2d0 FUN_14741b2d0 body=44 status=ok
// SIG undefined FUN_14741b2d0(void)

void FUN_14741b2d0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741b31c FUN_14741b31c body=39 status=ok
// SIG undefined FUN_14741b31c(void)

void FUN_14741b31c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741b344 FUN_14741b344 body=154 status=ok
// SIG undefined FUN_14741b344(void)

void FUN_14741b344(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741b3de FUN_14741b3de body=44 status=ok
// SIG undefined FUN_14741b3de(void)

void FUN_14741b3de(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741b42a FUN_14741b42a body=39 status=ok
// SIG undefined FUN_14741b42a(void)

void FUN_14741b42a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741b452 FUN_14741b452 body=154 status=ok
// SIG undefined FUN_14741b452(void)

void FUN_14741b452(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741b4ec FUN_14741b4ec body=44 status=ok
// SIG undefined FUN_14741b4ec(void)

void FUN_14741b4ec(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741b538 FUN_14741b538 body=39 status=ok
// SIG undefined FUN_14741b538(void)

void FUN_14741b538(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741b560 FUN_14741b560 body=154 status=ok
// SIG undefined FUN_14741b560(void)

void FUN_14741b560(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741b5fa FUN_14741b5fa body=44 status=ok
// SIG undefined FUN_14741b5fa(void)

void FUN_14741b5fa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741b646 FUN_14741b646 body=39 status=ok
// SIG undefined FUN_14741b646(void)

void FUN_14741b646(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741b66e FUN_14741b66e body=154 status=ok
// SIG undefined FUN_14741b66e(void)

void FUN_14741b66e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741b708 FUN_14741b708 body=44 status=ok
// SIG undefined FUN_14741b708(void)

void FUN_14741b708(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741b754 FUN_14741b754 body=39 status=ok
// SIG undefined FUN_14741b754(void)

void FUN_14741b754(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741b77c FUN_14741b77c body=154 status=ok
// SIG undefined FUN_14741b77c(void)

void FUN_14741b77c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741b816 FUN_14741b816 body=44 status=ok
// SIG undefined FUN_14741b816(void)

void FUN_14741b816(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741b862 FUN_14741b862 body=39 status=ok
// SIG undefined FUN_14741b862(void)

void FUN_14741b862(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741b88a FUN_14741b88a body=154 status=ok
// SIG undefined FUN_14741b88a(void)

void FUN_14741b88a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741b924 FUN_14741b924 body=44 status=ok
// SIG undefined FUN_14741b924(void)

void FUN_14741b924(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14741b970 FUN_14741b970 body=39 status=ok
// SIG undefined FUN_14741b970(void)

void FUN_14741b970(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147426976(uVar1,param_1);
  return;
}



// FUNCTION 14741b998 FUN_14741b998 body=154 status=ok
// SIG undefined FUN_14741b998(void)

void FUN_14741b998(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xea) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf2) = 0;
  return;
}



// FUNCTION 14741ba34 FUN_14741ba34 body=106 status=ok
// SIG undefined FUN_14741ba34(void)

bool FUN_14741ba34(longlong param_1,float param_2,float param_3,char param_4)

{
  float fVar1;
  bool bVar2;
  
  fVar1 = *(float *)(param_1 + 0x18);
  bVar2 = fVar1 == 0.0;
  if (((param_4 == '\x01' && !bVar2) && (bVar2 = true, param_3 <= (fVar1 + 1.0) * param_2)) &&
     ((1.0 - fVar1) * param_2 <= param_3)) {
    if ((param_3 != param_2) || (NAN(param_3) || NAN(param_2))) {
      if ((*(float *)(param_1 + 8) != param_3) || (NAN(*(float *)(param_1 + 8)) || NAN(param_3))) {
        bVar2 = (bool)(-(param_3 == *(float *)(param_1 + 0xc)) & 1);
      }
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}



// FUNCTION 14741ba9e FUN_14741ba9e body=114 status=ok
// SIG undefined FUN_14741ba9e(void)

void FUN_14741ba9e(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14ca8ba00 != (longlong *)0x0) {
    plVar2 = DAT_14ca8ba00;
    do {
      lVar1 = plVar2[2];
      (**(code **)(lVar1 + 0x18))(&local_4c);
      *(undefined4 *)(lVar1 + 0x54) = uStack_30;
      *(undefined4 *)(lVar1 + 0x58) = uStack_2c;
      *(undefined4 *)(lVar1 + 0x5c) = uStack_28;
      *(undefined4 *)(lVar1 + 0x60) = uStack_24;
      *(undefined4 *)(lVar1 + 0x48) = local_3c;
      *(undefined4 *)(lVar1 + 0x4c) = uStack_38;
      *(undefined4 *)(lVar1 + 0x50) = uStack_34;
      *(undefined4 *)(lVar1 + 0x54) = uStack_30;
      *(undefined4 *)(lVar1 + 0x38) = local_4c;
      *(undefined4 *)(lVar1 + 0x3c) = uStack_48;
      *(undefined4 *)(lVar1 + 0x40) = uStack_44;
      *(undefined4 *)(lVar1 + 0x44) = uStack_40;
      plVar2 = (longlong *)*plVar2;
    } while (plVar2 != (longlong *)0x0);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741bb11 FUN_14741bb11 body=231 status=ok
// SIG undefined FUN_14741bb11(void)

int * FUN_14741bb11(int *param_1,ushort *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400536ab();
  if ((((*(byte *)(&DAT_14ca814c8 + (ulonglong)*param_2 * 0xf) & 0x20) == 0) ||
      (DAT_14ca84dff != '\x01')) || (iVar3 = 1, DAT_14ca84e00 == '\0')) {
    *param_1 = 4;
    cVar2 = FUN_147430900();
    if (cVar2 != '\0') {
      *param_1 = *param_1 + 1;
    }
    cVar2 = FUN_14743049a(*param_2);
    if (cVar2 == '\0') goto LAB_14741bbd7;
    iVar3 = *param_1;
    FUN_140056680(&local_30,L"DepthAux");
    param_1[(longlong)iVar3 * 8 + 2] = 8;
    iVar1 = local_28 + -1;
    if (local_28 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_1 + (longlong)iVar3 * 8 + 4,local_30,iVar1);
    param_1[(longlong)iVar3 * 8 + 8] = 0x10100;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    iVar3 = *param_1 + 1;
  }
  *param_1 = iVar3;
LAB_14741bbd7:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741bbfa FUN_14741bbfa body=44 status=ok
// SIG undefined FUN_14741bbfa(void)

void FUN_14741bbfa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741bc32 FUN_14741bc32 body=96 status=ok
// SIG undefined FUN_14741bc32(void)

undefined8 FUN_14741bc32(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145a5e5ac();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca91638,1);
  return uVar3;
}



// FUNCTION 14741bc92 FUN_14741bc92 body=138 status=ok
// SIG undefined FUN_14741bc92(void)

void * FUN_14741bc92(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14741bd1c FUN_14741bd1c body=44 status=ok
// SIG undefined FUN_14741bd1c(void)

void FUN_14741bd1c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741bd54 FUN_14741bd54 body=89 status=ok
// SIG undefined FUN_14741bd54(void)

undefined8 FUN_14741bd54(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_144a8221e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 14741bdae FUN_14741bdae body=138 status=ok
// SIG undefined FUN_14741bdae(void)

void * FUN_14741bdae(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14741be38 FUN_14741be38 body=44 status=ok
// SIG undefined FUN_14741be38(void)

void FUN_14741be38(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741be70 FUN_14741be70 body=96 status=ok
// SIG undefined FUN_14741be70(void)

undefined8 FUN_14741be70(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eb8822();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca916c0,1);
  return uVar3;
}



// FUNCTION 14741bed0 FUN_14741bed0 body=138 status=ok
// SIG undefined FUN_14741bed0(void)

void * FUN_14741bed0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14741bf5a FUN_14741bf5a body=44 status=ok
// SIG undefined FUN_14741bf5a(void)

void FUN_14741bf5a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741bf92 FUN_14741bf92 body=96 status=ok
// SIG undefined FUN_14741bf92(void)

undefined8 FUN_14741bf92(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157ac94();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca91748,1);
  return uVar3;
}



// FUNCTION 14741bff2 FUN_14741bff2 body=138 status=ok
// SIG undefined FUN_14741bff2(void)

void * FUN_14741bff2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14741c07c FUN_14741c07c body=44 status=ok
// SIG undefined FUN_14741c07c(void)

void FUN_14741c07c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741c0b4 FUN_14741c0b4 body=96 status=ok
// SIG undefined FUN_14741c0b4(void)

undefined8 FUN_14741c0b4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_144a91c3e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca917d0,1);
  return uVar3;
}



// FUNCTION 14741c114 FUN_14741c114 body=138 status=ok
// SIG undefined FUN_14741c114(void)

void * FUN_14741c114(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14741c19e FUN_14741c19e body=27 status=ok
// SIG undefined FUN_14741c19e(void)

undefined8 FUN_14741c19e(byte param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)
          CONCAT31((int3)((uint)param_1 * 0x30 >> 8),
                   *(undefined1 *)((longlong)&DAT_14c873430 + (ulonglong)((uint)param_1 * 0x30) + 2)
                  ) & 0xffffffffffffff40;
  return CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 6);
}



// FUNCTION 14741c1ba FUN_14741c1ba body=217 status=ok
// SIG undefined FUN_14741c1ba(void)

void FUN_14741c1ba(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [40];
  longlong local_b0 [18];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_20 = 0x1100000001;
  local_b0[1] = 0x800020000;
  (**(code **)(*DAT_14ca83900 + 0x68))(DAT_14ca83900,local_b0);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != local_b0) {
    lVar3 = *plVar4;
    *plVar4 = local_b0[0];
    local_b0[0] = 0;
    if (lVar3 == 0) goto LAB_14741c232;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_b0[0] != 0) {
    LOCK();
    puVar1 = (uint *)(local_b0[0] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14741c232:
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741c2c2 FUN_14741c2c2 body=642 status=ok
// SIG undefined FUN_14741c2c2(void)

void FUN_14741c2c2(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  void *_Dst;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FCubeIndexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84 = 0x200000048;
  local_7c = 0x8001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
  }
  plVar5 = (longlong *)(param_1 + 0x10);
  if (plVar5 != &local_90) {
    lVar4 = *plVar5;
    *plVar5 = local_90;
    local_90 = 0;
    if (lVar4 == 0) goto LAB_14741c3ba;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14741c3ba:
  lVar4 = *plVar5;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,1);
  local_a8 = 0x48;
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar4,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,0);
  }
  memcpy(_Dst,&DAT_14a393200,0x48);
  lVar4 = *plVar5;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741c546 FUN_14741c546 body=641 status=ok
// SIG undefined FUN_14741c546(void)

void FUN_14741c546(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FTwoTrianglesIndexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84 = 0x20000000c;
  local_7c = 0x8001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
  }
  plVar6 = (longlong *)(param_1 + 0x10);
  if (plVar6 != &local_90) {
    lVar4 = *plVar6;
    *plVar6 = local_90;
    local_90 = 0;
    if (lVar4 == 0) goto LAB_14741c63e;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14741c63e:
  lVar4 = *plVar6;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,1);
  local_a8 = 0xc;
  puVar5 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar4,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar5 = 0x300010000;
  *(undefined4 *)(puVar5 + 1) = 0x20003;
  lVar4 = *plVar6;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741c7c8 FUN_14741c7c8 body=44 status=ok
// SIG undefined FUN_14741c7c8(void)

void FUN_14741c7c8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}


