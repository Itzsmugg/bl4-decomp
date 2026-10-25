// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1490d6396 FUN_1490d6396 body=98 status=ok
// SIG undefined FUN_1490d6396(void)

void FUN_1490d6396(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_1490d63f8(param_1);
  }
  *(undefined8 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (0x20 < *(uint *)(param_1 + 0x84)) {
    *(undefined4 *)(param_1 + 0x84) = 0x20;
    FUN_14008f53c(param_1 + 0x70,0);
    return;
  }
  return;
}



// FUNCTION 1490d63f8 FUN_1490d63f8 body=79 status=ok
// SIG undefined FUN_1490d63f8(void)

void FUN_1490d63f8(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x60),
              (longlong)*(int *)((longlong)param_1 + 0x68) * 0xc);
      FUN_1446efa72((longlong)param_1 + 0x60,0,0,0xc);
      return;
    }
  }
  return;
}



// FUNCTION 1490d6448 FUN_1490d6448 body=140 status=ok
// SIG undefined FUN_1490d6448(void)

void FUN_1490d6448(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,0xc);
  return;
}



// FUNCTION 1490d64d4 FUN_1490d64d4 body=260 status=ok
// SIG undefined FUN_1490d64d4(void)

undefined4 * FUN_1490d64d4(longlong param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  int *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1490d65da(param_1,local_48);
  iVar3 = *param_3;
  *local_40 = iVar3;
  local_40[1] = -1;
  local_4c = local_48[0];
  cVar2 = FUN_1490d66e2(param_1,iVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    cVar2 = FUN_1490d687c(param_1,*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x8c));
    if (cVar2 == '\0') {
      uVar4 = (longlong)*(int *)(param_1 + 0xa8) - 1U & (longlong)iVar3;
      iVar3 = (int)uVar4;
      local_40[2] = iVar3;
      lVar5 = *(longlong *)(param_1 + 0xa0);
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        lVar5 = param_1 + 0x90;
      }
      local_40[1] = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0xa8) - 1U & uVar4) * 4);
      lVar5 = *(longlong *)(param_1 + 0xa0);
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        lVar5 = param_1 + 0x90;
      }
      *(undefined4 *)(lVar5 + ((longlong)iVar3 & (longlong)*(int *)(param_1 + 0xa8) - 1U) * 4) =
           uVar1;
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d65da FUN_1490d65da body=264 status=ok
// SIG undefined FUN_1490d65da(void)

int * FUN_1490d65da(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    iVar6 = *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x68) = iVar6 + 1;
    if (*(int *)(param_1 + 0x6c) == iVar6) {
      FUN_1490d6770(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_14489e6aa(param_1 + 0x70,1);
    lVar5 = *(longlong *)(param_1 + 0x78);
    if (*(longlong *)(param_1 + 0x78) == 0) {
      lVar5 = param_1 + 0x70;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x88);
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(lVar5 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 0x88) = iVar4;
    iVar3 = *(int *)(param_1 + 0x8c) + -1;
    *(int *)(param_1 + 0x8c) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar4 * 0xc) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 0x70;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x78);
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar5 + lVar7 * 0xc;
  return param_2;
}



// FUNCTION 1490d66e2 FUN_1490d66e2 body=141 status=ok
// SIG undefined FUN_1490d66e2(void)

undefined8 FUN_1490d66e2(longlong param_1,uint param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x8c) != 1) &&
     (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x8c))) {
    lVar1 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xa0);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        lVar1 = param_1;
      }
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0xc) == *param_3) {
          FUN_1490d67f0(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)(lVar1 + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1490d6770 FUN_1490d6770 body=127 status=ok
// SIG undefined FUN_1490d6770(void)

void FUN_1490d6770(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x6c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x6c) = iVar5;
    FUN_1490d6448(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1490d67f0 FUN_1490d67f0 body=139 status=ok
// SIG undefined FUN_1490d67f0(void)

void FUN_1490d67f0(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0x88) * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0xc);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x8c) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x88);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0x88) = param_2;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  lVar5 = param_1 + 0x70;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x78);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1490d687c FUN_1490d687c body=99 status=ok
// SIG undefined FUN_1490d687c(void)

undefined8 FUN_1490d687c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 2) {
    iVar4 = 4;
  }
  if (param_2 < 4) {
    iVar4 = 4;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0xa8))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0xa8) = iVar4;
    FUN_1490d68e0(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1490d68e0 FUN_1490d68e0 body=467 status=ok
// SIG undefined FUN_1490d68e0(void)

void FUN_1490d68e0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1446efa72(param_1 + 0xa0,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 0xa8);
  uVar3 = local_58;
  if (uVar2 != 0) {
    lVar1 = param_1 + 0x90;
    uVar7 = 0;
    FUN_144a8ab24(lVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        lVar6 = *(longlong *)(param_1 + 0xa0);
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          lVar6 = lVar1;
        }
        *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xa8) + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = param_1 + 0x70;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar6 = *(longlong *)(local_70 + 0x60);
        if (*(longlong *)(local_70 + 0x60) == 0) {
          lVar6 = local_70;
        }
        lVar5 = (longlong)iVar4;
        uVar10 = (longlong)*(int *)(param_1 + 0xa8) - 1U & (longlong)*(int *)(lVar6 + lVar5 * 0xc);
        iVar9 = (int)uVar10;
        *(int *)(lVar6 + 8 + lVar5 * 0xc) = iVar9;
        lVar8 = *(longlong *)(param_1 + 0xa0);
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar6 + 4 + lVar5 * 0xc) =
             *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0xa8) - 1U & uVar10) * 4);
        lVar6 = *(longlong *)(param_1 + 0xa0);
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          lVar6 = lVar1;
        }
        *(int *)(lVar6 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0xa8) - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490d6ab4 FUN_1490d6ab4 body=113 status=ok
// SIG undefined FUN_1490d6ab4(void)

longlong * FUN_1490d6ab4(longlong *param_1,longlong *param_2,char *param_3)

{
  wchar_t *pwVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  pwVar1 = L"false";
  if (*param_3 != '\0') {
    pwVar1 = L"true";
  }
  FUN_140056680(param_1 + 2,pwVar1);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1490d6b26 FUN_1490d6b26 body=36 status=ok
// SIG undefined FUN_1490d6b26(void)

void FUN_1490d6b26(void)

{
  FUN_14158de80();
  FUN_14158de80();
  FUN_1447a1747(0,0);
  FUN_1447a1747(0,0);
  return;
}



// FUNCTION 1490d6b4a FUN_1490d6b4a body=61 status=ok
// SIG undefined FUN_1490d6b4a(void)

void FUN_1490d6b4a(longlong *param_1)

{
  FUN_1412d55ee(0);
  if (*param_1 != 0) {
    *param_1 = 0;
    FUN_1490d7380(param_1);
  }
  FUN_1412d5698(0);
  FUN_1490d7380(param_1,*param_1);
  return;
}



// FUNCTION 1490d6b88 FUN_1490d6b88 body=73 status=ok
// SIG undefined FUN_1490d6b88(void)

longlong * FUN_1490d6b88(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  lVar2 = FUN_14494321d(2);
  *(undefined1 *)(lVar2 + 1) = 0;
  FUN_1412d55ee(1);
  if (lVar2 != lVar1) {
    *(undefined1 *)(lVar2 + 1) = 1;
  }
  FUN_1412d5698(1);
  *param_1 = lVar2;
  return param_1;
}



// FUNCTION 1490d6bd2 FUN_1490d6bd2 body=157 status=ok
// SIG undefined FUN_1490d6bd2(void)

undefined2 ** FUN_1490d6bd2(undefined2 **param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = (undefined2 *)0x0;
  FUN_1412d55ee(0);
  puVar2 = (undefined2 *)FUN_14494321d(2);
  *puVar2 = 0;
  FUN_1458b0c5c(puVar2);
  local_20 = puVar2;
  if (&local_20 != param_1) {
    puVar1 = *param_1;
    *param_1 = puVar2;
    local_20 = (undefined2 *)0x0;
    FUN_1490d7380(param_1,puVar1);
  }
  FUN_1490d7380(&local_20,local_20);
  FUN_1412d5698(0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d6c70 FUN_1490d6c70 body=64 status=ok
// SIG undefined FUN_1490d6c70(void)

longlong * FUN_1490d6c70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = 0;
  FUN_1412d55ee(0);
  lVar2 = FUN_14494321d(1);
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_1412d5698(0);
  return param_1;
}



// FUNCTION 1490d6cb0 FUN_1490d6cb0 body=67 status=ok
// SIG undefined FUN_1490d6cb0(void)

longlong * FUN_1490d6cb0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_1412d55ee(0);
  if (param_1 != param_2) {
    lVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = 0;
    if (lVar1 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1412d5698(0);
  return param_1;
}



// FUNCTION 1490d6cf4 FUN_1490d6cf4 body=67 status=ok
// SIG undefined FUN_1490d6cf4(void)

void FUN_1490d6cf4(longlong *param_1)

{
  FUN_1412d55ee(0);
  if (*param_1 != 0) {
    *param_1 = 0;
    FUN_1400020a8();
  }
  FUN_1412d5698(0);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490d6d37 FUN_1490d6d37 body=3 status=ok
// SIG undefined FUN_1490d6d37(void)

undefined8 FUN_1490d6d37(void)

{
  return 0;
}



// FUNCTION 1490d6d3a FUN_1490d6d3a body=171 status=ok
// SIG undefined FUN_1490d6d3a(void)

longlong FUN_1490d6d3a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x28) & 4) == 0) {
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) goto LAB_1490d6d60;
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_14021219d(param_1,local_38);
    local_40 = 0;
    FUN_1490d6cb0(param_2,&local_40);
    FUN_1490d6cf4(&local_40);
  }
  else {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_14021219d(param_1,local_38);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_1490d6d60:
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d6de6 FUN_1490d6de6 body=108 status=ok
// SIG undefined FUN_1490d6de6(void)

undefined * FUN_1490d6de6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbffff8) {
    FUN_144b3d300(&DAT_14cbffff8);
    if (DAT_14cbffff8 == -1) {
      FUN_1490d6c70(&DAT_14cbffff0);
      atexit((_func_5014 *)&LAB_144465143);
      _Init_thread_footer(&DAT_14cbffff8);
    }
  }
  return &DAT_14cbffff0;
}



// FUNCTION 1490d6e52 FUN_1490d6e52 body=25 status=ok
// SIG undefined FUN_1490d6e52(void)

undefined8 FUN_1490d6e52(undefined8 param_1,undefined8 param_2)

{
  FUN_1490d6c70(param_2);
  return param_2;
}



// FUNCTION 1490d6e6c FUN_1490d6e6c body=1 status=ok
// SIG undefined FUN_1490d6e6c(void)

void FUN_1490d6e6c(void)

{
  return;
}



// FUNCTION 1490d6e6e FUN_1490d6e6e body=1 status=ok
// SIG undefined FUN_1490d6e6e(void)

void FUN_1490d6e6e(void)

{
  return;
}



// FUNCTION 1490d6e70 FUN_1490d6e70 body=67 status=ok
// SIG undefined FUN_1490d6e70(void)

void FUN_1490d6e70(longlong *param_1)

{
  FUN_1412d55ee(0);
  if (*param_1 != 0) {
    *param_1 = 0;
    FUN_1400020a8();
  }
  FUN_1412d5698(0);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490d6eb4 FUN_1490d6eb4 body=67 status=ok
// SIG undefined FUN_1490d6eb4(void)

void FUN_1490d6eb4(longlong *param_1)

{
  FUN_1412d55ee(0);
  if (*param_1 != 0) {
    *param_1 = 0;
    FUN_1400020a8();
  }
  FUN_1412d5698(0);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490d6ef8 FUN_1490d6ef8 body=67 status=ok
// SIG undefined FUN_1490d6ef8(void)

void FUN_1490d6ef8(longlong *param_1)

{
  FUN_1412d55ee(0);
  if (*param_1 != 0) {
    *param_1 = 0;
    FUN_1400020a8();
  }
  FUN_1412d5698(0);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490d6f3c FUN_1490d6f3c body=62 status=ok
// SIG undefined FUN_1490d6f3c(void)

undefined8 * FUN_1490d6f3c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = FUsdListener::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490d6f7a FUN_1490d6f7a body=25 status=ok
// SIG undefined FUN_1490d6f7a(void)

void FUN_1490d6f7a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3ff0000000000000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3ff0000000000000;
  return;
}



// FUNCTION 1490d6f94 FUN_1490d6f94 body=25 status=ok
// SIG undefined FUN_1490d6f94(void)

void FUN_1490d6f94(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3ff0000000000000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3ff0000000000000;
  return;
}



// FUNCTION 1490d6fae FUN_1490d6fae body=1 status=ok
// SIG undefined FUN_1490d6fae(void)

void FUN_1490d6fae(void)

{
  return;
}



// FUNCTION 1490d6fb0 FUN_1490d6fb0 body=3 status=ok
// SIG undefined FUN_1490d6fb0(void)

undefined8 FUN_1490d6fb0(void)

{
  return 0;
}



// FUNCTION 1490d6fb4 FUN_1490d6fb4 body=3 status=ok
// SIG undefined FUN_1490d6fb4(void)

undefined8 FUN_1490d6fb4(void)

{
  return 0;
}



// FUNCTION 1490d6fb8 FUN_1490d6fb8 body=1 status=ok
// SIG undefined FUN_1490d6fb8(void)

void FUN_1490d6fb8(void)

{
  return;
}



// FUNCTION 1490d6fba FUN_1490d6fba body=3 status=ok
// SIG undefined FUN_1490d6fba(void)

undefined8 FUN_1490d6fba(void)

{
  return 0;
}



// FUNCTION 1490d6fbe FUN_1490d6fbe body=3 status=ok
// SIG undefined FUN_1490d6fbe(void)

undefined8 FUN_1490d6fbe(void)

{
  return 0;
}



// FUNCTION 1490d6fc2 FUN_1490d6fc2 body=1 status=ok
// SIG undefined FUN_1490d6fc2(void)

void FUN_1490d6fc2(void)

{
  return;
}



// FUNCTION 1490d6fc4 FUN_1490d6fc4 body=1 status=ok
// SIG undefined FUN_1490d6fc4(void)

void FUN_1490d6fc4(void)

{
  return;
}



// FUNCTION 1490d6fc6 FUN_1490d6fc6 body=39 status=ok
// SIG undefined FUN_1490d6fc6(void)

undefined8 FUN_1490d6fc6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      uVar3 = *(undefined8 *)(param_3 + lVar6);
      uVar4 = ((undefined8 *)(param_3 + lVar6))[1];
      puVar1 = (undefined8 *)(param_3 + 0x10 + lVar6);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x10 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      *(undefined8 *)(param_2 + lVar6) = uVar3;
      ((undefined8 *)(param_2 + lVar6))[1] = uVar4;
      lVar6 = lVar6 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1490d6fee FUN_1490d6fee body=11 status=ok
// SIG undefined FUN_1490d6fee(void)

undefined8 FUN_1490d6fee(void)

{
  undefined1 *in_stack_00000028;
  
  *in_stack_00000028 = 0;
  return 0;
}



// FUNCTION 1490d6ffa FUN_1490d6ffa body=3 status=ok
// SIG undefined FUN_1490d6ffa(void)

undefined8 FUN_1490d6ffa(void)

{
  return 0;
}



// FUNCTION 1490d6ffe FUN_1490d6ffe body=3 status=ok
// SIG undefined FUN_1490d6ffe(void)

undefined8 FUN_1490d6ffe(void)

{
  return 0;
}



// FUNCTION 1490d7002 FUN_1490d7002 body=3 status=ok
// SIG undefined FUN_1490d7002(void)

undefined8 FUN_1490d7002(void)

{
  return 0;
}



// FUNCTION 1490d7006 FUN_1490d7006 body=8 status=ok
// SIG undefined FUN_1490d7006(void)

undefined * FUN_1490d7006(void)

{
  return &DAT_1490d70b6;
}



// FUNCTION 1490d700e FUN_1490d700e body=3 status=ok
// SIG undefined FUN_1490d700e(void)

undefined8 FUN_1490d700e(void)

{
  return 0;
}



// FUNCTION 1490d7012 FUN_1490d7012 body=3 status=ok
// SIG undefined FUN_1490d7012(void)

undefined8 FUN_1490d7012(void)

{
  return 0;
}



// FUNCTION 1490d7016 FUN_1490d7016 body=59 status=ok
// SIG undefined FUN_1490d7016(void)

undefined8 FUN_1490d7016(longlong *param_1)

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



// FUNCTION 1490d7052 FUN_1490d7052 body=5 status=ok
// SIG undefined FUN_1490d7052(void)

void FUN_1490d7052(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x20) = 0;
  return;
}



// FUNCTION 1490d7058 FUN_1490d7058 body=4 status=ok
// SIG undefined FUN_1490d7058(void)

undefined1 FUN_1490d7058(undefined8 param_1,longlong param_2)

{
  return *(undefined1 *)(param_2 + 0x20);
}



// FUNCTION 1490d705c FUN_1490d705c body=11 status=ok
// SIG undefined FUN_1490d705c(void)

void FUN_1490d705c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1490d7068 FUN_1490d7068 body=3 status=ok
// SIG undefined FUN_1490d7068(void)

undefined8 FUN_1490d7068(void)

{
  return 0;
}



// FUNCTION 1490d706c FUN_1490d706c body=3 status=ok
// SIG undefined FUN_1490d706c(void)

undefined1 FUN_1490d706c(void)

{
  return 1;
}



// FUNCTION 1490d7070 FUN_1490d7070 body=3 status=ok
// SIG undefined FUN_1490d7070(void)

undefined8 FUN_1490d7070(void)

{
  return 0;
}



// FUNCTION 1490d7074 FUN_1490d7074 body=3 status=ok
// SIG undefined FUN_1490d7074(void)

undefined8 FUN_1490d7074(void)

{
  return 0;
}



// FUNCTION 1490d7078 FUN_1490d7078 body=1 status=ok
// SIG undefined FUN_1490d7078(void)

void FUN_1490d7078(void)

{
  return;
}



// FUNCTION 1490d707a FUN_1490d707a body=3 status=ok
// SIG undefined FUN_1490d707a(void)

undefined8 FUN_1490d707a(void)

{
  return 0;
}



// FUNCTION 1490d707e FUN_1490d707e body=3 status=ok
// SIG undefined FUN_1490d707e(void)

undefined8 FUN_1490d707e(void)

{
  return 0;
}



// FUNCTION 1490d7082 FUN_1490d7082 body=3 status=ok
// SIG undefined FUN_1490d7082(void)

undefined8 FUN_1490d7082(void)

{
  return 0;
}



// FUNCTION 1490d7086 FUN_1490d7086 body=3 status=ok
// SIG undefined FUN_1490d7086(void)

undefined8 FUN_1490d7086(void)

{
  return 0;
}



// FUNCTION 1490d708a FUN_1490d708a body=3 status=ok
// SIG undefined FUN_1490d708a(void)

undefined8 FUN_1490d708a(void)

{
  return 0;
}



// FUNCTION 1490d708e FUN_1490d708e body=3 status=ok
// SIG undefined FUN_1490d708e(void)

undefined8 FUN_1490d708e(void)

{
  return 0;
}



// FUNCTION 1490d7092 FUN_1490d7092 body=3 status=ok
// SIG undefined FUN_1490d7092(void)

undefined8 FUN_1490d7092(void)

{
  return 0;
}



// FUNCTION 1490d7096 FUN_1490d7096 body=1 status=ok
// SIG undefined FUN_1490d7096(void)

void FUN_1490d7096(void)

{
  return;
}



// FUNCTION 1490d7098 FUN_1490d7098 body=3 status=ok
// SIG undefined FUN_1490d7098(void)

undefined8 FUN_1490d7098(void)

{
  return 0;
}



// FUNCTION 1490d709c FUN_1490d709c body=3 status=ok
// SIG undefined FUN_1490d709c(void)

undefined8 FUN_1490d709c(void)

{
  return 0;
}



// FUNCTION 1490d70a0 FUN_1490d70a0 body=3 status=ok
// SIG undefined FUN_1490d70a0(void)

undefined8 FUN_1490d70a0(void)

{
  return 0;
}



// FUNCTION 1490d70a4 FUN_1490d70a4 body=3 status=ok
// SIG undefined FUN_1490d70a4(void)

undefined8 FUN_1490d70a4(void)

{
  return 0;
}



// FUNCTION 1490d70a8 FUN_1490d70a8 body=3 status=ok
// SIG undefined FUN_1490d70a8(void)

undefined8 FUN_1490d70a8(void)

{
  return 0;
}



// FUNCTION 1490d70ac FUN_1490d70ac body=3 status=ok
// SIG undefined FUN_1490d70ac(void)

undefined8 FUN_1490d70ac(void)

{
  return 0;
}



// FUNCTION 1490d70b0 FUN_1490d70b0 body=6 status=ok
// SIG undefined FUN_1490d70b0(void)

undefined8 FUN_1490d70b0(void)

{
  return 0x20;
}



// FUNCTION 1490d70b8 FUN_1490d70b8 body=43 status=ok
// SIG undefined FUN_1490d70b8(void)

void FUN_1490d70b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3ff0000000000000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0x3ff0000000000000;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0x3ff0000000000000;
  return;
}



// FUNCTION 1490d70e4 FUN_1490d70e4 body=43 status=ok
// SIG undefined FUN_1490d70e4(void)

void FUN_1490d70e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3ff0000000000000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0x3ff0000000000000;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0x3ff0000000000000;
  return;
}



// FUNCTION 1490d7110 FUN_1490d7110 body=1 status=ok
// SIG undefined FUN_1490d7110(void)

void FUN_1490d7110(void)

{
  return;
}



// FUNCTION 1490d7112 FUN_1490d7112 body=3 status=ok
// SIG undefined FUN_1490d7112(void)

undefined8 FUN_1490d7112(void)

{
  return 0;
}



// FUNCTION 1490d7116 FUN_1490d7116 body=3 status=ok
// SIG undefined FUN_1490d7116(void)

undefined8 FUN_1490d7116(void)

{
  return 0;
}



// FUNCTION 1490d711a FUN_1490d711a body=1 status=ok
// SIG undefined FUN_1490d711a(void)

void FUN_1490d711a(void)

{
  return;
}



// FUNCTION 1490d711c FUN_1490d711c body=3 status=ok
// SIG undefined FUN_1490d711c(void)

undefined8 FUN_1490d711c(void)

{
  return 0;
}



// FUNCTION 1490d7120 FUN_1490d7120 body=3 status=ok
// SIG undefined FUN_1490d7120(void)

undefined8 FUN_1490d7120(void)

{
  return 0;
}



// FUNCTION 1490d7124 FUN_1490d7124 body=1 status=ok
// SIG undefined FUN_1490d7124(void)

void FUN_1490d7124(void)

{
  return;
}



// FUNCTION 1490d7126 FUN_1490d7126 body=1 status=ok
// SIG undefined FUN_1490d7126(void)

void FUN_1490d7126(void)

{
  return;
}



// FUNCTION 1490d7128 FUN_1490d7128 body=39 status=ok
// SIG undefined FUN_1490d7128(void)

undefined8 FUN_1490d7128(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1490d7150 FUN_1490d7150 body=11 status=ok
// SIG undefined FUN_1490d7150(void)

undefined8 FUN_1490d7150(void)

{
  undefined1 *in_stack_00000028;
  
  *in_stack_00000028 = 0;
  return 0;
}



// FUNCTION 1490d715c FUN_1490d715c body=3 status=ok
// SIG undefined FUN_1490d715c(void)

undefined8 FUN_1490d715c(void)

{
  return 0;
}



// FUNCTION 1490d7160 FUN_1490d7160 body=3 status=ok
// SIG undefined FUN_1490d7160(void)

undefined8 FUN_1490d7160(void)

{
  return 0;
}



// FUNCTION 1490d7164 FUN_1490d7164 body=3 status=ok
// SIG undefined FUN_1490d7164(void)

undefined8 FUN_1490d7164(void)

{
  return 0;
}



// FUNCTION 1490d7168 FUN_1490d7168 body=8 status=ok
// SIG undefined FUN_1490d7168(void)

undefined * FUN_1490d7168(void)

{
  return &DAT_1490d7218;
}



// FUNCTION 1490d7170 FUN_1490d7170 body=3 status=ok
// SIG undefined FUN_1490d7170(void)

undefined8 FUN_1490d7170(void)

{
  return 0;
}



// FUNCTION 1490d7174 FUN_1490d7174 body=3 status=ok
// SIG undefined FUN_1490d7174(void)

undefined8 FUN_1490d7174(void)

{
  return 0;
}



// FUNCTION 1490d7178 FUN_1490d7178 body=59 status=ok
// SIG undefined FUN_1490d7178(void)

undefined8 FUN_1490d7178(longlong *param_1)

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



// FUNCTION 1490d71b4 FUN_1490d71b4 body=5 status=ok
// SIG undefined FUN_1490d71b4(void)

void FUN_1490d71b4(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x48) = 0;
  return;
}



// FUNCTION 1490d71ba FUN_1490d71ba body=4 status=ok
// SIG undefined FUN_1490d71ba(void)

undefined1 FUN_1490d71ba(undefined8 param_1,longlong param_2)

{
  return *(undefined1 *)(param_2 + 0x48);
}



// FUNCTION 1490d71be FUN_1490d71be body=11 status=ok
// SIG undefined FUN_1490d71be(void)

void FUN_1490d71be(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1490d71ca FUN_1490d71ca body=3 status=ok
// SIG undefined FUN_1490d71ca(void)

undefined8 FUN_1490d71ca(void)

{
  return 0;
}



// FUNCTION 1490d71ce FUN_1490d71ce body=3 status=ok
// SIG undefined FUN_1490d71ce(void)

undefined1 FUN_1490d71ce(void)

{
  return 1;
}



// FUNCTION 1490d71d2 FUN_1490d71d2 body=3 status=ok
// SIG undefined FUN_1490d71d2(void)

undefined8 FUN_1490d71d2(void)

{
  return 0;
}



// FUNCTION 1490d71d6 FUN_1490d71d6 body=3 status=ok
// SIG undefined FUN_1490d71d6(void)

undefined8 FUN_1490d71d6(void)

{
  return 0;
}



// FUNCTION 1490d71da FUN_1490d71da body=1 status=ok
// SIG undefined FUN_1490d71da(void)

void FUN_1490d71da(void)

{
  return;
}



// FUNCTION 1490d71dc FUN_1490d71dc body=3 status=ok
// SIG undefined FUN_1490d71dc(void)

undefined8 FUN_1490d71dc(void)

{
  return 0;
}



// FUNCTION 1490d71e0 FUN_1490d71e0 body=3 status=ok
// SIG undefined FUN_1490d71e0(void)

undefined8 FUN_1490d71e0(void)

{
  return 0;
}



// FUNCTION 1490d71e4 FUN_1490d71e4 body=3 status=ok
// SIG undefined FUN_1490d71e4(void)

undefined8 FUN_1490d71e4(void)

{
  return 0;
}



// FUNCTION 1490d71e8 FUN_1490d71e8 body=3 status=ok
// SIG undefined FUN_1490d71e8(void)

undefined8 FUN_1490d71e8(void)

{
  return 0;
}



// FUNCTION 1490d71ec FUN_1490d71ec body=3 status=ok
// SIG undefined FUN_1490d71ec(void)

undefined8 FUN_1490d71ec(void)

{
  return 0;
}



// FUNCTION 1490d71f0 FUN_1490d71f0 body=3 status=ok
// SIG undefined FUN_1490d71f0(void)

undefined8 FUN_1490d71f0(void)

{
  return 0;
}



// FUNCTION 1490d71f4 FUN_1490d71f4 body=3 status=ok
// SIG undefined FUN_1490d71f4(void)

undefined8 FUN_1490d71f4(void)

{
  return 0;
}



// FUNCTION 1490d71f8 FUN_1490d71f8 body=1 status=ok
// SIG undefined FUN_1490d71f8(void)

void FUN_1490d71f8(void)

{
  return;
}



// FUNCTION 1490d71fa FUN_1490d71fa body=3 status=ok
// SIG undefined FUN_1490d71fa(void)

undefined8 FUN_1490d71fa(void)

{
  return 0;
}



// FUNCTION 1490d71fe FUN_1490d71fe body=3 status=ok
// SIG undefined FUN_1490d71fe(void)

undefined8 FUN_1490d71fe(void)

{
  return 0;
}



// FUNCTION 1490d7202 FUN_1490d7202 body=3 status=ok
// SIG undefined FUN_1490d7202(void)

undefined8 FUN_1490d7202(void)

{
  return 0;
}



// FUNCTION 1490d7206 FUN_1490d7206 body=3 status=ok
// SIG undefined FUN_1490d7206(void)

undefined8 FUN_1490d7206(void)

{
  return 0;
}



// FUNCTION 1490d720a FUN_1490d720a body=3 status=ok
// SIG undefined FUN_1490d720a(void)

undefined8 FUN_1490d720a(void)

{
  return 0;
}



// FUNCTION 1490d720e FUN_1490d720e body=3 status=ok
// SIG undefined FUN_1490d720e(void)

undefined8 FUN_1490d720e(void)

{
  return 0;
}



// FUNCTION 1490d7212 FUN_1490d7212 body=6 status=ok
// SIG undefined FUN_1490d7212(void)

undefined8 FUN_1490d7212(void)

{
  return 0x20;
}



// FUNCTION 1490d721a FUN_1490d721a body=57 status=ok
// SIG undefined FUN_1490d721a(void)

undefined8 * FUN_1490d721a(undefined8 *param_1,int param_2)

{
  *param_1 = FActiveAllocatorsStack::vftable;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490d7254 FUN_1490d7254 body=31 status=ok
// SIG undefined FUN_1490d7254(void)

undefined8 FUN_1490d7254(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490d7274 FUN_1490d7274 body=3 status=ok
// SIG undefined FUN_1490d7274(void)

undefined8 FUN_1490d7274(void)

{
  return 0;
}



// FUNCTION 1490d7278 FUN_1490d7278 body=5 status=ok
// SIG undefined FUN_1490d7278(void)

undefined8 FUN_1490d7278(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 1490d727e FUN_1490d727e body=5 status=ok
// SIG undefined FUN_1490d727e(void)

undefined8 FUN_1490d727e(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 1490d7284 FUN_1490d7284 body=8 status=ok
// SIG undefined FUN_1490d7284(void)

bool FUN_1490d7284(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 0x18) == param_2;
}



// FUNCTION 1490d728c FUN_1490d728c body=3 status=ok
// SIG undefined FUN_1490d728c(void)

undefined1 FUN_1490d728c(void)

{
  return 1;
}



// FUNCTION 1490d7290 FUN_1490d7290 body=93 status=ok
// SIG undefined FUN_1490d7290(void)

void FUN_1490d7290(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FUnrealUSDWrapperModule>,class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1490d72ee FUN_1490d72ee body=123 status=ok
// SIG undefined FUN_1490d72ee(void)

void FUN_1490d72ee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 =
       TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FUnrealUSDWrapperModule>,class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490d736a FUN_1490d736a body=21 status=ok
// SIG undefined FUN_1490d736a(void)

undefined8 FUN_1490d736a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1490d7380 FUN_1490d7380 body=63 status=ok
// SIG undefined FUN_1490d7380(void)

void FUN_1490d7380(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1412d55ee(1);
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined1 *)(param_2 + 1) = 0;
    }
    FUN_1412d5698(1);
    FUN_1400020a8(param_2);
    return;
  }
  return;
}



// FUNCTION 1490d73c0 FUN_1490d73c0 body=96 status=ok
// SIG undefined FUN_1490d73c0(void)

void FUN_1490d73c0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1490d7438 FUN_1490d7438 body=224 status=ok
// SIG undefined FUN_1490d7438(void)

void FUN_1490d7438(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_149100e7c(&local_138,param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d751a FUN_1490d751a body=224 status=ok
// SIG undefined FUN_1490d751a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1490d751a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc00ec0) {
      FUN_144b3d300(&DAT_14cc00ec0);
      if (DAT_14cc00ec0 == -1) {
        _DAT_14cc00e40 = 0;
        _DAT_14cc00e48 = 0;
        _DAT_14cc00e20 = 0;
        uRam000000014cc00e28 = 0;
        _DAT_14cc00e4c = 0xffffffff00000080;
        _DAT_14cc00e54 = 0;
        DAT_14cc00e60 = 0;
        _DAT_14cc00e68 = 0;
        _DAT_14cc00e90 = 0;
        _DAT_14cc00e98 = 0;
        _DAT_14cc00e70 = 0;
        uRam000000014cc00e78 = 0;
        _DAT_14cc00e9c = 0xffffffff00000080;
        _DAT_14cc00ea4 = 0;
        DAT_14cc00eb0 = 0;
        _DAT_14cc00eb8 = 0;
        atexit(FUN_14446c3c6);
        _Init_thread_footer(&DAT_14cc00ec0);
      }
    }
    *(undefined **)(param_1 + 0x50) = &DAT_14cc00e20;
  }
  return;
}



// FUNCTION 1490d7606 FUN_1490d7606 body=36 status=ok
// SIG undefined FUN_1490d7606(void)

void FUN_1490d7606(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  return;
}



// FUNCTION 1490d764a FUN_1490d764a body=299 status=ok
// SIG undefined FUN_1490d764a(void)

void FUN_1490d764a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140958b58();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  if (iVar1 < 0x68) {
    return;
  }
  plVar2 = (longlong *)FUN_1490d77ae(DAT_14c951640);
  lVar4 = *(longlong *)(param_1 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(param_1);
    lVar4 = *(longlong *)(param_1 + 0x110);
    if (lVar4 == 0) goto LAB_1490d76f4;
  }
  lVar3 = FUN_141409182();
  if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) && ((*(byte *)(param_2 + 5) & 4) != 0)) &&
     (*(longlong *)(lVar4 + 0x58) != 0)) {
    FUN_1456c402e(plVar2);
  }
LAB_1490d76f4:
  (**(code **)(*plVar2 + 0xd8))(plVar2,param_2);
  lVar4 = *(longlong *)(param_1 + 0x110);
  if (lVar4 != 0) {
    lVar3 = FUN_141409182();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
      FUN_1456c402e(*(undefined8 *)(lVar4 + 0x58),plVar2);
    }
  }
  FUN_1456c45fc(param_2,param_1 + 0x3b8);
  if ((*(byte *)((longlong)param_2 + 0x2b) & 2) == 0) {
    return;
  }
  FUN_1456c45fc(param_2,param_1 + 0x3c8);
  return;
}



// FUNCTION 1490d7776 FUN_1490d7776 body=56 status=ok
// SIG undefined FUN_1490d7776(void)

undefined8 FUN_1490d7776(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
    uVar2 = FUN_144ae121a(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1490d77ae FUN_1490d77ae body=148 status=ok
// SIG undefined FUN_1490d77ae(void)

undefined8 FUN_1490d77ae(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1458937a8();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d784a FUN_1490d784a body=661 status=ok
// SIG undefined FUN_1490d784a(void)

void FUN_1490d784a(longlong param_1,undefined8 param_2)

{
  void *_Src;
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined8 local_90;
  void *local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_60;
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1427dc336(local_58);
  FUN_14797d828(param_1,local_58);
  if (DAT_14cc002d0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc002d0 = FUN_140002ddd(FUN_146682151,uVar3,L"RigVMGraphFunctionHeaderArray");
  }
  lVar5 = DAT_14cc002d0;
  FUN_1446f470e(&local_60,L"Headers",1);
  lVar5 = *(longlong *)(lVar5 + 0x70);
  if (lVar5 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar5 + 0x20) == local_60) {
        lVar4 = *(longlong *)(lVar5 + 8);
        lVar6 = FUN_1446e6bbc();
        if (*(ulonglong *)(lVar6 + 8) == 0) {
          bVar8 = lVar4 != 0;
          if (lVar4 == lVar6 || !bVar8) goto LAB_1490d794c;
          goto LAB_1490d792f;
        }
        bVar8 = (*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0;
        goto LAB_1490d794c;
      }
      lVar5 = *(longlong *)(lVar5 + 0x48);
    } while (lVar5 != 0);
  }
  goto LAB_1490d7954;
  while (lVar4 != 0) {
LAB_1490d792f:
    lVar4 = *(longlong *)(lVar4 + 0x30);
    bVar8 = lVar4 != 0;
    if (lVar4 == lVar6) break;
  }
LAB_1490d794c:
  lVar4 = 0;
  if (bVar8) {
    lVar4 = lVar5;
  }
LAB_1490d7954:
  local_78 = 0;
  uStack_70 = 0;
  if ((longlong)*(int *)(param_1 + 0x3c0) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x3b8);
    lVar6 = (longlong)*(int *)(param_1 + 0x3c0) * 0x440;
    do {
      uVar1 = uStack_70;
      if (*(int *)(lVar5 + 0x3d8) != 0) {
        lVar7 = (longlong)(int)uStack_70;
        uVar2 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar2);
        if (uStack_70._4_4_ < uVar2) {
          FUN_1490ee764(&local_78,uVar1 & 0xffffffff);
        }
        FUN_1490df09e(lVar7 * 0x1f8 + local_78,lVar5);
      }
      lVar5 = lVar5 + 0x440;
      lVar6 = lVar6 + -0x440;
    } while (lVar6 != 0);
  }
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_b8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_14280c87e(lVar4,&local_88,&local_78,&local_78);
  FUN_1446f470e(&local_b0,L"PublicGraphFunctions",1);
  _Src = local_88;
  local_a8 = local_b0;
  local_a0 = (void *)0x0;
  lVar5 = (longlong)(int)uStack_80;
  local_98 = (int)uStack_80;
  if (lVar5 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1446dd670(&local_a0,uStack_80 & 0xffffffff,0);
    memcpy(local_a0,_Src,lVar5 * 2);
  }
  local_90 = 0;
  FUN_1407c67d8(param_2);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1490e4bab(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490d7ae0 FUN_1490d7ae0 body=270 status=ok
// SIG undefined FUN_1490d7ae0(void)

void FUN_1490d7ae0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x348))(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d7bf8 FUN_1490d7bf8 body=323 status=ok
// SIG undefined FUN_1490d7bf8(void)

void FUN_1490d7bf8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined1 local_260 [552];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_145b27bd0(local_260);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_260);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_260);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_268 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_268);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_268);
  }
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = local_260;
  }
  puVar2 = &local_268;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x318))(param_1,puVar3,puVar2);
  *param_3 = uVar1;
  FUN_1401f96ee(local_260);
  if ((local_38 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d7d42 FUN_1490d7d42 body=218 status=ok
// SIG undefined FUN_1490d7d42(void)

void FUN_1490d7d42(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d7e1e FUN_1490d7e1e body=222 status=ok
// SIG undefined FUN_1490d7e1e(void)

void FUN_1490d7e1e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d7efe FUN_1490d7efe body=221 status=ok
// SIG undefined FUN_1490d7efe(void)

void FUN_1490d7efe(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d7fdc FUN_1490d7fdc body=221 status=ok
// SIG undefined FUN_1490d7fdc(void)

void FUN_1490d7fdc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d80ba FUN_1490d80ba body=222 status=ok
// SIG undefined FUN_1490d80ba(void)

void FUN_1490d80ba(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d819a FUN_1490d819a body=242 status=ok
// SIG undefined FUN_1490d819a(void)

void FUN_1490d819a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = DAT_14c8463e8._4_4_;
  uVar6 = (undefined4)DAT_14c8463e8;
  uVar5 = DAT_14c8463e0._4_4_;
  uVar4 = DAT_14c8463d8._4_4_;
  uVar3 = (undefined4)DAT_14c8463d8;
  uVar2 = DAT_14c8463d0._4_4_;
  uVar1 = (undefined4)DAT_14c8463d0;
  param_3[4] = (undefined4)DAT_14c8463e0;
  param_3[5] = uVar5;
  param_3[6] = uVar6;
  param_3[7] = uVar7;
  *param_3 = uVar1;
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[3] = uVar4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d828e FUN_1490d828e body=240 status=ok
// SIG undefined FUN_1490d828e(void)

void FUN_1490d828e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = 0;
  param_3[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d8380 FUN_1490d8380 body=242 status=ok
// SIG undefined FUN_1490d8380(void)

void FUN_1490d8380(undefined8 param_1,longlong param_2,void *param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  memmove(param_3,&DAT_14c846480,0x60);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d8474 FUN_1490d8474 body=242 status=ok
// SIG undefined FUN_1490d8474(void)

void FUN_1490d8474(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  uVar1 = (undefined4)DAT_14c8464e0;
  *(undefined8 *)(param_3 + 4) = DAT_14c8464f0;
  *param_3 = uVar1;
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[3] = uVar4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d8568 FUN_1490d8568 body=225 status=ok
// SIG undefined FUN_1490d8568(void)

void FUN_1490d8568(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  *param_3 = (undefined4)DAT_14c8463f0;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d864a FUN_1490d864a body=236 status=ok
// SIG undefined FUN_1490d864a(void)

void FUN_1490d864a(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x350))(param_1,&local_38,local_24);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d8738 FUN_1490d8738 body=146 status=ok
// SIG undefined FUN_1490d8738(void)

void FUN_1490d8738(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1490e8838(*(undefined8 *)(param_1 + 0x1e8),&local_28);
  iVar1 = *(int *)(param_1 + 700) << 2;
  *param_3 = (int)((ulonglong)local_28 >> 0x20) + *(int *)(param_1 + 700) * 4;
  param_3[1] = iVar1;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = iVar1;
  *(undefined8 *)(param_3 + 0xc) = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d87d2 FUN_1490d87d2 body=301 status=ok
// SIG undefined FUN_1490d87d2(void)

void FUN_1490d87d2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
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
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d8900 FUN_1490d8900 body=302 status=ok
// SIG undefined FUN_1490d8900(void)

void FUN_1490d8900(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d8a30 FUN_1490d8a30 body=301 status=ok
// SIG undefined FUN_1490d8a30(void)

void FUN_1490d8a30(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d8b5e FUN_1490d8b5e body=301 status=ok
// SIG undefined FUN_1490d8b5e(void)

void FUN_1490d8b5e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d8c8c FUN_1490d8c8c body=309 status=ok
// SIG undefined FUN_1490d8c8c(void)

void FUN_1490d8c8c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d8dc2 FUN_1490d8dc2 body=300 status=ok
// SIG undefined FUN_1490d8dc2(void)

void FUN_1490d8dc2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined1 local_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d8ef0 FUN_1490d8ef0 body=316 status=ok
// SIG undefined FUN_1490d8ef0(void)

void FUN_1490d8ef0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d902e FUN_1490d902e body=379 status=ok
// SIG undefined FUN_1490d902e(void)

void FUN_1490d902e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_8c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d91aa FUN_1490d91aa body=300 status=ok
// SIG undefined FUN_1490d91aa(void)

void FUN_1490d91aa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined1 local_38 [24];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d92d8 FUN_1490d92d8 body=300 status=ok
// SIG undefined FUN_1490d92d8(void)

void FUN_1490d92d8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d9408 FUN_1490d9408 body=10 status=ok
// SIG undefined FUN_1490d9408(void)

undefined8 * FUN_1490d9408(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1490d941e FUN_1490d941e body=112 status=ok
// SIG undefined FUN_1490d941e(void)

void FUN_1490d941e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39130);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e39130);
  if (1 < iVar1) {
    if (((*(byte *)(param_2 + 5) & 4) != 0) || ((*(byte *)((longlong)param_2 + 0x2b) & 10) != 0)) {
      FUN_1490d948e(param_1,param_2);
      return;
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_1490d954c(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1490d948e FUN_1490d948e body=189 status=ok
// SIG undefined FUN_1490d948e(void)

void FUN_1490d948e(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 4);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0xc,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14021219d(param_2,param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001490d953e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x28);
  return;
}



// FUNCTION 1490d954c FUN_1490d954c body=191 status=ok
// SIG undefined FUN_1490d954c(void)

void FUN_1490d954c(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 4);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0xc,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14021219d(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1490d960c FUN_1490d960c body=222 status=ok
// SIG undefined FUN_1490d960c(void)

void FUN_1490d960c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_141156948(param_2);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x338),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x338) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14581458c(param_2,param_1 + 0x118);
  FUN_140219018(param_2,param_1 + 0x208);
  FUN_145814b84(param_1 + 0x138,param_2);
  FUN_145814c2e(param_2,param_1 + 0x250);
  FUN_145814aba(param_2,param_1 + 0x2e8);
  FUN_145814514(param_1 + 0x28,param_2);
  FUN_145814514(param_1 + 0x78,param_2);
  FUN_145814514(param_1 + 200,param_2);
  return;
}



// FUNCTION 1490d96ea FUN_1490d96ea body=66 status=ok
// SIG undefined FUN_1490d96ea(void)

void FUN_1490d96ea(longlong param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x68);
  EnterCriticalSection(lpCriticalSection);
  FUN_1490de3be(param_1,param_2);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490d971c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 1490d9734 FUN_1490d9734 body=441 status=ok
// SIG undefined FUN_1490d9734(void)

void FUN_1490d9734(longlong param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = (longlong)(int)(*(longlong **)(param_1 + 0x218))[1];
  uVar3 = 0;
  if (lVar6 != 0) {
    lVar5 = **(longlong **)(param_1 + 0x218);
    lVar6 = lVar6 << 3;
    uVar3 = 0;
    do {
      FUN_1400021e4(lVar5,&local_50);
      iVar4 = local_48 + -1;
      puVar1 = local_50;
      if (local_48 == 0) {
        iVar4 = 0;
        puVar1 = &DAT_149dfb77a;
      }
      uVar2 = FUN_144a49b4a(iVar4,puVar1);
      uVar3 = FUN_144a78877(uVar3,uVar2);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar2 = FUN_1490dd996(*(undefined8 *)(param_1 + 0x1e8));
  uVar3 = FUN_144a78877(uVar3,uVar2);
  if ((longlong)*(int *)(param_1 + 0x2d0) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x2c8);
    lVar6 = lVar5 + (longlong)*(int *)(param_1 + 0x2d0) * 0x28;
    do {
      FUN_1400021e4(lVar5,&local_50);
      iVar4 = local_48 + -1;
      puVar1 = local_50;
      if (local_48 == 0) {
        iVar4 = 0;
        puVar1 = &DAT_149dfb77a;
      }
      uVar2 = FUN_144a49b4a(iVar4,puVar1);
      uVar3 = FUN_144a78877(uVar3,uVar2);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1400021e4(lVar5 + 0x10,&local_50);
      iVar4 = local_48 + -1;
      puVar1 = local_50;
      if (local_48 == 0) {
        iVar4 = 0;
        puVar1 = &DAT_149dfb77a;
      }
      uVar2 = FUN_144a49b4a(iVar4,puVar1);
      uVar3 = FUN_144a78877(uVar3,uVar2);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != lVar6);
  }
  uVar2 = FUN_1490f623a(param_1 + 0x28);
  uVar3 = FUN_144a78877(uVar3,uVar2);
  uVar2 = FUN_1490f623a(param_1 + 0x78);
  FUN_144a78877(uVar3,uVar2);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d98ee FUN_1490d98ee body=471 status=ok
// SIG undefined FUN_1490d98ee(void)

undefined8 FUN_1490d98ee(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 8) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar4 = FUN_14001cc68(0x18,0x10);
    FUN_1490d9ac6(lVar4,param_1 + 0x59,param_2);
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_LAB_14bad55c0;
    plVar5[2] = lVar4;
  }
  iVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
  FUN_1457a9e34(&local_40,0x10,1,0);
  uVar9 = (ulonglong)local_30;
  uVar8 = 0;
  if (((int)local_30 < 0) || (local_38 <= (int)local_30)) {
LAB_1490d9a76:
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar8;
  }
  do {
    lVar4 = *(longlong *)(local_40 + (uVar9 & 0xffffffff) * 8);
    lVar6 = FUN_145b9e91c();
    if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
         lVar6 + 0x30)) &&
       (lVar4 = *(longlong *)(local_40 + (longlong)(int)local_30 * 8), lVar6 = FUN_145b9e91c(),
       lVar4 != lVar6)) {
      lVar4 = *(longlong *)(local_40 + (longlong)(int)local_30 * 8);
      plVar7 = *(longlong **)(lVar4 + 0x110);
      if (plVar7 == (longlong *)0x0) {
        FUN_140aa6c08(lVar4);
        plVar7 = *(longlong **)(lVar4 + 0x110);
        if (plVar7 == (longlong *)0x0) goto LAB_1490d99d3;
      }
      iVar3 = (**(code **)(*plVar7 + 0x2c0))();
      if (iVar3 == iVar2) {
        uVar8 = *(undefined8 *)(local_40 + (longlong)(int)local_30 * 8);
        goto LAB_1490d9a76;
      }
    }
LAB_1490d99d3:
    uVar9 = (longlong)(int)local_30;
    do {
      uVar10 = uVar9;
      uVar9 = uVar10 + 1;
      local_30 = (uint)uVar9;
      if ((longlong)local_38 <= (longlong)uVar9) break;
    } while (*(longlong *)(local_40 + uVar9 * 8) == 0);
    uVar8 = 0;
    if (((longlong)uVar10 < -1) || (uVar8 = 0, local_38 <= (int)local_30)) goto LAB_1490d9a76;
  } while( true );
}



// FUNCTION 1490d9ac6 FUN_1490d9ac6 body=113 status=ok
// SIG undefined FUN_1490d9ac6(void)

undefined8 * FUN_1490d9ac6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1490eefbe(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 0x28);
    param_2 = (undefined8 *)*param_1;
  }
  FUN_1490eef64(param_2,param_3);
  return param_1;
}



// FUNCTION 1490d9b38 FUN_1490d9b38 body=39 status=ok
// SIG undefined FUN_1490d9b38(void)

void FUN_1490d9b38(undefined8 param_1,undefined8 param_2)

{
  FUN_1458b7ad0();
  FUN_1458b7e5c(param_1);
  FUN_1458eb942(param_2);
  return;
}



// FUNCTION 1490d9b60 FUN_1490d9b60 body=26 status=ok
// SIG undefined FUN_1490d9b60(void)

void FUN_1490d9b60(undefined8 param_1,undefined8 param_2)

{
  FUN_1458b7e5c();
  FUN_1458eb942(param_2);
  return;
}



// FUNCTION 1490d9b7a FUN_1490d9b7a body=475 status=ok
// SIG undefined FUN_1490d9b7a(void)

void FUN_1490d9b7a(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (*(int *)(param_1 + 0x214) != 0) {
    FUN_1402191ca(param_1 + 0x208,0);
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  if (*(int *)(param_1 + 0x22c) != 0) {
    FUN_1490ef3a2(param_1 + 0x220);
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(int *)(param_1 + 0x244) != 0) {
    FUN_1490ef3d2(param_1 + 0x238);
  }
  FUN_1401f9edd(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_1458149c4(param_1 + 0x118,0);
  }
  FUN_1401f9f1c(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_1490ef402(param_1 + 0x128,0);
  }
  FUN_1490d9d56(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(int *)(param_1 + 0x1fc) != 0) {
    FUN_1490f1358(param_1 + 0x1f0);
  }
  FUN_1412daae5(*(undefined8 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 600));
  *(undefined4 *)(param_1 + 600) = 0;
  if (*(int *)(param_1 + 0x25c) != 0) {
    FUN_1490ef462(param_1 + 0x250,0);
  }
  FUN_140171a5c(param_1 + 0x260,0);
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    FUN_145cb2204(param_1 + 0x2c8,0);
  }
  FUN_1458b7e5c(param_1);
  FUN_1458eb942(param_2);
  FUN_1490ef4d2(param_1 + 0x2e8);
  *(undefined4 *)(param_2 + 0x1b0) = 0;
  if (*(int *)(param_2 + 0x1b4) != 0) {
    FUN_1459747b8(param_2 + 0x1a8,0);
  }
  if (-1 < *(int *)(param_2 + 0x224)) {
    *(undefined4 *)(param_2 + 0x220) = 0;
    return;
  }
  *(undefined4 *)(param_2 + 0x220) = 0;
  FUN_1459b4c14(param_2 + 0x218,0);
  return;
}



// FUNCTION 1490d9d56 FUN_1490d9d56 body=79 status=ok
// SIG undefined FUN_1490d9d56(void)

void FUN_1490d9d56(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144893a1c(param_1,0);
  }
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1490f162c(param_1 + 0x18);
  }
  FUN_144a7e010(param_1 + 0x48);
  return;
}



// FUNCTION 1490d9da6 FUN_1490d9da6 body=57 status=ok
// SIG undefined FUN_1490d9da6(void)

void FUN_1490d9da6(undefined8 *param_1,int param_2)

{
  FUN_1412daae5(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1490ef462(param_1,param_2);
  return;
}



// FUNCTION 1490d9de0 FUN_1490d9de0 body=226 status=ok
// SIG undefined FUN_1490d9de0(void)

undefined4 FUN_1490d9de0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_3,&local_48);
  puVar3 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar3 = local_48;
  }
  local_38[0] = *(longlong *)(param_2 + 0x18);
  FUN_1400021e4(local_38,&local_58);
  puVar2 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar2 = local_58;
  }
  FUN_140002266(local_38,L"F%s::%s",puVar2,puVar3);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = (**(code **)(*param_1 + 0x340))(param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d9ec4 FUN_1490d9ec4 body=480 status=ok
// SIG undefined FUN_1490d9ec4(void)

ulonglong FUN_1490d9ec4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  undefined2 local_c0;
  undefined1 local_b8 [108];
  undefined8 local_4c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_d0,puVar7,1);
  lVar5 = (longlong)(int)(*(longlong **)(param_1 + 0x218))[1];
  if (lVar5 != 0) {
    lVar5 = lVar5 << 3;
    uVar6 = 0;
    do {
      if (*(longlong *)(**(longlong **)(param_1 + 0x218) + uVar6 * 8) == local_d0) {
        if ((int)uVar6 != -1) goto LAB_1490da053;
        break;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  lVar5 = FUN_14001a7b2();
  memset(local_b8,0,0x90);
  local_4c = 0xffffffff00000080;
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  local_c0 = 0x101;
  local_c8 = lVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
  LOCK();
  piVar1 = (int *)(lVar5 + 0x3ac);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    LOCK();
    *(undefined1 *)(local_c8 + 0x3a8) = (undefined1)local_c0;
    UNLOCK();
  }
  lVar5 = FUN_14001aed4(lVar5,puVar7,local_b8);
  FUN_1409be446(&local_c8);
  FUN_140ba0558(local_b8);
  if (lVar5 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x218);
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
      FUN_1446f84a2(plVar4,iVar2);
    }
    *(longlong *)(*plVar4 + (longlong)iVar2 * 8) = local_d0;
    plVar4 = *(longlong **)(param_1 + 0x248);
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
      FUN_145dae4fa(plVar4,iVar2);
    }
    *(undefined8 *)(*plVar4 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar5 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x230);
    uVar3 = *(uint *)(plVar4 + 1);
    uVar6 = (ulonglong)uVar3;
    *(uint *)(plVar4 + 1) = uVar3 + 1;
    if (*(uint *)((longlong)plVar4 + 0xc) < uVar3 + 1) {
      FUN_145dae400(plVar4,uVar3);
    }
    *(longlong *)(*plVar4 + (longlong)(int)uVar3 * 8) = lVar5;
  }
LAB_1490da053:
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1490da0a6 FUN_1490da0a6 body=39 status=ok
// SIG undefined FUN_1490da0a6(void)

undefined8 FUN_1490da0a6(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1400021e4((longlong)param_3 * 8 + **(longlong **)(param_1 + 0x218));
  return param_2;
}



// FUNCTION 1490da0dc FUN_1490da0dc body=69 status=ok
// SIG undefined FUN_1490da0dc(void)

void FUN_1490da0dc(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x378))(param_1,param_3,param_4);
  if ((char)param_3 != '\0') {
    return;
  }
  FUN_145a593dc(param_2 + 0x10,param_1 + 0xf);
  return;
}



// FUNCTION 1490da122 FUN_1490da122 body=199 status=ok
// SIG undefined FUN_1490da122(void)

void FUN_1490da122(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong uStack_80;
  undefined1 local_70 [80];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((char)param_2 == '\x01') {
    lVar1 = 0x28;
  }
  else {
    if ((param_2 & 0xff) != 0) goto LAB_1490da1b9;
    lVar1 = 0x78;
  }
  if (param_1 + lVar1 != 0) {
    if (param_3 == 0) {
      FUN_1490f5fe0(local_70);
    }
    else {
      local_88 = 0;
      uStack_80 = 0;
      FUN_1490f6000(local_70,param_2,param_3);
    }
    FUN_145a593dc(param_1 + lVar1,local_70);
    FUN_1401f9e80(local_70);
    if (param_3 != 0) {
      FUN_1401f9edd(local_88,uStack_80 & 0xffffffff);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1490da1b9:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490da214 FUN_1490da214 body=131 status=ok
// SIG undefined FUN_1490da214(void)

void FUN_1490da214(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1490f5fe0(local_68,4);
  FUN_145a593dc(param_1 + 0x28,local_68);
  FUN_1401f9e80(local_68);
  FUN_1490f5fe0(local_68,4);
  FUN_145a593dc(param_1 + 0x78,local_68);
  FUN_1401f9e80(local_68);
  FUN_1458b7e5c(param_1);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490da298 FUN_1490da298 body=155 status=ok
// SIG undefined FUN_1490da298(void)

void FUN_1490da298(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [80];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1490da214();
  FUN_1490f5fe0(local_70,4);
  FUN_145a593dc(param_2 + 0x10,local_70);
  FUN_1401f9e80(local_70);
  FUN_1490f5fe0(local_70,4);
  FUN_145a593dc(param_2 + 0x60,local_70);
  FUN_1401f9e80(local_70);
  FUN_1458b7e5c(param_1);
  FUN_1458eb942(param_2);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490da334 FUN_1490da334 body=8 status=ok
// SIG undefined FUN_1490da334(void)

longlong FUN_1490da334(longlong param_1)

{
  return param_1 + 0x1f0;
}



// FUNCTION 1490da370 FUN_1490da370 body=159 status=ok
// SIG undefined FUN_1490da370(void)

longlong * FUN_1490da370(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x340);
  *(undefined4 *)(param_1 + 0x348) = 0;
  if (*(int *)(param_1 + 0x34c) < 0) {
    FUN_1402191ca(plVar1,0);
  }
  lVar3 = *(longlong *)(param_1 + 0x1e8);
  if (*(int *)(lVar3 + 0x20) != 0) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + 0x18);
      iVar2 = *(int *)(param_1 + 0x348);
      *(uint *)(param_1 + 0x348) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x34c) < iVar2 + 1U) {
        FUN_1446f84a2(plVar1,iVar2);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar4 + lVar6);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0xc;
    } while (uVar5 < *(uint *)(lVar3 + 0x20));
  }
  return plVar1;
}



// FUNCTION 1490da410 FUN_1490da410 body=688 status=ok
// SIG undefined FUN_1490da410(void)

/* WARNING: Removing unreachable block (ram,0x0001490da546) */
/* WARNING: Removing unreachable block (ram,0x0001490da5c9) */

undefined8 FUN_1490da410(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar4 = (**(code **)(*param_1 + 0x3b0))();
  if (iVar4 == -1) {
    uVar6 = *(undefined8 *)(param_2 + 0xc0);
    FUN_1400021e4(param_3,&local_58);
    puVar9 = local_58;
    if ((int)uStack_50 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    local_68 = (undefined2 *)CONCAT35(local_68._5_3_,0x100000001);
    FUN_144465802(uVar6,&local_68,puVar9);
LAB_1490da688:
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
    if ((longlong)*(int *)(param_2 + 0x1c8) != 0) {
      lVar1 = *(longlong *)(param_2 + 0x1c0);
      lVar11 = (longlong)*(int *)(param_2 + 0x1c8) * 4;
      lVar8 = 0;
      do {
        if (*(int *)(lVar1 + lVar8) == iVar4) {
          local_58 = (undefined2 *)0x0;
          uStack_50 = 0;
          lVar8 = 0;
          local_90 = param_2;
          local_88 = param_3;
          puVar9 = local_68;
          uVar6 = local_60;
          do {
            local_60 = uVar6;
            local_68 = puVar9;
            iVar4 = *(int *)(lVar1 + lVar8);
            plVar7 = (longlong *)(**(code **)(*param_1 + 0x3b8))(param_1);
            FUN_1400021e4((longlong)iVar4 * 8 + *plVar7,&local_68);
            uVar3 = uStack_50;
            lVar10 = (longlong)(int)uStack_50;
            uVar5 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
            if (uStack_50._4_4_ < uVar5) {
              FUN_1447a1bd6(&local_58,uVar3 & 0xffffffff);
            }
            uVar2 = local_88;
            *(undefined8 *)(local_58 + lVar10 * 8) = 0;
            *(undefined2 **)(local_58 + lVar10 * 8) = local_68;
            local_68 = (undefined2 *)0x0;
            puVar9 = local_68;
            *(int *)(local_58 + lVar10 * 8 + 4) = (int)local_60;
            *(undefined4 *)(local_58 + lVar10 * 8 + 6) = local_60._4_4_;
            local_60 = 0;
            uVar6 = local_60;
            local_60 = 0;
            local_68 = (undefined2 *)0x0;
            lVar8 = lVar8 + 4;
          } while (lVar11 != lVar8);
          FUN_1400021e4(local_88,&local_68);
          uVar3 = uStack_50;
          lVar1 = local_90;
          lVar8 = (longlong)(int)uStack_50;
          uVar5 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
          if (uStack_50._4_4_ < uVar5) {
            FUN_1447a1bd6(&local_58,uVar3 & 0xffffffff);
          }
          *(undefined8 *)(local_58 + lVar8 * 8) = 0;
          *(undefined2 **)(local_58 + lVar8 * 8) = local_68;
          *(int *)(local_58 + lVar8 * 8 + 4) = (int)local_60;
          *(undefined4 *)(local_58 + lVar8 * 8 + 6) = local_60._4_4_;
          local_60 = 0;
          local_68 = (undefined2 *)0x0;
          uVar6 = *(undefined8 *)(lVar1 + 0xc0);
          FUN_144a8b2a0(&local_68,&local_58,L" -> ");
          puVar9 = &DAT_149dfb77a;
          if ((int)local_60 != 0) {
            puVar9 = local_68;
          }
          FUN_1400021e4(uVar2,&local_78);
          puVar12 = &DAT_149dfb77a;
          if (local_70 != 0) {
            puVar12 = local_78;
          }
          local_80 = 1;
          local_7c = 1;
          FUN_144465896(uVar6,&local_80,puVar12,puVar9);
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
          goto LAB_1490da688;
        }
        lVar8 = lVar8 + 4;
      } while (lVar11 != lVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490da6c2 FUN_1490da6c2 body=144 status=ok
// SIG undefined FUN_1490da6c2(void)

undefined4 * FUN_1490da6c2(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  _Src = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),_Src,(longlong)iVar1 * 2);
  }
  lVar2 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 1490da752 FUN_1490da752 body=113 status=ok
// SIG undefined FUN_1490da752(void)

longlong * FUN_1490da752(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 2);
  }
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 1490da7c4 FUN_1490da7c4 body=231 status=ok
// SIG undefined FUN_1490da7c4(void)

void FUN_1490da7c4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  lVar3 = (longlong)iVar1;
  *(uint *)(param_1 + 0xe8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xec) < iVar1 + 1U) {
    FUN_1401fa2e0(param_1 + 0xe0,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  *(undefined4 *)(lVar2 + lVar3 * 0x14) = 0;
  *(int *)(lVar2 + 4 + lVar3 * 0x14) = param_2 + -1;
  *(uint *)(lVar2 + 8 + lVar3 * 0x14) = -(uint)(param_2 < 1);
  *(undefined8 *)(lVar2 + 0xc + lVar3 * 0x14) = 0xffffffff00000000;
  lVar3 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar3 * 0x14) =
       param_3 + *(int *)(*(longlong *)(param_1 + 0xe0) + lVar3 * 0x14);
  *(uint *)(*(longlong *)(param_1 + 0xe0) + 0x10 + (longlong)(*(int *)(param_1 + 0xe8) + -1) * 0x14)
       = (uint)*(ushort *)(*(longlong *)(param_1 + 0xc0) + 0x18);
  *(uint *)(*(longlong *)(param_1 + 0xe0) + 0xc + (longlong)(*(int *)(param_1 + 0xe8) + -1) * 0x14)
       = (uint)*(ushort *)
                (*(longlong *)(param_1 + 0xf0) +
                (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0xc0) + 0x18) * 2);
  return;
}



// FUNCTION 1490da8ac FUN_1490da8ac body=118 status=ok
// SIG undefined FUN_1490da8ac(void)

void FUN_1490da8ac(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0xe0);
  lVar6 = (longlong)*(int *)(param_1 + 0xe8);
  iVar1 = *(int *)(lVar5 + -0x10 + lVar6 * 0x14);
  iVar2 = *(int *)(lVar5 + -0xc + lVar6 * 0x14);
  uVar3 = *(uint *)(lVar5 + -4 + lVar6 * 0x14);
  uVar4 = *(undefined4 *)(lVar5 + -0x14 + lVar6 * 0x14);
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
  FUN_1490e891a(param_1 + 0xe0);
  if (((iVar2 == iVar1) && (-1 < (int)uVar3)) && ((int)uVar3 < *(int *)(param_1 + 0xf8))) {
    *(short *)(*(longlong *)(param_1 + 0xf0) + (ulonglong)uVar3 * 2) =
         ((short)iVar1 - (short)uVar4) +
         *(short *)(*(longlong *)(param_1 + 0xf0) + (ulonglong)uVar3 * 2) + 1;
  }
  return;
}



// FUNCTION 1490da922 FUN_1490da922 body=143 status=ok
// SIG undefined FUN_1490da922(void)

longlong * FUN_1490da922(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
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
  undefined4 uVar12;
  
  *param_1 = param_2;
  FUN_1490efad0(param_1 + 2);
  lVar1 = *param_1;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  uVar3 = *(undefined4 *)(param_3 + 0x10);
  uVar4 = *(undefined4 *)(param_3 + 0x14);
  uVar5 = *(undefined4 *)(param_3 + 0x18);
  uVar6 = *(undefined4 *)(param_3 + 0x1c);
  uVar7 = *(undefined4 *)(param_3 + 0x20);
  uVar8 = *(undefined4 *)(param_3 + 0x24);
  uVar9 = *(undefined4 *)(param_3 + 0x28);
  uVar10 = *(undefined4 *)(param_3 + 0x2c);
  uVar11 = *(undefined4 *)(param_3 + 0x30);
  uVar12 = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(lVar1 + 0xc) = uVar2;
  *(undefined4 *)(lVar1 + 0x10) = uVar3;
  *(undefined4 *)(lVar1 + 0x14) = uVar4;
  *(undefined4 *)(lVar1 + 0x18) = uVar5;
  *(undefined4 *)(lVar1 + 0x1c) = uVar6;
  *(undefined4 *)(lVar1 + 0x20) = uVar7;
  *(undefined4 *)(lVar1 + 0x24) = uVar8;
  *(undefined4 *)(lVar1 + 0x28) = uVar9;
  *(undefined4 *)(lVar1 + 0x2c) = uVar10;
  *(undefined4 *)(lVar1 + 0x30) = uVar11;
  *(undefined4 *)(lVar1 + 0x34) = uVar12;
  FUN_14591e93c(lVar1 + 0x38,param_3 + 0x38);
  memcpy((void *)(lVar1 + 0x50),(void *)(param_3 + 0x50),0x98);
  FUN_1490e1992(lVar1 + 0xe8,param_3 + 0xe8);
  FUN_145c50a48(lVar1 + 0xf8,param_3 + 0xf8);
  *(undefined8 *)(lVar1 + 0x108) = *(undefined8 *)(param_3 + 0x108);
  return param_1;
}



// FUNCTION 1490da9b2 FUN_1490da9b2 body=148 status=ok
// SIG undefined FUN_1490da9b2(void)

void FUN_1490da9b2(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar4 = param_1[8];
  *(longlong *)(lVar1 + 0x28) = param_1[7];
  *(longlong *)(lVar1 + 0x30) = lVar4;
  lVar4 = param_1[6];
  *(longlong *)(lVar1 + 0x18) = param_1[5];
  *(longlong *)(lVar1 + 0x20) = lVar4;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar4 = param_1[4];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x24);
  *(int *)(lVar1 + 8) = (int)param_1[3];
  *(undefined4 *)(lVar1 + 0xc) = uVar2;
  *(int *)(lVar1 + 0x10) = (int)lVar4;
  *(undefined4 *)(lVar1 + 0x14) = uVar3;
  FUN_14591e93c(lVar1 + 0x38,param_1 + 9);
  memcpy((void *)(lVar1 + 0x50),param_1 + 0xc,0x98);
  FUN_1490e1992(lVar1 + 0xe8,param_1 + 0x1f);
  FUN_145c50a48(lVar1 + 0xf8,param_1 + 0x21);
  *(longlong *)(lVar1 + 0x108) = param_1[0x23];
  FUN_140f8ceac(param_1 + 2);
  return;
}



// FUNCTION 1490daa46 FUN_1490daa46 body=91 status=ok
// SIG undefined FUN_1490daa46(void)

undefined4 FUN_1490daa46(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  if ((longlong)iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    lVar5 = 0;
    uVar4 = 0;
    do {
      uVar3 = FUN_144a78877(*(undefined4 *)(lVar2 + lVar5),*(undefined4 *)(lVar2 + 8 + lVar5));
      uVar4 = FUN_144a78877(uVar4,uVar3);
      lVar5 = lVar5 + 0x14;
    } while ((longlong)iVar1 * 0x14 != lVar5);
  }
  return uVar4;
}



// FUNCTION 1490daaa2 FUN_1490daaa2 body=172 status=ok
// SIG undefined FUN_1490daaa2(void)

void FUN_1490daaa2(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar6 = *(longlong *)(param_2 + 0xc0);
  uVar5 = *(undefined4 *)(lVar6 + 0x1c);
  uVar2 = *(undefined1 *)(param_2 + 0x1d0);
  uVar7 = *(undefined8 *)(param_2 + 0x1d4);
  uVar3 = *(undefined1 *)(param_2 + 0x1dc);
  uVar8 = *(undefined8 *)(lVar6 + 8);
  uVar9 = *(undefined8 *)(lVar6 + 0x10);
  uVar4 = *(undefined2 *)(lVar6 + 0x18);
  uVar10 = *(undefined8 *)(lVar6 + 0x20);
  uVar11 = *(undefined8 *)(lVar6 + 0x28);
  uVar1 = *(undefined8 *)(lVar6 + 0x30);
  FUN_144465db0(param_1,param_2,*(undefined2 *)(param_3 + 0x14),*(undefined2 *)(param_3 + 0x16));
  *(undefined8 *)(lVar6 + 0x30) = uVar1;
  *(undefined8 *)(lVar6 + 0x20) = uVar10;
  *(undefined8 *)(lVar6 + 0x28) = uVar11;
  *(undefined2 *)(lVar6 + 0x18) = uVar4;
  *(undefined8 *)(lVar6 + 8) = uVar8;
  *(undefined8 *)(lVar6 + 0x10) = uVar9;
  *(undefined1 *)(param_2 + 0x1dc) = uVar3;
  *(undefined8 *)(param_2 + 0x1d4) = uVar7;
  *(undefined1 *)(param_2 + 0x1d0) = uVar2;
  *(undefined4 *)(lVar6 + 0x1c) = uVar5;
  return;
}



// FUNCTION 1490dab52 FUN_1490dab52 body=33 status=ok
// SIG undefined FUN_1490dab52(void)

void FUN_1490dab52(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_21(param_1,*(undefined8 *)(*param_2 + 8));
  FUN_145bf22f8(param_1);
  return;
}



// FUNCTION 1490dab74 FUN_1490dab74 body=26 status=ok
// SIG undefined FUN_1490dab74(void)

void FUN_1490dab74(undefined8 param_1)

{
  switchD_143c3d4dc::caseD_21();
  FUN_145bf22f8(param_1);
  return;
}



// FUNCTION 1490dab8e FUN_1490dab8e body=265 status=ok
// SIG undefined FUN_1490dab8e(void)

void FUN_1490dab8e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = *(undefined8 *)(param_1 + 0x100);
  local_50 = *(undefined4 *)(param_1 + 0x108);
  uStack_4c = *(undefined4 *)(param_1 + 0x10c);
  uStack_48 = *(undefined4 *)(param_1 + 0x110);
  uStack_44 = *(undefined4 *)(param_1 + 0x114);
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 0x120);
  lVar1 = (longlong)local_38;
  _Src = *(void **)(param_1 + 0x118);
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  *param_3 = local_58;
  *(undefined4 *)(param_3 + 1) = local_50;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_4c;
  *(undefined4 *)(param_3 + 2) = uStack_48;
  *(undefined4 *)((longlong)param_3 + 0x14) = uStack_44;
  if (&local_58 == param_3) {
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_3[3] != 0) {
      FUN_1400020a8();
    }
    param_3[3] = local_40;
    *(int *)(param_3 + 4) = local_38;
    *(undefined4 *)((longlong)param_3 + 0x24) = local_34;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490dac98 FUN_1490dac98 body=295 status=ok
// SIG undefined FUN_1490dac98(void)

void FUN_1490dac98(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  void *pvStack_40;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  FUN_1446ef9c4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  _Src = pvStack_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_58;
  local_78 = (undefined4)uStack_50;
  uStack_74 = uStack_50._4_4_;
  uStack_70 = (undefined4)local_48;
  uStack_6c = local_48._4_4_;
  local_68 = (void *)0x0;
  lVar1 = (longlong)(int)local_38;
  local_60 = (int)local_38;
  if (lVar1 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_38 & 0xffffffff,0);
    memcpy(local_68,_Src,lVar1 * 2);
  }
  FUN_1490dadc0(param_1,&local_80);
  if (pvStack_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490dadc0 FUN_1490dadc0 body=294 status=ok
// SIG undefined FUN_1490dadc0(void)

void FUN_1490dadc0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145bf22f8();
  *(undefined8 *)(param_1 + 0x100) = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x10c) = uVar1;
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  FUN_144a787a6(param_1 + 0x118,param_2 + 3);
  lVar4 = FUN_148b5fc4a(param_2);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  *(longlong *)(param_1 + 0x128) = lVar4;
  if ((lVar4 != 0) && (*(int *)(param_1 + 0x30) < 2)) {
    lVar4 = FUN_148b5fc4a(param_1 + 0x100);
    local_30 = *(undefined8 *)(lVar4 + 0x18);
    FUN_1400021e4(&local_30,&local_40);
    if ((longlong *)(param_1 + 0x28) == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x28) = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 0x30) = local_38;
      *(undefined4 *)(param_1 + 0x34) = local_34;
    }
  }
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490daef6 FUN_1490daef6 body=131 status=ok
// SIG undefined FUN_1490daef6(void)

void FUN_1490daef6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((*(byte *)(param_2 + 0x28) & 4) != 0) && ((*(byte *)(param_2 + 0x29) & 1) != 0)) &&
     ((*(longlong *)(param_2 + 0x68) == 0 ||
      (*(longlong *)(*(longlong *)(param_2 + 0x68) + 0x10) == 0)))) {
    lVar1 = *(longlong *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    switchD_143c3d4dc::caseD_21(param_1);
    FUN_145bf22f8(param_1);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x128) = lVar1;
    return;
  }
  switchD_143c3d4dc::caseD_21(param_1);
  FUN_145bf22f8(param_1);
  return;
}



// FUNCTION 1490daf7a FUN_1490daf7a body=132 status=ok
// SIG undefined FUN_1490daf7a(void)

undefined4 FUN_1490daf7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38,&DAT_149e0635c);
  local_40 = 1;
  local_48 = 1;
  uVar1 = FUN_1407cdbc6(param_1,local_38,param_2,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490db000 FUN_1490db000 body=125 status=ok
// SIG undefined FUN_1490db000(void)

undefined8 * FUN_1490db000(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *_Src;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1490efe48(param_1,1,0);
  *(undefined8 *)*param_1 = param_2;
  while( true ) {
    _Src = (longlong *)*param_1;
    lVar2 = *(longlong *)(*_Src + 0x40);
    if (lVar2 == 0) break;
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
      FUN_1490efeaa(param_1,(ulonglong)uVar1);
      _Src = (longlong *)*param_1;
    }
    memmove(_Src + 1,_Src,(ulonglong)uVar1 << 3);
    *(longlong *)*param_1 = lVar2;
  }
  return param_1;
}



// FUNCTION 1490db07e FUN_1490db07e body=138 status=ok
// SIG undefined FUN_1490db07e(void)

longlong FUN_1490db07e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar6);
  iVar3 = FUN_1490eff30((longlong *)(param_1 + 0x38),uVar2,param_2);
  if (((iVar3 == -1) ||
      (lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x38),
      plVar5 = (longlong *)(lVar4 + 0x10), plVar5 == (longlong *)0x0 || lVar4 == 0)) ||
     (lVar4 = *plVar5, lVar4 == 0)) {
    lVar4 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  return lVar4;
}



// FUNCTION 1490db108 FUN_1490db108 body=147 status=ok
// SIG undefined FUN_1490db108(void)

undefined8 * FUN_1490db108(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  uVar7 = 0;
  uVar4 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar4 = uVar7;
  }
  uVar1 = FUN_144a49b4a(uVar4,puVar6);
  iVar2 = FUN_1490efffc((longlong *)(param_1 + 0x88),uVar1,param_2);
  if (iVar2 != -1) {
    uVar7 = (longlong)iVar2 * 0x28 + *(longlong *)(param_1 + 0x88);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  puVar5 = (undefined8 *)(uVar7 + 0x10);
  if (uVar7 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  puVar3 = &DAT_14cc00b50;
  if (puVar5 != (undefined8 *)0x0) {
    puVar3 = puVar5;
  }
  return puVar3;
}



// FUNCTION 1490db19c FUN_1490db19c body=1538 status=ok
// SIG undefined FUN_1490db19c(void)

undefined8
FUN_1490db19c(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
             undefined8 *param_5,wchar_t **param_6)

{
  byte bVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  void *pvVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_d8 [32];
  wchar_t **local_b8;
  wchar_t **local_b0;
  undefined2 *local_a0;
  int local_98;
  wchar_t *local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  local_68 = (wchar_t *)0x0;
  uStack_60 = 0;
  if (*(int *)(param_5 + 1) < 2) {
    cVar6 = FUN_1490daf7a(param_4,&local_58,&local_68);
    if (cVar6 == '\0') {
      if (*(int *)(param_5 + 1) < 2) {
        param_5 = param_4;
      }
      if (*(int *)(param_5 + 1) != 0) goto LAB_1490db1f8;
      puVar13 = &DAT_149dfb77a;
      goto LAB_1490db1fc;
    }
    lVar8 = (**(code **)(*param_1 + 0x2b8))(param_1,&local_58,param_6);
    if (lVar8 == 0) goto LAB_1490db229;
    puVar3 = *(ulonglong **)(lVar8 + 0x20);
    if (puVar3 == (ulonglong *)0x0) {
      if ((param_6 == (wchar_t **)0x0) || (1 < *(int *)(param_6 + 1))) goto LAB_1490db261;
      if (*(int *)(param_4 + 1) == 0) {
        puVar13 = &DAT_149dfb77a;
      }
      else {
        puVar13 = (undefined2 *)*param_4;
      }
      pwVar11 = L"UserData at path \'%s\' does not have any data backing it up.";
      goto LAB_1490db2c4;
    }
    lVar4 = *(longlong *)(lVar8 + 0x18);
    if (lVar4 == 0) {
LAB_1490db586:
      if (param_6 != (wchar_t **)0x0) {
        if (*(int *)(param_6 + 1) < 2) {
          puVar13 = &DAT_149dfb77a;
          if ((int)uStack_50 != 0) {
            puVar13 = local_58;
          }
          uVar10 = FUN_1490db908(lVar8);
          FUN_1400021e4(uVar10,&local_a0);
          puVar14 = &DAT_149dfb77a;
          if (local_98 != 0) {
            puVar14 = local_a0;
          }
          FUN_140002266(&local_90,
                        L"Cannot access sub paths of user data type \'%s\' for path \'%s\'.",puVar14
                        ,puVar13);
          if (&local_90 == param_6) {
            if (local_90 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*param_6 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            *param_6 = local_90;
            local_90 = (wchar_t *)0x0;
            *(undefined4 *)(param_6 + 1) = (undefined4)local_88;
            *(undefined4 *)((longlong)param_6 + 0xc) = local_88._4_4_;
            local_88 = 0;
          }
          if (local_a0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        goto LAB_1490db22e;
      }
      goto LAB_1490db261;
    }
    lVar12 = *(longlong *)(lVar4 + 8);
    lVar9 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar9 + 8) == 0) {
      bVar16 = lVar12 != 0;
      if (lVar12 != lVar9 && bVar16) {
        do {
          lVar12 = *(longlong *)(lVar12 + 0x30);
          bVar16 = lVar12 != 0;
          if (lVar12 == lVar9) break;
        } while (lVar12 != 0);
      }
      if (bVar16) goto LAB_1490db530;
    }
    else if ((*(ulonglong *)(lVar12 + 0x18) & *(ulonglong *)(lVar9 + 8)) != 0) {
LAB_1490db530:
      local_b0 = param_6;
      local_b8 = &local_68;
      uVar10 = FUN_1490db19c(param_1,*(undefined8 *)(lVar4 + 0x70),puVar3,param_4);
      goto LAB_1490db264;
    }
    lVar4 = *(longlong *)(lVar8 + 0x18);
    if (lVar4 == 0) goto LAB_1490db586;
    lVar12 = *(longlong *)(lVar4 + 8);
    lVar9 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar9 + 8) == 0) {
      bVar16 = lVar12 != 0;
      if (lVar12 != lVar9 && bVar16) {
        do {
          lVar12 = *(longlong *)(lVar12 + 0x30);
          bVar16 = lVar12 != 0;
          if (lVar12 == lVar9) break;
        } while (lVar12 != 0);
      }
      if (!bVar16) goto LAB_1490db586;
    }
    else if ((*(ulonglong *)(lVar12 + 0x18) & *(ulonglong *)(lVar9 + 8)) == 0) goto LAB_1490db586;
    lVar8 = *(longlong *)(lVar4 + 0x78);
    local_b8 = param_6;
    uVar10 = 0;
    cVar6 = (**(code **)(*param_1 + 0x2c8))(param_1,lVar8,param_4,0);
    if (cVar6 == '\0') goto LAB_1490db264;
    cVar6 = FUN_1405b43cc(&local_68);
    if (cVar6 != '\0') {
      bVar1 = *(byte *)(lVar4 + 0x70);
      (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x178))();
      pwVar11 = local_68;
      if ((int)uStack_60 == 0) {
        pwVar11 = L"";
      }
      iVar2 = *(int *)(*(longlong *)(lVar4 + 0x78) + 0x34);
      uVar7 = _wtoi(pwVar11);
      if ((-1 < (int)uVar7) && ((int)uVar7 < (int)puVar3[1])) {
        if ((bVar1 & 1) == 0) {
          uVar15 = *puVar3;
        }
        else {
          uVar15 = *puVar3;
          if ((uVar15 & 1) != 0) {
            uVar15 = (longlong)puVar3 + ((longlong)uVar15 >> 0x18);
          }
        }
        local_70 = (ulonglong)uVar7 * (longlong)iVar2 + uVar15;
        local_90 = (wchar_t *)0x0;
        uVar7 = *(uint *)(param_4 + 1);
        pvVar5 = (void *)*param_4;
        local_88 = CONCAT44(local_88._4_4_,uVar7);
        local_78 = lVar8;
        if ((longlong)(int)uVar7 == 0) {
          local_88 = (ulonglong)uVar7;
        }
        else {
          FUN_1446dd670(&local_90,uVar7,0);
          memcpy(local_90,pvVar5,(longlong)(int)uVar7 * 2);
        }
LAB_1490db4b6:
        local_80 = 0;
        uVar10 = FUN_1490db7be(param_1,&local_90);
        if (local_90 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1490db264;
      }
      if ((param_6 != (wchar_t **)0x0) && (*(int *)(param_6 + 1) < 2)) {
        if (*(int *)(param_4 + 1) == 0) {
          puVar13 = &DAT_149dfb77a;
        }
        else {
          puVar13 = (undefined2 *)*param_4;
        }
        FUN_140002266(&local_90,
                      L"Provided array index for path \'%s\' is out of bounds (num == %d).",puVar13,
                      (int)puVar3[1]);
        goto LAB_1490db2d1;
      }
      goto LAB_1490db261;
    }
    if ((param_6 == (wchar_t **)0x0) || (1 < *(int *)(param_6 + 1))) goto LAB_1490db261;
    puVar13 = &DAT_149dfb77a;
    if (*(int *)(param_4 + 1) != 0) {
      puVar13 = (undefined2 *)*param_4;
    }
    pwVar11 = L"";
    if ((int)uStack_60 != 0) {
      pwVar11 = local_68;
    }
    FUN_140002266(&local_90,L"Provided array index \'%s\' for path \'%s\' is invalid.",pwVar11,
                  puVar13);
LAB_1490db2d1:
    if (&local_90 == param_6) {
      if (local_90 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_6 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      *param_6 = local_90;
      local_90 = (wchar_t *)0x0;
      *(undefined4 *)(param_6 + 1) = (undefined4)local_88;
      *(undefined4 *)((longlong)param_6 + 0xc) = local_88._4_4_;
    }
  }
  else {
LAB_1490db1f8:
    puVar13 = (undefined2 *)*param_5;
LAB_1490db1fc:
    FUN_1446f470e(&local_90,puVar13,1);
    for (lVar8 = *(longlong *)(param_2 + 0x70); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x48)) {
      if (*(wchar_t **)(lVar8 + 0x20) == local_90) {
        local_b8 = param_6;
        cVar6 = (**(code **)(*param_1 + 0x2c8))(param_1,lVar8,param_4,1);
        if (cVar6 == '\0') goto LAB_1490db261;
        param_3 = param_3 + *(int *)(lVar8 + 0x44);
        local_90 = (wchar_t *)0x0;
        uVar7 = *(uint *)(param_4 + 1);
        pvVar5 = (void *)*param_4;
        local_88 = CONCAT44(local_88._4_4_,uVar7);
        local_78 = lVar8;
        local_70 = param_3;
        if ((longlong)(int)uVar7 == 0) {
          local_88 = (ulonglong)uVar7;
        }
        else {
          FUN_1446dd670(&local_90,uVar7,0);
          memcpy(local_90,pvVar5,(longlong)(int)uVar7 * 2);
        }
        goto LAB_1490db4b6;
      }
    }
LAB_1490db229:
    if (param_6 != (wchar_t **)0x0) {
LAB_1490db22e:
      if (*(int *)(param_6 + 1) < 2) {
        if (*(int *)(param_4 + 1) == 0) {
          puVar13 = &DAT_149dfb77a;
        }
        else {
          puVar13 = (undefined2 *)*param_4;
        }
        pwVar11 = L"UserData path \'%s\' could not be found.";
LAB_1490db2c4:
        FUN_140002266(&local_90,pwVar11,puVar13);
        goto LAB_1490db2d1;
      }
    }
  }
LAB_1490db261:
  uVar10 = 0;
LAB_1490db264:
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490db7a0 FUN_1490db7a0 body=30 status=ok
// SIG undefined FUN_1490db7a0(void)

longlong FUN_1490db7a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    do {
      if (*(longlong *)(lVar1 + 0x20) == *param_2) {
        return lVar1;
      }
      lVar1 = *(longlong *)(lVar1 + 0x48);
    } while (lVar1 != 0);
  }
  return 0;
}



// FUNCTION 1490db7be FUN_1490db7be body=329 status=ok
// SIG undefined FUN_1490db7be(void)

undefined8 * FUN_1490db7be(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 **local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  plVar8 = (longlong *)(param_1 + 0x38);
  iVar5 = *(int *)(param_2 + 1);
  if (iVar5 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  iVar1 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar7);
  iVar5 = FUN_1490eff30(plVar8,uVar4,param_2);
  if (iVar5 != -1) {
    if (((*plVar8 + (longlong)iVar5 * 0x20 != 0) &&
        (puVar6 = (undefined8 *)((longlong)iVar5 * 0x20 + *plVar8 + 0x10),
        puVar6 != (undefined8 *)0x0)) &&
       (puVar6 = (undefined8 *)*puVar6, puVar6 != (undefined8 *)0x0)) goto LAB_1490db84b;
  }
  local_58 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *local_58 = 0;
  iVar5 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(local_58 + 1) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)local_58 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_58,iVar5,0);
    memcpy((void *)*local_58,_Src,(longlong)iVar5 * 2);
  }
  local_58[4] = param_2[4];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(local_58 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)local_58 + 0x14) = uVar4;
  *(undefined4 *)(local_58 + 3) = uVar2;
  *(undefined4 *)((longlong)local_58 + 0x1c) = uVar3;
  local_48 = &local_58;
  local_50 = param_2;
  FUN_1490f11b8(plVar8,local_3c);
  puVar6 = local_58;
LAB_1490db84b:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490db908 FUN_1490db908 body=217 status=ok
// SIG undefined FUN_1490db908(void)

undefined8 * FUN_1490db908(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x10) == 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
    local_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x70))(plVar1,&local_48,&local_38,0);
    iVar2 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(&local_48,local_38,iVar2);
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_50,puVar3,1);
    *(undefined8 *)(param_1 + 0x10) = local_50;
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (undefined8 *)(param_1 + 0x10);
}



// FUNCTION 1490db9e2 FUN_1490db9e2 body=1043 status=ok
// SIG undefined FUN_1490db9e2(void)

void ** FUN_1490db9e2(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                     undefined8 param_5)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  void **ppvVar12;
  longlong lVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  LPCRITICAL_SECTION local_d8;
  longlong local_d0;
  undefined2 *local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined4 local_94;
  void *local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  longlong *local_68;
  int local_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1b);
  local_d0 = param_3;
  EnterCriticalSection(lpCriticalSection);
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_1490db000(&local_68,param_2);
  ppvVar12 = (void **)&DAT_14cc00b50;
  if ((longlong)local_60 != 0) {
    local_b8 = local_68 + local_60;
    local_b0 = param_1 + 7;
    plVar8 = local_68;
    local_d8 = lpCriticalSection;
    do {
      local_80 = *plVar8;
      if (local_80 == 0) {
        local_78 = 0;
      }
      else {
        local_78 = *(longlong *)(local_80 + 0x50);
      }
      local_70 = 0xffffffff;
      local_6c = 0;
      local_6a = 0;
      local_a8 = plVar8;
      while (FUN_144a2daf0(&local_80), lVar11 = local_78, lpCriticalSection = local_d8,
            local_78 != 0) {
        FUN_1468c80a4(local_78,&local_90);
        pvVar3 = local_90;
        if (*(int *)(param_4 + 1) < 2) {
          local_a0 = (undefined2 *)0x0;
          lVar13 = (longlong)local_88;
          local_98 = local_88;
          if (lVar13 == 0) {
            local_94 = 0;
          }
          else {
            FUN_1446dd670(&local_a0,local_88,0);
            memcpy(local_a0,pvVar3,lVar13 * 2);
          }
        }
        else {
          FUN_1490dbdf6(&local_a0,param_4,&local_90);
        }
        local_e8 = param_5;
        cVar5 = (**(code **)(*param_1 + 0x2c8))(param_1,lVar11,&local_a0,1);
        if (cVar5 != '\0') {
          puVar10 = &DAT_149dfb77a;
          if (local_98 != 0) {
            puVar10 = local_a0;
          }
          iVar1 = local_98 + -1;
          if (local_98 == 0) {
            iVar1 = 0;
          }
          uVar6 = FUN_144a49b4a(iVar1,puVar10);
          plVar8 = (longlong *)FUN_1490f00c8(local_b0,uVar6);
          if (*plVar8 == 0) {
            local_c0 = (longlong)*(int *)(lVar11 + 0x44);
            puVar9 = (undefined8 *)FUN_14001cc68(0x28,0x10);
            *puVar9 = 0;
            lVar13 = (longlong)local_98;
            *(int *)(puVar9 + 1) = local_98;
            if (lVar13 == 0) {
              *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
            }
            else {
              local_c8 = local_a0;
              FUN_1446dd670(puVar9,local_98,0);
              memcpy((void *)*puVar9,local_c8,lVar13 * 2);
            }
            puVar9[2] = 0;
            puVar9[3] = lVar11;
            puVar9[4] = local_c0 + local_d0;
            *plVar8 = (longlong)puVar9;
          }
          uVar4 = uStack_50;
          lVar11 = (longlong)(int)uStack_50;
          uVar7 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
          if (uStack_50._4_4_ < uVar7) {
            FUN_1490f0648(&local_58,uVar4 & 0xffffffff);
          }
          *(longlong *)((longlong)local_58 + lVar11 * 8) = *plVar8;
        }
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_90 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_78 = *(longlong *)(local_78 + 0x18);
      }
      plVar8 = local_a8 + 1;
    } while (plVar8 != local_b8);
    ppvVar12 = (void **)&DAT_14cc00b50;
    if ((int)uStack_50 != 0) {
      iVar1 = *(int *)(param_4 + 1);
      if (iVar1 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = (undefined2 *)*param_4;
      }
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar2,puVar10);
      ppvVar12 = (void **)FUN_1490f06ce(param_1 + 0x11,uVar6,param_4);
      pvVar3 = local_58;
      if ((ppvVar12 != &local_58) && (*(int *)(ppvVar12 + 1) == 0)) {
        iVar1 = (int)uStack_50;
        lVar11 = (longlong)(int)uStack_50;
        *(int *)(ppvVar12 + 1) = (int)uStack_50;
        if ((int)uStack_50 == 0 && *(int *)((longlong)ppvVar12 + 0xc) == 0) {
          *(undefined4 *)((longlong)ppvVar12 + 0xc) = 0;
        }
        else {
          FUN_1490f0c7a(ppvVar12,uStack_50 & 0xffffffff);
          if (iVar1 != 0) {
            memcpy(*ppvVar12,pvVar3,lVar11 << 3);
          }
        }
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return ppvVar12;
}



// FUNCTION 1490dbdf6 FUN_1490dbdf6 body=108 status=ok
// SIG undefined FUN_1490dbdf6(void)

undefined8 FUN_1490dbdf6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449b8608(local_30,param_2,&DAT_149e0635c);
  FUN_144a7dea0(param_1,local_30,param_3);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490dbe64 FUN_1490dbe64 body=88 status=ok
// SIG undefined FUN_1490dbe64(void)

undefined8 * FUN_1490dbe64(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1490f0c7a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1490dbebc FUN_1490dbebc body=900 status=ok
// SIG undefined FUN_1490dbebc(void)

void ** FUN_1490dbebc(longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 *param_4,
                     undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  void *_Src;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  void **ppvVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  byte local_c9;
  undefined8 *local_c8;
  LPCRITICAL_SECTION local_c0;
  longlong local_b8;
  undefined8 local_b0;
  ulonglong *local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  undefined2 *local_88;
  int local_80;
  void *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1b);
  EnterCriticalSection(lpCriticalSection);
  local_78 = (void *)0x0;
  uStack_70 = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  local_d8 = param_5;
  cVar4 = (**(code **)(*param_1 + 0x2c8))(param_1,uVar2,param_4,0);
  ppvVar11 = (void **)&DAT_14cc00b50;
  if (cVar4 != '\0') {
    local_c9 = *(byte *)(param_2 + 0x70);
    (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
    if (0 < (int)param_3[1]) {
      lVar14 = (longlong)*(int *)(*(longlong *)(param_2 + 0x78) + 0x34);
      local_a0 = param_1 + 7;
      lVar10 = 0;
      uVar13 = 0;
      local_c8 = param_4;
      local_c0 = lpCriticalSection;
      local_b8 = lVar14;
      local_b0 = uVar2;
      local_a8 = param_3;
      do {
        local_98[0] = 0;
        local_98[1] = 0;
        FUN_144a83b10(local_98,uVar13 & 0xffffffff);
        FUN_1490dbdf6(&local_88,param_4,local_98);
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
        puVar9 = &DAT_149dfb77a;
        if (local_80 != 0) {
          puVar9 = local_88;
        }
        iVar1 = local_80 + -1;
        if (local_80 == 0) {
          iVar1 = 0;
        }
        uVar5 = FUN_144a49b4a(iVar1,puVar9);
        plVar7 = (longlong *)FUN_1490f00c8(local_a0,uVar5,&local_88);
        if (*plVar7 == 0) {
          if ((int)param_3[1] == 0) {
            lVar14 = 0;
          }
          else {
            if ((local_c9 & 1) == 0) {
              uVar15 = *param_3;
            }
            else {
              uVar15 = *param_3;
              if ((uVar15 & 1) != 0) {
                uVar15 = ((longlong)uVar15 >> 0x18) + (longlong)param_3;
              }
            }
            lVar14 = uVar15 + lVar10;
          }
          puVar8 = (undefined8 *)FUN_14001cc68(0x28,0x10);
          puVar9 = local_88;
          *puVar8 = 0;
          lVar12 = (longlong)local_80;
          *(int *)(puVar8 + 1) = local_80;
          if (lVar12 == 0) {
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar8,local_80,0);
            memcpy((void *)*puVar8,puVar9,lVar12 * 2);
          }
          puVar8[2] = 0;
          puVar8[3] = local_b0;
          puVar8[4] = lVar14;
          *plVar7 = (longlong)puVar8;
          param_3 = local_a8;
          param_4 = local_c8;
          lVar14 = local_b8;
        }
        uVar15 = uStack_70;
        lVar12 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_1490f0648(&local_78,uVar15 & 0xffffffff);
        }
        *(longlong *)((longlong)local_78 + lVar12 * 8) = *plVar7;
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lpCriticalSection = local_c0;
        uVar13 = uVar13 + 1;
        lVar10 = lVar10 + lVar14;
      } while ((longlong)uVar13 < (longlong)(int)param_3[1]);
      ppvVar11 = (void **)&DAT_14cc00b50;
      if ((int)uStack_70 != 0) {
        iVar1 = *(int *)(param_4 + 1);
        if (iVar1 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        else {
          puVar9 = (undefined2 *)*param_4;
        }
        iVar3 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar3 = 0;
        }
        uVar5 = FUN_144a49b4a(iVar3,puVar9);
        ppvVar11 = (void **)FUN_1490f06ce(param_1 + 0x11,uVar5,param_4);
        _Src = local_78;
        if ((ppvVar11 != &local_78) && (*(int *)(ppvVar11 + 1) == 0)) {
          iVar1 = (int)uStack_70;
          lVar14 = (longlong)(int)uStack_70;
          *(int *)(ppvVar11 + 1) = (int)uStack_70;
          if ((int)uStack_70 == 0 && *(int *)((longlong)ppvVar11 + 0xc) == 0) {
            *(undefined4 *)((longlong)ppvVar11 + 0xc) = 0;
          }
          else {
            FUN_1490f0c7a(ppvVar11,uStack_70 & 0xffffffff);
            if (iVar1 != 0) {
              memcpy(*ppvVar11,_Src,lVar14 << 3);
            }
          }
        }
      }
    }
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return ppvVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490dc242 FUN_1490dc242 body=146 status=ok
// SIG undefined FUN_1490dc242(void)

undefined8 * FUN_1490dc242(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  
  if (*(int *)(param_3 + 8) == 0) {
    puVar5 = &DAT_14cc00b50;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
    iVar1 = *(int *)(param_2 + 1);
    if (iVar1 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    uVar3 = FUN_144a49b4a(iVar2,puVar4);
    puVar5 = (undefined8 *)FUN_1490f06ce(param_1 + 0x88,uVar3,param_2);
    if (*(int *)(puVar5 + 1) == 0) {
      FUN_1490dbe64(puVar5,param_3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  }
  return puVar5;
}



// FUNCTION 1490dc2d4 FUN_1490dc2d4 body=532 status=ok
// SIG undefined FUN_1490dc2d4(void)

ulonglong FUN_1490dc2d4(undefined8 param_1,longlong *param_2,undefined8 *param_3,char param_4,
                       longlong *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_4 == '\0') ||
     (((uint)((ulonglong)param_2[7] >> 0x23) & 1) == 0 && (param_2[7] & 0x20005U) != 0)) {
    lVar3 = param_2[1];
    lVar1 = FUN_144a7e162();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar7 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar7) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar7 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (!bVar7) goto LAB_1490dc476;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
LAB_1490dc476:
      lVar3 = param_2[1];
      lVar1 = FUN_1446ebfd4();
      if (*(ulonglong *)(lVar1 + 8) == 0) {
        bVar7 = lVar3 != 0;
        if (lVar3 != lVar1 && bVar7) {
          do {
            lVar3 = *(longlong *)(lVar3 + 0x30);
            bVar7 = lVar3 != 0;
            if (lVar3 == lVar1) break;
          } while (lVar3 != 0);
        }
        uVar2 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        if (!bVar7) goto LAB_1490dc314;
      }
      else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
        uVar2 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        goto LAB_1490dc314;
      }
    }
    if (param_5 != (longlong *)0x0) {
      uVar2 = 0;
      if (1 < (int)param_5[1]) goto LAB_1490dc314;
      local_48 = 0;
      uStack_40 = 0;
      (**(code **)(*param_2 + 0x70))(param_2,&local_58,&local_48,0);
      uVar4 = (ulonglong)((int)uStack_40 - 1);
      if ((int)uStack_40 == 0) {
        uVar4 = uVar2;
      }
      FUN_1400020e8(&local_58,local_48,uVar4);
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(param_3 + 1) != 0) {
        puVar6 = (undefined2 *)*param_3;
      }
      puVar5 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar5 = local_58;
      }
      FUN_140002266(&local_68,L"Unsupported user data type \'%s\' at path \'%s\'.",puVar5,puVar6);
      if (&local_68 == param_5) {
        if (local_68 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_5 != 0) {
          FUN_1400020a8();
        }
        *param_5 = local_68;
        local_68 = 0;
        *(undefined4 *)(param_5 + 1) = local_60;
        *(undefined4 *)((longlong)param_5 + 0xc) = local_5c;
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar2 = 0;
LAB_1490dc314:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1490dc4ea FUN_1490dc4ea body=237 status=ok
// SIG undefined FUN_1490dc4ea(void)

longlong FUN_1490dc4ea(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1490db07e();
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x128);
    if (lVar1 == 0) {
      if ((param_3 != (longlong *)0x0) && ((int)param_3[1] < 2)) {
        if (*(int *)(param_2 + 1) == 0) {
          puVar2 = &DAT_149dfb77a;
        }
        else {
          puVar2 = (undefined2 *)*param_2;
        }
        FUN_140002266(&local_38,L"User data path \'%s\' could not be found (DataAsset not provided)"
                      ,puVar2);
        if (&local_38 == param_3) {
          if (local_38 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_3 != 0) {
            FUN_1400020a8();
          }
          *param_3 = local_38;
          *(undefined4 *)(param_3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)param_3 + 0xc) = uStack_30._4_4_;
        }
      }
      lVar1 = 0;
    }
    else {
      local_48 = &local_38;
      local_38 = 0;
      uStack_30 = 0;
      local_40 = param_3;
      lVar1 = FUN_1490db19c(param_1,*(undefined8 *)(lVar1 + 0x10),lVar1,param_2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490dc5d8 FUN_1490dc5d8 body=561 status=ok
// SIG undefined FUN_1490dc5d8(void)

undefined8 * FUN_1490dc5d8(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_1490db108();
  if (*(int *)(puVar1 + 1) != 0) goto LAB_1490dc60d;
  lVar7 = param_1[0x25];
  if (lVar7 != 0) {
    local_58 = param_3;
    if (*(int *)(param_2 + 1) < 2) {
      uVar5 = *(undefined8 *)(lVar7 + 0x10);
LAB_1490dc7a8:
      FUN_1490db9e2(param_1,uVar5,lVar7,param_2);
      goto LAB_1490dc7b0;
    }
    lVar2 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    if (lVar2 != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x20);
      if (lVar7 == 0) {
        puVar1 = &DAT_14cc00b50;
        goto LAB_1490dc60d;
      }
      lVar8 = *(longlong *)(lVar2 + 0x18);
      if (lVar8 != 0) {
        lVar4 = *(longlong *)(lVar8 + 8);
        lVar3 = FUN_1446dcc8c();
        if (*(ulonglong *)(lVar3 + 8) == 0) {
          bVar9 = lVar4 != 0;
          if (lVar4 != lVar3 && bVar9) {
            do {
              lVar4 = *(longlong *)(lVar4 + 0x30);
              bVar9 = lVar4 != 0;
              if (lVar4 == lVar3) break;
            } while (lVar4 != 0);
          }
          if (bVar9) goto LAB_1490dc78a;
        }
        else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_1490dc78a:
          uVar5 = *(undefined8 *)(lVar8 + 0x70);
          goto LAB_1490dc7a8;
        }
        lVar2 = *(longlong *)(lVar2 + 0x18);
        if (lVar2 != 0) {
          lVar8 = *(longlong *)(lVar2 + 8);
          lVar4 = FUN_1446e6bbc();
          if (*(ulonglong *)(lVar4 + 8) == 0) {
            bVar9 = lVar8 != 0;
            if (lVar8 != lVar4 && bVar9) {
              do {
                lVar8 = *(longlong *)(lVar8 + 0x30);
                bVar9 = lVar8 != 0;
                if (lVar8 == lVar4) break;
              } while (lVar8 != 0);
            }
            if (bVar9) goto LAB_1490dc7fa;
          }
          else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) {
LAB_1490dc7fa:
            FUN_1490dbebc(param_1,lVar2,lVar7,param_2);
LAB_1490dc7b0:
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
          }
        }
      }
    }
  }
  puVar1 = &DAT_14cc00b50;
  if ((param_3 != (longlong *)0x0) && ((int)param_3[1] < 2)) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    FUN_140002266(&local_50,L"User data path \'%s\' could not be found (DataAsset not provided)",
                  puVar6);
    if (&local_50 == param_3) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_50;
      *(undefined4 *)(param_3 + 1) = local_48;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_44;
    }
  }
LAB_1490dc60d:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490dc812 FUN_1490dc812 body=84 status=ok
// SIG undefined FUN_1490dc812(void)

void FUN_1490dc812(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_141158ce6(param_1 + 2,param_2);
  return;
}



// FUNCTION 1490dc866 FUN_1490dc866 body=96 status=ok
// SIG undefined FUN_1490dc866(void)

void FUN_1490dc866(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_141158ce6(param_1 + 2,param_2);
  FUN_141158ce6(param_1 + 8,param_2);
  return;
}



// FUNCTION 1490dc8c6 FUN_1490dc8c6 body=108 status=ok
// SIG undefined FUN_1490dc8c6(void)

void FUN_1490dc8c6(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_141158ce6(param_1 + 2,param_2);
  FUN_141158ce6(param_1 + 8,param_2);
  FUN_141158ce6(param_1 + 0xe,param_2);
  return;
}



// FUNCTION 1490dc932 FUN_1490dc932 body=120 status=ok
// SIG undefined FUN_1490dc932(void)

void FUN_1490dc932(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_141158ce6(param_1 + 2,param_2);
  FUN_141158ce6(param_1 + 8,param_2);
  FUN_141158ce6(param_1 + 0xe,param_2);
  FUN_141158ce6(param_1 + 0x14,param_2);
  return;
}



// FUNCTION 1490dc9aa FUN_1490dc9aa body=144 status=ok
// SIG undefined FUN_1490dc9aa(void)

void FUN_1490dc9aa(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_141158ce6(param_1 + 2,param_2);
  FUN_141158ce6(param_1 + 8,param_2);
  FUN_141158ce6(param_1 + 0xe,param_2);
  FUN_141158ce6(param_1 + 0x14,param_2);
  FUN_141158ce6(param_1 + 0x1a,param_2);
  FUN_141158ce6(param_1 + 0x20,param_2);
  return;
}



// FUNCTION 1490dca3a FUN_1490dca3a body=108 status=ok
// SIG undefined FUN_1490dca3a(void)

void FUN_1490dca3a(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_141158ce6(param_1 + 2,param_2);
  FUN_141158ce6(param_1 + 8,param_2);
  FUN_141158ce6(param_1 + 0xe,param_2);
  return;
}



// FUNCTION 1490dcaa6 FUN_1490dcaa6 body=157 status=ok
// SIG undefined FUN_1490dcaa6(void)

void FUN_1490dcaa6(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 4);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001490dcb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,puVar3,4);
      return;
    }
    thunk_FUN_14572512c(param_2,puVar3);
    return;
  }
  *puVar3 = *puVar2;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 1490dcb44 FUN_1490dcb44 body=287 status=ok
// SIG undefined FUN_1490dcb44(void)

void FUN_1490dcb44(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_141158ce6(param_1 + 2,param_2);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 8,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    local_24 = (uint)(byte)param_1[0xc];
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    param_1[0xc] = local_24 != 0;
  }
  else {
    param_1[0xc] = *piVar3 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490dcc64 FUN_1490dcc64 body=183 status=ok
// SIG undefined FUN_1490dcc64(void)

void FUN_1490dcc64(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    FUN_1400021e4(param_1 + 4,&local_38);
    FUN_14021219d(param_2,&local_38);
  }
  else {
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    FUN_14021219d(param_2,&local_38);
    puVar1 = local_38;
    if ((int)uStack_30 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_40,puVar1,1);
    *(undefined8 *)(param_1 + 4) = local_40;
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490dcd1c FUN_1490dcd1c body=169 status=ok
// SIG undefined FUN_1490dcd1c(void)

void FUN_1490dcd1c(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_141158ce6(param_1 + 2,param_2);
  puVar3 = (undefined4 *)(param_1 + 8);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001490dcd9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,puVar3,4);
      return;
    }
    thunk_FUN_14572512c(param_2,puVar3);
    return;
  }
  *puVar3 = *puVar2;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 1490dcdc6 FUN_1490dcdc6 body=238 status=ok
// SIG undefined FUN_1490dcdc6(void)

void FUN_1490dcdc6(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_141158ce6(param_1 + 2,param_2);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 8,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = (undefined4 *)(param_1 + 0xc);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001490dce83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,puVar3,4);
      return;
    }
    thunk_FUN_14572512c(param_2,puVar3);
    return;
  }
  *puVar3 = *puVar2;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 1490dceb4 FUN_1490dceb4 body=1573 status=ok
// SIG undefined FUN_1490dceb4(void)

void FUN_1490dceb4(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 uVar15;
  void *pvVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  longlong *local_c8;
  longlong local_c0;
  void *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  ushort uStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined6 uStack_78;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8 = param_1;
  FUN_141157eea(&local_98,param_1,(char)param_1[0x15]);
  local_c0 = CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
  local_64 = CONCAT22(uStack_8e,uStack_90);
  puVar9 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar9 + 1;
  if ((int *)puVar9[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_64,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    local_64 = *(int *)*puVar9;
    *puVar9 = (ulonglong)piVar1;
  }
  if (0 < local_64) {
    lVar19 = 0;
    lVar20 = local_c0;
    do {
      lVar14 = lVar19 * 0x10;
      lVar18 = *(longlong *)(lVar20 + lVar14);
      bVar6 = *(byte *)(lVar20 + 9 + lVar14);
      local_b8 = (void *)CONCAT71(local_b8._1_7_,*(undefined1 *)(lVar20 + 8 + lVar14));
      puVar9 = (ulonglong *)param_2[1];
      pbVar2 = (byte *)*puVar9 + 1;
      if ((byte *)puVar9[1] < pbVar2) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_b8,1);
        uVar17 = (uint)local_b8 & 0xff;
      }
      else {
        bVar7 = *(byte *)*puVar9;
        uVar17 = (uint)bVar7;
        local_b8 = (void *)CONCAT71(local_b8._1_7_,bVar7);
        *puVar9 = (ulonglong)pbVar2;
      }
      switch(uVar17) {
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x45:
      case 0x46:
      case 0x53:
      case 0x62:
      case 0x67:
        uVar15 = *(undefined8 *)(*local_c8 + lVar18);
        local_98 = (undefined4)uVar15;
        uStack_94 = (ushort)((ulonglong)uVar15 >> 0x20);
        uStack_92 = (undefined2)((ulonglong)uVar15 >> 0x30);
        FUN_1490dc812();
        break;
      case 0x44:
        local_88 = *(undefined2 *)(*local_c8 + 0x10 + lVar18);
        puVar3 = (undefined4 *)(*local_c8 + lVar18);
        local_98 = *puVar3;
        uStack_94 = (ushort)puVar3[1];
        uStack_92 = (undefined2)((uint)puVar3[1] >> 0x10);
        uStack_90 = (undefined2)puVar3[2];
        uStack_8e = (undefined2)((uint)puVar3[2] >> 0x10);
        uStack_8c = (undefined2)puVar3[3];
        uStack_8a = (undefined2)((uint)puVar3[3] >> 0x10);
        FUN_145815998();
        break;
      case 0x47:
      case 0x48:
        uVar8 = *(undefined4 *)(*local_c8 + 0x10 + lVar18);
        local_88 = (undefined2)uVar8;
        uStack_86 = (undefined2)((uint)uVar8 >> 0x10);
        puVar3 = (undefined4 *)(*local_c8 + lVar18);
        local_98 = *puVar3;
        uStack_94 = (ushort)puVar3[1];
        uStack_92 = (undefined2)((uint)puVar3[1] >> 0x10);
        uStack_90 = (undefined2)puVar3[2];
        uStack_8e = (undefined2)((uint)puVar3[2] >> 0x10);
        uStack_8c = (undefined2)puVar3[3];
        uStack_8a = (undefined2)((uint)puVar3[3] >> 0x10);
        FUN_1490dca3a();
        break;
      case 0x49:
      case 0x4a:
      case 0x4b:
        uVar15 = *(undefined8 *)(*local_c8 + lVar18);
        local_98 = (undefined4)uVar15;
        uStack_94 = (ushort)((ulonglong)uVar15 >> 0x20);
        uStack_92 = (undefined2)((ulonglong)uVar15 >> 0x30);
        FUN_1490dcaa6();
        break;
      case 0x4c:
      case 0x4d:
      case 0x4e:
        puVar3 = (undefined4 *)(*local_c8 + lVar18);
        local_98 = *puVar3;
        uStack_94 = (ushort)puVar3[1];
        uStack_92 = (undefined2)((uint)puVar3[1] >> 0x10);
        uStack_90 = (undefined2)puVar3[2];
        uStack_8e = (undefined2)((uint)puVar3[2] >> 0x10);
        uStack_8c = (undefined2)puVar3[3];
        uStack_8a = (undefined2)((uint)puVar3[3] >> 0x10);
        FUN_1490dcb44();
        break;
      case 0x51:
      case 0x54:
      case 0x55:
      case 0x5a:
      case 0x5c:
      case 0x5d:
      case 0x5f:
        uVar15 = *(undefined8 *)(*local_c8 + lVar18);
        uVar10 = *(undefined8 *)(*local_c8 + 6 + lVar18);
        uStack_90 = (undefined2)((ulonglong)uVar10 >> 0x10);
        uStack_8e = (undefined2)((ulonglong)uVar10 >> 0x20);
        uStack_8c = (undefined2)((ulonglong)uVar10 >> 0x30);
        local_98 = (undefined4)uVar15;
        uStack_94 = (ushort)((ulonglong)uVar15 >> 0x20);
        uStack_92 = (undefined2)((ulonglong)uVar15 >> 0x30);
        FUN_1490dc866();
        break;
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x60:
      case 0x61:
        uVar8 = *(undefined4 *)(*local_c8 + 0x10 + lVar18);
        local_88 = (undefined2)uVar8;
        uStack_86 = (undefined2)((uint)uVar8 >> 0x10);
        puVar3 = (undefined4 *)(*local_c8 + lVar18);
        local_98 = *puVar3;
        uStack_94 = (ushort)puVar3[1];
        uStack_92 = (undefined2)((uint)puVar3[1] >> 0x10);
        uStack_90 = (undefined2)puVar3[2];
        uStack_8e = (undefined2)((uint)puVar3[2] >> 0x10);
        uStack_8c = (undefined2)puVar3[3];
        uStack_8a = (undefined2)((uint)puVar3[3] >> 0x10);
        FUN_1490dc8c6();
        break;
      case 0x5b:
        puVar3 = (undefined4 *)(*local_c8 + lVar18);
        local_98 = *puVar3;
        lVar18 = *local_c8 + 10 + lVar18;
        local_88 = (undefined2)((uint)*(undefined4 *)(lVar18 + 4) >> 0x10);
        uStack_86 = (undefined2)*(undefined4 *)(lVar18 + 8);
        uStack_84 = (undefined2)((uint)*(undefined4 *)(lVar18 + 8) >> 0x10);
        uStack_82 = (undefined2)*(undefined4 *)(lVar18 + 0xc);
        uStack_80 = (undefined2)((uint)*(undefined4 *)(lVar18 + 0xc) >> 0x10);
        uStack_94 = (ushort)puVar3[1];
        uStack_92 = (undefined2)((uint)puVar3[1] >> 0x10);
        uStack_90 = (undefined2)puVar3[2];
        uStack_8e = (undefined2)((uint)puVar3[2] >> 0x10);
        uStack_8c = (undefined2)puVar3[3];
        uStack_8a = (undefined2)((uint)puVar3[3] >> 0x10);
        FUN_1490dc932();
        break;
      case 0x5e:
        lVar14 = *local_c8;
        uStack_78 = (undefined6)((ulonglong)*(undefined8 *)(lVar14 + 0x1e + lVar18) >> 0x10);
        puVar3 = (undefined4 *)(lVar14 + lVar18);
        local_98 = *puVar3;
        puVar5 = (undefined4 *)(lVar14 + 0x10 + lVar18);
        local_88 = (undefined2)*puVar5;
        uStack_86 = (undefined2)((uint)*puVar5 >> 0x10);
        uStack_84 = (undefined2)puVar5[1];
        uStack_82 = (undefined2)((uint)puVar5[1] >> 0x10);
        uStack_80 = (undefined2)puVar5[2];
        uStack_7e = (undefined2)((uint)puVar5[2] >> 0x10);
        uStack_7c = (undefined2)puVar5[3];
        uStack_7a = (undefined2)((uint)puVar5[3] >> 0x10);
        uStack_94 = (ushort)puVar3[1];
        uStack_92 = (undefined2)((uint)puVar3[1] >> 0x10);
        uStack_90 = (undefined2)puVar3[2];
        uStack_8e = (undefined2)((uint)puVar3[2] >> 0x10);
        uStack_8c = (undefined2)puVar3[3];
        uStack_8a = (undefined2)((uint)puVar3[3] >> 0x10);
        FUN_1490dc9aa();
        break;
      case 99:
        uVar8 = *(undefined4 *)(*local_c8 + 8 + lVar18);
        uStack_90 = (undefined2)uVar8;
        uStack_8e = (undefined2)((uint)uVar8 >> 0x10);
        uVar15 = *(undefined8 *)(*local_c8 + lVar18);
        local_98 = (undefined4)uVar15;
        uStack_94 = (ushort)((ulonglong)uVar15 >> 0x20);
        uStack_92 = (undefined2)((ulonglong)uVar15 >> 0x30);
        FUN_1490dcc64();
        break;
      case 100:
        uVar8 = *(undefined4 *)(*local_c8 + 8 + lVar18);
        uStack_90 = (undefined2)uVar8;
        uStack_8e = (undefined2)((uint)uVar8 >> 0x10);
        uVar15 = *(undefined8 *)(*local_c8 + lVar18);
        local_98 = (undefined4)uVar15;
        uStack_94 = (ushort)((ulonglong)uVar15 >> 0x20);
        uStack_92 = (undefined2)((ulonglong)uVar15 >> 0x30);
        FUN_1490dcd1c();
        break;
      case 0x65:
        uStack_90 = *(undefined2 *)(*local_c8 + 8 + lVar18);
        uVar15 = *(undefined8 *)(*local_c8 + lVar18);
        local_98 = (undefined4)uVar15;
        uStack_94 = (ushort)((ulonglong)uVar15 >> 0x20);
        uStack_92 = (undefined2)((ulonglong)uVar15 >> 0x30);
        FUN_141158f46();
        lVar20 = local_c0;
        if (uStack_94 != 0) {
          lVar18 = lVar18 + *local_c8 + (ulonglong)bVar6;
          uVar17 = (uint)uStack_94;
          lVar14 = 0;
          do {
            local_a8 = CONCAT44(CONCAT22(local_a8._6_2_,*(undefined2 *)(lVar18 + 0xe + lVar14)),
                                *(undefined4 *)(lVar18 + 10 + lVar14));
            FUN_141158ce6();
            lVar14 = lVar14 + 6;
            lVar20 = local_c0;
          } while ((ulonglong)(uVar17 * 2) * 3 != lVar14);
        }
        break;
      case 0x66:
        puVar3 = (undefined4 *)(*local_c8 + lVar18);
        local_98 = *puVar3;
        uStack_94 = (ushort)puVar3[1];
        uStack_92 = (undefined2)((uint)puVar3[1] >> 0x10);
        uStack_90 = (undefined2)puVar3[2];
        uStack_8e = (undefined2)((uint)puVar3[2] >> 0x10);
        uStack_8c = (undefined2)puVar3[3];
        uStack_8a = (undefined2)((uint)puVar3[3] >> 0x10);
        FUN_1490dcdc6();
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < local_64);
  }
  if (DAT_14cc00658 == (longlong *)0x0) {
    uVar15 = FUN_1408ed7fc();
    DAT_14cc00658 = (longlong *)FUN_140002ddd(FUN_1466835d5,uVar15,L"RigVMByteCodeEntry");
  }
  plVar21 = local_c8;
  plVar11 = DAT_14cc00658;
  local_98 = 0;
  uStack_94 = 0;
  uStack_92 = 0;
  uStack_8c = 0;
  uStack_8a = 0;
  uVar17 = -*(int *)((longlong)DAT_14cc00658 + 0x5c) &
           ((int)DAT_14cc00658[0xb] + *(int *)((longlong)DAT_14cc00658 + 0x5c)) - 1U;
  uStack_90 = (undefined2)uVar17;
  uStack_8e = (undefined2)(uVar17 >> 0x10);
  if (uVar17 == 0) {
    pvVar16 = (void *)0x0;
  }
  else {
    FUN_1400ef140(&local_98);
    pvVar16 = (void *)CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
  }
  memset(pvVar16,0,(longlong)(int)uVar17);
  (**(code **)(*plVar11 + 0x380))(plVar11,CONCAT26(uStack_92,CONCAT24(uStack_94,local_98)));
  local_a8 = 0;
  uStack_a0 = 0;
  if (0 < (int)plVar21[4]) {
    uVar17 = 1;
    do {
      local_b8 = (void *)0x0;
      uStack_b0 = 0;
      local_d8 = 0;
      local_e8 = 0;
      local_d0 = 1;
      local_e0 = 0;
      FUN_1446df618(plVar11,&local_b8,(ulonglong)((uVar17 - 1 & 0xffff) * 0xc) + plVar21[3],
                    CONCAT26(uStack_92,CONCAT24(uStack_94,local_98)));
      uVar12 = uStack_a0;
      lVar20 = (longlong)(int)uStack_a0;
      uVar13 = (int)uStack_a0 + 1;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar13);
      if (uStack_a0._4_4_ < uVar13) {
        FUN_1447a1bd6(&local_a8,uVar12 & 0xffffffff);
      }
      pvVar16 = local_b8;
      lVar20 = lVar20 * 0x10;
      puVar4 = (undefined8 *)(local_a8 + lVar20);
      *(undefined8 *)(local_a8 + lVar20) = 0;
      lVar19 = (longlong)(int)uStack_b0;
      *(int *)(local_a8 + 8 + lVar20) = (int)uStack_b0;
      if (lVar19 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar4,uStack_b0 & 0xffffffff,0);
        memcpy((void *)*puVar4,pvVar16,lVar19 * 2);
      }
      plVar21 = local_c8;
      if (local_b8 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar13 = uVar17 & 0xffff;
      uVar17 = uVar17 + 1;
    } while ((int)uVar13 < (int)plVar21[4]);
  }
  FUN_1405d0c38(param_2,&local_a8);
  local_b8 = (void *)0x0;
  uVar17 = *(uint *)(plVar21 + 6);
  pvVar16 = (void *)plVar21[5];
  uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar17);
  if ((longlong)(int)uVar17 == 0) {
    uStack_b0 = (ulonglong)uVar17;
  }
  else {
    FUN_1490e88a6(&local_b8,uVar17,0);
    memcpy(local_b8,pvVar16,(longlong)(int)uVar17 * 0x18);
  }
  FUN_145815b54(param_2,&local_b8);
  FUN_14021219d(param_2,plVar21 + 9);
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (CONCAT26(uStack_92,CONCAT24(uStack_94,local_98)) != 0) {
    FUN_1400020a8();
  }
  if (local_c0 != 0) {
    FUN_1400020a8(local_c0);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490dd4da FUN_1490dd4da body=85 status=ok
// SIG undefined FUN_1490dd4da(void)

void FUN_1490dd4da(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  lVar3 = (longlong)iVar1;
  *(int *)(param_1 + 1) = iVar1 + 8;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 8) {
    FUN_1447403be(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + lVar3) = 0;
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *(undefined1 *)(lVar2 + 1 + lVar3) = 0;
  *(undefined1 *)(lVar2 + 3 + lVar3) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 1490dd530 FUN_1490dd530 body=107 status=ok
// SIG undefined FUN_1490dd530(void)

void FUN_1490dd530(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 0x14;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < 0x14) {
    FUN_1447403be(param_1,iVar2);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)(lVar3 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0;
  lVar3 = *param_1;
  uVar4 = param_2[1];
  *(undefined8 *)(lVar3 + lVar5) = *param_2;
  ((undefined8 *)(lVar3 + lVar5))[1] = uVar4;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)(lVar3 + 1 + lVar5) = 0;
  *(undefined1 *)(lVar3 + 3 + lVar5) = 0;
  *(undefined1 *)(lVar3 + 9 + lVar5) = 0;
  *(undefined1 *)(lVar3 + 0xf + lVar5) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 1490dd59c FUN_1490dd59c body=87 status=ok
// SIG undefined FUN_1490dd59c(void)

void FUN_1490dd59c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  lVar3 = (longlong)iVar1;
  *(int *)(param_1 + 1) = iVar1 + 8;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 8) {
    FUN_1447403be(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + lVar3) = 0;
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *(undefined1 *)(lVar2 + 3 + lVar3) = 0;
  *(undefined2 *)(lVar2 + 1 + lVar3) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 1490dd5f4 FUN_1490dd5f4 body=104 status=ok
// SIG undefined FUN_1490dd5f4(void)

void FUN_1490dd5f4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  *(int *)(param_1 + 1) = iVar1 + 0x10;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 0x10) {
    FUN_1447403be(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  ((undefined8 *)(lVar2 + lVar4))[1] = 0;
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)((longlong)param_2 + 5);
  *(undefined8 *)(lVar2 + lVar4) = *param_2;
  *(undefined8 *)(lVar2 + 5 + lVar4) = uVar3;
  *(undefined1 *)(lVar2 + 1 + lVar4) = 0;
  *(undefined1 *)(lVar2 + 3 + lVar4) = 0;
  *(undefined1 *)(lVar2 + 0xf + lVar4) = 0;
  *(undefined2 *)(lVar2 + 0xd + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 1490dd65c FUN_1490dd65c body=99 status=ok
// SIG undefined FUN_1490dd65c(void)

void FUN_1490dd65c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  *(int *)(param_1 + 1) = iVar1 + 0xe;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 0xe) {
    FUN_1447403be(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 6 + lVar4) = 0;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)((longlong)param_2 + 6);
  *(undefined8 *)(lVar2 + lVar4) = *param_2;
  *(undefined8 *)(lVar2 + 6 + lVar4) = uVar3;
  *(undefined1 *)(lVar2 + 1 + lVar4) = 0;
  *(undefined1 *)(lVar2 + 3 + lVar4) = 0;
  *(undefined1 *)(lVar2 + 9 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 1490dd6c0 FUN_1490dd6c0 body=107 status=ok
// SIG undefined FUN_1490dd6c0(void)

void FUN_1490dd6c0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 0x14;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < 0x14) {
    FUN_1447403be(param_1,iVar2);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)(lVar3 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0;
  lVar3 = *param_1;
  uVar4 = param_2[1];
  *(undefined8 *)(lVar3 + lVar5) = *param_2;
  ((undefined8 *)(lVar3 + lVar5))[1] = uVar4;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)(lVar3 + 1 + lVar5) = 0;
  *(undefined1 *)(lVar3 + 3 + lVar5) = 0;
  *(undefined1 *)(lVar3 + 9 + lVar5) = 0;
  *(undefined1 *)(lVar3 + 0xf + lVar5) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 1490dd72c FUN_1490dd72c body=110 status=ok
// SIG undefined FUN_1490dd72c(void)

void FUN_1490dd72c(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  iVar2 = (int)param_1[1];
  lVar7 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 0x1a;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < 0x1a) {
    FUN_1447403be(param_1,iVar2);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)(lVar3 + 10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = *param_1;
  uVar4 = param_2[1];
  uVar5 = *(undefined8 *)((longlong)param_2 + 10);
  uVar6 = *(undefined8 *)((longlong)param_2 + 0x12);
  *(undefined8 *)(lVar3 + lVar7) = *param_2;
  ((undefined8 *)(lVar3 + lVar7))[1] = uVar4;
  puVar1 = (undefined8 *)(lVar3 + 10 + lVar7);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  *(undefined1 *)(lVar3 + 1 + lVar7) = 0;
  *(undefined1 *)(lVar3 + 3 + lVar7) = 0;
  *(undefined1 *)(lVar3 + 9 + lVar7) = 0;
  *(undefined1 *)(lVar3 + 0xf + lVar7) = 0;
  *(undefined1 *)(lVar3 + 0x15 + lVar7) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 1490dd79a FUN_1490dd79a body=136 status=ok
// SIG undefined FUN_1490dd79a(void)

void FUN_1490dd79a(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  iVar2 = (int)param_1[1];
  lVar7 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 0x26;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < 0x26) {
    FUN_1447403be(param_1,iVar2);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + lVar7) = 0;
  ((undefined8 *)(lVar3 + lVar7))[1] = 0;
  *(undefined8 *)(lVar3 + 0x1e + lVar7) = 0;
  lVar3 = *param_1;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined8 *)(lVar3 + lVar7) = *param_2;
  ((undefined8 *)(lVar3 + lVar7))[1] = uVar4;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  *(undefined8 *)(lVar3 + 0x1e + lVar7) = *(undefined8 *)((longlong)param_2 + 0x1e);
  *(undefined1 *)(lVar3 + 1 + lVar7) = 0;
  *(undefined1 *)(lVar3 + 3 + lVar7) = 0;
  *(undefined1 *)(lVar3 + 9 + lVar7) = 0;
  *(undefined1 *)(lVar3 + 0xf + lVar7) = 0;
  *(undefined1 *)(lVar3 + 0x15 + lVar7) = 0;
  *(undefined1 *)(lVar3 + 0x1b + lVar7) = 0;
  *(undefined1 *)(lVar3 + 0x21 + lVar7) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 1490dd822 FUN_1490dd822 body=102 status=ok
// SIG undefined FUN_1490dd822(void)

void FUN_1490dd822(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  lVar3 = (longlong)iVar1;
  *(int *)(param_1 + 1) = iVar1 + 0xc;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 0xc) {
    FUN_1447403be(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined2 *)(lVar2 + 1 + lVar3) = 0;
  *(undefined1 *)(lVar2 + 3 + lVar3) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 1490dd888 FUN_1490dd888 body=100 status=ok
// SIG undefined FUN_1490dd888(void)

void FUN_1490dd888(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  lVar3 = (longlong)iVar1;
  *(int *)(param_1 + 1) = iVar1 + 0xc;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 0xc) {
    FUN_1447403be(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)(lVar2 + 1 + lVar3) = 0;
  *(undefined1 *)(lVar2 + 3 + lVar3) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 1490dd8ec FUN_1490dd8ec body=84 status=ok
// SIG undefined FUN_1490dd8ec(void)

void FUN_1490dd8ec(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  *(int *)(param_1 + 1) = iVar1 + 0x10;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 0x10) {
    FUN_1447403be(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  ((undefined8 *)(lVar2 + lVar4))[1] = 0;
  lVar2 = *param_1;
  uVar3 = param_2[1];
  *(undefined8 *)(lVar2 + lVar4) = *param_2;
  ((undefined8 *)(lVar2 + lVar4))[1] = uVar3;
  *(undefined1 *)(lVar2 + 1 + lVar4) = 0;
  *(undefined1 *)(lVar2 + 3 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 1490dd940 FUN_1490dd940 body=85 status=ok
// SIG undefined FUN_1490dd940(void)

void FUN_1490dd940(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  lVar3 = (longlong)iVar1;
  *(int *)(param_1 + 1) = iVar1 + 8;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 8) {
    FUN_1447403be(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + lVar3) = 0;
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *(undefined1 *)(lVar2 + 1 + lVar3) = 0;
  *(undefined1 *)(lVar2 + 3 + lVar3) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 1490dd996 FUN_1490dd996 body=353 status=ok
// SIG undefined FUN_1490dd996(void)

undefined4 FUN_1490dd996(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar2 = 0;
  }
  else {
    lVar6 = 0;
    uVar7 = 0;
    uVar2 = 0;
    do {
      FUN_1400021e4(*(longlong *)(param_1 + 0x18) + lVar6,&local_50);
      iVar3 = local_48 + -1;
      puVar4 = local_50;
      if (local_48 == 0) {
        iVar3 = 0;
        puVar4 = &DAT_149dfb77a;
      }
      uVar1 = FUN_144a49b4a(iVar3,puVar4);
      uVar2 = FUN_144a78877(uVar2,uVar1);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar2 = FUN_144a78877(uVar2,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar6));
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0xc;
    } while (uVar7 < *(uint *)(param_1 + 0x20));
  }
  FUN_141157eea(&local_50,param_1,*(undefined1 *)(param_1 + 0xa8));
  if ((longlong)local_48 != 0) {
    lVar6 = (longlong)local_48 << 4;
    puVar4 = local_50;
    do {
      uVar1 = FUN_1490ddaf8(param_1,puVar4);
      uVar2 = FUN_144a78877(uVar2,uVar1);
      puVar4 = puVar4 + 8;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x28);
    lVar5 = (longlong)*(int *)(param_1 + 0x30) * 0x18;
    do {
      uVar1 = FUN_1490ddcda(lVar6);
      uVar2 = FUN_144a78877(uVar2,uVar1);
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ddaf8 FUN_1490ddaf8 body=482 status=ok
// SIG undefined FUN_1490ddaf8(void)

ulonglong FUN_1490ddaf8(longlong *param_1,longlong *param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar3 = *param_2;
  lVar7 = *param_1;
  switch(*(undefined1 *)(lVar7 + (int)lVar3)) {
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x45:
  case 0x46:
  case 0x53:
  case 0x62:
  case 0x67:
    uVar1 = *(undefined2 *)(lVar7 + 6 + lVar3);
    uVar4 = FUN_144a78877(*(undefined1 *)(lVar7 + 2 + lVar3),*(undefined2 *)(lVar7 + 4 + lVar3));
    uVar4 = FUN_144a78877(uVar4,uVar1);
    uVar5 = (uint)*(byte *)(lVar7 + lVar3);
    break;
  case 0x44:
    uVar6 = FUN_1490ddd8b(lVar7 + lVar3);
    return uVar6;
  case 0x47:
  case 0x48:
    uVar6 = FUN_1490ddde7(lVar7 + lVar3);
    return uVar6;
  case 0x49:
  case 0x4a:
  case 0x4b:
    uVar5 = (uint)*(byte *)(lVar7 + lVar3);
    uVar4 = *(undefined4 *)(lVar7 + 4 + lVar3);
    break;
  case 0x4c:
  case 0x4d:
  case 0x4e:
    uVar6 = FUN_1490dde68(lVar7 + lVar3);
    return uVar6;
  default:
    return 0;
  case 0x50:
  case 0x52:
    return (ulonglong)*(byte *)(lVar7 + lVar3);
  case 0x51:
  case 0x54:
  case 0x55:
  case 0x5a:
  case 0x5c:
  case 0x5d:
  case 0x5f:
    uVar6 = FUN_1490ddeb0(lVar7 + lVar3);
    return uVar6;
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x60:
  case 0x61:
    uVar6 = FUN_1490ddf0c(lVar7 + lVar3);
    return uVar6;
  case 0x5b:
    uVar6 = FUN_1490ddf8d(lVar7 + lVar3);
    return uVar6;
  case 0x5e:
    uVar6 = FUN_1490de033(lVar7 + lVar3);
    return uVar6;
  case 99:
    uVar6 = FUN_1490de123(lVar7 + lVar3);
    return uVar6;
  case 100:
    uVar5 = (uint)*(byte *)(lVar7 + lVar3);
    uVar4 = *(undefined4 *)(lVar7 + 8 + lVar3);
    break;
  case 0x65:
    uVar4 = FUN_144a78877(*(undefined2 *)(lVar7 + 2 + lVar3),*(undefined2 *)(lVar7 + 4 + lVar3));
    uVar5 = FUN_144a78877(*(undefined1 *)(lVar7 + lVar3),uVar4);
    uVar6 = (ulonglong)uVar5;
    uVar2 = *(ushort *)(*param_1 + 4 + *param_2);
    if (uVar2 == 0) {
      return uVar6;
    }
    lVar3 = *param_1 + *param_2 + (ulonglong)*(byte *)((longlong)param_2 + 9);
    lVar7 = 0;
    do {
      uVar1 = *(undefined2 *)(lVar3 + 0xe + lVar7);
      uVar4 = FUN_144a78877(*(undefined1 *)(lVar3 + 10 + lVar7),*(undefined2 *)(lVar3 + 0xc + lVar7)
                           );
      uVar4 = FUN_144a78877(uVar4,uVar1);
      uVar5 = FUN_144a78877(uVar6,uVar4);
      uVar6 = (ulonglong)uVar5;
      lVar7 = lVar7 + 6;
    } while ((ulonglong)((uint)uVar2 * 2) * 3 != lVar7);
    return uVar6;
  case 0x66:
    uVar5 = FUN_144a78877(*(undefined1 *)(lVar7 + lVar3),*(undefined4 *)(lVar7 + 8 + lVar3));
    uVar4 = *(undefined4 *)(lVar7 + 0xc + lVar3);
  }
  uVar6 = FUN_144a78877(uVar5,uVar4);
  return uVar6;
}



// FUNCTION 1490ddcda FUN_1490ddcda body=176 status=ok
// SIG undefined FUN_1490ddcda(void)

void FUN_1490ddcda(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_1;
  FUN_1400021e4(param_1 + 1,&local_30);
  puVar4 = local_30;
  if (local_28 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  uVar3 = FUN_144a78877(uVar3,uVar2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_144a78877(uVar3,param_1[3]);
  uVar3 = FUN_144a78877(uVar3,param_1[4]);
  uVar3 = FUN_144a78877(uVar3,*(undefined2 *)(param_1 + 5));
  FUN_144a78877(uVar3,*(undefined2 *)((longlong)param_1 + 0x16));
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490ddd8b FUN_1490ddd8b body=92 status=ok
// SIG undefined FUN_1490ddd8b(void)

void FUN_1490ddd8b(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  uVar2 = *(undefined2 *)(param_1 + 6);
  uVar3 = FUN_144a78877(param_1[2],*(undefined2 *)(param_1 + 4));
  uVar3 = FUN_144a78877(uVar3,uVar2);
  uVar3 = FUN_144a78877(uVar1,uVar3);
  uVar2 = *(undefined2 *)(param_1 + 0xc);
  uVar4 = FUN_144a78877(param_1[8],*(undefined2 *)(param_1 + 10));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  FUN_144a78877(uVar3,uVar4);
  return;
}



// FUNCTION 1490ddde7 FUN_1490ddde7 body=129 status=ok
// SIG undefined FUN_1490ddde7(void)

void FUN_1490ddde7(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  uVar2 = *(undefined2 *)(param_1 + 6);
  uVar3 = FUN_144a78877(param_1[2],*(undefined2 *)(param_1 + 4));
  uVar3 = FUN_144a78877(uVar3,uVar2);
  uVar3 = FUN_144a78877(uVar1,uVar3);
  uVar2 = *(undefined2 *)(param_1 + 0xc);
  uVar4 = FUN_144a78877(param_1[8],*(undefined2 *)(param_1 + 10));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  uVar2 = *(undefined2 *)(param_1 + 0x12);
  uVar4 = FUN_144a78877(param_1[0xe],*(undefined2 *)(param_1 + 0x10));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  FUN_144a78877(uVar3,uVar4);
  return;
}



// FUNCTION 1490dde68 FUN_1490dde68 body=72 status=ok
// SIG undefined FUN_1490dde68(void)

void FUN_1490dde68(undefined1 *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined2 *)(param_1 + 6);
  uVar2 = FUN_144a78877(param_1[2],*(undefined2 *)(param_1 + 4));
  uVar2 = FUN_144a78877(uVar2,uVar1);
  uVar2 = FUN_144a78877(*param_1,uVar2);
  uVar2 = FUN_144a78877(uVar2,*(undefined4 *)(param_1 + 8));
  FUN_144a78877(uVar2,param_1[0xc]);
  return;
}



// FUNCTION 1490ddeb0 FUN_1490ddeb0 body=92 status=ok
// SIG undefined FUN_1490ddeb0(void)

void FUN_1490ddeb0(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  uVar2 = *(undefined2 *)(param_1 + 6);
  uVar3 = FUN_144a78877(param_1[2],*(undefined2 *)(param_1 + 4));
  uVar3 = FUN_144a78877(uVar3,uVar2);
  uVar3 = FUN_144a78877(uVar1,uVar3);
  uVar2 = *(undefined2 *)(param_1 + 0xc);
  uVar4 = FUN_144a78877(param_1[8],*(undefined2 *)(param_1 + 10));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  FUN_144a78877(uVar3,uVar4);
  return;
}



// FUNCTION 1490ddf0c FUN_1490ddf0c body=129 status=ok
// SIG undefined FUN_1490ddf0c(void)

void FUN_1490ddf0c(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  uVar2 = *(undefined2 *)(param_1 + 6);
  uVar3 = FUN_144a78877(param_1[2],*(undefined2 *)(param_1 + 4));
  uVar3 = FUN_144a78877(uVar3,uVar2);
  uVar3 = FUN_144a78877(uVar1,uVar3);
  uVar2 = *(undefined2 *)(param_1 + 0xc);
  uVar4 = FUN_144a78877(param_1[8],*(undefined2 *)(param_1 + 10));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  uVar2 = *(undefined2 *)(param_1 + 0x12);
  uVar4 = FUN_144a78877(param_1[0xe],*(undefined2 *)(param_1 + 0x10));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  FUN_144a78877(uVar3,uVar4);
  return;
}



// FUNCTION 1490ddf8d FUN_1490ddf8d body=166 status=ok
// SIG undefined FUN_1490ddf8d(void)

void FUN_1490ddf8d(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  uVar2 = *(undefined2 *)(param_1 + 6);
  uVar3 = FUN_144a78877(param_1[2],*(undefined2 *)(param_1 + 4));
  uVar3 = FUN_144a78877(uVar3,uVar2);
  uVar3 = FUN_144a78877(uVar1,uVar3);
  uVar2 = *(undefined2 *)(param_1 + 0xc);
  uVar4 = FUN_144a78877(param_1[8],*(undefined2 *)(param_1 + 10));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  uVar2 = *(undefined2 *)(param_1 + 0x12);
  uVar4 = FUN_144a78877(param_1[0xe],*(undefined2 *)(param_1 + 0x10));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  uVar2 = *(undefined2 *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(param_1[0x14],*(undefined2 *)(param_1 + 0x16));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  FUN_144a78877(uVar3,uVar4);
  return;
}



// FUNCTION 1490de033 FUN_1490de033 body=240 status=ok
// SIG undefined FUN_1490de033(void)

void FUN_1490de033(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  uVar2 = *(undefined2 *)(param_1 + 6);
  uVar3 = FUN_144a78877(param_1[2],*(undefined2 *)(param_1 + 4));
  uVar3 = FUN_144a78877(uVar3,uVar2);
  uVar3 = FUN_144a78877(uVar1,uVar3);
  uVar2 = *(undefined2 *)(param_1 + 0xc);
  uVar4 = FUN_144a78877(param_1[8],*(undefined2 *)(param_1 + 10));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  uVar2 = *(undefined2 *)(param_1 + 0x12);
  uVar4 = FUN_144a78877(param_1[0xe],*(undefined2 *)(param_1 + 0x10));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  uVar2 = *(undefined2 *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(param_1[0x14],*(undefined2 *)(param_1 + 0x16));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  uVar2 = *(undefined2 *)(param_1 + 0x1e);
  uVar4 = FUN_144a78877(param_1[0x1a],*(undefined2 *)(param_1 + 0x1c));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  uVar2 = *(undefined2 *)(param_1 + 0x24);
  uVar4 = FUN_144a78877(param_1[0x20],*(undefined2 *)(param_1 + 0x22));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  FUN_144a78877(uVar3,uVar4);
  return;
}



// FUNCTION 1490de123 FUN_1490de123 body=133 status=ok
// SIG undefined FUN_1490de123(void)

undefined4 FUN_1490de123(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_1 + 4,&local_28);
  puVar3 = local_28;
  if (local_20 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar1 = local_20 + -1;
  if (local_20 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar3);
  uVar2 = FUN_144a78877(*param_1,uVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1490de1aa FUN_1490de1aa body=182 status=ok
// SIG undefined FUN_1490de1aa(void)

void FUN_1490de1aa(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  lVar1 = 0;
  switch((char)param_3[1]) {
  case 'A':
  case 'B':
  case 'C':
  case 'E':
  case 'F':
  case 'L':
  case 'M':
  case 'N':
  case 'S':
  case 'b':
  case 'd':
  case 'f':
  case 'g':
    lVar1 = *param_3 + *param_1 + 2;
    uVar2 = 1;
    break;
  case 'D':
  case 'Q':
  case 'T':
  case 'U':
  case 'Z':
  case '\\':
  case ']':
  case '_':
    lVar1 = *param_3 + *param_1 + 2;
    uVar2 = 2;
    break;
  case 'G':
  case 'H':
  case 'V':
  case 'W':
  case 'X':
  case 'Y':
  case '`':
  case 'a':
    lVar1 = *param_3 + *param_1 + 2;
    uVar2 = 3;
    break;
  case '[':
    lVar1 = *param_3 + *param_1 + 2;
    uVar2 = 4;
    break;
  case '^':
    lVar1 = *param_3 + *param_1 + 2;
    uVar2 = 6;
    break;
  case 'e':
    uVar2 = (uint)*(ushort *)(*param_1 + 4 + *param_3);
    lVar1 = (ulonglong)*(byte *)((longlong)param_3 + 9) + *param_1 + *param_3 + 10;
  }
  *param_2 = lVar1;
  *(uint *)(param_2 + 1) = uVar2;
  return;
}



// FUNCTION 1490de260 FUN_1490de260 body=193 status=ok
// SIG undefined FUN_1490de260(void)

undefined8 FUN_1490de260(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *(undefined2 **)(*(longlong *)(param_1 + 8) + 0x18);
  FUN_1400021e4(&local_30,&local_40);
  puVar1 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar1 = local_40;
  }
  FUN_140002266(&local_30,L"%s%s",PTR_u_DISPATCH__14c764e58,puVar1);
  puVar1 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar1 = local_30;
  }
  FUN_1446f470e(param_2,puVar1,1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490de322 FUN_1490de322 body=49 status=ok
// SIG undefined FUN_1490de322(void)

undefined8 * FUN_1490de322(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x28))();
  *param_2 = *(undefined8 *)(*plVar1 + (longlong)param_3 * 0x50);
  return param_2;
}



// FUNCTION 1490de354 FUN_1490de354 body=106 status=ok
// SIG undefined FUN_1490de354(void)

undefined8 * FUN_1490de354(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc00858) {
    FUN_144b3d300(&DAT_14cc00858);
    if (DAT_14cc00858 == -1) {
      DAT_14cc00848 = 0;
      uRam000000014cc00850 = 0;
      atexit((_func_5014 *)&LAB_144466cc5);
      _Init_thread_footer(&DAT_14cc00858);
    }
  }
  return &DAT_14cc00848;
}



// FUNCTION 1490de3be FUN_1490de3be body=381 status=ok
// SIG undefined FUN_1490de3be(void)

longlong FUN_1490de3be(longlong *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_2;
  plVar4 = (longlong *)FUN_1490f1c94(param_1 + 3);
  if (*plVar4 != 0) goto LAB_1490de3f7;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = 0;
  puVar5[1] = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bad5600;
  plVar6[2] = (longlong)puVar5;
  *plVar4 = (longlong)puVar5;
  plVar3 = (longlong *)plVar4[1];
  if (plVar6 == plVar3) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar7 = *piVar1;
        UNLOCK();
        plVar3 = plVar6;
        goto joined_r0x0001490de4ac;
      }
    }
  }
  else {
    plVar4[1] = (longlong)plVar6;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar3 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar7 = *piVar1;
        UNLOCK();
joined_r0x0001490de4ac:
        if (iVar7 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if (local_3c < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_3c);
  }
  if (*(int *)(*plVar4 + 0xc) < local_3c) {
    FUN_1402191ca(*plVar4,local_3c);
  }
  if (0 < local_3c) {
    iVar7 = 0;
    do {
      plVar3 = (longlong *)*plVar4;
      (**(code **)(*param_1 + 8))(param_1,&local_48,iVar7);
      iVar2 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
        FUN_1446f84a2(plVar3,iVar2);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar2 * 8) = local_48;
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_3c);
  }
LAB_1490de3f7:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490de53e FUN_1490de53e body=106 status=ok
// SIG undefined FUN_1490de53e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1490de53e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc00870) {
    FUN_144b3d300(&DAT_14cc00870);
    if (DAT_14cc00870 == -1) {
      DAT_14cc00860 = 0;
      _DAT_14cc00868 = 0;
      atexit(FUN_144466cd6);
      _Init_thread_footer(&DAT_14cc00870);
    }
  }
  return &DAT_14cc00860;
}


