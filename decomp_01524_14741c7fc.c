// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14741c7fc FUN_14741c7fc body=44 status=ok
// SIG undefined FUN_14741c7fc(void)

void FUN_14741c7fc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741c834 FUN_14741c834 body=39 status=ok
// SIG undefined FUN_14741c834(void)

void FUN_14741c834(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741c85c FUN_14741c85c body=140 status=ok
// SIG undefined FUN_14741c85c(void)

void FUN_14741c85c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741c8e8 FUN_14741c8e8 body=157 status=ok
// SIG undefined FUN_14741c8e8(void)

undefined8 FUN_14741c8e8(longlong param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [44];
  undefined2 local_4c [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 == 0) {
    uVar4 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      local_40 = *(undefined8 *)(lVar3 + 0x20);
      local_48 = 0;
      local_4c[0] = param_2;
      local_44 = param_3;
      uVar4 = FUN_144a21736(lVar3,local_4c);
      if ((char)uVar4 == '\0') break;
      bVar6 = (longlong)iVar1 * 8 + -8 != lVar5;
      lVar5 = lVar5 + 8;
    } while (bVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14741c986 thunk_FUN_147432e9e body=5 status=ok
// SIG undefined thunk_FUN_147432e9e(void)

undefined8 * thunk_FUN_147432e9e(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  longlong *plVar6;
  size_t sVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  undefined8 *puStack_60;
  wchar_t *pwStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0xffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = *param_2;
  param_1[0x19] = param_2[0xb];
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)param_2[6];
  FUN_147433044(0,param_2[5]);
  plVar6 = (longlong *)FUN_14743dd86();
  plVar6 = (longlong *)*plVar6;
  if (plVar6 != (longlong *)0x0) {
    puVar1 = param_1 + 0x14;
    puStack_60 = param_1 + 0x16;
    do {
      uVar8 = param_2[5];
      pwStack_58 = *(wchar_t **)(plVar6[2] + 0x18);
      if (pwStack_58 == (wchar_t *)0x0) {
        uStack_50 = 0;
      }
      else {
        sVar7 = wcslen(pwStack_58);
        uStack_50 = (int)sVar7;
      }
      cVar5 = FUN_14743c56c(uVar8,&pwStack_58);
      if (cVar5 != '\0') {
        lVar3 = plVar6[2];
        iVar2 = *(int *)(param_1 + 0x15);
        *(uint *)(param_1 + 0x15) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xac) < iVar2 + 1U) {
          FUN_147434fae(puVar1,iVar2);
        }
        uVar4 = *puVar1;
        uVar9 = ((longlong)uVar4 >> 0x18) + (longlong)puVar1;
        if ((uVar4 & 1) == 0) {
          uVar9 = uVar4;
        }
        *(undefined8 *)(uVar9 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 + 0x28);
        uVar8 = FUN_147433758(puStack_60);
        FUN_147440b96(uVar8,param_2[5],*(undefined8 *)(plVar6[2] + 0x18),1);
      }
      plVar6 = (longlong *)*plVar6;
    } while (plVar6 != (longlong *)0x0);
  }
  if ((uStack_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14741c9ae FUN_14741c9ae body=179 status=ok
// SIG undefined FUN_14741c9ae(void)

longlong * FUN_14741c9ae(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *(longlong *)(param_3 + 0x18);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U & (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4
                    );
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == lVar1) {
          if (plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) {
            lVar1 = plVar4[1];
            lVar2 = FUN_144b1c628(*(undefined8 *)(lVar1 + 0x28),param_3 + 0x10);
            if (lVar2 != 0) {
              *param_2 = lVar2;
              param_2[1] = lVar1;
              return param_2;
            }
          }
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14741ca62 FUN_14741ca62 body=250 status=ok
// SIG undefined FUN_14741ca62(void)

void FUN_14741ca62(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar2 = (int)param_1[5];
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = param_1;
  if ((iStack_34 != iVar2) || (uStack_40 != plVar1)) {
    do {
      FUN_14323b300(*(undefined8 *)(*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x18) + 8));
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != param_1 ||
             ((longlong *)CONCAT44(uStack_5c,uStack_60) != plVar1 || iStack_54 != iVar2));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741cb5d FUN_14741cb5d body=218 status=ok
// SIG undefined FUN_14741cb5d(void)

void FUN_14741cb5d(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar4 = *(int *)(param_1 + 0x50);
  if (0 < iVar4) {
    uVar1 = *(undefined8 *)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    iVar3 = 0;
    do {
      FUN_1448e935e(uVar1,&local_50,param_1,iVar3);
      if ((local_50 != 0) &&
         (lVar2 = *(longlong *)(local_48 + 8), (*(uint *)(lVar2 + 0x58) & 0x7fffffff) != 0)) {
        uVar5 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0x50) + uVar5 * 8) == 0) {
            FUN_1400bafc2(lVar2,uVar5 & 0xffffffff,1);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < (*(uint *)(lVar2 + 0x58) & 0x7fffffff));
        iVar4 = *(int *)(param_1 + 0x50);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741cc38 FUN_14741cc38 body=77 status=ok
// SIG undefined FUN_14741cc38(void)

void FUN_14741cc38(void)

{
  FUN_144a5d717();
  if ((DAT_14ca94d88 & 1) != 0) {
    FUN_1474321dd();
  }
  if ((DAT_14ca94d88 & 2) != 0) {
    FUN_14741909f();
  }
  if ((DAT_14ca94d88 & 4) == 0) {
    return;
  }
  FUN_1460ae29e();
  FUN_14741cb5d(&DAT_14ca8c810);
  return;
}



// FUNCTION 14741cc86 FUN_14741cc86 body=44 status=ok
// SIG undefined FUN_14741cc86(void)

void FUN_14741cc86(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741ccba FUN_14741ccba body=96 status=ok
// SIG undefined FUN_14741ccba(void)

undefined8 FUN_14741ccba(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f997f0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca91888,1);
  return uVar3;
}



// FUNCTION 14741cd1a FUN_14741cd1a body=138 status=ok
// SIG undefined FUN_14741cd1a(void)

void * FUN_14741cd1a(void)

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



// FUNCTION 14741cda4 FUN_14741cda4 body=44 status=ok
// SIG undefined FUN_14741cda4(void)

void FUN_14741cda4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741cddc FUN_14741cddc body=96 status=ok
// SIG undefined FUN_14741cddc(void)

undefined8 FUN_14741cddc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a8d38();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca91910,1);
  return uVar3;
}



// FUNCTION 14741ce3c FUN_14741ce3c body=138 status=ok
// SIG undefined FUN_14741ce3c(void)

void * FUN_14741ce3c(void)

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



// FUNCTION 14741cec6 FUN_14741cec6 body=44 status=ok
// SIG undefined FUN_14741cec6(void)

void FUN_14741cec6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741cefe FUN_14741cefe body=39 status=ok
// SIG undefined FUN_14741cefe(void)

void FUN_14741cefe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741cf26 FUN_14741cf26 body=140 status=ok
// SIG undefined FUN_14741cf26(void)

void FUN_14741cf26(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741cfdf FUN_14741cfdf body=68 status=ok
// SIG undefined FUN_14741cfdf(void)

void FUN_14741cfdf(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[3] = *param_3;
  param_1[7] = param_3[1];
  param_1[0xb] = param_3[2];
  param_1[0xf] = 0x3ff0000000000000;
  return;
}



// FUNCTION 14741d024 FUN_14741d024 body=44 status=ok
// SIG undefined FUN_14741d024(void)

void FUN_14741d024(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741d05c FUN_14741d05c body=39 status=ok
// SIG undefined FUN_14741d05c(void)

void FUN_14741d05c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741d084 FUN_14741d084 body=140 status=ok
// SIG undefined FUN_14741d084(void)

void FUN_14741d084(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741d110 FUN_14741d110 body=44 status=ok
// SIG undefined FUN_14741d110(void)

void FUN_14741d110(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741d148 FUN_14741d148 body=39 status=ok
// SIG undefined FUN_14741d148(void)

void FUN_14741d148(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741d170 FUN_14741d170 body=140 status=ok
// SIG undefined FUN_14741d170(void)

void FUN_14741d170(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741d1fc FUN_14741d1fc body=44 status=ok
// SIG undefined FUN_14741d1fc(void)

void FUN_14741d1fc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741d234 FUN_14741d234 body=39 status=ok
// SIG undefined FUN_14741d234(void)

void FUN_14741d234(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741d25c FUN_14741d25c body=140 status=ok
// SIG undefined FUN_14741d25c(void)

void FUN_14741d25c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741d2e8 FUN_14741d2e8 body=556 status=ok
// SIG undefined FUN_14741d2e8(void)

void FUN_14741d2e8(longlong param_1,longlong *param_2,longlong *param_3,int *param_4,byte param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  short *psVar8;
  undefined1 auStack_b8 [32];
  short *local_98;
  longlong local_90;
  short local_82;
  longlong local_80;
  uint local_78 [2];
  float local_70;
  float local_6c;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78[0] = (uint)param_5;
  iVar2 = param_4[1];
  lVar6 = (**(code **)(*(longlong *)*param_3 + 8))();
  uVar3 = *(uint *)(lVar6 + 0x28);
  iVar4 = *param_4;
  lVar6 = (**(code **)(*(longlong *)*param_3 + 8))();
  local_70 = (float)iVar4 / (float)*(uint *)(lVar6 + 0x24);
  local_68 = *param_3;
  local_60 = DAT_14c9c0de0;
  local_6c = (float)iVar2 / (float)uVar3;
  FUN_1431f715a(&local_90,local_78);
  FUN_145e3820e();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar7 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar7 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(uVar7 + lVar6 * 4) == DAT_14ca8d630) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar7 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar7 = uVar5;
        }
        psVar8 = (short *)(uVar7 + lVar6);
        goto LAB_14741d412;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar6);
  }
  psVar8 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14741d412:
  if (*psVar8 != -1) {
    local_80 = local_90;
    local_98 = &local_82;
    local_82 = *psVar8;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(local_90);
    }
  }
  if (*param_3 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_3 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741d516 FUN_14741d516 body=44 status=ok
// SIG undefined FUN_14741d516(void)

void FUN_14741d516(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741d54e FUN_14741d54e body=39 status=ok
// SIG undefined FUN_14741d54e(void)

void FUN_14741d54e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741d576 FUN_14741d576 body=140 status=ok
// SIG undefined FUN_14741d576(void)

void FUN_14741d576(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741d602 FUN_14741d602 body=712 status=ok
// SIG undefined FUN_14741d602(void)

void FUN_14741d602(longlong param_1,longlong *param_2,int *param_3,longlong *param_4,
                  longlong *param_5,int *param_6,undefined8 *param_7,byte param_8,
                  undefined8 *param_9,byte param_10,byte param_11)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  short *psVar6;
  undefined1 auStack_128 [32];
  short *local_108;
  longlong local_100;
  short local_f2;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  float local_58;
  float local_54;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e8 = *param_7;
  uStack_e0 = param_7[1];
  local_d8 = param_7[2];
  uStack_d0 = param_7[3];
  local_c8 = param_7[4];
  uStack_c0 = param_7[5];
  local_b8 = param_7[6];
  uStack_b0 = param_7[7];
  local_a8 = *param_9;
  uStack_a0 = param_9[1];
  local_98 = param_9[2];
  uStack_90 = param_9[3];
  local_88 = param_9[4];
  uStack_80 = param_9[5];
  local_78 = *(undefined4 *)(param_9 + 6);
  uStack_74 = *(undefined4 *)((longlong)param_9 + 0x34);
  uStack_70 = *(undefined4 *)(param_9 + 7);
  uStack_6c = *(undefined4 *)((longlong)param_9 + 0x3c);
  local_68 = *param_6;
  local_40 = DAT_14c9c0de0;
  local_38 = DAT_14c9c0d80;
  local_64 = (uint)param_8;
  local_60 = (uint)param_11;
  local_50 = *param_4;
  local_48 = *param_5;
  local_54 = (float)param_6[1] / (float)param_3[1];
  local_58 = (float)local_68 / (float)*param_3;
  local_5c = (uint)param_10;
  FUN_1431f7266(&local_100);
  FUN_145fcb5ae();
  uVar3 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = param_1 + 0xa0 + ((longlong)uVar3 >> 0x18);
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar5 * 4) == DAT_14ca8d7f0) {
        uVar3 = *(ulonglong *)(param_1 + 0xb0);
        uVar4 = param_1 + 0xb0 + ((longlong)uVar3 >> 0x18);
        if ((uVar3 & 1) == 0) {
          uVar4 = uVar3;
        }
        psVar6 = (short *)(uVar4 + lVar5);
        goto LAB_14741d7b3;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar5);
  }
  psVar6 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14741d7b3:
  if (*psVar6 != -1) {
    local_f0 = local_100;
    local_108 = &local_f2;
    local_f2 = *psVar6;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_100 != 0) {
    LOCK();
    puVar1 = (uint *)(local_100 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(local_100);
    }
  }
  if (*param_4 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_5 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741d8cc FUN_14741d8cc body=44 status=ok
// SIG undefined FUN_14741d8cc(void)

void FUN_14741d8cc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741d904 FUN_14741d904 body=39 status=ok
// SIG undefined FUN_14741d904(void)

void FUN_14741d904(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741d92c FUN_14741d92c body=140 status=ok
// SIG undefined FUN_14741d92c(void)

void FUN_14741d92c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741d9b8 FUN_14741d9b8 body=728 status=ok
// SIG undefined FUN_14741d9b8(void)

void FUN_14741d9b8(longlong param_1,longlong *param_2,longlong *param_3,int *param_4,
                  undefined8 *param_5,byte param_6,undefined4 *param_7,byte param_8,byte param_9)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  short *psVar8;
  undefined1 auStack_158 [32];
  short *local_138;
  longlong local_130;
  short local_122;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  float local_88;
  float local_84;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_118 = *param_5;
  uStack_110 = param_5[1];
  local_108 = param_5[2];
  uStack_100 = param_5[3];
  local_f8 = param_5[4];
  uStack_f0 = param_5[5];
  local_e8 = param_5[6];
  uStack_e0 = param_5[7];
  local_d8 = *param_7;
  uStack_d4 = param_7[1];
  uStack_d0 = param_7[2];
  uStack_cc = param_7[3];
  local_c8 = param_7[4];
  uStack_c4 = param_7[5];
  uStack_c0 = param_7[6];
  uStack_bc = param_7[7];
  local_b8 = param_7[8];
  uStack_b4 = param_7[9];
  uStack_b0 = param_7[10];
  uStack_ac = param_7[0xb];
  local_a8 = param_7[0xc];
  uStack_a4 = param_7[0xd];
  uStack_a0 = param_7[0xe];
  uStack_9c = param_7[0xf];
  local_98 = *param_4;
  local_78 = DAT_14c9c0de0;
  local_70 = DAT_14c9c0d80;
  local_94 = (uint)param_6;
  local_90 = (uint)param_9;
  local_80 = (longlong *)*param_3;
  iVar2 = param_4[1];
  lVar6 = (**(code **)(*local_80 + 8))();
  uVar3 = *(uint *)(lVar6 + 0x28);
  iVar4 = *param_4;
  lVar6 = (**(code **)(*(longlong *)*param_3 + 8))();
  local_88 = (float)iVar4 / (float)*(uint *)(lVar6 + 0x24);
  local_8c = (uint)param_8;
  local_84 = (float)iVar2 / (float)uVar3;
  FUN_1431f7372(&local_130,&local_118);
  FUN_145fcb948();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar7 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar7 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(uVar7 + lVar6 * 4) == DAT_14ca8d9b0) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar7 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar7 = uVar5;
        }
        psVar8 = (short *)(uVar7 + lVar6);
        goto LAB_14741db87;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar6);
  }
  psVar8 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14741db87:
  if (*psVar8 != -1) {
    local_120 = local_130;
    local_138 = &local_122;
    local_122 = *psVar8;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_130 != 0) {
    LOCK();
    puVar1 = (uint *)(local_130 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(local_130);
    }
  }
  if (*param_3 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_3 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741dc92 FUN_14741dc92 body=44 status=ok
// SIG undefined FUN_14741dc92(void)

void FUN_14741dc92(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741dcca FUN_14741dcca body=39 status=ok
// SIG undefined FUN_14741dcca(void)

void FUN_14741dcca(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741dcf2 FUN_14741dcf2 body=140 status=ok
// SIG undefined FUN_14741dcf2(void)

void FUN_14741dcf2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741dd7e FUN_14741dd7e body=44 status=ok
// SIG undefined FUN_14741dd7e(void)

void FUN_14741dd7e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741ddb6 FUN_14741ddb6 body=39 status=ok
// SIG undefined FUN_14741ddb6(void)

void FUN_14741ddb6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741ddde FUN_14741ddde body=140 status=ok
// SIG undefined FUN_14741ddde(void)

void FUN_14741ddde(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741de6a FUN_14741de6a body=688 status=ok
// SIG undefined FUN_14741de6a(void)

void FUN_14741de6a(longlong param_1,longlong *param_2,int *param_3,longlong *param_4,
                  longlong *param_5,int *param_6,undefined8 *param_7,undefined8 *param_8,
                  byte param_9,byte param_10)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  short *psVar6;
  undefined1 auStack_118 [32];
  short *local_f8;
  longlong local_f0;
  short local_e2;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint local_54;
  float local_50;
  float local_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = *param_7;
  uStack_d0 = param_7[1];
  local_c8 = param_7[2];
  uStack_c0 = param_7[3];
  local_b8 = param_7[4];
  uStack_b0 = param_7[5];
  local_a8 = param_7[6];
  uStack_a0 = param_7[7];
  local_98 = *param_8;
  uStack_90 = param_8[1];
  local_88 = param_8[2];
  uStack_80 = param_8[3];
  local_78 = param_8[4];
  uStack_70 = param_8[5];
  local_68 = param_8[6];
  uStack_60 = param_8[7];
  local_38 = DAT_14c9c0de0;
  local_30 = DAT_14c9c0d80;
  local_58 = (uint)param_9;
  local_54 = (uint)param_10;
  local_48 = *param_4;
  local_40 = *param_5;
  local_4c = (float)param_6[1] / (float)param_3[1];
  local_50 = (float)*param_6 / (float)*param_3;
  FUN_1431f7496(&local_f0,&local_d8);
  FUN_145e3fea0();
  uVar3 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = param_1 + 0xa0 + ((longlong)uVar3 >> 0x18);
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar5 * 4) == DAT_14ca8dd30) {
        uVar3 = *(ulonglong *)(param_1 + 0xb0);
        uVar4 = param_1 + 0xb0 + ((longlong)uVar3 >> 0x18);
        if ((uVar3 & 1) == 0) {
          uVar4 = uVar3;
        }
        psVar6 = (short *)(uVar4 + lVar5);
        goto LAB_14741e003;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar5);
  }
  psVar6 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14741e003:
  if (*psVar6 != -1) {
    local_e0 = local_f0;
    local_f8 = &local_e2;
    local_e2 = *psVar6;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_f0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_f0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(local_f0);
    }
  }
  if (*param_4 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_5 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741e11c FUN_14741e11c body=44 status=ok
// SIG undefined FUN_14741e11c(void)

void FUN_14741e11c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741e154 FUN_14741e154 body=39 status=ok
// SIG undefined FUN_14741e154(void)

void FUN_14741e154(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741e17c FUN_14741e17c body=140 status=ok
// SIG undefined FUN_14741e17c(void)

void FUN_14741e17c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741e208 FUN_14741e208 body=641 status=ok
// SIG undefined FUN_14741e208(void)

void FUN_14741e208(longlong param_1,longlong *param_2,int *param_3,longlong *param_4,int *param_5,
                  undefined8 *param_6,undefined8 *param_7,byte param_8,byte param_9)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  short *psVar6;
  undefined1 auStack_118 [32];
  short *local_f8;
  longlong local_f0;
  short local_e2;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  uint local_54;
  uint local_50;
  float local_48;
  float local_44;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = *param_6;
  uStack_d0 = param_6[1];
  local_c8 = param_6[2];
  uStack_c0 = param_6[3];
  local_b8 = param_6[4];
  uStack_b0 = param_6[5];
  local_a8 = param_6[6];
  uStack_a0 = param_6[7];
  local_98 = *param_7;
  uStack_90 = param_7[1];
  local_88 = param_7[2];
  uStack_80 = param_7[3];
  local_78 = param_7[4];
  uStack_70 = param_7[5];
  local_68 = param_7[6];
  uStack_60 = param_7[7];
  local_58 = *param_5;
  local_38 = DAT_14c9c0de0;
  local_30 = DAT_14c9c0d80;
  local_54 = (uint)param_8;
  local_50 = (uint)param_9;
  local_40 = *param_4;
  local_44 = (float)param_5[1] / (float)param_3[1];
  local_48 = (float)local_58 / (float)*param_3;
  FUN_1431f75a2(&local_f0,&local_d8);
  FUN_145fa0046();
  uVar3 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = param_1 + 0xa0 + ((longlong)uVar3 >> 0x18);
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar5 * 4) == DAT_14ca8def0) {
        uVar3 = *(ulonglong *)(param_1 + 0xb0);
        uVar4 = param_1 + 0xb0 + ((longlong)uVar3 >> 0x18);
        if ((uVar3 & 1) == 0) {
          uVar4 = uVar3;
        }
        psVar6 = (short *)(uVar4 + lVar5);
        goto LAB_14741e395;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar5);
  }
  psVar6 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14741e395:
  if (*psVar6 != -1) {
    local_e0 = local_f0;
    local_f8 = &local_e2;
    local_e2 = *psVar6;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_f0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_f0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(local_f0);
    }
  }
  if (*param_4 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741e48a FUN_14741e48a body=44 status=ok
// SIG undefined FUN_14741e48a(void)

void FUN_14741e48a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741e4c2 FUN_14741e4c2 body=39 status=ok
// SIG undefined FUN_14741e4c2(void)

void FUN_14741e4c2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741e4ea FUN_14741e4ea body=140 status=ok
// SIG undefined FUN_14741e4ea(void)

void FUN_14741e4ea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741e576 FUN_14741e576 body=44 status=ok
// SIG undefined FUN_14741e576(void)

void FUN_14741e576(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741e5ae FUN_14741e5ae body=39 status=ok
// SIG undefined FUN_14741e5ae(void)

void FUN_14741e5ae(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741e5d6 FUN_14741e5d6 body=140 status=ok
// SIG undefined FUN_14741e5d6(void)

void FUN_14741e5d6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741e662 FUN_14741e662 body=637 status=ok
// SIG undefined FUN_14741e662(void)

void FUN_14741e662(longlong param_1,longlong *param_2,longlong *param_3,int *param_4,byte param_5,
                  undefined4 *param_6,byte param_7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  short *psVar8;
  undefined1 auStack_128 [32];
  short *local_108;
  longlong local_100;
  short local_f2;
  longlong local_f0;
  float local_e8;
  float local_e4;
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
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
  uint local_88;
  uint local_84;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d8 = DAT_14c9c0de0;
  local_e0 = (longlong *)*param_3;
  iVar2 = param_4[1];
  lVar6 = (**(code **)(*local_e0 + 8))();
  uVar3 = *(uint *)(lVar6 + 0x28);
  iVar4 = *param_4;
  lVar6 = (**(code **)(*(longlong *)*param_3 + 8))();
  local_e8 = (float)iVar4 / (float)*(uint *)(lVar6 + 0x24);
  local_88 = (uint)param_5;
  local_84 = (uint)param_7;
  local_c8 = *param_6;
  uStack_c4 = param_6[1];
  uStack_c0 = param_6[2];
  uStack_bc = param_6[3];
  local_b8 = param_6[4];
  uStack_b4 = param_6[5];
  uStack_b0 = param_6[6];
  uStack_ac = param_6[7];
  local_a8 = param_6[8];
  uStack_a4 = param_6[9];
  uStack_a0 = param_6[10];
  uStack_9c = param_6[0xb];
  local_98 = param_6[0xc];
  uStack_94 = param_6[0xd];
  uStack_90 = param_6[0xe];
  uStack_8c = param_6[0xf];
  local_e4 = (float)iVar2 / (float)uVar3;
  FUN_1431f76c6(&local_100,&local_e8);
  FUN_145f9c64e();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar7 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar7 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(uVar7 + lVar6 * 4) == DAT_14ca8e270) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar7 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar7 = uVar5;
        }
        psVar8 = (short *)(uVar7 + lVar6);
        goto LAB_14741e7d2;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar6);
  }
  psVar8 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14741e7d2:
  if (*psVar8 != -1) {
    local_f0 = local_100;
    local_108 = &local_f2;
    local_f2 = *psVar8;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_100 != 0) {
    LOCK();
    puVar1 = (uint *)(local_100 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(local_100);
    }
  }
  if (*param_3 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_3 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741e8e0 FUN_14741e8e0 body=44 status=ok
// SIG undefined FUN_14741e8e0(void)

void FUN_14741e8e0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741e918 FUN_14741e918 body=39 status=ok
// SIG undefined FUN_14741e918(void)

void FUN_14741e918(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741e940 FUN_14741e940 body=140 status=ok
// SIG undefined FUN_14741e940(void)

void FUN_14741e940(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741e9cc FUN_14741e9cc body=637 status=ok
// SIG undefined FUN_14741e9cc(void)

void FUN_14741e9cc(longlong param_1,longlong *param_2,longlong *param_3,int *param_4,byte param_5,
                  undefined4 *param_6,byte param_7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  short *psVar8;
  undefined1 auStack_128 [32];
  short *local_108;
  longlong local_100;
  short local_f2;
  longlong local_f0;
  float local_e8;
  float local_e4;
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
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
  uint local_88;
  uint local_84;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d8 = DAT_14c9c0de0;
  local_e0 = (longlong *)*param_3;
  iVar2 = param_4[1];
  lVar6 = (**(code **)(*local_e0 + 8))();
  uVar3 = *(uint *)(lVar6 + 0x28);
  iVar4 = *param_4;
  lVar6 = (**(code **)(*(longlong *)*param_3 + 8))();
  local_e8 = (float)iVar4 / (float)*(uint *)(lVar6 + 0x24);
  local_88 = (uint)param_5;
  local_84 = (uint)param_7;
  local_c8 = *param_6;
  uStack_c4 = param_6[1];
  uStack_c0 = param_6[2];
  uStack_bc = param_6[3];
  local_b8 = param_6[4];
  uStack_b4 = param_6[5];
  uStack_b0 = param_6[6];
  uStack_ac = param_6[7];
  local_a8 = param_6[8];
  uStack_a4 = param_6[9];
  uStack_a0 = param_6[10];
  uStack_9c = param_6[0xb];
  local_98 = param_6[0xc];
  uStack_94 = param_6[0xd];
  uStack_90 = param_6[0xe];
  uStack_8c = param_6[0xf];
  local_e4 = (float)iVar2 / (float)uVar3;
  FUN_1431f77d2(&local_100,&local_e8);
  FUN_145f9e374();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar7 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar7 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(uVar7 + lVar6 * 4) == DAT_14ca8e430) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar7 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar7 = uVar5;
        }
        psVar8 = (short *)(uVar7 + lVar6);
        goto LAB_14741eb3c;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar6);
  }
  psVar8 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14741eb3c:
  if (*psVar8 != -1) {
    local_f0 = local_100;
    local_108 = &local_f2;
    local_f2 = *psVar8;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_100 != 0) {
    LOCK();
    puVar1 = (uint *)(local_100 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(local_100);
    }
  }
  if (*param_3 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_3 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741ec4a FUN_14741ec4a body=44 status=ok
// SIG undefined FUN_14741ec4a(void)

void FUN_14741ec4a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741ec82 FUN_14741ec82 body=39 status=ok
// SIG undefined FUN_14741ec82(void)

void FUN_14741ec82(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741ecaa FUN_14741ecaa body=140 status=ok
// SIG undefined FUN_14741ecaa(void)

void FUN_14741ecaa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741ed36 FUN_14741ed36 body=44 status=ok
// SIG undefined FUN_14741ed36(void)

void FUN_14741ed36(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741ed6e FUN_14741ed6e body=39 status=ok
// SIG undefined FUN_14741ed6e(void)

void FUN_14741ed6e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741ed96 FUN_14741ed96 body=140 status=ok
// SIG undefined FUN_14741ed96(void)

void FUN_14741ed96(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741ee22 FUN_14741ee22 body=44 status=ok
// SIG undefined FUN_14741ee22(void)

void FUN_14741ee22(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741ee5a FUN_14741ee5a body=39 status=ok
// SIG undefined FUN_14741ee5a(void)

void FUN_14741ee5a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741ee82 FUN_14741ee82 body=140 status=ok
// SIG undefined FUN_14741ee82(void)

void FUN_14741ee82(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741ef0e FUN_14741ef0e body=44 status=ok
// SIG undefined FUN_14741ef0e(void)

void FUN_14741ef0e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741ef46 FUN_14741ef46 body=39 status=ok
// SIG undefined FUN_14741ef46(void)

void FUN_14741ef46(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741ef6e FUN_14741ef6e body=140 status=ok
// SIG undefined FUN_14741ef6e(void)

void FUN_14741ef6e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741effa FUN_14741effa body=1041 status=ok
// SIG undefined FUN_14741effa(void)

void FUN_14741effa(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,int *param_6,double *param_7,double *param_8,byte param_9)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  short *psVar8;
  undefined1 auStack_198 [32];
  short *local_178;
  longlong local_170;
  short local_162;
  longlong local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  uint local_118;
  float local_110;
  float local_10c;
  longlong *local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_158 = (float)*param_7;
  local_154 = (float)param_7[1];
  local_150 = (float)param_7[2];
  local_14c = (float)*param_8;
  local_148 = (float)param_7[4];
  local_144 = (float)param_7[5];
  local_140 = (float)param_7[6];
  local_13c = (float)param_8[1];
  local_138 = (float)param_7[8];
  local_134 = (float)param_7[9];
  local_130 = (float)param_7[10];
  local_12c = (float)param_8[2];
  local_128 = (float)param_7[0xc];
  local_124 = (float)param_7[0xd];
  local_120 = (float)param_7[0xe];
  local_11c = 0x3f800000;
  local_118 = (uint)param_9;
  local_108 = (longlong *)*param_3;
  local_100 = *param_4;
  local_f8 = *param_5;
  local_f0 = DAT_14c9c0de0;
  local_e8 = DAT_14c9c0de0;
  local_e0 = DAT_14c9c0de0;
  iVar2 = param_6[1];
  lVar6 = (**(code **)(*local_108 + 8))();
  uVar3 = *(uint *)(lVar6 + 0x28);
  iVar4 = *param_6;
  lVar6 = (**(code **)(*(longlong *)*param_3 + 8))();
  local_110 = (float)iVar4 / (float)*(uint *)(lVar6 + 0x24);
  local_10c = (float)iVar2 / (float)uVar3;
  FUN_1431f791a(&local_170,&local_158);
  FUN_145e401b4();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar7 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar7 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(uVar7 + lVar6 * 4) == DAT_14ca8ea98) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar7 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar7 = uVar5;
        }
        psVar8 = (short *)(uVar7 + lVar6);
        goto LAB_14741f27b;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar6);
  }
  psVar8 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14741f27b:
  if (*psVar8 != -1) {
    local_160 = local_170;
    local_178 = &local_162;
    local_162 = *psVar8;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_170 != 0) {
    LOCK();
    puVar1 = (uint *)(local_170 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(local_170);
    }
  }
  if (*param_3 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_3 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_4 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_4 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_5 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741f40c FUN_14741f40c body=44 status=ok
// SIG undefined FUN_14741f40c(void)

void FUN_14741f40c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741f444 FUN_14741f444 body=39 status=ok
// SIG undefined FUN_14741f444(void)

void FUN_14741f444(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741f46c FUN_14741f46c body=140 status=ok
// SIG undefined FUN_14741f46c(void)

void FUN_14741f46c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741f4f8 FUN_14741f4f8 body=666 status=ok
// SIG undefined FUN_14741f4f8(void)

void FUN_14741f4f8(longlong param_1,longlong *param_2,longlong *param_3,int *param_4,
                  undefined8 *param_5,byte param_6,undefined8 *param_7,byte param_8,byte param_9,
                  byte param_10,byte param_11,byte param_12)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  short *psVar6;
  undefined1 auStack_128 [32];
  short *local_108;
  longlong local_100;
  short local_f2;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined8 local_50;
  float local_48;
  float local_44;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e8 = *param_5;
  uStack_e0 = param_5[1];
  local_d8 = param_5[2];
  uStack_d0 = param_5[3];
  local_c8 = param_5[4];
  uStack_c0 = param_5[5];
  local_b8 = param_5[6];
  uStack_b0 = param_5[7];
  local_a8 = *param_7;
  uStack_a0 = param_7[1];
  local_98 = *(undefined4 *)(param_7 + 2);
  uStack_94 = *(undefined4 *)((longlong)param_7 + 0x14);
  uStack_90 = *(undefined4 *)(param_7 + 3);
  uStack_8c = *(undefined4 *)((longlong)param_7 + 0x1c);
  local_88 = *(undefined4 *)(param_7 + 4);
  uStack_84 = *(undefined4 *)((longlong)param_7 + 0x24);
  uStack_80 = *(undefined4 *)(param_7 + 5);
  uStack_7c = *(undefined4 *)((longlong)param_7 + 0x2c);
  local_78 = *(undefined4 *)(param_7 + 6);
  uStack_74 = *(undefined4 *)((longlong)param_7 + 0x34);
  uStack_70 = *(undefined4 *)(param_7 + 7);
  uStack_6c = *(undefined4 *)((longlong)param_7 + 0x3c);
  local_68 = (uint)param_6;
  local_64 = (uint)param_11;
  local_60 = (uint)param_8;
  local_5c = (uint)param_9;
  local_58 = (uint)param_10;
  local_54 = (uint)param_12;
  local_50 = DAT_14c9c0de0;
  local_48 = (float)*param_4;
  local_44 = (float)param_4[1];
  local_40 = *param_3;
  FUN_1431f7a26(&local_100);
  FUN_145e3dc0c();
  uVar3 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = param_1 + 0xa0 + ((longlong)uVar3 >> 0x18);
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar5 * 4) == DAT_14ca8ec58) {
        uVar3 = *(ulonglong *)(param_1 + 0xb0);
        uVar4 = param_1 + 0xb0 + ((longlong)uVar3 >> 0x18);
        if ((uVar3 & 1) == 0) {
          uVar4 = uVar3;
        }
        psVar6 = (short *)(uVar4 + lVar5);
        goto LAB_14741f699;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar5);
  }
  psVar6 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14741f699:
  if (*psVar6 != -1) {
    local_f0 = local_100;
    local_108 = &local_f2;
    local_f2 = *psVar6;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_100 != 0) {
    LOCK();
    puVar1 = (uint *)(local_100 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(local_100);
    }
  }
  if (*param_3 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741f794 FUN_14741f794 body=44 status=ok
// SIG undefined FUN_14741f794(void)

void FUN_14741f794(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741f7cc FUN_14741f7cc body=39 status=ok
// SIG undefined FUN_14741f7cc(void)

void FUN_14741f7cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741f7f4 FUN_14741f7f4 body=140 status=ok
// SIG undefined FUN_14741f7f4(void)

void FUN_14741f7f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741f880 FUN_14741f880 body=589 status=ok
// SIG undefined FUN_14741f880(void)

void FUN_14741f880(longlong param_1,longlong *param_2,longlong *param_3,int *param_4,
                  undefined8 *param_5,byte param_6,undefined8 *param_7,byte param_8,byte param_9)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  short *psVar6;
  undefined1 auStack_108 [32];
  short *local_e8;
  longlong local_e0;
  short local_d2;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  float local_3c;
  float local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8 = *param_5;
  uStack_c0 = param_5[1];
  local_b8 = param_5[2];
  uStack_b0 = param_5[3];
  local_a8 = param_5[4];
  uStack_a0 = param_5[5];
  local_98 = param_5[6];
  uStack_90 = param_5[7];
  local_88 = *param_7;
  uStack_80 = param_7[1];
  local_78 = *(undefined4 *)(param_7 + 2);
  uStack_74 = *(undefined4 *)((longlong)param_7 + 0x14);
  uStack_70 = *(undefined4 *)(param_7 + 3);
  uStack_6c = *(undefined4 *)((longlong)param_7 + 0x1c);
  local_68 = *(undefined4 *)(param_7 + 4);
  uStack_64 = *(undefined4 *)((longlong)param_7 + 0x24);
  uStack_60 = *(undefined4 *)(param_7 + 5);
  uStack_5c = *(undefined4 *)((longlong)param_7 + 0x2c);
  local_58 = *(undefined4 *)(param_7 + 6);
  uStack_54 = *(undefined4 *)((longlong)param_7 + 0x34);
  uStack_50 = *(undefined4 *)(param_7 + 7);
  uStack_4c = *(undefined4 *)((longlong)param_7 + 0x3c);
  local_48 = (uint)param_6;
  local_44 = (uint)param_9;
  local_40 = (uint)param_8;
  local_3c = (float)*param_4;
  local_38 = (float)param_4[1];
  local_30 = *param_3;
  FUN_1431f7b32(&local_e0);
  FUN_145fcbce2();
  uVar3 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = param_1 + 0xa0 + ((longlong)uVar3 >> 0x18);
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar5 * 4) == DAT_14ca8ee18) {
        uVar3 = *(ulonglong *)(param_1 + 0xb0);
        uVar4 = param_1 + 0xb0 + ((longlong)uVar3 >> 0x18);
        if ((uVar3 & 1) == 0) {
          uVar4 = uVar3;
        }
        psVar6 = (short *)(uVar4 + lVar5);
        goto LAB_14741f9d9;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar5);
  }
  psVar6 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14741f9d9:
  if (*psVar6 != -1) {
    local_d0 = local_e0;
    local_e8 = &local_d2;
    local_d2 = *psVar6;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_e0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_e0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(local_e0);
    }
  }
  if (*param_3 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741face FUN_14741face body=44 status=ok
// SIG undefined FUN_14741face(void)

void FUN_14741face(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741fb06 FUN_14741fb06 body=39 status=ok
// SIG undefined FUN_14741fb06(void)

void FUN_14741fb06(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741fb2e FUN_14741fb2e body=140 status=ok
// SIG undefined FUN_14741fb2e(void)

void FUN_14741fb2e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741fbba FUN_14741fbba body=564 status=ok
// SIG undefined FUN_14741fbba(void)

void FUN_14741fbba(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  byte param_5,undefined4 *param_6,byte param_7,byte param_8)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  short *psVar6;
  undefined1 auStack_108 [32];
  short *local_e8;
  longlong local_e0;
  short local_d2;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_48 = *param_3;
  local_40 = DAT_14c9c0de0;
  local_c8 = *param_4;
  uStack_c0 = param_4[1];
  local_b8 = param_4[2];
  uStack_b0 = param_4[3];
  local_a8 = param_4[4];
  uStack_a0 = param_4[5];
  local_98 = param_4[6];
  uStack_90 = param_4[7];
  local_88 = *param_6;
  uStack_84 = param_6[1];
  uStack_80 = param_6[2];
  uStack_7c = param_6[3];
  local_78 = param_6[4];
  uStack_74 = param_6[5];
  uStack_70 = param_6[6];
  uStack_6c = param_6[7];
  local_68 = param_6[8];
  uStack_64 = param_6[9];
  uStack_60 = param_6[10];
  uStack_5c = param_6[0xb];
  local_58 = param_6[0xc];
  uStack_54 = param_6[0xd];
  uStack_50 = param_6[0xe];
  uStack_4c = param_6[0xf];
  local_38 = (uint)param_5;
  local_34 = (uint)param_8;
  local_30 = (uint)param_7;
  FUN_1431f7c3e(&local_e0);
  FUN_145e404c8();
  uVar3 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = param_1 + 0xa0 + ((longlong)uVar3 >> 0x18);
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar5 * 4) == DAT_14ca8efd8) {
        uVar3 = *(ulonglong *)(param_1 + 0xb0);
        uVar4 = param_1 + 0xb0 + ((longlong)uVar3 >> 0x18);
        if ((uVar3 & 1) == 0) {
          uVar4 = uVar3;
        }
        psVar6 = (short *)(uVar4 + lVar5);
        goto LAB_14741fcfa;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar5);
  }
  psVar6 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14741fcfa:
  if (*psVar6 != -1) {
    local_d0 = local_e0;
    local_e8 = &local_d2;
    local_d2 = *psVar6;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_e0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_e0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(local_e0);
    }
  }
  if (*param_3 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14741fdf0 FUN_14741fdf0 body=44 status=ok
// SIG undefined FUN_14741fdf0(void)

void FUN_14741fdf0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14741fe28 FUN_14741fe28 body=39 status=ok
// SIG undefined FUN_14741fe28(void)

void FUN_14741fe28(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14741fe50 FUN_14741fe50 body=140 status=ok
// SIG undefined FUN_14741fe50(void)

void FUN_14741fe50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14741fedc FUN_14741fedc body=503 status=ok
// SIG undefined FUN_14741fedc(void)

void FUN_14741fedc(longlong param_1,longlong *param_2,longlong *param_3,undefined4 *param_4,
                  byte param_5,undefined4 *param_6,byte param_7)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  short *psVar6;
  undefined1 auStack_c8 [32];
  short *local_a8;
  longlong local_a0;
  short local_92;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  uint local_38;
  uint local_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = *param_3;
  local_48 = *param_4;
  local_44 = param_4[1];
  local_88 = *param_6;
  uStack_84 = param_6[1];
  uStack_80 = param_6[2];
  uStack_7c = param_6[3];
  local_78 = param_6[4];
  uStack_74 = param_6[5];
  uStack_70 = param_6[6];
  uStack_6c = param_6[7];
  local_68 = param_6[8];
  uStack_64 = param_6[9];
  uStack_60 = param_6[10];
  uStack_5c = param_6[0xb];
  local_58 = param_6[0xc];
  uStack_54 = param_6[0xd];
  uStack_50 = param_6[0xe];
  uStack_4c = param_6[0xf];
  local_38 = (uint)param_5;
  local_34 = (uint)param_7;
  FUN_1431f7d4a(&local_a0);
  FUN_145fcc07c();
  uVar3 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = param_1 + 0xa0 + ((longlong)uVar3 >> 0x18);
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar5 * 4) == DAT_14ca8f198) {
        uVar3 = *(ulonglong *)(param_1 + 0xb0);
        uVar4 = param_1 + 0xb0 + ((longlong)uVar3 >> 0x18);
        if ((uVar3 & 1) == 0) {
          uVar4 = uVar3;
        }
        psVar6 = (short *)(uVar4 + lVar5);
        goto LAB_14741ffdf;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar5);
  }
  psVar6 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14741ffdf:
  if (*psVar6 != -1) {
    local_90 = local_a0;
    local_a8 = &local_92;
    local_92 = *psVar6;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(local_a0);
    }
  }
  if (*param_3 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474200d4 FUN_1474200d4 body=44 status=ok
// SIG undefined FUN_1474200d4(void)

void FUN_1474200d4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14742010c FUN_14742010c body=39 status=ok
// SIG undefined FUN_14742010c(void)

void FUN_14742010c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 147420134 FUN_147420134 body=140 status=ok
// SIG undefined FUN_147420134(void)

void FUN_147420134(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 1474201c0 FUN_1474201c0 body=946 status=ok
// SIG undefined FUN_1474201c0(void)

void FUN_1474201c0(longlong param_1,longlong *param_2,longlong *param_3,int *param_4,double *param_5
                  ,double *param_6,byte param_7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  short *psVar8;
  undefined1 auStack_178 [32];
  short *local_158;
  longlong local_150;
  short local_142;
  longlong local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  int local_f8;
  uint local_f4;
  float local_f0;
  float local_ec;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = (float)*param_5;
  local_134 = (float)param_5[1];
  local_130 = (float)param_5[2];
  local_12c = (float)*param_6;
  local_128 = (float)param_5[4];
  local_124 = (float)param_5[5];
  local_120 = (float)param_5[6];
  local_11c = (float)param_6[1];
  local_118 = (float)param_5[8];
  local_114 = (float)param_5[9];
  local_110 = (float)param_5[10];
  local_10c = (float)param_6[2];
  local_108 = (float)param_5[0xc];
  local_104 = (float)param_5[0xd];
  local_100 = (float)param_5[0xe];
  local_fc = 0x3f800000;
  local_f8 = *param_4;
  local_e0 = DAT_14c9c0de0;
  local_d8 = DAT_14c9c0d80;
  local_f4 = (uint)param_7;
  local_e8 = (longlong *)*param_3;
  iVar2 = param_4[1];
  lVar6 = (**(code **)(*local_e8 + 8))();
  uVar3 = *(uint *)(lVar6 + 0x28);
  iVar4 = *param_4;
  lVar6 = (**(code **)(*(longlong *)*param_3 + 8))();
  local_f0 = (float)iVar4 / ((float)*(uint *)(lVar6 + 0x24) + (float)*(uint *)(lVar6 + 0x24));
  local_ec = (float)iVar2 / (float)uVar3;
  FUN_1431f7e56(&local_150,&local_138);
  FUN_145e3851c();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar7 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar7 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(uVar7 + lVar6 * 4) == DAT_14ca8f358) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar7 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar7 = uVar5;
        }
        psVar8 = (short *)(uVar7 + lVar6);
        goto LAB_14742042b;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar6);
  }
  psVar8 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14742042b:
  if (*psVar8 != -1) {
    local_140 = local_150;
    local_158 = &local_142;
    local_142 = *psVar8;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_150 != 0) {
    LOCK();
    puVar1 = (uint *)(local_150 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(local_150);
    }
  }
  if (*param_3 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_3 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147420574 FUN_147420574 body=44 status=ok
// SIG undefined FUN_147420574(void)

void FUN_147420574(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1474205ac FUN_1474205ac body=39 status=ok
// SIG undefined FUN_1474205ac(void)

void FUN_1474205ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1474205d4 FUN_1474205d4 body=140 status=ok
// SIG undefined FUN_1474205d4(void)

void FUN_1474205d4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 147420660 FUN_147420660 body=44 status=ok
// SIG undefined FUN_147420660(void)

void FUN_147420660(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147420698 FUN_147420698 body=39 status=ok
// SIG undefined FUN_147420698(void)

void FUN_147420698(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1474206c0 FUN_1474206c0 body=140 status=ok
// SIG undefined FUN_1474206c0(void)

void FUN_1474206c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14742074c FUN_14742074c body=44 status=ok
// SIG undefined FUN_14742074c(void)

void FUN_14742074c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147420784 FUN_147420784 body=87 status=ok
// SIG undefined FUN_147420784(void)

longlong FUN_147420784(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  FUN_147440a6c(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"InExternalTexture",1);
  return lVar1;
}



// FUNCTION 1474207dc FUN_1474207dc body=145 status=ok
// SIG undefined FUN_1474207dc(void)

void FUN_1474207dc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
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
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  return;
}



// FUNCTION 14742086e FUN_14742086e body=511 status=ok
// SIG undefined FUN_14742086e(void)

void FUN_14742086e(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined4 *param_5,undefined8 *param_6)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  short *psVar6;
  undefined1 auStack_a8 [32];
  short *local_88;
  longlong local_80;
  short local_72;
  longlong local_70;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *param_4;
  local_58 = *param_5;
  uStack_54 = param_5[1];
  uStack_50 = param_5[2];
  uStack_4c = param_5[3];
  local_48 = *param_6;
  FUN_1431f7f92(&local_80);
  FUN_145e38b38();
  uVar3 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = param_1 + 0xa0 + ((longlong)uVar3 >> 0x18);
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar5 * 4) == DAT_14ca8f898) {
        uVar3 = *(ulonglong *)(param_1 + 0xb0);
        uVar4 = param_1 + 0xb0 + ((longlong)uVar3 >> 0x18);
        if ((uVar3 & 1) == 0) {
          uVar4 = uVar3;
        }
        psVar6 = (short *)(uVar4 + lVar5);
        goto LAB_147420943;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar5);
  }
  psVar6 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147420943:
  if (*psVar6 != -1) {
    local_70 = local_80;
    local_88 = &local_72;
    local_72 = *psVar6;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  FUN_144775fd8(param_2,param_1 + 0xe0,*param_3);
  if (local_80 != 0) {
    LOCK();
    puVar1 = (uint *)(local_80 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(local_80);
    }
  }
  if (*param_3 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_4 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147420a6e FUN_147420a6e body=44 status=ok
// SIG undefined FUN_147420a6e(void)

void FUN_147420a6e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147420aa6 FUN_147420aa6 body=96 status=ok
// SIG undefined FUN_147420aa6(void)

undefined8 FUN_147420aa6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145dc48a0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca919c8,1);
  return uVar3;
}



// FUNCTION 147420b06 FUN_147420b06 body=138 status=ok
// SIG undefined FUN_147420b06(void)

void * FUN_147420b06(void)

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



// FUNCTION 147420b90 FUN_147420b90 body=44 status=ok
// SIG undefined FUN_147420b90(void)

void FUN_147420b90(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147420bc8 FUN_147420bc8 body=96 status=ok
// SIG undefined FUN_147420bc8(void)

undefined8 FUN_147420bc8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ebab90();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca91ad8,1);
  return uVar3;
}



// FUNCTION 147420c28 FUN_147420c28 body=138 status=ok
// SIG undefined FUN_147420c28(void)

void * FUN_147420c28(void)

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



// FUNCTION 147420cb2 FUN_147420cb2 body=44 status=ok
// SIG undefined FUN_147420cb2(void)

void FUN_147420cb2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147420cea FUN_147420cea body=96 status=ok
// SIG undefined FUN_147420cea(void)

undefined8 FUN_147420cea(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ea7a64();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca91b60,1);
  return uVar3;
}



// FUNCTION 147420d4a FUN_147420d4a body=138 status=ok
// SIG undefined FUN_147420d4a(void)

void * FUN_147420d4a(void)

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



// FUNCTION 147420dd4 FUN_147420dd4 body=44 status=ok
// SIG undefined FUN_147420dd4(void)

void FUN_147420dd4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147420e0c FUN_147420e0c body=39 status=ok
// SIG undefined FUN_147420e0c(void)

void FUN_147420e0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 147420e34 FUN_147420e34 body=140 status=ok
// SIG undefined FUN_147420e34(void)

void FUN_147420e34(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 147420ec0 FUN_147420ec0 body=694 status=ok
// SIG undefined FUN_147420ec0(void)

void FUN_147420ec0(longlong param_1,longlong *param_2,longlong *param_3,int *param_4,
                  undefined8 *param_5,byte param_6,undefined4 *param_7,byte param_8)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  short *psVar8;
  undefined1 auStack_138 [32];
  short *local_118;
  longlong local_110;
  short local_102;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
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
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint local_74;
  float local_70;
  float local_6c;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8 = *param_5;
  uStack_f0 = param_5[1];
  local_e8 = param_5[2];
  uStack_e0 = param_5[3];
  local_d8 = param_5[4];
  uStack_d0 = param_5[5];
  local_c8 = param_5[6];
  uStack_c0 = param_5[7];
  local_b8 = *param_7;
  uStack_b4 = param_7[1];
  uStack_b0 = param_7[2];
  uStack_ac = param_7[3];
  local_a8 = param_7[4];
  uStack_a4 = param_7[5];
  uStack_a0 = param_7[6];
  uStack_9c = param_7[7];
  local_98 = param_7[8];
  uStack_94 = param_7[9];
  uStack_90 = param_7[10];
  uStack_8c = param_7[0xb];
  local_88 = param_7[0xc];
  uStack_84 = param_7[0xd];
  uStack_80 = param_7[0xe];
  uStack_7c = param_7[0xf];
  local_78 = (uint)param_6;
  local_74 = (uint)param_8;
  iVar2 = param_4[1];
  lVar6 = (**(code **)(*(longlong *)*param_3 + 8))();
  uVar3 = *(uint *)(lVar6 + 0x28);
  iVar4 = *param_4;
  lVar6 = (**(code **)(*(longlong *)*param_3 + 8))();
  local_70 = (float)iVar4 / (float)*(uint *)(lVar6 + 0x24);
  local_68 = *param_3;
  local_60 = DAT_14c9c0de0;
  local_6c = (float)iVar2 / (float)uVar3;
  FUN_1431f80c2(&local_110,&local_f8);
  FUN_145f9cd72();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar7 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar7 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(uVar7 + lVar6 * 4) == DAT_14ca8fdd0) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar7 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar7 = uVar5;
        }
        psVar8 = (short *)(uVar7 + lVar6);
        goto LAB_14742106e;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar6);
  }
  psVar8 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14742106e:
  if (*psVar8 != -1) {
    local_100 = local_110;
    local_118 = &local_102;
    local_102 = *psVar8;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_110 != 0) {
    LOCK();
    puVar1 = (uint *)(local_110 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(local_110);
    }
  }
  if (*param_3 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_3 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147421178 FUN_147421178 body=44 status=ok
// SIG undefined FUN_147421178(void)

void FUN_147421178(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1474211b0 FUN_1474211b0 body=39 status=ok
// SIG undefined FUN_1474211b0(void)

void FUN_1474211b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1474211d8 FUN_1474211d8 body=140 status=ok
// SIG undefined FUN_1474211d8(void)

void FUN_1474211d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 147421264 FUN_147421264 body=44 status=ok
// SIG undefined FUN_147421264(void)

void FUN_147421264(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14742129c FUN_14742129c body=39 status=ok
// SIG undefined FUN_14742129c(void)

void FUN_14742129c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1474212c4 FUN_1474212c4 body=140 status=ok
// SIG undefined FUN_1474212c4(void)

void FUN_1474212c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 147421350 FUN_147421350 body=44 status=ok
// SIG undefined FUN_147421350(void)

void FUN_147421350(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147421388 FUN_147421388 body=39 status=ok
// SIG undefined FUN_147421388(void)

void FUN_147421388(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1474213b0 FUN_1474213b0 body=140 status=ok
// SIG undefined FUN_1474213b0(void)

void FUN_1474213b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 14742143c FUN_14742143c body=44 status=ok
// SIG undefined FUN_14742143c(void)

void FUN_14742143c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147421474 FUN_147421474 body=39 status=ok
// SIG undefined FUN_147421474(void)

void FUN_147421474(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_1474259f4(uVar1,param_1);
  return;
}



// FUNCTION 14742149c FUN_14742149c body=151 status=ok
// SIG undefined FUN_14742149c(void)

void FUN_14742149c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
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
  return;
}



// FUNCTION 147421534 FUN_147421534 body=44 status=ok
// SIG undefined FUN_147421534(void)

void FUN_147421534(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf0);
  return;
}



// FUNCTION 14742156c FUN_14742156c body=39 status=ok
// SIG undefined FUN_14742156c(void)

void FUN_14742156c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147425a56(uVar1,param_1);
  return;
}



// FUNCTION 147421594 FUN_147421594 body=156 status=ok
// SIG undefined FUN_147421594(void)

void FUN_147421594(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xf0,0x10);
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
  *(undefined8 *)((longlong)puVar1 + 0xe6) = 0;
  return;
}



// FUNCTION 147421630 FUN_147421630 body=44 status=ok
// SIG undefined FUN_147421630(void)

void FUN_147421630(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147421668 FUN_147421668 body=96 status=ok
// SIG undefined FUN_147421668(void)

longlong FUN_147421668(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"InputDepth",1);
  return lVar1;
}



// FUNCTION 1474216c8 FUN_1474216c8 body=154 status=ok
// SIG undefined FUN_1474216c8(void)

void FUN_1474216c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
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
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(undefined2 *)((longlong)puVar1 + 0xe4) = 0;
  return;
}



// FUNCTION 147421762 FUN_147421762 body=44 status=ok
// SIG undefined FUN_147421762(void)

void FUN_147421762(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 14742179a FUN_14742179a body=96 status=ok
// SIG undefined FUN_14742179a(void)

longlong FUN_14742179a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"InputDepth",1);
  return lVar1;
}



// FUNCTION 1474217fa FUN_1474217fa body=154 status=ok
// SIG undefined FUN_1474217fa(void)

void FUN_1474217fa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
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
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(undefined2 *)((longlong)puVar1 + 0xe4) = 0;
  return;
}



// FUNCTION 147421894 FUN_147421894 body=44 status=ok
// SIG undefined FUN_147421894(void)

void FUN_147421894(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 1474218cc FUN_1474218cc body=96 status=ok
// SIG undefined FUN_1474218cc(void)

longlong FUN_1474218cc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"InputDepth",1);
  return lVar1;
}



// FUNCTION 14742192c FUN_14742192c body=154 status=ok
// SIG undefined FUN_14742192c(void)

void FUN_14742192c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
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
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(undefined2 *)((longlong)puVar1 + 0xe4) = 0;
  return;
}



// FUNCTION 1474219c6 FUN_1474219c6 body=44 status=ok
// SIG undefined FUN_1474219c6(void)

void FUN_1474219c6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 1474219fe FUN_1474219fe body=96 status=ok
// SIG undefined FUN_1474219fe(void)

longlong FUN_1474219fe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"InputDepth",1);
  return lVar1;
}



// FUNCTION 147421a5e FUN_147421a5e body=154 status=ok
// SIG undefined FUN_147421a5e(void)

void FUN_147421a5e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
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
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(undefined2 *)((longlong)puVar1 + 0xe4) = 0;
  return;
}



// FUNCTION 147421af8 FUN_147421af8 body=44 status=ok
// SIG undefined FUN_147421af8(void)

void FUN_147421af8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147421b30 FUN_147421b30 body=89 status=ok
// SIG undefined FUN_147421b30(void)

undefined8 FUN_147421b30(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_141472624();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 147421b8a FUN_147421b8a body=138 status=ok
// SIG undefined FUN_147421b8a(void)

void * FUN_147421b8a(void)

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



// FUNCTION 147421c14 FUN_147421c14 body=44 status=ok
// SIG undefined FUN_147421c14(void)

void FUN_147421c14(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147421c48 FUN_147421c48 body=89 status=ok
// SIG undefined FUN_147421c48(void)

undefined8 FUN_147421c48(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_141472624();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 147421ca2 FUN_147421ca2 body=140 status=ok
// SIG undefined FUN_147421ca2(void)

void FUN_147421ca2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
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
  return;
}



// FUNCTION 147421d2e FUN_147421d2e body=212 status=ok
// SIG undefined FUN_147421d2e(void)

longlong FUN_147421d2e(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"FillValue",1);
  FUN_1474409b8(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"Params0",1);
  FUN_1474409b8(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"Params1",1);
  FUN_1474409b8(param_1 + 0xf2,*(undefined8 *)(param_2 + 0x28),L"Params2",0);
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"FillTexture",1);
  return param_1;
}



// FUNCTION 147421e02 FUN_147421e02 body=44 status=ok
// SIG undefined FUN_147421e02(void)

void FUN_147421e02(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147421e4e FUN_147421e4e body=39 status=ok
// SIG undefined FUN_147421e4e(void)

void FUN_147421e4e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147421d2e(uVar1,param_1);
  return;
}



// FUNCTION 147421e76 FUN_147421e76 body=154 status=ok
// SIG undefined FUN_147421e76(void)

void FUN_147421e76(void)

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
  *(undefined8 *)((longlong)puVar1 + 0xec) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf4) = 0;
  return;
}



// FUNCTION 147421f10 FUN_147421f10 body=44 status=ok
// SIG undefined FUN_147421f10(void)

void FUN_147421f10(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147421f5c FUN_147421f5c body=89 status=ok
// SIG undefined FUN_147421f5c(void)

undefined8 FUN_147421f5c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_144a8b47e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 147421fb6 FUN_147421fb6 body=138 status=ok
// SIG undefined FUN_147421fb6(void)

void * FUN_147421fb6(void)

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



// FUNCTION 147422040 FUN_147422040 body=56 status=ok
// SIG undefined FUN_147422040(void)

undefined8 * FUN_147422040(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a384700;
  FUN_145843210();
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147422078 FUN_147422078 body=38 status=ok
// SIG undefined FUN_147422078(void)

undefined8 FUN_147422078(undefined8 param_1,int param_2)

{
  FUN_14631bd2e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742209e FUN_14742209e body=38 status=ok
// SIG undefined FUN_14742209e(void)

undefined8 FUN_14742209e(undefined8 param_1,int param_2)

{
  FUN_14631bdb4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474220c4 FUN_1474220c4 body=38 status=ok
// SIG undefined FUN_1474220c4(void)

undefined8 FUN_1474220c4(undefined8 param_1,int param_2)

{
  FUN_14631c116();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474220ea FUN_1474220ea body=38 status=ok
// SIG undefined FUN_1474220ea(void)

undefined8 FUN_1474220ea(undefined8 param_1,int param_2)

{
  FUN_14631c272();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147422110 FUN_147422110 body=138 status=ok
// SIG undefined FUN_147422110(void)

code * FUN_147422110(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"uv_xform0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d2c9ae;
}



// FUNCTION 14742219a FUN_14742219a body=138 status=ok
// SIG undefined FUN_14742219a(void)

code * FUN_14742219a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"xy_xform0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147422224;
}



// FUNCTION 147422224 FUN_147422224 body=138 status=ok
// SIG undefined FUN_147422224(void)

code * FUN_147422224(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"yscale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474222ae;
}



// FUNCTION 1474222ae FUN_1474222ae body=138 status=ok
// SIG undefined FUN_1474222ae(void)

code * FUN_1474222ae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a38651a;
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147422338;
}



// FUNCTION 147422338 FUN_147422338 body=138 status=ok
// SIG undefined FUN_147422338(void)

code * FUN_147422338(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a386522;
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474223c2;
}



// FUNCTION 1474223c2 FUN_1474223c2 body=138 status=ok
// SIG undefined FUN_1474223c2(void)

code * FUN_1474223c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a38652a;
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14742244c;
}



// FUNCTION 14742244c FUN_14742244c body=138 status=ok
// SIG undefined FUN_14742244c(void)

code * FUN_14742244c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"consta";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474224d6;
}



// FUNCTION 1474224d6 FUN_1474224d6 body=138 status=ok
// SIG undefined FUN_1474224d6(void)

code * FUN_1474224d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"samp4";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147422560;
}



// FUNCTION 147422560 FUN_147422560 body=138 status=ok
// SIG undefined FUN_147422560(void)

code * FUN_147422560(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"samp3";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474225ea;
}



// FUNCTION 1474225ea FUN_1474225ea body=138 status=ok
// SIG undefined FUN_1474225ea(void)

code * FUN_1474225ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"samp2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147422674;
}



// FUNCTION 147422674 FUN_147422674 body=138 status=ok
// SIG undefined FUN_147422674(void)

code * FUN_147422674(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"samp1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474226fe;
}



// FUNCTION 1474226fe FUN_1474226fe body=138 status=ok
// SIG undefined FUN_1474226fe(void)

code * FUN_1474226fe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"samp0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147422788;
}



// FUNCTION 147422788 FUN_147422788 body=138 status=ok
// SIG undefined FUN_147422788(void)

code * FUN_147422788(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"tex4";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147422812;
}



// FUNCTION 147422812 FUN_147422812 body=138 status=ok
// SIG undefined FUN_147422812(void)

code * FUN_147422812(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"tex3";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14742289c;
}



// FUNCTION 14742289c FUN_14742289c body=138 status=ok
// SIG undefined FUN_14742289c(void)

code * FUN_14742289c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"tex2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147422926;
}



// FUNCTION 147422926 FUN_147422926 body=138 status=ok
// SIG undefined FUN_147422926(void)

code * FUN_147422926(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"tex1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474229b0;
}



// FUNCTION 1474229b0 FUN_1474229b0 body=132 status=ok
// SIG undefined FUN_1474229b0(void)

undefined1 * FUN_1474229b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"tex0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147422a34;
}



// FUNCTION 147422a38 FUN_147422a38 body=251 status=ok
// SIG undefined FUN_147422a38(void)

longlong FUN_147422a38(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"DispatchDescInput",1);
  FUN_1474409b8(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"DispatchDescSizeDwords",1);
  FUN_1474409b8(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"DispatchDescDimensionsOffsetDwords"
                ,1);
  FUN_1474409b8(param_1 + 0xf2,*(undefined8 *)(param_2 + 0x28),L"DimensionsBufferOffsetDwords",1);
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"DispatchDimensions",1);
  FUN_147440a6c(param_1 + 0xfc,*(undefined8 *)(param_2 + 0x28),L"DispatchDescOutput",1);
  return param_1;
}



// FUNCTION 147422b34 FUN_147422b34 body=3 status=ok
// SIG undefined FUN_147422b34(void)

undefined8 FUN_147422b34(void)

{
  return 0;
}



// FUNCTION 147422b38 FUN_147422b38 body=3 status=ok
// SIG undefined FUN_147422b38(void)

undefined8 FUN_147422b38(void)

{
  return 0;
}



// FUNCTION 147422b3c FUN_147422b3c body=130 status=ok
// SIG undefined FUN_147422b3c(void)

undefined8 FUN_147422b3c(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_147432e9e();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145e0da2e();
  FUN_147440c52(param_1,param_1,uVar1,uVar2,&DAT_14ca911e0,1);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_14604bb32();
  FUN_147440c52(param_1,param_1,uVar1,uVar2,&DAT_14ca91268,1);
  return param_1;
}



// FUNCTION 147422bbe FUN_147422bbe body=3 status=ok
// SIG undefined FUN_147422bbe(void)

undefined8 FUN_147422bbe(void)

{
  return 0;
}



// FUNCTION 147422bc2 FUN_147422bc2 body=123 status=ok
// SIG undefined FUN_147422bc2(void)

undefined8 FUN_147422bc2(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_147432e9e();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145e0da2e();
  FUN_147440c52(param_1,param_1,uVar1,uVar2,&DAT_14ca911e0,1);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar3 = FUN_14605cfc6();
  FUN_147440c52(param_1,param_1,uVar1,uVar2,uVar3,1);
  return param_1;
}



// FUNCTION 147422c3e FUN_147422c3e body=138 status=ok
// SIG undefined FUN_147422c3e(void)

code * FUN_147422c3e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MipInSRV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145a5e924;
}



// FUNCTION 147422cc8 FUN_147422cc8 body=138 status=ok
// SIG undefined FUN_147422cc8(void)

code * FUN_147422cc8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MipSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eb8a9a;
}



// FUNCTION 147422d52 FUN_147422d52 body=138 status=ok
// SIG undefined FUN_147422d52(void)

code * FUN_147422d52(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ConditionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6d426;
}



// FUNCTION 147422ddc FUN_147422ddc body=138 status=ok
// SIG undefined FUN_147422ddc(void)

code * FUN_147422ddc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Offset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6d3a4;
}



// FUNCTION 147422e66 FUN_147422e66 body=138 status=ok
// SIG undefined FUN_147422e66(void)

code * FUN_147422e66(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MipOutUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000071;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f98d2e;
}



// FUNCTION 147422ef4 FUN_147422ef4 body=38 status=ok
// SIG undefined FUN_147422ef4(void)

undefined8 FUN_147422ef4(undefined8 param_1,int param_2)

{
  FUN_1401c051c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147422f26 FUN_147422f26 body=76 status=ok
// SIG undefined FUN_147422f26(void)

undefined8 * FUN_147422f26(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  *puVar1 = &PTR_FUN_14a388270;
  FUN_147422f72(puVar1 + 1,param_1 + 8);
  FUN_14742319c(puVar1 + 7,param_1 + 0x38);
  return puVar1;
}



// FUNCTION 147422f72 FUN_147422f72 body=101 status=ok
// SIG undefined FUN_147422f72(void)

longlong FUN_147422f72(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_147422fd8();
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    FUN_14742313a((undefined8 *)(param_1 + 0x20),iVar1,0);
    memcpy(*(void **)(param_1 + 0x20),_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 147422fd8 FUN_147422fd8 body=158 status=ok
// SIG undefined FUN_147422fd8(void)

undefined8 * FUN_147422fd8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147423076(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 3);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1474230d8(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 147423076 FUN_147423076 body=98 status=ok
// SIG undefined FUN_147423076(void)

void FUN_147423076(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474230d8 FUN_1474230d8 body=98 status=ok
// SIG undefined FUN_1474230d8(void)

void FUN_1474230d8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14742313a FUN_14742313a body=98 status=ok
// SIG undefined FUN_14742313a(void)

void FUN_14742313a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14742319c FUN_14742319c body=101 status=ok
// SIG undefined FUN_14742319c(void)

longlong FUN_14742319c(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_147422fd8();
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    FUN_147423202((undefined8 *)(param_1 + 0x20),iVar1,0);
    memcpy(*(void **)(param_1 + 0x20),_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 147423202 FUN_147423202 body=98 status=ok
// SIG undefined FUN_147423202(void)

void FUN_147423202(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147423264 FUN_147423264 body=71 status=ok
// SIG undefined FUN_147423264(void)

undefined8 * FUN_147423264(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a388320;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474232b4 FUN_1474232b4 body=131 status=ok
// SIG undefined FUN_1474232b4(void)

void FUN_1474232b4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 147423338 FUN_147423338 body=110 status=ok
// SIG undefined FUN_147423338(void)

void FUN_147423338(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1474232b4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1474233a8 FUN_1474233a8 body=29 status=ok
// SIG undefined FUN_1474233a8(void)

undefined8 FUN_1474233a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474233c6 FUN_1474233c6 body=132 status=ok
// SIG undefined FUN_1474233c6(void)

undefined1 * FUN_1474233c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x91;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e3fd88;
}



// FUNCTION 14742344a FUN_14742344a body=138 status=ok
// SIG undefined FUN_14742344a(void)

code * FUN_14742344a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e3840e;
}



// FUNCTION 1474234d4 FUN_1474234d4 body=138 status=ok
// SIG undefined FUN_1474234d4(void)

code * FUN_1474234d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa8000000d4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcb834;
}



// FUNCTION 14742355e FUN_14742355e body=138 status=ok
// SIG undefined FUN_14742355e(void)

code * FUN_14742355e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SRV_Y";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x98000000d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631cac4;
}



// FUNCTION 1474235e8 FUN_1474235e8 body=138 status=ok
// SIG undefined FUN_1474235e8(void)

code * FUN_1474235e8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SwapChroma";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8c000000d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcb7aa;
}



// FUNCTION 147423672 FUN_147423672 body=138 status=ok
// SIG undefined FUN_147423672(void)

code * FUN_147423672(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EOTF";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x84000000ce;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcb8be;
}



// FUNCTION 1474236fc FUN_1474236fc body=138 status=ok
// SIG undefined FUN_1474236fc(void)

code * FUN_1474236fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CSTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000cc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147423786;
}



// FUNCTION 147423786 FUN_147423786 body=132 status=ok
// SIG undefined FUN_147423786(void)

undefined1 * FUN_147423786(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xcb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14742380a;
}



// FUNCTION 14742380e FUN_14742380e body=138 status=ok
// SIG undefined FUN_14742380e(void)

code * FUN_14742380e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000010f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147423898;
}



// FUNCTION 147423898 FUN_147423898 body=138 status=ok
// SIG undefined FUN_147423898(void)

code * FUN_147423898(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x980000010e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147423922;
}



// FUNCTION 147423922 FUN_147423922 body=138 status=ok
// SIG undefined FUN_147423922(void)

code * FUN_147423922(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000010d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631cbd4;
}



// FUNCTION 1474239ac FUN_1474239ac body=138 status=ok
// SIG undefined FUN_1474239ac(void)

code * FUN_1474239ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ToneMapMethod";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x880000010b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcbb44;
}



// FUNCTION 147423a36 FUN_147423a36 body=132 status=ok
// SIG undefined FUN_147423a36(void)

undefined1 * FUN_147423a36(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x107;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147423aba;
}



// FUNCTION 147423abe FUN_147423abe body=138 status=ok
// SIG undefined FUN_147423abe(void)

code * FUN_147423abe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000134;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9c5c4;
}



// FUNCTION 147423b48 FUN_147423b48 body=138 status=ok
// SIG undefined FUN_147423b48(void)

code * FUN_147423b48(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000132;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9c53c;
}



// FUNCTION 147423bd2 FUN_147423bd2 body=138 status=ok
// SIG undefined FUN_147423bd2(void)

code * FUN_147423bd2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputWidth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000130;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9c4b8;
}



// FUNCTION 147423c60 FUN_147423c60 body=138 status=ok
// SIG undefined FUN_147423c60(void)

code * FUN_147423c60(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SRV_UV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9800000158;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147423cea;
}



// FUNCTION 147423cea FUN_147423cea body=138 status=ok
// SIG undefined FUN_147423cea(void)

code * FUN_147423cea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SRV_Y";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000157;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631cd6c;
}



// FUNCTION 147423d74 FUN_147423d74 body=138 status=ok
// SIG undefined FUN_147423d74(void)

code * FUN_147423d74(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ToneMapMethod";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8400000155;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e400a0;
}



// FUNCTION 147423dfe FUN_147423dfe body=138 status=ok
// SIG undefined FUN_147423dfe(void)

code * FUN_147423dfe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CSTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000153;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147423e88;
}



// FUNCTION 147423e88 FUN_147423e88 body=132 status=ok
// SIG undefined FUN_147423e88(void)

undefined1 * FUN_147423e88(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x152;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4009c;
}



// FUNCTION 147423f0c FUN_147423f0c body=138 status=ok
// SIG undefined FUN_147423f0c(void)

code * FUN_147423f0c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000017f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fa0354;
}



// FUNCTION 147423f96 FUN_147423f96 body=138 status=ok
// SIG undefined FUN_147423f96(void)

code * FUN_147423f96(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000017d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fa0242;
}



// FUNCTION 147424020 FUN_147424020 body=138 status=ok
// SIG undefined FUN_147424020(void)

code * FUN_147424020(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EOTF";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x840000017b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474240aa;
}



// FUNCTION 1474240aa FUN_1474240aa body=138 status=ok
// SIG undefined FUN_1474240aa(void)

code * FUN_1474240aa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputWidth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000017a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fa02ca;
}



// FUNCTION 147424134 FUN_147424134 body=132 status=ok
// SIG undefined FUN_147424134(void)

undefined1 * FUN_147424134(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x178;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1474241b8;
}



// FUNCTION 1474241bc FUN_1474241bc body=138 status=ok
// SIG undefined FUN_1474241bc(void)

code * FUN_1474241bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputWidthY";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8000001a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424246;
}



// FUNCTION 147424246 FUN_147424246 body=138 status=ok
// SIG undefined FUN_147424246(void)

code * FUN_147424246(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerP";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb0000001a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fa0662;
}



// FUNCTION 1474242d0 FUN_1474242d0 body=138 status=ok
// SIG undefined FUN_1474242d0(void)

code * FUN_1474242d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UVScaleUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000001a3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14742435a;
}



// FUNCTION 14742435a FUN_14742435a body=138 status=ok
// SIG undefined FUN_14742435a(void)

code * FUN_14742435a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UVScaleY";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88000001a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474243e4;
}



// FUNCTION 1474243e4 FUN_1474243e4 body=138 status=ok
// SIG undefined FUN_1474243e4(void)

code * FUN_1474243e4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ToneMapMethod";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x84000001a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14742446e;
}



// FUNCTION 14742446e FUN_14742446e body=138 status=ok
// SIG undefined FUN_14742446e(void)

code * FUN_14742446e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EOTF";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474244f8;
}



// FUNCTION 1474244f8 FUN_1474244f8 body=138 status=ok
// SIG undefined FUN_1474244f8(void)

code * FUN_1474244f8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CSTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000019f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424582;
}



// FUNCTION 147424582 FUN_147424582 body=132 status=ok
// SIG undefined FUN_147424582(void)

undefined1 * FUN_147424582(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147424606;
}



// FUNCTION 14742460a FUN_14742460a body=138 status=ok
// SIG undefined FUN_14742460a(void)

code * FUN_14742460a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CSTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000001d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424694;
}



// FUNCTION 147424694 FUN_147424694 body=138 status=ok
// SIG undefined FUN_147424694(void)

code * FUN_147424694(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Sampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9c8ce;
}



// FUNCTION 147424722 FUN_147424722 body=138 status=ok
// SIG undefined FUN_147424722(void)

code * FUN_147424722(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EOTF";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000001f3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9e67e;
}



// FUNCTION 1474247b0 FUN_1474247b0 body=138 status=ok
// SIG undefined FUN_1474247b0(void)

code * FUN_1474247b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LumaTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000212;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631d124;
}



// FUNCTION 14742483e FUN_14742483e body=138 status=ok
// SIG undefined FUN_14742483e(void)

code * FUN_14742483e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000238;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474248c8;
}



// FUNCTION 1474248c8 FUN_1474248c8 body=138 status=ok
// SIG undefined FUN_1474248c8(void)

code * FUN_1474248c8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Width";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4400000237;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9cc60;
}



// FUNCTION 147424956 FUN_147424956 body=138 status=ok
// SIG undefined FUN_147424956(void)

code * FUN_147424956(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"USampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000025d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e403b4;
}



// FUNCTION 1474249e0 FUN_1474249e0 body=138 status=ok
// SIG undefined FUN_1474249e0(void)

code * FUN_1474249e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000025b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631d2bc;
}



// FUNCTION 147424a6a FUN_147424a6a body=138 status=ok
// SIG undefined FUN_147424a6a(void)

code * FUN_147424a6a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"YTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000259;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4043e;
}



// FUNCTION 147424af4 FUN_147424af4 body=138 status=ok
// SIG undefined FUN_147424af4(void)

code * FUN_147424af4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrgbToLinear";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000257;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424b7e;
}



// FUNCTION 147424b7e FUN_147424b7e body=132 status=ok
// SIG undefined FUN_147424b7e(void)

undefined1 * FUN_147424b7e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x256;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e403b0;
}



// FUNCTION 147424c02 FUN_147424c02 body=138 status=ok
// SIG undefined FUN_147424c02(void)

code * FUN_147424c02(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputDimY";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa400000287;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424c8c;
}



// FUNCTION 147424c8c FUN_147424c8c body=138 status=ok
// SIG undefined FUN_147424c8c(void)

code * FUN_147424c8c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputDimX";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000286;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424d16;
}



// FUNCTION 147424d16 FUN_147424d16 body=138 status=ok
// SIG undefined FUN_147424d16(void)

code * FUN_147424d16(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9800000285;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e3de0c;
}



// FUNCTION 147424da0 FUN_147424da0 body=138 status=ok
// SIG undefined FUN_147424da0(void)

code * FUN_147424da0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SwapChroma";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000283;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424e2a;
}


