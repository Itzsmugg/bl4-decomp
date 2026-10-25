// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148771fad FUN_148771fad body=134 status=ok
// SIG undefined FUN_148771fad(void)

void FUN_148771fad(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148772034 FUN_148772034 body=115 status=ok
// SIG undefined FUN_148772034(void)

void FUN_148772034(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1487720a8 FUN_1487720a8 body=122 status=ok
// SIG undefined FUN_1487720a8(void)

longlong FUN_1487720a8(longlong param_1,longlong param_2)

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
    FUN_148772122(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148772122 FUN_148772122 body=228 status=ok
// SIG undefined FUN_148772122(void)

longlong * FUN_148772122(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140ae0010(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar4 = 0;
      uVar5 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar6 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar4) = *(undefined4 *)(lVar2 + lVar4);
          *(undefined4 *)(lVar3 + 4 + lVar4) = *(undefined4 *)(lVar2 + 4 + lVar4);
        }
        else {
          *(undefined1 *)(lVar3 + lVar4) = *(undefined1 *)(lVar2 + lVar4);
          *(undefined8 *)(lVar3 + 8 + lVar4) = *(undefined8 *)(lVar2 + 8 + lVar4);
          *(undefined4 *)(lVar3 + 0x10 + lVar4) = *(undefined4 *)(lVar2 + 0x10 + lVar4);
          *(undefined8 *)(lVar3 + 0x18 + lVar4) = 0;
          *(undefined8 *)(lVar3 + 0x20 + lVar4) = *(undefined8 *)(lVar2 + 0x20 + lVar4);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148772208 FUN_148772208 body=38 status=ok
// SIG undefined FUN_148772208(void)

undefined8 FUN_148772208(undefined8 param_1,int param_2)

{
  FUN_140adfc44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877222e FUN_14877222e body=55 status=ok
// SIG undefined FUN_14877222e(void)

void FUN_14877222e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b0d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b0d0 = FUN_140002ddd(FUN_14652ac02,uVar1,L"LightProjectileDef");
  }
  return;
}



// FUNCTION 148772266 FUN_148772266 body=118 status=ok
// SIG undefined FUN_148772266(void)

undefined8 FUN_148772266(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb853e8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb853e8,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487722de FUN_1487722de body=28 status=ok
// SIG undefined FUN_1487722de(void)

undefined8 FUN_1487722de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148772354 FUN_148772354 body=59 status=ok
// SIG undefined FUN_148772354(void)

undefined8 FUN_148772354(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487723f6 FUN_1487723f6 body=40 status=ok
// SIG undefined FUN_1487723f6(void)

void FUN_1487723f6(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b3349d0;
  *(byte *)((longlong)param_2 + 10) = *(byte *)((longlong)param_2 + 10) | 6;
  *(undefined1 *)(param_2 + 1) = 6;
  return;
}



// FUNCTION 14877241e FUN_14877241e body=40 status=ok
// SIG undefined FUN_14877241e(void)

void FUN_14877241e(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b3349d0;
  *(byte *)((longlong)param_2 + 10) = *(byte *)((longlong)param_2 + 10) | 6;
  *(undefined1 *)(param_2 + 1) = 6;
  return;
}



// FUNCTION 148772496 FUN_148772496 body=59 status=ok
// SIG undefined FUN_148772496(void)

undefined8 FUN_148772496(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487724dc FUN_1487724dc body=32 status=ok
// SIG undefined FUN_1487724dc(void)

void FUN_1487724dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14877254c FUN_14877254c body=61 status=ok
// SIG undefined FUN_14877254c(void)

void FUN_14877254c(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b334a00;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(byte *)((longlong)param_2 + 10) = *(byte *)((longlong)param_2 + 10) & 0xf9 | 2;
  *(undefined1 *)(param_2 + 1) = 2;
  return;
}



// FUNCTION 14877258a FUN_14877258a body=61 status=ok
// SIG undefined FUN_14877258a(void)

void FUN_14877258a(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b334a00;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(byte *)((longlong)param_2 + 10) = *(byte *)((longlong)param_2 + 10) & 0xf9 | 2;
  *(undefined1 *)(param_2 + 1) = 2;
  return;
}



// FUNCTION 148772618 FUN_148772618 body=59 status=ok
// SIG undefined FUN_148772618(void)

undefined8 FUN_148772618(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877265e FUN_14877265e body=32 status=ok
// SIG undefined FUN_14877265e(void)

void FUN_14877265e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1487726cc FUN_1487726cc body=38 status=ok
// SIG undefined FUN_1487726cc(void)

undefined8 FUN_1487726cc(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877272c FUN_14877272c body=104 status=ok
// SIG undefined FUN_14877272c(void)

undefined1 FUN_14877272c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487727bc FUN_1487727bc body=59 status=ok
// SIG undefined FUN_1487727bc(void)

undefined8 FUN_1487727bc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148772892 FUN_148772892 body=54 status=ok
// SIG undefined FUN_148772892(void)

undefined1 FUN_148772892(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148772990(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 1487728f0 FUN_1487728f0 body=59 status=ok
// SIG undefined FUN_1487728f0(void)

undefined8 FUN_1487728f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148772990 FUN_148772990 body=101 status=ok
// SIG undefined FUN_148772990(void)

longlong * FUN_148772990(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 1487729f6 FUN_1487729f6 body=38 status=ok
// SIG undefined FUN_1487729f6(void)

undefined8 FUN_1487729f6(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148772a1c FUN_148772a1c body=82 status=ok
// SIG undefined FUN_148772a1c(void)

void FUN_148772a1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 3;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0x34001;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_1405c5fa2();
  param_2[7] = &DAT_14cb769e8;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 148772aac FUN_148772aac body=59 status=ok
// SIG undefined FUN_148772aac(void)

undefined8 FUN_148772aac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148772b4a FUN_148772b4a body=83 status=ok
// SIG undefined FUN_148772b4a(void)

void FUN_148772b4a(longlong param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined2 **)(param_1 + 0x30) = &DAT_14a171d50;
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_140115c12(param_1 + 0x40,0);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148772be4 FUN_148772be4 body=59 status=ok
// SIG undefined FUN_148772be4(void)

undefined8 FUN_148772be4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148772c30 FUN_148772c30 body=38 status=ok
// SIG undefined FUN_148772c30(void)

void FUN_148772c30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_140bba396(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 148772cb2 FUN_148772cb2 body=1429 status=ok
// SIG undefined FUN_148772cb2(void)

void FUN_148772cb2(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  void **local_1d0;
  undefined1 local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198;
  undefined **local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined1 local_160 [24];
  undefined1 local_148 [40];
  void *local_120;
  int local_118;
  undefined4 local_114;
  undefined1 local_10d;
  undefined4 local_10c;
  longlong local_108;
  ulonglong uStack_100;
  int local_ec;
  void *local_e8;
  ulonglong uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined **local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0;
  lStack_58 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_d0 = &PTR_FUN_14b023b08;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0x3b9cbb9e;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_d4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d4);
  }
  local_d8 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_e8 = (void *)0x0;
  uStack_e0 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  local_ec = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ec);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ec);
  }
  iVar3 = local_ec;
  local_108 = 0;
  uStack_100 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  plVar7 = &local_108;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_10c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10c);
  }
  local_10d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10d);
  }
  _Src = local_e8;
  uVar2 = local_10c;
  uVar1 = local_10d;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_120 = (void *)0x0;
  lVar6 = (longlong)(int)uStack_e0;
  local_118 = (int)uStack_e0;
  if (lVar6 == 0) {
    local_114 = 0;
  }
  else {
    FUN_1446dd670(&local_120,uStack_e0 & 0xffffffff,0);
    memcpy(local_120,_Src,lVar6 * 2);
  }
  uVar5 = local_d4;
  uVar4 = local_d8;
  local_188 = &PTR_FUN_14b023b08;
  local_180 = local_c8;
  local_178 = local_c0;
  local_170 = 0;
  local_168 = local_b0;
  FUN_1401f3da4(local_160,&local_a8);
  FUN_143c7bde4(local_148,&uStack_90);
  local_1a8 = (undefined4)local_68;
  uStack_1a4 = local_68._4_4_;
  uStack_1a0 = (undefined4)uStack_60;
  uStack_19c = uStack_60._4_4_;
  local_198 = lStack_58;
  if ((lStack_58 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_1c8 = iVar3 != 0;
  local_1b0 = uVar1;
  local_1b8 = uVar2;
  local_1d0 = &local_120;
  local_1d8 = uVar4;
  local_1c0 = plVar7;
  FUN_143db36e2(local_50,&local_1a8,&local_188,uVar5);
  FUN_1487774b7(local_108,uStack_100 & 0xffffffff);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140485912(&local_d0);
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148773248 FUN_148773248 body=435 status=ok
// SIG undefined FUN_148773248(void)

void FUN_148773248(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0xb000;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = local_30;
  local_50 = 0;
  FUN_143db2fa4(local_20,&local_60,local_39,local_48);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487733fc FUN_1487733fc body=609 status=ok
// SIG undefined FUN_1487733fc(void)

void FUN_1487733fc(undefined8 param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_91;
  undefined **local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_90 = &PTR_FUN_14b023b08;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x3b9cbb9e;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  pppuVar1 = *(undefined ****)(param_2 + 0x38);
  local_91 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_91);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_91);
  }
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a8 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  if (pppuVar1 == (undefined ***)0x0) {
    pppuVar1 = &local_90;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_a8;
  FUN_143db32ee(local_28,pppuVar1,local_91,local_a0);
  FUN_140485912(&local_90);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877365e FUN_14877365e body=1096 status=ok
// SIG undefined FUN_14877365e(void)

void FUN_14877365e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198 [13];
  undefined4 local_12c;
  undefined8 local_128 [2];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_99;
  undefined **local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_98 = &PTR_FUN_14b023b08;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x3b9cbb9e;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  pppuVar2 = *(undefined ****)(param_2 + 0x38);
  local_99 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  local_a8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_c0 = 0;
  local_b8 = 0xc000;
  local_b0 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c8 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_128[0] = 0;
  local_128[1] = 0;
  local_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0x3ff00000;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e4 = 0x3ff00000;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_12c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_12c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_12c);
  }
  local_1c0 = local_12c;
  if (pppuVar2 == (undefined ***)0x0) {
    pppuVar2 = &local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1c8 = local_198;
  puVar3 = local_128;
  puVar4 = local_1c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_1d8 = &local_1b0;
  local_1b0 = local_c0;
  local_1a8 = local_b8;
  local_1a0 = 0;
  local_1d0 = local_c8;
  FUN_143db2996(local_30,pppuVar2,local_99,local_a8);
  FUN_140485912(&local_98);
  if ((local_28 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148773aa8 FUN_148773aa8 body=535 status=ok
// SIG undefined FUN_148773aa8(void)

void FUN_148773aa8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  local_60 = local_30;
  local_58 = 0;
  local_78 = local_50;
  FUN_1488d57fe(local_20,&local_68,local_39,local_48);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148773cc0 FUN_148773cc0 body=1019 status=ok
// SIG undefined FUN_148773cc0(void)

void FUN_148773cc0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_138 [13];
  undefined4 local_cc;
  undefined8 local_c8 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_60 = 0;
  local_58 = 0xc000;
  local_50 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0x3ff00000;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  local_cc = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_cc);
  }
  local_170 = local_cc;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_178 = local_138;
  puVar2 = local_c8;
  puVar3 = local_178;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_188 = &local_150;
  local_150 = local_60;
  local_148 = local_58;
  local_140 = 0;
  local_168 = local_38;
  local_160 = local_30;
  local_158 = 0;
  local_180 = local_68;
  FUN_1488d56c4(local_20,&local_168,local_39,local_48);
  if ((local_18 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487740dc FUN_1487740dc body=356 status=ok
// SIG undefined FUN_1487740dc(void)

void FUN_1487740dc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_28 = 0x304b452c;
  local_20 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_30;
  local_50 = local_28;
  local_48 = 0;
  FUN_1488e6f0e(&local_58,local_38,local_40);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148774242 FUN_148774242 body=280 status=ok
// SIG undefined FUN_148774242(void)

void FUN_148774242(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_30 = 0x304b452c;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_50 = local_30;
  local_48 = 0;
  uVar1 = FUN_1488e70a6(&local_58,local_40);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148774362 FUN_148774362 body=232 status=ok
// SIG undefined FUN_148774362(void)

void FUN_148774362(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
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
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488e6fea(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148774512 FUN_148774512 body=62 status=ok
// SIG undefined FUN_148774512(void)

undefined8 FUN_148774512(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141844d90(param_2,param_3);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148774578 FUN_148774578 body=59 status=ok
// SIG undefined FUN_148774578(void)

undefined8 FUN_148774578(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148774642 FUN_148774642 body=97 status=ok
// SIG undefined FUN_148774642(void)

undefined8 FUN_148774642(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_4 != 0) {
    puVar5 = (undefined4 *)(param_3 + 0x40);
    puVar4 = (undefined4 *)(param_2 + 0x40);
    do {
      FUN_141844d90(puVar4 + -0xe,puVar5 + -0xe);
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar5 + -8);
      FUN_141414bf6(puVar4 + -6,puVar5 + -6);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *puVar4 = *puVar5;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      puVar4[4] = puVar5[4];
      puVar5 = puVar5 + 0x16;
      puVar4 = puVar4 + 0x16;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487746cc FUN_1487746cc body=59 status=ok
// SIG undefined FUN_1487746cc(void)

undefined8 FUN_1487746cc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148774800 FUN_148774800 body=59 status=ok
// SIG undefined FUN_148774800(void)

undefined8 FUN_148774800(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487748a0 FUN_1487748a0 body=34 status=ok
// SIG undefined FUN_1487748a0(void)

undefined8 FUN_1487748a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14877491e FUN_14877491e body=59 status=ok
// SIG undefined FUN_14877491e(void)

undefined8 FUN_14877491e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487749be FUN_1487749be body=55 status=ok
// SIG undefined FUN_1487749be(void)

void FUN_1487749be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b478 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b478 = FUN_140002ddd(FUN_14652bc1d,uVar1,L"PlayerSpawningLootContextResolver");
  }
  return;
}



// FUNCTION 148774a52 FUN_148774a52 body=54 status=ok
// SIG undefined FUN_148774a52(void)

undefined1 FUN_148774a52(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148774b6a(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148774ab0 FUN_148774ab0 body=59 status=ok
// SIG undefined FUN_148774ab0(void)

undefined8 FUN_148774ab0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148774af6 FUN_148774af6 body=38 status=ok
// SIG undefined FUN_148774af6(void)

void FUN_148774af6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148774b6a FUN_148774b6a body=70 status=ok
// SIG undefined FUN_148774b6a(void)

undefined1 * FUN_148774b6a(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) ||
     (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  return param_1;
}



// FUNCTION 148774bd0 FUN_148774bd0 body=142 status=ok
// SIG undefined FUN_148774bd0(void)

undefined8 FUN_148774bd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_140e8aa92();
      FUN_140d02432(param_2 + lVar1 + 0x70,param_3 + lVar1 + 0x70);
      FUN_140d02432(param_2 + lVar1 + 0xc0,param_3 + lVar1 + 0xc0);
      lVar1 = lVar1 + 0x110;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148774c86 FUN_148774c86 body=59 status=ok
// SIG undefined FUN_148774c86(void)

undefined8 FUN_148774c86(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148774cd2 FUN_148774cd2 body=39 status=ok
// SIG undefined FUN_148774cd2(void)

void FUN_148774cd2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_140485912(param_2 + 8);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 148774da6 FUN_148774da6 body=104 status=ok
// SIG undefined FUN_148774da6(void)

undefined8 FUN_148774da6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
    do {
      *(undefined8 *)(param_2 + -0x58) = *(undefined8 *)(param_3 + -0x58);
      FUN_140d02432(param_2 + -0x50,param_3 + -0x50);
      FUN_148774f6a(param_2,param_3);
      FUN_144983130(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148774e36 FUN_148774e36 body=59 status=ok
// SIG undefined FUN_148774e36(void)

undefined8 FUN_148774e36(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148774e82 FUN_148774e82 body=38 status=ok
// SIG undefined FUN_148774e82(void)

void FUN_148774e82(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_148774eea(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148774eea FUN_148774eea body=128 status=ok
// SIG undefined FUN_148774eea(void)

void FUN_148774eea(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x90) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x88)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140d12bca(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148774f6a FUN_148774f6a body=93 status=ok
// SIG undefined FUN_148774f6a(void)

undefined8 * FUN_148774f6a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d12bca(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148774fc8(param_1,iVar1);
      FUN_14877503a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148774fc8 FUN_148774fc8 body=114 status=ok
// SIG undefined FUN_148774fc8(void)

void FUN_148774fc8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x110,8);
    iVar2 = (int)(uVar1 / 0x110);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x110,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14877503a FUN_14877503a body=60 status=ok
// SIG undefined FUN_14877503a(void)

void FUN_14877503a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148775076(param_1,param_2);
    param_1 = param_1 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return;
}



// FUNCTION 148775076 FUN_148775076 body=277 status=ok
// SIG undefined FUN_148775076(void)

undefined8 * FUN_148775076(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = &PTR_FUN_14b023b08;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  FUN_1401f3da4(param_1 + 6,param_2 + 6);
  FUN_143c7bde4(param_1 + 9,param_2 + 9);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  FUN_144a7f96e(param_1 + 0xf,param_2 + 0xf);
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  param_1[0x14] = param_2[0x14];
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_144a7f96e(param_1 + 0x19,param_2 + 0x19);
  uVar1 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar1;
  param_1[0x1e] = param_2[0x1e];
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  return param_1;
}



// FUNCTION 1487751c6 FUN_1487751c6 body=88 status=ok
// SIG undefined FUN_1487751c6(void)

undefined1 FUN_1487751c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_141289ada(param_2 + -0x20,param_3 + -0x20);
      FUN_1487752ec(param_2 + -0x10,param_3 + -0x10);
      FUN_1487673fa(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148775246 FUN_148775246 body=59 status=ok
// SIG undefined FUN_148775246(void)

undefined8 FUN_148775246(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877528c FUN_14877528c body=32 status=ok
// SIG undefined FUN_14877528c(void)

void FUN_14877528c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_140dc7602(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1487752ec FUN_1487752ec body=93 status=ok
// SIG undefined FUN_1487752ec(void)

undefined8 * FUN_1487752ec(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140dc7696(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14877534a(param_1,iVar1);
      FUN_1487753bd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14877534a FUN_14877534a body=115 status=ok
// SIG undefined FUN_14877534a(void)

void FUN_14877534a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1487753bd FUN_1487753bd body=60 status=ok
// SIG undefined FUN_1487753bd(void)

void FUN_1487753bd(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1487753fa(param_1,param_2);
    param_1 = param_1 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return;
}



// FUNCTION 1487753fa FUN_1487753fa body=173 status=ok
// SIG undefined FUN_1487753fa(void)

undefined8 * FUN_1487753fa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  FUN_144a7f96e(param_1 + 2,param_2 + 2);
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  param_1[7] = param_2[7];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  uVar2 = param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_148774fc8(param_1 + 0xb,iVar1,0);
    FUN_14877503a(param_1[0xb],uVar2,iVar1);
  }
  FUN_14034cca6(param_1 + 0xd,param_2 + 0xd);
  return param_1;
}



// FUNCTION 1487754a8 FUN_1487754a8 body=28 status=ok
// SIG undefined FUN_1487754a8(void)

undefined8 FUN_1487754a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14877550a FUN_14877550a body=89 status=ok
// SIG undefined FUN_14877550a(void)

undefined8 FUN_14877550a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_141289ada(param_2 + -0x20,param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_148727dd0(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14877558c FUN_14877558c body=59 status=ok
// SIG undefined FUN_14877558c(void)

undefined8 FUN_14877558c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487755d2 FUN_1487755d2 body=43 status=ok
// SIG undefined FUN_1487755d2(void)

void FUN_1487755d2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148775682 FUN_148775682 body=142 status=ok
// SIG undefined FUN_148775682(void)

undefined8 FUN_148775682(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      lVar1 = param_2 + lVar4;
      lVar2 = param_3 + lVar4;
      FUN_141289ada(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined8 *)(lVar2 + 0x1d);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar1 + 0x1d) = uVar3;
      FUN_148727dd0(param_2 + lVar4 + 0x28,param_3 + lVar4 + 0x28);
      FUN_1487757fe(param_2 + lVar4 + 0x40,param_3 + lVar4 + 0x40);
      lVar4 = lVar4 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148775738 FUN_148775738 body=59 status=ok
// SIG undefined FUN_148775738(void)

undefined8 FUN_148775738(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148775784 FUN_148775784 body=40 status=ok
// SIG undefined FUN_148775784(void)

void FUN_148775784(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_148775974(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 1487757fe FUN_1487757fe body=122 status=ok
// SIG undefined FUN_1487757fe(void)

longlong FUN_1487757fe(longlong param_1,longlong param_2)

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
    FUN_148775878(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148775878 FUN_148775878 body=121 status=ok
// SIG undefined FUN_148775878(void)

undefined8 * FUN_148775878(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1487758f2(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 1487758f2 FUN_1487758f2 body=128 status=ok
// SIG undefined FUN_1487758f2(void)

void FUN_1487758f2(longlong param_1,int param_2)

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
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 148775974 FUN_148775974 body=81 status=ok
// SIG undefined FUN_148775974(void)

void FUN_148775974(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b33eb20;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_148775a2a(param_1 + 8);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1487759c6 FUN_1487759c6 body=43 status=ok
// SIG undefined FUN_1487759c6(void)

undefined8 FUN_1487759c6(undefined8 param_1,int param_2)

{
  FUN_148775974();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1487759f2 FUN_1487759f2 body=55 status=ok
// SIG undefined FUN_1487759f2(void)

void FUN_1487759f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b580 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b580 = FUN_140002ddd(FUN_14652c141,uVar1,L"LootConfigSelectorDef");
  }
  return;
}



// FUNCTION 148775a2a FUN_148775a2a body=54 status=ok
// SIG undefined FUN_148775a2a(void)

void FUN_148775a2a(longlong *param_1)

{
  FUN_1487758f2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148775aa8 FUN_148775aa8 body=59 status=ok
// SIG undefined FUN_148775aa8(void)

undefined8 FUN_148775aa8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148775b68 FUN_148775b68 body=144 status=ok
// SIG undefined FUN_148775b68(void)

undefined8 FUN_148775b68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      FUN_141289ada(param_2 + lVar3 + 8,param_3 + lVar3 + 8);
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_140d02432(lVar1 + 0x18,lVar2 + 0x18);
      *(undefined2 *)(lVar1 + 0x68) = *(undefined2 *)(lVar2 + 0x68);
      *(undefined1 *)(lVar1 + 0x6a) = *(undefined1 *)(lVar2 + 0x6a);
      FUN_140d02432(param_2 + lVar3 + 0x70,param_3 + lVar3 + 0x70);
      lVar3 = lVar3 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148775c20 FUN_148775c20 body=59 status=ok
// SIG undefined FUN_148775c20(void)

undefined8 FUN_148775c20(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148775c6c FUN_148775c6c body=49 status=ok
// SIG undefined FUN_148775c6c(void)

void FUN_148775c6c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148775cec FUN_148775cec body=57 status=ok
// SIG undefined FUN_148775cec(void)

void FUN_148775cec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b5c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b5c8 = FUN_140002ddd(FUN_14652c295,uVar1,L"ManagedActorDef");
  }
  return;
}



// FUNCTION 148775d44 FUN_148775d44 body=63 status=ok
// SIG undefined FUN_148775d44(void)

undefined1 FUN_148775d44(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148775e6e(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 148775dac FUN_148775dac body=59 status=ok
// SIG undefined FUN_148775dac(void)

undefined8 FUN_148775dac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148775df8 FUN_148775df8 body=40 status=ok
// SIG undefined FUN_148775df8(void)

void FUN_148775df8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_145a23ee0(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 148775e6e FUN_148775e6e body=211 status=ok
// SIG undefined FUN_148775e6e(void)

longlong FUN_148775e6e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  FUN_147f3153e(param_1 + 0x48,param_2 + 0x48);
  FUN_147f3153e(param_1 + 0x58,param_2 + 0x58);
  FUN_148775f42(param_1 + 0x68,param_2 + 0x68);
  FUN_1458170ae(param_1 + 0x78,param_2 + 0x78);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  FUN_147f3159c(param_1 + 0xb0,param_2 + 0xb0);
  FUN_147f3159c(param_1 + 0xc0,param_2 + 0xc0);
  FUN_147f3159c(param_1 + 0xd0,param_2 + 0xd0);
  return param_1;
}



// FUNCTION 148775f42 FUN_148775f42 body=95 status=ok
// SIG undefined FUN_148775f42(void)

undefined8 * FUN_148775f42(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a23fab(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148775fa2(param_1,iVar1);
      FUN_148776015(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148775fa2 FUN_148775fa2 body=115 status=ok
// SIG undefined FUN_148775fa2(void)

void FUN_148775fa2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148776015 FUN_148776015 body=134 status=ok
// SIG undefined FUN_148776015(void)

void FUN_148776015(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14877609c FUN_14877609c body=57 status=ok
// SIG undefined FUN_14877609c(void)

void FUN_14877609c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b648 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b648 = FUN_140002ddd(FUN_14652c4e1,uVar1,L"GbxGlobalsMantle");
  }
  return;
}



// FUNCTION 148776136 FUN_148776136 body=120 status=ok
// SIG undefined FUN_148776136(void)

undefined8 FUN_148776136(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined1 *)(param_3 + lVar7);
      lVar2 = param_2 + 0x20 + lVar7;
      *(undefined1 *)(lVar2 + -0x20) = *puVar1;
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(puVar1 + 8);
      uVar4 = *(undefined4 *)(puVar1 + 0x14);
      uVar5 = *(undefined4 *)(puVar1 + 0x18);
      uVar6 = *(undefined4 *)(puVar1 + 0x1c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 0x10);
      *(undefined4 *)(lVar2 + -0xc) = uVar4;
      *(undefined4 *)(lVar2 + -8) = uVar5;
      *(undefined4 *)(lVar2 + -4) = uVar6;
      FUN_144a787a6(lVar2,puVar1 + 0x20);
      uVar3 = *(undefined8 *)(puVar1 + 0x35);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x30);
      *(undefined8 *)(lVar2 + 0x15) = uVar3;
      lVar7 = lVar7 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487761d6 FUN_1487761d6 body=59 status=ok
// SIG undefined FUN_1487761d6(void)

undefined8 FUN_1487761d6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877621c FUN_14877621c body=38 status=ok
// SIG undefined FUN_14877621c(void)

void FUN_14877621c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1487762b0 FUN_1487762b0 body=97 status=ok
// SIG undefined FUN_1487762b0(void)

undefined8 FUN_1487762b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_1487763f0(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      uVar4 = *(undefined4 *)(param_3 + 0x20);
      uVar5 = *(undefined4 *)(param_3 + 0x24);
      uVar6 = *(undefined4 *)(param_3 + 0x28);
      uVar7 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      *(undefined4 *)(param_2 + 0x20) = uVar4;
      *(undefined4 *)(param_2 + 0x24) = uVar5;
      *(undefined4 *)(param_2 + 0x28) = uVar6;
      *(undefined4 *)(param_2 + 0x2c) = uVar7;
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14877633a FUN_14877633a body=59 status=ok
// SIG undefined FUN_14877633a(void)

undefined8 FUN_14877633a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148776380 FUN_148776380 body=34 status=ok
// SIG undefined FUN_148776380(void)

void FUN_148776380(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1458897f2(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1487763f0 FUN_1487763f0 body=95 status=ok
// SIG undefined FUN_1487763f0(void)

undefined8 * FUN_1487763f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145889839(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148776450(param_1,iVar1);
      FUN_1487764b2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148776450 FUN_148776450 body=98 status=ok
// SIG undefined FUN_148776450(void)

void FUN_148776450(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1487764b2 FUN_1487764b2 body=52 status=ok
// SIG undefined FUN_1487764b2(void)

void FUN_1487764b2(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1487764e6(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 1487764e6 FUN_1487764e6 body=135 status=ok
// SIG undefined FUN_1487764e6(void)

undefined1 * FUN_1487764e6(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x20,iVar1,0);
    memcpy(*(void **)(param_1 + 0x20),_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  return param_1;
}



// FUNCTION 14877656e FUN_14877656e body=57 status=ok
// SIG undefined FUN_14877656e(void)

void FUN_14877656e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b6c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b6c0 = FUN_140002ddd(FUN_14652c691,uVar1,L"MantleDef");
  }
  return;
}



// FUNCTION 1487765c6 FUN_1487765c6 body=63 status=ok
// SIG undefined FUN_1487765c6(void)

undefined1 FUN_1487765c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148776754(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 14877662e FUN_14877662e body=59 status=ok
// SIG undefined FUN_14877662e(void)

undefined8 FUN_14877662e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877667a FUN_14877667a body=38 status=ok
// SIG undefined FUN_14877667a(void)

void FUN_14877667a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_1487766e6(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 1487766e6 FUN_1487766e6 body=110 status=ok
// SIG undefined FUN_1487766e6(void)

void FUN_1487766e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b33e250;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148776754 FUN_148776754 body=255 status=ok
// SIG undefined FUN_148776754(void)

longlong FUN_148776754(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_140d02432(param_1 + 0x18,param_2 + 0x18);
  FUN_140d02432(param_1 + 0x68,param_2 + 0x68);
  plVar1 = *(longlong **)(param_2 + 0xb8);
  plVar2 = *(longlong **)(param_1 + 0xb8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xb8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  plVar1 = *(longlong **)(param_2 + 200);
  plVar2 = *(longlong **)(param_1 + 200);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 200) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  FUN_144a787a6(param_1 + 0xe0,param_2 + 0xe0);
  FUN_142b160e2(param_1 + 0xf0,param_2 + 0xf0);
  FUN_142b160e2(param_1 + 0xf8,param_2 + 0xf8);
  return param_1;
}



// FUNCTION 1487768b8 FUN_1487768b8 body=78 status=ok
// SIG undefined FUN_1487768b8(void)

undefined8 FUN_1487768b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1447715ec();
      lVar2 = lVar2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14877692e FUN_14877692e body=59 status=ok
// SIG undefined FUN_14877692e(void)

undefined8 FUN_14877692e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148776974 FUN_148776974 body=40 status=ok
// SIG undefined FUN_148776974(void)

void FUN_148776974(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1487769ec FUN_1487769ec body=37 status=ok
// SIG undefined FUN_1487769ec(void)

void FUN_1487769ec(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x188);
  FUN_143c7f6c0(param_2);
  return;
}



// FUNCTION 148776a3e FUN_148776a3e body=63 status=ok
// SIG undefined FUN_148776a3e(void)

undefined1 FUN_148776a3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140ff2152(param_2,param_3);
    param_3 = param_3 + 0x188;
    param_2 = param_2 + 0x188;
  }
  return 1;
}



// FUNCTION 148776aa6 FUN_148776aa6 body=59 status=ok
// SIG undefined FUN_148776aa6(void)

undefined8 FUN_148776aa6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148776af2 FUN_148776af2 body=38 status=ok
// SIG undefined FUN_148776af2(void)

void FUN_148776af2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x188) == '\x01') {
    FUN_140fe8226(param_2);
    *(undefined1 *)(param_2 + 0x188) = 0;
  }
  return;
}



// FUNCTION 148776b66 FUN_148776b66 body=43 status=ok
// SIG undefined FUN_148776b66(void)

undefined8 FUN_148776b66(undefined8 param_1,int param_2)

{
  FUN_140fe8226();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 148776c4e FUN_148776c4e body=59 status=ok
// SIG undefined FUN_148776c4e(void)

undefined8 FUN_148776c4e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148776d62 FUN_148776d62 body=125 status=ok
// SIG undefined FUN_148776d62(void)

undefined8 FUN_148776d62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar11);
      lVar2 = param_2 + 0x28 + lVar11;
      *(undefined4 *)(lVar2 + -8) = puVar1[8];
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      uVar10 = puVar1[7];
      *(undefined4 *)(lVar2 + -0x18) = puVar1[4];
      *(undefined4 *)(lVar2 + -0x14) = uVar8;
      *(undefined4 *)(lVar2 + -0x10) = uVar9;
      *(undefined4 *)(lVar2 + -0xc) = uVar10;
      *(undefined4 *)(lVar2 + -0x28) = uVar4;
      *(undefined4 *)(lVar2 + -0x24) = uVar5;
      *(undefined4 *)(lVar2 + -0x20) = uVar6;
      *(undefined4 *)(lVar2 + -0x1c) = uVar7;
      FUN_140d02432(lVar2,puVar1 + 10);
      uVar3 = *(undefined8 *)((longlong)puVar1 + 0x7d);
      *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(puVar1 + 0x1e);
      *(undefined8 *)(lVar2 + 0x55) = uVar3;
      lVar11 = lVar11 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148776e08 FUN_148776e08 body=59 status=ok
// SIG undefined FUN_148776e08(void)

undefined8 FUN_148776e08(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148776f3a FUN_148776f3a body=59 status=ok
// SIG undefined FUN_148776f3a(void)

undefined8 FUN_148776f3a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148777010 FUN_148777010 body=63 status=ok
// SIG undefined FUN_148777010(void)

undefined1 FUN_148777010(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148777148(param_2,param_3);
    param_3 = param_3 + 0x2d0;
    param_2 = param_2 + 0x2d0;
  }
  return 1;
}



// FUNCTION 148777078 FUN_148777078 body=59 status=ok
// SIG undefined FUN_148777078(void)

undefined8 FUN_148777078(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487770c4 FUN_1487770c4 body=49 status=ok
// SIG undefined FUN_1487770c4(void)

void FUN_1487770c4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5a) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0x5a) = 0;
  }
  return;
}



// FUNCTION 148777148 FUN_148777148 body=833 status=ok
// SIG undefined FUN_148777148(void)

longlong FUN_148777148(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  if ((*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) ||
     (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20))) {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  uVar4 = *(undefined4 *)(param_2 + 0x44);
  uVar5 = *(undefined4 *)(param_2 + 0x48);
  uVar6 = *(undefined4 *)(param_2 + 0x4c);
  uVar7 = *(undefined4 *)(param_2 + 0x50);
  uVar8 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  *(undefined4 *)(param_1 + 0x50) = uVar7;
  *(undefined4 *)(param_1 + 0x54) = uVar8;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  FUN_140d02432(param_1 + 0x60,param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0xb5);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb5) = uVar2;
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  uVar1 = *(undefined4 *)(param_2 + 0xcc);
  uVar3 = *(undefined4 *)(param_2 + 0xd0);
  uVar4 = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  *(undefined4 *)(param_1 + 0xd0) = uVar3;
  *(undefined4 *)(param_1 + 0xd4) = uVar4;
  FUN_140d02432(param_1 + 0xf0,param_2 + 0xf0);
  uVar2 = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x145) = *(undefined8 *)(param_2 + 0x145);
  *(undefined8 *)(param_1 + 0x140) = uVar2;
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  uVar2 = *(undefined8 *)(param_2 + 0x150);
  uVar9 = *(undefined8 *)(param_2 + 0x158);
  uVar10 = *(undefined8 *)(param_2 + 0x160);
  uVar11 = *(undefined8 *)(param_2 + 0x168);
  uVar12 = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x178) = uVar12;
  *(undefined8 *)(param_1 + 0x160) = uVar10;
  *(undefined8 *)(param_1 + 0x168) = uVar11;
  *(undefined8 *)(param_1 + 0x150) = uVar2;
  *(undefined8 *)(param_1 + 0x158) = uVar9;
  if ((*(longlong *)(param_1 + 0x188) != *(longlong *)(param_2 + 0x188)) ||
     (*(int *)(param_1 + 400) != *(int *)(param_2 + 400))) {
    *(longlong *)(param_1 + 0x188) = *(longlong *)(param_2 + 0x188);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  if ((*(longlong *)(param_1 + 0x1a0) != *(longlong *)(param_2 + 0x1a0)) ||
     (*(int *)(param_1 + 0x1a8) != *(int *)(param_2 + 0x1a8))) {
    *(longlong *)(param_1 + 0x1a0) = *(longlong *)(param_2 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  if ((*(longlong *)(param_1 + 0x1b8) != *(longlong *)(param_2 + 0x1b8)) ||
     (*(int *)(param_1 + 0x1c0) != *(int *)(param_2 + 0x1c0))) {
    *(longlong *)(param_1 + 0x1b8) = *(longlong *)(param_2 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  if ((*(longlong *)(param_1 + 0x1d8) != *(longlong *)(param_2 + 0x1d8)) ||
     (*(int *)(param_1 + 0x1e0) != *(int *)(param_2 + 0x1e0))) {
    *(longlong *)(param_1 + 0x1d8) = *(longlong *)(param_2 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  if ((*(longlong *)(param_1 + 0x1f8) != *(longlong *)(param_2 + 0x1f8)) ||
     (*(int *)(param_1 + 0x200) != *(int *)(param_2 + 0x200))) {
    *(longlong *)(param_1 + 0x1f8) = *(longlong *)(param_2 + 0x1f8);
    *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
    *(undefined8 *)(param_1 + 0x208) = 0;
  }
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  if ((*(longlong *)(param_1 + 0x230) != *(longlong *)(param_2 + 0x230)) ||
     (*(int *)(param_1 + 0x238) != *(int *)(param_2 + 0x238))) {
    *(longlong *)(param_1 + 0x230) = *(longlong *)(param_2 + 0x230);
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x248);
  uVar9 = *(undefined8 *)(param_2 + 0x250);
  uVar10 = *(undefined8 *)(param_2 + 0x260);
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_2 + 600);
  *(undefined8 *)(param_1 + 0x260) = uVar10;
  *(undefined8 *)(param_1 + 0x248) = uVar2;
  *(undefined8 *)(param_1 + 0x250) = uVar9;
  puVar14 = (undefined8 *)(param_2 + 0x268);
  puVar15 = (undefined8 *)(param_1 + 0x268);
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
  return param_1;
}



// FUNCTION 14877748a FUN_14877748a body=28 status=ok
// SIG undefined FUN_14877748a(void)

undefined8 FUN_14877748a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1487774b7 FUN_1487774b7 body=47 status=ok
// SIG undefined FUN_1487774b7(void)

void FUN_1487774b7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148777526 FUN_148777526 body=45 status=ok
// SIG undefined FUN_148777526(void)

longlong FUN_148777526(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877755a FUN_14877755a body=23 status=ok
// SIG undefined FUN_14877755a(void)

undefined8 * FUN_14877755a(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_2;
  for (lVar1 = 0xc; param_1 = param_1 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    puVar2 = puVar2 + 1;
  }
  return param_2;
}



// FUNCTION 1487775ba FUN_1487775ba body=59 status=ok
// SIG undefined FUN_1487775ba(void)

undefined8 FUN_1487775ba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148777688 FUN_148777688 body=54 status=ok
// SIG undefined FUN_148777688(void)

undefined1 FUN_148777688(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1401f3db8(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 1487776e6 FUN_1487776e6 body=59 status=ok
// SIG undefined FUN_1487776e6(void)

undefined8 FUN_1487776e6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877772c FUN_14877772c body=64 status=ok
// SIG undefined FUN_14877772c(void)

void FUN_14877772c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14877783a FUN_14877783a body=59 status=ok
// SIG undefined FUN_14877783a(void)

undefined8 FUN_14877783a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487778da FUN_1487778da body=29 status=ok
// SIG undefined FUN_1487778da(void)

undefined8 FUN_1487778da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487778f8 FUN_1487778f8 body=55 status=ok
// SIG undefined FUN_1487778f8(void)

void FUN_1487778f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b7f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b7f8 = FUN_140002ddd(FUN_14652d093,uVar1,L"MissionActionCondition");
  }
  return;
}



// FUNCTION 148777994 FUN_148777994 body=59 status=ok
// SIG undefined FUN_148777994(void)

undefined8 FUN_148777994(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487779da FUN_1487779da body=34 status=ok
// SIG undefined FUN_1487779da(void)

void FUN_1487779da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1458508ea(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148777a4a FUN_148777a4a body=57 status=ok
// SIG undefined FUN_148777a4a(void)

void FUN_148777a4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b810 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b810 = FUN_140002ddd(FUN_14652d12b,uVar1,L"MissionActionCondition_Attribute");
  }
  return;
}



// FUNCTION 148777adc FUN_148777adc body=59 status=ok
// SIG undefined FUN_148777adc(void)

undefined8 FUN_148777adc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148777b22 FUN_148777b22 body=32 status=ok
// SIG undefined FUN_148777b22(void)

void FUN_148777b22(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_148777b8c(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148777b8c FUN_148777b8c body=56 status=ok
// SIG undefined FUN_148777b8c(void)

void FUN_148777b8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b343e80;
  FUN_1400fd473(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148777c7e FUN_148777c7e body=59 status=ok
// SIG undefined FUN_148777c7e(void)

undefined8 FUN_148777c7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148777d1e FUN_148777d1e body=57 status=ok
// SIG undefined FUN_148777d1e(void)

void FUN_148777d1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b870 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b870 = FUN_140002ddd(FUN_14652d27f,uVar1,L"MissionActionCondition_Encounter");
  }
  return;
}



// FUNCTION 148777dac FUN_148777dac body=59 status=ok
// SIG undefined FUN_148777dac(void)

undefined8 FUN_148777dac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148777df2 FUN_148777df2 body=32 status=ok
// SIG undefined FUN_148777df2(void)

void FUN_148777df2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_148777e54(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148777e54 FUN_148777e54 body=56 status=ok
// SIG undefined FUN_148777e54(void)

void FUN_148777e54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3442b0;
  FUN_1447cd778(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148777f1c FUN_148777f1c body=59 status=ok
// SIG undefined FUN_148777f1c(void)

undefined8 FUN_148777f1c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148777fbc FUN_148777fbc body=29 status=ok
// SIG undefined FUN_148777fbc(void)

undefined8 FUN_148777fbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148777fda FUN_148777fda body=55 status=ok
// SIG undefined FUN_148777fda(void)

void FUN_148777fda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b8a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b8a0 = FUN_140002ddd(FUN_14652d375,uVar1,L"MissionActionCondition_IsReplayActive");
  }
  return;
}



// FUNCTION 148778066 FUN_148778066 body=59 status=ok
// SIG undefined FUN_148778066(void)

undefined8 FUN_148778066(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148778102 FUN_148778102 body=57 status=ok
// SIG undefined FUN_148778102(void)

void FUN_148778102(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b8b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b8b8 = FUN_140002ddd(FUN_14652d40b,uVar1,L"MissionActionCondition_MissionChoice");
  }
  return;
}



// FUNCTION 148778194 FUN_148778194 body=59 status=ok
// SIG undefined FUN_148778194(void)

undefined8 FUN_148778194(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877827c FUN_14877827c body=59 status=ok
// SIG undefined FUN_14877827c(void)

undefined8 FUN_14877827c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877838a FUN_14877838a body=59 status=ok
// SIG undefined FUN_14877838a(void)

undefined8 FUN_14877838a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148778426 FUN_148778426 body=57 status=ok
// SIG undefined FUN_148778426(void)

void FUN_148778426(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b900 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b900 = FUN_140002ddd(FUN_14652d560,uVar1,L"MissionActionCondition_PreCompletionFilter")
    ;
  }
  return;
}



// FUNCTION 14877850a FUN_14877850a body=59 status=ok
// SIG undefined FUN_14877850a(void)

undefined8 FUN_14877850a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487785aa FUN_1487785aa body=57 status=ok
// SIG undefined FUN_1487785aa(void)

void FUN_1487785aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b930 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b930 = FUN_140002ddd(FUN_14652d627,uVar1,L"MissionActionCondition_Spawner");
  }
  return;
}



// FUNCTION 148778610 FUN_148778610 body=75 status=ok
// SIG undefined FUN_148778610(void)

undefined1 FUN_148778610(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_1406b39e6(param_2 + -0x10,param_3 + -0x10);
      FUN_1406b3a44(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148778684 FUN_148778684 body=59 status=ok
// SIG undefined FUN_148778684(void)

undefined8 FUN_148778684(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487786ca FUN_1487786ca body=32 status=ok
// SIG undefined FUN_1487786ca(void)

void FUN_1487786ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_140170ace(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148778794 FUN_148778794 body=85 status=ok
// SIG undefined FUN_148778794(void)

undefined8 FUN_148778794(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_140427308(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487787ea FUN_1487787ea body=39 status=ok
// SIG undefined FUN_1487787ea(void)

undefined8
FUN_1487787ea(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14877882e FUN_14877882e body=59 status=ok
// SIG undefined FUN_14877882e(void)

undefined8 FUN_14877882e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148778874 FUN_148778874 body=32 status=ok
// SIG undefined FUN_148778874(void)

void FUN_148778874(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14118d138(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1487788ec FUN_1487788ec body=38 status=ok
// SIG undefined FUN_1487788ec(void)

undefined8 FUN_1487788ec(undefined8 param_1,int param_2)

{
  FUN_14118d138();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148778912 FUN_148778912 body=55 status=ok
// SIG undefined FUN_148778912(void)

void FUN_148778912(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b978 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b978 = FUN_140002ddd(FUN_14185dcfe,uVar1,L"MissionActionTypeBase");
  }
  return;
}



// FUNCTION 148778a20 FUN_148778a20 body=144 status=ok
// SIG undefined FUN_148778a20(void)

undefined8 FUN_148778a20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_140427308(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      *(undefined8 *)(param_2 + 0x18 + lVar6) = *(undefined8 *)(param_3 + 0x18 + lVar6);
      FUN_140d02432(param_2 + 0x20 + lVar6,param_3 + 0x20 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x70 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x70 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined4 *)(param_2 + 0x80 + lVar6) = *(undefined4 *)(param_3 + 0x80 + lVar6);
      lVar6 = lVar6 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148778ab0 FUN_148778ab0 body=39 status=ok
// SIG undefined FUN_148778ab0(void)

undefined8
FUN_148778ab0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 148778af4 FUN_148778af4 body=59 status=ok
// SIG undefined FUN_148778af4(void)

undefined8 FUN_148778af4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148778b40 FUN_148778b40 body=38 status=ok
// SIG undefined FUN_148778b40(void)

void FUN_148778b40(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_14118d138(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148778bbe FUN_148778bbe body=38 status=ok
// SIG undefined FUN_148778bbe(void)

undefined8 FUN_148778bbe(undefined8 param_1,int param_2)

{
  FUN_14118d138();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148778be4 FUN_148778be4 body=55 status=ok
// SIG undefined FUN_148778be4(void)

void FUN_148778be4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b9a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b9a8 = FUN_140002ddd(FUN_14652d785,uVar1,L"MissionActionType_AddToTimer");
  }
  return;
}



// FUNCTION 148778c7c FUN_148778c7c body=39 status=ok
// SIG undefined FUN_148778c7c(void)

undefined8
FUN_148778c7c(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 148778cc0 FUN_148778cc0 body=59 status=ok
// SIG undefined FUN_148778cc0(void)

undefined8 FUN_148778cc0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148778d06 FUN_148778d06 body=32 status=ok
// SIG undefined FUN_148778d06(void)

void FUN_148778d06(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14118d138(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148778d70 FUN_148778d70 body=57 status=ok
// SIG undefined FUN_148778d70(void)

void FUN_148778d70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b9c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b9c0 = FUN_140002ddd(FUN_14652d81b,uVar1,L"MissionActionType_AssignTask");
  }
  return;
}



// FUNCTION 148778daa FUN_148778daa body=73 status=ok
// SIG undefined FUN_148778daa(void)

void FUN_148778daa(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14b345740;
  *(undefined1 *)(param_2 + 4) = 1;
  FUN_1400b22c2(param_2 + 5,&DAT_149e02088);
  *(undefined1 *)(param_2 + 7) = 1;
  return;
}



// FUNCTION 148778df4 FUN_148778df4 body=68 status=ok
// SIG undefined FUN_148778df4(void)

void FUN_148778df4(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_14b345740;
  *(undefined1 *)(param_2 + 4) = 1;
  FUN_1400b22c2(param_2 + 5,&DAT_149e02088);
  *(undefined1 *)(param_2 + 7) = 1;
  return;
}



// FUNCTION 148778e66 FUN_148778e66 body=95 status=ok
// SIG undefined FUN_148778e66(void)

undefined8 FUN_148778e66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_140427308(param_2 + -0x20,param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_144a787a6(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148778ec6 FUN_148778ec6 body=39 status=ok
// SIG undefined FUN_148778ec6(void)

undefined8
FUN_148778ec6(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 148778f0a FUN_148778f0a body=59 status=ok
// SIG undefined FUN_148778f0a(void)

undefined8 FUN_148778f0a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148778f50 FUN_148778f50 body=56 status=ok
// SIG undefined FUN_148778f50(void)

void FUN_148778f50(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b345740;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    FUN_14118d138(param_2);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148778fe0 FUN_148778fe0 body=65 status=ok
// SIG undefined FUN_148778fe0(void)

undefined8 * FUN_148778fe0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b345740;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_14118d138(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148779022 FUN_148779022 body=55 status=ok
// SIG undefined FUN_148779022(void)

void FUN_148779022(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b9f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b9f0 = FUN_140002ddd(FUN_14652d8e1,uVar1,L"MissionActionType_BatchActionOnAliases");
  }
  return;
}



// FUNCTION 148779094 FUN_148779094 body=39 status=ok
// SIG undefined FUN_148779094(void)

undefined8
FUN_148779094(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1487790d8 FUN_1487790d8 body=59 status=ok
// SIG undefined FUN_1487790d8(void)

undefined8 FUN_1487790d8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877911e FUN_14877911e body=32 status=ok
// SIG undefined FUN_14877911e(void)

void FUN_14877911e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14118d138(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1487791e0 FUN_1487791e0 body=59 status=ok
// SIG undefined FUN_1487791e0(void)

undefined8 FUN_1487791e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148779226 FUN_148779226 body=32 status=ok
// SIG undefined FUN_148779226(void)

void FUN_148779226(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14118d138(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1487792f0 FUN_1487792f0 body=59 status=ok
// SIG undefined FUN_1487792f0(void)

undefined8 FUN_1487792f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148779336 FUN_148779336 body=56 status=ok
// SIG undefined FUN_148779336(void)

void FUN_148779336(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14b345c50;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_14118d138(param_2);
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 148779408 FUN_148779408 body=59 status=ok
// SIG undefined FUN_148779408(void)

undefined8 FUN_148779408(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877944e FUN_14877944e body=32 status=ok
// SIG undefined FUN_14877944e(void)

void FUN_14877944e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_14118d138(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1487794f6 FUN_1487794f6 body=39 status=ok
// SIG undefined FUN_1487794f6(void)

undefined8
FUN_1487794f6(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14877953a FUN_14877953a body=59 status=ok
// SIG undefined FUN_14877953a(void)

undefined8 FUN_14877953a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148779580 FUN_148779580 body=32 status=ok
// SIG undefined FUN_148779580(void)

void FUN_148779580(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14118d138(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148779668 FUN_148779668 body=59 status=ok
// SIG undefined FUN_148779668(void)

undefined8 FUN_148779668(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487796ae FUN_1487796ae body=56 status=ok
// SIG undefined FUN_1487796ae(void)

void FUN_1487796ae(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b346160;
    if (param_2[7] != 0) {
      FUN_1400020a8();
    }
    FUN_14118d138(param_2);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 1487797b0 FUN_1487797b0 body=59 status=ok
// SIG undefined FUN_1487797b0(void)

undefined8 FUN_1487797b0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487797fc FUN_1487797fc body=57 status=ok
// SIG undefined FUN_1487797fc(void)

void FUN_1487797fc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14b346310;
    FUN_141638c42(param_2 + 4);
    FUN_14118d138(param_2);
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 1487798e4 FUN_1487798e4 body=111 status=ok
// SIG undefined FUN_1487798e4(void)

undefined8 FUN_1487798e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_140427308(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      *(undefined4 *)(param_2 + 0x28 + lVar1) = *(undefined4 *)(param_3 + 0x28 + lVar1);
      *(undefined8 *)(param_2 + 0x20 + lVar1) = *(undefined8 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148779954 FUN_148779954 body=39 status=ok
// SIG undefined FUN_148779954(void)

undefined8
FUN_148779954(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 148779998 FUN_148779998 body=59 status=ok
// SIG undefined FUN_148779998(void)

undefined8 FUN_148779998(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487799de FUN_1487799de body=32 status=ok
// SIG undefined FUN_1487799de(void)

void FUN_1487799de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14118d138(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148779a56 FUN_148779a56 body=38 status=ok
// SIG undefined FUN_148779a56(void)

undefined8 FUN_148779a56(undefined8 param_1,int param_2)

{
  FUN_14118d138();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148779a7c FUN_148779a7c body=55 status=ok
// SIG undefined FUN_148779a7c(void)

void FUN_148779a7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bab0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bab0 = FUN_140002ddd(FUN_14652dcb9,uVar1,L"MissionActionType_FinishTask");
  }
  return;
}



// FUNCTION 148779ab4 FUN_148779ab4 body=37 status=ok
// SIG undefined FUN_148779ab4(void)

void FUN_148779ab4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe8);
  FUN_148779c68(param_2);
  return;
}



// FUNCTION 148779b10 FUN_148779b10 body=63 status=ok
// SIG undefined FUN_148779b10(void)

undefined1 FUN_148779b10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148779e00(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 148779b50 FUN_148779b50 body=39 status=ok
// SIG undefined FUN_148779b50(void)

undefined8
FUN_148779b50(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 148779b94 FUN_148779b94 body=59 status=ok
// SIG undefined FUN_148779b94(void)

undefined8 FUN_148779b94(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148779be0 FUN_148779be0 body=40 status=ok
// SIG undefined FUN_148779be0(void)

void FUN_148779be0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_148779d62(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148779c68 FUN_148779c68 body=155 status=ok
// SIG undefined FUN_148779c68(void)

undefined8 * FUN_148779c68(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14b346780;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  FUN_145853e2a(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return param_1;
}



// FUNCTION 148779d04 FUN_148779d04 body=38 status=ok
// SIG undefined FUN_148779d04(void)

undefined8 FUN_148779d04(undefined8 param_1,int param_2)

{
  FUN_148779d62();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148779d2a FUN_148779d2a body=55 status=ok
// SIG undefined FUN_148779d2a(void)

void FUN_148779d2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bae8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bae8 = FUN_140002ddd(FUN_14652dd7f,uVar1,L"MissionActionType_GameModeModuleEvent");
  }
  return;
}



// FUNCTION 148779d62 FUN_148779d62 body=158 status=ok
// SIG undefined FUN_148779d62(void)

void FUN_148779d62(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b346780;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  param_1[0x13] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    FUN_140115c12(param_1 + 0x15,0);
  }
  param_1[0x14] = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 7);
  FUN_14118d138(param_1);
  return;
}



// FUNCTION 148779e00 FUN_148779e00 body=172 status=ok
// SIG undefined FUN_148779e00(void)

longlong FUN_148779e00(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_140427308(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_148779eac(param_1 + 0x20,param_2 + 0x20);
  FUN_14054d9c0(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  FUN_140115bdc(param_1 + 0x98,param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  uVar1 = *(undefined4 *)(param_2 + 0xcc);
  uVar2 = *(undefined4 *)(param_2 + 0xd0);
  uVar3 = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  *(undefined4 *)(param_1 + 0xd4) = uVar3;
  FUN_144a787a6(param_1 + 0xd8,param_2 + 0xd8);
  return param_1;
}



// FUNCTION 148779eac FUN_148779eac body=84 status=ok
// SIG undefined FUN_148779eac(void)

longlong * FUN_148779eac(longlong *param_1,longlong *param_2)

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



// FUNCTION 148779f6c FUN_148779f6c body=59 status=ok
// SIG undefined FUN_148779f6c(void)

undefined8 FUN_148779f6c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148779fb2 FUN_148779fb2 body=32 status=ok
// SIG undefined FUN_148779fb2(void)

void FUN_148779fb2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14877a010(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14877a010 FUN_14877a010 body=109 status=ok
// SIG undefined FUN_14877a010(void)

void FUN_14877a010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b346930;
  FUN_140298c7d(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14877a0f4 FUN_14877a0f4 body=91 status=ok
// SIG undefined FUN_14877a0f4(void)

undefined8 FUN_14877a0f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_140427308(param_2 + -0x20,param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14877a150 FUN_14877a150 body=39 status=ok
// SIG undefined FUN_14877a150(void)

undefined8
FUN_14877a150(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14877a194 FUN_14877a194 body=59 status=ok
// SIG undefined FUN_14877a194(void)

undefined8 FUN_14877a194(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877a1da FUN_14877a1da body=34 status=ok
// SIG undefined FUN_14877a1da(void)

void FUN_14877a1da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14877a2b2(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14877a254 FUN_14877a254 body=38 status=ok
// SIG undefined FUN_14877a254(void)

undefined8 FUN_14877a254(undefined8 param_1,int param_2)

{
  FUN_14877a2b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877a27a FUN_14877a27a body=55 status=ok
// SIG undefined FUN_14877a27a(void)

void FUN_14877a27a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bb18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bb18 = FUN_140002ddd(FUN_14652de75,uVar1,L"MissionActionType_PlayTransientMoment");
  }
  return;
}



// FUNCTION 14877a2b2 FUN_14877a2b2 body=71 status=ok
// SIG undefined FUN_14877a2b2(void)

void FUN_14877a2b2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b346ae0;
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
  FUN_14118d138(param_1);
  return;
}



// FUNCTION 14877a368 FUN_14877a368 body=111 status=ok
// SIG undefined FUN_14877a368(void)

undefined8 FUN_14877a368(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_140427308(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      *(undefined4 *)(param_2 + 0x28 + lVar1) = *(undefined4 *)(param_3 + 0x28 + lVar1);
      *(undefined8 *)(param_2 + 0x20 + lVar1) = *(undefined8 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14877a3d8 FUN_14877a3d8 body=39 status=ok
// SIG undefined FUN_14877a3d8(void)

undefined8
FUN_14877a3d8(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14877a41c FUN_14877a41c body=59 status=ok
// SIG undefined FUN_14877a41c(void)

undefined8 FUN_14877a41c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877a462 FUN_14877a462 body=32 status=ok
// SIG undefined FUN_14877a462(void)

void FUN_14877a462(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14118d138(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14877a4da FUN_14877a4da body=38 status=ok
// SIG undefined FUN_14877a4da(void)

undefined8 FUN_14877a4da(undefined8 param_1,int param_2)

{
  FUN_14118d138();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877a500 FUN_14877a500 body=55 status=ok
// SIG undefined FUN_14877a500(void)

void FUN_14877a500(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bb30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bb30 = FUN_140002ddd(FUN_14652df0b,uVar1,L"MissionActionType_RemoveTask");
  }
  return;
}



// FUNCTION 14877a592 FUN_14877a592 body=59 status=ok
// SIG undefined FUN_14877a592(void)

undefined8 FUN_14877a592(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877a5d8 FUN_14877a5d8 body=32 status=ok
// SIG undefined FUN_14877a5d8(void)

void FUN_14877a5d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14118d138(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14877a692 FUN_14877a692 body=54 status=ok
// SIG undefined FUN_14877a692(void)

undefined1 FUN_14877a692(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14185e400(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 14877a6f0 FUN_14877a6f0 body=59 status=ok
// SIG undefined FUN_14877a6f0(void)

undefined8 FUN_14877a6f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877a736 FUN_14877a736 body=32 status=ok
// SIG undefined FUN_14877a736(void)

void FUN_14877a736(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_14185e38a(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14877a7b2 FUN_14877a7b2 body=44 status=ok
// SIG undefined FUN_14877a7b2(void)

void FUN_14877a7b2(undefined8 param_1,longlong *param_2)

{
  FUN_14029e8dd(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14877a7f4 FUN_14877a7f4 body=54 status=ok
// SIG undefined FUN_14877a7f4(void)

undefined1 FUN_14877a7f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140ffff0a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14877a852 FUN_14877a852 body=59 status=ok
// SIG undefined FUN_14877a852(void)

undefined8 FUN_14877a852(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877a8e4 FUN_14877a8e4 body=48 status=ok
// SIG undefined FUN_14877a8e4(void)

void FUN_14877a8e4(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_14029e8dd(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 14877a986 FUN_14877a986 body=59 status=ok
// SIG undefined FUN_14877a986(void)

undefined8 FUN_14877a986(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877aac2 FUN_14877aac2 body=59 status=ok
// SIG undefined FUN_14877aac2(void)

undefined8 FUN_14877aac2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877ab62 FUN_14877ab62 body=31 status=ok
// SIG undefined FUN_14877ab62(void)

undefined8 FUN_14877ab62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877ab82 FUN_14877ab82 body=55 status=ok
// SIG undefined FUN_14877ab82(void)

void FUN_14877ab82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bba8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bba8 = FUN_140002ddd(FUN_14652e15e,uVar1,L"MissionAliasTemplate");
  }
  return;
}



// FUNCTION 14877ac84 FUN_14877ac84 body=59 status=ok
// SIG undefined FUN_14877ac84(void)

undefined8 FUN_14877ac84(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


