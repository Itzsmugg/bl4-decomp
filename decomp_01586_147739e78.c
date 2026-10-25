// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147739e78 FUN_147739e78 body=58 status=ok
// SIG undefined FUN_147739e78(void)

longlong FUN_147739e78(longlong param_1,longlong *param_2)

{
  FUN_146a6959c(param_1 + 0x2b8);
  FUN_144a65a1e(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 147739ece FUN_147739ece body=115 status=ok
// SIG undefined FUN_147739ece(void)

longlong * FUN_147739ece(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a6901c(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 147739f42 FUN_147739f42 body=152 status=ok
// SIG undefined FUN_147739f42(void)

void FUN_147739f42(longlong param_1)

{
  FUN_1449db362(param_1 + 0x2d8);
  FUN_1449db362(param_1 + 0x2c8);
  FUN_144a65a1e(*(undefined8 *)(param_1 + 0x2b8),*(undefined4 *)(param_1 + 0x2c0));
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x2a0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x290) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x290) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x270);
  FUN_141515cba(param_1 + 0x1e0);
  FUN_146a69c52(param_1 + 0x1a8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 147739fda FUN_147739fda body=184 status=ok
// SIG undefined FUN_147739fda(void)

void FUN_147739fda(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1413a517a(param_1 + 0x7c0);
  *(undefined1 *)(param_1 + 0x7d8) = *(undefined1 *)(param_2 + 0x18);
  local_20 = DAT_14cab7c40;
  local_28 = DAT_14cab7c38;
  FUN_140e2f5f4(param_1 + 0x28);
  local_48 = *(undefined8 *)(param_1 + 0x7c0);
  local_40 = *(undefined8 *)(param_1 + 0x7c8);
  local_38 = *(longlong *)(param_1 + 2000);
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  local_30 = *(undefined1 *)(param_1 + 0x7d8);
  FUN_14773a094(param_1 + 0x828);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773a094 FUN_14773a094 body=149 status=ok
// SIG undefined FUN_14773a094(void)

void FUN_14773a094(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  local_30 = param_2[1];
  local_28 = param_2[2];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_20 = *(undefined1 *)(param_2 + 3);
  FUN_14773847a();
  puVar2 = (undefined8 *)param_2[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773a13a FUN_14773a13a body=38 status=ok
// SIG undefined FUN_14773a13a(void)

void FUN_14773a13a(undefined1 *param_1,char param_2)

{
  undefined1 *puVar1;
  
  if ((byte)(param_2 - 1U) < 4) {
    puVar1 = (&PTR_DAT_14a545290)[(byte)(param_2 - 1U)];
  }
  else {
    puVar1 = &DAT_14c96b238;
  }
  *param_1 = *puVar1;
  return;
}



// FUNCTION 14773a164 FUN_14773a164 body=60 status=ok
// SIG undefined FUN_14773a164(void)

void FUN_14773a164(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x188) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x180);
  }
  else {
    uVar1 = FUN_146ad6ad6(*(longlong *)(param_1 + 0x188));
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14773a1b6 FUN_14773a1b6 body=179 status=ok
// SIG undefined FUN_14773a1b6(void)

void FUN_14773a1b6(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(bool *)(param_1 + 0x180) = local_1c != 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_146ad6f02(*(longlong *)(param_1 + 0x188),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773a26a FUN_14773a26a body=44 status=ok
// SIG undefined FUN_14773a26a(void)

void FUN_14773a26a(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x188) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x180);
  }
  else {
    uVar1 = FUN_146ad6ad6();
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 14773a2ba FUN_14773a2ba body=155 status=ok
// SIG undefined FUN_14773a2ba(void)

void FUN_14773a2ba(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') && (iVar4 = *(int *)(param_1 + 0x170), 0 < iVar4)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar5 * 8);
      if ((plVar3 != (longlong *)0x0) && (plVar3[6] != 0)) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,1);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  plVar3 = *(longlong **)(param_1 + 400);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 400) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014773a351. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14773a356 FUN_14773a356 body=150 status=ok
// SIG undefined FUN_14773a356(void)

longlong FUN_14773a356(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773a3ee FUN_14773a3ee body=115 status=ok
// SIG undefined FUN_14773a3ee(void)

longlong * FUN_14773a3ee(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1429068be(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14773a462 FUN_14773a462 body=226 status=ok
// SIG undefined FUN_14773a462(void)

void FUN_14773a462(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined1 local_29;
  code *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x188);
  if (lVar3 != 0) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      local_40 = DAT_14c98dec8;
      local_38 = DAT_14c98ded0;
      if (DAT_14c98ded0 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
        UNLOCK();
      }
    }
    else {
      local_20 = &local_29;
      local_28 = FUN_143336ee2;
      FUN_1407616b4(*(longlong *)(param_2 + 0x30),&local_40);
    }
    FUN_140a58896(lVar3 + 0x1e0,&local_40);
    FUN_14032aaf4(lVar3 + 0x268,0);
    plVar4 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773a546 FUN_14773a546 body=65 status=ok
// SIG undefined FUN_14773a546(void)

void FUN_14773a546(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x188);
  if (lVar1 != 0) {
    FUN_140a58896(lVar1 + 0x1e0,&DAT_14c98dec8);
    FUN_14032aaf4(lVar1 + 0x268,0);
    return;
  }
  return;
}



// FUNCTION 14773a594 FUN_14773a594 body=156 status=ok
// SIG undefined FUN_14773a594(void)

void FUN_14773a594(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14773a632(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773a632 FUN_14773a632 body=423 status=ok
// SIG undefined FUN_14773a632(void)

void FUN_14773a632(longlong *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    FUN_1446ddc76(&local_30,"NullListViewItem",1);
    pwVar1 = L"Cannot add null item into ListView.";
    local_38 = local_30;
LAB_14773a76c:
    FUN_1415b7ec4(pwVar1,3,local_38);
  }
  else {
    iVar3 = (int)param_1[0x154];
    if ((longlong)iVar3 != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(param_1[0x153] + lVar2) == param_2) {
          FUN_1446ddc76(&local_38,"DuplicateListViewItem",1);
          pwVar1 = L"Cannot add duplicate item into ListView.";
          goto LAB_14773a76c;
        }
        lVar2 = lVar2 + 8;
      } while ((longlong)iVar3 * 8 - lVar2 != 0);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
      iVar3 = (int)param_1[0x154];
    }
    *(uint *)(param_1 + 0x154) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xaa4) < iVar3 + 1U) {
      FUN_140845902(param_1 + 0x153,iVar3);
    }
    *(longlong *)(param_1[0x153] + (longlong)iVar3 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    local_48 = (longlong *)0x0;
    local_40 = 1;
    FUN_14010590e(&local_48,1,0);
    *local_48 = param_2;
    local_58 = 0;
    uStack_50 = 0;
    (**(code **)(*param_1 + 0x340))(param_1,&local_48);
    if ((longlong *)param_1[0x50] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x50] + 0x240))();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773a814 FUN_14773a814 body=59 status=ok
// SIG undefined FUN_14773a814(void)

void FUN_14773a814(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x290) + 0x58))(param_1 + 0x290);
  if (lVar1 == 0) {
    return;
  }
  FUN_147706508(lVar1);
  return;
}



// FUNCTION 14773a850 FUN_14773a850 body=70 status=ok
// SIG undefined FUN_14773a850(void)

void FUN_14773a850(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x290) + 0x58))();
  if (lVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(lVar1 + 0x718) - *(int *)(lVar1 + 0x744);
  }
  *param_3 = iVar2;
  return;
}



// FUNCTION 14773a896 FUN_14773a896 body=45 status=ok
// SIG undefined FUN_14773a896(void)

void FUN_14773a896(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14776a0e4(param_1 + 0x290);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14773a8ca FUN_14773a8ca body=228 status=ok
// SIG undefined FUN_14773a8ca(void)

void FUN_14773a8ca(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar4 = (**(code **)(*(longlong *)(param_1 + 0x290) + 0x58))(param_1 + 0x290);
  if (lVar4 == 0) {
    bVar2 = false;
  }
  else {
    plVar5 = local_38;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    iVar3 = FUN_14776a2ae(lVar4,plVar5);
    bVar2 = 0 < iVar3;
  }
  *(bool *)param_3 = bVar2;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773a9b6 FUN_14773a9b6 body=195 status=ok
// SIG undefined FUN_14773a9b6(void)

void FUN_14773a9b6(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x290) + 0x58))(param_1 + 0x290);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14776a40c(lVar3,uVar1);
  }
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773aa7a FUN_14773aa7a body=208 status=ok
// SIG undefined FUN_14773aa7a(void)

void FUN_14773aa7a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  lVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 != 0) {
    plVar4 = (longlong *)(param_1 + 0x290);
    lVar3 = (**(code **)(*(longlong *)(param_1 + 0x290) + 0x58))(plVar4);
    if (lVar3 != 0) {
      uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
      FUN_14776a48a(lVar3,lVar1,uVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773ab4c FUN_14773ab4c body=220 status=ok
// SIG undefined FUN_14773ab4c(void)

void FUN_14773ab4c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  lVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 != 0) {
    plVar4 = (longlong *)(param_1 + 0x290);
    lVar3 = (**(code **)(*(longlong *)(param_1 + 0x290) + 0x58))(plVar4);
    if (lVar3 != 0) {
      uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
      *(longlong *)(lVar3 + 0x7c8) = lVar1;
      *(undefined4 *)(lVar3 + 2000) = uVar2;
      FUN_146af42a2(lVar3);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773ac30 FUN_14773ac30 body=298 status=ok
// SIG undefined FUN_14773ac30(void)

void FUN_14773ac30(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_30;
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x290) + 0x58))(param_1 + 0x290);
  if (lVar2 != 0) {
    FUN_147706374(lVar2,&local_28,iVar1 != 0,3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773ad5c FUN_14773ad5c body=180 status=ok
// SIG undefined FUN_14773ad5c(void)

void FUN_14773ad5c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14773bde0(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773ae12 FUN_14773ae12 body=173 status=ok
// SIG undefined FUN_14773ae12(void)

void FUN_14773ae12(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xaa8) != 0) {
    FUN_147706086(*(longlong *)(param_1 + 0xaa8),local_20,3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773aed6 FUN_14773aed6 body=258 status=ok
// SIG undefined FUN_14773aed6(void)

void FUN_14773aed6(longlong *param_1)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  local_48 = (void *)0x0;
  local_40 = (int)param_1[0x154];
  lVar1 = (longlong)local_40;
  _Src = (void *)param_1[0x153];
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_14010590e(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar1 << 3);
  }
  *(undefined4 *)(param_1 + 0x154) = 0;
  if (*(int *)((longlong)param_1 + 0xaa4) < 0) {
    FUN_140c6998c(param_1 + 0x153,0);
  }
  (**(code **)(*param_1 + 0x340))(param_1,local_38,&local_48);
  if ((longlong *)param_1[0x50] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x50] + 0x240))();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773aff8 FUN_14773aff8 body=206 status=ok
// SIG undefined FUN_14773aff8(void)

void FUN_14773aff8(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = 0xffffffff;
  if ((longlong)*(int *)(param_1 + 0xaa0) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0xaa0) << 3;
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xa98) + lVar3 * 8) == local_28) {
        uVar1 = (undefined4)lVar3;
        break;
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14773b0c8 FUN_14773b0c8 body=208 status=ok
// SIG undefined FUN_14773b0c8(void)

void FUN_14773b0c8(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if (((longlong)local_24 < 0) || (*(int *)(param_1 + 0xaa0) <= local_24)) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa98) + (longlong)local_24 * 8);
    if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
      FUN_1456cec3c(lVar1);
    }
  }
  *param_3 = lVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773b212 FUN_14773b212 body=53 status=ok
// SIG undefined FUN_14773b212(void)

void FUN_14773b212(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xaa8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_146af5c6c();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14773b248 FUN_14773b248 body=154 status=ok
// SIG undefined FUN_14773b248(void)

void FUN_14773b248(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14773b2e4(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773b2e4 FUN_14773b2e4 body=122 status=ok
// SIG undefined FUN_14773b2e4(void)

void FUN_14773b2e4(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x290);
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0xaa0) <= (int)param_2)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa98) + (ulonglong)param_2 * 8);
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
    }
  }
  lVar3 = (**(code **)(*plVar1 + 0x58))(plVar1);
  if (lVar3 == 0) {
    return;
  }
  uVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
  FUN_14776a48a(lVar3,lVar4,uVar2);
  return;
}



// FUNCTION 14773b35e FUN_14773b35e body=223 status=ok
// SIG undefined FUN_14773b35e(void)

void FUN_14773b35e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14773b618(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773b43e FUN_14773b43e body=223 status=ok
// SIG undefined FUN_14773b43e(void)

void FUN_14773b43e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14773b51e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773b51e FUN_14773b51e body=91 status=ok
// SIG undefined FUN_14773b51e(void)

void FUN_14773b51e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  
  if (0 < (longlong)*(int *)(param_1 + 0xaa0)) {
    uVar3 = (longlong)*(int *)(param_1 + 0xaa0) + 1;
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xa98) + -0x10 + uVar3 * 8);
      cVar2 = FUN_144b00bde(uVar1,param_2);
      if (cVar2 != '\0') {
        FUN_14773b618(param_1,uVar1);
      }
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 14773b57a FUN_14773b57a body=156 status=ok
// SIG undefined FUN_14773b57a(void)

void FUN_14773b57a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14773b618(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773b618 FUN_14773b618 body=253 status=ok
// SIG undefined FUN_14773b618(void)

void FUN_14773b618(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined4 local_50;
  longlong **local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_2;
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_48 = &local_58;
  FUN_1432619ce(param_1 + 0x153,&local_48);
  local_48 = (longlong **)0x0;
  uStack_40 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 1;
  FUN_14010590e(&local_58,1,0);
  *local_58 = (longlong)param_2;
  (**(code **)(*param_1 + 0x340))(param_1,&local_48,&local_58);
  if ((longlong *)param_1[0x50] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x50] + 0x240))();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773b716 FUN_14773b716 body=154 status=ok
// SIG undefined FUN_14773b716(void)

void FUN_14773b716(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14773b7b2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773b7b2 FUN_14773b7b2 body=140 status=ok
// SIG undefined FUN_14773b7b2(void)

void FUN_14773b7b2(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xaa0))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa98) + (ulonglong)param_2 * 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) {
      return;
    }
    plVar4 = (longlong *)(param_1 + 0x290);
    lVar3 = (**(code **)(*(longlong *)(param_1 + 0x290) + 0x58))(plVar4);
    if (lVar3 != 0) {
      uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
      *(longlong *)(lVar3 + 0x7c8) = lVar1;
      *(undefined4 *)(lVar3 + 2000) = uVar2;
      FUN_146af42a2(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 14773b83e FUN_14773b83e body=197 status=ok
// SIG undefined FUN_14773b83e(void)

void FUN_14773b83e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar4 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined4 *)((longlong)puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 1);
  uVar3 = *(undefined4 *)((longlong)puVar4 + 0xc);
  *(undefined4 *)(param_1 + 0xac0) = *(undefined4 *)puVar4;
  *(undefined4 *)(param_1 + 0xac4) = uVar1;
  *(undefined4 *)(param_1 + 0xac8) = uVar2;
  *(undefined4 *)(param_1 + 0xacc) = uVar3;
  if (*(longlong *)(param_1 + 0xaa8) != 0) {
    FUN_146af6656(*(longlong *)(param_1 + 0xaa8),param_1 + 0xac0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773b904 FUN_14773b904 body=167 status=ok
// SIG undefined FUN_14773b904(void)

void FUN_14773b904(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0xa96) = local_19;
  if (*(longlong *)(param_1 + 0xaa8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0xaa8) + 0x7e0) = local_19;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773b9ac FUN_14773b9ac body=154 status=ok
// SIG undefined FUN_14773b9ac(void)

void FUN_14773b9ac(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14773ba48(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773ba48 FUN_14773ba48 body=117 status=ok
// SIG undefined FUN_14773ba48(void)

void FUN_14773ba48(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0xaa0) <= (int)param_2)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa98) + (ulonglong)param_2 * 8);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
  }
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x290) + 0x58))(param_1 + 0x290);
  if (lVar1 == 0) {
    return;
  }
  FUN_147706086(lVar1,lVar2,3);
  return;
}



// FUNCTION 14773babe FUN_14773babe body=151 status=ok
// SIG undefined FUN_14773babe(void)

void FUN_14773babe(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14773bb56(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773bb56 FUN_14773bb56 body=107 status=ok
// SIG undefined FUN_14773bb56(void)

void FUN_14773bb56(longlong param_1,byte param_2)

{
  undefined1 auStack_48 [32];
  uint local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0xa91) = param_2;
  if (*(longlong *)(param_1 + 0xaa8) != 0) {
    local_28 = (uint)param_2;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_14773bc46(*(longlong *)(param_1 + 0xaa8),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773bc2e FUN_14773bc2e body=23 status=ok
// SIG undefined FUN_14773bc2e(void)

void FUN_14773bc2e(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x280) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014773bc3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x280) + 0x240))();
    return;
  }
  return;
}



// FUNCTION 14773bc46 FUN_14773bc46 body=389 status=ok
// SIG undefined FUN_14773bc46(void)

void FUN_14773bc46(longlong param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar1 = (int *)(param_1 + 0x390);
  plVar7 = (longlong *)(param_1 + 0x398);
  if ((*(int *)(param_1 + 0x3a0) == 0) || ((longlong *)*plVar7 == (longlong *)0x0)) {
LAB_14773bca3:
    iVar4 = *piVar1;
  }
  else {
    cVar2 = (**(code **)(*(longlong *)*plVar7 + 0x30))();
    if (cVar2 == '\0') goto LAB_14773bca3;
    if (*(int *)(param_1 + 0x3a0) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)*plVar7;
    }
    iVar4 = (**(code **)(*plVar6 + 0x58))();
    *piVar1 = iVar4;
  }
  *(char *)(param_1 + 0x394) = (char)param_2[1];
  *piVar1 = *param_2;
  FUN_146a3c86e(plVar7,param_2 + 2);
  if (*(longlong **)(param_2 + 2) == (longlong *)0x0 || param_2[4] == 0) {
LAB_14773bced:
    iVar3 = *param_2;
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_2 + 2) + 0x30))();
    if (cVar2 == '\0') goto LAB_14773bced;
    if (param_2[4] == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_2 + 2);
    }
    iVar3 = (**(code **)(*plVar7 + 0x58))();
    *param_2 = iVar3;
  }
  if (iVar4 != iVar3) {
    if (iVar3 == 0) {
LAB_14773bd8c:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
    if (iVar4 == 3) {
      if (*(int *)(param_1 + 0x718) - *(int *)(param_1 + 0x744) != 1) goto LAB_14773bd8c;
      local_48 = param_1 + 0x720;
      local_50 = 0x100000000;
      local_40 = 0xffffffff;
      local_38 = 0;
      if (*(int *)(param_1 + 0x738) == 0) {
        lVar5 = 0;
      }
      else {
        FUN_1449c0562(&local_50);
        lVar5 = (longlong)local_40._4_4_;
      }
      FUN_147706086(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x710) + lVar5 * 0x10),3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773bde0 FUN_14773bde0 body=305 status=ok
// SIG undefined FUN_14773bde0(void)

void FUN_14773bde0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14773aed6();
  iVar5 = (int)param_2[1];
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  plVar1 = param_1 + 0x153;
  if (*(int *)((longlong)param_1 + 0xaa4) < iVar5) {
    FUN_140c6998c(plVar1);
    iVar5 = (int)param_2[1];
  }
  if (iVar5 != 0) {
    lVar3 = *param_2;
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar6);
      if (lVar4 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
        iVar2 = (int)param_1[0x154];
        *(uint *)(param_1 + 0x154) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xaa4) < iVar2 + 1U) {
          FUN_140845902(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar4;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar5 * 8 != lVar6);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  (**(code **)(*param_1 + 0x340))(param_1,plVar1,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x50] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x50] + 0x240))();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14773bf14 FUN_14773bf14 body=112 status=ok
// SIG undefined FUN_14773bf14(void)

void FUN_14773bf14(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 0) {
    local_20 = 0;
  }
  else {
    local_28 = param_2;
    local_20 = FUN_14776a160(param_1 + 0x290);
  }
  local_28 = param_2;
  FUN_1447cd2ec(param_1 + 0xad0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773bf86 FUN_14773bf86 body=360 status=ok
// SIG undefined FUN_14773bf86(void)

void FUN_14773bf86(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar1 + lVar6);
      if (lVar5 == 0) {
LAB_14773bff5:
        uVar4 = FUN_144a6c4d8();
        lVar5 = FUN_144a78ede(lVar5,uVar4);
        if (lVar5 != 0) {
          FUN_14773c2ce(&local_58);
          FUN_14773c23c(lVar5 + 0x20f,param_1,local_58);
        }
      }
      else {
        lVar3 = FUN_144a6c4d8();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_14773bff5;
        FUN_14773c17a(&local_50);
        FUN_14773c0f0(lVar5 + 0x20f,param_1,local_50);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar6);
  }
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar1 + lVar6);
      if (lVar5 != 0) {
        lVar3 = FUN_144a6c4d8();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          FUN_14773c17a(&local_60);
          FUN_1461f7214(lVar5 + 0x20f,param_1,local_60);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14773c0f0 FUN_14773c0f0 body=137 status=ok
// SIG undefined FUN_14773c0f0(void)

void FUN_14773c0f0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_1402599be(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x20f,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773c17a FUN_14773c17a body=193 status=ok
// SIG undefined FUN_14773c17a(void)

undefined8 * FUN_14773c17a(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab9128) {
    FUN_144b3d300(&DAT_14cab9128);
    if (DAT_14cab9128 == -1) {
      builtin_wcsncpy(local_38,L"OnListItemEndPlayed",0x14);
      FUN_1446f470e(&DAT_14cab9120,local_38,1);
      _Init_thread_footer(&DAT_14cab9128);
    }
  }
  *param_1 = DAT_14cab9120;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773c23c FUN_14773c23c body=145 status=ok
// SIG undefined FUN_14773c23c(void)

void FUN_14773c23c(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_1402599be(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x20f,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773c2ce FUN_14773c2ce body=196 status=ok
// SIG undefined FUN_14773c2ce(void)

undefined8 * FUN_14773c2ce(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab9138) {
    FUN_144b3d300(&DAT_14cab9138);
    if (DAT_14cab9138 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"ndPlayed",9);
      builtin_wcsncpy(local_48 + 8,L"emOuterE",8);
      builtin_wcsncpy(local_48,L"OnListIt",8);
      FUN_1446f470e(&DAT_14cab9130,local_48,1);
      _Init_thread_footer(&DAT_14cab9138);
    }
  }
  *param_1 = DAT_14cab9130;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773c394 FUN_14773c394 body=144 status=ok
// SIG undefined FUN_14773c394(void)

undefined8 * FUN_14773c394(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14773c428(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773c428 FUN_14773c428 body=711 status=ok
// SIG undefined FUN_14773c428(void)

undefined8 * FUN_14773c428(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 local_70 [4];
  uint local_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  uint local_64;
  undefined1 local_60;
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14776a502(local_70);
  local_70[0] = *(undefined1 *)(param_1 + 0xa94);
  local_6c = (uint)*(byte *)(param_1 + 0xa91);
  local_68 = *(undefined1 *)(param_1 + 0xa93);
  local_67 = *(undefined1 *)(param_1 + 0xa92);
  local_66 = *(undefined1 *)(param_1 + 0xa95);
  local_64 = (uint)*(byte *)(param_1 + 0xa90);
  local_58 = param_1 + 0x380;
  local_50 = param_1 + 0x440;
  local_48 = *(undefined4 *)(param_1 + 0xac0);
  uStack_44 = *(undefined4 *)(param_1 + 0xac4);
  uStack_40 = *(undefined4 *)(param_1 + 0xac8);
  uStack_3c = *(undefined4 *)(param_1 + 0xacc);
  local_60 = *(undefined1 *)(param_1 + 0xa96);
  FUN_14776a5d8(&local_80,param_1,param_1 + 0xa98,local_70);
  plVar5 = (longlong *)CONCAT44(uStack_74,local_78);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 **)(param_1 + 0xaa8) = local_80;
    plVar9 = *(longlong **)(param_1 + 0xab0);
    if (plVar9 == (longlong *)0x0) goto LAB_14773c501;
    *(undefined8 *)(param_1 + 0xab0) = 0;
LAB_14773c6a0:
    LOCK();
    plVar5 = plVar9 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_14773c501;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined8 **)(param_1 + 0xaa8) = local_80;
    plVar9 = *(longlong **)(param_1 + 0xab0);
    if (plVar5 != plVar9) {
      *(longlong **)(param_1 + 0xab0) = plVar5;
      if (plVar9 == (longlong *)0x0) goto LAB_14773c501;
      goto LAB_14773c6a0;
    }
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_14773c501;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar9 = plVar5;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_14773c501:
  plVar5 = (longlong *)CONCAT44(uStack_74,local_78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  lVar3 = *(longlong *)(param_1 + 0xaa8);
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  FUN_1446efa72(&local_80,0,3,0x10);
  puVar6 = local_80;
  local_78 = 3;
  *local_80 = &PTR_LAB_14a541520;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_80[2] = lVar8;
  *local_80 = &PTR_FUN_14a5414b0;
  local_80[3] = 0;
  FUN_14485c47a(local_80 + 3,param_1);
  puVar6[4] = FUN_14773bf14;
  *(undefined4 *)(puVar6 + 5) = 0;
  FUN_147717206(lVar3 + 0x690,&local_80);
  FUN_1449db362(&local_80);
  uVar4 = *(undefined8 *)(param_1 + 0xaa8);
  plVar5 = *(longlong **)(param_1 + 0xab0);
  if (plVar5 == (longlong *)0x0) {
    *param_2 = uVar4;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_2 = uVar4;
    param_2[1] = plVar5;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773c6f0 FUN_14773c6f0 body=137 status=ok
// SIG undefined FUN_14773c6f0(void)

void FUN_14773c6f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_1476cee8a(param_1 + 0x290);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x290) + 0x10))(param_1 + 0x290);
    FUN_14776ceba(uVar2,*puVar1,1);
    local_30 = *puVar1;
    local_28 = 1;
    FUN_1447cd2ec(param_1 + 0xb00);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773c77a FUN_14773c77a body=137 status=ok
// SIG undefined FUN_14773c77a(void)

void FUN_14773c77a(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_1476cee8a(param_1 + 0x290);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x290) + 0x10))(param_1 + 0x290);
    FUN_14776ceba(uVar2,*puVar1,0);
    local_30 = *puVar1;
    local_28 = 0;
    FUN_1447cd2ec(param_1 + 0xb00);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773c864 FUN_14773c864 body=108 status=ok
// SIG undefined FUN_14773c864(void)

void FUN_14773c864(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_3;
  if ((local_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14773c8d2(param_1 + -0x290,&local_20,param_4);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773c8d2 FUN_14773c8d2 body=209 status=ok
// SIG undefined FUN_14773c8d2(void)

undefined8 FUN_14773c8d2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  code *local_30;
  longlong **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = &local_40;
  local_30 = FUN_14776cfde;
  lVar1 = *param_2;
  local_40 = param_1;
  local_38 = param_3;
  if (lVar1 != 0) {
    lVar2 = FUN_1405e2bf2();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      local_48 = *param_2;
      if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      goto LAB_14773c95a;
    }
  }
  local_48 = 0;
LAB_14773c95a:
  uVar3 = FUN_14776cf6a(param_1 + 0x38,&local_48,&local_30);
  (**(code **)(*param_1 + 800))(param_1,uVar3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773c9a4 FUN_14773c9a4 body=62 status=ok
// SIG undefined FUN_14773c9a4(void)

longlong FUN_14773c9a4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1476cee8a(param_1 + 0x290);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *plVar1;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
  }
  return lVar2;
}



// FUNCTION 14773c9e2 FUN_14773c9e2 body=69 status=ok
// SIG undefined FUN_14773c9e2(void)

void FUN_14773c9e2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1 + 0x850,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773ca28 FUN_14773ca28 body=69 status=ok
// SIG undefined FUN_14773ca28(void)

void FUN_14773ca28(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1 + 0x860,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773ca6e FUN_14773ca6e body=76 status=ok
// SIG undefined FUN_14773ca6e(void)

void FUN_14773ca6e(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2 != 0;
  local_18 = param_2;
  FUN_1447cd2ec(param_1 + 0x880,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773cabc FUN_14773cabc body=73 status=ok
// SIG undefined FUN_14773cabc(void)

void FUN_14773cabc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1 + 0x890,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773cb06 FUN_14773cb06 body=72 status=ok
// SIG undefined FUN_14773cb06(void)

void FUN_14773cb06(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_3;
  FUN_1447cd2ec(param_1 + 0x8a0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773cb50 FUN_14773cb50 body=9 status=ok
// SIG undefined FUN_14773cb50(void)

void FUN_14773cb50(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xab8) = param_2;
  return;
}



// FUNCTION 14773cb5a FUN_14773cb5a body=9 status=ok
// SIG undefined FUN_14773cb5a(void)

void FUN_14773cb5a(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xabc) = param_2;
  return;
}



// FUNCTION 14773cbac FUN_14773cbac body=56 status=ok
// SIG undefined FUN_14773cbac(void)

void FUN_14773cbac(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x280) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_146af65e8();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14773cbfa FUN_14773cbfa body=99 status=ok
// SIG undefined FUN_14773cbfa(void)

void FUN_14773cbfa(longlong param_1)

{
  FUN_145a052b4(param_1 + 0x1c0,0);
  if (*(int *)(param_1 + 0x184) < 0) {
    *(undefined4 *)(param_1 + 0x180) = 0;
    FUN_147770e52(param_1 + 0x178);
  }
  else {
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  if (*(longlong **)(param_1 + 0x280) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014773cc37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x280) + 0x248))();
    return;
  }
  return;
}



// FUNCTION 14773ccce FUN_14773ccce body=177 status=ok
// SIG undefined FUN_14773ccce(void)

void FUN_14773ccce(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(bool *)(param_1 + 0x1a1) = local_1c != 0;
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FUN_146af67ae(*(longlong *)(param_1 + 0x280),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773cd84 FUN_14773cd84 body=177 status=ok
// SIG undefined FUN_14773cd84(void)

void FUN_14773cd84(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(bool *)(param_1 + 0x1a0) = local_1c != 0;
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FUN_146af67a6(*(longlong *)(param_1 + 0x280),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773ce36 FUN_14773ce36 body=191 status=ok
// SIG undefined FUN_14773ce36(void)

void FUN_14773ce36(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    if ((byte)(local_19 - 1U) < 4) {
      puVar1 = (&PTR_DAT_14a545290)[(byte)(local_19 - 1U)];
    }
    else {
      puVar1 = &DAT_14c96b238;
    }
    FUN_146af6600(*(longlong *)(param_1 + 0x280),*puVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773cef6 FUN_14773cef6 body=165 status=ok
// SIG undefined FUN_14773cef6(void)

void FUN_14773cef6(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FUN_146af48d8(*(longlong *)(param_1 + 0x280),local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773cf9c FUN_14773cf9c body=156 status=ok
// SIG undefined FUN_14773cf9c(void)

void FUN_14773cf9c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14773d03a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773d03a FUN_14773d03a body=125 status=ok
// SIG undefined FUN_14773d03a(void)

void FUN_14773d03a(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  
  *(float *)(param_1 + 400) = param_2;
  lVar2 = DAT_14c96b2f0;
  lVar1 = *(longlong *)(param_1 + 0x280);
  if (lVar1 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar3 ^ 1);
    }
    FUN_146af679c(lVar1,param_2 * *(float *)(lVar2 + uVar4 * 4));
    return;
  }
  return;
}



// FUNCTION 14773d102 FUN_14773d102 body=1158 status=ok
// SIG undefined FUN_14773d102(void)

longlong * FUN_14773d102(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_548 [32];
  undefined1 *local_528;
  undefined1 local_511;
  undefined1 local_510 [8];
  longlong *local_508;
  longlong *local_4f8;
  undefined4 local_4f0;
  undefined1 local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  longlong local_4d0;
  longlong *local_4c8;
  longlong *local_4c0;
  undefined4 local_4b8;
  double local_4b0;
  undefined1 local_4a8;
  wchar_t *local_4a0;
  undefined4 local_498;
  undefined4 uStack_494;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_548;
  FUN_144a5dc74(&local_4c0);
  lVar3 = param_1[0x31];
  if ((((lVar3 == 0) || (lVar7 = FUN_1405e2bf2(), lVar7 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar7 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
       lVar7 + 0x30 || (param_1[0x31] == 0)))) {
    local_4a0 = L"Error_MissingEntryWidgetClass";
    local_498 = 0x1d;
    FUN_1446e940c(local_510,&local_4a0);
    local_4a0 = L"UMG";
    local_498 = 3;
    FUN_1446e940c(&local_4d0,&local_4a0);
    FUN_140208bae(&local_4a0,&local_4d0,local_510,
                  L"No EntryWidgetClass specified on this list.\nEven if doing custom stuff, this is always required as a fallback."
                 );
    FUN_140008f88(&local_4c0,&local_4a0);
    if (local_4a0 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_4a0 + 0x10))();
    }
  }
  cVar5 = FUN_144a7c5f6(&local_4c0);
  if (cVar5 == '\0') {
    FUN_140a570d8(&local_4a0);
    local_4f8 = local_4c0;
    if (local_4c0 != (longlong *)0x0) {
      (**(code **)(*local_4c0 + 8))();
    }
    local_4f0 = local_4b8;
    local_4e8 = 1;
    local_4e0 = 0;
    uStack_4d8 = 0;
    uVar8 = FUN_140a54906(&local_4a0);
    local_528 = &local_511;
    FUN_140a54526(local_510,"STextBlock",".\\Runtime/UMG/Private/Components/ListViewBase.cpp",0x9f);
    FUN_140a52852(local_510,&local_4d0,uVar8);
    *param_2 = local_4d0;
    param_2[1] = (longlong)local_4c8;
    if (local_4c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4c8 + 1) = (int)local_4c8[1] + 1;
      UNLOCK();
      if (local_4c8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_4c8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_4c8)(local_4c8);
          LOCK();
          piVar1 = (int *)((longlong)local_4c8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_4c8 + 0x10))(local_4c8);
          }
        }
      }
    }
    if (local_508 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_508 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_508)(local_508);
        LOCK();
        piVar1 = (int *)((longlong)local_508 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_508 + 0x10))(local_508);
        }
      }
    }
    FUN_140a59ae6(&local_4a0);
    goto LAB_14773d362;
  }
  (**(code **)(*param_1 + 0x308))(param_1,&local_4a0);
  plVar4 = (longlong *)CONCAT44(uStack_494,local_498);
  if (plVar4 == (longlong *)0x0) {
    param_1[0x50] = (longlong)local_4a0;
    plVar10 = (longlong *)param_1[0x51];
    if (plVar10 != (longlong *)0x0) {
      param_1[0x51] = 0;
LAB_14773d3c6:
      LOCK();
      plVar4 = plVar10 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014773d3f3:
        if (iVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[0x50] = (longlong)local_4a0;
    plVar10 = (longlong *)param_1[0x51];
    if (plVar4 == plVar10) {
      LOCK();
      plVar10 = plVar4 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar10 = plVar4;
        goto joined_r0x00014773d3f3;
      }
    }
    else {
      param_1[0x51] = (longlong)plVar4;
      if (plVar10 != (longlong *)0x0) goto LAB_14773d3c6;
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_494,local_498);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  FUN_146af676a(param_1[0x50],*(undefined1 *)((longlong)param_1 + 0x194));
  FUN_146af6772(param_1[0x50],(int)param_1[0x33]);
  FUN_146af677c(param_1[0x50],*(undefined1 *)((longlong)param_1 + 0x19c));
  FUN_146af678c(param_1[0x50],*(undefined1 *)((longlong)param_1 + 0x19e));
  FUN_146af6794(param_1[0x50],*(undefined1 *)((longlong)param_1 + 0x19f));
  FUN_146af67a6(param_1[0x50],(char)param_1[0x34]);
  local_4a8 = *(char *)((longlong)param_1 + 0x1a2) == '\x01';
  if ((bool)local_4a8) {
    local_4b0 = (double)*(float *)((longlong)param_1 + 0x1a4);
  }
  FUN_146af66ea(param_1[0x50]);
  lVar7 = DAT_14c96b2f0;
  lVar3 = param_1[0x50];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar9 = 0;
  }
  else {
    bVar6 = FUN_144a61b4f();
    uVar9 = (ulonglong)(bVar6 ^ 1);
  }
  FUN_146af679c(lVar3,*(float *)(lVar7 + uVar9 * 4) * *(float *)(param_1 + 0x32));
  lVar3 = param_1[0x50];
  plVar4 = (longlong *)param_1[0x51];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = lVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = lVar3;
    param_2[1] = (longlong)plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar4 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
LAB_14773d362:
  if (local_4c0 != (longlong *)0x0) {
    (**(code **)(*local_4c0 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_548) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773d58a FUN_14773d58a body=329 status=ok
// SIG undefined FUN_14773d58a(void)

void FUN_14773d58a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  double local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x280) != 0) {
    uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(param_1 + 0x194));
    FUN_146af676a(*(longlong *)(param_1 + 0x280),uVar4);
    FUN_146af6772(*(undefined8 *)(param_1 + 0x280),*(undefined4 *)(param_1 + 0x198));
    uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),*(undefined1 *)(param_1 + 0x19c));
    FUN_146af677c(*(undefined8 *)(param_1 + 0x280),uVar4);
    uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),*(undefined1 *)(param_1 + 0x19e));
    FUN_146af678c(*(undefined8 *)(param_1 + 0x280),uVar4);
    uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),*(undefined1 *)(param_1 + 0x19f));
    FUN_146af6794(*(undefined8 *)(param_1 + 0x280),uVar4);
    uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),*(undefined1 *)(param_1 + 0x1a0));
    FUN_146af67a6(*(undefined8 *)(param_1 + 0x280),uVar4);
    FUN_146af6784(*(undefined8 *)(param_1 + 0x280),
                  CONCAT71((int7)((ulonglong)uVar4 >> 8),*(undefined1 *)(param_1 + 0x19d)) ^ 1);
    local_28 = *(char *)(param_1 + 0x1a2) == '\x01';
    if ((bool)local_28) {
      local_30 = (double)*(float *)(param_1 + 0x1a4);
    }
    FUN_146af66ea(*(undefined8 *)(param_1 + 0x280));
    lVar1 = DAT_14c96b2f0;
    uVar4 = *(undefined8 *)(param_1 + 0x280);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar3 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar3 = (ulonglong)(bVar2 ^ 1);
    }
    FUN_146af679c(uVar4,*(float *)(lVar1 + uVar3 * 4) * *(float *)(param_1 + 400));
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14773d6d4 FUN_14773d6d4 body=260 status=ok
// SIG undefined FUN_14773d6d4(void)

undefined8 * FUN_14773d6d4(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_448 [32];
  undefined1 *local_428;
  undefined1 local_411;
  undefined1 local_410 [8];
  longlong *local_408;
  undefined8 local_3f8;
  longlong *local_3f0;
  undefined1 local_3e8 [960];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_448;
  FUN_146a871f6(local_3e8);
  local_428 = &local_411;
  FUN_146aa8062(local_410,"SListView<TSharedPtr<FString>>",
                ".\\Runtime/UMG/Private/Components/ListViewBase.cpp",0xdb);
  FUN_146a8745a(local_410,&local_3f8,local_3e8);
  *param_2 = local_3f8;
  param_2[1] = local_3f0;
  if (local_3f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_3f0 + 1) = (int)local_3f0[1] + 1;
    UNLOCK();
    if (local_3f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_3f0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_3f0)(local_3f0);
        LOCK();
        piVar2 = (int *)((longlong)local_3f0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_3f0 + 0x10))(local_3f0);
        }
      }
    }
  }
  if (local_408 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_408 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_408)(local_408);
      LOCK();
      piVar2 = (int *)((longlong)local_408 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_408 + 0x10))(local_408);
      }
    }
  }
  FUN_146a874ce(local_3e8);
  if ((local_28 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773d7da FUN_14773d7da body=264 status=ok
// SIG undefined FUN_14773d7da(void)

void FUN_14773d7da(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x88))();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x88))();
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1476cf0bc(param_1 + 0x38,puVar4,0);
    local_40 = 0;
    FUN_14485c47a(&local_40,puVar4);
    local_38 = &local_40;
    FUN_1477708d4(param_1 + 0x2f,&local_38);
    FUN_147770a16(param_1 + 0x4d,puVar4);
    (**(code **)(*param_1 + 0x330))(param_1,puVar4);
    local_38 = puVar4;
    FUN_1447cd2ec(param_1 + 0x36,&local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773d8e4 FUN_14773d8e4 body=399 status=ok
// SIG undefined FUN_14773d8e4(void)

void FUN_14773d8e4(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  FUN_14485c47a(&local_88);
  FUN_147770aba(param_1 + 0x2f,&local_88);
  if (param_1[0x49] == 0) {
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar2 != 0) {
      uVar3 = FUN_144a88394(lVar2);
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,3,0x10);
      puVar1 = local_98;
      local_90 = 3;
      *local_98 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_98[2] = lVar4;
      *local_98 = &PTR_FUN_14a541b40;
      local_98[3] = 0;
      FUN_14485c47a(local_98 + 3,param_1);
      *(undefined4 *)(puVar1 + 5) = 0;
      puVar1[4] = &LAB_14773da74;
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_98);
      local_48 = 1;
      FUN_14016fdb0(uVar3,&local_a0,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      FUN_1449db362(&local_98);
      param_1[0x49] = local_a0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773da82 FUN_14773da82 body=275 status=ok
// SIG undefined FUN_14773da82(void)

void FUN_14773da82(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[0x49] = 0;
  lVar2 = param_1[0x30];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_1[0x2f];
    lVar5 = 0;
    do {
      local_58 = *(undefined8 *)(lVar1 + lVar5);
      cVar3 = FUN_144729dda(&local_58);
      if (cVar3 != '\0') {
        uVar4 = FUN_14479d2ce(&local_58);
        FUN_147770a16(param_1 + 0x4a,uVar4);
        uVar4 = FUN_14479d2ce(&local_58);
        (**(code **)(*param_1 + 0x328))(param_1,uVar4);
        local_50 = FUN_14479d2ce(&local_58);
        FUN_1447cd2ec(param_1 + 0x2d,&local_50);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar5);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)((longlong)param_1 + 0x184) != 0) {
    FUN_147770e52(param_1 + 0x2f);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14773dbb0 FUN_14773dbb0 body=101 status=ok
// SIG undefined FUN_14773dbb0(void)

void FUN_14773dbb0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_1[0x38] != 0) {
    lVar2 = (**(code **)(*param_1 + 0x2d0))();
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1);
      uVar1 = (**(code **)(*plVar3 + 0x328))(plVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00014773dc06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0x38] + 0x248))((longlong *)param_1[0x38],0,0,uVar1);
    return;
  }
  return;
}



// FUNCTION 14773dc1a FUN_14773dc1a body=177 status=ok
// SIG undefined FUN_14773dc1a(void)

void FUN_14773dc1a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(bool *)(param_1 + 0x1a9) = local_1c != 0;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_146a6cf08(*(longlong *)(param_1 + 0x1c0),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773dccc FUN_14773dccc body=107 status=ok
// SIG undefined FUN_14773dccc(void)

void FUN_14773dccc(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    local_28 = 0;
    uStack_20 = 0;
  }
  else {
    FUN_146a6cc74(*(longlong *)(param_1 + 0x1c0),&local_28);
  }
  *param_3 = (undefined4)local_28;
  param_3[1] = local_28._4_4_;
  param_3[2] = (undefined4)uStack_20;
  param_3[3] = uStack_20._4_4_;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773dd3c FUN_14773dd3c body=53 status=ok
// SIG undefined FUN_14773dd3c(void)

void FUN_14773dd3c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_146a6cf1e();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14773dd76 FUN_14773dd76 body=53 status=ok
// SIG undefined FUN_14773dd76(void)

void FUN_14773dd76(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_146a62c32();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14773ddb0 FUN_14773ddb0 body=158 status=ok
// SIG undefined FUN_14773ddb0(void)

void FUN_14773ddb0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_14773de50(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773de50 FUN_14773de50 body=119 status=ok
// SIG undefined FUN_14773de50(void)

void FUN_14773de50(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[0x38] != 0) {
    cVar1 = FUN_146a62c32();
    if (cVar1 == '\0') {
      lVar3 = (**(code **)(*param_1 + 0x2d0))(param_1);
      if (lVar3 == 0) {
        uVar2 = 0;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1);
        uVar2 = (**(code **)(*plVar4 + 0x328))(plVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x00014773debf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1[0x38] + 0x248))((longlong *)param_1[0x38],1,param_2,uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14773dec8 FUN_14773dec8 body=185 status=ok
// SIG undefined FUN_14773dec8(void)

void FUN_14773dec8(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [39];
  byte local_31;
  uint local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1a8) = local_31;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    local_30 = (uint)local_31;
    local_2c = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_146a6cdb8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773df86 FUN_14773df86 body=53 status=ok
// SIG undefined FUN_14773df86(void)

void FUN_14773df86(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_146a63024();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14773dfc0 FUN_14773dfc0 body=199 status=ok
// SIG undefined FUN_14773dfc0(void)

void FUN_14773dfc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  bool bVar3;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x1c0);
  if (plVar1 != (longlong *)0x0) {
    bVar3 = local_24 != 0;
    uVar2 = FUN_146a62c32(plVar1);
    (**(code **)(*plVar1 + 0x248))
              (plVar1,uVar2 ^ 1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3) & 0xffffffff,0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773e092 FUN_14773e092 body=90 status=ok
// SIG undefined FUN_14773e092(void)

void FUN_14773e092(longlong param_1,byte *param_2)

{
  byte bVar1;
  undefined1 auStack_48 [40];
  uint local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = *param_2;
  *(byte *)(param_1 + 0x1a8) = bVar1;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    local_20 = (uint)bVar1;
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    FUN_146a6cdb8();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773e140 FUN_14773e140 body=155 status=ok
// SIG undefined FUN_14773e140(void)

void FUN_14773e140(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') && (iVar4 = *(int *)(param_1 + 0x170), 0 < iVar4)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar5 * 8);
      if ((plVar3 != (longlong *)0x0) && (plVar3[6] != 0)) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,1);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1c8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1c8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014773e1d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14773e1dc FUN_14773e1dc body=1216 status=ok
// SIG undefined FUN_14773e1dc(void)

undefined8 * FUN_14773e1dc(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_2f8 [32];
  undefined1 *local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined1 local_2b9;
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined8 *local_2a0;
  undefined4 local_298;
  undefined8 *local_290;
  undefined4 local_288;
  uint local_280;
  undefined1 local_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  longlong *local_260;
  code *local_258;
  undefined1 *local_250;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  uint local_60;
  undefined1 local_5c;
  undefined1 local_58 [16];
  undefined1 local_48;
  undefined1 local_45;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_146a12e26(&local_258);
  local_280 = (uint)*(byte *)(param_1 + 0x1a8);
  local_27c = 1;
  local_278 = 0;
  uStack_270 = 0;
  local_5c = 1;
  local_60 = local_280;
  FUN_144a450dc(local_58,&local_278);
  FUN_1449db362(&local_278);
  local_48 = *(undefined1 *)(param_1 + 0x1a9);
  local_290 = (undefined8 *)0x0;
  local_288 = 0;
  FUN_1446efa72(&local_290,0,3,0x10);
  puVar5 = local_290;
  local_288 = 3;
  *local_290 = &PTR_LAB_149f0a860;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_290[2] = lVar6;
  *local_290 = &PTR_FUN_14a541bb0;
  local_290[3] = 0;
  FUN_14485c47a(local_290 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = FUN_14773e69e;
  FUN_144a450dc(local_80,&local_290);
  local_2a0 = (undefined8 *)0x0;
  local_298 = 0;
  FUN_1446efa72(&local_2a0,0,3,0x10);
  puVar5 = local_2a0;
  local_298 = 3;
  *local_2a0 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_2a0[2] = lVar6;
  *local_2a0 = &PTR_FUN_14a541c20;
  local_2a0[3] = 0;
  FUN_14485c47a(local_2a0 + 3,param_1);
  puVar5[4] = FUN_14773e922;
  *(undefined4 *)(puVar5 + 5) = 0;
  FUN_144a450dc(local_70,&local_2a0);
  local_45 = *(undefined1 *)(param_1 + 0x1aa);
  local_44 = *(undefined1 *)(param_1 + 0x1ab);
  local_2d8 = &local_2b9;
  FUN_146a40d60(local_2b8,"SMenuAnchor",".\\Runtime/UMG/Private/Components/MenuAnchor.cpp",0x25);
  FUN_146a13676(local_2b8,&local_268,&local_258);
  plVar4 = local_260;
  if (local_260 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1c0) = local_268;
    plVar8 = *(longlong **)(param_1 + 0x1c8);
    if (plVar8 == (longlong *)0x0) goto LAB_14773e420;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
LAB_14773e55c:
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14773e420;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_260 + 1) = (int)local_260[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x1c0) = local_268;
    plVar8 = *(longlong **)(param_1 + 0x1c8);
    if (local_260 != plVar8) {
      *(longlong **)(param_1 + 0x1c8) = local_260;
      if (plVar8 == (longlong *)0x0) goto LAB_14773e420;
      goto LAB_14773e55c;
    }
    LOCK();
    plVar8 = local_260 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_14773e420;
    (**(code **)*local_260)(local_260);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar8 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_14773e420:
  if (local_260 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_260 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_260)(local_260);
      LOCK();
      piVar1 = (int *)((longlong)local_260 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_260 + 0x10))(local_260);
      }
    }
  }
  if (local_2b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2b0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_2b0)(local_2b0);
      LOCK();
      piVar1 = (int *)((longlong)local_2b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2b0 + 0x10))(local_2b0);
      }
    }
  }
  FUN_1449db362(&local_2a0);
  FUN_1449db362(&local_290);
  FUN_146a136ea(&local_258);
  if (0 < *(int *)(param_1 + 0x170)) {
    uVar3 = *(undefined8 *)(param_1 + 0x1c0);
    lVar7 = **(longlong **)(param_1 + 0x168);
    if ((lVar7 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar7);
    }
    if (*(longlong *)(lVar7 + 0x30) == 0) {
      local_2d0 = DAT_14c98dec8;
      local_2c8 = DAT_14c98ded0;
      if (DAT_14c98ded0 != 0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
        UNLOCK();
      }
    }
    else {
      if (*(int *)(param_1 + 0x170) < 1) {
        lVar7 = 0;
      }
      else {
        lVar7 = **(longlong **)(param_1 + 0x168);
        if ((lVar7 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar7);
        }
      }
      local_258 = FUN_143336ee2;
      local_250 = local_2b8;
      FUN_1407616b4(*(undefined8 *)(lVar7 + 0x30),&local_2d0);
    }
    FUN_146a6c670(uVar3,&local_2d0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x1c0);
  plVar4 = *(longlong **)(param_1 + 0x1c8);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773e69e FUN_14773e69e body=643 status=ok
// SIG undefined FUN_14773e69e(void)

longlong * FUN_14773e69e(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = FUN_14113f0c0(param_1 + 0x33);
  if (cVar3 == '\0') {
    cVar3 = FUN_14113f0c0(param_1 + 0x31);
    if (cVar3 != '\0') {
      local_38 = (code *)0x0;
      plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x31);
      lVar7 = param_1[0x32];
      goto LAB_14773e6f1;
    }
    lVar7 = param_1[0x30];
    if ((((lVar7 != 0) && (lVar6 = FUN_1405e2bf2(), lVar6 != 0)) &&
        (*(int *)(lVar6 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
         lVar6 + 0x30 && (lVar7 = param_1[0x30], lVar7 != 0)))) {
      lVar6 = FUN_1405e2bf2();
      if ((lVar6 == 0) ||
         ((*(int *)(lVar7 + 0x38) < *(int *)(lVar6 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
           lVar6 + 0x30)))) {
        lVar7 = 0;
      }
      else {
        lVar7 = param_1[0x30];
      }
      if (((*(byte *)(lVar7 + 0xd4) & 1) != 0) ||
         (lVar7 = (**(code **)(*param_1 + 0x180))(param_1), lVar7 == 0)) goto LAB_14773e7f5;
      local_58 = param_1[0x30];
      if ((local_58 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      plVar4 = (longlong *)0x0;
      pcVar8 = (code *)FUN_1412b606d(lVar7,&local_58,0);
      if (pcVar8 != (code *)0x0) goto LAB_14773e735;
      goto LAB_14773e7f7;
    }
LAB_14773e7f5:
    plVar4 = (longlong *)0x0;
LAB_14773e7f7:
    *param_2 = DAT_14c98dec8;
    lVar7 = DAT_14c98ded0;
    param_2[1] = DAT_14c98ded0;
    if (lVar7 != 0) {
      LOCK();
      piVar1 = (int *)(lVar7 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if (plVar4 == (longlong *)0x0) goto LAB_14773e837;
  }
  else {
    local_38 = (code *)0x0;
    plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x33);
    lVar7 = param_1[0x34];
LAB_14773e6f1:
    uVar5 = FUN_14477b072(plVar4,lVar7);
    (**(code **)(*plVar4 + 0x248))(plVar4,uVar5,&local_38);
    pcVar8 = local_38;
    if (local_38 == (code *)0x0) goto LAB_14773e7f5;
LAB_14773e735:
    local_30 = &local_39;
    local_38 = FUN_143336ee2;
    FUN_1407616b4(pcVar8,&local_50);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_48 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
    }
    plVar4 = local_48;
    if (local_50 == 0) goto LAB_14773e7f7;
    *param_2 = local_50;
    param_2[1] = (longlong)local_48;
    if (local_48 == (longlong *)0x0) goto LAB_14773e837;
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
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
LAB_14773e837:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14773e922 FUN_14773e922 body=68 status=ok
// SIG undefined FUN_14773e922(void)

void FUN_14773e922(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1 + 0x1b0,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773e968 FUN_14773e968 body=151 status=ok
// SIG undefined FUN_14773e968(void)

void FUN_14773e968(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined1 local_21;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  if (lVar1 != 0) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      local_38 = DAT_14c98dec8;
      local_30 = DAT_14c98ded0;
      if (DAT_14c98ded0 != 0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
        UNLOCK();
      }
    }
    else {
      local_18 = &local_21;
      local_20 = FUN_143336ee2;
      FUN_1407616b4(*(longlong *)(param_2 + 0x30),&local_38);
    }
    FUN_146a6c670(lVar1,&local_38);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773ea00 FUN_14773ea00 body=101 status=ok
// SIG undefined FUN_14773ea00(void)

void FUN_14773ea00(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  if (lVar1 != 0) {
    local_18 = DAT_14c98dec8;
    local_10 = DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
    FUN_146a6c670(lVar1,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773eafc FUN_14773eafc body=159 status=ok
// SIG undefined FUN_14773eafc(void)

void FUN_14773eafc(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a5dc74(&local_40);
  plVar2 = local_40;
  plVar1 = (longlong *)*param_2;
  if (local_40 != plVar1) {
    local_40 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_38 = (undefined4)param_2[1];
  local_30 = param_3;
  FUN_1447cd2ec(param_1,&local_40);
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773ebbc FUN_14773ebbc body=159 status=ok
// SIG undefined FUN_14773ebbc(void)

void FUN_14773ebbc(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x4c8) == 0) {
    local_28 = *(longlong **)(param_1 + 0x198);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 0x1a0);
  }
  else {
    FUN_146ae7fd8(*(longlong *)(param_1 + 0x4c8),&local_28);
  }
  FUN_140008f88(param_3,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773ec5c FUN_14773ec5c body=159 status=ok
// SIG undefined FUN_14773ec5c(void)

void FUN_14773ec5c(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x4c8) == 0) {
    local_28 = *(longlong **)(param_1 + 0x188);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 400);
  }
  else {
    FUN_146ae7fae(*(longlong *)(param_1 + 0x4c8),&local_28);
  }
  FUN_140008f88(param_3,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773ecfc FUN_14773ecfc body=338 status=ok
// SIG undefined FUN_14773ecfc(void)

void FUN_14773ecfc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [96];
  undefined8 local_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_79 = 0;
  uStack_78 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3f800000;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  local_40 = 0x41c00000;
  local_38 = 0;
  local_34 = 2;
  local_32 = 0;
  local_30 = 0x3f800000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a87366(local_e8,&local_88);
  FUN_14773ee50(param_1,local_e8);
  plVar3 = plStack_50;
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
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773ee50 FUN_14773ee50 body=104 status=ok
// SIG undefined FUN_14773ee50(void)

void FUN_14773ee50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1412cc59c(param_1 + 0x1c8);
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FUN_146ae7ff6(*(longlong *)(param_1 + 0x4c8),param_1 + 0x1c0);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x00014773eeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14773eeb8 FUN_14773eeb8 body=156 status=ok
// SIG undefined FUN_14773eeb8(void)

void FUN_14773eeb8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14773ef56(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773ef56 FUN_14773ef56 body=84 status=ok
// SIG undefined FUN_14773ef56(void)

void FUN_14773ef56(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x1d0) = param_2;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FUN_146ae7ff6(*(longlong *)(param_1 + 0x4c8),param_1 + 0x1c0);
    return;
  }
  return;
}



// FUNCTION 14773efaa FUN_14773efaa body=156 status=ok
// SIG undefined FUN_14773efaa(void)

void FUN_14773efaa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14773f048(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773f048 FUN_14773f048 body=84 status=ok
// SIG undefined FUN_14773f048(void)

void FUN_14773f048(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x1e0) = param_2;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FUN_146ae7ff6(*(longlong *)(param_1 + 0x4c8),param_1 + 0x1c0);
    return;
  }
  return;
}



// FUNCTION 14773f09c FUN_14773f09c body=201 status=ok
// SIG undefined FUN_14773f09c(void)

void FUN_14773f09c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_30 = local_20;
  FUN_14773f166(param_1);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773f166 FUN_14773f166 body=372 status=ok
// SIG undefined FUN_14773f166(void)

void FUN_14773f166(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x198);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x198) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x1a0) = (int)param_2[1];
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    cVar3 = FUN_14113f0c0(param_1 + 0x1a8);
    if (cVar3 == '\0') {
      local_58 = *(longlong **)(param_1 + 0x198);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_50 = *(undefined4 *)(param_1 + 0x1a0);
      local_48 = 1;
      local_40 = 0;
      uStack_38 = 0;
    }
    else {
      local_60 = *(undefined8 *)(param_1 + 0x1b0);
      uVar4 = FUN_14479d2ce(param_1 + 0x1a8);
      FUN_144a5dc74(&local_58);
      local_40 = 0;
      uStack_38 = 0;
      local_48 = 1;
      FUN_1446efa72(&local_40,0,3,0x10);
      uStack_38 = CONCAT44(uStack_38._4_4_,3);
      FUN_147766644(local_40,uVar4,&local_60);
    }
    FUN_146ae7fcc(*(undefined8 *)(param_1 + 0x4c8),&local_58);
    FUN_1449db362(&local_40);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773f2e0 FUN_14773f2e0 body=158 status=ok
// SIG undefined FUN_14773f2e0(void)

void FUN_14773f2e0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_14773f380(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773f380 FUN_14773f380 body=102 status=ok
// SIG undefined FUN_14773f380(void)

void FUN_14773f380(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x4a0) = param_2;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146ae81b2(*(longlong *)(param_1 + 0x4c8),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773f3e8 FUN_14773f3e8 body=201 status=ok
// SIG undefined FUN_14773f3e8(void)

void FUN_14773f3e8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_30 = local_20;
  FUN_14773f4b2(param_1);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773f4b2 FUN_14773f4b2 body=229 status=ok
// SIG undefined FUN_14773f4b2(void)

void FUN_14773f4b2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_1477408d6();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x4c8);
    if (lVar1 != 0) {
      local_58 = *(longlong **)(param_1 + 0x188);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_50 = *(undefined4 *)(param_1 + 400);
      local_48 = 1;
      local_40 = 0;
      uStack_38 = 0;
      FUN_146ae7fa2(lVar1,&local_58);
      FUN_1449db362(&local_40);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    local_60 = DAT_14cab7f48;
    local_68 = DAT_14cab7f40;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773f598 FUN_14773f598 body=229 status=ok
// SIG undefined FUN_14773f598(void)

void FUN_14773f598(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_328 [32];
  undefined1 local_308 [744];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_140a581a0(local_308);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_308);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_308);
  }
  puVar1 = local_308;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140a5e6b8(param_1 + 0x1c0,puVar1);
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FUN_146ae7ff6(*(longlong *)(param_1 + 0x4c8),param_1 + 0x1c0);
  }
  FUN_140e9e952(local_308);
  if ((local_20 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773f67e FUN_14773f67e body=143 status=ok
// SIG undefined FUN_14773f67e(void)

void FUN_14773f67e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x4c8) == 0) {
    local_28 = *(longlong **)(param_1 + 0x188);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 400);
  }
  else {
    FUN_146ae7fae(*(longlong *)(param_1 + 0x4c8),&local_28);
  }
  FUN_140008f88(param_2,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773f70e FUN_14773f70e body=94 status=ok
// SIG undefined FUN_14773f70e(void)

void FUN_14773f70e(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)*param_2;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = (undefined4)param_2[1];
  FUN_14773f4b2(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773f76e FUN_14773f76e body=143 status=ok
// SIG undefined FUN_14773f76e(void)

void FUN_14773f76e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x4c8) == 0) {
    local_28 = *(longlong **)(param_1 + 0x198);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 0x1a0);
  }
  else {
    FUN_146ae7fd8(*(longlong *)(param_1 + 0x4c8),&local_28);
  }
  FUN_140008f88(param_2,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773f7fe FUN_14773f7fe body=94 status=ok
// SIG undefined FUN_14773f7fe(void)

void FUN_14773f7fe(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)*param_2;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = (undefined4)param_2[1];
  FUN_14773f166(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773f882 FUN_14773f882 body=102 status=ok
// SIG undefined FUN_14773f882(void)

void FUN_14773f882(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x4a1) = param_2;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146ae81cc(*(longlong *)(param_1 + 0x4c8),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773f8fc FUN_14773f8fc body=102 status=ok
// SIG undefined FUN_14773f8fc(void)

void FUN_14773f8fc(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x4a3) = param_2;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146ae8200(*(longlong *)(param_1 + 0x4c8),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773f976 FUN_14773f976 body=102 status=ok
// SIG undefined FUN_14773f976(void)

void FUN_14773f976(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x4a4) = param_2;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146ae821a(*(longlong *)(param_1 + 0x4c8),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773fa10 FUN_14773fa10 body=80 status=ok
// SIG undefined FUN_14773fa10(void)

void FUN_14773fa10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x4d0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x4d0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014773fa5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14773fa60 FUN_14773fa60 body=1372 status=ok
// SIG undefined FUN_14773fa60(void)

undefined8 * FUN_14773fa60(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_6a8 [32];
  undefined1 *local_688;
  undefined1 local_679;
  undefined1 local_678 [8];
  longlong *local_670;
  undefined8 *local_660;
  undefined4 local_658;
  undefined8 *local_650;
  undefined4 local_648;
  undefined2 local_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined2 local_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined2 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined2 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined2 local_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined2 local_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined2 local_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  longlong *local_590;
  undefined1 local_588 [632];
  longlong local_310;
  undefined2 local_220;
  undefined1 local_218 [64];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [40];
  undefined2 local_1a0;
  undefined1 local_198 [40];
  undefined2 local_170;
  undefined1 local_168 [16];
  undefined2 local_158;
  undefined1 local_150 [16];
  undefined2 local_140;
  undefined1 local_138 [16];
  undefined2 local_128;
  undefined1 local_120 [145];
  undefined1 local_8f;
  undefined2 local_70;
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_6a8;
  FUN_146a6f758(local_588);
  local_310 = param_1 + 0x1c0;
  local_5b0 = CONCAT11(1,*(undefined1 *)(param_1 + 0x4a5));
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_128 = local_5b0;
  FUN_144a450dc(local_120,&local_5a8);
  FUN_1449db362(&local_5a8);
  local_5c8 = CONCAT11(1,*(undefined1 *)(param_1 + 0x4a0));
  local_5c0 = 0;
  uStack_5b8 = 0;
  local_220 = local_5c8;
  FUN_144a450dc(local_218,&local_5c0);
  FUN_1449db362(&local_5c0);
  local_5e0 = CONCAT11(1,*(undefined1 *)(param_1 + 0x4a1));
  local_5d8 = 0;
  uStack_5d0 = 0;
  local_1a0 = local_5e0;
  FUN_144a450dc(local_198,&local_5d8);
  FUN_1449db362(&local_5d8);
  local_5f8 = CONCAT11(1,*(undefined1 *)(param_1 + 0x4a2));
  local_5f0 = 0;
  uStack_5e8 = 0;
  local_170 = local_5f8;
  FUN_144a450dc(local_168,&local_5f0);
  FUN_1449db362(&local_5f0);
  local_610 = CONCAT11(1,*(undefined1 *)(param_1 + 0x4a3));
  local_608 = 0;
  uStack_600 = 0;
  local_158 = local_610;
  FUN_144a450dc(local_150,&local_608);
  FUN_1449db362(&local_608);
  local_628 = CONCAT11(1,*(undefined1 *)(param_1 + 0x4a4));
  local_620 = 0;
  uStack_618 = 0;
  local_140 = local_628;
  FUN_144a450dc(local_138,&local_620);
  FUN_1449db362(&local_620);
  local_8f = *(undefined1 *)(param_1 + 0x4a6);
  local_640 = CONCAT11(1,*(undefined1 *)(param_1 + 0x4a7));
  local_638 = 0;
  uStack_630 = 0;
  local_70 = local_640;
  FUN_144a450dc(local_68,&local_638);
  FUN_1449db362(&local_638);
  local_650 = (undefined8 *)0x0;
  local_648 = 0;
  FUN_1446efa72(&local_650,0,3,0x10);
  puVar5 = local_650;
  local_648 = 3;
  *local_650 = &PTR_LAB_149f0eae0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_650[2] = lVar7;
  *local_650 = &PTR_FUN_14a541c90;
  local_650[3] = 0;
  FUN_14485c47a(local_650 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = FUN_14773ffbe;
  FUN_144a450dc(local_1d8,&local_650);
  local_660 = (undefined8 *)0x0;
  local_658 = 0;
  FUN_1446efa72(&local_660,0,3,0x10);
  puVar5 = local_660;
  local_658 = 3;
  *local_660 = &PTR_LAB_149f0eb50;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_660[2] = lVar7;
  *local_660 = &PTR_FUN_14a541d00;
  local_660[3] = 0;
  FUN_14485c47a(local_660 + 3,param_1);
  puVar5[4] = FUN_147740046;
  *(undefined4 *)(puVar5 + 5) = 0;
  FUN_144a450dc(local_1c8,&local_660);
  local_688 = &local_679;
  FUN_146a80dce(local_678,"SMultiLineEditableText",
                ".\\Runtime/UMG/Private/Components/MultiLineEditableText.cpp",0x3e);
  FUN_146a7002a(local_678,&local_598,local_588);
  plVar4 = local_590;
  if (local_590 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x4c8) = local_598;
    plVar8 = *(longlong **)(param_1 + 0x4d0);
    if (plVar8 == (longlong *)0x0) goto LAB_14773fe19;
    *(undefined8 *)(param_1 + 0x4d0) = 0;
LAB_14773ff58:
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14773fe19;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_590 + 1) = (int)local_590[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x4c8) = local_598;
    plVar8 = *(longlong **)(param_1 + 0x4d0);
    if (local_590 != plVar8) {
      *(longlong **)(param_1 + 0x4d0) = local_590;
      if (plVar8 == (longlong *)0x0) goto LAB_14773fe19;
      goto LAB_14773ff58;
    }
    LOCK();
    plVar8 = local_590 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_14773fe19;
    (**(code **)*local_590)(local_590);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar8 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_14773fe19:
  if (local_590 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_590 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_590)(local_590);
      LOCK();
      piVar1 = (int *)((longlong)local_590 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_590 + 0x10))(local_590);
      }
    }
  }
  if (local_670 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_670 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_670)(local_670);
      LOCK();
      piVar1 = (int *)((longlong)local_670 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_670 + 0x10))(local_670);
      }
    }
  }
  FUN_1449db362(&local_660);
  FUN_1449db362(&local_650);
  FUN_146a701ca(local_588);
  uVar3 = *(undefined8 *)(param_1 + 0x4c8);
  plVar4 = *(longlong **)(param_1 + 0x4d0);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_6a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773ffbe FUN_14773ffbe body=118 status=ok
// SIG undefined FUN_14773ffbe(void)

void FUN_14773ffbe(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_1477408d6();
  if (cVar1 != '\0') {
    local_20 = DAT_14cab7f48;
    local_28 = DAT_14cab7f40;
    FUN_140e2f5f4(param_1 + 0x28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147740046 FUN_147740046 body=123 status=ok
// SIG undefined FUN_147740046(void)

void FUN_147740046(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1477408d6();
  if (cVar1 != '\0') {
    local_28 = DAT_14cab7f48;
    local_30 = DAT_14cab7f40;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14773eafc(param_1 + 0x4b8,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477400c2 FUN_1477400c2 body=770 status=ok
// SIG undefined FUN_1477400c2(void)

void FUN_1477400c2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    cVar1 = FUN_14113f0c0(param_1 + 0x1a8);
    if (cVar1 == '\0') {
      local_68 = *(longlong **)(param_1 + 0x198);
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 8))();
      }
      local_60 = *(undefined4 *)(param_1 + 0x1a0);
      local_58 = 1;
      local_50 = 0;
      uStack_48 = 0;
    }
    else {
      local_90 = *(longlong **)(param_1 + 0x1b0);
      uVar2 = FUN_14479d2ce(param_1 + 0x1a8);
      FUN_144a5dc74(&local_68);
      local_50 = 0;
      uStack_48 = 0;
      local_58 = 1;
      FUN_1446efa72(&local_50,0,3,0x10);
      uStack_48 = CONCAT44(uStack_48._4_4_,3);
      FUN_147766644(local_50,uVar2,&local_90);
    }
    FUN_146ae7ff6(*(undefined8 *)(param_1 + 0x4c8),param_1 + 0x1c0);
    uVar2 = *(undefined8 *)(param_1 + 0x4c8);
    local_90 = *(longlong **)(param_1 + 0x188);
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 8))();
    }
    local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 400));
    uStack_80 = CONCAT71(uStack_80._1_7_,1);
    local_78 = 0;
    uStack_70 = 0;
    FUN_146ae7fa2(uVar2,&local_90);
    FUN_1449db362(&local_78);
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 0x10))();
    }
    FUN_146ae7fcc(*(undefined8 *)(param_1 + 0x4c8),&local_68);
    local_90._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x4a5));
    local_88 = 0;
    uStack_80 = 0;
    FUN_146ae8168(*(undefined8 *)(param_1 + 0x4c8),&local_90);
    FUN_1449db362(&local_88);
    local_90._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x4a0));
    local_88 = 0;
    uStack_80 = 0;
    FUN_146ae81b2(*(undefined8 *)(param_1 + 0x4c8),&local_90);
    FUN_1449db362(&local_88);
    local_a8 = *(undefined1 *)(param_1 + 0x4a7);
    local_a7 = 1;
    local_a0 = 0;
    uStack_98 = 0;
    FUN_146ae8182(*(undefined8 *)(param_1 + 0x4c8));
    local_90._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x4a1));
    local_88 = 0;
    uStack_80 = 0;
    FUN_146ae81cc(*(undefined8 *)(param_1 + 0x4c8),&local_90);
    FUN_1449db362(&local_88);
    local_90._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x4a2));
    local_88 = 0;
    uStack_80 = 0;
    FUN_146ae81e6(*(undefined8 *)(param_1 + 0x4c8),&local_90);
    FUN_1449db362(&local_88);
    local_90._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x4a3));
    local_88 = 0;
    uStack_80 = 0;
    FUN_146ae8200(*(undefined8 *)(param_1 + 0x4c8),&local_90);
    FUN_1449db362(&local_88);
    local_90._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x4a4));
    local_88 = 0;
    uStack_80 = 0;
    FUN_146ae821a(*(undefined8 *)(param_1 + 0x4c8),&local_90);
    FUN_1449db362(&local_88);
    FUN_1477403c6(param_1,*(undefined8 *)(param_1 + 0x4c8));
    FUN_1449db362(&local_50);
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477403c6 FUN_1477403c6 body=435 status=ok
// SIG undefined FUN_1477403c6(void)

void FUN_1477403c6(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147740594(param_1 + 0x168);
  local_68 = (float)(uint)*(byte *)(param_1 + 0x16b);
  uStack_64._0_1_ = 1;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146ae815c(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  local_68 = (float)(CONCAT31(local_68._1_3_,*(undefined1 *)(param_1 + 0x16d)) & 0xffffff01);
  local_68._0_2_ = CONCAT11(1,(undefined1)local_68);
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146ae8120(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  local_68 = *(float *)(param_1 + 0x170);
  bVar1 = local_68 != 0.0;
  if ((!bVar1) && (!NAN(local_68))) {
    local_68 = 0.0;
  }
  uStack_64 = CONCAT31(uStack_64._1_3_,bVar1);
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146ae8114(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  local_68._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x16c));
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146ae812c(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  local_68 = *(float *)(param_1 + 0x174);
  uStack_64 = *(undefined4 *)(param_1 + 0x178);
  uStack_60 = *(undefined8 *)(param_1 + 0x17c);
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  local_50 = 0;
  uStack_48 = 0;
  FUN_146ae8150(param_2,&local_68);
  FUN_1449db362(&local_50);
  local_68 = *(float *)(param_1 + 0x184);
  uStack_64 = CONCAT31(uStack_64._1_3_,1);
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146ae8138(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  local_68._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x16e));
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146ae8144(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147740594 FUN_147740594 body=124 status=ok
// SIG undefined FUN_147740594(void)

void FUN_147740594(byte *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  byte local_1c;
  undefined1 local_1b;
  byte local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = (*param_1 & 1) != 0;
  if ((bool)local_19) {
    local_1a = param_1[1];
  }
  FUN_146ae8094(param_2);
  local_1b = (*param_1 & 2) != 0;
  if ((bool)local_1b) {
    local_1c = param_1[2];
  }
  FUN_146ae80d4(param_2);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147740612 FUN_147740612 body=96 status=ok
// SIG undefined FUN_147740612(void)

void FUN_147740612(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146ae815c(*(longlong *)(param_1 + 0x4c8),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147740676 FUN_147740676 body=96 status=ok
// SIG undefined FUN_147740676(void)

void FUN_147740676(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146ae812c(*(longlong *)(param_1 + 0x4c8),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477406da FUN_1477406da body=96 status=ok
// SIG undefined FUN_1477406da(void)

void FUN_1477406da(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146ae8120(*(longlong *)(param_1 + 0x4c8),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774073e FUN_14774073e body=98 status=ok
// SIG undefined FUN_14774073e(void)

void FUN_14774073e(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146ae8114(*(longlong *)(param_1 + 0x4c8),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477407a4 FUN_1477407a4 body=98 status=ok
// SIG undefined FUN_1477407a4(void)

void FUN_1477407a4(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146ae8138(*(longlong *)(param_1 + 0x4c8),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774080a FUN_14774080a body=96 status=ok
// SIG undefined FUN_14774080a(void)

void FUN_14774080a(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146ae8144(*(longlong *)(param_1 + 0x4c8),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774086e FUN_14774086e body=100 status=ok
// SIG undefined FUN_14774086e(void)

void FUN_14774086e(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_146ae8150(*(longlong *)(param_1 + 0x4c8),&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477408d6 FUN_1477408d6 body=106 status=ok
// SIG undefined FUN_1477408d6(void)

uint FUN_1477408d6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  
  plVar1 = (longlong *)(param_1 + 0x188);
  uVar4 = FUN_14010cee6(plVar1,param_2,3);
  if ((char)uVar4 == '\0') {
    plVar2 = (longlong *)*param_2;
    plVar3 = (longlong *)*plVar1;
    if (plVar3 != plVar2) {
      *plVar1 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(int *)(param_1 + 400) = (int)param_2[1];
  }
  return uVar4 ^ 1;
}



// FUNCTION 1477409d6 FUN_1477409d6 body=159 status=ok
// SIG undefined FUN_1477409d6(void)

void FUN_1477409d6(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a5dc74(&local_40);
  plVar2 = local_40;
  plVar1 = (longlong *)*param_2;
  if (local_40 != plVar1) {
    local_40 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_38 = (undefined4)param_2[1];
  local_30 = param_3;
  FUN_1447cd2ec(param_1,&local_40);
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147740a76 FUN_147740a76 body=166 status=ok
// SIG undefined FUN_147740a76(void)

void FUN_147740a76(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xe68) == 0) {
    local_28 = *(longlong **)(param_1 + 0x198);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 0x1a0);
  }
  else {
    FUN_146ae7fd8(*(undefined8 *)(*(longlong *)(param_1 + 0xe68) + 0x2a0),&local_28);
  }
  FUN_140008f88(param_3,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147740b1e FUN_147740b1e body=166 status=ok
// SIG undefined FUN_147740b1e(void)

void FUN_147740b1e(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xe68) == 0) {
    local_28 = *(longlong **)(param_1 + 0x188);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 400);
  }
  else {
    FUN_146ae7fae(*(undefined8 *)(*(longlong *)(param_1 + 0xe68) + 0x2a0),&local_28);
  }
  FUN_140008f88(param_3,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147740bc6 FUN_147740bc6 body=241 status=ok
// SIG undefined FUN_147740bc6(void)

void FUN_147740bc6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))(local_28);
  }
  local_30 = local_20;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    FUN_146a70c6c(*(longlong *)(param_1 + 0xe68),&local_38);
    plVar1 = local_38;
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147740cb8 FUN_147740cb8 body=155 status=ok
// SIG undefined FUN_147740cb8(void)

void FUN_147740cb8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_147740d54(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147740d54 FUN_147740d54 body=114 status=ok
// SIG undefined FUN_147740d54(void)

void FUN_147740d54(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0xe68);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 0;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a5c8a2(lVar1 + 0x250,lVar1,&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147740dc8 FUN_147740dc8 body=201 status=ok
// SIG undefined FUN_147740dc8(void)

void FUN_147740dc8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_30 = local_20;
  FUN_147740e92(param_1);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147740e92 FUN_147740e92 body=372 status=ok
// SIG undefined FUN_147740e92(void)

void FUN_147740e92(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x198);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x198) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x1a0) = (int)param_2[1];
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    cVar3 = FUN_14113f0c0(param_1 + 0x1a8);
    if (cVar3 == '\0') {
      local_58 = *(longlong **)(param_1 + 0x198);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_50 = *(undefined4 *)(param_1 + 0x1a0);
      local_48 = 1;
      local_40 = 0;
      uStack_38 = 0;
    }
    else {
      local_60 = *(undefined8 *)(param_1 + 0x1b0);
      uVar4 = FUN_14479d2ce(param_1 + 0x1a8);
      FUN_144a5dc74(&local_58);
      local_40 = 0;
      uStack_38 = 0;
      local_48 = 1;
      FUN_1446efa72(&local_40,0,3,0x10);
      uStack_38 = CONCAT44(uStack_38._4_4_,3);
      FUN_147766644(local_40,uVar4,&local_60);
    }
    FUN_146a70b66(*(undefined8 *)(param_1 + 0xe68),&local_58);
    FUN_1449db362(&local_40);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774100c FUN_14774100c body=158 status=ok
// SIG undefined FUN_14774100c(void)

void FUN_14774100c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1477410ac(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477410ac FUN_1477410ac body=102 status=ok
// SIG undefined FUN_1477410ac(void)

void FUN_1477410ac(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0xe40) = param_2;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a70c60(*(longlong *)(param_1 + 0xe68),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147741114 FUN_147741114 body=201 status=ok
// SIG undefined FUN_147741114(void)

void FUN_147741114(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_30 = local_20;
  FUN_1477411de(param_1);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477411de FUN_1477411de body=229 status=ok
// SIG undefined FUN_1477411de(void)

void FUN_1477411de(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_14774234a();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0xe68);
    if (lVar1 != 0) {
      local_58 = *(longlong **)(param_1 + 0x188);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_50 = *(undefined4 *)(param_1 + 400);
      local_48 = 1;
      local_40 = 0;
      uStack_38 = 0;
      FUN_146a70b5a(lVar1,&local_58);
      FUN_1449db362(&local_40);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    local_60 = DAT_14cab7fe0;
    local_68 = DAT_14cab7fd8;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477412c4 FUN_1477412c4 body=222 status=ok
// SIG undefined FUN_1477412c4(void)

void FUN_1477412c4(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_328 [32];
  undefined1 local_308 [744];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_140a581a0(local_308);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_308);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_308);
  }
  puVar1 = local_308;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140a5e6b8(param_1 + 0x4a0,puVar1);
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    FUN_146a70b48(*(longlong *)(param_1 + 0xe68),puVar1);
  }
  FUN_140e9e952(local_308);
  if ((local_20 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477413a4 FUN_1477413a4 body=150 status=ok
// SIG undefined FUN_1477413a4(void)

void FUN_1477413a4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xe68) == 0) {
    local_28 = *(longlong **)(param_1 + 0x188);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 400);
  }
  else {
    FUN_146ae7fae(*(undefined8 *)(*(longlong *)(param_1 + 0xe68) + 0x2a0),&local_28);
  }
  FUN_140008f88(param_2,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774143c FUN_14774143c body=94 status=ok
// SIG undefined FUN_14774143c(void)

void FUN_14774143c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)*param_2;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = (undefined4)param_2[1];
  FUN_1477411de(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774149c FUN_14774149c body=150 status=ok
// SIG undefined FUN_14774149c(void)

void FUN_14774149c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xe68) == 0) {
    local_28 = *(longlong **)(param_1 + 0x198);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 0x1a0);
  }
  else {
    FUN_146ae7fd8(*(undefined8 *)(*(longlong *)(param_1 + 0xe68) + 0x2a0),&local_28);
  }
  FUN_140008f88(param_2,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147741534 FUN_147741534 body=94 status=ok
// SIG undefined FUN_147741534(void)

void FUN_147741534(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)*param_2;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = (undefined4)param_2[1];
  FUN_147740e92(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477415b8 FUN_1477415b8 body=99 status=ok
// SIG undefined FUN_1477415b8(void)

void FUN_1477415b8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc08);
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774161c FUN_14774161c body=48 status=ok
// SIG undefined FUN_14774161c(void)

void FUN_14774161c(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  switchD_143c3d4dc::caseD_21(param_1,param_2);
  return;
}



// FUNCTION 14774164c FUN_14774164c body=80 status=ok
// SIG undefined FUN_14774164c(void)

void FUN_14774164c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0xe68) = 0;
  plVar3 = *(longlong **)(param_1 + 0xe70);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe70) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147741698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14774169c FUN_14774169c body=1124 status=ok
// SIG undefined FUN_14774169c(void)

undefined8 * FUN_14774169c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_7a8 [32];
  undefined1 *local_788;
  undefined1 local_779;
  undefined1 local_778 [8];
  longlong *local_770;
  undefined8 *local_760;
  undefined4 local_758;
  undefined8 *local_750;
  undefined4 local_748;
  undefined2 local_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined2 local_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined2 local_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  longlong *local_6f0;
  undefined1 local_6e8 [424];
  longlong local_540;
  undefined2 local_388;
  undefined1 local_380 [160];
  undefined2 local_2e0;
  undefined1 local_2d8 [168];
  undefined1 local_230 [16];
  undefined1 local_220 [401];
  undefined1 local_8f;
  undefined2 local_70;
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_7a8;
  FUN_146a70442(local_6e8);
  local_540 = param_1 + 0x1c0;
  local_710 = CONCAT11(1,*(undefined1 *)(param_1 + 0xe41));
  local_708 = 0;
  uStack_700 = 0;
  local_2e0 = local_710;
  FUN_144a450dc(local_2d8,&local_708);
  FUN_1449db362(&local_708);
  local_728 = CONCAT11(1,*(undefined1 *)(param_1 + 0xe40));
  local_720 = 0;
  uStack_718 = 0;
  local_388 = local_728;
  FUN_144a450dc(local_380,&local_720);
  FUN_1449db362(&local_720);
  local_8f = *(undefined1 *)(param_1 + 0xe42);
  local_740 = CONCAT11(1,*(undefined1 *)(param_1 + 0xe43));
  local_738 = 0;
  uStack_730 = 0;
  local_70 = local_740;
  FUN_144a450dc(local_68,&local_738);
  FUN_1449db362(&local_738);
  local_750 = (undefined8 *)0x0;
  local_748 = 0;
  FUN_1446efa72(&local_750,0,3,0x10);
  puVar5 = local_750;
  local_748 = 3;
  *local_750 = &PTR_LAB_149f0eae0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_750[2] = lVar7;
  *local_750 = &PTR_FUN_14a541d70;
  local_750[3] = 0;
  FUN_14485c47a(local_750 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = FUN_147741b02;
  FUN_144a450dc(local_230,&local_750);
  local_760 = (undefined8 *)0x0;
  local_758 = 0;
  FUN_1446efa72(&local_760,0,3,0x10);
  puVar5 = local_760;
  local_758 = 3;
  *local_760 = &PTR_LAB_149f0eb50;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_760[2] = lVar7;
  *local_760 = &PTR_FUN_14a541de0;
  local_760[3] = 0;
  FUN_14485c47a(local_760 + 3,param_1);
  puVar5[4] = FUN_147741b8a;
  *(undefined4 *)(puVar5 + 5) = 0;
  FUN_144a450dc(local_220,&local_760);
  local_788 = &local_779;
  FUN_146af8b34(local_778,"SMultiLineEditableTextBox",
                ".\\Runtime/UMG/Private/Components/MultiLineEditableTextBox.cpp",0x4f);
  FUN_146ad8480(local_778,&local_6f8,local_6e8);
  plVar4 = local_6f0;
  if (local_6f0 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe68) = local_6f8;
    plVar8 = *(longlong **)(param_1 + 0xe70);
    if (plVar8 == (longlong *)0x0) goto LAB_14774195d;
    *(undefined8 *)(param_1 + 0xe70) = 0;
LAB_147741a9c:
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14774195d;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_6f0 + 1) = (int)local_6f0[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xe68) = local_6f8;
    plVar8 = *(longlong **)(param_1 + 0xe70);
    if (local_6f0 != plVar8) {
      *(longlong **)(param_1 + 0xe70) = local_6f0;
      if (plVar8 == (longlong *)0x0) goto LAB_14774195d;
      goto LAB_147741a9c;
    }
    LOCK();
    plVar8 = local_6f0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_14774195d;
    (**(code **)*local_6f0)(local_6f0);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar8 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_14774195d:
  if (local_6f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_6f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_6f0)(local_6f0);
      LOCK();
      piVar1 = (int *)((longlong)local_6f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_6f0 + 0x10))(local_6f0);
      }
    }
  }
  if (local_770 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_770 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_770)(local_770);
      LOCK();
      piVar1 = (int *)((longlong)local_770 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_770 + 0x10))(local_770);
      }
    }
  }
  FUN_1449db362(&local_760);
  FUN_1449db362(&local_750);
  FUN_146a7083a(local_6e8);
  uVar3 = *(undefined8 *)(param_1 + 0xe68);
  plVar4 = *(longlong **)(param_1 + 0xe70);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_7a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147741b02 FUN_147741b02 body=118 status=ok
// SIG undefined FUN_147741b02(void)

void FUN_147741b02(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14774234a();
  if (cVar1 != '\0') {
    local_20 = DAT_14cab7fe0;
    local_28 = DAT_14cab7fd8;
    FUN_140e2f5f4(param_1 + 0x28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147741b8a FUN_147741b8a body=123 status=ok
// SIG undefined FUN_147741b8a(void)

void FUN_147741b8a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14774234a();
  if (cVar1 != '\0') {
    local_28 = DAT_14cab7fe0;
    local_30 = DAT_14cab7fd8;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1477409d6(param_1 + 0xe58,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147741c06 FUN_147741c06 body=578 status=ok
// SIG undefined FUN_147741c06(void)

void FUN_147741c06(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    cVar1 = FUN_14113f0c0(param_1 + 0x1a8);
    if (cVar1 == '\0') {
      local_68 = *(longlong **)(param_1 + 0x198);
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 8))();
      }
      local_60 = *(undefined4 *)(param_1 + 0x1a0);
      local_58 = 1;
      local_50 = 0;
      uStack_48 = 0;
    }
    else {
      local_90 = *(longlong **)(param_1 + 0x1b0);
      uVar2 = FUN_14479d2ce(param_1 + 0x1a8);
      FUN_144a5dc74(&local_68);
      local_50 = 0;
      uStack_48 = 0;
      local_58 = 1;
      FUN_1446efa72(&local_50,0,3,0x10);
      uStack_48 = CONCAT44(uStack_48._4_4_,3);
      FUN_147766644(local_50,uVar2,&local_90);
    }
    FUN_146a6ee1a(*(undefined8 *)(param_1 + 0xe68),param_1 + 0x1c0);
    uVar2 = *(undefined8 *)(param_1 + 0xe68);
    local_90 = *(longlong **)(param_1 + 0x188);
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 8))();
    }
    local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 400));
    uStack_80 = CONCAT71(uStack_80._1_7_,1);
    local_78 = 0;
    uStack_70 = 0;
    FUN_146a70b5a(uVar2,&local_90);
    FUN_1449db362(&local_78);
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 0x10))();
    }
    FUN_146a70b66(*(undefined8 *)(param_1 + 0xe68),&local_68);
    local_90._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0xe41));
    local_88 = 0;
    uStack_80 = 0;
    FUN_146a70bde(*(undefined8 *)(param_1 + 0xe68),&local_90);
    FUN_1449db362(&local_88);
    local_90._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0xe40));
    local_88 = 0;
    uStack_80 = 0;
    FUN_146a70c60(*(undefined8 *)(param_1 + 0xe68),&local_90);
    FUN_1449db362(&local_88);
    local_a8 = *(undefined1 *)(param_1 + 0xe43);
    local_a7 = 1;
    local_a0 = 0;
    uStack_98 = 0;
    FUN_146a70bea(*(undefined8 *)(param_1 + 0xe68));
    FUN_147741e4a(param_1,*(undefined8 *)(param_1 + 0xe68));
    FUN_1449db362(&local_50);
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147741e4a FUN_147741e4a body=435 status=ok
// SIG undefined FUN_147741e4a(void)

void FUN_147741e4a(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147742016(param_1 + 0x168);
  local_68 = (float)(uint)*(byte *)(param_1 + 0x16b);
  uStack_64._0_1_ = 1;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146a70bd2(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  local_68 = (float)(CONCAT31(local_68._1_3_,*(undefined1 *)(param_1 + 0x16d)) & 0xffffff01);
  local_68._0_2_ = CONCAT11(1,(undefined1)local_68);
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146a70b96(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  local_68 = *(float *)(param_1 + 0x170);
  bVar1 = local_68 != 0.0;
  if ((!bVar1) && (!NAN(local_68))) {
    local_68 = 0.0;
  }
  uStack_64 = CONCAT31(uStack_64._1_3_,bVar1);
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146a70b8a(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  local_68._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x16c));
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146a70ba2(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  local_68 = *(float *)(param_1 + 0x174);
  uStack_64 = *(undefined4 *)(param_1 + 0x178);
  uStack_60 = *(undefined8 *)(param_1 + 0x17c);
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  local_50 = 0;
  uStack_48 = 0;
  FUN_146a70bc6(param_2,&local_68);
  FUN_1449db362(&local_50);
  local_68 = *(float *)(param_1 + 0x184);
  uStack_64 = CONCAT31(uStack_64._1_3_,1);
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146a70bae(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  local_68._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x16e));
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146a70bba(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147742016 FUN_147742016 body=124 status=ok
// SIG undefined FUN_147742016(void)

void FUN_147742016(byte *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  byte local_1c;
  undefined1 local_1b;
  byte local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = (*param_1 & 1) != 0;
  if ((bool)local_19) {
    local_1a = param_1[1];
  }
  FUN_146a70b72(param_2);
  local_1b = (*param_1 & 2) != 0;
  if ((bool)local_1b) {
    local_1c = param_1[2];
  }
  FUN_146a70b7e(param_2);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147742094 FUN_147742094 body=96 status=ok
// SIG undefined FUN_147742094(void)

void FUN_147742094(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a70bd2(*(longlong *)(param_1 + 0xe68),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477420f6 FUN_1477420f6 body=96 status=ok
// SIG undefined FUN_1477420f6(void)

void FUN_1477420f6(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a70ba2(*(longlong *)(param_1 + 0xe68),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147742158 FUN_147742158 body=96 status=ok
// SIG undefined FUN_147742158(void)

void FUN_147742158(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a70b96(*(longlong *)(param_1 + 0xe68),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477421ba FUN_1477421ba body=98 status=ok
// SIG undefined FUN_1477421ba(void)

void FUN_1477421ba(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a70b8a(*(longlong *)(param_1 + 0xe68),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774221e FUN_14774221e body=98 status=ok
// SIG undefined FUN_14774221e(void)

void FUN_14774221e(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a70bae(*(longlong *)(param_1 + 0xe68),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147742282 FUN_147742282 body=96 status=ok
// SIG undefined FUN_147742282(void)

void FUN_147742282(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a70bba(*(longlong *)(param_1 + 0xe68),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477422e4 FUN_1477422e4 body=100 status=ok
// SIG undefined FUN_1477422e4(void)

void FUN_1477422e4(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_146a70bc6(*(longlong *)(param_1 + 0xe68),&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774234a FUN_14774234a body=106 status=ok
// SIG undefined FUN_14774234a(void)

uint FUN_14774234a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  
  plVar1 = (longlong *)(param_1 + 0x188);
  uVar4 = FUN_14010cee6(plVar1,param_2,3);
  if ((char)uVar4 == '\0') {
    plVar2 = (longlong *)*param_2;
    plVar3 = (longlong *)*plVar1;
    if (plVar3 != plVar2) {
      *plVar1 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(int *)(param_1 + 400) = (int)param_2[1];
  }
  return uVar4 ^ 1;
}



// FUNCTION 1477423b8 FUN_1477423b8 body=99 status=ok
// SIG undefined FUN_1477423b8(void)

void FUN_1477423b8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cbb8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774241c FUN_14774241c body=41 status=ok
// SIG undefined FUN_14774241c(void)

void FUN_14774241c(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_21();
                    /* WARNING: Could not recover jumptable at 0x000147742442. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  return;
}



// FUNCTION 147742446 FUN_147742446 body=155 status=ok
// SIG undefined FUN_147742446(void)

void FUN_147742446(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') && (iVar4 = *(int *)(param_1 + 0x170), 0 < iVar4)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar5 * 8);
      if ((plVar3 != (longlong *)0x0) && (plVar3[6] != 0)) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,1);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  plVar3 = *(longlong **)(param_1 + 0x188);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001477424dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477424e2 FUN_1477424e2 body=632 status=ok
// SIG undefined FUN_1477424e2(void)

undefined8 * FUN_1477424e2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_348 [32];
  undefined1 *local_328;
  undefined1 local_311;
  undefined1 local_310 [8];
  longlong *local_308;
  undefined8 local_2f8;
  longlong *local_2f0;
  code *local_2e8;
  undefined8 *local_2e0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_348;
  FUN_140a53a96(&local_2e8);
  local_328 = &local_311;
  FUN_140a53d66(local_310,&DAT_149efe19f,".\\Runtime/UMG/Private/Components/NamedSlot.cpp",0x21);
  FUN_140a50bf4(local_310,&local_2f8,&local_2e8);
  plVar5 = local_2f0;
  if (local_2f0 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x180) = local_2f8;
    plVar6 = *(longlong **)(param_1 + 0x188);
    if (plVar6 == (longlong *)0x0) goto LAB_1477425f7;
    *(undefined8 *)(param_1 + 0x188) = 0;
LAB_1477425bd:
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1477425f7;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar6;
  }
  else {
    LOCK();
    *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x180) = local_2f8;
    plVar6 = *(longlong **)(param_1 + 0x188);
    if (local_2f0 != plVar6) {
      *(longlong **)(param_1 + 0x188) = local_2f0;
      if (plVar6 == (longlong *)0x0) goto LAB_1477425f7;
      goto LAB_1477425bd;
    }
    LOCK();
    plVar6 = local_2f0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1477425f7;
    (**(code **)*local_2f0)(local_2f0);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_1477425f7:
  if (local_2f0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_2f0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_2f0)(local_2f0);
      LOCK();
      piVar1 = (int *)((longlong)local_2f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2f0 + 0x10))(local_2f0);
      }
    }
  }
  plVar5 = local_308;
  if (local_308 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_308 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_308)(local_308);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_140a5660c(&local_2e8);
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar3 = **(longlong **)(param_1 + 0x168);
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    if (*(longlong *)(lVar3 + 0x30) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x180);
      local_2e8 = FUN_143336ee2;
      local_2e0 = &local_2f8;
      FUN_1407616b4(*(longlong *)(lVar3 + 0x30),local_310);
      FUN_145cfad50(uVar4,local_310);
      if (local_308 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_308 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_308)(local_308);
          LOCK();
          piVar1 = (int *)((longlong)local_308 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_308 + 0x10))(local_308);
          }
        }
      }
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x180);
  plVar5 = *(longlong **)(param_1 + 0x188);
  if (plVar5 == (longlong *)0x0) {
    *param_2 = uVar4;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_2 = uVar4;
    param_2[1] = plVar5;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774275c FUN_14774275c body=157 status=ok
// SIG undefined FUN_14774275c(void)

void FUN_14774275c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_29;
  code *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x180);
  if ((lVar3 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    local_20 = &local_29;
    local_28 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_2 + 0x30),local_40);
    FUN_145cfad50(lVar3,local_40);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147742822 FUN_147742822 body=80 status=ok
// SIG undefined FUN_147742822(void)

void FUN_147742822(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x168) = 0;
  plVar3 = *(longlong **)(param_1 + 0x170);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x170) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014774286e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147742872 FUN_147742872 body=427 status=ok
// SIG undefined FUN_147742872(void)

undefined8 * FUN_147742872(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_338 [32];
  undefined1 *local_318;
  undefined1 local_301;
  undefined1 local_300 [8];
  longlong *local_2f8;
  undefined8 local_2e8;
  longlong *local_2e0;
  undefined1 local_2d8 [472];
  longlong local_100;
  longlong *local_f8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_140a53a96(local_2d8);
  plVar3 = local_f8;
  local_100 = DAT_14c98dec8;
  plVar6 = DAT_14c98ded0;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    local_100 = *(longlong *)(param_1 + 0x168);
    plVar6 = *(longlong **)(param_1 + 0x170);
  }
  bVar7 = plVar6 == (longlong *)0x0;
  if (bVar7) {
    plVar6 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plVar5 = plVar6;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_f8;
      local_f8 = plVar6;
      (*(code *)*puVar4)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar5 = local_f8;
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        plVar5 = local_f8;
      }
    }
  }
  local_f8 = plVar5;
  local_318 = &local_301;
  FUN_140a53d66(local_300,&DAT_149efe19f,".\\Runtime/UMG/Private/Components/NativeWidgetHost.cpp",
                0x30);
  FUN_140a50bf4(local_300,&local_2e8,local_2d8);
  *param_2 = local_2e8;
  param_2[1] = local_2e0;
  if (local_2e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2e0 + 1) = (int)local_2e0[1] + 1;
    UNLOCK();
    if (local_2e0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_2e0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_2e0)(local_2e0);
        LOCK();
        piVar2 = (int *)((longlong)local_2e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_2e0 + 0x10))(local_2e0);
        }
      }
    }
  }
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2f8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (!bVar7) {
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  FUN_140a5660c(local_2d8);
  if ((local_30 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147742a1e FUN_147742a1e body=164 status=ok
// SIG undefined FUN_147742a1e(void)

void FUN_147742a1e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147742ac4(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147742ac4 FUN_147742ac4 body=64 status=ok
// SIG undefined FUN_147742ac4(void)

longlong FUN_147742ac4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_147743a5a(param_1,param_2,0);
  if (lVar1 != 0) {
    lVar2 = FUN_14128df6c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147742b0a FUN_147742b0a body=278 status=ok
// SIG undefined FUN_147742b0a(void)

void FUN_147742b0a(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_24;
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((longlong)local_24 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((local_30 != 0) && (local_24 < *(int *)(param_1 + 0x170))) {
      FUN_147742d48(*(undefined8 *)(*(longlong *)(param_1 + 0x168) + (longlong)local_24 * 8));
      uVar1 = 1;
    }
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147742c30 FUN_147742c30 body=105 status=ok
// SIG undefined FUN_147742c30(void)

void FUN_147742c30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x180);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 0x188);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    (**(code **)(*param_2 + 0x2b0))(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147742c9a FUN_147742c9a body=173 status=ok
// SIG undefined FUN_147742c9a(void)

void FUN_147742c9a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x180) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    FUN_140760c2c(*(longlong *)(param_2 + 0x30),&local_28);
    if (local_28 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x180);
      local_38 = local_28;
      local_30 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_145901a74(uVar3,&local_38);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147742d48 FUN_147742d48 body=356 status=ok
// SIG undefined FUN_147742d48(void)

void FUN_147742d48(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 auStack_68 [32];
  code *local_48;
  longlong *plStack_40;
  undefined1 local_29 [9];
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0x30) != param_2) {
    (**(code **)(*param_2 + 0x2c0))(param_2);
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[6] = 0;
      (**(code **)(*plVar3 + 0x2c0))();
    }
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    bVar5 = DAT_14c950c29;
    *(longlong **)(param_1 + 0x30) = param_2;
    if ((param_1 != 0) && ((bVar5 & 1) != 0)) {
      FUN_1456cec3c(param_1);
    }
    param_2[6] = param_1;
    lVar4 = *(longlong *)(param_1 + 0x38);
    if (lVar4 != 0) {
      if (*(longlong *)(param_1 + 0x30) == 0) {
        local_48 = DAT_14c98dec8;
        plStack_40 = DAT_14c98ded0;
        if (DAT_14c98ded0 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
          UNLOCK();
        }
      }
      else {
        plStack_20 = (longlong *)local_29;
        local_29._1_8_ = FUN_143336ee2;
        FUN_1407616b4(*(longlong *)(param_1 + 0x30),&local_48);
      }
      FUN_14149270a(lVar4);
      local_29._1_8_ = *(undefined8 *)(lVar4 + 0x10);
      plStack_20 = *(longlong **)(lVar4 + 0x18);
      *(code **)(lVar4 + 0x10) = local_48;
      *(longlong **)(lVar4 + 0x18) = plStack_40;
      local_48 = (code *)local_29._1_8_;
      plStack_40 = plStack_20;
      FUN_140a5503c(lVar4);
      plVar3 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147742eae FUN_147742eae body=171 status=ok
// SIG undefined FUN_147742eae(void)

void FUN_147742eae(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x50) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x38) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x38) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147742f5a FUN_147742f5a body=163 status=ok
// SIG undefined FUN_147742f5a(void)

void FUN_147742f5a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_147742ffe(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147742ffe FUN_147742ffe body=117 status=ok
// SIG undefined FUN_147742ffe(void)

void FUN_147742ffe(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a55872(lVar1 + 0x28,lVar1 + 0x20,&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147743074 FUN_147743074 body=171 status=ok
// SIG undefined FUN_147743074(void)

void FUN_147743074(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x51) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x3c) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x3c) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147743128 FUN_147743128 body=11 status=ok
// SIG undefined FUN_147743128(void)

undefined8 * FUN_147743128(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *param_2 = *(undefined8 *)(param_1 + 0x40);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 147743134 FUN_147743134 body=62 status=ok
// SIG undefined FUN_147743134(void)

void FUN_147743134(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_147742ffe();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774317a FUN_14774317a body=5 status=ok
// SIG undefined FUN_14774317a(void)

undefined1 FUN_14774317a(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



// FUNCTION 1477431a6 FUN_1477431a6 body=5 status=ok
// SIG undefined FUN_1477431a6(void)

undefined1 FUN_1477431a6(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}



// FUNCTION 1477431ce FUN_1477431ce body=135 status=ok
// SIG undefined FUN_1477431ce(void)

void FUN_1477431ce(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_1 + 0x40);
  uStack_24 = *(undefined4 *)(param_1 + 0x44);
  uStack_20 = *(undefined4 *)(param_1 + 0x48);
  uStack_1c = *(undefined4 *)(param_1 + 0x4c);
  FUN_147742ffe();
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x38) != (uint)*(byte *)(param_1 + 0x50)) {
      *(uint *)(lVar1 + 0x38) = (uint)*(byte *)(param_1 + 0x50);
      FUN_14156c56c(lVar1,1);
      lVar1 = *(longlong *)(param_1 + 0x38);
      if (lVar1 == 0) goto LAB_147743228;
    }
    if (*(uint *)(lVar1 + 0x3c) != (uint)*(byte *)(param_1 + 0x51)) {
      *(uint *)(lVar1 + 0x3c) = (uint)*(byte *)(param_1 + 0x51);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
LAB_147743228:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147743282 FUN_147743282 body=167 status=ok
// SIG undefined FUN_147743282(void)

void FUN_147743282(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147743a5a(param_1,local_28,0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147743344 FUN_147743344 body=139 status=ok
// SIG undefined FUN_147743344(void)

void FUN_147743344(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477433d0(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477433d0 FUN_1477433d0 body=152 status=ok
// SIG undefined FUN_1477433d0(void)

longlong * FUN_1477433d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x170);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_147771ea2(param_2);
    iVar1 = *(int *)(param_1 + 0x170);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x168);
      lVar5 = 0;
      do {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + lVar5) + 0x30);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_147771f02(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar4;
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  return param_2;
}



// FUNCTION 14774346a FUN_14774346a body=192 status=ok
// SIG undefined FUN_14774346a(void)

void FUN_14774346a(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if ((((longlong)local_24 < 0) || (*(int *)(param_1 + 0x170) <= local_24)) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)local_24 * 8), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
  }
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774352c FUN_14774352c body=223 status=ok
// SIG undefined FUN_14774352c(void)

void FUN_14774352c(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = 0xffffffff;
  if ((local_28 != 0) && (0 < (longlong)*(int *)(param_1 + 0x170))) {
    lVar2 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x168) + lVar2 * 8);
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 0x30);
      }
      if (lVar3 == local_28) {
        uVar1 = (undefined4)lVar2;
        break;
      }
      lVar2 = lVar2 + 1;
    } while (*(int *)(param_1 + 0x170) != lVar2);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14774360c FUN_14774360c body=67 status=ok
// SIG undefined FUN_14774360c(void)

ulonglong FUN_14774360c(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (0 < (longlong)*(int *)(param_1 + 0x170))) {
    uVar1 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x168) + uVar1 * 8);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 0x30);
      }
      if (lVar2 == param_2) {
        return uVar1 & 0xffffffff;
      }
      uVar1 = uVar1 + 1;
    } while ((longlong)*(int *)(param_1 + 0x170) != uVar1);
  }
  return 0xffffffff;
}



// FUNCTION 147743690 FUN_147743690 body=187 status=ok
// SIG undefined FUN_147743690(void)

void FUN_147743690(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == 0) {
    bVar2 = false;
  }
  else {
    if (*(longlong *)(local_28 + 0x30) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(local_28 + 0x30) + 0x28);
    }
    bVar2 = lVar1 == param_1;
  }
  *param_3 = bVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774374c FUN_14774374c body=33 status=ok
// SIG undefined FUN_14774374c(void)

undefined8 FUN_14774374c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x28);
    }
    uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 == param_1);
  }
  return uVar1;
}



// FUNCTION 147743774 FUN_147743774 body=163 status=ok
// SIG undefined FUN_147743774(void)

void FUN_147743774(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147743818(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147743818 FUN_147743818 body=69 status=ok
// SIG undefined FUN_147743818(void)

undefined8 FUN_147743818(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (0 < (longlong)*(int *)(param_1 + 0x170))) {
    uVar1 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x168) + uVar1 * 8);
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 0x30);
      }
      if (lVar3 == param_2) {
        uVar2 = FUN_147743906(param_1,uVar1 & 0xffffffff);
        return uVar2;
      }
      uVar1 = uVar1 + 1;
    } while ((longlong)*(int *)(param_1 + 0x170) != uVar1);
  }
  return 0;
}



// FUNCTION 147743864 FUN_147743864 body=161 status=ok
// SIG undefined FUN_147743864(void)

void FUN_147743864(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_147743906(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147743906 FUN_147743906 body=177 status=ok
// SIG undefined FUN_147743906(void)

ulonglong FUN_147743906(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  void *_Dst;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((-1 < (int)param_2) && (iVar3 = (int)param_1[0x2e], (int)param_2 < iVar3)) {
    plVar1 = param_1 + 0x2d;
    plVar2 = *(longlong **)(*plVar1 + (ulonglong)param_2 * 8);
    if (~param_2 + iVar3 != 0) {
      _Dst = (void *)(*plVar1 + (ulonglong)param_2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar3) << 3);
      iVar3 = (int)param_1[0x2e];
    }
    *(int *)(param_1 + 0x2e) = iVar3 + -1;
    FUN_147771f88(plVar1);
    if (plVar2 != (longlong *)0x0) {
      if (plVar2[6] != 0) {
        *(undefined8 *)(plVar2[6] + 0x30) = 0;
      }
      (**(code **)(*param_1 + 0x318))(param_1,plVar2);
      uVar4 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      (**(code **)(*plVar2 + 0x2a0))(plVar2,1);
      plVar2[5] = 0;
      plVar2[6] = 0;
      FUN_1477439cc(param_1);
      goto LAB_147743920;
    }
  }
  uVar4 = 0;
LAB_147743920:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1477439ba FUN_1477439ba body=17 status=ok
// SIG undefined FUN_1477439ba(void)

undefined8 FUN_1477439ba(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x28);
  }
  return 0;
}



// FUNCTION 1477439cc FUN_1477439cc body=124 status=ok
// SIG undefined FUN_1477439cc(void)

void FUN_1477439cc(undefined8 param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140760c2c(param_1,&local_28);
  if (local_28 != 0) {
    FUN_140163244(local_28,5);
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147743a5a FUN_147743a5a body=472 status=ok
// SIG undefined FUN_147743a5a(void)

longlong FUN_147743a5a(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if ((param_2 != (longlong *)0x0) && (((char)param_1[0x2f] != '\0' || ((int)param_1[0x2e] < 1)))) {
    (**(code **)(*param_2 + 0x2c0))(param_2);
    uVar7 = *(uint *)(param_1 + 1) & 0x40 | 8;
    if ((param_3 == 0) ||
       (lVar5 = (**(code **)(*param_1 + 0x308))(param_1), lVar5 != *(longlong *)(param_3 + 0x10))) {
      uVar6 = (**(code **)(*param_1 + 0x308))(param_1);
      lVar5 = FUN_147743c32(param_1,uVar6,uVar7,0);
    }
    else {
      lVar2 = *(longlong *)(param_3 + 0x28);
      lVar3 = *(longlong *)(param_3 + 0x30);
      *(undefined8 *)(param_3 + 0x28) = 0;
      *(undefined8 *)(param_3 + 0x30) = 0;
      uVar6 = (**(code **)(*param_1 + 0x308))(param_1);
      lVar5 = FUN_147743c32(param_1,uVar6,uVar7,param_3);
      if (lVar3 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(lVar3);
      }
      bVar4 = DAT_14c950c29;
      *(longlong *)(param_3 + 0x30) = lVar3;
      if ((lVar2 != 0) && ((bVar4 & 1) != 0)) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_3 + 0x28) = lVar2;
    }
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    bVar4 = DAT_14c950c29;
    *(longlong **)(lVar5 + 0x30) = param_2;
    if (param_1 != (longlong *)0x0 && (~bVar4 & 1) == 0) {
      FUN_1456cec3c(param_1);
      bVar4 = DAT_14c950c29;
    }
    *(longlong **)(lVar5 + 0x28) = param_1;
    if (lVar5 != 0 && (~bVar4 & 1) == 0) {
      FUN_1456cec3c(lVar5);
      bVar4 = DAT_14c950c29;
    }
    param_2[6] = lVar5;
    if ((lVar5 != 0) && ((bVar4 & 1) != 0)) {
      FUN_1456cec3c(lVar5);
    }
    iVar1 = (int)param_1[0x2e];
    *(uint *)(param_1 + 0x2e) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x174) < iVar1 + 1U) {
      FUN_14777202a(param_1 + 0x2d,iVar1);
    }
    *(longlong *)(param_1[0x2d] + (longlong)iVar1 * 8) = lVar5;
    if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar5);
    }
    (**(code **)(*param_1 + 0x310))(param_1,lVar5);
    FUN_1477439cc(param_1);
    return lVar5;
  }
  return 0;
}



// FUNCTION 147743c32 FUN_147743c32 body=198 status=ok
// SIG undefined FUN_147743c32(void)

undefined8 FUN_147743c32(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_78 = (longlong *)0x0;
  local_48 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_88 = 0;
  uStack_b0 = (ulonglong)param_3;
  local_98 = 0;
  uStack_90 = 0;
  local_c8 = param_2;
  local_c0 = param_1;
  local_a0 = param_4;
  uVar1 = FUN_1402710dd(&local_c8);
  if (local_88 != 0) {
    plVar2 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar2 = local_68;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147743cfa FUN_147743cfa body=66 status=ok
// SIG undefined FUN_147743cfa(void)

undefined8 FUN_147743cfa(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_147743a5a(param_1,param_3,param_4);
    FUN_147743d3c(param_1,param_2,param_3);
  }
  return uVar1;
}



// FUNCTION 147743d3c FUN_147743d3c body=196 status=ok
// SIG undefined FUN_147743d3c(void)

void FUN_147743d3c(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar3 = *(uint *)(param_1 + 0x170);
  if (0 < (int)uVar3) {
    lVar1 = *(longlong *)(param_1 + 0x168);
    uVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar1 + uVar6 * 8);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 0x30);
      }
      if (lVar4 == param_3) {
        if (uVar3 - 1 != (int)uVar6) {
          memmove((void *)(lVar1 + uVar6 * 8),(void *)(lVar1 + uVar6 * 8 + 8),
                  (longlong)(int)((uVar3 - 1) - (int)uVar6) << 3);
          uVar3 = *(uint *)(param_1 + 0x170);
        }
        *(uint *)(param_1 + 0x170) = uVar3 - 1;
        FUN_147771f88(param_1 + 0x168);
        iVar2 = *(int *)(param_1 + 0x170);
        if (param_2 < *(int *)(param_1 + 0x170)) {
          iVar2 = param_2;
        }
        iVar5 = 0;
        if (0 < iVar2) {
          iVar5 = iVar2;
        }
        FUN_147743e00(param_1 + 0x168,param_3 + 0x30,iVar5);
        FUN_1477439cc(param_1);
        return;
      }
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  return;
}



// FUNCTION 147743e00 FUN_147743e00 body=129 status=ok
// SIG undefined FUN_147743e00(void)

uint FUN_147743e00(longlong *param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14777202a(param_1,iVar1);
  }
  uVar3 = (ulonglong)param_3;
  memmove((void *)(*param_1 + uVar3 * 8 + 8),(void *)(*param_1 + uVar3 * 8),
          (ulonglong)(iVar1 - param_3) << 3);
  lVar2 = *param_2;
  *(longlong *)(*param_1 + uVar3 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_3;
}



// FUNCTION 147743e82 FUN_147743e82 body=46 status=ok
// SIG undefined FUN_147743e82(void)

void FUN_147743e82(longlong param_1)

{
  uint uVar1;
  
  if (0 < *(int *)(param_1 + 0x170)) {
    uVar1 = *(int *)(param_1 + 0x170) + 1;
    do {
      FUN_147743906(param_1,uVar1 - 2);
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 147743eb0 FUN_147743eb0 body=8 status=ok
// SIG undefined FUN_147743eb0(void)

longlong FUN_147743eb0(longlong param_1)

{
  return param_1 + 0x168;
}



// FUNCTION 147743ebc FUN_147743ebc body=375 status=ok
// SIG undefined FUN_147743ebc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_147743ebc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a541e50;
  plVar1 = plVar6 + 2;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14a541e68;
  *(undefined4 *)(plVar6 + 6) = 0x41200000;
  local_50 = plVar1;
  local_48 = plVar6;
  FUN_14777211c(&local_50,plVar1);
  plVar5 = local_48;
  if (plVar6 == (longlong *)0x0) {
    _DAT_00000030 = *(undefined4 *)(param_1 + 0x30);
    *param_2 = 0x10;
    goto LAB_147743fbf;
  }
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined4 *)(plVar6 + 6) = *(undefined4 *)(param_1 + 0x30);
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  plVar5 = (longlong *)param_2[1];
  *param_2 = (longlong)plVar1;
  if (plVar6 == plVar5) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      iVar4 = *piVar3;
      UNLOCK();
      plVar5 = plVar6;
joined_r0x000147743fff:
      if (iVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  else {
    param_2[1] = (longlong)plVar6;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        goto joined_r0x000147743fff;
      }
    }
  }
  LOCK();
  plVar1 = plVar6 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar3 = (int *)((longlong)plVar6 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
  }
LAB_147743fbf:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147744036 FUN_147744036 body=144 status=ok
// SIG undefined FUN_147744036(void)

void FUN_147744036(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  fVar5 = *(float *)(param_1 + 0x20);
  if ((-1 < *(int *)(DAT_14cab8158 + 4)) &&
     (fVar6 = (float)*(int *)(DAT_14cab8158 + 4), fVar6 <= fVar5)) {
    fVar5 = fVar6;
  }
  *(float *)(lVar3 + 0x20) = fVar5;
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
                    /* WARNING: Could not recover jumptable at 0x0001477440ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477440fe FUN_1477440fe body=1059 status=ok
// SIG undefined FUN_1477440fe(void)

undefined8 * FUN_1477440fe(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_2e8 [32];
  longlong *local_2c8;
  longlong *local_2c0;
  undefined8 *local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  longlong local_2a0;
  undefined4 local_298;
  longlong local_290;
  longlong *local_288;
  undefined1 *local_280;
  longlong *local_278;
  longlong local_268;
  undefined8 uStack_260;
  undefined1 local_24c [4];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_147744522(&local_1f8);
  local_50 = *(undefined1 *)(param_1 + 0x168);
  local_2c8 = &local_290;
  FUN_14777227c(&local_280,"SPostBufferUpdate",
                ".\\Runtime/UMG/Private/Components/PostBufferUpdate.cpp",0x25);
  FUN_147744540(&local_280,&local_268,&local_1f8);
  plVar8 = uStack_260;
  if (uStack_260 == (longlong *)0x0) {
    *(longlong *)(param_1 + 400) = local_268;
    plVar10 = *(longlong **)(param_1 + 0x198);
    if (plVar10 == (longlong *)0x0) goto LAB_147744229;
    *(undefined8 *)(param_1 + 0x198) = 0;
LAB_1477441ef:
    LOCK();
    plVar8 = plVar10 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_147744229;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar2 = (int *)((longlong)plVar10 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar8 = plVar10;
  }
  else {
    LOCK();
    *(int *)(uStack_260 + 1) = (int)uStack_260[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 400) = local_268;
    plVar10 = *(longlong **)(param_1 + 0x198);
    if (uStack_260 != plVar10) {
      *(longlong **)(param_1 + 0x198) = uStack_260;
      if (plVar10 == (longlong *)0x0) goto LAB_147744229;
      goto LAB_1477441ef;
    }
    LOCK();
    plVar10 = uStack_260 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_147744229;
    (**(code **)*uStack_260)(uStack_260);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_147744229:
  plVar10 = uStack_260;
  plVar8 = (longlong *)(param_1 + 0x198);
  puVar7 = (undefined8 *)(param_1 + 400);
  if (uStack_260 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_260 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_260)(uStack_260);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  plVar10 = local_278;
  if (local_278 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_278 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_278)(local_278);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  FUN_140a4ff8c(&local_1f8);
  if ((longlong)*(int *)(param_1 + 0x188) == 0) {
    local_2b0 = *(undefined8 *)(param_1 + 0x170);
    local_2a8 = *(undefined4 *)(param_1 + 0x178);
    FUN_147790072(*(undefined8 *)(param_1 + 400));
  }
  else {
    local_268 = 0;
    uStack_260 = (longlong *)0x0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1cc = 0xffffffff00000080;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    puVar6 = *(undefined1 **)(param_1 + 0x180);
    lVar11 = (longlong)*(int *)(param_1 + 0x188) << 4;
    local_2c0 = plVar8;
    local_2b8 = puVar7;
    do {
      plVar8 = uStack_260;
      lVar9 = (longlong)(int)uStack_260;
      uVar5 = (int)uStack_260 + 1;
      uStack_260 = (longlong *)CONCAT44(uStack_260._4_4_,uVar5);
      if (uStack_260._4_4_ < uVar5) {
        FUN_147772546(&local_268,(ulonglong)plVar8 & 0xffffffff);
      }
      *(undefined1 *)(local_268 + lVar9) = *puVar6;
      plVar8 = *(longlong **)(puVar6 + 8);
      if ((DAT_14c950c29 == '\x01') && (plVar8 != (longlong *)0x0)) {
        FUN_1456cec3c(plVar8);
LAB_1477443f0:
        (**(code **)(*plVar8 + 0x2a0))(plVar8,&local_290);
        *(char *)(local_290 + 0x18) = (char)plVar8[5];
        local_280 = puVar6;
        local_278 = &local_290;
        FUN_1477725c4(&local_1f8,local_24c,&local_280);
        plVar8 = local_288;
        if (local_288 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_288 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_288)(local_288);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      else if (plVar8 != (longlong *)0x0) goto LAB_1477443f0;
      puVar7 = local_2b8;
      puVar6 = puVar6 + 0x10;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    local_2a0 = local_268;
    local_298 = (int)uStack_260;
    FUN_147790072(*local_2b8);
    uVar4 = *puVar7;
    local_228 = 0;
    local_220 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_21c = 0xffffffff00000080;
    local_214 = 0;
    local_208 = 0;
    local_200 = 0;
    FUN_147762966(&local_248,&local_1f8);
    FUN_14779014e(uVar4,&local_248);
    local_1b0 = 0;
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    FUN_147762c48(&local_1f8);
    plVar8 = local_2c0;
    if (local_268 != 0) {
      FUN_1400020a8();
    }
  }
  uVar4 = *puVar7;
  plVar8 = (longlong *)*plVar8;
  if (plVar8 == (longlong *)0x0) {
    *param_2 = uVar4;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *param_2 = uVar4;
    param_2[1] = plVar8;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147744522 FUN_147744522 body=29 status=ok
// SIG undefined FUN_147744522(void)

longlong FUN_147744522(longlong param_1)

{
  FUN_140a5071c();
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  return param_1;
}



// FUNCTION 147744540 FUN_147744540 body=115 status=ok
// SIG undefined FUN_147744540(void)

longlong * FUN_147744540(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14778fec4(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1477445b4 FUN_1477445b4 body=609 status=ok
// SIG undefined FUN_1477445b4(void)

void FUN_1477445b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_140;
  longlong local_138;
  undefined4 local_130;
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined1 *local_100;
  longlong *local_f8;
  undefined1 local_ec [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_14779005c(*(longlong *)(param_1 + 400),*(undefined1 *)(param_1 + 0x168));
    if ((longlong)*(int *)(param_1 + 0x188) == 0) {
      local_148 = *(undefined8 *)(param_1 + 0x170);
      local_140 = *(undefined4 *)(param_1 + 0x178);
      FUN_147790072(*(undefined8 *)(param_1 + 400));
    }
    else {
      local_118 = 0;
      uStack_110 = 0;
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      puVar8 = *(undefined1 **)(param_1 + 0x180);
      lVar7 = (longlong)*(int *)(param_1 + 0x188) << 4;
      do {
        uVar5 = uStack_110;
        lVar9 = (longlong)(int)uStack_110;
        uVar6 = (int)uStack_110 + 1;
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar6);
        if (uStack_110._4_4_ < uVar6) {
          FUN_147772546(&local_118,uVar5 & 0xffffffff);
        }
        *(undefined1 *)(local_118 + lVar9) = *puVar8;
        plVar3 = *(longlong **)(puVar8 + 8);
        if ((DAT_14c950c29 == '\x01') && (plVar3 != (longlong *)0x0)) {
          FUN_1456cec3c(plVar3);
LAB_1477446f4:
          (**(code **)(*plVar3 + 0x2a0))(plVar3,&local_128);
          *(char *)(local_128 + 0x18) = (char)plVar3[5];
          local_100 = puVar8;
          local_f8 = &local_128;
          FUN_1477725c4(&local_98,local_ec,&local_100);
          plVar3 = local_120;
          if (local_120 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_120 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_120)(local_120);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
        else if (plVar3 != (longlong *)0x0) goto LAB_1477446f4;
        puVar8 = puVar8 + 0x10;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
      local_138 = local_118;
      local_130 = (int)uStack_110;
      FUN_147790072(*(undefined8 *)(param_1 + 400));
      uVar4 = *(undefined8 *)(param_1 + 400);
      local_c8 = 0;
      local_c0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_bc = 0xffffffff00000080;
      local_b4 = 0;
      local_a8 = 0;
      local_a0 = 0;
      FUN_147762966(&local_e8,&local_98);
      FUN_14779014e(uVar4,&local_e8);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_147762c48(&local_98);
      if (local_118 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147744816 FUN_147744816 body=105 status=ok
// SIG undefined FUN_147744816(void)

void FUN_147744816(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_143339a7a();
  }
  *(undefined8 *)(param_1 + 400) = 0;
  plVar3 = *(longlong **)(param_1 + 0x198);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x198) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014774487b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147744880 FUN_147744880 body=194 status=ok
// SIG undefined FUN_147744880(void)

void FUN_147744880(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x3c8) = local_58;
  *(undefined4 *)(param_1 + 0x3cc) = uStack_54;
  *(undefined4 *)(param_1 + 0x3d0) = uStack_50;
  *(undefined4 *)(param_1 + 0x3d4) = uStack_4c;
  if (*(longlong *)(param_1 + 1000) != 0) {
    local_38 = 0;
    local_34 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_146ad4b16();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147744948 FUN_147744948 body=158 status=ok
// SIG undefined FUN_147744948(void)

void FUN_147744948(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1477449e8(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477449e8 FUN_1477449e8 body=115 status=ok
// SIG undefined FUN_1477449e8(void)

void FUN_1477449e8(longlong param_1,char param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(char *)(param_1 + 0x3a6) = param_2;
  if (*(longlong *)(param_1 + 1000) != 0) {
    local_24 = param_2 == '\0';
    if ((bool)local_24) {
      local_28 = *(undefined4 *)(param_1 + 0x3a0);
    }
    local_20 = 1;
    local_18 = 0;
    uStack_10 = 0;
    FUN_146ad45a2();
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147744a5c FUN_147744a5c body=200 status=ok
// SIG undefined FUN_147744a5c(void)

void FUN_147744a5c(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x3a0) = local_3c;
  if (*(longlong *)(param_1 + 1000) != 0) {
    local_38 = local_3c;
    local_34 = 1;
    local_30 = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_146ad45a2();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147744b26 FUN_147744b26 body=756 status=ok
// SIG undefined FUN_147744b26(void)

void FUN_147744b26(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_288 [32];
  undefined **local_268 [2];
  undefined **local_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  longlong local_220;
  undefined8 local_218 [10];
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  longlong local_170;
  undefined8 local_168 [10];
  undefined4 local_118;
  undefined1 local_114;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined **local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  undefined8 local_b8 [10];
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_268[0] = &PTR_FUN_149eeb690;
  local_258 = &PTR_FUN_149ed05f0;
  local_250 = *(undefined4 *)(param_1 + 0x188);
  uStack_24c = *(undefined4 *)(param_1 + 0x18c);
  uStack_248 = *(undefined4 *)(param_1 + 400);
  uStack_244 = *(undefined4 *)(param_1 + 0x194);
  local_240 = *(undefined4 *)(param_1 + 0x198);
  uStack_23c = *(undefined4 *)(param_1 + 0x19c);
  uStack_238 = *(undefined4 *)(param_1 + 0x1a0);
  uStack_234 = *(undefined4 *)(param_1 + 0x1a4);
  local_230 = *(undefined4 *)(param_1 + 0x1a8);
  uStack_22c = *(undefined4 *)(param_1 + 0x1ac);
  uStack_228 = *(undefined4 *)(param_1 + 0x1b0);
  uStack_224 = *(undefined4 *)(param_1 + 0x1b4);
  local_220 = *(longlong *)(param_1 + 0x1b8);
  if ((local_220 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar2 = (undefined8 *)(param_1 + 0x1c0);
  puVar3 = local_218;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_1c4 = *(undefined1 *)(param_1 + 0x214);
  local_1c8 = *(undefined4 *)(param_1 + 0x210);
  local_1c0 = *(undefined8 *)(param_1 + 0x218);
  local_1b8 = *(longlong *)(param_1 + 0x220);
  if (local_1b8 != 0) {
    LOCK();
    *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + 1;
    UNLOCK();
  }
  local_1b0 = *(undefined8 *)(param_1 + 0x228);
  local_1a8 = &PTR_FUN_149ed05f0;
  local_1a0 = *(undefined4 *)(param_1 + 0x238);
  uStack_19c = *(undefined4 *)(param_1 + 0x23c);
  uStack_198 = *(undefined4 *)(param_1 + 0x240);
  uStack_194 = *(undefined4 *)(param_1 + 0x244);
  local_190 = *(undefined4 *)(param_1 + 0x248);
  uStack_18c = *(undefined4 *)(param_1 + 0x24c);
  uStack_188 = *(undefined4 *)(param_1 + 0x250);
  uStack_184 = *(undefined4 *)(param_1 + 0x254);
  local_180 = *(undefined4 *)(param_1 + 600);
  uStack_17c = *(undefined4 *)(param_1 + 0x25c);
  uStack_178 = *(undefined4 *)(param_1 + 0x260);
  uStack_174 = *(undefined4 *)(param_1 + 0x264);
  local_170 = *(longlong *)(param_1 + 0x268);
  if ((local_170 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar2 = (undefined8 *)(param_1 + 0x270);
  puVar3 = local_168;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_114 = *(undefined1 *)(param_1 + 0x2c4);
  local_118 = *(undefined4 *)(param_1 + 0x2c0);
  local_110 = *(undefined8 *)(param_1 + 0x2c8);
  local_108 = *(longlong *)(param_1 + 0x2d0);
  if (local_108 != 0) {
    LOCK();
    *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
    UNLOCK();
  }
  local_100 = *(undefined8 *)(param_1 + 0x2d8);
  local_f8 = &PTR_FUN_149ed05f0;
  local_f0 = *(undefined4 *)(param_1 + 0x2e8);
  uStack_ec = *(undefined4 *)(param_1 + 0x2ec);
  uStack_e8 = *(undefined4 *)(param_1 + 0x2f0);
  uStack_e4 = *(undefined4 *)(param_1 + 0x2f4);
  local_e0 = *(undefined4 *)(param_1 + 0x2f8);
  uStack_dc = *(undefined4 *)(param_1 + 0x2fc);
  uStack_d8 = *(undefined4 *)(param_1 + 0x300);
  uStack_d4 = *(undefined4 *)(param_1 + 0x304);
  local_d0 = *(undefined4 *)(param_1 + 0x308);
  uStack_cc = *(undefined4 *)(param_1 + 0x30c);
  uStack_c8 = *(undefined4 *)(param_1 + 0x310);
  uStack_c4 = *(undefined4 *)(param_1 + 0x314);
  local_c0 = *(longlong *)(param_1 + 0x318);
  if ((local_c0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar2 = (undefined8 *)(param_1 + 800);
  puVar3 = local_b8;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_64 = *(undefined1 *)(param_1 + 0x374);
  local_68 = *(undefined4 *)(param_1 + 0x370);
  local_60 = *(undefined8 *)(param_1 + 0x378);
  local_58 = *(longlong *)(param_1 + 0x380);
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  local_50 = *(undefined8 *)(param_1 + 0x388);
  local_48 = *(undefined1 *)(param_1 + 0x390);
  FUN_140f13d9e(param_2 + 0x10,&local_258);
  FUN_140f13d9e(param_2 + 0xc0,&local_1a8);
  FUN_140f13d9e(param_2 + 0x170,&local_f8);
  *(undefined1 *)(param_2 + 0x220) = local_48;
  FUN_14594e52c(local_268);
  if ((local_38 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147744e22 FUN_147744e22 body=119 status=ok
// SIG undefined FUN_147744e22(void)

void FUN_147744e22(longlong param_1,longlong param_2)

{
  FUN_140f13d9e(param_1 + 0x180,param_2 + 0x10);
  FUN_140f13d9e(param_1 + 0x230,param_2 + 0xc0);
  FUN_140f13d9e(param_1 + 0x2e0,param_2 + 0x170);
  *(undefined1 *)(param_1 + 0x390) = *(undefined1 *)(param_2 + 0x220);
  if (*(longlong *)(param_1 + 1000) != 0) {
    FUN_146ad48f0(*(longlong *)(param_1 + 1000),param_1 + 0x170);
    return;
  }
  return;
}



// FUNCTION 147744ea8 FUN_147744ea8 body=99 status=ok
// SIG undefined FUN_147744ea8(void)

void FUN_147744ea8(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x3a0) = uVar1;
  if (*(longlong *)(param_1 + 1000) != 0) {
    local_24 = 1;
    local_20 = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_28 = uVar1;
    FUN_146ad45a2();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147744f72 FUN_147744f72 body=105 status=ok
// SIG undefined FUN_147744f72(void)

void FUN_147744f72(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x3a8) = *param_2;
  *(undefined4 *)(param_1 + 0x3ac) = uVar1;
  *(undefined4 *)(param_1 + 0x3b0) = uVar2;
  *(undefined4 *)(param_1 + 0x3b4) = uVar3;
  if (*(longlong *)(param_1 + 1000) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x3a8);
    uStack_30 = *(undefined8 *)(param_1 + 0x3b0);
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_146ad4c80(*(longlong *)(param_1 + 1000));
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147744fe8 FUN_147744fe8 body=108 status=ok
// SIG undefined FUN_147744fe8(void)

void FUN_147744fe8(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x3c8) = *param_2;
  *(undefined4 *)(param_1 + 0x3cc) = uVar1;
  *(undefined4 *)(param_1 + 0x3d0) = uVar2;
  *(undefined4 *)(param_1 + 0x3d4) = uVar3;
  if (*(longlong *)(param_1 + 1000) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x3c8);
    uStack_30 = *(undefined8 *)(param_1 + 0x3d0);
    local_28 = 0;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_146ad4b16();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147745060 FUN_147745060 body=80 status=ok
// SIG undefined FUN_147745060(void)

void FUN_147745060(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 1000) = 0;
  plVar3 = *(longlong **)(param_1 + 0x3f0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x3f0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001477450ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477450b0 FUN_1477450b0 body=505 status=ok
// SIG undefined FUN_1477450b0(void)

undefined8 * FUN_1477450b0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_2d8 [32];
  undefined1 *local_2b8;
  undefined1 local_2a1;
  undefined1 local_2a0 [8];
  longlong *local_298;
  undefined8 local_288;
  longlong *local_280;
  undefined1 local_278 [584];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  FUN_146ad4974(local_278);
  local_2b8 = &local_2a1;
  FUN_147772aa6(local_2a0,"SProgressBar",".\\Runtime/UMG/Private/Components/ProgressBar.cpp",0x30);
  FUN_1477452aa(local_2a0,&local_288,local_278);
  plVar4 = local_280;
  if (local_280 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 1000) = local_288;
    plVar5 = *(longlong **)(param_1 + 0x3f0);
    if (plVar5 == (longlong *)0x0) goto LAB_147745156;
    *(undefined8 *)(param_1 + 0x3f0) = 0;
LAB_147745272:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147745156;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_280 + 1) = (int)local_280[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 1000) = local_288;
    plVar5 = *(longlong **)(param_1 + 0x3f0);
    if (local_280 != plVar5) {
      *(longlong **)(param_1 + 0x3f0) = local_280;
      if (plVar5 == (longlong *)0x0) goto LAB_147745156;
      goto LAB_147745272;
    }
    LOCK();
    plVar5 = local_280 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_147745156;
    (**(code **)*local_280)(local_280);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_147745156:
  if (local_280 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_280 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_280)(local_280);
      LOCK();
      piVar1 = (int *)((longlong)local_280 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_280 + 0x10))(local_280);
      }
    }
  }
  if (local_298 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_298 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_298)(local_298);
      LOCK();
      piVar1 = (int *)((longlong)local_298 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_298 + 0x10))(local_298);
      }
    }
  }
  FUN_146ad4aa0(local_278);
  uVar3 = *(undefined8 *)(param_1 + 1000);
  plVar4 = *(longlong **)(param_1 + 0x3f0);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477452aa FUN_1477452aa body=115 status=ok
// SIG undefined FUN_1477452aa(void)

longlong * FUN_1477452aa(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146ad441e(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14774531e FUN_14774531e body=947 status=ok
// SIG undefined FUN_14774531e(void)

void FUN_14774531e(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined5 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8 [2];
  undefined4 local_b8;
  char local_b4;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 1000) != 0) {
    cVar1 = FUN_14113f0c0(param_1 + 0x3b8);
    if (cVar1 == '\0') {
      local_e8 = *(undefined4 *)(param_1 + 0x3a0);
      local_e4 = 1;
      local_e0 = 0;
      uStack_d8 = 0;
      FUN_1477457b2(local_e8,&local_98);
      local_70._0_5_ = CONCAT14(local_98._4_1_,(uint)local_70);
      if (local_98._4_1_ == '\x01') {
        local_70 = (code *)CONCAT44(local_70._4_4_,(undefined4)local_98);
      }
      local_68 = CONCAT31(local_68._1_3_,1);
      local_60 = 0;
      uStack_58 = 0;
    }
    else {
      local_d0 = *(undefined8 *)(param_1 + 0x3c0);
      uVar2 = FUN_14479d2ce(param_1 + 0x3b8);
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      local_98 = CONCAT35((int3)((ulonglong)local_98 >> 0x28),0x100000000);
      FUN_1446efa72(&uStack_90,0,3,0x10);
      uStack_88 = 3;
      FUN_147772e02(CONCAT44(uStack_8c,uStack_90),uVar2,&local_d0);
      local_70 = FUN_1477457b2;
      local_68 = 0;
      FUN_1477456d2(local_c8,param_1,&local_70,&local_98);
      local_70._0_5_ = (uint5)(uint)local_70;
      local_68 = CONCAT31(local_68._1_3_,1);
      local_60 = 0;
      uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
      FUN_146af763c(&local_60,local_c8);
      FUN_1449db362(local_c8);
      FUN_1449db362(&uStack_90);
    }
    cVar1 = FUN_14113f0c0(param_1 + 0x3d8);
    if (cVar1 == '\0') {
      local_98 = *(undefined8 *)(param_1 + 0x3c8);
      uStack_90 = (undefined4)*(undefined8 *)(param_1 + 0x3d0);
      uStack_8c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x3d0) >> 0x20);
      uStack_88 = uStack_88 & 0xffffff00;
      uStack_84 = CONCAT31(uStack_84._1_3_,1);
      local_80 = 0;
      uStack_78 = 0;
    }
    else {
      local_c8[0] = *(undefined8 *)(param_1 + 0x3e0);
      uVar2 = FUN_14479d2ce(param_1 + 0x3d8);
      local_98 = 0x3f800000;
      uStack_90 = 0x3f800000;
      uStack_8c = 0x3f800000;
      uStack_88 = uStack_88 & 0xffffff00;
      local_80 = 0;
      uStack_78 = 0;
      uStack_84 = CONCAT31(uStack_84._1_3_,1);
      FUN_1446efa72(&local_80,0,3,0x10);
      uStack_78 = CONCAT44(uStack_78._4_4_,3);
      FUN_1477688f4(local_80,uVar2,local_c8);
    }
    FUN_146ad48f0(*(undefined8 *)(param_1 + 1000),param_1 + 0x170);
    FUN_146ad4aea(*(undefined8 *)(param_1 + 1000),*(undefined1 *)(param_1 + 0x3a4));
    FUN_146ad4b00(*(undefined8 *)(param_1 + 1000),*(undefined1 *)(param_1 + 0x3a5));
    uVar2 = *(undefined8 *)(param_1 + 1000);
    if (*(char *)(param_1 + 0x3a6) == '\x01') {
      local_b4 = '\0';
      local_b0 = 1;
      local_a8 = 0;
      uStack_a0 = 0;
    }
    else {
      local_b4 = local_70._4_1_;
      if (local_70._4_1_ == '\x01') {
        local_b8 = (uint)local_70;
      }
      local_b0 = (undefined1)local_68;
      local_a8 = 0;
      uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
      FUN_146af763c();
    }
    FUN_146ad45a2(uVar2,&local_b8);
    uVar2 = *(undefined8 *)(param_1 + 1000);
    uStack_108 = CONCAT14((undefined1)uStack_84,uStack_88);
    local_118 = (undefined4)local_98;
    uStack_114 = local_98._4_4_;
    uStack_110 = uStack_90;
    uStack_10c = uStack_8c;
    local_100 = 0;
    local_f8 = 0;
    FUN_140a5aaa0(&local_100,&local_80);
    FUN_146ad4b16(uVar2,&local_118);
    local_148 = *(undefined8 *)(param_1 + 0x3a8);
    uStack_140 = *(undefined8 *)(param_1 + 0x3b0);
    local_138 = 1;
    local_130 = 0;
    uStack_128 = 0;
    FUN_146ad4c80(*(undefined8 *)(param_1 + 1000));
    FUN_1449db362(&local_80);
    FUN_1449db362(&local_60);
  }
  if ((local_50 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477456d2 FUN_1477456d2 body=224 status=ok
// SIG undefined FUN_1477456d2(void)

longlong *
FUN_1477456d2(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14a5421e0;
  *(undefined4 *)(puVar3 + 1) = *param_4;
  *(undefined1 *)((longlong)puVar3 + 0xc) = *(undefined1 *)(param_4 + 1);
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[2] = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)(param_4 + 2) = 0;
  *(undefined4 *)(puVar3 + 3) = param_4[4];
  param_4[4] = 0;
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
  puVar3[4] = lVar5;
  *puVar3 = &PTR_FUN_14a542170;
  puVar3[5] = 0;
  FUN_14485c47a(puVar3 + 5,param_2);
  *(undefined4 *)(puVar3 + 7) = uVar1;
  puVar3[6] = uVar2;
  return param_1;
}



// FUNCTION 1477457b2 FUN_1477457b2 body=96 status=ok
// SIG undefined FUN_1477457b2(void)

undefined4 * FUN_1477457b2(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  plVar1 = (longlong *)(param_3 + 2);
  if ((param_3[4] != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
    if (cVar2 != '\0') {
      if (param_3[4] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)*plVar1;
      }
      uVar4 = (**(code **)(*plVar3 + 0x58))();
      *param_3 = uVar4;
    }
  }
  *param_2 = *param_3;
  *(undefined1 *)(param_2 + 1) = 1;
  FUN_1449db362(plVar1);
  return param_2;
}



// FUNCTION 147745812 FUN_147745812 body=54 status=ok
// SIG undefined FUN_147745812(void)

void FUN_147745812(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x1a0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_147790894();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14774586a FUN_14774586a body=156 status=ok
// SIG undefined FUN_14774586a(void)

void FUN_14774586a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147745908(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147745908 FUN_147745908 body=77 status=ok
// SIG undefined FUN_147745908(void)

void FUN_147745908(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 400) = param_2;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1477908a0(*(longlong *)(param_1 + 0x1a0),param_2);
    return;
  }
  return;
}



// FUNCTION 147745956 FUN_147745956 body=277 status=ok
// SIG undefined FUN_147745956(void)

void FUN_147745956(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  iVar1 = 1;
  if (1 < local_20) {
    iVar1 = local_20;
  }
  *(undefined4 *)(param_1 + 0x184) = local_1c;
  *(int *)(param_1 + 0x188) = iVar1;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_147790974();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147745a70 FUN_147745a70 body=177 status=ok
// SIG undefined FUN_147745a70(void)

void FUN_147745a70(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(bool *)(param_1 + 0x180) = local_1c != 0;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1477907ce(*(longlong *)(param_1 + 0x1a0),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147745b22 FUN_147745b22 body=172 status=ok
// SIG undefined FUN_147745b22(void)

void FUN_147745b22(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(undefined8 *)(param_1 + 0x198) = local_20;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_14779094a();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147745c72 FUN_147745c72 body=155 status=ok
// SIG undefined FUN_147745c72(void)

void FUN_147745c72(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') && (iVar4 = *(int *)(param_1 + 0x170), 0 < iVar4)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar5 * 8);
      if ((plVar3 != (longlong *)0x0) && (plVar3[6] != 0)) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,1);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1a8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1a8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147745d09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147745d0e FUN_147745d0e body=187 status=ok
// SIG undefined FUN_147745d0e(void)

longlong FUN_147745d0e(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1c4) = 0;
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  *(undefined8 *)(param_1 + 0x1bc) = 0x100000000;
  *(undefined2 *)(param_1 + 0x1b8) = 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147745dca FUN_147745dca body=115 status=ok
// SIG undefined FUN_147745dca(void)

longlong * FUN_147745dca(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14333a45c(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 147745e3e FUN_147745e3e body=64 status=ok
// SIG undefined FUN_147745e3e(void)

void FUN_147745e3e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 147745e7e FUN_147745e7e body=119 status=ok
// SIG undefined FUN_147745e7e(void)

void FUN_147745e7e(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1412719b8();
  if (param_1[0x34] != 0) {
    FUN_1477907ce(param_1[0x34],(char)param_1[0x30]);
    FUN_1477908a0(param_1[0x34],param_1[0x32]);
    FUN_14779094a(param_1[0x34],param_1[0x33]);
    lVar1 = param_1[0x34];
    uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_147790952(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 147745ef6 FUN_147745ef6 body=211 status=ok
// SIG undefined FUN_147745ef6(void)

void FUN_147745ef6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined1 local_29;
  code *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x1a0);
  if (lVar3 != 0) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      local_40 = DAT_14c98dec8;
      local_38 = DAT_14c98ded0;
      if (DAT_14c98ded0 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
        UNLOCK();
      }
    }
    else {
      local_20 = &local_29;
      local_28 = FUN_143336ee2;
      FUN_1407616b4(*(longlong *)(param_2 + 0x30),&local_40);
    }
    FUN_1477907e2(lVar3,&local_40);
    plVar4 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147746010 FUN_147746010 body=193 status=ok
// SIG undefined FUN_147746010(void)

void FUN_147746010(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_1477460d2(param_1,&local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477460d2 FUN_1477460d2 body=193 status=ok
// SIG undefined FUN_1477460d2(void)

longlong FUN_1477460d2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x788);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x780);
    lVar7 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar7);
      lVar6 = *param_2;
      if ((lVar6 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar6);
LAB_147746153:
        lVar4 = FUN_145893162();
        bVar5 = DAT_14c950c29;
        if ((lVar4 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar4 + 0x38))) goto LAB_147746123;
        if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30) {
          lVar6 = 0;
        }
      }
      else {
        if (lVar6 != 0) goto LAB_147746153;
LAB_147746123:
        lVar6 = 0;
      }
      lVar4 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        return lVar3;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  return 0;
}


