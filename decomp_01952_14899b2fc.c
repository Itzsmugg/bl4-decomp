// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14899b2fc FUN_14899b2fc body=110 status=ok
// SIG undefined FUN_14899b2fc(void)

void FUN_14899b2fc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b42ea20;
  FUN_140ea9bfb(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xf];
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
  FUN_14024cf5a(param_1);
  return;
}



// FUNCTION 14899b36a FUN_14899b36a body=83 status=ok
// SIG undefined FUN_14899b36a(void)

longlong * FUN_14899b36a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_146510af0();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14899b3be FUN_14899b3be body=9 status=ok
// SIG undefined FUN_14899b3be(void)

void FUN_14899b3be(longlong param_1)

{
  FUN_14899b7aa(param_1 + 0x10);
  return;
}



// FUNCTION 14899b3c8 FUN_14899b3c8 body=29 status=ok
// SIG undefined FUN_14899b3c8(void)

undefined8 FUN_14899b3c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899b3e6 FUN_14899b3e6 body=38 status=ok
// SIG undefined FUN_14899b3e6(void)

undefined8 FUN_14899b3e6(undefined8 param_1,int param_2)

{
  FUN_14899b7aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899b40c FUN_14899b40c body=153 status=ok
// SIG undefined FUN_14899b40c(void)

void FUN_14899b40c(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (undefined4)param_1[0x13];
  local_28 = param_1;
  (**(code **)(*param_1 + 0xb0))();
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_14899b781(param_1[0x12],(int)param_1[0x13]);
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (*(int *)((longlong)param_1 + 0x9c) != 0) {
    FUN_14899b858(param_1 + 0x12);
  }
  FUN_14899b814(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899b4a6 FUN_14899b4a6 body=183 status=ok
// SIG undefined FUN_14899b4a6(void)

void FUN_14899b4a6(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)(param_1 + 0x98);
  local_38 = param_1;
  (**(code **)(*param_2 + 0x20))(param_2);
  uVar3 = (ulonglong)*(int *)(param_1 + 0x98);
  if (0 < (longlong)uVar3) {
    lVar4 = uVar3 << 6;
    do {
      lVar4 = lVar4 + -0x40;
      if (*(int *)(param_1 + 0x88) < 1) break;
      cVar2 = (**(code **)(*param_2 + 0x28))(param_2,*(longlong *)(param_1 + 0x90) + lVar4);
      if (cVar2 != '\0') {
        FUN_14899b888(param_1,(int)uVar3 + -1);
      }
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  FUN_14899b814(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14899b55e FUN_14899b55e body=161 status=ok
// SIG undefined FUN_14899b55e(void)

void FUN_14899b55e(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(int *)(param_1 + 0x98);
  uVar2 = (ulonglong)local_30;
  local_38 = param_1;
  if (0 < (longlong)uVar2) {
    lVar3 = uVar2 * 0x40 + -0x3c;
    do {
      if (*(int *)(param_1 + 0x84) < 1) break;
      if (*(longlong *)(*(longlong *)(param_1 + 0x90) + lVar3) == *param_2) {
        FUN_14899b888(param_1,(int)uVar2 + -1);
      }
      lVar3 = lVar3 + -0x40;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  FUN_14899b814(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14899b606 FUN_14899b606 body=176 status=ok
// SIG undefined FUN_14899b606(void)

void FUN_14899b606(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48 [2];
  longlong *local_38;
  undefined4 local_30;
  undefined1 local_24 [4];
  undefined8 local_20;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[0xe] + 0x38 != 0) {
    local_30 = (undefined4)param_1[0x13];
    local_58 = local_48;
    local_48[0] = 0;
    local_48[1] = 0;
    local_24[0] = 1;
    local_20 = 0xffffffff;
    local_14 = 0;
    local_38 = param_1;
    cVar1 = (**(code **)(*param_1 + 0xb8))(param_1,local_24,param_1[0xe] + 0x38,param_2);
    if (cVar1 != '\0') {
      FUN_14899b9f2(param_1,local_48);
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14899b814(&local_38);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899b6e2 FUN_14899b6e2 body=113 status=ok
// SIG undefined FUN_14899b6e2(void)

undefined8 FUN_14899b6e2(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  longlong *plVar7;
  
  plVar7 = param_1;
  if (param_3 != (longlong *)0x0) {
    plVar7 = param_3;
    lVar2 = (**(code **)(*param_3 + 8))(param_3);
    lVar3 = FUN_146510a58();
    if (((lVar3 != 0) &&
        (plVar7 = (longlong *)(longlong)*(int *)(lVar3 + 0x38),
        *(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)plVar7 * 8) == lVar3 + 0x30)) {
      uVar4 = FUN_143e4532c(param_1,param_2,param_4,param_3);
      bVar6 = (byte)uVar4;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar1 = 1;
      goto LAB_14899b72e;
    }
  }
  bVar6 = (byte)plVar7;
  bVar1 = 0;
  uVar5 = 0;
LAB_14899b72e:
  return CONCAT71(uVar5,bVar1 & bVar6);
}



// FUNCTION 14899b756 FUN_14899b756 body=38 status=ok
// SIG undefined FUN_14899b756(void)

undefined8 FUN_14899b756(undefined8 param_1,int param_2)

{
  FUN_14899b7aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899b781 FUN_14899b781 body=40 status=ok
// SIG undefined FUN_14899b781(void)

void FUN_14899b781(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x14);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      if (*(int *)(pcVar1 + -0x10) != -1) {
        pcVar1[-0x10] = -1;
        pcVar1[-0xf] = -1;
        pcVar1[-0xe] = -1;
        pcVar1[-0xd] = -1;
        pcVar1[-0xc] = '\0';
        pcVar1[-0xb] = '\0';
        pcVar1[-10] = '\0';
        pcVar1[-9] = '\0';
      }
      pcVar1 = pcVar1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14899b7aa FUN_14899b7aa body=106 status=ok
// SIG undefined FUN_14899b7aa(void)

void FUN_14899b7aa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b42ebe0;
  FUN_14899b781(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xf];
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
  FUN_14024cf5a(param_1);
  return;
}



// FUNCTION 14899b814 FUN_14899b814 body=68 status=ok
// SIG undefined FUN_14899b814(void)

void FUN_14899b814(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if ((int)plVar1[0x13] == (int)param_1[1]) {
    return;
  }
  (**(code **)(*plVar1 + 200))(plVar1);
  FUN_140c5f00a(plVar1);
  FUN_140ce80dc(*(undefined8 *)(*param_1 + 0x38));
  return;
}



// FUNCTION 14899b858 FUN_14899b858 body=48 status=ok
// SIG undefined FUN_14899b858(void)

void FUN_14899b858(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 14899b888 FUN_14899b888 body=107 status=ok
// SIG undefined FUN_14899b888(void)

void FUN_14899b888(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2 * 0x40;
  (**(code **)(*param_1 + 0xc0))(param_1,param_1[0x12] + lVar2);
  lVar1 = param_1[0x12] + lVar2;
  if ((*(byte *)(param_1[0x12] + 0x1c + lVar2) & 1) != 0) {
    *(int *)(param_1 + 0x11) = (int)param_1[0x11] + -1;
  }
  if (*(int *)(lVar1 + 4) != -1) {
    *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) + -1;
  }
  if (*(char *)(lVar1 + 0x14) == '\x01') {
    *(int *)(param_1 + 0x10) = (int)param_1[0x10] + -1;
  }
  FUN_14899b8f4(param_1 + 0x12,param_2);
  return;
}



// FUNCTION 14899b8f4 FUN_14899b8f4 body=98 status=ok
// SIG undefined FUN_14899b8f4(void)

void FUN_14899b8f4(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0x40);
  if (*(char *)(*param_1 + 0x14 + (longlong)(int)param_2 * 0x40) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0x14) = 0;
  }
  if (*(int *)((longlong)_Dst + 4) != -1) {
    *(undefined8 *)((longlong)_Dst + 4) = 0xffffffff;
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(int)(~param_2 + iVar1) << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_14899b956(param_1);
  return;
}



// FUNCTION 14899b956 FUN_14899b956 body=62 status=ok
// SIG undefined FUN_14899b956(void)

void FUN_14899b956(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14899b994(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 14899b994 FUN_14899b994 body=93 status=ok
// SIG undefined FUN_14899b994(void)

ulonglong FUN_14899b994(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 14899b9f2 FUN_14899b9f2 body=112 status=ok
// SIG undefined FUN_14899b9f2(void)

void FUN_14899b9f2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar3 = (int *)*param_2;
    piVar1 = piVar3 + *(int *)(param_2 + 1);
    do {
      if ((longlong)*(int *)(param_1 + 0x98) != 0) {
        lVar4 = 0;
        iVar2 = 0;
        do {
          if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x18 + lVar4) == *piVar3) {
            if (iVar2 != 1) {
              FUN_14899b888(param_1);
            }
            break;
          }
          iVar2 = iVar2 + -1;
          lVar4 = lVar4 + 0x40;
        } while ((longlong)*(int *)(param_1 + 0x98) * 0x40 != lVar4);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return;
}



// FUNCTION 14899ba62 FUN_14899ba62 body=220 status=ok
// SIG undefined FUN_14899ba62(void)

void FUN_14899ba62(longlong param_1,byte *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_143e45696();
  pbVar3 = (byte *)FUN_14899bb3e(param_1 + 0x90,uVar2);
  *(int *)pbVar3 = (int)param_3[4];
  pbVar3[0x1c] = pbVar3[0x1c] & 0xfe | *param_2;
  if (pbVar3 != param_2) {
    if (*(int *)(param_2 + 4) == -1) {
      if (*(int *)(pbVar3 + 4) == -1) goto LAB_14899bab4;
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 4);
    }
    *(undefined8 *)(pbVar3 + 4) = uVar5;
  }
LAB_14899bab4:
  if (param_2 + 0xc != pbVar3 + 0x10) {
    if (param_2[0x10] == 1) {
      *(undefined4 *)(pbVar3 + 0x10) = *(undefined4 *)(param_2 + 0xc);
      bVar4 = 1;
    }
    else {
      if (pbVar3[0x14] != 1) goto LAB_14899bad4;
      bVar4 = 0;
    }
    pbVar3[0x14] = bVar4;
  }
LAB_14899bad4:
  *(undefined4 *)(pbVar3 + 0xc) = *(undefined4 *)(*param_3 + 0x14c);
  iVar1 = *(int *)(param_1 + 0x8c);
  *(int *)(param_1 + 0x8c) = iVar1 + 1;
  *(int *)(pbVar3 + 0x18) = iVar1;
  if ((pbVar3[0x1c] & 1) != 0) {
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  }
  if (*(int *)(pbVar3 + 4) != -1) {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  }
  if (pbVar3[0x14] == 1) {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  }
  return;
}



// FUNCTION 14899bb3e FUN_14899bb3e body=95 status=ok
// SIG undefined FUN_14899bb3e(void)

longlong FUN_14899bb3e(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) == iVar1) {
    FUN_14899bbca(param_1,iVar1);
  }
  lVar3 = (longlong)param_2 * 0x40;
  memmove((void *)(*param_1 + lVar3 + 0x40),(void *)(*param_1 + lVar3),
          (ulonglong)(uint)(iVar1 - param_2) << 6);
  lVar2 = *param_1;
  FUN_14899bb9d(lVar3 + lVar2);
  return lVar3 + lVar2;
}



// FUNCTION 14899bb9d FUN_14899bb9d body=45 status=ok
// SIG undefined FUN_14899bb9d(void)

void FUN_14899bb9d(undefined4 *param_1)

{
  *param_1 = DAT_14cb8c3a0;
  *(undefined8 *)(param_1 + 1) = 0xffffffff;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  return;
}



// FUNCTION 14899bbca FUN_14899bbca body=132 status=ok
// SIG undefined FUN_14899bbca(void)

void FUN_14899bbca(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14899bc50 FUN_14899bc50 body=167 status=ok
// SIG undefined FUN_14899bc50(void)

void FUN_14899bc50(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x28) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x30) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x28) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x30);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x28) = param_2;
    if (*(longlong **)(param_2 + 0x30) == plVar2) goto LAB_14899bccb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x30);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x30) = plVar2;
      goto LAB_14899bccb;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x30) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14899bccb:
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
                    /* WARNING: Could not recover jumptable at 0x00014899bceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14899bcf7 FUN_14899bcf7 body=279 status=ok
// SIG undefined FUN_14899bcf7(void)

void FUN_14899bcf7(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x00014899bd18:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) && ((int)param_1[iVar6] <= (int)param_1[iVar5])) {
          iVar5 = iVar6;
        }
        iVar6 = param_1[iVar2];
        if ((int)param_1[iVar5] < iVar6) {
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = iVar6;
          iVar2 = iVar5;
          goto joined_r0x00014899bd18;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) && ((int)param_1[iVar2] <= (int)param_1[iVar5]))
            {
              iVar6 = iVar2;
            }
            iVar2 = param_1[iVar7];
            if (iVar2 <= (int)param_1[iVar6]) break;
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = iVar2;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 14899be0e FUN_14899be0e body=29 status=ok
// SIG undefined FUN_14899be0e(void)

undefined8 FUN_14899be0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899beb2 FUN_14899beb2 body=38 status=ok
// SIG undefined FUN_14899beb2(void)

undefined8 FUN_14899beb2(undefined8 param_1,int param_2)

{
  FUN_14899c0d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899bed8 FUN_14899bed8 body=147 status=ok
// SIG undefined FUN_14899bed8(void)

int FUN_14899bed8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x170) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x168);
    lVar4 = (longlong)*(int *)(param_1 + 0x170) << 4;
    do {
      cVar1 = FUN_1409d2f40(lVar2,param_2);
      if (cVar1 != '\0') {
        if (lVar2 == 0) {
          return 0;
        }
        if ((longlong)*(int *)(param_1 + 0x160) == 0) {
          return 0;
        }
        lVar4 = 0;
        iVar3 = 0;
        do {
          iVar3 = iVar3 + (uint)(*(int *)(*(longlong *)(param_1 + 0x158) + 4 + lVar4) ==
                                *(int *)(lVar2 + 8));
          lVar4 = lVar4 + 0xc;
        } while ((longlong)*(int *)(param_1 + 0x160) * 0xc != lVar4);
        return iVar3;
      }
      lVar2 = lVar2 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 14899bf6c FUN_14899bf6c body=259 status=ok
// SIG undefined FUN_14899bf6c(void)

int FUN_14899bf6c(longlong param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  
  iVar7 = DAT_14cb8c3a0;
  if (*param_2 == '\x01') {
    piVar10 = &DAT_14cb8c3a0;
    if ((longlong)*(int *)(param_1 + 0x170) != 0) {
      uVar2 = *(undefined8 *)(param_2 + 8);
      lVar6 = *(longlong *)(param_1 + 0x168);
      lVar8 = (longlong)*(int *)(param_1 + 0x170) << 4;
      do {
        cVar4 = FUN_1409d2f40(lVar6,uVar2);
        if (cVar4 != '\0') {
          piVar10 = &DAT_14cb8c3a0;
          if (lVar6 != 0) {
            piVar10 = (int *)(lVar6 + 8);
          }
          break;
        }
        lVar6 = lVar6 + 0x10;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
    }
    iVar7 = *piVar10;
    if (*piVar10 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x160);
  uVar9 = (ulonglong)iVar1;
  if ((longlong)uVar9 < 1) {
    return 0;
  }
  lVar6 = uVar9 * 0xc + -8;
  iVar5 = 0;
  do {
    if ((*param_2 != '\x01') || (*(int *)(*(longlong *)(param_1 + 0x158) + lVar6) == iVar7)) {
      FUN_14899c174(param_1,(int)uVar9 + -1);
      iVar5 = iVar5 + 1;
    }
    lVar6 = lVar6 + -0xc;
    bVar3 = 1 < uVar9;
    uVar9 = uVar9 - 1;
  } while (bVar3);
  if (*(int *)(param_1 + 0x160) != iVar1) {
    FUN_140c5ef80(param_1,*(int *)(param_1 + 0x160),iVar1);
    return iVar5;
  }
  return iVar5;
}



// FUNCTION 14899c070 FUN_14899c070 body=45 status=ok
// SIG undefined FUN_14899c070(void)

longlong FUN_14899c070(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14899c0d4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899c09e FUN_14899c09e body=45 status=ok
// SIG undefined FUN_14899c09e(void)

longlong FUN_14899c09e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14899c0d4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899c0d4 FUN_14899c0d4 body=159 status=ok
// SIG undefined FUN_14899c0d4(void)

void FUN_14899c0d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b42ed30;
  param_1[1] = &PTR_FUN_14b42edf0;
  param_1[6] = &PTR_FUN_14b42ee10;
  FUN_1449e6b18(param_1 + 0x32);
  FUN_1449e6b18((longlong)param_1 + 0x184);
  FUN_1449e6b18(param_1 + 0x2f);
  *param_1 = &PTR_LAB_14b42ee60;
  param_1[1] = &PTR_LAB_14b42ef20;
  param_1[6] = &PTR_FUN_14b42ef40;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_140ee768e(param_1);
  return;
}



// FUNCTION 14899c174 FUN_14899c174 body=221 status=ok
// SIG undefined FUN_14899c174(void)

void FUN_14899c174(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined **local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((-1 < (int)param_2) && (uVar3 = (ulonglong)param_2, (int)param_2 < *(int *)(param_1 + 0x160)))
  {
    lVar1 = *(longlong *)(param_1 + 0x158) + uVar3 * 0xc;
    FUN_140f291e2(param_1,*(undefined4 *)(lVar1 + 4));
    local_48 = &PTR_FUN_14b42da40;
    local_38 = 0;
    local_40 = lVar1;
    FUN_140c5fd14(param_1);
    iVar2 = *(int *)(param_1 + 0x160);
    if (~param_2 + iVar2 != 0) {
      memmove((void *)(*(longlong *)(param_1 + 0x158) + uVar3 * 0xc),
              (void *)(*(longlong *)(param_1 + 0x158) + uVar3 * 0xc + 0xc),
              (longlong)(int)(~param_2 + iVar2) * 0xc);
      iVar2 = *(int *)(param_1 + 0x160);
    }
    *(int *)(param_1 + 0x160) = iVar2 + -1;
    FUN_140f292be(param_1 + 0x158);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899c252 FUN_14899c252 body=29 status=ok
// SIG undefined FUN_14899c252(void)

undefined8 FUN_14899c252(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899c2d4 FUN_14899c2d4 body=9 status=ok
// SIG undefined FUN_14899c2d4(void)

void FUN_14899c2d4(longlong param_1)

{
  FUN_14899c2fc(param_1 + 0x10);
  return;
}



// FUNCTION 14899c2de FUN_14899c2de body=29 status=ok
// SIG undefined FUN_14899c2de(void)

undefined8 FUN_14899c2de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899c2fc FUN_14899c2fc body=96 status=ok
// SIG undefined FUN_14899c2fc(void)

void FUN_14899c2fc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b42d3e0;
  param_1[1] = &PTR_FUN_14b42d4a0;
  param_1[6] = &PTR_FUN_14b42d4c0;
  plVar3 = (longlong *)param_1[0x31];
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
  FUN_14899c35c(param_1);
  return;
}



// FUNCTION 14899c35c FUN_14899c35c body=87 status=ok
// SIG undefined FUN_14899c35c(void)

void FUN_14899c35c(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b42d900;
  param_1[1] = &PTR_LAB_14b42d9c0;
  param_1[6] = &PTR_FUN_14b42d9e0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_140ee768e(param_1);
  return;
}



// FUNCTION 14899c3b4 FUN_14899c3b4 body=167 status=ok
// SIG undefined FUN_14899c3b4(void)

void FUN_14899c3b4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x38) != 0) && (*(longlong *)(param_2 + 0x40) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x40) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x38) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x40);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x38) = param_2;
    if (*(longlong **)(param_2 + 0x40) == plVar2) goto LAB_14899c42f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x40);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x40) = plVar2;
      goto LAB_14899c42f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x40) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14899c42f:
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
                    /* WARNING: Could not recover jumptable at 0x00014899c44f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14899c45c FUN_14899c45c body=64 status=ok
// SIG undefined FUN_14899c45c(void)

undefined8 * FUN_14899c45c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42eff0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899c4a0 FUN_14899c4a0 body=81 status=ok
// SIG undefined FUN_14899c4a0(void)

undefined8 FUN_14899c4a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 14899c4f8 FUN_14899c4f8 body=89 status=ok
// SIG undefined FUN_14899c4f8(void)

bool FUN_14899c4f8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14899c543;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14899c543:
  return lVar6 == param_2;
}



// FUNCTION 14899c56e FUN_14899c56e body=118 status=ok
// SIG undefined FUN_14899c56e(void)

void FUN_14899c56e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42eff0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14899c5e4 FUN_14899c5e4 body=118 status=ok
// SIG undefined FUN_14899c5e4(void)

void FUN_14899c5e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42eff0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14899c65a FUN_14899c65a body=156 status=ok
// SIG undefined FUN_14899c65a(void)

void FUN_14899c65a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42eff0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014899c6e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14899c6f6 FUN_14899c6f6 body=100 status=ok
// SIG undefined FUN_14899c6f6(void)

void FUN_14899c6f6(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014899c742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014899c74f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14899c75a FUN_14899c75a body=100 status=ok
// SIG undefined FUN_14899c75a(void)

ulonglong FUN_14899c75a(longlong param_1)

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
LAB_14899c7b3:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14899c7b3;
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



// FUNCTION 14899c7be FUN_14899c7be body=279 status=ok
// SIG undefined FUN_14899c7be(void)

void FUN_14899c7be(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x00014899c7df:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) && ((int)param_1[iVar6] <= (int)param_1[iVar5])) {
          iVar5 = iVar6;
        }
        iVar6 = param_1[iVar2];
        if ((int)param_1[iVar5] < iVar6) {
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = iVar6;
          iVar2 = iVar5;
          goto joined_r0x00014899c7df;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) && ((int)param_1[iVar2] <= (int)param_1[iVar5]))
            {
              iVar6 = iVar2;
            }
            iVar2 = param_1[iVar7];
            if (iVar2 <= (int)param_1[iVar6]) break;
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = iVar2;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 14899c8d6 FUN_14899c8d6 body=29 status=ok
// SIG undefined FUN_14899c8d6(void)

undefined8 FUN_14899c8d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899c92e FUN_14899c92e body=38 status=ok
// SIG undefined FUN_14899c92e(void)

undefined8 FUN_14899c92e(undefined8 param_1,int param_2)

{
  FUN_14899c9b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899c954 FUN_14899c954 body=45 status=ok
// SIG undefined FUN_14899c954(void)

longlong FUN_14899c954(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14899c9b6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899c982 FUN_14899c982 body=45 status=ok
// SIG undefined FUN_14899c982(void)

longlong FUN_14899c982(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14899c9b6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899c9b6 FUN_14899c9b6 body=164 status=ok
// SIG undefined FUN_14899c9b6(void)

void FUN_14899c9b6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b42f100;
  param_1[1] = &PTR_FUN_14b42f1c0;
  param_1[6] = &PTR_FUN_14b42f1e0;
  plVar3 = (longlong *)param_1[0x30];
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
  *param_1 = &PTR_LAB_14b42f230;
  param_1[1] = &PTR_LAB_14b42f2f0;
  param_1[6] = &PTR_FUN_14b42f310;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_140ee768e(param_1);
  return;
}



// FUNCTION 14899ca5a FUN_14899ca5a body=29 status=ok
// SIG undefined FUN_14899ca5a(void)

undefined8 FUN_14899ca5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899cab0 FUN_14899cab0 body=89 status=ok
// SIG undefined FUN_14899cab0(void)

bool FUN_14899cab0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14899cafb;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14899cafb:
  return lVar6 == param_2;
}



// FUNCTION 14899cb0a FUN_14899cb0a body=118 status=ok
// SIG undefined FUN_14899cb0a(void)

void FUN_14899cb0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42f3a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14899cb80 FUN_14899cb80 body=156 status=ok
// SIG undefined FUN_14899cb80(void)

void FUN_14899cb80(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42f3a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014899cc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14899cc1c FUN_14899cc1c body=100 status=ok
// SIG undefined FUN_14899cc1c(void)

ulonglong FUN_14899cc1c(longlong param_1)

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
LAB_14899cc75:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14899cc75;
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



// FUNCTION 14899cc80 FUN_14899cc80 body=147 status=ok
// SIG undefined FUN_14899cc80(void)

void FUN_14899cc80(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14899cd14 FUN_14899cd14 body=210 status=ok
// SIG undefined FUN_14899cd14(void)

void FUN_14899cd14(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (0 < (int)param_2[1]) {
    FUN_14899cf0d(*param_2);
    plVar7 = param_2;
    FUN_143e45a14(param_1);
    lVar4 = param_2[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar2 = *param_2;
      lVar9 = 0;
      bVar5 = 0;
      do {
        uVar1 = *(uint *)(lVar2 + lVar9);
        uVar8 = (ulonglong)(int)uVar1;
        if (((longlong)uVar8 < 0) || (iVar6 = *(int *)(param_1 + 0x160), iVar6 <= (int)uVar1)) {
          uVar8 = (ulonglong)plVar7 & 0xffffffff;
        }
        else {
          bVar3 = (bool)(bVar5 & (int)plVar7 <= (int)uVar1);
          bVar5 = 1;
          if (!bVar3) {
            if (~uVar1 + iVar6 != 0) {
              memmove((void *)(*(longlong *)(param_1 + 0x158) + uVar8 * 8),
                      (void *)(*(longlong *)(param_1 + 0x158) + uVar8 * 8 + 8),
                      (longlong)(int)(~uVar1 + iVar6) << 3);
              iVar6 = *(int *)(param_1 + 0x160);
            }
            *(int *)(param_1 + 0x160) = iVar6 + -1;
            FUN_14899d3d2(param_1 + 0x158);
          }
        }
        lVar9 = lVar9 + 4;
        plVar7 = (longlong *)(uVar8 & 0xffffffff);
      } while ((longlong)(int)lVar4 * 4 != lVar9);
    }
  }
  return;
}



// FUNCTION 14899cde6 FUN_14899cde6 body=205 status=ok
// SIG undefined FUN_14899cde6(void)

void FUN_14899cde6(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[0x2c];
  puVar3 = (undefined4 *)FUN_14899d46e(param_1 + 0x2b);
  pcVar1 = *(code **)(param_3 + 0x10);
  if (pcVar1 != (code *)0x0) {
    plVar5 = (longlong *)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x20) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_3 + 0x20);
    }
    uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
    (*pcVar1)(uVar4,puVar3,param_4);
  }
  *puVar3 = *(undefined4 *)(param_4 + 0x20);
  FUN_14899d4d2(param_1,&local_3c,param_4);
  puVar3[1] = local_3c;
  (**(code **)(*param_1 + 0xb0))(param_1,puVar3,param_4);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_140c5ef80(param_1,(int)param_1[0x2c],(int)lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68,(int)param_1[0x2c]);
}



// FUNCTION 14899ceb4 FUN_14899ceb4 body=89 status=ok
// SIG undefined FUN_14899ceb4(void)

void FUN_14899ceb4(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14899cf0d FUN_14899cf0d body=554 status=ok
// SIG undefined FUN_14899cf0d(void)

void FUN_14899cf0d(longlong param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  longlong *plVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  float fVar16;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar8 = &local_348;
    do {
      piVar2 = (int *)*plVar8;
      piVar9 = (int *)plVar8[1];
      iVar11 = (int)plVar8[2];
      iVar4 = (int)((ulonglong)((longlong)piVar9 - (longlong)piVar2) >> 2);
      piVar7 = piVar2;
      piVar13 = piVar9;
      if (iVar11 != 0) {
LAB_14899cfce:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          iVar4 = piVar2[uVar5];
          piVar2[uVar5] = *piVar2;
          *piVar2 = iVar4;
          piVar6 = piVar9 + 1;
          piVar3 = piVar2;
          do {
            piVar1 = piVar3 + 1;
            piVar10 = piVar3 + 1;
            do {
              piVar3 = piVar10;
              piVar14 = piVar1;
              if (piVar9 < piVar3) break;
              piVar1 = piVar14 + 1;
              piVar10 = piVar3 + 1;
            } while (*piVar2 <= *piVar3);
            piVar1 = piVar6 + -2;
            do {
              piVar10 = piVar6;
              piVar15 = piVar1;
              piVar6 = piVar10 + -1;
              if (piVar6 <= piVar2) break;
              piVar1 = piVar15 + -1;
            } while (*piVar6 <= *piVar2);
            if (piVar6 < piVar3) goto LAB_14899d044;
            iVar4 = *piVar3;
            *piVar3 = *piVar6;
            *piVar6 = iVar4;
          } while( true );
        }
        if (piVar2 < piVar9) {
          do {
            piVar7 = piVar2;
            if (piVar2 + 1 <= piVar9) {
              piVar13 = piVar2 + 1;
              iVar11 = *piVar2;
              do {
                iVar4 = *piVar13;
                iVar12 = iVar11;
                if (iVar4 <= iVar11) {
                  iVar12 = iVar4;
                }
                if (iVar4 < iVar11) {
                  piVar7 = piVar13;
                }
                piVar13 = piVar13 + 1;
                iVar11 = iVar12;
              } while (piVar13 <= piVar9);
            }
            iVar11 = *piVar7;
            *piVar7 = *piVar9;
            *piVar9 = iVar11;
            piVar9 = piVar9 + -1;
          } while (piVar2 < piVar9);
        }
        goto LAB_14899d116;
      }
LAB_14899d12b:
      FUN_14899d138(piVar2);
LAB_14899d116:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14899d044:
  iVar4 = *piVar2;
  *piVar2 = *piVar6;
  *piVar6 = iVar4;
  iVar11 = iVar11 + -1;
  piVar10 = piVar10 + -2;
  if ((longlong)piVar15 - (longlong)piVar7 < (longlong)piVar13 - (longlong)piVar14) {
    if (piVar3 < piVar9) {
      *plVar8 = (longlong)piVar3;
      plVar8[1] = (longlong)piVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    piVar14 = piVar2;
    if (piVar6 <= piVar2 + 1) goto LAB_14899d116;
  }
  else {
    if (piVar2 + 1 < piVar6) {
      *plVar8 = (longlong)piVar2;
      plVar8[1] = (longlong)piVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    piVar2 = piVar3;
    piVar10 = piVar9;
    piVar15 = piVar9;
    if (piVar9 <= piVar3) goto LAB_14899d116;
  }
  iVar4 = (int)((ulonglong)((longlong)piVar15 - (longlong)piVar14) >> 2);
  piVar7 = piVar14;
  piVar9 = piVar10;
  piVar13 = piVar15;
  if (iVar11 == 0) goto LAB_14899d12b;
  goto LAB_14899cfce;
}



// FUNCTION 14899d138 FUN_14899d138 body=279 status=ok
// SIG undefined FUN_14899d138(void)

void FUN_14899d138(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x00014899d159:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) && ((int)param_1[iVar6] <= (int)param_1[iVar5])) {
          iVar5 = iVar6;
        }
        iVar6 = param_1[iVar2];
        if ((int)param_1[iVar5] < iVar6) {
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = iVar6;
          iVar2 = iVar5;
          goto joined_r0x00014899d159;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) && ((int)param_1[iVar2] <= (int)param_1[iVar5]))
            {
              iVar6 = iVar2;
            }
            iVar2 = param_1[iVar7];
            if (iVar2 <= (int)param_1[iVar6]) break;
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = iVar2;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 14899d250 FUN_14899d250 body=221 status=ok
// SIG undefined FUN_14899d250(void)

void FUN_14899d250(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x168);
    lVar6 = 0;
    uVar2 = 0;
    do {
      if (*(int *)(lVar1 + 8 + lVar6) == param_2) {
        if (iVar3 <= (int)uVar2 || (int)uVar2 < 0) {
          return;
        }
        lVar6 = (ulonglong)(uVar2 & 0x7fffffff) * 0x10;
        iVar3 = *(int *)(lVar1 + 0xc + lVar6);
        iVar4 = 1;
        if (1 < iVar3) {
          iVar4 = iVar3;
        }
        *(int *)(lVar1 + 0xc + lVar6) = iVar4 + -1;
        lVar1 = *(longlong *)(param_1 + 0x168);
        if (*(int *)(lVar1 + 0xc + lVar6) != 0) {
          return;
        }
        iVar3 = *(int *)(param_1 + 0x170);
        if (iVar3 - 1U != uVar2) {
          iVar5 = (iVar3 - 1U) - uVar2;
          iVar4 = 1;
          if (iVar5 < 1) {
            iVar4 = iVar5;
          }
          memmove((void *)(lVar6 + lVar1),(void *)((longlong)(iVar3 - iVar4) * 0x10 + lVar1),
                  (longlong)iVar4 << 4);
          iVar3 = *(int *)(param_1 + 0x170);
        }
        *(int *)(param_1 + 0x170) = iVar3 + -1;
        FUN_140c5fdc4((longlong *)(param_1 + 0x168));
        return;
      }
      uVar2 = uVar2 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar3 << 4 != lVar6);
  }
  return;
}



// FUNCTION 14899d32e FUN_14899d32e body=29 status=ok
// SIG undefined FUN_14899d32e(void)

undefined8 FUN_14899d32e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899d3d2 FUN_14899d3d2 body=62 status=ok
// SIG undefined FUN_14899d3d2(void)

void FUN_14899d3d2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14899d410(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 14899d410 FUN_14899d410 body=93 status=ok
// SIG undefined FUN_14899d410(void)

ulonglong FUN_14899d410(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14899d46e FUN_14899d46e body=100 status=ok
// SIG undefined FUN_14899d46e(void)

longlong FUN_14899d46e(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) == iVar1) {
    FUN_14899d578(param_1,iVar1);
  }
  lVar2 = (longlong)param_2;
  memmove((void *)(*param_1 + lVar2 * 8 + 8),(void *)(*param_1 + lVar2 * 8),
          (ulonglong)(uint)(iVar1 - param_2) << 3);
  lVar2 = lVar2 * 8 + *param_1;
  FUN_14899d56f(lVar2);
  return lVar2;
}



// FUNCTION 14899d4d2 FUN_14899d4d2 body=157 status=ok
// SIG undefined FUN_14899d4d2(void)

int * FUN_14899d4d2(longlong param_1,int *param_2,longlong param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x170) != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    lVar4 = *(longlong *)(param_1 + 0x168);
    lVar5 = (longlong)*(int *)(param_1 + 0x170) << 4;
    do {
      cVar2 = FUN_1409d2f40(lVar4,uVar1);
      if (cVar2 != '\0') {
        if (lVar4 != 0) {
          iVar3 = *(int *)(lVar4 + 8);
          goto LAB_14899d54f;
        }
        break;
      }
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  lVar4 = FUN_140c5f5f4(param_1 + 0x168);
  FUN_14485c47a(lVar4,*(undefined8 *)(param_3 + 0x18));
  iVar3 = *(int *)(param_1 + 0xe4) + (uint)(*(int *)(param_1 + 0xe4) == 0);
  *(int *)(param_1 + 0xe4) = iVar3 + 1;
  *(int *)(lVar4 + 8) = iVar3;
LAB_14899d54f:
  *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 14899d56f FUN_14899d56f body=8 status=ok
// SIG undefined FUN_14899d56f(void)

void FUN_14899d56f(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 14899d578 FUN_14899d578 body=132 status=ok
// SIG undefined FUN_14899d578(void)

void FUN_14899d578(longlong param_1,int param_2)

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



// FUNCTION 14899d5fe FUN_14899d5fe body=211 status=ok
// SIG undefined FUN_14899d5fe(void)

void FUN_14899d5fe(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined **local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x160))) {
    uVar3 = (ulonglong)param_2;
    lVar1 = *(longlong *)(param_1 + 0x158) + uVar3 * 8;
    FUN_14899d250(param_1,*(undefined4 *)(lVar1 + 4));
    local_48 = &PTR_FUN_14b42da40;
    local_38 = 0;
    local_40 = lVar1;
    FUN_140c5fd14(param_1);
    iVar2 = *(int *)(param_1 + 0x160);
    if (~param_2 + iVar2 != 0) {
      memmove((void *)(*(longlong *)(param_1 + 0x158) + uVar3 * 8),
              (void *)(*(longlong *)(param_1 + 0x158) + uVar3 * 8 + 8),
              (longlong)(int)(~param_2 + iVar2) << 3);
      iVar2 = *(int *)(param_1 + 0x160);
    }
    *(int *)(param_1 + 0x160) = iVar2 + -1;
    FUN_14899d3d2(param_1 + 0x158);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899d6d2 FUN_14899d6d2 body=29 status=ok
// SIG undefined FUN_14899d6d2(void)

undefined8 FUN_14899d6d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899d754 FUN_14899d754 body=48 status=ok
// SIG undefined FUN_14899d754(void)

void FUN_14899d754(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 14899d784 FUN_14899d784 body=67 status=ok
// SIG undefined FUN_14899d784(void)

void FUN_14899d784(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1489a1930(param_1,iVar1);
  }
  FUN_148636e0e((longlong)iVar1 * 0x88 + *param_1,param_2);
  return;
}



// FUNCTION 14899d7c8 FUN_14899d7c8 body=228 status=ok
// SIG undefined FUN_14899d7c8(void)

undefined4 FUN_14899d7c8(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined4 uVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = FUN_140eb4c46(param_2);
  local_88[0] = 0;
  local_60 = 0;
  FUN_1456bb102(local_88,uVar2);
  FUN_1448729ea(param_1 + 0x10,local_58,local_88);
  uVar4 = FUN_144a7b41a(local_58,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_58;
    if (0x18 < local_40) {
      pppuVar3 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899d8ae FUN_14899d8ae body=100 status=ok
// SIG undefined FUN_14899d8ae(void)

undefined1 * FUN_14899d8ae(undefined1 *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0xffffffff;
  param_1[0x10] = 0;
  *param_1 = *param_2;
  if (param_2[0xc] == '\x01') {
    uVar1 = FUN_14899d7c8(param_2,param_3);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    param_1[0x10] = 1;
  }
  if ((param_2[1] == '\x01') && (param_2 != param_1 && *(longlong *)(param_2 + 4) != 0)) {
    *(longlong *)(param_1 + 4) = *(longlong *)(param_2 + 4);
  }
  return param_1;
}



// FUNCTION 14899d912 FUN_14899d912 body=62 status=ok
// SIG undefined FUN_14899d912(void)

void FUN_14899d912(longlong param_1,float *param_2,longlong *param_3)

{
  float fVar1;
  undefined1 uVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 0x14) == '\x01') {
    fVar1 = *(float *)(param_1 + 0x10);
    fVar3 = fVar1 - (*(float *)(*param_3 + 0x14c) - *(float *)(param_1 + 0xc));
    if (fVar1 <= fVar3) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *param_2 = fVar3;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_2 + 1) = uVar2;
  return;
}



// FUNCTION 14899d950 FUN_14899d950 body=58 status=ok
// SIG undefined FUN_14899d950(void)

void FUN_14899d950(longlong *param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0xd) & 8) == 0) {
    cVar1 = (**(code **)(*param_1 + 0xa8))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
    (**(code **)(*param_1 + 0x98))(param_1);
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 8;
  }
  return;
}



// FUNCTION 14899d9a0 FUN_14899d9a0 body=138 status=ok
// SIG undefined FUN_14899d9a0(void)

undefined4 * FUN_14899d9a0(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [36];
  undefined8 local_24;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0xd) & 4) == 0) || (param_1[9] == 0)) {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    local_24 = 0;
    local_1c = 1;
    cVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*(longlong *)param_1[9] + 0x18))((longlong *)param_1[9],&local_24);
      *param_2 = uVar2;
    }
    *(bool *)(param_2 + 1) = cVar1 != '\0';
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14899da2c FUN_14899da2c body=101 status=ok
// SIG undefined FUN_14899da2c(void)

undefined8 * FUN_14899da2c(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14b2841e0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_28.Data1 = 0;
  local_28.Data2 = 0;
  local_28.Data3 = 0;
  local_28.Data4[0] = '\0';
  local_28.Data4[1] = '\0';
  local_28.Data4[2] = '\0';
  local_28.Data4[3] = '\0';
  local_28.Data4[4] = '\0';
  local_28.Data4[5] = '\0';
  local_28.Data4[6] = '\0';
  local_28.Data4[7] = '\0';
  CoCreateGuid(&local_28);
  *(ulong *)(param_1 + 1) = local_28.Data1;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_28._4_4_;
  *(undefined4 *)(param_1 + 2) = local_28.Data4._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_28.Data4._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899da92 FUN_14899da92 body=68 status=ok
// SIG undefined FUN_14899da92(void)

void FUN_14899da92(longlong param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x28);
  param_2 = (bVar1 & 8) >> 3 ^ param_2;
  if (((bVar1 & 2) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x28) = bVar1 & 0xfd | param_2 * '\x02';
    if ((((bVar1 & 4) == 0) && (*(int *)(param_1 + 0x20) != 0)) &&
       (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014899dad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
      return;
    }
  }
  return;
}



// FUNCTION 14899dad6 FUN_14899dad6 body=336 status=ok
// SIG undefined FUN_14899dad6(void)

longlong * FUN_14899dad6(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x18))(param_1,&local_30);
  plVar3 = local_28;
  plVar2 = local_30;
  if (local_30 != (longlong *)0x0) {
    if ((char)param_1[1] == '\x01') {
      *(byte *)(local_30 + 5) = *(byte *)(local_30 + 5) & 0xf7 ^ 10;
    }
    *param_2 = (longlong)local_30;
    param_2[1] = (longlong)local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar2 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_14b42fc10;
    plVar2 = plVar4 + 2;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[2] = (longlong)&PTR_FUN_14b42fc28;
    local_30 = plVar2;
    local_28 = plVar4;
    FUN_1489a1a70(&local_30,plVar2);
    plVar3 = local_28;
    *param_2 = (longlong)plVar2;
    param_2[1] = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_28 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_28)(local_28);
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899dc28 FUN_14899dc28 body=32 status=ok
// SIG undefined FUN_14899dc28(void)

undefined8 FUN_14899dc28(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 14899dc48 FUN_14899dc48 body=391 status=ok
// SIG undefined FUN_14899dc48(void)

float * FUN_14899dc48(undefined8 param_1,float *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *plStack_50;
  longlong local_40;
  longlong *local_38;
  float local_30;
  char local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14094904c(param_1,&local_40);
  if (local_40 == 0) {
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    lVar6 = param_4[1];
    if (lVar6 == 0) {
      uVar5 = FUN_145cd9fe6();
      lVar6 = FUN_14477b664(uVar5);
      param_4[1] = lVar6;
    }
    if (((param_4[2] == 0) && (lVar6 != 0)) && (*param_4 != 0)) {
      plVar3 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar6 = FUN_144aff482(uVar5,param_4);
      }
      param_4[2] = lVar6;
    }
    FUN_140bbbdc0(local_40,&local_58);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x18))(local_58,&local_30);
      fVar7 = 0.0;
      if (local_2c == '\x01') {
        fVar7 = local_30;
        if (1.0 <= local_30) {
          fVar7 = 1.0;
        }
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
      }
      goto LAB_14899dce6;
    }
  }
  fVar7 = 0.0;
LAB_14899dce6:
  plVar3 = plStack_50;
  *param_2 = fVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14899ddd0 FUN_14899ddd0 body=137 status=ok
// SIG undefined FUN_14899ddd0(void)

void FUN_14899ddd0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar3 = (longlong)*(int *)(param_1 + 0x88) * 0x38;
    do {
      cVar1 = FUN_140d6591c(lVar2,param_2);
      if (cVar1 != '\0') {
        if (lVar2 == 0) {
          return;
        }
        if (param_4 == '\x02') {
          lVar3 = 0x20;
        }
        else {
          if (param_4 != '\x01') {
            return;
          }
          lVar3 = 8;
        }
        if (lVar2 + lVar3 == 0) {
          return;
        }
        FUN_140457ffc(lVar2 + lVar3,param_3);
        return;
      }
      lVar2 = lVar2 + 0x38;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14899de5a FUN_14899de5a body=141 status=ok
// SIG undefined FUN_14899de5a(void)

bool FUN_14899de5a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14094904c(param_1,&local_30,param_2);
  if (local_30 != 0) {
    FUN_140c19fa4(local_30,param_3,param_4);
  }
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899dee8 FUN_14899dee8 body=159 status=ok
// SIG undefined FUN_14899dee8(void)

void FUN_14899dee8(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar8 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar8);
      pcVar4 = (code *)*param_2;
      plVar7 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar7 = param_2 + 4;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      cVar5 = (*pcVar4)(uVar6,uVar3);
    } while ((cVar5 != '\x01') &&
            (bVar9 = (longlong)iVar1 * 0x10 + -0x10 != lVar8, lVar8 = lVar8 + 0x10, bVar9));
  }
  if (*param_2 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014899df72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x10))(plVar7);
    return;
  }
  return;
}



// FUNCTION 14899df88 FUN_14899df88 body=301 status=ok
// SIG undefined FUN_14899df88(void)

void FUN_14899df88(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong unaff_RBP;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar1 != 0) {
    uVar2 = FUN_140eca14a();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (((plVar3 != (longlong *)0x0) && (lVar1 = (**(code **)(*plVar3 + 0x10))(plVar3), lVar1 != 0))
       && ((longlong)(int)param_1[6] != 0)) {
      lVar5 = (longlong)(int)param_1[6] * 0x18;
      lVar4 = param_1[5] + 8;
      do {
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*(undefined1 *)(lVar4 + 8));
        local_50 = 0;
        local_48 = 0;
        FUN_1446efa72(&local_50,0,3,0x10);
        local_48 = 3;
        FUN_1489a24ba(local_50,param_2,lVar4);
        if (*(longlong *)(lVar4 + -8) != 0) {
          uVar2 = FUN_1413584e0(lVar1);
          FUN_14591f2e6(uVar2,local_58,unaff_RBP & 0xffffffff,&local_50);
        }
        FUN_1449db362(&local_50);
        lVar4 = lVar4 + 0x18;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14899e0b6 FUN_14899e0b6 body=71 status=ok
// SIG undefined FUN_14899e0b6(void)

undefined8 FUN_14899e0b6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_140789e1e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x00014899e0f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_2 + 0x2b8))(param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14899e0fe FUN_14899e0fe body=12 status=ok
// SIG undefined FUN_14899e0fe(void)

undefined4 FUN_14899e0fe(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 0x14c);
}



// FUNCTION 14899e10a FUN_14899e10a body=65 status=ok
// SIG undefined FUN_14899e10a(void)

undefined8 * FUN_14899e10a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cbef6c(&DAT_14cb8c440);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(puVar1 + 1);
  *puVar1 = &PTR_FUN_14b29a8f0;
  return puVar1;
}



// FUNCTION 14899e14c FUN_14899e14c body=44 status=ok
// SIG undefined FUN_14899e14c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14899e14c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8c44c = _DAT_14cb8c44c + -1;
  *param_1 = DAT_14cb8c440;
  DAT_14cb8c440 = param_1;
  return;
}



// FUNCTION 14899e178 FUN_14899e178 body=57 status=ok
// SIG undefined FUN_14899e178(void)

void FUN_14899e178(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b29a8f0;
  return;
}



// FUNCTION 14899e246 FUN_14899e246 body=95 status=ok
// SIG undefined FUN_14899e246(void)

undefined8 * FUN_14899e246(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414b4ac4(&DAT_14cb8c530);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *puVar1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(puVar1 + 1);
  *puVar1 = &PTR_FUN_14b29b990;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return puVar1;
}



// FUNCTION 14899e2a6 FUN_14899e2a6 body=44 status=ok
// SIG undefined FUN_14899e2a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14899e2a6(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8c53c = _DAT_14cb8c53c + -1;
  *param_1 = DAT_14cb8c530;
  DAT_14cb8c530 = param_1;
  return;
}



// FUNCTION 14899e2d2 FUN_14899e2d2 body=87 status=ok
// SIG undefined FUN_14899e2d2(void)

void FUN_14899e2d2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b29b990;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 14899e32a FUN_14899e32a body=22 status=ok
// SIG undefined FUN_14899e32a(void)

undefined8 FUN_14899e32a(int *param_1)

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
  
  plVar4 = DAT_14cb8c8d0;
  if (DAT_14cb8c8d0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb8c8d0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8c8d0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb8c8d0[0x3a] <= *(int *)((longlong)DAT_14cb8c8d0 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb8c8d0 + 0x300))(DAT_14cb8c8d0);
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



// FUNCTION 14899e340 FUN_14899e340 body=14 status=ok
// SIG undefined FUN_14899e340(void)

void FUN_14899e340(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  bVar4 = *(byte *)(plVar2 + 0x2a);
  if ((bVar4 & 4) == 0) {
    if ((bVar4 & 0x10) == 0) {
      FUN_14057be50(plVar2);
      if ((*(byte *)(plVar2 + 0x2a) & 8) != 0) {
        *(byte *)(plVar2 + 0x2a) = *(byte *)(plVar2 + 0x2a) & 0xf7;
        FUN_1449db8d8(plVar2 + 6);
      }
      (**(code **)(*plVar2 + 0x48))(plVar2);
      FUN_140bbb840(plVar2);
      lVar8 = plVar2[0x10];
      lVar3 = plVar2[0x11];
      if ((longlong)(int)lVar3 == 0) {
        uVar6 = 0;
      }
      else {
        lVar9 = 0;
        do {
          FUN_14899d950(*(undefined8 *)(lVar8 + lVar9));
          lVar9 = lVar9 + 0x10;
        } while ((longlong)(int)lVar3 * 0x10 != lVar9);
        uVar6 = (undefined4)plVar2[0x11];
        lVar8 = plVar2[0x10];
      }
      FUN_140ee79c9(lVar8,uVar6);
      *(undefined4 *)(plVar2 + 0x11) = 0;
      if (*(int *)((longlong)plVar2 + 0x8c) != 0) {
        FUN_1418adc00(plVar2 + 0x10,0);
      }
      FUN_140ee7a1d(plVar2[0x12],(int)plVar2[0x13]);
      *(undefined4 *)(plVar2 + 0x13) = 0;
      if (*(int *)((longlong)plVar2 + 0x9c) != 0) {
        FUN_1418adcdc(plVar2 + 0x12,0);
      }
      FUN_140ee7980(plVar2[0x14],(int)plVar2[0x15]);
      *(undefined4 *)(plVar2 + 0x15) = 0;
      if (*(int *)((longlong)plVar2 + 0xac) != 0) {
        FUN_1418add3c(plVar2 + 0x14,0);
      }
      if (((*(int *)((longlong)plVar2 + 0x7c) != 0) &&
          (uVar1 = *(uint *)(plVar2 + 0xf), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((puVar7 != (undefined8 *)0x0) &&
            (*(int *)(puVar7 + 2) == *(int *)((longlong)plVar2 + 0x7c))) &&
           ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
            plVar5 = (longlong *)*puVar7;
          }
          else {
            plVar5 = (longlong *)0x0;
          }
          (**(code **)(*plVar5 + 0x2b0))();
          plVar2[0xf] = 0;
        }
      }
      FUN_140fead1e(plVar2);
      bVar4 = *(byte *)(plVar2 + 0x2a) | 4;
    }
    else {
      bVar4 = bVar4 | 0x20;
    }
    *(byte *)(plVar2 + 0x2a) = bVar4;
  }
  return;
}



// FUNCTION 14899e34e FUN_14899e34e body=363 status=ok
// SIG undefined FUN_14899e34e(void)

void FUN_14899e34e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = param_2[3];
  lVar5 = *param_2;
  plVar9 = *(longlong **)(lVar5 + 0x40);
  bVar6 = true;
  if (plVar9 == (longlong *)0x0) {
LAB_14899e3ae:
    uVar10 = 0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar9[1];
    do {
      if (iVar8 == 0) goto LAB_14899e3ae;
      LOCK();
      iVar7 = (int)plVar9[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar9 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(lVar5 + 0x38);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    bVar6 = false;
  }
  local_58 = param_2[2];
  if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_60 = param_2 + 9;
  local_68 = param_2 + 5;
  if (!bVar6) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_50 = uVar10;
  local_48 = plVar9;
  FUN_148735710(param_1,param_3,&local_58,lVar4);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar6) {
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14899e4ba FUN_14899e4ba body=65 status=ok
// SIG undefined FUN_14899e4ba(void)

undefined8 * FUN_14899e4ba(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cbef6c(&DAT_14cb8c620);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(puVar1 + 1);
  *puVar1 = &PTR_FUN_14b29d270;
  return puVar1;
}



// FUNCTION 14899e4fc FUN_14899e4fc body=44 status=ok
// SIG undefined FUN_14899e4fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14899e4fc(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8c62c = _DAT_14cb8c62c + -1;
  *param_1 = DAT_14cb8c620;
  DAT_14cb8c620 = param_1;
  return;
}



// FUNCTION 14899e528 FUN_14899e528 body=57 status=ok
// SIG undefined FUN_14899e528(void)

void FUN_14899e528(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b29d270;
  return;
}



// FUNCTION 14899e562 FUN_14899e562 body=25 status=ok
// SIG undefined FUN_14899e562(void)

undefined8 FUN_14899e562(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141742dba(param_3);
  return param_2;
}



// FUNCTION 14899e57c FUN_14899e57c body=49 status=ok
// SIG undefined FUN_14899e57c(void)

undefined8 FUN_14899e57c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_144a7ecd0(param_3);
  FUN_140002266(param_2,L"%.2f",(double)fVar1);
  return param_2;
}



// FUNCTION 14899e5ae FUN_14899e5ae body=115 status=ok
// SIG undefined FUN_14899e5ae(void)

undefined8 FUN_14899e5ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_14030a32e(param_3);
  if (lVar1 == 0) {
    FUN_140056680(param_2,&DAT_149e01fe8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  local_18 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_18,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14899e622 FUN_14899e622 body=178 status=ok
// SIG undefined FUN_14899e622(void)

undefined8 FUN_14899e622(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1411a0e4c(param_3,&local_30);
  lVar4 = local_20;
  if (local_20 == 0) {
    if ((local_30 == 0) || (local_28 == 0)) {
      lVar4 = 0;
    }
    else {
      plVar1 = *(longlong **)(local_28 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar4 = 0;
        local_20 = lVar4;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,&local_30);
        local_20 = lVar4;
      }
    }
  }
  FUN_1410a642a(param_2,lVar4);
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14899e6d6 FUN_14899e6d6 body=135 status=ok
// SIG undefined FUN_14899e6d6(void)

undefined8 * FUN_14899e6d6(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = FUN_140c98d3e();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  lVar1 = FUN_140528a12(param_2,&local_20);
  if (lVar1 != 0) {
    uVar2 = FUN_14030a32e(lVar1 + 8);
    *param_1 = uVar2;
  }
  *(bool *)(param_1 + 1) = lVar1 != 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14899e75e FUN_14899e75e body=92 status=ok
// SIG undefined FUN_14899e75e(void)

undefined8 FUN_14899e75e(undefined8 param_1,byte *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14899e6d6(&local_28,param_1);
  *param_2 = local_20 ^ 1;
  if (local_20 == 0) {
    local_28 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_28;
}



// FUNCTION 14899e7bc FUN_14899e7bc body=94 status=ok
// SIG undefined FUN_14899e7bc(void)

void FUN_14899e7bc(undefined8 param_1,byte *param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  byte local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140f17d30(&local_20,param_1);
  *param_2 = local_1c ^ 1;
  if (local_1c == 0) {
    local_20 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20);
  }
  return;
}



// FUNCTION 14899e81c FUN_14899e81c body=136 status=ok
// SIG undefined FUN_14899e81c(void)

undefined4 * FUN_14899e81c(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = FUN_14599724c();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  lVar1 = FUN_140528a12(param_2,&local_20);
  if (lVar1 != 0) {
    uVar2 = FUN_144a7ecd0(lVar1 + 8);
    *param_1 = uVar2;
  }
  *(bool *)(param_1 + 1) = lVar1 != 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14899e8a6 FUN_14899e8a6 body=94 status=ok
// SIG undefined FUN_14899e8a6(void)

void FUN_14899e8a6(undefined8 param_1,byte *param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  byte local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14899e81c(&local_20,param_1);
  *param_2 = local_1c ^ 1;
  if (local_1c == 0) {
    local_20 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20);
  }
  return;
}



// FUNCTION 14899e906 FUN_14899e906 body=136 status=ok
// SIG undefined FUN_14899e906(void)

undefined4 * FUN_14899e906(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = FUN_145997338();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  lVar1 = FUN_140528a12(param_2,&local_20);
  if (lVar1 != 0) {
    uVar2 = FUN_144a7ecd0(lVar1 + 8);
    *param_1 = uVar2;
  }
  *(bool *)(param_1 + 1) = lVar1 != 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14899e990 FUN_14899e990 body=94 status=ok
// SIG undefined FUN_14899e990(void)

void FUN_14899e990(undefined8 param_1,byte *param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  byte local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14899e906(&local_20,param_1);
  *param_2 = local_1c ^ 1;
  if (local_1c == 0) {
    local_20 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20);
  }
  return;
}



// FUNCTION 14899e9f0 FUN_14899e9f0 body=173 status=ok
// SIG undefined FUN_14899e9f0(void)

undefined8 * FUN_14899e9f0(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1411a0d08(&local_40);
  if (local_28 == '\x01') {
    *param_3 = 0;
    if (local_38 == 0) {
      local_38 = FUN_140b473a6();
    }
    uVar1 = FUN_14477b664(local_38);
    *param_1 = local_40;
    uVar1 = FUN_14477b664(uVar1);
    uVar1 = FUN_14477b664(uVar1);
    param_1[1] = uVar1;
    param_1[2] = local_30;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  *param_3 = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14899ea9e FUN_14899ea9e body=56 status=ok
// SIG undefined FUN_14899ea9e(void)

void FUN_14899ea9e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14095dd8e(param_3);
  FUN_141090600(param_1,param_2,uVar1,param_4);
  return;
}



// FUNCTION 14899ead6 FUN_14899ead6 body=138 status=ok
// SIG undefined FUN_14899ead6(void)

void FUN_14899ead6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  local_28[0] = 1;
  local_20 = param_2;
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  FUN_143e47e58(param_1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899eb62 FUN_14899eb62 body=205 status=ok
// SIG undefined FUN_14899eb62(void)

void FUN_14899eb62(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_4;
  lVar1 = FUN_140948f46();
  if (lVar1 != 0) {
    local_40 = 0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    local_38 = 3;
    FUN_1489a24ba(local_40,param_3,&local_30);
    if (param_2 != 0) {
      uVar2 = FUN_1413584e0(lVar1,param_2);
      FUN_14591f2e6(uVar2,local_48,CONCAT71((int7)((ulonglong)param_3 >> 8),param_5) & 0xffffffff,
                    &local_40);
    }
    FUN_1449db362(&local_40);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899ec30 FUN_14899ec30 body=59 status=ok
// SIG undefined FUN_14899ec30(void)

void FUN_14899ec30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  
  lVar1 = FUN_140948f46();
  if (lVar1 == 0) {
    return;
  }
  FUN_14899ddd0(lVar1,param_2,param_1,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 14899ec6c FUN_14899ec6c body=170 status=ok
// SIG undefined FUN_14899ec6c(void)

undefined8 FUN_14899ec6c(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14578661c(param_4,&local_48);
  FUN_140ee7917(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (param_3 != 0 && param_2 != 0) {
    lVar1 = FUN_140948f46(param_1);
    if (lVar1 != 0) {
      uVar2 = FUN_14899de5a(lVar1,param_2,param_3,param_4);
      goto LAB_14899ece1;
    }
  }
  uVar2 = 0;
LAB_14899ece1:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899ed18 FUN_14899ed18 body=84 status=ok
// SIG undefined FUN_14899ed18(void)

undefined4 FUN_14899ed18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  char local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_14899ed6e(param_1,&local_18,&local_20,param_3);
  uVar1 = 0;
  if (local_14 != '\0') {
    uVar1 = local_18;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899ed6e FUN_14899ed6e body=278 status=ok
// SIG undefined FUN_14899ed6e(void)

undefined4 *
FUN_14899ed6e(longlong *param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar3) == *param_3) {
        lVar5 = *param_1 - lVar5;
        if (lVar5 != 0) {
          local_80[0] = 0;
          local_58 = 0;
          FUN_1456bb102(local_80,param_4);
          FUN_1447c3578(lVar5 + 8,local_50,local_80);
          uVar2 = FUN_1405d5f74(local_50);
          *param_2 = uVar2;
          *(undefined1 *)(param_2 + 1) = 1;
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
          if (pcVar1 != (code *)0x0) {
            ppppuVar4 = local_50;
            if (0x18 < local_38) {
              ppppuVar4 = (undefined8 ****)local_50[0];
            }
            (*pcVar1)(ppppuVar4);
          }
          if (0x18 < local_38) {
            FUN_1400020a8(local_50[0]);
          }
          FUN_144a5ac3a(local_80);
          goto LAB_14899edc8;
        }
        break;
      }
      lVar5 = lVar5 + -0x40;
      lVar3 = lVar3 + 0x40;
    } while (-lVar5 != (longlong)(int)param_1[1] * 0x40);
  }
  *(undefined1 *)(param_2 + 1) = 0;
LAB_14899edc8:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14899ee86 FUN_14899ee86 body=133 status=ok
// SIG undefined FUN_14899ee86(void)

undefined8 * FUN_14899ee86(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14896fd3a(&DAT_14cb8c780);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *puVar1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(puVar1 + 1);
  *puVar1 = &PTR_FUN_14b2a8b90;
  *(undefined4 *)(puVar1 + 3) = 0x3f800000;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0xf00000d0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
  return puVar1;
}



// FUNCTION 14899ef0c FUN_14899ef0c body=44 status=ok
// SIG undefined FUN_14899ef0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14899ef0c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8c78c = _DAT_14cb8c78c + -1;
  *param_1 = DAT_14cb8c780;
  DAT_14cb8c780 = param_1;
  return;
}



// FUNCTION 14899ef38 FUN_14899ef38 body=125 status=ok
// SIG undefined FUN_14899ef38(void)

void FUN_14899ef38(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b2a8b90;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xf00000d0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  return;
}



// FUNCTION 14899efb6 FUN_14899efb6 body=29 status=ok
// SIG undefined FUN_14899efb6(void)

undefined8 FUN_14899efb6(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(*param_1 + 8) != 0) &&
     (plVar1 = *(longlong **)(*param_1 + 0x10), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014899efcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 8))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 14899efd4 FUN_14899efd4 body=131 status=ok
// SIG undefined FUN_14899efd4(void)

bool FUN_14899efd4(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x38) == '\x03') {
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2);
    bVar2 = *(int *)(param_1 + 0x3c) < iVar1;
  }
  else {
    bVar2 = false;
    switch(*(char *)(param_1 + 0x38)) {
    case '\0':
      iVar1 = (**(code **)(*param_2 + 0x18))(param_2);
      bVar2 = iVar1 < *(int *)(param_1 + 0x3c);
      break;
    case '\x01':
      iVar1 = (**(code **)(*param_2 + 0x18))(param_2);
      bVar2 = iVar1 <= *(int *)(param_1 + 0x3c);
      break;
    case '\x02':
      iVar1 = (**(code **)(*param_2 + 0x18))(param_2);
      bVar2 = iVar1 == *(int *)(param_1 + 0x3c);
      break;
    case '\x04':
      iVar1 = (**(code **)(*param_2 + 0x18))(param_2);
      bVar2 = *(int *)(param_1 + 0x3c) <= iVar1;
    }
  }
  return bVar2;
}



// FUNCTION 14899f058 FUN_14899f058 body=223 status=ok
// SIG undefined FUN_14899f058(void)

bool FUN_14899f058(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  plVar2 = (longlong *)FUN_14479d2ce(param_2 + 0x60);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_1449d6ade();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_1449d6ade();
      plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
      if (plVar2 != plVar4) goto LAB_14899f0af;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_14899f0af:
  plVar2 = (longlong *)FUN_140eb4c46(param_2);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_1449d6ade();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_1449d6ade();
      plVar5 = (longlong *)FUN_144718840(plVar2,uVar3);
      if (plVar2 != plVar5) {
        if (plVar4 == (longlong *)0x0) {
          return false;
        }
        if (plVar5 == (longlong *)0x0) {
          return false;
        }
        uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
        uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
        uVar1 = FUN_140df75ae(uVar3,uVar6);
        return uVar1 == *(byte *)(param_1 + 0x38);
      }
    }
  }
  return false;
}



// FUNCTION 14899f152 FUN_14899f152 body=126 status=ok
// SIG undefined FUN_14899f152(void)

void FUN_14899f152(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1489961a4(*param_2,param_1 + 0x38);
  }
  local_38 = &local_40;
  local_40 = 0;
  local_20 = &local_38;
  local_28 = &LAB_143e4db8c;
  local_30 = param_2;
  FUN_142b3f8fc(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899f1d2 FUN_14899f1d2 body=126 status=ok
// SIG undefined FUN_14899f1d2(void)

void FUN_14899f1d2(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1489961a4(*param_2,param_1 + 0x38);
  }
  local_38 = &local_40;
  local_40 = 0;
  local_20 = &local_38;
  local_28 = &LAB_143e4dbb4;
  local_30 = param_2;
  FUN_142b3f946(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899f252 FUN_14899f252 body=152 status=ok
// SIG undefined FUN_14899f252(void)

void FUN_14899f252(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    lVar2 = FUN_1412bd57e();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      local_28 = *(longlong *)(param_1 + 0x48);
      if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      goto LAB_14899f2a1;
    }
  }
  local_28 = 0;
LAB_14899f2a1:
  FUN_1410d48d6(param_2,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899f2ec FUN_14899f2ec body=152 status=ok
// SIG undefined FUN_14899f2ec(void)

void FUN_14899f2ec(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FUN_1412bd57e();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      local_28 = *(longlong *)(param_1 + 8);
      if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      goto LAB_14899f33b;
    }
  }
  local_28 = 0;
LAB_14899f33b:
  FUN_1410d48d6(param_2,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899f386 FUN_14899f386 body=222 status=ok
// SIG undefined FUN_14899f386(void)

undefined4 * FUN_14899f386(longlong param_1,undefined4 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = 0;
  local_58 = 0;
  FUN_1456bb102(local_80,*(undefined8 *)(param_3 + 0x10));
  FUN_1448729ea(param_1 + 0x10,local_50,local_80);
  uVar3 = FUN_144a7ecd0(local_50);
  *param_2 = uVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_50;
    if (0x18 < local_38) {
      pppuVar2 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_80);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899f466 FUN_14899f466 body=197 status=ok
// SIG undefined FUN_14899f466(void)

undefined4 * FUN_14899f466(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((((lVar2 == 0) || (lVar1 = FUN_1412bd57e(), lVar1 == 0)) ||
      (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    local_30 = 0;
  }
  else {
    local_30 = *(longlong *)(param_1 + 0x10);
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
  }
  lVar2 = FUN_140528a12(param_3 + 0x48,&local_30);
  if (lVar2 != 0) {
    uVar3 = FUN_144a7ecd0(lVar2 + 8);
    *param_2 = uVar3;
  }
  *(bool *)(param_2 + 1) = lVar2 != 0;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14899f52c FUN_14899f52c body=152 status=ok
// SIG undefined FUN_14899f52c(void)

void FUN_14899f52c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar2 = FUN_1412bd57e();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      local_28 = *(longlong *)(param_1 + 0x10);
      if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      goto LAB_14899f57b;
    }
  }
  local_28 = 0;
LAB_14899f57b:
  FUN_1410d48d6(param_2,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899f66e FUN_14899f66e body=178 status=ok
// SIG undefined FUN_14899f66e(void)

void FUN_14899f66e(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(char *)(param_1 + 0x10) == '\x01') && ((*(byte *)((longlong)param_2 + 0x1c) & 1) == 0)) {
    local_c = 1.0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
  else {
    local_18 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x1a)];
    local_14 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x19)];
    local_10 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x18)];
    local_c = (float)*(byte *)(param_1 + 0x1b) * 0.003921569;
  }
  (**(code **)(*(longlong *)*param_2 + 0xa18))((longlong *)*param_2,*(undefined8 *)(param_1 + 8));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899f722 FUN_14899f722 body=238 status=ok
// SIG undefined FUN_14899f722(void)

longlong * FUN_14899f722(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = param_3[1];
  uVar4 = *(undefined8 *)*param_3;
  plVar6 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b430570;
  plVar1 = plVar6 + 2;
  FUN_143e4e07e(plVar1,uVar4,param_3 + 2,uVar3);
  local_48 = plVar1;
  local_40 = plVar6;
  FUN_1489a3860(&local_48,plVar1);
  plVar5 = local_40;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899f81e FUN_14899f81e body=32 status=ok
// SIG undefined FUN_14899f81e(void)

undefined8 FUN_14899f81e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"VirtualMeshComponent");
  return param_2;
}



// FUNCTION 14899f83e FUN_14899f83e body=158 status=ok
// SIG undefined FUN_14899f83e(void)

undefined8 FUN_14899f83e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_3 + 0x28))(param_3,local_40,&DAT_14cb8c360);
  FUN_140cc7bf8(param_2,local_40);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_40;
    if (0x18 < local_28) {
      pppuVar2 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899f8de FUN_14899f8de body=356 status=ok
// SIG undefined FUN_14899f8de(void)

undefined8 FUN_14899f8de(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar4 = FUN_145cd9ddc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 == 0) {
    if ((lVar5 == 0) || (*plVar1 == 0)) goto LAB_14899fa22;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      goto LAB_14899fa22;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 == 0) goto LAB_14899fa22;
    lVar5 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar5 == 0) {
    uVar4 = FUN_145cd9ddc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_1 + 0x18) = lVar6;
    }
  }
  plVar1 = *(longlong **)(lVar6 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    return param_2;
  }
LAB_14899fa22:
  FUN_140056680(param_2,L"(INVALID)");
  return param_2;
}



// FUNCTION 14899fa64 FUN_14899fa64 body=69 status=ok
// SIG undefined FUN_14899fa64(void)

undefined8 FUN_14899fa64(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  
  uVar1 = (ulonglong)(*(int *)(param_1 + 0x38) < 2) * 0x10;
  if (*(int *)(param_1 + 0x38 + uVar1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 8 + (uVar1 | 0x28));
  }
  FUN_140002266(param_2,L"Tags [%s]",puVar2);
  return param_2;
}



// FUNCTION 14899faae FUN_14899faae body=117 status=ok
// SIG undefined FUN_14899faae(void)

void FUN_14899faae(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  uStack_60 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 1;
  FUN_140fbcb60(&uStack_60);
  FUN_1412daff8(uVar1,&local_68);
  FUN_1412dafa6(&uStack_60);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899fb24 FUN_14899fb24 body=90 status=ok
// SIG undefined FUN_14899fb24(void)

ulonglong FUN_14899fb24(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
        if (cVar4 != '\0') {
          uVar5 = 0;
          break;
        }
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14899fb7e FUN_14899fb7e body=409 status=ok
// SIG undefined FUN_14899fb7e(void)

undefined8 FUN_14899fb7e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int local_d0;
  wchar_t *local_c8;
  undefined4 *local_c0;
  undefined2 *local_b8;
  char local_b0;
  wchar_t local_a8 [11];
  undefined4 local_92 [19];
  undefined2 local_44 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = local_a8;
  local_b0 = '\0';
  local_b8 = local_44;
  builtin_wcsncpy(local_a8,L"Immunities:",0xb);
  puVar4 = local_92;
  iVar1 = *(int *)(param_1 + 0x10);
  local_c0 = puVar4;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar6) != 0) {
        if (local_b8 <= (undefined2 *)((longlong)puVar4 + 6)) {
          FUN_140213274(&local_c8,3);
          puVar4 = local_c0;
        }
        *(undefined2 *)(puVar4 + 1) = 0x28;
        *puVar4 = 0x2b0020;
        local_c0 = (undefined4 *)((longlong)puVar4 + 6);
        plVar3 = *(longlong **)(lVar2 + lVar6);
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_d8);
        iVar5 = local_d0 + -1;
        if (local_d0 == 0) {
          iVar5 = 0;
        }
        FUN_1449668a2(&local_c8,local_d8,iVar5);
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        if (local_b8 <= (undefined2 *)((longlong)local_c0 + 2)) {
          FUN_140213274(&local_c8,1);
        }
        *(undefined2 *)local_c0 = 0x29;
        puVar4 = (undefined4 *)((longlong)local_c0 + 2);
        local_c0 = puVar4;
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  *(undefined2 *)puVar4 = 0;
  FUN_140056680(param_2,local_c8);
  if (local_b0 == '\x01') {
    FUN_1400020a8(local_c8);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899fd3e FUN_14899fd3e body=90 status=ok
// SIG undefined FUN_14899fd3e(void)

ulonglong FUN_14899fd3e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
        if (cVar4 != '\0') {
          uVar5 = 0;
          break;
        }
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14899fd98 FUN_14899fd98 body=409 status=ok
// SIG undefined FUN_14899fd98(void)

undefined8 FUN_14899fd98(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int local_d0;
  wchar_t *local_c8;
  undefined4 *local_c0;
  undefined2 *local_b8;
  char local_b0;
  wchar_t local_a8 [12];
  undefined4 local_90 [19];
  undefined2 local_44 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = local_a8;
  local_b0 = '\0';
  local_b8 = local_44;
  builtin_wcsncpy(local_a8,L"Moratoriums:",0xc);
  puVar4 = local_90;
  iVar1 = *(int *)(param_1 + 0x10);
  local_c0 = puVar4;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar6) != 0) {
        if (local_b8 <= (undefined2 *)((longlong)puVar4 + 6)) {
          FUN_140213274(&local_c8,3);
          puVar4 = local_c0;
        }
        *(undefined2 *)(puVar4 + 1) = 0x28;
        *puVar4 = 0x2b0020;
        local_c0 = (undefined4 *)((longlong)puVar4 + 6);
        plVar3 = *(longlong **)(lVar2 + lVar6);
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_d8);
        iVar5 = local_d0 + -1;
        if (local_d0 == 0) {
          iVar5 = 0;
        }
        FUN_1449668a2(&local_c8,local_d8,iVar5);
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        if (local_b8 <= (undefined2 *)((longlong)local_c0 + 2)) {
          FUN_140213274(&local_c8,1);
        }
        *(undefined2 *)local_c0 = 0x29;
        puVar4 = (undefined4 *)((longlong)local_c0 + 2);
        local_c0 = puVar4;
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  *(undefined2 *)puVar4 = 0;
  FUN_140056680(param_2,local_c8);
  if (local_b0 == '\x01') {
    FUN_1400020a8(local_c8);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899ff32 FUN_14899ff32 body=208 status=ok
// SIG undefined FUN_14899ff32(void)

ulonglong FUN_14899ff32(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = (ulonglong)((int)param_1[1] - 1);
  if ((int)param_1[1] == 0) {
    uVar7 = 0;
  }
  if ((int)param_2 < (int)uVar7 && -1 < (int)param_2) {
    uVar7 = (ulonglong)param_2;
    cVar2 = FUN_1406655ec(*(undefined2 *)(*param_1 + uVar7 * 2));
    if (cVar2 == '\0') {
      uVar1 = uVar7;
      do {
        uVar8 = uVar1;
        iVar3 = (int)param_1[1] + -1;
        if ((int)param_1[1] == 0) {
          iVar3 = 0;
        }
        if (iVar3 <= (int)uVar8 + 1) goto LAB_14899ffb6;
        iVar3 = iswpunct(*(wint_t *)(*param_1 + 2 + uVar8 * 2));
        uVar1 = uVar8 + 1;
      } while (iVar3 == 0);
      iVar3 = (int)param_1[1] + -1;
      if ((int)param_1[1] == 0) {
        iVar3 = 0;
      }
LAB_14899ffb6:
      uVar5 = (int)uVar8 + 1;
      uVar8 = uVar8 & 0xffffffff;
      if ((int)uVar5 < iVar3) {
        uVar8 = (ulonglong)uVar5;
      }
      do {
        iVar3 = (int)uVar7;
        if (iVar3 < 1) break;
        uVar7 = uVar7 - 1;
        iVar4 = iswpunct(*(wint_t *)(*param_1 + (uVar7 & 0xffffffff) * 2));
      } while (iVar4 == 0);
      uVar6 = iVar3 - 1;
      uVar5 = 0;
      if (0 < (int)uVar6) {
        uVar5 = uVar6;
      }
      uVar7 = (ulonglong)uVar6;
      if ((int)((int)uVar8 - param_2) <= (int)(param_2 - uVar5)) {
        uVar7 = uVar8;
      }
    }
    else {
      uVar7 = (ulonglong)param_2;
    }
  }
  return uVar7;
}



// FUNCTION 1489a0002 FUN_1489a0002 body=384 status=ok
// SIG undefined FUN_1489a0002(void)

longlong * FUN_1489a0002(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  if ((param_3 != 0) && (lVar4 = *(longlong *)(param_3 + 0xa8), lVar4 != 0)) {
    lVar3 = FUN_144a78b9e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (((*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30 && (*(longlong **)(lVar4 + 0x11e8) != (longlong *)0x0)) &&
        (lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x11e8) + 0xdc0))(), lVar4 != 0)))) {
      if (*(int *)(lVar4 + 0x3a0) != *(int *)(lVar4 + 0x3cc)) {
        lVar3 = *(longlong *)(param_1 + 0xd0);
        uVar1 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar7 = (uint)lVar3 & 0xffff;
        lVar6 = lVar4 + 0x3d0;
        if (*(longlong *)(lVar4 + 0x3d8) != 0) {
          lVar6 = *(longlong *)(lVar4 + 0x3d8);
        }
        iVar5 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(lVar4 + 0x3e0) - 1U &
                                 (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                                 (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar5 != -1) {
          do {
            lVar6 = *(longlong *)(lVar4 + 0x398) + (longlong)iVar5 * 0x38;
            if (*(longlong *)(*(longlong *)(lVar4 + 0x398) + (longlong)iVar5 * 0x38) == lVar3) {
              lVar4 = lVar6 + 8;
              if ((lVar4 != 0 && lVar6 != 0) && (lVar3 = FUN_1412fe774(lVar4), lVar3 != 0)) {
                lVar4 = FUN_1412fe774(lVar4);
                *param_2 = lVar4;
                bVar2 = DAT_14c950c29;
                if (lVar4 == 0) {
                  return param_2;
                }
                goto joined_r0x0001489a0053;
              }
              break;
            }
            iVar5 = *(int *)(lVar6 + 0x30);
          } while (iVar5 != -1);
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x38);
      *param_2 = lVar4;
      if ((lVar4 != 0 & DAT_14c950c29) != 1) {
        return param_2;
      }
      goto LAB_1489a009f;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  *param_2 = lVar4;
  bVar2 = DAT_14c950c29 & lVar4 != 0;
joined_r0x0001489a0053:
  if (bVar2 == 0) {
    return param_2;
  }
LAB_1489a009f:
  FUN_1456cec3c(lVar4);
  return param_2;
}



// FUNCTION 1489a01b2 FUN_1489a01b2 body=93 status=ok
// SIG undefined FUN_1489a01b2(void)

undefined8 FUN_1489a01b2(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(float *)(param_1 + 0x3f) <= 0.0001) || ((char)param_1[0x52] != '\0')) {
    return 0;
  }
  if (((longlong *)param_1[0x3d7] != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*(longlong *)param_1[0x3d7] + 0xa0))(), cVar1 == '\0')) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001489a020c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0xe78))(param_1,0x20);
  return uVar2;
}



// FUNCTION 1489a0214 FUN_1489a0214 body=177 status=ok
// SIG undefined FUN_1489a0214(void)

double * FUN_1489a0214(longlong param_1,double *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar1 = (*(longlong **)(param_1 + 0xe0))[0x22];
  if (lVar1 == 0) {
    uVar7 = 0xe0000000;
    uVar8 = 0x47efffff;
    uVar9 = 0xe0000000;
    uVar10 = 0x47efffff;
    uVar5 = 0xe0000000;
    uVar6 = 0x47efffff;
  }
  else {
    uVar7 = *(undefined4 *)(lVar1 + 0x260);
    uVar8 = *(undefined4 *)(lVar1 + 0x264);
    uVar9 = *(undefined4 *)(lVar1 + 0x268);
    uVar10 = *(undefined4 *)(lVar1 + 0x26c);
    uVar5 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
    uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
  }
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xdc0))();
  dVar2 = DAT_14c8464e0;
  dVar3 = DAT_14c8464e8;
  dVar4 = DAT_14c8464f0;
  if (lVar1 != 0) {
    dVar2 = 0.0;
    dVar3 = 0.0;
    dVar4 = (double)*(float *)(lVar1 + 0x18);
  }
  *param_2 = dVar2 + (double)CONCAT44(uVar8,uVar7);
  param_2[1] = (double)CONCAT44(uVar10,uVar9) + dVar3;
  param_2[2] = (double)CONCAT44(uVar6,uVar5) + dVar4;
  return param_2;
}



// FUNCTION 1489a02c6 FUN_1489a02c6 body=530 status=ok
// SIG undefined FUN_1489a02c6(void)

void FUN_1489a02c6(longlong *param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined1 local_68;
  byte local_67;
  undefined1 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong **)(param_1[0x1c] + 0x1d8) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1[0x1c] + 0x1d8) + 0x700))();
    if (cVar2 != '\0') {
      if ((*(char *)((longlong)param_1 + 0xd1) != (char)param_1[0x16]) ||
         ((char)param_1[0x1a] != param_2)) {
        FUN_1409df5ee(param_1,*(char *)((longlong)param_1 + 0xd1) != (char)param_1[0x16]);
        *(char *)((longlong)param_1 + 0xd1) = (char)param_1[0x16];
        *(char *)(param_1 + 0x1a) = param_2;
        lVar4 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
        if ((lVar4 != 0) && (lVar5 = (**(code **)(*param_1 + 0x150))(param_1), lVar5 != 0)) {
          FUN_1489a1152(param_1 + 0x17);
          plVar1 = param_1 + 0x18;
          FUN_1489a1158(plVar1);
          bVar11 = (char)param_1[0x1a] != '\0';
          lVar7 = 0x218;
          if (bVar11) {
            lVar7 = 0x2e8;
          }
          lVar8 = 0x1b0;
          if (bVar11) {
            lVar8 = 0x280;
          }
          plVar9 = &DAT_14cb8c980;
          if (bVar11) {
            plVar9 = &DAT_14cb8c990;
          }
          plVar10 = (longlong *)&DAT_14cb8c978;
          if (bVar11) {
            plVar10 = &DAT_14cb8c988;
          }
          if (*(char *)((longlong)param_1 + 0xd1) != '\0') {
            plVar10 = plVar9;
            lVar8 = lVar7;
          }
          param_1[0x19] = *plVar10;
          uVar6 = FUN_1402d1dc0(lVar4 + lVar8);
          FUN_14485c47a(plVar1,uVar6);
          cVar2 = FUN_144729dda(plVar1);
          if (cVar2 != '\0') {
            local_68 = 0xce;
            local_60 = &DAT_4030000000000000;
            local_58 = 0x4022000000000000;
            local_50 = 0x42c80000;
            local_4c = 4;
            local_40 = 0;
            cVar2 = FUN_140691b73();
            cVar3 = FUN_140691bc1();
            local_67 = cVar3 << 3 | cVar2 << 2;
            local_70 = FUN_14479d2ce(plVar1);
            if ((local_70 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(local_70);
            }
            local_48 = param_1[0x19];
            uVar6 = FUN_140e99050(lVar5,&local_70,lVar4 + lVar8 + 0x28);
            FUN_14485c47a(param_1 + 0x17,uVar6);
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489a0512 FUN_1489a0512 body=480 status=ok
// SIG undefined FUN_1489a0512(void)

void FUN_1489a0512(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xdc0))();
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(&DAT_00001ce8 + *(longlong *)(param_1 + 0xe0));
    if (lVar1 != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + 0x1d8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x700))();
        if (cVar3 != '\0') {
          uVar7 = *(undefined8 *)(lVar4 + 0x420);
          uVar5 = FUN_14477b664(*(undefined8 *)(lVar4 + 0x428));
          uVar6 = FUN_14477b664(uVar5);
          uVar5 = *(undefined8 *)(lVar4 + 0x430);
          local_88[0] = 0;
          local_84 = 0;
          local_78 = uVar7;
          uVar7 = FUN_14477b664(uVar6);
          local_70 = FUN_14477b664(uVar7);
          local_60 = 0;
          local_a8 = 0;
          local_68 = uVar5;
          FUN_140b32deb(&local_58,lVar1,local_88,0);
          local_58 = 0;
          local_50 = 0xffffffffffffffff;
          if ((local_60 != 0) && ((DAT_14cb26569 & 1) != 0)) {
            FUN_1400848c0(*(undefined8 *)(local_60 + 0x50));
          }
        }
      }
      if (*(char *)(param_1 + 0xd8) == '\x01') {
        uVar7 = *(undefined8 *)(lVar4 + 0x450);
        uVar5 = FUN_14477b664(*(undefined8 *)(lVar4 + 0x458));
        uVar6 = FUN_14477b664(uVar5);
        uVar5 = *(undefined8 *)(lVar4 + 0x460);
        local_88[0] = 0;
        local_84 = 0;
        local_78 = uVar7;
        uVar7 = FUN_14477b664(uVar6);
        local_70 = FUN_14477b664(uVar7);
        local_60 = 0;
        local_a8 = 0;
        local_68 = uVar5;
        FUN_140b32deb(&local_a0,lVar1,local_88,0);
        local_a0 = 0;
        local_98 = 0xffffffffffffffff;
        if ((local_60 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(local_60 + 0x50));
        }
        *(undefined1 *)(param_1 + 0xd8) = 0;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a06fe FUN_1489a06fe body=18 status=ok
// SIG undefined FUN_1489a06fe(void)

undefined8 FUN_1489a06fe(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xe0) >> 8),
                  (&DAT_00001100)[*(longlong *)(param_1 + 0xe0)] != '\x01');
}



// FUNCTION 1489a0710 FUN_1489a0710 body=201 status=ok
// SIG undefined FUN_1489a0710(void)

void FUN_1489a0710(longlong *param_1,undefined1 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if ((0.0001 < *(float *)(param_1[0x1c] + 0x1f8)) && (*(char *)(param_1[0x1c] + 0x290) == '\0')) {
    (**(code **)(*param_1 + 0x100))();
    lVar1 = param_1[0x1c];
    if (((&DAT_00001100)[lVar1] == '\n') && (*(longlong *)(lVar1 + 0x110) != 0)) {
      FUN_1409df526(lVar1,&DAT_14cb8c970);
      lVar1 = param_1[0x1c];
    }
    FUN_140257a06(lVar1,&DAT_14cb8c968,0xb);
    *(undefined1 *)((longlong)param_1 + 0xb5) = 1;
    *(undefined1 *)(param_1[0x1c] + 0x1ee1) = param_2;
    *(undefined4 *)(param_1[0x1c] + 0x1ee4) = param_3;
    FUN_144a62f0c(param_1[0x1c],*(undefined8 *)(param_1[0x1c] + 0x38),8);
    return;
  }
  return;
}



// FUNCTION 1489a07da FUN_1489a07da body=157 status=ok
// SIG undefined FUN_1489a07da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1489a07da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8c9f0) {
    FUN_144b3d300(&DAT_14cb8c9f0);
    if (DAT_14cb8c9f0 == -1) {
      DAT_14cb8c9c0 = 0;
      _DAT_14cb8c9c8 = 0;
      DAT_14cb8c9a0 = 0;
      _DAT_14cb8c9a8 = 0;
      _DAT_14cb8c9cc = 0xffffffff00000080;
      _DAT_14cb8c9d4 = 0;
      DAT_14cb8c9e0 = 0;
      _DAT_14cb8c9e8 = 0;
      atexit(FUN_143e4c99a);
      _Init_thread_footer(&DAT_14cb8c9f0);
    }
  }
  return &DAT_14cb8c9a0;
}



// FUNCTION 1489a0878 FUN_1489a0878 body=297 status=ok
// SIG undefined FUN_1489a0878(void)

void FUN_1489a0878(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0 < (int)param_1[4]) && (cVar1 = FUN_144729dda(param_1[3]), cVar1 != '\0')) {
    lVar2 = ((longlong *)param_1[0x1c])[0x22];
    if (lVar2 == 0) {
      uVar6 = 0xe0000000;
      uVar7 = 0x47efffff;
      uVar8 = 0xe0000000;
      uVar9 = 0x47efffff;
      uVar4 = 0xe0000000;
      uVar5 = 0x47efffff;
    }
    else {
      uVar6 = *(undefined4 *)(lVar2 + 0x260);
      uVar7 = *(undefined4 *)(lVar2 + 0x264);
      uVar8 = *(undefined4 *)(lVar2 + 0x268);
      uVar9 = *(undefined4 *)(lVar2 + 0x26c);
      uVar4 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
      uVar5 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
    }
    lVar2 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
    local_58 = DAT_14c8464e0;
    local_50 = DAT_14c8464e8;
    local_48 = DAT_14c8464f0;
    if (lVar2 != 0) {
      local_58 = 0.0;
      local_50 = 0.0;
      local_48 = (double)*(float *)(lVar2 + 0x18);
    }
    local_48 = (double)CONCAT44(uVar5,uVar4) + local_48;
    local_50 = (double)CONCAT44(uVar9,uVar8) + local_50;
    local_58 = local_58 + (double)CONCAT44(uVar7,uVar6);
    uVar3 = FUN_14479d2ce(param_1[3]);
    (**(code **)(*param_1 + 0x138))(param_1,uVar3,&local_58,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489a09a2 FUN_1489a09a2 body=271 status=ok
// SIG undefined FUN_1489a09a2(void)

undefined8 FUN_1489a09a2(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  plVar2 = *(longlong **)(param_1 + 0xe0);
  if (plVar2[0x3e] != 0) {
    if (plVar2[0x22] == 0) {
      uVar8 = 0xe0000000;
      uVar9 = 0x47efffff;
    }
    else {
      uVar1 = *(undefined8 *)(plVar2[0x22] + 0x270);
      uVar8 = (undefined4)uVar1;
      uVar9 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    lVar5 = (**(code **)(*plVar2 + 0xdc0))();
    dVar3 = DAT_14c8464f0;
    if (lVar5 != 0) {
      dVar3 = (double)*(float *)(lVar5 + 0x18);
    }
    fVar6 = (float)FUN_14165ac3e(*(undefined8 *)(param_1 + 0xe0));
    fVar7 = (float)(**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xe0) + 0x1f0) + 0x678))();
    cVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x178) + 0xd0))
                      (*(longlong *)(param_1 + 0xe0) + 0x178);
    if ((cVar4 != '\0') &&
       ((double)*(float *)(param_1 + 0x38) - ((double)CONCAT44(uVar9,uVar8) + dVar3) <
        (double)(fVar7 - fVar6))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1489a0ab2 FUN_1489a0ab2 body=181 status=ok
// SIG undefined FUN_1489a0ab2(void)

void FUN_1489a0ab2(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  
  plVar2 = *(longlong **)(param_1 + 0xe0);
  if ((0.0001 < *(float *)(plVar2 + 0x3f)) && ((char)plVar2[0x52] == '\0')) {
    cVar3 = (**(code **)(*plVar2 + 0xeb8))();
    if (cVar3 != '\0') {
      FUN_14880ef48(*(undefined8 *)(param_1 + 0xe0),0);
    }
    lVar4 = *(longlong *)(param_1 + 0xe0);
    if ((*(uint *)(lVar4 + 0x3ba0) & 1) != 0) {
      *(uint *)(lVar4 + 0x3ba0) = *(uint *)(lVar4 + 0x3ba0) & 0xfffffffe;
      lVar4 = *(longlong *)(param_1 + 0xe0);
    }
    cVar3 = (**(code **)(*(longlong *)(lVar4 + 0x178) + 0xd0))(lVar4 + 0x178);
    if (cVar3 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x7f0))(*(longlong **)(param_1 + 0xe0),0);
    }
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0xe0) + 0x5b5);
    if ((bVar1 & 0x20) != 0) {
      *(byte *)(*(longlong *)(param_1 + 0xe0) + 0x5b5) = bVar1 & 0xdf;
    }
  }
  return;
}



// FUNCTION 1489a0b68 FUN_1489a0b68 body=7 status=ok
// SIG undefined FUN_1489a0b68(void)

void FUN_1489a0b68(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001489a0b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



// FUNCTION 1489a0b70 FUN_1489a0b70 body=438 status=ok
// SIG undefined FUN_1489a0b70(void)

void FUN_1489a0b70(longlong *param_1)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_1b8 [32];
  undefined1 *local_198;
  undefined1 local_190;
  double local_180;
  double local_178;
  double local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_140 [4];
  undefined4 local_13c;
  undefined4 local_9c;
  undefined4 local_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  cVar3 = (**(code **)(*param_1 + 0x40))();
  if ((cVar3 != '\0') && (lVar4 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))(), lVar4 != 0))
  {
    lVar4 = ((longlong *)param_1[0x1c])[0x22];
    if (lVar4 != 0) {
      dVar1 = *(double *)(lVar4 + 0x270);
      lVar4 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
      dVar2 = DAT_14c8464f0;
      if (lVar4 != 0) {
        dVar2 = (double)*(float *)(lVar4 + 0x18);
      }
      fVar5 = *(float *)(param_1 + 7);
      lVar4 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
      fVar5 = (float)((double)fVar5 - ((dVar1 + dVar2) - (double)*(float *)(lVar4 + 0x1c)));
      if (0.0 < fVar5) {
        memset(local_140,0,0x100);
        local_70 = 0xffffffff;
        local_9c = 0xffffffff;
        local_13c = 0x3f800000;
        lVar4 = *(longlong *)(param_1[0x1c] + 0x110);
        local_168 = *(undefined8 *)(lVar4 + 0x240);
        uStack_160 = *(undefined8 *)(lVar4 + 0x248);
        local_158 = *(undefined8 *)(lVar4 + 0x250);
        uStack_150 = *(undefined8 *)(lVar4 + 600);
        local_180 = (double)fVar5;
        local_170 = DAT_14c8462d0 * local_180;
        local_178 = DAT_14c8462c8 * local_180;
        local_180 = local_180 * DAT_14c8462c0;
        local_190 = 0;
        local_198 = local_140;
        FUN_1402eda10(param_1[0x1c],&local_180,&local_168,1);
      }
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  if ((local_40 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489a0d28 FUN_1489a0d28 body=964 status=ok
// SIG undefined FUN_1489a0d28(void)

void FUN_1489a0d28(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  undefined1 auStack_368 [32];
  undefined8 *local_348;
  undefined4 local_340;
  uint *local_338;
  undefined8 *local_330;
  undefined1 *local_328;
  uint local_318;
  undefined8 local_314;
  undefined1 local_308 [4];
  undefined4 local_304;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 local_264;
  undefined4 local_238;
  undefined1 local_208 [4];
  undefined4 local_204;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_164;
  undefined4 local_138;
  undefined4 local_108;
  undefined4 local_104;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 uStack_e0;
  double local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xdc0))();
  if (lVar6 != 0) {
    plVar2 = *(longlong **)(&DAT_00001ce8 + *(longlong *)(param_1 + 0xe0));
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x110);
      if (lVar3 == 0) {
        local_e8 = 3.4028234663852886e+38;
        uStack_e0 = 0x47efffffe0000000;
        local_d8 = 3.4028234663852886e+38;
        local_f8 = 3.4028234663852886e+38;
        local_100 = local_f8;
      }
      else {
        local_e8 = *(double *)(lVar3 + 0x260);
        uStack_e0 = *(undefined8 *)(lVar3 + 0x268);
        local_f8 = *(double *)(lVar3 + 0x268) + 0.0;
        local_d8 = *(double *)(lVar3 + 0x270);
        local_100 = local_e8 + 0.0;
      }
      local_f0 = local_d8 - (double)*(float *)(lVar6 + 0x20);
      local_104 = 0;
      local_108 = 0;
      (**(code **)(*plVar2 + 0x528))(plVar2,&local_104,&local_108);
      memset(local_208,0,0x100);
      local_138 = 0xffffffff;
      local_164 = 0xffffffff;
      local_204 = 0x3f800000;
      local_a4 = 0;
      local_a0 = 0x101;
      local_78 = 0;
      local_70 = 0x800000000;
      local_58 = 0;
      local_50 = 0x400000000;
      local_b8 = 0;
      local_ac = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b7 = 1;
      local_b5 = 0;
      local_a8 = 0;
      local_b4 = 0x1000000;
      local_b0 = 1;
      FUN_144a85a22(&local_c8,*(undefined8 *)(&DAT_00001ce8 + *(longlong *)(param_1 + 0xe0)));
      uVar7 = FUN_1447210f0(plVar2);
      local_318 = 3;
      local_314 = CONCAT44(local_108,local_104);
      local_340 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xe0) + 0x110) + 0x580))();
      local_328 = &DAT_14cad0f10;
      local_348 = &DAT_14c8463d0;
      local_338 = &local_318;
      local_330 = &local_c8;
      cVar5 = FUN_14021655c(uVar7,local_208,&local_e8,&local_100);
      if (cVar5 == '\0') {
        if (*(char *)(param_1 + 0x58) == '\x01') {
          *(undefined1 *)(param_1 + 0x58) = 0;
        }
      }
      else {
        puVar1 = (undefined8 *)(param_1 + 0x40);
        if (&local_1f8 != puVar1) {
          *(undefined8 *)(param_1 + 0x50) = local_1e8;
          *puVar1 = local_1f8;
          *(undefined8 *)(param_1 + 0x48) = uStack_1f0;
          *(undefined1 *)(param_1 + 0x58) = 1;
        }
        local_318 = 0;
        local_314 = 0;
        memset(local_308,0,0x100);
        local_238 = 0xffffffff;
        local_264 = 0xffffffff;
        local_304 = 0x3f800000;
        local_348 = (undefined8 *)0x0;
        (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x900))
                  (*(longlong **)(param_1 + 0xe0),&local_1f8,&local_318,0);
        if ((((local_318 ^ 0xffffffff) & 3) == 0) && ((undefined8 *)&local_2f8 != puVar1)) {
          *(undefined8 *)(param_1 + 0x50) = local_2e8;
          *(undefined4 *)puVar1 = local_2f8;
          *(undefined4 *)(param_1 + 0x44) = uStack_2f4;
          *(undefined4 *)(param_1 + 0x48) = uStack_2f0;
          *(undefined4 *)(param_1 + 0x4c) = uStack_2ec;
          *(undefined1 *)(param_1 + 0x58) = 1;
        }
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xdc0))();
        if (lVar6 == 0) {
          uVar8 = (undefined4)DAT_14c8464e8;
          uVar9 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
          dVar10 = DAT_14c8464e0;
          dVar4 = DAT_14c8464f0;
        }
        else {
          uVar8 = 0;
          uVar9 = 0;
          dVar10 = 0.0;
          dVar4 = (double)*(float *)(lVar6 + 0x18);
        }
        *(double *)(param_1 + 0x40) = dVar10 + *(double *)(param_1 + 0x40);
        *(double *)(param_1 + 0x48) = (double)CONCAT44(uVar9,uVar8) + *(double *)(param_1 + 0x48);
        *(double *)(param_1 + 0x50) = dVar4 + *(double *)(param_1 + 0x50);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a10ee FUN_1489a10ee body=99 status=ok
// SIG undefined FUN_1489a10ee(void)

longlong FUN_1489a10ee(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(&DAT_00001ce8 + *(longlong *)(param_1 + 0xe0)) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(&DAT_00001ce8 + *(longlong *)(param_1 + 0xe0)) + 0x3c0),
     lVar1 != 0)) {
    lVar2 = FUN_1449f3324();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (*(longlong *)(lVar1 + 0xa70) != 0) {
        return *(longlong *)(lVar1 + 0xa70) + 0x110;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1489a1152 FUN_1489a1152 body=5 status=ok
// SIG undefined FUN_1489a1152(void)

undefined4 FUN_1489a1152(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1[1] == 0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (lVar3 == 0) {
      return 0;
    }
    if (*(uint *)(lVar3 + 0x10) != param_1[1]) {
      return 0;
    }
    uVar2 = CONCAT31((int3)(*(uint *)(lVar3 + 8) >> 8),(*(uint *)(lVar3 + 8) & 0x10200000) == 0);
  }
  return uVar2;
}



// FUNCTION 1489a1158 FUN_1489a1158 body=5 status=ok
// SIG undefined FUN_1489a1158(void)

undefined4 FUN_1489a1158(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1[1] == 0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (lVar3 == 0) {
      return 0;
    }
    if (*(uint *)(lVar3 + 0x10) != param_1[1]) {
      return 0;
    }
    uVar2 = CONCAT31((int3)(*(uint *)(lVar3 + 8) >> 8),(*(uint *)(lVar3 + 8) & 0x10200000) == 0);
  }
  return uVar2;
}



// FUNCTION 1489a1546 FUN_1489a1546 body=78 status=ok
// SIG undefined FUN_1489a1546(void)

undefined8 FUN_1489a1546(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x40) == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001489a1585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdd0))();
      return uVar3;
    }
  }
  return 1;
}



// FUNCTION 1489a15cc FUN_1489a15cc body=40 status=ok
// SIG undefined FUN_1489a15cc(void)

undefined8 FUN_1489a15cc(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145834054(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1489a1600 FUN_1489a1600 body=28 status=ok
// SIG undefined FUN_1489a1600(void)

void FUN_1489a1600(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_145734bb4(param_1);
  return;
}



// FUNCTION 1489a161c FUN_1489a161c body=38 status=ok
// SIG undefined FUN_1489a161c(void)

undefined8 FUN_1489a161c(undefined8 param_1,int param_2)

{
  FUN_140c2c418();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a1644 FUN_1489a1644 body=29 status=ok
// SIG undefined FUN_1489a1644(void)

undefined8 FUN_1489a1644(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a166c FUN_1489a166c body=52 status=ok
// SIG undefined FUN_1489a166c(void)

undefined8 * FUN_1489a166c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b3f62b0;
  FUN_144a5ac3a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a16a0 FUN_1489a16a0 body=52 status=ok
// SIG undefined FUN_1489a16a0(void)

undefined8 * FUN_1489a16a0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b3f62b0;
  FUN_144a5ac3a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a16d4 FUN_1489a16d4 body=38 status=ok
// SIG undefined FUN_1489a16d4(void)

undefined8 FUN_1489a16d4(undefined8 param_1,int param_2)

{
  FUN_140cda65e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a16fa FUN_1489a16fa body=38 status=ok
// SIG undefined FUN_1489a16fa(void)

undefined8 FUN_1489a16fa(undefined8 param_1,int param_2)

{
  FUN_140e2e838();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a1720 FUN_1489a1720 body=38 status=ok
// SIG undefined FUN_1489a1720(void)

undefined8 FUN_1489a1720(undefined8 param_1,int param_2)

{
  FUN_140bef274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a174a FUN_1489a174a body=38 status=ok
// SIG undefined FUN_1489a174a(void)

undefined8 FUN_1489a174a(undefined8 param_1,int param_2)

{
  FUN_140bf0348();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a1770 FUN_1489a1770 body=38 status=ok
// SIG undefined FUN_1489a1770(void)

undefined8 FUN_1489a1770(undefined8 param_1,int param_2)

{
  FUN_140dce4e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a17a6 FUN_1489a17a6 body=136 status=ok
// SIG undefined FUN_1489a17a6(void)

void FUN_1489a17a6(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  if (param_2 <= (int)uVar1) {
    iVar5 = 5;
    if (5 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (5 < *(uint *)(param_1 + 0x84)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x84) = iVar5;
    FUN_1489a1830(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1489a1830 FUN_1489a1830 body=140 status=ok
// SIG undefined FUN_1489a1830(void)

void FUN_1489a1830(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x78);
  if ((uint)param_3 < 6) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x78,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x78),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x78,param_2,param_3,0x18);
  return;
}



// FUNCTION 1489a18bc FUN_1489a18bc body=116 status=ok
// SIG undefined FUN_1489a18bc(void)

void FUN_1489a18bc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x88)) {
      uVar2 = uVar1 / 0x88 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x88,8);
  }
  return;
}



// FUNCTION 1489a1930 FUN_1489a1930 body=150 status=ok
// SIG undefined FUN_1489a1930(void)

void FUN_1489a1930(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1489a19c8 FUN_1489a19c8 body=62 status=ok
// SIG undefined FUN_1489a19c8(void)

void FUN_1489a19c8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b430d08;
  FUN_1449db362(param_1 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001489a19fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1489a1a06 FUN_1489a1a06 body=29 status=ok
// SIG undefined FUN_1489a1a06(void)

undefined8 FUN_1489a1a06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a1a24 FUN_1489a1a24 body=73 status=ok
// SIG undefined FUN_1489a1a24(void)

undefined8 * FUN_1489a1a24(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b430d08;
  FUN_1449db362(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a1a70 FUN_1489a1a70 body=167 status=ok
// SIG undefined FUN_1489a1a70(void)

void FUN_1489a1a70(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489a1aeb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489a1aeb;
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
LAB_1489a1aeb:
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
                    /* WARNING: Could not recover jumptable at 0x0001489a1b0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489a1b40 FUN_1489a1b40 body=93 status=ok
// SIG undefined FUN_1489a1b40(void)

void FUN_1489a1b40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42fcd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42fc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489a1b9e FUN_1489a1b9e body=93 status=ok
// SIG undefined FUN_1489a1b9e(void)

void FUN_1489a1b9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42fcd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42fc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489a1bfc FUN_1489a1bfc body=126 status=ok
// SIG undefined FUN_1489a1bfc(void)

void FUN_1489a1bfc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42fcd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42fc60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489a1c6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a1cb2 FUN_1489a1cb2 body=93 status=ok
// SIG undefined FUN_1489a1cb2(void)

void FUN_1489a1cb2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42fdb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42fd40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489a1d10 FUN_1489a1d10 body=93 status=ok
// SIG undefined FUN_1489a1d10(void)

void FUN_1489a1d10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42fdb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42fd40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489a1d6e FUN_1489a1d6e body=126 status=ok
// SIG undefined FUN_1489a1d6e(void)

void FUN_1489a1d6e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42fdb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42fd40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489a1ddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a1dfc FUN_1489a1dfc body=132 status=ok
// SIG undefined FUN_1489a1dfc(void)

void FUN_1489a1dfc(longlong param_1,int param_2)

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



// FUNCTION 1489a1e86 FUN_1489a1e86 body=81 status=ok
// SIG undefined FUN_1489a1e86(void)

undefined8 FUN_1489a1e86(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1489a1ede FUN_1489a1ede body=89 status=ok
// SIG undefined FUN_1489a1ede(void)

bool FUN_1489a1ede(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1489a1f29;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1489a1f29:
  return lVar6 == param_2;
}



// FUNCTION 1489a1f38 FUN_1489a1f38 body=118 status=ok
// SIG undefined FUN_1489a1f38(void)

void FUN_1489a1f38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b430ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42fe40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1489a1fae FUN_1489a1fae body=118 status=ok
// SIG undefined FUN_1489a1fae(void)

void FUN_1489a1fae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b430ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42fe40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1489a2024 FUN_1489a2024 body=156 status=ok
// SIG undefined FUN_1489a2024(void)

void FUN_1489a2024(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b430ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42fe40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489a20b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a20c0 FUN_1489a20c0 body=104 status=ok
// SIG undefined FUN_1489a20c0(void)

void FUN_1489a20c0(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489a210d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489a211e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489a212a FUN_1489a212a body=83 status=ok
// SIG undefined FUN_1489a212a(void)

undefined8 FUN_1489a212a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1489a2184 FUN_1489a2184 body=89 status=ok
// SIG undefined FUN_1489a2184(void)

bool FUN_1489a2184(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1489a21cf;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1489a21cf:
  return lVar6 == param_2;
}



// FUNCTION 1489a21de FUN_1489a21de body=118 status=ok
// SIG undefined FUN_1489a21de(void)

void FUN_1489a21de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42feb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1489a2254 FUN_1489a2254 body=156 status=ok
// SIG undefined FUN_1489a2254(void)

void FUN_1489a2254(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42feb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489a22e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a22f0 FUN_1489a22f0 body=100 status=ok
// SIG undefined FUN_1489a22f0(void)

ulonglong FUN_1489a22f0(longlong param_1)

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
LAB_1489a2349:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1489a2349;
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



// FUNCTION 1489a2354 FUN_1489a2354 body=31 status=ok
// SIG undefined FUN_1489a2354(void)

undefined8 FUN_1489a2354(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a2388 FUN_1489a2388 body=85 status=ok
// SIG undefined FUN_1489a2388(void)

void FUN_1489a2388(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42ff30;
  return;
}



// FUNCTION 1489a23de FUN_1489a23de body=118 status=ok
// SIG undefined FUN_1489a23de(void)

void FUN_1489a23de(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42ff30;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489a2445. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a2454 FUN_1489a2454 body=101 status=ok
// SIG undefined FUN_1489a2454(void)

undefined8 FUN_1489a2454(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14601a226(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a24ba FUN_1489a24ba body=154 status=ok
// SIG undefined FUN_1489a24ba(void)

undefined8 * FUN_1489a24ba(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_14b42a740;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  param_1[2] = lVar3;
  *param_1 = &PTR_FUN_14b430000;
  param_1[4] = *param_3;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_2);
  if (param_2 != 0) {
    uVar2 = FUN_14479d2ce(param_1 + 5);
    uVar2 = FUN_14477b072(uVar2,*param_3);
    param_1[3] = uVar2;
  }
  return param_1;
}



// FUNCTION 1489a2554 FUN_1489a2554 body=29 status=ok
// SIG undefined FUN_1489a2554(void)

undefined8 FUN_1489a2554(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a258a FUN_1489a258a body=29 status=ok
// SIG undefined FUN_1489a258a(void)

bool FUN_1489a258a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 1489a25a8 FUN_1489a25a8 body=26 status=ok
// SIG undefined FUN_1489a25a8(void)

bool FUN_1489a25a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 1489a25cc FUN_1489a25cc body=101 status=ok
// SIG undefined FUN_1489a25cc(void)

void FUN_1489a25cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a740;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489a2632 FUN_1489a2632 body=101 status=ok
// SIG undefined FUN_1489a2632(void)

void FUN_1489a2632(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a740;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489a2698 FUN_1489a2698 body=134 status=ok
// SIG undefined FUN_1489a2698(void)

void FUN_1489a2698(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42a740;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b430000;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489a270f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a271e FUN_1489a271e body=150 status=ok
// SIG undefined FUN_1489a271e(void)

void FUN_1489a271e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_38 = param_2;
  FUN_1489a28b6(&local_30,param_3);
  local_20 = '\x01';
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(param_1 + 0x18),&local_38);
  if (local_20 == '\x01') {
    FUN_140ee7917(local_30,local_28);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a27b6 FUN_1489a27b6 body=255 status=ok
// SIG undefined FUN_1489a27b6(void)

bool FUN_1489a27b6(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x28,&local_58,0);
    lVar3 = local_58;
  }
  else {
    lVar3 = 0;
  }
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    local_40 = 0;
    local_58 = param_2;
    FUN_1489a28b6(&local_50,param_3);
    local_40 = '\x01';
    (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(param_1 + 0x18),&local_58);
    if (local_40 == '\x01') {
      FUN_140ee7917(local_50,local_48);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return plVar2 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a28b6 FUN_1489a28b6 body=77 status=ok
// SIG undefined FUN_1489a28b6(void)

undefined8 * FUN_1489a28b6(undefined8 *param_1,undefined8 *param_2)

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
    FUN_140f15232(param_1,iVar1,0);
    FUN_140f151ed(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1489a2908 FUN_1489a2908 body=81 status=ok
// SIG undefined FUN_1489a2908(void)

undefined8 FUN_1489a2908(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1489a2960 FUN_1489a2960 body=89 status=ok
// SIG undefined FUN_1489a2960(void)

bool FUN_1489a2960(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1489a29ab;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1489a29ab:
  return lVar6 == param_2;
}



// FUNCTION 1489a29ba FUN_1489a29ba body=118 status=ok
// SIG undefined FUN_1489a29ba(void)

void FUN_1489a29ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b430ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430070;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1489a2a30 FUN_1489a2a30 body=118 status=ok
// SIG undefined FUN_1489a2a30(void)

void FUN_1489a2a30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b430ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430070;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1489a2aa6 FUN_1489a2aa6 body=156 status=ok
// SIG undefined FUN_1489a2aa6(void)

void FUN_1489a2aa6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b430ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b430070;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489a2b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a2b42 FUN_1489a2b42 body=104 status=ok
// SIG undefined FUN_1489a2b42(void)

void FUN_1489a2b42(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489a2b8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489a2ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489a2baa FUN_1489a2baa body=38 status=ok
// SIG undefined FUN_1489a2baa(void)

undefined8 FUN_1489a2baa(undefined8 param_1,int param_2)

{
  FUN_140cda65e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a2bd0 FUN_1489a2bd0 body=38 status=ok
// SIG undefined FUN_1489a2bd0(void)

undefined8 FUN_1489a2bd0(undefined8 param_1,int param_2)

{
  FUN_140cda65e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a2bf6 FUN_1489a2bf6 body=38 status=ok
// SIG undefined FUN_1489a2bf6(void)

undefined8 FUN_1489a2bf6(undefined8 param_1,int param_2)

{
  FUN_140cda65e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a2c20 FUN_1489a2c20 body=81 status=ok
// SIG undefined FUN_1489a2c20(void)

undefined8 FUN_1489a2c20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1489a2c78 FUN_1489a2c78 body=89 status=ok
// SIG undefined FUN_1489a2c78(void)

bool FUN_1489a2c78(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1489a2cc3;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1489a2cc3:
  return lVar6 == param_2;
}



// FUNCTION 1489a2cd2 FUN_1489a2cd2 body=118 status=ok
// SIG undefined FUN_1489a2cd2(void)

void FUN_1489a2cd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aac28e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4301d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1489a2d48 FUN_1489a2d48 body=118 status=ok
// SIG undefined FUN_1489a2d48(void)

void FUN_1489a2d48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aac28e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4301d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1489a2dbe FUN_1489a2dbe body=156 status=ok
// SIG undefined FUN_1489a2dbe(void)

void FUN_1489a2dbe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aac28e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4301d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489a2e4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a2e5a FUN_1489a2e5a body=104 status=ok
// SIG undefined FUN_1489a2e5a(void)

void FUN_1489a2e5a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489a2ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489a2eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489a2ec2 FUN_1489a2ec2 body=142 status=ok
// SIG undefined FUN_1489a2ec2(void)

void FUN_1489a2ec2(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xc08);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x80;
    if (0x80 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0xc0c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xc0c) = iVar5;
    FUN_1489a2f52(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1489a2f52 FUN_1489a2f52 body=152 status=ok
// SIG undefined FUN_1489a2f52(void)

void FUN_1489a2f52(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc00);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc00,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0xc00),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc00,param_2,param_3,0x18);
  return;
}



// FUNCTION 1489a2fea FUN_1489a2fea body=29 status=ok
// SIG undefined FUN_1489a2fea(void)

undefined8 FUN_1489a2fea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a3024 FUN_1489a3024 body=93 status=ok
// SIG undefined FUN_1489a3024(void)

void FUN_1489a3024(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c990;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b430240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489a3082 FUN_1489a3082 body=93 status=ok
// SIG undefined FUN_1489a3082(void)

void FUN_1489a3082(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c990;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b430240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489a30e0 FUN_1489a30e0 body=126 status=ok
// SIG undefined FUN_1489a30e0(void)

void FUN_1489a30e0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42c990;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b430240;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489a314f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a3170 FUN_1489a3170 body=24 status=ok
// SIG undefined FUN_1489a3170(void)

undefined8 FUN_1489a3170(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8));
  return 1;
}



// FUNCTION 1489a3188 FUN_1489a3188 body=38 status=ok
// SIG undefined FUN_1489a3188(void)

undefined8 FUN_1489a3188(undefined8 param_1,int param_2)

{
  FUN_1489a31b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a31b0 FUN_1489a31b0 body=84 status=ok
// SIG undefined FUN_1489a31b0(void)

void FUN_1489a31b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x48) = &PTR_LAB_14b430d60;
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  FUN_140bef390(param_1);
  return;
}



// FUNCTION 1489a320a FUN_1489a320a body=81 status=ok
// SIG undefined FUN_1489a320a(void)

undefined8 FUN_1489a320a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1489a3262 FUN_1489a3262 body=89 status=ok
// SIG undefined FUN_1489a3262(void)

bool FUN_1489a3262(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1489a32ad;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1489a32ad:
  return lVar6 == param_2;
}



// FUNCTION 1489a32bc FUN_1489a32bc body=118 status=ok
// SIG undefined FUN_1489a32bc(void)

void FUN_1489a32bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4303d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1489a3332 FUN_1489a3332 body=156 status=ok
// SIG undefined FUN_1489a3332(void)

void FUN_1489a3332(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4303d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489a33be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a33ce FUN_1489a33ce body=100 status=ok
// SIG undefined FUN_1489a33ce(void)

void FUN_1489a33ce(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489a341a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489a3427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489a3432 FUN_1489a3432 body=100 status=ok
// SIG undefined FUN_1489a3432(void)

ulonglong FUN_1489a3432(longlong param_1)

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
LAB_1489a348b:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1489a348b;
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



// FUNCTION 1489a3496 FUN_1489a3496 body=38 status=ok
// SIG undefined FUN_1489a3496(void)

undefined8 FUN_1489a3496(undefined8 param_1,int param_2)

{
  FUN_140bef390();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a34c0 FUN_1489a34c0 body=81 status=ok
// SIG undefined FUN_1489a34c0(void)

undefined8 FUN_1489a34c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}


