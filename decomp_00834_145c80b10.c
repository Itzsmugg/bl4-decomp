// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145c80b10 FUN_145c80b10 body=72 status=ok
// SIG undefined FUN_145c80b10(void)

void FUN_145c80b10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e62ff0;
  param_1[5] = &PTR_FUN_149e63290;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144a8720c(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c80b58 FUN_145c80b58 body=40 status=ok
// SIG undefined FUN_145c80b58(void)

undefined8 FUN_145c80b58(undefined8 param_1,int param_2)

{
  FUN_145c80b80();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c80b80 FUN_145c80b80 body=135 status=ok
// SIG undefined FUN_145c80b80(void)

void FUN_145c80b80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1dee90;
  FUN_140896ad0(param_1 + 8);
  if (param_1[0x12] != 0) {
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
  FUN_145c80c07(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c80c07 FUN_145c80c07 body=49 status=ok
// SIG undefined FUN_145c80c07(void)

void FUN_145c80c07(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c80c44 FUN_145c80c44 body=101 status=ok
// SIG undefined FUN_145c80c44(void)

undefined8 * FUN_145c80c44(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14a3a4520;
  param_1[0x79] = 0;
  FUN_140f47dd8(param_1 + 0x7a);
  plVar1 = (longlong *)param_1[0x75];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x730))(plVar1,0);
    (**(code **)(*plVar1 + 0x940))(plVar1,0);
  }
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 2;
  return param_1;
}



// FUNCTION 145c80caa FUN_145c80caa body=40 status=ok
// SIG undefined FUN_145c80caa(void)

undefined8 FUN_145c80caa(undefined8 param_1,int param_2)

{
  FUN_145c80cd2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c80cd2 FUN_145c80cd2 body=72 status=ok
// SIG undefined FUN_145c80cd2(void)

void FUN_145c80cd2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3db560;
  FUN_1412dafa6(param_1 + 10);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c80d20 FUN_145c80d20 body=107 status=ok
// SIG undefined FUN_145c80d20(void)

void FUN_145c80d20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4f2a00;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa1) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa9) = 0;
  return;
}



// FUNCTION 145c80d96 FUN_145c80d96 body=101 status=ok
// SIG undefined FUN_145c80d96(void)

undefined8 * FUN_145c80d96(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_141069aea();
  *param_1 = &PTR_FUN_14a4f9cb0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_1447f71cc(lVar2,0x40000000);
  }
  return param_1;
}



// FUNCTION 145c80e06 FUN_145c80e06 body=101 status=ok
// SIG undefined FUN_145c80e06(void)

undefined8 * FUN_145c80e06(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a688c50;
  *(undefined1 *)((longlong)param_1 + 0xd9) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145c80e6c FUN_145c80e6c body=40 status=ok
// SIG undefined FUN_145c80e6c(void)

undefined8 FUN_145c80e6c(undefined8 param_1,int param_2)

{
  FUN_145c80e94();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c80e94 FUN_145c80e94 body=72 status=ok
// SIG undefined FUN_145c80e94(void)

void FUN_145c80e94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aabfea0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_145c5220e(param_1 + 0x72);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145c80ee8 FUN_145c80ee8 body=101 status=ok
// SIG undefined FUN_145c80ee8(void)

undefined8 * FUN_145c80ee8(undefined8 *param_1)

{
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14acc12e0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  return param_1;
}



// FUNCTION 145c80f4e FUN_145c80f4e body=40 status=ok
// SIG undefined FUN_145c80f4e(void)

undefined8 FUN_145c80f4e(undefined8 param_1,int param_2)

{
  FUN_145c80f76();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c80f76 FUN_145c80f76 body=72 status=ok
// SIG undefined FUN_145c80f76(void)

void FUN_145c80f76(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad72750;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = &PTR_FUN_14ad6b620;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c80fbe FUN_145c80fbe body=40 status=ok
// SIG undefined FUN_145c80fbe(void)

undefined8 FUN_145c80fbe(undefined8 param_1,int param_2)

{
  FUN_145c80fe6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c80fe6 FUN_145c80fe6 body=72 status=ok
// SIG undefined FUN_145c80fe6(void)

void FUN_145c80fe6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad731a0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = &PTR_FUN_14ad6b4b0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c8102e FUN_145c8102e body=40 status=ok
// SIG undefined FUN_145c8102e(void)

undefined8 FUN_145c8102e(undefined8 param_1,int param_2)

{
  FUN_145c81056();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c81056 FUN_145c81056 body=72 status=ok
// SIG undefined FUN_145c81056(void)

void FUN_145c81056(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4aef30;
  FUN_1449db362(param_1 + 0xb);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c8109e FUN_145c8109e body=40 status=ok
// SIG undefined FUN_145c8109e(void)

undefined8 FUN_145c8109e(undefined8 param_1,int param_2)

{
  FUN_145c810c6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c810c6 FUN_145c810c6 body=72 status=ok
// SIG undefined FUN_145c810c6(void)

void FUN_145c810c6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4afc60;
  FUN_1449db362(param_1 + 0xb);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c8110e FUN_145c8110e body=40 status=ok
// SIG undefined FUN_145c8110e(void)

undefined8 FUN_145c8110e(undefined8 param_1,int param_2)

{
  FUN_145c81136();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c81136 FUN_145c81136 body=72 status=ok
// SIG undefined FUN_145c81136(void)

void FUN_145c81136(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4bb0b0;
  FUN_1449db362(param_1 + 9);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c8117e FUN_145c8117e body=46 status=ok
// SIG undefined FUN_145c8117e(void)

void FUN_145c8117e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c811ac(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b588160;
  puVar1[5] = &PTR_FUN_14b588460;
  return;
}



// FUNCTION 145c811ac FUN_145c811ac body=94 status=ok
// SIG undefined FUN_145c811ac(void)

undefined8 * FUN_145c811ac(undefined8 *param_1)

{
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a52c970;
  param_1[5] = &PTR_FUN_14a52cc70;
  param_1[0x2d] = 0x3ff0000000000000;
  param_1[0x2e] = 0x3ff0000000000000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  FUN_140e2f50a(param_1,4);
  return param_1;
}



// FUNCTION 145c8120a FUN_145c8120a body=38 status=ok
// SIG undefined FUN_145c8120a(void)

undefined8 FUN_145c8120a(undefined8 param_1,int param_2)

{
  FUN_145c81230();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c81230 FUN_145c81230 body=349 status=ok
// SIG undefined FUN_145c81230(void)

void FUN_145c81230(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8b8be0;
  FUN_145c8138d(param_1[0x3c],*(undefined4 *)(param_1 + 0x3d));
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d82dc(param_1 + 0x32);
  FUN_1458d8294(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_145c813ba(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145c8138d FUN_145c8138d body=45 status=ok
// SIG undefined FUN_145c8138d(void)

void FUN_145c8138d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145c813ba FUN_145c813ba body=72 status=ok
// SIG undefined FUN_145c813ba(void)

void FUN_145c813ba(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b8b8a40;
    if (param_1[0x16] != 0) {
      FUN_1400020a8();
    }
    FUN_140fe7f26(param_1);
    param_1 = param_1 + 0x19;
  }
  return;
}



// FUNCTION 145c81402 FUN_145c81402 body=40 status=ok
// SIG undefined FUN_145c81402(void)

undefined8 FUN_145c81402(undefined8 param_1,int param_2)

{
  FUN_145c8142a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8142a FUN_145c8142a body=72 status=ok
// SIG undefined FUN_145c8142a(void)

void FUN_145c8142a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bce57c0;
  FUN_1449db362(param_1 + 0xe);
  FUN_1449db362(param_1 + 0xc);
  FUN_1449db362(param_1 + 10);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c81472 FUN_145c81472 body=40 status=ok
// SIG undefined FUN_145c81472(void)

undefined8 FUN_145c81472(undefined8 param_1,int param_2)

{
  FUN_145c8149a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8149a FUN_145c8149a body=72 status=ok
// SIG undefined FUN_145c8149a(void)

void FUN_145c8149a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd72b90;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_145810b44(param_1 + 0x15);
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145c814ee FUN_145c814ee body=101 status=ok
// SIG undefined FUN_145c814ee(void)

undefined8 * FUN_145c814ee(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  FUN_14118b488(puVar1);
  puVar2 = puVar1 + 1;
  *puVar1 = &PTR_FUN_14befa9c0;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  puVar1[1] = &PTR_FUN_14befa9f0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return puVar2;
}



// FUNCTION 145c8155c FUN_145c8155c body=53 status=ok
// SIG undefined FUN_145c8155c(void)

undefined8 * FUN_145c8155c(undefined8 *param_1)

{
  FUN_145c81592();
  *param_1 = &PTR_FUN_14b6bf3b0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  return param_1;
}



// FUNCTION 145c81592 FUN_145c81592 body=114 status=ok
// SIG undefined FUN_145c81592(void)

undefined8 * FUN_145c81592(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  
  uVar1 = FUN_14007ca06();
  FUN_14131b9ca(param_1,uVar1);
  *param_1 = &PTR_FUN_14b06aab0;
  FUN_145c81604(param_1 + 8);
  *(undefined4 *)(param_1 + 0x72) = 0x42340000;
  lVar2 = FUN_1449e3f1e();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x2e0) != 0)) {
    fVar3 = cosf(*(float *)(*(longlong *)(lVar2 + 0x2e0) + 0x2c0) * 0.017453292);
    *(float *)(param_1 + 0x72) = fVar3;
  }
  return param_1;
}



// FUNCTION 145c81604 FUN_145c81604 body=227 status=ok
// SIG undefined FUN_145c81604(void)

undefined8 * FUN_145c81604(undefined8 *param_1)

{
  longlong lVar1;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x459c4000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xc1a00000;
  *(undefined4 *)(param_1 + 0xe) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x42c80000;
  *(undefined4 *)(param_1 + 0xf) = 0x42b40000;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  FUN_1415129b0(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x68) = 0;
  lVar1 = FUN_1449e3f1e();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x2e0), lVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(lVar1 + 0x30);
    *(undefined1 *)((longlong)param_1 + 0x341) = *(undefined1 *)(lVar1 + 0x31);
    FUN_145c816e8(param_1 + 2,lVar1 + 0x38);
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(lVar1 + 0x150);
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(lVar1 + 0x154);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(lVar1 + 0x158);
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(lVar1 + 0x440);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(lVar1 + 0x444);
  }
  return param_1;
}



// FUNCTION 145c816e8 FUN_145c816e8 body=120 status=ok
// SIG undefined FUN_145c816e8(void)

longlong FUN_145c816e8(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1415128b6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145c81760 FUN_145c81760 body=549 status=ok
// SIG undefined FUN_145c81760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c81760(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong *local_f8 [2];
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  _DAT_14c9d52a0 = &PTR__purecall_14a222c38;
  FUN_140056680(&DAT_14c9d52b0,L"GPUScene");
  DAT_14c9d52c0 = 0xffffffff;
  DAT_14c9d52d0 = (code *)0x0;
  DAT_14c9d52e0 = (longlong *)0x0;
  FUN_145c81986(&DAT_14c9d52a0);
  _DAT_14c9d52a0 = &PTR_FUN_14a2221b0;
  local_108 = *param_1;
  local_f8[0] = (longlong *)0x0;
  if (local_108 != 0) {
    plVar9 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[2];
    }
    (**(code **)*plVar9)(plVar9,local_f8);
  }
  local_c8 = (code *)0x0;
  puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar8 = &PTR_FUN_14a2221c0;
  puVar8[2] = local_108;
  puVar8[4] = local_f8[0];
  local_f8[0] = (longlong *)0x0;
  puVar8[8] = local_d8;
  puVar8[9] = uStack_d0;
  puVar8[6] = local_e8;
  puVar8[7] = uStack_e0;
  lVar7 = (longlong)DAT_14c9d52d0;
  if (local_108 != 0) {
    local_108 = 0;
  }
  if (puVar8 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_c8 = FUN_140a4a37c;
  }
  uVar1 = CONCAT44(uStack_bc,uStack_c0);
  uVar2 = CONCAT44(uStack_ac,uStack_b0);
  uVar3 = CONCAT44(uStack_a4,local_a8);
  uVar4 = CONCAT44(uStack_9c,uStack_a0);
  uVar5 = CONCAT44(uStack_94,local_98);
  uVar6 = CONCAT44(uStack_8c,uStack_90);
  DAT_14c9d52d0 = local_c8;
  local_c8 = (code *)lVar7;
  uStack_c0 = (undefined4)uRam000000014c9d52d8;
  uStack_bc = uRam000000014c9d52d8._4_4_;
  local_b8 = DAT_14c9d52e0;
  uStack_b0 = (undefined4)uRam000000014c9d52e8;
  uStack_ac = uRam000000014c9d52e8._4_4_;
  local_a8 = (undefined4)DAT_14c9d52f0;
  uStack_a4 = DAT_14c9d52f0._4_4_;
  uStack_a0 = (undefined4)uRam000000014c9d52f8;
  uStack_9c = uRam000000014c9d52f8._4_4_;
  local_98 = _DAT_14c9d5300;
  uStack_94 = DAT_14c9d5300_4;
  uStack_90 = (undefined4)uRam000000014c9d5308;
  uStack_8c = uRam000000014c9d5308._4_4_;
  uRam000000014c9d52d8 = uVar1;
  uRam000000014c9d52e8 = uVar2;
  DAT_14c9d52f0 = uVar3;
  uRam000000014c9d52f8 = uVar4;
  _DAT_14c9d5300 = uVar5;
  uRam000000014c9d5308 = uVar6;
  if (lVar7 != 0) {
    plVar9 = local_b8;
    if (DAT_14c9d52e0 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_a8;
    }
    DAT_14c9d52e0 = puVar8;
    (**(code **)(*plVar9 + 0x10))();
    puVar8 = DAT_14c9d52e0;
    if (local_108 != 0) {
      plVar9 = local_f8[0];
      if (local_f8[0] == (longlong *)0x0) {
        plVar9 = &local_e8;
      }
      (**(code **)(*plVar9 + 0x10))();
      puVar8 = DAT_14c9d52e0;
    }
  }
  DAT_14c9d52e0 = puVar8;
  if (*param_1 != 0) {
    plVar9 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c81986 FUN_145c81986 body=103 status=ok
// SIG undefined FUN_145c81986(void)

void FUN_145c81986(undefined8 param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  
  if (DAT_14ca4b300 == (longlong *)0x0) {
    DAT_14ca4b300 = (longlong *)FUN_14001cc68(0x10,0x10);
    *DAT_14ca4b300 = 0;
    DAT_14ca4b300[1] = 0;
    uVar2 = 0;
    iVar3 = 0;
  }
  else {
    iVar3 = (int)DAT_14ca4b300[1];
    uVar2 = *(uint *)((longlong)DAT_14ca4b300 + 0xc);
  }
  plVar1 = DAT_14ca4b300;
  *(uint *)(DAT_14ca4b300 + 1) = iVar3 + 1U;
  if (uVar2 < iVar3 + 1U) {
    FUN_145c819ee(plVar1,iVar3);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = param_1;
  return;
}



// FUNCTION 145c819ee FUN_145c819ee body=132 status=ok
// SIG undefined FUN_145c819ee(void)

void FUN_145c819ee(longlong param_1,int param_2)

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



// FUNCTION 145c81a74 FUN_145c81a74 body=103 status=ok
// SIG undefined FUN_145c81a74(void)

ulonglong FUN_145c81a74(longlong param_1)

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
LAB_145c81abe:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c81abe;
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



// FUNCTION 145c81adc FUN_145c81adc body=315 status=ok
// SIG undefined FUN_145c81adc(void)

void FUN_145c81adc(longlong param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x10) == '\0') {
    lVar2 = *param_3;
    if (lVar2 == 0) {
      if (*(int *)(param_1 + 0x38) == param_2) {
        FUN_145a182aa(param_1 + 0x38);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
      }
    }
    else {
      local_58 = FUN_145a1827a;
      local_50 = 0;
      FUN_145c81d2e(local_48,param_1);
      FUN_145c81c2c(lVar2 + 0x130,&local_58,local_48);
      FUN_1449db362(local_48);
      lVar2 = *param_3;
      local_58 = FUN_1488fee1c;
      local_50 = 0;
      FUN_145c81d2e(local_48,param_1,&local_58);
      FUN_145c81c2c(lVar2 + 0x148,&local_58,local_48);
      FUN_1449db362(local_48);
      *(longlong *)(param_1 + 0x40) = *param_3;
      plVar3 = (longlong *)param_3[1];
      plVar4 = *(longlong **)(param_1 + 0x48);
      if (plVar4 != plVar3) {
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
          UNLOCK();
          plVar4 = *(longlong **)(param_1 + 0x48);
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        *(longlong **)(param_1 + 0x48) = plVar3;
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c81c2c FUN_145c81c2c body=216 status=ok
// SIG undefined FUN_145c81c2c(void)

undefined8 * FUN_145c81c2c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c81d2e FUN_145c81d2e body=428 status=ok
// SIG undefined FUN_145c81d2e(void)

longlong * FUN_145c81d2e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145c81e0e:
    *puVar5 = &PTR_LAB_14b419ce0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b417e80;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c81e0e;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b419ce0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b417e80;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 145c81eda FUN_145c81eda body=40 status=ok
// SIG undefined FUN_145c81eda(void)

undefined8 FUN_145c81eda(undefined8 param_1,int param_2)

{
  FUN_145c81f02();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c81f02 FUN_145c81f02 body=318 status=ok
// SIG undefined FUN_145c81f02(void)

void FUN_145c81f02(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb91650;
  param_1[0x1f] = &PTR_FUN_14bb919a0;
  param_1[0x20] = &PTR_FUN_14bb919d0;
  param_1[0x21] = &PTR_FUN_14bb919f0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_145c82040(param_1 + 0x43);
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_145c82076(param_1 + 0x38);
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x30],*(undefined4 *)(param_1 + 0x31));
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_145c820ac(param_1 + 0x22);
  thunk_FUN_1405d1598(param_1);
  return;
}



// FUNCTION 145c82040 FUN_145c82040 body=53 status=ok
// SIG undefined FUN_145c82040(void)

void FUN_145c82040(longlong *param_1)

{
  FUN_145c820e2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c82076 FUN_145c82076 body=53 status=ok
// SIG undefined FUN_145c82076(void)

void FUN_145c82076(longlong *param_1)

{
  FUN_145c8213c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c820ac FUN_145c820ac body=53 status=ok
// SIG undefined FUN_145c820ac(void)

void FUN_145c820ac(longlong *param_1)

{
  FUN_145c82196();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c820e2 FUN_145c820e2 body=90 status=ok
// SIG undefined FUN_145c820e2(void)

void FUN_145c820e2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 145c8213c FUN_145c8213c body=90 status=ok
// SIG undefined FUN_145c8213c(void)

void FUN_145c8213c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145c82196 FUN_145c82196 body=90 status=ok
// SIG undefined FUN_145c82196(void)

void FUN_145c82196(longlong param_1)

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



// FUNCTION 145c821fe FUN_145c821fe body=40 status=ok
// SIG undefined FUN_145c821fe(void)

undefined8 FUN_145c821fe(undefined8 param_1,int param_2)

{
  FUN_145c82226();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c82226 FUN_145c82226 body=352 status=ok
// SIG undefined FUN_145c82226(void)

void FUN_145c82226(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b081e20;
  plVar3 = (longlong *)param_1[0x58];
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
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_145c82386(param_1 + 0x43);
  *(undefined4 *)(param_1 + 0x42) = 0;
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_145c823be(param_1 + 0x39);
  FUN_144a2da94(param_1 + 0x32);
  FUN_144a2da94(param_1 + 0x2b);
  FUN_144a2da94(param_1 + 0x24);
  FUN_144a2da94(param_1 + 0x1d);
  FUN_144a2da94(param_1 + 0x16);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145c82386 FUN_145c82386 body=55 status=ok
// SIG undefined FUN_145c82386(void)

void FUN_145c82386(longlong *param_1)

{
  FUN_145c82558(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c823be FUN_145c823be body=55 status=ok
// SIG undefined FUN_145c823be(void)

void FUN_145c823be(longlong *param_1)

{
  FUN_145c823f6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c823f6 FUN_145c823f6 body=352 status=ok
// SIG undefined FUN_145c823f6(void)

void FUN_145c823f6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_14584ac00(*local_70 + (longlong)iStack_54 * 0x1c0 + 0x18);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1457c321a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c82558 FUN_145c82558 body=365 status=ok
// SIG undefined FUN_145c82558(void)

void FUN_145c82558(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 0x20 + (longlong)iStack_54 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144748838(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145c826c8 FUN_145c826c8 body=341 status=ok
// SIG undefined FUN_145c826c8(void)

void FUN_145c826c8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c8281e(local_20,iVar1 != 0,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8281e FUN_145c8281e body=192 status=ok
// SIG undefined FUN_145c8281e(void)

void FUN_145c8281e(longlong param_1,char param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_3 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(&local_28,puVar2,1);
  if (local_28 == 0) {
    local_28 = DAT_14cb758c0;
  }
  if (param_1 != 0) {
    lVar1 = FUN_144a78b9e();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (*(longlong *)(param_1 + 0x11e8) != 0)) {
      if (param_2 == '\0') {
        FUN_1400bc8c2(*(longlong *)(param_1 + 0x11e8) + 0x1b70,&local_28);
      }
      else {
        FUN_1400bc96c();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c828e0 FUN_145c828e0 body=154 status=ok
// SIG undefined FUN_145c828e0(void)

bool FUN_145c828e0(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 145c8298c FUN_145c8298c body=254 status=ok
// SIG undefined FUN_145c8298c(void)

undefined8
FUN_145c8298c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b994ae0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b994a70;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c82a8c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c82a8c FUN_145c82a8c body=216 status=ok
// SIG undefined FUN_145c82a8c(void)

undefined8 * FUN_145c82a8c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c82b72 FUN_145c82b72 body=24 status=ok
// SIG undefined FUN_145c82b72(void)

bool FUN_145c82b72(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145c82b8a FUN_145c82b8a body=254 status=ok
// SIG undefined FUN_145c82b8a(void)

undefined8
FUN_145c82b8a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b994bc0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b994b50;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c82c8a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c82c8a FUN_145c82c8a body=216 status=ok
// SIG undefined FUN_145c82c8a(void)

undefined8 * FUN_145c82c8a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c82d70 FUN_145c82d70 body=24 status=ok
// SIG undefined FUN_145c82d70(void)

bool FUN_145c82d70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145c82d88 FUN_145c82d88 body=254 status=ok
// SIG undefined FUN_145c82d88(void)

undefined8
FUN_145c82d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9a7ed0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a7e60;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c82e88(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c82e88 FUN_145c82e88 body=216 status=ok
// SIG undefined FUN_145c82e88(void)

undefined8 * FUN_145c82e88(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c82f6e FUN_145c82f6e body=24 status=ok
// SIG undefined FUN_145c82f6e(void)

bool FUN_145c82f6e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145c82f86 FUN_145c82f86 body=254 status=ok
// SIG undefined FUN_145c82f86(void)

undefined8
FUN_145c82f86(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9a8090;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a8020;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c83086(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c83086 FUN_145c83086 body=216 status=ok
// SIG undefined FUN_145c83086(void)

undefined8 * FUN_145c83086(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8316c FUN_145c8316c body=24 status=ok
// SIG undefined FUN_145c8316c(void)

bool FUN_145c8316c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145c83184 FUN_145c83184 body=254 status=ok
// SIG undefined FUN_145c83184(void)

undefined8
FUN_145c83184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9a8170;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a8100;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c83284(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c83284 FUN_145c83284 body=216 status=ok
// SIG undefined FUN_145c83284(void)

undefined8 * FUN_145c83284(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8336a FUN_145c8336a body=24 status=ok
// SIG undefined FUN_145c8336a(void)

bool FUN_145c8336a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145c83382 FUN_145c83382 body=620 status=ok
// SIG undefined FUN_145c83382(void)

void FUN_145c83382(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 local_58;
  code *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140f05dd8();
  if (*(longlong *)(param_1 + 0x2600) == 0) {
    local_50 = FUN_145873018;
    local_48 = 0;
    FUN_145c835f0(&DAT_14cbe74f0,&local_58,param_1);
    *(undefined8 *)(param_1 + 0x2600) = local_58;
  }
  if (*(longlong *)(param_1 + 0x2608) == 0) {
    local_50 = FUN_145873018;
    local_48 = 0;
    FUN_145c835f0(&DAT_14cbe7508,&local_58,param_1);
    *(undefined8 *)(param_1 + 0x2608) = local_58;
  }
  lVar6 = FUN_1447210f0(param_1);
  if (lVar6 != 0) {
    if (0 < *(int *)(lVar6 + 0x238)) {
      iVar9 = 0;
      lVar10 = 0;
      do {
        plVar7 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar6 + 0x230) + lVar10);
        if (plVar7 != (longlong *)0x0) {
          cVar5 = (**(code **)(*plVar7 + 0x6c8))(plVar7);
          if ((cVar5 != '\0') && (plVar7[0x73] != 0)) {
            lVar8 = FUN_144a7b4ca();
            lVar1 = plVar7[0x73];
            if (((lVar1 != 0) &&
                (((lVar8 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
                 (*(int *)(lVar8 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
               (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                lVar8 + 0x30)) {
              FUN_145873018(param_1,lVar1,lVar6);
              if (*(longlong *)(lVar1 + 0xf78) != 0) {
                FUN_1412fcac6(*(longlong *)(lVar1 + 0xf78),0,0xffffffff);
              }
            }
          }
        }
        lVar10 = lVar10 + 8;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar6 + 0x238));
    }
    lVar10 = FUN_14497e828(param_1);
    if (lVar10 != 0) {
      local_58 = 0;
      FUN_14485c47a(&local_58,param_1);
      uVar3 = local_58;
      local_50 = (code *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      pcVar4 = local_50;
      local_48 = 3;
      *(undefined ***)local_50 = &PTR_LAB_14b412d70;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      *(longlong *)(local_50 + 0x10) = lVar8;
      *(undefined ***)local_50 = &PTR_FUN_14b9dea20;
      *(undefined8 *)(local_50 + 0x18) = 0;
      FUN_14485c47a(local_50 + 0x18,param_1);
      *(undefined8 *)(pcVar4 + 0x20) = uVar3;
      *(longlong *)(pcVar4 + 0x28) = lVar6;
      FUN_14127bc3c(lVar10 + 0xd8,local_60,&local_50);
      FUN_1449db362(&local_50);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c835f0 FUN_145c835f0 body=254 status=ok
// SIG undefined FUN_145c835f0(void)

undefined8
FUN_145c835f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9de9b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9de940;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c836f0(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c836f0 FUN_145c836f0 body=216 status=ok
// SIG undefined FUN_145c836f0(void)

undefined8 * FUN_145c836f0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c837d6 FUN_145c837d6 body=24 status=ok
// SIG undefined FUN_145c837d6(void)

bool FUN_145c837d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145c837ee FUN_145c837ee body=255 status=ok
// SIG undefined FUN_145c837ee(void)

void FUN_145c837ee(void)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c83956(&local_30);
  plVar1 = (longlong *)FUN_14054d1d4();
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0,1);
  FUN_145c838ee(&local_50);
  FUN_1412cfe60(&local_40,&local_50,(local_48 == 0) + '\x1a');
  FUN_1401aebe8(&local_40,L"Shaders/WorkingDirectory/",0x19);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)FUN_14054d1d4();
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0,1);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c838ee FUN_145c838ee body=102 status=ok
// SIG undefined FUN_145c838ee(void)

undefined8 FUN_145c838ee(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145c839de(local_28);
  FUN_144a882a8(param_1,local_28,L"Intermediate/");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c83956 FUN_145c83956 body=135 status=ok
// SIG undefined FUN_145c83956(void)

undefined8 FUN_145c83956(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_145c83e48();
  FUN_140056680(&local_28,uVar1);
  FUN_1412cfe60(param_1,&local_28,(local_20 == 0) + '\x18');
  FUN_1401aebe8(param_1,L"UnrealShaderWorkingDir/",0x17);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c839de FUN_145c839de body=459 status=ok
// SIG undefined FUN_145c839de(void)

undefined8 * FUN_145c839de(undefined8 *param_1)

{
  uint uVar1;
  void *_Src;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  size_t sVar5;
  wchar_t *_Str;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong *local_68 [2];
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = (undefined8 *)FUN_145c83c44();
  uVar1 = *(uint *)(puVar3 + 1);
  if ((int)uVar1 < 2) {
    cVar2 = FUN_145c83bac();
    if (cVar2 == '\0') {
      uVar4 = FUN_140d6afb0();
      FUN_140056680(param_1,uVar4);
      if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
    uVar4 = FUN_1468305fa();
    FUN_140056680(&local_58,uVar4);
    FUN_144a5dc74(local_68);
    FUN_146817020(&local_58,local_68);
    FUN_14681725a(&local_48,&local_58,0);
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_58 = local_48;
    local_50 = local_40;
    local_4c = local_3c;
    _Str = local_48;
    if ((local_40 < 2) && (FUN_14020fad6(&local_58,&DAT_14c764000), _Str = local_58, local_50 == 0))
    {
      _Str = L"";
    }
    local_48 = (wchar_t *)FUN_14170cf26();
    local_30 = 0;
    local_40 = 0;
    if (local_48 != (wchar_t *)0x0) {
      sVar5 = wcslen(local_48);
      local_40 = (int)sVar5;
    }
    local_38 = _Str;
    if (_Str != (wchar_t *)0x0) {
      sVar5 = wcslen(_Str);
      local_30 = (int)sVar5;
    }
    FUN_140bee87a(local_78,&local_48,2);
    FUN_144a882a8(param_1,local_78,&DAT_149e065c6);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_1 = 0;
    _Src = (void *)*puVar3;
    *(uint *)(param_1 + 1) = uVar1;
    FUN_1446dd670(param_1,(ulonglong)uVar1,0);
    memcpy((void *)*param_1,_Src,(ulonglong)uVar1 * 2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 145c83bac FUN_145c83bac body=147 status=ok
// SIG undefined FUN_145c83bac(void)

undefined1 FUN_145c83bac(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c872f54) {
    FUN_144b3d300(&DAT_14c872f54);
    if (DAT_14c872f54 == -1) {
      bVar4 = true;
      cVar1 = FUN_1415258d2();
      if (cVar1 == '\0') {
        uVar2 = FUN_14118da1c();
        cVar1 = FUN_14054d46e(uVar2,L"SaveToUserDir");
        if (cVar1 == '\0') {
          cVar1 = FUN_145c83c40();
          if (cVar1 == '\0') {
            lVar3 = FUN_145c83c44();
            bVar4 = 1 < *(int *)(lVar3 + 8);
          }
        }
      }
      DAT_14c872f52 = bVar4;
      _Init_thread_footer(&DAT_14c872f54);
    }
  }
  return DAT_14c872f52;
}



// FUNCTION 145c83c40 FUN_145c83c40 body=3 status=ok
// SIG undefined FUN_145c83c40(void)

undefined8 FUN_145c83c40(void)

{
  return 0;
}



// FUNCTION 145c83c44 FUN_145c83c44 body=515 status=ok
// SIG undefined FUN_145c83c44(void)

longlong FUN_145c83c44(void)

{
  wchar_t **ppwVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  size_t sVar6;
  wchar_t *_Str;
  undefined4 uVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  wchar_t *local_78;
  int local_70;
  longlong local_68 [2];
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_1401aee1c();
  if (*(char *)(lVar4 + 0x118) == '\0') {
    ppwVar1 = (wchar_t **)(lVar4 + 0x38);
    uVar5 = FUN_14118da1c();
    local_88 = 0;
    FUN_14063337c(uVar5,L"UserDir=",ppwVar1,1);
    *(undefined1 *)(lVar4 + 0x118) = 1;
    if (1 < *(int *)(lVar4 + 0x40)) {
      cVar2 = FUN_1401aeb9c(ppwVar1);
      if (cVar2 == '\0') {
        FUN_140e4328c(ppwVar1);
        FUN_1449b8608(&local_58,ppwVar1,&DAT_149e065c6);
        local_78 = local_58;
        if (ppwVar1 != &local_58) {
          if (*(longlong *)(lVar4 + 0x38) != 0) {
            FUN_1400020a8();
          }
          *(wchar_t **)(lVar4 + 0x38) = local_58;
          *(undefined4 *)(lVar4 + 0x40) = (undefined4)local_50;
          *(undefined4 *)(lVar4 + 0x44) = local_50._4_4_;
          goto LAB_145c83c72;
        }
      }
      else {
        _Str = L"";
        if (*(int *)(lVar4 + 0x40) != 0) {
          _Str = *(wchar_t **)(lVar4 + 0x38);
        }
        uVar5 = FUN_140d6afb0();
        FUN_140056680(&local_78,uVar5);
        local_58 = L"";
        if (local_70 != 0) {
          local_58 = local_78;
        }
        uVar7 = 0;
        uVar3 = 0;
        if (local_58 != (wchar_t *)0x0) {
          sVar6 = wcslen(local_58);
          uVar3 = (int)sVar6;
        }
        local_50 = CONCAT44(local_50._4_4_,uVar3);
        local_48 = _Str;
        if (_Str != (wchar_t *)0x0) {
          sVar6 = wcslen(_Str);
          uVar7 = (int)sVar6;
        }
        local_40 = uVar7;
        FUN_140bee87a(local_68,&local_58,2);
        FUN_144a882a8(&local_58,local_68,&DAT_149e065c6);
        if (ppwVar1 == &local_58) {
          if (local_58 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar4 + 0x38) != 0) {
            FUN_1400020a8();
          }
          *(wchar_t **)(lVar4 + 0x38) = local_58;
          local_58 = (wchar_t *)0x0;
          *(undefined4 *)(lVar4 + 0x40) = (undefined4)local_50;
          *(undefined4 *)(lVar4 + 0x44) = local_50._4_4_;
          local_50 = 0;
        }
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
      }
      if (local_78 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_145c83c72:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 0x38;
}



// FUNCTION 145c83e48 FUN_145c83e48 body=593 status=ok
// SIG undefined FUN_145c83e48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_145c83e48(void)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_488 [32];
  undefined4 local_468;
  LPVOID local_458 [2];
  undefined2 *local_448;
  undefined8 uStack_440;
  longlong local_438 [66];
  undefined2 *local_228;
  undefined8 uStack_220;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_488;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8c3028) && (FUN_144b3d300(&DAT_14c8c3028), DAT_14c8c3028 == -1)) {
    DAT_14c8c3018 = (undefined2 *)0x0;
    _DAT_14c8c3020 = 0;
    atexit((_func_5014 *)&LAB_14279b961);
    _Init_thread_footer(&DAT_14c8c3028);
  }
  if (DAT_14c8c3020 < 2) {
    cVar1 = FUN_145c8409a();
    if (cVar1 == '\0') {
      memset(&local_228,0,0x208);
      GetTempPathW(0x104,(LPWSTR)&local_228);
      memset(local_438,0,0x208);
      GetLongPathNameW((LPCWSTR)&local_228,(LPWSTR)local_438,0x104);
      FUN_140056680(local_458,local_438);
      local_468 = 1;
      FUN_1414bc8e4(local_458,&local_448,&DAT_149e01f64,&DAT_149e065c6);
      if (DAT_14c8c3018 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      DAT_14c8c3018 = local_448;
      _DAT_14c8c3020 = uStack_440;
      local_448 = (undefined2 *)0x0;
      uStack_440 = 0;
      if (local_458[0] != (LPVOID)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      iVar2 = SHGetKnownFolderPath(&DAT_1499d7630,0,0,local_458);
      if (-1 < iVar2) {
        FUN_140056680(&local_448,local_458[0]);
        local_468 = 1;
        FUN_1414bc8e4(&local_448,local_438,&DAT_149e01f64,&DAT_149e065c6);
        FUN_144a882a8(&local_228,local_438,&DAT_149e3fcfc);
        if (DAT_14c8c3018 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        DAT_14c8c3018 = local_228;
        _DAT_14c8c3020 = uStack_220;
        local_228 = (undefined2 *)0x0;
        uStack_220 = 0;
        if (local_438[0] != 0) {
          FUN_1400020a8();
        }
        if (local_448 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        CoTaskMemFree(local_458[0]);
      }
    }
  }
  puVar3 = DAT_14c8c3018;
  if (DAT_14c8c3020 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  if ((local_18 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 145c8409a FUN_145c8409a body=92 status=ok
// SIG undefined FUN_145c8409a(void)

undefined1 FUN_145c8409a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8c44a4) {
    FUN_144b3d300(&DAT_14c8c44a4);
    if (DAT_14c8c44a4 == -1) {
      DAT_14c8c44a0 = FUN_14151388c();
      _Init_thread_footer(&DAT_14c8c44a4);
    }
  }
  return DAT_14c8c44a0;
}



// FUNCTION 145c840f6 FUN_145c840f6 body=417 status=ok
// SIG undefined FUN_145c840f6(void)

void FUN_145c840f6(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_144a52528();
  FUN_1446ddc76(&local_30,"UniversalObjectLocator",1);
  uVar3 = FUN_144a52528();
  uVar3 = FUN_14493e38c(uVar3,local_30);
  FUN_144a5dc74(&local_68);
  FUN_1446ddc76(&local_70,"ls_lazy_obj_ptr",1);
  plVar2 = local_68;
  local_48 = local_70;
  local_58 = local_68;
  if (local_68 == (longlong *)0x0) {
    local_50 = local_60;
    local_40 = 0;
    local_38 = 0;
  }
  else {
    (**(code **)(*local_68 + 8))(local_68);
    local_50 = local_60;
    local_40 = 0;
    local_38 = 0;
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  FUN_145c84496(uVar3,&local_78,&local_58);
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  puVar1 = local_88;
  local_80 = 2;
  *local_88 = &PTR_LAB_14a5a4d50;
  uVar3 = FUN_144a3f946();
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14a5a4ce0;
  puVar1[3] = FUN_1409f66e0;
  (**(code **)(*param_1 + 0x40))(param_1,&local_78,&local_88);
  param_1[4] = local_78;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c84298 FUN_145c84298 body=158 status=ok
// SIG undefined FUN_145c84298(void)

undefined8 * FUN_145c84298(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_145c84412(param_1 + 0x10,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar4 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined4 *)(lVar3 + 8 + lVar4) = 0;
  FUN_145c84336(lVar3 + lVar4,param_3);
  lVar3 = (longlong)(*(int *)(param_1 + 0x18) + -1) * 0x10;
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 8 + lVar3) == 0) ||
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + lVar3), plVar2 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
  }
  FUN_1449db362(param_3);
  return param_2;
}



// FUNCTION 145c84336 FUN_145c84336 body=124 status=ok
// SIG undefined FUN_145c84336(void)

void FUN_145c84336(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c843b4 FUN_145c843b4 body=93 status=ok
// SIG undefined FUN_145c843b4(void)

void FUN_145c843b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5a4d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5a4ce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 145c84412 FUN_145c84412 body=132 status=ok
// SIG undefined FUN_145c84412(void)

void FUN_145c84412(longlong param_1,int param_2)

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



// FUNCTION 145c84496 FUN_145c84496 body=315 status=ok
// SIG undefined FUN_145c84496(void)

undefined1 * FUN_145c84496(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [39];
  undefined1 local_81;
  undefined1 *local_80;
  code *local_78;
  undefined *local_70;
  code *local_68;
  undefined1 *local_60;
  longlong local_58;
  longlong *local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  FUN_144a5dc74(local_50);
  local_40 = *(undefined8 *)(param_3 + 0x10);
  local_38 = *(undefined8 *)(param_3 + 0x18);
  local_30 = *(undefined1 *)(param_3 + 0x20);
  if (DAT_14cabc998 == 0) {
    uVar2 = FUN_141051008();
    DAT_14cabc998 = FUN_140002ddd(FUN_1463670f7,uVar2,L"LegacyLazyObjectPtrFragment");
  }
  lVar1 = DAT_14cabc998;
  if ((DAT_14cabc998 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(DAT_14cabc998);
  }
  local_60 = &LAB_14781b88e;
  local_78 = FUN_1478241a2;
  local_80 = &LAB_1478241be;
  local_70 = &DAT_1478241ce;
  local_68 = FUN_1478241d0;
  local_58 = lVar1;
  (**(code **)(*param_1 + 0x40))(param_1,&local_81,&local_80);
  *param_2 = local_81;
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c845da FUN_145c845da body=105 status=ok
// SIG undefined FUN_145c845da(void)

undefined8 * FUN_145c845da(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_149ed1560;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)((longlong)param_1 + 0x39) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x35) = 0xffffffff;
  param_1[8] = DAT_14c845dbc;
  *(undefined4 *)(param_1 + 9) = DAT_14c845dc4;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 10),4000);
  return param_1;
}



// FUNCTION 145c84644 FUN_145c84644 body=40 status=ok
// SIG undefined FUN_145c84644(void)

undefined8 FUN_145c84644(undefined8 param_1,int param_2)

{
  FUN_145c8466c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8466c FUN_145c8466c body=73 status=ok
// SIG undefined FUN_145c8466c(void)

void FUN_145c8466c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a156e00;
  plVar3 = (longlong *)param_1[6];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c846b6 FUN_145c846b6 body=263 status=ok
// SIG undefined FUN_145c846b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c846b6(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DAT_14ca784d0 = 0;
  DAT_14ca784d8 = 0;
  DAT_14ca784b0 = 0;
  _DAT_14ca784b8 = 0;
  _DAT_14ca784dc = 0xffffffff00000080;
  DAT_14ca784e4 = 0;
  DAT_14ca784f0 = 0;
  DAT_14ca784f8 = 0;
  uVar5 = (ulonglong)(param_1[1] - *param_1) >> 4;
  uVar4 = (uint)uVar5;
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_145c84c5a(uVar5 & 0xffffffff);
    if (uVar4 < 4) {
      iVar2 = 1;
    }
    else {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((DAT_14ca784f8 == 0) || (DAT_14ca784f8 < iVar2)) {
      DAT_14ca784f8 = iVar2;
      FUN_145c84a80();
    }
  }
  puVar3 = (undefined4 *)*param_1;
  puVar1 = (undefined4 *)param_1[1];
  if (puVar3 != puVar1) {
    do {
      local_40 = *puVar3;
      uStack_3c = puVar3[1];
      uStack_38 = puVar3[2];
      uStack_34 = puVar3[3];
      FUN_145c847be(local_2c,&local_40);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c847be FUN_145c847be body=288 status=ok
// SIG undefined FUN_145c847be(void)

undefined4 * FUN_145c847be(undefined4 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  byte *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c84972(local_40);
  puVar2 = (undefined4 *)param_2[1];
  bVar1 = *(byte *)*param_2;
  *local_38 = bVar1;
  *(undefined4 *)(local_38 + 4) = *puVar2;
  local_38[8] = 0xff;
  local_38[9] = 0xff;
  local_38[10] = 0xff;
  local_38[0xb] = 0xff;
  local_44 = local_40[0];
  cVar5 = FUN_145c848e0(bVar1,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar8 = DAT_14ca784b8 - DAT_14ca784e4;
    iVar9 = 1;
    if (3 < uVar8) {
      uVar6 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= DAT_14ca784f8)) {
      uVar8 = DAT_14ca784f8 - 1U & (uint)bVar1;
      *(uint *)(local_38 + 0xc) = uVar8;
      puVar7 = DAT_14ca784f0;
      if (DAT_14ca784f0 == (undefined *)0x0) {
        puVar7 = &DAT_14ca784e8;
      }
      *(undefined4 *)(local_38 + 8) =
           *(undefined4 *)(puVar7 + (ulonglong)(DAT_14ca784f8 - 1U & uVar8) * 4);
      puVar7 = DAT_14ca784f0;
      if (DAT_14ca784f0 == (undefined *)0x0) {
        puVar7 = &DAT_14ca784e8;
      }
      *(undefined4 *)(puVar7 + (ulonglong)(DAT_14ca784f8 - 1U & uVar8) * 4) = local_44;
    }
    else {
      DAT_14ca784f8 = iVar9;
      FUN_145c84a80();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c848e0 FUN_145c848e0 body=145 status=ok
// SIG undefined FUN_145c848e0(void)

undefined8 FUN_145c848e0(uint param_1,char *param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((DAT_14ca784b8 - DAT_14ca784e4 != 1) && (DAT_14ca784b8 != DAT_14ca784e4)) {
    puVar3 = &DAT_14ca784e8;
    if (DAT_14ca784f0 != (undefined *)0x0) {
      puVar3 = DAT_14ca784f0;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14ca784f8 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (undefined8 *)(DAT_14ca784b0 + (longlong)iVar2 * 0x10);
        if (*(char *)(DAT_14ca784b0 + (longlong)iVar2 * 0x10) == *param_2) {
          *puVar1 = *(undefined8 *)param_2;
          FUN_1473ca4dc(*param_3);
          *param_3 = iVar2;
          return 1;
        }
        iVar2 = *(int *)(puVar1 + 1);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145c84972 FUN_145c84972 body=269 status=ok
// SIG undefined FUN_145c84972(void)

int * FUN_145c84972(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca784e0;
  iVar4 = DAT_14ca784b8;
  if (DAT_14ca784e4 == 0) {
    iVar2 = DAT_14ca784b8 + 1;
    bVar7 = DAT_14ca784bc == DAT_14ca784b8;
    DAT_14ca784b8 = iVar2;
    if (bVar7) {
      FUN_144869a3c(&DAT_14ca784b0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca784c0,1);
    puVar3 = DAT_14ca784d0;
    if (DAT_14ca784d0 == (undefined *)0x0) {
      puVar3 = &DAT_14ca784c0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14ca784e0;
    DAT_14ca784e0 = *(int *)(DAT_14ca784b0 + 4 + lVar6 * 0x10);
    DAT_14ca784e4 = DAT_14ca784e4 + -1;
    iVar4 = iVar2;
    if (DAT_14ca784e4 != 0) {
      *(undefined4 *)(DAT_14ca784b0 + (longlong)DAT_14ca784e0 * 0x10) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca784c0;
  if (DAT_14ca784d0 != (undefined *)0x0) {
    puVar3 = DAT_14ca784d0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x10 + DAT_14ca784b0;
  return param_1;
}



// FUNCTION 145c84a80 FUN_145c84a80 body=472 status=ok
// SIG undefined FUN_145c84a80(void)

void FUN_145c84a80(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14ca784f0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca784f0,0,0,4);
  }
  uVar7 = DAT_14ca784f8;
  uVar2 = local_50;
  if (DAT_14ca784f8 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14ca784e8,0,DAT_14ca784f8,4);
    if (0 < (int)uVar7) {
      do {
        puVar4 = DAT_14ca784f0;
        if (DAT_14ca784f0 == (undefined *)0x0) {
          puVar4 = &DAT_14ca784e8;
        }
        *(undefined4 *)(puVar4 + (ulonglong)(DAT_14ca784f8 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14ca784c0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14ca784d8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14ca784b0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar3 * 0x10;
        uVar7 = DAT_14ca784f8 - 1 & (uint)*(byte *)(lVar1 + lVar5);
        *(uint *)(lVar1 + 0xc + lVar5) = uVar7;
        puVar4 = DAT_14ca784f0;
        if (DAT_14ca784f0 == (undefined *)0x0) {
          puVar4 = &DAT_14ca784e8;
        }
        *(undefined4 *)(lVar1 + 8 + lVar5) =
             *(undefined4 *)(puVar4 + (ulonglong)(DAT_14ca784f8 - 1 & uVar7) * 4);
        puVar4 = DAT_14ca784f0;
        if (DAT_14ca784f0 == (undefined *)0x0) {
          puVar4 = &DAT_14ca784e8;
        }
        *(int *)(puVar4 + (ulonglong)(DAT_14ca784f8 - 1 & uVar7) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c84c5a FUN_145c84c5a body=481 status=ok
// SIG undefined FUN_145c84c5a(void)

void FUN_145c84c5a(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar3 = DAT_14ca784b8;
  uVar9 = param_1 - DAT_14ca784b8;
  if (uVar9 != 0 && DAT_14ca784b8 <= (int)param_1) {
    iVar8 = DAT_14ca784b8;
    if (DAT_14ca784bc < (int)param_1) {
      FUN_14472eb64(&DAT_14ca784b0);
      iVar8 = DAT_14ca784b8;
    }
    DAT_14ca784b8 = iVar8 + uVar9;
    if ((uint)(DAT_14ca784bc - iVar8) < uVar9) {
      FUN_144869a3c(&DAT_14ca784b0);
    }
    lVar2 = DAT_14ca784b0;
    if (iVar8 < (int)param_1) {
      piVar7 = (int *)((ulonglong)param_1 * 0x10 + DAT_14ca784b0 + -0xc);
      uVar12 = (ulonglong)param_1;
      do {
        uVar1 = uVar12 - 1;
        if (DAT_14ca784e4 == 0) {
          iVar11 = (int)uVar12 + -1;
        }
        else {
          *(int *)(lVar2 + (longlong)DAT_14ca784e0 * 0x10) = (int)uVar12 + -1;
          iVar11 = (int)uVar1;
        }
        piVar7[-1] = -1;
        iVar13 = -1;
        if (0 < DAT_14ca784e4) {
          iVar13 = DAT_14ca784e0;
        }
        *piVar7 = iVar13;
        DAT_14ca784e4 = DAT_14ca784e4 + 1;
        piVar7 = piVar7 + -4;
        uVar12 = uVar1;
        DAT_14ca784e0 = iVar11;
      } while ((longlong)iVar8 < (longlong)uVar1);
    }
    if (iVar3 == 0) {
      uVar10 = uVar9 + 0x1f >> 5;
      DAT_14ca784d8 = uVar9;
      if (DAT_14ca784dc + 0x1f >> 5 < uVar10) {
        FUN_14499171c(&DAT_14ca784c0,0,uVar10,4);
        DAT_14ca784dc = uVar9 + 0x1f & 0xffffffe0;
      }
      puVar6 = DAT_14ca784d0;
      if (DAT_14ca784d0 == (undefined *)0x0) {
        puVar6 = &DAT_14ca784c0;
      }
      if (uVar9 < 0x101) {
        uVar10 = uVar10 + (uVar10 == 0);
      }
      memset(puVar6,0,(ulonglong)(uVar10 << 2));
      uVar9 = DAT_14ca784d8 + 0x1f;
      if (-1 < (int)DAT_14ca784d8) {
        uVar9 = DAT_14ca784d8;
      }
      if ((int)DAT_14ca784d8 % 0x20 != 0) {
        puVar6 = &DAT_14ca784c0;
        if (DAT_14ca784d0 != (undefined *)0x0) {
          puVar6 = DAT_14ca784d0;
        }
        bVar5 = -(char)((int)DAT_14ca784d8 % 0x20);
        *(uint *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) =
             (uint)(*(int *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else if (-1 < (int)uVar9) {
      uVar4 = FUN_144a54ea4(&DAT_14ca784c0,uVar9);
      FUN_1447c6044(&DAT_14ca784c0,uVar4,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 145c84e3c FUN_145c84e3c body=98 status=ok
// SIG undefined FUN_145c84e3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c84e3c(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_20);
  local_18 = 0;
  FUN_14592e6ce(&local_18,local_20);
  _DAT_14cab76f8 = local_18;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c84eae FUN_145c84eae body=98 status=ok
// SIG undefined FUN_145c84eae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c84eae(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_20);
  local_18 = 0;
  FUN_14592e6ce(&local_18,local_20);
  _DAT_14cab6e88 = local_18;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c84f20 FUN_145c84f20 body=40 status=ok
// SIG undefined FUN_145c84f20(void)

undefined8 FUN_145c84f20(undefined8 param_1,int param_2)

{
  FUN_145c84f48();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c84f48 FUN_145c84f48 body=73 status=ok
// SIG undefined FUN_145c84f48(void)

void FUN_145c84f48(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4fd880;
  plVar3 = (longlong *)param_1[0xb];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c84f92 FUN_145c84f92 body=40 status=ok
// SIG undefined FUN_145c84f92(void)

undefined8 FUN_145c84f92(undefined8 param_1,int param_2)

{
  FUN_145c84fba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c84fba FUN_145c84fba body=73 status=ok
// SIG undefined FUN_145c84fba(void)

void FUN_145c84fba(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a548b50;
  plVar3 = (longlong *)param_1[0xb];
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c85004 FUN_145c85004 body=40 status=ok
// SIG undefined FUN_145c85004(void)

undefined8 FUN_145c85004(undefined8 param_1,int param_2)

{
  FUN_145c8502c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8502c FUN_145c8502c body=73 status=ok
// SIG undefined FUN_145c8502c(void)

void FUN_145c8502c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6d6220;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a6d5910;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c85076 FUN_145c85076 body=40 status=ok
// SIG undefined FUN_145c85076(void)

undefined8 FUN_145c85076(undefined8 param_1,int param_2)

{
  FUN_145c8509e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8509e FUN_145c8509e body=73 status=ok
// SIG undefined FUN_145c8509e(void)

void FUN_145c8509e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6e6ca0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a6e5ee0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c850e8 FUN_145c850e8 body=40 status=ok
// SIG undefined FUN_145c850e8(void)

undefined8 FUN_145c850e8(undefined8 param_1,int param_2)

{
  FUN_145c85110();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c85110 FUN_145c85110 body=73 status=ok
// SIG undefined FUN_145c85110(void)

void FUN_145c85110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6e7140;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a6e50e0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c8515a FUN_145c8515a body=40 status=ok
// SIG undefined FUN_145c8515a(void)

undefined8 FUN_145c8515a(undefined8 param_1,int param_2)

{
  FUN_145c85182();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c85182 FUN_145c85182 body=141 status=ok
// SIG undefined FUN_145c85182(void)

void FUN_145c85182(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6fdb10;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_145c8520f(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14080517e(param_1);
  return;
}



// FUNCTION 145c8520f FUN_145c8520f body=45 status=ok
// SIG undefined FUN_145c8520f(void)

void FUN_145c8520f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145c85248 FUN_145c85248 body=102 status=ok
// SIG undefined FUN_145c85248(void)

undefined8 * FUN_145c85248(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a701970;
  param_1[5] = &PTR_FUN_14a701f50;
  param_1[6] = &PTR_LAB_14a701f90;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(undefined1 *)(param_1 + 9) = 4;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  param_1[0x55] = 0x4040000041c80000;
  param_1[0x56] = 0x4120000042c80000;
  *(undefined2 *)(param_1 + 0x57) = 0x101;
  *(undefined4 *)((longlong)param_1 + 700) = 0;
  return param_1;
}



// FUNCTION 145c852ba FUN_145c852ba body=102 status=ok
// SIG undefined FUN_145c852ba(void)

undefined8 * FUN_145c852ba(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a704c80;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  return param_1;
}



// FUNCTION 145c8532c FUN_145c8532c body=102 status=ok
// SIG undefined FUN_145c8532c(void)

undefined8 * FUN_145c8532c(undefined8 *param_1)

{
  FUN_140fb420a();
  *param_1 = &PTR_FUN_14a80bda0;
  param_1[0x19] = &PTR_LAB_14a80c180;
  param_1[0x1a] = &PTR_LAB_14a80c1c0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x171) = 0;
  *(undefined8 *)((longlong)param_1 + 0x179) = 0;
  *(undefined1 *)((longlong)param_1 + 0x181) = 1;
  *(uint *)((longlong)param_1 + 0x13c) = *(uint *)((longlong)param_1 + 0x13c) & 0xfffffffc | 2;
  return param_1;
}



// FUNCTION 145c8539e FUN_145c8539e body=215 status=ok
// SIG undefined FUN_145c8539e(void)

undefined8 * FUN_145c8539e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a8b62e0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 2;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xba) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc2) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  return param_1;
}



// FUNCTION 145c85476 FUN_145c85476 body=40 status=ok
// SIG undefined FUN_145c85476(void)

undefined8 FUN_145c85476(undefined8 param_1,int param_2)

{
  FUN_145c8549e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8549e FUN_145c8549e body=73 status=ok
// SIG undefined FUN_145c8549e(void)

void FUN_145c8549e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a9280a0;
  plVar3 = (longlong *)param_1[6];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c854e8 FUN_145c854e8 body=40 status=ok
// SIG undefined FUN_145c854e8(void)

undefined8 FUN_145c854e8(undefined8 param_1,int param_2)

{
  FUN_145c85510();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c85510 FUN_145c85510 body=73 status=ok
// SIG undefined FUN_145c85510(void)

void FUN_145c85510(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaa0a00;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14aa9f670;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c8555a FUN_145c8555a body=40 status=ok
// SIG undefined FUN_145c8555a(void)

undefined8 FUN_145c8555a(undefined8 param_1,int param_2)

{
  FUN_145c85582();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c85582 FUN_145c85582 body=73 status=ok
// SIG undefined FUN_145c85582(void)

void FUN_145c85582(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaa2d80;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14aa9f670;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c855cc FUN_145c855cc body=40 status=ok
// SIG undefined FUN_145c855cc(void)

undefined8 FUN_145c855cc(undefined8 param_1,int param_2)

{
  FUN_145c855f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c855f4 FUN_145c855f4 body=73 status=ok
// SIG undefined FUN_145c855f4(void)

void FUN_145c855f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaa3a90;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14aa9f670;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c8563e FUN_145c8563e body=40 status=ok
// SIG undefined FUN_145c8563e(void)

undefined8 FUN_145c8563e(undefined8 param_1,int param_2)

{
  FUN_145c85666();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c85666 FUN_145c85666 body=73 status=ok
// SIG undefined FUN_145c85666(void)

void FUN_145c85666(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaa6ba0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14aa9f670;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c856b0 FUN_145c856b0 body=40 status=ok
// SIG undefined FUN_145c856b0(void)

undefined8 FUN_145c856b0(undefined8 param_1,int param_2)

{
  FUN_145c856d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c856d8 FUN_145c856d8 body=73 status=ok
// SIG undefined FUN_145c856d8(void)

void FUN_145c856d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab103c0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ab0ff00;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c85722 FUN_145c85722 body=40 status=ok
// SIG undefined FUN_145c85722(void)

undefined8 FUN_145c85722(undefined8 param_1,int param_2)

{
  FUN_145c8574a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8574a FUN_145c8574a body=73 status=ok
// SIG undefined FUN_145c8574a(void)

void FUN_145c8574a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ad0fc50;
  plVar3 = (longlong *)param_1[6];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c85794 FUN_145c85794 body=40 status=ok
// SIG undefined FUN_145c85794(void)

undefined8 FUN_145c85794(undefined8 param_1,int param_2)

{
  FUN_145c857bc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c857bc FUN_145c857bc body=73 status=ok
// SIG undefined FUN_145c857bc(void)

void FUN_145c857bc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ad58a00;
  plVar3 = (longlong *)param_1[6];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c85806 FUN_145c85806 body=40 status=ok
// SIG undefined FUN_145c85806(void)

undefined8 FUN_145c85806(undefined8 param_1,int param_2)

{
  FUN_145c8582e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8582e FUN_145c8582e body=73 status=ok
// SIG undefined FUN_145c8582e(void)

void FUN_145c8582e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ad59fa0;
  plVar3 = (longlong *)param_1[6];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c85882 FUN_145c85882 body=102 status=ok
// SIG undefined FUN_145c85882(void)

undefined8 * FUN_145c85882(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14ad7de60;
  *(undefined4 *)(param_1 + 7) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14ad7f6b0;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145c858e8 FUN_145c858e8 body=35 status=ok
// SIG undefined FUN_145c858e8(void)

void FUN_145c858e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c8590c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aecb8e0;
  return;
}



// FUNCTION 145c8590c FUN_145c8590c body=78 status=ok
// SIG undefined FUN_145c8590c(void)

undefined8 * FUN_145c8590c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aeb3cb0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 145c85966 FUN_145c85966 body=102 status=ok
// SIG undefined FUN_145c85966(void)

undefined8 * FUN_145c85966(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140d2f8ee();
  *param_1 = &PTR_FUN_14af13df0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  lVar1 = FUN_145a7054a();
  param_1[0x17] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 145c859cc FUN_145c859cc body=40 status=ok
// SIG undefined FUN_145c859cc(void)

undefined8 FUN_145c859cc(undefined8 param_1,int param_2)

{
  FUN_145c859f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c859f4 FUN_145c859f4 body=73 status=ok
// SIG undefined FUN_145c859f4(void)

void FUN_145c859f4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b19f4c0;
  plVar3 = (longlong *)param_1[8];
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c85a3e FUN_145c85a3e body=40 status=ok
// SIG undefined FUN_145c85a3e(void)

undefined8 FUN_145c85a3e(undefined8 param_1,int param_2)

{
  FUN_145c85a66();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c85a66 FUN_145c85a66 body=73 status=ok
// SIG undefined FUN_145c85a66(void)

void FUN_145c85a66(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2771c0;
  plVar3 = (longlong *)param_1[9];
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c85ab0 FUN_145c85ab0 body=40 status=ok
// SIG undefined FUN_145c85ab0(void)

undefined8 FUN_145c85ab0(undefined8 param_1,int param_2)

{
  FUN_145c85ad8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c85ad8 FUN_145c85ad8 body=73 status=ok
// SIG undefined FUN_145c85ad8(void)

void FUN_145c85ad8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b592dc0;
  plVar3 = (longlong *)param_1[7];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c85b22 FUN_145c85b22 body=40 status=ok
// SIG undefined FUN_145c85b22(void)

undefined8 FUN_145c85b22(undefined8 param_1,int param_2)

{
  FUN_145c85b4a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c85b4a FUN_145c85b4a body=73 status=ok
// SIG undefined FUN_145c85b4a(void)

void FUN_145c85b4a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcda1c0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bcd7340;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c85b94 FUN_145c85b94 body=40 status=ok
// SIG undefined FUN_145c85b94(void)

undefined8 FUN_145c85b94(undefined8 param_1,int param_2)

{
  FUN_145c85bbc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c85bbc FUN_145c85bbc body=73 status=ok
// SIG undefined FUN_145c85bbc(void)

void FUN_145c85bbc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd27490;
  plVar3 = (longlong *)param_1[8];
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c85c06 FUN_145c85c06 body=40 status=ok
// SIG undefined FUN_145c85c06(void)

undefined8 FUN_145c85c06(undefined8 param_1,int param_2)

{
  FUN_145c85c2e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c85c2e FUN_145c85c2e body=73 status=ok
// SIG undefined FUN_145c85c2e(void)

void FUN_145c85c2e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd33e40;
  plVar3 = (longlong *)param_1[7];
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c85c78 FUN_145c85c78 body=40 status=ok
// SIG undefined FUN_145c85c78(void)

undefined8 FUN_145c85c78(undefined8 param_1,int param_2)

{
  FUN_145c85ca0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c85ca0 FUN_145c85ca0 body=73 status=ok
// SIG undefined FUN_145c85ca0(void)

void FUN_145c85ca0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd39ab0;
  plVar3 = (longlong *)param_1[0xb];
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
  FUN_145907244(param_1);
  return;
}



// FUNCTION 145c85cea FUN_145c85cea body=105 status=ok
// SIG undefined FUN_145c85cea(void)

void FUN_145c85cea(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14593c384(0);
  *(undefined1 *)(param_1 + 8) = uVar1;
  plVar2 = (longlong *)FUN_1448c2e86();
  FUN_145c85d54(&local_28);
  (**(code **)(*plVar2 + 0x28))(plVar2,local_28,param_1 + 0x18);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c85d54 FUN_145c85d54 body=120 status=ok
// SIG undefined FUN_145c85d54(void)

undefined8 * FUN_145c85d54(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1e898) {
    FUN_144b3d300(&DAT_14cc1e898);
    if (DAT_14cc1e898 == -1) {
      FUN_1446f470e(&DAT_14cc1e890,L"AudioCaptureStream",1);
      _Init_thread_footer(&DAT_14cc1e898);
    }
  }
  *param_1 = DAT_14cc1e890;
  return param_1;
}



// FUNCTION 145c85dcc FUN_145c85dcc body=40 status=ok
// SIG undefined FUN_145c85dcc(void)

undefined8 FUN_145c85dcc(undefined8 param_1,int param_2)

{
  FUN_145c85df4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c85df4 FUN_145c85df4 body=73 status=ok
// SIG undefined FUN_145c85df4(void)

void FUN_145c85df4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be7a0e0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be7b370;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c85e3e FUN_145c85e3e body=287 status=ok
// SIG undefined FUN_145c85e3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145c85e3e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9acc98) {
    FUN_144b3d300(&DAT_14c9acc98);
    if (DAT_14c9acc98 == -1) {
      FUN_145c85f5e();
      FUN_140db5666(&DAT_14c9acbf0,2,&DAT_14c9acb88,
                    L"TBasePassPSFSelfShadowedTranslucencyPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712ae78,
                    FUN_14712ae50,FUN_1417465fc,&LAB_14712ae4c,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9acbf0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c247);
      _Init_thread_footer(&DAT_14c9acc98);
    }
  }
  return &DAT_14c9acbf0;
}



// FUNCTION 145c85f5e FUN_145c85f5e body=205 status=ok
// SIG undefined FUN_145c85f5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c85f5e(void)

{
  if ((DAT_14c9acbef & 2) == 0) {
    DAT_14c9acbef = DAT_14c9acbef | 2;
    _DAT_14c9acb90 = L"TBasePassPSFSelfShadowedTranslucencyPolicySkylight";
    _DAT_14c9acba8 = FUN_146826540;
    _DAT_14c9acbb0 = FUN_146825d77;
    _DAT_14c9acbb8 = FUN_146825fd6;
    _DAT_14c9acbc0 = FUN_1407e02ea;
    _DAT_14c9acbc8 = FUN_146826273;
    _DAT_14c9acba0 = FUN_14712ae12;
    _DAT_14c9acbe0 = 0xffffffff00000110;
    _DAT_14c9acbe8 = 8;
    DAT_14c9acbec = 0;
    _DAT_14c9acbd0 = &LAB_14712ae48;
    FUN_145c8602c();
    FUN_1407e00cc(&DAT_14c9acb88);
    return;
  }
  return;
}



// FUNCTION 145c8602c FUN_145c8602c body=133 status=ok
// SIG undefined FUN_145c8602c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c8602c(void)

{
  _DAT_14c9b8df0 = L"BASE";
  DAT_14c9b8e1a = 4;
  FUN_145c860b2();
  _DAT_14c9b8e00 = DAT_14c9acb98;
  _DAT_14c9b8df8 = &DAT_14c9b8e20;
  _DAT_14c9b8e08 = &LAB_14682652b;
  DAT_14c9acb98 = &DAT_14c9b8df0;
  DAT_14c9acbed = DAT_14c9acbed + '\x01';
  _DAT_14c9b8e10 = 0x100000000;
  if (DAT_14c9b8e84 != '\0') {
    DAT_14c9acbee = DAT_14c9acbee + '\x01';
  }
  return;
}



// FUNCTION 145c860b2 FUN_145c860b2 body=200 status=ok
// SIG undefined FUN_145c860b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c860b2(void)

{
  if ((DAT_14c9b8e87 & 2) != 0) {
    return;
  }
  DAT_14c9b8e87 = DAT_14c9b8e87 | 2;
  _DAT_14c9b8e28 = L"TBasePassPixelShaderBaseType";
  _DAT_14c9b8e40 = FUN_146826540;
  _DAT_14c9b8e48 = FUN_146825d77;
  _DAT_14c9b8e50 = FUN_146825fd6;
  _DAT_14c9b8e58 = FUN_1407e02ea;
  _DAT_14c9b8e60 = FUN_146826273;
  _DAT_14c9b8e38 = FUN_14713beaa;
  _DAT_14c9b8e78 = 0xffffffff00000110;
  _DAT_14c9b8e80 = 8;
  DAT_14c9b8e84 = 0;
  _DAT_14c9b8e68 = &LAB_14713bee0;
  FUN_145c8617a();
  FUN_1407e00cc(&DAT_14c9b8e20);
  return;
}



// FUNCTION 145c8617a FUN_145c8617a body=133 status=ok
// SIG undefined FUN_145c8617a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c8617a(void)

{
  _DAT_14c9b8e88 = L"BASE";
  DAT_14c9b8eb2 = 4;
  FUN_145c86200();
  _DAT_14c9b8e98 = DAT_14c9b8e30;
  _DAT_14c9b8e90 = &DAT_14c9b8eb8;
  _DAT_14c9b8ea0 = &LAB_14682652b;
  DAT_14c9b8e30 = &DAT_14c9b8e88;
  DAT_14c9b8e85 = DAT_14c9b8e85 + '\x01';
  _DAT_14c9b8ea8 = 0x100000000;
  if (DAT_14c9b8f1c != '\0') {
    DAT_14c9b8e86 = DAT_14c9b8e86 + '\x01';
  }
  return;
}



// FUNCTION 145c86200 FUN_145c86200 body=313 status=ok
// SIG undefined FUN_145c86200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c86200(void)

{
  if ((DAT_14c9b8f1f & 2) == 0) {
    DAT_14c9b8f1f = DAT_14c9b8f1f | 2;
    _DAT_14c9b8ec0 = L"TBasePassPixelShaderPolicyParamType";
    _DAT_14c9b8ed8 = FUN_146826540;
    _DAT_14c9b8ee0 = FUN_146825d77;
    _DAT_14c9b8ee8 = FUN_146825fd6;
    _DAT_14c9b8ef0 = FUN_1407e02ea;
    _DAT_14c9b8ef8 = FUN_146826273;
    _DAT_14c9b8ed0 = FUN_14713bee4;
    _DAT_14c9b8f10 = 0xffffffff00000110;
    _DAT_14c9b8f18 = 8;
    DAT_14c9b8f1c = 0;
    _DAT_14c9b8f00 = &LAB_14713bf1a;
    _DAT_14c9b8f20 = L"ReflectionCaptureBuffer";
    DAT_14c9b8f4a = FUN_140850cc5();
    _DAT_14c9b8f28 = FUN_14106a12a();
    _DAT_14c9b8f38 = &LAB_14682652b;
    _DAT_14c9b8f40 = 0x10000010a;
    _DAT_14c9b8f48 = 0;
    _DAT_14c9b8f30 = DAT_14c9b8ec8;
    DAT_14c9b8ec8 = &DAT_14c9b8f20;
    FUN_145c8633a();
    FUN_1407e00cc(&DAT_14c9b8eb8);
    return;
  }
  return;
}



// FUNCTION 145c8633a FUN_145c8633a body=235 status=ok
// SIG undefined FUN_145c8633a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c8633a(void)

{
  _DAT_14c9b8f50 = L"BASE";
  DAT_14c9b8f7a = 4;
  FUN_145c86426();
  _DAT_14c9b8f60 = DAT_14c9b8ec8;
  _DAT_14c9b8f58 = &DAT_14c9b8f80;
  _DAT_14c9b8f68 = &LAB_14682652b;
  DAT_14c9b8ec8 = &DAT_14c9b8f50;
  DAT_14c9b8f1d = DAT_14c9b8f1d + '\x01';
  _DAT_14c9b8f70 = &DAT_100000108;
  if (DAT_14c9b8fe4 != '\0') {
    DAT_14c9b8f1e = DAT_14c9b8f1e + '\x01';
  }
  _DAT_14c9b9018 = L"BASE";
  DAT_14c9b9042 = 4;
  _DAT_14c9b9020 = FUN_141092e92();
  _DAT_14c9b9028 = DAT_14c9b8ec8;
  _DAT_14c9b9030 = &LAB_14682652b;
  DAT_14c9b8ec8 = &DAT_14c9b9018;
  DAT_14c9b8f1d = DAT_14c9b8f1d + '\x01';
  _DAT_14c9b9038 = 0x100000000;
  if (*(char *)(_DAT_14c9b9020 + 100) != '\0') {
    DAT_14c9b8f1e = DAT_14c9b8f1e + '\x01';
  }
  return;
}



// FUNCTION 145c86426 FUN_145c86426 body=303 status=ok
// SIG undefined FUN_145c86426(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c86426(void)

{
  if ((DAT_14c9b8fe7 & 2) != 0) {
    return;
  }
  DAT_14c9b8fe7 = DAT_14c9b8fe7 | 2;
  _DAT_14c9b8f88 = L"PixelParametersType";
  _DAT_14c9b8fa0 = FUN_146826540;
  _DAT_14c9b8fa8 = FUN_146825d77;
  _DAT_14c9b8fb0 = FUN_146825fd6;
  _DAT_14c9b8fb8 = FUN_1407e02ea;
  _DAT_14c9b8fc0 = FUN_146826273;
  _DAT_14c9b8f98 = &LAB_14713bf1e;
  _DAT_14c9b8fd8 = 0xffffffff00000002;
  _DAT_14c9b8fe0 = 2;
  DAT_14c9b8fe4 = 0;
  _DAT_14c9b8fc8 = &LAB_14713bf24;
  _DAT_14c9b8fe8 = L"TranslucentSelfShadowBufferParameter";
  DAT_14c9b9012 = FUN_140850cc5();
  _DAT_14c9b8ff0 = FUN_14106a12a();
  _DAT_14c9b9000 = &LAB_14682652b;
  _DAT_14c9b9008 = 0x100000000;
  _DAT_14c9b9010 = 0;
  _DAT_14c9b8ff8 = DAT_14c9b8f90;
  DAT_14c9b8f90 = &DAT_14c9b8fe8;
  FUN_1407e00cc(&DAT_14c9b8f80);
  return;
}



// FUNCTION 145c86556 FUN_145c86556 body=70 status=ok
// SIG undefined FUN_145c86556(void)

void FUN_145c86556(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_141514598();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1446f4a44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145c8659c FUN_145c8659c body=197 status=ok
// SIG undefined FUN_145c8659c(void)

void FUN_145c8659c(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar3 = FUN_144a79464();
    lVar2 = *(longlong *)(lVar2 + 0x1f0);
    if ((((lVar2 != 0) &&
         (((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
          (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
        (((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30 && (*(longlong *)(lVar2 + 0x1e0) != 0)) &&
         (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1e0) + 0x68), lVar2 != 0)))) &&
       (-1 < *(short *)(param_2 + 0x18))) {
      plVar4 = (longlong *)FUN_140d1732e(lVar2,param_2 + 0x18);
      if (plVar4 != (longlong *)0x0) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x1058))(plVar4);
        if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c86655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x28))(plVar4,param_4,*(code **)(*plVar4 + 0x28));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145c86664 FUN_145c86664 body=465 status=ok
// SIG undefined FUN_145c86664(void)

void FUN_145c86664(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined2 local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14ca9f278 != 0) {
    FUN_145c86836(&local_40,param_3,param_4);
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14ca9f278 + 0x148);
    EnterCriticalSection(lpCriticalSection);
    lVar10 = DAT_14ca9f1c0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar2 ^ 1);
    }
    if (*(int *)(lVar10 + uVar6 * 4) == 0) {
      plVar9 = (longlong *)(DAT_14ca9f278 + 0xd0);
      puVar8 = local_40;
      if (local_38 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      iVar5 = local_38 + -1;
      if (local_38 == 0) {
        iVar5 = 0;
      }
      uVar4 = FUN_144a49b4a(iVar5,puVar8);
      iVar5 = FUN_14144853c(plVar9,uVar4,&local_40);
      if ((iVar5 == -1) ||
         (lVar10 = (longlong)iVar5 * 0x20 + *plVar9, puVar7 = (undefined8 *)(lVar10 + 0x10),
         puVar7 == (undefined8 *)0x0 || lVar10 == 0)) {
        local_48 = (short)param_2;
        cVar3 = FUN_145c869aa(DAT_14ca9f278,0,&local_40,&local_40);
        if (cVar3 == '\0') {
          lVar10 = DAT_14ca9f278 + 0xd0;
          iVar5 = *(int *)(param_3 + 1);
          if (iVar5 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          else {
            puVar8 = (undefined2 *)*param_3;
          }
          iVar1 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar1 = 0;
          }
          uVar4 = FUN_144a49b4a(iVar1,puVar8);
          iVar5 = FUN_14144853c(lVar10,uVar4,param_3);
          if (iVar5 == -1) {
            local_48 = (short)param_2;
            FUN_145c869aa(DAT_14ca9f278,0,param_3,param_3);
          }
        }
      }
      else {
        FUN_143237884(*puVar7,param_1,param_2,&local_40);
      }
    }
    FUN_145c868b4(param_2);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c86836 FUN_145c86836 body=126 status=ok
// SIG undefined FUN_145c86836(void)

undefined8 * FUN_145c86836(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  
  if (param_3 == -1) {
    *param_1 = 0;
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    if (*(int *)(param_2 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    FUN_140002266(param_1,L"%s_Chunk%d",puVar2,param_3);
  }
  return param_1;
}



// FUNCTION 145c868b4 FUN_145c868b4 body=245 status=ok
// SIG undefined FUN_145c868b4(void)

undefined4 FUN_145c868b4(undefined2 param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_68 [32];
  undefined2 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14ca9f278 == 0) {
    uVar2 = 0;
    goto LAB_145c86958;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14ca9f278 + 0x148);
  EnterCriticalSection(lpCriticalSection);
  FUN_145c86e6e(local_30,1);
  FUN_1449b8608(&local_40,local_30,L"_usr");
  if (CONCAT44(DAT_14ca9f280._4_4_,(undefined4)DAT_14ca9f280) != 0) {
    FUN_1400020a8();
  }
  DAT_14ca9f280._0_4_ = local_40;
  DAT_14ca9f280._4_4_ = uStack_3c;
  DAT_14ca9f288 = uStack_38;
  uRam000000014ca9f28c = uStack_34;
  cVar1 = FUN_1403963d0();
  if (cVar1 == '\0') {
    cVar1 = FUN_140396325();
    if (cVar1 != '\0') goto LAB_145c86979;
LAB_145c8693e:
    uVar2 = 0;
  }
  else {
LAB_145c86979:
    lVar3 = FUN_14144846e();
    if (lVar3 != 0) goto LAB_145c8693e;
    local_48 = param_1;
    uVar2 = FUN_145c869aa(DAT_14ca9f278,1,&DAT_14ca9f280,local_30);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(lpCriticalSection);
LAB_145c86958:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c869aa FUN_145c869aa body=314 status=ok
// SIG undefined FUN_145c869aa(void)

int FUN_145c869aa(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined2 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_3 + 1);
  if (iVar3 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_3;
  }
  iVar4 = 0;
  iVar6 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar6 = iVar4;
  }
  uVar2 = FUN_144a49b4a(iVar6,puVar7);
  iVar3 = FUN_14144853c(param_1 + 0xd0,uVar2,param_3);
  if (iVar3 == -1) {
    lVar5 = FUN_14001cc68(0x108,0x10);
    FUN_145c86bf8(lVar5,param_1,param_2,param_5);
    local_48 = lVar5;
    iVar4 = FUN_145c86d1a(lVar5,param_3,param_4,param_5);
    if ((char)iVar4 != '\0') {
      cVar1 = *(char *)(lVar5 + 0xf8);
      iVar3 = *(int *)(param_3 + 1);
      if (iVar3 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = (undefined2 *)*param_3;
      }
      iVar6 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      uVar2 = FUN_144a49b4a(iVar6,puVar7);
      FUN_145c86fec(param_1 + 0xd0,uVar2,param_3,&local_48);
      lVar5 = local_48;
      if (cVar1 == '\x01') {
        FUN_145c8707e(param_1,param_3);
        lVar5 = local_48;
      }
    }
    if (lVar5 != 0) {
      FUN_145c86ae6(lVar5);
      FUN_1400020a8(lVar5);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 145c86ae6 FUN_145c86ae6 body=273 status=ok
// SIG undefined FUN_145c86ae6(void)

void FUN_145c86ae6(longlong *param_1)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  FUN_1415146de(param_1[0x1d],(int)param_1[0x1e]);
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(param_1 + 0xf);
  ppuVar1 = &PTR_FUN_14a399cd0;
  param_1[9] = (longlong)&PTR_FUN_14a399cd0;
  lVar2 = param_1[10];
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)(lVar2 + 8);
      FUN_1400020a8();
      param_1[10] = lVar2;
    } while (lVar2 != 0);
    ppuVar1 = (undefined **)param_1[9];
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  (*(code *)ppuVar1[1])(param_1 + 9,0);
  FUN_1415146de(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c86bf8 FUN_145c86bf8 body=289 status=ok
// SIG undefined FUN_145c86bf8(void)

undefined8 *
FUN_145c86bf8(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined2 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  bool bVar6;
  
  uVar5 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = &PTR_FUN_14a399cd0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfa) = param_3;
  param_1[0x20] = param_2;
  lVar2 = DAT_14ca9f148;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0xc60) != 0x40000002) {
    bVar4 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar4 ^ 1);
  }
  lVar3 = DAT_14ca9f160;
  bVar6 = true;
  if ((*(int *)(lVar2 + uVar5 * 4) != 0) && (DAT_14ca80698 == '\0')) {
    if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar4 ^ 1);
    }
    bVar6 = *(int *)(lVar3 + uVar5 * 4) != 0;
  }
  *(bool *)(param_1 + 0x1f) = bVar6;
  return param_1;
}



// FUNCTION 145c86d1a FUN_145c86d1a body=339 status=ok
// SIG undefined FUN_145c86d1a(void)

void FUN_145c86d1a(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a787a6();
  *(short *)(param_1 + 0x14) = (short)param_4;
  local_58[0] = 0;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_3 + 1);
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  *(undefined1 *)(param_1 + 200) = local_58[0];
  if ((undefined1 *)(param_1 + 200) == local_58) {
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      FUN_1400020a8();
    }
    *(void **)(param_1 + 0xd0) = local_50;
    local_50 = (void *)0x0;
    *(int *)(param_1 + 0xd8) = local_48;
    *(undefined4 *)(param_1 + 0xdc) = local_44;
  }
  if (*(char *)(param_1 + 0xfa) == '\x01') {
    FUN_1431dd550(param_2,param_3,param_4,param_1 + 0x68);
  }
  else {
    FUN_14151471c(param_2,param_3,param_4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c86e6e FUN_145c86e6e body=380 status=ok
// SIG undefined FUN_145c86e6e(void)

undefined8 FUN_145c86e6e(undefined8 param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140056680(param_1,&DAT_14c764000);
  lVar2 = DAT_14c872ce0;
  pwVar5 = L"CacheFileNameOverride";
  if (param_2 != '\0') {
    pwVar5 = L"UserCacheFileNameOverride";
  }
  local_38 = 0;
  uStack_30 = 0;
  if (DAT_14c872ce0 != 0) {
    puVar4 = DAT_14c872b08;
    if (DAT_14c872b10 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140056680(local_48,puVar4);
    local_68 = local_48;
    cVar3 = FUN_1449da20c(lVar2,L"ShaderPipelineCache.CacheFile",pwVar5,&local_38);
    lVar2 = DAT_14c872ce0;
    if (cVar3 == '\0') {
      puVar4 = DAT_14c872af8;
      if (DAT_14c872b00 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_140056680(local_58,puVar4);
      local_68 = local_58;
      cVar3 = FUN_1449da20c(lVar2,L"ShaderPipelineCache.CacheFile",pwVar5,&local_38);
      if (cVar3 == '\0') {
        bVar6 = false;
      }
      else {
        bVar6 = 1 < (uint)uStack_30;
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      bVar6 = 1 < (uint)uStack_30;
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (bVar6) {
      iVar1 = (uint)uStack_30 + -1;
      if ((uint)uStack_30 == 0) {
        iVar1 = 0;
      }
      FUN_1402980a2(param_1,local_38,iVar1);
    }
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145c86fec FUN_145c86fec body=144 status=ok
// SIG undefined FUN_145c86fec(void)

longlong FUN_145c86fec(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_14144853c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_145c87042;
  }
  local_40 = param_3;
  local_38 = param_4;
  FUN_145c87118(param_1,&local_2c,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_2c << 5;
LAB_145c87042:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 0x10;
}



// FUNCTION 145c8707e FUN_145c8707e body=154 status=ok
// SIG undefined FUN_145c8707e(void)

void FUN_145c8707e(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x128);
  *(uint *)(param_1 + 0x128) = iVar2 + 1U;
  if (*(uint *)(param_1 + 300) < iVar2 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x120),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  lVar4 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(lVar3 + 8 + lVar4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  FUN_145c873e8(param_1);
  return;
}



// FUNCTION 145c87118 FUN_145c87118 body=269 status=ok
// SIG undefined FUN_145c87118(void)

undefined4 * FUN_145c87118(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c87302(param_1,local_48);
  FUN_145c87226(param_4,local_40);
  *(undefined4 *)(local_40 + 0x18) = 0xffffffff;
  cVar1 = FUN_145c87292(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_145c87524(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c87226 FUN_145c87226 body=107 status=ok
// SIG undefined FUN_145c87226(void)

undefined8 * FUN_145c87226(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  *puVar3 = 0;
  return param_2;
}



// FUNCTION 145c87292 FUN_145c87292 body=111 status=ok
// SIG undefined FUN_145c87292(void)

undefined8 FUN_145c87292(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_14144853c(), iVar7 != -1)) {
    lVar2 = *param_1;
    lVar8 = (longlong)iVar7 * 0x20;
    FUN_145a07de0(lVar2 + lVar8);
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + lVar8) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + lVar8);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_147443df6(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 145c87302 FUN_145c87302 body=230 status=ok
// SIG undefined FUN_145c87302(void)

int * FUN_145c87302(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 145c873e8 FUN_145c873e8 body=301 status=ok
// SIG undefined FUN_145c873e8(void)

void FUN_145c873e8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 **ppuVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuVar4 = (undefined8 **)(param_1 + 0x170);
  if (*(longlong *)(param_1 + 0x170) != 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x170) + 0xa0) & 1) == 0) goto LAB_145c874a5;
    puVar2 = *ppuVar4;
    *ppuVar4 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  cVar3 = FUN_144a61b4f();
  if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
  }
  local_48 = 0;
  local_38 = &PTR_LAB_149e16f80;
  local_30 = &DAT_14323e1d6;
  local_58[0] = FUN_140d11fbe;
  local_68 = 1;
  FUN_14014aede(&local_60,local_58,param_3,0);
  if (ppuVar4 != &local_60) {
    puVar2 = *ppuVar4;
    *ppuVar4 = local_60;
    local_60 = (undefined8 *)0x0;
    if (puVar2 == (undefined8 *)0x0) goto LAB_145c874a5;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_60 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_60 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_60)(local_60,1);
    }
  }
LAB_145c874a5:
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c87524 FUN_145c87524 body=485 status=ok
// SIG undefined FUN_145c87524(void)

void FUN_145c87524(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8770a FUN_145c8770a body=235 status=ok
// SIG undefined FUN_145c8770a(void)

void FUN_145c8770a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar1 = *(longlong *)(param_1 + -0x10);
    if (lVar1 != 0) {
      lVar3 = FUN_144a5dd5e();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar3 = FUN_144a5dd5e();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          lVar3 = 8;
          cVar5 = '\0';
          do {
            lVar2 = *(longlong *)(param_1 + 0x18);
            lVar4 = FUN_1412868d8(lVar1,cVar5);
            if (*(longlong *)(lVar2 + -8 + lVar3) != 0) {
              FUN_14480f766(lVar4);
            }
            if (*(longlong *)(lVar2 + lVar3) != 0) {
              FUN_14480f766(lVar4 + 0x18);
            }
            lVar3 = lVar3 + 0x10;
            cVar5 = cVar5 + '\x01';
          } while (lVar3 != 0x68);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_145c877f6((longlong *)(param_1 + 0x18));
      return;
    }
  }
  return;
}



// FUNCTION 145c877f6 FUN_145c877f6 body=48 status=ok
// SIG undefined FUN_145c877f6(void)

void FUN_145c877f6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 145c87826 FUN_145c87826 body=24 status=ok
// SIG undefined FUN_145c87826(void)

void FUN_145c87826(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c8783a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145c8783e FUN_145c8783e body=38 status=ok
// SIG undefined FUN_145c8783e(void)

undefined8 FUN_145c8783e(undefined8 param_1,int param_2)

{
  FUN_145c87864();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c87864 FUN_145c87864 body=208 status=ok
// SIG undefined FUN_145c87864(void)

void FUN_145c87864(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b427230;
  param_1[4] = &PTR_FUN_14b427250;
  *(undefined4 *)(param_1 + 0x1a2) = 0;
  if (param_1[0x1a1] != 0) {
    FUN_1400020a8();
  }
  FUN_145c87934(param_1 + 0x199);
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (param_1[0x197] != 0) {
    FUN_1400020a8();
  }
  FUN_145c8796c(param_1 + 399);
  if (param_1[0x18d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18b] != 0) {
    FUN_1400020a8();
  }
  FUN_145c879a4(param_1 + 6);
  FUN_14114f6be(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c87930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145c87934 FUN_145c87934 body=55 status=ok
// SIG undefined FUN_145c87934(void)

void FUN_145c87934(longlong *param_1)

{
  FUN_145c879e2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c8796c FUN_145c8796c body=55 status=ok
// SIG undefined FUN_145c8796c(void)

void FUN_145c8796c(longlong *param_1)

{
  FUN_145c87b44(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c879a4 FUN_145c879a4 body=61 status=ok
// SIG undefined FUN_145c879a4(void)

void FUN_145c879a4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar1 = param_1;
  }
  FUN_1402d383a(lVar1,*(undefined4 *)(param_1 + 0xc08));
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c879e2 FUN_145c879e2 body=352 status=ok
// SIG undefined FUN_145c879e2(void)

void FUN_145c879e2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145c87b44 FUN_145c87b44 body=393 status=ok
// SIG undefined FUN_145c87b44(void)

void FUN_145c87b44(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c87cce FUN_145c87cce body=460 status=ok
// SIG undefined FUN_145c87cce(void)

void FUN_145c87cce(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_48;
  uVar1 = FUN_14477b664(uStack_40);
  local_58 = FUN_14477b664(uVar1);
  local_50 = local_38;
  FUN_145c87e9c(local_18,local_20,local_28,&local_60);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c87e9c FUN_145c87e9c body=434 status=ok
// SIG undefined FUN_145c87e9c(void)

void FUN_145c87e9c(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_145c87fde;
  lVar5 = param_4[1];
  if (lVar5 == 0) {
    uVar4 = FUN_145cd93aa();
    lVar5 = FUN_14477b664(uVar4);
    param_4[1] = lVar5;
  }
  if (param_4[2] == 0) {
    if ((lVar5 == 0) || (*param_4 == 0)) goto LAB_145c87fde;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,param_4);
        param_4[2] = lVar5;
        if (lVar5 == 0) goto LAB_145c87fde;
        goto LAB_145c87f48;
      }
    }
    param_4[2] = 0;
    goto LAB_145c87fde;
  }
LAB_145c87f48:
  plVar6 = (longlong *)FUN_14001cc68(0x78,0x10);
  local_68 = param_4;
  FUN_145c880f2(plVar6,&local_38,&local_30,&local_28);
  plVar2 = plVar6 + 2;
  local_58 = plVar2;
  local_50 = plVar6;
  FUN_145c88050(&local_58,plVar2);
  local_48 = plVar2;
  local_40 = plVar6;
  if (plVar6 == (longlong *)0x0) {
LAB_145c87fab:
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_145c882ea(*(longlong *)(param_1 + 0x28),&local_48);
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1 = local_38;
    if (local_38 != 0) goto LAB_145c87fab;
  }
  plVar2 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_145c87fde:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c88050 FUN_145c88050 body=162 status=ok
// SIG undefined FUN_145c88050(void)

void FUN_145c88050(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145c8808f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145c8808f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145c8808f:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c880ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145c880f2 FUN_145c880f2 body=185 status=ok
// SIG undefined FUN_145c880f2(void)

undefined8 *
FUN_145c880f2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b42c270;
  local_58 = *param_5;
  uVar1 = FUN_14477b664(param_5[1]);
  local_50 = FUN_14477b664(uVar1);
  local_48 = param_5[2];
  local_68 = &local_58;
  FUN_145c881ac(param_1 + 2,*param_2,*param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c881ac FUN_145c881ac body=245 status=ok
// SIG undefined FUN_145c881ac(void)

undefined8 *
FUN_145c881ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_5;
  uVar1 = FUN_14477b664(param_5[1]);
  local_60 = FUN_14477b664(uVar1);
  local_58 = param_5[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14b42c2d0;
  FUN_145c882a2(param_1 + 3,&local_68);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_14b42c290;
  param_1[9] = 0;
  FUN_14485c47a(param_1 + 9,param_3);
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (*param_4 != 0) {
    FUN_14485c47a(param_1 + 10,param_2);
    param_1[0xb] = *param_4;
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c882a2 FUN_145c882a2 body=71 status=ok
// SIG undefined FUN_145c882a2(void)

undefined8 * FUN_145c882a2(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 145c882ea FUN_145c882ea body=862 status=ok
// SIG undefined FUN_145c882ea(void)

void FUN_145c882ea(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar15 = *param_2;
  lVar10 = *(longlong *)(lVar15 + 0x20);
  if (lVar10 == 0) {
    uVar9 = FUN_145cd93aa();
    lVar10 = FUN_14477b664(uVar9);
    *(longlong *)(lVar15 + 0x20) = lVar10;
  }
  if (*(longlong *)(lVar15 + 0x28) == 0) {
    if ((lVar10 == 0) || (*(longlong *)(lVar15 + 0x18) == 0)) goto LAB_145c884dd;
    plVar8 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
      *(undefined8 *)(lVar15 + 0x28) = 0;
      goto LAB_145c884dd;
    }
    uVar9 = (**(code **)(*plVar8 + 0x110))(plVar8);
    lVar10 = FUN_144aff482(uVar9,(longlong *)(lVar15 + 0x18));
    *(longlong *)(lVar15 + 0x28) = lVar10;
    if (lVar10 == 0) goto LAB_145c884dd;
  }
  lVar15 = *(longlong *)(*param_2 + 0x20);
  puVar12 = (undefined8 *)(*param_2 + 0x18);
  if (lVar15 == 0) {
    lVar15 = FUN_145cd93aa();
  }
  uVar9 = *puVar12;
  uVar7 = FUN_14477b664(lVar15);
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar14 = (uint)uVar9 & 0xffff;
  uVar6 = FUN_144a78877(((uint)uVar9 << 0x10 | uVar14) + (int)((ulonglong)uVar9 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar14 >> 4),uVar5 >> 0x10 ^ uVar5);
  plVar8 = (longlong *)FUN_145c0a8ca(param_1 + 0x198,uVar6,puVar12);
  if ((longlong)(int)plVar8[1] == 0) {
    bVar13 = false;
  }
  else {
    puVar12 = (undefined8 *)*plVar8;
    lVar15 = (longlong)(int)plVar8[1] << 4;
    bVar13 = false;
    do {
      cVar3 = (**(code **)(*(longlong *)*puVar12 + 0x10))();
      bVar2 = true;
      if ((cVar3 != '\0') &&
         (cVar3 = FUN_148987bdc(*param_2,*puVar12), bVar2 = bVar13, cVar3 != '\0')) {
        if (puVar12 != (undefined8 *)0x0) {
          if (!bVar13) goto LAB_145c884dd;
          goto LAB_145c885ec;
        }
        break;
      }
      bVar13 = bVar2;
      puVar12 = puVar12 + 2;
      lVar15 = lVar15 + -0x10;
    } while (lVar15 != 0);
  }
  iVar1 = (int)plVar8[1];
  *(uint *)(plVar8 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar8 + 0xc) < iVar1 + 1U) {
    FUN_145c8864a(plVar8,iVar1);
  }
  lVar15 = *plVar8;
  *(longlong *)(lVar15 + (longlong)iVar1 * 0x10) = *param_2;
  lVar10 = param_2[1];
  *(longlong *)(lVar15 + 8 + (longlong)iVar1 * 0x10) = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  lVar15 = *param_2;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar12 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b429f90;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_50[2] = lVar11;
  *local_50 = &PTR_FUN_14b429f20;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,param_1);
  puVar12[4] = FUN_145a26528;
  FUN_145c886ce(lVar15,&local_50);
  lVar15 = *param_2;
  local_68 = *(undefined8 *)(lVar15 + 0x18);
  uVar9 = FUN_14477b664(*(undefined8 *)(lVar15 + 0x20));
  local_60 = FUN_14477b664(uVar9);
  local_58 = *(undefined8 *)(lVar15 + 0x28);
  FUN_145a267de(param_1,&local_68,0);
  if (bVar13) {
LAB_145c885ec:
    uVar7 = (ulonglong)(int)plVar8[1];
    if (0 < (longlong)uVar7) {
      lVar15 = uVar7 << 4;
      do {
        lVar15 = lVar15 + -0x10;
        cVar3 = (**(code **)(**(longlong **)(*plVar8 + lVar15) + 0x10))();
        if (cVar3 == '\0') {
          FUN_145a2664e(param_1,plVar8,(int)uVar7 + -1);
        }
        bVar13 = 1 < uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar13);
    }
  }
LAB_145c884dd:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c8864a FUN_145c8864a body=132 status=ok
// SIG undefined FUN_145c8864a(void)

void FUN_145c8864a(longlong param_1,int param_2)

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



// FUNCTION 145c886ce FUN_145c886ce body=351 status=ok
// SIG undefined FUN_145c886ce(void)

void FUN_145c886ce(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_145c8882e(param_1 + 6);
  (**(code **)(*param_1 + 0x28))(param_1);
  lVar5 = param_1[4];
  if (lVar5 == 0) {
    uVar4 = FUN_145cd93aa();
    lVar5 = FUN_14477b664(uVar4);
    param_1[4] = lVar5;
  }
  plVar1 = param_1 + 3;
  lVar6 = param_1[5];
  if (lVar6 == 0) {
    if ((lVar5 == 0) || (*plVar1 == 0)) goto LAB_145c88719;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
        param_1[5] = lVar6;
        if (lVar6 == 0) goto LAB_145c88719;
        lVar5 = param_1[4];
        goto LAB_145c88705;
      }
    }
    param_1[5] = 0;
    goto LAB_145c88719;
  }
LAB_145c88705:
  if (lVar5 == 0) {
    uVar4 = FUN_145cd93aa();
    lVar5 = FUN_14477b664(uVar4);
    param_1[4] = lVar5;
    lVar6 = param_1[5];
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 == (longlong *)0x0) {
LAB_145c88829:
        lVar6 = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 == '\0') goto LAB_145c88829;
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
      }
      param_1[5] = lVar6;
    }
  }
  if (*(longlong *)(lVar6 + 0x1c) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,lVar6 + 0x1c);
  }
LAB_145c88719:
  FUN_1449db362(param_2);
  return;
}



// FUNCTION 145c8882e FUN_145c8882e body=124 status=ok
// SIG undefined FUN_145c8882e(void)

void FUN_145c8882e(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c888ac FUN_145c888ac body=163 status=ok
// SIG undefined FUN_145c888ac(void)

void FUN_145c888ac(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144729dda(param_1 + 0x48);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x48);
    local_48 = &LAB_1459b7dce;
    local_40 = 0;
    FUN_145c88950(local_38,param_1);
    FUN_140725f8c(lVar2 + 0x2d0,&local_48,local_38);
    FUN_1449db362(local_38);
    *(undefined1 **)(param_1 + 0x60) = local_48;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c88950 FUN_145c88950 body=428 status=ok
// SIG undefined FUN_145c88950(void)

longlong * FUN_145c88950(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145c88a30:
    *puVar5 = &PTR_LAB_14a1c7440;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b42c350;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c88a30;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c7440;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b42c350;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 145c88afc FUN_145c88afc body=93 status=ok
// SIG undefined FUN_145c88afc(void)

void FUN_145c88afc(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145c88b5a(&local_20);
  *(undefined8 *)(param_1 + 8) = local_20;
  FUN_145c88bf8(&local_20);
  *(undefined8 *)(param_1 + 0x10) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c88b5a FUN_145c88b5a body=157 status=ok
// SIG undefined FUN_145c88b5a(void)

undefined8 FUN_145c88b5a(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  puVar1 = local_30;
  local_28 = 2;
  *local_30 = &PTR_LAB_14bac2d70;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bac2d00;
  FUN_145c88c96(param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c88bf8 FUN_145c88bf8 body=157 status=ok
// SIG undefined FUN_145c88bf8(void)

undefined8 FUN_145c88bf8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  puVar1 = local_30;
  local_28 = 2;
  *local_30 = &PTR_LAB_14bac2e50;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bac2de0;
  FUN_145c88d90(param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c88c96 FUN_145c88c96 body=233 status=ok
// SIG undefined FUN_145c88c96(void)

undefined8 * FUN_145c88c96(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14c951be0,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14c951be8;
      lVar6 = (longlong)(int)DAT_14c951be8;
      DAT_14c951be8 = DAT_14c951be8 + 1;
      if (DAT_14c951bec < DAT_14c951be8) {
        FUN_1447a71f6(&DAT_14c951be0,uVar3);
      }
      lVar2 = DAT_14c951be0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c951be0 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c88d90 FUN_145c88d90 body=233 status=ok
// SIG undefined FUN_145c88d90(void)

undefined8 * FUN_145c88d90(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14c951bc8,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14c951bd0;
      lVar6 = (longlong)(int)DAT_14c951bd0;
      DAT_14c951bd0 = DAT_14c951bd0 + 1;
      if (DAT_14c951bd4 < DAT_14c951bd0) {
        FUN_1447a71f6(&DAT_14c951bc8,uVar3);
      }
      lVar2 = DAT_14c951bc8;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c951bc8 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c88e8a FUN_145c88e8a body=370 status=ok
// SIG undefined FUN_145c88e8a(void)

longlong * FUN_145c88e8a(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_378 [32];
  undefined1 *local_358;
  undefined1 local_341;
  undefined1 local_340 [8];
  longlong *local_338;
  longlong *local_328;
  undefined4 local_320;
  undefined1 local_318;
  undefined8 local_310;
  undefined4 local_308;
  longlong local_300;
  longlong *local_2f8;
  undefined1 local_2f0 [712];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_378;
  FUN_145c895fc(local_2f0);
  local_328 = (longlong *)*param_3;
  if (local_328 != (longlong *)0x0) {
    (**(code **)(*local_328 + 8))();
  }
  local_320 = (undefined4)param_3[1];
  local_318 = (undefined1)param_3[2];
  local_310 = 0;
  local_308 = 0;
  FUN_1413a4324(&local_310,param_3 + 3);
  uVar3 = FUN_145c88ffe(local_2f0,&local_328);
  local_358 = &local_341;
  FUN_145c892fc(local_340,"SToolTip",
                ".\\Runtime/Slate/Private/Framework/Application/SlateApplication.cpp",0x1233);
  FUN_145c89054(local_340,&local_300,uVar3);
  lVar4 = local_300 + 0x268;
  if (local_300 == 0) {
    lVar4 = 0;
  }
  *param_2 = lVar4;
  param_2[1] = (longlong)local_2f8;
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2f8 + 1) = (int)local_2f8[1] + 1;
    UNLOCK();
    if (local_2f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_2f8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_2f8)(local_2f8);
        LOCK();
        piVar2 = (int *)((longlong)local_2f8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_2f8 + 0x10))(local_2f8);
        }
      }
    }
  }
  if (local_338 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_338 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_338)(local_338);
      LOCK();
      piVar2 = (int *)((longlong)local_338 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_338 + 0x10))(local_338);
      }
    }
  }
  FUN_145c890ca(local_2f0);
  if ((local_28 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c88ffe FUN_145c88ffe body=86 status=ok
// SIG undefined FUN_145c88ffe(void)

longlong FUN_145c88ffe(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x1a8);
  *(char *)(param_1 + 0x1b8) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x1c0,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 145c89054 FUN_145c89054 body=117 status=ok
// SIG undefined FUN_145c89054(void)

longlong * FUN_145c89054(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145c89166(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145c890ca FUN_145c890ca body=156 status=ok
// SIG undefined FUN_145c890ca(void)

void FUN_145c890ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x2b8);
  FUN_1449db362(param_1 + 0x2a8);
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x270);
  FUN_141515cba(param_1 + 0x1e0);
  plVar3 = *(longlong **)(param_1 + 0x1d8);
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
  FUN_1449db362(param_1 + 0x1c0);
  if (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x10))();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 145c89166 FUN_145c89166 body=271 status=ok
// SIG undefined FUN_145c89166(void)

void FUN_145c89166(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_14133824c(param_1 + 0x270,param_2 + 0x1a8);
  *(undefined2 *)(param_1 + 0x378) = *(undefined2 *)(param_2 + 0x2a0);
  FUN_14096c7c0(param_1 + 0x380,param_2 + 0x2a8);
  FUN_1412cc59c(param_1 + 0x2b8,param_2 + 0x1e0);
  *(undefined1 *)(param_1 + 0x318) = *(undefined1 *)(param_2 + 0x240);
  FUN_140a5d470(param_1 + 800,param_2 + 0x248);
  uVar1 = *(undefined4 *)(param_2 + 0x25c);
  uVar2 = *(undefined4 *)(param_2 + 0x260);
  uVar3 = *(undefined4 *)(param_2 + 0x264);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 600);
  *(undefined4 *)(param_1 + 0x334) = uVar1;
  *(undefined4 *)(param_1 + 0x338) = uVar2;
  *(undefined4 *)(param_1 + 0x33c) = uVar3;
  *(undefined1 *)(param_1 + 0x340) = *(undefined1 *)(param_2 + 0x268);
  FUN_140a58be0(param_1 + 0x348,param_2 + 0x270);
  *(undefined1 *)(param_1 + 0x360) = *(undefined1 *)(param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_2 + 0x280);
  FUN_140a5c3e8(param_1 + 0x368,param_2 + 0x290);
  FUN_145c89276(param_1 + 0x390,param_2 + 0x2b8);
                    /* WARNING: Could not recover jumptable at 0x000145c89272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x268) + 0x10))(param_1 + 0x268,param_2 + 0x1d0);
  return;
}



// FUNCTION 145c89276 FUN_145c89276 body=132 status=ok
// SIG undefined FUN_145c89276(void)

void FUN_145c89276(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c892fc FUN_145c892fc body=417 status=ok
// SIG undefined FUN_145c892fc(void)

undefined8 *
FUN_145c892fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x3b0);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149efe240;
  plVar1 = plVar4 + 2;
  memset(plVar1,0,0x3a0);
  FUN_145c89540(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_145c8949e(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145c893c2;
    param_1[1] = 0;
LAB_145c8942f:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145c893c2;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_145c893c2;
      goto LAB_145c8942f;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145c893c2;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_145c893c2:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x3a0;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8949e FUN_145c8949e body=162 status=ok
// SIG undefined FUN_145c8949e(void)

void FUN_145c8949e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145c894dd;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145c894dd;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145c894dd:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c8953c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145c89540 FUN_145c89540 body=187 status=ok
// SIG undefined FUN_145c89540(void)

undefined8 * FUN_145c89540(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_149efe260;
  param_1[0x4d] = &PTR_LAB_149efe4b0;
  FUN_144a5dc74(param_1 + 0x4e);
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  FUN_141515d3c(param_1 + 0x57);
  *(undefined1 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x351) = 0;
  *(undefined8 *)((longlong)param_1 + 0x359) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined2 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0;
  return param_1;
}



// FUNCTION 145c895fc FUN_145c895fc body=474 status=ok
// SIG undefined FUN_145c895fc(void)

longlong FUN_145c895fc(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [56];
  longlong *local_68;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140a5071c();
  FUN_144a5dc74(param_1 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1d8) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_a8,"ToolTip.Font",1);
  (**(code **)(*plVar3 + 0x88))(plVar3,local_a0,local_a8,0);
  FUN_144a87366(param_1 + 0x1e0,local_a0);
  *(undefined1 *)(param_1 + 0x240) = 1;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_68 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  *(undefined4 *)(param_1 + 600) = 0x41000000;
  *(undefined4 *)(param_1 + 0x25c) = 0x41000000;
  *(undefined4 *)(param_1 + 0x260) = 0x41000000;
  *(undefined4 *)(param_1 + 0x264) = 0x41000000;
  *(undefined1 *)(param_1 + 0x268) = 1;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  plVar3 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_b0,"ToolTip.Background",1);
  uVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,local_b0,0,0);
  *(undefined8 *)(param_1 + 0x280) = uVar4;
  *(undefined1 *)(param_1 + 0x288) = 1;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined2 *)(param_1 + 0x2a0) = 0x100;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c897d8 FUN_145c897d8 body=2239 status=ok
// SIG undefined FUN_145c897d8(void)

void FUN_145c897d8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_698 [32];
  undefined8 *local_678;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined1 local_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined1 local_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  uint local_608;
  undefined1 local_604;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined1 local_5e8 [96];
  undefined1 local_588;
  undefined8 local_580;
  undefined4 local_578;
  longlong *local_570;
  undefined4 local_568;
  undefined1 local_560;
  undefined8 local_558;
  undefined4 local_550;
  undefined1 local_541;
  undefined1 local_540 [8];
  longlong *local_538;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined1 local_518;
  undefined8 local_510;
  undefined4 local_508;
  undefined8 local_500;
  undefined1 local_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined8 local_4e0;
  longlong *local_4d8;
  undefined8 local_4d0;
  longlong *local_4c8;
  undefined1 local_4c0 [424];
  undefined8 local_318;
  longlong *local_310;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined1 local_2f0;
  undefined1 local_2e8 [80];
  undefined8 local_298;
  undefined1 local_290;
  undefined1 local_288 [568];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_698;
  if (*param_2 == DAT_14c98dec8) {
    plVar10 = *(longlong **)(param_1 + 0x38);
  }
  else {
    *(longlong *)(param_1 + 0x30) = *param_2;
    plVar9 = (longlong *)param_2[1];
    plVar10 = *(longlong **)(param_1 + 0x38);
    if (plVar10 != plVar9) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar10 = *(longlong **)(param_1 + 0x38);
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x38) = plVar9;
      plVar10 = plVar9;
    }
  }
  bVar4 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_145c89826:
    plVar10 = (longlong *)0x0;
LAB_145c89828:
    FUN_140a570d8(local_4c0);
    local_570 = *(longlong **)(param_1 + 8);
    if (local_570 != (longlong *)0x0) {
      (**(code **)(*local_570 + 8))();
    }
    local_568 = *(undefined4 *)(param_1 + 0x10);
    local_560 = *(undefined1 *)(param_1 + 0x18);
    local_558 = 0;
    local_550 = 0;
    FUN_1413a4324(&local_558,param_1 + 0x20);
    lVar8 = FUN_140a54906(local_4c0,&local_570);
    FUN_144a87366(local_5e8,param_1 + 0x50);
    local_588 = *(undefined1 *)(param_1 + 0xb0);
    local_580 = 0;
    local_578 = 0;
    FUN_140a5d470(&local_580,param_1 + 0xb8);
    FUN_1412cc59c(lVar8 + 0x1d8,local_5e8);
    *(undefined1 *)(lVar8 + 0x238) = local_588;
    FUN_144a450dc(lVar8 + 0x240,&local_580);
    FUN_141515cba(local_5e8);
    local_618 = 0;
    uStack_614 = 0;
    uStack_610 = 0;
    uStack_60c = 0x3f800000;
    local_608 = local_608 & 0xffffff00;
    local_604 = 1;
    local_600 = 0;
    uStack_5f8 = 0;
    *(uint *)(lVar8 + 0x280) = local_608;
    *(undefined4 *)(lVar8 + 0x270) = 0;
    *(undefined4 *)(lVar8 + 0x274) = 0;
    *(undefined4 *)(lVar8 + 0x278) = 0;
    *(undefined4 *)(lVar8 + 0x27c) = 0x3f800000;
    *(undefined1 *)(lVar8 + 0x284) = 1;
    FUN_144a450dc(lVar8 + 0x288,&local_600);
    FUN_1449db362(&local_600);
    FUN_145c8a098(lVar8);
    local_678 = &local_4e0;
    FUN_140a54526(local_540,"STextBlock",".\\Runtime/Slate/Private/Widgets/SToolTip.cpp",0x40);
    FUN_140a52852(local_540,&local_4d0,lVar8);
    plVar9 = local_4c8;
    if (local_4c8 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = local_4d0;
      plVar11 = *(longlong **)(param_1 + 0x48);
      if (plVar11 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x48) = 0;
LAB_145c89ca0:
        LOCK();
        plVar9 = plVar11 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar7 = *piVar2;
          UNLOCK();
joined_r0x000145c89cd9:
          if (iVar7 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_4c8 + 1) = (int)local_4c8[1] + 1;
      UNLOCK();
      *(undefined8 *)(param_1 + 0x40) = local_4d0;
      plVar11 = *(longlong **)(param_1 + 0x48);
      if (local_4c8 == plVar11) {
        LOCK();
        plVar11 = local_4c8 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_4c8)(local_4c8);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar7 = *piVar2;
          UNLOCK();
          plVar11 = plVar9;
          goto joined_r0x000145c89cd9;
        }
      }
      else {
        *(longlong **)(param_1 + 0x48) = local_4c8;
        if (plVar11 != (longlong *)0x0) goto LAB_145c89ca0;
      }
    }
    if (local_4c8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_4c8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_4c8)(local_4c8);
        LOCK();
        piVar2 = (int *)((longlong)local_4c8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_4c8 + 0x10))(local_4c8);
        }
      }
    }
    plVar9 = local_538;
    if (local_538 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_538 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_538)(local_538);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    FUN_140a59ae6(local_4c0);
    FUN_140a562d0(local_4c0);
    plVar9 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = DAT_14c96b350;
    }
    FUN_1446ddc76(&local_640,"ToolTip.BrightBackground",1);
    local_638 = (**(code **)(*plVar9 + 0x50))(plVar9,local_640,0,0);
    local_630 = 1;
    local_628 = 0;
    uStack_620 = 0;
    local_290 = 1;
    local_298 = local_638;
    FUN_144a450dc(local_288,&local_628);
    FUN_1449db362(&local_628);
    local_668 = 0x4130000041300000;
    uStack_660 = 0x4130000041300000;
    local_658 = 1;
    local_650 = 0;
    uStack_648 = 0;
    local_2f0 = 1;
    local_300 = 0x41300000;
    uStack_2fc = 0x41300000;
    uStack_2f8 = 0x41300000;
    uStack_2f4 = 0x41300000;
    FUN_144a450dc(local_2e8,&local_650);
    FUN_1449db362(&local_650);
    plVar11 = local_310;
    local_318 = *(undefined8 *)(param_1 + 0x40);
    plVar9 = *(longlong **)(param_1 + 0x48);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    plVar6 = plVar9;
    if (local_310 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_310 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        puVar3 = (undefined8 *)*local_310;
        local_310 = plVar9;
        (*(code *)*puVar3)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar6 = local_310;
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          plVar6 = local_310;
        }
      }
    }
    local_310 = plVar6;
    local_678 = (undefined8 *)&local_541;
    FUN_140a55c32(local_540,"SBorder",".\\Runtime/Slate/Private/Widgets/SToolTip.cpp",0x4a);
    FUN_140a530e4(local_540,&local_4e0,local_4c0);
    local_4d0 = local_4e0;
    local_4c8 = local_4d8;
    if (local_4d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4d8 + 1) = (int)local_4d8[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(param_1 + -0x88,&local_4d0);
    plVar11 = local_4c8;
    if (local_4c8 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_4c8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_4c8)(local_4c8);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (local_4d8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_4d8 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_4d8)(local_4d8);
        LOCK();
        piVar2 = (int *)((longlong)local_4d8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_4d8 + 0x10))(local_4d8);
        }
      }
    }
    if (local_538 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_538 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_538)(local_538);
        LOCK();
        piVar2 = (int *)((longlong)local_538 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_538 + 0x10))(local_538);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    FUN_140a59028(local_4c0);
    if (bVar4) goto LAB_145c89bee;
  }
  else {
    iVar7 = (int)plVar10[1];
    do {
      if (iVar7 == 0) goto LAB_145c89826;
      LOCK();
      iVar5 = (int)plVar10[1];
      bVar12 = iVar7 == iVar5;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar12);
    lVar8 = *(longlong *)(param_1 + 0x30);
    if (lVar8 == 0) {
      bVar4 = false;
      goto LAB_145c89828;
    }
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    plVar9 = *(longlong **)(param_1 + 0x48);
    *(longlong *)(param_1 + 0x40) = lVar8;
    *(longlong **)(param_1 + 0x48) = plVar10;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    FUN_140a562d0(local_4c0);
    local_500 = *(undefined8 *)(param_1 + 0xf0);
    local_4f8 = *(undefined1 *)(param_1 + 0xf8);
    local_4f0 = 0;
    local_4e8 = 0;
    FUN_140a5c3e8(&local_4f0,param_1 + 0x100);
    local_290 = local_4f8;
    local_298 = local_500;
    FUN_144a450dc(local_288,&local_4f0);
    FUN_1449db362(&local_4f0);
    local_518 = *(undefined1 *)(param_1 + 0xd8);
    local_528 = *(undefined4 *)(param_1 + 200);
    uStack_524 = *(undefined4 *)(param_1 + 0xcc);
    uStack_520 = *(undefined4 *)(param_1 + 0xd0);
    uStack_51c = *(undefined4 *)(param_1 + 0xd4);
    local_510 = 0;
    local_508 = 0;
    FUN_140a58be0(&local_510,param_1 + 0xe0);
    local_2f0 = local_518;
    local_300 = local_528;
    uStack_2fc = uStack_524;
    uStack_2f8 = uStack_520;
    uStack_2f4 = uStack_51c;
    FUN_144a450dc(local_2e8,&local_510);
    FUN_1449db362(&local_510);
    plVar11 = local_310;
    local_318 = *(undefined8 *)(param_1 + 0x40);
    plVar9 = *(longlong **)(param_1 + 0x48);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    plVar6 = plVar9;
    if (local_310 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_310 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        puVar3 = (undefined8 *)*local_310;
        local_310 = plVar9;
        (*(code *)*puVar3)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar6 = local_310;
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          plVar6 = local_310;
        }
      }
    }
    local_310 = plVar6;
    local_678 = (undefined8 *)&local_541;
    FUN_140a55c32(local_540,"SBorder",".\\Runtime/Slate/Private/Widgets/SToolTip.cpp",0x34);
    FUN_140a530e4(local_540,&local_4e0,local_4c0);
    local_4d0 = local_4e0;
    local_4c8 = local_4d8;
    if (local_4d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4d8 + 1) = (int)local_4d8[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(param_1 + -0x88,&local_4d0);
    plVar11 = local_4c8;
    if (local_4c8 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_4c8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_4c8)(local_4c8);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (local_4d8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_4d8 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_4d8)(local_4d8);
        LOCK();
        piVar2 = (int *)((longlong)local_4d8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_4d8 + 0x10))(local_4d8);
        }
      }
    }
    if (local_538 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_538 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_538)(local_538);
        LOCK();
        piVar2 = (int *)((longlong)local_538 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_538 + 0x10))(local_538);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    FUN_140a59028(local_4c0);
  }
  LOCK();
  plVar9 = plVar10 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar2 = (int *)((longlong)plVar10 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
LAB_145c89bee:
  if ((local_50 ^ (ulonglong)auStack_698) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8a098 FUN_145c8a098 body=281 status=ok
// SIG undefined FUN_145c8a098(void)

longlong FUN_145c8a098(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = &PTR_LAB_149f05210;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_48[2] = lVar2;
  *local_48 = &PTR_FUN_149f1e570;
  local_48[3] = FUN_146ad7136;
  local_38 = 0;
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a52b3c(&local_30,&local_48);
  *(undefined1 *)(param_1 + 0x35c) = local_34;
  *(undefined4 *)(param_1 + 0x358) = local_38;
  FUN_144a450dc(param_1 + 0x360,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(&local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8a1b2 FUN_145c8a1b2 body=95 status=ok
// SIG undefined FUN_145c8a1b2(void)

void FUN_145c8a1b2(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  DAT_14c9a71d0 = 0;
  lVar1 = *param_1;
  iVar2 = (int)((ulonglong)(param_1[1] - lVar1) >> 3) * -0x55555555;
  DAT_14c9a71d8 = iVar2;
  if (iVar2 != 0) {
    FUN_145c8a29a(iVar2);
    FUN_145c8a211(DAT_14c9a71d0,lVar1,iVar2);
    return;
  }
  DAT_14c9a71dc = 0;
  return;
}



// FUNCTION 145c8a211 FUN_145c8a211 body=47 status=ok
// SIG undefined FUN_145c8a211(void)

void FUN_145c8a211(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_145c8a240(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 145c8a240 FUN_145c8a240 body=90 status=ok
// SIG undefined FUN_145c8a240(void)

undefined8 * FUN_145c8a240(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1470c8d5e(param_1,iVar1,0);
    FUN_140360432(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 145c8a29a FUN_145c8a29a body=108 status=ok
// SIG undefined FUN_145c8a29a(void)

undefined8 FUN_145c8a29a(int param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_1 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_1 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(&DAT_14c9a71d0,0,uVar5,0x18,8);
  }
  DAT_14c9a71dc = iVar4;
  return uVar3;
}



// FUNCTION 145c8a306 FUN_145c8a306 body=316 status=ok
// SIG undefined FUN_145c8a306(void)

void FUN_145c8a306(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38;
  int local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145c8a44d(FUN_14442bfe1);
  plVar2 = (longlong *)FUN_144a8054c();
  local_78 = L"HairStrands";
  local_70 = 0xb;
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_68);
  (**(code **)(*local_68 + 0x20))(local_68,&local_58);
  local_38 = local_58;
  local_30 = local_50 + -1;
  if (local_50 == 0) {
    local_30 = 0;
  }
  local_28 = L"Shaders";
  local_20 = 7;
  FUN_140bee87a(local_48,&local_38,2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  FUN_140056680(&local_38,L"/Plugin/Runtime/HairStrands");
  FUN_141414c4a(&local_38,local_48);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_145c8a443(1);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8a443 FUN_145c8a443 body=10 status=ok
// SIG undefined FUN_145c8a443(void)

void FUN_145c8a443(byte param_1)

{
  DAT_14cae3fd0 = (uint)param_1;
  return;
}



// FUNCTION 145c8a44d FUN_145c8a44d body=13 status=ok
// SIG undefined FUN_145c8a44d(void)

void FUN_145c8a44d(longlong param_1)

{
  if (param_1 != 0) {
    DAT_14c9d2488 = param_1;
  }
  return;
}



// FUNCTION 145c8a45a FUN_145c8a45a body=680 status=ok
// SIG undefined FUN_145c8a45a(void)

void FUN_145c8a45a(longlong param_1)

{
  int *piVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  undefined1 local_b8 [8];
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = *(longlong *)(param_1 + 0x43d8);
  if (lVar7 != 0) {
    puVar2 = (undefined8 *)(lVar7 + 0xa8);
    if ((&DAT_00001100)[param_1] != '\v') {
      puVar2 = (undefined8 *)(lVar7 + 0x80);
    }
    local_a0 = *puVar2;
    local_98 = *(undefined4 *)(puVar2 + 1);
    uStack_94 = *(undefined4 *)((longlong)puVar2 + 0xc);
    uStack_90 = *(undefined4 *)(puVar2 + 2);
    uStack_8c = *(undefined4 *)((longlong)puVar2 + 0x14);
    local_88 = (void *)0x0;
    local_80 = *(int *)(puVar2 + 4);
    lVar7 = (longlong)local_80;
    _Src = (void *)puVar2[3];
    if (lVar7 == 0) {
      local_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_80,0);
      memcpy(local_88,_Src,lVar7 * 2);
    }
    plVar4 = *(longlong **)(param_1 + 0x4208);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1407ca880();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar3);
      if (plVar4 != (longlong *)0x0) {
        uVar3 = FUN_1407ca880();
        plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
        if ((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) {
          lVar7 = FUN_140963a30(*(longlong *)(param_1 + 0x43d8) + 0x48);
          if (lVar7 != 0) {
            uVar3 = FUN_140963a30(*(longlong *)(param_1 + 0x43d8) + 0x48);
            (**(code **)(*plVar5 + 0x28))(plVar5,uVar3);
          }
          lVar7 = FUN_140963a30(&local_a0);
          if (lVar7 != 0) {
            *(undefined1 *)(param_1 + 0x43f0) = 1;
            uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
            local_58 = 0;
            uStack_40 = 0;
            local_38 = 0;
            uStack_30 = 0;
            local_68 = 0;
            uStack_60 = 0;
            local_78 = (undefined1 *)0x0;
            uStack_70 = 0;
            uStack_50 = 0x8000000000;
            local_48 = 0xffffffff;
            uVar6 = FUN_140963a30(&local_a0);
            local_c8 = &local_78;
            FUN_14122243a(uVar3,&local_b0,uVar6,1);
            uStack_30 = uStack_30 & 0xffffffff00000000;
            if (local_38 != 0) {
              FUN_1400020a8();
            }
            FUN_140333f4e(&local_78);
            if (local_b0 != 0) {
              local_78 = &LAB_1459029fc;
              uStack_70 = uStack_70 & 0xffffffff00000000;
              FUN_145c8a704(local_b0 + 0x18,local_b8);
            }
            if ((longlong)*(int *)(param_1 + 0x4658) != 0) {
              lVar7 = 0;
              do {
                if ((*(int *)(*(longlong *)(param_1 + 18000) + 8 + lVar7) != 0) &&
                   (*(longlong *)(*(longlong *)(param_1 + 18000) + lVar7) != 0)) {
                  FUN_1404f401e(param_1 + 18000,param_1);
                  break;
                }
                lVar7 = lVar7 + 0x10;
              } while ((longlong)*(int *)(param_1 + 0x4658) * 0x10 != lVar7);
            }
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_a8 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_a8)(local_a8);
                LOCK();
                piVar1 = (int *)((longlong)local_a8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_a8 + 0x10))(local_a8);
                }
              }
            }
          }
        }
      }
    }
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c8a704 FUN_145c8a704 body=254 status=ok
// SIG undefined FUN_145c8a704(void)

undefined8
FUN_145c8a704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3e9c20;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9647c0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140ebcfd8(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8a80e FUN_145c8a80e body=266 status=ok
// SIG undefined FUN_145c8a80e(void)

undefined8 * FUN_145c8a80e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2c;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141051f1a();
  *param_1 = &PTR_FUN_14adc9060;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14adcb940;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
  puVar3[10] = 0;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_38 = FUN_140f1f190();
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_38);
  }
  local_30 = 1;
  local_2e = 0;
  local_2c = 0xffffffff;
  uVar2 = FUN_144830b78(local_24);
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x82) = 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8a91a FUN_145c8a91a body=112 status=ok
// SIG undefined FUN_145c8a91a(void)

void FUN_145c8a91a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xd0,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xd0)) {
      uVar2 = uVar1 / 0xd0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xd0,8);
  }
  return;
}



// FUNCTION 145c8a98a FUN_145c8a98a body=641 status=ok
// SIG undefined FUN_145c8a98a(void)

void FUN_145c8a98a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c8ac0c();
  if (param_2 == 0) goto LAB_145c8abc1;
  cVar2 = FUN_1407579fa(param_2);
  if (((cVar2 != '\0') || (*(longlong *)(param_2 + 0x30) == 0)) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar1 == 0)) goto LAB_145c8abc1;
  lVar3 = FUN_140a99ecc();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_145c8abc1;
  lVar3 = *(longlong *)(lVar1 + 0x678);
  if (lVar3 == 0) {
    uVar4 = FUN_145c8b14a();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x678) = lVar3;
  }
  if (*(longlong *)(lVar1 + 0x680) == 0) {
    if ((lVar3 != 0) && (*(longlong *)(lVar1 + 0x670) != 0)) {
      plVar5 = *(longlong **)(lVar3 + 0xb8);
      if (plVar5 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5);
        if (cVar2 != '\0') {
          uVar4 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar3 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x670));
          *(longlong *)(lVar1 + 0x680) = lVar3;
          if (lVar3 != 0) goto LAB_145c8aa93;
          goto LAB_145c8aae5;
        }
      }
      *(undefined8 *)(lVar1 + 0x680) = 0;
    }
  }
  else {
LAB_145c8aa93:
    plVar5 = (longlong *)FUN_1405835d4(param_2);
    if (plVar5 != (longlong *)0x0) {
      lVar3 = *(longlong *)(lVar1 + 0x678);
      if (lVar3 == 0) {
        lVar3 = FUN_145c8b14a();
      }
      local_40 = *(undefined8 *)(lVar1 + 0x670);
      local_38 = FUN_14477b664(lVar3);
      local_30 = *(undefined8 *)(lVar1 + 0x680);
      (**(code **)(*plVar5 + 0x2c0))(plVar5,&local_40);
    }
  }
LAB_145c8aae5:
  lVar3 = *(longlong *)(lVar1 + 0x690);
  if (lVar3 == 0) {
    uVar4 = FUN_145c42884();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x690) = lVar3;
  }
  if (*(longlong *)(lVar1 + 0x698) == 0) {
    if ((lVar3 == 0) || (*(longlong *)(lVar1 + 0x688) == 0)) goto LAB_145c8abc1;
    plVar5 = *(longlong **)(lVar3 + 0xb8);
    if (plVar5 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar3 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x688));
        *(longlong *)(lVar1 + 0x698) = lVar3;
        if (lVar3 == 0) goto LAB_145c8abc1;
        goto LAB_145c8ab70;
      }
    }
    *(undefined8 *)(lVar1 + 0x698) = 0;
  }
  else {
LAB_145c8ab70:
    plVar5 = (longlong *)FUN_145c8acb8(param_2);
    if (plVar5 != (longlong *)0x0) {
      local_58 = *(undefined8 *)(lVar1 + 0x688);
      uVar4 = FUN_14477b664(*(undefined8 *)(lVar1 + 0x690));
      local_50 = FUN_14477b664(uVar4);
      local_48 = *(undefined8 *)(lVar1 + 0x698);
      (**(code **)(*plVar5 + 0x2c0))(plVar5,&local_58);
    }
  }
LAB_145c8abc1:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8ac0c FUN_145c8ac0c body=171 status=ok
// SIG undefined FUN_145c8ac0c(void)

void FUN_145c8ac0c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_2 != 0) && (cVar4 = FUN_1407579fa(param_2), cVar4 == '\0')) &&
     (FUN_14130c0c2(local_28,param_2), local_20 != (longlong *)0x0)) {
    iVar5 = (int)local_20[1];
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar5 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c8acb8 FUN_145c8acb8 body=176 status=ok
// SIG undefined FUN_145c8acb8(void)

undefined8 FUN_145c8acb8(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14130c0c2(&local_28,param_1);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar5 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar5 != (longlong *)0x0) {
      if (local_28 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(local_28 + 0x58);
      }
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      goto LAB_145c8ad1b;
    }
  }
  uVar6 = 0;
LAB_145c8ad1b:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 145c8ad6a FUN_145c8ad6a body=990 status=ok
// SIG undefined FUN_145c8ad6a(void)

void FUN_145c8ad6a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_268 [40];
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  longlong local_228;
  code *local_220;
  longlong *plStack_218;
  undefined4 local_210 [2];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined8 local_15c;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_100;
  undefined8 local_f4;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  undefined8 local_a4;
  undefined8 local_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_238 = *param_2;
  uVar6 = FUN_14477b664(param_2[1]);
  local_230 = FUN_14477b664(uVar6);
  local_228 = param_2[2];
  FUN_141515f9a(param_1);
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar6 = FUN_145cd7d3c();
    lVar7 = FUN_14477b664(uVar6);
    param_2[1] = lVar7;
  }
  lVar8 = param_2[2];
  if (lVar8 == 0) {
    if ((lVar7 != 0) && (*param_2 != 0)) {
      plVar10 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar10 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar4 == '\0')) {
        param_2[2] = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar8 = FUN_144aff482(uVar6);
        param_2[2] = lVar8;
        if (lVar8 != 0) {
          lVar7 = param_2[1];
          goto LAB_145c8addb;
        }
      }
    }
  }
  else {
LAB_145c8addb:
    if (lVar7 == 0) {
      uVar6 = FUN_145cd7d3c();
      lVar7 = FUN_14477b664(uVar6);
      param_2[1] = lVar7;
      lVar8 = param_2[2];
      if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*param_2 != 0)) {
        plVar10 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar10 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar4 == '\0')) {
          lVar8 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
          lVar8 = FUN_144aff482(uVar6,param_2);
        }
        param_2[2] = lVar8;
      }
    }
    uVar6 = FUN_145c8b14a();
    cVar4 = FUN_1448093f4(lVar8,uVar6);
    lVar7 = 0;
    if (cVar4 != '\0') {
      lVar7 = lVar8;
    }
    FUN_14479d2ce(param_1 + 0x28);
    FUN_1402b6034(&local_220);
    if (plStack_218 != (longlong *)0x0) {
      iVar5 = (int)plStack_218[1];
      do {
        if (iVar5 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)plStack_218[1];
        bVar11 = iVar5 == iVar3;
        if (bVar11) {
          *(int *)(plStack_218 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar10 = plStack_218;
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)plStack_218 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_218 + 0x10))();
      }
      if (plVar10 != (longlong *)0x0) {
        if (local_220 != (code *)0x0) {
          pcVar9 = local_220 + 0x30;
          local_220 = FUN_1411d89fe;
          plStack_218 = (longlong *)((ulonglong)plStack_218 & 0xffffffff00000000);
          FUN_145c8b720(pcVar9,&local_240,param_1);
          *(undefined8 *)(param_1 + 0x3c0) = local_240;
        }
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
    }
    if (lVar7 != 0) {
      FUN_145c8b1ae(param_1 + 400,lVar7 + 0xe8);
      goto LAB_145c8aeaf;
    }
  }
  memset(local_210,0,0x1e8);
  local_220 = (code *)0x44fa00003fa00000;
  plStack_218 = (longlong *)0x3e80000045bb8000;
  local_210[0] = 0x461c4000;
  local_1b0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1ac = 0xffffffff00000080;
  local_198 = 0;
  local_168 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_15c = 0xffffffff00000080;
  local_148 = 0;
  local_100 = 0;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_f4 = 0xffffffff00000080;
  local_e0 = 0;
  local_b0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_a4 = 0xffffffff00000080;
  local_90 = 0;
  local_80 = 0x41a00000;
  uStack_7c = 0x41200000;
  uStack_78 = 0x41a00000;
  uStack_74 = 0x41200000;
  local_70 = 0x4120000041a00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0x40800000;
  FUN_148ce9b54(param_1 + 400,&local_220);
  FUN_140e20a16(&local_220);
LAB_145c8aeaf:
  cVar4 = FUN_145c8b184(param_1);
  if (cVar4 != '\0') {
    *(undefined8 *)(param_1 + 0x38d) = 0;
    *(undefined8 *)(param_1 + 0x388) = 0;
    *(undefined2 *)(param_1 + 0x395) = 0x304;
    FUN_140a25c5c(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c8b14a FUN_145c8b14a body=57 status=ok
// SIG undefined FUN_145c8b14a(void)

void FUN_145c8b14a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacfa0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacfa0 = FUN_140002ddd(FUN_1465e4cf2,uVar1,L"OakMusicDef");
  }
  return;
}



// FUNCTION 145c8b184 FUN_145c8b184 body=41 status=ok
// SIG undefined FUN_145c8b184(void)

bool FUN_145c8b184(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 == 0) {
    bVar3 = true;
  }
  else {
    iVar1 = FUN_14490d72a(lVar2);
    bVar3 = iVar1 != 1;
  }
  return bVar3;
}



// FUNCTION 145c8b1ae FUN_145c8b1ae body=247 status=ok
// SIG undefined FUN_145c8b1ae(void)

undefined4 * FUN_145c8b1ae(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_14123c256(param_1 + 6,param_2 + 6);
  FUN_14123c256(param_1 + 0xc,param_2 + 0xc);
  FUN_145c8b3cc(param_1 + 0x12,param_2 + 0x12);
  FUN_145c8b4ba(param_1 + 0x26,param_2 + 0x26);
  FUN_145c8b2a6(param_1 + 0x3a,param_2 + 0x3a);
  FUN_145c8b532(param_1 + 0x40,param_2 + 0x40);
  FUN_145c8b5aa(param_1 + 0x54,param_2 + 0x54);
  uVar1 = param_2[0x69];
  uVar2 = param_2[0x6a];
  uVar3 = param_2[0x6b];
  param_1[0x68] = param_2[0x68];
  param_1[0x69] = uVar1;
  param_1[0x6a] = uVar2;
  param_1[0x6b] = uVar3;
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  FUN_145c8b2fa(param_1 + 0x6e,param_2 + 0x6e);
  *(undefined8 *)(param_1 + 0x72) = *(undefined8 *)(param_2 + 0x72);
  uVar1 = param_2[0x75];
  uVar2 = param_2[0x76];
  uVar3 = param_2[0x77];
  param_1[0x74] = param_2[0x74];
  param_1[0x75] = uVar1;
  param_1[0x76] = uVar2;
  param_1[0x77] = uVar3;
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  param_1[0x7c] = param_2[0x7c];
  return param_1;
}



// FUNCTION 145c8b2a6 FUN_145c8b2a6 body=84 status=ok
// SIG undefined FUN_145c8b2a6(void)

longlong * FUN_145c8b2a6(longlong *param_1,longlong *param_2)

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



// FUNCTION 145c8b2fa FUN_145c8b2fa body=93 status=ok
// SIG undefined FUN_145c8b2fa(void)

undefined8 * FUN_145c8b2fa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e20b19(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145c8b358(param_1,iVar1);
      FUN_145c8b69b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145c8b358 FUN_145c8b358 body=115 status=ok
// SIG undefined FUN_145c8b358(void)

void FUN_145c8b358(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}


