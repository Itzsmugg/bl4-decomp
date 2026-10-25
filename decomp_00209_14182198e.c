// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14182198e FUN_14182198e body=105 status=ok
// SIG undefined FUN_14182198e(void)

undefined8 * FUN_14182198e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad97308;
  if (*(int *)((longlong)param_1 + 0x34) != -1) {
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = 0;
    param_1[6] = 0xffffffff00000000;
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418219f8 FUN_1418219f8 body=468 status=ok
// SIG undefined FUN_1418219f8(void)

void FUN_1418219f8(longlong param_1,longlong param_2)

{
  void *_Src;
  size_t _Size;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_58;
  undefined4 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    if (DAT_14cb39ca0 == 0) {
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_14638c6c0;
      local_78 = &LAB_14811044c;
      local_80 = &LAB_1407f5cf8;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x8e0;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
    }
    if ((*(int *)(DAT_14cb39ca0 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) == DAT_14cb39ca0 + 0x30)) goto LAB_141821a5a;
  }
  param_2 = 0;
LAB_141821a5a:
  if (*(int *)(param_1 + 0x34) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
  }
  local_50 = *(undefined4 *)(param_1 + 0x10);
  local_58 = *(undefined8 *)(param_1 + 8);
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_1 + 0x20);
  _Size = (size_t)local_40;
  _Src = *(void **)(param_1 + 0x18);
  if (_Size == 0) {
    local_3c = 0;
  }
  else {
    FUN_1447a127e(&local_48,local_40,0);
    memcpy(local_48,_Src,_Size);
  }
  FUN_14024c89e(param_2 + 0x678,*(undefined8 *)(param_1 + 0x28),&local_58,0);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141821be8 FUN_141821be8 body=71 status=ok
// SIG undefined FUN_141821be8(void)

undefined8 * FUN_141821be8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad98940;
  FUN_1401abe4f(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141821c2f FUN_141821c2f body=49 status=ok
// SIG undefined FUN_141821c2f(void)

longlong FUN_141821c2f(void)

{
  if (DAT_14cb39ca8 == 0) {
    FUN_14073dd9a(&DAT_14cb39ca8,&PTR_LAB_14ada3820);
  }
  return DAT_14cb39ca8;
}



// FUNCTION 141821c60 FUN_141821c60 body=96 status=ok
// SIG undefined FUN_141821c60(void)

void FUN_141821c60(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  FUN_1448284b2();
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141821cc2 FUN_141821cc2 body=74 status=ok
// SIG undefined FUN_141821cc2(void)

void FUN_141821cc2(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1404e0f62(local_28,param_2,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141821d0e FUN_141821d0e body=674 status=ok
// SIG undefined FUN_141821d0e(void)

void FUN_141821d0e(longlong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 0xf2) & 4) != 0) {
    if ((*(byte *)((longlong)param_1 + 0x7cc) & 8) != 0) {
      local_28 = param_1[0xfc];
      local_38 = (undefined4)param_1[0xfa];
      uStack_34 = *(undefined4 *)((longlong)param_1 + 0x7d4);
      uStack_30 = (undefined4)param_1[0xfb];
      uStack_2c = *(undefined4 *)((longlong)param_1 + 0x7dc);
      uVar2 = param_1[7];
      if (uVar2 < 0xffffffff00000000) {
        plVar6 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar6 = (longlong *)0x0;
        }
        (**(code **)(*plVar6 + 0x58))(local_38,param_1,uVar2,5);
      }
      else {
        uVar7 = (uint)uVar2;
        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
          puVar4 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar4 = DAT_14c998080;
          }
          if ((*(uint *)(puVar4 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
            lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
            puVar5 = *(uint **)(lVar3 + 0x18);
            if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
              puVar5 = (uint *)(lVar3 + 8);
            }
            *puVar5 = *puVar5 | 0x20;
            *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
          }
        }
      }
      param_1[0x35] = local_28;
      param_1[0x33] = CONCAT44(uStack_34,local_38);
      param_1[0x34] = CONCAT44(uStack_2c,uStack_30);
      local_48 = param_1[0xff];
      local_58 = (undefined4)param_1[0xfd];
      uStack_54 = *(undefined4 *)((longlong)param_1 + 0x7ec);
      uStack_50 = (undefined4)param_1[0xfe];
      uStack_4c = *(undefined4 *)((longlong)param_1 + 0x7f4);
      uVar2 = param_1[7];
      if (uVar2 < 0xffffffff00000000) {
        plVar6 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar6 = (longlong *)0x0;
        }
        (**(code **)(*plVar6 + 0x58))(local_58,param_1,uVar2,6);
      }
      else {
        uVar7 = (uint)uVar2;
        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
          puVar4 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar4 = DAT_14c998080;
          }
          if ((*(uint *)(puVar4 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
            lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
            puVar5 = *(uint **)(lVar3 + 0x18);
            if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
              puVar5 = (uint *)(lVar3 + 8);
            }
            *puVar5 = *puVar5 | 0x40;
            *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
          }
        }
      }
      param_1[0x38] = local_48;
      param_1[0x36] = CONCAT44(uStack_54,local_58);
      param_1[0x37] = CONCAT44(uStack_4c,uStack_50);
      local_78 = (undefined4)param_1[0x100];
      uStack_74 = *(undefined4 *)((longlong)param_1 + 0x804);
      uStack_70 = (undefined4)param_1[0x101];
      uStack_6c = *(undefined4 *)((longlong)param_1 + 0x80c);
      local_68 = param_1[0x102];
      FUN_14084f00a(param_1);
      *(byte *)((longlong)param_1 + 0x7cc) = *(byte *)((longlong)param_1 + 0x7cc) & 0xf7;
    }
    lVar3 = param_1[0x16];
    if ((((lVar3 == 0) && (lVar3 = FUN_1448abda6(param_1), lVar3 == 0)) ||
        (bVar1 = *(byte *)(lVar3 + 0x152), bVar1 == 1)) ||
       ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      local_7c = 0;
      (**(code **)(*param_1 + 0x4a0))(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141821fc0 FUN_141821fc0 body=262 status=ok
// SIG undefined FUN_141821fc0(void)

undefined8
FUN_141821fc0(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,undefined8 param_5
             ,byte param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_98 = 0;
  uStack_c0 = (ulonglong)param_4;
  local_b0 = param_5;
  local_b8 = (ushort)param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d8 = param_2;
  local_d0 = param_1;
  local_c8 = param_3;
  uVar1 = FUN_1402710dd(&local_d8);
  if (local_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418220de FUN_1418220de body=244 status=ok
// SIG undefined FUN_1418220de(void)

void FUN_1418220de(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  FUN_140670b96();
  uVar4 = *(uint *)(param_1 + 0x218);
  if ((int)*(uint *)(param_1 + 0x2b0) < (int)*(uint *)(param_1 + 0x218)) {
    uVar4 = *(uint *)(param_1 + 0x2b0);
  }
  if (0 < (int)uVar4) {
    uVar6 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x2a8) + uVar6 * 4);
      lVar7 = (longlong)iVar1;
      if ((-1 < lVar7) && (iVar1 < *(int *)(param_1 + 0x40))) {
        lVar2 = *(longlong *)(param_1 + 0x38);
        lVar3 = *(longlong *)(param_1 + 0x210);
        lVar5 = *(longlong *)(lVar2 + lVar7 * 8);
        if (DAT_14c950c29 == '\x01') {
          if (lVar5 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar5 = *(longlong *)(lVar2 + lVar7 * 8);
          }
        }
        *(longlong *)(lVar3 + uVar6 * 8) = lVar5;
      }
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  uVar4 = *(uint *)(param_1 + 0x208);
  if ((int)*(uint *)(param_1 + 0x2c0) < (int)*(uint *)(param_1 + 0x208)) {
    uVar4 = *(uint *)(param_1 + 0x2c0);
  }
  if (0 < (int)uVar4) {
    uVar6 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x2b8) + uVar6 * 4);
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x40))) &&
         (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8), lVar7 != 0)) {
        lVar2 = *(longlong *)(param_1 + 0x200);
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar7);
        }
        *(longlong *)(lVar2 + uVar6 * 8) = lVar7;
      }
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  return;
}



// FUNCTION 1418221d2 FUN_1418221d2 body=242 status=ok
// SIG undefined FUN_1418221d2(void)

void FUN_1418221d2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1448b5a3e();
  if (0 < *(int *)(param_1 + 0x218)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x210);
      if ((*(longlong *)(lVar1 + lVar3 * 8) != 0) &&
         ((**(code **)(*param_2 + 0x88))(param_2,lVar1 + lVar2,0,0),
         *(longlong *)(lVar1 + lVar3 * 8) == 0)) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x210) + lVar3 * 8) = 0;
        *(byte *)(param_1 + 0x250) = *(byte *)(param_1 + 0x250) | 4;
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (lVar3 < *(int *)(param_1 + 0x218));
  }
  if (0 < *(int *)(param_1 + 0x208)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x200);
      if ((*(longlong *)(lVar1 + lVar3 * 8) != 0) &&
         ((**(code **)(*param_2 + 0x88))(param_2,lVar1 + lVar2,0,0),
         *(longlong *)(lVar1 + lVar3 * 8) == 0)) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x200) + lVar3 * 8) = 0;
        *(byte *)(param_1 + 0x250) = *(byte *)(param_1 + 0x250) | 2;
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (lVar3 < *(int *)(param_1 + 0x208));
  }
  return;
}



// FUNCTION 1418222c4 FUN_1418222c4 body=155 status=ok
// SIG undefined FUN_1418222c4(void)

void FUN_1418222c4(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  
  *(undefined8 *)(param_1 + 0x58) = param_2;
  uVar3 = *param_3;
  lVar4 = param_3[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x280) = uVar3;
  *(longlong *)(param_1 + 0x288) = lVar4;
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
  FUN_14018da78(param_1 + 0x78,param_2,param_4,1);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x58) + 0x194) >> 2 & 1;
  }
  *(byte *)(param_1 + 0x1e4) = bVar6;
  return;
}



// FUNCTION 14182235f FUN_14182235f body=49 status=ok
// SIG undefined FUN_14182235f(void)

longlong FUN_14182235f(void)

{
  if (DAT_14cb3a7a0 == 0) {
    FUN_14073dd9a(&DAT_14cb3a7a0,&PTR_FUN_14adafe28);
  }
  return DAT_14cb3a7a0;
}



// FUNCTION 141822390 FUN_141822390 body=171 status=ok
// SIG undefined FUN_141822390(void)

void FUN_141822390(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar2 = FUN_1400439fc(param_1,0,&local_11);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  FUN_144757f48(param_1,1);
  uVar1 = *(uint *)(param_1 + 6);
  *(uint *)(param_1 + 6) = uVar1 | 1;
  if ((~uVar1 & 4) == 0) {
    (**(code **)(*param_1 + 0x428))(param_1);
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182243c FUN_14182243c body=179 status=ok
// SIG undefined FUN_14182243c(void)

void FUN_14182243c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  plVar2 = (longlong *)param_2[3];
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)*param_2;
  }
  *(uint *)(plVar2 + 2) = (int)plVar2[2] + 0xfU & 0xfffffff0;
  FUN_14015b986();
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar5 = (longlong)iVar1 * 0x30;
  lVar4 = plVar2[2];
  *(undefined2 **)(lVar3 + lVar5) = puVar6;
  *(undefined2 **)(lVar3 + 8 + lVar5) = &DAT_149dfb77a;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0x7b;
  *(int *)(lVar3 + 0x14 + lVar5) = (int)lVar4;
  *(undefined2 *)(lVar3 + 0x18 + lVar5) = 0x14;
  *(undefined1 **)(lVar3 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = 0;
  *(undefined **)(lVar3 + 0x28 + lVar5) = &DAT_14cb3adb0;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 0x20;
  return;
}



// FUNCTION 1418224ef FUN_1418224ef body=112 status=ok
// SIG undefined FUN_1418224ef(void)

void FUN_1418224ef(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_14007ca06();
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14adb0b80;
  puVar1[7] = &PTR_FUN_14adb0fc0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 8));
  *(undefined1 *)(puVar1 + 9) = 1;
  *puVar1 = &PTR_FUN_14adb1800;
  puVar1[7] = &PTR_LAB_14adb1c40;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 14182255f FUN_14182255f body=112 status=ok
// SIG undefined FUN_14182255f(void)

void FUN_14182255f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_14007ca06();
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14adb0b80;
  puVar1[7] = &PTR_FUN_14adb0fc0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 8));
  *(undefined1 *)(puVar1 + 9) = 1;
  *puVar1 = &PTR_FUN_14adb1dd0;
  puVar1[7] = &PTR_LAB_14adb2210;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 1418225cf FUN_1418225cf body=112 status=ok
// SIG undefined FUN_1418225cf(void)

void FUN_1418225cf(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_14007ca06();
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14adb0b80;
  puVar1[7] = &PTR_FUN_14adb0fc0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 8));
  *(undefined1 *)(puVar1 + 9) = 1;
  *puVar1 = &PTR_FUN_14adb2390;
  puVar1[7] = &PTR_LAB_14adb27d0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 14182263f FUN_14182263f body=112 status=ok
// SIG undefined FUN_14182263f(void)

void FUN_14182263f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_14007ca06();
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14adb0b80;
  puVar1[7] = &PTR_FUN_14adb0fc0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 8));
  *(undefined1 *)(puVar1 + 9) = 1;
  *puVar1 = &PTR_FUN_14adb2960;
  puVar1[7] = &PTR_LAB_14adb2da0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 1418226af FUN_1418226af body=112 status=ok
// SIG undefined FUN_1418226af(void)

void FUN_1418226af(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_14007ca06();
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14adb0b80;
  puVar1[7] = &PTR_FUN_14adb0fc0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 8));
  *(undefined1 *)(puVar1 + 9) = 1;
  *puVar1 = &PTR_FUN_14adb34e0;
  puVar1[7] = &PTR_LAB_14adb3920;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 14182271f FUN_14182271f body=49 status=ok
// SIG undefined FUN_14182271f(void)

longlong FUN_14182271f(void)

{
  if (DAT_14cb3aa58 == 0) {
    FUN_14073dd9a(&DAT_14cb3aa58,&PTR_LAB_14adb8f90);
  }
  return DAT_14cb3aa58;
}



// FUNCTION 141822750 FUN_141822750 body=210 status=ok
// SIG undefined FUN_141822750(void)

void FUN_141822750(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  bVar4 = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14adbc400;
  puVar3[2] = param_1;
  *(undefined1 *)((longlong)puVar3 + 0x19) = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 9) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x54) = 0;
  puVar3[0xc] = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0;
  puVar3[0x12] = 0;
  *(undefined4 *)(puVar3 + 0x13) = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0xa4) = 0;
  puVar3[0x16] = 0;
  *(undefined4 *)(puVar3 + 0x17) = 0;
  bVar1 = *(byte *)(param_1 + 0x48);
  *(bool *)(puVar3 + 3) = (bVar1 & 0xfd) == 1;
  if ((bVar1 & 0xfe) == 2) {
    bVar4 = *(byte *)(param_1 + 0x30) >> 1 & 1;
  }
  *(byte *)((longlong)puVar3 + 0x19) = bVar4;
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if ((puVar2 != puVar3) && (*(undefined8 **)(param_1 + 0x28) = puVar3, puVar2 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_140af31ba(param_1);
  return;
}



// FUNCTION 141822822 FUN_141822822 body=210 status=ok
// SIG undefined FUN_141822822(void)

void FUN_141822822(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  bVar4 = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14adbcb40;
  puVar3[2] = param_1;
  *(undefined1 *)((longlong)puVar3 + 0x19) = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 9) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x54) = 0;
  puVar3[0xc] = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0;
  puVar3[0x12] = 0;
  *(undefined4 *)(puVar3 + 0x13) = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0xa4) = 0;
  puVar3[0x16] = 0;
  *(undefined4 *)(puVar3 + 0x17) = 0;
  bVar1 = *(byte *)(param_1 + 0x48);
  *(bool *)(puVar3 + 3) = (bVar1 & 0xfd) == 1;
  if ((bVar1 & 0xfe) == 2) {
    bVar4 = *(byte *)(param_1 + 0x30) >> 1 & 1;
  }
  *(byte *)((longlong)puVar3 + 0x19) = bVar4;
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if ((puVar2 != puVar3) && (*(undefined8 **)(param_1 + 0x28) = puVar3, puVar2 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_140af31ba(param_1);
  return;
}



// FUNCTION 1418228f4 FUN_1418228f4 body=210 status=ok
// SIG undefined FUN_1418228f4(void)

void FUN_1418228f4(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  bVar4 = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14adbd1b0;
  puVar3[2] = param_1;
  *(undefined1 *)((longlong)puVar3 + 0x19) = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 9) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x54) = 0;
  puVar3[0xc] = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0;
  puVar3[0x12] = 0;
  *(undefined4 *)(puVar3 + 0x13) = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0xa4) = 0;
  puVar3[0x16] = 0;
  *(undefined4 *)(puVar3 + 0x17) = 0;
  bVar1 = *(byte *)(param_1 + 0x48);
  *(bool *)(puVar3 + 3) = (bVar1 & 0xfd) == 1;
  if ((bVar1 & 0xfe) == 2) {
    bVar4 = *(byte *)(param_1 + 0x30) >> 1 & 1;
  }
  *(byte *)((longlong)puVar3 + 0x19) = bVar4;
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if ((puVar2 != puVar3) && (*(undefined8 **)(param_1 + 0x28) = puVar3, puVar2 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_140af31ba(param_1);
  return;
}



// FUNCTION 1418229c6 FUN_1418229c6 body=210 status=ok
// SIG undefined FUN_1418229c6(void)

void FUN_1418229c6(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  bVar4 = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14adbd830;
  puVar3[2] = param_1;
  *(undefined1 *)((longlong)puVar3 + 0x19) = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 9) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x54) = 0;
  puVar3[0xc] = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0;
  puVar3[0x12] = 0;
  *(undefined4 *)(puVar3 + 0x13) = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0xa4) = 0;
  puVar3[0x16] = 0;
  *(undefined4 *)(puVar3 + 0x17) = 0;
  bVar1 = *(byte *)(param_1 + 0x48);
  *(bool *)(puVar3 + 3) = (bVar1 & 0xfd) == 1;
  if ((bVar1 & 0xfe) == 2) {
    bVar4 = *(byte *)(param_1 + 0x30) >> 1 & 1;
  }
  *(byte *)((longlong)puVar3 + 0x19) = bVar4;
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if ((puVar2 != puVar3) && (*(undefined8 **)(param_1 + 0x28) = puVar3, puVar2 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_140af31ba(param_1);
  return;
}



// FUNCTION 141822a98 FUN_141822a98 body=210 status=ok
// SIG undefined FUN_141822a98(void)

void FUN_141822a98(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  bVar4 = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14adbf840;
  puVar3[2] = param_1;
  *(undefined1 *)((longlong)puVar3 + 0x19) = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 9) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x54) = 0;
  puVar3[0xc] = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0;
  puVar3[0x12] = 0;
  *(undefined4 *)(puVar3 + 0x13) = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0xa4) = 0;
  puVar3[0x16] = 0;
  *(undefined4 *)(puVar3 + 0x17) = 0;
  bVar1 = *(byte *)(param_1 + 0x48);
  *(bool *)(puVar3 + 3) = (bVar1 & 0xfd) == 1;
  if ((bVar1 & 0xfe) == 2) {
    bVar4 = *(byte *)(param_1 + 0x30) >> 1 & 1;
  }
  *(byte *)((longlong)puVar3 + 0x19) = bVar4;
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if ((puVar2 != puVar3) && (*(undefined8 **)(param_1 + 0x28) = puVar3, puVar2 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_140af31ba(param_1);
  return;
}



// FUNCTION 141822b6a FUN_141822b6a body=112 status=ok
// SIG undefined FUN_141822b6a(void)

void FUN_141822b6a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_14007ca06();
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14adb0b80;
  puVar1[7] = &PTR_FUN_14adb0fc0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 8));
  *(undefined1 *)(puVar1 + 9) = 1;
  *puVar1 = &PTR_FUN_14adb9440;
  puVar1[7] = &PTR_LAB_14adb9880;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 141822c08 FUN_141822c08 body=628 status=ok
// SIG undefined FUN_141822c08(void)

undefined8 * FUN_141822c08(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  *param_1 = &PTR_FUN_14ada7f10;
  lVar5 = param_1[0x24];
  if (lVar5 != 0) {
    param_1[0x24] = 0;
    LOCK();
    piVar2 = (int *)(lVar5 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  lVar5 = param_1[0x25];
  if (lVar5 != 0) {
    param_1[0x25] = 0;
    LOCK();
    piVar2 = (int *)(lVar5 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  lVar5 = param_1[0xe];
  if (lVar5 != 0) {
    param_1[0xe] = 0;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  plVar8 = (longlong *)param_1[0x51];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    LOCK();
    piVar2 = (int *)(param_1[0x26] + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  if (param_1[0x25] != 0) {
    LOCK();
    piVar2 = (int *)(param_1[0x25] + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  if (param_1[0x24] != 0) {
    LOCK();
    piVar2 = (int *)(param_1[0x24] + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14006c2ae(param_1 + 0xf);
  if (param_1[0xe] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xe] + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[4] != 0) {
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



// FUNCTION 141822e7c FUN_141822e7c body=99 status=ok
// SIG undefined FUN_141822e7c(void)

undefined8 * FUN_141822e7c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adb1800;
  param_1[7] = &PTR_LAB_14adb1c40;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14adb0b80;
  param_1[7] = &PTR_FUN_14adb0fc0;
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141822ee0 FUN_141822ee0 body=99 status=ok
// SIG undefined FUN_141822ee0(void)

undefined8 * FUN_141822ee0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adb1dd0;
  param_1[7] = &PTR_LAB_14adb2210;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14adb0b80;
  param_1[7] = &PTR_FUN_14adb0fc0;
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141822f44 FUN_141822f44 body=99 status=ok
// SIG undefined FUN_141822f44(void)

undefined8 * FUN_141822f44(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adb2390;
  param_1[7] = &PTR_LAB_14adb27d0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14adb0b80;
  param_1[7] = &PTR_FUN_14adb0fc0;
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141822fa8 FUN_141822fa8 body=99 status=ok
// SIG undefined FUN_141822fa8(void)

undefined8 * FUN_141822fa8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adb2960;
  param_1[7] = &PTR_LAB_14adb2da0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14adb0b80;
  param_1[7] = &PTR_FUN_14adb0fc0;
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182300c FUN_14182300c body=99 status=ok
// SIG undefined FUN_14182300c(void)

undefined8 * FUN_14182300c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adb34e0;
  param_1[7] = &PTR_LAB_14adb3920;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14adb0b80;
  param_1[7] = &PTR_FUN_14adb0fc0;
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141823070 FUN_141823070 body=99 status=ok
// SIG undefined FUN_141823070(void)

undefined8 * FUN_141823070(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adb9440;
  param_1[7] = &PTR_LAB_14adb9880;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14adb0b80;
  param_1[7] = &PTR_FUN_14adb0fc0;
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418230d4 FUN_1418230d4 body=699 status=ok
// SIG undefined FUN_1418230d4(void)

void FUN_1418230d4(longlong param_1,longlong *param_2,char param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  uint *puVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  
  if (param_3 == '\0') {
    lVar17 = *param_2;
    uVar12 = (uint)((ulonglong)lVar17 >> 0x10);
    uVar7 = (uint)lVar17 & 0xffff;
    puVar5 = (ulonglong *)FUN_144741050(param_2 + 1);
    uVar2 = *(undefined1 *)((longlong)puVar5 + 10);
    uVar19 = ((uint)(*puVar5 >> 0x14) & 0xffff ^ (uint)(*puVar5 >> 4)) * -0x7a143595;
    uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
    uVar3 = FUN_144a78877(uVar19 >> 0x10 ^ uVar19,(short)puVar5[1]);
    uVar3 = FUN_144a78877(uVar3,uVar2);
    uVar12 = FUN_144a78877(uVar3,((uint)lVar17 << 0x10 | uVar7) + (int)((ulonglong)lVar17 >> 0x20) +
                                 (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar7 >> 4));
    if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
      lVar17 = param_1 + 0xc0;
      if (*(longlong *)(param_1 + 200) != 0) {
        lVar17 = *(longlong *)(param_1 + 200);
      }
      iVar4 = *(int *)(lVar17 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & uVar12) * 4);
      if (iVar4 != -1) {
        do {
          plVar6 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar4 * 0x48);
          if ((*plVar6 == *param_2) &&
             (*(int *)(*(longlong *)(param_1 + 0x88) + 8 + (longlong)iVar4 * 0x48) ==
              (int)param_2[1])) goto LAB_141823311;
          iVar4 = (int)plVar6[8];
        } while (iVar4 != -1);
      }
    }
    plVar6 = (longlong *)0x0;
LAB_141823311:
    plVar9 = plVar6 + 4;
    if (plVar6 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = param_2;
    }
LAB_14182326c:
    uVar14 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xb0);
    if (iVar4 == 0) {
      uVar11 = 1;
      uVar8 = 0;
      iVar18 = 0;
      uVar13 = 0;
    }
    else {
      puVar15 = *(uint **)(param_1 + 0xa8);
      if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
        puVar15 = (uint *)(param_1 + 0x98);
      }
      uVar12 = *puVar15;
      if (uVar12 == 0) {
        iVar18 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar18 = iVar4 + -1;
        }
        uVar8 = 0;
        uVar11 = (ulonglong)(uint)(iVar18 >> 5);
        if (iVar18 >> 5 < 1) {
          uVar11 = uVar8;
        }
        uVar13 = 0;
        do {
          if (uVar11 == uVar8) goto LAB_14182323c;
          uVar13 = (ulonglong)((int)uVar13 + 0x20);
          uVar12 = puVar15[uVar8 + 1];
          uVar8 = uVar8 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar8 = 0;
        uVar13 = 0;
      }
      uVar11 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar11 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar18 = ((int)uVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar18) {
        iVar18 = iVar4;
      }
    }
    if (iVar18 < iVar4) {
      iVar16 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar16 = iVar4 + -1;
      }
      iVar16 = iVar16 >> 5;
      uVar12 = 0xffffffff;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar18 * 0x48) == *param_2) {
          plVar9 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar18 * 0x48 + 0x20);
          goto LAB_14182326c;
        }
        uVar12 = uVar12 & ~(uint)uVar11;
        puVar15 = *(uint **)(param_1 + 0xa8);
        if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
          puVar15 = (uint *)(param_1 + 0x98);
        }
        iVar18 = (int)uVar8;
        lVar17 = (longlong)iVar18;
        uVar19 = puVar15[lVar17] & uVar12;
        if (uVar19 == 0) {
          iVar10 = iVar16;
          if (iVar16 < iVar18) {
            iVar10 = iVar18;
          }
          if (iVar16 <= iVar18) break;
          uVar13 = (ulonglong)((int)uVar13 + 0x20);
          lVar20 = 0;
          while (uVar19 = puVar15[lVar17 + lVar20 + 1], uVar19 == 0) {
            uVar13 = (ulonglong)((int)uVar13 + 0x20);
            lVar20 = lVar20 + 1;
            if (iVar10 - lVar17 == lVar20) goto LAB_14182323c;
          }
          uVar8 = (ulonglong)(iVar18 + (int)lVar20 + 1);
          uVar12 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar19 & uVar19);
        uVar1 = uVar11 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar18 = ((int)uVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      } while (iVar18 < iVar4);
    }
LAB_14182323c:
    uVar14 = CONCAT71((int7)(uVar13 >> 8),1);
    plVar9 = param_2;
  }
  FUN_1448b2610(param_1,plVar9,uVar14);
  return;
}



// FUNCTION 1418233ac FUN_1418233ac body=29 status=ok
// SIG undefined FUN_1418233ac(void)

undefined8 FUN_1418233ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418233ca FUN_1418233ca body=101 status=ok
// SIG undefined FUN_1418233ca(void)

void FUN_1418233ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbbd20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 141823430 FUN_141823430 body=101 status=ok
// SIG undefined FUN_141823430(void)

void FUN_141823430(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbbd90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 141823496 FUN_141823496 body=226 status=ok
// SIG undefined FUN_141823496(void)

void FUN_141823496(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 141823578 FUN_141823578 body=269 status=ok
// SIG undefined FUN_141823578(void)

void FUN_141823578(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141823686 FUN_141823686 body=978 status=ok
// SIG undefined FUN_141823686(void)

undefined4 * FUN_141823686(undefined4 *param_1,longlong *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14021a968(&DAT_14cb3a428,local_50);
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined8 *)param_2[1];
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar2 + 1);
  *local_48 = *puVar2;
  local_48[2] = 0;
  iVar10 = *(int *)(puVar2 + 3);
  _Src = (void *)puVar2[2];
  *(int *)(local_48 + 3) = iVar10;
  if ((longlong)iVar10 == 0) {
    *(undefined4 *)((longlong)local_48 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(local_48 + 2,iVar10,0);
    memcpy((void *)local_48[2],_Src,(longlong)iVar10);
  }
  *(undefined4 *)(local_48 + 5) = *(undefined4 *)(puVar3 + 1);
  local_48[4] = *puVar3;
  local_48[6] = 0;
  local_48[6] = puVar3[2];
  puVar3[2] = 0;
  *(undefined4 *)(local_48 + 7) = *(undefined4 *)(puVar3 + 3);
  *(undefined4 *)((longlong)local_48 + 0x3c) = *(undefined4 *)((longlong)puVar3 + 0x1c);
  puVar3[3] = 0;
  *(undefined4 *)(local_48 + 8) = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = *local_48;
  uVar7 = (uint)((ulonglong)uVar4 >> 0x10);
  uVar12 = (uint)uVar4 & 0xffff;
  uVar15 = ((uint)uVar4 << 0x10 | uVar12) + (int)((ulonglong)uVar4 >> 0x20) +
           (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar12 >> 4);
  puVar8 = (ulonglong *)FUN_144741050(local_48 + 1);
  uVar1 = (ushort)puVar8[1];
  uVar7 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = (uint)(uVar1 >> 0xd) ^ (uVar7 >> 0x10 ^ uVar7) - (uint)uVar1;
  uVar12 = uVar7 << 8 ^ (-0x61c88647 - uVar7) - (uint)uVar1;
  uVar13 = uVar12 >> 0xd ^ (uVar1 - uVar7) - uVar12;
  uVar7 = uVar13 >> 0xc ^ (uVar7 - uVar12) - uVar13;
  uVar12 = uVar7 << 0x10 ^ (uVar12 - uVar13) - uVar7;
  uVar13 = uVar12 >> 5 ^ (uVar13 - uVar7) - uVar12;
  uVar14 = uVar13 >> 3 ^ (uVar7 - uVar12) - uVar13;
  uVar7 = uVar14 << 10 ^ (uVar12 - uVar13) - uVar14;
  uVar7 = uVar7 >> 0xf ^ uVar13 - (uVar14 + uVar7);
  iVar10 = uVar7 - *(byte *)((longlong)puVar8 + 10);
  uVar12 = iVar10 * 0x100 ^ 0x9e3779b9 - uVar7;
  uVar13 = uVar12 >> 0xd ^ ((uint)*(byte *)((longlong)puVar8 + 10) - iVar10) - uVar12;
  uVar7 = uVar13 >> 0xc ^ (iVar10 - uVar12) - uVar13;
  uVar12 = uVar7 << 0x10 ^ (uVar12 - uVar13) - uVar7;
  uVar14 = uVar12 >> 5 ^ (uVar13 - uVar7) - uVar12;
  uVar13 = uVar14 >> 3 ^ (uVar7 - uVar12) - uVar14;
  uVar7 = uVar13 << 10 ^ (uVar12 - uVar14) - uVar13;
  uVar13 = uVar15 >> 0xd ^ (uVar7 >> 0xf ^ uVar14 - (uVar13 + uVar7)) - uVar15;
  uVar12 = uVar13 << 8 ^ (-0x61c88647 - uVar15) - uVar13;
  uVar7 = uVar12 >> 0xd ^ (uVar15 - uVar13) - uVar12;
  uVar14 = uVar7 >> 0xc ^ (uVar13 - uVar12) - uVar7;
  uVar13 = uVar14 << 0x10 ^ (uVar12 - uVar7) - uVar14;
  uVar12 = uVar13 >> 5 ^ (uVar7 - uVar14) - uVar13;
  uVar7 = uVar12 >> 3 ^ (uVar14 - uVar13) - uVar12;
  uVar13 = uVar7 << 10 ^ (uVar13 - uVar12) - uVar7;
  uVar7 = uVar13 >> 0xf ^ uVar12 - (uVar7 + uVar13);
  local_68 = 0;
  cVar6 = FUN_14021a7f0(&DAT_14cb3a428,uVar7,local_48,&local_54);
  if (cVar6 == '\0') {
    uVar12 = DAT_14cb3a430 - DAT_14cb3a45c;
    if (uVar12 < 4) {
      iVar10 = 1;
    }
    else {
      uVar9 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar10 <= DAT_14cb3a470)) {
      uVar7 = DAT_14cb3a470 - 1U & uVar7;
      *(uint *)((longlong)local_48 + 0x44) = uVar7;
      puVar11 = DAT_14cb3a468;
      if (DAT_14cb3a468 == (undefined *)0x0) {
        puVar11 = &DAT_14cb3a460;
      }
      *(undefined4 *)(local_48 + 8) =
           *(undefined4 *)(puVar11 + ((longlong)DAT_14cb3a470 - 1U & (longlong)(int)uVar7) * 4);
      puVar11 = DAT_14cb3a468;
      if (DAT_14cb3a468 == (undefined *)0x0) {
        puVar11 = &DAT_14cb3a460;
      }
      *(undefined4 *)(puVar11 + ((longlong)DAT_14cb3a470 - 1U & (longlong)(int)uVar7) * 4) =
           local_54;
    }
    else {
      DAT_14cb3a470 = iVar10;
      FUN_14021b592(&DAT_14cb3a428);
    }
  }
  *param_1 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141823a5a FUN_141823a5a body=1013 status=ok
// SIG undefined FUN_141823a5a(void)

undefined4 * FUN_141823a5a(undefined4 *param_1,longlong *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14021a968(&DAT_14cb3a3d8,local_50);
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined8 *)param_2[1];
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar2 + 1);
  *local_48 = *puVar2;
  local_48[2] = 0;
  iVar11 = *(int *)(puVar2 + 3);
  pvVar4 = (void *)puVar2[2];
  *(int *)(local_48 + 3) = iVar11;
  if ((longlong)iVar11 == 0) {
    *(undefined4 *)((longlong)local_48 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(local_48 + 2,iVar11,0);
    memcpy((void *)local_48[2],pvVar4,(longlong)iVar11);
  }
  *(undefined4 *)(local_48 + 5) = *(undefined4 *)(puVar3 + 1);
  local_48[4] = *puVar3;
  local_48[6] = 0;
  iVar11 = *(int *)(puVar3 + 3);
  pvVar4 = (void *)puVar3[2];
  *(int *)(local_48 + 7) = iVar11;
  if ((longlong)iVar11 == 0) {
    *(undefined4 *)((longlong)local_48 + 0x3c) = 0;
  }
  else {
    FUN_1447a127e(local_48 + 6,iVar11,0);
    memcpy((void *)local_48[6],pvVar4,(longlong)iVar11);
  }
  *(undefined4 *)(local_48 + 8) = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = *local_48;
  uVar8 = (uint)((ulonglong)uVar5 >> 0x10);
  uVar13 = (uint)uVar5 & 0xffff;
  uVar16 = ((uint)uVar5 << 0x10 | uVar13) + (int)((ulonglong)uVar5 >> 0x20) +
           (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar13 >> 4);
  puVar9 = (ulonglong *)FUN_144741050(local_48 + 1);
  uVar1 = (ushort)puVar9[1];
  uVar8 = ((uint)(*puVar9 >> 0x14) & 0xffff ^ (uint)(*puVar9 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = (uint)(uVar1 >> 0xd) ^ (uVar8 >> 0x10 ^ uVar8) - (uint)uVar1;
  uVar13 = uVar8 << 8 ^ (-0x61c88647 - uVar8) - (uint)uVar1;
  uVar14 = uVar13 >> 0xd ^ (uVar1 - uVar8) - uVar13;
  uVar8 = uVar14 >> 0xc ^ (uVar8 - uVar13) - uVar14;
  uVar13 = uVar8 << 0x10 ^ (uVar13 - uVar14) - uVar8;
  uVar14 = uVar13 >> 5 ^ (uVar14 - uVar8) - uVar13;
  uVar15 = uVar14 >> 3 ^ (uVar8 - uVar13) - uVar14;
  uVar8 = uVar15 << 10 ^ (uVar13 - uVar14) - uVar15;
  uVar8 = uVar8 >> 0xf ^ uVar14 - (uVar15 + uVar8);
  iVar11 = uVar8 - *(byte *)((longlong)puVar9 + 10);
  uVar13 = iVar11 * 0x100 ^ 0x9e3779b9 - uVar8;
  uVar14 = uVar13 >> 0xd ^ ((uint)*(byte *)((longlong)puVar9 + 10) - iVar11) - uVar13;
  uVar8 = uVar14 >> 0xc ^ (iVar11 - uVar13) - uVar14;
  uVar13 = uVar8 << 0x10 ^ (uVar13 - uVar14) - uVar8;
  uVar15 = uVar13 >> 5 ^ (uVar14 - uVar8) - uVar13;
  uVar14 = uVar15 >> 3 ^ (uVar8 - uVar13) - uVar15;
  uVar8 = uVar14 << 10 ^ (uVar13 - uVar15) - uVar14;
  uVar14 = uVar16 >> 0xd ^ (uVar8 >> 0xf ^ uVar15 - (uVar14 + uVar8)) - uVar16;
  uVar13 = uVar14 << 8 ^ (-0x61c88647 - uVar16) - uVar14;
  uVar8 = uVar13 >> 0xd ^ (uVar16 - uVar14) - uVar13;
  uVar15 = uVar8 >> 0xc ^ (uVar14 - uVar13) - uVar8;
  uVar14 = uVar15 << 0x10 ^ (uVar13 - uVar8) - uVar15;
  uVar13 = uVar14 >> 5 ^ (uVar8 - uVar15) - uVar14;
  uVar8 = uVar13 >> 3 ^ (uVar15 - uVar14) - uVar13;
  uVar14 = uVar8 << 10 ^ (uVar14 - uVar13) - uVar8;
  uVar8 = uVar14 >> 0xf ^ uVar13 - (uVar8 + uVar14);
  local_68 = 0;
  cVar7 = FUN_14021a7f0(&DAT_14cb3a3d8,uVar8,local_48,&local_54);
  if (cVar7 == '\0') {
    uVar13 = DAT_14cb3a3e0 - DAT_14cb3a40c;
    if (uVar13 < 4) {
      iVar11 = 1;
    }
    else {
      uVar10 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar13 < 1) || (iVar11 <= DAT_14cb3a420)) {
      uVar8 = DAT_14cb3a420 - 1U & uVar8;
      *(uint *)((longlong)local_48 + 0x44) = uVar8;
      puVar12 = DAT_14cb3a418;
      if (DAT_14cb3a418 == (undefined *)0x0) {
        puVar12 = &DAT_14cb3a410;
      }
      *(undefined4 *)(local_48 + 8) =
           *(undefined4 *)(puVar12 + ((longlong)DAT_14cb3a420 - 1U & (longlong)(int)uVar8) * 4);
      puVar12 = DAT_14cb3a418;
      if (DAT_14cb3a418 == (undefined *)0x0) {
        puVar12 = &DAT_14cb3a410;
      }
      *(undefined4 *)(puVar12 + ((longlong)DAT_14cb3a420 - 1U & (longlong)(int)uVar8) * 4) =
           local_54;
    }
    else {
      DAT_14cb3a420 = iVar11;
      FUN_14021b592(&DAT_14cb3a3d8);
    }
  }
  *param_1 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141823e50 FUN_141823e50 body=738 status=ok
// SIG undefined FUN_141823e50(void)

undefined8 * FUN_141823e50(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  uint local_54;
  uint *local_50;
  uint local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14adbc400;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0xe;
  puVar2 = (uint *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x13);
  local_54 = 1;
  if (iVar3 == 0) {
    local_40 = 0;
    local_58 = 0;
    local_44 = 0;
  }
  else {
    puVar6 = (uint *)param_1[0x12];
    if ((uint *)param_1[0x12] == (uint *)0x0) {
      puVar6 = puVar2;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      uVar9 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar9;
      }
      local_58 = (int)uVar8 + 1;
      local_40 = (int)uVar8 * 0x20 + 0x20;
      iVar7 = 0;
      do {
        local_44 = iVar3;
        if (uVar8 == uVar9) goto LAB_141823eba;
        iVar7 = iVar7 + 0x20;
        uVar5 = puVar6[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar5 == 0);
      local_58 = (int)uVar9;
      local_40 = iVar7;
    }
    else {
      local_40 = 0;
      local_58 = 0;
    }
    local_54 = -uVar5 & uVar5;
    uVar8 = (ulonglong)local_54 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_44 = (local_40 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar3 <= local_44) {
      local_44 = iVar3;
    }
  }
LAB_141823eba:
  local_48 = 0xffffffff;
  local_60 = plVar1;
  local_50 = puVar2;
  if (local_44 < iVar3) {
    do {
      FUN_1409dec50((longlong)local_44 * 0x40 + *local_60 + 8);
      local_48 = local_48 & ~local_54;
      FUN_1449c0562(&local_58);
    } while (local_44 < (int)local_50[6]);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_140b7ce44(plVar1,0);
  }
  param_1[0x14] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x9c)) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_144727cd0(param_1 + 4,0);
  }
  param_1[10] = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x4c)) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
    FUN_1446efbd8(param_1 + 6,0);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141824134 FUN_141824134 body=34 status=ok
// SIG undefined FUN_141824134(void)

ulonglong FUN_141824134(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1406f014a(*param_3);
  *(undefined1 *)*param_1 = uVar1;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1) ^ 1;
}



// FUNCTION 141824156 FUN_141824156 body=651 status=ok
// SIG undefined FUN_141824156(void)

undefined8 * FUN_141824156(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14adbcb40;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0xe;
  puVar2 = param_1 + 0x10;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = puVar2;
  if (*(int *)(param_1 + 0x13) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 3)) {
    do {
      FUN_14129d93e(*local_78 + (longlong)iStack_5c * 0x40 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 3));
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_140b7ce44(plVar1,0);
  }
  param_1[0x14] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x9c)) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_144727cd0(param_1 + 4,0);
  }
  param_1[10] = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x4c)) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
    FUN_1446efbd8(param_1 + 6,0);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1418243e2 FUN_1418243e2 body=144 status=ok
// SIG undefined FUN_1418243e2(void)

void FUN_1418243e2(longlong param_1,undefined8 *param_2,char *param_3)

{
  longlong lVar1;
  PSRWLOCK SRWLock;
  char *pcVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_3[1] == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (param_3 == (char *)0x0) {
      pcVar2 = (char *)(lVar1 + 0x50);
      SRWLock = (PSRWLOCK)0x0;
    }
    else {
      SRWLock = (PSRWLOCK)(param_3 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*param_3 == '\x01') {
        pcVar2 = param_3 + 0x10;
      }
      else {
        pcVar2 = (char *)(lVar1 + 0x50);
      }
    }
    *(undefined1 *)param_2 = 1;
    FUN_1401f7650(param_2 + 1,pcVar2);
    param_3[1] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014182445c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared(SRWLock);
      return;
    }
  }
  return;
}



// FUNCTION 141824472 FUN_141824472 body=34 status=ok
// SIG undefined FUN_141824472(void)

ulonglong FUN_141824472(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1406f014a(*param_3);
  *(undefined1 *)*param_1 = uVar1;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1) ^ 1;
}



// FUNCTION 141824494 FUN_141824494 body=644 status=ok
// SIG undefined FUN_141824494(void)

undefined8 * FUN_141824494(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14adbd1b0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0xe;
  puVar2 = param_1 + 0x10;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = puVar2;
  if (*(int *)(param_1 + 0x13) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 3)) {
    do {
      FUN_1412e0d58(*local_78 + (longlong)iStack_5c * 0x40 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 3));
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_140b7ce44(plVar1,0);
  }
  param_1[0x14] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x9c)) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_144727cd0(param_1 + 4,0);
  }
  param_1[10] = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x4c)) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
    FUN_1446efbd8(param_1 + 6,0);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14182471a FUN_14182471a body=34 status=ok
// SIG undefined FUN_14182471a(void)

ulonglong FUN_14182471a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1406f014a(*param_3);
  *(undefined1 *)*param_1 = uVar1;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1) ^ 1;
}



// FUNCTION 14182473c FUN_14182473c body=644 status=ok
// SIG undefined FUN_14182473c(void)

undefined8 * FUN_14182473c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14adbd830;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0xe;
  puVar2 = param_1 + 0x10;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = puVar2;
  if (*(int *)(param_1 + 0x13) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 3)) {
    do {
      FUN_14812f412(*local_78 + (longlong)iStack_5c * 0x40 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 3));
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_140b7ce44(plVar1,0);
  }
  param_1[0x14] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x9c)) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_144727cd0(param_1 + 4,0);
  }
  param_1[10] = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x4c)) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
    FUN_1446efbd8(param_1 + 6,0);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1418249c2 FUN_1418249c2 body=738 status=ok
// SIG undefined FUN_1418249c2(void)

undefined8 * FUN_1418249c2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  uint local_54;
  uint *local_50;
  uint local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14adbe510;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0xe;
  puVar2 = (uint *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x13);
  local_54 = 1;
  if (iVar3 == 0) {
    local_40 = 0;
    local_58 = 0;
    local_44 = 0;
  }
  else {
    puVar6 = (uint *)param_1[0x12];
    if ((uint *)param_1[0x12] == (uint *)0x0) {
      puVar6 = puVar2;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      uVar9 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar9;
      }
      local_58 = (int)uVar8 + 1;
      local_40 = (int)uVar8 * 0x20 + 0x20;
      iVar7 = 0;
      do {
        local_44 = iVar3;
        if (uVar8 == uVar9) goto LAB_141824a2c;
        iVar7 = iVar7 + 0x20;
        uVar5 = puVar6[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar5 == 0);
      local_58 = (int)uVar9;
      local_40 = iVar7;
    }
    else {
      local_40 = 0;
      local_58 = 0;
    }
    local_54 = -uVar5 & uVar5;
    uVar8 = (ulonglong)local_54 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_44 = (local_40 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar3 <= local_44) {
      local_44 = iVar3;
    }
  }
LAB_141824a2c:
  local_48 = 0xffffffff;
  local_60 = plVar1;
  local_50 = puVar2;
  if (local_44 < iVar3) {
    do {
      FUN_140931af6((longlong)local_44 * 0x40 + *local_60 + 8);
      local_48 = local_48 & ~local_54;
      FUN_1449c0562(&local_58);
    } while (local_44 < (int)local_50[6]);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_140b7ce44(plVar1,0);
  }
  param_1[0x14] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x9c)) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_144727cd0(param_1 + 4,0);
  }
  param_1[10] = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x4c)) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
    FUN_1446efbd8(param_1 + 6,0);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141824ca6 FUN_141824ca6 body=651 status=ok
// SIG undefined FUN_141824ca6(void)

undefined8 * FUN_141824ca6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14adbf840;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0xe;
  puVar2 = param_1 + 0x10;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = puVar2;
  if (*(int *)(param_1 + 0x13) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 3)) {
    do {
      FUN_1412ae528(*local_78 + (longlong)iStack_5c * 0x40 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 3));
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_140b7ce44(plVar1,0);
  }
  param_1[0x14] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x9c)) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_144727cd0(param_1 + 4,0);
  }
  param_1[10] = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x4c)) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
    FUN_1446efbd8(param_1 + 6,0);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141824f32 FUN_141824f32 body=144 status=ok
// SIG undefined FUN_141824f32(void)

void FUN_141824f32(longlong param_1,undefined8 *param_2,char *param_3)

{
  longlong lVar1;
  PSRWLOCK SRWLock;
  char *pcVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_3[1] == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (param_3 == (char *)0x0) {
      pcVar2 = (char *)(lVar1 + 0x50);
      SRWLock = (PSRWLOCK)0x0;
    }
    else {
      SRWLock = (PSRWLOCK)(param_3 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*param_3 == '\x01') {
        pcVar2 = param_3 + 0x10;
      }
      else {
        pcVar2 = (char *)(lVar1 + 0x50);
      }
    }
    *(undefined1 *)param_2 = 1;
    FUN_14054c6c4(param_2 + 1,pcVar2);
    param_3[1] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141824fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared(SRWLock);
      return;
    }
  }
  return;
}



// FUNCTION 141824fc2 FUN_141824fc2 body=34 status=ok
// SIG undefined FUN_141824fc2(void)

ulonglong FUN_141824fc2(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1406f014a(*param_3);
  *(undefined1 *)*param_1 = uVar1;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1) ^ 1;
}



// FUNCTION 141824fe4 FUN_141824fe4 body=164 status=ok
// SIG undefined FUN_141824fe4(void)

void FUN_141824fe4(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14adc3a40;
  *(undefined4 *)(puVar1 + 7) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x3c) = 1;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14adcade0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  puVar2 = (undefined8 *)puVar1[5];
  if ((puVar2 != puVar3) && (puVar1[5] = puVar3, puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141825085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}



// FUNCTION 141825088 FUN_141825088 body=269 status=ok
// SIG undefined FUN_141825088(void)

void FUN_141825088(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141825196 FUN_141825196 body=150 status=ok
// SIG undefined FUN_141825196(void)

undefined8 FUN_141825196(undefined8 param_1,float *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)DAT_14c8464f0;
  fVar5 = (float)DAT_14c8464e8;
  *param_2 = (float)DAT_14c8464e0;
  param_2[1] = fVar5;
  param_2[2] = fVar4;
  uVar2 = DAT_14c846500;
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f8;
  *(undefined8 *)(param_2 + 6) = uVar2;
  *(undefined8 *)(param_2 + 8) = DAT_14c846508;
  param_2[10] = 0.0;
  fVar1 = DAT_14c8464e8._4_4_;
  fVar5 = DAT_14c8464e8._0_4_;
  fVar4 = DAT_14c8464e0._4_4_;
  param_2[0xc] = DAT_14c8464e0._0_4_;
  param_2[0xd] = fVar4;
  param_2[0xe] = fVar5;
  param_2[0xf] = fVar1;
  *(double *)(param_2 + 0x10) = DAT_14c8464f0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = 0;
  puVar3[1] = 0xffffffffffffffff;
  *(undefined8 **)(param_2 + 0x16) = puVar3;
  *(undefined8 **)(param_2 + 0x14) = puVar3;
  param_2[0x18] = 0.0;
  param_2[0x19] = 0.0;
  param_2[0x1a] = 0.0;
  param_2[0x1b] = 0.0;
  return 1;
}



// FUNCTION 14182522c FUN_14182522c body=46 status=ok
// SIG undefined FUN_14182522c(void)

void FUN_14182522c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x60) == 0) goto LAB_14182524b;
  while( true ) {
    FUN_1400020a8();
LAB_14182524b:
    if (*(undefined8 **)(param_2 + 0x58) == (undefined8 *)0x0) break;
    *(undefined8 *)(param_2 + 0x58) = **(undefined8 **)(param_2 + 0x58);
  }
  return;
}



// FUNCTION 14182525a FUN_14182525a body=179 status=ok
// SIG undefined FUN_14182525a(void)

void FUN_14182525a(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  plVar2 = (longlong *)param_2[3];
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)*param_2;
  }
  *(uint *)(plVar2 + 2) = (int)plVar2[2] + 0xfU & 0xfffffff0;
  FUN_140175280();
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar5 = (longlong)iVar1 * 0x30;
  lVar4 = plVar2[2];
  *(undefined2 **)(lVar3 + lVar5) = puVar6;
  *(undefined2 **)(lVar3 + 8 + lVar5) = &DAT_149dfb77a;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0x7b;
  *(int *)(lVar3 + 0x14 + lVar5) = (int)lVar4;
  *(undefined2 *)(lVar3 + 0x18 + lVar5) = 0x14;
  *(undefined1 **)(lVar3 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = 0;
  *(undefined **)(lVar3 + 0x28 + lVar5) = &DAT_14cb3bb90;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 0x20;
  return;
}



// FUNCTION 14182530d FUN_14182530d body=125 status=ok
// SIG undefined FUN_14182530d(void)

void FUN_14182530d(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14adc41c0;
  uVar3 = FUN_1405a2619();
  puVar1[7] = uVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14adcb010;
  puVar2 = (undefined8 *)puVar1[5];
  if ((puVar2 != puVar4) && (puVar1[5] = puVar4, puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141825387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}



// FUNCTION 14182538a FUN_14182538a body=348 status=ok
// SIG undefined FUN_14182538a(void)

void FUN_14182538a(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_38 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_28 = *(longlong *)(param_1 + 0x10);
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    local_20 = 1;
    local_1e = 0;
    local_1c = 0xffffffff;
    FUN_140c6bd52(&local_28,0x1f);
    local_28 = *(longlong *)(param_1 + 0x38);
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    local_20 = 3;
    local_1e = 0;
    local_1c = 0xffffffff;
    FUN_140c6bd52(&local_28,0x1f);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418254e8 FUN_1418254e8 body=739 status=ok
// SIG undefined FUN_1418254e8(void)

void FUN_1418254e8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)param_2[3];
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = *(undefined2 **)*param_2;
  }
  *(uint *)(plVar2 + 2) = (int)plVar2[2] + 0xfU & 0xfffffff0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3bc98) {
    FUN_144b3d300(&DAT_14cb3bc98);
    if (DAT_14cb3bc98 == -1) {
      FUN_146221aea(local_38);
      local_40 = 0;
      local_50 = 0;
      local_70 = "Unknown";
      local_80 = 0;
      uStack_78 = 0;
      local_88 = L"FShaderParameters";
      local_48 = 0;
      local_60 = 0x10;
      local_68 = 0x1e;
      local_58 = local_38;
      FUN_140b49562(&DAT_14cb3bc18,0,1);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a3ce79);
      _Init_thread_footer(&DAT_14cb3bc98);
    }
  }
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar5 = (longlong)iVar1 * 0x30;
  lVar6 = plVar2[2];
  *(undefined2 **)(lVar3 + lVar5) = puVar7;
  *(undefined2 **)(lVar3 + 8 + lVar5) = &DAT_149dfb77a;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0x7b;
  *(int *)(lVar3 + 0x14 + lVar5) = (int)lVar6;
  *(undefined2 *)(lVar3 + 0x18 + lVar5) = 0x14;
  *(undefined1 **)(lVar3 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = 0;
  *(undefined **)(lVar3 + 0x28 + lVar5) = &DAT_14cb3bc18;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 0x10;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c9b80) {
    FUN_144b3d300(&DAT_14c9c9b80);
    if (DAT_14c9c9b80 == -1) {
      FUN_1414f42c0(local_38);
      local_40 = 0;
      local_50 = 0;
      local_70 = "Unknown";
      local_80 = 0;
      uStack_78 = 0;
      local_88 = L"FGlobalDistanceFieldParameters2";
      local_48 = 0;
      local_60 = 0x220;
      local_68 = 0x32;
      local_58 = local_38;
      FUN_140b49562(&DAT_14c9c9b00,0);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a3ce85);
      _Init_thread_footer(&DAT_14c9c9b80);
    }
  }
  lVar3 = (longlong)(int)((longlong *)param_2[1])[1];
  if (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (*(undefined **)(*(longlong *)param_2[1] + lVar6) == &DAT_14c9c9b00) goto LAB_141825602;
      lVar6 = lVar6 + 0x10;
    } while (lVar3 * 0x10 != lVar6);
  }
  puVar4 = (undefined8 *)FUN_1409683e4();
  *puVar4 = &DAT_14c9c9b00;
  *(uint *)(puVar4 + 1) = *(int *)(param_2[3] + 0x10) + 0xfU & 0xfffffff0;
  FUN_140968440(param_2[3],&DAT_14c9c9b00,0);
LAB_141825602:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418257cc FUN_1418257cc body=462 status=ok
// SIG undefined FUN_1418257cc(void)

void FUN_1418257cc(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  FUN_14007c92a(puVar1);
  *puVar1 = &PTR_FUN_14adc4940;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xac) = 0;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(undefined4 *)(puVar1 + 0x1b) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0xdc) = 0x404;
  puVar1[0xe] = &DAT_14a176f00;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x23] = 0;
  *(undefined4 *)(puVar1 + 0x24) = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 300) = 0;
  puVar1[0x27] = 0;
  *(undefined4 *)(puVar1 + 0x28) = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  *(undefined4 *)(puVar1 + 0x2b) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0x15c) = 0x404;
  puVar1[0x1e] = &DAT_14a176f00;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x33] = 0;
  *(undefined4 *)(puVar1 + 0x34) = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x1ac) = 0;
  puVar1[0x37] = 0;
  *(undefined4 *)(puVar1 + 0x38) = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  *(undefined4 *)(puVar1 + 0x3b) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0x1dc) = 0x404;
  puVar1[0x2e] = &DAT_14a176f00;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x43] = 0;
  *(undefined4 *)(puVar1 + 0x44) = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x224) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x22c) = 0;
  puVar1[0x47] = 0;
  *(undefined4 *)(puVar1 + 0x48) = 0;
  puVar1[0x49] = 0;
  puVar1[0x4a] = 0;
  *(undefined4 *)(puVar1 + 0x4b) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0x25c) = 0x404;
  puVar1[0x3e] = &DAT_14a176f00;
  puVar1[0x4c] = 0;
  puVar1[0x4d] = 0;
  FUN_1446f470e(&local_20,L"Color Curve",1);
  puVar1[0xc] = local_20;
  FUN_14007c890(puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418259a2 FUN_1418259a2 body=269 status=ok
// SIG undefined FUN_1418259a2(void)

void FUN_1418259a2(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141825ab0 FUN_141825ab0 body=158 status=ok
// SIG undefined FUN_141825ab0(void)

void FUN_141825ab0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14adc54c0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0x428451eb428c0000;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0x44042f5c;
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14adcb240;
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((longlong)puVar1 + 0x44);
  puVar3[2] = *(undefined8 *)((longlong)puVar1 + 0x3c);
  puVar2 = (undefined8 *)puVar1[5];
  if ((puVar2 != puVar3) && (puVar1[5] = puVar3, puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141825b4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}



// FUNCTION 141825b4e FUN_141825b4e body=269 status=ok
// SIG undefined FUN_141825b4e(void)

void FUN_141825b4e(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141825c5c FUN_141825c5c body=181 status=ok
// SIG undefined FUN_141825c5c(void)

void FUN_141825c5c(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  FUN_1400bb2d8();
  iVar1 = (int)param_1[7] * 0x19660d;
  iVar3 = (iVar1 + 0x3c6ef360) * (iVar1 + 0x3c6ef35f);
  iVar5 = (iVar3 + 1) * (iVar1 + 0x3c6ef35f);
  iVar1 = iVar1 + iVar5 * iVar3 + 0x3c6ef35f;
  uVar2 = iVar1 * iVar5 + iVar3;
  uVar4 = uVar2 * iVar1 + iVar5;
  *(float *)((longlong)param_1 + 0x3c) = (float)(uVar2 >> 0x10) * 0.01;
  *(float *)(param_1 + 8) = (float)(uVar4 >> 0x10) * 0.01;
  *(float *)((longlong)param_1 + 0x44) = (float)(uVar4 * uVar2 + iVar1 >> 0x10) * 0.01;
  uVar2 = *(uint *)(param_1 + 6);
  *(uint *)(param_1 + 6) = uVar2 | 1;
  if ((~uVar2 & 4) == 0) {
    (**(code **)(*param_1 + 0x428))(param_1);
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  }
  return;
}



// FUNCTION 141825d12 FUN_141825d12 body=179 status=ok
// SIG undefined FUN_141825d12(void)

void FUN_141825d12(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  plVar2 = (longlong *)param_2[3];
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)*param_2;
  }
  *(uint *)(plVar2 + 2) = (int)plVar2[2] + 0xfU & 0xfffffff0;
  FUN_1405d1dd4();
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar5 = (longlong)iVar1 * 0x30;
  lVar4 = plVar2[2];
  *(undefined2 **)(lVar3 + lVar5) = puVar6;
  *(undefined2 **)(lVar3 + 8 + lVar5) = &DAT_149dfb77a;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0x7b;
  *(int *)(lVar3 + 0x14 + lVar5) = (int)lVar4;
  *(undefined2 *)(lVar3 + 0x18 + lVar5) = 0x14;
  *(undefined1 **)(lVar3 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = 0;
  *(undefined **)(lVar3 + 0x28 + lVar5) = &DAT_14cb3bd30;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 0x10;
  return;
}



// FUNCTION 141825dc6 FUN_141825dc6 body=269 status=ok
// SIG undefined FUN_141825dc6(void)

void FUN_141825dc6(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141825ed4 FUN_141825ed4 body=416 status=ok
// SIG undefined FUN_141825ed4(void)

void FUN_141825ed4(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_48 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
    FUN_1446f470e(&local_38,L"RenderTarget",1);
    local_20 = FUN_144a7937e();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(local_20);
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    local_30 = local_38;
    DAT_14cb3b648 = FUN_144830b78(local_28);
    DAT_14cb3b640 = local_30;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141826076 FUN_141826076 body=792 status=ok
// SIG undefined FUN_141826076(void)

void FUN_141826076(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_2;
  if (lVar4 == DAT_14cb3d8d0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar4 == DAT_14cb3d8c0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar4 == DAT_14cb3d8d8) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar4 != DAT_14cb3b4e0) {
    if (lVar4 == DAT_14cb3b5e8) {
      if ((longlong)(int)param_2[6] != 0) {
        plVar3 = (longlong *)param_2[5];
        lVar4 = (longlong)(int)param_2[6] << 4;
        do {
          if (*plVar3 == DAT_14cb3d8e0) break;
          plVar3 = plVar3 + 2;
          lVar4 = lVar4 + -0x10;
        } while (lVar4 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar4 == DAT_14cb3b5f0) {
      if ((longlong)(int)param_2[6] != 0) {
        plVar3 = (longlong *)param_2[5];
        lVar4 = (longlong)(int)param_2[6] << 4;
        do {
          if (*plVar3 == DAT_14cb3d8e0) break;
          plVar3 = plVar3 + 2;
          lVar4 = lVar4 + -0x10;
        } while (lVar4 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar4 == DAT_14cb3b5f8) {
      if ((longlong)(int)param_2[6] != 0) {
        plVar3 = (longlong *)param_2[5];
        lVar4 = (longlong)(int)param_2[6] << 4;
        do {
          if (*plVar3 == DAT_14cb3d8e0) break;
          plVar3 = plVar3 + 2;
          lVar4 = lVar4 + -0x10;
        } while (lVar4 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar4 == DAT_14cb3b600) {
      if ((longlong)(int)param_2[6] != 0) {
        plVar3 = (longlong *)param_2[5];
        lVar4 = (longlong)(int)param_2[6] << 4;
        do {
          if (*plVar3 == DAT_14cb3d8e0) break;
          plVar3 = plVar3 + 2;
          lVar4 = lVar4 + -0x10;
        } while (lVar4 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    goto LAB_14182617b;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  puVar2 = local_30;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar5;
  *local_30 = &PTR_FUN_14adcbb20;
  local_30[3] = param_1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_4[1] == 0) {
LAB_141826154:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_4;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_141826154;
    }
  }
  *param_4 = (longlong)puVar2;
  *(undefined4 *)(param_4 + 1) = 2;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_14182617b;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14182617b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141826414 FUN_141826414 body=40 status=ok
// SIG undefined FUN_141826414(void)

undefined8 FUN_141826414(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182643c FUN_14182643c body=40 status=ok
// SIG undefined FUN_14182643c(void)

undefined8 FUN_14182643c(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141826464 FUN_141826464 body=1147 status=ok
// SIG undefined FUN_141826464(void)

undefined8 * FUN_141826464(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adc4940;
  param_1[0x3e] = &DAT_14a176f00;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x3e] = &PTR_FUN_14a177080;
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)((longlong)param_1 + 0x204) != 0) {
    FUN_14472eb64(param_1 + 0x3f,0);
  }
  param_1[0x45] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x224)) {
    *(undefined4 *)((longlong)param_1 + 0x224) = 0x80;
    FUN_1446efbd8(param_1 + 0x41,0);
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2e] = &DAT_14a176f00;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2e] = &PTR_FUN_14a177080;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)((longlong)param_1 + 0x184) != 0) {
    FUN_14472eb64(param_1 + 0x2f,0);
  }
  param_1[0x35] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x1a4)) {
    *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x80;
    FUN_1446efbd8(param_1 + 0x31,0);
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1e] = &DAT_14a176f00;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1e] = &PTR_FUN_14a177080;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)((longlong)param_1 + 0x104) != 0) {
    FUN_14472eb64(param_1 + 0x1f,0);
  }
  param_1[0x25] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x124)) {
    *(undefined4 *)((longlong)param_1 + 0x124) = 0x80;
    FUN_1446efbd8(param_1 + 0x21,0);
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  param_1[0xe] = &DAT_14a176f00;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  param_1[0xe] = &PTR_FUN_14a177080;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    FUN_14472eb64(param_1 + 0xf,0);
  }
  param_1[0x15] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xa4)) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
    FUN_1446efbd8(param_1 + 0x11,0);
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14adc62b0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418268e0 FUN_1418268e0 body=40 status=ok
// SIG undefined FUN_1418268e0(void)

undefined8 FUN_1418268e0(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141826908 FUN_141826908 body=171 status=ok
// SIG undefined FUN_141826908(void)

undefined8 * FUN_141826908(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adcade0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_1446f4a44(param_1 + 2,0);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(param_1 + 4,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418269b4 FUN_1418269b4 body=29 status=ok
// SIG undefined FUN_1418269b4(void)

undefined8 FUN_1418269b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418269d2 FUN_1418269d2 body=29 status=ok
// SIG undefined FUN_1418269d2(void)

undefined8 FUN_1418269d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418269f0 FUN_1418269f0 body=93 status=ok
// SIG undefined FUN_1418269f0(void)

void FUN_1418269f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcc4d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 141826a4d FUN_141826a4d body=195 status=ok
// SIG undefined FUN_141826a4d(void)

void FUN_141826a4d(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14adce200;
  puVar1[7] = &PTR_LAB_14adce640;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 1;
  puVar1[8] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14add3740;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  puVar2 = (undefined8 *)puVar1[5];
  if ((puVar2 != puVar3) && (puVar1[5] = puVar3, puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141826b0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}



// FUNCTION 141826b10 FUN_141826b10 body=269 status=ok
// SIG undefined FUN_141826b10(void)

void FUN_141826b10(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141826c1e FUN_141826c1e body=190 status=ok
// SIG undefined FUN_141826c1e(void)

void FUN_141826c1e(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1 = (longlong *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(param_1);
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  *param_1 = (longlong)&PTR_FUN_14adcf0e0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14add3920;
  *(undefined1 *)(puVar3 + 2) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = DAT_14c84635c;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined4 *)(puVar3 + 6) = 0;
  puVar2 = (undefined8 *)param_1[5];
  if ((puVar2 != puVar3) && (param_1[5] = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  uVar1 = *(uint *)(param_1 + 6);
  *(uint *)(param_1 + 6) = uVar1 | 1;
  if ((~uVar1 & 4) == 0) {
    (**(code **)(*param_1 + 0x428))(param_1);
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  }
  return;
}



// FUNCTION 141826cdc FUN_141826cdc body=269 status=ok
// SIG undefined FUN_141826cdc(void)

void FUN_141826cdc(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1e);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141826df0 FUN_141826df0 body=935 status=ok
// SIG undefined FUN_141826df0(void)

void FUN_141826df0(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = *param_2;
  if (lVar8 == DAT_14cb3c290) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar6 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14add4f50;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    pcVar3 = FUN_140f8c8aa;
  }
  else {
    if (lVar8 == DAT_14cb3c298) {
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      puVar6 = local_40;
      local_38 = 3;
      *local_40 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_40[2] = lVar4;
      *local_40 = &PTR_FUN_14add4f50;
      local_40[3] = 0;
      iVar5 = 0;
      if (param_1 != 0) {
        uVar1 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_40 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar5 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar5 = *(int *)(lVar8 + 0x10);
          bVar9 = iVar5 == 0;
          if (bVar9) {
            *(int *)(lVar8 + 0x10) = iVar7;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar5 = iVar7;
          }
        }
      }
      iVar7 = local_38;
      puVar2 = local_40;
      *(int *)((longlong)puVar6 + 0x1c) = iVar5;
      puVar6[4] = FUN_140f8bf5a;
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      if ((int)param_4[1] == 0) {
LAB_141826f10:
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar6 = (undefined8 *)*param_4;
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,0);
          FUN_1446efa72(param_4,0,0,0x10);
          *(undefined4 *)(param_4 + 1) = 0;
          goto LAB_141826f10;
        }
      }
      *param_4 = (longlong)puVar2;
      *(int *)(param_4 + 1) = iVar7;
      if (local_38 != 0) {
        if (local_40 == (undefined8 *)0x0) goto LAB_141826f37;
        (**(code **)*local_40)(local_40,0);
        FUN_1446efa72(&local_40,0,0,0x10);
        local_38 = 0;
      }
      if (local_40 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_141826f37;
    }
    if (lVar8 != DAT_14cb3c2a0) goto LAB_141826f37;
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar6 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14add4f50;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    pcVar3 = FUN_1481763f2;
  }
  puVar6[4] = pcVar3;
  FUN_144a450dc(param_4,&local_40);
  FUN_1449db362(&local_40);
LAB_141826f37:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141827198 FUN_141827198 body=179 status=ok
// SIG undefined FUN_141827198(void)

void FUN_141827198(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  plVar2 = (longlong *)param_2[3];
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)*param_2;
  }
  *(uint *)(plVar2 + 2) = (int)plVar2[2] + 0xfU & 0xfffffff0;
  FUN_140576dea();
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar5 = (longlong)iVar1 * 0x30;
  lVar4 = plVar2[2];
  *(undefined2 **)(lVar3 + lVar5) = puVar6;
  *(undefined2 **)(lVar3 + 8 + lVar5) = &DAT_149dfb77a;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0x7b;
  *(int *)(lVar3 + 0x14 + lVar5) = (int)lVar4;
  *(undefined2 *)(lVar3 + 0x18 + lVar5) = 0x14;
  *(undefined1 **)(lVar3 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = 0;
  *(undefined **)(lVar3 + 0x28 + lVar5) = &DAT_14cb3cad0;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 0x20;
  return;
}



// FUNCTION 14182724b FUN_14182724b body=116 status=ok
// SIG undefined FUN_14182724b(void)

void FUN_14182724b(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14adcfeb0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14add3a90;
  puVar2 = (undefined8 *)puVar1[5];
  if ((puVar2 != puVar3) && (puVar1[5] = puVar3, puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001418272bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}



// FUNCTION 1418272c0 FUN_1418272c0 body=269 status=ok
// SIG undefined FUN_1418272c0(void)

void FUN_1418272c0(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418273ce FUN_1418273ce body=179 status=ok
// SIG undefined FUN_1418273ce(void)

void FUN_1418273ce(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  plVar2 = (longlong *)param_2[3];
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)*param_2;
  }
  *(uint *)(plVar2 + 2) = (int)plVar2[2] + 0xfU & 0xfffffff0;
  FUN_140a9996a();
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar5 = (longlong)iVar1 * 0x30;
  lVar4 = plVar2[2];
  *(undefined2 **)(lVar3 + lVar5) = puVar6;
  *(undefined2 **)(lVar3 + 8 + lVar5) = &DAT_149dfb77a;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0x7b;
  *(int *)(lVar3 + 0x14 + lVar5) = (int)lVar4;
  *(undefined2 *)(lVar3 + 0x18 + lVar5) = 0x14;
  *(undefined1 **)(lVar3 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = 0;
  *(undefined **)(lVar3 + 0x28 + lVar5) = &DAT_14cb3cbe8;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 0x20;
  return;
}



// FUNCTION 141827481 FUN_141827481 body=168 status=ok
// SIG undefined FUN_141827481(void)

void FUN_141827481(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14add0550;
  puVar1[7] = 1;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14add3b60;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  puVar2 = (undefined8 *)puVar1[5];
  if ((puVar2 != puVar3) && (puVar1[5] = puVar3, puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141827526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}



// FUNCTION 14182752a FUN_14182752a body=269 status=ok
// SIG undefined FUN_14182752a(void)

void FUN_14182752a(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1e);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182763e FUN_14182763e body=383 status=ok
// SIG undefined FUN_14182763e(void)

void FUN_14182763e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar2 = local_38;
  *local_38 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_38[2] = lVar4;
  *local_38 = &PTR_FUN_14add5b10;
  local_38[3] = param_1;
  local_38[4] = param_3;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  if ((int)param_2[1] == 0) {
LAB_1418276f0:
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_2,0,0,0x10);
      *(undefined4 *)(param_2 + 1) = 0;
      goto LAB_1418276f0;
    }
  }
  *param_2 = (longlong)puVar2;
  *(undefined4 *)(param_2 + 1) = 3;
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_141827717;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141827717:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418277be FUN_1418277be body=198 status=ok
// SIG undefined FUN_1418277be(void)

void FUN_1418277be(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar4 = FUN_140af0e38(param_1 + 0x38,param_1);
    if (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar4 + 0x28);
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
      local_38 = *(undefined4 *)(lVar4 + 0x30);
      uStack_34 = *(undefined4 *)(lVar4 + 0x34);
      uStack_30 = *(undefined4 *)(lVar4 + 0x38);
      uStack_2c = *(undefined4 *)(lVar4 + 0x3c);
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_148171eb0(param_3,iVar2);
      }
      plVar1 = (longlong *)(*param_3 + (longlong)iVar2 * 0x18);
      *plVar1 = lVar3;
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
      *(undefined4 *)(plVar1 + 1) = local_38;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_34;
      *(undefined4 *)(plVar1 + 2) = uStack_30;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uStack_2c;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141827886 FUN_141827886 body=409 status=ok
// SIG undefined FUN_141827886(void)

void FUN_141827886(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_48 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
    FUN_1446f470e(&local_38,L"RenderTarget",1);
    local_20 = FUN_144a7937e();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    local_30 = local_38;
    DAT_14cb3c6c8 = FUN_144830b78(local_28);
    DAT_14cb3c6c0 = local_30;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141827a20 FUN_141827a20 body=1249 status=ok
// SIG undefined FUN_141827a20(void)

void FUN_141827a20(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = *param_2;
  if (lVar8 == DAT_14cb3c688) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar6 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14add60d0;
    local_40[3] = 0;
    iVar5 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_40 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar5 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar5 = *(int *)(lVar8 + 0x10);
        bVar9 = iVar5 == 0;
        if (bVar9) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar5 = iVar7;
        }
      }
    }
    *(int *)((longlong)puVar6 + 0x1c) = iVar5;
    pcVar3 = FUN_1404e2af2;
  }
  else {
    if (lVar8 != DAT_14cb3c680) {
      if (lVar8 == DAT_14cb3c690) {
        local_40 = (undefined8 *)0x0;
        local_38 = 0;
        FUN_1446efa72(&local_40,0,3,0x10);
        puVar6 = local_40;
        local_38 = 3;
        *local_40 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar4 == 0) {
          LOCK();
          UNLOCK();
          lVar4 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_40[2] = lVar4;
        *local_40 = &PTR_FUN_14add60d0;
        local_40[3] = 0;
        FUN_14485c47a(local_40 + 3,param_1);
        pcVar3 = FUN_14817d74a;
      }
      else {
        if (lVar8 != DAT_14cb3c698) goto LAB_141827b5b;
        local_40 = (undefined8 *)0x0;
        local_38 = 0;
        FUN_1446efa72(&local_40,0,3,0x10);
        puVar6 = local_40;
        local_38 = 3;
        *local_40 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar4 == 0) {
          LOCK();
          UNLOCK();
          lVar4 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_40[2] = lVar4;
        *local_40 = &PTR_FUN_14add60d0;
        local_40[3] = 0;
        FUN_14485c47a(local_40 + 3,param_1);
        pcVar3 = FUN_143a4e46e;
      }
      puVar6[4] = pcVar3;
      *(undefined4 *)(puVar6 + 5) = 0;
      FUN_144a450dc(param_4,&local_40);
      FUN_1449db362(&local_40);
      goto LAB_141827b5b;
    }
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar6 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14add60d0;
    local_40[3] = 0;
    iVar5 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_40 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar5 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar5 = *(int *)(lVar8 + 0x10);
        bVar9 = iVar5 == 0;
        if (bVar9) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar5 = iVar7;
        }
      }
    }
    *(int *)((longlong)puVar6 + 0x1c) = iVar5;
    pcVar3 = FUN_1404e2d74;
  }
  iVar5 = local_38;
  puVar2 = local_40;
  puVar6[4] = pcVar3;
  *(undefined4 *)(puVar6 + 5) = 0;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  if ((int)param_4[1] == 0) {
LAB_141827b34:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar6 = (undefined8 *)*param_4;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_141827b34;
    }
  }
  *param_4 = (longlong)puVar2;
  *(int *)(param_4 + 1) = iVar5;
  if (local_38 != 0) {
    if (local_40 == (undefined8 *)0x0) goto LAB_141827b5b;
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141827b5b:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141827f02 FUN_141827f02 body=80 status=ok
// SIG undefined FUN_141827f02(void)

undefined8 * FUN_141827f02(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adce200;
  param_1[7] = &PTR_LAB_14adce640;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141827f52 FUN_141827f52 body=67 status=ok
// SIG undefined FUN_141827f52(void)

undefined8 * FUN_141827f52(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adcf0e0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141827f96 FUN_141827f96 body=40 status=ok
// SIG undefined FUN_141827f96(void)

undefined8 FUN_141827f96(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141827fbe FUN_141827fbe body=40 status=ok
// SIG undefined FUN_141827fbe(void)

undefined8 FUN_141827fbe(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141827fe6 FUN_141827fe6 body=199 status=ok
// SIG undefined FUN_141827fe6(void)

undefined8 * FUN_141827fe6(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14add3920;
  lVar4 = param_1[5];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418280ae FUN_1418280ae body=29 status=ok
// SIG undefined FUN_1418280ae(void)

undefined8 FUN_1418280ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418280cc FUN_1418280cc body=552 status=ok
// SIG undefined FUN_1418280cc(void)

undefined8 * FUN_1418280cc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  uint local_54;
  uint *local_50;
  uint local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14add3b60;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 2;
  puVar2 = (uint *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 7);
  local_54 = 1;
  if (iVar3 == 0) {
    local_40 = 0;
    local_58 = 0;
    local_44 = 0;
  }
  else {
    puVar6 = (uint *)param_1[6];
    if ((uint *)param_1[6] == (uint *)0x0) {
      puVar6 = puVar2;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      uVar9 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar9;
      }
      local_58 = (int)uVar8 + 1;
      local_40 = (int)uVar8 * 0x20 + 0x20;
      iVar7 = 0;
      do {
        local_44 = iVar3;
        if (uVar8 == uVar9) goto LAB_14182812a;
        iVar7 = iVar7 + 0x20;
        uVar5 = puVar6[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar5 == 0);
      local_58 = (int)uVar9;
      local_40 = iVar7;
    }
    else {
      local_40 = 0;
      local_58 = 0;
    }
    local_54 = -uVar5 & uVar5;
    uVar8 = (ulonglong)local_54 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_44 = (local_40 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar3 <= local_44) {
      local_44 = iVar3;
    }
  }
LAB_14182812a:
  local_48 = 0xffffffff;
  local_60 = plVar1;
  local_50 = puVar2;
  if (local_44 < iVar3) {
    do {
      FUN_148180a2c((longlong)local_44 * 0x58 + *local_60 + 8);
      local_48 = local_48 & ~local_54;
      FUN_1449c0562(&local_58);
    } while (local_44 < (int)local_50[6]);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140e91948(plVar1,0);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1418282f6 FUN_1418282f6 body=461 status=ok
// SIG undefined FUN_1418282f6(void)

undefined8 * FUN_1418282f6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14add3fb0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 2;
  puVar2 = param_1 + 4;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = puVar2;
  if (*(int *)(param_1 + 7) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 3)) {
    do {
      FUN_14818145a(*local_78 + (longlong)iStack_5c * 0x50 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 3));
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140e9549c(plVar1,0);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1418284c4 FUN_1418284c4 body=323 status=ok
// SIG undefined FUN_1418284c4(void)

undefined8 FUN_1418284c4(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = (longlong)param_2 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar8 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
      }
      else {
        if ((uVar8 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar8 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar9 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14182852a;
            lVar1 = uVar6 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar8 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14182852a:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  uVar4 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar8 = 0x7fffffff;
  if (param_2 <= (int)(uVar5 / 0x18)) {
    uVar8 = uVar5 / 0x18 & 0xffffffff;
  }
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    uVar4 = FUN_1446f8d3c(param_1,0,uVar8,0x18,4);
  }
  *(int *)(param_1 + 0xc) = iVar7;
  return uVar4;
}



// FUNCTION 141828608 FUN_141828608 body=1567 status=ok
// SIG undefined FUN_141828608(void)

void FUN_141828608(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  void *_Src;
  void *_Dst;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x44) == 0) {
    iVar17 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar17 + 1;
    if (*(int *)(param_1 + 0x1c) == iVar17) {
      FUN_1403e7a24(plVar1,iVar17);
    }
    iVar21 = *(int *)(param_1 + 0x38);
    if (iVar21 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar8 = iVar21 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    lVar15 = param_1 + 0x20;
    iVar9 = iVar21 + 1;
    iVar13 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar13 = iVar21;
    }
    if (iVar13 >> 5 == iVar8) {
      *(int *)(param_1 + 0x38) = iVar9;
    }
    else {
      if (*(int *)(param_1 + 0x3c) <= iVar21) {
        if (iVar21 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar8 = iVar21;
        }
        else {
          uVar18 = iVar21 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x3c) + 0x1fU < 0xa0) {
            uVar5 = 4;
            if (4 < uVar18) {
              uVar5 = uVar18;
            }
          }
          else {
            uVar5 = (uVar18 * 3 >> 3) + uVar18 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar5 << 2,0);
          iVar8 = (int)(uVar11 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar8) {
            iVar9 = iVar8 << 5;
          }
          iVar8 = *(int *)(param_1 + 0x38);
        }
        *(int *)(param_1 + 0x3c) = iVar9;
        FUN_1446efbd8(lVar15,iVar8);
        iVar9 = *(int *)(param_1 + 0x38) + 1;
      }
      iVar8 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar8 = iVar9;
      }
      *(int *)(param_1 + 0x38) = iVar9;
      if (iVar9 % 0x20 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar6 = lVar15;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)(lVar6 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)(lVar6 + (longlong)(iVar8 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar17;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x30);
    }
    bVar7 = (byte)iVar21 & 0x1f;
    puVar2 = (uint *)(lVar15 + (longlong)(iVar13 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar17 = *(int *)(param_1 + 0x40);
    lVar6 = (longlong)iVar17;
    iVar21 = *(int *)(*(longlong *)(param_1 + 0x10) + 4 + lVar6 * 0x58);
    *(int *)(param_1 + 0x40) = iVar21;
    iVar8 = *(int *)(param_1 + 0x44) + -1;
    *(int *)(param_1 + 0x44) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar21 * 0x58) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(param_1 + 0x20);
  puVar10 = *(uint **)(param_1 + 0x30);
  if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
    puVar10 = puVar2;
  }
  iVar21 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar21 = iVar17;
  }
  puVar10[iVar21 >> 5] = puVar10[iVar21 >> 5] | 1 << ((byte)iVar17 & 0x1f);
  uVar18 = 1;
  lVar15 = *(longlong *)(param_1 + 0x10);
  lVar6 = lVar6 * 0x58;
  _Src = (void *)(lVar15 + lVar6);
  lVar19 = *param_2;
  *(longlong *)(lVar15 + lVar6) = lVar19;
  puVar4 = (undefined8 *)(lVar15 + 8 + lVar6);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4 = (undefined8 *)(lVar15 + 0x18 + lVar6);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4 = (undefined8 *)(lVar15 + 0x28 + lVar6);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4 = (undefined8 *)(lVar15 + 0x38 + lVar6);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(lVar15 + 0x48 + lVar6) = 0xffffffff;
  *(undefined1 *)(lVar15 + 0x4c + lVar6) = 2;
  *(undefined4 *)(lVar15 + 0x50 + lVar6) = 0xffffffff;
  uVar5 = (int)((ulonglong)lVar19 >> 0x20) * 0x17 + (int)lVar19;
  uVar12 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44);
  if ((uVar12 != 0) && (uVar12 != 1)) {
    lVar15 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x50);
    }
    iVar21 = *(int *)(lVar15 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & uVar5) * 4);
    if (iVar21 != -1) {
      do {
        _Dst = (void *)(*plVar1 + (longlong)iVar21 * 0x58);
        if (*(longlong *)(*plVar1 + (longlong)iVar21 * 0x58) == lVar19) {
          FUN_148180a2c((longlong)_Dst + 8);
          memmove(_Dst,_Src,0x50);
          FUN_140885d1e(plVar1,iVar17);
          iVar17 = iVar21;
          goto LAB_14182879e;
        }
        iVar21 = *(int *)((longlong)_Dst + 0x50);
      } while (iVar21 != -1);
    }
  }
  if (3 < uVar12) {
    uVar11 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar15 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar18 = 1 << ((byte)lVar15 & 0x1f);
  }
  if (((int)uVar12 < 1) || ((int)uVar18 <= *(int *)(param_1 + 0x58))) {
    uVar5 = *(int *)(param_1 + 0x58) - 1U & uVar5;
    *(uint *)((longlong)_Src + 0x54) = uVar5;
    lVar15 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar15 = param_1 + 0x48;
    }
    *(undefined4 *)((longlong)_Src + 0x50) =
         *(undefined4 *)
          (lVar15 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)(int)uVar5) * 4);
    lVar15 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar15 = param_1 + 0x48;
    }
    *(int *)(lVar15 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)(int)uVar5) * 4) = iVar17
    ;
    goto LAB_14182879e;
  }
  *(uint *)(param_1 + 0x58) = uVar18;
  plVar3 = (longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1446efa72(plVar3,0,0,4);
    uVar18 = *(uint *)(param_1 + 0x58);
  }
  lVar15 = param_1 + 0x48;
  if (uVar18 == 1) {
    if (*plVar3 != 0) {
      FUN_1446efa72(plVar3,0,0,4);
    }
LAB_1418288d9:
    uVar5 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar6 = lVar15;
      }
      *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x58) + 0x7fffffffU & uVar5) * 4) =
           0xffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar18 != uVar5);
  }
  else {
    if (uVar18 == 0) goto LAB_14182879e;
    FUN_1446efa72(plVar3,0,uVar18,4);
    if (0 < (int)uVar18) goto LAB_1418288d9;
  }
  iVar21 = *(int *)(param_1 + 0x38);
  if (iVar21 == 0) {
    uVar11 = 0;
    uVar16 = 1;
    iVar8 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar18 = *puVar10;
    if (uVar18 == 0) {
      iVar8 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar8 = iVar21 + -1;
      }
      uVar11 = 0;
      uVar16 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar16 = uVar11;
      }
      iVar9 = 0;
      do {
        if (uVar16 == uVar11) goto LAB_14182879e;
        iVar9 = iVar9 + 0x20;
        uVar18 = puVar10[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar11 = 0;
      iVar9 = 0;
    }
    uVar16 = (ulonglong)(-uVar18 & uVar18);
    uVar22 = uVar16 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar8 = (iVar9 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar8) {
      iVar8 = iVar21;
    }
  }
  if (iVar8 < iVar21) {
    uVar18 = 0xffffffff;
    do {
      lVar6 = *(longlong *)(param_1 + 0x10);
      lVar20 = (longlong)iVar8 * 0x58;
      uVar22 = (longlong)
               ((int)((ulonglong)*(undefined8 *)(lVar6 + lVar20) >> 0x20) * 0x17 +
               (int)*(undefined8 *)(lVar6 + lVar20)) & (longlong)*(int *)(param_1 + 0x58) - 1U;
      iVar21 = (int)uVar22;
      *(int *)(lVar6 + 0x54 + lVar20) = iVar21;
      lVar19 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar19 = lVar15;
      }
      *(undefined4 *)(lVar6 + 0x50 + lVar20) =
           *(undefined4 *)(lVar19 + ((longlong)*(int *)(param_1 + 0x58) - 1U & uVar22) * 4);
      lVar6 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar6 = lVar15;
      }
      *(int *)(lVar6 + ((longlong)iVar21 & (longlong)*(int *)(param_1 + 0x58) - 1U) * 4) = iVar8;
      uVar18 = ~(uint)uVar16 & uVar18;
      puVar10 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar10 = puVar2;
      }
      iVar21 = *(int *)(param_1 + 0x38);
      iVar8 = (int)uVar11;
      lVar6 = (longlong)iVar8;
      uVar5 = puVar10[lVar6] & uVar18;
      if (uVar5 == 0) {
        iVar13 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar13 = iVar21 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar8) {
          iVar14 = iVar8;
        }
        if (iVar13 <= iVar8) break;
        lVar19 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = puVar10[lVar6 + lVar19 + 1];
          if (uVar5 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar14 - lVar6 == lVar19) goto LAB_14182879e;
        }
        uVar11 = (ulonglong)(iVar8 + (int)lVar19 + 1);
        uVar18 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar5 & uVar5);
      uVar22 = uVar16 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar8 = (iVar9 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar21);
  }
LAB_14182879e:
  iVar21 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar21 = 0;
  }
  FUN_1402980a2((longlong)iVar17 * 0x58 + *plVar1 + 0x10,*param_3,iVar21);
  if (*param_3 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141828c28 FUN_141828c28 body=460 status=ok
// SIG undefined FUN_141828c28(void)

void FUN_141828c28(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x50;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x4c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141828df6 FUN_141828df6 body=158 status=ok
// SIG undefined FUN_141828df6(void)

void FUN_141828df6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong *local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  if (iVar1 < 0x67) {
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141828e95 FUN_141828e95 body=716 status=ok
// SIG undefined FUN_141828e95(void)

void FUN_141828e95(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14adda310;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  uVar3 = FUN_144830b78(puVar1 + 0x12,&DAT_14cb41380);
  *(undefined4 *)(puVar1 + 0x12) = uVar3;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  *(undefined1 *)(puVar1 + 0x15) = 1;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0xf4) = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined2 *)(puVar1 + 0x1f) = 0x101;
  *(undefined4 *)((longlong)puVar1 + 0xfc) = 0;
  if (DAT_14c927740 == (code *)0x0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_146856450;
    local_70 = FUN_1427b121c;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000021;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  local_48 = DAT_14c927740;
  if ((DAT_14c927740 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_40 = 1;
  local_3e = 0;
  local_3c = 0xffffffff;
  uVar3 = FUN_144830b78(local_34);
  *(undefined4 *)(puVar1 + 0x12) = uVar3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3d360) {
    FUN_144b3d300(&DAT_14cb3d360);
    if (DAT_14cb3d360 == -1) {
      FUN_1446ddc76(&DAT_14cb3d358,&DAT_14a418301,1);
      _Init_thread_footer(&DAT_14cb3d360);
    }
  }
  puVar1[0x1d] = DAT_14cb3d358;
  *(byte *)(puVar1 + 0x1e) = *(byte *)(puVar1 + 0x1e) & 0xfe;
  puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14addcb60;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x80;
  *(undefined4 *)(puVar4 + 8) = 0xffffffff;
  puVar2 = (undefined8 *)puVar1[5];
  if ((puVar2 != puVar4) && (puVar1[5] = puVar4, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141829162 FUN_141829162 body=41 status=ok
// SIG undefined FUN_141829162(void)

void FUN_141829162(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_140491bf8();
  return;
}



// FUNCTION 14182918c FUN_14182918c body=371 status=ok
// SIG undefined FUN_14182918c(void)

void FUN_14182918c(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_38 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_28 = *(longlong *)(param_1 + 0x10);
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = 1;
    local_1e = 0;
    local_1c = 0xffffffff;
    FUN_140c6bd52(&local_28,0x1f);
    lVar2 = FUN_145ef25d4();
    local_28 = lVar2;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    local_20 = 2;
    local_1e = 0;
    local_1c = 0xffffffff;
    FUN_140c6c26c(lVar2,0);
    FUN_140c6bd52(&local_28,0x1f);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141829306 FUN_141829306 body=439 status=ok
// SIG undefined FUN_141829306(void)

void FUN_141829306(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)param_2[3];
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)*param_2;
  }
  *(uint *)(plVar2 + 2) = (int)plVar2[2] + 0xfU & 0xfffffff0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3d710) {
    FUN_144b3d300(&DAT_14cb3d710);
    if (DAT_14cb3d710 == -1) {
      FUN_14158b3b2(local_30);
      local_40 = 0;
      local_50 = 0;
      local_70 = "Unknown";
      local_80 = 0;
      uStack_78 = 0;
      local_88 = L"FShaderParameters";
      local_48 = 0;
      local_60 = 0x1e0;
      local_68 = 0x57;
      local_58 = local_30;
      FUN_140b49562(&DAT_14cb3d690,0,1);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a708e3);
      _Init_thread_footer(&DAT_14cb3d710);
    }
  }
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar5 = (longlong)iVar1 * 0x30;
  lVar4 = plVar2[2];
  *(undefined2 **)(lVar3 + lVar5) = puVar6;
  *(undefined2 **)(lVar3 + 8 + lVar5) = &DAT_149dfb77a;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0x7b;
  *(int *)(lVar3 + 0x14 + lVar5) = (int)lVar4;
  *(undefined2 *)(lVar3 + 0x18 + lVar5) = 0x14;
  *(undefined1 **)(lVar3 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = 0;
  *(undefined **)(lVar3 + 0x28 + lVar5) = &DAT_14cb3d690;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 0x1e0;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418294be FUN_1418294be body=18 status=ok
// SIG undefined FUN_1418294be(void)

void FUN_1418294be(longlong param_1)

{
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  FUN_1406fa324(param_1 + 0xb0);
  return;
}



// FUNCTION 1418294d0 FUN_1418294d0 body=609 status=ok
// SIG undefined FUN_1418294d0(void)

void FUN_1418294d0(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1 = (longlong *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(param_1);
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  *param_1 = (longlong)&PTR_FUN_14addb8b0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar3 = FUN_144830b78(param_1 + 0xd,&DAT_14cb41380);
  *(undefined4 *)(param_1 + 0xd) = uVar3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x100;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (DAT_14c927740 == (code *)0x0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_146856450;
    local_70 = FUN_1427b121c;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000021;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  local_48 = DAT_14c927740;
  if ((DAT_14c927740 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_40 = 1;
  local_3e = 0;
  local_3c = 0xffffffff;
  uVar3 = FUN_144830b78(local_34);
  *(undefined4 *)(param_1 + 0xd) = uVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14addcde0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x80;
  *(undefined4 *)(puVar4 + 8) = 0xffffffff;
  puVar2 = (undefined8 *)param_1[5];
  if ((puVar2 != puVar4) && (param_1[5] = (longlong)puVar4, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  uVar1 = *(uint *)(param_1 + 6);
  *(uint *)(param_1 + 6) = uVar1 | 1;
  if ((~uVar1 & 4) == 0) {
    (**(code **)(*param_1 + 0x428))(param_1);
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141829732 FUN_141829732 body=275 status=ok
// SIG undefined FUN_141829732(void)

void FUN_141829732(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182984b FUN_14182984b body=158 status=ok
// SIG undefined FUN_14182984b(void)

void FUN_14182984b(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1 = (longlong *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(param_1);
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  *param_1 = (longlong)&PTR_FUN_14addc100;
  param_1[7] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *puVar3 = &PTR_FUN_14addce50;
  puVar2 = (undefined8 *)param_1[5];
  if ((puVar2 != puVar3) && (param_1[5] = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  uVar1 = *(uint *)(param_1 + 6);
  *(uint *)(param_1 + 6) = uVar1 | 1;
  if ((~uVar1 & 4) == 0) {
    (**(code **)(*param_1 + 0x428))(param_1);
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  }
  return;
}



// FUNCTION 1418298ea FUN_1418298ea body=269 status=ok
// SIG undefined FUN_1418298ea(void)

void FUN_1418298ea(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1c);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418299f8 FUN_1418299f8 body=68 status=ok
// SIG undefined FUN_1418299f8(void)

void FUN_1418299f8(longlong *param_1)

{
  uint uVar1;
  
  FUN_1400bb2d8();
  if (param_1[7] != 0) {
    FUN_1400337aa();
    uVar1 = *(uint *)(param_1 + 6);
    *(uint *)(param_1 + 6) = uVar1 | 1;
    if ((~uVar1 & 4) == 0) {
      (**(code **)(*param_1 + 0x428))(param_1);
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    }
  }
  return;
}



// FUNCTION 141829a42 FUN_141829a42 body=1263 status=ok
// SIG undefined FUN_141829a42(void)

void FUN_141829a42(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = *param_2;
  if (lVar8 == DAT_14cb3d490) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar6 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14addf900;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    pcVar3 = FUN_148193938;
  }
  else if (lVar8 == DAT_14cb3d498) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar6 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14addf900;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    pcVar3 = FUN_1481939d2;
  }
  else if (lVar8 == DAT_14cb3d4a0) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar6 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14addf900;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    pcVar3 = FUN_148193aa2;
  }
  else {
    if (lVar8 != DAT_14cb3d4a8) {
      if (lVar8 != DAT_14cb3d4b0) goto LAB_141829bac;
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      puVar6 = local_40;
      local_38 = 3;
      *local_40 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_40[2] = lVar4;
      *local_40 = &PTR_FUN_14addf900;
      local_40[3] = 0;
      iVar5 = 0;
      if (param_1 != 0) {
        uVar1 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_40 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar5 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar5 = *(int *)(lVar8 + 0x10);
          bVar9 = iVar5 == 0;
          if (bVar9) {
            *(int *)(lVar8 + 0x10) = iVar7;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar5 = iVar7;
          }
        }
      }
      iVar7 = local_38;
      puVar2 = local_40;
      *(int *)((longlong)puVar6 + 0x1c) = iVar5;
      puVar6[4] = FUN_1449bac44;
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      if ((int)param_4[1] == 0) {
LAB_141829b85:
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar6 = (undefined8 *)*param_4;
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,0);
          FUN_1446efa72(param_4,0,0,0x10);
          *(undefined4 *)(param_4 + 1) = 0;
          goto LAB_141829b85;
        }
      }
      *param_4 = (longlong)puVar2;
      *(int *)(param_4 + 1) = iVar7;
      if (local_38 != 0) {
        if (local_40 == (undefined8 *)0x0) goto LAB_141829bac;
        (**(code **)*local_40)(local_40,0);
        FUN_1446efa72(&local_40,0,0,0x10);
        local_38 = 0;
      }
      if (local_40 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_141829bac;
    }
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar6 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14addf900;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    pcVar3 = FUN_148193b72;
  }
  puVar6[4] = pcVar3;
  FUN_144a450dc(param_4,&local_40);
  FUN_1449db362(&local_40);
LAB_141829bac:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141829f32 FUN_141829f32 body=432 status=ok
// SIG undefined FUN_141829f32(void)

void FUN_141829f32(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)param_2[3];
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)*param_2;
  }
  *(uint *)(plVar2 + 2) = (int)plVar2[2] + 0xfU & 0xfffffff0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3d8b8) {
    FUN_144b3d300(&DAT_14cb3d8b8);
    if (DAT_14cb3d8b8 == -1) {
      FUN_145ec82a8(local_30);
      local_40 = 0;
      local_50 = 0;
      local_70 = "Unknown";
      local_80 = 0;
      uStack_78 = 0;
      local_88 = L"FShaderParameters";
      local_48 = 0;
      local_60 = 0x20;
      local_68 = 0x14;
      local_58 = local_30;
      FUN_140b49562(&DAT_14cb3d838,0,1);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a71f50);
      _Init_thread_footer(&DAT_14cb3d8b8);
    }
  }
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar5 = (longlong)iVar1 * 0x30;
  lVar4 = plVar2[2];
  *(undefined2 **)(lVar3 + lVar5) = puVar6;
  *(undefined2 **)(lVar3 + 8 + lVar5) = &DAT_149dfb77a;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0x7b;
  *(int *)(lVar3 + 0x14 + lVar5) = (int)lVar4;
  *(undefined2 *)(lVar3 + 0x18 + lVar5) = 0x14;
  *(undefined1 **)(lVar3 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = 0;
  *(undefined **)(lVar3 + 0x28 + lVar5) = &DAT_14cb3d838;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 0x20;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182a0e4 FUN_14182a0e4 body=161 status=ok
// SIG undefined FUN_14182a0e4(void)

undefined8 * FUN_14182a0e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adda310;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182a186 FUN_14182a186 body=1073 status=ok
// SIG undefined FUN_14182a186(void)

undefined8 * FUN_14182a186(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14adda950;
  if (param_1[0x29] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x29] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x28] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x28] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x27] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x27] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x26] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x26] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x25] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x25] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x22] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x22] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x21] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x21] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x1e] != 0 && (param_1[0x1e] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x1a] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x19] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x19] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x18] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x18] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x17] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x17] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x16] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x16] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x15] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x15] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x12] != 0 && (param_1[0x12] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0 && (param_1[0xe] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0 && (param_1[10] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[6] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[5] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[5] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182a5b8 FUN_14182a5b8 body=290 status=ok
// SIG undefined FUN_14182a5b8(void)

undefined8 * FUN_14182a5b8(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14addaac0;
  lVar4 = 0x40;
  do {
    lVar3 = *(longlong *)((longlong)param_1 + lVar4 + 0x18);
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar3 = *(longlong *)((longlong)param_1 + lVar4 + 0x10);
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar3 = *(longlong *)((longlong)param_1 + lVar4 + 8);
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (*(longlong *)((longlong)param_1 + lVar4) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + lVar4) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = lVar4 + -0x20;
  } while (lVar4 != 0);
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182a6da FUN_14182a6da body=248 status=ok
// SIG undefined FUN_14182a6da(void)

undefined8 * FUN_14182a6da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14addb8b0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    FUN_144727cd0(param_1 + 0x11,0);
  }
  param_1[0x17] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xb4)) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80;
    FUN_1446efbd8(param_1 + 0x13,0);
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182a7d2 FUN_14182a7d2 body=40 status=ok
// SIG undefined FUN_14182a7d2(void)

undefined8 FUN_14182a7d2(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182a7fa FUN_14182a7fa body=353 status=ok
// SIG undefined FUN_14182a7fa(void)

void FUN_14182a7fa(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14182a87f;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14182a87f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14182a95c FUN_14182a95c body=353 status=ok
// SIG undefined FUN_14182a95c(void)

void FUN_14182a95c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14182a9e1;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14182a9e1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14182aabe FUN_14182aabe body=519 status=ok
// SIG undefined FUN_14182aabe(void)

undefined8 * FUN_14182aabe(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14addcde0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 2;
  puVar2 = param_1 + 4;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = puVar2;
  if (*(int *)(param_1 + 7) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_80 = local_60;
  local_78 = local_58;
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_88 = plVar1;
  if (iStack_4c < *(int *)(local_58 + 3)) {
    do {
      lVar3 = *local_88;
      lVar4 = (longlong)iStack_6c * 0x1a0;
      FUN_143a6b780(lVar3 + lVar4 + 0x10);
      FUN_140038ae8(lVar3 + lVar4 + 0x170);
      FUN_140038ae8(lVar3 + lVar4 + 0x158);
      FUN_140038ae8(lVar3 + lVar4 + 0x140);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 3));
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_148195dda(plVar1);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14182acc6 FUN_14182acc6 body=29 status=ok
// SIG undefined FUN_14182acc6(void)

undefined8 FUN_14182acc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182ace4 FUN_14182ace4 body=316 status=ok
// SIG undefined FUN_14182ace4(void)

void FUN_14182ace4(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14182ad77;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14182ad77:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14182ae20 FUN_14182ae20 body=353 status=ok
// SIG undefined FUN_14182ae20(void)

void FUN_14182ae20(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14182aea5;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14182aea5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14182af82 FUN_14182af82 body=316 status=ok
// SIG undefined FUN_14182af82(void)

void FUN_14182af82(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14182b015;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14182b015:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14182b0be FUN_14182b0be body=353 status=ok
// SIG undefined FUN_14182b0be(void)

void FUN_14182b0be(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14182b143;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14182b143:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14182b220 FUN_14182b220 body=316 status=ok
// SIG undefined FUN_14182b220(void)

void FUN_14182b220(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14182b2b3;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14182b2b3:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14182b35c FUN_14182b35c body=316 status=ok
// SIG undefined FUN_14182b35c(void)

void FUN_14182b35c(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14182b3ef;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14182b3ef:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14182b498 FUN_14182b498 body=29 status=ok
// SIG undefined FUN_14182b498(void)

undefined8 FUN_14182b498(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182b4b6 FUN_14182b4b6 body=448 status=ok
// SIG undefined FUN_14182b4b6(void)

void FUN_14182b4b6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14182b678 FUN_14182b678 body=311 status=ok
// SIG undefined FUN_14182b678(void)

void FUN_14182b678(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14182b6e0;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14182b6e0:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14182b7b0 FUN_14182b7b0 body=96 status=ok
// SIG undefined FUN_14182b7b0(void)

void FUN_14182b7b0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 14182b810 FUN_14182b810 body=255 status=ok
// SIG undefined FUN_14182b810(void)

void FUN_14182b810(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14182b90f FUN_14182b90f body=489 status=ok
// SIG undefined FUN_14182b90f(void)

void FUN_14182b90f(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14addfbc0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  uVar3 = FUN_144830b78(puVar1 + 9,&DAT_14cb41380);
  *(undefined4 *)(puVar1 + 9) = uVar3;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14adee9d0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x80;
  *(undefined4 *)(puVar4 + 8) = 0xffffffff;
  puVar2 = (undefined8 *)puVar1[5];
  if ((puVar2 != puVar4) && (puVar1[5] = puVar4, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (DAT_14cb0b430 == (code *)0x0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_145892f94;
    local_68 = &LAB_147d6dbf3;
    local_70 = &LAB_1464081e0;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000001;
    local_90 = 8;
    local_98 = 0x138;
    FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
  }
  local_48 = DAT_14cb0b430;
  if ((DAT_14cb0b430 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_40 = 1;
  local_3e = 0;
  local_3c = 0xffffffff;
  uVar3 = FUN_144830b78(local_34);
  *(undefined4 *)(puVar1 + 9) = uVar3;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182bafa FUN_14182bafa body=185 status=ok
// SIG undefined FUN_14182bafa(void)

void FUN_14182bafa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *plStack_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  plStack_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_14ad42464);
    if (iVar1 < 0x27) goto LAB_14182bb76;
  }
  local_1a8 = (undefined **)0x0;
  plStack_1a0 = (longlong *)0x0;
  FUN_140077068(param_2,&local_1a8);
  if (local_1a8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
LAB_14182bb76:
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ad42464);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182bbb4 FUN_14182bbb4 body=269 status=ok
// SIG undefined FUN_14182bbb4(void)

void FUN_14182bbb4(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182bcc8 FUN_14182bcc8 body=179 status=ok
// SIG undefined FUN_14182bcc8(void)

ulonglong FUN_14182bcc8(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x38);
      }
    }
    *(longlong *)(param_2 + 0x38) = lVar2;
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (param_2 != param_1) {
      iVar1 = *(int *)(param_1 + 0x58);
      _Src = *(void **)(param_1 + 0x50);
      *(int *)(param_2 + 0x58) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 0x5c) == 0) {
        *(undefined4 *)(param_2 + 0x5c) = 0;
      }
      else {
        FUN_1447a127e((undefined8 *)(param_2 + 0x50),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_2 + 0x50),_Src,(longlong)iVar1);
        }
      }
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14182bd7c FUN_14182bd7c body=1095 status=ok
// SIG undefined FUN_14182bd7c(void)

void FUN_14182bd7c(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = *param_2;
  if (lVar8 == DAT_14cb3d920) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar6 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14adf2c60;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    pcVar3 = FUN_1481b6906;
  }
  else if (lVar8 == DAT_14cb3d928) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar6 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14adf2c60;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    pcVar3 = FUN_1481b6a6c;
  }
  else {
    if (lVar8 == DAT_14cb3d930) {
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      puVar6 = local_40;
      local_38 = 3;
      *local_40 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_40[2] = lVar4;
      *local_40 = &PTR_FUN_14adf2c60;
      local_40[3] = 0;
      iVar5 = 0;
      if (param_1 != 0) {
        uVar1 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_40 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar5 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar5 = *(int *)(lVar8 + 0x10);
          bVar9 = iVar5 == 0;
          if (bVar9) {
            *(int *)(lVar8 + 0x10) = iVar7;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar5 = iVar7;
          }
        }
      }
      iVar7 = local_38;
      puVar2 = local_40;
      *(int *)((longlong)puVar6 + 0x1c) = iVar5;
      puVar6[4] = FUN_14482bdb6;
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      if ((int)param_4[1] == 0) {
LAB_14182bea5:
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar6 = (undefined8 *)*param_4;
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,0);
          FUN_1446efa72(param_4,0,0,0x10);
          *(undefined4 *)(param_4 + 1) = 0;
          goto LAB_14182bea5;
        }
      }
      *param_4 = (longlong)puVar2;
      *(int *)(param_4 + 1) = iVar7;
      if (local_38 != 0) {
        if (local_40 == (undefined8 *)0x0) goto LAB_14182becc;
        (**(code **)*local_40)(local_40,0);
        FUN_1446efa72(&local_40,0,0,0x10);
        local_38 = 0;
      }
      if (local_40 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14182becc;
    }
    if (lVar8 != DAT_14cb3d938) goto LAB_14182becc;
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar6 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14adf2c60;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    pcVar3 = FUN_1481b6c64;
  }
  puVar6[4] = pcVar3;
  FUN_144a450dc(param_4,&local_40);
  FUN_1449db362(&local_40);
LAB_14182becc:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14182c1c4 FUN_14182c1c4 body=432 status=ok
// SIG undefined FUN_14182c1c4(void)

void FUN_14182c1c4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)param_2[3];
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)*param_2;
  }
  *(uint *)(plVar2 + 2) = (int)plVar2[2] + 0xfU & 0xfffffff0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3e488) {
    FUN_144b3d300(&DAT_14cb3e488);
    if (DAT_14cb3e488 == -1) {
      FUN_145db09f4(local_30);
      local_40 = 0;
      local_50 = 0;
      local_70 = "Unknown";
      local_80 = 0;
      uStack_78 = 0;
      local_88 = L"FShaderParameters";
      local_48 = 0;
      local_60 = 0x20;
      local_68 = 0x10;
      local_58 = local_30;
      FUN_140b49562(&DAT_14cb3e408,0,1);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a7e6d9);
      _Init_thread_footer(&DAT_14cb3e488);
    }
  }
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar5 = (longlong)iVar1 * 0x30;
  lVar4 = plVar2[2];
  *(undefined2 **)(lVar3 + lVar5) = puVar6;
  *(undefined2 **)(lVar3 + 8 + lVar5) = &DAT_149dfb77a;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0x7b;
  *(int *)(lVar3 + 0x14 + lVar5) = (int)lVar4;
  *(undefined2 *)(lVar3 + 0x18 + lVar5) = 0x14;
  *(undefined1 **)(lVar3 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = 0;
  *(undefined **)(lVar3 + 0x28 + lVar5) = &DAT_14cb3e408;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 0x20;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182c375 FUN_14182c375 body=303 status=ok
// SIG undefined FUN_14182c375(void)

void FUN_14182c375(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  FUN_14007c92a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ade0260;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xac) = 0;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(undefined4 *)(puVar1 + 0x1b) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0xdc) = 0x404;
  puVar1[0xe] = &DAT_14a176f00;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x23] = 0;
  *(undefined4 *)(puVar1 + 0x24) = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 300) = 0;
  puVar1[0x27] = 0;
  *(undefined4 *)(puVar1 + 0x28) = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  *(undefined4 *)(puVar1 + 0x2b) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0x15c) = 0x404;
  puVar1[0x1e] = &DAT_14a176f00;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  FUN_1446f470e(&local_20,L"Vector2 Curve",1);
  puVar1[0xc] = local_20;
  FUN_14007c890(puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182c4ac FUN_14182c4ac body=269 status=ok
// SIG undefined FUN_14182c4ac(void)

void FUN_14182c4ac(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182c5ba FUN_14182c5ba body=384 status=ok
// SIG undefined FUN_14182c5ba(void)

void FUN_14182c5ba(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  FUN_14007c92a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ade0f40;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xac) = 0;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(undefined4 *)(puVar1 + 0x1b) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0xdc) = 0x404;
  puVar1[0xe] = &DAT_14a176f00;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x23] = 0;
  *(undefined4 *)(puVar1 + 0x24) = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 300) = 0;
  puVar1[0x27] = 0;
  *(undefined4 *)(puVar1 + 0x28) = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  *(undefined4 *)(puVar1 + 0x2b) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0x15c) = 0x404;
  puVar1[0x1e] = &DAT_14a176f00;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x33] = 0;
  *(undefined4 *)(puVar1 + 0x34) = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x1ac) = 0;
  puVar1[0x37] = 0;
  *(undefined4 *)(puVar1 + 0x38) = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  *(undefined4 *)(puVar1 + 0x3b) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0x1dc) = 0x404;
  puVar1[0x2e] = &DAT_14a176f00;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  FUN_1446f470e(&local_20,L"Vector3 Curve",1);
  puVar1[0xc] = local_20;
  FUN_14007c890(puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182c742 FUN_14182c742 body=269 status=ok
// SIG undefined FUN_14182c742(void)

void FUN_14182c742(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182c850 FUN_14182c850 body=175 status=ok
// SIG undefined FUN_14182c850(void)

void FUN_14182c850(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1 = (longlong *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(param_1);
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  *param_1 = (longlong)&PTR_FUN_14ade15e0;
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3f) = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  *puVar3 = &PTR_FUN_14adeea40;
  puVar2 = (undefined8 *)param_1[5];
  if ((puVar2 != puVar3) && (param_1[5] = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  uVar1 = *(uint *)(param_1 + 6);
  *(uint *)(param_1 + 6) = uVar1 | 1;
  if ((~uVar1 & 4) == 0) {
    (**(code **)(*param_1 + 0x428))(param_1);
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  }
  return;
}



// FUNCTION 14182c900 FUN_14182c900 body=68 status=ok
// SIG undefined FUN_14182c900(void)

void FUN_14182c900(longlong *param_1)

{
  uint uVar1;
  
  FUN_1400bb2d8();
  if (param_1[7] != 0) {
    FUN_1400337aa();
  }
  uVar1 = *(uint *)(param_1 + 6);
  *(uint *)(param_1 + 6) = uVar1 | 1;
  if ((~uVar1 & 4) == 0) {
    (**(code **)(*param_1 + 0x428))(param_1);
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  }
  return;
}



// FUNCTION 14182c944 FUN_14182c944 body=269 status=ok
// SIG undefined FUN_14182c944(void)

void FUN_14182c944(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182ca52 FUN_14182ca52 body=1104 status=ok
// SIG undefined FUN_14182ca52(void)

void FUN_14182ca52(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_2;
  iVar5 = (int)param_2[3];
  iVar4 = (int)param_2[4];
  if (((lVar2 == DAT_14cb3d9b8) && (iVar5 == 3)) && (iVar4 == 3)) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,2,0x10);
    puVar7 = local_40;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_40[2] = lVar6;
    *local_40 = &PTR_FUN_14adeeab0;
    local_40[3] = param_1;
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    if ((int)param_4[1] == 0) {
LAB_14182cb2d:
      if (*param_4 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar1 = (undefined8 *)*param_4;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(param_4,0,0,0x10);
        *(undefined4 *)(param_4 + 1) = 0;
        goto LAB_14182cb2d;
      }
    }
    *param_4 = (longlong)puVar7;
    *(undefined4 *)(param_4 + 1) = 2;
    if (local_38 == 0) {
LAB_14182cb4f:
      if (local_40 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_40 != (undefined8 *)0x0) {
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
      goto LAB_14182cb4f;
    }
    lVar2 = *param_2;
    iVar5 = (int)param_2[3];
    iVar4 = (int)param_2[4];
  }
  if ((iVar4 == 3 && iVar5 == 3) && lVar2 == DAT_14cb3d9c0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if ((iVar5 == 0 && iVar4 == 3) && lVar2 == DAT_14cb3d9d0) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar7 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_40[2] = lVar6;
    *local_40 = &PTR_FUN_14adf2fd0;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    pcVar3 = FUN_1481b8008;
  }
  else if ((iVar4 == 6 && iVar5 == 0) && lVar2 == DAT_14cb3d9d8) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar7 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_40[2] = lVar6;
    *local_40 = &PTR_FUN_14adf2fd0;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    pcVar3 = FUN_1481b8104;
  }
  else {
    if ((iVar4 != 3 || iVar5 != 0) || lVar2 != DAT_14cb3d9c8) goto LAB_14182cbfc;
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar7 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_40[2] = lVar6;
    *local_40 = &PTR_FUN_14adf2fd0;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    pcVar3 = FUN_1481b839a;
  }
  puVar7[4] = pcVar3;
  FUN_144a450dc(param_4,&local_40);
  FUN_1449db362(&local_40);
LAB_14182cbfc:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182ceb8 FUN_14182ceb8 body=179 status=ok
// SIG undefined FUN_14182ceb8(void)

void FUN_14182ceb8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  plVar2 = (longlong *)param_2[3];
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)*param_2;
  }
  *(uint *)(plVar2 + 2) = (int)plVar2[2] + 0xfU & 0xfffffff0;
  FUN_140187dda();
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar5 = (longlong)iVar1 * 0x30;
  lVar4 = plVar2[2];
  *(undefined2 **)(lVar3 + lVar5) = puVar6;
  *(undefined2 **)(lVar3 + 8 + lVar5) = &DAT_149dfb77a;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0x7b;
  *(int *)(lVar3 + 0x14 + lVar5) = (int)lVar4;
  *(undefined2 *)(lVar3 + 0x18 + lVar5) = 0x14;
  *(undefined1 **)(lVar3 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = 0;
  *(undefined **)(lVar3 + 0x28 + lVar5) = &DAT_14cb3e490;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 0x50;
  return;
}



// FUNCTION 14182cf6c FUN_14182cf6c body=155 status=ok
// SIG undefined FUN_14182cf6c(void)

double * FUN_14182cf6c(longlong param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = 1.0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar4 = FUN_140d5a4a0();
    lVar1 = *(longlong *)(param_1 + 0x38);
    if ((((lVar1 != 0) && (lVar4 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      dVar5 = 1.0;
      dVar6 = 1.0;
      dVar3 = 1.0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        dVar6 = (double)*(int *)(lVar1 + 0x70);
        dVar5 = (double)*(int *)(lVar1 + 0x6c);
        dVar3 = (double)*(int *)(lVar1 + 0x68);
      }
      goto LAB_14182cfe0;
    }
  }
  dVar5 = 1.0;
  dVar6 = 1.0;
LAB_14182cfe0:
  *param_2 = dVar3;
  param_2[1] = dVar5;
  param_2[2] = dVar6;
  return param_2;
}



// FUNCTION 14182d007 FUN_14182d007 body=489 status=ok
// SIG undefined FUN_14182d007(void)

void FUN_14182d007(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14ade21e0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  uVar3 = FUN_144830b78(puVar1 + 9,&DAT_14cb41380);
  *(undefined4 *)(puVar1 + 9) = uVar3;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14adeed50;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x80;
  *(undefined4 *)(puVar4 + 8) = 0xffffffff;
  puVar2 = (undefined8 *)puVar1[5];
  if ((puVar2 != puVar4) && (puVar1[5] = puVar4, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (DAT_14cb0b430 == (code *)0x0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_145892f94;
    local_68 = &LAB_147d6dbf3;
    local_70 = &LAB_1464081e0;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000001;
    local_90 = 8;
    local_98 = 0x138;
    FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
  }
  local_48 = DAT_14cb0b430;
  if ((DAT_14cb0b430 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_40 = 1;
  local_3e = 0;
  local_3c = 0xffffffff;
  uVar3 = FUN_144830b78(local_34);
  *(undefined4 *)(puVar1 + 9) = uVar3;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182d1f2 FUN_14182d1f2 body=275 status=ok
// SIG undefined FUN_14182d1f2(void)

void FUN_14182d1f2(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182d306 FUN_14182d306 body=49 status=ok
// SIG undefined FUN_14182d306(void)

longlong FUN_14182d306(void)

{
  if (DAT_14cb3dba8 == 0) {
    FUN_14086a14e(&DAT_14cb3dba8,&PTR_FUN_14ade2ed0);
  }
  return DAT_14cb3dba8;
}



// FUNCTION 14182d337 FUN_14182d337 body=478 status=ok
// SIG undefined FUN_14182d337(void)

void FUN_14182d337(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 **local_b0;
  ulonglong *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar1 = (undefined8 *)*param_1;
  FUN_14078cbfa(puVar1);
  *puVar1 = &PTR_FUN_14ade84c0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x19,&DAT_14cb42160);
  *(undefined4 *)(puVar1 + 0x19) = uVar2;
  *(undefined1 *)((longlong)puVar1 + 0xcc) = 0;
  puVar1[0x1a] = 0;
  local_b8 = puVar1 + 0x1b;
  FUN_140120f5c();
  FUN_140120f5c(puVar1 + 0x22);
  FUN_140120f5c(puVar1 + 0x29);
  FUN_140120f5c(puVar1 + 0x30);
  FUN_140120f5c(puVar1 + 0x37);
  FUN_140120f5c(puVar1 + 0x3e);
  FUN_140120f5c(puVar1 + 0x45);
  FUN_140120f5c(puVar1 + 0x4c);
  puVar1[0x53] = 0;
  puVar1[0x54] = 0;
  puVar1[0x55] = 0;
  puVar1[0x56] = 0;
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  puVar1[0x59] = 0;
  puVar1[0x5a] = 0;
  puVar1[0x5b] = 0;
  puVar1[0x5c] = 0;
  *(undefined1 *)(puVar1 + 0x5d) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x2ec) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x5e) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x2f4) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x5f) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x2fc) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x60) = 1;
  *(undefined8 *)((longlong)puVar1 + 0x304) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)puVar1 + 0x30c) = 1;
  puVar1[0x62] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 99) = 0xffffffff;
  local_b0 = &local_a0;
  local_a0 = local_b8;
  local_a8 = local_60;
  local_98 = puVar1 + 0x22;
  local_90 = puVar1 + 0x29;
  local_88 = puVar1 + 0x30;
  local_80 = puVar1 + 0x37;
  local_78 = puVar1 + 0x3e;
  local_70 = puVar1 + 0x45;
  local_68 = puVar1 + 0x4c;
  FUN_14078cc5e(puVar1 + 0x15);
  if ((local_60[0] ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182d516 FUN_14182d516 body=99 status=ok
// SIG undefined FUN_14182d516(void)

void FUN_14182d516(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  switchD_143c3d4dc::caseD_20(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182d57a FUN_14182d57a body=47 status=ok
// SIG undefined FUN_14182d57a(void)

void FUN_14182d57a(longlong *param_1)

{
  FUN_14042b052();
  (**(code **)(*param_1 + 0x340))(param_1,0);
  FUN_14042b016(param_1 + 0x53);
  return;
}



// FUNCTION 14182d5aa FUN_14182d5aa body=117 status=ok
// SIG undefined FUN_14182d5aa(void)

undefined8 *
FUN_14182d5aa(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x140,0x10);
  FUN_1401f77c6(puVar1,param_2,param_1,param_3);
  *puVar1 = &PTR_FUN_14ae09e50;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  FUN_140722e22(puVar1,param_1,param_3,param_4);
  return puVar1;
}



// FUNCTION 14182d620 FUN_14182d620 body=323 status=ok
// SIG undefined FUN_14182d620(void)

void FUN_14182d620(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38 [2];
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
LAB_14182d679:
    lVar5 = *(longlong *)(param_1 + 0xb8);
    if (lVar5 == 0) goto LAB_14182d6a5;
  }
  else {
    local_38[0] = *(undefined4 *)(param_1 + 200);
    local_40 = *(longlong *)(param_1 + 0xc0);
    local_30 = 0;
    uStack_28 = 0;
    if ((((local_40 == 0) || (plVar2 = (longlong *)FUN_144741050(local_38), *plVar2 == 0)) ||
        (*(longlong *)(param_2 + 8) == 0)) ||
       ((plVar2 = *(longlong **)(*(longlong *)(param_2 + 8) + 0x40), plVar2 == (longlong *)0x0 ||
        (piVar3 = (int *)(**(code **)(*plVar2 + 0x58))(plVar2,&local_40,0), piVar3 == (int *)0x0))))
    {
LAB_14182d664:
      lVar5 = 0;
    }
    else {
      iVar1 = *piVar3;
      if (((longlong)iVar1 < 0) ||
         (((int)plVar2[9] <= iVar1 ||
          (lVar5 = *(longlong *)(plVar2[8] + (longlong)iVar1 * 8), lVar5 == 0))))
      goto LAB_14182d664;
      lVar4 = FUN_1402d2740();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) != lVar4 + 0x30)) goto LAB_14182d664;
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (lVar5 == 0) goto LAB_14182d679;
  }
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_144769b64(param_3,iVar1);
  }
  *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar5;
LAB_14182d6a5:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14182d764 FUN_14182d764 body=354 status=ok
// SIG undefined FUN_14182d764(void)

ulonglong FUN_14182d764(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = FUN_14021f064();
  uVar5 = (ulonglong)uVar4;
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x35) & 3) == 1)) {
        local_68 = *(undefined4 *)(lVar3 + 0x28);
        local_70 = *(undefined8 *)(lVar3 + 0x20);
        local_60 = 0;
        uStack_58 = 0;
        local_78 = 0;
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        (**(code **)(*param_2 + 0x10))(param_2,&local_70,0,1);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  iVar1 = *(int *)(param_1 + 0x2a0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x298);
    lVar6 = 0;
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
    do {
      local_68 = *(undefined4 *)(lVar2 + 0x1c + lVar6);
      local_70 = *(undefined8 *)(lVar2 + 0x14 + lVar6);
      local_60 = 0;
      uStack_58 = 0;
      local_78 = 0;
      (**(code **)(*param_2 + 0x10))(param_2,&local_70,0,1);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x2c;
    } while ((longlong)iVar1 * 0x2c - lVar6 != 0);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 14182d8ce FUN_14182d8ce body=123 status=ok
// SIG undefined FUN_14182d8ce(void)

void FUN_14182d8ce(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014182d941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x218))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_1c8,&DAT_14ad42464);
}



// FUNCTION 14182d94a FUN_14182d94a body=142 status=ok
// SIG undefined FUN_14182d94a(void)

void FUN_14182d94a(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ad42464);
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014182d9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x218))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_1c8,&DAT_149e3cc78);
}



// FUNCTION 14182d9da FUN_14182d9da body=915 status=ok
// SIG undefined FUN_14182d9da(void)

byte FUN_14182d9da(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_78;
  undefined4 local_70 [2];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 0x230);
  if ((longlong)iVar1 == 0) {
    bVar5 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x228);
    lVar6 = 0;
    bVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar7 + lVar6);
      if ((plVar2 != (longlong *)0x0) && (*(char *)((longlong)plVar2 + 0x5d) == '\x01')) {
        bVar4 = (**(code **)(*plVar2 + 0x2e8))(plVar2,param_2);
        bVar5 = bVar5 | bVar4;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2b0))(plVar2,&local_58);
    if ((longlong)local_50 != 0) {
      lVar7 = 0;
      do {
        lVar6 = *(longlong *)(local_58 + 8 + lVar7);
        if (lVar6 != 0) {
          local_78 = lVar6;
          local_70[0] = FUN_144830b78(local_70,&DAT_14cb420e0);
          local_68 = 0;
          uStack_60 = 0;
          local_88 = 0;
          bVar4 = (**(code **)(*param_2 + 0x10))(param_2,&local_78,0,1);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          bVar5 = bVar5 | bVar4;
        }
        if (*(char *)(local_58 + 0x34 + lVar7) == '\x02') {
          lVar6 = *(longlong *)(local_58 + 0x1c + lVar7);
          if (lVar6 != 0) {
            local_78 = lVar6;
            local_70[0] = FUN_144830b78(local_70,&DAT_14cb420d0);
            local_68 = 0;
            uStack_60 = 0;
            local_88 = 0;
            bVar4 = (**(code **)(*param_2 + 0x10))(param_2,&local_78,0,1);
            if (local_68 != 0) {
              FUN_1400020a8();
            }
            bVar5 = bVar5 | bVar4;
          }
          lVar6 = *(longlong *)(local_58 + 0x24 + lVar7);
          if (lVar6 != 0) {
            local_78 = lVar6;
            local_70[0] = FUN_144830b78(local_70,&DAT_14cb420d0);
            local_68 = 0;
            uStack_60 = 0;
            local_88 = 0;
            bVar4 = (**(code **)(*param_2 + 0x10))(param_2,&local_78,0,1);
            if (local_68 != 0) {
              FUN_1400020a8();
            }
            bVar5 = bVar5 | bVar4;
          }
          lVar6 = *(longlong *)(local_58 + 0x2c + lVar7);
          if (lVar6 != 0) {
            local_78 = lVar6;
            local_70[0] = FUN_144830b78(local_70,&DAT_14cb420d0);
            local_68 = 0;
            uStack_60 = 0;
            local_88 = 0;
            bVar4 = (**(code **)(*param_2 + 0x10))(param_2,&local_78,0,1);
            if (local_68 != 0) {
              FUN_1400020a8();
            }
            bVar5 = bVar5 | bVar4;
          }
        }
        lVar6 = *(longlong *)(local_58 + 0x8c + lVar7);
        if (lVar6 != 0) {
          local_78 = lVar6;
          local_70[0] = FUN_144830b78(local_70,&DAT_14cb420d0);
          local_68 = 0;
          uStack_60 = 0;
          local_88 = 0;
          bVar4 = (**(code **)(*param_2 + 0x10))(param_2,&local_78,0,1);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          bVar5 = bVar5 | bVar4;
        }
        lVar7 = lVar7 + 0xa8;
      } while ((longlong)local_50 * 0xa8 - lVar7 != 0);
    }
    iVar1 = *(int *)(param_1 + 0x250);
    if ((longlong)iVar1 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x248);
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar7 + lVar6);
        if (lVar3 != 0) {
          local_78 = lVar3;
          local_70[0] = FUN_144830b78(local_70,&DAT_14cb420d0);
          local_68 = 0;
          uStack_60 = 0;
          local_88 = 0;
          bVar4 = (**(code **)(*param_2 + 0x10))(param_2,&local_78,0,1);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          bVar5 = bVar5 | bVar4;
        }
        lVar6 = lVar6 + 0x14;
      } while ((longlong)iVar1 * 0x14 != lVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182dd74 FUN_14182dd74 body=69 status=ok
// SIG undefined FUN_14182dd74(void)

undefined8 * FUN_14182dd74(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14addfbc0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182ddba FUN_14182ddba body=599 status=ok
// SIG undefined FUN_14182ddba(void)

undefined8 * FUN_14182ddba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ade0260;
  param_1[0x1e] = &DAT_14a176f00;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1e] = &PTR_FUN_14a177080;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)((longlong)param_1 + 0x104) != 0) {
    FUN_14472eb64(param_1 + 0x1f,0);
  }
  param_1[0x25] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x124)) {
    *(undefined4 *)((longlong)param_1 + 0x124) = 0x80;
    FUN_1446efbd8(param_1 + 0x21,0);
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  param_1[0xe] = &DAT_14a176f00;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  param_1[0xe] = &PTR_FUN_14a177080;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    FUN_14472eb64(param_1 + 0xf,0);
  }
  param_1[0x15] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xa4)) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
    FUN_1446efbd8(param_1 + 0x11,0);
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14081e1cc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182e012 FUN_14182e012 body=40 status=ok
// SIG undefined FUN_14182e012(void)

undefined8 FUN_14182e012(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182e03a FUN_14182e03a body=69 status=ok
// SIG undefined FUN_14182e03a(void)

undefined8 * FUN_14182e03a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ade21e0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182e080 FUN_14182e080 body=330 status=ok
// SIG undefined FUN_14182e080(void)

undefined8 * FUN_14182e080(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ade84c0;
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140852690(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182e1ca FUN_14182e1ca body=40 status=ok
// SIG undefined FUN_14182e1ca(void)

undefined8 FUN_14182e1ca(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182e1f2 FUN_14182e1f2 body=40 status=ok
// SIG undefined FUN_14182e1f2(void)

undefined8 FUN_14182e1f2(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182e21a FUN_14182e21a body=552 status=ok
// SIG undefined FUN_14182e21a(void)

undefined8 * FUN_14182e21a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  uint local_54;
  uint *local_50;
  uint local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14adee9d0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 2;
  puVar2 = (uint *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 7);
  local_54 = 1;
  if (iVar3 == 0) {
    local_40 = 0;
    local_58 = 0;
    local_44 = 0;
  }
  else {
    puVar6 = (uint *)param_1[6];
    if ((uint *)param_1[6] == (uint *)0x0) {
      puVar6 = puVar2;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      uVar9 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar9;
      }
      local_58 = (int)uVar8 + 1;
      local_40 = (int)uVar8 * 0x20 + 0x20;
      iVar7 = 0;
      do {
        local_44 = iVar3;
        if (uVar8 == uVar9) goto LAB_14182e278;
        iVar7 = iVar7 + 0x20;
        uVar5 = puVar6[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar5 == 0);
      local_58 = (int)uVar9;
      local_40 = iVar7;
    }
    else {
      local_40 = 0;
      local_58 = 0;
    }
    local_54 = -uVar5 & uVar5;
    uVar8 = (ulonglong)local_54 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_44 = (local_40 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar3 <= local_44) {
      local_44 = iVar3;
    }
  }
LAB_14182e278:
  local_48 = 0xffffffff;
  local_60 = plVar1;
  local_50 = puVar2;
  if (local_44 < iVar3) {
    do {
      FUN_1481bc360((longlong)local_44 * 0x38 + *local_60 + 8);
      local_48 = local_48 & ~local_54;
      FUN_1449c0562(&local_58);
    } while (local_44 < (int)local_50[6]);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_144748838(plVar1,0);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14182e444 FUN_14182e444 body=79 status=ok
// SIG undefined FUN_14182e444(void)

undefined8 * FUN_14182e444(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14adeea40;
  if (param_1[0xc] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xc] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182e494 FUN_14182e494 body=457 status=ok
// SIG undefined FUN_14182e494(void)

undefined8 * FUN_14182e494(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14adeed50;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 2;
  puVar2 = param_1 + 4;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = puVar2;
  if (*(int *)(param_1 + 7) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 3)) {
    do {
      FUN_1411b40c4(*local_78 + (longlong)iStack_5c * 0x38 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 3));
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_144748838(plVar1,0);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14182e65e FUN_14182e65e body=1354 status=ok
// SIG undefined FUN_14182e65e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14182e65e(longlong param_1,double *param_2,undefined8 param_3,longlong param_4,
                      int param_5)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  ushort uVar8;
  uint uVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ushort uVar14;
  float fVar15;
  ushort uVar16;
  ulonglong uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  int iVar21;
  int iVar22;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  int iVar23;
  undefined1 in_XMM3 [16];
  undefined1 auVar24 [16];
  longlong lVar25;
  double dVar26;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auStack_f8 [36];
  float local_d4 [9];
  undefined1 local_b0;
  char local_af;
  uint local_ac;
  longlong lStack_a8;
  undefined4 local_a0;
  undefined1 auStack_9c [12];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_5 != 0) {
    iVar3 = *(int *)(*(byte **)(param_1 + 8) + 4);
    if (iVar3 != -1) {
      uVar13 = 0;
      local_d4[6] = 0.0;
      local_d4[7] = 0.0;
      local_d4[8] = 0.0;
      local_d4[3] = 0.0;
      local_d4[4] = 0.0;
      local_d4[5] = 0.0;
      bVar2 = **(byte **)(param_1 + 8);
      lVar7 = *(longlong *)(param_4 + 0x78);
      auStack_9c = SUB1612((undefined1  [16])0x0,4);
      local_ac = 0;
      lStack_a8 = 0;
      local_a0 = 0;
      if (lVar7 != 0) {
        bVar10 = bVar2 ^ 1;
        uVar4 = *(undefined4 *)(lVar7 + 0x128 + (ulonglong)bVar10 * 8);
        lVar12 = *(longlong *)(lVar7 + 0x18 + (ulonglong)bVar10 * 0x20);
        auVar19._4_4_ = uVar4;
        auVar19._0_4_ = uVar4;
        auVar19._8_8_ = 0;
        auVar20 = pmovsxbd(in_XMM2,0x100);
        auVar24 = pmovsxbq(in_XMM3,0x100);
        lVar11 = 0;
        auVar27 = pmovsxbq(unaff_XMM6,0x202);
        auVar29 = pmovsxbd(unaff_XMM7,0x2020202);
        do {
          auVar31._0_4_ = iVar3 + auVar20._0_4_;
          iVar21 = auVar20._4_4_;
          auVar31._4_4_ = iVar3 + iVar21;
          iVar22 = auVar20._8_4_;
          auVar31._8_4_ = iVar22;
          iVar23 = auVar20._12_4_;
          auVar31._12_4_ = iVar23;
          auVar31 = pmulld(auVar31,auVar19);
          auVar31 = pmovzxdq(auVar31,auVar31);
          if (SUB168(auVar24 ^ _DAT_149931e80,0) < -0x7ffffffffffffffd) {
            (&lStack_a8)[lVar11] = auVar31._0_8_ + lVar12;
          }
          if (SUB168(auVar24 ^ _DAT_149931e80,8) < -0x7ffffffffffffffd) {
            *(longlong *)(auStack_9c + lVar11 * 8 + -4) = auVar31._8_8_ + lVar12;
          }
          lVar11 = lVar11 + 2;
          lVar25 = auVar24._8_8_;
          auVar24._0_8_ = auVar24._0_8_ + auVar27._0_8_;
          auVar24._8_8_ = lVar25 + auVar27._8_8_;
          auVar20._0_4_ = auVar20._0_4_ + auVar29._0_4_;
          auVar20._4_4_ = iVar21 + auVar29._4_4_;
          auVar20._8_4_ = iVar22 + auVar29._8_4_;
          auVar20._12_4_ = iVar23 + auVar29._12_4_;
        } while (lVar11 != 4);
        uVar13 = (ulonglong)*(uint *)(lVar7 + 0x120);
      }
      lVar12 = 0;
      do {
        if (bVar2 == 0) {
          if ((int)uVar13 < 1) {
            uVar16 = 0;
            uVar8 = 0xfc00;
            uVar9 = 0xf800000;
LAB_14182ead6:
            fVar15 = (float)(uVar9 | 0x70000000);
          }
          else {
            uVar16 = 0x7c00;
            uVar17 = 0;
            uVar14 = 0xfc00;
            do {
              uVar8 = *(ushort *)((&lStack_a8)[lVar12] + uVar17 * 2);
              if ((short)uVar8 <= (short)uVar16) {
                uVar16 = uVar8;
              }
              if ((short)uVar8 <= (short)uVar14) {
                uVar8 = uVar14;
              }
              uVar17 = uVar17 + 1;
              uVar14 = uVar8;
            } while (uVar13 != uVar17);
            uVar9 = (uint)uVar16 << 0xd;
            if ((uVar9 & 0xf800000) == 0xf800000) goto LAB_14182ead6;
            if ((uVar9 & 0xf800000) == 0) {
              fVar15 = (float)(uVar9 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar15 = (float)((uVar9 & 0xfffe000) + 0x38000000);
            }
          }
          local_d4[lVar12 + 6] = (float)((int)(short)uVar16 & 0x80000000U | (uint)fVar15);
          uVar9 = (uint)uVar8 << 0xd;
          if ((uVar9 & 0xf800000) == 0xf800000) {
            fVar15 = (float)(uVar9 | 0x70000000);
          }
          else if ((uVar9 & 0xf800000) == 0) {
            fVar15 = (float)(uVar9 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar15 = (float)((uVar9 & 0xfffe000) + 0x38000000);
          }
          fVar15 = (float)((int)(short)uVar8 & 0x80000000U | (uint)fVar15);
        }
        else {
          auVar29 = ZEXT816(0x7f7fffff);
          auVar27 = ZEXT816(0xff7fffff);
          if (0 < (int)uVar13) {
            uVar17 = 0;
            auVar27 = ZEXT816(0xff7fffff);
            auVar29 = ZEXT816(0x7f7fffff);
            do {
              fVar15 = *(float *)((&lStack_a8)[lVar12] + uVar17 * 4);
              if (fVar15 <= auVar29._0_4_) {
                auVar29._0_4_ = fVar15;
              }
              if (auVar27._0_4_ <= fVar15) {
                auVar27._0_4_ = fVar15;
              }
              uVar17 = uVar17 + 1;
            } while (uVar13 != uVar17);
          }
          local_d4[lVar12 + 6] = auVar29._0_4_;
          fVar15 = auVar27._0_4_;
        }
        local_d4[lVar12 + 3] = fVar15;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      dVar26 = (double)local_d4[8];
      dVar28 = (double)local_d4[7];
      dVar32 = (double)local_d4[6];
      *param_2 = dVar32;
      param_2[1] = dVar28;
      dVar30 = (double)local_d4[5];
      dVar5 = (double)local_d4[4];
      dVar6 = (double)local_d4[3];
      param_2[2] = dVar26;
      param_2[3] = dVar6;
      param_2[4] = dVar5;
      param_2[5] = dVar30;
      *(undefined1 *)(param_2 + 6) = 1;
      if (*(int *)(*(undefined1 **)(param_1 + 0x10) + 4) != -1) {
        FUN_14060d608(&local_b0,lVar7,
                      CONCAT71((int7)(uVar13 >> 8),**(undefined1 **)(param_1 + 0x10)));
        lVar7 = 0;
        do {
          if (local_af == '\0') {
            if ((int)local_ac < 1) {
              uVar8 = 0xfc00;
              uVar9 = 0x1f800000;
LAB_14182eb3e:
              fVar15 = (float)(uVar9 | 0x70000000);
            }
            else {
              uVar13 = 0;
              uVar16 = 0xfc00;
              do {
                uVar8 = *(ushort *)((&lStack_a8)[lVar7] + uVar13 * 2);
                if ((short)uVar8 <= (short)uVar16) {
                  uVar8 = uVar16;
                }
                uVar13 = uVar13 + 1;
                uVar16 = uVar8;
              } while (local_ac != uVar13);
              uVar9 = (uint)uVar8 << 0xd;
              if ((uVar9 & 0xf800000) == 0xf800000) goto LAB_14182eb3e;
              if ((uVar9 & 0xf800000) == 0) {
                fVar15 = (float)(uVar9 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar15 = (float)((uVar9 & 0xfffe000) + 0x38000000);
              }
            }
            fVar15 = (float)((int)(short)uVar8 & 0x80000000U | (uint)fVar15);
          }
          else {
            fVar15 = -3.4028235e+38;
            if (0 < (int)local_ac) {
              uVar13 = 0;
              fVar15 = -3.4028235e+38;
              do {
                fVar1 = *(float *)((&lStack_a8)[lVar7] + uVar13 * 4);
                if (fVar15 <= fVar1) {
                  fVar15 = fVar1;
                }
                uVar13 = uVar13 + 1;
              } while (local_ac != uVar13);
            }
          }
          local_d4[lVar7] = fVar15;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 3);
        fVar15 = ABS(local_d4[0]);
        if (ABS(local_d4[0]) <= ABS(local_d4[1])) {
          fVar15 = ABS(local_d4[1]);
        }
        if (fVar15 <= ABS(local_d4[2])) {
          fVar15 = ABS(local_d4[2]);
        }
        dVar18 = (double)fVar15;
        *param_2 = dVar32 - dVar18;
        param_2[1] = dVar28 - dVar18;
        param_2[2] = dVar26 - dVar18;
        param_2[3] = dVar6 + dVar18;
        param_2[4] = dVar5 + dVar18;
        param_2[5] = dVar30 + dVar18;
        *(undefined1 *)(param_2 + 6) = 1;
      }
      if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  *(undefined1 *)(param_2 + 6) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_f8);
}



// FUNCTION 14182ebb6 FUN_14182ebb6 body=29 status=ok
// SIG undefined FUN_14182ebb6(void)

void FUN_14182ebb6(undefined8 param_1,longlong param_2)

{
  FUN_140bd4c70(param_2);
  *(byte *)(param_2 + 0x98) = *(byte *)(param_2 + 0x98) & 0xc0;
  return;
}



// FUNCTION 14182ec16 FUN_14182ec16 body=376 status=ok
// SIG undefined FUN_14182ec16(void)

void FUN_14182ec16(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = (ulonglong)DAT_14cb3dad0;
  if (((((longlong)(int)(DAT_14cb3dad4 - DAT_14cb3dad0) & 0x1ffffffffffff800U) != 0) ||
      ((int)(DAT_14cb3dad0 * 3) < DAT_14cb3dad4 * 2)) &&
     ((DAT_14cb3dad0 == 0 || (0x40 < (int)(DAT_14cb3dad4 - DAT_14cb3dad0))))) {
    if (0 < (int)DAT_14cb3dad0) {
      uVar4 = uVar4 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar3 = uVar4 + 0xf;
          if (DAT_14cb3dad0 < 0xfff) {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
          }
          else {
            if ((uVar3 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
              uVar5 = 0x32;
              if (0x32 < bVar2) {
                uVar5 = (ulonglong)bVar2;
              }
              uVar6 = 0x32 - (ulonglong)bVar2;
              do {
                uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14182ece6;
                lVar1 = uVar5 + 1 + uVar6;
                uVar6 = uVar6 - 1;
              } while (lVar1 != 0x33);
            }
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar4 = -uVar4 & ((uVar3 & 0x7fffffff0) + uVar4) - 1;
          }
        }
        else {
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
        }
      }
LAB_14182ece6:
      uVar4 = uVar4 >> 3 & 0xffffffff;
    }
    if ((int)uVar4 != DAT_14cb3dad4) {
      DAT_14cb3dad4 = (int)uVar4;
      FUN_1446f8d3c(&DAT_14cb3dac8,DAT_14cb3dad0,uVar4,8,8);
    }
  }
  return;
}



// FUNCTION 14182ed8e FUN_14182ed8e body=137 status=ok
// SIG undefined FUN_14182ed8e(void)

void FUN_14182ed8e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 14182ee18 FUN_14182ee18 body=29 status=ok
// SIG undefined FUN_14182ee18(void)

undefined8 FUN_14182ee18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182ee36 FUN_14182ee36 body=29 status=ok
// SIG undefined FUN_14182ee36(void)

undefined8 FUN_14182ee36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14182ee53 FUN_14182ee53 body=49 status=ok
// SIG undefined FUN_14182ee53(void)

longlong FUN_14182ee53(void)

{
  if (DAT_14cb3e808 == 0) {
    FUN_14073dd9a(&DAT_14cb3e808,&PTR_LAB_14adf7110);
  }
  return DAT_14cb3e808;
}



// FUNCTION 14182ee84 FUN_14182ee84 body=3583 status=ok
// SIG undefined FUN_14182ee84(void)

void FUN_14182ee84(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  code *local_100;
  undefined1 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  int local_90;
  undefined4 uStack_8c;
  int local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_108 = FUN_1446ddbd2();
      local_100 = FUN_1468d96f0;
      local_110 = 0;
      local_118 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_30);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_30);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_30);
    }
  }
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_108 = FUN_1446ddbd2();
      local_100 = FUN_1468d96f0;
      local_110 = 0;
      local_118 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_38);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_108 = FUN_1446ddbd2();
      local_100 = FUN_1403a682c;
      local_110 = 0;
      local_118 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_50);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_50);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_50 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_50);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_108 = FUN_1446ddbd2();
      local_100 = FUN_1403a682c;
      local_110 = 0;
      local_118 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_68);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_68);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_68);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_108 = FUN_1446ddbd2();
      local_100 = FUN_1403a682c;
      local_110 = 0;
      local_118 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_80);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_80);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_80 = (undefined4)uVar5;
      uStack_7c = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_80);
    }
  }
  iStack_84 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_108 = FUN_1446ddbd2();
      local_100 = FUN_14067a048;
      local_110 = 0;
      local_118 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_84);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&iStack_84);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&iStack_84);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_84 = (int)uVar5;
      local_80 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    else {
      (*pcVar2)(uVar5,param_2,&iStack_84);
    }
  }
  iVar4 = iStack_84;
  local_88 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_108 = FUN_1446ddbd2();
      local_100 = FUN_14067a048;
      local_110 = 0;
      local_118 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_88);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_88);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_88 = (int)uVar5;
      iStack_84 = (int)((ulonglong)uVar5 >> 0x20);
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_88);
    }
  }
  iVar3 = local_88;
  uStack_8c = uStack_8c & 0xffffff;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_108 = FUN_1446ddbd2();
      local_100 = FUN_140a4831c;
      local_118 = (undefined8 *)0x1000000008001;
      local_110 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,(longlong)&uStack_8c + 3);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,(longlong)&uStack_8c + 3);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,(longlong)&uStack_8c + 3);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_8c._3_1_ = (undefined1)uVar5;
      local_88 = (int)((ulonglong)uVar5 >> 8);
      iStack_84._0_3_ = (undefined3)((ulonglong)uVar5 >> 0x28);
    }
    else {
      (*pcVar2)(uVar5,param_2,(longlong)&uStack_8c + 3);
    }
  }
  local_90 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_108 = FUN_1446ddbd2();
      local_100 = FUN_14067a048;
      local_110 = 0;
      local_118 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_90);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_90);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_90 = (int)uVar5;
      uStack_8c = (uint)((ulonglong)uVar5 >> 0x20);
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_90);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = CONCAT44(uStack_7c,local_80);
  local_118 = &local_a8;
  uStack_a0 = uStack_78;
  local_98 = local_70;
  local_c8 = local_68;
  uStack_c0 = uStack_60;
  local_b8 = local_58;
  local_e8 = (undefined4)local_50;
  uStack_e4 = local_50._4_4_;
  uStack_e0 = uStack_48;
  uStack_dc = uStack_44;
  local_d8 = local_40;
  local_f8 = local_90 != 0;
  local_108 = CONCAT71(local_108._1_7_,iVar3 != 0);
  local_100 = (code *)CONCAT71(local_100._1_7_,uStack_8c._3_1_);
  local_110 = CONCAT71(local_110._1_7_,iVar4 != 0);
  uVar5 = FUN_140416e90(local_30,local_38);
  *param_3 = uVar5;
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14182fc84 FUN_14182fc84 body=3885 status=ok
// SIG undefined FUN_14182fc84(void)

void FUN_14182fc84(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  code *local_110;
  undefined1 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  int local_e4;
  undefined4 uStack_e0;
  int local_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_90 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_118 = (undefined *)FUN_1446ddbd2();
      local_110 = FUN_1468d96f0;
      local_120 = (undefined8 *)0x0;
      local_128 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_90);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_90);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_90 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_90);
    }
  }
  local_98 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_118 = (undefined *)FUN_1446ddbd2();
      local_110 = FUN_1468d96f0;
      local_120 = (undefined8 *)0x0;
      local_128 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_98);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_98);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_98 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_98);
    }
  }
  local_a0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_118 = (undefined *)FUN_1446ddbd2();
      local_110 = FUN_1409e12a0;
      local_120 = (undefined8 *)0x0;
      local_128 = (undefined8 *)0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_a0);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_a0);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_a0 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_a0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_118 = (undefined *)FUN_1446ddbd2();
      local_110 = FUN_1403a682c;
      local_120 = (undefined8 *)0x0;
      local_128 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_b8);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_b8);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_b8 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_b8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_118 = (undefined *)FUN_1446ddbd2();
      local_110 = FUN_1403a682c;
      local_120 = (undefined8 *)0x0;
      local_128 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_d0);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&uStack_d0);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&uStack_d0);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_d0 = (undefined7)uVar5;
      uStack_c9 = (undefined1)((ulonglong)uVar5 >> 0x38);
    }
    else {
      (*pcVar2)(uVar5,param_2,&uStack_d0);
    }
  }
  uStack_d4 = uStack_d4 & 0xffffff;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_110 = FUN_1409f1a5c;
      local_118 = &DAT_14c9520b8;
      local_120 = (undefined8 *)0x0;
      local_128 = (undefined8 *)0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,(longlong)&uStack_d4 + 3);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,(longlong)&uStack_d4 + 3);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,(longlong)&uStack_d4 + 3);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_d4._3_1_ = (undefined1)uVar5;
      uStack_d0 = (undefined7)((ulonglong)uVar5 >> 8);
    }
    else {
      (*pcVar2)(uVar5,param_2,(longlong)&uStack_d4 + 3);
    }
  }
  iStack_d8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_118 = (undefined *)FUN_1446ddbd2();
      local_110 = FUN_14067a048;
      local_120 = (undefined8 *)0x0;
      local_128 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_d8);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&iStack_d8);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&iStack_d8);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_d8 = (int)uVar5;
      uStack_d4 = (uint)((ulonglong)uVar5 >> 0x20);
    }
    else {
      (*pcVar2)(uVar5,param_2,&iStack_d8);
    }
  }
  iVar4 = iStack_d8;
  local_dc = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_118 = (undefined *)FUN_1446ddbd2();
      local_110 = FUN_14067a048;
      local_120 = (undefined8 *)0x0;
      local_128 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_dc);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_dc);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_dc);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_dc = (int)uVar5;
      iStack_d8 = (int)((ulonglong)uVar5 >> 0x20);
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_dc);
    }
  }
  iVar3 = local_dc;
  uStack_e0 = uStack_e0 & 0xffffff;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_118 = (undefined *)FUN_1446ddbd2();
      local_110 = FUN_140a4831c;
      local_128 = (undefined8 *)0x1000000008001;
      local_120 = (undefined8 *)0x0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,(longlong)&uStack_e0 + 3);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,(longlong)&uStack_e0 + 3);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,(longlong)&uStack_e0 + 3);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_e0._3_1_ = (undefined1)uVar5;
      local_dc = (int)((ulonglong)uVar5 >> 8);
      iStack_d8._0_3_ = (undefined3)((ulonglong)uVar5 >> 0x28);
    }
    else {
      (*pcVar2)(uVar5,param_2,(longlong)&uStack_e0 + 3);
    }
  }
  local_e4 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_118 = (undefined *)FUN_1446ddbd2();
      local_110 = FUN_14067a048;
      local_120 = (undefined8 *)0x0;
      local_128 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e4);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_e4);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_e4);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_e4 = (int)uVar5;
      uStack_e0 = (uint)((ulonglong)uVar5 >> 0x20);
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_e4);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_128 = &local_68;
  local_58 = local_c0;
  local_68 = CONCAT17(uStack_c9,uStack_d0);
  uStack_60 = uStack_c8;
  local_78 = local_a8;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = uStack_b0;
  uStack_7c = uStack_ac;
  local_120 = &local_50;
  local_50 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  local_40 = 0x3ff0000000000000;
  local_f8 = local_e4 != 0;
  local_100 = iVar3 != 0;
  local_110 = (code *)CONCAT71(local_110._1_7_,iVar4 != 0);
  local_108 = uStack_e0._3_1_;
  local_118 = (undefined *)CONCAT44(local_118._4_4_,uStack_d4 >> 0x18);
  uVar5 = FUN_140e3e448(local_90,local_98,local_a0);
  *param_3 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141830bb2 FUN_141830bb2 body=864 status=ok
// SIG undefined FUN_141830bb2(void)

undefined8 FUN_141830bb2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  if (lVar1 == DAT_14cb3e858) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar6;
    *local_30 = &PTR_FUN_14ad80f50;
    pcVar5 = FUN_1481c7af0;
LAB_141830e8e:
    local_28 = 2;
    local_30[3] = pcVar5;
    FUN_144a450dc(param_2,&local_30);
    FUN_1449db362(&local_30);
  }
  else {
    if (lVar1 == DAT_14cb3e860) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar6;
      *local_30 = &PTR_FUN_14ad80f50;
      pcVar5 = (code *)&DAT_1481c7c9c;
      goto LAB_141830e8e;
    }
    if (lVar1 != DAT_14cb3e868) {
      if (lVar1 != DAT_14cb3e870) {
        uVar4 = 0;
        goto LAB_141830c00;
      }
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar6;
      *local_30 = &PTR_FUN_14ad80f50;
      pcVar5 = FUN_1481c7c9e;
      goto LAB_141830e8e;
    }
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    puVar3 = local_30;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar6;
    *local_30 = &PTR_FUN_14ad80f50;
    local_30[3] = FUN_144b36074;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    if ((int)param_2[1] == 0) {
LAB_141830cb1:
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar2 = (undefined8 *)*param_2;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72(param_2,0,0,0x10);
        *(undefined4 *)(param_2 + 1) = 0;
        goto LAB_141830cb1;
      }
    }
    *param_2 = (longlong)puVar3;
    *(undefined4 *)(param_2 + 1) = 2;
    if (local_28 == 0) {
LAB_141830ccf:
      if (local_30 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,0);
      FUN_1446efa72(&local_30,0,0,0x10);
      local_28 = 0;
      goto LAB_141830ccf;
    }
  }
  uVar4 = 1;
LAB_141830c00:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141830f14 FUN_141830f14 body=71 status=ok
// SIG undefined FUN_141830f14(void)

void FUN_141830f14(longlong param_1)

{
  longlong lVar1;
  
  if (-1 < *(int *)(param_1 + 0x23c)) {
    lVar1 = *(longlong *)(param_1 + 0x230);
    if (*(longlong *)(param_1 + 0x230) == 0) {
      lVar1 = param_1;
    }
    FUN_144705e08(lVar1,*(undefined4 *)(param_1 + 0x238));
    *(undefined4 *)(param_1 + 0x238) = 0;
    return;
  }
  FUN_1481ccf7c(param_1);
  return;
}



// FUNCTION 141830f5c FUN_141830f5c body=61 status=ok
// SIG undefined FUN_141830f5c(void)

void FUN_141830f5c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x230);
  if (*(longlong *)(param_1 + 0x230) == 0) {
    lVar1 = param_1;
  }
  FUN_144705e08(lVar1,*(undefined4 *)(param_1 + 0x238));
  if (*(longlong *)(param_1 + 0x230) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141830f99 FUN_141830f99 body=477 status=ok
// SIG undefined FUN_141830f99(void)

void FUN_141830f99(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 **local_a0;
  ulonglong *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar1 = (undefined8 *)*param_1;
  FUN_14078cbfa(puVar1);
  *puVar1 = &PTR_FUN_14adfa8b0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  *(uint *)((longlong)puVar1 + 0xbc) = (*(uint *)((longlong)puVar1 + 0xbc) & 0xfffffff8) + 1;
  puVar1[0x18] = &DAT_3f8000003f800000;
  puVar1[0x19] = &DAT_3f8000003f800000;
  local_a8 = puVar1 + 0x1d;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  FUN_140120f5c();
  local_b0 = puVar1 + 0x24;
  FUN_140120f5c();
  FUN_140120f5c(puVar1 + 0x2b);
  FUN_140120f5c(puVar1 + 0x32);
  FUN_140120f5c(puVar1 + 0x39);
  FUN_140120f5c(puVar1 + 0x40);
  FUN_140120f5c(puVar1 + 0x47);
  FUN_140120f5c(puVar1 + 0x4e);
  FUN_140120f5c(puVar1 + 0x55);
  *(undefined1 *)(puVar1 + 0x5c) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x2e4) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x5d) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x2ec) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x5e) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x2f4) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x5f) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x2fc) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x60) = 1;
  *(undefined8 *)((longlong)puVar1 + 0x304) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x30c) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x62) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x314) = 0xffffffff;
  *(undefined1 *)(puVar1 + 99) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x31c) = 0xffffffff;
  local_a0 = &local_90;
  local_90 = local_a8;
  local_88 = local_b0;
  local_98 = &local_48;
  local_80 = puVar1 + 0x2b;
  local_78 = puVar1 + 0x32;
  local_70 = puVar1 + 0x39;
  local_68 = puVar1 + 0x40;
  local_60 = puVar1 + 0x47;
  local_58 = puVar1 + 0x4e;
  local_50 = puVar1 + 0x55;
  FUN_14078cc5e(puVar1 + 0x15);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141831178 FUN_141831178 body=36 status=ok
// SIG undefined FUN_141831178(void)

void FUN_141831178(longlong *param_1)

{
  FUN_14042b052();
                    /* WARNING: Could not recover jumptable at 0x000141831199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x340))(param_1,0);
  return;
}



// FUNCTION 14183119c FUN_14183119c body=2103 status=ok
// SIG undefined FUN_14183119c(void)

void FUN_14183119c(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14011ff66();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    local_58 = "Niagara";
    local_50 = 7;
    local_4c = 0;
    uVar3 = FUN_14001a6c0(&local_58,1);
    cVar2 = FUN_14011feae(&DAT_14c874628,uVar3);
    if (cVar2 == '\0') {
      local_58 = (char *)0x0;
      FUN_14485c47a(&local_58,param_1);
      uVar1 = DAT_14cb3ea30;
      lVar5 = (longlong)(int)DAT_14cb3ea30;
      DAT_14cb3ea30 = DAT_14cb3ea30 + 1;
      if (DAT_14cb3ea34 < DAT_14cb3ea30) {
        FUN_1481cd86c(uVar1);
      }
      *(char **)(DAT_14cb3ea28 + lVar5 * 8) = local_58;
    }
    else if ((*(longlong *)(param_1 + 0x184) == 0) ||
            (plVar4 = (longlong *)FUN_144741050(param_1 + 0x180), *plVar4 == 0)) {
      FUN_140120ed2(&local_58,&DAT_14cb41b58);
      *(undefined4 *)(param_1 + 0x160) = local_50;
      *(char **)(param_1 + 0x158) = local_58;
      if ((char **)(param_1 + 0x158) != &local_58) {
        if (*(longlong *)(param_1 + 0x168) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x168) = local_48;
        local_48 = 0;
        *(undefined4 *)(param_1 + 0x170) = (undefined4)local_40;
        *(undefined4 *)(param_1 + 0x174) = local_40._4_4_;
        local_40 = 0;
      }
      *(undefined4 *)(param_1 + 0x188) = local_28;
      *(undefined4 *)(param_1 + 0x178) = local_38;
      *(undefined4 *)(param_1 + 0x17c) = uStack_34;
      *(undefined4 *)(param_1 + 0x180) = uStack_30;
      *(undefined4 *)(param_1 + 0x184) = uStack_2c;
      *(undefined1 *)(param_1 + 0x18c) = local_24;
      *(undefined1 *)(param_1 + 0x18d) = local_23;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_140120ed2(&local_58,&DAT_14cb41c38);
      *(undefined4 *)(param_1 + 0x198) = local_50;
      *(char **)(param_1 + 400) = local_58;
      if ((char **)(param_1 + 400) != &local_58) {
        if (*(longlong *)(param_1 + 0x1a0) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x1a0) = local_48;
        local_48 = 0;
        *(undefined4 *)(param_1 + 0x1a8) = (undefined4)local_40;
        *(undefined4 *)(param_1 + 0x1ac) = local_40._4_4_;
        local_40 = 0;
      }
      *(undefined4 *)(param_1 + 0x1c0) = local_28;
      *(undefined4 *)(param_1 + 0x1b0) = local_38;
      *(undefined4 *)(param_1 + 0x1b4) = uStack_34;
      *(undefined4 *)(param_1 + 0x1b8) = uStack_30;
      *(undefined4 *)(param_1 + 0x1bc) = uStack_2c;
      *(undefined1 *)(param_1 + 0x1c4) = local_24;
      *(undefined1 *)(param_1 + 0x1c5) = local_23;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_140120ed2(&local_58,&DAT_14cb41e98);
      *(undefined4 *)(param_1 + 0x1d0) = local_50;
      *(char **)(param_1 + 0x1c8) = local_58;
      if ((char **)(param_1 + 0x1c8) != &local_58) {
        if (*(longlong *)(param_1 + 0x1d8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x1d8) = local_48;
        local_48 = 0;
        *(undefined4 *)(param_1 + 0x1e0) = (undefined4)local_40;
        *(undefined4 *)(param_1 + 0x1e4) = local_40._4_4_;
        local_40 = 0;
      }
      *(undefined4 *)(param_1 + 0x1f8) = local_28;
      *(undefined4 *)(param_1 + 0x1e8) = local_38;
      *(undefined4 *)(param_1 + 0x1ec) = uStack_34;
      *(undefined4 *)(param_1 + 0x1f0) = uStack_30;
      *(undefined4 *)(param_1 + 500) = uStack_2c;
      *(undefined1 *)(param_1 + 0x1fc) = local_24;
      *(undefined1 *)(param_1 + 0x1fd) = local_23;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_140120ed2(&local_58,&DAT_14cb42038);
      *(undefined4 *)(param_1 + 0x128) = local_50;
      *(char **)(param_1 + 0x120) = local_58;
      if ((char **)(param_1 + 0x120) != &local_58) {
        if (*(longlong *)(param_1 + 0x130) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x130) = local_48;
        local_48 = 0;
        *(undefined4 *)(param_1 + 0x138) = (undefined4)local_40;
        *(undefined4 *)(param_1 + 0x13c) = local_40._4_4_;
        local_40 = 0;
      }
      *(undefined4 *)(param_1 + 0x150) = local_28;
      *(undefined4 *)(param_1 + 0x140) = local_38;
      *(undefined4 *)(param_1 + 0x144) = uStack_34;
      *(undefined4 *)(param_1 + 0x148) = uStack_30;
      *(undefined4 *)(param_1 + 0x14c) = uStack_2c;
      *(undefined1 *)(param_1 + 0x154) = local_24;
      *(undefined1 *)(param_1 + 0x155) = local_23;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_140120ed2(&local_58,&DAT_14cb41eb8);
      *(undefined4 *)(param_1 + 0xf0) = local_50;
      *(char **)(param_1 + 0xe8) = local_58;
      if ((char **)(param_1 + 0xe8) != &local_58) {
        if (*(longlong *)(param_1 + 0xf8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0xf8) = local_48;
        local_48 = 0;
        *(undefined4 *)(param_1 + 0x100) = (undefined4)local_40;
        *(undefined4 *)(param_1 + 0x104) = local_40._4_4_;
        local_40 = 0;
      }
      *(undefined4 *)(param_1 + 0x118) = local_28;
      *(undefined4 *)(param_1 + 0x108) = local_38;
      *(undefined4 *)(param_1 + 0x10c) = uStack_34;
      *(undefined4 *)(param_1 + 0x110) = uStack_30;
      *(undefined4 *)(param_1 + 0x114) = uStack_2c;
      *(undefined1 *)(param_1 + 0x11c) = local_24;
      *(undefined1 *)(param_1 + 0x11d) = local_23;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_140120ed2(&local_58,&DAT_14cb42058);
      *(undefined4 *)(param_1 + 0x208) = local_50;
      *(char **)(param_1 + 0x200) = local_58;
      if ((char **)(param_1 + 0x200) != &local_58) {
        if (*(longlong *)(param_1 + 0x210) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x210) = local_48;
        local_48 = 0;
        *(undefined4 *)(param_1 + 0x218) = (undefined4)local_40;
        *(undefined4 *)(param_1 + 0x21c) = local_40._4_4_;
        local_40 = 0;
      }
      *(undefined4 *)(param_1 + 0x230) = local_28;
      *(undefined4 *)(param_1 + 0x220) = local_38;
      *(undefined4 *)(param_1 + 0x224) = uStack_34;
      *(undefined4 *)(param_1 + 0x228) = uStack_30;
      *(undefined4 *)(param_1 + 0x22c) = uStack_2c;
      *(undefined1 *)(param_1 + 0x234) = local_24;
      *(undefined1 *)(param_1 + 0x235) = local_23;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_140120ed2(&local_58,&DAT_14cb413f8);
      *(undefined4 *)(param_1 + 0x240) = local_50;
      *(char **)(param_1 + 0x238) = local_58;
      if ((char **)(param_1 + 0x238) != &local_58) {
        if (*(longlong *)(param_1 + 0x248) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x248) = local_48;
        local_48 = 0;
        *(undefined4 *)(param_1 + 0x250) = (undefined4)local_40;
        *(undefined4 *)(param_1 + 0x254) = local_40._4_4_;
        local_40 = 0;
      }
      *(undefined4 *)(param_1 + 0x268) = local_28;
      *(undefined4 *)(param_1 + 600) = local_38;
      *(undefined4 *)(param_1 + 0x25c) = uStack_34;
      *(undefined4 *)(param_1 + 0x260) = uStack_30;
      *(undefined4 *)(param_1 + 0x264) = uStack_2c;
      *(undefined1 *)(param_1 + 0x26c) = local_24;
      *(undefined1 *)(param_1 + 0x26d) = local_23;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_140120ed2(&local_58,&DAT_14cb42078);
      *(undefined4 *)(param_1 + 0x278) = local_50;
      *(char **)(param_1 + 0x270) = local_58;
      if ((char **)(param_1 + 0x270) != &local_58) {
        if (*(longlong *)(param_1 + 0x280) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x280) = local_48;
        local_48 = 0;
        *(undefined4 *)(param_1 + 0x288) = (undefined4)local_40;
        *(undefined4 *)(param_1 + 0x28c) = local_40._4_4_;
        local_40 = 0;
      }
      *(undefined4 *)(param_1 + 0x2a0) = local_28;
      *(undefined4 *)(param_1 + 0x290) = local_38;
      *(undefined4 *)(param_1 + 0x294) = uStack_34;
      *(undefined4 *)(param_1 + 0x298) = uStack_30;
      *(undefined4 *)(param_1 + 0x29c) = uStack_2c;
      *(undefined1 *)(param_1 + 0x2a4) = local_24;
      *(undefined1 *)(param_1 + 0x2a5) = local_23;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_140120ed2(&local_58,&DAT_14cb42098);
      *(undefined4 *)(param_1 + 0x2b0) = local_50;
      *(char **)(param_1 + 0x2a8) = local_58;
      if ((char **)(param_1 + 0x2a8) != &local_58) {
        if (*(longlong *)(param_1 + 0x2b8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x2b8) = local_48;
        local_48 = 0;
        *(undefined4 *)(param_1 + 0x2c0) = (undefined4)local_40;
        *(undefined4 *)(param_1 + 0x2c4) = local_40._4_4_;
        local_40 = 0;
      }
      *(undefined4 *)(param_1 + 0x2d8) = local_28;
      *(undefined4 *)(param_1 + 0x2c8) = local_38;
      *(undefined4 *)(param_1 + 0x2cc) = uStack_34;
      *(undefined4 *)(param_1 + 0x2d0) = uStack_30;
      *(undefined4 *)(param_1 + 0x2d4) = uStack_2c;
      *(undefined1 *)(param_1 + 0x2dc) = local_24;
      *(undefined1 *)(param_1 + 0x2dd) = local_23;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418319d4 FUN_1418319d4 body=106 status=ok
// SIG undefined FUN_1418319d4(void)

undefined8 *
FUN_1418319d4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x120,0x10);
  FUN_1401f77c6(puVar1,param_2,param_1,param_3);
  *puVar1 = &PTR_FUN_14ae09f80;
  *(byte *)(puVar1 + 0x1e) = *(byte *)(puVar1 + 0x1e) | 2;
  FUN_140722e22(puVar1,param_1,param_3,param_4);
  return puVar1;
}



// FUNCTION 141831a3e FUN_141831a3e body=207 status=ok
// SIG undefined FUN_141831a3e(void)

ulonglong FUN_141831a3e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = FUN_14021f064();
  uVar5 = (ulonglong)uVar4;
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x35) & 3) == 1)) {
        local_50 = *(undefined4 *)(lVar3 + 0x28);
        local_58 = *(undefined8 *)(lVar3 + 0x20);
        local_48 = 0;
        uStack_40 = 0;
        local_68 = 0;
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        (**(code **)(*param_2 + 0x10))(param_2,&local_58,0,1);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141831b0e FUN_141831b0e body=907 status=ok
// SIG undefined FUN_141831b0e(void)

void FUN_141831b0e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 **local_118;
  ulonglong *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  puVar1 = (undefined8 *)*param_1;
  FUN_14078cbfa(puVar1);
  *puVar1 = &PTR_FUN_14adfc700;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  *(uint *)((longlong)puVar1 + 0xcc) = *(uint *)((longlong)puVar1 + 0xcc) & 0xffffff70 | 0xc;
  *(byte *)(puVar1 + 0x1a) = *(byte *)(puVar1 + 0x1a) | 1;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0x3ff0000000000000;
  puVar1[0x20] = 0x3ff0000000000000;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0x3ff0000000000000;
  uVar4 = DAT_14c846518._4_4_;
  uVar3 = (undefined4)DAT_14c846518;
  uVar2 = DAT_14c846510._4_4_;
  *(undefined4 *)(puVar1 + 0x24) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)puVar1 + 0x124) = uVar2;
  *(undefined4 *)(puVar1 + 0x25) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 300) = uVar4;
  puVar1[0x26] = DAT_14c846520;
  *(undefined2 *)(puVar1 + 0x27) = 0;
  puVar1[0x28] = 0x447a0000;
  local_120 = puVar1 + 0x29;
  FUN_140120f5c();
  local_128 = puVar1 + 0x30;
  FUN_140120f5c();
  local_130 = puVar1 + 0x37;
  FUN_140120f5c();
  local_138 = puVar1 + 0x3e;
  FUN_140120f5c();
  local_140 = puVar1 + 0x45;
  FUN_140120f5c();
  local_148 = puVar1 + 0x4c;
  FUN_140120f5c();
  local_150 = puVar1 + 0x53;
  FUN_140120f5c();
  local_158 = puVar1 + 0x5a;
  FUN_140120f5c();
  local_160 = puVar1 + 0x61;
  FUN_140120f5c();
  local_168 = puVar1 + 0x68;
  FUN_140120f5c();
  local_170 = puVar1 + 0x6f;
  FUN_140120f5c();
  local_178 = puVar1 + 0x76;
  FUN_140120f5c();
  FUN_140120f5c(puVar1 + 0x7d);
  local_188 = puVar1 + 0x84;
  FUN_140120f5c();
  local_180 = puVar1 + 0x8b;
  FUN_140120f5c();
  FUN_140120f5c(puVar1 + 0x92);
  puVar1[0x99] = 0;
  puVar1[0x9a] = 0;
  puVar1[0x9b] = 0;
  puVar1[0x9c] = 0;
  puVar1[0x9d] = 0;
  puVar1[0x9e] = 0;
  puVar1[0x9f] = 0;
  puVar1[0xa0] = 0;
  puVar1[0xa1] = 0;
  puVar1[0xa2] = 0;
  FUN_140120f5c(puVar1 + 0xa3);
  FUN_140120f5c(puVar1 + 0xaa);
  FUN_140120f5c(puVar1 + 0xb1);
  FUN_140120f5c(puVar1 + 0xb8);
  FUN_140120f5c(puVar1 + 0xbf);
  *(undefined4 *)(puVar1 + 0xc6) = 0;
  puVar1[199] = 0;
  puVar1[200] = 0;
  puVar1[0xc9] = 0;
  puVar1[0xca] = 0;
  puVar1[0xcb] = 0;
  puVar1[0xcc] = 0;
  puVar1[0xcd] = 0;
  puVar1[0xce] = 0;
  puVar1[0xcf] = 0;
  puVar1[0xd0] = 0;
  local_118 = &local_108;
  local_108 = local_120;
  local_100 = local_130;
  local_f8 = local_128;
  local_f0 = local_140;
  local_e8 = local_138;
  local_e0 = local_170;
  local_d0 = local_178;
  local_c8 = local_148;
  local_c0 = local_150;
  local_b8 = local_158;
  local_b0 = local_160;
  local_a8 = local_168;
  local_a0 = local_188;
  local_70 = local_180;
  local_110 = local_60;
  local_d8 = puVar1 + 0x7d;
  local_98 = puVar1 + 0xa3;
  local_90 = puVar1 + 0xaa;
  local_88 = puVar1 + 0xb1;
  local_80 = puVar1 + 0xb8;
  local_78 = puVar1 + 0xbf;
  local_68 = puVar1 + 0x92;
  FUN_14078cc5e(puVar1 + 0x15);
  if ((local_60[0] ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141831e9a FUN_141831e9a body=359 status=ok
// SIG undefined FUN_141831e9a(void)

void FUN_141831e9a(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong *local_1a8;
  undefined ***local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined1 local_17c;
  undefined1 local_17b;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ad42464);
  uVar1 = FUN_1448332aa(param_2,&DAT_14ad42464);
  if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_141831ef2;
  if ((int)uVar1 < 0x34) {
    *(undefined1 *)(param_1 + 0xc9) = 2;
LAB_141831f47:
    *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0xf7;
  }
  else {
    if (uVar1 < 0x50) goto LAB_141831f47;
    if (0x56 < uVar1) goto LAB_141831ef2;
  }
  FUN_140120ed2(&local_1b0,&DAT_14cb41c78);
  *(undefined4 *)(param_1 + 0x3b8) = local_1a8._0_4_;
  *(undefined ***)(param_1 + 0x3b0) = local_1b0;
  if ((undefined ***)(param_1 + 0x3b0) != &local_1b0) {
    if (*(longlong *)(param_1 + 0x3c0) != 0) {
      FUN_1400020a8();
    }
    *(undefined ****)(param_1 + 0x3c0) = local_1a0;
    local_1a0 = (undefined ***)0x0;
    *(undefined4 *)(param_1 + 0x3c8) = (undefined4)local_198;
    *(undefined4 *)(param_1 + 0x3cc) = local_198._4_4_;
    local_198 = (undefined ****)0x0;
  }
  *(undefined4 *)(param_1 + 0x3e0) = local_180;
  *(undefined4 *)(param_1 + 0x3d0) = local_190;
  *(undefined4 *)(param_1 + 0x3d4) = uStack_18c;
  *(undefined4 *)(param_1 + 0x3d8) = uStack_188;
  *(undefined4 *)(param_1 + 0x3dc) = uStack_184;
  *(undefined1 *)(param_1 + 0x3e4) = local_17c;
  *(undefined1 *)(param_1 + 0x3e5) = local_17b;
  if (local_1a0 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
LAB_141831ef2:
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_20 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141832002 FUN_141832002 body=729 status=ok
// SIG undefined FUN_141832002(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_141832002(longlong param_1,double *param_2,undefined8 param_3,longlong *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong *local_108;
  longlong local_100 [24];
  
  local_100[2] = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_108 = param_4;
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    lVar19 = *(longlong *)(param_1 + 0xb8);
    lVar18 = (longlong)*(int *)(param_1 + 0xc0) << 7;
    do {
      local_100[1] = 0;
      local_100[0] = 0;
      FUN_14017a903(lVar19,param_3,local_100 + 1,local_100);
      lVar14 = local_100[0];
      if (((local_100[0] != 0) && ((*(byte *)(local_100[0] + 0xc0) & 1) != 0)) &&
         (*(byte *)(local_100[0] + 0xc1) < *(byte *)(local_100[0] + 0xc3))) {
        lVar16 = FUN_140083894();
        if (((*(longlong *)(lVar14 + 0xe0) == 0) || (*(longlong *)(lVar16 + 0x50) == 0)) ||
           (*(int *)(*(longlong *)(*(longlong *)(lVar14 + 0xe0) + 0x40) + 0x70) < 1)) {
          dVar1 = *(double *)(lVar14 + 0x200);
          dVar2 = *(double *)(lVar14 + 0x208);
          dVar3 = *(double *)(lVar14 + 0x210);
          dVar4 = *(double *)(lVar14 + 0x230);
          dVar5 = *(double *)(lVar19 + 0x40);
          dVar6 = *(double *)(lVar19 + 0x30);
          dVar7 = *(double *)(lVar19 + 0x38);
          dVar8 = *(double *)(lVar14 + 0x228);
          dVar9 = *(double *)(lVar14 + 0x220);
          dVar10 = *(double *)(lVar14 + 0x218);
          dVar11 = param_2[2];
          dVar12 = param_2[1];
          dVar13 = *param_2;
          lVar16 = (longlong)(int)local_108[1];
          uVar15 = (int)local_108[1] + 1;
          *(uint *)(local_108 + 1) = uVar15;
          if (*(uint *)((longlong)local_108 + 0xc) < uVar15) {
            local_110 = lVar16;
            FUN_144781dc0(local_108,lVar16);
            lVar16 = local_110;
          }
          lVar17 = *local_108;
          *(longlong *)(lVar17 + lVar16 * 0x50) = lVar14;
          if (DAT_14c950c29 == '\x01') {
            local_110 = lVar17;
            FUN_1456cec3c(lVar14);
            lVar17 = local_110;
          }
          uVar20 = SUB84(dVar6,0);
          uVar21 = (int)((ulonglong)dVar6 >> 0x20);
          if (dVar6 <= dVar7) {
            uVar20 = SUB84(dVar7,0);
            uVar21 = (int)((ulonglong)dVar7 >> 0x20);
          }
          if ((double)CONCAT44(uVar21,uVar20) <= dVar5) {
            uVar20 = SUB84(dVar5,0);
            uVar21 = (int)((ulonglong)dVar5 >> 0x20);
          }
          lVar17 = lVar17 + lVar16 * 0x50;
          *(double *)(lVar17 + 8) = dVar1 + dVar13;
          *(double *)(lVar17 + 0x10) = dVar2 + dVar12;
          *(double *)(lVar17 + 0x18) = dVar3 + dVar11;
          *(double *)(lVar17 + 0x20) = dVar10 * dVar6;
          *(double *)(lVar17 + 0x28) = dVar9 * dVar7;
          *(double *)(lVar17 + 0x30) = dVar8 * dVar5;
          *(double *)(lVar17 + 0x38) = (double)CONCAT44(uVar21,uVar20) * dVar4;
          *(float *)(lVar17 + 0x40) = (float)(dVar4 + dVar4);
          *(undefined4 *)(lVar17 + 0x44) = 0;
          *(uint *)(lVar17 + 0x48) = *(uint *)(lVar17 + 0x48) & 0xfffffffc | 2;
        }
      }
      lVar19 = lVar19 + 0x80;
      lVar18 = lVar18 + -0x80;
    } while (lVar18 != 0);
  }
  if ((local_100[2] ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418322dc FUN_1418322dc body=1721 status=ok
// SIG undefined FUN_1418322dc(void)

undefined8 FUN_1418322dc(longlong *param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  ushort uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_338 [32];
  wchar_t *local_318;
  undefined4 local_310;
  undefined8 local_308;
  wchar_t *local_300;
  wchar_t *local_2f8;
  code *local_2f0;
  undefined1 *local_2e8;
  code **local_2e0;
  undefined1 *local_2d8;
  code *local_2d0;
  undefined8 local_2c8;
  code *local_2c0;
  int local_2b8;
  undefined4 uStack_2b4;
  code *local_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_290;
  code *local_288;
  code *pcStack_280;
  code *local_278;
  char local_270;
  undefined1 local_268 [512];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb41300) && (FUN_144b3d300(&DAT_14cb41300), DAT_14cb41300 == -1)) {
    FUN_1456bda78(&DAT_14cb3f130);
    DAT_14cb412f0 = (longlong *)&DAT_14cb3f130;
    atexit(FUN_143a9fd0b);
    _Init_thread_footer(&DAT_14cb41300);
  }
  plVar2 = DAT_14cb412f0;
  SRWLock = (PSRWLOCK)(DAT_14cb412f0 + 0x433);
  AcquireSRWLockShared(SRWLock);
  lVar1 = plVar2[0x402];
  if ((longlong)(int)lVar1 != 0) {
    plVar14 = plVar2;
    do {
      plVar15 = plVar14 + 2;
      if ((short)plVar14[3] == 3) {
        lVar5 = DAT_14cb420c0;
        if (DAT_14cb420c0 != 0) {
LAB_1418323c1:
          if (DAT_14cb3a798 == 0) {
            local_288 = FUN_1449e2820;
            local_2d0 = FUN_14081d0ea;
            local_2d8 = &LAB_145a7874c;
            local_2e8 = &LAB_14811919b;
            local_2f0 = FUN_14646e15f;
            local_2f8 = L"Engine";
            local_300 = (wchar_t *)0x0;
            local_308 = CONCAT44(local_308._4_4_,0x10000001);
            local_310 = 8;
            local_318 = (wchar_t *)CONCAT44(local_318._4_4_,0x38);
            local_2e0 = &local_288;
            FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataInterface",&DAT_14cb3a798,&DAT_14811919a);
            if (DAT_14cb3a798 == 0) goto LAB_1418323db;
          }
          if (((*(int *)(DAT_14cb3a798 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cb3a798 + 0x38) * 8) ==
               DAT_14cb3a798 + 0x30)) &&
             (((short)plVar14[3] == 1 && (lVar5 = *plVar15, lVar5 != 0)))) {
            local_288 = *(code **)(lVar5 + 0x18);
            FUN_1400021e4(&local_288,&local_2c0);
            if (local_2b8 == (int)param_1[1]) {
              bVar16 = true;
              if (1 < local_2b8) {
                lVar10 = 0;
                while( true ) {
                  uVar7 = *(ushort *)(local_2c0 + lVar10);
                  uVar8 = (ulonglong)uVar7;
                  uVar11 = *(ushort *)(*param_1 + lVar10);
                  if (uVar7 != uVar11) break;
                  if (uVar7 == 0) goto LAB_14183252e;
LAB_141832560:
                  lVar10 = lVar10 + 2;
                }
                if ((uVar11 | uVar7) < 0x80) {
                  uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                  uVar13 = (ulonglong)uVar11;
                  uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                  if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar13]) goto LAB_141832560;
                }
                if (uVar7 != uVar11) goto LAB_141832438;
              }
            }
            else if ((int)param_1[1] + local_2b8 == 1) {
              bVar16 = true;
            }
            else {
LAB_141832438:
              local_2a8 = 0;
              uStack_2a0 = 0;
              FUN_14005eb28(&local_2a8,0x80);
              local_270 = '\0';
              local_288 = (code *)local_268;
              local_278 = (code *)local_68;
              local_290 = *(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 0x18);
              pcStack_280 = local_288;
              FUN_14005eb5c(&local_290,&local_288);
              if (local_278 <= pcStack_280 + 2) {
                FUN_140213274(&local_288,1);
              }
              *(undefined2 *)pcStack_280 = 0x20;
              pcStack_280 = pcStack_280 + 2;
              FUN_144750bde(lVar5,0,&local_288);
              FUN_1400020e8(&local_2a8);
              if (local_270 == '\x01') {
                FUN_1400020a8(local_288);
              }
              if ((int)uStack_2a0 == (int)param_1[1]) {
                if ((int)uStack_2a0 < 2) {
                  bVar16 = true;
                }
                else {
                  lVar10 = 0;
                  while( true ) {
                    uVar7 = *(ushort *)(local_2a8 + lVar10);
                    uVar3 = (uint)uVar7;
                    uVar11 = *(ushort *)(*param_1 + lVar10);
                    uVar12 = (uint)uVar11;
                    if (uVar7 != uVar11) {
                      if ((uVar11 | uVar7) < 0x80) {
                        uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar7];
                        uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar11];
                        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar11]) goto LAB_1418325ac;
                      }
                      iVar4 = uVar3 - uVar12;
                      goto LAB_141832662;
                    }
                    if (uVar7 == 0) break;
LAB_1418325ac:
                    lVar10 = lVar10 + 2;
                  }
                  iVar4 = 0;
LAB_141832662:
                  bVar16 = iVar4 == 0;
                }
              }
              else {
                bVar16 = (int)param_1[1] + (int)uStack_2a0 == 1;
              }
              if (local_2a8 != 0) {
                FUN_1400020a8();
              }
            }
LAB_14183252e:
            if (local_2c0 != (code *)0x0) {
              FUN_1400020a8();
            }
            if (bVar16) {
              ReleaseSRWLockShared(SRWLock);
              uVar6 = *(undefined8 *)(lVar5 + 0x110);
              goto LAB_1418325ef;
            }
          }
        }
      }
      else {
        lVar5 = *plVar15;
        if (lVar5 != 0) {
          if (DAT_14c948f88 == 0) {
            local_2c0 = (code *)&DAT_1427db2a2;
            lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c948f88 = lVar5;
            FUN_1446f470e(&local_288,L"Struct",1);
            local_2e0 = &local_2c0;
            local_2e8 = &LAB_146891313;
            local_2f0 = FUN_146272f63;
            local_300 = L"Engine";
            local_2f8 = (wchar_t *)CONCAT44(local_2f8._4_4_,199);
            local_308 = 8;
            local_310 = 0x10000020;
            local_318 = (wchar_t *)CONCAT44(local_318._4_4_,8);
            FUN_14574b4b2(lVar5);
            DAT_14c948f88 = lVar5;
            local_2c8 = FUN_1446f8646();
            lVar5 = DAT_14c948f88;
            uVar6 = FUN_1400163b0();
            local_318 = L"Struct";
            FUN_14574b446(uVar6,lVar5,local_2c8,L"/Script/CoreUObject");
            lVar5 = *plVar15;
            if (lVar5 == 0) goto LAB_1418323db;
          }
          if ((((DAT_14c948f88 != 0) && (lVar10 = *(longlong *)(lVar5 + 0x10), lVar10 != 0)) &&
              (*(int *)(DAT_14c948f88 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
             (*(longlong *)
               (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) ==
              DAT_14c948f88 + 0x30)) goto LAB_1418323c1;
        }
      }
LAB_1418323db:
      plVar14 = plVar15;
    } while (plVar15 != plVar2 + (longlong)(int)lVar1 * 2);
  }
  ReleaseSRWLockShared(SRWLock);
  local_288 = (code *)0x0;
  pcStack_280 = (code *)0x0;
  local_278 = (code *)0x0;
  if ((int)param_1[1] == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_1;
  }
  FUN_1446f470e(&local_288,puVar9,1);
  FUN_144867a42(&local_2c0,2,&local_288,0);
  if ((local_2c0 == (code *)0x0 && local_2b0 == (code *)0x0) ||
     (((local_288 == local_2c0 && (pcStack_280 == (code *)CONCAT44(uStack_2b4,local_2b8))) &&
      (local_278 == local_2b0)))) {
    uVar6 = 0;
  }
  else {
    FUN_1400021e4(&local_2c0,&local_2a8);
    uVar6 = FUN_1418322dc(&local_2a8);
    if (local_2a8 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1418325ef:
  if ((local_60 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 141832996 FUN_141832996 body=217 status=ok
// SIG undefined FUN_141832996(void)

undefined8 * FUN_141832996(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adfa8b0;
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_140852690(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141832a70 FUN_141832a70 body=275 status=ok
// SIG undefined FUN_141832a70(void)

void FUN_141832a70(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141832b84 FUN_141832b84 body=29 status=ok
// SIG undefined FUN_141832b84(void)

undefined8 FUN_141832b84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141832ba2 FUN_141832ba2 body=1463 status=ok
// SIG undefined FUN_141832ba2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_141832ba2(longlong param_1,double *param_2,undefined8 param_3,longlong param_4,
                      int param_5)

{
  float fVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  void *_Src;
  short sVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  byte bVar14;
  longlong lVar15;
  longlong lVar16;
  ushort uVar17;
  float fVar18;
  ushort uVar19;
  ulonglong uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  int iVar24;
  int iVar25;
  undefined1 in_XMM2 [16];
  undefined1 auVar23 [16];
  int iVar26;
  undefined1 in_XMM3 [16];
  undefined1 auVar27 [16];
  longlong lVar28;
  double dVar29;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auStack_f8 [44];
  float local_cc [7];
  undefined1 local_b0 [4];
  undefined1 auStack_ac [12];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_5 == 0) {
LAB_141832f5d:
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    *(undefined1 *)(param_2 + 6) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_f8);
  }
  iVar4 = *(int *)(*(byte **)(param_1 + 8) + 4);
  if (iVar4 == -1) goto LAB_141832f5d;
  uVar10 = 0;
  local_cc[3] = 0.0;
  local_cc[4] = 0.0;
  local_cc[5] = 0.0;
  local_cc[0] = 0.0;
  local_cc[1] = 0.0;
  local_cc[2] = 0.0;
  bVar2 = **(byte **)(param_1 + 8);
  lVar12 = *(longlong *)(param_4 + 0x78);
  uStack_9c = 0;
  uStack_98 = 0;
  auStack_ac = SUB1612((undefined1  [16])0x0,0);
  local_a0 = 0;
  if (lVar12 != 0) {
    bVar14 = bVar2 ^ 1;
    uVar5 = *(undefined4 *)(lVar12 + 0x128 + (ulonglong)bVar14 * 8);
    lVar16 = *(longlong *)(lVar12 + 0x18 + (ulonglong)bVar14 * 0x20);
    auVar22._4_4_ = uVar5;
    auVar22._0_4_ = uVar5;
    auVar22._8_8_ = 0;
    auVar23 = pmovsxbd(in_XMM2,0x100);
    auVar27 = pmovsxbq(in_XMM3,0x100);
    lVar15 = 0;
    auVar30 = pmovsxbq(unaff_XMM6,0x202);
    auVar32 = pmovsxbd(unaff_XMM7,0x2020202);
    do {
      auVar34._0_4_ = iVar4 + auVar23._0_4_;
      iVar24 = auVar23._4_4_;
      auVar34._4_4_ = iVar4 + iVar24;
      iVar25 = auVar23._8_4_;
      auVar34._8_4_ = iVar25;
      iVar26 = auVar23._12_4_;
      auVar34._12_4_ = iVar26;
      auVar34 = pmulld(auVar34,auVar22);
      auVar34 = pmovzxdq(auVar34,auVar34);
      if (SUB168(auVar27 ^ _DAT_149931e80,0) < -0x7ffffffffffffffd) {
        *(longlong *)(auStack_ac + lVar15 * 8 + 4) = auVar34._0_8_ + lVar16;
      }
      if (SUB168(auVar27 ^ _DAT_149931e80,8) < -0x7ffffffffffffffd) {
        *(longlong *)(&local_a0 + lVar15 * 2) = auVar34._8_8_ + lVar16;
      }
      lVar15 = lVar15 + 2;
      lVar28 = auVar27._8_8_;
      auVar27._0_8_ = auVar27._0_8_ + auVar30._0_8_;
      auVar27._8_8_ = lVar28 + auVar30._8_8_;
      auVar23._0_4_ = auVar23._0_4_ + auVar32._0_4_;
      auVar23._4_4_ = iVar24 + auVar32._4_4_;
      auVar23._8_4_ = iVar25 + auVar32._8_4_;
      auVar23._12_4_ = iVar26 + auVar32._12_4_;
    } while (lVar15 != 4);
    uVar10 = (ulonglong)*(uint *)(lVar12 + 0x120);
  }
  lVar16 = 0;
  do {
    if (bVar2 == 0) {
      if ((int)uVar10 < 1) {
        uVar19 = 0;
        uVar9 = 0xfc00;
        uVar13 = 0xf800000;
LAB_14183301d:
        fVar18 = (float)(uVar13 | 0x70000000);
      }
      else {
        uVar19 = 0x7c00;
        uVar20 = 0;
        uVar17 = 0xfc00;
        do {
          uVar9 = *(ushort *)(*(longlong *)(auStack_ac + lVar16 * 8 + 4) + uVar20 * 2);
          if ((short)uVar9 <= (short)uVar19) {
            uVar19 = uVar9;
          }
          if ((short)uVar9 <= (short)uVar17) {
            uVar9 = uVar17;
          }
          uVar20 = uVar20 + 1;
          uVar17 = uVar9;
        } while (uVar10 != uVar20);
        uVar13 = (uint)uVar19 << 0xd;
        if ((uVar13 & 0xf800000) == 0xf800000) goto LAB_14183301d;
        if ((uVar13 & 0xf800000) == 0) {
          fVar18 = (float)(uVar13 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar18 = (float)((uVar13 & 0xfffe000) + 0x38000000);
        }
      }
      local_cc[lVar16 + 3] = (float)((int)(short)uVar19 & 0x80000000U | (uint)fVar18);
      uVar13 = (uint)uVar9 << 0xd;
      if ((uVar13 & 0xf800000) == 0xf800000) {
        fVar18 = (float)(uVar13 | 0x70000000);
      }
      else if ((uVar13 & 0xf800000) == 0) {
        fVar18 = (float)(uVar13 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar18 = (float)((uVar13 & 0xfffe000) + 0x38000000);
      }
      fVar18 = (float)((int)(short)uVar9 & 0x80000000U | (uint)fVar18);
    }
    else {
      auVar32 = ZEXT816(0x7f7fffff);
      auVar30 = ZEXT816(0xff7fffff);
      if (0 < (int)uVar10) {
        uVar20 = 0;
        auVar30 = ZEXT816(0xff7fffff);
        auVar32 = ZEXT816(0x7f7fffff);
        do {
          fVar18 = *(float *)(*(longlong *)(auStack_ac + lVar16 * 8 + 4) + uVar20 * 4);
          if (fVar18 <= auVar32._0_4_) {
            auVar32._0_4_ = fVar18;
          }
          if (auVar30._0_4_ <= fVar18) {
            auVar30._0_4_ = fVar18;
          }
          uVar20 = uVar20 + 1;
        } while (uVar10 != uVar20);
      }
      local_cc[lVar16 + 3] = auVar32._0_4_;
      fVar18 = auVar30._0_4_;
    }
    local_cc[lVar16] = fVar18;
    lVar16 = lVar16 + 1;
  } while (lVar16 != 3);
  dVar33 = (double)local_cc[5];
  dVar6 = (double)local_cc[4];
  dVar7 = (double)local_cc[3];
  dVar29 = (double)local_cc[2];
  dVar31 = (double)local_cc[1];
  dVar35 = (double)local_cc[0];
  iVar4 = *(int *)(*(char **)(param_1 + 0x10) + 4);
  if (iVar4 == -1) {
    FUN_14012126a(local_b0,&DAT_14cb41e98);
    plVar11 = (longlong *)FUN_144741050(auStack_ac + 4);
    uVar9 = *(ushort *)((longlong)plVar11 + 0xc);
    if (uVar9 == 0xffff) {
      uVar9 = 0;
      if ((*plVar11 != 0) && (uVar9 = 0, (short)plVar11[1] != 1)) {
        lVar12 = FUN_144a811ba(plVar11);
        sVar8 = (short)*(undefined4 *)(lVar12 + 0x5c);
        uVar9 = -sVar8 & ((short)*(undefined4 *)(lVar12 + 0x58) + sVar8) - 1U;
      }
      *(ushort *)((longlong)plVar11 + 0xc) = uVar9;
    }
    _Src = (void *)CONCAT44(uStack_9c,local_a0);
    memcpy(local_cc + 6,_Src,(longlong)(short)uVar9);
    dVar21 = (double)local_cc[6];
    *param_2 = dVar7 - dVar21;
    param_2[1] = dVar6 - dVar21;
    param_2[2] = dVar33 - dVar21;
    param_2[3] = dVar35 + dVar21;
    param_2[4] = dVar31 + dVar21;
    param_2[5] = dVar29 + dVar21;
    *(undefined1 *)(param_2 + 6) = 1;
    if (_Src != (void *)0x0) {
      FUN_1400020a8(_Src);
    }
    goto LAB_141832e63;
  }
  cVar3 = **(char **)(param_1 + 0x10);
  if (lVar12 == 0) {
    if (cVar3 == '\0') {
LAB_141833127:
      uVar9 = 0xfc00;
      uVar13 = 0x1f800000;
LAB_141833130:
      fVar18 = (float)(uVar13 | 0x70000000);
      goto LAB_141833136;
    }
LAB_141833087:
    fVar18 = -3.4028235e+38;
  }
  else {
    uVar13 = *(uint *)(lVar12 + 0x120);
    if (cVar3 == '\0') {
      if ((int)uVar13 < 1) goto LAB_141833127;
      uVar10 = 0;
      uVar19 = 0xfc00;
      do {
        uVar9 = *(ushort *)
                 ((ulonglong)(uint)(iVar4 * *(int *)(lVar12 + 0x130)) + *(longlong *)(lVar12 + 0x38)
                 + uVar10 * 2);
        if ((short)uVar9 <= (short)uVar19) {
          uVar9 = uVar19;
        }
        uVar10 = uVar10 + 1;
        uVar19 = uVar9;
      } while (uVar13 != uVar10);
      uVar13 = (uint)uVar9 << 0xd;
      if ((uVar13 & 0xf800000) == 0xf800000) goto LAB_141833130;
      if ((uVar13 & 0xf800000) == 0) {
        fVar18 = (float)(uVar13 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar18 = (float)((uVar13 & 0xfffe000) + 0x38000000);
      }
LAB_141833136:
      fVar18 = (float)((int)(short)uVar9 & 0x80000000U | (uint)fVar18);
    }
    else {
      if ((int)uVar13 < 1) goto LAB_141833087;
      fVar18 = -3.4028235e+38;
      uVar10 = 0;
      do {
        fVar1 = *(float *)((ulonglong)(uint)(iVar4 * *(int *)(lVar12 + 0x128)) +
                           *(longlong *)(lVar12 + 0x18) + uVar10 * 4);
        if (fVar18 <= fVar1) {
          fVar18 = fVar1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar13 != uVar10);
    }
  }
  dVar21 = (double)fVar18;
  *param_2 = dVar7 - dVar21;
  param_2[1] = dVar6 - dVar21;
  param_2[2] = dVar33 - dVar21;
  param_2[3] = dVar35 + dVar21;
  param_2[4] = dVar31 + dVar21;
  param_2[5] = dVar29 + dVar21;
  *(undefined1 *)(param_2 + 6) = 1;
LAB_141832e63:
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141833160 FUN_141833160 body=320 status=ok
// SIG undefined FUN_141833160(void)

void FUN_141833160(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1418331c9;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1418331c9:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 1418332a0 FUN_1418332a0 body=73 status=ok
// SIG undefined FUN_1418332a0(void)

void FUN_1418332a0(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14015b754(param_1);
    *param_1 = &PTR_FUN_14adfe8b0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1 = param_1 + 0x55;
  }
  return;
}



// FUNCTION 1418332ea FUN_1418332ea body=369 status=ok
// SIG undefined FUN_1418332ea(void)

void FUN_1418332ea(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x2a8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141833372;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141833372:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x2a8)) {
    uVar7 = uVar5 / 0x2a8 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x2a8,8);
  return;
}



// FUNCTION 14183345c FUN_14183345c body=353 status=ok
// SIG undefined FUN_14183345c(void)

void FUN_14183345c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418334e1;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1418334e1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418335be FUN_1418335be body=366 status=ok
// SIG undefined FUN_1418335be(void)

void FUN_1418335be(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x78;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141833643;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141833643:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x78)) {
    uVar7 = uVar5 / 0x78 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x78,8);
  return;
}



// FUNCTION 14183372c FUN_14183372c body=364 status=ok
// SIG undefined FUN_14183372c(void)

void FUN_14183372c(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && ((uVar3 == 0 || (0x40 < (int)(iVar6 - uVar3))))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418337cd;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_1418337cd:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 141833898 FUN_141833898 body=48 status=ok
// SIG undefined FUN_141833898(void)

void FUN_141833898(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 1418338c8 FUN_1418338c8 body=255 status=ok
// SIG undefined FUN_1418338c8(void)

void FUN_1418338c8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418339c8 FUN_1418339c8 body=269 status=ok
// SIG undefined FUN_1418339c8(void)

void FUN_1418339c8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141833ad6 FUN_141833ad6 body=353 status=ok
// SIG undefined FUN_141833ad6(void)

void FUN_141833ad6(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141833b5b;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141833b5b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141833c38 FUN_141833c38 body=48 status=ok
// SIG undefined FUN_141833c38(void)

void FUN_141833c38(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x14,4);
  }
  return;
}



// FUNCTION 141833c68 FUN_141833c68 body=652 status=ok
// SIG undefined FUN_141833c68(void)

void FUN_141833c68(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0);
    }
LAB_141833cad:
    uVar3 = 0;
    do {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
  }
  else {
    if (uVar7 == 0) goto LAB_141833d9f;
    FUN_1446efa72(plVar5,0);
    if (0 < (int)uVar7) goto LAB_141833cad;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar8 = (int)param_1[5];
  local_4c = 1;
  if (iVar8 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_48;
    }
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      iVar11 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar11 = iVar8 + -1;
      }
      uVar6 = 0;
      uVar10 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar10 = uVar6;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar11 = 0;
      do {
        local_3c = iVar8;
        if (uVar10 == uVar6) goto LAB_141833d71;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar9[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar7 == 0);
      local_50 = (int)uVar6;
      local_38 = iVar11;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar7 & uVar7;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar8 <= local_3c) {
      local_3c = iVar8;
    }
  }
LAB_141833d71:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar8) {
    do {
      lVar2 = *local_58;
      lVar4 = (longlong)local_3c;
      uVar10 = *(ulonglong *)(lVar2 + lVar4 * 0x18);
      uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)param_1[9] - 1U;
      iVar8 = (int)uVar10;
      *(int *)(lVar2 + 0x14 + lVar4 * 0x18) = iVar8;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_141833d9f:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141833ef6 FUN_141833ef6 body=29 status=ok
// SIG undefined FUN_141833ef6(void)

undefined8 FUN_141833ef6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141833f14 FUN_141833f14 body=29 status=ok
// SIG undefined FUN_141833f14(void)

undefined8 FUN_141833f14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141833f32 FUN_141833f32 body=510 status=ok
// SIG undefined FUN_141833f32(void)

void FUN_141833f32(longlong param_1,longlong param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3f104) {
    FUN_144b3d300(&DAT_14cb3f104);
    if (DAT_14cb3f104 == -1) {
      FUN_1446f470e(&DAT_14cb3f0fc,L"Position",1);
      _Init_thread_footer(&DAT_14cb3f104);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3f110) {
    FUN_144b3d300(&DAT_14cb3f110);
    if (DAT_14cb3f110 == -1) {
      FUN_1446f470e(&DAT_14cb3f108,L"SpriteSize",1);
      _Init_thread_footer(&DAT_14cb3f110);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3f11c) {
    FUN_144b3d300(&DAT_14cb3f11c);
    if (DAT_14cb3f11c == -1) {
      FUN_1446f470e(&DAT_14cb3f114,L"Scale",1);
      _Init_thread_footer(&DAT_14cb3f11c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3f128) {
    FUN_144b3d300(&DAT_14cb3f128);
    if (DAT_14cb3f128 == -1) {
      FUN_1446f470e(&DAT_14cb3f120,L"RibbonWidth",1);
      _Init_thread_footer(&DAT_14cb3f128);
    }
  }
  if (param_2 != 0) {
    FUN_140bec572(param_1 + 8,param_2,DAT_14cb3f0fc);
    FUN_140aa948e(param_1 + 0x18,param_2,DAT_14cb3f114);
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  return;
}



// FUNCTION 141834130 FUN_141834130 body=49 status=ok
// SIG undefined FUN_141834130(void)

longlong FUN_141834130(void)

{
  if (DAT_14cb42250 == 0) {
    FUN_14073dd9a(&DAT_14cb42250,&PTR_LAB_14ae01460);
  }
  return DAT_14cb42250;
}



// FUNCTION 141834162 FUN_141834162 body=327 status=ok
// SIG undefined FUN_141834162(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141834162(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar2 = FUN_1400439fc(param_1,0,&local_29);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if (param_1 == (longlong *)0x0) {
    _DAT_00000048 = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(param_1 + 9) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x4c) = iVar3;
  FUN_144740618(param_1 + 8);
  if ((param_1[5] != 0) && (*(longlong **)(param_1[5] + 0x48) != param_1)) {
    FUN_1400337aa();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1402ada0e(param_1);
  return;
}



// FUNCTION 1418342aa FUN_1418342aa body=62 status=ok
// SIG undefined FUN_1418342aa(void)

undefined8 FUN_1418342aa(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  piVar2 = (int *)(**(code **)(*param_1 + 0x58))(param_1,param_2,0);
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    if (((longlong)iVar1 < 0) || ((int)param_1[7] <= iVar1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1[6] + (longlong)iVar1 * 8);
    }
  }
  return uVar3;
}



// FUNCTION 1418342e8 FUN_1418342e8 body=111 status=ok
// SIG undefined FUN_1418342e8(void)

void * FUN_1418342e8(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)((longlong)param_2 + 0xc0);
  if (*(void **)((longlong)param_2 + 0xc0) == (void *)0x0) {
    pvVar2 = param_2;
  }
  iVar1 = *(int *)((longlong)param_2 + 0xd0);
  *(int *)((longlong)param_1 + 0x180) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x184) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x184) = 0xc;
  }
  else {
    FUN_1447d2040(param_1,iVar1);
    if (iVar1 != 0) {
      pvVar2 = memcpy(param_1,pvVar2,(longlong)iVar1 << 5);
      return pvVar2;
    }
  }
  return param_1;
}



// FUNCTION 141834358 FUN_141834358 body=73 status=ok
// SIG undefined FUN_141834358(void)

void FUN_141834358(longlong param_1)

{
  FUN_14011fb0c(param_1 + 0x210);
  FUN_14011fb0c(param_1 + 0x238);
  if (DAT_14ca96da8 == '\0') {
    return;
  }
  FUN_14052082e(param_1 + 0x40);
  FUN_1407f1458(param_1 + 0x10);
  return;
}



// FUNCTION 1418343a2 FUN_1418343a2 body=1715 status=ok
// SIG undefined FUN_1418343a2(void)

void FUN_1418343a2(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  longlong local_140;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  undefined8 local_78;
  undefined4 local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  undefined4 local_54;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  memset(&local_138,0,0xf0);
  if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
    local_58 = (uint)*(byte *)(param_5 + 0x388);
  }
  else {
    local_58 = 1;
  }
  local_54 = *(undefined4 *)(param_4 + 0x9c);
  puVar8 = &DAT_14c846330;
  if (*(undefined8 **)(param_5 + 0x2f0) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_5 + 0x2f0);
  }
  local_70 = *(undefined4 *)(puVar8 + 1);
  local_78 = *puVar8;
  local_120 = (float)*(double *)(param_3 + 0x9f8);
  local_124 = (float)*(double *)(param_3 + 0x9d8);
  local_128 = (float)*(double *)(param_3 + 0x9b8);
  local_11c = 0x3f800000;
  local_130 = (float)*(double *)(param_3 + 0x9f0);
  local_134 = (float)*(double *)(param_3 + 0x9d0);
  local_138 = (float)*(double *)(param_3 + 0x9b0);
  local_12c = 0x3f800000;
  local_118 = 0;
  uStack_110 = 0;
  local_b0 = *(uint *)(param_2 + 0xc);
  local_ac = 1.0 / (float)local_b0;
  local_a8 = *(undefined4 *)(param_2 + 0x10);
  local_a4 = *(undefined4 *)(param_2 + 0x14);
  local_a0 = *(undefined4 *)(param_2 + 0x18);
  local_9c = *(undefined4 *)(param_2 + 0x1c);
  local_98 = *(undefined4 *)(param_1 + 0x260);
  local_94 = (uint)*(byte *)(param_1 + 0x265);
  local_90 = (uint)((*(byte *)(param_1 + 300) & 3) != 0);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x10);
  local_108 = (uint)*(ushort *)(lVar4 + 2);
  local_c4 = 0xffffffff;
  if (local_108 == 0xffff) {
    local_108 = 0xffffffff;
  }
  local_108 = (uint)*(byte *)(lVar4 + 7) << 0x1f | local_108;
  local_104 = (uint)*(ushort *)(lVar4 + 0x8a);
  if (local_104 == 0xffff) {
    local_104 = 0xffffffff;
  }
  local_104 = (uint)*(byte *)(lVar4 + 0x8f) << 0x1f | local_104;
  local_100 = (uint)*(ushort *)(lVar4 + 10);
  if (local_100 == 0xffff) {
    local_100 = 0xffffffff;
  }
  local_100 = (uint)*(byte *)(lVar4 + 0xf) << 0x1f | local_100;
  local_ec = (uint)*(ushort *)(lVar4 + 0x12);
  if (local_ec == 0xffff) {
    local_ec = 0xffffffff;
  }
  local_ec = (uint)*(byte *)(lVar4 + 0x17) << 0x1f | local_ec;
  local_fc = (uint)*(ushort *)(lVar4 + 0x1a);
  if (local_fc == 0xffff) {
    local_fc = 0xffffffff;
  }
  local_fc = (uint)*(byte *)(lVar4 + 0x1f) << 0x1f | local_fc;
  local_f8 = (uint)*(ushort *)(lVar4 + 0x92);
  if (local_f8 == 0xffff) {
    local_f8 = 0xffffffff;
  }
  local_f8 = (uint)*(byte *)(lVar4 + 0x97) << 0x1f | local_f8;
  local_f4 = (uint)*(ushort *)(lVar4 + 0x22);
  if (local_f4 == 0xffff) {
    local_f4 = 0xffffffff;
  }
  local_f4 = (uint)*(byte *)(lVar4 + 0x27) << 0x1f | local_f4;
  local_f0 = (uint)*(ushort *)(lVar4 + 0xa2);
  if (local_f0 == 0xffff) {
    local_f0 = 0xffffffff;
  }
  local_f0 = (uint)*(byte *)(lVar4 + 0xa7) << 0x1f | local_f0;
  local_e0 = (uint)*(ushort *)(lVar4 + 0x32);
  if (local_e0 == 0xffff) {
    local_e0 = 0xffffffff;
  }
  local_e0 = (uint)*(byte *)(lVar4 + 0x37) << 0x1f | local_e0;
  local_dc = (uint)*(ushort *)(lVar4 + 0x3a);
  if (local_dc == 0xffff) {
    local_dc = 0xffffffff;
  }
  local_dc = (uint)*(byte *)(lVar4 + 0x3f) << 0x1f | local_dc;
  local_d4 = (uint)*(ushort *)(lVar4 + 0x42);
  if (local_d4 == 0xffff) {
    local_d4 = 0xffffffff;
  }
  local_d4 = (uint)*(byte *)(lVar4 + 0x47) << 0x1f | local_d4;
  local_d0 = (uint)*(ushort *)(lVar4 + 0x4a);
  if (local_d0 == 0xffff) {
    local_d0 = 0xffffffff;
  }
  local_d0 = (uint)*(byte *)(lVar4 + 0x4f) << 0x1f | local_d0;
  local_cc = (uint)*(ushort *)(lVar4 + 0x52);
  if (local_cc == 0xffff) {
    local_cc = 0xffffffff;
  }
  local_cc = (uint)*(byte *)(lVar4 + 0x57) << 0x1f | local_cc;
  local_c8 = (uint)*(ushort *)(lVar4 + 0x5a);
  if (local_c8 == 0xffff) {
    local_c8 = 0xffffffff;
  }
  local_c8 = (uint)*(byte *)(lVar4 + 0x5f) << 0x1f | local_c8;
  local_8c = (uint)*(byte *)(param_1 + 0x130);
  if ((local_8c == 3) || (*(char *)(param_1 + 0x158) == '\x03')) {
    local_c4 = 0xffffffff;
    if (*(ushort *)(lVar4 + 0x62) != 0xffff) {
      local_c4 = (uint)*(ushort *)(lVar4 + 0x62);
    }
    local_c4 = (uint)*(byte *)(lVar4 + 0x67) << 0x1f | local_c4;
  }
  local_bc = 0xffffffff;
  local_c0 = 0xffffffff;
  if ((*(byte *)(param_1 + 0x133) & 1) != 0) {
    local_c0 = 0xffffffff;
    if (*(ushort *)(lVar4 + 0x6a) != 0xffff) {
      local_c0 = (uint)*(ushort *)(lVar4 + 0x6a);
    }
    local_c0 = (uint)*(byte *)(lVar4 + 0x6f) << 0x1f | local_c0;
  }
  if ((*(byte *)(param_1 + 0x133) & 2) != 0) {
    local_bc = 0xffffffff;
    if (*(ushort *)(lVar4 + 0x72) != 0xffff) {
      local_bc = (uint)*(ushort *)(lVar4 + 0x72);
    }
    local_bc = (uint)*(byte *)(lVar4 + 0x77) << 0x1f | local_bc;
  }
  local_b4 = 0xffffffff;
  local_b8 = 0xffffffff;
  if ((*(byte *)(param_1 + 0x15b) & 1) != 0) {
    local_b8 = 0xffffffff;
    if (*(ushort *)(lVar4 + 0x7a) != 0xffff) {
      local_b8 = (uint)*(ushort *)(lVar4 + 0x7a);
    }
    local_b8 = (uint)*(byte *)(lVar4 + 0x7f) << 0x1f | local_b8;
  }
  if ((*(byte *)(param_1 + 0x15b) & 2) != 0) {
    local_b4 = 0xffffffff;
    if (*(ushort *)(lVar4 + 0x82) != 0xffff) {
      local_b4 = (uint)*(ushort *)(lVar4 + 0x82);
    }
    local_b4 = (uint)*(byte *)(lVar4 + 0x87) << 0x1f | local_b4;
  }
  local_d8 = *(undefined4 *)(param_1 + 0x120);
  local_e8 = 0xffffffff;
  local_e4 = 0xffffffff;
  if ((byte)(*(char *)(param_1 + 0x27c) - 1U) < 2) {
    local_e8 = (uint)*(ushort *)(lVar4 + 0x2a);
    if (local_e8 == 0xffff) {
      local_e8 = 0xffffffff;
    }
    local_e8 = (uint)*(byte *)(lVar4 + 0x2f) << 0x1f | local_e8;
    local_e4 = (uint)*(ushort *)(lVar4 + 0x9a);
    if (local_e4 == 0xffff) {
      local_e4 = 0xffffffff;
    }
    local_e4 = (uint)*(byte *)(lVar4 + 0x9f) << 0x1f | local_e4;
  }
  local_88 = (uint)*(byte *)(param_1 + 0x158);
  local_68 = (float)*(double *)(param_1 + 0x150);
  local_64 = (float)*(double *)(param_1 + 0x140);
  local_60 = (float)*(double *)(param_1 + 0x178);
  local_5c = (float)*(double *)(param_1 + 0x168);
  lVar4 = FUN_1448a0e46();
  local_150 = 1;
  local_158 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_140,&local_138,*(undefined8 *)(lVar4 + 0x48));
  if (local_140 != 0) {
    LOCK();
    *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
    UNLOCK();
    if (local_140 != 0) {
      LOCK();
      puVar1 = (uint *)(local_140 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_140 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_140 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = local_140;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar9) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  lVar4 = *param_6;
  *param_6 = local_140;
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141834a56 FUN_141834a56 body=128 status=ok
// SIG undefined FUN_141834a56(void)

undefined8 * FUN_141834a56(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae014a0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_14006c2ae(param_1 + 8);
  FUN_1406fc1fc(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141834ad6 FUN_141834ad6 body=70 status=ok
// SIG undefined FUN_141834ad6(void)

undefined8 * FUN_141834ad6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae09e50;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_140137a40(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141834b1c FUN_141834b1c body=38 status=ok
// SIG undefined FUN_141834b1c(void)

undefined8 FUN_141834b1c(undefined8 param_1,int param_2)

{
  FUN_140137a40();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141834b42 FUN_141834b42 body=58 status=ok
// SIG undefined FUN_141834b42(void)

void FUN_141834b42(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0xffffffff;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 141834b7c FUN_141834b7c body=353 status=ok
// SIG undefined FUN_141834b7c(void)

void FUN_141834b7c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 4;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141834c01;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_141834c01:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,2);
  return;
}



// FUNCTION 141834cde FUN_141834cde body=353 status=ok
// SIG undefined FUN_141834cde(void)

void FUN_141834cde(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 4;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141834d63;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_141834d63:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,2);
  return;
}



// FUNCTION 141834e40 FUN_141834e40 body=372 status=ok
// SIG undefined FUN_141834e40(void)

void FUN_141834e40(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 6;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141834ec8;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_141834ec8:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 6)) {
    uVar7 = uVar5 / 6 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,6,2);
  return;
}



// FUNCTION 141834fb6 FUN_141834fb6 body=82 status=ok
// SIG undefined FUN_141834fb6(void)

undefined8 * FUN_141834fb6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_14ae0dd90;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ae09a28;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141835008 FUN_141835008 body=255 status=ok
// SIG undefined FUN_141835008(void)

void FUN_141835008(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141835108 FUN_141835108 body=29 status=ok
// SIG undefined FUN_141835108(void)

undefined8 FUN_141835108(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141835126 FUN_141835126 body=373 status=ok
// SIG undefined FUN_141835126(void)

void FUN_141835126(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418351af;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1418351af:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 14183529c FUN_14183529c body=353 status=ok
// SIG undefined FUN_14183529c(void)

void FUN_14183529c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141835321;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141835321:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418353fe FUN_1418353fe body=353 status=ok
// SIG undefined FUN_1418353fe(void)

void FUN_1418353fe(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141835483;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141835483:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141835560 FUN_141835560 body=113 status=ok
// SIG undefined FUN_141835560(void)

void FUN_141835560(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 1418355d2 FUN_1418355d2 body=306 status=ok
// SIG undefined FUN_1418355d2(void)

undefined4 *
FUN_1418355d2(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405dc782(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  local_48[2] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_140263f5a(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140264164(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141835706 FUN_141835706 body=353 status=ok
// SIG undefined FUN_141835706(void)

void FUN_141835706(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14183578b;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14183578b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141835868 FUN_141835868 body=353 status=ok
// SIG undefined FUN_141835868(void)

void FUN_141835868(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418358ed;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1418358ed:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418359ca FUN_1418359ca body=306 status=ok
// SIG undefined FUN_1418359ca(void)

void FUN_1418359ca(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_141835a2c;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,2);
    }
  }
LAB_141835a2c:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,2);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 141835afc FUN_141835afc body=29 status=ok
// SIG undefined FUN_141835afc(void)

undefined8 FUN_141835afc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141835b1a FUN_141835b1a body=153 status=ok
// SIG undefined FUN_141835b1a(void)

undefined8 * FUN_141835b1a(undefined8 *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ae0ed68;
  pauVar1 = (undefined1 (*) [16])FUN_14001cc68(0x90,0x10);
  *pauVar1 = (undefined1  [16])0x0;
  pauVar1[1] = (undefined1  [16])0x0;
  pauVar1[2] = (undefined1  [16])0x0;
  pauVar1[3] = (undefined1  [16])0x0;
  pauVar1[4] = (undefined1  [16])0x0;
  pauVar1[5] = (undefined1  [16])0x0;
  pauVar1[6] = (undefined1  [16])0x0;
  pauVar1[7] = (undefined1  [16])0x0;
  *(undefined4 *)pauVar1[8] = 0xffffffff;
  *(undefined4 *)(pauVar1[8] + 4) = 0xffffffff;
  *(undefined4 *)(pauVar1[8] + 8) = 0xffffffff;
  *(undefined4 *)(pauVar1[8] + 0xc) = 0xffffffff;
  param_1[1] = pauVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14ae0ed70;
  puVar2[2] = pauVar1;
  param_1[2] = puVar2;
  return param_1;
}



// FUNCTION 141835bb4 FUN_141835bb4 body=29 status=ok
// SIG undefined FUN_141835bb4(void)

undefined8 FUN_141835bb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141835bd2 FUN_141835bd2 body=29 status=ok
// SIG undefined FUN_141835bd2(void)

undefined8 FUN_141835bd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141835bf0 FUN_141835bf0 body=269 status=ok
// SIG undefined FUN_141835bf0(void)

void FUN_141835bf0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141835cfe FUN_141835cfe body=29 status=ok
// SIG undefined FUN_141835cfe(void)

undefined8 FUN_141835cfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141835d1c FUN_141835d1c body=4900 status=ok
// SIG undefined FUN_141835d1c(void)

void FUN_141835d1c(longlong param_1,longlong param_2,longlong *param_3,int param_4,longlong *param_5
                  )

{
  char cVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  float fVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  double *pdVar22;
  float fVar23;
  longlong lVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_1d8 [32];
  int local_1b8;
  uint local_1b0;
  int local_1a8;
  float local_1a0;
  undefined4 *local_198;
  float *local_190;
  undefined4 *local_188;
  float local_174;
  ulonglong local_170;
  longlong local_168;
  longlong local_160;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  longlong *local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  float local_fc [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar25 = *(uint *)(param_5 + 3);
  local_170 = (ulonglong)uVar25;
  piVar5 = (int *)*param_3;
  iVar19 = *piVar5;
  cVar1 = *(char *)(param_2 + 0x51);
  if (cVar1 == '\0') {
    lVar11 = 0;
    do {
      uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x58 + lVar11 * 8) + (longlong)iVar19 * 2);
      uVar12 = (uint)uVar4 << 0xd;
      if ((uVar12 & 0xf800000) == 0xf800000) {
        fVar29 = (float)(uVar12 | 0x70000000);
      }
      else if ((uVar12 & 0xf800000) == 0) {
        fVar29 = (float)(uVar12 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar29 = (float)((uVar12 & 0xfffe000) + 0x38000000);
      }
      local_fc[lVar11] = (float)((int)(short)uVar4 & 0x80000000U | (uint)fVar29);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 3);
  }
  else {
    lVar11 = 0;
    do {
      local_fc[lVar11] =
           *(float *)(*(longlong *)(param_2 + 0x58 + lVar11 * 8) + (longlong)iVar19 * 4);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 3);
  }
  fVar32 = local_fc[2];
  fVar30 = local_fc[1];
  fVar29 = local_fc[0];
  local_140 = param_5 + 2;
  local_128 = (longlong)(int)uVar25;
  uVar12 = *(uint *)(param_3 + 1);
  uVar8 = (ulonglong)(int)uVar12;
  local_168 = param_1;
  if ((longlong)uVar8 < 2) {
    uVar21 = 1;
    fVar17 = 0.0;
    fVar23 = 0.0;
    fVar39 = 0.0;
    fVar28 = DAT_14c846338;
    fVar31 = (float)DAT_14c846330;
    fVar26 = local_fc[0];
    fVar35 = local_fc[1];
    fVar37 = local_fc[2];
    fVar27 = DAT_14c846330._4_4_;
  }
  else {
    cVar2 = *(char *)(param_2 + 0x91);
    lVar11 = *(longlong *)(param_2 + 0x98);
    cVar3 = *(char *)(param_2 + 0x81);
    lVar20 = *(longlong *)(param_2 + 0x88);
    uVar21 = 1;
    do {
      lVar18 = (longlong)piVar5[uVar21];
      if (cVar1 == '\0') {
        local_160 = 0;
        do {
          uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x58 + local_160 * 8) + lVar18 * 2);
          local_144 = (float)(uint)uVar4;
          uVar16 = (uint)uVar4 << 0xd;
          if ((uVar16 & 0xf800000) == 0xf800000) {
            local_174 = (float)(uVar16 | 0x70000000);
          }
          else if ((uVar16 & 0xf800000) == 0) {
            local_174 = (float)(uVar16 | 0x38800000) + -6.1035156e-05;
          }
          else {
            local_174 = (float)((uVar16 & 0xfffe000) + 0x38000000);
          }
          local_fc[local_160] = (float)((int)(short)uVar4 & 0x80000000U | (uint)local_174);
          local_160 = local_160 + 1;
        } while (local_160 != 3);
        local_160 = 3;
      }
      else {
        lVar24 = 0;
        do {
          local_fc[lVar24] = *(float *)(*(longlong *)(param_2 + 0x58 + lVar24 * 8) + lVar18 * 4);
          lVar24 = lVar24 + 1;
        } while (lVar24 != 3);
      }
      fVar37 = local_fc[2];
      fVar35 = local_fc[1];
      fVar26 = local_fc[0];
      if (cVar2 == '\0') {
        uVar4 = *(ushort *)(lVar11 + lVar18 * 2);
        local_160 = CONCAT44(local_160._4_4_,(uint)uVar4);
        uVar16 = (uint)uVar4 << 0xd;
        if ((uVar16 & 0xf800000) == 0xf800000) {
          local_174 = (float)(uVar16 | 0x70000000);
        }
        else if ((uVar16 & 0xf800000) == 0) {
          local_174 = (float)(uVar16 | 0x38800000) + -6.1035156e-05;
        }
        else {
          local_174 = (float)((uVar16 & 0xfffe000) + 0x38000000);
        }
        fVar23 = (float)((int)(short)uVar4 & 0x80000000U | (uint)local_174);
      }
      else {
        fVar23 = *(float *)(lVar11 + lVar18 * 4);
      }
      if (cVar3 == '\0') {
        uVar4 = *(ushort *)(lVar20 + lVar18 * 2);
        local_174 = (float)(uint)uVar4;
        uVar16 = (uint)uVar4 << 0xd;
        if ((uVar16 & 0xf800000) == 0xf800000) {
          fVar17 = (float)(uVar16 | 0x70000000);
        }
        else if ((uVar16 & 0xf800000) == 0) {
          fVar17 = (float)(uVar16 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar17 = (float)((uVar16 & 0xfffe000) + 0x38000000);
        }
        fVar17 = (float)((int)(short)uVar4 & 0x80000000U | (uint)fVar17);
      }
      else {
        fVar17 = *(float *)(lVar20 + lVar18 * 4);
      }
      fVar28 = local_fc[2] - fVar32;
      fVar27 = local_fc[1] - fVar30;
      fVar31 = local_fc[0] - fVar29;
      fVar39 = SQRT(fVar28 * fVar28 + fVar31 * fVar31 + fVar27 * fVar27);
      if (DAT_14c76298c < fVar39) {
        fVar29 = 1.0 / fVar39;
        *(uint *)(param_5 + 3) = uVar25 + 1;
        if (*(uint *)((longlong)param_5 + 0x1c) < uVar25 + 1) {
          FUN_1447808da(local_140,local_170);
        }
        *(int *)(param_5[2] + local_128 * 4) = *piVar5;
        iVar19 = (int)param_5[5];
        *(uint *)(param_5 + 5) = iVar19 + 1U;
        if (*(uint *)((longlong)param_5 + 0x2c) < iVar19 + 1U) {
          FUN_1449e2712(param_5 + 4,iVar19);
        }
        lVar11 = param_5[4];
        lVar20 = (longlong)iVar19 * 0x10;
        *(float *)(lVar11 + lVar20) = fVar31 * fVar29;
        *(float *)(lVar11 + 4 + lVar20) = fVar27 * fVar29;
        *(float *)(lVar11 + 8 + lVar20) = fVar28 * fVar29;
        *(undefined4 *)(lVar11 + 0xc + lVar20) = 0;
        iVar19 = (int)param_5[7];
        *(uint *)(param_5 + 7) = iVar19 + 1U;
        if (*(uint *)((longlong)param_5 + 0x3c) < iVar19 + 1U) {
          FUN_1447808da(param_5 + 6,iVar19);
        }
        *(int *)(param_5[6] + (longlong)iVar19 * 4) = param_4;
        uVar8 = (ulonglong)*(uint *)(param_3 + 1);
        fVar28 = fVar28 * fVar29;
        fVar31 = fVar31 * fVar29;
        fVar27 = fVar27 * fVar29;
        goto LAB_141835fc0;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar8);
    uVar21 = (ulonglong)uVar12;
    fVar39 = 0.0;
  }
LAB_141835fc0:
  fVar29 = 0.0;
  iVar19 = (int)uVar21;
  uVar15 = local_170;
  lVar11 = local_168;
  if (iVar19 + 1 < (int)uVar8) {
    local_118 = param_5 + 4;
    local_120 = param_5 + 6;
    uVar7 = (uVar21 & 0xffffffff) + 1;
    uVar6 = uVar21;
    do {
      uVar13 = uVar7;
      lVar20 = *param_3;
      lVar18 = (longlong)*(int *)(lVar20 + uVar13 * 4);
      local_160 = CONCAT44(local_160._4_4_,fVar39);
      if (*(char *)(param_2 + 0x51) == '\0') {
        lVar24 = 0;
        do {
          uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x58 + lVar24 * 8) + lVar18 * 2);
          uVar25 = (uint)uVar4 << 0xd;
          if ((uVar25 & 0xf800000) == 0xf800000) {
            fVar30 = (float)(uVar25 | 0x70000000);
          }
          else if ((uVar25 & 0xf800000) == 0) {
            fVar30 = (float)(uVar25 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar30 = (float)((uVar25 & 0xfffe000) + 0x38000000);
          }
          local_fc[lVar24] = (float)((int)(short)uVar4 & 0x80000000U | (uint)fVar30);
          lVar24 = lVar24 + 1;
          uVar15 = local_170;
          lVar11 = local_168;
        } while (lVar24 != 3);
      }
      else {
        lVar24 = 0;
        do {
          local_fc[lVar24] = *(float *)(*(longlong *)(param_2 + 0x58 + lVar24 * 8) + lVar18 * 4);
          lVar24 = lVar24 + 1;
        } while (lVar24 != 3);
      }
      if (*(char *)(param_2 + 0x91) == '\x01') {
        local_134 = *(float *)(*(longlong *)(param_2 + 0x98) + lVar18 * 4);
      }
      else {
        uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x98) + lVar18 * 2);
        uVar25 = (uint)uVar4 << 0xd;
        if ((uVar25 & 0xf800000) == 0xf800000) {
          local_134 = (float)(uVar25 | 0x70000000);
        }
        else if ((uVar25 & 0xf800000) == 0) {
          local_134 = (float)(uVar25 | 0x38800000) + -6.1035156e-05;
        }
        else {
          local_134 = (float)((uVar25 & 0xfffe000) + 0x38000000);
        }
        local_134 = (float)((int)(short)uVar4 & 0x80000000U | (uint)local_134);
        uVar15 = local_170;
        lVar11 = local_168;
      }
      if (*(char *)(param_2 + 0x81) == '\x01') {
        local_138 = *(float *)(*(longlong *)(param_2 + 0x88) + lVar18 * 4);
      }
      else {
        uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x88) + lVar18 * 2);
        uVar25 = (uint)uVar4 << 0xd;
        if ((uVar25 & 0xf800000) == 0xf800000) {
          local_138 = (float)(uVar25 | 0x70000000);
        }
        else if ((uVar25 & 0xf800000) == 0) {
          local_138 = (float)(uVar25 | 0x38800000) + -6.1035156e-05;
        }
        else {
          local_138 = (float)((uVar25 & 0xfffe000) + 0x38000000);
        }
        local_138 = (float)((int)(short)uVar4 & 0x80000000U | (uint)local_138);
        uVar15 = local_170;
        lVar11 = local_168;
      }
      local_130 = local_fc[2];
      fVar32 = local_fc[2] - fVar37;
      local_12c = local_fc[1];
      fVar34 = local_fc[1] - fVar35;
      local_144 = local_fc[0];
      fVar33 = local_fc[0] - fVar26;
      fVar30 = SQRT(fVar32 * fVar32 + fVar33 * fVar33 + fVar34 * fVar34);
      local_174 = fVar31;
      if ((DAT_14c76298c < fVar30) || ((int)uVar6 == (int)uVar8 + -2)) {
        fVar26 = DAT_14c76298c;
        if (DAT_14c76298c <= fVar30) {
          fVar26 = fVar30;
        }
        fVar26 = 1.0 / fVar26;
        fVar33 = fVar33 * fVar26;
        fVar34 = fVar34 * fVar26;
        fVar32 = fVar32 * fVar26;
        fVar37 = fVar28 + fVar32;
        fVar35 = fVar27 + fVar34;
        fVar31 = fVar31 + fVar33;
        fVar26 = fVar37 * fVar37 + fVar31 * fVar31 + fVar35 * fVar35;
        if (((fVar26 != 1.0) || (fVar39 = fVar31, fVar36 = fVar35, fVar38 = fVar37, NAN(fVar26))) &&
           (fVar39 = (float)DAT_14c846330, fVar36 = DAT_14c846330._4_4_, fVar38 = DAT_14c846338,
           1e-08 <= fVar26)) {
          fVar26 = 1.0 / SQRT(fVar26);
          fVar39 = fVar31 * fVar26;
          fVar36 = fVar35 * fVar26;
          fVar38 = fVar37 * fVar26;
        }
        fVar26 = *(float *)(lVar11 + 0x124);
        if (0.99 <= fVar26) {
          fVar26 = 0.99;
        }
        iVar19 = (int)param_5[3];
        *(uint *)(param_5 + 3) = iVar19 + 1U;
        if (*(uint *)((longlong)param_5 + 0x1c) < iVar19 + 1U) {
          local_154 = fVar27;
          local_150 = fVar17;
          local_14c = fVar23;
          local_148 = fVar29;
          FUN_1447808da(local_140,iVar19);
          uVar15 = local_170;
          lVar11 = local_168;
          fVar29 = local_148;
          fVar23 = local_14c;
          fVar17 = local_150;
          fVar27 = local_154;
        }
        *(undefined4 *)(param_5[2] + (longlong)iVar19 * 4) =
             *(undefined4 *)(lVar20 + (longlong)(int)uVar21 * 4);
        iVar19 = (int)param_5[5];
        *(uint *)(param_5 + 5) = iVar19 + 1U;
        if (*(uint *)((longlong)param_5 + 0x2c) < iVar19 + 1U) {
          local_154 = fVar27;
          local_150 = fVar17;
          local_14c = fVar23;
          local_148 = fVar29;
          FUN_1449e2712(local_118,iVar19);
          uVar15 = local_170;
          lVar11 = local_168;
          fVar29 = local_148;
          fVar23 = local_14c;
          fVar17 = local_150;
          fVar27 = local_154;
        }
        fVar26 = 1.0 - fVar26;
        fVar29 = fVar29 + (float)local_160;
        lVar20 = param_5[4];
        lVar18 = (longlong)iVar19 * 0x10;
        *(float *)(lVar20 + lVar18) = fVar39 * fVar26;
        *(float *)(lVar20 + 4 + lVar18) = fVar36 * fVar26;
        *(float *)(lVar20 + 8 + lVar18) = fVar38 * fVar26;
        *(float *)(lVar20 + 0xc + lVar18) = fVar29;
        iVar19 = (int)param_5[7];
        *(uint *)(param_5 + 7) = iVar19 + 1U;
        if (*(uint *)((longlong)param_5 + 0x3c) < iVar19 + 1U) {
          FUN_1447808da(local_120,iVar19);
          uVar15 = local_170;
          lVar11 = local_168;
        }
        *(int *)(param_5[6] + (longlong)iVar19 * 4) = param_4;
        *(float *)(param_5 + 0x15) = *(float *)(param_5 + 0x15) + fVar30;
        *(float *)((longlong)param_5 + 0xac) =
             fVar30 * fVar30 + *(float *)((longlong)param_5 + 0xac);
        fVar35 = fVar28 * fVar32 + local_174 * fVar33 + fVar27 * fVar34;
        uVar25 = -(uint)(0.0 <= fVar35);
        fVar35 = ABS(fVar35);
        fVar37 = 1.0 - fVar35;
        fVar26 = 0.0;
        if (0.0 <= fVar37) {
          fVar26 = fVar37;
        }
        fVar26 = SQRT(fVar26) * (fVar35 * -0.156583 + 1.5707964);
        *(float *)(param_5 + 0x16) =
             (float)(~uVar25 & (uint)(3.1415927 - fVar26) | (uint)fVar26 & uVar25) * fVar30 +
             *(float *)(param_5 + 0x16);
        *(float *)((longlong)param_5 + 0xb4) =
             ABS(local_134 - fVar23) * fVar30 + *(float *)((longlong)param_5 + 0xb4);
        *(float *)(param_5 + 0x17) = fVar17 * fVar30 + *(float *)(param_5 + 0x17);
        uVar8 = (ulonglong)*(uint *)(param_3 + 1);
        uVar21 = uVar13 & 0xffffffff;
        fVar28 = fVar32;
        fVar31 = fVar33;
        fVar27 = fVar34;
        fVar26 = local_144;
        fVar35 = local_12c;
        fVar37 = local_130;
        fVar39 = fVar30;
        fVar23 = local_134;
        fVar17 = local_138;
      }
      iVar19 = (int)uVar21;
      uVar7 = uVar13 + 1;
      uVar6 = uVar13;
    } while ((int)(uVar13 + 1) < (int)uVar8);
  }
  iVar10 = (int)param_5[3];
  if (0.0 < fVar39) {
    lVar20 = *param_3;
    *(uint *)(param_5 + 3) = iVar10 + 1U;
    if (*(uint *)((longlong)param_5 + 0x1c) < iVar10 + 1U) {
      FUN_1447808da(local_140);
      uVar15 = local_170;
      lVar11 = local_168;
    }
    fVar29 = fVar29 + fVar39;
    *(undefined4 *)(param_5[2] + (longlong)iVar10 * 4) =
         *(undefined4 *)(lVar20 + (longlong)iVar19 * 4);
    iVar19 = (int)param_5[5];
    *(uint *)(param_5 + 5) = iVar19 + 1U;
    if (*(uint *)((longlong)param_5 + 0x2c) < iVar19 + 1U) {
      FUN_1449e2712(param_5 + 4,iVar19);
      uVar15 = local_170;
      lVar11 = local_168;
    }
    lVar20 = param_5[4];
    lVar18 = (longlong)iVar19 * 0x10;
    *(float *)(lVar20 + lVar18) = fVar31;
    *(float *)(lVar20 + 4 + lVar18) = fVar27;
    *(float *)(lVar20 + 8 + lVar18) = fVar28;
    *(float *)(lVar20 + 0xc + lVar18) = fVar29;
    iVar19 = (int)param_5[7];
    *(uint *)(param_5 + 7) = iVar19 + 1U;
    if (*(uint *)((longlong)param_5 + 0x3c) < iVar19 + 1U) {
      FUN_1447808da(param_5 + 6,iVar19);
      uVar15 = local_170;
      lVar11 = local_168;
    }
    *(int *)(param_5[6] + (longlong)iVar19 * 4) = param_4;
    iVar10 = (int)param_5[3];
  }
  uVar25 = iVar10 - 1;
  iVar19 = uVar25 - (int)uVar15;
  if (iVar19 != 0 && (int)uVar15 <= (int)uVar25) {
    plVar9 = param_5 + 8;
    if ((longlong *)param_5[0x13] != (longlong *)0x0) {
      plVar9 = (longlong *)param_5[0x13];
    }
    pdVar22 = (double *)(plVar9 + (longlong)param_4 * 0xb);
    iVar14 = *(int *)*param_3;
    if (*(char *)(param_2 + 0x51) == '\0') {
      lVar20 = 0;
      do {
        uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x58 + lVar20 * 8) + (longlong)iVar14 * 2);
        uVar12 = (uint)uVar4 << 0xd;
        if ((uVar12 & 0xf800000) == 0xf800000) {
          fVar30 = (float)(uVar12 | 0x70000000);
        }
        else if ((uVar12 & 0xf800000) == 0) {
          fVar30 = (float)(uVar12 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar30 = (float)((uVar12 & 0xfffe000) + 0x38000000);
        }
        local_fc[lVar20] = (float)((int)(short)uVar4 & 0x80000000U | (uint)fVar30);
        lVar20 = lVar20 + 1;
        uVar15 = local_170;
        lVar11 = local_168;
      } while (lVar20 != 3);
    }
    else {
      lVar20 = 0;
      do {
        local_fc[lVar20] =
             *(float *)(*(longlong *)(param_2 + 0x58 + lVar20 * 8) + (longlong)iVar14 * 4);
        lVar20 = lVar20 + 1;
      } while (lVar20 != 3);
    }
    *pdVar22 = (double)local_fc[0];
    pdVar22[1] = (double)local_fc[1];
    pdVar22[2] = (double)local_fc[2];
    lVar20 = (longlong)*(int *)(*param_3 + (longlong)((int)param_3[1] + -1) * 4);
    if (*(char *)(param_2 + 0x51) == '\0') {
      lVar18 = 0;
      do {
        uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x58 + lVar18 * 8) + lVar20 * 2);
        uVar12 = (uint)uVar4 << 0xd;
        if ((uVar12 & 0xf800000) == 0xf800000) {
          fVar30 = (float)(uVar12 | 0x70000000);
        }
        else if ((uVar12 & 0xf800000) == 0) {
          fVar30 = (float)(uVar12 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar30 = (float)((uVar12 & 0xfffe000) + 0x38000000);
        }
        local_fc[lVar18] = (float)((int)(short)uVar4 & 0x80000000U | (uint)fVar30);
        lVar18 = lVar18 + 1;
        uVar15 = local_170;
        lVar11 = local_168;
      } while (lVar18 != 3);
    }
    else {
      lVar18 = 0;
      do {
        local_fc[lVar18] = *(float *)(*(longlong *)(param_2 + 0x58 + lVar18 * 8) + lVar20 * 4);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 3);
    }
    iVar14 = (int)uVar15;
    pdVar22[3] = (double)local_fc[0];
    pdVar22[4] = (double)local_fc[1];
    pdVar22[5] = (double)local_fc[2];
    *(int *)(pdVar22 + 6) = (int)param_5[1];
    *(int *)((longlong)pdVar22 + 0x34) = iVar19;
    if (iVar19 != 1) {
      lVar20 = param_5[4];
      lVar18 = local_128 * 0x10;
      fVar30 = *(float *)(lVar20 + 0x10 + lVar18);
      fVar32 = *(float *)(lVar20 + 4 + lVar18);
      fVar23 = *(float *)(lVar20 + 0x14 + lVar18);
      fVar17 = *(float *)(lVar20 + 8 + lVar18);
      fVar26 = *(float *)(lVar20 + 0x18 + lVar18);
      fVar35 = fVar17 * fVar26 + *(float *)(lVar20 + lVar18) * fVar30 + fVar32 * fVar23;
      fVar35 = fVar35 + fVar35;
      *(float *)(lVar20 + lVar18) = fVar35 * *(float *)(lVar20 + lVar18) - fVar30;
      *(float *)(lVar20 + 4 + lVar18) = fVar32 * fVar35 - fVar23;
      *(float *)(lVar20 + 8 + lVar18) = fVar17 * fVar35 - fVar26;
      lVar20 = param_5[4];
      lVar18 = (longlong)(int)uVar25 * 0x10;
      lVar24 = (longlong)iVar10 * 0x10;
      fVar30 = *(float *)(lVar20 + 4 + lVar18);
      fVar32 = *(float *)(lVar20 + -0x20 + lVar24);
      fVar23 = *(float *)(lVar20 + -0x1c + lVar24);
      fVar17 = *(float *)(lVar20 + 8 + lVar18);
      fVar26 = *(float *)(lVar20 + -0x18 + lVar24);
      fVar35 = fVar17 * fVar26 + *(float *)(lVar20 + lVar18) * fVar32 + fVar30 * fVar23;
      fVar35 = fVar35 + fVar35;
      *(float *)(lVar20 + lVar18) = fVar35 * *(float *)(lVar20 + lVar18) - fVar32;
      *(float *)(lVar20 + 4 + lVar18) = fVar30 * fVar35 - fVar23;
      *(float *)(lVar20 + 8 + lVar18) = fVar17 * fVar35 - fVar26;
    }
    if (iVar14 < (int)uVar25) {
      uVar8 = uVar15 & 0xffffffff;
      do {
        iVar10 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar10 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar10 + 1U) {
          FUN_1447808da(param_5,iVar10);
          uVar15 = local_170;
          lVar11 = local_168;
        }
        iVar14 = (int)uVar15;
        *(int *)(*param_5 + (longlong)iVar10 * 4) = (int)uVar8;
        uVar12 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar12;
      } while (uVar25 != uVar12);
    }
    uVar12 = *(uint *)(lVar11 + 300);
    if ((uVar12 & 8) == 0) {
      local_188 = &local_104;
      local_190 = local_fc;
      local_198 = &local_100;
      local_1b8 = iVar14;
      local_1b0 = uVar25;
      local_1a8 = iVar19;
      local_1a0 = fVar29;
      FUN_1449d50c8(lVar11 + 0x130,local_140,param_5 + 4,param_2 + 0x70);
    }
    else {
      local_fc[0] = 0.0;
      local_100 = 0x3f800000;
      local_104 = 0x3f800000;
    }
    iVar10 = (int)local_170;
    if ((uVar12 & 0x10) == 0) {
      local_188 = &local_110;
      local_190 = &local_108;
      local_198 = &local_10c;
      local_1b8 = iVar10;
      local_1b0 = uVar25;
      local_1a8 = iVar19;
      local_1a0 = fVar29;
      FUN_1449d50c8(local_168 + 0x158,local_140,param_5 + 4,param_2 + 0x70);
    }
    else {
      local_108 = 0.0;
      local_10c = 0x3f800000;
      local_110 = local_10c;
    }
    *(undefined4 *)(pdVar22 + 7) = local_100;
    *(float *)((longlong)pdVar22 + 0x3c) = local_fc[0];
    *(undefined4 *)(pdVar22 + 8) = local_104;
    *(undefined4 *)((longlong)pdVar22 + 0x44) = local_10c;
    *(float *)(pdVar22 + 9) = local_108;
    *(undefined4 *)((longlong)pdVar22 + 0x4c) = local_110;
    *(int *)(pdVar22 + 10) = iVar10;
    *(uint *)((longlong)pdVar22 + 0x54) = uVar25;
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141837042 FUN_141837042 body=116 status=ok
// SIG undefined FUN_141837042(void)

void FUN_141837042(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418370b6 FUN_1418370b6 body=3829 status=ok
// SIG undefined FUN_1418370b6(void)

void FUN_1418370b6(longlong param_1,longlong param_2,longlong *param_3,int param_4,longlong *param_5
                  )

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  ulonglong uVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  double *pdVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_1a8 [32];
  int local_188;
  float local_180;
  int local_178;
  float local_170;
  undefined4 *local_168;
  float *local_160;
  undefined4 *local_158;
  float local_14c;
  float local_148;
  float local_144;
  ulonglong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  float local_fc [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar18 = *(uint *)(param_5 + 3);
  uVar12 = (ulonglong)uVar18;
  piVar4 = (int *)*param_3;
  iVar16 = *piVar4;
  cVar1 = *(char *)(param_2 + 0x51);
  lVar10 = 0;
  if (cVar1 == '\0') {
    do {
      uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x58 + lVar10 * 8) + (longlong)iVar16 * 2);
      uVar17 = (uint)uVar2 << 0xd;
      if ((uVar17 & 0xf800000) == 0xf800000) {
        fVar28 = (float)(uVar17 | 0x70000000);
      }
      else if ((uVar17 & 0xf800000) == 0) {
        fVar28 = (float)(uVar17 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar28 = (float)((uVar17 & 0xfffe000) + 0x38000000);
      }
      local_fc[lVar10] = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar28);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 3);
  }
  else {
    do {
      local_fc[lVar10] =
           *(float *)(*(longlong *)(param_2 + 0x58 + lVar10 * 8) + (longlong)iVar16 * 4);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 3);
  }
  fVar11 = local_fc[2];
  fVar13 = local_fc[1];
  fVar28 = local_fc[0];
  local_130 = param_5 + 2;
  local_128 = (longlong)(int)uVar18;
  uVar17 = *(uint *)(param_3 + 1);
  uVar7 = (ulonglong)(int)uVar17;
  local_140 = uVar12;
  if ((longlong)uVar7 < 2) {
    uVar14 = 1;
    fVar27 = 0.0;
    fVar26 = local_fc[2];
    fVar24 = local_fc[0];
    fVar33 = DAT_14c846338;
    fVar34 = (float)DAT_14c846330;
    fVar36 = DAT_14c846330._4_4_;
    fVar25 = local_fc[1];
  }
  else {
    uVar14 = 1;
    do {
      iVar16 = piVar4[uVar14];
      lVar10 = 0;
      if (cVar1 == '\0') {
        do {
          uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x58 + lVar10 * 8) + (longlong)iVar16 * 2);
          uVar20 = (uint)uVar2 << 0xd;
          if ((uVar20 & 0xf800000) == 0xf800000) {
            fVar27 = (float)(uVar20 | 0x70000000);
          }
          else if ((uVar20 & 0xf800000) == 0) {
            fVar27 = (float)(uVar20 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar27 = (float)((uVar20 & 0xfffe000) + 0x38000000);
          }
          local_fc[lVar10] = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar27);
          lVar10 = lVar10 + 1;
          local_138 = param_1;
        } while (lVar10 != 3);
      }
      else {
        do {
          local_fc[lVar10] =
               *(float *)(*(longlong *)(param_2 + 0x58 + lVar10 * 8) + (longlong)iVar16 * 4);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 3);
      }
      fVar26 = local_fc[2];
      fVar25 = local_fc[1];
      fVar24 = local_fc[0];
      fVar33 = local_fc[2] - fVar11;
      fVar36 = local_fc[1] - fVar13;
      fVar34 = local_fc[0] - fVar28;
      fVar27 = SQRT(fVar33 * fVar33 + fVar34 * fVar34 + fVar36 * fVar36);
      if (DAT_14c76298c < fVar27) {
        fVar28 = 1.0 / fVar27;
        *(uint *)(param_5 + 3) = uVar18 + 1;
        if (*(uint *)((longlong)param_5 + 0x1c) < uVar18 + 1) {
          FUN_1447808da(local_130,uVar12);
        }
        *(int *)(param_5[2] + local_128 * 4) = *piVar4;
        iVar16 = (int)param_5[5];
        *(uint *)(param_5 + 5) = iVar16 + 1U;
        if (*(uint *)((longlong)param_5 + 0x2c) < iVar16 + 1U) {
          FUN_1449e2712(param_5 + 4,iVar16);
        }
        lVar10 = param_5[4];
        lVar21 = (longlong)iVar16 * 0x10;
        *(float *)(lVar10 + lVar21) = fVar34 * fVar28;
        *(float *)(lVar10 + 4 + lVar21) = fVar36 * fVar28;
        *(float *)(lVar10 + 8 + lVar21) = fVar33 * fVar28;
        *(undefined4 *)(lVar10 + 0xc + lVar21) = 0;
        iVar16 = (int)param_5[7];
        *(uint *)(param_5 + 7) = iVar16 + 1U;
        if (*(uint *)((longlong)param_5 + 0x3c) < iVar16 + 1U) {
          FUN_1447808da(param_5 + 6,iVar16);
          uVar12 = local_140;
        }
        *(int *)(param_5[6] + (longlong)iVar16 * 4) = param_4;
        uVar7 = (ulonglong)*(uint *)(param_3 + 1);
        fVar33 = fVar33 * fVar28;
        fVar34 = fVar34 * fVar28;
        fVar36 = fVar36 * fVar28;
        goto LAB_14183730a;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar7);
    uVar14 = (ulonglong)uVar17;
    fVar27 = 0.0;
  }
LAB_14183730a:
  fVar28 = 0.0;
  iVar16 = (int)uVar14;
  if (iVar16 + 1 < (int)uVar7) {
    local_118 = param_5 + 4;
    local_120 = param_5 + 6;
    uVar6 = (uVar14 & 0xffffffff) + 1;
    uVar5 = uVar14;
    do {
      uVar23 = uVar6;
      lVar10 = *param_3;
      lVar21 = (longlong)*(int *)(lVar10 + uVar23 * 4);
      if (*(char *)(param_2 + 0x51) == '\0') {
        lVar15 = 0;
        do {
          uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x58 + lVar15 * 8) + lVar21 * 2);
          uVar18 = (uint)uVar2 << 0xd;
          if ((uVar18 & 0xf800000) == 0xf800000) {
            fVar13 = (float)(uVar18 | 0x70000000);
          }
          else if ((uVar18 & 0xf800000) == 0) {
            fVar13 = (float)(uVar18 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar13 = (float)((uVar18 & 0xfffe000) + 0x38000000);
          }
          local_fc[lVar15] = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar13);
          lVar15 = lVar15 + 1;
          uVar12 = local_140;
          local_138 = param_1;
        } while (lVar15 != 3);
      }
      else {
        lVar15 = 0;
        do {
          local_fc[lVar15] = *(float *)(*(longlong *)(param_2 + 0x58 + lVar15 * 8) + lVar21 * 4);
          lVar15 = lVar15 + 1;
        } while (lVar15 != 3);
      }
      fVar11 = local_fc[2];
      fVar13 = local_fc[0];
      fVar30 = local_fc[2] - fVar26;
      local_144 = local_fc[1];
      fVar31 = local_fc[1] - fVar25;
      fVar32 = local_fc[0] - fVar24;
      fVar29 = SQRT(fVar30 * fVar30 + fVar32 * fVar32 + fVar31 * fVar31);
      if ((DAT_14c76298c < fVar29) || ((int)uVar5 == (int)uVar7 + -2)) {
        fVar25 = DAT_14c76298c;
        if (DAT_14c76298c <= fVar29) {
          fVar25 = fVar29;
        }
        fVar25 = 1.0 / fVar25;
        fVar33 = fVar33 + fVar30 * fVar25;
        fVar36 = fVar36 + fVar31 * fVar25;
        fVar34 = fVar34 + fVar32 * fVar25;
        fVar24 = fVar33 * fVar33 + fVar34 * fVar34 + fVar36 * fVar36;
        if (((fVar24 != 1.0) || (fVar26 = fVar33, fVar35 = fVar34, fVar37 = fVar36, NAN(fVar24))) &&
           (fVar26 = DAT_14c846338, fVar35 = (float)DAT_14c846330, fVar37 = DAT_14c846330._4_4_,
           1e-08 <= fVar24)) {
          fVar24 = 1.0 / SQRT(fVar24);
          fVar26 = fVar33 * fVar24;
          fVar35 = fVar34 * fVar24;
          fVar37 = fVar36 * fVar24;
        }
        fVar24 = *(float *)(param_1 + 0x124);
        if (0.99 <= fVar24) {
          fVar24 = 0.99;
        }
        iVar16 = (int)param_5[3];
        *(uint *)(param_5 + 3) = iVar16 + 1U;
        if (*(uint *)((longlong)param_5 + 0x1c) < iVar16 + 1U) {
          local_14c = fVar27;
          local_148 = fVar28;
          local_138 = param_1;
          FUN_1447808da(local_130,iVar16);
          uVar12 = local_140;
          param_1 = local_138;
          fVar28 = local_148;
          fVar27 = local_14c;
        }
        *(undefined4 *)(param_5[2] + (longlong)iVar16 * 4) =
             *(undefined4 *)(lVar10 + (longlong)(int)uVar14 * 4);
        iVar16 = (int)param_5[5];
        *(uint *)(param_5 + 5) = iVar16 + 1U;
        if (*(uint *)((longlong)param_5 + 0x2c) < iVar16 + 1U) {
          local_14c = fVar27;
          local_148 = fVar28;
          FUN_1449e2712(local_118,iVar16);
          fVar28 = local_148;
          fVar27 = local_14c;
        }
        fVar24 = 1.0 - fVar24;
        fVar28 = fVar28 + fVar27;
        lVar10 = param_5[4];
        lVar21 = (longlong)iVar16 * 0x10;
        *(float *)(lVar10 + lVar21) = fVar35 * fVar24;
        *(float *)(lVar10 + 4 + lVar21) = fVar37 * fVar24;
        *(float *)(lVar10 + 8 + lVar21) = fVar26 * fVar24;
        *(float *)(lVar10 + 0xc + lVar21) = fVar28;
        iVar16 = (int)param_5[7];
        *(uint *)(param_5 + 7) = iVar16 + 1U;
        if (*(uint *)((longlong)param_5 + 0x3c) < iVar16 + 1U) {
          FUN_1447808da(local_120,iVar16);
        }
        *(int *)(param_5[6] + (longlong)iVar16 * 4) = param_4;
        *(float *)(param_5 + 0x15) = *(float *)(param_5 + 0x15) + fVar29;
        uVar7 = (ulonglong)*(uint *)(param_3 + 1);
        uVar14 = uVar23 & 0xffffffff;
        fVar26 = fVar11;
        fVar27 = fVar29;
        fVar24 = fVar13;
        fVar33 = fVar30 * fVar25;
        fVar34 = fVar32 * fVar25;
        fVar36 = fVar31 * fVar25;
        fVar25 = local_144;
      }
      iVar16 = (int)uVar14;
      uVar6 = uVar23 + 1;
      uVar5 = uVar23;
    } while ((int)(uVar23 + 1) < (int)uVar7);
  }
  iVar9 = (int)param_5[3];
  if (0.0 < fVar27) {
    lVar10 = *param_3;
    *(uint *)(param_5 + 3) = iVar9 + 1U;
    if (*(uint *)((longlong)param_5 + 0x1c) < iVar9 + 1U) {
      FUN_1447808da(local_130);
      uVar12 = local_140;
    }
    fVar28 = fVar28 + fVar27;
    *(undefined4 *)(param_5[2] + (longlong)iVar9 * 4) =
         *(undefined4 *)(lVar10 + (longlong)iVar16 * 4);
    iVar16 = (int)param_5[5];
    *(uint *)(param_5 + 5) = iVar16 + 1U;
    if (*(uint *)((longlong)param_5 + 0x2c) < iVar16 + 1U) {
      FUN_1449e2712(param_5 + 4,iVar16);
    }
    lVar10 = param_5[4];
    lVar21 = (longlong)iVar16 * 0x10;
    *(float *)(lVar10 + lVar21) = fVar34;
    *(float *)(lVar10 + 4 + lVar21) = fVar36;
    *(float *)(lVar10 + 8 + lVar21) = fVar33;
    *(float *)(lVar10 + 0xc + lVar21) = fVar28;
    iVar16 = (int)param_5[7];
    *(uint *)(param_5 + 7) = iVar16 + 1U;
    if (*(uint *)((longlong)param_5 + 0x3c) < iVar16 + 1U) {
      FUN_1447808da(param_5 + 6,iVar16);
    }
    *(int *)(param_5[6] + (longlong)iVar16 * 4) = param_4;
    iVar9 = (int)param_5[3];
  }
  fVar13 = (float)(iVar9 - 1);
  iVar19 = (int)uVar12;
  iVar16 = (int)fVar13 - iVar19;
  if (iVar16 != 0 && iVar19 <= (int)fVar13) {
    plVar8 = param_5 + 8;
    if ((longlong *)param_5[0x13] != (longlong *)0x0) {
      plVar8 = (longlong *)param_5[0x13];
    }
    pdVar22 = (double *)(plVar8 + (longlong)param_4 * 0xb);
    iVar3 = *(int *)*param_3;
    if (*(char *)(param_2 + 0x51) == '\0') {
      lVar10 = 0;
      do {
        uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x58 + lVar10 * 8) + (longlong)iVar3 * 2);
        uVar18 = (uint)uVar2 << 0xd;
        if ((uVar18 & 0xf800000) == 0xf800000) {
          fVar11 = (float)(uVar18 | 0x70000000);
        }
        else if ((uVar18 & 0xf800000) == 0) {
          fVar11 = (float)(uVar18 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar11 = (float)((uVar18 & 0xfffe000) + 0x38000000);
        }
        local_fc[lVar10] = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
    }
    else {
      lVar10 = 0;
      do {
        local_fc[lVar10] =
             *(float *)(*(longlong *)(param_2 + 0x58 + lVar10 * 8) + (longlong)iVar3 * 4);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
    }
    *pdVar22 = (double)local_fc[0];
    pdVar22[1] = (double)local_fc[1];
    pdVar22[2] = (double)local_fc[2];
    lVar10 = (longlong)*(int *)(*param_3 + (longlong)((int)param_3[1] + -1) * 4);
    if (*(char *)(param_2 + 0x51) == '\0') {
      lVar21 = 0;
      do {
        uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x58 + lVar21 * 8) + lVar10 * 2);
        uVar18 = (uint)uVar2 << 0xd;
        if ((uVar18 & 0xf800000) == 0xf800000) {
          fVar11 = (float)(uVar18 | 0x70000000);
        }
        else if ((uVar18 & 0xf800000) == 0) {
          fVar11 = (float)(uVar18 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar11 = (float)((uVar18 & 0xfffe000) + 0x38000000);
        }
        local_fc[lVar21] = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar11);
        lVar21 = lVar21 + 1;
      } while (lVar21 != 3);
    }
    else {
      lVar21 = 0;
      do {
        local_fc[lVar21] = *(float *)(*(longlong *)(param_2 + 0x58 + lVar21 * 8) + lVar10 * 4);
        lVar21 = lVar21 + 1;
      } while (lVar21 != 3);
    }
    pdVar22[3] = (double)local_fc[0];
    pdVar22[4] = (double)local_fc[1];
    pdVar22[5] = (double)local_fc[2];
    *(int *)(pdVar22 + 6) = (int)param_5[1];
    *(int *)((longlong)pdVar22 + 0x34) = iVar16;
    if (iVar16 != 1) {
      lVar10 = param_5[4];
      lVar21 = local_128 * 0x10;
      fVar11 = *(float *)(lVar10 + 0x10 + lVar21);
      fVar27 = *(float *)(lVar10 + 4 + lVar21);
      fVar24 = *(float *)(lVar10 + 0x14 + lVar21);
      fVar25 = *(float *)(lVar10 + 8 + lVar21);
      fVar26 = *(float *)(lVar10 + 0x18 + lVar21);
      fVar33 = fVar25 * fVar26 + *(float *)(lVar10 + lVar21) * fVar11 + fVar27 * fVar24;
      fVar33 = fVar33 + fVar33;
      *(float *)(lVar10 + lVar21) = fVar33 * *(float *)(lVar10 + lVar21) - fVar11;
      *(float *)(lVar10 + 4 + lVar21) = fVar27 * fVar33 - fVar24;
      *(float *)(lVar10 + 8 + lVar21) = fVar25 * fVar33 - fVar26;
      lVar10 = param_5[4];
      lVar21 = (longlong)(int)fVar13 * 0x10;
      lVar15 = (longlong)iVar9 * 0x10;
      fVar11 = *(float *)(lVar10 + 4 + lVar21);
      fVar27 = *(float *)(lVar10 + -0x20 + lVar15);
      fVar24 = *(float *)(lVar10 + -0x1c + lVar15);
      fVar25 = *(float *)(lVar10 + 8 + lVar21);
      fVar26 = *(float *)(lVar10 + -0x18 + lVar15);
      fVar33 = fVar25 * fVar26 + *(float *)(lVar10 + lVar21) * fVar27 + fVar11 * fVar24;
      fVar33 = fVar33 + fVar33;
      *(float *)(lVar10 + lVar21) = fVar33 * *(float *)(lVar10 + lVar21) - fVar27;
      *(float *)(lVar10 + 4 + lVar21) = fVar11 * fVar33 - fVar24;
      *(float *)(lVar10 + 8 + lVar21) = fVar25 * fVar33 - fVar26;
    }
    if (iVar19 < (int)fVar13) {
      uVar12 = uVar12 & 0xffffffff;
      do {
        iVar9 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar9 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar9 + 1U) {
          local_144 = fVar13;
          FUN_1447808da(param_5,iVar9);
          fVar13 = local_144;
        }
        *(int *)(*param_5 + (longlong)iVar9 * 4) = (int)uVar12;
        fVar11 = (float)((int)uVar12 + 1);
        uVar12 = (ulonglong)(uint)fVar11;
      } while (fVar13 != fVar11);
    }
    uVar18 = *(uint *)(param_1 + 300);
    if ((uVar18 & 8) == 0) {
      local_158 = &local_104;
      local_160 = local_fc;
      local_168 = &local_100;
      local_188 = iVar19;
      local_180 = fVar13;
      local_178 = iVar16;
      local_170 = fVar28;
      FUN_1449d50c8(param_1 + 0x130,local_130,param_5 + 4,param_2 + 0x70);
    }
    else {
      local_fc[0] = 0.0;
      local_100 = 0x3f800000;
      local_104 = 0x3f800000;
    }
    iVar9 = (int)local_140;
    if ((uVar18 & 0x10) == 0) {
      local_158 = &local_110;
      local_160 = &local_108;
      local_168 = &local_10c;
      local_188 = iVar9;
      local_180 = fVar13;
      local_178 = iVar16;
      local_170 = fVar28;
      FUN_1449d50c8(param_1 + 0x158,local_130,param_5 + 4,param_2 + 0x70);
    }
    else {
      local_108 = 0.0;
      local_10c = 0x3f800000;
      local_110 = local_10c;
    }
    *(undefined4 *)(pdVar22 + 7) = local_100;
    *(float *)((longlong)pdVar22 + 0x3c) = local_fc[0];
    *(undefined4 *)(pdVar22 + 8) = local_104;
    *(undefined4 *)((longlong)pdVar22 + 0x44) = local_10c;
    *(float *)(pdVar22 + 9) = local_108;
    *(undefined4 *)((longlong)pdVar22 + 0x4c) = local_110;
    *(int *)(pdVar22 + 10) = iVar9;
    *(float *)((longlong)pdVar22 + 0x54) = fVar13;
  }
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141837fac FUN_141837fac body=385 status=ok
// SIG undefined FUN_141837fac(void)

void FUN_141837fac(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  DWORD DVar3;
  uint uVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    *(int *)((longlong)param_1 + 0xc) = param_2;
    if (param_2 != 0) {
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_146815189(param_2,4);
      }
      iVar8 = *(int *)(param_1 + 1);
      local_58 = (void *)*param_1;
      dwTlsIndex = DAT_14c7585d0;
      if (DAT_14c7585d0 == 0xffffffff) {
        dwTlsIndex = TlsAlloc();
        DVar5 = 0xffffffff;
        LOCK();
        bVar10 = DAT_14c7585d0 != 0xffffffff;
        DVar3 = dwTlsIndex;
        if (bVar10) {
          DVar5 = DAT_14c7585d0;
          DVar3 = DAT_14c7585d0;
        }
        DAT_14c7585d0 = DVar3;
        UNLOCK();
        if (bVar10) {
          TlsFree(dwTlsIndex);
          dwTlsIndex = DVar5;
        }
      }
      lpTlsValue = TlsGetValue(dwTlsIndex);
      if (lpTlsValue == (LPVOID)0x0) {
        lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
        FUN_140fddf04(lpTlsValue);
        TlsSetValue(dwTlsIndex,lpTlsValue);
      }
      puVar1 = (ulonglong *)((longlong)lpTlsValue + 0x10);
      uVar4 = param_2 * 4;
      uVar7 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
      uVar6 = (uint)(uVar4 >= 0x10) * 8;
      lVar2 = (ulonglong)uVar6 + 7;
      _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar2 & uVar7);
      uVar9 = (longlong)_Dst + (longlong)(int)uVar4;
      if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar9) {
        FUN_140023dd8(puVar1,uVar6 + 8 + uVar4);
        _Dst = (void *)(lVar2 + *puVar1 & uVar7);
        uVar9 = (longlong)(int)uVar4 + (longlong)_Dst;
      }
      *puVar1 = uVar9;
      *param_1 = _Dst;
      if (iVar8 != 0 && local_58 != (void *)0x0) {
        if (param_2 < iVar8) {
          iVar8 = param_2;
        }
        memcpy(_Dst,local_58,(longlong)iVar8 << 2);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141838130 FUN_141838130 body=441 status=ok
// SIG undefined FUN_141838130(void)

void FUN_141838130(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  DWORD DVar3;
  uint uVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = *(uint *)(param_1 + 1);
  if ((int)uVar4 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar4) {
      uVar6 = uVar4;
    }
  }
  else {
    uVar6 = uVar4 + (int)((ulonglong)((longlong)(int)uVar4 * 3) >> 3) + 0x10;
  }
  uVar7 = 0x7fffffff;
  if ((int)uVar4 <= (int)uVar6) {
    uVar7 = uVar6;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(uVar7,4);
    }
    local_58 = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar5 = 0xffffffff;
      LOCK();
      bVar10 = DAT_14c7585d0 != 0xffffffff;
      DVar3 = dwTlsIndex;
      if (bVar10) {
        DVar5 = DAT_14c7585d0;
        DVar3 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar3;
      UNLOCK();
      if (bVar10) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar5;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar2 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    uVar4 = uVar7 * 4;
    uVar8 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar6 = (uint)(uVar4 >= 0x10) * 8;
    lVar1 = (ulonglong)uVar6 + 7;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar1 & uVar8);
    uVar9 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar9) {
      FUN_140023dd8(puVar2,uVar6 + 8 + uVar4);
      _Dst = (void *)(lVar1 + *puVar2 & uVar8);
      uVar9 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar9;
    *param_1 = _Dst;
    if (param_2 != 0 && local_58 != (void *)0x0) {
      if ((int)uVar7 < (int)param_2) {
        param_2 = uVar7;
      }
      memcpy(_Dst,local_58,(longlong)(int)param_2 << 2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


