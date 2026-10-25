// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1490f4c8e FUN_1490f4c8e body=77 status=ok
// SIG undefined FUN_1490f4c8e(void)

void FUN_1490f4c8e(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x98] = 0;
  return;
}



// FUNCTION 1490f4cdc FUN_1490f4cdc body=401 status=ok
// SIG undefined FUN_1490f4cdc(void)

undefined1 * FUN_1490f4cdc(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1490f4ef6();
  param_1[1] = param_2[1];
  *param_1 = *param_2;
  param_1[0x98] = 0;
  plVar1 = (longlong *)(param_1 + 0x28);
  uVar3 = *(uint *)(param_2 + 0x30);
  if ((longlong)(int)uVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar4 + uVar3;
    if ((uint)(*(int *)(param_1 + 0x34) - iVar4) < uVar3) {
      FUN_1447403be(plVar1,iVar4);
    }
    memcpy((void *)((longlong)iVar4 + *plVar1),*(void **)(param_2 + 0x28),(longlong)(int)uVar3);
  }
  FUN_1490f4fb8(param_1 + 8,param_2 + 8);
  FUN_1490f5020(param_1 + 0x18,param_2 + 0x18);
  FUN_1490f5080(param_1 + 0x38,param_2 + 0x38);
  FUN_1490f50de(param_1);
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar6 = 4;
    uVar8 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 8);
      if (*(char *)(lVar5 + 0x1d + lVar6) == '\x01') {
        cVar2 = *(char *)(lVar5 + 0x1c + lVar6);
        puVar7 = (undefined8 *)(*plVar1 + (longlong)*(int *)(lVar5 + lVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        if (cVar2 == '\x01') {
          local_78 = 0;
          uStack_70 = 0;
          FUN_1490f532a((longlong)*(int *)(lVar5 + lVar6) + *plVar1,&local_78);
          FUN_1459ab2e7(local_78,uStack_70 & 0xffffffff);
          if (local_78 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar4 = *(int *)(lVar5 + lVar6);
          lVar5 = *plVar1;
          if (*(longlong *)(lVar5 + iVar4) != 0) {
            FUN_1400020a8();
          }
          puVar7 = (undefined8 *)(lVar5 + iVar4);
          *puVar7 = 0;
          puVar7[1] = 0;
        }
      }
      FUN_1490f537a(param_1,uVar8 & 0xffffffff);
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x24;
    } while ((longlong)uVar8 < (longlong)*(int *)(param_1 + 0x10));
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f4e6e FUN_1490f4e6e body=135 status=ok
// SIG undefined FUN_1490f4e6e(void)

void FUN_1490f4e6e(longlong param_1)

{
  FUN_1490f4ef6();
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1491546a6(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490f4ef6 FUN_1490f4ef6 body=193 status=ok
// SIG undefined FUN_1490f4ef6(void)

void FUN_1490f4ef6(longlong param_1)

{
  int iVar1;
  
  if ((0 < *(int *)(param_1 + 0x30)) && (0 < *(int *)(param_1 + 0x10))) {
    iVar1 = 0;
    do {
      FUN_1490f555c(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) < 0) {
    FUN_144893a1c(param_1 + 0x28,0);
  }
  if (*(int *)(param_1 + 0x14) < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_149154cfc(param_1 + 8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  FUN_1491546a6(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x24) != 0)) {
    FUN_149154d6c(param_1 + 0x18,0);
  }
  if (*(int *)(param_1 + 0x44) < 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_140b3dcb0(param_1 + 0x38,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  FUN_14005eae2(param_1 + 0x48);
  return;
}



// FUNCTION 1490f4fb8 FUN_1490f4fb8 body=104 status=ok
// SIG undefined FUN_1490f4fb8(void)

void FUN_1490f4fb8(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1491546e0(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x24 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x24)
    ;
    return;
  }
  return;
}



// FUNCTION 1490f5020 FUN_1490f5020 body=95 status=ok
// SIG undefined FUN_1490f5020(void)

void FUN_1490f5020(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1491547a4(param_1,iVar2);
  }
  FUN_149154774((longlong)iVar2 * 0x48 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1490f5080 FUN_1490f5080 body=94 status=ok
// SIG undefined FUN_1490f5080(void)

void FUN_1490f5080(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_140c48848(param_1,iVar2);
  }
  FUN_1470d0f4e((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1490f50de FUN_1490f50de body=587 status=ok
// SIG undefined FUN_1490f50de(void)

void FUN_1490f50de(char *param_1)

{
  longlong *plVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  void *_Dst;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_64;
  longlong local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < *(int *)(param_1 + 0x10)) {
    plVar1 = (longlong *)(param_1 + 0x28);
    lVar8 = 0;
    iVar6 = 0;
    do {
      pcVar2 = (char *)(*(longlong *)(param_1 + 8) + lVar8 * 0x24);
      uVar9 = *(int *)(pcVar2 + 4) + iVar6;
      *(uint *)(pcVar2 + 4) = uVar9;
      iVar4 = 8;
      local_70 = lVar8;
      if (pcVar2[0x21] == '\0') {
        iVar4 = 8;
        if ((byte)(*pcVar2 - 1U) < 2) {
LAB_1490f523d:
          if (*(short *)(pcVar2 + 10) != 0) goto LAB_1490f513f;
        }
        else {
          lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x1c + lVar8 * 0x24);
          iVar4 = 4;
          if ((((lVar8 == -1) ||
               (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar8 * 8), lVar8 == 0)) ||
              (lVar8 = *(longlong *)(lVar8 + 0xb8), lVar8 == 0)) ||
             (iVar4 = *(int *)(lVar8 + 0xc), iVar4 != 0)) goto LAB_1490f523d;
        }
      }
      else {
LAB_1490f513f:
        if ((-1 < (int)uVar9) &&
           (iVar7 = *(int *)(param_1 + 0x30) - uVar9,
           iVar7 != 0 && (int)uVar9 <= *(int *)(param_1 + 0x30))) {
          lVar8 = *plVar1;
          uVar5 = (ulonglong)uVar9 + lVar8;
          bVar3 = pcVar2[0xe];
          uVar12 = (ulonglong)bVar3;
          if (bVar3 == 0) {
LAB_1490f51bb:
            uVar12 = 0;
          }
          else if (((longlong)iVar4 - 1U & uVar5) != 0) {
            _Dst = (void *)(lVar8 + (int)(uVar9 - bVar3));
            memmove(_Dst,(void *)((longlong)_Dst + uVar12),(longlong)iVar7);
            *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (uint)bVar3;
            FUN_140b3f66e(plVar1);
            iVar6 = iVar6 - (uint)(byte)pcVar2[0xe];
            uVar9 = *(int *)(pcVar2 + 4) - (uint)(byte)pcVar2[0xe];
            *(uint *)(pcVar2 + 4) = uVar9;
            pcVar2[0xe] = '\0';
            lVar8 = *(longlong *)(param_1 + 0x28);
            uVar5 = (int)uVar9 + lVar8;
            goto LAB_1490f51bb;
          }
          while (((longlong)iVar4 - 1U & uVar5) != 0) {
            iVar7 = *(int *)(param_1 + 0x30);
            *(int *)(param_1 + 0x30) = iVar7 + 1;
            if (*(int *)(param_1 + 0x34) == iVar7) {
              FUN_1447403be(plVar1,iVar7);
              lVar8 = *plVar1;
            }
            iVar10 = uVar9 - (int)uVar12;
            lVar11 = (longlong)iVar10;
            memmove((void *)(lVar8 + lVar11 + 1),(void *)(lVar8 + lVar11),
                    (ulonglong)(uint)(iVar7 - iVar10));
            *(undefined1 *)(*plVar1 + lVar11) = 0;
            uVar12 = (ulonglong)(byte)(pcVar2[0xe] + 1U);
            pcVar2[0xe] = pcVar2[0xe] + 1U;
            uVar9 = *(int *)(pcVar2 + 4) + 1;
            *(uint *)(pcVar2 + 4) = uVar9;
            iVar6 = iVar6 + 1;
            lVar8 = *plVar1;
            uVar5 = (int)uVar9 + lVar8;
          }
        }
      }
      lVar8 = local_70 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x10));
  }
  if (*param_1 != '\0') {
    FUN_14005eae2(param_1 + 0x48);
    local_64 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        local_60 = *(longlong *)(param_1 + 8) + (longlong)local_64 * 0x24 + 0x14;
        local_58 = &local_64;
        FUN_140171856(param_1 + 0x48,local_4c,&local_60,0);
        local_64 = local_64 + 1;
      } while (local_64 < *(int *)(param_1 + 0x10));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490f532a FUN_1490f532a body=80 status=ok
// SIG undefined FUN_1490f532a(void)

longlong * FUN_1490f532a(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1459ab2e7(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1490f537a FUN_1490f537a body=385 status=ok
// SIG undefined FUN_1490f537a(void)

void FUN_1490f537a(longlong param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  byte bVar7;
  longlong lVar8;
  longlong *_Dst;
  
  lVar8 = (longlong)param_2;
  uVar3 = *(ushort *)(*(longlong *)(param_1 + 8) + 10 + lVar8 * 0x24);
  if (uVar3 != 0) {
    pcVar1 = (char *)(*(longlong *)(param_1 + 8) + lVar8 * 0x24);
    bVar7 = pcVar1[0x21];
    if ((*pcVar1 != '\0') || ((bVar7 & 1) != 0)) {
      iVar6 = (uint)*(ushort *)(pcVar1 + 0xc) * (uint)uVar3;
      _Dst = (longlong *)((longlong)*(int *)(pcVar1 + 4) + *(longlong *)(param_1 + 0x28));
      if ((bVar7 & 1) != 0) {
        iVar4 = (int)_Dst[1];
        if (pcVar1[0x20] == '\0') {
          uVar3 = *(ushort *)(pcVar1 + 8);
          iVar6 = iVar4 / (int)(uint)uVar3;
          if (iVar6 == 0) {
            *(uint *)(_Dst + 1) = iVar4 + (uint)uVar3;
            if ((uint)(*(int *)((longlong)_Dst + 0xc) - iVar4) < (uint)uVar3) {
              FUN_1447403be(_Dst);
            }
            memset((void *)((longlong)iVar4 + *_Dst),0,(ulonglong)uVar3);
            bVar7 = pcVar1[0x21];
            iVar6 = 1;
          }
        }
        else if (iVar4 < 1) {
          return;
        }
        _Dst = (longlong *)*_Dst;
      }
      if (((bVar7 & 1) != 0) && (pcVar1[0x20] == '\x01')) {
        iVar6 = (int)_Dst[1] / (int)(uint)*(ushort *)(pcVar1 + 8);
        _Dst = (longlong *)*_Dst;
      }
      cVar2 = *pcVar1;
      if (cVar2 == '\x02') {
        memset(_Dst,0,(longlong)iVar6 << 3);
        return;
      }
      if (cVar2 == '\x03') {
        lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x1c + lVar8 * 0x24);
        if (((lVar8 != -1) &&
            (plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x38) + lVar8 * 8),
            plVar5 != (longlong *)0x0)) &&
           ((-*(int *)((longlong)plVar5 + 0x5c) &
            ((int)plVar5[0xb] + *(int *)((longlong)plVar5 + 0x5c)) - 1U) ==
            (uint)*(ushort *)(pcVar1 + 8))) {
                    /* WARNING: Could not recover jumptable at 0x0001490f54a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x2e8))(plVar5,_Dst,iVar6,*(code **)(*plVar5 + 0x2e8));
          return;
        }
      }
      else if (cVar2 == '\x01') {
        FUN_1490f57cd(_Dst,iVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1490f54fc FUN_1490f54fc body=96 status=ok
// SIG undefined FUN_1490f54fc(void)

void FUN_1490f54fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39130);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e39130);
  if ((((1 < iVar1) && ((*(byte *)(param_2 + 5) & 4) == 0)) && ((*(byte *)(param_2 + 5) & 1) != 0))
     && ((*(byte *)((longlong)param_2 + 0x2b) & 10) == 0)) {
    FUN_14446e048(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1490f555c FUN_1490f555c body=448 status=ok
// SIG undefined FUN_1490f555c(void)

void FUN_1490f555c(longlong param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *_Dst;
  longlong *plVar9;
  undefined8 *puVar10;
  size_t _Size;
  
  lVar8 = *(longlong *)(param_1 + 8);
  lVar6 = (longlong)param_2;
  uVar4 = *(ushort *)(lVar8 + 10 + lVar6 * 0x24);
  if (uVar4 == 0) {
    return;
  }
  pcVar1 = (char *)(lVar8 + lVar6 * 0x24);
  cVar2 = *pcVar1;
  bVar3 = pcVar1[0x21];
  if ((cVar2 == '\0') && ((bVar3 & 1) == 0)) {
    return;
  }
  _Dst = (longlong *)((longlong)*(int *)(pcVar1 + 4) + *(longlong *)(param_1 + 0x28));
  if ((bVar3 & 1) == 0) {
    uVar7 = (ulonglong)((uint)*(ushort *)(pcVar1 + 0xc) * (uint)uVar4);
    plVar9 = _Dst;
  }
  else if (pcVar1[0x20] == '\x01') {
    if ((int)_Dst[1] < 1) goto LAB_1490f5639;
    plVar9 = (longlong *)*_Dst;
    uVar7 = (longlong)*(int *)(plVar9 + 1) / (longlong)(int)(uint)*(ushort *)(pcVar1 + 8) &
            0xffffffff;
    _Dst = (longlong *)*plVar9;
  }
  else {
    uVar7 = (longlong)(int)_Dst[1] / (longlong)(int)(uint)*(ushort *)(pcVar1 + 8) & 0xffffffff;
    _Dst = (longlong *)*_Dst;
    plVar9 = _Dst;
  }
  if (cVar2 == '\x02') {
    _Size = (longlong)(int)uVar7 << 3;
LAB_1490f5608:
    memset(_Dst,0,_Size);
  }
  else if (cVar2 == '\x03') {
    lVar8 = (longlong)*(int *)(lVar8 + 0x1c + lVar6 * 0x24);
    if (((lVar8 == -1) ||
        (plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x38) + lVar8 * 8),
        plVar5 == (longlong *)0x0)) ||
       ((-*(int *)((longlong)plVar5 + 0x5c) &
        ((int)plVar5[0xb] + *(int *)((longlong)plVar5 + 0x5c)) - 1U) !=
        (uint)*(ushort *)(pcVar1 + 8))) {
      _Size = (longlong)(int)uVar7 * (ulonglong)*(ushort *)(pcVar1 + 8);
      goto LAB_1490f5608;
    }
    (**(code **)(*plVar5 + 0x2f0))(plVar5,_Dst,uVar7);
  }
  else if (cVar2 == '\x01') {
    FUN_1490f5829(_Dst,uVar7);
  }
  else if ((bVar3 & 1) == 0) {
    return;
  }
  if (((pcVar1[0x21] == '\x01') && (pcVar1[0x20] == '\x01')) &&
     (*(undefined4 *)(plVar9 + 1) = 0, *(int *)((longlong)plVar9 + 0xc) != 0)) {
    FUN_144893a1c(plVar9,0);
  }
  bVar3 = pcVar1[0x21];
LAB_1490f5639:
  if ((bVar3 & 1) != 0) {
    puVar10 = (undefined8 *)((longlong)*(int *)(pcVar1 + 4) + *(longlong *)(param_1 + 0x28));
    if (pcVar1[0x20] == '\x01') {
      FUN_1459ab2e7(*puVar10,*(undefined4 *)(puVar10 + 1));
      *(undefined4 *)(puVar10 + 1) = 0;
      if (*(int *)((longlong)puVar10 + 0xc) != 0) {
        FUN_146b27f1e(puVar10,0);
        return;
      }
    }
    else {
      *(undefined4 *)(puVar10 + 1) = 0;
      if (*(int *)((longlong)puVar10 + 0xc) != 0) {
        FUN_144893a1c(puVar10,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1490f571c FUN_1490f571c body=119 status=ok
// SIG undefined FUN_1490f571c(void)

void FUN_1490f571c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146b28064(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_147402efc(param_1,param_2,iVar1 - param_2);
  FUN_147402f5c(param_1);
  return;
}



// FUNCTION 1490f5794 FUN_1490f5794 body=57 status=ok
// SIG undefined FUN_1490f5794(void)

void FUN_1490f5794(undefined8 *param_1,int param_2)

{
  FUN_1491546a6(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_149154d6c(param_1,param_2);
  return;
}



// FUNCTION 1490f57cd FUN_1490f57cd body=92 status=ok
// SIG undefined FUN_1490f57cd(void)

void FUN_1490f57cd(void *param_1,uint param_2)

{
  longlong lVar1;
  
  memset(param_1,0,(longlong)(int)param_2 << 4);
  if (0 < (int)param_2) {
    lVar1 = 0;
    do {
      if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)((longlong)param_1 + lVar1) = 0;
      ((undefined8 *)((longlong)param_1 + lVar1))[1] = 0;
      lVar1 = lVar1 + 0x10;
    } while ((ulonglong)param_2 << 4 != lVar1);
  }
  return;
}



// FUNCTION 1490f5829 FUN_1490f5829 body=73 status=ok
// SIG undefined FUN_1490f5829(void)

void FUN_1490f5829(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (0 < (int)param_2) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + lVar1) = 0;
      ((undefined8 *)(param_1 + lVar1))[1] = 0;
      lVar1 = lVar1 + 0x10;
    } while ((ulonglong)param_2 << 4 != lVar1);
  }
  return;
}



// FUNCTION 1490f5886 FUN_1490f5886 body=565 status=ok
// SIG undefined FUN_1490f5886(void)

void FUN_1490f5886(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    FUN_1400021e4(param_1 + 1,&local_38);
    FUN_14021219d(param_2,&local_38);
  }
  else {
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    FUN_14021219d(param_2,&local_38);
    puVar2 = local_38;
    if ((int)uStack_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_40,puVar2,1);
    *(undefined8 *)(param_1 + 1) = local_40;
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 3,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    param_1[3] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 4,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    param_1[4] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 5,2);
    }
    else {
      FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 5) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  puVar3 = (undefined2 *)((longlong)param_1 + 0x16);
  puVar2 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar3,2);
    }
    else {
      FUN_1457251a8(param_2,puVar3);
    }
  }
  else {
    *puVar3 = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490f5abc FUN_1490f5abc body=73 status=ok
// SIG undefined FUN_1490f5abc(void)

void FUN_1490f5abc(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  if (*(int *)((longlong)param_1 + 0x14) != -1) {
    FUN_1490daaa2(*param_1,param_2,param_1 + 1);
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[4];
  plVar2 = param_1 + 8;
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[6];
  }
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001490f5b02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 1490f5b06 FUN_1490f5b06 body=168 status=ok
// SIG undefined FUN_1490f5b06(void)

undefined8 FUN_1490f5b06(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_3;
  cVar1 = FUN_144729dda(param_2 + 0xb8);
  iVar4 = 0;
  if ((cVar1 != '\0') && (iVar4 = 0, *(longlong *)(param_2 + 0xc0) != 0)) {
    iVar4 = *(int *)(*(longlong *)(param_2 + 0xc0) + 0x1c);
  }
  local_30 = 0xffffffff;
  piVar2 = (int *)FUN_14726b53a((longlong)*(int *)(param_1 + 8) * 0x50 +
                                *(longlong *)(param_2 + 0x208),param_3,&local_2c);
  uVar3 = 1;
  if (iVar4 != *piVar2) {
    uVar3 = FUN_1490f5abc(param_1,param_2);
    *piVar2 = iVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f5bb0 FUN_1490f5bb0 body=302 status=ok
// SIG undefined FUN_1490f5bb0(void)

undefined8 * FUN_1490f5bb0(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_2,&local_38);
  FUN_1490f5ce0(&local_38);
  FUN_1400021e4(param_2,&local_48);
  if (local_30 == local_40) {
    bVar8 = true;
    if (1 < local_30) {
      lVar6 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)local_38 + lVar6);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)(local_48 + lVar6);
        uVar7 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1490f5c34;
          }
          iVar4 = uVar3 - uVar7;
          goto LAB_1490f5cd8;
        }
        if (uVar1 == 0) break;
LAB_1490f5c34:
        lVar6 = lVar6 + 2;
      }
      iVar4 = 0;
LAB_1490f5cd8:
      bVar8 = iVar4 == 0;
    }
  }
  else {
    bVar8 = local_40 + local_30 == 1;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (bVar8) {
    *param_1 = *param_2;
  }
  else {
    puVar5 = local_38;
    if (local_30 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1446f470e(param_1,puVar5,1);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490f5ce0 FUN_1490f5ce0 body=129 status=ok
// SIG undefined FUN_1490f5ce0(void)

void FUN_1490f5ce0(longlong *param_1)

{
  wint_t _C;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if ((int)param_1[1] - 2U < 0x7fffffff) {
    lVar3 = 0;
    do {
      lVar1 = *param_1;
      iVar2 = iswalpha(*(wint_t *)(lVar1 + lVar3 * 2));
      if (((iVar2 == 0) && (_C = *(wint_t *)(lVar1 + lVar3 * 2), _C != 0x5f)) &&
         ((lVar3 == 0 || (iVar2 = iswdigit(_C), iVar2 == 0)))) {
        *(undefined2 *)(lVar1 + lVar3 * 2) = 0x5f;
      }
      lVar3 = lVar3 + 1;
      iVar2 = (int)param_1[1] + -1;
      if ((int)param_1[1] == 0) {
        iVar2 = 0;
      }
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 1490f5d62 FUN_1490f5d62 body=229 status=ok
// SIG undefined FUN_1490f5d62(void)

undefined8 * FUN_1490f5d62(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  *param_2 = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar2,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar2 * 2);
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar6 = 0;
    do {
      cVar1 = *(char *)(lVar3 + lVar6);
      if (cVar1 == '\x03') {
        pwVar4 = L"TMap<";
        uVar5 = 5;
LAB_1490f5dfe:
        FUN_140c540b4(param_2,pwVar4,uVar5,1);
        FUN_140b127b8(param_2,&DAT_149e06342,1,1);
      }
      else if (cVar1 == '\x01') {
        pwVar4 = L"TArray<";
        uVar5 = 7;
        goto LAB_1490f5dfe;
      }
      lVar6 = lVar6 + 1;
    } while (iVar2 != lVar6);
  }
  return param_2;
}



// FUNCTION 1490f5e48 FUN_1490f5e48 body=209 status=ok
// SIG undefined FUN_1490f5e48(void)

void FUN_1490f5e48(longlong param_1)

{
  int iVar1;
  
  FUN_146891ab0();
  *(undefined4 *)(param_1 + 0x288) = 0;
  if (*(int *)(param_1 + 0x264) < 0) {
    *(undefined4 *)(param_1 + 0x260) = 0;
    FUN_14690032e(param_1 + 600,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x260) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x274);
  FUN_1401f9f1c(*(undefined8 *)(param_1 + 0x268),*(undefined4 *)(param_1 + 0x270));
  *(undefined4 *)(param_1 + 0x270) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x274) != 0)) {
    FUN_1490ef402(param_1 + 0x268,0);
  }
  iVar1 = *(int *)(param_1 + 0x284);
  FUN_1401f9edd(*(undefined8 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x280));
  *(undefined4 *)(param_1 + 0x280) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x284) != 0)) {
    FUN_1458149c4(param_1 + 0x278,0);
    return;
  }
  return;
}



// FUNCTION 1490f5f19 FUN_1490f5f19 body=183 status=ok
// SIG undefined FUN_1490f5f19(void)

undefined8 FUN_1490f5f19(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b9e832();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f5fd2 FUN_1490f5fd2 body=14 status=ok
// SIG undefined FUN_1490f5fd2(void)

undefined8 * FUN_1490f5fd2(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1490f5fe0 FUN_1490f5fe0 body=32 status=ok
// SIG undefined FUN_1490f5fe0(void)

undefined8 * FUN_1490f5fe0(undefined8 *param_1,undefined1 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 1490f6000 FUN_1490f6000 body=56 status=ok
// SIG undefined FUN_1490f6000(void)

undefined8 *
FUN_1490f6000(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1444720d8(0,param_3,param_4);
  return param_1;
}



// FUNCTION 1490f6038 FUN_1490f6038 body=513 status=ok
// SIG undefined FUN_1490f6038(void)

longlong * FUN_1490f6038(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 auStack_818 [32];
  undefined2 *local_7f8;
  int local_7f0;
  undefined1 local_7e1;
  undefined2 local_7e0;
  char local_7de;
  undefined1 local_7d8 [32];
  undefined1 local_7b8 [1912];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_818;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  local_7e1 = 0;
  local_7e0 = 0;
  local_7de = '\0';
  cVar5 = FUN_1490f6634(param_2);
  uVar4 = local_7e1;
  if (cVar5 != '\0') {
    plVar1 = param_1 + 1;
    lVar2 = *param_2;
    lVar3 = param_2[4];
    bVar6 = lVar3 != 0 & DAT_14c950c29;
    if (local_7de == '\0') {
      if (bVar6 != 0) {
        FUN_1456cec3c(lVar3);
      }
      if ((lVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(lVar3);
      }
      *param_1 = lVar3;
      *plVar1 = 0;
      param_1[2] = 0;
      param_1[3] = lVar2;
      *(undefined1 *)(param_1 + 4) = uVar4;
      *(undefined2 *)((longlong)param_1 + 0x21) = 0;
      *(undefined1 *)((longlong)param_1 + 0x23) = 0;
    }
    else {
      if (bVar6 != 0) {
        FUN_1456cec3c(lVar3);
      }
      if ((lVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(lVar3);
      }
      *param_1 = lVar3;
      *plVar1 = 0;
      param_1[2] = 0;
      param_1[3] = lVar2;
      *(undefined1 *)(param_1 + 4) = uVar4;
      *(char *)((longlong)param_1 + 0x23) = local_7de;
      *(undefined2 *)((longlong)param_1 + 0x21) = local_7e0;
    }
    param_1[5] = 0;
    FUN_1400021e4(param_2,&local_7f8);
    thunk_FUN_144b46480(local_7b8);
    iVar7 = local_7f0 + -1;
    if (local_7f0 == 0) {
      iVar7 = 0;
    }
    puVar10 = &DAT_149dfb77a;
    puVar9 = &DAT_149dfb77a;
    if (local_7f0 != 0) {
      puVar9 = local_7f8;
    }
    thunk_FUN_144b47410(local_7b8,puVar9,(longlong)iVar7);
    iVar7 = (int)param_2[3];
    iVar8 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar8 = 0;
    }
    if (iVar7 != 0) {
      puVar10 = (undefined2 *)param_2[2];
    }
    thunk_FUN_144b47410(local_7b8,puVar10,(longlong)iVar8);
    FUN_140bc0dba(local_7b8,local_7d8);
    FUN_14681237e(plVar1,local_7d8);
    if (local_7f8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_818) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f623a FUN_1490f623a body=496 status=ok
// SIG undefined FUN_1490f623a(void)

int FUN_1490f623a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar7 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar7);
        if (plVar3 == (longlong *)0x0) {
          local_80 = 0;
        }
        else {
          local_80 = plVar3[4];
        }
        FUN_1400021e4(&local_80,&local_78);
        iVar6 = (int)uStack_70 + -1;
        puVar4 = local_78;
        if ((int)uStack_70 == 0) {
          iVar6 = 0;
          puVar4 = &DAT_149dfb77a;
        }
        uVar5 = FUN_144a49b4a(iVar6,puVar4);
        uVar5 = FUN_144a78877(*(undefined4 *)(param_1 + 0x48),uVar5);
        *(undefined4 *)(param_1 + 0x48) = uVar5;
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        (**(code **)(*plVar3 + 0x70))(plVar3,&local_78,0,0);
        iVar6 = (int)uStack_70 + -1;
        puVar4 = local_78;
        if ((int)uStack_70 == 0) {
          iVar6 = 0;
          puVar4 = &DAT_149dfb77a;
        }
        uVar5 = FUN_144a49b4a(iVar6,puVar4);
        uVar5 = FUN_144a78877(*(undefined4 *)(param_1 + 0x48),uVar5);
        *(undefined4 *)(param_1 + 0x48) = uVar5;
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
    if ((*(char *)(param_1 + 0x10) == '\x01') &&
       (iVar1 = *(int *)(param_1 + 0x30), (longlong)iVar1 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar7 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar7);
        local_78 = (undefined2 *)0x0;
        uStack_70 = 0;
        local_98 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_90 = 0;
        (**(code **)(*plVar3 + 0xf0))(plVar3,&local_78,*(undefined8 *)(param_1 + 8),1);
        iVar6 = (int)uStack_70 + -1;
        puVar4 = local_78;
        if ((int)uStack_70 == 0) {
          iVar6 = 0;
          puVar4 = &DAT_149dfb77a;
        }
        uVar5 = FUN_144a49b4a(iVar6,puVar4);
        uVar5 = FUN_144a78877(*(undefined4 *)(param_1 + 0x48),uVar5);
        *(undefined4 *)(param_1 + 0x48) = uVar5;
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
    iVar1 = *(int *)(param_1 + 0x48);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f642c FUN_1490f642c body=519 status=ok
// SIG undefined FUN_1490f642c(void)

bool FUN_1490f642c(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined ***local_88;
  undefined **local_80;
  undefined2 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined2 *local_68;
  int local_60;
  undefined **local_58;
  undefined2 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 8);
  lVar4 = (longlong)*(int *)((longlong)plVar1 + 0x44) + *(longlong *)(param_1 + 8);
  local_50 = 0x100;
  local_58 = &PTR_FUN_14bb018b0;
  local_48 = (local_48 >> 8 & 0xffffff) << 8;
  if (*(int *)(param_3 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  cVar2 = FUN_140d50488(plVar1,0,&local_58);
  if (puVar5 != (undefined2 *)0x0 && cVar2 == '\x01') {
    local_90 = 0x8000000;
    local_98 = 0;
    local_88 = &local_58;
    (**(code **)(*plVar1 + 0xf8))(plVar1,puVar5,lVar4,0);
  }
  if ((plVar1 != (longlong *)0x0) && (0 < local_48._4_4_)) {
    lVar6 = plVar1[1];
    lVar3 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar7 = lVar6 != 0;
      if (lVar6 != lVar3 && bVar7) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar7 = lVar6 != 0;
          if (lVar6 == lVar3) break;
        } while (lVar6 != 0);
      }
      if (!bVar7) goto LAB_1490f65cf;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_1490f65cf;
    puVar5 = &DAT_149dfb77a;
    if (*(int *)(param_3 + 1) != 0) {
      puVar5 = (undefined2 *)*param_3;
    }
    FUN_140002266(&local_68,L"(%s)",puVar5);
    local_78 = 0x100;
    local_80 = &PTR_FUN_14bb018b0;
    local_70 = local_70 & 0xffffff00;
    uStack_6c = 0;
    FUN_1468160f8(&local_58,&local_80);
    local_48 = CONCAT44(uStack_6c,local_70);
    puVar5 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar5 = local_68;
    }
    cVar2 = FUN_140d50488(plVar1,0,&local_58);
    if ((cVar2 != '\0') && (puVar5 != (undefined2 *)0x0)) {
      local_90 = 0x8000000;
      local_98 = 0;
      local_88 = &local_58;
      (**(code **)(*plVar1 + 0xf8))(plVar1,puVar5,lVar4,0);
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1490f65cf:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_48._4_4_ == 0;
}



// FUNCTION 1490f6634 FUN_1490f6634 body=759 status=ok
// SIG undefined FUN_1490f6634(void)

ulonglong FUN_1490f6634(longlong param_1,undefined1 *param_2,undefined2 *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = *(undefined2 **)(param_1 + 0x10);
  }
  FUN_140056680(&local_40,puVar5);
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  cVar2 = FUN_144a791f8(&local_40,&DAT_14bb01910,7,1);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x30);
    if (0 < (longlong)iVar1) {
      lVar4 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x28) + lVar4) == '\x01') &&
           ((ulonglong)*(byte *)(param_3 + 1) < 2)) {
          *(undefined1 *)((longlong)param_3 + (ulonglong)*(byte *)(param_3 + 1)) = 1;
          *(char *)(param_3 + 1) = *(char *)(param_3 + 1) + '\x01';
        }
        lVar4 = lVar4 + 1;
      } while (iVar1 != lVar4);
    }
    FUN_1490f5d62(param_1,&local_50);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_40 = local_50;
    local_38 = local_48;
  }
  puVar5 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar5 = local_40;
  }
  FUN_1446f470e(&local_50,puVar5,1);
  cVar2 = FUN_1403f35db(local_50,&DAT_14cc00ec8);
  uVar6 = CONCAT71((int7)((ulonglong)&local_50 >> 8),1);
  if (cVar2 == '\0') {
    cVar2 = FUN_1403f35db(local_50,&DAT_14cc00f28);
    uVar7 = 2;
    if (cVar2 == '\0') {
      cVar2 = FUN_1403f35db(local_50,&DAT_14cc00f08);
      uVar7 = 3;
      if ((cVar2 == '\0') && (cVar2 = FUN_1403f35db(local_50,&DAT_14cc00ef8), cVar2 == '\0')) {
        cVar2 = FUN_1403f35db(local_50,&DAT_14cc00f38);
        uVar7 = 0x10;
        if (cVar2 == '\0') {
          cVar2 = FUN_1403f35db(local_50,&DAT_14cc00f18);
          uVar7 = 4;
          if (cVar2 == '\0') {
            cVar2 = FUN_1403f35db(local_50,&DAT_14cc00f48);
            uVar7 = 0x11;
            if (cVar2 == '\0') {
              cVar2 = FUN_1403f35db(local_50,&DAT_14cc00ed8);
              uVar7 = 5;
              if (cVar2 == '\0') {
                cVar2 = FUN_1403f35db(local_50,&DAT_14cc00ee8);
                uVar7 = 6;
                if (cVar2 == '\0') {
                  cVar2 = FUN_1403f35db(local_50,&DAT_14cc00f58);
                  uVar7 = 7;
                  if (cVar2 == '\0') {
                    cVar2 = FUN_1403f35db(local_50,&DAT_14cc00f68);
                    uVar7 = 8;
                    if (cVar2 == '\0') {
                      cVar2 = FUN_1403f35db(local_50,&DAT_14cc00f78);
                      uVar7 = 9;
                      if (cVar2 == '\0') {
                        lVar4 = *(longlong *)(param_1 + 0x20);
                        if (lVar4 != 0) {
                          lVar3 = FUN_1446f4bba();
                          lVar4 = *(longlong *)(lVar4 + 0x10);
                          if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
                             (*(longlong *)
                               (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
                              == lVar3 + 0x30)) {
                            uVar7 = 0xb;
                            goto LAB_1490f66e3;
                          }
                          lVar4 = *(longlong *)(param_1 + 0x20);
                          if (lVar4 != 0) {
                            lVar3 = FUN_140851d9a();
                            lVar4 = *(longlong *)(lVar4 + 0x10);
                            if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
                               (*(longlong *)
                                 (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
                                 ) == lVar3 + 0x30)) {
                              uVar7 = 10;
                              goto LAB_1490f66e3;
                            }
                            uVar7 = 0xc;
                            if (*(longlong *)(param_1 + 0x20) != 0) goto LAB_1490f66e3;
                          }
                        }
                        uVar7 = 0;
                        uVar6 = 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar7 = 1;
  }
LAB_1490f66e3:
  *param_2 = uVar7;
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1490f692c FUN_1490f692c body=391 status=ok
// SIG undefined FUN_1490f692c(void)

ulonglong *
FUN_1490f692c(longlong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined1 auStack_a8 [40];
  longlong local_80 [2];
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 *local_50;
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *param_3;
  uVar6 = *param_4;
  if (uVar1 == 0) {
LAB_1490f6a0b:
    *param_2 = uVar6;
  }
  else {
    if (uVar6 == 0) {
      *param_2 = uVar1;
      goto LAB_1490f6966;
    }
    local_58 = 0xffffffff;
    local_54 = 1;
    uVar2 = FUN_144a78877(uVar1,uVar1 >> 0x20);
    local_60 = uVar2;
    local_5c = FUN_144a78877((int)*param_4,*(undefined4 *)((longlong)param_4 + 4));
    uVar3 = FUN_144a78877(local_5c,0x8b7e8277);
    uVar2 = FUN_144a78877(uVar2,uVar3);
    iVar4 = FUN_149154ddc(param_1,uVar2,&local_60);
    if (iVar4 != -1) {
      if ((*param_1 + (longlong)iVar4 * 0x20 != 0) &&
         (puVar5 = (ulonglong *)((longlong)iVar4 * 0x20 + *param_1 + 0x10),
         puVar5 != (ulonglong *)0x0)) {
        uVar6 = *puVar5;
        goto LAB_1490f6a0b;
      }
    }
    FUN_1400021e4(param_4,local_70);
    FUN_1400021e4(param_3,local_80);
    FUN_1401c7f3e(&local_50,local_80,local_70);
    puVar7 = local_50;
    if ((int)local_48 == 0) {
      puVar7 = (undefined4 *)&DAT_149dfb77a;
    }
    FUN_1446f470e(param_2,puVar7,1);
    if (local_50 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    local_50 = &local_60;
    local_48 = param_2;
    FUN_149154e4e(param_1,local_70);
  }
LAB_1490f6966:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490f6ab4 FUN_1490f6ab4 body=439 status=ok
// SIG undefined FUN_1490f6ab4(void)

longlong * FUN_1490f6ab4(longlong *param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *_Dst;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 *local_58;
  longlong *plStack_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_4 == 0) || (*param_3 == 0)) {
    *param_2 = 0;
    goto LAB_1490f6b04;
  }
  uVar2 = FUN_140180c78(param_3);
  if (param_4 < uVar2) {
    local_60 = 0xffffffff;
    local_5c = 2;
    uVar3 = FUN_144a78877((int)*param_3,*(undefined4 *)((longlong)param_3 + 4));
    local_68 = uVar3;
    local_64 = param_4;
    uVar4 = FUN_144a78877(param_4,0x60fc6ff2);
    uVar3 = FUN_144a78877(uVar3,uVar4);
    iVar5 = FUN_149154ddc(param_1,uVar3,&local_68);
    if (iVar5 != -1) {
      if ((*param_1 + (longlong)iVar5 * 0x20 != 0) &&
         (plVar7 = (longlong *)((longlong)iVar5 * 0x20 + *param_1 + 0x10), plVar7 != (longlong *)0x0
         )) {
        lVar6 = *plVar7;
        goto LAB_1490f6af8;
      }
    }
    FUN_1400021e4(param_3,&local_58);
    uVar2 = (int)plStack_50 - 1;
    if ((int)plStack_50 == 0) {
      uVar2 = 0;
    }
    if ((int)uVar2 <= (int)param_4) {
      param_4 = uVar2;
    }
    uVar9 = (ulonglong)param_4;
    if ((int)param_4 < 1) {
      uVar9 = 0;
    }
    uVar2 = uVar2 - (int)uVar9;
    if (0 < (int)uVar2) {
      iVar5 = (int)plStack_50 - (uVar2 + (int)uVar9);
      if (iVar5 != 0) {
        _Dst = (undefined2 *)(uVar9 * 2 + (longlong)local_58);
        memmove(_Dst,_Dst + uVar2,(longlong)iVar5 * 2);
      }
      plStack_50._0_4_ = (int)plStack_50 - uVar2;
    }
    puVar1 = local_58;
    puVar8 = (undefined4 *)&DAT_149dfb77a;
    if ((int)plStack_50 != 0) {
      puVar8 = local_58;
    }
    local_58 = (undefined4 *)0x0;
    plStack_50 = (longlong *)0x0;
    FUN_1446f470e(param_2,puVar8,1);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_1400020a8(puVar1);
    }
    if (local_58 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    local_58 = &local_68;
    plStack_50 = param_2;
    FUN_149154e4e(param_1,local_44);
  }
  else {
    lVar6 = *param_3;
LAB_1490f6af8:
    *param_2 = lVar6;
  }
LAB_1490f6b04:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f6c6c FUN_1490f6c6c body=426 status=ok
// SIG undefined FUN_1490f6c6c(void)

longlong * FUN_1490f6c6c(longlong *param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 *local_58;
  longlong *plStack_50;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_4 == 0) || (*param_3 == 0)) {
    *param_2 = 0;
    goto LAB_1490f6cb9;
  }
  uVar2 = FUN_140180c78(param_3);
  if (param_4 < uVar2) {
    local_60 = 0xffffffff;
    local_5c = 3;
    uVar3 = FUN_144a78877((int)*param_3,*(undefined4 *)((longlong)param_3 + 4));
    local_68 = uVar3;
    local_64 = param_4;
    uVar4 = FUN_144a78877(param_4,0x9182db53);
    uVar3 = FUN_144a78877(uVar3,uVar4);
    iVar5 = FUN_149154ddc(param_1,uVar3,&local_68);
    if (iVar5 != -1) {
      if ((*param_1 + (longlong)iVar5 * 0x20 != 0) &&
         (plVar7 = (longlong *)((longlong)iVar5 * 0x20 + *param_1 + 0x10), plVar7 != (longlong *)0x0
         )) {
        lVar6 = *plVar7;
        goto LAB_1490f6cad;
      }
    }
    FUN_1400021e4(param_3,&local_58);
    uVar2 = (int)plStack_50 - 1;
    if ((int)plStack_50 == 0) {
      uVar2 = 0;
    }
    if ((int)uVar2 <= (int)param_4) {
      param_4 = uVar2;
    }
    if ((int)param_4 < 1) {
      param_4 = 0;
    }
    uVar9 = uVar2 - param_4;
    if ((int)uVar2 <= (int)(uVar2 - param_4)) {
      uVar9 = uVar2;
    }
    if (0 < (int)uVar9) {
      if ((int)plStack_50 - uVar9 != 0) {
        memmove(local_58,(undefined2 *)((longlong)local_58 + (ulonglong)uVar9 * 2),
                (longlong)(int)((int)plStack_50 - uVar9) * 2);
      }
      plStack_50._0_4_ = (int)plStack_50 - uVar9;
    }
    puVar1 = local_58;
    puVar8 = (undefined4 *)&DAT_149dfb77a;
    if ((int)plStack_50 != 0) {
      puVar8 = local_58;
    }
    local_58 = (undefined4 *)0x0;
    plStack_50 = (longlong *)0x0;
    FUN_1446f470e(param_2,puVar8,1);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_1400020a8(puVar1);
    }
    if (local_58 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    local_58 = &local_68;
    plStack_50 = param_2;
    FUN_149154e4e(param_1,local_3c);
  }
  else {
    lVar6 = *param_3;
LAB_1490f6cad:
    *param_2 = lVar6;
  }
LAB_1490f6cb9:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f6e18 FUN_1490f6e18 body=432 status=ok
// SIG undefined FUN_1490f6e18(void)

ulonglong * FUN_1490f6e18(longlong *param_1,ulonglong *param_2,ulonglong *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined2 *_Dst;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 *local_58;
  ulonglong *puStack_50;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = *param_3;
  if (uVar7 == 0 || param_4 == 0) {
    *param_2 = uVar7;
  }
  else {
    local_60 = 0xffffffff;
    local_5c = 4;
    uVar2 = FUN_144a78877(uVar7,uVar7 >> 0x20);
    local_68 = uVar2;
    local_64 = param_4;
    uVar3 = FUN_144a78877(param_4,0x3d229a59);
    uVar2 = FUN_144a78877(uVar2,uVar3);
    iVar4 = FUN_149154ddc(param_1,uVar2,&local_68);
    if (iVar4 != -1) {
      if ((*param_1 + (longlong)iVar4 * 0x20 != 0) &&
         (puVar5 = (ulonglong *)((longlong)iVar4 * 0x20 + *param_1 + 0x10),
         puVar5 != (ulonglong *)0x0)) {
        *param_2 = *puVar5;
        goto LAB_1490f6e52;
      }
    }
    FUN_1400021e4(param_3);
    uVar9 = (int)puStack_50 - 1;
    if ((int)puStack_50 == 0) {
      uVar9 = 0;
    }
    uVar6 = uVar9 - param_4;
    if ((int)uVar9 <= (int)(uVar9 - param_4)) {
      uVar6 = uVar9;
    }
    uVar7 = (ulonglong)uVar6;
    if ((int)uVar6 < 1) {
      uVar7 = 0;
    }
    uVar9 = uVar9 - (int)uVar7;
    if ((int)param_4 < (int)uVar9) {
      uVar9 = param_4;
    }
    if (0 < (int)uVar9) {
      iVar4 = (int)puStack_50 - (uVar9 + (int)uVar7);
      if (iVar4 != 0) {
        _Dst = (undefined2 *)(uVar7 * 2 + (longlong)local_58);
        memmove(_Dst,_Dst + uVar9,(longlong)iVar4 * 2);
      }
      puStack_50._0_4_ = (int)puStack_50 - uVar9;
    }
    puVar1 = local_58;
    puVar8 = (undefined4 *)&DAT_149dfb77a;
    if ((int)puStack_50 != 0) {
      puVar8 = local_58;
    }
    local_58 = (undefined4 *)0x0;
    puStack_50 = (ulonglong *)0x0;
    FUN_1446f470e(param_2,puVar8,1);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_1400020a8(puVar1);
    }
    if (local_58 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    local_58 = &local_68;
    puStack_50 = param_2;
    FUN_149154e4e(param_1,local_3c);
  }
LAB_1490f6e52:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f6fca FUN_1490f6fca body=403 status=ok
// SIG undefined FUN_1490f6fca(void)

ulonglong * FUN_1490f6fca(longlong *param_1,ulonglong *param_2,ulonglong *param_3,uint param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 *local_58;
  ulonglong *puStack_50;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_3;
  if (uVar1 == 0 || param_4 == 0) {
    *param_2 = uVar1;
  }
  else {
    local_60 = 0xffffffff;
    local_5c = 5;
    uVar3 = FUN_144a78877(uVar1,uVar1 >> 0x20);
    local_68 = uVar3;
    local_64 = param_4;
    uVar4 = FUN_144a78877(param_4,0xf8fdcda3);
    uVar3 = FUN_144a78877(uVar3,uVar4);
    iVar5 = FUN_149154ddc(param_1,uVar3,&local_68);
    if (iVar5 != -1) {
      if ((*param_1 + (longlong)iVar5 * 0x20 != 0) &&
         (puVar6 = (ulonglong *)((longlong)iVar5 * 0x20 + *param_1 + 0x10),
         puVar6 != (ulonglong *)0x0)) {
        *param_2 = *puVar6;
        goto LAB_1490f7004;
      }
    }
    FUN_1400021e4(param_3,&local_58);
    uVar8 = (int)puStack_50 - 1;
    if ((int)puStack_50 == 0) {
      uVar8 = 0;
    }
    if ((int)param_4 < (int)uVar8) {
      uVar8 = param_4;
    }
    if (0 < (int)uVar8) {
      if ((int)puStack_50 - uVar8 != 0) {
        memmove(local_58,(undefined2 *)((longlong)local_58 + (ulonglong)uVar8 * 2),
                (longlong)(int)((int)puStack_50 - uVar8) * 2);
      }
      puStack_50._0_4_ = (int)puStack_50 - uVar8;
    }
    puVar2 = local_58;
    puVar7 = (undefined4 *)&DAT_149dfb77a;
    if ((int)puStack_50 != 0) {
      puVar7 = local_58;
    }
    local_58 = (undefined4 *)0x0;
    puStack_50 = (ulonglong *)0x0;
    FUN_1446f470e(param_2,puVar7,1);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_1400020a8(puVar2);
    }
    if (local_58 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    local_58 = &local_68;
    puStack_50 = param_2;
    FUN_149154e4e(param_1,local_3c);
  }
LAB_1490f7004:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f715e FUN_1490f715e body=608 status=ok
// SIG undefined FUN_1490f715e(void)

ulonglong *
FUN_1490f715e(longlong *param_1,ulonglong *param_2,ulonglong *param_3,longlong *param_4,
             longlong *param_5,int param_6)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined2 *local_98;
  int local_90;
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  byte local_5c;
  undefined4 *local_58;
  ulonglong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *param_3;
  if ((uVar1 == 0) || (*param_4 == 0)) {
    *param_2 = uVar1;
  }
  else {
    local_5c = param_6 == 0 ^ 7;
    uVar2 = FUN_144a78877(uVar1,uVar1 >> 0x20);
    local_68 = uVar2;
    uVar3 = FUN_144a78877((int)*param_4,*(undefined4 *)((longlong)param_4 + 4));
    local_64 = uVar3;
    local_60 = FUN_144a78877((int)*param_5,*(undefined4 *)((longlong)param_5 + 4));
    uVar4 = FUN_144a78877(local_60,param_6 == 0 ^ 7);
    uVar3 = FUN_144a78877(uVar3,uVar4);
    uVar2 = FUN_144a78877(uVar2,uVar3);
    iVar5 = FUN_149154ddc(param_1,uVar2,&local_68);
    if (iVar5 != -1) {
      if ((*param_1 + (longlong)iVar5 * 0x20 != 0) &&
         (puVar6 = (ulonglong *)((longlong)iVar5 * 0x20 + *param_1 + 0x10),
         puVar6 != (ulonglong *)0x0)) {
        *param_2 = *puVar6;
        goto LAB_1490f719d;
      }
    }
    FUN_140056680(&local_78,&DAT_149dfb77a);
    if (*param_5 != 0) {
      FUN_1400021e4(param_5,&local_58);
      puVar9 = (undefined4 *)&DAT_149dfb77a;
      if ((int)local_50 != 0) {
        puVar9 = local_58;
      }
      FUN_14020fad6(&local_78,puVar9);
      if (local_58 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1400021e4(param_3,local_88);
    puVar8 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar8 = local_78;
    }
    FUN_1400021e4(param_4,&local_98);
    puVar7 = &DAT_149dfb77a;
    if (local_90 != 0) {
      puVar7 = local_98;
    }
    local_a8 = param_6;
    FUN_1414bc8e4(local_88,&local_58,puVar7,puVar8);
    puVar9 = (undefined4 *)&DAT_149dfb77a;
    if ((int)local_50 != 0) {
      puVar9 = local_58;
    }
    FUN_1446f470e(param_2,puVar9,1);
    if (local_58 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    local_58 = &local_68;
    local_50 = param_2;
    FUN_149154e4e(param_1,local_88);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1490f719d:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f73c0 FUN_1490f73c0 body=413 status=ok
// SIG undefined FUN_1490f73c0(void)

undefined1 FUN_1490f73c0(longlong param_1,ulonglong *param_2,longlong *param_3,int param_4)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [40];
  undefined2 *local_80;
  int local_78;
  undefined1 local_69;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  byte local_5c;
  undefined4 *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *param_2;
  uVar2 = 0;
  if ((uVar1 != 0) && (*param_3 != 0)) {
    local_60 = 0xffffffff;
    local_5c = param_4 == 0 ^ 9;
    uVar3 = FUN_144a78877(uVar1,uVar1 >> 0x20);
    local_68 = uVar3;
    uVar4 = FUN_144a78877((int)*param_3,*(undefined4 *)((longlong)param_3 + 4));
    plVar9 = (longlong *)(param_1 + 0x50);
    local_64 = uVar4;
    uVar5 = FUN_144a78877(0xffffffff,param_4 == 0 ^ 9);
    uVar4 = FUN_144a78877(uVar4,uVar5);
    uVar3 = FUN_144a78877(uVar3,uVar4);
    iVar6 = FUN_149155324(plVar9,uVar3,&local_68);
    if (iVar6 != -1) {
      if ((*plVar9 + (longlong)iVar6 * 0x1c != 0) &&
         (puVar7 = (undefined1 *)((longlong)iVar6 * 0x1c + *plVar9 + 0x10),
         puVar7 != (undefined1 *)0x0)) {
        uVar2 = *puVar7;
        goto LAB_1490f73f5;
      }
    }
    FUN_1400021e4(param_2,&local_58);
    FUN_1400021e4(param_3,&local_80);
    iVar6 = local_78 + -1;
    puVar8 = local_80;
    if (local_78 == 0) {
      puVar8 = &DAT_149dfb77a;
      iVar6 = 0;
    }
    uVar2 = FUN_144a38768(&local_58,puVar8,iVar6,param_4);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    local_50 = &local_69;
    local_69 = uVar2;
    local_58 = &local_68;
    FUN_14915539c(plVar9,&local_80);
    uVar2 = local_69;
  }
LAB_1490f73f5:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f755e FUN_1490f755e body=413 status=ok
// SIG undefined FUN_1490f755e(void)

undefined1 FUN_1490f755e(longlong param_1,ulonglong *param_2,longlong *param_3,int param_4)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [40];
  undefined2 *local_80;
  int local_78;
  undefined1 local_69;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  byte local_5c;
  undefined4 *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *param_2;
  uVar2 = 0;
  if ((uVar1 != 0) && (*param_3 != 0)) {
    local_60 = 0xffffffff;
    local_5c = param_4 == 0 ^ 0xb;
    uVar3 = FUN_144a78877(uVar1,uVar1 >> 0x20);
    local_68 = uVar3;
    uVar4 = FUN_144a78877((int)*param_3,*(undefined4 *)((longlong)param_3 + 4));
    plVar9 = (longlong *)(param_1 + 0x50);
    local_64 = uVar4;
    uVar5 = FUN_144a78877(0xffffffff,param_4 == 0 ^ 0xb);
    uVar4 = FUN_144a78877(uVar4,uVar5);
    uVar3 = FUN_144a78877(uVar3,uVar4);
    iVar6 = FUN_149155324(plVar9,uVar3,&local_68);
    if (iVar6 != -1) {
      if ((*plVar9 + (longlong)iVar6 * 0x1c != 0) &&
         (puVar7 = (undefined1 *)((longlong)iVar6 * 0x1c + *plVar9 + 0x10),
         puVar7 != (undefined1 *)0x0)) {
        uVar2 = *puVar7;
        goto LAB_1490f7593;
      }
    }
    FUN_1400021e4(param_2,&local_58);
    FUN_1400021e4(param_3,&local_80);
    iVar6 = local_78 + -1;
    puVar8 = local_80;
    if (local_78 == 0) {
      puVar8 = &DAT_149dfb77a;
      iVar6 = 0;
    }
    uVar2 = FUN_144a791f8(&local_58,puVar8,iVar6,param_4);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    local_50 = &local_69;
    local_69 = uVar2;
    local_58 = &local_68;
    FUN_14915539c(plVar9,&local_80);
    uVar2 = local_69;
  }
LAB_1490f7593:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f76fc FUN_1490f76fc body=440 status=ok
// SIG undefined FUN_1490f76fc(void)

undefined1 FUN_1490f76fc(longlong param_1,ulonglong *param_2,longlong *param_3,int param_4)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  size_t sVar8;
  longlong *plVar9;
  wchar_t *_Str;
  bool bVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  wchar_t *local_80;
  int local_78;
  undefined1 local_69;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  byte local_5c;
  undefined4 *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *param_2;
  uVar2 = 0;
  if ((uVar1 != 0) && (*param_3 != 0)) {
    local_60 = 0xffffffff;
    local_5c = param_4 == 0 ^ 0xd;
    uVar3 = FUN_144a78877(uVar1,uVar1 >> 0x20);
    local_68 = uVar3;
    uVar4 = FUN_144a78877((int)*param_3,*(undefined4 *)((longlong)param_3 + 4));
    plVar9 = (longlong *)(param_1 + 0x50);
    local_64 = uVar4;
    uVar5 = FUN_144a78877(0xffffffff,param_4 == 0 ^ 0xd);
    uVar4 = FUN_144a78877(uVar4,uVar5);
    uVar3 = FUN_144a78877(uVar3,uVar4);
    iVar6 = FUN_149155324(plVar9,uVar3,&local_68);
    if (iVar6 != -1) {
      if ((*plVar9 + (longlong)iVar6 * 0x1c != 0) &&
         (puVar7 = (undefined1 *)((longlong)iVar6 * 0x1c + *plVar9 + 0x10),
         puVar7 != (undefined1 *)0x0)) {
        uVar2 = *puVar7;
        goto LAB_1490f7731;
      }
    }
    FUN_1400021e4(param_2,&local_58);
    FUN_1400021e4(param_3,&local_80);
    _Str = L"";
    if (local_78 != 0) {
      _Str = local_80;
    }
    if (_Str == (wchar_t *)0x0) {
      bVar10 = false;
    }
    else {
      sVar8 = wcslen(_Str);
      local_90 = 0xffffffff;
      local_98 = 0;
      iVar6 = FUN_1447ee042(&local_58,_Str,sVar8 & 0xffffffff,param_4);
      bVar10 = iVar6 != -1;
    }
    if (local_80 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    local_50 = &local_69;
    local_69 = bVar10;
    local_58 = &local_68;
    FUN_14915539c(plVar9,&local_80);
    uVar2 = local_69;
  }
LAB_1490f7731:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f78cc FUN_1490f78cc body=138 status=ok
// SIG undefined FUN_1490f78cc(void)

void FUN_1490f78cc(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3b4) < 0) {
    *(undefined4 *)(param_1 + 0x3b0) = 0;
    FUN_1459747b8(param_1 + 0x3a8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x3a4);
  FUN_1412dab16(*(undefined8 *)(param_1 + 0x398),*(undefined4 *)(param_1 + 0x3a0));
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x3a4) != 0)) {
    FUN_1490ef330(param_1 + 0x398,0);
  }
  FUN_1458b7d70(param_1 + 0x138);
  return;
}



// FUNCTION 1490f795e FUN_1490f795e body=130 status=ok
// SIG undefined FUN_1490f795e(void)

undefined8 * FUN_1490f795e(longlong param_1)

{
  undefined8 *puVar1;
  
  if (0 < *(int *)(*(longlong *)(param_1 + 0x1e8) + 0x10)) {
    puVar1 = (undefined8 *)FUN_1490da334();
    return puVar1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc01240) {
    FUN_144b3d300(&DAT_14cc01240);
    if (DAT_14cc01240 == -1) {
      FUN_1490d9408(&DAT_14cc01230);
      atexit((_func_5014 *)&LAB_14447237c);
      _Init_thread_footer(&DAT_14cc01240);
    }
  }
  return &DAT_14cc01230;
}



// FUNCTION 1490f79e6 FUN_1490f79e6 body=59 status=ok
// SIG undefined FUN_1490f79e6(void)

undefined8 FUN_1490f79e6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18) * 0x18;
  iVar2 = *(int *)(lVar1 + -0x18);
  if (iVar2 == 0) {
    puVar3 = (undefined8 *)(lVar1 + -8);
  }
  else {
    if ((iVar2 != 2) && (iVar2 != 1)) {
      return 0;
    }
    puVar3 = (undefined8 *)(*(longlong *)(lVar1 + -8) + 0x78);
  }
  return *puVar3;
}



// FUNCTION 1490f7a22 FUN_1490f7a22 body=32 status=ok
// SIG undefined FUN_1490f7a22(void)

undefined8 FUN_1490f7a22(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FRigVMRegistry");
  return param_2;
}



// FUNCTION 1490f7a42 FUN_1490f7a42 body=281 status=ok
// SIG undefined FUN_1490f7a42(void)

void FUN_1490f7a42(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != '\0') {
    (**(code **)(*param_2 + 0x378))(param_2,&local_40,0);
    puVar4 = local_40;
    if (local_38 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_1446f470e(local_30,puVar4,1);
    iVar1 = (**(code **)(*param_1 + 0x90))(param_1,local_30,param_2);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (iVar1 != -1) {
      (**(code **)(*param_1 + 0x170))(param_1,iVar1);
      goto LAB_1490f7b3c;
    }
  }
  (**(code **)(*param_2 + 0x378))(param_2,&local_40,0);
  iVar1 = local_38 + -1;
  puVar4 = local_40;
  if (local_38 == 0) {
    iVar1 = 0;
    puVar4 = &DAT_149dfb77a;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = (**(code **)(*param_1 + 0x180))(param_1,param_2);
  FUN_144a78877(uVar2,uVar3);
LAB_1490f7b3c:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f7b5c FUN_1490f7b5c body=287 status=ok
// SIG undefined FUN_1490f7b5c(void)

undefined4 FUN_1490f7b5c(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  lStack_40 = 0;
  FUN_1401031ac(param_2,0,&local_48);
  iVar6 = (int)lStack_40 + -1;
  puVar1 = local_48;
  if ((int)lStack_40 == 0) {
    iVar6 = 0;
    puVar1 = &DAT_149dfb77a;
  }
  uVar4 = FUN_144a49b4a(iVar6,puVar1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (param_2 == (undefined2 *)0x0) {
    lStack_40 = 0;
  }
  else {
    lStack_40 = *(longlong *)(param_2 + 0x28);
  }
  local_38 = 0xffffffff;
  local_34 = 0x101;
  local_32 = 0;
  local_48 = param_2;
  FUN_144a2daf0(&local_48);
  if (lStack_40 != 0) {
    do {
      lVar2 = lStack_40;
      cVar3 = FUN_14093e018(param_1,lStack_40);
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*param_1 + 400))(param_1,lVar2);
        uVar4 = FUN_144a78877(uVar4,uVar5);
      }
      lStack_40 = *(longlong *)(lStack_40 + 0x18);
      FUN_144a2daf0(&local_48);
    } while (lStack_40 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f7c7c FUN_1490f7c7c body=406 status=ok
// SIG undefined FUN_1490f7c7c(void)

undefined4 FUN_1490f7c7c(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != '\0') {
    if ((int)param_2[7] == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)param_2[6];
    }
    FUN_1446f470e(&local_58,puVar6,1);
    iVar1 = (**(code **)(*param_1 + 0x90))(param_1,&local_58,param_2);
    if (iVar1 != -1) {
      uVar2 = (**(code **)(*param_1 + 0x170))(param_1,iVar1);
      goto LAB_1490f7ddf;
    }
  }
  local_48 = param_2[3];
  FUN_1400021e4(&local_48,&local_58);
  plVar5 = local_58;
  if (local_50 == 0) {
    plVar5 = (longlong *)&DAT_149dfb77a;
  }
  iVar1 = local_50 + -1;
  if (local_50 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,plVar5);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (0 < (int)param_2[9]) {
    lVar8 = 8;
    uVar7 = 0;
    do {
      uVar2 = FUN_144a78877(uVar2,(int)((ulonglong)*(undefined8 *)(param_2[8] + lVar8) >> 0x20) *
                                  0x17 + (int)*(undefined8 *)(param_2[8] + lVar8));
      (**(code **)(*param_2 + 0x2b0))(param_2,&local_58,uVar7 & 0xffffffff);
      puVar4 = (undefined8 *)FUN_1447a1f4a(&local_58);
      puVar6 = &DAT_149dfb77a;
      iVar1 = 0;
      if (*(int *)(puVar4 + 1) != 0) {
        puVar6 = (undefined2 *)*puVar4;
        iVar1 = *(int *)(puVar4 + 1) + -1;
      }
      uVar3 = FUN_144a49b4a(iVar1,puVar6);
      uVar2 = FUN_144a78877(uVar2,uVar3);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((longlong)uVar7 < (longlong)(int)param_2[9]);
  }
LAB_1490f7ddf:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f7e14 FUN_1490f7e14 body=706 status=ok
// SIG undefined FUN_1490f7e14(void)

undefined4 FUN_1490f7e14(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  longlong local_68 [2];
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == (longlong *)0x0) {
    FUN_140056680(&local_58,&DAT_149e01fe8);
  }
  else {
    FUN_1400021e4(param_2 + 4,&local_58);
  }
  puVar5 = local_58;
  if ((int)uStack_50 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  iVar4 = (int)uStack_50 + -1;
  if ((int)uStack_50 == 0) {
    iVar4 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar4,puVar5);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  (**(code **)(*param_2 + 0x70))(param_2,local_68,&local_58,0);
  FUN_140474144(&local_78,local_68,&local_58);
  iVar4 = local_70 + -1;
  puVar5 = local_78;
  if (local_70 == 0) {
    iVar4 = 0;
    puVar5 = &DAT_149dfb77a;
  }
  uVar2 = FUN_144a49b4a(iVar4,puVar5);
  uVar1 = FUN_144a78877(uVar1,uVar2);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (param_2 == (longlong *)0x0) goto LAB_1490f7f59;
  lVar6 = param_2[1];
  lVar3 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar7 = lVar6 != 0;
    if (lVar6 != lVar3 && bVar7) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        bVar7 = lVar6 != 0;
        if (lVar6 == lVar3) break;
      } while (lVar6 != 0);
    }
    if (bVar7) goto LAB_1490f7f15;
LAB_1490f7f19:
    if (param_2 == (longlong *)0x0) goto LAB_1490f7f59;
  }
  else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_1490f7f15:
    param_2 = (longlong *)param_2[0xf];
    goto LAB_1490f7f19;
  }
  lVar6 = param_2[1];
  lVar3 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar7 = lVar6 != 0;
    if (lVar6 != lVar3 && bVar7) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        bVar7 = lVar6 != 0;
        if (lVar6 == lVar3) break;
      } while (lVar6 != 0);
    }
    if (!bVar7) goto LAB_1490f801c;
LAB_1490f7f3e:
    uVar2 = (**(code **)(*param_1 + 0x180))(param_1,param_2[0xe]);
  }
  else {
    if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_1490f7f3e;
LAB_1490f801c:
    lVar6 = param_2[1];
    lVar3 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar7 = lVar6 != 0;
      if (lVar6 != lVar3 && bVar7) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar7 = lVar6 != 0;
          if (lVar6 == lVar3) break;
        } while (lVar6 != 0);
      }
      if (!bVar7) goto LAB_1490f8082;
LAB_1490f8034:
      lVar6 = param_2[0xe];
      if (lVar6 == 0) goto LAB_1490f7f59;
    }
    else {
      if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_1490f8034;
LAB_1490f8082:
      lVar6 = param_2[1];
      lVar3 = FUN_144a7add4();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar7 = lVar6 != 0;
        if (lVar6 != lVar3 && bVar7) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar7 = lVar6 != 0;
            if (lVar6 == lVar3) break;
          } while (lVar6 != 0);
        }
        if (!bVar7) goto LAB_1490f7f59;
      }
      else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_1490f7f59;
      lVar6 = param_2[0xf];
    }
    uVar2 = (**(code **)(*param_1 + 0x188))(param_1,lVar6,1);
  }
  uVar1 = FUN_144a78877(uVar1,uVar2);
LAB_1490f7f59:
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f80d8 FUN_1490f80d8 body=459 status=ok
// SIG undefined FUN_1490f80d8(void)

void FUN_1490f80d8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x78))();
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_1456aed84(param_1 + 2,0);
  }
  else {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  FUN_14447d5c8(param_1 + 4);
  FUN_140e02fb2(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_1447ab16c(param_1 + 0xe,0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_1457b29da(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    FUN_1447ab16c(param_1 + 0x11,0);
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_1457b29da(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (*(int *)((longlong)param_1 + 0xac) != 0) {
    FUN_1447ab16c(param_1 + 0x14,0);
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xc4) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14915594e(param_1 + 0x17);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_14005eae2(param_1 + 0x19);
  if ((int)param_1[0x24] != *(int *)((longlong)param_1 + 0x14c)) {
    FUN_14915597e(param_1 + 0x23);
    FUN_149155ac2(param_1 + 0x23);
  }
  FUN_14005eae2(param_1 + 0x2d);
  FUN_14005eae2(param_1 + 0x37);
  if ((int)param_1[0x42] != *(int *)((longlong)param_1 + 0x23c)) {
    FUN_149155bf6(param_1 + 0x41);
    FUN_149155d3a(param_1 + 0x41);
  }
  if ((int)param_1[0x4c] != *(int *)((longlong)param_1 + 0x28c)) {
    FUN_149155bf6(param_1 + 0x4b);
    FUN_149155d3a(param_1 + 0x4b);
  }
  if ((int)param_1[0x56] != *(int *)((longlong)param_1 + 0x2dc)) {
    FUN_14447d7dc(param_1 + 0x55);
    FUN_14447d9b8(param_1 + 0x55);
  }
  FUN_1490f82a4(param_1 + 0x5f);
                    /* WARNING: Could not recover jumptable at 0x0001490f82a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a0))(param_1,0);
  return;
}



// FUNCTION 1490f82a4 FUN_1490f82a4 body=68 status=ok
// SIG undefined FUN_1490f82a4(void)

void FUN_1490f82a4(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_149155e58();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1490f82fa FUN_1490f82fa body=655 status=ok
// SIG undefined FUN_1490f82fa(void)

void FUN_1490f82fa(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_f9;
  code *local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x70 + lVar3) != '\0') {
        iVar6 = (int)(lVar3 >> 5) * -0x49249249;
        if (iVar6 != -1) {
          *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
          if (0 < iVar1) {
            lVar7 = 0;
            lVar3 = 0;
            do {
              lVar5 = *(longlong *)(param_1 + 0x10);
              if (*(char *)(lVar5 + 0x70 + lVar7) == '\0') {
                local_b8 = 0;
                uStack_b0 = 0;
                cVar2 = FUN_144478822(lVar5 + lVar7,&local_b8);
                if (cVar2 == '\0') {
                  if (*(int *)(lVar5 + 0x1c + lVar7) < 0) {
                    *(undefined4 *)(lVar5 + lVar7 + 0x18) = 0;
                    FUN_14481578e(lVar5 + lVar7 + 0x10,0);
                  }
                  else {
                    *(undefined4 *)(lVar5 + 0x18 + lVar7) = 0;
                  }
                  if (*(int *)(lVar5 + 0x28 + lVar7) != *(int *)(lVar5 + 0x54 + lVar7)) {
                    lVar5 = lVar5 + lVar7 + 0x20;
                    FUN_140147efc(lVar5);
                    FUN_14014818a(lVar5);
                  }
                }
              }
              lVar3 = lVar3 + 1;
              lVar7 = lVar7 + 0xe0;
            } while (lVar3 < *(int *)(param_1 + 0x18));
          }
          FUN_14001a7b2();
          lVar3 = (longlong)iVar6 * 0xe0 + *(longlong *)(param_1 + 0x10);
          local_68 = 0;
          local_60 = 0x100000000;
          local_f9 = 1;
          local_108 = 0;
          if (((*(int *)(param_1 + 0xb0) != 0) &&
              (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0)) &&
             (cVar2 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x30))(), cVar2 != '\0')) {
            if (*(int *)(param_1 + 0xb0) == 0) {
              plVar4 = (longlong *)0x0;
            }
            else {
              plVar4 = *(longlong **)(param_1 + 0xa8);
            }
            local_108 = (**(code **)(*plVar4 + 0x58))();
          }
          local_f8[0] = (code *)0x0;
          local_e8 = (longlong *)FUN_14001cc68(0x38,8);
          *local_e8 = (longlong)&PTR_FUN_14bb2bc90;
          local_e8[1] = (longlong)&local_b8;
          local_e8[2] = (longlong)&local_108;
          local_e8[3] = lVar3;
          local_e8[4] = param_1;
          local_e8[5] = (longlong)&DAT_14cc012d0;
          local_e8[6] = (longlong)&local_f9;
          if (local_e8 + 1 != (longlong *)0x0) {
            local_f8[0] = FUN_14447f988;
          }
          FUN_140019f06(lVar3,local_f8);
          if (local_f8[0] != (code *)0x0) {
            plVar4 = local_e8;
            if (local_e8 == (longlong *)0x0) {
              plVar4 = local_d8;
            }
            (**(code **)(*plVar4 + 0x10))();
          }
          if (0 < *(int *)(param_1 + 0x18)) {
            lVar7 = 0;
            lVar3 = 0;
            do {
              FUN_1490fa978(*(longlong *)(param_1 + 0x10) + lVar7);
              lVar3 = lVar3 + 1;
              lVar7 = lVar7 + 0xe0;
            } while (lVar3 < *(int *)(param_1 + 0x18));
          }
          FUN_14446cbe0(&local_b8);
        }
        break;
      }
      lVar3 = lVar3 + 0xe0;
    } while ((longlong)iVar1 * 0xe0 - lVar3 != 0);
  }
  if ((local_50 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490f858a FUN_1490f858a body=470 status=ok
// SIG undefined FUN_1490f858a(void)

void FUN_1490f858a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_90;
  longlong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  local_98 = *param_3;
  local_90 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    local_90 = 0;
  }
  FUN_14475bf92(&local_78,&local_98);
  plVar9 = (longlong *)(param_1 + 0x2a8);
  uVar1 = (uint)((ulonglong)uStack_70 >> 0x10);
  uVar11 = (uint)uStack_70 & 0xffff;
  uVar3 = (uint)((ulonglong)local_78 >> 0x10);
  uVar10 = (uint)local_78 & 0xffff;
  uVar3 = ((uint)local_78 << 0x10 | uVar10) + (int)((ulonglong)local_78 >> 0x20) +
          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4);
  uVar4 = FUN_144a78877(0,(uVar3 >> 2) +
                          ((uint)uStack_70 << 0x10 | uVar11) + (int)((ulonglong)uStack_70 >> 0x20) +
                          (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar11 >> 4) + uVar3 * 0x40 +
                          0x9e3779b9 ^ uVar3);
  iVar6 = (int)uStack_60 + -1;
  puVar2 = local_68;
  if ((int)uStack_60 == 0) {
    iVar6 = 0;
    puVar2 = &DAT_149dfb77a;
  }
  uVar5 = FUN_144a49b4a(iVar6,puVar2);
  uVar4 = FUN_144a78877(uVar4,uVar5);
  iVar6 = FUN_1468c2192(plVar9,uVar4,&local_78);
  if ((iVar6 != -1) &&
     (lVar7 = (longlong)iVar6 * 0x30 + *plVar9, puVar8 = (undefined4 *)(lVar7 + 0x20),
     puVar8 != (undefined4 *)0x0 && lVar7 != 0)) {
    uVar4 = *puVar8;
    FUN_14447de14(plVar9,&local_78);
    FUN_146857ec0(param_2,&local_98);
    local_50 = &local_98;
    FUN_14447e190(plVar9,&local_44);
    *(undefined4 *)(*plVar9 + 0x20 + (longlong)local_44 * 0x30) = uVar4;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f8762 FUN_1490f8762 body=127 status=ok
// SIG undefined FUN_1490f8762(void)

undefined4 FUN_1490f8762(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_146858078(param_2,0);
  FUN_146857ec0(param_2,local_48);
  uVar1 = (**(code **)(*param_1 + 0x88))(param_1,local_48,uVar2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f87e2 FUN_1490f87e2 body=1203 status=ok
// SIG undefined FUN_1490f87e2(void)

/* WARNING: Type propagation algorithm not settling */

byte FUN_1490f87e2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined1 *puVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  byte bVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_158 [32];
  longlong local_138 [3];
  longlong *local_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 *local_f8;
  int local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong local_c0 [3];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  (**(code **)(*param_2 + 0x38))(param_2,&local_f8);
  local_98 = 0;
  iVar14 = 0;
  local_90 = 0;
  local_c0[1] = 0;
  local_c0[2] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  plVar1 = param_1 + 0x55;
  plVar2 = param_1 + 0x57;
  local_e8 = 0x100000000;
  local_d8._0_4_ = 0xffffffff;
  local_d8._4_4_ = 0;
  iStack_d0 = 0;
  plStack_e0 = plVar2;
  if ((int)param_1[0x5a] != 0) {
    FUN_1449c0562(&local_e8);
    iVar14 = (int)param_1[0x5a];
  }
  local_108._0_4_ = (uint)local_d8;
  local_108._4_4_ = local_d8._4_4_;
  uStack_100 = CONCAT44(uStack_cc,iStack_d0);
  local_118 = local_e8;
  plStack_110 = plStack_e0;
  local_120 = plVar1;
  if ((local_d8._4_4_ != iVar14) || (plStack_e0 != plVar2)) {
    do {
      lVar9 = *local_120;
      lVar8 = (longlong)local_108._4_4_ * 0x30;
      local_e8 = *(longlong *)(lVar9 + lVar8);
      plStack_e0 = (longlong *)((longlong *)(lVar9 + lVar8))[1];
      local_d8 = (void *)0x0;
      iStack_d0 = *(int *)(lVar9 + 0x18 + lVar8);
      lVar13 = (longlong)iStack_d0;
      pvVar3 = *(void **)(lVar9 + 0x10 + lVar8);
      if (lVar13 == 0) {
        uStack_cc = 0;
      }
      else {
        FUN_1446dd670(&local_d8,iStack_d0,0);
        memcpy(local_d8,pvVar3,lVar13 * 2);
      }
      local_c0[0] = local_e8;
      if (local_e8 == 0) {
        local_138[0] = 0;
        local_138[1] = 0;
      }
      else {
        FUN_1400021e4(local_c0,local_138);
      }
      iVar7 = local_f0 + -1;
      if (local_f0 == 0) {
        iVar7 = 0;
      }
      puVar10 = &DAT_149dfb77a;
      if (local_f0 != 0) {
        puVar10 = local_f8;
      }
      cVar5 = FUN_144a791f8(local_138,puVar10,iVar7,1);
      if (cVar5 != '\0') {
        FUN_1449774fc(local_c0 + 1,local_c0,&local_e8,0);
      }
      if (local_138[0] != 0) {
        FUN_1400020a8();
      }
      if (local_d8 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_108._0_4_ = (uint)local_108 & ~local_118._4_4_;
      FUN_1449c0562(&local_118);
    } while (local_120 != plVar1 || (plStack_110 != plVar2 || local_108._4_4_ != iVar14));
  }
  plStack_e0 = (longlong *)local_a8;
  local_e8 = 0x100000000;
  local_d8 = &DAT_ffffffff;
  iStack_d0 = 0;
  if (local_90 == 0) {
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_e8);
    iVar14 = local_90;
  }
  uStack_100 = CONCAT44(uStack_cc,iStack_d0);
  local_108 = local_d8;
  puVar4 = local_108;
  local_118 = local_e8;
  plStack_110 = plStack_e0;
  plVar1 = local_c0 + 1;
  local_108._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
  local_120 = plVar1;
  local_108 = puVar4;
  if ((local_108._4_4_ == iVar14) && (plStack_e0 == (longlong *)local_a8)) {
    bVar11 = 0;
  }
  else {
    bVar11 = 0;
    iVar7 = local_108._4_4_;
    do {
      lVar9 = *local_120;
      lVar8 = (longlong)iVar7;
      plVar2 = (longlong *)(lVar9 + lVar8 * 0x28);
      local_e8 = *plVar2;
      plStack_e0 = (longlong *)plVar2[1];
      local_d8 = (undefined1 *)0x0;
      iStack_d0 = *(int *)(lVar9 + 0x18 + lVar8 * 0x28);
      lVar13 = (longlong)iStack_d0;
      pvVar3 = *(void **)(lVar9 + 0x10 + lVar8 * 0x28);
      if (lVar13 == 0) {
        uStack_cc = 0;
      }
      else {
        FUN_1446dd670(&local_d8,iStack_d0,0);
        memcpy(local_d8,pvVar3,lVar13 * 2);
      }
      lVar9 = FUN_140007850(&local_e8);
      if (lVar9 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(lVar9 + 0x10);
      }
      bVar6 = (**(code **)(*param_1 + 0x88))(param_1,&local_e8,uVar12);
      if (local_d8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      bVar11 = bVar11 | bVar6;
      local_108 = (undefined1 *)CONCAT44(local_108._4_4_,(uint)local_108 & ~local_118._4_4_);
      FUN_1449c0562(&local_118);
      iVar7 = local_108._4_4_;
    } while (local_120 != plVar1 ||
             (plStack_110 != (longlong *)local_a8 || local_108._4_4_ != iVar14));
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_144a1c8ac(local_c0 + 1);
  if (local_f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar11 & 1;
}



// FUNCTION 1490f8c96 FUN_1490f8c96 body=99 status=ok
// SIG undefined FUN_1490f8c96(void)

void FUN_1490f8c96(longlong *param_1,longlong param_2,char param_3)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && param_3 == '\x01') {
    FUN_1408ccbd2(local_28);
    (**(code **)(*param_1 + 0x80))(param_1,local_28,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f8cfa FUN_1490f8cfa body=157 status=ok
// SIG undefined FUN_1490f8cfa(void)

void FUN_1490f8cfa(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0x101;
  local_30 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x3a0));
  LOCK();
  piVar1 = (int *)(param_1 + 0x3ac);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    LOCK();
    *(undefined1 *)(local_30 + 0x3a8) = (undefined1)local_28;
    UNLOCK();
  }
  cVar3 = FUN_1490f8762(param_1,param_2);
  FUN_1409be446(&local_30);
  if (cVar3 != '\0') {
    FUN_1447f69b6(param_1 + 0x3b0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f8d98 FUN_1490f8d98 body=157 status=ok
// SIG undefined FUN_1490f8d98(void)

void FUN_1490f8d98(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0x101;
  local_30 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x3a0));
  LOCK();
  piVar1 = (int *)(param_1 + 0x3ac);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    LOCK();
    *(undefined1 *)(local_30 + 0x3a8) = (undefined1)local_28;
    UNLOCK();
  }
  cVar3 = FUN_1490f87e2(param_1,param_2);
  FUN_1409be446(&local_30);
  if (cVar3 != '\0') {
    FUN_1447f69b6(param_1 + 0x3b0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f8e36 FUN_1490f8e36 body=200 status=ok
// SIG undefined FUN_1490f8e36(void)

void FUN_1490f8e36(longlong *param_1,longlong param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined2 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0x101;
  local_48 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x74));
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x3ac);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    LOCK();
    *(undefined1 *)(local_48 + 0x75) = (undefined1)local_40;
    UNLOCK();
  }
  if (param_3 == '\x01' && param_2 != 0) {
    FUN_1408ccbd2(local_38,param_2);
    (**(code **)(*param_1 + 0x80))(param_1,local_38,0);
  }
  FUN_1409be446(&local_48);
  if (param_3 != '\0') {
    FUN_1447f69b6(param_1 + 0x76);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490f8f00 FUN_1490f8f00 body=139 status=ok
// SIG undefined FUN_1490f8f00(void)

undefined * FUN_1490f8f00(longlong *param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = (**(code **)(*param_1 + 0xb8))();
  if (((int)uVar1 < 0) || ((int)param_1[3] <= (int)uVar1)) {
    puVar2 = &DAT_14cc016b8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc016c8) {
      FUN_144b3d300(&DAT_14cc016c8);
      if (DAT_14cc016c8 == -1) {
        puVar2 = &DAT_14cc016b8;
        FUN_140821024(&DAT_14cc016b8);
        _Init_thread_footer(&DAT_14cc016c8);
      }
    }
  }
  else {
    puVar2 = (undefined *)((ulonglong)uVar1 * 0x20 + param_1[2]);
  }
  return puVar2;
}



// FUNCTION 1490f8f8c FUN_1490f8f8c body=57 status=ok
// SIG undefined FUN_1490f8f8c(void)

void FUN_1490f8f8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01808 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01808 = FUN_140002ddd(FUN_1466852b6,uVar1,L"RigVMStruct");
  }
  return;
}



// FUNCTION 1490f8fc6 FUN_1490f8fc6 body=89 status=ok
// SIG undefined FUN_1490f8fc6(void)

void FUN_1490f8fc6(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140e03040(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490f9020 FUN_1490f9020 body=382 status=ok
// SIG undefined FUN_1490f9020(void)

void FUN_1490f9020(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ushort uVar6;
  uint uVar7;
  undefined2 *puVar8;
  ushort uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined8 local_b0;
  undefined8 local_a0 [12];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0[0] = *(undefined8 *)(param_2 + 0x18);
  uVar2 = (uint)((ulonglong)local_a0[0] >> 0x10);
  uVar7 = (uint)local_a0[0] & 0xffff;
  plVar3 = (longlong *)
           FUN_14915600e(param_1 + 0x118,
                         ((uint)local_a0[0] << 0x10 | uVar7) + (int)((ulonglong)local_a0[0] >> 0x20)
                         + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4));
  iVar1 = (int)plVar3[1];
  if ((longlong)iVar1 == 0) {
LAB_1490f911a:
    local_b8 = iVar1;
    local_b0 = param_4;
    FUN_14001a8f4(local_a0,param_3,0,param_2);
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_1491565c8(plVar3,iVar1);
    }
    FUN_14001ad92((longlong)iVar1 * 0x60 + *plVar3,local_a0);
    FUN_1490f8fc6(local_a0);
LAB_1490f9167:
    if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  puVar4 = (undefined8 *)*plVar3;
  puVar5 = puVar4 + (longlong)iVar1 * 0xc;
LAB_1490f90ba:
  puVar8 = &DAT_149dfb77a;
  if (*(int *)(puVar4 + 1) != 0) {
    puVar8 = (undefined2 *)*puVar4;
  }
  lVar12 = 0;
  do {
    uVar9 = *(ushort *)((longlong)puVar8 + lVar12);
    uVar10 = (ulonglong)uVar9;
    uVar6 = *(ushort *)(param_3 + lVar12);
    if (uVar9 == uVar6) {
      if (uVar9 == 0) goto LAB_1490f9115;
    }
    else {
      if (0x7f < (uVar6 | uVar9)) break;
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      uVar11 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
      if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar11]) break;
    }
    lVar12 = lVar12 + 2;
  } while( true );
  if (uVar9 == uVar6) {
LAB_1490f9115:
    if (puVar4 != (undefined8 *)0x0) goto LAB_1490f9167;
    goto LAB_1490f911a;
  }
  puVar4 = puVar4 + 0xc;
  if (puVar4 == puVar5) goto LAB_1490f911a;
  goto LAB_1490f90ba;
}



// FUNCTION 1490f91a0 FUN_1490f91a0 body=197 status=ok
// SIG undefined FUN_1490f91a0(void)

void FUN_1490f91a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar5);
      lVar4 = FUN_1408cc5f4();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) != lVar4 + 0x30)) {
        local_48 = lVar2;
        if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar2);
        }
        FUN_14915665c(param_1 + 0x348,local_4c,&local_48);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490f9266 FUN_1490f9266 body=1357 status=ok
// SIG undefined FUN_1490f9266(void)

longlong FUN_1490f9266(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined2 *puVar14;
  longlong lVar15;
  undefined1 auStack_1a8 [32];
  int local_188;
  longlong *local_180;
  undefined8 local_178;
  longlong local_170;
  undefined1 local_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  int local_fc;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  int local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined1 local_bc [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar8 = FUN_1490fcd9a();
  if (lVar8 == 0) {
    if ((((*(int *)(*(longlong *)(param_1 + 0xc) + (longlong)param_2 * 4) == -1) &&
         (param_1[0x2c] != 0)) && (*(longlong **)(param_1 + 0x2a) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2a) + 0x30))(), cVar4 != '\0')) {
      local_170 = (longlong)param_2;
      FUN_14001a7b2();
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      if ((longlong)(int)param_1[6] != 0) {
        lVar8 = *(longlong *)(param_1 + 4);
        lVar12 = (longlong)(int)param_1[6] * 0xe0 + lVar8;
        do {
          local_e8._0_4_ = FUN_1444788ce(lVar8,param_2);
          local_160 = (longlong *)(lVar8 + 4);
          uStack_158 = &local_e8;
          FUN_1410952c6(&local_b8,&local_d8,&local_160,0);
          lVar8 = lVar8 + 0xe0;
        } while (lVar8 != lVar12);
      }
      if (param_1[0x2c] == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)(param_1 + 0x2a);
      }
      lVar12 = (**(code **)(*plVar10 + 0x58))();
      if (lVar12 == 0) {
        lVar8 = 0;
      }
      else {
        local_178 = FUN_144466de6(lVar12,&local_b8);
        local_d8 = 0;
        uStack_d0 = 0;
        if ((longlong)(int)param_1[6] != 0) {
          lVar8 = *(longlong *)(param_1 + 4);
          lVar13 = (longlong)(int)param_1[6] * 0xe0 + lVar8;
          do {
            uVar5 = FUN_1444788ce(lVar8,param_2);
            uVar9 = (**(code **)(DAT_14cc012d0 + 0xa0))(&DAT_14cc012d0,uVar5);
            FUN_1400021e4(uVar9,&local_e8);
            FUN_1400021e4(lVar8 + 4,&local_f8);
            FUN_1490fce30(&local_160,&local_f8,&local_e8);
            uVar3 = uStack_d0;
            lVar15 = (longlong)(int)uStack_d0;
            uVar6 = (int)uStack_d0 + 1;
            uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
            if (uStack_d0._4_4_ < uVar6) {
              FUN_140c0351c(&local_d8,uVar3 & 0xffffffff);
            }
            lVar15 = lVar15 * 0x38;
            puVar1 = (undefined4 *)(local_d8 + lVar15);
            *puVar1 = (undefined4)local_160;
            puVar1[1] = local_160._4_4_;
            puVar1[2] = (undefined4)uStack_158;
            puVar1[3] = uStack_158._4_4_;
            *(undefined8 *)(local_d8 + 0x10 + lVar15) = local_150;
            *(undefined8 *)(local_d8 + 0x18 + lVar15) = uStack_148;
            local_150 = 0;
            uStack_148 = 0;
            *(undefined8 *)(local_d8 + 0x20 + lVar15) = local_140;
            *(undefined8 *)(local_d8 + 0x28 + lVar15) = uStack_138;
            local_140 = 0;
            uStack_138 = 0;
            *(undefined1 *)(local_d8 + 0x30 + lVar15) = local_130;
            FUN_1490fd028(&local_160);
            if (local_f8 != 0) {
              FUN_1400020a8();
            }
            if (CONCAT44(local_e8._4_4_,(undefined4)local_e8) != 0) {
              FUN_1400020a8();
            }
            lVar8 = lVar8 + 0xe0;
          } while (lVar8 != lVar13);
        }
        FUN_144466d18(lVar12,&local_e8,&local_b8,0);
        iVar2 = DAT_14cc01350;
        *(int *)(*(longlong *)(param_1 + 0xc) + local_170 * 4) = DAT_14cc01350;
        local_fc = iVar2;
        local_180 = &local_d8;
        local_188 = iVar2;
        FUN_1490fd08e(&local_160,&local_e8,local_178,lVar12);
        iVar7 = FUN_14001a81e(&DAT_14cc01340);
        FUN_14001ad92((ulonglong)(uint)(iVar7 % 0xaa) * 0x60 +
                      *(longlong *)(DAT_14cc01340 + (longlong)(iVar7 / 0xaa) * 8),&local_160);
        FUN_1490f8fc6(&local_160);
        *(undefined4 *)
         (*(longlong *)(DAT_14cc01340 + (longlong)(iVar2 / 0xaa) * 8) + 0x2c +
         (ulonglong)(uint)(iVar2 % 0xaa) * 0x60) = *param_1;
        puVar14 = &DAT_149dfb77a;
        puVar11 = &DAT_149dfb77a;
        if (local_e0 != 0) {
          puVar11 = (undefined2 *)CONCAT44(local_e8._4_4_,(undefined4)local_e8);
        }
        FUN_1446f470e(&local_f8,puVar11,1);
        uStack_158 = (longlong *)&local_fc;
        local_160 = &local_f8;
        FUN_14001ac2c(&DAT_14cc01398,local_168,&local_160,0);
        FUN_144466df0(lVar12,&local_f8,&local_b8);
        if (local_e0 != 0) {
          puVar14 = (undefined2 *)CONCAT44(local_e8._4_4_,(undefined4)local_e8);
        }
        FUN_1446f470e(local_168,puVar14,1);
        local_160 = (longlong *)local_168;
        uStack_158 = &local_f8;
        FUN_149157af4(local_bc);
        lVar8 = (ulonglong)(uint)(local_fc % 0xaa) * 0x60 +
                *(longlong *)(DAT_14cc01340 + (longlong)(local_fc / 0xaa) * 8);
        FUN_149154680(local_f8,local_f0);
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(local_e8._4_4_,(undefined4)local_e8) != 0) {
          FUN_1400020a8();
        }
        FUN_140e03040(local_d8,uStack_d0 & 0xffffffff);
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_1401ad17c(&local_b8);
      if (lVar12 != 0) goto LAB_1490f92a5;
    }
    lVar8 = 0;
  }
LAB_1490f92a5:
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 1490f97b4 FUN_1490f97b4 body=201 status=ok
// SIG undefined FUN_1490f97b4(void)

undefined8 FUN_1490f97b4(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x378))(param_2,&local_48,0);
  puVar2 = local_48;
  if (local_40 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_38,L"%s::%s",puVar2,param_3);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*param_1 + 0x118))(param_1,puVar2,param_4);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1490f9884 FUN_1490f9884 body=2536 status=ok
// SIG undefined FUN_1490f9884(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1490f9884(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ushort uVar1;
  ushort uVar2;
  void *_Src;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  void **ppvVar11;
  uint uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  longlong lVar15;
  wchar_t *_Str;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined4 local_260;
  char local_251;
  longlong *local_250;
  void ***local_248;
  ulonglong *local_240;
  undefined1 local_238 [8];
  longlong local_230 [2];
  longlong local_220 [2];
  undefined1 local_210 [8];
  void **local_208;
  void ***pppvStack_200;
  void *local_1f8;
  uint local_1f0;
  void ***local_1e8;
  undefined1 *local_1e0;
  longlong local_1d8 [2];
  undefined2 *local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8 [2];
  void **local_1a8;
  void ***pppvStack_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar10 = *param_2;
  if (lVar10 == 0) {
    lVar10 = 0;
    goto LAB_1490f9993;
  }
  param_3 = param_3 & 0xffffffff;
  if ((int)param_1[0x2e] != *(int *)((longlong)param_1 + 0x19c)) {
    uVar12 = (uint)((ulonglong)lVar10 >> 0x10);
    uVar9 = (uint)lVar10 & 0xffff;
    plVar8 = param_1 + 0x34;
    if ((longlong *)param_1[0x35] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[0x35];
    }
    iVar5 = *(int *)((longlong)plVar8 +
                    (ulonglong)
                    ((int)param_1[0x36] - 1U &
                    (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar9) +
                    (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar8 = (longlong *)(param_1[0x2d] + (longlong)iVar5 * 0x14);
        if (*plVar8 == lVar10) {
          if (plVar8 + 1 != (longlong *)0x0 && plVar8 != (longlong *)0x0) {
            iVar5 = (int)plVar8[1];
            lVar10 = (longlong)(iVar5 % 0x59) * 0xb8 +
                     *(longlong *)(param_1[0x11] + (longlong)(iVar5 / 0x59) * 8);
            goto LAB_1490f9993;
          }
          break;
        }
        iVar5 = *(int *)((longlong)plVar8 + 0xc);
      } while (iVar5 != -1);
    }
  }
  FUN_1400021e4(param_2,local_1b8);
  local_1c8 = (undefined2 *)0x0;
  uStack_1c0 = 0;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  FUN_140056680(&local_1a8,&DAT_149e06140);
  local_260 = 0;
  local_268 = 1;
  cVar3 = FUN_1407cdbc6(local_1b8,&local_1a8,local_1d8 + 2,local_1d8);
  if (local_1a8 != (void **)0x0) {
    FUN_1400020a8();
  }
  if (cVar3 == '\0') {
LAB_1490f9af2:
    cVar3 = (char)param_3;
    if ((cVar3 != '\0') && ((int)param_1[0x38] != *(int *)((longlong)param_1 + 0x1ec))) {
      lVar10 = *param_2;
      uVar12 = (uint)((ulonglong)lVar10 >> 0x10);
      uVar9 = (uint)lVar10 & 0xffff;
      plVar8 = param_1 + 0x3e;
      if ((longlong *)param_1[0x3f] != (longlong *)0x0) {
        plVar8 = (longlong *)param_1[0x3f];
      }
      iVar5 = *(int *)((longlong)plVar8 +
                      (ulonglong)
                      ((int)param_1[0x40] - 1U &
                      (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar9) +
                      (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          plVar8 = (longlong *)(param_1[0x37] + (longlong)iVar5 * 0x14);
          if (*plVar8 == lVar10) {
            if (plVar8 + 1 != (longlong *)0x0 && plVar8 != (longlong *)0x0) {
              iVar5 = (int)plVar8[1];
              lVar10 = (longlong)(iVar5 % 0x59) * 0xb8 +
                       *(longlong *)(param_1[0x14] + (longlong)(iVar5 / 0x59) * 8);
              goto LAB_1490f9d85;
            }
            break;
          }
          iVar5 = *(int *)((longlong)plVar8 + 0xc);
        } while (iVar5 != -1);
      }
    }
    FUN_1400021e4(param_2,&local_1f8);
    _Src = local_1f8;
    local_208 = (void **)0x0;
    lVar10 = (longlong)(int)local_1f0;
    pppvStack_200 = (void ***)CONCAT44(pppvStack_200._4_4_,local_1f0);
    if (lVar10 == 0) {
      pppvStack_200 = (void ***)(ulonglong)local_1f0;
    }
    else {
      FUN_1446dd670(&local_208,local_1f0,0);
      memcpy(local_208,_Src,lVar10 * 2);
    }
    local_251 = cVar3;
    local_250 = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc017f8) && (FUN_144b3d300(&DAT_14cc017f8), DAT_14cc017f8 == -1)) {
      FUN_140056680(&local_1a8,
                    L"FRigUnit_SequenceExecution::Execute(in ExecuteContext,out A,out B,out C,out D)"
                   );
      FUN_140056680(&local_198,L"FRigUnit_SequenceExecution::Execute()");
      FUN_140056680(local_188,L"FRigUnit_SequenceAggregate::Execute(in ExecuteContext,out A,out B)")
      ;
      FUN_140056680(local_178,L"FRigUnit_SequenceAggregate::Execute()");
      FUN_140056680(local_168,L",io ExecuteContext");
      FUN_140056680(local_158,&DAT_149dfb77a);
      FUN_140056680(local_148,L"io ExecuteContext,");
      FUN_140056680(local_138,&DAT_149dfb77a);
      FUN_140056680(local_128,L"(io ExecuteContext)");
      FUN_140056680(local_118,&DAT_149e6ee3c);
      FUN_140056680(local_108,L",out ExecuteContext");
      FUN_140056680(local_f8,&DAT_149dfb77a);
      FUN_140056680(local_e8,L"out ExecuteContext,");
      FUN_140056680(local_d8,&DAT_149dfb77a);
      FUN_140056680(local_c8,L"(out ExecuteContext)");
      FUN_140056680(local_b8,&DAT_149e6ee3c);
      FUN_140056680(local_a8,L",out Completed");
      FUN_140056680(local_98,&DAT_149dfb77a);
      FUN_140056680(local_88,L"out Completed,");
      FUN_140056680(local_78,&DAT_149dfb77a);
      FUN_140056680(local_68,L"(out Completed)");
      FUN_140056680(local_58,&DAT_149e6ee3c);
      local_240 = &local_48;
      local_248 = &local_1a8;
      FUN_1490fa26e();
      lVar10 = 0x160;
      do {
        if (*(longlong *)((longlong)local_1b8 + lVar10) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)((longlong)local_1d8 + lVar10 + 0x10) != 0) {
          FUN_1400020a8();
        }
        lVar10 = lVar10 + -0x20;
      } while (lVar10 != 0);
      atexit(FUN_144477530);
      _Init_thread_footer(&DAT_14cc017f8);
      param_3 = 0;
    }
    if (0 < DAT_14cc017f0) {
      lVar15 = 0;
      lVar10 = 0;
      do {
        param_3 = DAT_14cc017e8;
        _Str = L"";
        if (*(int *)(DAT_14cc017e8 + 8 + lVar15) != 0) {
          _Str = *(wchar_t **)(DAT_14cc017e8 + lVar15);
        }
        if (_Str != (wchar_t *)0x0) {
          sVar6 = wcslen(_Str);
          local_260 = 0xffffffff;
          local_268 = 0;
          iVar5 = FUN_1447ee042(&local_208,_Str,sVar6 & 0xffffffff,1);
          if (iVar5 != -1) {
            puVar14 = &DAT_149dfb77a;
            if (*(int *)(param_3 + 0x18 + lVar15) != 0) {
              puVar14 = *(undefined2 **)(param_3 + 0x10 + lVar15);
            }
            puVar13 = &DAT_149dfb77a;
            if (*(int *)(param_3 + 8 + lVar15) != 0) {
              puVar13 = *(undefined2 **)(param_3 + lVar15);
            }
            local_268 = 1;
            FUN_140807d8e(&local_208,&local_1a8,puVar13,puVar14);
            if (local_208 != (void **)0x0) {
              FUN_1400020a8();
            }
            local_208 = local_1a8;
            pppvStack_200 = pppvStack_1a0;
          }
        }
        lVar10 = lVar10 + 1;
        lVar15 = lVar15 + 0x20;
      } while (lVar10 < DAT_14cc017f0);
    }
    plVar8 = local_250;
    if ((uint)pppvStack_200 == local_1f0) {
      if ((int)(uint)pppvStack_200 < 2) {
LAB_1490f9d67:
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        lVar15 = 0;
        while( true ) {
          uVar1 = *(ushort *)((longlong)local_208 + lVar15);
          uVar2 = *(ushort *)((longlong)local_1f8 + lVar15);
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[(uint)uVar2]) goto LAB_1490f9cd8;
              iVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                      (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
            }
            else {
              iVar5 = (uint)uVar1 - (uint)uVar2;
            }
            uVar12 = (uint)CONCAT11((char)((uVar2 | uVar1) >> 8),local_251);
            if (iVar5 == 0) goto LAB_1490f9d67;
            goto LAB_1490f9d0c;
          }
          if (uVar1 == 0) break;
LAB_1490f9cd8:
          lVar15 = lVar15 + 2;
        }
      }
    }
    else {
      uVar12 = (uint)CONCAT71((int7)(param_3 >> 8),local_251);
      if (local_1f0 + (uint)pppvStack_200 == 1) goto LAB_1490f9d67;
LAB_1490f9d0c:
      ppvVar11 = (void **)&DAT_149dfb77a;
      if ((uint)pppvStack_200 != 0) {
        ppvVar11 = local_208;
      }
      FUN_1446f470e(&local_1a8,ppvVar11,1);
      lVar10 = (**(code **)(*plVar8 + 0x128))(plVar8,&local_1a8,uVar12);
    }
    if (local_208 != (void **)0x0) {
      FUN_1400020a8();
    }
    if (local_1f8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc017e0) && (FUN_144b3d300(&DAT_14cc017e0), DAT_14cc017e0 == -1)) {
      local_251 = (char)param_3;
      FUN_140056680(&local_1f8,L"Equals::Execute");
      uVar7 = FUN_1466b9680();
      uVar7 = (**(code **)(*param_1 + 0x150))(param_1,uVar7);
      FUN_1490de260(uVar7,local_210);
      FUN_1400021e4(local_210,&local_208);
      local_1a8 = &local_1f8;
      pppvStack_1a0 = &local_208;
      FUN_140056680(local_220,L"NotEquals::Execute");
      uVar7 = FUN_1466b9716();
      uVar7 = (**(code **)(*param_1 + 0x150))(param_1,uVar7);
      FUN_1490de260(uVar7,local_238);
      FUN_1400021e4(local_238,local_230);
      local_1e8 = &local_1a8;
      local_1e0 = local_188;
      local_198 = local_220;
      local_190 = local_230;
      FUN_140ac5b02(&DAT_14cc01790);
      if (local_230[0] != 0) {
        FUN_1400020a8();
      }
      if (local_220[0] != 0) {
        FUN_1400020a8();
      }
      if (local_208 != (void **)0x0) {
        FUN_1400020a8();
      }
      if (local_1f8 != (void *)0x0) {
        FUN_1400020a8();
      }
      atexit(FUN_144477501);
      _Init_thread_footer(&DAT_14cc017e0);
      param_3 = CONCAT71((int7)((ulonglong)local_188 >> 8),local_251);
    }
    puVar14 = local_1c8;
    if ((int)uStack_1c0 == 0) {
      puVar14 = &DAT_149dfb77a;
    }
    iVar5 = (int)uStack_1c0 + -1;
    if ((int)uStack_1c0 == 0) {
      iVar5 = 0;
    }
    uVar4 = FUN_144a49b4a(iVar5,puVar14);
    iVar5 = FUN_1457511aa(&DAT_14cc01790,uVar4,local_1d8 + 2);
    lVar10 = (longlong)iVar5 * 0x28 + _DAT_14cc01790;
    if (lVar10 != 0 && iVar5 != -1) {
      FUN_144a787a6(local_1d8 + 2,lVar10 + 0x10);
    }
    puVar14 = local_1c8;
    if ((int)uStack_1c0 == 0) {
      puVar14 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_1a8,puVar14,1);
    lVar10 = (**(code **)(*param_1 + 0x148))(param_1,&local_1a8);
    if (lVar10 == 0) goto LAB_1490f9af2;
    lVar10 = FUN_144466e1e(lVar10);
  }
LAB_1490f9d85:
  if (local_1d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1b8[0] != 0) {
    FUN_1400020a8();
  }
LAB_1490f9993:
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 1490fa26e FUN_1490fa26e body=89 status=ok
// SIG undefined FUN_1490fa26e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1490fa26e(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  DAT_14cc017e8 = 0;
  lVar1 = *param_1;
  uVar2 = (ulonglong)(param_1[1] - lVar1) >> 5;
  DAT_14cc017f0 = (int)uVar2;
  if (DAT_14cc017f0 == 0) {
    _DAT_14cc017f4 = 0;
    return;
  }
  FUN_149156bc8(uVar2 & 0xffffffff);
  FUN_149156c22(DAT_14cc017e8,lVar1,uVar2 & 0xffffffff);
  return;
}



// FUNCTION 1490fa2d0 FUN_1490fa2d0 body=132 status=ok
// SIG undefined FUN_1490fa2d0(void)

void FUN_1490fa2d0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490fa356(local_38,*param_2);
  lVar1 = (**(code **)(*param_1 + 0x128))(param_1,local_38,0);
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x140))(param_1,param_2,param_3,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fa356 FUN_1490fa356 body=498 status=ok
// SIG undefined FUN_1490fa356(void)

/* WARNING: Removing unreachable block (ram,0x0001490fa428) */

undefined8 * FUN_1490fa356(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = param_3[1];
  local_60 = param_2;
  if ((longlong)(int)lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    lVar1 = *param_3;
    lVar7 = 0;
    do {
      if ((byte)(*(char *)(lVar1 + 8 + lVar7) - 6U) < 0xfe) {
        FUN_1490fca6a(&local_58,*(undefined8 *)(lVar1 + lVar7));
        uVar4 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar3 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
        if (uStack_70._4_4_ < uVar3) {
          FUN_1447a1bd6(&local_78,uVar4 & 0xffffffff);
        }
        lVar8 = lVar8 * 0x10;
        *(undefined8 *)(local_78 + lVar8) = 0;
        *(undefined2 **)(local_78 + lVar8) = local_58;
        local_58 = (undefined2 *)0x0;
        *(int *)(local_78 + 8 + lVar8) = (int)local_50;
        *(undefined4 *)(local_78 + 0xc + lVar8) = local_50._4_4_;
        local_50 = 0;
      }
      lVar7 = lVar7 + 0x50;
    } while ((longlong)(int)lVar2 * 0x50 != lVar7);
    if ((int)uStack_70 == 0) {
      *param_1 = 0;
      uVar4 = 0;
    }
    else {
      FUN_144a8b2a0(&local_88,&local_78,&DAT_149e06196);
      puVar5 = &DAT_149dfb77a;
      if (local_80 != 0) {
        puVar5 = local_88;
      }
      FUN_1400021e4(&local_60,&local_98);
      puVar6 = &DAT_149dfb77a;
      if (local_90 != 0) {
        puVar6 = local_98;
      }
      FUN_140002266(&local_58,L"%s(%s)",puVar6,puVar5);
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar5 = local_58;
      if ((int)local_50 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_1446f470e(param_1,puVar5,1);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar4 = uStack_70 & 0xffffffff;
    }
    FUN_1447a1747(local_78,uVar4);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fa54a FUN_1490fa54a body=357 status=ok
// SIG undefined FUN_1490fa54a(void)

undefined4 * FUN_1490fa54a(undefined4 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_148 [32];
  int local_128;
  undefined4 uStack_124;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0xffffffff00000080;
  param_1[0x1d] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0;
  if ((longlong)(int)param_3[1] != 0) {
    lVar3 = *param_3;
    lVar1 = (longlong)(int)param_3[1] * 0x50;
    do {
      if (*(char *)(lVar3 + 8) != '\x05') {
        FUN_1490fc8cc(lVar3,&local_128);
        local_128 = param_1[6];
        lVar2 = (longlong)local_128;
        param_1[6] = local_128 + 1U;
        if ((uint)param_1[7] < local_128 + 1U) {
          FUN_1491579da(param_1 + 4,local_128);
        }
        FUN_1490fc970(lVar2 * 0xe0 + *(longlong *)(param_1 + 4),&local_128);
        FUN_14083ed00(&local_128);
      }
      lVar3 = lVar3 + 0x50;
      lVar1 = lVar1 + -0x50;
    } while (lVar1 != 0);
  }
  FUN_1490fa356(&local_128,*param_2,param_3);
  *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_124,local_128);
  FUN_1490fcb0a(param_1,param_1[0xe] + -1);
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490fa6b0 FUN_1490fa6b0 body=411 status=ok
// SIG undefined FUN_1490fa6b0(void)

int FUN_1490fa6b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  ulonglong unaff_RBX;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  int local_98;
  int local_90;
  undefined4 local_8c;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  int *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x70) == '\0') {
    iVar9 = *(int *)(param_1 + 0x18);
  }
  else if (*(longlong *)(param_1 + 0x90) == 0) {
    iVar1 = *(int *)(param_1 + 0x80);
    if ((longlong)iVar1 == 0) {
      iVar9 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x78);
      lVar10 = 0;
      iVar9 = 0;
      do {
        unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),*(undefined1 *)(lVar2 + lVar10));
        FUN_14001a7b2();
        lVar5 = (**(code **)(DAT_14cc012d0 + 0xf8))(&DAT_14cc012d0,unaff_RBX & 0xffffffff);
        iVar9 = iVar9 + *(int *)(lVar5 + 8);
        lVar10 = lVar10 + 1;
      } while (iVar1 != lVar10);
    }
  }
  else {
    local_90 = 0;
    FUN_1456acd6c(&local_a0,param_1 + 0x78);
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14bb2bbf0;
    local_60 = param_1;
    local_58 = &local_90;
    local_88 = FUN_14447ed58;
    if ((longlong)local_98 != 0) {
      plVar8 = local_a0 + (longlong)local_98 * 2;
      plVar11 = local_a0;
      do {
        lVar2 = plVar11[1];
        if ((longlong)(int)lVar2 != 0) {
          lVar10 = *plVar11;
          lVar5 = 0;
          do {
            pcVar3 = local_88;
            local_8c = *(undefined4 *)(lVar10 + lVar5);
            pppuVar7 = local_78;
            if (local_78 == (undefined ***)0x0) {
              pppuVar7 = &local_68;
            }
            uVar6 = (*(code *)(*pppuVar7)[1])();
            cVar4 = (*pcVar3)(uVar6,&local_8c);
            if (cVar4 == '\0') goto LAB_1490fa817;
            lVar5 = lVar5 + 4;
          } while ((longlong)(int)lVar2 * 4 != lVar5);
        }
        plVar11 = plVar11 + 2;
      } while (plVar11 != plVar8);
    }
LAB_1490fa817:
    if (local_88 != (code *)0x0) {
      pppuVar7 = &local_68;
      if (local_78 != (undefined ***)0x0) {
        pppuVar7 = local_78;
      }
      (*(code *)(*pppuVar7)[2])(pppuVar7);
    }
    iVar9 = local_90;
    if (local_a0 != (longlong *)0x0) {
      FUN_1400020a8();
      iVar9 = local_90;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 1490fa84c FUN_1490fa84c body=122 status=ok
// SIG undefined FUN_1490fa84c(void)

void FUN_1490fa84c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149156d78(param_1,iVar1);
    }
    FUN_149156d4e((longlong)iVar1 * 0x28 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149156e0c(param_1,param_2,iVar1 - param_2);
    FUN_149156e72(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1490fa8c8 FUN_1490fa8c8 body=175 status=ok
// SIG undefined FUN_1490fa8c8(void)

longlong * FUN_1490fa8c8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30;
  undefined1 local_28;
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 != param_2) {
    local_30 = *(longlong *)(param_2 + 0x90) != 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 1) = local_30;
    *param_1 = param_2;
    if ((&local_38 != param_1) && ((char)param_1[2] == '\x01')) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    local_38 = param_2;
    FUN_148342ad4(param_1 + 3);
    if ((local_18._4_4_ != -1) && (local_20 != 0)) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fa978 FUN_1490fa978 body=288 status=ok
// SIG undefined FUN_1490fa978(void)

void FUN_1490fa978(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined4 *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x20;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    FUN_140147efc(lVar1);
    FUN_14014818a(lVar1);
  }
  uVar2 = FUN_1490fa6b0(param_1);
  if ((uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54)) < uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar2);
    }
    FUN_1456acb5c(lVar1,uVar2);
    iVar3 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 0x68) < iVar3)) {
      *(int *)(param_1 + 0x68) = iVar3;
      FUN_140148e72(lVar1);
    }
  }
  local_38 = &local_6c;
  local_6c = 0;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14bb2bb90;
  local_68[0] = FUN_14447eb02;
  local_40 = param_1;
  FUN_140019f06(param_1,local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar4 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar4 = &local_48;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490faa9a FUN_1490faa9a body=236 status=ok
// SIG undefined FUN_1490faa9a(void)

void FUN_1490faa9a(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  int local_64;
  undefined4 *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_149157f6a(param_1 + 0x40);
  local_64 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      local_68 = 0;
      if (0 < *(int *)(param_1 + 0x18)) {
        lVar3 = 0;
        lVar2 = 0;
        do {
          uVar1 = FUN_1444788ce(*(longlong *)(param_1 + 0x10) + lVar3,local_64);
          local_68 = FUN_144a78877(*(undefined4 *)(param_1 + 0x90),uVar1);
          lVar2 = lVar2 + 1;
          lVar3 = lVar3 + 0xe0;
        } while (lVar2 < *(int *)(param_1 + 0x18));
      }
      local_60 = &local_68;
      local_58 = &local_64;
      FUN_14012212c(param_1 + 0x40,local_4c,&local_60,0);
      local_64 = local_64 + 1;
    } while (local_64 < *(int *)(param_1 + 0x38));
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fab88 FUN_1490fab88 body=143 status=ok
// SIG undefined FUN_1490fab88(void)

void FUN_1490fab88(longlong param_1)

{
  FUN_1449db362(param_1 + 0xa8);
  FUN_1449db362(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_1409da246(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_149156c51(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490fac22 FUN_1490fac22 body=460 status=ok
// SIG undefined FUN_1490fac22(void)

undefined8 * FUN_1490fac22(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_148 [32];
  undefined2 *local_128;
  int local_120;
  undefined1 local_118 [108];
  undefined8 local_ac;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x150))(param_1,param_3);
  if (((plVar3 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar3 + 0x48))(plVar3), cVar2 != '\0')
      ) && (lVar4 = FUN_144466e1e(plVar3), lVar4 != 0)) {
    FUN_144478b26(lVar4,local_80,0);
    FUN_144466e08(plVar3,&local_128,local_80,0);
    memset(local_118,0,0x90);
    local_ac = 0xffffffff00000080;
    puVar6 = local_128;
    if (local_120 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x118))(param_1,puVar6,local_118);
    FUN_140ba0558(local_118);
    if (puVar5 != (undefined8 *)0x0) {
      *param_2 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      _Src = (void *)*puVar5;
      *(int *)(param_2 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_2,iVar1,0);
        memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
      }
      if (local_128 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_38 = 0;
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      FUN_1401ad17c(local_80);
      goto LAB_1490fadb7;
    }
    if (local_128 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_38 = 0;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_1401ad17c(local_80);
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1490fadb7:
  if ((local_30 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490fae9e FUN_1490fae9e body=142 status=ok
// SIG undefined FUN_1490fae9e(void)

void FUN_1490fae9e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0x101;
  local_30 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x3a0));
  LOCK();
  piVar1 = (int *)(param_1 + 0x3ac);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    LOCK();
    *(undefined1 *)(local_30 + 0x3a8) = (undefined1)local_28;
    UNLOCK();
  }
  FUN_1490f858a(param_1,param_2,param_3);
  FUN_1409be446(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490faf2e FUN_1490faf2e body=154 status=ok
// SIG undefined FUN_1490faf2e(void)

void FUN_1490faf2e(undefined8 *param_1)

{
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return;
}



// FUNCTION 1490fafc8 FUN_1490fafc8 body=377 status=ok
// SIG undefined FUN_1490fafc8(void)

longlong FUN_1490fafc8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  bool bVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined2 *local_98;
  int local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14001a7b2();
  local_88 = &DAT_14cc012d0;
  uStack_80 = CONCAT62(uStack_80._2_6_,0x101);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
  LOCK();
  iVar1 = DAT_14cc0167c + 1;
  UNLOCK();
  bVar4 = DAT_14cc0167c == 0;
  DAT_14cc0167c = iVar1;
  if (bVar4) {
    LOCK();
    *(undefined1 *)(local_88 + 0x75) = (undefined1)uStack_80;
    UNLOCK();
  }
  uVar2 = (**(code **)(DAT_14cc012d0 + 0x28))(&DAT_14cc012d0,param_3);
  FUN_1409be446(&local_88);
  local_68 = 0;
  local_60 = 0;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_144466e08(uVar2,&local_98,&local_88,1);
  FUN_1490faf2e(param_1);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  puVar3 = local_98;
  if (local_90 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_a0,puVar3,1);
  *(undefined8 *)(param_1 + 0x28) = local_a0;
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(&local_88);
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490fb142 FUN_1490fb142 body=142 status=ok
// SIG undefined FUN_1490fb142(void)

void FUN_1490fb142(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_4 != '\0') {
    local_40 = param_2;
    local_38 = param_3;
    FUN_140ac5c08(param_1 + 0x30,local_2c,&local_40,0);
  }
  if (param_5 != '\0') {
    local_40 = param_2;
    local_38 = param_3;
    FUN_140ac5c08(param_1 + 0x80,local_2c,&local_40,0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fb1d2 FUN_1490fb1d2 body=616 status=ok
// SIG undefined FUN_1490fb1d2(void)

undefined8 * FUN_1490fb1d2(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  longlong *local_70;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((int)param_3[1] < 2) {
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    FUN_1446e6d0e(local_80,*(undefined8 *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x128) == 0) {
      FUN_14020fad6(&local_58,&DAT_149e060e8);
    }
    else {
      lVar5 = (longlong)(*(int *)(param_1 + 0x128) + -1) * 0x10;
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x120) + 8 + lVar5);
      iVar4 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      FUN_1402980a2(&local_58,*(undefined8 *)(*(longlong *)(param_1 + 0x120) + lVar5),iVar4);
    }
    puVar6 = local_58;
    if ((int)uStack_50 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_1446f470e(local_a0,puVar6,1);
    (**(code **)(*local_70 + 0x58))(local_70,local_98,local_a0);
    FUN_1400021e4(local_98,&local_90);
    if (&local_90 == param_3) {
      if (local_90 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_90;
      local_90 = 0;
      *(undefined4 *)(param_3 + 1) = local_88;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_84;
    }
    FUN_1448eac94(local_80);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  iVar2 = *(int *)(param_1 + 0x128);
  *(uint *)(param_1 + 0x128) = iVar2 + 1U;
  if (*(uint *)(param_1 + 300) < iVar2 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x120),iVar2);
  }
  lVar5 = *(longlong *)(param_1 + 0x120);
  lVar7 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar5 + lVar7);
  *(undefined8 *)(lVar5 + lVar7) = 0;
  iVar2 = (int)param_3[1];
  pvVar3 = (void *)*param_3;
  *(int *)(lVar5 + 8 + lVar7) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,pvVar3,(longlong)iVar2 * 2);
  }
  lVar5 = *(longlong *)(param_1 + 0x120);
  lVar7 = (longlong)(*(int *)(param_1 + 0x128) + -1) * 0x10;
  *param_2 = 0;
  iVar2 = *(int *)(lVar5 + 8 + lVar7);
  pvVar3 = *(void **)(lVar5 + lVar7);
  *(int *)(param_2 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar2,0);
    memcpy((void *)*param_2,pvVar3,(longlong)iVar2 * 2);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490fb43c FUN_1490fb43c body=122 status=ok
// SIG undefined FUN_1490fb43c(void)

void FUN_1490fb43c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1490fb4b8(param_2,local_68,*(undefined8 *)(param_1 + 0x18));
  FUN_14912c540(param_1 + 0xd0,local_68);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fb4b8 FUN_1490fb4b8 body=313 status=ok
// SIG undefined FUN_1490fb4b8(void)

undefined8 * FUN_1490fb4b8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined8 *local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  if (param_3 != 0) {
    local_68 = *(longlong *)(param_3 + 0x50);
  }
  local_60 = 0xffffffff;
  local_5c = 0x101;
  local_5a = 0;
  local_70 = param_3;
  FUN_144a2daf0(&local_70);
  if (local_68 != 0) {
    do {
      if ((*(byte *)(local_68 + 0x39) & 0x20) == 0) {
        local_78 = *(undefined8 *)(local_68 + 0x20);
        FUN_1490fb618(local_88,local_68,*(int *)(local_68 + 0x44) + param_1,0);
        local_58 = &local_78;
        local_50 = local_88;
        FUN_1406e263c(param_2,local_44,&local_58);
        if (local_88[0] != 0) {
          FUN_1400020a8();
        }
      }
      local_68 = *(longlong *)(local_68 + 0x18);
      FUN_144a2daf0(&local_70);
    } while (local_68 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490fb5f2 FUN_1490fb5f2 body=38 status=ok
// SIG undefined FUN_1490fb5f2(void)

float FUN_1490fb5f2(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (1 < param_2) {
    param_2 = param_2 + -1;
    if (param_2 <= param_1) {
      param_1 = param_2;
    }
    iVar1 = 0;
    if (0 < param_1) {
      iVar1 = param_1;
    }
    fVar2 = (float)iVar1 / (float)param_2;
  }
  return fVar2;
}



// FUNCTION 1490fb618 FUN_1490fb618 body=1149 status=ok
// SIG undefined FUN_1490fb618(void)

/* WARNING: Removing unreachable block (ram,0x0001490fb74d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1490fb618(longlong *param_1,longlong *param_2,ulonglong *param_3,byte param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  byte local_79;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == (longlong *)0x0) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_90 = 0;
    local_98 = 0;
    (**(code **)(_DAT_00000000 + 0xf0))(0,param_1,param_3,0);
    goto LAB_1490fb7b2;
  }
  lVar5 = param_2[1];
  lVar4 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar10 = lVar5 != 0;
    if (lVar5 != lVar4 && bVar10) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar10 = lVar5 != 0;
        if (lVar5 == lVar4) break;
      } while (lVar5 != 0);
    }
    if (bVar10) goto LAB_1490fb80a;
LAB_1490fb678:
    lVar5 = param_2[1];
    lVar4 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar10 = lVar5 != 0;
      if (lVar5 != lVar4 && bVar10) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar10 = lVar5 != 0;
          if (lVar5 == lVar4) break;
        } while (lVar5 != 0);
      }
      if (!bVar10) goto LAB_1490fb854;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) {
LAB_1490fb854:
      local_a8 = 0;
      uStack_a0 = 0;
      local_90 = 0;
      local_98 = 0;
      (**(code **)(*param_2 + 0xf0))(param_2,param_1,param_3,0);
      lVar5 = param_2[1];
      lVar4 = FUN_144a63fc8();
      if (*(ulonglong *)(lVar4 + 8) == 0) {
        bVar10 = lVar5 != 0;
        if (lVar5 != lVar4 && bVar10) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar10 = lVar5 != 0;
            if (lVar5 == lVar4) break;
          } while (lVar5 != 0);
        }
        if (!bVar10) goto LAB_1490fb974;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) {
LAB_1490fb974:
        lVar5 = param_2[1];
        lVar4 = FUN_144a49f24();
        if (*(ulonglong *)(lVar4 + 8) == 0) {
          bVar10 = lVar5 != 0;
          if (lVar5 != lVar4 && bVar10) {
            do {
              lVar5 = *(longlong *)(lVar5 + 0x30);
              bVar10 = lVar5 != 0;
              if (lVar5 == lVar4) break;
            } while (lVar5 != 0);
          }
        }
        else {
          bVar10 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0;
        }
        param_4 = bVar10 & param_4;
      }
      if (param_4 == 0) goto LAB_1490fb925;
      if ((int)param_1[1] < 2) {
        FUN_14020fad6(param_1,&DAT_149e192d0);
LAB_1490fb7b2:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
      }
      FUN_140002266(&local_58,L"\"%s\"",*param_1);
      goto LAB_1490fba1e;
    }
    local_79 = *(byte *)(param_2 + 0xe);
    (**(code **)(*(longlong *)param_2[0xf] + 0x178))();
    iVar1 = *(int *)(param_2[0xf] + 0x34);
    local_58 = 0;
    uStack_50 = 0;
    if ((int)param_3[1] < 1) {
LAB_1490fb8f9:
      FUN_14020fad6(param_1,&DAT_149e6ee3c);
    }
    else {
      lVar9 = 0;
      lVar4 = 0;
      lVar5 = local_68;
      uVar2 = local_60;
      do {
        local_60 = uVar2;
        local_68 = lVar5;
        if ((local_79 & 1) == 0) {
          uVar6 = *param_3;
        }
        else {
          uVar6 = *param_3;
          if ((uVar6 & 1) != 0) {
            uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)param_3;
          }
        }
        FUN_1490fb618(&local_68,param_2[0xf],uVar6 + lVar9,1);
        uVar6 = uStack_50;
        lVar8 = (longlong)(int)uStack_50;
        uVar3 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
        if (uStack_50._4_4_ < uVar3) {
          FUN_1447a1bd6(&local_58,uVar6 & 0xffffffff);
        }
        lVar8 = lVar8 * 0x10;
        *(undefined8 *)(local_58 + lVar8) = 0;
        *(longlong *)(local_58 + lVar8) = local_68;
        local_68 = 0;
        lVar5 = local_68;
        *(undefined4 *)(local_58 + 8 + lVar8) = (undefined4)local_60;
        *(undefined4 *)(local_58 + 0xc + lVar8) = local_60._4_4_;
        local_60 = 0;
        uVar2 = local_60;
        local_60 = 0;
        local_68 = 0;
        lVar4 = lVar4 + 1;
        lVar9 = lVar9 + iVar1;
      } while (lVar4 < (int)param_3[1]);
      if ((int)uStack_50 == 0) goto LAB_1490fb8f9;
      FUN_144a8b2a0(&local_78,&local_58,&DAT_149e06196);
      puVar7 = local_78;
      if (local_70 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_68,L"(%s)",puVar7);
      if (&local_68 == param_1) {
        if (local_68 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = local_68;
        local_68 = 0;
        *(undefined4 *)(param_1 + 1) = (undefined4)local_60;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_60._4_4_;
        local_60 = 0;
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  }
  else {
    if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_1490fb678;
LAB_1490fb80a:
    FUN_1490fba96(&local_58,param_2[0xe],param_3);
LAB_1490fba1e:
    if (&local_58 != param_1) {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_58;
      *(int *)(param_1 + 1) = (int)uStack_50;
      *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
      goto LAB_1490fb925;
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1490fb925:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490fba96 FUN_1490fba96 body=581 status=ok
// SIG undefined FUN_1490fba96(void)

/* WARNING: Removing unreachable block (ram,0x0001490fbbf7) */

undefined8 FUN_1490fba96(undefined8 param_1,undefined2 *param_2,longlong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  uStack_50 = 0;
  if (param_2 == (undefined2 *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = *(longlong *)(param_2 + 0x28);
  }
  local_60 = 0xffffffff;
  local_5c = 0x101;
  local_5a = 0;
  local_70 = param_2;
  FUN_144a2daf0(&local_70);
  if (local_68 != 0) {
    do {
      if ((*(byte *)(local_68 + 0x39) & 0x20) == 0) {
        FUN_1400021e4(local_68 + 0x20,&local_80);
        FUN_1490fb618(&local_90,local_68,*(int *)(local_68 + 0x44) + param_3,1);
        puVar4 = &DAT_149dfb77a;
        if (local_88 != 0) {
          puVar4 = local_90;
        }
        puVar3 = &DAT_149dfb77a;
        if (local_78 != 0) {
          puVar3 = local_80;
        }
        FUN_140002266(&local_a0,L"%s=%s",puVar3,puVar4);
        uVar1 = uStack_50;
        lVar5 = (longlong)(int)uStack_50;
        uVar2 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
        if (uStack_50._4_4_ < uVar2) {
          FUN_1447a1bd6(&local_58,uVar1 & 0xffffffff);
        }
        lVar5 = lVar5 * 0x10;
        *(undefined8 *)(local_58 + lVar5) = 0;
        *(undefined8 *)(local_58 + lVar5) = local_a0;
        *(undefined4 *)(local_58 + 8 + lVar5) = (undefined4)local_98;
        *(undefined4 *)(local_58 + 0xc + lVar5) = local_98._4_4_;
        local_98 = 0;
        local_a0 = 0;
        if (local_90 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_80 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      local_68 = *(longlong *)(local_68 + 0x18);
      FUN_144a2daf0(&local_70);
    } while (local_68 != 0);
    if ((int)uStack_50 != 0) {
      FUN_144a8b2a0(&local_70,&local_58,&DAT_149e06196);
      puVar4 = local_70;
      if ((int)local_68 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_140002266(param_1,L"(%s)",puVar4);
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1490fbc60;
    }
  }
  FUN_140056680(param_1,&DAT_149e6ee3c);
LAB_1490fbc60:
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fbcdc FUN_1490fbcdc body=867 status=ok
// SIG undefined FUN_1490fbcdc(void)

undefined8 * FUN_1490fbcdc(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_3 == 0) {
    *param_2 = 0;
    goto LAB_1490fbda0;
  }
  FUN_1400021e4(param_3,&local_58);
  cVar1 = FUN_1405b43cc(&local_58);
  if (cVar1 == '\0') {
    if ((local_50 == 2) && ((ushort)((*local_58 & 0xffdfU) - 0x41U) < 0x19)) {
      local_68 = (undefined2 *)0x0;
      uStack_60 = 0;
      FUN_140002184(&local_68,(ushort)*local_58 + 1);
      puVar6 = local_68;
      if ((int)uStack_60 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      goto LAB_1490fbd74;
    }
    local_b0 = 0xffffffff;
    local_b8 = 0;
    iVar2 = FUN_1447ee042(&local_58,&DAT_149e01f60,1,1);
    if (iVar2 == -1) {
      pwVar5 = L"";
      if (local_50 != 0) {
        pwVar5 = local_58;
      }
      FUN_140002266(&local_68,L"%s_1",pwVar5);
      goto LAB_1490fbd63;
    }
    local_b0 = 0xffffffff;
    local_b8 = 1;
    uVar3 = FUN_1447ee042(&local_58,&DAT_149e01f60,1,1);
    pwVar5 = L"";
    if (local_50 != 0) {
      pwVar5 = local_58;
    }
    uVar7 = local_50 - 1;
    if (local_50 == 0) {
      uVar7 = 0;
    }
    if ((int)uVar3 < (int)uVar7) {
      uVar7 = uVar3;
    }
    uVar4 = (ulonglong)uVar7;
    if ((int)uVar7 < 1) {
      uVar4 = 0;
    }
    FUN_14006620a(&local_68,pwVar5,uVar4);
    local_b0 = 0xffffffff;
    local_b8 = 1;
    iVar2 = FUN_1447ee042(&local_58,&DAT_149e01f60,1,1);
    uVar3 = local_50 - 1;
    pwVar5 = local_58;
    if (local_50 == 0) {
      uVar3 = 0;
      pwVar5 = L"";
    }
    uVar7 = iVar2 + 1U;
    if ((int)uVar3 <= (int)(iVar2 + 1U)) {
      uVar7 = uVar3;
    }
    uVar4 = (ulonglong)uVar7;
    if ((int)uVar7 < 1) {
      uVar4 = 0;
    }
    FUN_14006620a(&local_78,pwVar5 + uVar4,uVar3 - (int)uVar4);
    puVar6 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar6 = local_78;
    }
    FUN_1446f470e(local_a8,puVar6,1);
    (**(code **)(*param_1 + 0x58))(param_1,local_a0,local_a8);
    FUN_1400021e4(local_a0,&local_98);
    puVar6 = &DAT_149dfb77a;
    if (local_90 != 0) {
      puVar6 = local_98;
    }
    puVar8 = &DAT_149dfb77a;
    if ((int)uStack_60 != 0) {
      puVar8 = local_68;
    }
    FUN_140002266(&local_88,L"%s_%s",puVar8,puVar6);
    puVar6 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar6 = local_88;
    }
    FUN_1446f470e(param_2,puVar6,1);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    pwVar5 = L"";
    if (local_50 != 0) {
      pwVar5 = local_58;
    }
    iVar2 = _wtoi(pwVar5);
    FUN_1448f870c(&local_68,iVar2 + 1);
LAB_1490fbd63:
    puVar6 = &DAT_149dfb77a;
    if ((int)uStack_60 != 0) {
      puVar6 = local_68;
    }
LAB_1490fbd74:
    FUN_1446f470e(param_2,puVar6,1);
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1490fbda0:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fc040 FUN_1490fc040 body=106 status=ok
// SIG undefined FUN_1490fc040(void)

undefined8 * FUN_1490fc040(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc01840) {
    FUN_144b3d300(&DAT_14cc01840);
    if (DAT_14cc01840 == -1) {
      DAT_14cc01830 = 0;
      uRam000000014cc01838 = 0;
      atexit((_func_5014 *)&LAB_144478c52);
      _Init_thread_footer(&DAT_14cc01840);
    }
  }
  return &DAT_14cc01830;
}



// FUNCTION 1490fc0aa FUN_1490fc0aa body=1777 status=ok
// SIG undefined FUN_1490fc0aa(void)

undefined4 * FUN_1490fc0aa(undefined4 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  undefined2 *local_80;
  int local_78;
  undefined1 local_70 [8];
  longlong local_68 [2];
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0xffffffff;
  *(longlong *)(param_1 + 1) = param_2[4];
  *(undefined1 *)(param_1 + 3) = 2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0xffffffff00000080;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  (**(code **)(*param_2 + 0x70))(param_2,local_68,local_58,0);
  FUN_140474144(&local_80,local_68,local_58);
  puVar4 = local_80;
  if (local_78 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(local_70,puVar4,1);
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar7 = (undefined *)param_2[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    FUN_1446ddbd2();
    local_90 = FUN_140b31576;
    local_98 = &DAT_14c951a38;
    local_a0 = 0;
    local_a8 = 0x208001;
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  if (DAT_14c951a98 == 0) {
    bVar9 = puVar7 != (undefined *)0x0;
    if (puVar7 != &DAT_14c951a90 && bVar9) {
      do {
        puVar7 = *(undefined **)(puVar7 + 0x30);
        bVar9 = puVar7 != (undefined *)0x0;
        if (puVar7 == &DAT_14c951a90) break;
      } while (puVar7 != (undefined *)0x0);
    }
    if (bVar9) goto LAB_1490fc673;
LAB_1490fc677:
    if (param_2 != (longlong *)0x0) goto LAB_1490fc1e0;
    goto LAB_1490fc2f2;
  }
  if ((*(ulonglong *)(puVar7 + 0x18) & DAT_14c951a98) != 0) {
LAB_1490fc673:
    param_2 = (longlong *)param_2[0xf];
    goto LAB_1490fc677;
  }
LAB_1490fc1e0:
  puVar7 = (undefined *)param_2[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    local_98 = (undefined *)FUN_1446ddbd2();
    local_90 = FUN_1403a682c;
    local_a0 = 0;
    local_a8 = 0x108001;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  if (DAT_14c952a10 == 0) {
    bVar9 = puVar7 != (undefined *)0x0;
    if (puVar7 != &DAT_14c952a08 && bVar9) {
      do {
        puVar7 = *(undefined **)(puVar7 + 0x30);
        bVar9 = puVar7 != (undefined *)0x0;
        if (puVar7 == &DAT_14c952a08) break;
      } while (puVar7 != (undefined *)0x0);
    }
    lVar8 = 0x70;
    if (!bVar9) goto LAB_1490fc229;
  }
  else {
    lVar8 = 0x70;
    if ((*(ulonglong *)(puVar7 + 0x18) & DAT_14c952a10) == 0) {
LAB_1490fc229:
      puVar7 = (undefined *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1))
      {
        local_98 = (undefined *)FUN_1446ddbd2();
        local_90 = FUN_140a4831c;
        local_a8 = 0x1000000008001;
        local_a0 = 0;
        FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
        atexit(FUN_1427e14fe);
        _Init_thread_footer(&DAT_14c9496d8);
      }
      if (DAT_14c949690 == 0) {
        bVar9 = puVar7 != (undefined *)0x0;
        if (puVar7 != &DAT_14c949688 && bVar9) {
          do {
            puVar7 = *(undefined **)(puVar7 + 0x30);
            bVar9 = puVar7 != (undefined *)0x0;
            if (puVar7 == &DAT_14c949688) break;
          } while (puVar7 != (undefined *)0x0);
        }
        if (bVar9) goto LAB_1490fc6fd;
      }
      else if ((*(ulonglong *)(puVar7 + 0x18) & DAT_14c949690) != 0) {
LAB_1490fc6fd:
        lVar8 = 0x78;
        goto LAB_1490fc703;
      }
      puVar7 = (undefined *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1))
      {
        FUN_14475b26a();
        local_90 = FUN_1409f1a5c;
        local_98 = &DAT_14c9520b8;
        local_a0 = 0;
        local_a8 = 0x1008041;
        FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
        atexit(FUN_14281201f);
        _Init_thread_footer(&DAT_14c951d78);
      }
      if (DAT_14c951d30 == 0) {
        bVar9 = puVar7 != (undefined *)0x0;
        if (puVar7 != &DAT_14c951d28 && bVar9) {
          do {
            puVar7 = *(undefined **)(puVar7 + 0x30);
            bVar9 = puVar7 != (undefined *)0x0;
            if (puVar7 == &DAT_14c951d28) break;
          } while (puVar7 != (undefined *)0x0);
        }
        if (bVar9) goto LAB_1490fc744;
      }
      else if ((*(ulonglong *)(puVar7 + 0x18) & DAT_14c951d30) != 0) {
LAB_1490fc744:
        lVar8 = 0x70;
        goto LAB_1490fc703;
      }
      puVar7 = (undefined *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952478) && (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1))
      {
        FUN_1446f4b16();
        local_90 = FUN_1403a5f94;
        local_98 = &DAT_14c951c78;
        local_a0 = 0;
        local_a8 = 0x4018001;
        FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
        atexit(FUN_1428170e8);
        _Init_thread_footer(&DAT_14c952478);
      }
      if (DAT_14c952430 == 0) {
        bVar9 = puVar7 != (undefined *)0x0;
        if (puVar7 != &DAT_14c952428 && bVar9) {
          do {
            puVar7 = *(undefined **)(puVar7 + 0x30);
            bVar9 = puVar7 != (undefined *)0x0;
            if (puVar7 == &DAT_14c952428) break;
          } while (puVar7 != (undefined *)0x0);
        }
        if (bVar9) goto LAB_1490fc784;
      }
      else if ((*(ulonglong *)(puVar7 + 0x18) & DAT_14c952430) != 0) {
LAB_1490fc784:
        lVar8 = 0x70;
        cVar2 = FUN_1456acd09();
        if (cVar2 != '\0') goto LAB_1490fc703;
      }
LAB_1490fc2f2:
      uVar5 = 0;
      goto LAB_1490fc2f5;
    }
  }
LAB_1490fc703:
  uVar5 = *(undefined8 *)((longlong)param_2 + lVar8);
LAB_1490fc2f5:
  FUN_14575417c(&local_80,local_70,uVar5);
  uVar3 = (**(code **)(*param_3 + 0x80))(param_3,&local_80,1);
  iVar1 = param_1[6];
  param_1[6] = iVar1 + 1U;
  if ((uint)param_1[7] < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 4,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 4) + (longlong)iVar1 * 4) = uVar3;
  if ((longlong)(int)param_1[6] != 0) {
    lVar8 = *(longlong *)(param_1 + 4);
    lVar6 = (longlong)(int)param_1[6] << 2;
    do {
      (**(code **)(*param_3 + 0xd0))(param_3,lVar8);
      lVar8 = lVar8 + 4;
      lVar6 = lVar6 + -4;
    } while (lVar6 != 0);
  }
  FUN_1490fa978(param_1);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490fc79c FUN_1490fc79c body=302 status=ok
// SIG undefined FUN_1490fc79c(void)

uint FUN_1490fc79c(longlong param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0xd4) == '\x01') {
    uVar5 = *(uint *)(param_1 + 0xd0);
  }
  else {
    local_68 = (undefined4 *)0x0;
    uStack_60 = 0;
    FUN_144478c64(param_1,&local_68);
    iVar1 = (int)uStack_60;
    uVar7 = uStack_60 & 0xffffffff;
    if ((int)uStack_60 < 1) {
      uVar5 = 4;
    }
    else {
      FUN_14001a7b2();
      bVar2 = (**(code **)(DAT_14cc012d0 + 0xc0))(&DAT_14cc012d0,*local_68);
      uVar5 = (uint)bVar2;
      local_78 = 0;
      uStack_70 = 0;
      cVar3 = FUN_144478822(param_1);
      if ((iVar1 != 1) && (cVar3 == '\0')) {
        uVar6 = 1;
        do {
          if (local_68[uVar6] != -1) {
            bVar4 = (**(code **)(DAT_14cc012d0 + 0xc0))(&DAT_14cc012d0);
            if (bVar2 != bVar4) {
              uVar5 = 3;
              break;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar7 != uVar6);
      }
      *(uint *)(param_1 + 0xd0) = uVar5;
      *(undefined1 *)(param_1 + 0xd4) = 1;
    }
    if (local_68 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fc8cc FUN_1490fc8cc body=163 status=ok
// SIG undefined FUN_1490fc8cc(void)

undefined8 FUN_1490fc8cc(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_148 [39];
  undefined1 local_121;
  undefined8 local_120;
  undefined1 local_118 [232];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_121 = *(undefined1 *)(param_1 + 1);
  local_120 = *param_1;
  pcVar1 = (code *)param_1[2];
  plVar3 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[4];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(local_118,uVar2,&local_120,&local_121);
  FUN_1490fc970(param_2,local_118);
  FUN_14083ed00(local_118);
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fc970 FUN_1490fc970 body=249 status=ok
// SIG undefined FUN_1490fc970(void)

undefined8 * FUN_1490fc970(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  *(undefined8 *)((longlong)param_1 + 5) = *(undefined8 *)((longlong)param_2 + 5);
  *param_1 = uVar2;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  FUN_14912c73e(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xf] = 0;
  param_1[0xf] = param_2[0xf];
  param_2[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  param_2[0x10] = 0;
  param_1[0x12] = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  param_2[0x14] = 0;
  uVar2 = param_2[0x16];
  uVar3 = param_2[0x17];
  uVar4 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar4;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar3;
  if (param_1[0x12] != 0) {
    param_2[0x12] = 0;
  }
  cVar1 = *(char *)((longlong)param_2 + 0xd4);
  *(char *)((longlong)param_1 + 0xd4) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  }
  return param_1;
}



// FUNCTION 1490fca6a FUN_1490fca6a body=159 status=ok
// SIG undefined FUN_1490fca6a(void)

undefined8 FUN_1490fca6a(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  puVar3 = &DAT_149dfb77a;
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  puVar1 = (undefined8 *)FUN_1490fcbc2(param_3);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FUN_140002266(param_1,L"%s%s",puVar3,puVar2);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fcb0a FUN_1490fcb0a body=183 status=ok
// SIG undefined FUN_1490fcb0a(void)

void FUN_1490fcb0a(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  int local_4c;
  undefined4 *local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = param_2;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x38))) {
    if ((longlong)*(int *)(param_1 + 0x18) == 0) {
      local_50 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar4 = (longlong)*(int *)(param_1 + 0x18) * 0xe0;
      uVar3 = 0;
      do {
        uVar1 = FUN_1444788ce(lVar2,param_2);
        local_50 = FUN_144a78877(uVar3,uVar1);
        lVar2 = lVar2 + 0xe0;
        lVar4 = lVar4 + -0xe0;
        uVar3 = local_50;
      } while (lVar4 != 0);
    }
    local_48 = &local_50;
    local_40 = &local_4c;
    FUN_14012212c(param_1 + 0x40,local_34,&local_48,0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490fcbc2 FUN_1490fcbc2 body=472 status=ok
// SIG undefined FUN_1490fcbc2(void)

undefined8 * FUN_1490fcbc2(byte param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc01888) {
    FUN_144b3d300(&DAT_14cc01888);
    if (DAT_14cc01888 == -1) {
      DAT_14cc01878 = 0;
      uRam000000014cc01880 = 0;
      atexit((_func_5014 *)&LAB_1444791aa);
      _Init_thread_footer(&DAT_14cc01888);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc018a0) {
    FUN_144b3d300(&DAT_14cc018a0);
    if (DAT_14cc018a0 == -1) {
      FUN_140056680(&DAT_14cc01890,&DAT_14bad94b6);
      atexit((_func_5014 *)&LAB_1444791bb);
      _Init_thread_footer(&DAT_14cc018a0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc018b8) {
    FUN_144b3d300(&DAT_14cc018b8);
    if (DAT_14cc018b8 == -1) {
      FUN_140056680(&DAT_14cc018a8,L"out ");
      atexit((_func_5014 *)&LAB_1444791cc);
      _Init_thread_footer(&DAT_14cc018b8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc018d0) {
    FUN_144b3d300(&DAT_14cc018d0);
    if (DAT_14cc018d0 == -1) {
      FUN_140056680(&DAT_14cc018c0,&DAT_14bad94c8);
      atexit((_func_5014 *)&LAB_1444791dd);
      _Init_thread_footer(&DAT_14cc018d0);
    }
  }
  if (param_1 < 4) {
    puVar1 = (undefined8 *)(&PTR_DAT_14bb2be68)[param_1];
  }
  else {
    puVar1 = &DAT_14cc01878;
  }
  return puVar1;
}



// FUNCTION 1490fcd9a FUN_1490fcd9a body=149 status=ok
// SIG undefined FUN_1490fcd9a(void)

longlong FUN_1490fcd9a(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_14001a7b2();
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)param_2 * 4);
  lVar2 = (**(code **)(DAT_14cc012d0 + 0x120))(&DAT_14cc012d0);
  lVar4 = 0;
  if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x10))) {
    plVar3 = (longlong *)(**(code **)(DAT_14cc012d0 + 0x120))(&DAT_14cc012d0);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)param_2 * 4);
    lVar4 = (longlong)(iVar1 % 0xaa) * 0x60 + *(longlong *)(*plVar3 + (longlong)(iVar1 / 0xaa) * 8);
  }
  return lVar4;
}



// FUNCTION 1490fce30 FUN_1490fce30 body=503 status=ok
// SIG undefined FUN_1490fce30(void)

undefined8 * FUN_1490fce30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = 0;
  iVar2 = *(int *)(param_2 + 1);
  pvVar3 = (void *)*param_2;
  *(int *)(puVar5 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar5,iVar2,0);
    memcpy((void *)*puVar5,pvVar3,(longlong)iVar2 * 2);
  }
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149f0ebe0;
  plVar6[2] = (longlong)puVar5;
  param_1[2] = puVar5;
  plVar4 = (longlong *)param_1[3];
  if (plVar6 == plVar4) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar6;
        goto joined_r0x0001490fcf1f;
      }
    }
  }
  else {
    param_1[3] = plVar6;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001490fcf1f:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = 0;
  iVar2 = *(int *)(param_3 + 1);
  pvVar3 = (void *)*param_3;
  *(int *)(puVar5 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar5,iVar2,0);
    memcpy((void *)*puVar5,pvVar3,(longlong)iVar2 * 2);
  }
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149f0ebe0;
  plVar6[2] = (longlong)puVar5;
  param_1[4] = puVar5;
  plVar4 = (longlong *)param_1[5];
  if (plVar6 == plVar4) {
    if (plVar6 == (longlong *)0x0) goto LAB_1490fcfeb;
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1490fcfeb;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar6;
  }
  else {
    param_1[5] = plVar6;
    if (plVar4 == (longlong *)0x0) goto LAB_1490fcfeb;
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1490fcfeb;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1490fcfeb:
  puVar7 = &DAT_149dfb77a;
  puVar8 = &DAT_149dfb77a;
  if (*(int *)((undefined8 *)param_1[2] + 1) != 0) {
    puVar8 = *(undefined2 **)param_1[2];
  }
  *param_1 = puVar8;
  if (*(int *)((undefined8 *)param_1[4] + 1) != 0) {
    puVar7 = *(undefined2 **)param_1[4];
  }
  param_1[1] = puVar7;
  return param_1;
}



// FUNCTION 1490fd028 FUN_1490fd028 body=101 status=ok
// SIG undefined FUN_1490fd028(void)

void FUN_1490fd028(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001490fd089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1490fd08e FUN_1490fd08e body=218 status=ok
// SIG undefined FUN_1490fd08e(void)

undefined8 *
FUN_1490fd08e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 *param_6)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
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
  param_1[2] = 0;
  param_1[3] = param_4;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  param_1[6] = 0;
  iVar1 = *(int *)(param_6 + 1);
  uVar2 = *param_6;
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_14001aae2(param_1 + 6,iVar1,0);
    FUN_14001aa03(param_1[6],uVar2,iVar1);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 1490fd168 FUN_1490fd168 body=202 status=ok
// SIG undefined FUN_1490fd168(void)

void FUN_1490fd168(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)((longlong)param_1 + 0x24) == -1) {
    plVar1 = param_1 + 3;
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    *plVar1 = 0;
    param_1[4] = 0;
    iVar2 = FUN_1490fa6b0(*param_1);
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    if (*(int *)((longlong)param_1 + 0x24) < iVar2) {
      FUN_14481578e(plVar1,iVar2);
    }
    local_48 = (undefined ***)0x0;
    local_38 = &PTR_LAB_14bb2bcb0;
    local_58[0] = FUN_144480958;
    local_30 = plVar1;
    FUN_140019f06(*param_1,local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar3 = local_48;
      if (local_48 == (undefined ***)0x0) {
        pppuVar3 = &local_38;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fd234 FUN_1490fd234 body=57 status=ok
// SIG undefined FUN_1490fd234(void)

void FUN_1490fd234(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc018e0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc018e0 = FUN_140002ddd(FUN_146685446,uVar1,L"RigVMUnknownType");
  }
  return;
}



// FUNCTION 1490fd292 FUN_1490fd292 body=176 status=ok
// SIG undefined FUN_1490fd292(void)

void FUN_1490fd292(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14447a43e(param_1,1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fd344 FUN_1490fd344 body=171 status=ok
// SIG undefined FUN_1490fd344(void)

void FUN_1490fd344(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14447a3dc(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fd3f0 FUN_1490fd3f0 body=176 status=ok
// SIG undefined FUN_1490fd3f0(void)

void FUN_1490fd3f0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14447a43e(param_1,3,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fd4a6 FUN_1490fd4a6 body=37 status=ok
// SIG undefined FUN_1490fd4a6(void)

void FUN_1490fd4a6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1490fd4cc();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1490fd4cc FUN_1490fd4cc body=264 status=ok
// SIG undefined FUN_1490fd4cc(void)

undefined8 FUN_1490fd4cc(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1[2];
  if (local_40 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(longlong *)(local_40 + 0x50);
  }
  local_30 = 0xffffffff;
  local_2c = 0x101;
  local_2a = 0;
  FUN_144a2daf0(&local_40);
  if (local_38 != 0) {
    do {
      lVar1 = local_38;
      lVar5 = *(longlong *)(local_38 + 8);
      lVar3 = FUN_1446ddbd2();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar6) goto LAB_1490fd574;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_1490fd574:
        cVar2 = (**(code **)(*param_1 + 0x2a0))(param_1,lVar1);
        if (cVar2 != '\0') {
          uVar4 = 1;
          goto LAB_1490fd5a9;
        }
      }
      local_38 = *(longlong *)(local_38 + 0x18);
      FUN_144a2daf0(&local_40);
    } while (local_38 != 0);
  }
  uVar4 = 0;
LAB_1490fd5a9:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1490fd5ea FUN_1490fd5ea body=204 status=ok
// SIG undefined FUN_1490fd5ea(void)

void FUN_1490fd5ea(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_148 [32];
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined2 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = &PTR_FUN_14bad5c20;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_10c = 0;
  uStack_104 = 0;
  local_fc = 0;
  local_f8 = 0x3f91111111111111;
  local_f0 = 0x800;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1490d751a(&local_128);
  FUN_140f8ceac(&local_128);
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fd6b8 FUN_1490fd6b8 body=144 status=ok
// SIG undefined FUN_1490fd6b8(void)

void FUN_1490fd6b8(undefined8 param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  
  param_2 = (undefined8 *)*param_2;
  puVar4 = (undefined1 *)param_2[4];
  uVar3 = *puVar4;
  fVar1 = *(float *)param_2[0x10];
  pfVar5 = (float *)param_2[0x14];
  fVar2 = *pfVar5;
  fVar7 = (*(float *)*param_2 - *(float *)param_2[8]) /
          (*(float *)param_2[0xc] - *(float *)param_2[8]);
  if (1.0 <= fVar7) {
    fVar7 = 1.0;
  }
  pfVar6 = (float *)param_2[0x18];
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *pfVar6 = fVar7;
  fVar7 = (float)FUN_14915b162(pfVar5,CONCAT71((int7)((ulonglong)puVar4 >> 8),uVar3));
  *pfVar6 = (fVar2 - fVar1) * fVar7 + fVar1;
  return;
}



// FUNCTION 1490fd748 FUN_1490fd748 body=323 status=ok
// SIG undefined FUN_1490fd748(void)

void FUN_1490fd748(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auStack_178 [32];
  undefined **local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined2 local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = &PTR_FUN_14bad5c20;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_13c = 0;
  uStack_134 = 0;
  local_12c = 0;
  local_128 = 0x3f91111111111111;
  local_120 = 0x800;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = local_e8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_1490d751a(&local_158);
  fVar1 = *(float *)(param_1 + 0x1c);
  fVar2 = *(float *)(param_1 + 0x18);
  fVar6 = (*(float *)(param_1 + 8) - *(float *)(param_1 + 0x10)) /
          (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x10));
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(float *)(param_1 + 0x20) = fVar6;
  fVar6 = (float)FUN_14915b162(fVar6,*(undefined1 *)(param_1 + 0xc));
  *(float *)(param_1 + 0x20) = (fVar1 - fVar2) * fVar6 + fVar2;
  FUN_140f8ceac(&local_158);
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fd88c FUN_1490fd88c body=91 status=ok
// SIG undefined FUN_1490fd88c(void)

void FUN_1490fd88c(undefined8 param_1,undefined8 *param_2)

{
  param_2 = (undefined8 *)*param_2;
  FUN_1490fda04(*(undefined4 *)*param_2,param_2[4],*(undefined4 *)param_2[8],
                *(undefined4 *)param_2[0xc],*(undefined4 *)param_2[0x10],
                *(undefined4 *)param_2[0x14],param_2[0x18]);
  return;
}



// FUNCTION 1490fd8e8 FUN_1490fd8e8 body=282 status=ok
// SIG undefined FUN_1490fd8e8(void)

void FUN_1490fd8e8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  longlong local_148;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
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
  local_148 = param_1 + 0xa8;
  local_150 = *(undefined4 *)(param_1 + 0xa4);
  local_158 = *(undefined4 *)(param_1 + 0xa0);
  FUN_1490fda04(*(undefined4 *)(param_1 + 8),param_1 + 0x10,*(undefined4 *)(param_1 + 0x98),
                *(undefined4 *)(param_1 + 0x9c));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fda04 FUN_1490fda04 body=152 status=ok
// SIG undefined FUN_1490fda04(void)

void FUN_1490fda04(float param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  float param_6,float *param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  
  fVar3 = (param_1 - param_3) / (param_4 - param_3);
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *param_7 = fVar3;
  lVar1 = FUN_1401e2d36(param_2);
  if (*(int *)(lVar1 + 0x78) < 1) {
    fVar3 = *param_7;
  }
  else {
    uVar2 = FUN_1401e2d36(param_2);
    fVar3 = (float)FUN_1448c9f94(uVar2,*param_7,0);
  }
  *param_7 = (param_6 - param_5) * fVar3 + param_5;
  return;
}



// FUNCTION 1490fda9e FUN_1490fda9e body=204 status=ok
// SIG undefined FUN_1490fda9e(void)

void FUN_1490fda9e(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_148 [32];
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined2 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = &PTR_FUN_14bad5c20;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_10c = 0;
  uStack_104 = 0;
  local_fc = 0;
  local_f8 = 0x3f91111111111111;
  local_f0 = 0x800;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1490d751a(&local_128);
  FUN_140f8ceac(&local_128);
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fdb84 FUN_1490fdb84 body=222 status=ok
// SIG undefined FUN_1490fdb84(void)

void FUN_1490fdb84(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
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
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
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
  *(float *)(param_1 + 8) = (float)(double)CONCAT44(uStack_114,uStack_118);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fdc64 FUN_1490fdc64 body=83 status=ok
// SIG undefined FUN_1490fdc64(void)

void FUN_1490fdc64(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1490fddc6(*puVar1,puVar1[4],puVar1[8],puVar1[0xc],puVar1[0x10],puVar1[0x14],puVar1[0x18],
                puVar1[0x1c]);
  return;
}



// FUNCTION 1490fdcb8 FUN_1490fdcb8 body=269 status=ok
// SIG undefined FUN_1490fdcb8(void)

void FUN_1490fdcb8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
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
  local_140 = param_1 + 0x24;
  local_148 = param_1 + 0x20;
  local_150 = param_1 + 0x1c;
  local_158 = param_1 + 0x18;
  FUN_1490fddc6(param_1 + 8,param_1 + 0xc,param_1 + 0x10,param_1 + 0x14);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fddc6 FUN_1490fddc6 body=570 status=ok
// SIG undefined FUN_1490fddc6(void)

void FUN_1490fddc6(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  LARGE_INTEGER local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402160b8(&local_58);
  iVar4 = FUN_145c31f02(&local_58);
  *param_1 = (float)iVar4;
  iVar4 = FUN_1458c553e(&local_58);
  *param_2 = (float)iVar4;
  iVar4 = FUN_145c31eb8(&local_58);
  *param_3 = (float)iVar4;
  iVar4 = FUN_145c31e70(&local_58);
  *param_4 = (float)iVar4;
  uVar2 = (uint)((ulonglong)((local_58 / 36000000000) * 0x2aaaaaab) >> 0x20);
  auVar1 = SEXT816(local_58 / 600000000) * ZEXT816(0x8888888888888889);
  lVar5 = local_58 / 10000000 - local_58 / -0x6769800000000000;
  auVar3 = SEXT816(lVar5) * ZEXT816(0x8888888888888889);
  *param_5 = (float)(int)((int)(local_58 / 36000000000) +
                         ((uVar2 >> 2) - ((int)uVar2 >> 0x1f)) * -0x18);
  *param_6 = (float)((int)(local_58 / 600000000) +
                    ((int)(auVar1._8_8_ >> 5) - (auVar1._12_4_ >> 0x1f)) * -0x3c);
  auVar1 = SEXT816(local_58 / 10000) * SEXT816(0x20c49ba5e353f7cf);
  *param_7 = (float)((int)(local_58 / 10000) +
                    ((int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f)) * -1000) * 0.001 +
             (float)((int)lVar5 + ((int)(auVar3._8_8_ >> 5) - (auVar3._12_4_ >> 0x1f)) * -0x3c);
  QueryPerformanceCounter(&local_50);
  *param_8 = (float)((double)local_50.QuadPart * DAT_14c83f420 + 16777216.0);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fe03c FUN_1490fe03c body=251 status=ok
// SIG undefined FUN_1490fe03c(void)

void FUN_1490fe03c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  double local_108;
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
  local_108 = 0.016666666666666666;
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
  if (9.99999993922529e-09 < local_108) {
    fVar4 = (float)((double)*(float *)(param_1 + 8) / local_108);
  }
  else {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0xc) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fe170 FUN_1490fe170 body=248 status=ok
// SIG undefined FUN_1490fe170(void)

void FUN_1490fe170(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  double local_108;
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
  local_108 = 0.016666666666666666;
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
  if (9.99999993922529e-09 < local_108) {
    fVar4 = (float)(local_108 * (double)*(float *)(param_1 + 8));
  }
  else {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0xc) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fe26a FUN_1490fe26a body=84 status=ok
// SIG undefined FUN_1490fe26a(void)

void FUN_1490fe26a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x58);
  if ((lVar1 != 0) && (puVar2 = (undefined8 *)*param_2, *(char *)puVar2[0x14] != '\0')) {
    FUN_14446764a(lVar1,puVar2[0x10],*puVar2,puVar2[4],puVar2[8],*(undefined4 *)puVar2[0xc]);
  }
  return;
}



// FUNCTION 1490fe2c6 FUN_1490fe2c6 body=99 status=ok
// SIG undefined FUN_1490fe2c6(void)

void FUN_1490fe2c6(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  if ((*(longlong *)(param_1 + 0x68) != 0) && (*(char *)(param_1 + 0x1d0) != '\0')) {
    FUN_14446764a(*(longlong *)(param_1 + 0x68),param_1 + 0x170,param_1 + 0x120,param_1 + 0x138,
                  param_1 + 0x150,*(undefined4 *)(param_1 + 0x160));
  }
  return;
}



// FUNCTION 1490fe32a FUN_1490fe32a body=126 status=ok
// SIG undefined FUN_1490fe32a(void)

void FUN_1490fe32a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x58);
  if ((lVar1 != 0) && (param_2 = (longlong *)*param_2, *(char *)param_2[0x10] != '\0')) {
    local_10 = *(undefined4 *)((undefined8 *)*param_2 + 1);
    local_18 = *(undefined8 *)*param_2;
    local_28 = *(undefined4 *)param_2[8];
    FUN_144467884(lVar1,param_2[0xc],&local_18,param_2[4]);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fe3b2 FUN_1490fe3b2 body=138 status=ok
// SIG undefined FUN_1490fe3b2(void)

void FUN_1490fe3b2(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  if ((*(longlong *)(param_1 + 0x68) != 0) && (*(char *)(param_1 + 0x1b0) != '\0')) {
    local_28 = *(undefined4 *)(param_1 + 0x140);
    local_18 = *(undefined4 *)(param_1 + 0x128);
    local_20 = *(undefined8 *)(param_1 + 0x120);
    FUN_144467884(*(longlong *)(param_1 + 0x68),param_1 + 0x150,&local_20,param_1 + 0x130);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fe43e FUN_1490fe43e body=97 status=ok
// SIG undefined FUN_1490fe43e(void)

void FUN_1490fe43e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1490fe5ba(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),puVar1[8],
                *(undefined4 *)puVar1[0xc],*(undefined4 *)puVar1[0x10],puVar1[0x18],
                *(undefined1 *)puVar1[0x1c]);
  return;
}



// FUNCTION 1490fe4a8 FUN_1490fe4a8 body=273 status=ok
// SIG undefined FUN_1490fe4a8(void)

void FUN_1490fe4a8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  longlong local_148;
  undefined1 local_140;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
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
  local_140 = *(undefined1 *)(param_1 + 0xb0);
  local_148 = param_1 + 0x50;
  local_150 = *(undefined4 *)(param_1 + 0x38);
  local_158 = *(undefined4 *)(param_1 + 0x34);
  FUN_1490fe5ba(&local_138,param_1 + 8,*(undefined1 *)(param_1 + 0x20),param_1 + 0x24);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fe5ba FUN_1490fe5ba body=309 status=ok
// SIG undefined FUN_1490fe5ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1490fe5ba(longlong param_1,undefined4 *param_2,char param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,char param_8)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x58) != 0 && param_8 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc01ad0) {
      FUN_144b3d300(&DAT_14cc01ad0);
      if (DAT_14cc01ad0 == -1) {
        _DAT_14cc01ac8 = DAT_14c8464f0;
        _DAT_14cc01ab8 = (undefined4)DAT_14c8464e0;
        uRam000000014cc01abc = DAT_14c8464e0._4_4_;
        uRam000000014cc01ac0 = (undefined4)DAT_14c8464e8;
        uRam000000014cc01ac4 = DAT_14c8464e8._4_4_;
        _Init_thread_footer(&DAT_14cc01ad0);
      }
    }
    local_38 = *(undefined8 *)(param_2 + 4);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    if (param_3 == '\x01') {
      local_50 = param_6;
      local_58 = param_4;
      FUN_14446764a(*(undefined8 *)(param_1 + 0x58),param_7,&DAT_14cc01ab8,&local_48);
    }
    else if (param_3 == '\0') {
      local_58 = param_4;
      FUN_144467456(*(undefined8 *)(param_1 + 0x58),param_7,&local_48,param_5);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fe6f0 FUN_1490fe6f0 body=97 status=ok
// SIG undefined FUN_1490fe6f0(void)

void FUN_1490fe6f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1490fe7cc(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),puVar1[8],
                *(undefined4 *)puVar1[0xc],*(undefined4 *)puVar1[0x10],puVar1[0x18],
                *(undefined1 *)puVar1[0x1c]);
  return;
}



// FUNCTION 1490fe75a FUN_1490fe75a body=113 status=ok
// SIG undefined FUN_1490fe75a(void)

void FUN_1490fe75a(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1490fe7cc(param_1 + 0x10,param_1 + 0x120,*(undefined1 *)(param_1 + 0x138),param_1 + 0x13c,
                *(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150),param_1 + 0x160,
                *(undefined1 *)(param_1 + 0x1c0));
  return;
}



// FUNCTION 1490fe7cc FUN_1490fe7cc body=309 status=ok
// SIG undefined FUN_1490fe7cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1490fe7cc(longlong param_1,undefined4 *param_2,char param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,char param_8)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x58) != 0 && param_8 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc01af0) {
      FUN_144b3d300(&DAT_14cc01af0);
      if (DAT_14cc01af0 == -1) {
        _DAT_14cc01ae8 = DAT_14c8464f0;
        _DAT_14cc01ad8 = (undefined4)DAT_14c8464e0;
        uRam000000014cc01adc = DAT_14c8464e0._4_4_;
        uRam000000014cc01ae0 = (undefined4)DAT_14c8464e8;
        uRam000000014cc01ae4 = DAT_14c8464e8._4_4_;
        _Init_thread_footer(&DAT_14cc01af0);
      }
    }
    local_38 = *(undefined8 *)(param_2 + 4);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    if (param_3 == '\x01') {
      local_50 = param_6;
      local_58 = param_4;
      FUN_14446764a(*(undefined8 *)(param_1 + 0x58),param_7,&DAT_14cc01ad8,&local_48);
    }
    else if (param_3 == '\0') {
      local_58 = param_4;
      FUN_144467456(*(undefined8 *)(param_1 + 0x58),param_7,&local_48,param_5);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fe902 FUN_1490fe902 body=459 status=ok
// SIG undefined FUN_1490fe902(void)

longlong FUN_1490fe902(longlong param_1,longlong param_2)

{
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  longlong local_a8 [2];
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 local_77;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = &PTR_FUN_14bb04120;
  local_77 = 0;
  local_80 = *(undefined8 *)(param_1 + 0x18);
  local_90 = *(undefined8 *)(param_1 + 8);
  uStack_88 = *(undefined8 *)(param_1 + 0x10);
  local_74 = *(undefined8 *)(param_1 + 0x24);
  uStack_6c = *(undefined8 *)(param_1 + 0x2c);
  local_64 = *(undefined4 *)(param_1 + 0x38);
  local_5c = *(undefined8 *)(param_1 + 0x3c);
  local_60 = *(undefined4 *)(param_1 + 0x34);
  local_78 = *(undefined1 *)(param_1 + 0xb0);
  FUN_1490feace(param_2);
  FUN_140056680(local_a8,L"Value");
  FUN_140056680(local_b8,L"Vector");
  local_50 = local_b8;
  local_48 = local_a8;
  FUN_140ac5c08(param_2 + 0x30,local_3c,&local_50,0);
  local_50 = local_b8;
  local_48 = local_a8;
  FUN_140ac5c08(param_2 + 0x80,local_3c,&local_50,0);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_a8,L"BoneSpace");
  FUN_140056680(local_b8,L"Space");
  local_50 = local_b8;
  local_48 = local_a8;
  FUN_140ac5c08(param_2 + 0x30,local_3c,&local_50,0);
  local_50 = local_b8;
  local_48 = local_a8;
  FUN_140ac5c08(param_2 + 0x80,local_3c,&local_50,0);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490feace FUN_1490feace body=211 status=ok
// SIG undefined FUN_1490feace(void)

undefined8 * FUN_1490feace(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_146687184();
  param_1[2] = uVar1;
  uVar1 = FUN_1466894de();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 1490feba2 FUN_1490feba2 body=25 status=ok
// SIG undefined FUN_1490feba2(void)

undefined8 FUN_1490feba2(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 1490febbc FUN_1490febbc body=89 status=ok
// SIG undefined FUN_1490febbc(void)

void FUN_1490febbc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x58);
  if ((lVar1 != 0) && (puVar2 = (undefined8 *)*param_2, *(char *)puVar2[0x18] != '\0')) {
    FUN_1444691c6(lVar1,puVar2[0x14],*puVar2,*(undefined4 *)puVar2[8],puVar2[4],
                  *(undefined4 *)puVar2[0xc]);
  }
  return;
}



// FUNCTION 1490fec1e FUN_1490fec1e body=100 status=ok
// SIG undefined FUN_1490fec1e(void)

void FUN_1490fec1e(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  if ((*(longlong *)(param_1 + 0x68) != 0) && (*(char *)(param_1 + 0x200) != '\0')) {
    FUN_1444691c6(*(longlong *)(param_1 + 0x68),param_1 + 0x1a0,param_1 + 0x120,
                  *(undefined4 *)(param_1 + 400),param_1 + 0x180,*(undefined4 *)(param_1 + 0x194));
  }
  return;
}



// FUNCTION 1490fec82 FUN_1490fec82 body=89 status=ok
// SIG undefined FUN_1490fec82(void)

void FUN_1490fec82(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x58);
  if ((lVar1 != 0) && (puVar2 = (undefined8 *)*param_2, *(char *)puVar2[0x14] != '\0')) {
    FUN_1444691c6(lVar1,puVar2[0x10],*puVar2,*(undefined4 *)puVar2[8],puVar2[4],
                  *(undefined4 *)puVar2[0xc]);
  }
  return;
}



// FUNCTION 1490fece4 FUN_1490fece4 body=100 status=ok
// SIG undefined FUN_1490fece4(void)

void FUN_1490fece4(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  if ((*(longlong *)(param_1 + 0x68) != 0) && (*(char *)(param_1 + 0x200) != '\0')) {
    FUN_1444691c6(*(longlong *)(param_1 + 0x68),param_1 + 0x1a0,param_1 + 0x120,
                  *(undefined4 *)(param_1 + 400),param_1 + 0x180,*(undefined4 *)(param_1 + 0x194));
  }
  return;
}



// FUNCTION 1490fed48 FUN_1490fed48 body=152 status=ok
// SIG undefined FUN_1490fed48(void)

void FUN_1490fed48(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x58);
  if ((lVar1 != 0) && (puVar2 = (undefined8 *)*param_2, *(char *)puVar2[0x24] != '\0')) {
    FUN_144469c20(lVar1,puVar2[0x20],*puVar2,*(undefined4 *)puVar2[8],
                  *(float *)puVar2[0xc] * 0.017453292,*(float *)puVar2[0x10] * 0.017453292,puVar2[4]
                  ,*(undefined4 *)puVar2[0x14],*(undefined4 *)puVar2[0x18]);
  }
  return;
}



// FUNCTION 1490fede8 FUN_1490fede8 body=40 status=ok
// SIG undefined FUN_1490fede8(void)

void FUN_1490fede8(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1490fee10(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 1490fee10 FUN_1490fee10 body=136 status=ok
// SIG undefined FUN_1490fee10(void)

void FUN_1490fee10(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_2 + 0x58) != 0) && (*(char *)(param_1 + 0x210) != '\0')) {
    FUN_144469c20(*(longlong *)(param_2 + 0x58),param_1 + 0x1b0,param_1 + 0x120,
                  *(undefined4 *)(param_1 + 400),*(float *)(param_1 + 0x194) * 0.017453292,
                  *(float *)(param_1 + 0x198) * 0.017453292,param_1 + 0x180,
                  *(undefined4 *)(param_1 + 0x19c),*(undefined4 *)(param_1 + 0x1a0));
  }
  return;
}



// FUNCTION 1490fee98 FUN_1490fee98 body=152 status=ok
// SIG undefined FUN_1490fee98(void)

void FUN_1490fee98(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x58);
  if ((lVar1 != 0) && (puVar2 = (undefined8 *)*param_2, *(char *)puVar2[0x20] != '\0')) {
    FUN_144469c20(lVar1,puVar2[0x1c],*puVar2,*(undefined4 *)puVar2[8],
                  *(float *)puVar2[0xc] * 0.017453292,*(float *)puVar2[0x10] * 0.017453292,puVar2[4]
                  ,*(undefined4 *)puVar2[0x14],*(undefined4 *)puVar2[0x18]);
  }
  return;
}



// FUNCTION 1490fef38 FUN_1490fef38 body=40 status=ok
// SIG undefined FUN_1490fef38(void)

void FUN_1490fef38(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1490fef60(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 1490fef60 FUN_1490fef60 body=136 status=ok
// SIG undefined FUN_1490fef60(void)

void FUN_1490fef60(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_2 + 0x58) != 0) && (*(char *)(param_1 + 0x210) != '\0')) {
    FUN_144469c20(*(longlong *)(param_2 + 0x58),param_1 + 0x1b0,param_1 + 0x120,
                  *(undefined4 *)(param_1 + 400),*(float *)(param_1 + 0x194) * 0.017453292,
                  *(float *)(param_1 + 0x198) * 0.017453292,param_1 + 0x180,
                  *(undefined4 *)(param_1 + 0x19c),*(undefined4 *)(param_1 + 0x1a0));
  }
  return;
}



// FUNCTION 1490fefe8 FUN_1490fefe8 body=63 status=ok
// SIG undefined FUN_1490fefe8(void)

void FUN_1490fefe8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1490ff086(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],*(undefined4 *)puVar1[8],
                puVar1[0xc],*(undefined1 *)puVar1[0x10]);
  return;
}



// FUNCTION 1490ff030 FUN_1490ff030 body=86 status=ok
// SIG undefined FUN_1490ff030(void)

void FUN_1490ff030(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1490ff086(param_1 + 0x10,param_1 + 0x120,param_1 + 0x158,*(undefined4 *)(param_1 + 0x168),
                param_1 + 0x170,*(undefined1 *)(param_1 + 0x1d0));
  return;
}



// FUNCTION 1490ff086 FUN_1490ff086 body=374 status=ok
// SIG undefined FUN_1490ff086(void)

void FUN_1490ff086(longlong param_1,double *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,char param_6)

{
  double dVar1;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  double local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(longlong *)(param_1 + 0x58) != 0) && (param_6 != '\0')) &&
     (*(char *)(param_2 + 6) != '\0')) {
    local_b8 = DAT_14c846490;
    uStack_b0 = DAT_14c846498;
    local_c8 = DAT_14c846480;
    uStack_c0 = DAT_14c846488;
    local_98 = (param_2[2] + param_2[5]) * 0.5;
    dVar1 = (param_2[1] + param_2[4]) * 0.5;
    local_a8._8_4_ = SUB84(dVar1,0);
    local_a8._0_8_ = (*param_2 + param_2[3]) * 0.5;
    local_a8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    uStack_90 = 0;
    local_78 = param_2[5] - param_2[2];
    dVar1 = param_2[4] - param_2[1];
    local_88._8_4_ = SUB84(dVar1,0);
    local_88._0_8_ = param_2[3] - *param_2;
    local_88._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    uStack_70 = 0;
    local_d8 = param_4;
    FUN_144467984(*(longlong *)(param_1 + 0x58),param_5,&local_c8,param_3);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ff1fe FUN_1490ff1fe body=363 status=ok
// SIG undefined FUN_1490ff1fe(void)

undefined8 FUN_1490ff1fe(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_268 [32];
  undefined **local_248 [2];
  undefined **local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined2 local_220;
  undefined8 local_21c;
  undefined8 uStack_214;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8 [12];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128 [12];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_a8 [12];
  undefined1 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_238 = &PTR_FUN_14bad5c20;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  local_21c = 0;
  uStack_214 = 0;
  local_20c = 0;
  local_208 = 0x3f91111111111111;
  local_200 = 0x800;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_1c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_248[0] = &PTR_FUN_14bb04a00;
  puVar2 = (undefined8 *)(param_1 + 0x120);
  puVar3 = local_128;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_c8 = *(undefined8 *)(param_1 + 0x180);
  uStack_c0 = *(undefined8 *)(param_1 + 0x188);
  local_b8 = *(undefined4 *)(param_1 + 400);
  local_b4 = *(undefined4 *)(param_1 + 0x194);
  puVar2 = (undefined8 *)(param_1 + 0x1a0);
  puVar3 = local_a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = *(undefined1 *)(param_1 + 0x200);
  FUN_1490ff44c(param_2,local_248);
  local_248[0] = &PTR_FUN_14bad5830;
  FUN_140f8ceac(&local_238);
  if ((local_30 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ff36a FUN_1490ff36a body=225 status=ok
// SIG undefined FUN_1490ff36a(void)

void FUN_1490ff36a(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bad5830;
  param_1[2] = &PTR_FUN_14bad5c20;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0x3f91111111111111;
  param_1[9] = 0x800;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_14bb04a00;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x24;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x30] = 0x3f800000;
  param_1[0x31] = 0x3f80000000000000;
  param_1[0x32] = &DAT_41200000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x34;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



// FUNCTION 1490ff44c FUN_1490ff44c body=211 status=ok
// SIG undefined FUN_1490ff44c(void)

undefined8 * FUN_1490ff44c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_14668797c();
  param_1[2] = uVar1;
  uVar1 = FUN_146687d20();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 1490ff520 FUN_1490ff520 body=410 status=ok
// SIG undefined FUN_1490ff520(void)

undefined8 FUN_1490ff520(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_278 [32];
  undefined **local_258 [2];
  undefined **local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined2 local_230;
  undefined8 local_22c;
  undefined8 uStack_224;
  undefined4 local_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8 [12];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138 [12];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 local_a8 [12];
  undefined1 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_248 = &PTR_FUN_14bad5c20;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0;
  local_22c = 0;
  uStack_224 = 0;
  local_21c = 0;
  local_218 = 0x3f91111111111111;
  local_210 = 0x800;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_1d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_258[0] = &PTR_FUN_14bb04a80;
  puVar2 = (undefined8 *)(param_1 + 0x120);
  puVar3 = local_138;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_d8 = *(undefined8 *)(param_1 + 0x180);
  uStack_d0 = *(undefined8 *)(param_1 + 0x188);
  local_c8 = *(undefined4 *)(param_1 + 400);
  local_c4 = *(undefined4 *)(param_1 + 0x194);
  local_c0 = *(undefined4 *)(param_1 + 0x198);
  local_bc = *(undefined4 *)(param_1 + 0x19c);
  local_b8 = *(undefined4 *)(param_1 + 0x1a0);
  puVar2 = (undefined8 *)(param_1 + 0x1b0);
  puVar3 = local_a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = *(undefined1 *)(param_1 + 0x210);
  FUN_1490ff7aa(param_2,local_258);
  local_258[0] = &PTR_FUN_14bad5830;
  FUN_140f8ceac(&local_248);
  if ((local_30 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ff6bc FUN_1490ff6bc body=238 status=ok
// SIG undefined FUN_1490ff6bc(void)

void FUN_1490ff6bc(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bad5830;
  param_1[2] = &PTR_FUN_14bad5c20;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0x3f91111111111111;
  param_1[9] = 0x800;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_14bb04a80;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x24;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x30] = 0x3f800000;
  param_1[0x31] = 0x3f80000000000000;
  param_1[0x32] = &DAT_41200000;
  param_1[0x33] = 0x43b40000;
  *(undefined4 *)(param_1 + 0x34) = 0x10;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x36;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x42) = 1;
  return;
}



// FUNCTION 1490ff7aa FUN_1490ff7aa body=211 status=ok
// SIG undefined FUN_1490ff7aa(void)

undefined8 * FUN_1490ff7aa(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_14668806a();
  param_1[2] = uVar1;
  uVar1 = FUN_146688504();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 1490ff87e FUN_1490ff87e body=97 status=ok
// SIG undefined FUN_1490ff87e(void)

void FUN_1490ff87e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1490ff95a(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),puVar1[8],
                *(undefined4 *)puVar1[0xc],*(undefined4 *)puVar1[0x10],puVar1[0x14],
                *(undefined1 *)puVar1[0x18]);
  return;
}



// FUNCTION 1490ff8e8 FUN_1490ff8e8 body=113 status=ok
// SIG undefined FUN_1490ff8e8(void)

void FUN_1490ff8e8(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1490ff95a(param_1 + 0x10,param_1 + 0x120,*(undefined1 *)(param_1 + 0x180),param_1 + 0x184,
                *(undefined4 *)(param_1 + 0x194),*(undefined4 *)(param_1 + 0x198),param_1 + 0x1a0,
                *(undefined1 *)(param_1 + 0x200));
  return;
}



// FUNCTION 1490ff95a FUN_1490ff95a body=289 status=ok
// SIG undefined FUN_1490ff95a(void)

void FUN_1490ff95a(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                  undefined4 param_5,float param_6,undefined8 param_7,char param_8)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  double local_38;
  double dStack_30;
  double local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0 && param_8 == '\x01') {
    puVar3 = local_78;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    if (param_3 == '\0') {
      local_98 = local_58;
      uStack_90 = uStack_50;
      local_88 = local_48;
      local_a8 = param_4;
      FUN_144467456(lVar1,param_7);
    }
    else if (param_3 == '\x02') {
      dVar4 = (double)param_6;
      local_28 = local_28 * dVar4;
      dStack_30 = dStack_30 * dVar4;
      local_38 = dVar4 * local_38;
      uStack_20 = 0;
      local_a8 = CONCAT44(local_a8._4_4_,param_5);
      FUN_144467984(lVar1);
    }
    else if (param_3 == '\x01') {
      local_a8 = CONCAT44(local_a8._4_4_,param_5);
      FUN_14446882c(lVar1,param_7,local_78);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ffa7c FUN_1490ffa7c body=186 status=ok
// SIG undefined FUN_1490ffa7c(void)

void FUN_1490ffa7c(longlong param_1,longlong *param_2)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined1 local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2 = (longlong *)*param_2;
  local_68 = param_2[0xc];
  local_60 = *(undefined4 *)param_2[0x10];
  local_58 = *(undefined4 *)param_2[0x14];
  local_50 = param_2[0x18];
  local_48 = *(undefined1 *)param_2[0x1c];
  local_28 = *(undefined8 *)param_2[4];
  local_20 = *(undefined4 *)((undefined8 *)param_2[4] + 1);
  local_38 = *(undefined8 *)*param_2;
  local_30 = *(undefined4 *)((undefined8 *)*param_2 + 1);
  FUN_1490ffc02(*(undefined8 *)(param_1 + 0xc0),&local_38,&local_28,*(undefined1 *)param_2[8]);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ffb40 FUN_1490ffb40 body=193 status=ok
// SIG undefined FUN_1490ffb40(void)

void FUN_1490ffb40(longlong param_1)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined1 local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x120);
  local_20 = *(undefined4 *)(param_1 + 0x128);
  local_38 = *(undefined8 *)(param_1 + 0x130);
  local_30 = *(undefined4 *)(param_1 + 0x138);
  local_48 = *(undefined1 *)(param_1 + 0x1c0);
  local_50 = param_1 + 0x160;
  local_58 = *(undefined4 *)(param_1 + 0x158);
  local_60 = *(undefined4 *)(param_1 + 0x154);
  local_68 = param_1 + 0x144;
  FUN_1490ffc02(param_1 + 0x10,&local_28,&local_38,*(undefined1 *)(param_1 + 0x140));
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ffc02 FUN_1490ffc02 body=417 status=ok
// SIG undefined FUN_1490ffc02(void)

void FUN_1490ffc02(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  char param_9)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(longlong *)(param_1 + 0x58) != 0 && param_9 == '\x01') && ((longlong)(int)param_2[1] != 0))
  {
    lVar6 = *param_2;
    lVar7 = (longlong)(int)param_2[1] * 0x60;
    do {
      local_b8 = param_8;
      local_c0 = param_7;
      local_c8 = CONCAT44(local_c8._4_4_,param_6);
      local_b0 = 1;
      FUN_1490ff95a(param_1,lVar6,param_4,param_5);
      lVar6 = lVar6 + 0x60;
      lVar7 = lVar7 + -0x60;
    } while (lVar7 != 0);
    iVar4 = (int)param_2[1];
    if (0 < (int)param_3[1] && (int)param_3[1] == iVar4) {
      lVar6 = 0xc;
      lVar7 = 0;
      do {
        iVar2 = *(int *)(*param_3 + lVar7 * 4);
        if ((-1 < (longlong)iVar2) && (iVar2 < (int)param_2[1])) {
          lVar3 = *param_2;
          lVar5 = (longlong)iVar2 * 0x60;
          puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar5);
          local_88 = *puVar1;
          uStack_80 = puVar1[1];
          local_78 = *(undefined8 *)(lVar3 + 0x30 + lVar5);
          puVar1 = (undefined8 *)(lVar3 + -0x10 + lVar6 * 4);
          local_a8 = *puVar1;
          uStack_a0 = puVar1[1];
          local_98 = *(undefined8 *)(lVar3 + lVar6 * 4);
          local_c0 = param_6;
          local_c8 = param_5;
          FUN_14446764a(*(undefined8 *)(param_1 + 0x58),param_8,&local_a8,&local_88);
          iVar4 = (int)param_3[1];
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x18;
      } while (lVar7 < iVar4);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ffda4 FUN_1490ffda4 body=86 status=ok
// SIG undefined FUN_1490ffda4(void)

void FUN_1490ffda4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14910006c(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),
                CONCAT71((int7)((ulonglong)puVar1[8] >> 8),*(undefined1 *)puVar1[8]),puVar1[0xc],
                *(undefined4 *)puVar1[0x10],*(undefined4 *)puVar1[0x14]);
  return;
}



// FUNCTION 1490ffe00 FUN_1490ffe00 body=263 status=ok
// SIG undefined FUN_1490ffe00(void)

void FUN_1490ffe00(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined4 local_150;
  undefined4 local_148;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
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
  local_148 = *(undefined4 *)(param_1 + 0x38);
  local_150 = *(undefined4 *)(param_1 + 0x34);
  local_158 = param_1 + 0x24;
  FUN_14910006c(&local_138,param_1 + 8,*(undefined1 *)(param_1 + 0x20),
                *(undefined1 *)(param_1 + 0x21));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490fff08 FUN_1490fff08 body=86 status=ok
// SIG undefined FUN_1490fff08(void)

void FUN_1490fff08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14910006c(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),
                CONCAT71((int7)((ulonglong)puVar1[8] >> 8),*(undefined1 *)puVar1[8]),puVar1[0xc],
                *(undefined4 *)puVar1[0x10],*(undefined4 *)puVar1[0x14]);
  return;
}



// FUNCTION 1490fff64 FUN_1490fff64 body=263 status=ok
// SIG undefined FUN_1490fff64(void)

void FUN_1490fff64(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined4 local_150;
  undefined4 local_148;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
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
  local_148 = *(undefined4 *)(param_1 + 0x38);
  local_150 = *(undefined4 *)(param_1 + 0x34);
  local_158 = param_1 + 0x24;
  FUN_14910006c(&local_138,param_1 + 8,*(undefined1 *)(param_1 + 0x20),
                *(undefined1 *)(param_1 + 0x21));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910006c FUN_14910006c body=363 status=ok
// SIG undefined FUN_14910006c(void)

void FUN_14910006c(longlong param_1,double *param_2,char param_3,char param_4,undefined8 param_5,
                  undefined4 param_6,float param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x58) != 0 && param_3 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc01ce0) {
      FUN_144b3d300(&DAT_14cc01ce0);
      if (DAT_14cc01ce0 == -1) {
        puVar2 = &DAT_14c846480;
        puVar3 = &DAT_14cc01c80;
        for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        _Init_thread_footer(&DAT_14cc01ce0);
      }
    }
    if (param_4 == '\x01') {
      local_78 = (double)param_7;
      local_68 = param_2[2] * local_78;
      local_70 = param_2[1] * local_78;
      local_78 = local_78 * *param_2;
      local_80 = param_6;
      local_88 = param_5;
      FUN_14446764a(*(undefined8 *)(param_1 + 0x58),&DAT_14cc01c80,&DAT_14c8464e0);
    }
    else if (param_4 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149100200 FUN_149100200 body=151 status=ok
// SIG undefined FUN_149100200(void)

void FUN_149100200(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  puVar3 = (undefined4 *)*param_2;
  uVar2 = *(undefined1 *)param_2[4];
  uVar1 = *(undefined4 *)param_2[8];
  local_88 = *(undefined4 *)param_2[0xc];
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  puVar6 = &DAT_14c846480;
  puVar7 = &local_78;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_78._0_4_ = *puVar3;
  local_78._4_4_ = puVar3[1];
  uStack_70 = puVar3[2];
  uStack_6c = puVar3[3];
  local_68 = puVar3[4];
  uStack_64 = puVar3[5];
  uStack_60 = puVar3[6];
  uStack_5c = puVar3[7];
  FUN_1491007e4(uVar4,&local_78,uVar2,uVar1);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910029e FUN_14910029e body=285 status=ok
// SIG undefined FUN_14910029e(void)

void FUN_14910029e(longlong param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined2 local_190;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138 [12];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = &PTR_FUN_14bad5c20;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  local_18c = 0;
  uStack_184 = 0;
  local_17c = 0;
  local_178 = 0x3f91111111111111;
  local_170 = 0x800;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = local_138;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_1490d751a(&local_1a8);
  local_1b8 = *(undefined4 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x30);
  puVar4 = &DAT_14c846480;
  puVar5 = &local_98;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_98._0_4_ = *(undefined4 *)(param_1 + 0x10);
  local_98._4_4_ = *(undefined4 *)(param_1 + 0x14);
  uStack_90 = *(undefined4 *)(param_1 + 0x18);
  uStack_8c = *(undefined4 *)(param_1 + 0x1c);
  local_88 = *(undefined4 *)(param_1 + 0x20);
  uStack_84 = *(undefined4 *)(param_1 + 0x24);
  uStack_80 = *(undefined4 *)(param_1 + 0x28);
  uStack_7c = *(undefined4 *)(param_1 + 0x2c);
  FUN_1491007e4(&local_1a8,&local_98,uVar2,uVar1);
  FUN_140f8ceac(&local_1a8);
  if ((local_30 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491003bc FUN_1491003bc body=151 status=ok
// SIG undefined FUN_1491003bc(void)

void FUN_1491003bc(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  puVar3 = (undefined4 *)*param_2;
  uVar2 = *(undefined1 *)param_2[4];
  uVar1 = *(undefined4 *)param_2[8];
  local_88 = *(undefined4 *)param_2[0xc];
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  puVar6 = &DAT_14c846480;
  puVar7 = &local_78;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_78._0_4_ = *puVar3;
  local_78._4_4_ = puVar3[1];
  uStack_70 = puVar3[2];
  uStack_6c = puVar3[3];
  local_68 = puVar3[4];
  uStack_64 = puVar3[5];
  uStack_60 = puVar3[6];
  uStack_5c = puVar3[7];
  FUN_1491007e4(uVar4,&local_78,uVar2,uVar1);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910045a FUN_14910045a body=285 status=ok
// SIG undefined FUN_14910045a(void)

void FUN_14910045a(longlong param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined2 local_190;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138 [12];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = &PTR_FUN_14bad5c20;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  local_18c = 0;
  uStack_184 = 0;
  local_17c = 0;
  local_178 = 0x3f91111111111111;
  local_170 = 0x800;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = local_138;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_1490d751a(&local_1a8);
  local_1b8 = *(undefined4 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x30);
  puVar4 = &DAT_14c846480;
  puVar5 = &local_98;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_98._0_4_ = *(undefined4 *)(param_1 + 0x10);
  local_98._4_4_ = *(undefined4 *)(param_1 + 0x14);
  uStack_90 = *(undefined4 *)(param_1 + 0x18);
  uStack_8c = *(undefined4 *)(param_1 + 0x1c);
  local_88 = *(undefined4 *)(param_1 + 0x20);
  uStack_84 = *(undefined4 *)(param_1 + 0x24);
  uStack_80 = *(undefined4 *)(param_1 + 0x28);
  uStack_7c = *(undefined4 *)(param_1 + 0x2c);
  FUN_1491007e4(&local_1a8,&local_98,uVar2,uVar1);
  FUN_140f8ceac(&local_1a8);
  if ((local_30 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149100578 FUN_149100578 body=58 status=ok
// SIG undefined FUN_149100578(void)

void FUN_149100578(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1491007e4(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),
                *(undefined4 *)puVar1[8],*(undefined4 *)puVar1[0xc]);
  return;
}



// FUNCTION 1491005b8 FUN_1491005b8 body=244 status=ok
// SIG undefined FUN_1491005b8(void)

void FUN_1491005b8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  undefined4 local_148;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
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
  local_148 = *(undefined4 *)(param_1 + 0x78);
  FUN_1491007e4(&local_138,param_1 + 0x10,*(undefined1 *)(param_1 + 0x70),
                *(undefined4 *)(param_1 + 0x74));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491006ae FUN_1491006ae body=58 status=ok
// SIG undefined FUN_1491006ae(void)

void FUN_1491006ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1491007e4(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),
                *(undefined4 *)puVar1[8],*(undefined4 *)puVar1[0xc]);
  return;
}



// FUNCTION 1491006ee FUN_1491006ee body=244 status=ok
// SIG undefined FUN_1491006ee(void)

void FUN_1491006ee(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  undefined4 local_148;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
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
  local_148 = *(undefined4 *)(param_1 + 0x78);
  FUN_1491007e4(&local_138,param_1 + 0x10,*(undefined1 *)(param_1 + 0x70),
                *(undefined4 *)(param_1 + 0x74));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491007e4 FUN_1491007e4 body=192 status=ok
// SIG undefined FUN_1491007e4(void)

void FUN_1491007e4(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0x58) != 0 && param_3 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc01d50) {
      FUN_144b3d300(&DAT_14cc01d50);
      if (DAT_14cc01d50 == -1) {
        puVar2 = &DAT_14c846480;
        puVar3 = &DAT_14cc01cf0;
        for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        _Init_thread_footer(&DAT_14cc01d50);
      }
    }
    FUN_14446882c(*(undefined8 *)(param_1 + 0x58),&DAT_14cc01cf0,param_2,param_5,param_4);
  }
  return;
}



// FUNCTION 1491008a4 FUN_1491008a4 body=295 status=ok
// SIG undefined FUN_1491008a4(void)

longlong FUN_1491008a4(longlong param_1,longlong param_2)

{
  undefined1 auStack_c8 [40];
  longlong local_a0 [2];
  longlong local_90 [2];
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  undefined4 local_48;
  longlong *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = &PTR_FUN_14bb05a50;
  local_5f = 0;
  local_68 = *(undefined8 *)(param_1 + 0x18);
  local_78 = *(undefined8 *)(param_1 + 8);
  uStack_70 = *(undefined8 *)(param_1 + 0x10);
  local_5c = *(undefined8 *)(param_1 + 0x24);
  uStack_54 = *(undefined8 *)(param_1 + 0x2c);
  local_4c = *(undefined4 *)(param_1 + 0x34);
  local_48 = *(undefined4 *)(param_1 + 0x38);
  local_60 = *(undefined1 *)(param_1 + 0x20);
  FUN_1491009cc(param_2);
  FUN_140056680(local_90,L"Space.Name");
  FUN_140056680(local_a0,L"BoneSpace");
  local_40 = local_a0;
  local_38 = local_90;
  FUN_140ac5c08(param_2 + 0x30,local_2c,&local_40,0);
  local_40 = local_a0;
  local_38 = local_90;
  FUN_140ac5c08(param_2 + 0x80,local_2c,&local_40,0);
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491009cc FUN_1491009cc body=211 status=ok
// SIG undefined FUN_1491009cc(void)

undefined8 * FUN_1491009cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466894de();
  param_1[2] = uVar1;
  uVar1 = FUN_146689884();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149100aa0 FUN_149100aa0 body=271 status=ok
// SIG undefined FUN_149100aa0(void)

longlong FUN_149100aa0(longlong param_1,longlong param_2)

{
  undefined1 auStack_c8 [40];
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong *local_80;
  longlong *local_78;
  undefined1 local_6c [4];
  undefined **local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = &PTR_FUN_14bb05ad0;
  local_58 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  local_48 = *(undefined4 *)(param_1 + 0x20);
  uStack_44 = *(undefined4 *)(param_1 + 0x24);
  uStack_40 = *(undefined4 *)(param_1 + 0x28);
  uStack_3c = *(undefined4 *)(param_1 + 0x2c);
  local_34 = *(undefined4 *)(param_1 + 0x34);
  local_30 = *(undefined4 *)(param_1 + 0x38);
  local_38 = *(undefined1 *)(param_1 + 0x30);
  FUN_149100bb0(param_2);
  FUN_140056680(local_90,L"Space.Name");
  FUN_140056680(local_a0,L"BoneSpace");
  local_80 = local_a0;
  local_78 = local_90;
  FUN_140ac5c08(param_2 + 0x30,local_6c,&local_80,0);
  local_80 = local_a0;
  local_78 = local_90;
  FUN_140ac5c08(param_2 + 0x80,local_6c,&local_80,0);
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149100bb0 FUN_149100bb0 body=211 status=ok
// SIG undefined FUN_149100bb0(void)

undefined8 * FUN_149100bb0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_146689bd2();
  param_1[2] = uVar1;
  uVar1 = FUN_146689eca();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149100c84 FUN_149100c84 body=291 status=ok
// SIG undefined FUN_149100c84(void)

longlong FUN_149100c84(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_108 [32];
  longlong local_e8 [2];
  longlong local_d8 [2];
  undefined **local_c8 [2];
  undefined8 local_b8 [12];
  undefined1 local_58;
  undefined4 local_54;
  undefined4 local_50;
  longlong *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8[0] = &PTR_FUN_14bb05b50;
  puVar2 = (undefined8 *)(param_1 + 0x10);
  puVar3 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_54 = *(undefined4 *)(param_1 + 0x74);
  local_50 = *(undefined4 *)(param_1 + 0x78);
  local_58 = *(undefined1 *)(param_1 + 0x70);
  FUN_149100da8(param_2,local_c8);
  FUN_140056680(local_d8,L"Space.Name");
  FUN_140056680(local_e8,L"BoneSpace");
  local_40 = local_e8;
  local_38 = local_d8;
  FUN_140ac5c08(param_2 + 0x30,local_2c,&local_40,0);
  local_40 = local_e8;
  local_38 = local_d8;
  FUN_140ac5c08(param_2 + 0x80,local_2c,&local_40,0);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149100da8 FUN_149100da8 body=211 status=ok
// SIG undefined FUN_149100da8(void)

undefined8 * FUN_149100da8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_14668a172();
  param_1[2] = uVar1;
  uVar1 = FUN_14668a46a();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149100e7c FUN_149100e7c body=4 status=ok
// SIG undefined FUN_149100e7c(void)

void FUN_149100e7c(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  return;
}



// FUNCTION 149100e9a FUN_149100e9a body=65 status=ok
// SIG undefined FUN_149100e9a(void)

void FUN_149100e9a(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x140) + 8))(param_1 + 0x140);
  FUN_149100edc(param_1 + 0x120,*(undefined4 *)(param_1 + 0x128),param_1 + 300,param_1 + 0x130);
  return;
}



// FUNCTION 149100edc FUN_149100edc body=210 status=ok
// SIG undefined FUN_149100edc(void)

void FUN_149100edc(longlong *param_1,int param_2,int *param_3,float *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    *param_3 = 0;
    FUN_1446f57c6(&DAT_14cc00d40,&local_38);
    *param_1 = local_38;
    iVar2 = *param_3;
  }
  else {
    cVar1 = FUN_1403f35db(*param_1,&DAT_14cc00d40);
    iVar2 = *param_3;
    if (cVar1 != '\0') {
      iVar2 = iVar2 + 1;
      *param_3 = iVar2;
    }
  }
  if (iVar2 == param_2) {
    FUN_1446f57c6(&DAT_14cc00db0,&local_38);
    *param_1 = local_38;
  }
  fVar4 = 0.0;
  if (1 < param_2) {
    param_2 = param_2 + -1;
    iVar2 = *param_3;
    if (param_2 <= *param_3) {
      iVar2 = param_2;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    fVar4 = (float)iVar3 / (float)param_2;
  }
  *param_4 = fVar4;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149100fd0 FUN_149100fd0 body=43 status=ok
// SIG undefined FUN_149100fd0(void)

void FUN_149100fd0(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 149100ffc FUN_149100ffc body=322 status=ok
// SIG undefined FUN_149100ffc(void)

undefined8 * FUN_149100ffc(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x120) == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc01d98) && (FUN_144b3d300(&DAT_14cc01d98), DAT_14cc01d98 == -1)) {
      FUN_140056680(&DAT_14cc01d88,L"Invalid Event");
      atexit((_func_5014 *)&LAB_14447a726);
      _Init_thread_footer(&DAT_14cc01d98);
    }
    *param_2 = 0;
    iVar1 = DAT_14cc01d90;
    _Src = DAT_14cc01d88;
    lVar3 = (longlong)DAT_14cc01d90;
    *(int *)(param_2 + 1) = DAT_14cc01d90;
    if (lVar3 != 0) {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,lVar3 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1400021e4(param_1 + 0x120,&local_30);
    puVar2 = local_30;
    if (local_28 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140056680(param_2,puVar2);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149101180 FUN_149101180 body=204 status=ok
// SIG undefined FUN_149101180(void)

void FUN_149101180(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_148 [32];
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined2 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = &PTR_FUN_14bad5c20;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_10c = 0;
  uStack_104 = 0;
  local_fc = 0;
  local_f8 = 0x3f91111111111111;
  local_f0 = 0x800;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1490d751a(&local_128);
  FUN_140f8ceac(&local_128);
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149101258 FUN_149101258 body=213 status=ok
// SIG undefined FUN_149101258(void)

void FUN_149101258(longlong param_1)

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
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149101338 FUN_149101338 body=213 status=ok
// SIG undefined FUN_149101338(void)

void FUN_149101338(longlong param_1)

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
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149101420 FUN_149101420 body=217 status=ok
// SIG undefined FUN_149101420(void)

void FUN_149101420(longlong param_1)

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
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 8) ^ 1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149101510 FUN_149101510 body=218 status=ok
// SIG undefined FUN_149101510(void)

void FUN_149101510(longlong param_1)

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
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 8) & *(byte *)(param_1 + 9);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149101604 FUN_149101604 body=220 status=ok
// SIG undefined FUN_149101604(void)

void FUN_149101604(longlong param_1)

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
  *(byte *)(param_1 + 10) = (*(byte *)(param_1 + 8) | *(byte *)(param_1 + 9)) ^ 1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491016fa FUN_1491016fa body=220 status=ok
// SIG undefined FUN_1491016fa(void)

void FUN_1491016fa(longlong param_1)

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
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 8) & *(byte *)(param_1 + 9) ^ 1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491017ee FUN_1491017ee body=218 status=ok
// SIG undefined FUN_1491017ee(void)

void FUN_1491017ee(longlong param_1)

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
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 8) | *(byte *)(param_1 + 9);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491018f2 FUN_1491018f2 body=219 status=ok
// SIG undefined FUN_1491018f2(void)

void FUN_1491018f2(longlong param_1)

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
  *(bool *)(param_1 + 10) = *(char *)(param_1 + 8) == *(char *)(param_1 + 9);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491019f6 FUN_1491019f6 body=219 status=ok
// SIG undefined FUN_1491019f6(void)

void FUN_1491019f6(longlong param_1)

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
  *(bool *)(param_1 + 10) = *(char *)(param_1 + 8) != *(char *)(param_1 + 9);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149101ad2 FUN_149101ad2 body=154 status=ok
// SIG undefined FUN_149101ad2(void)

void FUN_149101ad2(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined1 *)puVar2[4];
  cVar1 = *(char *)*puVar2;
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pcVar5 = (char *)FUN_144828ac0(puVar2 + 8,0,
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pcVar6 = (char *)FUN_144828ac0(*param_2 + 0x60,0,
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  if (*pcVar5 == '\0') {
    *pcVar5 = '\x01';
    bVar7 = false;
  }
  else {
    bVar7 = *pcVar6 != cVar1;
  }
  *puVar3 = bVar7;
  *pcVar6 = cVar1;
  return;
}



// FUNCTION 149101b84 FUN_149101b84 body=237 status=ok
// SIG undefined FUN_149101b84(void)

void FUN_149101b84(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
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
  FUN_1490d751a();
  if (*(char *)(param_1 + 10) == '\0') {
    *(undefined1 *)(param_1 + 10) = 1;
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)(param_1 + 0xb) != *(char *)(param_1 + 8);
  }
  *(bool *)(param_1 + 9) = bVar4;
  *(char *)(param_1 + 0xb) = *(char *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149101c72 FUN_149101c72 body=184 status=ok
// SIG undefined FUN_149101c72(void)

void FUN_149101c72(longlong param_1,longlong *param_2)

{
  float fVar1;
  byte *pbVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  
  lVar5 = *param_2;
  pbVar2 = *(byte **)(lVar5 + 0x40);
  fVar1 = **(float **)(lVar5 + 0x20);
  lVar3 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pbVar4 = (byte *)FUN_144828ac0(lVar5 + 0x60,0,
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar3 * 0x14) +
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar3 * 0x14));
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pfVar6 = (float *)FUN_144828ac0(*param_2 + 0x80,0,
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  fVar7 = (float)((double)*pfVar6 - *(double *)(*(longlong *)(param_1 + 0xc0) + 0x20));
  *pfVar6 = fVar7;
  if (fVar7 <= 0.0) {
    *pbVar4 = *pbVar4 ^ 1;
    *pfVar6 = fVar1;
  }
  *pbVar2 = *pbVar4;
  return;
}



// FUNCTION 149101d3c FUN_149101d3c body=259 status=ok
// SIG undefined FUN_149101d3c(void)

void FUN_149101d3c(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
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
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
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
  fVar5 = (float)((double)*(float *)(param_1 + 0x14) - (double)CONCAT44(uStack_114,uStack_118));
  *(float *)(param_1 + 0x14) = fVar5;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (fVar5 <= 0.0) {
    bVar1 = bVar1 ^ 1;
    *(byte *)(param_1 + 0x11) = bVar1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  }
  *(byte *)(param_1 + 0x10) = bVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149101e40 FUN_149101e40 body=196 status=ok
// SIG undefined FUN_149101e40(void)

void FUN_149101e40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  longlong lVar3;
  byte *pbVar4;
  float *pfVar5;
  byte bVar6;
  float fVar7;
  
  puVar1 = (undefined8 *)*param_2;
  pbVar2 = (byte *)puVar1[4];
  fVar7 = *(float *)*puVar1;
  lVar3 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pbVar4 = (byte *)FUN_144828ac0(puVar1 + 8,0,
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar3 * 0x14) +
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar3 * 0x14));
  lVar3 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pfVar5 = (float *)FUN_144828ac0(*param_2 + 0x60,0,
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar3 * 0x14) +
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar3 * 0x14));
  lVar3 = *(longlong *)(param_1 + 0xc0);
  bVar6 = *pbVar4;
  if ((*pbVar2 == 0) && ((bVar6 & 1) != 0)) {
    *pfVar5 = fVar7;
    bVar6 = *pbVar4;
  }
  *pbVar2 = bVar6;
  fVar7 = (float)((double)*pfVar5 - *(double *)(lVar3 + 0x20));
  *pfVar5 = fVar7;
  if (fVar7 <= 0.0) {
    *pbVar4 = 0;
  }
  return;
}



// FUNCTION 149101f10 FUN_149101f10 body=269 status=ok
// SIG undefined FUN_149101f10(void)

void FUN_149101f10(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
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
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
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
  if ((*(char *)(param_1 + 0xc) == '\0') && ((*(byte *)(param_1 + 0xd) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  }
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xd);
  fVar4 = (float)((double)*(float *)(param_1 + 0x10) - (double)CONCAT44(uStack_114,uStack_118));
  *(float *)(param_1 + 0x10) = fVar4;
  if (fVar4 <= 0.0) {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149102046 FUN_149102046 body=233 status=ok
// SIG undefined FUN_149102046(void)

void FUN_149102046(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
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
  if (*(char *)(param_1 + 8) == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149102146 FUN_149102146 body=216 status=ok
// SIG undefined FUN_149102146(void)

void FUN_149102146(longlong param_1)

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
  *(uint *)(param_1 + 0xc) = (uint)*(byte *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149102220 FUN_149102220 body=93 status=ok
// SIG undefined FUN_149102220(void)

undefined8 FUN_149102220(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined **local_20;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_16 = 0;
  local_20 = &PTR_FUN_14bb084a0;
  local_18 = *(undefined1 *)(param_1 + 8);
  local_17 = *(undefined1 *)(param_1 + 9);
  FUN_14910227e(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910227e FUN_14910227e body=211 status=ok
// SIG undefined FUN_14910227e(void)

undefined8 * FUN_14910227e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_14668b78c();
  param_1[2] = uVar1;
  uVar1 = FUN_14668b9d6();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149102352 FUN_149102352 body=46 status=ok
// SIG undefined FUN_149102352(void)

undefined8 FUN_149102352(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1466b9680();
  uVar2 = FUN_14668be6a();
  FUN_1490fafc8(param_2,uVar2,uVar1);
  return param_2;
}



// FUNCTION 149102380 FUN_149102380 body=46 status=ok
// SIG undefined FUN_149102380(void)

undefined8 FUN_149102380(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1466b9716();
  uVar2 = FUN_14668c0b4();
  FUN_1490fafc8(param_2,uVar2,uVar1);
  return param_2;
}



// FUNCTION 1491023ae FUN_1491023ae body=114 status=ok
// SIG undefined FUN_1491023ae(void)

void FUN_1491023ae(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2 = (longlong *)*param_2;
  local_38 = param_2[0x10];
  local_30 = param_2[0x14];
  local_20 = *(undefined8 *)*param_2;
  local_18 = *(undefined4 *)((undefined8 *)*param_2 + 1);
  FUN_149102536(&local_20,param_2[4],param_2[8],param_2[0xc]);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149102422 FUN_149102422 body=274 status=ok
// SIG undefined FUN_149102422(void)

void FUN_149102422(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  local_30 = *(undefined8 *)(param_1 + 8);
  local_28 = *(undefined4 *)(param_1 + 0x10);
  local_150 = param_1 + 0x98;
  local_158 = param_1 + 0x80;
  FUN_149102536(&local_30,param_1 + 0x18,param_1 + 0x50,param_1 + 0x68);
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149102536 FUN_149102536 body=545 status=ok
// SIG undefined FUN_149102536(void)

void FUN_149102536(longlong *param_1,double *param_2,double *param_3,double *param_4,double *param_5
                  ,double *param_6)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  pdVar1 = param_2 + 3;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  *(undefined1 *)(param_2 + 6) = 0;
  lVar5 = param_1[1];
  if ((longlong)(int)lVar5 == 0) {
    param_2[5] = DAT_14c8464f0;
    dVar3 = DAT_14c8464e8;
    *pdVar1 = DAT_14c8464e0;
    param_2[4] = dVar3;
    param_2[2] = DAT_14c8464f0;
    dVar3 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = dVar3;
    *(undefined1 *)(param_2 + 6) = 1;
  }
  else {
    lVar4 = *param_1;
    bVar7 = true;
    lVar6 = 0;
    do {
      if (bVar7) {
        pdVar2 = (double *)(lVar4 + lVar6);
        param_2[5] = pdVar2[2];
        dVar3 = pdVar2[1];
        *pdVar1 = *pdVar2;
        param_2[4] = dVar3;
        dVar3 = *pdVar2;
        dVar10 = pdVar2[1];
        param_2[2] = pdVar2[2];
        *param_2 = dVar3;
        param_2[1] = dVar10;
        *(undefined1 *)(param_2 + 6) = 1;
      }
      else {
        dVar3 = *param_2;
        uVar8 = SUB84(dVar3,0);
        uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar10 = *(double *)(lVar4 + lVar6);
        if (dVar10 <= dVar3) {
          uVar8 = SUB84(dVar10,0);
          uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        *param_2 = (double)CONCAT44(uVar9,uVar8);
        dVar3 = *(double *)(lVar4 + 8 + lVar6);
        dVar10 = param_2[1];
        if (dVar3 <= param_2[1]) {
          dVar10 = dVar3;
        }
        param_2[1] = dVar10;
        dVar3 = param_2[2];
        uVar8 = SUB84(dVar3,0);
        uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar10 = *(double *)(lVar4 + 0x10 + lVar6);
        if (dVar10 <= dVar3) {
          uVar8 = SUB84(dVar10,0);
          uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        param_2[2] = (double)CONCAT44(uVar9,uVar8);
        dVar3 = param_2[3];
        uVar8 = SUB84(dVar3,0);
        uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar10 = *(double *)(lVar4 + lVar6);
        if (dVar3 <= dVar10) {
          uVar8 = SUB84(dVar10,0);
          uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        param_2[3] = (double)CONCAT44(uVar9,uVar8);
        dVar3 = param_2[4];
        uVar8 = SUB84(dVar3,0);
        uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar10 = *(double *)(lVar4 + 8 + lVar6);
        if (dVar3 <= dVar10) {
          uVar8 = SUB84(dVar10,0);
          uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        param_2[4] = (double)CONCAT44(uVar9,uVar8);
        dVar3 = param_2[5];
        uVar8 = SUB84(dVar3,0);
        uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar10 = *(double *)(lVar4 + 0x10 + lVar6);
        if (dVar3 <= dVar10) {
          uVar8 = SUB84(dVar10,0);
          uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        param_2[5] = (double)CONCAT44(uVar9,uVar8);
      }
      dVar3 = DAT_14c8464e0;
      lVar6 = lVar6 + 0x18;
      bVar7 = false;
    } while ((longlong)(int)lVar5 * 0x18 != lVar6);
    if ((int)param_1[1] == 0) {
      dVar10 = *param_2;
      if (DAT_14c8464e0 <= *param_2) {
        dVar10 = DAT_14c8464e0;
      }
      *param_2 = dVar10;
      dVar10 = DAT_14c8464e8;
      dVar11 = param_2[1];
      if (DAT_14c8464e8 <= param_2[1]) {
        dVar11 = DAT_14c8464e8;
      }
      param_2[1] = dVar11;
      dVar11 = DAT_14c8464f0;
      dVar12 = param_2[2];
      if (DAT_14c8464f0 <= param_2[2]) {
        dVar12 = DAT_14c8464f0;
      }
      param_2[2] = dVar12;
      dVar12 = param_2[3];
      if (param_2[3] <= dVar3) {
        dVar12 = dVar3;
      }
      param_2[3] = dVar12;
      dVar3 = param_2[4];
      uVar8 = SUB84(dVar3,0);
      uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (dVar3 <= dVar10) {
        uVar8 = SUB84(dVar10,0);
        uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
      }
      param_2[4] = (double)CONCAT44(uVar9,uVar8);
      dVar3 = param_2[5];
      uVar8 = SUB84(dVar3,0);
      uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (dVar3 <= dVar11) {
        uVar8 = SUB84(dVar11,0);
        uVar9 = (undefined4)((ulonglong)dVar11 >> 0x20);
      }
      param_2[5] = (double)CONCAT44(uVar9,uVar8);
    }
  }
  param_3[2] = param_2[2];
  dVar3 = param_2[1];
  *param_3 = *param_2;
  param_3[1] = dVar3;
  param_4[2] = param_2[5];
  dVar3 = param_2[4];
  *param_4 = *pdVar1;
  param_4[1] = dVar3;
  dVar3 = param_2[2];
  dVar10 = param_2[5];
  dVar11 = param_2[1];
  dVar12 = param_2[4];
  *param_5 = (*param_2 + param_2[3]) * 0.5;
  param_5[1] = (dVar11 + dVar12) * 0.5;
  param_5[2] = (dVar3 + dVar10) * 0.5;
  dVar3 = param_2[5];
  dVar10 = param_2[2];
  dVar11 = param_2[4];
  dVar12 = param_2[1];
  *param_6 = param_2[3] - *param_2;
  param_6[1] = dVar11 - dVar12;
  param_6[2] = dVar3 - dVar10;
  return;
}



// FUNCTION 149102770 FUN_149102770 body=217 status=ok
// SIG undefined FUN_149102770(void)

void FUN_149102770(longlong param_1)

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
  *(bool *)(param_1 + 0x40) = *(char *)(param_1 + 0x38) != '\0';
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491028b0 FUN_1491028b0 body=308 status=ok
// SIG undefined FUN_1491028b0(void)

void FUN_1491028b0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
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
  puVar5 = &DAT_14c846480;
  puVar6 = local_c8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
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
  if (*(char *)(param_1 + 0x38) == '\0') {
    *(undefined8 *)(param_1 + 0x50) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x40) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
  }
  else {
    *(double *)(param_1 + 0x40) = (*(double *)(param_1 + 8) + *(double *)(param_1 + 0x20)) * 0.5;
    *(double *)(param_1 + 0x48) = (*(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x28)) * 0.5;
    *(double *)(param_1 + 0x50) = (*(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x30)) * 0.5;
  }
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491029fa FUN_1491029fa body=229 status=ok
// SIG undefined FUN_1491029fa(void)

void FUN_1491029fa(longlong param_1)

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
  FUN_149102ae0(param_1 + 8,param_1 + 0x40,param_1 + 0x58);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149102ae0 FUN_149102ae0 body=160 status=ok
// SIG undefined FUN_149102ae0(void)

void FUN_149102ae0(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*(char *)(param_1 + 6) != '\0') {
    dVar1 = param_1[5];
    dVar2 = param_1[2];
    dVar3 = param_1[4];
    dVar4 = param_1[1];
    *param_2 = param_1[3] - *param_1;
    param_2[1] = dVar3 - dVar4;
    param_2[2] = dVar1 - dVar2;
    dVar1 = param_1[5];
    dVar2 = param_1[2];
    dVar3 = param_1[4];
    dVar4 = param_1[1];
    *param_3 = (param_1[3] - *param_1) * 0.5;
    param_3[1] = (dVar3 - dVar4) * 0.5;
    param_3[2] = (dVar1 - dVar2) * 0.5;
    return;
  }
  param_3[2] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  *param_3 = DAT_14c8464e0;
  param_3[1] = dVar1;
  dVar2 = DAT_14c8464e8;
  dVar1 = DAT_14c8464e0;
  param_2[2] = DAT_14c8464f0;
  *param_2 = dVar1;
  param_2[1] = dVar2;
  return;
}



// FUNCTION 149102b94 FUN_149102b94 body=229 status=ok
// SIG undefined FUN_149102b94(void)

void FUN_149102b94(longlong param_1)

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
  FUN_149102c7a(param_1 + 8,param_1 + 0x40,param_1 + 0x58);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149102c7a FUN_149102c7a body=131 status=ok
// SIG undefined FUN_149102c7a(void)

void FUN_149102c7a(double *param_1,double *param_2,double *param_3)

{
  char cVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == '\0') {
    dVar3 = 0.0;
    dVar5 = 0.0;
    dVar2 = 0.0;
    dVar7 = 0.0;
    dVar6 = 0.0;
    dVar4 = 0.0;
  }
  else {
    dVar4 = param_1[5] + param_2[2];
    dVar6 = param_1[4] + param_2[1];
    dVar2 = param_2[2] + param_1[2];
    dVar5 = param_2[1] + param_1[1];
    dVar7 = param_1[3] + *param_2;
    dVar3 = *param_2 + *param_1;
  }
  *param_3 = dVar3;
  param_3[1] = dVar5;
  param_3[2] = dVar2;
  param_3[3] = dVar7;
  param_3[4] = dVar6;
  param_3[5] = dVar4;
  *(bool *)(param_3 + 6) = cVar1 != '\0';
  return;
}



// FUNCTION 149102d12 FUN_149102d12 body=229 status=ok
// SIG undefined FUN_149102d12(void)

void FUN_149102d12(longlong param_1)

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
  FUN_149102df8(param_1 + 8,param_1 + 0x40,param_1 + 0x58);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149102df8 FUN_149102df8 body=269 status=ok
// SIG undefined FUN_149102df8(void)

void FUN_149102df8(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  cVar2 = *(char *)(param_1 + 6);
  if (cVar2 == '\0') {
    *param_3 = 0.0;
    param_3[1] = 0.0;
    dVar8 = 0.0;
    dVar7 = 0.0;
    dVar6 = 0.0;
    dVar5 = 0.0;
  }
  else {
    dVar1 = param_1[1];
    dVar8 = param_2[2] - (param_1[2] + param_1[5]) * 0.5;
    dVar3 = *param_2 - (*param_1 + param_1[3]) * 0.5;
    dVar4 = param_2[1] - (dVar1 + param_1[4]) * 0.5;
    dVar5 = param_1[5] + dVar8;
    dVar6 = param_1[4] + dVar4;
    dVar7 = param_1[3] + dVar3;
    dVar8 = dVar8 + param_1[2];
    *param_3 = dVar3 + *param_1;
    param_3[1] = dVar4 + dVar1;
  }
  param_3[2] = dVar8;
  param_3[3] = dVar7;
  param_3[4] = dVar6;
  param_3[5] = dVar5;
  *(bool *)(param_3 + 6) = cVar2 != '\0';
  return;
}



// FUNCTION 149102f1a FUN_149102f1a body=229 status=ok
// SIG undefined FUN_149102f1a(void)

void FUN_149102f1a(longlong param_1)

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
  FUN_149103000(param_1 + 8,param_1 + 0x40,param_1 + 0x58);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149103000 FUN_149103000 body=171 status=ok
// SIG undefined FUN_149103000(void)

void FUN_149103000(double *param_1,double *param_2,double *param_3)

{
  char cVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == '\0') {
    dVar5 = 0.0;
    dVar7 = 0.0;
    dVar6 = 0.0;
    dVar4 = 0.0;
    dVar3 = 0.0;
    dVar2 = 0.0;
  }
  else {
    dVar2 = param_1[5] + param_2[2];
    dVar3 = param_1[4] + param_2[1];
    dVar4 = param_1[3] + *param_2;
    dVar6 = param_1[2] - param_2[2];
    dVar7 = param_1[1] - param_2[1];
    dVar5 = *param_1 - *param_2;
  }
  *param_3 = dVar5;
  param_3[1] = dVar7;
  param_3[2] = dVar6;
  param_3[3] = dVar4;
  param_3[4] = dVar3;
  param_3[5] = dVar2;
  *(bool *)(param_3 + 6) = cVar1 != '\0';
  return;
}



// FUNCTION 1491030ac FUN_1491030ac body=145 status=ok
// SIG undefined FUN_1491030ac(void)

void FUN_1491030ac(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2 = (longlong *)*param_2;
  puVar1 = (undefined8 *)param_2[8];
  if (*(char *)(*param_2 + 0x30) == '\0') {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  FUN_144a1c3a2(*param_2,&local_50,param_2[4]);
  puVar1[6] = local_20;
  *(undefined4 *)(puVar1 + 4) = local_30;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_2c;
  *(undefined4 *)(puVar1 + 5) = uStack_28;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_24;
  *(undefined4 *)(puVar1 + 2) = local_40;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_3c;
  *(undefined4 *)(puVar1 + 3) = uStack_38;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_34;
  *(undefined4 *)puVar1 = local_50;
  *(undefined4 *)((longlong)puVar1 + 4) = uStack_4c;
  *(undefined4 *)(puVar1 + 1) = uStack_48;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14910313e FUN_14910313e body=311 status=ok
// SIG undefined FUN_14910313e(void)

void FUN_14910313e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_198 [32];
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined2 local_160;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108 [12];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_178 = &PTR_FUN_14bad5c20;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_15c = 0;
  uStack_154 = 0;
  local_14c = 0;
  local_148 = 0x3f91111111111111;
  local_140 = 0x800;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_108;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1490d751a(&local_178);
  if (*(char *)(param_1 + 0x38) == '\0') {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  else {
    FUN_144a1c3a2(param_1 + 8,&local_68,param_1 + 0x40);
    *(undefined8 *)(param_1 + 0xd0) = local_38;
    *(undefined8 *)(param_1 + 0xc0) = local_48;
    *(undefined8 *)(param_1 + 200) = uStack_40;
    *(undefined8 *)(param_1 + 0xb0) = local_58;
    *(undefined8 *)(param_1 + 0xb8) = uStack_50;
    *(undefined4 *)(param_1 + 0xa0) = local_68;
    *(undefined4 *)(param_1 + 0xa4) = uStack_64;
    *(undefined4 *)(param_1 + 0xa8) = uStack_60;
    *(undefined4 *)(param_1 + 0xac) = uStack_5c;
  }
  FUN_140f8ceac(&local_178);
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149103276 FUN_149103276 body=48 status=ok
// SIG undefined FUN_149103276(void)

void FUN_149103276(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1491033a6(*puVar1,puVar1[4],
                CONCAT71((int7)((ulonglong)puVar1[8] >> 8),*(undefined1 *)puVar1[8]),puVar1[0xc],
                puVar1[0x10]);
  return;
}



// FUNCTION 1491032b2 FUN_1491032b2 body=242 status=ok
// SIG undefined FUN_1491032b2(void)

void FUN_1491032b2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
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
  local_148 = param_1 + 0x5c;
  FUN_1491033a6(param_1 + 8,param_1 + 0x40,*(undefined1 *)(param_1 + 0x58),param_1 + 0x59);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491033a6 FUN_1491033a6 body=225 status=ok
// SIG undefined FUN_1491033a6(void)

void FUN_1491033a6(double *param_1,double *param_2,char param_3,undefined1 *param_4,float *param_5)

{
  double dVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *param_4 = 0;
    *param_5 = 0.0;
    return;
  }
  dVar1 = *param_2;
  dVar4 = *param_1;
  if (dVar4 <= dVar1) {
    dVar4 = param_1[3];
    dVar3 = 0.0;
    if (dVar1 <= dVar4) goto LAB_1491033dc;
  }
  dVar3 = (dVar1 - dVar4) * (dVar1 - dVar4);
LAB_1491033dc:
  dVar1 = param_2[1];
  dVar4 = param_1[1];
  if ((dVar1 < dVar4) || (dVar4 = param_1[4], dVar4 < dVar1)) {
    dVar3 = dVar3 + (dVar1 - dVar4) * (dVar1 - dVar4);
  }
  dVar1 = param_2[2];
  dVar4 = param_1[2];
  if ((dVar1 < dVar4) || (dVar4 = param_1[5], dVar4 < dVar1)) {
    dVar3 = dVar3 + (dVar1 - dVar4) * (dVar1 - dVar4);
  }
  fVar2 = (float)dVar3;
  *param_5 = fVar2;
  if (0.0 <= fVar2 && param_3 == '\0') {
    if (fVar2 < 0.0) {
      fVar2 = sqrtf(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    *param_5 = fVar2;
  }
  *param_4 = 1;
  return;
}



// FUNCTION 1491034a2 FUN_1491034a2 body=229 status=ok
// SIG undefined FUN_1491034a2(void)

void FUN_1491034a2(longlong param_1)

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
  FUN_149103588(param_1 + 8,param_1 + 0x40,param_1 + 0x58);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149103588 FUN_149103588 body=86 status=ok
// SIG undefined FUN_149103588(void)

void FUN_149103588(double *param_1,double *param_2,undefined8 param_3)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 6) != '\0') {
    bVar1 = false;
    if ((*param_2 < *param_1) || (param_1[3] < *param_2)) goto LAB_1491035cc;
    bVar1 = false;
    if ((param_2[1] < param_1[1]) || (param_1[4] < param_2[1])) goto LAB_1491035cc;
    if (param_1[2] <= param_2[2]) {
      bVar1 = param_2[2] <= param_1[5];
      goto LAB_1491035cc;
    }
  }
  bVar1 = false;
LAB_1491035cc:
  *(bool *)param_3 = bVar1;
  return;
}



// FUNCTION 149103624 FUN_149103624 body=269 status=ok
// SIG undefined FUN_149103624(void)

void FUN_149103624(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
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
  if (*(char *)(param_1 + 0x38) == '\0') {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)((*(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x18)) *
                   (*(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x10)) *
                   (*(double *)(param_1 + 0x20) - *(double *)(param_1 + 8)));
  }
  *(float *)(param_1 + 0x40) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149103770 FUN_149103770 body=217 status=ok
// SIG undefined FUN_149103770(void)

void FUN_149103770(longlong param_1)

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
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910386e FUN_14910386e body=236 status=ok
// SIG undefined FUN_14910386e(void)

void FUN_14910386e(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
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
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
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
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149103980 FUN_149103980 body=239 status=ok
// SIG undefined FUN_149103980(void)

void FUN_149103980(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
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
  fVar4 = (float)*(double *)(param_1 + 8);
  *(float *)(param_1 + 0x10) = fVar4;
  *(float *)(param_1 + 0x14) = fVar4;
  *(float *)(param_1 + 0x18) = fVar4;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149103ab8 FUN_149103ab8 body=269 status=ok
// SIG undefined FUN_149103ab8(void)

void FUN_149103ab8(longlong param_1)

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
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x1c);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x24);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149103c0e FUN_149103c0e body=269 status=ok
// SIG undefined FUN_149103c0e(void)

void FUN_149103c0e(longlong param_1)

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
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x1c);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x24);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149103d64 FUN_149103d64 body=269 status=ok
// SIG undefined FUN_149103d64(void)

void FUN_149103d64(longlong param_1)

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
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) * *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0x1c);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x24);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149103e72 FUN_149103e72 body=170 status=ok
// SIG undefined FUN_149103e72(void)

void FUN_149103e72(undefined8 param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  
  param_2 = (undefined8 *)*param_2;
  pfVar8 = (float *)*param_2;
  pfVar9 = (float *)param_2[4];
  fVar1 = *(float *)param_2[8];
  pfVar10 = (float *)param_2[0xc];
  fVar2 = pfVar9[3];
  fVar3 = pfVar8[3];
  fVar4 = pfVar9[2];
  fVar5 = pfVar8[2];
  fVar6 = pfVar9[1];
  fVar7 = pfVar8[1];
  *pfVar10 = (*pfVar9 - *pfVar8) * fVar1 + *pfVar8;
  pfVar10[1] = (fVar6 - fVar7) * fVar1 + fVar7;
  pfVar10[2] = (fVar4 - fVar5) * fVar1 + fVar5;
  pfVar10[3] = (fVar2 - fVar3) * fVar1 + fVar3;
  return;
}



// FUNCTION 149103f1c FUN_149103f1c body=377 status=ok
// SIG undefined FUN_149103f1c(void)

void FUN_149103f1c(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_188 [32];
  undefined **local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined2 local_150;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8 [12];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_168 = &PTR_FUN_14bad5c20;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_14c = 0;
  uStack_144 = 0;
  local_13c = 0;
  local_138 = 0x3f91111111111111;
  local_130 = 0x800;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_f8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1490d751a(&local_168);
  fVar1 = *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x2c) =
       (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 8)) * fVar1 + *(float *)(param_1 + 8);
  *(float *)(param_1 + 0x30) =
       (*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0xc)) * fVar1 + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x34) =
       (*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x10)) * fVar1 +
       *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x38) =
       (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x14)) * fVar1 +
       *(float *)(param_1 + 0x14);
  FUN_140f8ceac(&local_168);
  if ((local_50 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149104098 FUN_149104098 body=204 status=ok
// SIG undefined FUN_149104098(void)

void FUN_149104098(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_148 [32];
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined2 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = &PTR_FUN_14bad5c20;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_10c = 0;
  uStack_104 = 0;
  local_fc = 0;
  local_f8 = 0x3f91111111111111;
  local_f0 = 0x800;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1490d751a(&local_128);
  FUN_140f8ceac(&local_128);
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910417a FUN_14910417a body=223 status=ok
// SIG undefined FUN_14910417a(void)

void FUN_14910417a(longlong param_1)

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
  *(undefined8 *)(param_1 + 8) = 0x400921fb60000000;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910426e FUN_14910426e body=223 status=ok
// SIG undefined FUN_14910426e(void)

void FUN_14910426e(longlong param_1)

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
  *(undefined8 *)(param_1 + 8) = 0x3ff921fb60000000;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149104362 FUN_149104362 body=223 status=ok
// SIG undefined FUN_149104362(void)

void FUN_149104362(longlong param_1)

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
  *(undefined8 *)(param_1 + 8) = 0x401921fb60000000;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149104456 FUN_149104456 body=223 status=ok
// SIG undefined FUN_149104456(void)

void FUN_149104456(longlong param_1)

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
  *(undefined8 *)(param_1 + 8) = 0x4005bf0a80000000;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149104552 FUN_149104552 body=224 status=ok
// SIG undefined FUN_149104552(void)

void FUN_149104552(longlong param_1)

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
  *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x10) + *(double *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149104650 FUN_149104650 body=224 status=ok
// SIG undefined FUN_149104650(void)

void FUN_149104650(longlong param_1)

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
  *(double *)(param_1 + 0x18) = *(double *)(param_1 + 8) - *(double *)(param_1 + 0x10);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910474e FUN_14910474e body=224 status=ok
// SIG undefined FUN_14910474e(void)

void FUN_14910474e(longlong param_1)

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
  *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x10) * *(double *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149104864 FUN_149104864 body=253 status=ok
// SIG undefined FUN_149104864(void)

void FUN_149104864(longlong param_1)

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
  *(ulonglong *)(param_1 + 0x18) =
       ~-(ulonglong)(ABS(*(double *)(param_1 + 0x10)) <= 1e-08) &
       (ulonglong)(*(double *)(param_1 + 8) / *(double *)(param_1 + 0x10));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149104962 FUN_149104962 body=78 status=ok
// SIG undefined FUN_149104962(void)

void FUN_149104962(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_2 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[8];
  uVar2 = 0;
  if ((0.0 <= *(double *)param_2[4]) && (1e-08 < ABS(*(double *)param_2[4]))) {
    uVar2 = FUN_144719204(*(undefined8 *)*param_2);
  }
  *puVar1 = uVar2;
  return;
}



// FUNCTION 1491049b0 FUN_1491049b0 body=273 status=ok
// SIG undefined FUN_1491049b0(void)

void FUN_1491049b0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
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
  uVar4 = 0;
  if ((0.0 <= *(double *)(param_1 + 0x10)) && (1e-08 < ABS(*(double *)(param_1 + 0x10)))) {
    uVar4 = FUN_144719204(*(undefined8 *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149104ade FUN_149104ade body=224 status=ok
// SIG undefined FUN_149104ade(void)

void FUN_149104ade(longlong param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  puVar4 = &DAT_14c846480;
  puVar5 = local_c8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
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
  dVar1 = *(double *)(param_1 + 8);
  uVar6 = SUB84(dVar1,0);
  uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = *(double *)(param_1 + 0x10);
  if (dVar2 <= dVar1) {
    uVar6 = SUB84(dVar2,0);
    uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(uVar7,uVar6);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149104bdc FUN_149104bdc body=224 status=ok
// SIG undefined FUN_149104bdc(void)

void FUN_149104bdc(longlong param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  puVar4 = &DAT_14c846480;
  puVar5 = local_c8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
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
  dVar1 = *(double *)(param_1 + 8);
  uVar6 = SUB84(dVar1,0);
  uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = *(double *)(param_1 + 0x10);
  if (dVar1 <= dVar2) {
    uVar6 = SUB84(dVar2,0);
    uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(uVar7,uVar6);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149104cbe FUN_149104cbe body=42 status=ok
// SIG undefined FUN_149104cbe(void)

void FUN_149104cbe(undefined8 param_1,undefined8 *param_2)

{
  double *pdVar1;
  double dVar2;
  
  param_2 = (undefined8 *)*param_2;
  pdVar1 = (double *)param_2[8];
  dVar2 = pow(*(double *)*param_2,*(double *)param_2[4]);
  *pdVar1 = dVar2;
  return;
}



// FUNCTION 149104ce8 FUN_149104ce8 body=229 status=ok
// SIG undefined FUN_149104ce8(void)

void FUN_149104ce8(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
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
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
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
  dVar1 = pow(*(double *)(param_1 + 8),*(double *)(param_1 + 0x10));
  *(double *)(param_1 + 0x18) = dVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149104dce FUN_149104dce body=65 status=ok
// SIG undefined FUN_149104dce(void)

void FUN_149104dce(undefined8 param_1,undefined8 *param_2)

{
  double _X;
  double *pdVar1;
  double dVar2;
  
  pdVar1 = (double *)((undefined8 *)*param_2)[4];
  _X = **(double **)*param_2;
  dVar2 = 0.0;
  if (0.0 <= _X) {
    if (_X < 0.0) {
      dVar2 = sqrt(_X);
    }
    else {
      dVar2 = SQRT(_X);
    }
  }
  *pdVar1 = dVar2;
  return;
}


