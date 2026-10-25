// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149308050 FUN_149308050 body=202 status=ok
// SIG undefined FUN_149308050(void)

undefined8 FUN_149308050(longlong param_1,longlong *param_2,undefined2 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else {
    uVar1 = 0x100000;
    if (((int)param_2[2] == 0x1d) && (uVar1 = 0x200000, param_2[1] == 2)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,2);
        *(undefined4 *)(param_2 + 3) = local_40;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3c;
        *(undefined4 *)(param_2 + 4) = uStack_38;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_34;
        *(undefined2 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
        uVar1 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930811c FUN_14930811c body=400 status=ok
// SIG undefined FUN_14930811c(void)

ulonglong FUN_14930811c(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar5);
  iVar4 = FUN_140c4443c(param_1,uVar3,param_2);
  if (iVar4 == -1) {
LAB_1493081cd:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar6 = *param_1 + (longlong)local_44 * 0x40;
    plVar7 = (longlong *)(lVar6 + 0x10);
    *(undefined4 *)(lVar6 + 0x20) = 0x2d;
    *(undefined8 *)(lVar6 + 0x18) = 0xc;
    lVar6 = param_1[0xb];
    param_1[0xb] = lVar6 + 0xc;
    if ((ulonglong)(param_1[0xc] - lVar6) < 0xc) {
      FUN_14112c458(param_1 + 10,lVar6);
    }
    lVar1 = param_1[10];
    *(undefined4 *)(lVar1 + 8 + lVar6) = 0;
    *(undefined8 *)(lVar1 + lVar6) = 0;
    *plVar7 = lVar6;
  }
  else {
    lVar6 = *param_1 + (longlong)iVar4 * 0x40;
    if (lVar6 == 0) goto LAB_1493081cd;
    uVar8 = 0x100000;
    if (*(int *)(lVar6 + 0x20) != 0x2d) goto LAB_14930826d;
    plVar7 = (longlong *)(*param_1 + (longlong)iVar4 * 0x40 + 0x10);
    uVar8 = 0x400000;
    if ((*plVar7 < 0) || (param_1[0xb] <= *plVar7)) goto LAB_14930826d;
  }
  *(undefined4 *)((longlong)plVar7 + 0x14) = 0;
  uVar8 = FUN_1493082ae(param_1,plVar7,param_3);
  if ((uVar8 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_14930826d:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1493082ae FUN_1493082ae body=209 status=ok
// SIG undefined FUN_1493082ae(void)

undefined8 FUN_1493082ae(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar3 = 0x800000;
  }
  else {
    uVar3 = 0x100000;
    if (((int)param_2[2] == 0x2d) && (uVar3 = 0x200000, param_2[1] == 0xc)) {
      uVar3 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,0xc);
        *(undefined4 *)(param_2 + 3) = local_40;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3c;
        *(undefined4 *)(param_2 + 4) = uStack_38;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_34;
        lVar1 = *(longlong *)(param_1 + 0x50);
        lVar2 = *param_2;
        *(undefined4 *)(lVar1 + 8 + lVar2) = *(undefined4 *)(param_3 + 1);
        *(undefined8 *)(lVar1 + lVar2) = *param_3;
        uVar3 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149308380 FUN_149308380 body=388 status=ok
// SIG undefined FUN_149308380(void)

ulonglong FUN_149308380(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar5);
  iVar4 = FUN_140c4443c(param_1,uVar3,param_2);
  if (iVar4 == -1) {
LAB_14930842e:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar6 = *param_1 + (longlong)local_44 * 0x40;
    plVar7 = (longlong *)(lVar6 + 0x10);
    *(undefined4 *)(lVar6 + 0x20) = 0x30;
    *(undefined8 *)(lVar6 + 0x18) = 0x10;
    lVar6 = param_1[0xb];
    param_1[0xb] = lVar6 + 0x10;
    if ((ulonglong)(param_1[0xc] - lVar6) < 0x10) {
      FUN_14112c458(param_1 + 10,lVar6);
    }
    puVar1 = (undefined8 *)(param_1[10] + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    *plVar7 = lVar6;
  }
  else {
    lVar6 = *param_1 + (longlong)iVar4 * 0x40;
    if (lVar6 == 0) goto LAB_14930842e;
    uVar8 = 0x100000;
    if (*(int *)(lVar6 + 0x20) != 0x30) goto LAB_1493084c5;
    plVar7 = (longlong *)(*param_1 + (longlong)iVar4 * 0x40 + 0x10);
    uVar8 = 0x400000;
    if ((*plVar7 < 0) || (param_1[0xb] <= *plVar7)) goto LAB_1493084c5;
  }
  *(undefined4 *)((longlong)plVar7 + 0x14) = 0;
  uVar8 = FUN_149308506(param_1,plVar7,param_3);
  if ((uVar8 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_1493084c5:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 149308506 FUN_149308506 body=202 status=ok
// SIG undefined FUN_149308506(void)

undefined8 FUN_149308506(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar5 = 0x800000;
  }
  else {
    uVar5 = 0x100000;
    if (((int)param_2[2] == 0x30) && (uVar5 = 0x200000, param_2[1] == 0x10)) {
      uVar5 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,0x10);
        param_2[3] = local_40;
        param_2[4] = lStack_38;
        uVar2 = param_3[1];
        uVar3 = param_3[2];
        uVar4 = param_3[3];
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x50) + *param_2);
        *puVar1 = *param_3;
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
        puVar1[3] = uVar4;
        uVar5 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493085d2 FUN_1493085d2 body=388 status=ok
// SIG undefined FUN_1493085d2(void)

ulonglong FUN_1493085d2(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar5);
  iVar4 = FUN_140c4443c(param_1,uVar3,param_2);
  if (iVar4 == -1) {
LAB_149308680:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar6 = *param_1 + (longlong)local_44 * 0x40;
    plVar7 = (longlong *)(lVar6 + 0x10);
    *(undefined4 *)(lVar6 + 0x20) = 0x19;
    *(undefined8 *)(lVar6 + 0x18) = 0x10;
    lVar6 = param_1[0xb];
    param_1[0xb] = lVar6 + 0x10;
    if ((ulonglong)(param_1[0xc] - lVar6) < 0x10) {
      FUN_14112c458(param_1 + 10,lVar6);
    }
    puVar1 = (undefined8 *)(param_1[10] + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    *plVar7 = lVar6;
  }
  else {
    lVar6 = *param_1 + (longlong)iVar4 * 0x40;
    if (lVar6 == 0) goto LAB_149308680;
    uVar8 = 0x100000;
    if (*(int *)(lVar6 + 0x20) != 0x19) goto LAB_149308717;
    plVar7 = (longlong *)(*param_1 + (longlong)iVar4 * 0x40 + 0x10);
    uVar8 = 0x400000;
    if ((*plVar7 < 0) || (param_1[0xb] <= *plVar7)) goto LAB_149308717;
  }
  *(undefined4 *)((longlong)plVar7 + 0x14) = 0;
  uVar8 = FUN_149308758(param_1,plVar7,param_3);
  if ((uVar8 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_149308717:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 149308758 FUN_149308758 body=202 status=ok
// SIG undefined FUN_149308758(void)

undefined8 FUN_149308758(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar5 = 0x800000;
  }
  else {
    uVar5 = 0x100000;
    if (((int)param_2[2] == 0x19) && (uVar5 = 0x200000, param_2[1] == 0x10)) {
      uVar5 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,0x10);
        param_2[3] = local_40;
        param_2[4] = lStack_38;
        uVar2 = param_3[1];
        uVar3 = param_3[2];
        uVar4 = param_3[3];
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x50) + *param_2);
        *puVar1 = *param_3;
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
        puVar1[3] = uVar4;
        uVar5 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149308824 FUN_149308824 body=401 status=ok
// SIG undefined FUN_149308824(void)

ulonglong FUN_149308824(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar5 = *(int *)(param_2 + 1);
  if (iVar5 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar3 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar3 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar3,puVar6);
  iVar5 = FUN_140c4443c(param_1,uVar4,param_2);
  if (iVar5 == -1) {
LAB_1493088d9:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar7 = *param_1 + (longlong)local_4c * 0x40;
    plVar8 = (longlong *)(lVar7 + 0x10);
    *(undefined4 *)(lVar7 + 0x20) = 0x2e;
    *(undefined8 *)(lVar7 + 0x18) = 0x18;
    lVar7 = param_1[0xb];
    param_1[0xb] = lVar7 + 0x18;
    if ((ulonglong)(param_1[0xc] - lVar7) < 0x18) {
      FUN_14112c458(param_1 + 10,lVar7);
    }
    lVar2 = param_1[10];
    puVar1 = (undefined8 *)(lVar2 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar2 + 0x10 + lVar7) = 0;
    *plVar8 = lVar7;
  }
  else {
    lVar7 = *param_1 + (longlong)iVar5 * 0x40;
    if (lVar7 == 0) goto LAB_1493088d9;
    uVar9 = 0x100000;
    if (*(int *)(lVar7 + 0x20) != 0x2e) goto LAB_149308975;
    plVar8 = (longlong *)(*param_1 + (longlong)iVar5 * 0x40 + 0x10);
    uVar9 = 0x400000;
    if ((*plVar8 < 0) || (param_1[0xb] <= *plVar8)) goto LAB_149308975;
  }
  *(undefined4 *)((longlong)plVar8 + 0x14) = param_4;
  uVar9 = FUN_1493089b6(param_1,plVar8,param_3);
  if ((uVar9 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_149308975:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1493089b6 FUN_1493089b6 body=211 status=ok
// SIG undefined FUN_1493089b6(void)

undefined8 FUN_1493089b6(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar7 = 0x800000;
  }
  else {
    uVar7 = 0x100000;
    if (((int)param_2[2] == 0x2e) && (uVar7 = 0x200000, param_2[1] == 0x18)) {
      uVar7 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,0x18);
        param_2[3] = local_40;
        param_2[4] = lStack_38;
        lVar2 = *(longlong *)(param_1 + 0x50);
        lVar3 = *param_2;
        *(undefined8 *)(lVar2 + 0x10 + lVar3) = *(undefined8 *)(param_3 + 4);
        uVar4 = param_3[1];
        uVar5 = param_3[2];
        uVar6 = param_3[3];
        puVar1 = (undefined4 *)(lVar2 + lVar3);
        *puVar1 = *param_3;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        uVar7 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149308a8a FUN_149308a8a body=395 status=ok
// SIG undefined FUN_149308a8a(void)

ulonglong FUN_149308a8a(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar5 = *(int *)(param_2 + 1);
  if (iVar5 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar3 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar3 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar3,puVar6);
  iVar5 = FUN_140c4443c(param_1,uVar4,param_2);
  if (iVar5 == -1) {
LAB_149308b3c:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar7 = *param_1 + (longlong)local_4c * 0x40;
    plVar8 = (longlong *)(lVar7 + 0x10);
    *(undefined4 *)(lVar7 + 0x20) = 0x31;
    *(undefined8 *)(lVar7 + 0x18) = 0x20;
    lVar7 = param_1[0xb];
    param_1[0xb] = lVar7 + 0x20;
    if ((ulonglong)(param_1[0xc] - lVar7) < 0x20) {
      FUN_14112c458(param_1 + 10,lVar7);
    }
    lVar2 = param_1[10];
    puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    *plVar8 = lVar7;
  }
  else {
    lVar7 = *param_1 + (longlong)iVar5 * 0x40;
    if (lVar7 == 0) goto LAB_149308b3c;
    uVar9 = 0x100000;
    if (*(int *)(lVar7 + 0x20) != 0x31) goto LAB_149308bd5;
    plVar8 = (longlong *)(*param_1 + (longlong)iVar5 * 0x40 + 0x10);
    uVar9 = 0x400000;
    if ((*plVar8 < 0) || (param_1[0xb] <= *plVar8)) goto LAB_149308bd5;
  }
  *(undefined4 *)((longlong)plVar8 + 0x14) = param_4;
  uVar9 = FUN_149308c16(param_1,plVar8,param_3);
  if ((uVar9 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_149308bd5:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 149308c16 FUN_149308c16 body=211 status=ok
// SIG undefined FUN_149308c16(void)

undefined8 FUN_149308c16(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar9 = 0x800000;
  }
  else {
    uVar9 = 0x100000;
    if (((int)param_2[2] == 0x31) && (uVar9 = 0x200000, param_2[1] == 0x20)) {
      uVar9 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,0x20);
        param_2[3] = local_40;
        param_2[4] = lStack_38;
        lVar3 = *(longlong *)(param_1 + 0x50);
        lVar4 = *param_2;
        uVar5 = *param_3;
        uVar6 = param_3[1];
        uVar7 = param_3[2];
        uVar8 = param_3[3];
        uVar9 = *(undefined8 *)(param_3 + 6);
        puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar4);
        *puVar2 = *(undefined8 *)(param_3 + 4);
        puVar2[1] = uVar9;
        puVar1 = (undefined4 *)(lVar3 + lVar4);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        puVar1[2] = uVar7;
        puVar1[3] = uVar8;
        uVar9 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149308cea FUN_149308cea body=190 status=ok
// SIG undefined FUN_149308cea(void)

longlong FUN_149308cea(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_149308d8b;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_149308daa(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_149308d8b:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 149308daa FUN_149308daa body=311 status=ok
// SIG undefined FUN_149308daa(void)

undefined4 *
FUN_149308daa(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_149308ee2(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  FUN_149300e17(0,0);
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_149308fc8(param_1,param_3,local_50,local_58);
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
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_149309090(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149308ee2 FUN_149308ee2 body=229 status=ok
// SIG undefined FUN_149308ee2(void)

int * FUN_149308ee2(longlong *param_1,int *param_2)

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



// FUNCTION 149308fc8 FUN_149308fc8 body=200 status=ok
// SIG undefined FUN_149308fc8(void)

void FUN_149308fc8(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          FUN_149300e17(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14930508e(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_14930903b;
        }
        iVar8 = puVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_14930903b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 149309090 FUN_149309090 body=477 status=ok
// SIG undefined FUN_149309090(void)

void FUN_149309090(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14930926e FUN_14930926e body=132 status=ok
// SIG undefined FUN_14930926e(void)

void FUN_14930926e(longlong param_1,int param_2)

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



// FUNCTION 1493092f4 FUN_1493092f4 body=135 status=ok
// SIG undefined FUN_1493092f4(void)

undefined8 * FUN_1493092f4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc2f840;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930937c FUN_14930937c body=57 status=ok
// SIG undefined FUN_14930937c(void)

undefined8 * FUN_14930937c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc2f840;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493093ca FUN_1493093ca body=64 status=ok
// SIG undefined FUN_1493093ca(void)

void FUN_1493093ca(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493094e0(*param_2,param_1);
  return;
}



// FUNCTION 14930940a FUN_14930940a body=64 status=ok
// SIG undefined FUN_14930940a(void)

void FUN_14930940a(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493094e0(*param_2,param_1);
  return;
}



// FUNCTION 14930944a FUN_14930944a body=98 status=ok
// SIG undefined FUN_14930944a(void)

void FUN_14930944a(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1493094e0(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014930949d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493094c0 FUN_1493094c0 body=31 status=ok
// SIG undefined FUN_1493094c0(void)

undefined1 FUN_1493094c0(longlong param_1,undefined8 param_2)

{
  FUN_149309568(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1493094e0 FUN_1493094e0 body=135 status=ok
// SIG undefined FUN_1493094e0(void)

undefined8 * FUN_1493094e0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc2f840;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 149309568 FUN_149309568 body=313 status=ok
// SIG undefined FUN_149309568(void)

undefined4 FUN_149309568(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  byte bVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  char local_41;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_4;
  if (param_3 == 0) {
    uVar1 = 0;
    goto LAB_14930958c;
  }
  uVar1 = FUN_149306a5e(param_1,param_2,&local_41);
  if ((char)uVar1 == '\0') goto LAB_14930958c;
  local_30 = 0;
  local_38 = param_3;
  FUN_1400021e4(&local_40,&local_68);
  local_58 = local_68;
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  lVar2 = FUN_1492f2092(&local_38,*(undefined8 *)(param_3 + 0x10));
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (lVar2 == 0) goto LAB_14930958c;
  pcVar4 = (char *)(*(int *)(lVar2 + 0x44) + local_38);
  lVar6 = *(longlong *)(lVar2 + 8);
  lVar3 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar7 = lVar6 != 0;
    if (lVar6 != lVar3 && bVar7) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        bVar7 = lVar6 != 0;
        if (lVar6 == lVar3) break;
      } while (lVar6 != 0);
    }
    if (!bVar7) goto LAB_149309685;
  }
  else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
LAB_149309685:
    *pcVar4 = local_41;
    goto LAB_14930958c;
  }
  if (local_41 == '\x01') {
    bVar5 = *(byte *)(lVar2 + 0x72);
  }
  else {
    bVar5 = 0;
  }
  pcVar4[*(byte *)(lVar2 + 0x71)] =
       pcVar4[*(byte *)(lVar2 + 0x71)] & ~*(byte *)(lVar2 + 0x73) | bVar5;
LAB_14930958c:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493096a2 FUN_1493096a2 body=135 status=ok
// SIG undefined FUN_1493096a2(void)

undefined8 * FUN_1493096a2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc2f8b0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930972a FUN_14930972a body=57 status=ok
// SIG undefined FUN_14930972a(void)

undefined8 * FUN_14930972a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc2f8b0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149309778 FUN_149309778 body=64 status=ok
// SIG undefined FUN_149309778(void)

void FUN_149309778(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930988e(*param_2,param_1);
  return;
}



// FUNCTION 1493097b8 FUN_1493097b8 body=64 status=ok
// SIG undefined FUN_1493097b8(void)

void FUN_1493097b8(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930988e(*param_2,param_1);
  return;
}



// FUNCTION 1493097f8 FUN_1493097f8 body=98 status=ok
// SIG undefined FUN_1493097f8(void)

void FUN_1493097f8(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_14930988e(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014930984b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14930986e FUN_14930986e body=31 status=ok
// SIG undefined FUN_14930986e(void)

undefined1 FUN_14930986e(longlong param_1,undefined8 param_2)

{
  FUN_149309916(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 14930988e FUN_14930988e body=135 status=ok
// SIG undefined FUN_14930988e(void)

undefined8 * FUN_14930988e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc2f8b0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 149309916 FUN_149309916 body=298 status=ok
// SIG undefined FUN_149309916(void)

ulonglong FUN_149309916(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined7 uStack_67;
  int local_60;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_48 = param_4;
  local_40 = param_3;
  FUN_1400021e4(&local_48,&local_68);
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar2 = FUN_1492f2092(&local_40,uVar5);
  lVar3 = lVar2;
  if (CONCAT71(uStack_67,local_68) != 0) {
    lVar3 = FUN_1400020a8();
  }
  bVar1 = (byte)lVar3;
  if (lVar2 == 0) goto LAB_149309997;
  puVar6 = (undefined1 *)(*(int *)(lVar2 + 0x44) + local_40);
  lVar3 = *(longlong *)(lVar2 + 8);
  lVar4 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar7 = lVar3 != 0;
    if (lVar3 != lVar4 && bVar7) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar7 = lVar3 != 0;
        if (lVar3 == lVar4) break;
      } while (lVar3 != 0);
    }
    if (bVar7) {
LAB_149309a1d:
      local_68 = (puVar6[*(byte *)(lVar2 + 0x71)] & *(byte *)(lVar2 + 0x73)) != 0;
      puVar6 = &local_68;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_149309a1d;
  bVar1 = FUN_149309a42(param_1,param_2,puVar6);
  uVar5 = param_2;
LAB_149309997:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 149309a42 FUN_149309a42 body=177 status=ok
// SIG undefined FUN_149309a42(void)

ulonglong FUN_149309a42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_14108389e(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 1);
      goto LAB_149309ac4;
    }
  }
  uVar3 = 0;
LAB_149309ac4:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149309af4 FUN_149309af4 body=290 status=ok
// SIG undefined FUN_149309af4(void)

ulonglong FUN_149309af4(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bef94(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_149309bc3:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_149309bc3;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 10) goto LAB_149309bc3;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_149309c18(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_149309bda;
  }
  param_3 = 0;
LAB_149309bda:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149309c18 FUN_149309c18 body=198 status=ok
// SIG undefined FUN_149309c18(void)

undefined8 FUN_149309c18(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 10)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 1)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined1 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 149309cde FUN_149309cde body=290 status=ok
// SIG undefined FUN_149309cde(void)

ulonglong FUN_149309cde(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bf2c0(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_149309dad:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_149309dad;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0xb) goto LAB_149309dad;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_149309e02(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_149309dc4;
  }
  param_3 = 0;
LAB_149309dc4:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149309e02 FUN_149309e02 body=200 status=ok
// SIG undefined FUN_149309e02(void)

undefined8 FUN_149309e02(longlong *param_1,undefined8 *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0xb)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 2)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined2 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 149309eca FUN_149309eca body=135 status=ok
// SIG undefined FUN_149309eca(void)

undefined8 * FUN_149309eca(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc2f920;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 149309f52 FUN_149309f52 body=57 status=ok
// SIG undefined FUN_149309f52(void)

undefined8 * FUN_149309f52(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc2f920;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149309fa0 FUN_149309fa0 body=64 status=ok
// SIG undefined FUN_149309fa0(void)

void FUN_149309fa0(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930a0b6(*param_2,param_1);
  return;
}



// FUNCTION 149309fe0 FUN_149309fe0 body=64 status=ok
// SIG undefined FUN_149309fe0(void)

void FUN_149309fe0(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930a0b6(*param_2,param_1);
  return;
}



// FUNCTION 14930a020 FUN_14930a020 body=98 status=ok
// SIG undefined FUN_14930a020(void)

void FUN_14930a020(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_14930a0b6(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014930a073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14930a096 FUN_14930a096 body=31 status=ok
// SIG undefined FUN_14930a096(void)

undefined1 FUN_14930a096(longlong param_1,undefined8 param_2)

{
  FUN_14930a13e(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 14930a0b6 FUN_14930a0b6 body=135 status=ok
// SIG undefined FUN_14930a0b6(void)

undefined8 * FUN_14930a0b6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc2f920;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930a13e FUN_14930a13e body=204 status=ok
// SIG undefined FUN_14930a13e(void)

undefined4 FUN_14930a13e(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_4;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_149306eee(param_1,param_2,&local_44);
    if ((char)uVar1 != '\0') {
      local_30 = 0;
      local_38 = param_3;
      FUN_1400021e4(&local_40,&local_68);
      local_58 = local_68;
      local_50 = local_60 + -1;
      if (local_60 == 0) {
        local_50 = 0;
      }
      lVar2 = FUN_1492f2092(&local_38,*(undefined8 *)(param_3 + 0x10));
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        *(undefined4 *)(local_38 + *(int *)(lVar2 + 0x44)) = local_44;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930a20c FUN_14930a20c body=135 status=ok
// SIG undefined FUN_14930a20c(void)

undefined8 * FUN_14930a20c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc2f990;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930a294 FUN_14930a294 body=57 status=ok
// SIG undefined FUN_14930a294(void)

undefined8 * FUN_14930a294(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc2f990;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14930a2e2 FUN_14930a2e2 body=64 status=ok
// SIG undefined FUN_14930a2e2(void)

void FUN_14930a2e2(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930a3f8(*param_2,param_1);
  return;
}



// FUNCTION 14930a322 FUN_14930a322 body=64 status=ok
// SIG undefined FUN_14930a322(void)

void FUN_14930a322(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930a3f8(*param_2,param_1);
  return;
}



// FUNCTION 14930a362 FUN_14930a362 body=98 status=ok
// SIG undefined FUN_14930a362(void)

void FUN_14930a362(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_14930a3f8(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014930a3b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14930a3d8 FUN_14930a3d8 body=31 status=ok
// SIG undefined FUN_14930a3d8(void)

undefined1 FUN_14930a3d8(longlong param_1,undefined8 param_2)

{
  FUN_14930a480(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 14930a3f8 FUN_14930a3f8 body=135 status=ok
// SIG undefined FUN_14930a3f8(void)

undefined8 * FUN_14930a3f8(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc2f990;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930a480 FUN_14930a480 body=306 status=ok
// SIG undefined FUN_14930a480(void)

ulonglong FUN_14930a480(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined7 uStack_67;
  int local_60;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_48 = param_4;
  local_40 = param_3;
  FUN_1400021e4(&local_48,&local_68);
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar2 = FUN_1492f2092(&local_40,uVar5);
  lVar3 = lVar2;
  if (CONCAT71(uStack_67,local_68) != 0) {
    lVar3 = FUN_1400020a8();
  }
  bVar1 = (byte)lVar3;
  if (lVar2 == 0) goto LAB_14930a501;
  lVar6 = *(int *)(lVar2 + 0x44) + local_40;
  lVar3 = *(longlong *)(lVar2 + 8);
  lVar4 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar7 = lVar3 != 0;
    if (lVar3 != lVar4 && bVar7) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar7 = lVar3 != 0;
        if (lVar3 == lVar4) break;
      } while (lVar3 != 0);
    }
    if (bVar7) {
LAB_14930a58f:
      local_68 = (*(byte *)(lVar6 + (ulonglong)*(byte *)(lVar2 + 0x71)) & *(byte *)(lVar2 + 0x73))
                 != 0;
      bVar1 = FUN_149309a42(param_1,param_2);
      uVar5 = param_2;
      goto LAB_14930a501;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_14930a58f;
  bVar1 = FUN_14930a5b4(param_1,param_2,lVar6);
  uVar5 = param_2;
LAB_14930a501:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar5 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930a5b4 FUN_14930a5b4 body=177 status=ok
// SIG undefined FUN_14930a5b4(void)

ulonglong FUN_14930a5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444ba982(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 0xc);
      goto LAB_14930a636;
    }
  }
  uVar3 = 0;
LAB_14930a636:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930a666 FUN_14930a666 body=290 status=ok
// SIG undefined FUN_14930a666(void)

ulonglong FUN_14930a666(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bf5ec(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_14930a735:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_14930a735;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0xd) goto LAB_14930a735;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_14930a78a(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_14930a74c;
  }
  param_3 = 0;
LAB_14930a74c:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930a78a FUN_14930a78a body=200 status=ok
// SIG undefined FUN_14930a78a(void)

undefined8 FUN_14930a78a(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0xd)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 8)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined8 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 14930a852 FUN_14930a852 body=135 status=ok
// SIG undefined FUN_14930a852(void)

undefined8 * FUN_14930a852(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc2fa00;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930a8da FUN_14930a8da body=57 status=ok
// SIG undefined FUN_14930a8da(void)

undefined8 * FUN_14930a8da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc2fa00;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14930a928 FUN_14930a928 body=64 status=ok
// SIG undefined FUN_14930a928(void)

void FUN_14930a928(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930aa3e(*param_2,param_1);
  return;
}



// FUNCTION 14930a968 FUN_14930a968 body=64 status=ok
// SIG undefined FUN_14930a968(void)

void FUN_14930a968(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930aa3e(*param_2,param_1);
  return;
}



// FUNCTION 14930a9a8 FUN_14930a9a8 body=98 status=ok
// SIG undefined FUN_14930a9a8(void)

void FUN_14930a9a8(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_14930aa3e(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014930a9fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14930aa1e FUN_14930aa1e body=31 status=ok
// SIG undefined FUN_14930aa1e(void)

undefined1 FUN_14930aa1e(longlong param_1,undefined8 param_2)

{
  FUN_14930aac6(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 14930aa3e FUN_14930aa3e body=135 status=ok
// SIG undefined FUN_14930aa3e(void)

undefined8 * FUN_14930aa3e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc2fa00;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930aac6 FUN_14930aac6 body=204 status=ok
// SIG undefined FUN_14930aac6(void)

undefined4 FUN_14930aac6(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined1 local_41;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_4;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14930ab94(param_1,param_2,&local_41);
    if ((char)uVar1 != '\0') {
      local_30 = 0;
      local_38 = param_3;
      FUN_1400021e4(&local_40,&local_68);
      local_58 = local_68;
      local_50 = local_60 + -1;
      if (local_60 == 0) {
        local_50 = 0;
      }
      lVar2 = FUN_1492f2092(&local_38,*(undefined8 *)(param_3 + 0x10));
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        *(undefined1 *)(local_38 + *(int *)(lVar2 + 0x44)) = local_41;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930ab94 FUN_14930ab94 body=290 status=ok
// SIG undefined FUN_14930ab94(void)

ulonglong FUN_14930ab94(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444be556(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_14930ac63:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_14930ac63;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0x15) goto LAB_14930ac63;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_14930380a(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_14930ac7a;
  }
  param_3 = 0;
LAB_14930ac7a:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930acb8 FUN_14930acb8 body=135 status=ok
// SIG undefined FUN_14930acb8(void)

undefined8 * FUN_14930acb8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc2fa70;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930ad40 FUN_14930ad40 body=57 status=ok
// SIG undefined FUN_14930ad40(void)

undefined8 * FUN_14930ad40(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc2fa70;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14930ad8e FUN_14930ad8e body=64 status=ok
// SIG undefined FUN_14930ad8e(void)

void FUN_14930ad8e(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930aea4(*param_2,param_1);
  return;
}



// FUNCTION 14930adce FUN_14930adce body=64 status=ok
// SIG undefined FUN_14930adce(void)

void FUN_14930adce(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930aea4(*param_2,param_1);
  return;
}



// FUNCTION 14930ae0e FUN_14930ae0e body=98 status=ok
// SIG undefined FUN_14930ae0e(void)

void FUN_14930ae0e(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_14930aea4(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014930ae61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14930ae84 FUN_14930ae84 body=31 status=ok
// SIG undefined FUN_14930ae84(void)

undefined1 FUN_14930ae84(longlong param_1,undefined8 param_2)

{
  FUN_14930af2c(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 14930aea4 FUN_14930aea4 body=135 status=ok
// SIG undefined FUN_14930aea4(void)

undefined8 * FUN_14930aea4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc2fa70;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930af2c FUN_14930af2c body=306 status=ok
// SIG undefined FUN_14930af2c(void)

ulonglong FUN_14930af2c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined7 uStack_67;
  int local_60;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_48 = param_4;
  local_40 = param_3;
  FUN_1400021e4(&local_48,&local_68);
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar2 = FUN_1492f2092(&local_40,uVar5);
  lVar3 = lVar2;
  if (CONCAT71(uStack_67,local_68) != 0) {
    lVar3 = FUN_1400020a8();
  }
  bVar1 = (byte)lVar3;
  if (lVar2 == 0) goto LAB_14930afad;
  lVar6 = *(int *)(lVar2 + 0x44) + local_40;
  lVar3 = *(longlong *)(lVar2 + 8);
  lVar4 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar7 = lVar3 != 0;
    if (lVar3 != lVar4 && bVar7) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar7 = lVar3 != 0;
        if (lVar3 == lVar4) break;
      } while (lVar3 != 0);
    }
    if (bVar7) {
LAB_14930b03b:
      local_68 = (*(byte *)(lVar6 + (ulonglong)*(byte *)(lVar2 + 0x71)) & *(byte *)(lVar2 + 0x73))
                 != 0;
      bVar1 = FUN_149309a42(param_1,param_2);
      uVar5 = param_2;
      goto LAB_14930afad;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_14930b03b;
  bVar1 = FUN_14930b060(param_1,param_2,lVar6);
  uVar5 = param_2;
LAB_14930afad:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar5 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930b060 FUN_14930b060 body=177 status=ok
// SIG undefined FUN_14930b060(void)

ulonglong FUN_14930b060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1410837a0(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 0x15);
      goto LAB_14930b0e2;
    }
  }
  uVar3 = 0;
LAB_14930b0e2:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930b112 FUN_14930b112 body=290 status=ok
// SIG undefined FUN_14930b112(void)

ulonglong FUN_14930b112(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bf918(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_14930b1e1:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_14930b1e1;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0x16) goto LAB_14930b1e1;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_14930b236(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_14930b1f8;
  }
  param_3 = 0;
LAB_14930b1f8:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930b236 FUN_14930b236 body=200 status=ok
// SIG undefined FUN_14930b236(void)

undefined8 FUN_14930b236(longlong *param_1,undefined8 *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0x16)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 2)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined2 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 14930b2fe FUN_14930b2fe body=290 status=ok
// SIG undefined FUN_14930b2fe(void)

ulonglong FUN_14930b2fe(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bfc44(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_14930b3cd:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_14930b3cd;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0x17) goto LAB_14930b3cd;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_14930b422(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_14930b3e4;
  }
  param_3 = 0;
LAB_14930b3e4:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930b422 FUN_14930b422 body=198 status=ok
// SIG undefined FUN_14930b422(void)

undefined8 FUN_14930b422(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0x17)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 4)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined4 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 14930b4e8 FUN_14930b4e8 body=290 status=ok
// SIG undefined FUN_14930b4e8(void)

ulonglong FUN_14930b4e8(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bff70(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_14930b5b7:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_14930b5b7;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0x18) goto LAB_14930b5b7;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_14930b60c(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_14930b5ce;
  }
  param_3 = 0;
LAB_14930b5ce:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930b60c FUN_14930b60c body=200 status=ok
// SIG undefined FUN_14930b60c(void)

undefined8 FUN_14930b60c(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0x18)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 8)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined8 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 14930b6d4 FUN_14930b6d4 body=135 status=ok
// SIG undefined FUN_14930b6d4(void)

undefined8 * FUN_14930b6d4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc2fae0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930b75c FUN_14930b75c body=57 status=ok
// SIG undefined FUN_14930b75c(void)

undefined8 * FUN_14930b75c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc2fae0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14930b7aa FUN_14930b7aa body=64 status=ok
// SIG undefined FUN_14930b7aa(void)

void FUN_14930b7aa(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930b8c0(*param_2,param_1);
  return;
}



// FUNCTION 14930b7ea FUN_14930b7ea body=64 status=ok
// SIG undefined FUN_14930b7ea(void)

void FUN_14930b7ea(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930b8c0(*param_2,param_1);
  return;
}



// FUNCTION 14930b82a FUN_14930b82a body=98 status=ok
// SIG undefined FUN_14930b82a(void)

void FUN_14930b82a(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_14930b8c0(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014930b87d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14930b8a0 FUN_14930b8a0 body=31 status=ok
// SIG undefined FUN_14930b8a0(void)

undefined1 FUN_14930b8a0(longlong param_1,undefined8 param_2)

{
  FUN_14930b948(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 14930b8c0 FUN_14930b8c0 body=135 status=ok
// SIG undefined FUN_14930b8c0(void)

undefined8 * FUN_14930b8c0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc2fae0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930b948 FUN_14930b948 body=208 status=ok
// SIG undefined FUN_14930b948(void)

undefined4 FUN_14930b948(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_4;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_149306ca6(param_1,param_2,&local_44);
    if ((char)uVar1 != '\0') {
      local_30 = 0;
      local_38 = param_3;
      FUN_1400021e4(&local_40,&local_68);
      local_58 = local_68;
      local_50 = local_60 + -1;
      if (local_60 == 0) {
        local_50 = 0;
      }
      lVar2 = FUN_1492f2092(&local_38,*(undefined8 *)(param_3 + 0x10));
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        *(undefined4 *)(local_38 + *(int *)(lVar2 + 0x44)) = local_44;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930ba1a FUN_14930ba1a body=135 status=ok
// SIG undefined FUN_14930ba1a(void)

undefined8 * FUN_14930ba1a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc2fb50;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930baa2 FUN_14930baa2 body=57 status=ok
// SIG undefined FUN_14930baa2(void)

undefined8 * FUN_14930baa2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc2fb50;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14930baf0 FUN_14930baf0 body=64 status=ok
// SIG undefined FUN_14930baf0(void)

void FUN_14930baf0(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930bc06(*param_2,param_1);
  return;
}



// FUNCTION 14930bb30 FUN_14930bb30 body=64 status=ok
// SIG undefined FUN_14930bb30(void)

void FUN_14930bb30(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930bc06(*param_2,param_1);
  return;
}



// FUNCTION 14930bb70 FUN_14930bb70 body=98 status=ok
// SIG undefined FUN_14930bb70(void)

void FUN_14930bb70(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_14930bc06(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014930bbc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14930bbe6 FUN_14930bbe6 body=31 status=ok
// SIG undefined FUN_14930bbe6(void)

undefined1 FUN_14930bbe6(longlong param_1,undefined8 param_2)

{
  FUN_14930bc8e(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 14930bc06 FUN_14930bc06 body=135 status=ok
// SIG undefined FUN_14930bc06(void)

undefined8 * FUN_14930bc06(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc2fb50;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930bc8e FUN_14930bc8e body=306 status=ok
// SIG undefined FUN_14930bc8e(void)

ulonglong FUN_14930bc8e(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined7 uStack_67;
  int local_60;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_48 = param_4;
  local_40 = param_3;
  FUN_1400021e4(&local_48,&local_68);
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar2 = FUN_1492f2092(&local_40,uVar5);
  lVar3 = lVar2;
  if (CONCAT71(uStack_67,local_68) != 0) {
    lVar3 = FUN_1400020a8();
  }
  bVar1 = (byte)lVar3;
  if (lVar2 == 0) goto LAB_14930bd0f;
  lVar6 = *(int *)(lVar2 + 0x44) + local_40;
  lVar3 = *(longlong *)(lVar2 + 8);
  lVar4 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar7 = lVar3 != 0;
    if (lVar3 != lVar4 && bVar7) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar7 = lVar3 != 0;
        if (lVar3 == lVar4) break;
      } while (lVar3 != 0);
    }
    if (bVar7) {
LAB_14930bd9d:
      local_68 = (*(byte *)(lVar6 + (ulonglong)*(byte *)(lVar2 + 0x71)) & *(byte *)(lVar2 + 0x73))
                 != 0;
      bVar1 = FUN_149309a42(param_1,param_2);
      uVar5 = param_2;
      goto LAB_14930bd0f;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_14930bd9d;
  bVar1 = FUN_14930bdc2(param_1,param_2,lVar6);
  uVar5 = param_2;
LAB_14930bd0f:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar5 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930bdc2 FUN_14930bdc2 body=177 status=ok
// SIG undefined FUN_14930bdc2(void)

ulonglong FUN_14930bdc2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444baa80(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 8);
      goto LAB_14930be44;
    }
  }
  uVar3 = 0;
LAB_14930be44:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930be74 FUN_14930be74 body=290 status=ok
// SIG undefined FUN_14930be74(void)

ulonglong FUN_14930be74(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444c029c(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_14930bf43:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_14930bf43;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0x1d) goto LAB_14930bf43;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_14930bf98(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_14930bf5a;
  }
  param_3 = 0;
LAB_14930bf5a:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930bf98 FUN_14930bf98 body=200 status=ok
// SIG undefined FUN_14930bf98(void)

undefined8 FUN_14930bf98(longlong *param_1,undefined8 *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0x1d)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 2)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined2 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 14930c060 FUN_14930c060 body=290 status=ok
// SIG undefined FUN_14930c060(void)

ulonglong FUN_14930c060(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bdec0(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_14930c12f:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_14930c12f;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0x2f) goto LAB_14930c12f;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_149303742(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_14930c146;
  }
  param_3 = 0;
LAB_14930c146:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930c184 FUN_14930c184 body=290 status=ok
// SIG undefined FUN_14930c184(void)

ulonglong FUN_14930c184(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444c05c8(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_14930c253:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_14930c253;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0x2d) goto LAB_14930c253;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_14930c2a8(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_14930c26a;
  }
  param_3 = 0;
LAB_14930c26a:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930c2a8 FUN_14930c2a8 body=207 status=ok
// SIG undefined FUN_14930c2a8(void)

undefined8 FUN_14930c2a8(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar6);
  iVar4 = FUN_140c4443c(param_1,uVar3,param_2);
  uVar7 = 0x800000;
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x40 + *param_1;
    if ((((longlong *)(lVar5 + 0x10) != (longlong *)0x0 && lVar5 != 0) &&
        (uVar7 = 0x100000, *(int *)(lVar5 + 0x20) == 0x2d)) &&
       (uVar7 = 0x200000, *(longlong *)(lVar5 + 0x18) == 0xc)) {
      lVar5 = *(longlong *)(lVar5 + 0x10);
      uVar7 = 0x400000;
      if ((-1 < lVar5) && (lVar5 < param_1[0xb])) {
        lVar1 = param_1[10];
        *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar1 + 8 + lVar5);
        *param_3 = *(undefined8 *)(lVar1 + lVar5);
        uVar7 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar7;
}



// FUNCTION 14930c378 FUN_14930c378 body=290 status=ok
// SIG undefined FUN_14930c378(void)

ulonglong FUN_14930c378(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444c08f4(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_14930c447:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_14930c447;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0x30) goto LAB_14930c447;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_14930c49c(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_14930c45e;
  }
  param_3 = 0;
LAB_14930c45e:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930c49c FUN_14930c49c body=200 status=ok
// SIG undefined FUN_14930c49c(void)

undefined8 FUN_14930c49c(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar6 = *(int *)(param_2 + 1);
  if (iVar6 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  iVar2 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar2 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar2,puVar8);
  iVar6 = FUN_140c4443c(param_1,uVar5,param_2);
  uVar9 = 0x800000;
  if (iVar6 != -1) {
    lVar7 = (longlong)iVar6 * 0x40 + *param_1;
    if ((((longlong *)(lVar7 + 0x10) != (longlong *)0x0 && lVar7 != 0) &&
        (uVar9 = 0x100000, *(int *)(lVar7 + 0x20) == 0x30)) &&
       (uVar9 = 0x200000, *(longlong *)(lVar7 + 0x18) == 0x10)) {
      lVar7 = *(longlong *)(lVar7 + 0x10);
      uVar9 = 0x400000;
      if ((-1 < lVar7) && (lVar7 < param_1[0xb])) {
        puVar1 = (undefined4 *)(param_1[10] + lVar7);
        uVar5 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *param_3 = *puVar1;
        param_3[1] = uVar5;
        param_3[2] = uVar3;
        param_3[3] = uVar4;
        uVar9 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar9;
}



// FUNCTION 14930c564 FUN_14930c564 body=290 status=ok
// SIG undefined FUN_14930c564(void)

ulonglong FUN_14930c564(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444c0c20(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_14930c633:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_14930c633;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0x19) goto LAB_14930c633;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_14930c688(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_14930c64a;
  }
  param_3 = 0;
LAB_14930c64a:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930c688 FUN_14930c688 body=200 status=ok
// SIG undefined FUN_14930c688(void)

undefined8 FUN_14930c688(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar6 = *(int *)(param_2 + 1);
  if (iVar6 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  iVar2 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar2 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar2,puVar8);
  iVar6 = FUN_140c4443c(param_1,uVar5,param_2);
  uVar9 = 0x800000;
  if (iVar6 != -1) {
    lVar7 = (longlong)iVar6 * 0x40 + *param_1;
    if ((((longlong *)(lVar7 + 0x10) != (longlong *)0x0 && lVar7 != 0) &&
        (uVar9 = 0x100000, *(int *)(lVar7 + 0x20) == 0x19)) &&
       (uVar9 = 0x200000, *(longlong *)(lVar7 + 0x18) == 0x10)) {
      lVar7 = *(longlong *)(lVar7 + 0x10);
      uVar9 = 0x400000;
      if ((-1 < lVar7) && (lVar7 < param_1[0xb])) {
        puVar1 = (undefined4 *)(param_1[10] + lVar7);
        uVar5 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *param_3 = *puVar1;
        param_3[1] = uVar5;
        param_3[2] = uVar3;
        param_3[3] = uVar4;
        uVar9 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar9;
}



// FUNCTION 14930c750 FUN_14930c750 body=216 status=ok
// SIG undefined FUN_14930c750(void)

undefined4 FUN_14930c750(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  longlong local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_4;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14930c82a(param_1,param_2,&local_58);
    if ((char)uVar3 != '\0') {
      local_30 = 0;
      local_38 = param_3;
      FUN_1400021e4(&local_40,&local_78);
      local_68 = local_78;
      local_60 = local_70 + -1;
      if (local_70 == 0) {
        local_60 = 0;
      }
      lVar4 = FUN_1492f2092(&local_38,*(undefined8 *)(param_3 + 0x10));
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (lVar4 != 0) {
        iVar2 = *(int *)(lVar4 + 0x44);
        *(undefined8 *)(local_38 + 0x10 + (longlong)iVar2) = local_48;
        puVar1 = (undefined4 *)(local_38 + iVar2);
        *puVar1 = local_58;
        puVar1[1] = uStack_54;
        puVar1[2] = uStack_50;
        puVar1[3] = uStack_4c;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930c82a FUN_14930c82a body=290 status=ok
// SIG undefined FUN_14930c82a(void)

ulonglong FUN_14930c82a(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444c0f4c(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_14930c8f9:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_14930c8f9;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0x2e) goto LAB_14930c8f9;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_14930c94e(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_14930c910;
  }
  param_3 = 0;
LAB_14930c910:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930c94e FUN_14930c94e body=209 status=ok
// SIG undefined FUN_14930c94e(void)

undefined8 FUN_14930c94e(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar7 = *(int *)(param_2 + 1);
  if (iVar7 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_2;
  }
  iVar3 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar3 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar3,puVar9);
  iVar7 = FUN_140c4443c(param_1,uVar6,param_2);
  uVar10 = 0x800000;
  if (iVar7 != -1) {
    lVar8 = (longlong)iVar7 * 0x40 + *param_1;
    if ((((longlong *)(lVar8 + 0x10) != (longlong *)0x0 && lVar8 != 0) &&
        (uVar10 = 0x100000, *(int *)(lVar8 + 0x20) == 0x2e)) &&
       (uVar10 = 0x200000, *(longlong *)(lVar8 + 0x18) == 0x18)) {
      lVar8 = *(longlong *)(lVar8 + 0x10);
      uVar10 = 0x400000;
      if ((-1 < lVar8) && (lVar8 < param_1[0xb])) {
        lVar2 = param_1[10];
        *(undefined8 *)(param_3 + 4) = *(undefined8 *)(lVar2 + 0x10 + lVar8);
        puVar1 = (undefined4 *)(lVar2 + lVar8);
        uVar6 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *param_3 = *puVar1;
        param_3[1] = uVar6;
        param_3[2] = uVar4;
        param_3[3] = uVar5;
        uVar10 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar10;
}



// FUNCTION 14930ca20 FUN_14930ca20 body=306 status=ok
// SIG undefined FUN_14930ca20(void)

ulonglong FUN_14930ca20(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined7 uStack_67;
  int local_60;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_48 = param_4;
  local_40 = param_3;
  FUN_1400021e4(&local_48,&local_68);
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar2 = FUN_1492f2092(&local_40,uVar5);
  lVar3 = lVar2;
  if (CONCAT71(uStack_67,local_68) != 0) {
    lVar3 = FUN_1400020a8();
  }
  bVar1 = (byte)lVar3;
  if (lVar2 == 0) goto LAB_14930caa1;
  lVar6 = *(int *)(lVar2 + 0x44) + local_40;
  lVar3 = *(longlong *)(lVar2 + 8);
  lVar4 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar7 = lVar3 != 0;
    if (lVar3 != lVar4 && bVar7) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar7 = lVar3 != 0;
        if (lVar3 == lVar4) break;
      } while (lVar3 != 0);
    }
    if (bVar7) {
LAB_14930cb2f:
      local_68 = (*(byte *)(lVar6 + (ulonglong)*(byte *)(lVar2 + 0x71)) & *(byte *)(lVar2 + 0x73))
                 != 0;
      bVar1 = FUN_149309a42(param_1,param_2);
      uVar5 = param_2;
      goto LAB_14930caa1;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_14930cb2f;
  bVar1 = FUN_14930cb54(param_1,param_2,lVar6);
  uVar5 = param_2;
LAB_14930caa1:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar5 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930cb54 FUN_14930cb54 body=177 status=ok
// SIG undefined FUN_14930cb54(void)

ulonglong FUN_14930cb54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444c117e(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 0x2e);
      goto LAB_14930cbd6;
    }
  }
  uVar3 = 0;
LAB_14930cbd6:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930cc06 FUN_14930cc06 body=290 status=ok
// SIG undefined FUN_14930cc06(void)

ulonglong FUN_14930cc06(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444c127c(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_14930ccd5:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_14930ccd5;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0x31) goto LAB_14930ccd5;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_14930cd2a(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_14930ccec;
  }
  param_3 = 0;
LAB_14930ccec:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930cd2a FUN_14930cd2a body=209 status=ok
// SIG undefined FUN_14930cd2a(void)

undefined8 FUN_14930cd2a(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar8 = *(int *)(param_2 + 1);
  if (iVar8 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*param_2;
  }
  iVar3 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar3 = 0;
  }
  uVar7 = FUN_144a49b4a(iVar3,puVar10);
  iVar8 = FUN_140c4443c(param_1,uVar7,param_2);
  uVar11 = 0x800000;
  if (iVar8 != -1) {
    lVar9 = (longlong)iVar8 * 0x40 + *param_1;
    if ((((longlong *)(lVar9 + 0x10) != (longlong *)0x0 && lVar9 != 0) &&
        (uVar11 = 0x100000, *(int *)(lVar9 + 0x20) == 0x31)) &&
       (uVar11 = 0x200000, *(longlong *)(lVar9 + 0x18) == 0x20)) {
      lVar9 = *(longlong *)(lVar9 + 0x10);
      uVar11 = 0x400000;
      if ((-1 < lVar9) && (lVar9 < param_1[0xb])) {
        puVar1 = (undefined4 *)(param_1[10] + lVar9);
        uVar7 = *puVar1;
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (undefined8 *)(param_1[10] + 0x10 + lVar9);
        uVar11 = puVar2[1];
        *(undefined8 *)(param_3 + 4) = *puVar2;
        *(undefined8 *)(param_3 + 6) = uVar11;
        *param_3 = uVar7;
        param_3[1] = uVar4;
        param_3[2] = uVar5;
        param_3[3] = uVar6;
        uVar11 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar11;
}



// FUNCTION 14930cdfc FUN_14930cdfc body=135 status=ok
// SIG undefined FUN_14930cdfc(void)

undefined8 * FUN_14930cdfc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc2fbc0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930ce84 FUN_14930ce84 body=57 status=ok
// SIG undefined FUN_14930ce84(void)

undefined8 * FUN_14930ce84(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc2fbc0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14930ced2 FUN_14930ced2 body=64 status=ok
// SIG undefined FUN_14930ced2(void)

void FUN_14930ced2(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930cfe8(*param_2,param_1);
  return;
}



// FUNCTION 14930cf12 FUN_14930cf12 body=64 status=ok
// SIG undefined FUN_14930cf12(void)

void FUN_14930cf12(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930cfe8(*param_2,param_1);
  return;
}



// FUNCTION 14930cf52 FUN_14930cf52 body=98 status=ok
// SIG undefined FUN_14930cf52(void)

void FUN_14930cf52(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_14930cfe8(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014930cfa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14930cfc8 FUN_14930cfc8 body=31 status=ok
// SIG undefined FUN_14930cfc8(void)

undefined1 FUN_14930cfc8(longlong param_1,undefined8 param_2)

{
  FUN_14930d070(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 14930cfe8 FUN_14930cfe8 body=135 status=ok
// SIG undefined FUN_14930cfe8(void)

undefined8 * FUN_14930cfe8(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc2fbc0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930d070 FUN_14930d070 body=440 status=ok
// SIG undefined FUN_14930d070(void)

undefined4 FUN_14930d070(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = param_4;
  if (param_3 == 0) {
    uVar2 = 0;
    goto LAB_14930d09a;
  }
  local_68 = 0;
  uStack_60 = 0;
  uVar2 = FUN_149306b82();
  if ((char)uVar2 != '\0') {
    local_30 = 0;
    local_38 = param_3;
    FUN_1400021e4(&local_50,&local_98);
    local_78 = local_98;
    local_70 = (int)uStack_90 + -1;
    if ((int)uStack_90 == 0) {
      local_70 = 0;
    }
    lVar3 = FUN_1492f2092(&local_38,*(undefined8 *)(param_3 + 0x10));
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (lVar3 != 0) {
      lVar6 = *(int *)(lVar3 + 0x44) + local_38;
      lVar7 = *(longlong *)(lVar3 + 8);
      lVar4 = FUN_1446f4b16();
      if (*(ulonglong *)(lVar4 + 8) == 0) {
        bVar8 = lVar7 != 0;
        if (lVar7 != lVar4 && bVar8) {
          do {
            lVar7 = *(longlong *)(lVar7 + 0x30);
            bVar8 = lVar7 != 0;
            if (lVar7 == lVar4) break;
          } while (lVar7 != 0);
        }
        if (!bVar8) goto LAB_14930d208;
      }
      else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) {
LAB_14930d208:
        iVar1 = (int)uStack_60 + -1;
        if ((int)uStack_60 == 0) {
          iVar1 = 0;
        }
        FUN_1402980a2(lVar6,local_68,iVar1);
        goto LAB_14930d0dd;
      }
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_48 = local_68;
      local_40 = (int)uStack_60 + -1;
      if ((int)uStack_60 == 0) {
        local_40 = 0;
      }
      FUN_14475bf92(&local_98);
      uVar5 = FUN_140081d40(&local_98,0);
      FUN_14281147a(lVar3,lVar6,uVar5);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14930d0dd:
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_14930d09a:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930d22a FUN_14930d22a body=135 status=ok
// SIG undefined FUN_14930d22a(void)

undefined8 * FUN_14930d22a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc2fc30;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930d2b2 FUN_14930d2b2 body=57 status=ok
// SIG undefined FUN_14930d2b2(void)

undefined8 * FUN_14930d2b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc2fc30;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14930d300 FUN_14930d300 body=64 status=ok
// SIG undefined FUN_14930d300(void)

void FUN_14930d300(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930d416(*param_2,param_1);
  return;
}



// FUNCTION 14930d340 FUN_14930d340 body=64 status=ok
// SIG undefined FUN_14930d340(void)

void FUN_14930d340(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14930d416(*param_2,param_1);
  return;
}



// FUNCTION 14930d380 FUN_14930d380 body=98 status=ok
// SIG undefined FUN_14930d380(void)

void FUN_14930d380(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_14930d416(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014930d3d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14930d3f6 FUN_14930d3f6 body=31 status=ok
// SIG undefined FUN_14930d3f6(void)

undefined1 FUN_14930d3f6(longlong param_1,undefined8 param_2)

{
  FUN_14930d49e(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 14930d416 FUN_14930d416 body=135 status=ok
// SIG undefined FUN_14930d416(void)

undefined8 * FUN_14930d416(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc2fc30;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14930d49e FUN_14930d49e body=345 status=ok
// SIG undefined FUN_14930d49e(void)

byte FUN_14930d49e(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte unaff_BPL;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = 0;
  local_50 = param_4;
  local_48 = param_3;
  FUN_1400021e4(&local_50,&local_70);
  local_60 = local_70;
  local_58 = local_68 + -1;
  if (local_68 == 0) {
    local_58 = 0;
  }
  plVar1 = (longlong *)FUN_1492f2092(&local_48,*(undefined8 *)(param_3 + 0x10));
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (plVar1 == (longlong *)0x0) goto LAB_14930d520;
  lVar4 = *(int *)((longlong)plVar1 + 0x44) + local_48;
  lVar5 = plVar1[1];
  lVar2 = FUN_1446f4b16();
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar5 != 0;
    if (lVar5 != lVar2 && bVar6) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar6 = lVar5 != 0;
        if (lVar5 == lVar2) break;
      } while (lVar5 != 0);
    }
    if (bVar6) {
LAB_14930d5b0:
      uVar3 = (**(code **)(*plVar1 + 0x210))(plVar1,lVar4);
      FUN_14010318a(uVar3,&local_70,0);
      unaff_BPL = FUN_14930d5f8(param_1,param_2,&local_70);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14930d520;
    }
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_14930d5b0;
  unaff_BPL = FUN_14930d5f8(param_1,param_2,lVar4);
LAB_14930d520:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return plVar1 != (longlong *)0x0 & unaff_BPL;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930d5f8 FUN_14930d5f8 body=177 status=ok
// SIG undefined FUN_14930d5f8(void)

ulonglong FUN_14930d5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444bac7c(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 0x12);
      goto LAB_14930d67a;
    }
  }
  uVar3 = 0;
LAB_14930d67a:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930d6aa FUN_14930d6aa body=220 status=ok
// SIG undefined FUN_14930d6aa(void)

undefined4 FUN_14930d6aa(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  wchar_t *_Str2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = *(int *)(param_2 + 1);
    if (iVar3 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    iVar5 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    iVar3 = FUN_144a49b4a(iVar5,puVar7);
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar6 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      iVar5 = *(int *)(param_2 + 1);
      _Str2 = (wchar_t *)*param_2;
      do {
        puVar1 = (undefined8 *)(lVar2 + (longlong)iVar3 * 0x40);
        iVar4 = *(int *)(lVar2 + 8 + (longlong)iVar3 * 0x40);
        if (iVar4 == iVar5) {
          if ((iVar5 < 2) || (iVar4 = wcscmp((wchar_t *)*puVar1,_Str2), iVar4 == 0))
          goto LAB_14930d772;
        }
        else if (iVar4 + iVar5 == 1) {
LAB_14930d772:
          FUN_14930d786(param_1,iVar3);
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 7);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 14930d786 FUN_14930d786 body=90 status=ok
// SIG undefined FUN_14930d786(void)

void FUN_14930d786(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x3c + (longlong)param_2 * 0x40);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x38 + lVar5 * 0x40);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x40 + 0x38);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x40 + 0x38);
  FUN_14930d7e0();
  return;
}



// FUNCTION 14930d7e0 FUN_14930d7e0 body=57 status=ok
// SIG undefined FUN_14930d7e0(void)

void FUN_14930d7e0(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14930d81a(param_1,param_2,1);
  return;
}



// FUNCTION 14930d81a FUN_14930d81a body=138 status=ok
// SIG undefined FUN_14930d81a(void)

void FUN_14930d81a(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x40 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14930d8a4 FUN_14930d8a4 body=96 status=ok
// SIG undefined FUN_14930d8a4(void)

void FUN_14930d8a4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
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



// FUNCTION 14930d904 FUN_14930d904 body=411 status=ok
// SIG undefined FUN_14930d904(void)

void FUN_14930d904(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 14930daa0 FUN_14930daa0 body=476 status=ok
// SIG undefined FUN_14930daa0(void)

void FUN_14930daa0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
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
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
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
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x18);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x18);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x14 + lVar7 * 0x18) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar7 * 0x18) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
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



// FUNCTION 14930dc7e FUN_14930dc7e body=153 status=ok
// SIG undefined FUN_14930dc7e(void)

int FUN_14930dc7e(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *_Str2;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar3 = *param_1;
      iVar2 = *(int *)(param_3 + 1);
      _Str2 = (wchar_t *)*param_3;
      do {
        lVar6 = (longlong)iVar1;
        iVar4 = *(int *)(lVar3 + 8 + lVar6 * 0x18);
        if (iVar4 == iVar2) {
          if (iVar2 < 2) {
            return iVar1;
          }
          iVar4 = wcscmp(*(wchar_t **)(lVar3 + lVar6 * 0x18),_Str2);
          if (iVar4 == 0) {
            return iVar1;
          }
        }
        else if (iVar4 + iVar2 == 1) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + 0x10 + lVar6 * 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14930dd18 FUN_14930dd18 body=393 status=ok
// SIG undefined FUN_14930dd18(void)

undefined4 * FUN_14930dd18(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14930dea2(param_1,local_48);
  *local_40 = 0;
  iVar7 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(local_40 + 1) = iVar7;
  if ((longlong)iVar7 == 0) {
    *(undefined8 *)((longlong)local_40 + 0xc) = 0xffffffff00000000;
    puVar8 = &DAT_149dfb77a;
    iVar7 = 0;
  }
  else {
    FUN_1446dd670(local_40,iVar7,0);
    memcpy((void *)*local_40,_Src,(longlong)iVar7 * 2);
    iVar7 = *(int *)(local_40 + 1);
    *(undefined4 *)(local_40 + 2) = 0xffffffff;
    if (iVar7 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)*local_40;
    }
  }
  local_4c = local_48[0];
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_14930df88(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14930daa0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930dea2 FUN_14930dea2 body=230 status=ok
// SIG undefined FUN_14930dea2(void)

int * FUN_14930dea2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14930df88 FUN_14930df88 body=105 status=ok
// SIG undefined FUN_14930df88(void)

undefined8 FUN_14930df88(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar5 = FUN_14930dc7e(), iVar5 != -1)) {
    plVar1 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *(undefined4 *)plVar1 = *param_3;
    *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
    *(undefined4 *)(plVar1 + 1) = uVar3;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
    FUN_14930dff2(param_1,*param_4);
    *param_4 = iVar5;
    return 1;
  }
  return 0;
}



// FUNCTION 14930dff2 FUN_14930dff2 body=114 status=ok
// SIG undefined FUN_14930dff2(void)

void FUN_14930dff2(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 14930e064 FUN_14930e064 body=52 status=ok
// SIG undefined FUN_14930e064(void)

void FUN_14930e064(longlong *param_1)

{
  FUN_14930e098();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14930e098 FUN_14930e098 body=312 status=ok
// SIG undefined FUN_14930e098(void)

void FUN_14930e098(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x18) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 14930e1d1 FUN_14930e1d1 body=851 status=ok
// SIG undefined FUN_14930e1d1(void)

void FUN_14930e1d1(longlong param_1,uint param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  wchar_t *pwVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  wchar_t *_Str2;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined1 auStack_398 [32];
  longlong *local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  undefined8 *local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar19 + fVar19);
    plVar12 = &local_358;
    do {
      puVar16 = (undefined8 *)*plVar12;
      puVar9 = (undefined8 *)plVar12[1];
      iVar7 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar16) >> 4);
      local_370 = (undefined8 *)CONCAT44(local_370._4_4_,(int)plVar12[2]);
      puVar17 = puVar9;
      puVar14 = puVar16;
      local_378 = plVar12;
      if ((int)plVar12[2] != 0) {
LAB_14930e2ab:
        if (8 < (int)(iVar7 + 1U)) {
          uVar10 = (ulonglong)(iVar7 + 1U >> 1);
          uVar3 = puVar16[uVar10 * 2];
          uVar4 = (puVar16 + uVar10 * 2)[1];
          uVar5 = puVar16[1];
          puVar16[uVar10 * 2] = *puVar16;
          (puVar16 + uVar10 * 2)[1] = uVar5;
          local_58._0_4_ = (undefined4)uVar3;
          local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar4;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          *(undefined4 *)puVar16 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar16 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_50._4_4_;
          puVar13 = puVar17 + 2;
          puVar15 = puVar16;
          local_368 = puVar14;
          local_360 = puVar9;
          local_58 = uVar3;
          uStack_50 = uVar4;
          do {
            puVar9 = puVar15 + 2;
            puVar6 = puVar15 + 2;
            do {
              puVar15 = puVar6;
              puVar14 = puVar9;
              if (puVar17 < puVar15) break;
              pwVar8 = L"";
              if (*(int *)(puVar16 + 1) != 0) {
                pwVar8 = (wchar_t *)*puVar16;
              }
              pwVar11 = L"";
              if (*(int *)(puVar15 + 1) != 0) {
                pwVar11 = (wchar_t *)*puVar15;
              }
              iVar7 = wcscmp(pwVar8,pwVar11);
              puVar9 = puVar14 + 2;
              puVar6 = puVar15 + 2;
            } while (-1 < iVar7);
            puVar6 = puVar13 + -4;
            do {
              puVar18 = puVar13;
              puVar9 = puVar6;
              puVar13 = puVar18 + -2;
              if (puVar13 <= puVar16) break;
              pwVar8 = L"";
              if (*(int *)(puVar18 + -1) != 0) {
                pwVar8 = (wchar_t *)*puVar13;
              }
              pwVar11 = L"";
              if (*(int *)(puVar16 + 1) != 0) {
                pwVar11 = (wchar_t *)*puVar16;
              }
              iVar7 = wcscmp(pwVar8,pwVar11);
              puVar6 = puVar9 + -2;
            } while (-1 < iVar7);
            if (puVar13 < puVar15) goto LAB_14930e397;
            uVar3 = *puVar15;
            uVar4 = puVar15[1];
            uVar5 = puVar18[-1];
            *puVar15 = *puVar13;
            puVar15[1] = uVar5;
            local_58._0_4_ = (undefined4)uVar3;
            local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar4;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            *(undefined4 *)puVar13 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar18 + -0xc) = local_58._4_4_;
            *(undefined4 *)(puVar18 + -1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar18 + -4) = uStack_50._4_4_;
            local_58 = uVar3;
            uStack_50 = uVar4;
          } while( true );
        }
        plVar12 = local_378;
        if (puVar16 < puVar17) {
          local_370 = puVar16 + 2;
          do {
            puVar9 = puVar16;
            if (local_370 <= puVar17) {
              pwVar8 = (wchar_t *)*puVar16;
              puVar14 = puVar16;
              puVar13 = local_370;
              do {
                pwVar11 = L"";
                if (*(int *)(puVar14 + 1) != 0) {
                  pwVar11 = pwVar8;
                }
                pwVar2 = (wchar_t *)*puVar13;
                _Str2 = pwVar2;
                if (*(int *)(puVar13 + 1) == 0) {
                  _Str2 = L"";
                }
                iVar7 = wcscmp(pwVar11,_Str2);
                puVar9 = puVar13;
                if (-1 < iVar7) {
                  puVar9 = puVar14;
                  pwVar2 = pwVar8;
                }
                pwVar8 = pwVar2;
                puVar13 = puVar13 + 2;
                puVar14 = puVar9;
              } while (puVar13 <= puVar17);
            }
            local_58 = *puVar9;
            uStack_50 = puVar9[1];
            uVar4 = local_58;
            uVar5 = uStack_50;
            uVar3 = puVar17[1];
            *puVar9 = *puVar17;
            puVar9[1] = uVar3;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            *(undefined4 *)puVar17 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar17 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_50._4_4_;
            puVar17 = puVar17 + -2;
            plVar12 = local_378;
            local_58 = uVar4;
            uStack_50 = uVar5;
          } while (puVar16 < puVar17);
        }
        goto LAB_14930e4fb;
      }
LAB_14930e515:
      FUN_14930e525(puVar16);
      plVar12 = local_378;
LAB_14930e4fb:
      plVar12 = plVar12 + -3;
    } while (&local_358 <= plVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14930e397:
  local_58 = *puVar16;
  uStack_50 = puVar16[1];
  uVar4 = local_58;
  uVar5 = uStack_50;
  uVar3 = puVar18[-1];
  *puVar16 = *puVar13;
  puVar16[1] = uVar3;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar13 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar18 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar18 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar18 + -4) = uStack_50._4_4_;
  iVar1 = (int)local_370 + -1;
  local_370 = (undefined8 *)CONCAT44(local_370._4_4_,iVar1);
  puVar18 = puVar18 + -4;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if ((longlong)puVar9 - (longlong)local_368 < (longlong)local_360 - (longlong)puVar14) {
    plVar12 = local_378;
    if (puVar15 < puVar17) {
      *local_378 = (longlong)puVar15;
      local_378[1] = (longlong)puVar17;
      *(int *)(local_378 + 2) = iVar1;
      plVar12 = local_378 + 3;
    }
    puVar14 = puVar16;
    if (puVar13 <= puVar16 + 2) goto LAB_14930e4fb;
  }
  else {
    if (puVar16 + 2 < puVar13) {
      *local_378 = (longlong)puVar16;
      local_378[1] = (longlong)puVar18;
      *(int *)(local_378 + 2) = iVar1;
      local_378 = local_378 + 3;
    }
    plVar12 = local_378;
    puVar9 = puVar17;
    puVar16 = puVar15;
    puVar18 = puVar17;
    if (puVar17 <= puVar15) goto LAB_14930e4fb;
  }
  local_378 = plVar12;
  iVar7 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar14) >> 4);
  puVar17 = puVar18;
  if (iVar1 == 0) goto LAB_14930e515;
  goto LAB_14930e2ab;
}



// FUNCTION 14930e525 FUN_14930e525 body=616 status=ok
// SIG undefined FUN_14930e525(void)

void FUN_14930e525(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar15 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar10 = iVar15;
joined_r0x00014930e573:
    do {
      iVar6 = iVar15 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar9 = iVar15 * 2 + 2;
        if (iVar9 < (int)param_2) {
          pwVar7 = L"";
          if (*(int *)(param_1 + (longlong)iVar9 * 2 + 1) != 0) {
            pwVar7 = (wchar_t *)param_1[(longlong)iVar9 * 2];
          }
          pwVar8 = L"";
          if (*(int *)(param_1 + (longlong)iVar6 * 2 + 1) != 0) {
            pwVar8 = (wchar_t *)param_1[(longlong)iVar6 * 2];
          }
          iVar5 = wcscmp(pwVar7,pwVar8);
          if (-1 < iVar5) {
            iVar6 = iVar9;
          }
        }
        lVar11 = (longlong)iVar15;
        pwVar7 = L"";
        if (*(int *)(param_1 + lVar11 * 2 + 1) != 0) {
          pwVar7 = (wchar_t *)param_1[lVar11 * 2];
        }
        lVar13 = (longlong)iVar6;
        pwVar8 = L"";
        if (*(int *)(param_1 + lVar13 * 2 + 1) != 0) {
          pwVar8 = (wchar_t *)param_1[lVar13 * 2];
        }
        iVar15 = wcscmp(pwVar7,pwVar8);
        if (iVar15 < 0) {
          puVar12 = param_1 + lVar11 * 2;
          puVar14 = param_1 + lVar13 * 2;
          uVar2 = *puVar12;
          uVar3 = puVar12[1];
          uVar4 = puVar14[1];
          *puVar12 = *puVar14;
          puVar12[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)puVar14 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
          iVar15 = iVar6;
          local_58 = uVar2;
          uStack_50 = uVar3;
          goto joined_r0x00014930e573;
        }
      }
      bVar17 = iVar10 != 0;
      iVar15 = iVar10 + -1;
      iVar10 = iVar15;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar16 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar16 * 2)[1];
      *param_1 = param_1[uVar16 * 2];
      param_1[1] = uVar4;
      local_58._0_4_ = (undefined4)uVar2;
      local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar3;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar12 = param_1 + uVar16 * 2;
      *(undefined4 *)puVar12 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar12 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_50._4_4_;
      local_58 = uVar2;
      uStack_50 = uVar3;
      if (param_2 != 2) {
        do {
          iVar15 = 0;
          iVar6 = 1;
          iVar10 = 0;
          do {
            lVar11 = (longlong)(iVar15 + 2);
            iVar9 = iVar6;
            if (lVar11 < (longlong)uVar16) {
              pwVar7 = L"";
              if (*(int *)(param_1 + lVar11 * 2 + 1) != 0) {
                pwVar7 = (wchar_t *)param_1[lVar11 * 2];
              }
              pwVar8 = L"";
              if (*(int *)(param_1 + (longlong)iVar6 * 2 + 1) != 0) {
                pwVar8 = (wchar_t *)param_1[(longlong)iVar6 * 2];
              }
              iVar6 = wcscmp(pwVar7,pwVar8);
              if (-1 < iVar6) {
                iVar9 = iVar15 + 2;
              }
            }
            lVar11 = (longlong)iVar10;
            pwVar7 = L"";
            if (*(int *)(param_1 + lVar11 * 2 + 1) != 0) {
              pwVar7 = (wchar_t *)param_1[lVar11 * 2];
            }
            lVar13 = (longlong)iVar9;
            pwVar8 = L"";
            if (*(int *)(param_1 + lVar13 * 2 + 1) != 0) {
              pwVar8 = (wchar_t *)param_1[lVar13 * 2];
            }
            iVar15 = wcscmp(pwVar7,pwVar8);
            if (-1 < iVar15) break;
            puVar12 = param_1 + lVar11 * 2;
            puVar14 = param_1 + lVar13 * 2;
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar4 = puVar14[1];
            *puVar12 = *puVar14;
            puVar12[1] = uVar4;
            local_58._0_4_ = (undefined4)uVar2;
            local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar3;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            *(undefined4 *)puVar14 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
            iVar15 = iVar9 * 2;
            iVar6 = iVar9 * 2 + 1;
            local_58 = uVar2;
            uStack_50 = uVar3;
            iVar10 = iVar9;
          } while ((longlong)iVar6 < (longlong)uVar16);
          uVar1 = uVar16 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar12 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar12 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar12 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_50._4_4_;
          bVar17 = 2 < uVar16;
          uVar16 = uVar1;
          local_58 = uVar2;
          uStack_50 = uVar3;
        } while (bVar17);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14930e78e FUN_14930e78e body=132 status=ok
// SIG undefined FUN_14930e78e(void)

void FUN_14930e78e(longlong param_1,int param_2)

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



// FUNCTION 14930e814 FUN_14930e814 body=375 status=ok
// SIG undefined FUN_14930e814(void)

void FUN_14930e814(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  void *_Dst;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  int iVar23;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    iVar15 = uVar3 - iVar2;
    iVar14 = iVar15;
    if ((int)param_1[6] != -1) {
      lVar5 = *param_1;
      iVar16 = (int)param_1[6];
      uVar18 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar16 * 0x40);
        if (iVar16 < iVar15) {
          puVar21 = (undefined8 *)((longlong)iVar16 * 0x40 + lVar5);
          plVar22 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar22 = param_1 + 2;
          }
          puVar13 = (undefined8 *)((longlong)(int)(uVar18 - 1) * 0x40 + lVar5 + 0x40);
          uVar17 = uVar18;
          do {
            puVar19 = puVar13;
            uVar18 = uVar17 - 1;
            uVar20 = uVar17 + 0x1e;
            if (-1 < (int)uVar18) {
              uVar20 = uVar18;
            }
            puVar13 = puVar19 + -8;
            uVar17 = uVar18;
          } while ((*(uint *)((longlong)plVar22 + (longlong)((int)uVar20 >> 5) * 4) >>
                    (uVar18 & 0x1f) & 1) == 0);
          uVar6 = puVar19[-8];
          uVar7 = puVar19[-7];
          uVar8 = puVar19[-6];
          uVar9 = puVar19[-5];
          uVar10 = puVar19[-4];
          uVar11 = puVar19[-3];
          uVar12 = puVar19[-1];
          puVar21[6] = puVar19[-2];
          puVar21[7] = uVar12;
          puVar21[4] = uVar10;
          puVar21[5] = uVar11;
          puVar21[2] = uVar8;
          puVar21[3] = uVar9;
          *puVar21 = uVar6;
          puVar21[1] = uVar7;
          plVar22 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar22 = param_1 + 2;
          }
          iVar23 = iVar16 + 0x1f;
          if (-1 < iVar16) {
            iVar23 = iVar16;
          }
          puVar1 = (uint *)((longlong)plVar22 + (longlong)(iVar23 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar16 & 0x1f);
        }
        iVar16 = iVar4;
      } while (iVar4 != -1);
      iVar16 = (int)param_1[1] - uVar3;
      if (iVar16 != 0) {
        _Dst = (void *)((longlong)iVar15 * 0x40 + *param_1);
        memmove(_Dst,(void *)((longlong)iVar2 * 0x40 + (longlong)_Dst),(longlong)iVar16 << 6);
        iVar14 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar14;
    FUN_144a6134a(param_1 + 2,iVar15,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_140b7ce44(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14930e98c FUN_14930e98c body=116 status=ok
// SIG undefined FUN_14930e98c(void)

void FUN_14930e98c(longlong param_1,int param_2)

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



// FUNCTION 14930ea00 FUN_14930ea00 body=118 status=ok
// SIG undefined FUN_14930ea00(void)

void FUN_14930ea00(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    iVar2 = (int)(uVar1 / 0x88);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x88,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14930ea76 FUN_14930ea76 body=60 status=ok
// SIG undefined FUN_14930ea76(void)

void FUN_14930ea76(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14930eab2(param_1,param_2);
    param_1 = param_1 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return;
}



// FUNCTION 14930eab2 FUN_14930eab2 body=270 status=ok
// SIG undefined FUN_14930eab2(void)

undefined8 * FUN_14930eab2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 5);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 5) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  lVar3 = param_2[6];
  param_1[6] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_140cc7e9e(param_1 + 7,param_2 + 7);
  return param_1;
}



// FUNCTION 14930ebc0 FUN_14930ebc0 body=155 status=ok
// SIG undefined FUN_14930ebc0(void)

undefined8 * FUN_14930ebc0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  memset(param_1 + 0x17,0,0x150);
  FUN_148214132(param_1 + 0x3f,3,1);
  return param_1;
}



// FUNCTION 14930ec5c FUN_14930ec5c body=612 status=ok
// SIG undefined FUN_14930ec5c(void)

void FUN_14930ec5c(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  int *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_98 [38];
  undefined1 local_72;
  undefined1 local_71;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < *(int *)(param_3 + 0x88) && (int)param_4[1] == *(int *)(param_3 + 0x88)) {
    lVar11 = 0;
    do {
      puVar10 = &local_71;
      if (((lVar11 < (int)param_4[1]) && (fVar1 = *(float *)(*param_4 + lVar11 * 4), 0.0 < fVar1))
         && (fVar1 <= 1.0)) {
        if (*(int *)(param_1 + 0x1a4) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(*(int *)(param_1 + 0x1a4),&local_72);
        }
        *(undefined4 *)(param_1 + 0x1a0) = 0;
        if (*param_5 == 1) {
          if (1 < *(int *)(*(longlong *)(param_3 + 0x80) + 8 + lVar11 * 0x18)) {
            plVar9 = (longlong *)(*(longlong *)(param_3 + 0x80) + lVar11 * 0x18);
            if ((*(char *)(*plVar9 + 0x10) == '\x01') &&
               ((lVar7 = *(longlong *)(*plVar9 + 0x18), *(longlong *)(lVar7 + 0x98) != 0 ||
                (*(char *)(lVar7 + 0x18) == '\x01')))) {
              local_71 = 1;
              goto LAB_14930ee34;
            }
          }
        }
        else {
          if (*param_5 != 0) break;
          if (0 < *(int *)(*(longlong *)(param_3 + 0x80) + 8 + lVar11 * 0x18)) {
            plVar9 = (longlong *)(*(longlong *)(param_3 + 0x80) + lVar11 * 0x18);
            if ((*(char *)*plVar9 == '\0') &&
               ((lVar7 = *(longlong *)((char *)*plVar9 + 8), *(longlong *)(lVar7 + 0x98) != 0 ||
                (*(char *)(lVar7 + 0x18) == '\x01')))) {
              local_72 = 0;
              puVar10 = &local_72;
LAB_14930ee34:
              uVar6 = FUN_14931afa2(plVar9,puVar10);
              FUN_149318818(uVar6,param_1 + 0x198);
              if ((0 < (int)param_2[1]) && ((int)param_2[1] == *(int *)(param_1 + 0x1a0))) {
                lVar7 = 8;
                lVar8 = 0;
                do {
                  lVar4 = *(longlong *)(param_1 + 0x198);
                  fVar2 = *(float *)(lVar4 + lVar7);
                  fVar3 = *(float *)(lVar4 + -4 + lVar7);
                  lVar5 = *param_2;
                  *(float *)(lVar5 + -8 + lVar7) =
                       *(float *)(lVar4 + -8 + lVar7) * fVar1 + *(float *)(lVar5 + -8 + lVar7);
                  *(float *)(lVar5 + -4 + lVar7) = fVar3 * fVar1 + *(float *)(lVar5 + -4 + lVar7);
                  *(float *)(lVar5 + lVar7) = fVar2 * fVar1 + *(float *)(lVar5 + lVar7);
                  lVar8 = lVar8 + 1;
                  lVar7 = lVar7 + 0xc;
                } while (lVar8 < *(int *)(param_1 + 0x1a0));
              }
            }
          }
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_3 + 0x88));
  }
  if ((local_70 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14930eec2 FUN_14930eec2 body=655 status=ok
// SIG undefined FUN_14930eec2(void)

void FUN_14930eec2(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  int *param_5)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  
  if (0 < *(int *)(param_3 + 0x88) && (int)param_4[1] == *(int *)(param_3 + 0x88)) {
    lVar9 = 0;
    do {
      if (((lVar9 < (int)param_4[1]) && (fVar2 = *(float *)(*param_4 + lVar9 * 4), 0.0 < fVar2)) &&
         (fVar2 <= 1.0)) {
        if (*(int *)(param_1 + 0x1e4) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4();
        }
        *(undefined4 *)(param_1 + 0x1e0) = 0;
        if (*param_5 == 1) {
          if (5 < *(int *)(*(longlong *)(param_3 + 0x80) + 8 + lVar9 * 0x18)) {
            plVar1 = (longlong *)(*(longlong *)(param_3 + 0x80) + lVar9 * 0x18);
            lVar7 = *plVar1;
            if ((*(char *)(lVar7 + 0x50) == '\x05') &&
               ((lVar7 = *(longlong *)(lVar7 + 0x58), *(longlong *)(lVar7 + 0x98) != 0 ||
                (*(char *)(lVar7 + 0x18) == '\x01')))) {
              FUN_14930f264(plVar1,param_1 + 0x1d8);
              goto LAB_14930f0f7;
            }
          }
        }
        else {
          if (*param_5 != 0) {
            return;
          }
          if (2 < *(int *)(*(longlong *)(param_3 + 0x80) + 8 + lVar9 * 0x18)) {
            plVar1 = (longlong *)(*(longlong *)(param_3 + 0x80) + lVar9 * 0x18);
            lVar7 = *plVar1;
            if ((*(char *)(lVar7 + 0x20) == '\x02') &&
               ((lVar7 = *(longlong *)(lVar7 + 0x28), *(longlong *)(lVar7 + 0x98) != 0 ||
                (*(char *)(lVar7 + 0x18) == '\x01')))) {
              FUN_14930f152(plVar1,param_1 + 0x1d8);
LAB_14930f0f7:
              if ((0 < (int)param_2[1]) && ((int)param_2[1] == *(int *)(param_1 + 0x1e0))) {
                lVar7 = 0;
                lVar8 = 0;
                do {
                  lVar5 = *(longlong *)(param_1 + 0x1d8);
                  fVar10 = *(float *)(lVar5 + 0xc + lVar7);
                  fVar3 = *(float *)(lVar5 + 8 + lVar7);
                  fVar4 = *(float *)(lVar5 + 4 + lVar7);
                  lVar6 = *param_2;
                  *(float *)(lVar6 + lVar7) =
                       *(float *)(lVar5 + lVar7) * fVar2 + *(float *)(lVar6 + lVar7);
                  *(float *)(lVar6 + 4 + lVar7) = fVar4 * fVar2 + *(float *)(lVar6 + 4 + lVar7);
                  *(float *)(lVar6 + 8 + lVar7) = fVar3 * fVar2 + *(float *)(lVar6 + 8 + lVar7);
                  *(float *)(lVar6 + 0xc + lVar7) = fVar10 * fVar2 + *(float *)(lVar6 + 0xc + lVar7)
                  ;
                  if (*param_5 == 1) {
                    fVar10 = *(float *)(*param_2 + lVar7);
                    if (1.0 <= fVar10) {
                      fVar10 = 1.0;
                    }
                    if (fVar10 <= 0.0) {
                      fVar10 = 0.0;
                    }
                    *(float *)(*param_2 + lVar7) = fVar10;
                    fVar10 = *(float *)(*param_2 + 4 + lVar7);
                    if (1.0 <= fVar10) {
                      fVar10 = 1.0;
                    }
                    if (fVar10 <= 0.0) {
                      fVar10 = 0.0;
                    }
                    *(float *)(*param_2 + 4 + lVar7) = fVar10;
                    fVar10 = *(float *)(*param_2 + 0xc + lVar7);
                    if (1.0 <= fVar10) {
                      fVar10 = 1.0;
                    }
                    if (fVar10 <= 0.0) {
                      fVar10 = 0.0;
                    }
                    *(float *)(*param_2 + 8 + lVar7) = fVar10;
                    fVar10 = *(float *)(*param_2 + 8 + lVar7);
                    if (1.0 <= fVar10) {
                      fVar10 = 1.0;
                    }
                    if (fVar10 <= 0.0) {
                      fVar10 = 0.0;
                    }
                    *(float *)(*param_2 + 0xc + lVar7) = fVar10;
                  }
                  lVar8 = lVar8 + 1;
                  lVar7 = lVar7 + 0x10;
                } while (lVar8 < *(int *)(param_1 + 0x1e0));
              }
            }
          }
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_3 + 0x88));
  }
  return;
}



// FUNCTION 14930f152 FUN_14930f152 body=271 status=ok
// SIG undefined FUN_14930f152(void)

void FUN_14930f152(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined7 uStack_87;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 2;
  lVar5 = FUN_14931afa2();
  iVar1 = *(int *)(lVar5 + 4);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
    FUN_14499148c(param_2,iVar1);
  }
  if (iVar1 != 0) {
    iVar6 = 0;
    do {
      FUN_149317fec(lVar5,&local_88,iVar6);
      fVar8 = (float)local_80;
      fVar9 = (float)local_78;
      dVar4 = (double)CONCAT71(uStack_87,local_88);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1449e2712(param_2,iVar2);
      }
      lVar3 = *param_2;
      lVar7 = (longlong)iVar2 * 0x10;
      *(float *)(lVar3 + lVar7) = (float)dVar4;
      *(float *)(lVar3 + 4 + lVar7) = fVar9;
      *(float *)(lVar3 + 8 + lVar7) = fVar8;
      *(undefined4 *)(lVar3 + 0xc + lVar7) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930f264 FUN_14930f264 body=310 status=ok
// SIG undefined FUN_14930f264(void)

void FUN_14930f264(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined7 uStack_87;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 5;
  lVar5 = FUN_14931afa2();
  if (*(int *)(lVar5 + 8) == 3) {
    iVar1 = *(int *)(lVar5 + 4);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
      FUN_14499148c(param_2,iVar1);
    }
    if (iVar1 != 0) {
      iVar6 = 0;
      do {
        FUN_149317fec(lVar5,&local_88,iVar6);
        fVar8 = (float)local_78;
        fVar9 = (float)local_80;
        dVar4 = (double)CONCAT71(uStack_87,local_88);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1449e2712(param_2,iVar2);
        }
        lVar3 = *param_2;
        lVar7 = (longlong)iVar2 * 0x10;
        *(float *)(lVar3 + lVar7) = (float)dVar4;
        *(float *)(lVar3 + 4 + lVar7) = fVar9;
        *(float *)(lVar3 + 8 + lVar7) = fVar8;
        *(undefined4 *)(lVar3 + 0xc + lVar7) = 0;
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
  }
  else if (*(int *)(lVar5 + 8) == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_a8);
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14930f3c4 FUN_14930f3c4 body=368 status=ok
// SIG undefined FUN_14930f3c4(void)

void FUN_14930f3c4(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  undefined4 param_5)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (0 < *(int *)(param_3 + 0x88) && (int)param_4[1] == *(int *)(param_3 + 0x88)) {
    lVar6 = 0;
    do {
      if (((lVar6 < (int)param_4[1]) && (fVar1 = *(float *)(*param_4 + lVar6 * 4), 0.0 < fVar1)) &&
         (fVar1 <= 1.0)) {
        if (*(int *)(param_1 + 0x164) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4();
        }
        *(undefined4 *)(param_1 + 0x160) = 0;
        lVar5 = lVar6 * 0x18 + *(longlong *)(param_3 + 0x80);
        cVar4 = FUN_14930f536(lVar5,param_5);
        if (cVar4 != '\0') {
          FUN_14930f57e(lVar5,param_5,param_1 + 0x158);
          if ((0 < (int)param_2[1]) && ((int)param_2[1] == *(int *)(param_1 + 0x160))) {
            lVar5 = 0;
            do {
              fVar2 = *(float *)(*(longlong *)(param_1 + 0x158) + 4 + lVar5 * 8);
              lVar3 = *param_2;
              *(float *)(lVar3 + lVar5 * 8) =
                   *(float *)(*(longlong *)(param_1 + 0x158) + lVar5 * 8) * fVar1 +
                   *(float *)(lVar3 + lVar5 * 8);
              *(float *)(lVar3 + 4 + lVar5 * 8) = fVar2 * fVar1 + *(float *)(lVar3 + 4 + lVar5 * 8);
              lVar5 = lVar5 + 1;
            } while (lVar5 < *(int *)(param_1 + 0x160));
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_3 + 0x88));
  }
  return;
}



// FUNCTION 14930f536 FUN_14930f536 body=71 status=ok
// SIG undefined FUN_14930f536(void)

undefined8 FUN_14930f536(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar4;
  longlong lVar2;
  undefined7 uVar3;
  
  if (param_2 == 1) {
    if ((int)param_1[1] < 5) {
      return 0;
    }
    lVar2 = *param_1;
    if (*(char *)(lVar2 + 0x40) != '\x04') {
      return 0;
    }
    lVar4 = *(longlong *)(lVar2 + 0x48);
  }
  else {
    if (((param_2 != 0) || ((int)param_1[1] < 4)) ||
       (lVar2 = *param_1, *(char *)(lVar2 + 0x30) != '\x03')) {
      return 0;
    }
    lVar4 = *(longlong *)(lVar2 + 0x38);
  }
  uVar3 = (undefined7)((ulonglong)lVar2 >> 8);
  uVar1 = CONCAT71(uVar3,1);
  if (*(longlong *)(lVar4 + 0x98) == 0) {
    uVar1 = CONCAT71(uVar3,*(undefined1 *)(lVar4 + 0x18));
  }
  return uVar1;
}



// FUNCTION 14930f57e FUN_14930f57e body=96 status=ok
// SIG undefined FUN_14930f57e(void)

void FUN_14930f57e(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [38];
  undefined1 local_12;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 == 1) {
    local_12 = 4;
  }
  else {
    if (param_2 != 0) goto LAB_14930f59e;
    local_11 = 3;
  }
  uVar1 = FUN_14931afa2();
  FUN_14931877a(uVar1,param_3);
LAB_14930f59e:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930f5e0 FUN_14930f5e0 body=4793 status=ok
// SIG undefined FUN_14930f5e0(void)

void FUN_14930f5e0(longlong *param_1,longlong param_2,double *param_3,longlong param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  char cVar17;
  int iVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  longlong *plVar27;
  longlong lVar28;
  int iVar29;
  wchar_t *pwVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_328 [32];
  wchar_t **local_308;
  undefined1 local_300;
  undefined1 *local_2f8;
  undefined1 *local_2f0;
  undefined1 *local_2e8;
  undefined8 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  double *local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  wchar_t *local_2a8;
  longlong local_2a0;
  int local_294;
  double *local_290;
  longlong *local_288;
  ulonglong local_280;
  longlong *local_278;
  longlong *local_270 [2];
  ulonglong local_260;
  longlong *local_258;
  longlong *local_250 [2];
  undefined1 local_240 [4];
  undefined1 local_23c [4];
  longlong *local_238 [2];
  ulonglong local_228;
  longlong *local_220;
  longlong *local_218 [2];
  int local_208;
  undefined4 uStack_204;
  undefined1 local_1f8 [8];
  undefined8 local_1f0;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [8];
  longlong local_1d0;
  undefined1 local_1c8 [8];
  longlong local_1c0;
  undefined **local_1b8;
  longlong local_1b0;
  ulonglong *local_1a8;
  longlong *plStack_1a0;
  uint local_198;
  int iStack_194;
  undefined4 local_190;
  undefined4 local_18c;
  ulonglong local_188;
  longlong *local_180;
  undefined8 local_178;
  ulonglong *local_170;
  undefined1 local_168 [16];
  double local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  wchar_t *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  ulonglong local_a0 [12];
  
  local_a0[0] = DAT_14c707940 ^ (ulonglong)auStack_328;
  iVar18 = 0;
  local_2b0 = param_2;
  local_2a0 = param_4;
  local_290 = param_3;
  if ((longlong)*(int *)(param_2 + 0x18) != 0) {
    lVar28 = *(longlong *)(param_2 + 0x10);
    lVar32 = (longlong)*(int *)(param_2 + 0x18) * 0xa0;
    iVar18 = 0;
    lVar33 = lVar32;
    lVar31 = lVar28;
    do {
      while (cVar17 = FUN_149312288(lVar31,iVar18), cVar17 == '\0') {
        lVar33 = lVar33 + -0xa0;
        lVar31 = lVar31 + 0xa0;
        if (lVar33 == 0) goto LAB_14930f657;
      }
      if (lVar31 == 0) goto LAB_14930f657;
      iVar18 = iVar18 + 1;
      lVar33 = lVar32;
      lVar31 = lVar28;
    } while (iVar18 != 8);
    iVar18 = 8;
  }
LAB_14930f657:
  iVar29 = 1;
  if (1 < iVar18) {
    iVar29 = iVar18;
  }
  local_1b0 = local_2a0;
  local_1b8 = &PTR_FUN_149fa9f00;
  FUN_146f9f256(&local_1b8,0);
  dVar12 = *local_290;
  dVar13 = local_290[1];
  dVar14 = local_290[2];
  dVar15 = local_290[8];
  dVar16 = local_290[9];
  dStack_120 = local_290[10];
  dVar8 = dVar13 + dVar13;
  dVar35 = dVar14 + dVar14;
  dVar10 = dVar12 * (dVar12 + dVar12);
  dVar9 = (1.0 - (dVar14 * dVar35 + dVar10)) * dVar16;
  local_118 = (1.0 - (dVar10 + dVar13 * dVar8)) * dStack_120;
  dVar10 = local_290[3];
  dVar36 = dVar35 * dVar10;
  dVar7 = (dVar12 + dVar12) * local_290[3];
  dVar10 = dVar8 * dVar10;
  dVar11 = (dVar8 * dVar12 + dVar36) * dVar15;
  local_138 = (dVar35 * dVar13 + dVar7) * dVar16;
  local_128 = (dVar10 + *local_290 * dVar35) * dStack_120;
  local_158 = (*local_290 * dVar35 - dVar10) * dVar15;
  dStack_120 = (dVar35 * dVar13 - dVar7) * dStack_120;
  local_168._8_4_ = SUB84(dVar11,0);
  local_168._0_8_ = (1.0 - (dVar14 * dVar35 + dVar13 * dVar8)) * dVar15;
  local_168._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  uStack_150 = 0;
  local_148._8_4_ = SUB84(dVar9,0);
  local_148._0_8_ = (dVar8 * dVar12 - dVar36) * dVar16;
  local_148._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  uStack_130 = 0;
  uStack_110 = 0;
  local_108 = local_290[4];
  dStack_100 = local_290[5];
  local_f8._8_8_ = 0x3ff0000000000000;
  local_f8._0_8_ = local_290[6];
  lVar28 = *(longlong *)(*(longlong *)(local_1b0 + 0x50) + 0x80);
  if (lVar28 == 0) {
    lVar28 = *(longlong *)(local_1b0 + 0x50);
  }
  FUN_146fa1f1e(lVar28 + 0x20,&local_1c0,DAT_14c99c0d0);
  lVar28 = *(longlong *)(*(longlong *)(local_1b0 + 0x68) + 0x80);
  if (lVar28 == 0) {
    lVar28 = *(longlong *)(local_1b0 + 0x68);
  }
  FUN_146fa05f6(lVar28 + 0x20,local_1c8,DAT_14c99c648);
  lVar28 = *(longlong *)(*(longlong *)(local_1b0 + 0x80) + 0x80);
  if (lVar28 == 0) {
    lVar28 = *(longlong *)(local_1b0 + 0x80);
  }
  FUN_146f73238(lVar28 + 0x20,&local_1d0,DAT_14c99c688);
  lVar28 = *(longlong *)(*(longlong *)(local_1b0 + 0x58) + 0x80);
  if (lVar28 == 0) {
    lVar28 = *(longlong *)(local_1b0 + 0x58);
  }
  FUN_146fa06aa(lVar28 + 0x20,local_1d8,DAT_14c99c628);
  lVar28 = *(longlong *)(*(longlong *)(local_1b0 + 0x58) + 0x80);
  if (lVar28 == 0) {
    lVar28 = *(longlong *)(local_1b0 + 0x58);
  }
  FUN_146fa06aa(lVar28 + 0x20,local_1e0,DAT_14c99c630);
  lVar28 = *(longlong *)(*(longlong *)(local_1b0 + 0x58) + 0x80);
  if (lVar28 == 0) {
    lVar28 = *(longlong *)(local_1b0 + 0x58);
  }
  FUN_146fa075e(lVar28 + 0x20,local_1e8,DAT_14c99c638);
  lVar28 = *(longlong *)(*(longlong *)(local_1b0 + 0x58) + 0x80);
  if (lVar28 == 0) {
    lVar28 = *(longlong *)(local_1b0 + 0x58);
  }
  FUN_146fa08c6(lVar28 + 0x20,&local_1f0,DAT_14c99c620);
  lVar28 = *(longlong *)(*(longlong *)(local_1b0 + 0x58) + 0x80);
  if (lVar28 == 0) {
    lVar28 = *(longlong *)(local_1b0 + 0x58);
  }
  FUN_146fa0812(lVar28 + 0x20,local_1f8,DAT_14c99c640);
  local_294 = iVar29;
  FUN_1458c3508(local_1f0,iVar29);
  local_2a8 = (wchar_t *)(param_1 + 3);
  FUN_14068ded2(local_2a8,10);
  lVar28 = local_2b0;
  iVar18 = *(int *)(local_2b0 + 0x18);
  if (*(int *)(local_2b0 + 0x18) < (int)param_1[0x18]) {
    iVar18 = (int)param_1[0x18];
  }
  FUN_14931089c(param_1 + 0x17,iVar18);
  if (0 < *(int *)(lVar28 + 0x18)) {
    local_288 = param_1 + 0x2f;
    lVar28 = 0;
    do {
      lVar32 = *(longlong *)(local_2b0 + 0x10) + lVar28 * 0xa0;
      if (*(char *)(*(longlong *)(local_2b0 + 0x10) + 0x99 + lVar28 * 0xa0) == '\x01') {
        if (*(char *)(lVar32 + 0x98) != '\0') goto LAB_14930fc1a;
LAB_14930fa00:
        FUN_140009b9a(local_218,local_2b0);
        local_e0 = L"InvalidMeshPrimitive";
        local_d8._0_4_ = 0x14;
        FUN_1446e940c(local_23c,&local_e0);
        local_e0 = L"InterchangeGLTFMeshFactory";
        local_d8 = (ulonglong *)CONCAT44(local_d8._4_4_,0x1a);
        FUN_1446e940c(local_240,&local_e0);
        FUN_140208bae(local_238,local_240,local_23c);
        FUN_14023409e(&local_228,local_238,1);
        local_e0 = (wchar_t *)CONCAT44(local_e0._4_4_,4);
        FUN_14023423e(&local_d0,local_218);
        local_170 = (ulonglong *)&local_c0;
        local_178 = &local_e0;
        FUN_14010d304(&local_1a8,&local_178);
        local_188 = local_228;
        local_180 = local_220;
        if (local_220 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_220 + 1) = (int)local_220[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_208,&local_188,&local_1a8);
        FUN_14007f2db(local_1a8,(ulonglong)plStack_1a0 & 0xffffffff);
        if (local_1a8 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        if (local_d0 != (longlong *)0x0) {
          (**(code **)(*local_d0 + 0x10))();
        }
        plVar24 = local_220;
        if (local_220 != (longlong *)0x0) {
          LOCK();
          plVar22 = local_220 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
            (**(code **)*local_220)(local_220);
            LOCK();
            piVar1 = (int *)((longlong)plVar24 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
            }
          }
        }
        if (local_218[0] != (longlong *)0x0) {
          (**(code **)(*local_218[0] + 0x10))();
        }
        iVar18 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar18 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar18 + 1U) {
          FUN_149326c66(param_1,iVar18);
        }
        puVar2 = (undefined4 *)(*param_1 + (longlong)iVar18 * 0x18);
        *puVar2 = 1;
        FUN_14023423e(puVar2 + 2,&local_208);
        if ((longlong *)CONCAT44(uStack_204,local_208) != (longlong *)0x0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_204,local_208) + 0x10))();
        }
        if (local_238[0] != (longlong *)0x0) {
          (**(code **)(*local_238[0] + 0x10))();
        }
      }
      else {
        cVar17 = FUN_14931b152(lVar32);
        if (cVar17 == '\0') goto LAB_14930fa00;
LAB_14930fc1a:
        FUN_1447cbafe(local_2a8,&local_e0,lVar32 + 0x1c,0);
        if (*(int *)((longlong)param_1 + 0x184) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4();
        }
        *(undefined4 *)(param_1 + 0x30) = 0;
        local_e0 = (wchar_t *)((ulonglong)local_e0 & 0xffffffffffffff00);
        uVar19 = FUN_14931afa2(lVar32,&local_e0);
        plVar24 = local_288;
        FUN_149318818(uVar19,local_288);
        local_e0 = (wchar_t *)((ulonglong)local_e0 & 0xffffffff00000000);
        local_308 = &local_e0;
        FUN_14930ec5c(param_1,plVar24);
        lVar33 = lVar28 * 0x50 + param_1[0x17];
        FUN_149326f46(lVar33);
        puVar20 = local_168;
        puVar23 = &DAT_14c846400;
        lVar32 = 0;
        do {
          lVar31 = 0;
          do {
            if ((*(double *)(puVar20 + lVar31 * 8) != (double)puVar23[lVar31]) ||
               (NAN(*(double *)(puVar20 + lVar31 * 8)) || NAN((double)puVar23[lVar31]))) {
              local_178 = (wchar_t **)((ulonglong)local_178._4_4_ << 0x20);
              if (0 < (int)param_1[0x30]) {
                do {
                  lVar32 = *(longlong *)(*(longlong *)(local_2a0 + 0x50) + 0x80);
                  if (lVar32 == 0) {
                    lVar32 = *(longlong *)(local_2a0 + 0x50);
                  }
                  iVar18 = FUN_146f70732(lVar32);
                  local_188 = CONCAT44(local_188._4_4_,iVar18);
                  lVar31 = (longlong)(int)local_178;
                  lVar32 = param_1[0x2f];
                  fVar3 = *(float *)(param_1 + 2);
                  dVar35 = (double)(*(float *)(lVar32 + 8 + lVar31 * 0xc) * fVar3);
                  dVar36 = (double)(*(float *)(lVar32 + 4 + lVar31 * 0xc) * fVar3);
                  dVar10 = (double)(fVar3 * *(float *)(lVar32 + lVar31 * 0xc));
                  plVar24 = (longlong *)(local_1c0 + 0x18);
                  if (*(longlong **)(local_1c0 + 0x30) != (longlong *)0x0) {
                    plVar24 = *(longlong **)(local_1c0 + 0x30);
                  }
                  lVar32 = *plVar24;
                  lVar31 = (longlong)(iVar18 * (int)plVar24[2]);
                  *(float *)(lVar32 + lVar31 * 0xc) =
                       (float)(dVar35 * local_128 +
                               dVar36 * (double)local_148._0_8_ + dVar10 * (double)local_168._0_8_ +
                              local_108);
                  *(float *)(lVar32 + 4 + lVar31 * 0xc) =
                       (float)(dVar35 * dStack_120 +
                               dVar36 * (double)local_148._8_8_ + dVar10 * (double)local_168._8_8_ +
                              dStack_100);
                  *(float *)(lVar32 + 8 + lVar31 * 0xc) =
                       (float)(dVar35 * local_118 + dVar10 * local_158 + dVar36 * local_138 +
                              (double)local_f8._0_8_);
                  local_e0 = (wchar_t *)&local_178;
                  local_d8 = &local_188;
                  FUN_148215b26(lVar33,&local_1a8,&local_e0);
                  iVar18 = (int)local_178 + 1;
                  local_178 = (wchar_t **)CONCAT44(local_178._4_4_,iVar18);
                } while (iVar18 < (int)param_1[0x30]);
              }
              goto LAB_14930fbf0;
            }
            lVar31 = lVar31 + 1;
          } while (lVar31 != 4);
          lVar32 = lVar32 + 1;
          puVar23 = puVar23 + 4;
          puVar20 = puVar20 + 0x20;
        } while (lVar32 != 4);
        local_178 = (wchar_t **)((ulonglong)local_178._4_4_ << 0x20);
        if (0 < (int)param_1[0x30]) {
          do {
            lVar32 = *(longlong *)(*(longlong *)(local_2a0 + 0x50) + 0x80);
            if (lVar32 == 0) {
              lVar32 = *(longlong *)(local_2a0 + 0x50);
            }
            iVar18 = FUN_146f70732(lVar32);
            local_188 = CONCAT44(local_188._4_4_,iVar18);
            lVar31 = (longlong)(int)local_178;
            lVar32 = param_1[0x2f];
            fVar3 = *(float *)(param_1 + 2);
            fVar4 = *(float *)(lVar32 + 8 + lVar31 * 0xc);
            fVar5 = *(float *)(lVar32 + 4 + lVar31 * 0xc);
            plVar24 = (longlong *)(local_1c0 + 0x18);
            if (*(longlong **)(local_1c0 + 0x30) != (longlong *)0x0) {
              plVar24 = *(longlong **)(local_1c0 + 0x30);
            }
            lVar6 = *plVar24;
            lVar21 = (longlong)(iVar18 * (int)plVar24[2]);
            *(float *)(lVar6 + lVar21 * 0xc) = fVar3 * *(float *)(lVar32 + lVar31 * 0xc);
            *(float *)(lVar6 + 4 + lVar21 * 0xc) = fVar5 * fVar3;
            *(float *)(lVar6 + 8 + lVar21 * 0xc) = fVar4 * fVar3;
            local_e0 = (wchar_t *)&local_178;
            local_d8 = &local_188;
            FUN_148215b26(lVar33,&local_1a8,&local_e0);
            iVar18 = (int)local_178 + 1;
            local_178 = (wchar_t **)CONCAT44(local_178._4_4_,iVar18);
          } while (iVar18 < (int)param_1[0x30]);
        }
      }
LAB_14930fbf0:
      lVar28 = lVar28 + 1;
    } while (lVar28 < *(int *)(local_2b0 + 0x18));
  }
  FUN_1493270f8(param_1 + 0xd);
  plVar24 = param_1 + 5;
  local_1a8 = (ulonglong *)0x100000000;
  local_198 = 0xffffffff;
  iStack_194 = 0;
  local_190 = 0;
  iVar18 = 0;
  plStack_1a0 = plVar24;
  if ((int)param_1[8] != 0) {
    FUN_1449c0562(&local_1a8);
    iVar18 = (int)param_1[8];
  }
  local_c8 = local_198;
  iStack_c4 = iStack_194;
  local_c0 = local_190;
  local_bc = local_18c;
  local_d8 = local_1a8;
  local_d0 = plStack_1a0;
  local_e0 = local_2a8;
  if ((iStack_194 != iVar18) || (plStack_1a0 != plVar24)) {
    do {
      local_188 = CONCAT44(local_188._4_4_,
                           *(undefined4 *)(*(longlong *)local_e0 + (longlong)iStack_c4 * 0xc));
      lVar28 = *(longlong *)(*(longlong *)(local_2a0 + 0x80) + 0x80);
      if (lVar28 == 0) {
        lVar28 = *(longlong *)(local_2a0 + 0x80);
      }
      local_208 = FUN_146f70732(lVar28);
      plStack_1a0 = (longlong *)&local_208;
      local_1a8 = &local_188;
      FUN_146fa3254(param_1 + 0xd,&local_178,&local_1a8,0);
      local_1a8 = (ulonglong *)0x0;
      plStack_1a0 = (longlong *)0x0;
      FUN_144a83b10(&local_1a8,local_188 & 0xffffffff);
      puVar26 = local_1a8;
      if ((int)plStack_1a0 == 0) {
        puVar26 = (ulonglong *)&DAT_149dfb77a;
      }
      FUN_1446f470e(&local_178,puVar26,1);
      if (local_1a8 != (ulonglong *)0x0) {
        FUN_1400020a8();
      }
      plVar22 = (longlong *)(local_1d0 + 0x18);
      if (*(longlong **)(local_1d0 + 0x30) != (longlong *)0x0) {
        plVar22 = *(longlong **)(local_1d0 + 0x30);
      }
      *(wchar_t ***)(*plVar22 + (longlong)((int)plVar22[2] * local_208) * 8) = local_178;
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != local_2a8 || (local_d0 != plVar24 || iStack_c4 != iVar18));
  }
  uVar25 = (ulonglong)*(uint *)(local_2b0 + 0x18);
  if (0 < (int)*(uint *)(local_2b0 + 0x18)) {
    uVar34 = 0;
    pwVar30 = (wchar_t *)0x0;
    do {
      iVar18 = (int)uVar25;
      plVar22 = *(longlong **)(local_2b0 + 0x10);
      plVar24 = plVar22 + uVar34 * 0x14;
      if (*(char *)((longlong)plVar22 + uVar34 * 0xa0 + 0x99) == '\x01') {
        if ((char)plVar24[0x13] != '\0') {
LAB_149310203:
          if (iVar18 == 0) {
            local_300 = false;
          }
          else {
            lVar28 = (longlong)iVar18 * 0xa0;
            plVar27 = plVar22;
            lVar32 = lVar28;
            do {
              if (((5 < (int)plVar27[1]) && (*(char *)(*plVar27 + 0x50) == '\x05')) &&
                 ((lVar33 = *(longlong *)(*plVar27 + 0x58), *(longlong *)(lVar33 + 0x98) != 0 ||
                  (*(char *)(lVar33 + 0x18) != '\0')))) goto LAB_149310575;
              plVar27 = plVar27 + 0x14;
              lVar32 = lVar32 + -0xa0;
            } while (lVar32 != 0);
            plVar27 = (longlong *)0x0;
LAB_149310575:
            local_300 = plVar27 != (longlong *)0x0;
            do {
              if (((2 < (int)plVar22[1]) && (*(char *)(*plVar22 + 0x20) == '\x02')) &&
                 ((lVar32 = *(longlong *)(*plVar22 + 0x28), *(longlong *)(lVar32 + 0x98) != 0 ||
                  (*(char *)(lVar32 + 0x18) != '\0')))) goto LAB_14931020f;
              plVar22 = plVar22 + 0x14;
              lVar28 = lVar28 + -0xa0;
            } while (lVar28 != 0);
          }
          plVar22 = (longlong *)0x0;
LAB_14931020f:
          local_2b8 = param_5;
          local_2c0 = local_2a0;
          local_2c8 = local_290;
          local_2d0 = local_1c8;
          local_2d8 = local_1f8;
          local_2e0 = &local_1f0;
          local_2e8 = local_1e8;
          local_2f0 = local_1e0;
          local_2f8 = local_1d8;
          local_308 = (wchar_t **)CONCAT71(local_308._1_7_,plVar22 != (longlong *)0x0);
          cVar17 = FUN_149310918(param_1,plVar24,uVar34 & 0xffffffff,local_294);
          pwVar30 = (wchar_t *)
                    CONCAT71((int7)((ulonglong)pwVar30 >> 8),
                             (byte)pwVar30 | *(int *)((longlong)plVar24 + 0x1c) == -1);
          if (cVar17 != '\0') {
            local_2a8 = pwVar30;
            FUN_140009b9a(local_250,local_2b0);
            local_e0 = L"PrimitiveFoundDegenerateTriangles";
            local_d8._0_4_ = 0x21;
            FUN_1446e940c(local_23c,&local_e0);
            local_e0 = L"InterchangeGLTFMeshFactory";
            local_d8 = (ulonglong *)CONCAT44(local_d8._4_4_,0x1a);
            FUN_1446e940c(local_240,&local_e0);
            FUN_140208bae(local_238,local_240,local_23c,
                          L"Mesh {0} has primitive with degenerate triangles: {1}");
            FUN_14023409e(&local_260,local_238,1);
            local_e0 = (wchar_t *)CONCAT44(local_e0._4_4_,4);
            FUN_14023423e(&local_d0,local_250);
            local_c0 = 0;
            local_b0 = 0;
            local_a8 = 0;
            local_170 = local_a0;
            local_178 = &local_e0;
            local_b8 = uVar34;
            FUN_14010d304(&local_1a8,&local_178);
            local_188 = local_260;
            local_180 = local_258;
            if (local_258 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_258 + 1) = (int)local_258[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_208,&local_188,&local_1a8);
            FUN_14007f2db(local_1a8,(ulonglong)plStack_1a0 & 0xffffffff);
            if (local_1a8 != (ulonglong *)0x0) {
              FUN_1400020a8();
            }
            lVar28 = 0x30;
            do {
              if (*(longlong **)((longlong)&local_e0 + lVar28) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_e0 + lVar28) + 0x10))();
                *(undefined8 *)((longlong)&local_e0 + lVar28) = 0;
                *(undefined4 *)((longlong)&local_d8 + lVar28) = 0;
              }
              plVar24 = local_258;
              lVar28 = lVar28 + -0x20;
            } while (lVar28 != -0x10);
            if (local_258 != (longlong *)0x0) {
              LOCK();
              plVar22 = local_258 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)*local_258)(local_258);
                LOCK();
                piVar1 = (int *)((longlong)plVar24 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar24 + 0x10))(plVar24);
                }
              }
            }
            if (local_250[0] != (longlong *)0x0) {
              (**(code **)(*local_250[0] + 0x10))();
            }
            iVar18 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar18 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar18 + 1U) {
              FUN_149326c66(param_1,iVar18);
            }
            puVar2 = (undefined4 *)(*param_1 + (longlong)iVar18 * 0x18);
            *puVar2 = 1;
            FUN_14023423e(puVar2 + 2,&local_208);
            if ((longlong *)CONCAT44(uStack_204,local_208) != (longlong *)0x0) {
              (**(code **)(*(longlong *)CONCAT44(uStack_204,local_208) + 0x10))();
            }
            pwVar30 = local_2a8;
            if (local_238[0] != (longlong *)0x0) {
              (**(code **)(*local_238[0] + 0x10))();
            }
          }
        }
      }
      else {
        cVar17 = FUN_14931b152(plVar24);
        if (cVar17 != '\0') {
          plVar22 = *(longlong **)(local_2b0 + 0x10);
          iVar18 = *(int *)(local_2b0 + 0x18);
          goto LAB_149310203;
        }
      }
      uVar34 = uVar34 + 1;
      uVar25 = (ulonglong)*(int *)(local_2b0 + 0x18);
    } while ((longlong)uVar34 < (longlong)uVar25);
    if (((ulonglong)pwVar30 & 1) != 0) {
      FUN_140009b9a(local_270,local_2b0);
      local_e0 = L"PrimitiveNoMaterialsAssigned";
      local_d8._0_4_ = 0x1c;
      FUN_1446e940c(local_23c,&local_e0);
      local_e0 = L"InterchangeGLTFMeshFactory";
      local_d8 = (ulonglong *)CONCAT44(local_d8._4_4_,0x1a);
      FUN_1446e940c(local_240,&local_e0);
      FUN_140208bae(local_238,local_240,local_23c,
                    L"Mesh has primitives with no materials assigned: {0}");
      FUN_14023409e(&local_280,local_238,1);
      local_e0 = (wchar_t *)CONCAT44(local_e0._4_4_,4);
      FUN_14023423e(&local_d0,local_270);
      local_170 = (ulonglong *)&local_c0;
      local_178 = &local_e0;
      FUN_14010d304(&local_1a8);
      local_188 = local_280;
      local_180 = local_278;
      if (local_278 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_278 + 1) = (int)local_278[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_208,&local_188,&local_1a8);
      FUN_14007f2db(local_1a8,(ulonglong)plStack_1a0 & 0xffffffff);
      if (local_1a8 != (ulonglong *)0x0) {
        FUN_1400020a8();
      }
      if (local_d0 != (longlong *)0x0) {
        (**(code **)(*local_d0 + 0x10))();
      }
      if (local_278 != (longlong *)0x0) {
        LOCK();
        plVar24 = local_278 + 1;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)*plVar24 == 0) {
          (**(code **)*local_278)(local_278);
          LOCK();
          piVar1 = (int *)((longlong)local_278 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_278 + 0x10))(local_278);
          }
        }
      }
      if (local_270[0] != (longlong *)0x0) {
        (**(code **)(*local_270[0] + 0x10))();
      }
      iVar18 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar18 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar18 + 1U) {
        FUN_149326c66(param_1,iVar18);
      }
      puVar2 = (undefined4 *)(*param_1 + (longlong)iVar18 * 0x18);
      *puVar2 = 1;
      FUN_14023423e(puVar2 + 2,&local_208);
      if ((longlong *)CONCAT44(uStack_204,local_208) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_204,local_208) + 0x10))();
      }
      if (local_238[0] != (longlong *)0x0) {
        (**(code **)(*local_238[0] + 0x10))();
      }
    }
  }
  if ((local_a0[0] ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14931089c FUN_14931089c body=122 status=ok
// SIG undefined FUN_14931089c(void)

void FUN_14931089c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149326d62(param_1,iVar1);
    }
    FUN_149326d2a((longlong)iVar1 * 0x50 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149326df6(param_1,param_2,iVar1 - param_2);
    FUN_149326e5c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149310918 FUN_149310918 body=6510 status=ok
// SIG undefined FUN_149310918(void)

ulonglong FUN_149310918(longlong param_1,longlong *param_2,int param_3,uint param_4,char param_5,
                       char param_6,longlong *param_7,longlong *param_8,longlong *param_9,
                       longlong *param_10,longlong *param_11,longlong *param_12,double *param_13,
                       longlong param_14,undefined8 param_15)

{
  undefined4 uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  double *pdVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  int iVar28;
  undefined1 *puVar29;
  double *pdVar30;
  ulonglong uVar31;
  int iVar32;
  double *pdVar33;
  longlong lVar34;
  longlong lVar35;
  longlong *plVar36;
  longlong lVar37;
  ulonglong uVar38;
  int iVar39;
  double *pdVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auStack_338 [32];
  double *local_318;
  longlong local_310;
  longlong *local_308;
  longlong *local_300;
  double *local_2f8;
  longlong *local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  int local_2d4;
  longlong *local_2d0;
  double *local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  int local_298 [4];
  double local_288 [16];
  double local_208 [4];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  double local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  longlong local_108;
  longlong lStack_100;
  ulonglong local_f0;
  
  uVar38 = (ulonglong)param_4;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    lVar20 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar20 = *(longlong *)(param_1 + 0xa8);
    }
    iVar32 = *(int *)(lVar20 + (ulonglong)
                               (*(int *)(param_1 + 0xb0) - 1U & *(uint *)((longlong)param_2 + 0x1c))
                               * 4);
    if (iVar32 != -1) {
      do {
        lVar20 = *(longlong *)(param_1 + 0x68) + (longlong)iVar32 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar32 * 0x10) ==
            *(uint *)((longlong)param_2 + 0x1c)) goto LAB_1493109e1;
        iVar32 = *(int *)(lVar20 + 8);
      } while (iVar32 != -1);
    }
  }
  lVar20 = 0;
LAB_1493109e1:
  local_2d8 = *(undefined4 *)(lVar20 + 4);
  local_310 = param_1;
  local_2e0 = FUN_1493122d0(param_2);
  if (*(int *)(local_310 + 500) < 0) {
LAB_149312272:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  plVar24 = (longlong *)(local_310 + 0x1e8);
  *(undefined4 *)(local_310 + 0x1f0) = 0;
  FUN_149312378(param_2,plVar24);
  dVar8 = *param_13;
  dVar9 = param_13[1];
  dVar10 = param_13[2];
  dVar11 = param_13[8];
  dVar12 = param_13[9];
  dVar13 = param_13[10];
  dVar4 = dVar9 + dVar9;
  dVar3 = dVar10 + dVar10;
  dVar44 = dVar8 * (dVar8 + dVar8);
  dVar5 = (1.0 - (dVar10 * dVar3 + dVar44)) * dVar12;
  local_138 = (1.0 - (dVar44 + dVar9 * dVar4)) * dVar13;
  dVar44 = param_13[3];
  dVar45 = dVar3 * dVar44;
  dVar46 = (dVar8 + dVar8) * param_13[3];
  dVar44 = dVar4 * dVar44;
  dVar6 = (dVar4 * dVar8 + dVar45) * dVar11;
  local_158 = (dVar3 * dVar9 + dVar46) * dVar12;
  local_178 = (*param_13 * dVar3 - dVar44) * dVar11;
  dVar46 = (dVar3 * dVar9 - dVar46) * dVar13;
  puVar29 = local_188;
  local_188._8_4_ = SUB84(dVar6,0);
  local_188._0_8_ = (1.0 - (dVar10 * dVar3 + dVar9 * dVar4)) * dVar11;
  local_188._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  uStack_170 = 0;
  local_168._8_4_ = SUB84(dVar5,0);
  local_168._0_8_ = (dVar4 * dVar8 - dVar45) * dVar12;
  local_168._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  uStack_150 = 0;
  local_148._8_4_ = SUB84(dVar46,0);
  local_148._0_8_ = (dVar44 + *param_13 * dVar3) * dVar13;
  local_148._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
  uStack_130 = 0;
  local_128 = param_13[4];
  dStack_120 = param_13[5];
  local_118 = param_13[6];
  uStack_110 = 0x3ff0000000000000;
  FUN_14494412e(puVar29,local_288);
  pdVar40 = local_208;
  pdVar30 = local_288;
  pdVar33 = pdVar40;
  for (lVar20 = 0x10; dVar5 = dStack_1b0, dVar4 = dStack_1d0, dVar46 = local_1d8,
      dVar45 = local_208[3], dVar3 = local_208[2], dVar44 = local_208[1], lVar20 != 0;
      lVar20 = lVar20 + -1) {
    *pdVar33 = *pdVar30;
    pdVar30 = pdVar30 + 1;
    pdVar33 = pdVar33 + 1;
  }
  local_208[1] = local_1e8;
  local_208[2] = local_1c8;
  local_208[3] = local_1a8;
  local_1e8 = dVar44;
  local_1d8 = dStack_1c0;
  dStack_1d0 = local_1a0;
  local_1c8 = dVar3;
  dStack_1c0 = dVar46;
  dStack_1b0 = local_198;
  local_1a8 = dVar45;
  local_1a0 = dVar4;
  local_198 = dVar5;
  FUN_144a1c686(pdVar40,0x3e45798ee0000000);
  dVar44 = (double)FUN_144a91046(puVar29);
  lVar20 = local_310;
  if (*(int *)(local_310 + 0x174) < 0) goto LAB_149312272;
  pdVar30 = (double *)(local_310 + 0x168);
  *(undefined4 *)(local_310 + 0x170) = 0;
  local_308 = (longlong *)CONCAT44(local_308._4_4_,param_4);
  local_300 = param_2;
  local_2d4 = param_3;
  local_2d0 = plVar24;
  if ((((int)param_2[1] < 2) || (*(char *)(*param_2 + 0x10) != '\x01')) ||
     ((lVar25 = *(longlong *)(*param_2 + 0x18), *(longlong *)(lVar25 + 0x98) == 0 &&
      (*(char *)(lVar25 + 0x18) != '\x01')))) {
    if (*(int *)(local_310 + 0x184) < 0) goto LAB_149312272;
    plVar24 = (longlong *)(local_310 + 0x178);
    lVar20 = 0;
    *(undefined4 *)(local_310 + 0x180) = 0;
    local_288[0] = (double)((ulonglong)local_288[0]._1_7_ << 8);
    uVar18 = FUN_14931afa2(param_2,local_288);
    FUN_149318818(uVar18,plVar24);
    local_288[0] = (double)((ulonglong)local_288[0] & 0xffffffff00000000);
    local_318 = local_288;
    FUN_14930ec5c(local_310,plVar24,param_2,param_15);
    puVar19 = &DAT_14c846400;
    do {
      lVar25 = 0;
      do {
        if ((*(double *)(puVar29 + lVar25 * 8) != (double)puVar19[lVar25]) ||
           (NAN(*(double *)(puVar29 + lVar25 * 8)) || NAN((double)puVar19[lVar25]))) {
          iVar32 = *(int *)(local_310 + 0x180);
          if ((longlong)iVar32 != 0) {
            lVar20 = *(longlong *)(local_310 + 0x178);
            lVar25 = 0;
            do {
              dVar45 = (double)*(float *)(lVar20 + 8 + lVar25);
              dVar3 = (double)*(float *)(lVar20 + 4 + lVar25);
              dVar46 = (double)*(float *)(lVar20 + lVar25);
              *(float *)(lVar20 + lVar25) =
                   (float)(dVar45 * (double)local_148._0_8_ +
                           dVar3 * (double)local_168._0_8_ + dVar46 * (double)local_188._0_8_ +
                          local_128);
              *(float *)(lVar20 + 4 + lVar25) =
                   (float)(dVar45 * (double)local_148._8_8_ +
                           dVar3 * (double)local_168._8_8_ + dVar46 * (double)local_188._8_8_ +
                          dStack_120);
              *(float *)(lVar20 + 8 + lVar25) =
                   (float)(dVar46 * local_178 + dVar3 * local_158 + dVar45 * local_138 + local_118);
              lVar25 = lVar25 + 0xc;
            } while ((longlong)iVar32 * 0xc != lVar25);
          }
          goto LAB_149310ecd;
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 != 4);
      lVar20 = lVar20 + 1;
      puVar19 = puVar19 + 4;
      puVar29 = puVar29 + 0x20;
    } while (lVar20 != 4);
LAB_149310ecd:
    *(undefined4 *)(local_310 + 0x170) = 0;
    if (*(int *)(local_310 + 0x174) == 0) {
      iVar15 = 0;
      iVar32 = 0;
    }
    else {
      FUN_140678446(pdVar30,0);
      iVar32 = *(int *)(local_310 + 0x170);
      iVar15 = *(int *)(local_310 + 0x174);
    }
    uVar2 = *(uint *)(local_310 + 0x1f0);
    uVar7 = (uVar2 / 3) * 3;
    *(uint *)(local_310 + 0x170) = uVar7 + iVar32;
    if ((uint)(iVar15 - iVar32) < uVar7) {
      FUN_140c0b6f2(pdVar30);
    }
    uVar38 = 0;
    lVar25 = local_310;
    if (uVar2 != uVar2 % 3) {
      do {
        lVar20 = *local_2d0;
        iVar32 = (int)uVar38;
        lVar37 = (longlong)iVar32;
        lVar26 = (longlong)*(int *)(lVar20 + lVar37 * 4);
        lVar34 = *plVar24;
        lVar35 = (longlong)(iVar32 + 1);
        lVar22 = (longlong)*(int *)(lVar20 + lVar35 * 4);
        lVar23 = (longlong)(iVar32 + 2);
        lVar20 = (longlong)*(int *)(lVar20 + lVar23 * 4);
        fVar41 = *(float *)(lVar34 + 8 + lVar26 * 0xc);
        fVar48 = *(float *)(lVar34 + 8 + lVar22 * 0xc) - fVar41;
        fVar42 = *(float *)(lVar34 + lVar26 * 0xc);
        fVar43 = *(float *)(lVar34 + 4 + lVar26 * 0xc);
        fVar50 = *(float *)(lVar34 + 4 + lVar22 * 0xc) - fVar43;
        fVar49 = *(float *)(lVar34 + lVar22 * 0xc) - fVar42;
        fVar41 = *(float *)(lVar34 + 8 + lVar20 * 0xc) - fVar41;
        fVar43 = *(float *)(lVar34 + 4 + lVar20 * 0xc) - fVar43;
        fVar42 = *(float *)(lVar34 + lVar20 * 0xc) - fVar42;
        fVar47 = fVar42 * fVar50 - fVar49 * fVar43;
        fVar42 = fVar41 * fVar49 - fVar48 * fVar42;
        fVar41 = fVar43 * fVar48 - fVar41 * fVar50;
        fVar43 = fVar47 * fVar47 + fVar41 * fVar41 + fVar42 * fVar42;
        if (((fVar43 != 1.0) || (fVar48 = fVar47, fVar49 = fVar41, fVar50 = fVar42, NAN(fVar43))) &&
           (fVar48 = DAT_14c846338, fVar49 = (float)DAT_14c846330, fVar50 = DAT_14c846330._4_4_,
           1e-08 <= fVar43)) {
          fVar43 = 1.0 / SQRT(fVar43);
          fVar48 = fVar47 * fVar43;
          fVar49 = fVar41 * fVar43;
          fVar50 = fVar42 * fVar43;
        }
        dVar3 = *pdVar30;
        *(float *)((longlong)dVar3 + lVar37 * 0xc) = fVar49;
        *(float *)((longlong)dVar3 + 4U + lVar37 * 0xc) = fVar50;
        *(float *)((longlong)dVar3 + 8U + lVar37 * 0xc) = fVar48;
        dVar3 = *pdVar30;
        *(float *)((longlong)dVar3 + lVar35 * 0xc) = fVar49;
        *(float *)((longlong)dVar3 + 4U + lVar35 * 0xc) = fVar50;
        *(float *)((longlong)dVar3 + 8U + lVar35 * 0xc) = fVar48;
        dVar3 = *pdVar30;
        *(float *)((longlong)dVar3 + lVar23 * 0xc) = fVar49;
        *(float *)((longlong)dVar3 + 4U + lVar23 * 0xc) = fVar50;
        *(float *)((longlong)dVar3 + 8U + lVar23 * 0xc) = fVar48;
        uVar38 = (ulonglong)(iVar32 + 3U);
      } while (iVar32 + 3U < uVar7);
      uVar38 = 0;
    }
  }
  else {
    if (*(int *)(local_310 + 0x194) < 0) goto LAB_149312272;
    pdVar33 = (double *)(local_310 + 0x188);
    *(undefined4 *)(local_310 + 400) = 0;
    local_288[0] = (double)CONCAT71(local_288[0]._1_7_,1);
    uVar18 = FUN_14931afa2(param_2,local_288);
    FUN_149318818(uVar18,pdVar30);
    local_288[0] = (double)CONCAT44(local_288[0]._4_4_,1);
    local_318 = local_288;
    FUN_14930ec5c(local_310,pdVar30,param_2,param_15);
    puVar19 = &DAT_14c846400;
    pdVar21 = local_208;
    lVar25 = 0;
    do {
      lVar34 = 0;
      do {
        if ((pdVar21[lVar34] != (double)puVar19[lVar34]) ||
           (NAN(pdVar21[lVar34]) || NAN((double)puVar19[lVar34]))) {
          iVar32 = *(int *)(local_310 + 0x170);
          if ((longlong)iVar32 != 0) {
            lVar25 = *(longlong *)(local_310 + 0x168);
            lVar34 = 0;
            do {
              dVar45 = (double)*(float *)(lVar25 + 8 + lVar34);
              dVar3 = (double)*(float *)(lVar25 + 4 + lVar34);
              dVar46 = (double)*(float *)(lVar25 + lVar34);
              *(float *)(lVar25 + lVar34) =
                   (float)(dVar45 * local_1c8 + dVar3 * local_1e8 + dVar46 * local_208[0] +
                          local_1a8);
              *(float *)(lVar25 + 4 + lVar34) =
                   (float)(dVar45 * dStack_1c0 + dVar3 * dStack_1e0 + dVar46 * local_208[1] +
                          local_1a0);
              *(float *)(lVar25 + 8 + lVar34) =
                   (float)(dVar46 * local_208[2] + dVar3 * local_1d8 + dVar45 * local_1b8 +
                          local_198);
              lVar34 = lVar34 + 0xc;
            } while ((longlong)iVar32 * 0xc != lVar34);
          }
          goto LAB_149311e41;
        }
        lVar34 = lVar34 + 1;
      } while (lVar34 != 4);
      lVar25 = lVar25 + 1;
      puVar19 = puVar19 + 4;
      pdVar21 = pdVar21 + 4;
    } while (lVar25 != 4);
LAB_149311e41:
    iVar32 = *(int *)(local_310 + 0x1f0);
    if (iVar32 < 0) {
LAB_14931227f:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar32);
    }
    if (*(int *)(local_310 + 0x194) < iVar32) {
      FUN_140678446(pdVar33);
      iVar32 = *(int *)(local_310 + 0x1f0);
    }
    lVar25 = local_310;
    if (iVar32 != 0) {
      lVar34 = *local_2d0;
      uVar38 = 0;
      do {
        puVar19 = (undefined8 *)
                  ((longlong)*(int *)(lVar34 + uVar38) * 0xc + *(longlong *)(lVar25 + 0x168));
        iVar15 = *(int *)(lVar25 + 400);
        *(uint *)(lVar25 + 400) = iVar15 + 1U;
        if (*(uint *)(lVar25 + 0x194) < iVar15 + 1U) {
          FUN_140c0b6f2(pdVar33,iVar15);
          lVar25 = local_310;
        }
        dVar3 = *pdVar33;
        *(undefined4 *)((longlong)dVar3 + 8U + (longlong)iVar15 * 0xc) =
             *(undefined4 *)(puVar19 + 1);
        *(undefined8 *)((longlong)dVar3 + (longlong)iVar15 * 0xc) = *puVar19;
        uVar38 = uVar38 + 4;
      } while ((longlong)iVar32 * 4 != uVar38);
    }
    local_288[0] = *pdVar30;
    local_288[1] = *(double *)(lVar20 + 0x170);
    uVar18 = *(undefined8 *)(lVar20 + 400);
    *pdVar30 = *pdVar33;
    *(undefined8 *)(lVar20 + 0x170) = uVar18;
    *pdVar33 = local_288[0];
    *(double *)(lVar20 + 400) = local_288[1];
    uVar38 = CONCAT71((int7)(uVar38 >> 8),1);
  }
  plVar36 = local_2d0;
  plVar24 = local_300;
  if (*(int *)(lVar25 + 0x1c4) < 0) goto LAB_149312272;
  *(undefined4 *)(lVar25 + 0x1c0) = 0;
  pdVar30 = (double *)(lVar25 + 0x1b8);
  local_2f8 = pdVar30;
  if ((((2 < (int)local_300[1] & (byte)uVar38) == 1) && (*(char *)(*local_300 + 0x20) == '\x02')) &&
     ((lVar20 = *(longlong *)(*local_300 + 0x28), *(longlong *)(lVar20 + 0x98) != 0 ||
      (*(char *)(lVar20 + 0x18) == '\x01')))) {
    if (*(int *)(lVar25 + 0x1d4) < 0) goto LAB_149312272;
    pdVar33 = (double *)(lVar25 + 0x1c8);
    lVar20 = 0;
    *(undefined4 *)(lVar25 + 0x1d0) = 0;
    FUN_14931252e(local_300,pdVar30);
    local_288[0] = (double)((ulonglong)local_288[0] & 0xffffffff00000000);
    local_318 = local_288;
    FUN_14930eec2(local_310,pdVar30,plVar24,param_15);
    pdVar30 = local_2f8;
    puVar19 = &DAT_14c846400;
    do {
      lVar34 = 0;
      do {
        if ((pdVar40[lVar34] != (double)puVar19[lVar34]) ||
           (NAN(pdVar40[lVar34]) || NAN((double)puVar19[lVar34]))) {
          iVar32 = *(int *)(local_310 + 0x1c0);
          if ((longlong)iVar32 != 0) {
            lVar20 = *(longlong *)(local_310 + 0x1b8);
            lVar34 = 0;
            do {
              dVar45 = (double)*(float *)(lVar20 + 8 + lVar34);
              dVar46 = (double)*(float *)(lVar20 + 4 + lVar34);
              dVar3 = (double)*(float *)(lVar20 + lVar34);
              *(float *)(lVar20 + lVar34) =
                   (float)(local_1c8 * dVar45 + local_1e8 * dVar46 + local_208[0] * dVar3 +
                          local_1a8);
              *(float *)(lVar20 + 4 + lVar34) =
                   (float)(dStack_1c0 * dVar45 + dStack_1e0 * dVar46 + local_208[1] * dVar3 +
                          local_1a0);
              *(float *)(lVar20 + 8 + lVar34) =
                   (float)(dVar45 * local_1b8 + dVar46 * local_1d8 + dVar3 * local_208[2] +
                          local_198);
              *(float *)(lVar20 + 0xc + lVar34) =
                   (float)(dVar45 * dStack_1b0 + dVar46 * dStack_1d0 + dVar3 * local_208[3] +
                          dStack_190);
              lVar34 = lVar34 + 0x10;
            } while ((longlong)iVar32 * 0x10 != lVar34);
          }
          goto LAB_149312237;
        }
        lVar34 = lVar34 + 1;
      } while (lVar34 != 4);
      lVar20 = lVar20 + 1;
      puVar19 = puVar19 + 4;
      pdVar40 = pdVar40 + 4;
    } while (lVar20 != 4);
LAB_149312237:
    FUN_1444c19d8(local_2f8,plVar36,pdVar33);
    local_288[0] = *pdVar30;
    local_288[1] = pdVar30[1];
    dVar3 = *(double *)(lVar25 + 0x1d0);
    *pdVar30 = *pdVar33;
    pdVar30[1] = dVar3;
    *pdVar33 = local_288[0];
    *(double *)(lVar25 + 0x1d0) = local_288[1];
    lVar25 = local_310;
  }
  else if (param_5 != '\0') {
    lVar20 = local_300[0x12];
    if ((*(longlong *)(lVar20 + 0x98) == 0) && (*(char *)(lVar20 + 0x18) != '\x01')) {
      local_288[0] = (double)((ulonglong)local_288[0] & 0xffffffffffffff00);
      lVar20 = FUN_14931afa2(local_300);
    }
    local_288[0] = 5.26354424712089e-315;
    local_288[1] = 0.0078125;
    FUN_146bff226(local_2f8,local_288,*(undefined4 *)(lVar20 + 4));
    lVar25 = local_310;
  }
  if (*(int *)(lVar25 + 0x1b4) < 0) goto LAB_149312272;
  pdVar40 = (double *)(lVar25 + 0x1a8);
  *(undefined4 *)(lVar25 + 0x1b0) = 0;
  local_2c8 = pdVar40;
  if ((((int)plVar24[1] < 6) || (*(char *)(*plVar24 + 0x50) != '\x05')) ||
     ((lVar20 = *(longlong *)(*plVar24 + 0x58), *(longlong *)(lVar20 + 0x98) == 0 &&
      (*(char *)(lVar20 + 0x18) != '\x01')))) {
    if (param_6 != '\0') {
      lVar20 = plVar24[0x12];
      if ((*(longlong *)(lVar20 + 0x98) == 0) && (*(char *)(lVar20 + 0x18) != '\x01')) {
        local_288[0] = (double)((ulonglong)local_288[0] & 0xffffffffffffff00);
        lVar20 = FUN_14931afa2(plVar24);
      }
      local_288[0] = 5.26354424712089e-315;
      local_288[1] = 0.0078125;
      FUN_146bff226(local_2c8,local_288,*(undefined4 *)(lVar20 + 4));
      lVar25 = local_310;
    }
  }
  else {
    if (*(int *)(lVar25 + 0x1d4) < 0) goto LAB_149312272;
    *(undefined4 *)(lVar25 + 0x1d0) = 0;
    FUN_149312664(plVar24,pdVar40);
    local_288[0] = (double)CONCAT44(local_288[0]._4_4_,1);
    local_318 = local_288;
    FUN_14930eec2(local_310,pdVar40,plVar24,param_15);
    FUN_1444c19d8(pdVar40,plVar36,lVar25 + 0x1c8);
    local_288[0] = *pdVar40;
    local_288[1] = *(double *)(lVar25 + 0x1b0);
    uVar18 = *(undefined8 *)(local_310 + 0x1d0);
    *pdVar40 = *(double *)(local_310 + 0x1c8);
    *(undefined8 *)(lVar25 + 0x1b0) = uVar18;
    *(double *)(local_310 + 0x1c8) = local_288[0];
    *(double *)(local_310 + 0x1d0) = local_288[1];
    lVar25 = local_310;
  }
  iVar32 = (int)local_2e0 * 3;
  local_2e8 = CONCAT44(local_2e8._4_4_,iVar32);
  local_2f0 = (longlong *)((longlong)iVar32 << 3);
  uVar27 = (ulonglong)local_308 & 0xffffffff;
  local_308 = (longlong *)(lVar25 + 0x148);
  uVar31 = 0;
  do {
    lVar20 = uVar31 * 0x10;
    uVar2 = *(uint *)(lVar25 + 0xd4 + lVar20);
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar2);
    }
    lVar34 = lVar25 + lVar20;
    plVar36 = (longlong *)(lVar34 + 200);
    *(undefined4 *)(lVar34 + 0xd0) = 0;
    local_288[uVar31] = (double)plVar36;
    cVar14 = FUN_149312288(plVar24);
    if (cVar14 == '\0') {
      *(uint *)(lVar34 + 0xd0) = (uint)local_2e8;
      if (uVar2 < (uint)local_2e8) {
        FUN_140752556(plVar36);
      }
      memset((void *)*plVar36,0,(size_t)local_2f0);
      lVar25 = local_310;
    }
    else {
      if (*(int *)(local_310 + 0x154) < 0) goto LAB_149312272;
      *(undefined4 *)(local_310 + 0x150) = 0;
      FUN_1493127c4(plVar24,uVar31 & 0xffffffff,plVar36);
      local_318 = (double *)CONCAT44(local_318._4_4_,(int)uVar31);
      FUN_14930f3c4(local_310,plVar36,plVar24,param_15);
      lVar25 = local_310;
      if (lVar20 != 0x80) {
        iVar32 = *(int *)(local_310 + 0x1f0);
        if (iVar32 < 0) goto LAB_14931227f;
        if (*(int *)(local_310 + 0x154) < iVar32) {
          FUN_14171ef34();
          iVar32 = *(int *)(local_310 + 0x1f0);
        }
        lVar25 = local_310;
        if (iVar32 != 0) {
          lVar20 = *local_2d0;
          lVar26 = (longlong)iVar32 << 2;
          lVar35 = 0;
          local_2c0 = lVar26;
          local_2b8 = lVar20;
          do {
            iVar32 = *(int *)(lVar20 + lVar35);
            lVar22 = *plVar36;
            iVar15 = *(int *)(lVar25 + 0x150);
            *(uint *)(lVar25 + 0x150) = iVar15 + 1U;
            lVar23 = (longlong)iVar32;
            if (*(uint *)(lVar25 + 0x154) < iVar15 + 1U) {
              local_2b0 = (longlong)iVar32;
              FUN_140752556(local_308,iVar15);
              lVar23 = local_2b0;
              lVar26 = local_2c0;
              lVar20 = local_2b8;
              lVar25 = local_310;
            }
            *(undefined8 *)(*local_308 + (longlong)iVar15 * 8) =
                 *(undefined8 *)(lVar22 + lVar23 * 8);
            lVar35 = lVar35 + 4;
          } while (lVar26 != lVar35);
        }
      }
      local_108 = *plVar36;
      lStack_100 = *(longlong *)(lVar34 + 0xd0);
      lVar20 = local_308[1];
      *plVar36 = *local_308;
      *(longlong *)(lVar34 + 0xd0) = lVar20;
      *local_308 = local_108;
      local_308[1] = lStack_100;
      plVar24 = local_300;
    }
    uVar31 = uVar31 + 1;
  } while (uVar31 != uVar27);
  local_298[2] = -1;
  local_298[0] = -1;
  local_298[1] = -1;
  local_308 = (longlong *)uVar38;
  if (0.0 <= dVar44) {
    iVar32 = 0;
    if ((int)local_2e0 != 0) {
      local_2e8 = (longlong)local_2d4 * 0x50;
      plVar24 = (longlong *)0x0;
      do {
        lVar34 = *(longlong *)(lVar25 + 0x1e8);
        lVar20 = *(longlong *)(lVar25 + 0xb8) + local_2e8;
        plVar36 = (longlong *)(*(longlong *)(lVar25 + 0xb8) + local_2e8);
        iVar15 = *(int *)(lVar20 + 8);
        iVar16 = *(int *)(lVar20 + 0x34);
        lVar25 = 0;
        do {
          if (iVar15 != iVar16) {
            uVar2 = *(uint *)(lVar34 + (longlong)(iVar32 * 3 + (int)lVar25) * 4);
            lVar26 = plVar36[8];
            if (plVar36[8] == 0) {
              lVar26 = lVar20 + 0x38;
            }
            iVar39 = *(int *)(lVar26 + (ulonglong)((int)plVar36[9] - 1U & uVar2) * 4);
            if (iVar39 != -1) {
              do {
                lVar26 = *plVar36 + (longlong)iVar39 * 0x10;
                if (*(uint *)(*plVar36 + (longlong)iVar39 * 0x10) == uVar2) goto LAB_1493118a9;
                iVar39 = *(int *)(lVar26 + 8);
              } while (iVar39 != -1);
            }
          }
          lVar26 = 0;
LAB_1493118a9:
          local_298[lVar25] = *(int *)(lVar26 + 4);
          lVar25 = lVar25 + 1;
        } while (lVar25 != 3);
        plVar36 = (longlong *)CONCAT71((int7)((ulonglong)plVar36 >> 8),1);
        local_2f0 = plVar24;
        if ((local_298[0] != local_298[1]) &&
           (local_298[0] != local_298[2] && local_298[1] != local_298[2])) {
          lVar20 = 0;
          do {
            iVar15 = local_298[lVar20];
            lVar25 = *(longlong *)(*(longlong *)(param_14 + 0x58) + 0x80);
            if (lVar25 == 0) {
              lVar25 = *(longlong *)(param_14 + 0x58);
            }
            iVar16 = FUN_146f70732(lVar25);
            FUN_146f70016(param_14,iVar16,iVar15);
            *(int *)(*(longlong *)(local_310 + 0x1f8) + lVar20 * 4) = iVar16;
            lVar25 = *(longlong *)(local_310 + 0x168);
            lVar34 = (longlong)(iVar32 * 3 + (int)lVar20);
            plVar24 = *(longlong **)(*param_7 + 0x30);
            plVar36 = (longlong *)(*param_7 + 0x18);
            if (plVar24 != (longlong *)0x0) {
              plVar36 = plVar24;
            }
            lVar26 = *plVar36;
            lVar35 = (longlong)(iVar16 * (int)plVar36[2]);
            *(undefined4 *)(lVar26 + 8 + lVar35 * 0xc) = *(undefined4 *)(lVar25 + 8 + lVar34 * 0xc);
            *(undefined8 *)(lVar26 + lVar35 * 0xc) = *(undefined8 *)(lVar25 + lVar34 * 0xc);
            if (((char)local_308 != '\0') && (0 < *(int *)(local_310 + 0x1c0))) {
              lVar25 = lVar34 * 0x10;
              uVar1 = *(undefined4 *)((longlong)*local_2f8 + 8U + lVar25);
              plVar24 = *(longlong **)(*param_8 + 0x30);
              plVar36 = (longlong *)(*param_8 + 0x18);
              if (plVar24 != (longlong *)0x0) {
                plVar36 = plVar24;
              }
              lVar26 = *plVar36;
              lVar35 = (longlong)((int)plVar36[2] * iVar16);
              *(undefined8 *)(lVar26 + lVar35 * 0xc) =
                   *(undefined8 *)((longlong)*local_2f8 + lVar25);
              *(undefined4 *)(lVar26 + 8 + lVar35 * 0xc) = uVar1;
              plVar24 = *(longlong **)(*param_9 + 0x30);
              plVar36 = (longlong *)(*param_9 + 0x18);
              if (plVar24 != (longlong *)0x0) {
                plVar36 = plVar24;
              }
              *(undefined4 *)(*plVar36 + (longlong)((int)plVar36[2] * iVar16) * 4) =
                   *(undefined4 *)((longlong)*local_2f8 + 0xcU + lVar25);
            }
            lVar25 = 2;
            uVar38 = 0;
            do {
              lVar26 = *(longlong *)(*param_10 + 0x30);
              lVar35 = *param_10 + 0x18;
              if (lVar26 != 0) {
                lVar35 = lVar26;
              }
              *(undefined8 *)
               (*(longlong *)(lVar35 + -0x10 + lVar25 * 8) +
               (longlong)(*(int *)(lVar35 + lVar25 * 8) * iVar16) * 8) =
                   *(undefined8 *)(*(longlong *)local_288[uVar38] + lVar34 * 8);
              uVar38 = uVar38 + 1;
              lVar25 = lVar25 + 3;
            } while (uVar27 != uVar38);
            if (0 < *(int *)(local_310 + 0x1b0)) {
              dVar44 = *local_2c8;
              lVar34 = lVar34 * 0x10;
              fVar41 = *(float *)((longlong)dVar44 + lVar34);
              fVar42 = *(float *)((longlong)dVar44 + 4U + lVar34);
              fVar43 = *(float *)((longlong)dVar44 + 8U + lVar34);
              uVar1 = *(undefined4 *)((longlong)dVar44 + 0xcU + lVar34);
              if (fVar41 <= 0.04045) {
                fVar41 = fVar41 / 12.92;
              }
              else {
                fVar41 = powf((fVar41 + 0.055) / 1.055,2.4);
              }
              if (fVar42 <= 0.04045) {
                fVar42 = fVar42 / 12.92;
              }
              else {
                fVar42 = powf((fVar42 + 0.055) / 1.055,2.4);
              }
              if (fVar43 <= 0.04045) {
                fVar43 = fVar43 / 12.92;
              }
              else {
                fVar43 = powf((fVar43 + 0.055) / 1.055,2.4);
              }
              plVar24 = *(longlong **)(*param_11 + 0x30);
              plVar36 = (longlong *)(*param_11 + 0x18);
              if (plVar24 != (longlong *)0x0) {
                plVar36 = plVar24;
              }
              lVar25 = *plVar36;
              lVar34 = (longlong)((int)plVar36[2] * iVar16) * 0x10;
              *(float *)(lVar25 + lVar34) = fVar41;
              *(float *)(lVar25 + 4 + lVar34) = fVar42;
              *(float *)(lVar25 + 8 + lVar34) = fVar43;
              *(undefined4 *)(lVar25 + 0xc + lVar34) = uVar1;
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 != 3);
          local_2a8 = 0.0;
          uStack_2a0 = 0;
          lVar20 = *(longlong *)(local_310 + 0x1f8);
          uVar1 = *(undefined4 *)(local_310 + 0x200);
          lVar25 = *(longlong *)(*(longlong *)(param_14 + 0x78) + 0x80);
          if (lVar25 == 0) {
            lVar25 = *(longlong *)(param_14 + 0x78);
          }
          uVar17 = FUN_146f70732(lVar25);
          lStack_100 = CONCAT44(lStack_100._4_4_,uVar1);
          local_318 = &local_2a8;
          local_108 = lVar20;
          FUN_146f70e56(param_14,uVar17,local_2d8,&local_108);
          if ((longlong)(int)uStack_2a0 != 0) {
            lVar20 = 0;
            do {
              plVar24 = *(longlong **)(*param_12 + 0x30);
              plVar36 = (longlong *)(*param_12 + 0x18);
              if (plVar24 != (longlong *)0x0) {
                plVar36 = plVar24;
              }
              *(undefined1 *)
               (*plVar36 + (longlong)((int)plVar36[2] * *(int *)((longlong)local_2a8 + lVar20))) = 0
              ;
              lVar20 = lVar20 + 4;
            } while ((longlong)(int)uStack_2a0 * 4 != lVar20);
          }
          plVar36 = local_2f0;
          if (local_2a8 != 0.0) {
            FUN_1400020a8();
            plVar36 = local_2f0;
          }
        }
        iVar32 = iVar32 + 1;
        plVar24 = (longlong *)((ulonglong)plVar36 & 0xffffffff);
        lVar25 = local_310;
      } while (iVar32 != (int)local_2e0);
      goto LAB_149311cb3;
    }
  }
  else {
    iVar32 = 0;
    if ((int)local_2e0 != 0) {
      local_2e8 = CONCAT44(local_2e8._4_4_,(uint)local_2e8 + -1);
      local_2f0 = (longlong *)((longlong)local_2d4 * 0x50);
      plVar24 = (longlong *)0x0;
      do {
        iVar39 = (uint)local_2e8 + iVar32 * -3;
        lVar20 = *(longlong *)(lVar25 + 0xb8);
        lVar25 = *(longlong *)(lVar25 + 0x1e8);
        plVar36 = (longlong *)(lVar20 + (longlong)local_2f0);
        iVar15 = *(int *)((longlong)local_2f0 + lVar20 + 8);
        iVar16 = *(int *)((longlong)local_2f0 + lVar20 + 0x34);
        lVar34 = 0;
        do {
          if (iVar15 != iVar16) {
            uVar2 = *(uint *)(lVar25 + (longlong)(iVar39 - (int)lVar34) * 4);
            lVar26 = plVar36[8];
            if (plVar36[8] == 0) {
              lVar26 = (longlong)local_2f0 + lVar20 + 0x38;
            }
            iVar28 = *(int *)(lVar26 + (ulonglong)((int)plVar36[9] - 1U & uVar2) * 4);
            if (iVar28 != -1) {
              do {
                lVar26 = *plVar36 + (longlong)iVar28 * 0x10;
                if (*(uint *)(*plVar36 + (longlong)iVar28 * 0x10) == uVar2) goto LAB_149311412;
                iVar28 = *(int *)(lVar26 + 8);
              } while (iVar28 != -1);
            }
          }
          lVar26 = 0;
LAB_149311412:
          local_298[lVar34] = *(int *)(lVar26 + 4);
          lVar34 = lVar34 + 1;
        } while (lVar34 != 3);
        plVar36 = (longlong *)CONCAT71((int7)((ulonglong)plVar36 >> 8),1);
        local_300 = plVar24;
        if ((local_298[0] != local_298[1]) &&
           (local_298[0] != local_298[2] && local_298[1] != local_298[2])) {
          lVar20 = 0;
          do {
            iVar15 = local_298[lVar20];
            lVar25 = *(longlong *)(*(longlong *)(param_14 + 0x58) + 0x80);
            if (lVar25 == 0) {
              lVar25 = *(longlong *)(param_14 + 0x58);
            }
            iVar16 = FUN_146f70732(lVar25);
            FUN_146f70016(param_14,iVar16,iVar15);
            *(int *)(*(longlong *)(local_310 + 0x1f8) + lVar20 * 4) = iVar16;
            lVar25 = *(longlong *)(local_310 + 0x168);
            lVar34 = (longlong)(iVar39 - (int)lVar20);
            plVar24 = *(longlong **)(*param_7 + 0x30);
            plVar36 = (longlong *)(*param_7 + 0x18);
            if (plVar24 != (longlong *)0x0) {
              plVar36 = plVar24;
            }
            lVar26 = *plVar36;
            lVar35 = (longlong)(iVar16 * (int)plVar36[2]);
            *(undefined4 *)(lVar26 + 8 + lVar35 * 0xc) = *(undefined4 *)(lVar25 + 8 + lVar34 * 0xc);
            *(undefined8 *)(lVar26 + lVar35 * 0xc) = *(undefined8 *)(lVar25 + lVar34 * 0xc);
            if (((char)local_308 != '\0') && (0 < *(int *)(local_310 + 0x1c0))) {
              lVar25 = lVar34 * 0x10;
              uVar1 = *(undefined4 *)((longlong)*local_2f8 + 8U + lVar25);
              plVar24 = *(longlong **)(*param_8 + 0x30);
              plVar36 = (longlong *)(*param_8 + 0x18);
              if (plVar24 != (longlong *)0x0) {
                plVar36 = plVar24;
              }
              lVar26 = *plVar36;
              lVar35 = (longlong)((int)plVar36[2] * iVar16);
              *(undefined8 *)(lVar26 + lVar35 * 0xc) =
                   *(undefined8 *)((longlong)*local_2f8 + lVar25);
              *(undefined4 *)(lVar26 + 8 + lVar35 * 0xc) = uVar1;
              plVar24 = *(longlong **)(*param_9 + 0x30);
              plVar36 = (longlong *)(*param_9 + 0x18);
              if (plVar24 != (longlong *)0x0) {
                plVar36 = plVar24;
              }
              *(undefined4 *)(*plVar36 + (longlong)((int)plVar36[2] * iVar16) * 4) =
                   *(undefined4 *)((longlong)*local_2f8 + 0xcU + lVar25);
            }
            lVar25 = 2;
            uVar38 = 0;
            do {
              lVar26 = *(longlong *)(*param_10 + 0x30);
              lVar35 = *param_10 + 0x18;
              if (lVar26 != 0) {
                lVar35 = lVar26;
              }
              *(undefined8 *)
               (*(longlong *)(lVar35 + -0x10 + lVar25 * 8) +
               (longlong)(*(int *)(lVar35 + lVar25 * 8) * iVar16) * 8) =
                   *(undefined8 *)(*(longlong *)local_288[uVar38] + lVar34 * 8);
              uVar38 = uVar38 + 1;
              lVar25 = lVar25 + 3;
            } while (uVar27 != uVar38);
            if (0 < *(int *)(local_310 + 0x1b0)) {
              dVar44 = *local_2c8;
              lVar34 = lVar34 * 0x10;
              fVar41 = *(float *)((longlong)dVar44 + lVar34);
              fVar42 = *(float *)((longlong)dVar44 + 4U + lVar34);
              fVar43 = *(float *)((longlong)dVar44 + 8U + lVar34);
              uVar1 = *(undefined4 *)((longlong)dVar44 + 0xcU + lVar34);
              if (fVar41 <= 0.04045) {
                fVar41 = fVar41 / 12.92;
              }
              else {
                fVar41 = powf((fVar41 + 0.055) / 1.055,2.4);
              }
              if (fVar42 <= 0.04045) {
                fVar42 = fVar42 / 12.92;
              }
              else {
                fVar42 = powf((fVar42 + 0.055) / 1.055,2.4);
              }
              if (fVar43 <= 0.04045) {
                fVar43 = fVar43 / 12.92;
              }
              else {
                fVar43 = powf((fVar43 + 0.055) / 1.055,2.4);
              }
              plVar24 = *(longlong **)(*param_11 + 0x30);
              plVar36 = (longlong *)(*param_11 + 0x18);
              if (plVar24 != (longlong *)0x0) {
                plVar36 = plVar24;
              }
              lVar25 = *plVar36;
              lVar34 = (longlong)((int)plVar36[2] * iVar16) * 0x10;
              *(float *)(lVar25 + lVar34) = fVar41;
              *(float *)(lVar25 + 4 + lVar34) = fVar42;
              *(float *)(lVar25 + 8 + lVar34) = fVar43;
              *(undefined4 *)(lVar25 + 0xc + lVar34) = uVar1;
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 != 3);
          local_2a8 = 0.0;
          uStack_2a0 = 0;
          lVar20 = *(longlong *)(local_310 + 0x1f8);
          uVar1 = *(undefined4 *)(local_310 + 0x200);
          lVar25 = *(longlong *)(*(longlong *)(param_14 + 0x78) + 0x80);
          if (lVar25 == 0) {
            lVar25 = *(longlong *)(param_14 + 0x78);
          }
          uVar17 = FUN_146f70732(lVar25);
          lStack_100 = CONCAT44(lStack_100._4_4_,uVar1);
          local_318 = &local_2a8;
          local_108 = lVar20;
          FUN_146f70e56(param_14,uVar17,local_2d8,&local_108);
          if ((longlong)(int)uStack_2a0 != 0) {
            lVar20 = 0;
            do {
              plVar24 = *(longlong **)(*param_12 + 0x30);
              plVar36 = (longlong *)(*param_12 + 0x18);
              if (plVar24 != (longlong *)0x0) {
                plVar36 = plVar24;
              }
              *(undefined1 *)
               (*plVar36 + (longlong)((int)plVar36[2] * *(int *)((longlong)local_2a8 + lVar20))) = 0
              ;
              lVar20 = lVar20 + 4;
            } while ((longlong)(int)uStack_2a0 * 4 != lVar20);
          }
          plVar36 = local_300;
          if (local_2a8 != 0.0) {
            FUN_1400020a8();
            plVar36 = local_300;
          }
        }
        iVar32 = iVar32 + 1;
        plVar24 = (longlong *)((ulonglong)plVar36 & 0xffffffff);
        lVar25 = local_310;
      } while (iVar32 != (int)local_2e0);
      goto LAB_149311cb3;
    }
  }
  plVar36 = (longlong *)0x0;
LAB_149311cb3:
  if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar36 & 0xffffffffffffff01;
}



// FUNCTION 149312288 FUN_149312288 body=71 status=ok
// SIG undefined FUN_149312288(void)

undefined8 FUN_149312288(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar4;
  longlong lVar2;
  undefined7 uVar3;
  
  if (param_2 == 1) {
    if ((int)param_1[1] < 5) {
      return 0;
    }
    lVar2 = *param_1;
    if (*(char *)(lVar2 + 0x40) != '\x04') {
      return 0;
    }
    lVar4 = *(longlong *)(lVar2 + 0x48);
  }
  else {
    if (((param_2 != 0) || ((int)param_1[1] < 4)) ||
       (lVar2 = *param_1, *(char *)(lVar2 + 0x30) != '\x03')) {
      return 0;
    }
    lVar4 = *(longlong *)(lVar2 + 0x38);
  }
  uVar3 = (undefined7)((ulonglong)lVar2 >> 8);
  uVar1 = CONCAT71(uVar3,1);
  if (*(longlong *)(lVar4 + 0x98) == 0) {
    uVar1 = CONCAT71(uVar3,*(undefined1 *)(lVar4 + 0x18));
  }
  return uVar1;
}



// FUNCTION 1493122d0 FUN_1493122d0 body=166 status=ok
// SIG undefined FUN_1493122d0(void)

ulonglong FUN_1493122d0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_38 [46];
  undefined1 local_a;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x18) - 5U < 2) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    if ((*(longlong *)(lVar2 + 0x98) == 0) && (*(char *)(lVar2 + 0x18) != '\x01')) {
      local_9 = 0;
      lVar2 = FUN_14931afa2();
    }
    uVar1 = (ulonglong)(*(int *)(lVar2 + 4) - 2);
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x18) == 4) {
      lVar2 = *(longlong *)(param_1 + 0x90);
      if ((*(longlong *)(lVar2 + 0x98) == 0) && (*(char *)(lVar2 + 0x18) != '\x01')) {
        local_a = 0;
        lVar2 = FUN_14931afa2();
      }
      uVar1 = (ulonglong)*(uint *)(lVar2 + 4) / 3;
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149312378 FUN_149312378 body=412 status=ok
// SIG undefined FUN_149312378(void)

void FUN_149312378(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x18) == 4) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x98) != 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x90) + 0x18) == '\x01')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
    iVar4 = FUN_1493122d0(param_1);
    iVar2 = iVar4 * 3;
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      FUN_14480809c(param_2,iVar2);
    }
    if (iVar4 != 0) {
      iVar4 = 0;
      do {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1447808da(param_2,iVar1);
        }
        *(int *)(*param_2 + (longlong)iVar1 * 4) = iVar4;
        iVar4 = iVar4 + 1;
      } while (iVar2 + (uint)(iVar2 == 0) != iVar4);
    }
  }
  else {
    iVar2 = FUN_1493122d0(param_1);
    iVar2 = iVar2 * 3;
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      FUN_14480809c(param_2);
    }
    iVar2 = FUN_1493122d0(param_1);
    if (iVar2 != 0) {
      uVar5 = 0;
      do {
        FUN_14931b3a8(param_1,&local_44,uVar5);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1447808da(param_2,iVar2);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = local_44;
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1447808da(param_2,iVar2);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = local_40;
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1447808da(param_2,iVar2);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = local_3c;
        uVar5 = uVar5 + 1;
        uVar3 = FUN_1493122d0(param_1);
      } while (uVar5 < uVar3);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14931252e FUN_14931252e body=307 status=ok
// SIG undefined FUN_14931252e(void)

void FUN_14931252e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined7 uStack_97;
  double local_90;
  double local_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = 2;
  lVar3 = FUN_14931afa2();
  iVar4 = *(int *)(lVar3 + 4);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
    FUN_14499148c(param_2);
    iVar4 = *(int *)(lVar3 + 4);
  }
  if (iVar4 != 0) {
    uVar5 = 0;
    do {
      FUN_14931806a(lVar3,&local_98,uVar5);
      fVar7 = (float)local_80;
      fVar8 = (float)local_90;
      fVar9 = (float)local_88;
      dVar2 = (double)CONCAT71(uStack_97,local_98);
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1449e2712(param_2,iVar4);
      }
      lVar1 = *param_2;
      lVar6 = (longlong)iVar4 * 0x10;
      *(float *)(lVar1 + lVar6) = (float)dVar2;
      *(float *)(lVar1 + 4 + lVar6) = fVar9;
      *(float *)(lVar1 + 8 + lVar6) = fVar8;
      *(float *)(lVar1 + 0xc + lVar6) = fVar7;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(lVar3 + 4));
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149312664 FUN_149312664 body=310 status=ok
// SIG undefined FUN_149312664(void)

void FUN_149312664(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined7 uStack_87;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 5;
  lVar5 = FUN_14931afa2();
  if (*(int *)(lVar5 + 8) == 3) {
    iVar1 = *(int *)(lVar5 + 4);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
      FUN_14499148c(param_2,iVar1);
    }
    if (iVar1 != 0) {
      iVar6 = 0;
      do {
        FUN_149317fec(lVar5,&local_88,iVar6);
        fVar8 = (float)local_78;
        fVar9 = (float)local_80;
        dVar4 = (double)CONCAT71(uStack_87,local_88);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1449e2712(param_2,iVar2);
        }
        lVar3 = *param_2;
        lVar7 = (longlong)iVar2 * 0x10;
        *(float *)(lVar3 + lVar7) = (float)dVar4;
        *(float *)(lVar3 + 4 + lVar7) = fVar9;
        *(float *)(lVar3 + 8 + lVar7) = fVar8;
        *(undefined4 *)(lVar3 + 0xc + lVar7) = 0x3f800000;
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
  }
  else if (*(int *)(lVar5 + 8) == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_a8);
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493127c4 FUN_1493127c4 body=96 status=ok
// SIG undefined FUN_1493127c4(void)

void FUN_1493127c4(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [38];
  undefined1 local_12;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 == 1) {
    local_12 = 4;
  }
  else {
    if (param_2 != 0) goto LAB_1493127e4;
    local_11 = 3;
  }
  uVar1 = FUN_14931afa2();
  FUN_14931877a(uVar1,param_3);
LAB_1493127e4:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149312826 FUN_149312826 body=48 status=ok
// SIG undefined FUN_149312826(void)

undefined8 * FUN_149312826(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x210,0x10);
  FUN_14930ebc0(uVar1);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 149312856 FUN_149312856 body=40 status=ok
// SIG undefined FUN_149312856(void)

void FUN_149312856(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  FUN_149327286(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 14931287e FUN_14931287e body=8 status=ok
// SIG undefined FUN_14931287e(void)

void FUN_14931287e(undefined8 *param_1)

{
  FUN_14930f5e0(*param_1);
  return;
}



// FUNCTION 149312886 FUN_149312886 body=9 status=ok
// SIG undefined FUN_149312886(void)

void FUN_149312886(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 149312890 FUN_149312890 body=9 status=ok
// SIG undefined FUN_149312890(void)

longlong FUN_149312890(longlong *param_1)

{
  return *param_1 + 0xb8;
}



// FUNCTION 149312899 FUN_149312899 body=384 status=ok
// SIG undefined FUN_149312899(void)

undefined8 FUN_149312899(longlong param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == 2) {
    lVar3 = *(longlong *)(param_1 + 0xc0);
    uVar1 = *(longlong *)(param_1 + 200) - lVar3;
    uVar2 = CONCAT71((uint7)(uVar1 >> 10),1);
    if ((int)(uVar1 >> 2) * -0x55555555 != 0) {
      lVar4 = 2;
      uVar1 = 0;
      do {
        *(undefined1 *)(param_3 + -2 + lVar4) = *(undefined1 *)(lVar3 + -8 + lVar4 * 4);
        *(undefined1 *)(param_3 + -1 + lVar4) = *(undefined1 *)(lVar3 + -4 + lVar4 * 4);
        *(undefined1 *)(param_3 + lVar4) = *(undefined1 *)(lVar3 + lVar4 * 4);
        uVar1 = uVar1 + 1;
        lVar3 = *(longlong *)(param_1 + 0xc0);
        lVar4 = lVar4 + 3;
      } while (uVar1 < (uint)((int)((ulonglong)(*(longlong *)(param_1 + 200) - lVar3) >> 2) *
                             -0x55555555));
    }
  }
  else if (param_2 == 4) {
    lVar3 = *(longlong *)(param_1 + 0xc0);
    uVar1 = *(longlong *)(param_1 + 200) - lVar3;
    uVar2 = CONCAT71((uint7)(uVar1 >> 10),1);
    if ((int)(uVar1 >> 2) * -0x55555555 != 0) {
      lVar4 = 4;
      uVar1 = 0;
      do {
        *(undefined2 *)(param_3 + -4 + lVar4) = *(undefined2 *)(lVar3 + -8 + lVar4 * 2);
        *(undefined2 *)(param_3 + -2 + lVar4) = *(undefined2 *)(lVar3 + -4 + lVar4 * 2);
        *(undefined2 *)(param_3 + lVar4) = *(undefined2 *)(lVar3 + lVar4 * 2);
        uVar1 = uVar1 + 1;
        lVar3 = *(longlong *)(param_1 + 0xc0);
        lVar4 = lVar4 + 6;
      } while (uVar1 < (uint)((int)((ulonglong)(*(longlong *)(param_1 + 200) - lVar3) >> 2) *
                             -0x55555555));
    }
  }
  else if (param_2 == 5) {
    lVar3 = *(longlong *)(param_1 + 0xc0);
    uVar1 = *(longlong *)(param_1 + 200) - lVar3;
    uVar2 = CONCAT71((uint7)(uVar1 >> 10),1);
    if ((int)(uVar1 >> 2) * -0x55555555 != 0) {
      lVar4 = 8;
      uVar1 = 0;
      do {
        *(undefined4 *)(param_3 + -8 + lVar4) = *(undefined4 *)(lVar3 + -8 + lVar4);
        *(undefined4 *)(param_3 + -4 + lVar4) = *(undefined4 *)(lVar3 + -4 + lVar4);
        *(undefined4 *)(param_3 + lVar4) = *(undefined4 *)(lVar3 + lVar4);
        uVar1 = uVar1 + 1;
        lVar3 = *(longlong *)(param_1 + 0xc0);
        lVar4 = lVar4 + 0xc;
      } while (uVar1 < (uint)((int)((ulonglong)(*(longlong *)(param_1 + 200) - lVar3) >> 2) *
                             -0x55555555));
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 149312a19 FUN_149312a19 body=193 status=ok
// SIG undefined FUN_149312a19(void)

undefined8
FUN_149312a19(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  switch(param_1) {
  case 1:
    uVar1 = FUN_149312ada(param_2,param_3,param_4,param_5,param_6);
    break;
  case 2:
    uVar1 = FUN_149312bda(param_2,param_3,param_4,param_5,param_6);
    break;
  case 3:
    uVar1 = FUN_149312cd9(param_2,param_3,param_4,param_5,param_6);
    break;
  case 4:
    uVar1 = FUN_149312dd8(param_2,param_3,param_4,param_5,param_6);
    break;
  case 5:
    uVar1 = FUN_149312ed7(param_2,param_3,param_4,param_5,param_6);
    break;
  case 6:
    uVar1 = FUN_149312fd6(param_2,param_3,param_4,param_5,param_6);
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 149312ada FUN_149312ada body=254 status=ok
// SIG undefined FUN_149312ada(void)

ulonglong FUN_149312ada(longlong param_1,uint param_2,ulonglong param_3,int param_4,void *param_5)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_4);
  }
  if (param_4 != 0) {
    FUN_146d9a348(&local_58,param_4);
  }
  FUN_1493273a2(&local_58,param_4);
  if (param_2 == 0) {
    uVar3 = CONCAT71((uint7)(param_3 >> 8) & 0xffffff,1);
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    do {
      if (*(char *)(param_1 + 100) == '\x01') {
        uVar2 = uVar4 & 0xffffffff;
      }
      else {
        uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x48) + uVar4 * 4);
      }
      cVar1 = FUN_1493273cc(param_1,uVar2,param_4,local_58);
      if (cVar1 == '\0') break;
      memcpy(param_5,local_58,param_3 & 0xffffffff);
      uVar4 = uVar4 + 1;
      uVar3 = (ulonglong)(param_2 <= uVar4);
      param_5 = (void *)((longlong)param_5 + (param_3 & 0xffffffff));
    } while (param_2 != uVar4);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149312bda FUN_149312bda body=253 status=ok
// SIG undefined FUN_149312bda(void)

ulonglong FUN_149312bda(longlong param_1,uint param_2,ulonglong param_3,int param_4,void *param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_4);
  }
  if (param_4 != 0) {
    FUN_144893a1c(&local_58,param_4);
  }
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  FUN_140393c76(&local_58,param_4,1);
  if (param_2 != 0) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      if (*(char *)(param_1 + 100) == '\x01') {
        uVar2 = uVar4 & 0xffffffff;
      }
      else {
        uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x48) + uVar4 * 4);
      }
      cVar1 = FUN_149327d0c(param_1,uVar2,param_4,local_58);
      if (cVar1 == '\0') break;
      memcpy(param_5,local_58,param_3 & 0xffffffff);
      uVar4 = uVar4 + 1;
      uVar3 = (ulonglong)(param_2 <= uVar4);
      param_5 = (void *)((longlong)param_5 + (param_3 & 0xffffffff));
    } while (param_2 != uVar4);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149312cd9 FUN_149312cd9 body=253 status=ok
// SIG undefined FUN_149312cd9(void)

ulonglong FUN_149312cd9(longlong param_1,uint param_2,ulonglong param_3,int param_4,void *param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_4);
  }
  if (param_4 != 0) {
    FUN_140ca8596(&local_58,param_4);
  }
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  FUN_147456a36(&local_58,param_4,1);
  if (param_2 != 0) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      if (*(char *)(param_1 + 100) == '\x01') {
        uVar2 = uVar4 & 0xffffffff;
      }
      else {
        uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x48) + uVar4 * 4);
      }
      cVar1 = FUN_149328632(param_1,uVar2,param_4,local_58);
      if (cVar1 == '\0') break;
      memcpy(param_5,local_58,param_3 & 0xffffffff);
      uVar4 = uVar4 + 1;
      uVar3 = (ulonglong)(param_2 <= uVar4);
      param_5 = (void *)((longlong)param_5 + (param_3 & 0xffffffff));
    } while (param_2 != uVar4);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149312dd8 FUN_149312dd8 body=253 status=ok
// SIG undefined FUN_149312dd8(void)

ulonglong FUN_149312dd8(longlong param_1,uint param_2,ulonglong param_3,int param_4,void *param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_4);
  }
  if (param_4 != 0) {
    FUN_1448759c8(&local_58,param_4);
  }
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  FUN_14008ec20(&local_58,param_4,1);
  if (param_2 != 0) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      if (*(char *)(param_1 + 100) == '\x01') {
        uVar2 = uVar4 & 0xffffffff;
      }
      else {
        uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x48) + uVar4 * 4);
      }
      cVar1 = FUN_149328f26(param_1,uVar2,param_4,local_58);
      if (cVar1 == '\0') break;
      memcpy(param_5,local_58,param_3 & 0xffffffff);
      uVar4 = uVar4 + 1;
      uVar3 = (ulonglong)(param_2 <= uVar4);
      param_5 = (void *)((longlong)param_5 + (param_3 & 0xffffffff));
    } while (param_2 != uVar4);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149312ed7 FUN_149312ed7 body=253 status=ok
// SIG undefined FUN_149312ed7(void)

ulonglong FUN_149312ed7(longlong param_1,uint param_2,ulonglong param_3,int param_4,void *param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_4);
  }
  if (param_4 != 0) {
    FUN_14480809c(&local_58,param_4);
  }
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  FUN_14017c08a(&local_58,param_4,1);
  if (param_2 != 0) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      if (*(char *)(param_1 + 100) == '\x01') {
        uVar2 = uVar4 & 0xffffffff;
      }
      else {
        uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x48) + uVar4 * 4);
      }
      cVar1 = FUN_14932983a(param_1,uVar2,param_4,local_58);
      if (cVar1 == '\0') break;
      memcpy(param_5,local_58,param_3 & 0xffffffff);
      uVar4 = uVar4 + 1;
      uVar3 = (ulonglong)(param_2 <= uVar4);
      param_5 = (void *)((longlong)param_5 + (param_3 & 0xffffffff));
    } while (param_2 != uVar4);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149312fd6 FUN_149312fd6 body=253 status=ok
// SIG undefined FUN_149312fd6(void)

ulonglong FUN_149312fd6(longlong param_1,uint param_2,ulonglong param_3,int param_4,void *param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_4);
  }
  if (param_4 != 0) {
    FUN_14482f6fa(&local_58,param_4);
  }
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  FUN_144a12820(&local_58,param_4,1);
  if (param_2 != 0) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      if (*(char *)(param_1 + 100) == '\x01') {
        uVar2 = uVar4 & 0xffffffff;
      }
      else {
        uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x48) + uVar4 * 4);
      }
      cVar1 = FUN_14932a054(param_1,uVar2,param_4,local_58);
      if (cVar1 == '\0') break;
      memcpy(param_5,local_58,param_3 & 0xffffffff);
      uVar4 = uVar4 + 1;
      uVar3 = (ulonglong)(param_2 <= uVar4);
      param_5 = (void *)((longlong)param_5 + (param_3 & 0xffffffff));
    } while (param_2 != uVar4);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493130d6 FUN_1493130d6 body=1075 status=ok
// SIG undefined FUN_1493130d6(void)

void FUN_1493130d6(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  undefined4 local_b8;
  wchar_t *local_b0;
  undefined4 local_a8;
  wchar_t *local_a0;
  undefined4 local_98;
  wchar_t *local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 local_6c [4];
  longlong local_68;
  longlong *local_60;
  wchar_t *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1444c1af1(&local_68);
  if (local_68 != 0) {
    local_c8 = param_2;
    FUN_1444c1b8d(&local_58,&local_68);
    pwVar7 = local_58;
    if (local_58 != (wchar_t *)0x0) {
      local_80 = 0xd;
      FUN_14932a866(*(longlong *)(param_1 + 8) + 0x120,local_6c);
      FUN_140056680(&local_80,L"lights");
      iVar9 = FUN_14931350b(pwVar7,&local_80);
      if (CONCAT44(uStack_7c,local_80) != 0) {
        FUN_1400020a8();
      }
      if (iVar9 != 0) {
        if (iVar9 < 0) goto LAB_149313503;
        if (*(int *)(*(longlong *)(param_1 + 8) + 0x8c) < iVar9) {
          FUN_14932a9e4(*(longlong *)(param_1 + 8) + 0x80,iVar9);
        }
        local_90 = L"lights";
        local_88 = 6;
        plVar11 = (longlong *)FUN_14571608c(pwVar7);
        lVar6 = plVar11[1];
        if ((longlong)(int)lVar6 != 0) {
          lVar4 = *plVar11;
          lVar14 = 0;
          do {
            puVar10 = (undefined8 *)(**(code **)**(undefined8 **)(lVar4 + lVar14))();
            FUN_14931359a(param_1,*puVar10);
            lVar14 = lVar14 + 0x10;
          } while ((longlong)(int)lVar6 * 0x10 != lVar14);
        }
      }
    }
    plVar11 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_50 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    local_58 = L"KHR_materials_variants";
    plStack_50 = (longlong *)CONCAT44(plStack_50._4_4_,0x16);
    cVar8 = FUN_146843260(local_68,&local_58,6);
    if (cVar8 != '\0') {
      local_58 = (wchar_t *)CONCAT44(local_58._4_4_,5);
      FUN_14932a866(*(longlong *)(param_1 + 8) + 0x120,&local_80);
      local_a0 = L"KHR_materials_variants";
      local_98 = 0x16;
      puVar10 = (undefined8 *)FUN_14047df14(local_68);
      uVar3 = *puVar10;
      local_d0 = (longlong *)puVar10[1];
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
        UNLOCK();
      }
      FUN_140056680(&local_58,L"variants");
      iVar9 = FUN_14931350b(uVar3,&local_58);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (iVar9 != 0) {
        if (iVar9 < 0) {
LAB_149313503:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar9);
        }
        if (*(int *)(*(longlong *)(param_1 + 8) + 0xfc) < iVar9) {
          FUN_1408be2c4(*(longlong *)(param_1 + 8) + 0xf0,iVar9);
        }
        local_b0 = L"variants";
        local_a8 = 8;
        plVar11 = (longlong *)FUN_14571608c(uVar3);
        lVar6 = plVar11[1];
        if ((longlong)(int)lVar6 != 0) {
          lVar4 = *plVar11;
          lVar14 = 0;
          do {
            puVar10 = (undefined8 *)(**(code **)**(undefined8 **)(lVar4 + lVar14))();
            local_c0 = L"name";
            local_b8 = 4;
            FUN_14047df9c(*puVar10,&local_58,&local_c0);
            lVar5 = *(longlong *)(param_1 + 8);
            iVar9 = *(int *)(lVar5 + 0xf8);
            *(uint *)(lVar5 + 0xf8) = iVar9 + 1U;
            if (*(uint *)(lVar5 + 0xfc) < iVar9 + 1U) {
              FUN_1447a1bd6((longlong *)(lVar5 + 0xf0),iVar9);
            }
            pwVar7 = local_58;
            lVar5 = *(longlong *)(lVar5 + 0xf0);
            lVar12 = (longlong)iVar9 * 0x10;
            puVar10 = (undefined8 *)(lVar5 + lVar12);
            *(undefined8 *)(lVar5 + lVar12) = 0;
            lVar13 = (longlong)(int)plStack_50;
            *(int *)(lVar5 + 8 + lVar12) = (int)plStack_50;
            if (lVar13 == 0) {
              *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar10,(ulonglong)plStack_50 & 0xffffffff,0);
              memcpy((void *)*puVar10,pwVar7,lVar13 * 2);
            }
            if (local_58 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            lVar14 = lVar14 + 0x10;
          } while ((longlong)(int)lVar6 * 0x10 != lVar14);
        }
      }
      plVar11 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_d0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
    local_58 = (wchar_t *)0x0;
    plStack_50 = (longlong *)0x0;
    FUN_140b7fa3a(&local_58,&DAT_14cc0c420);
    FUN_140b7fa3a(&local_58,&DAT_14cc0c430);
    FUN_149313b5a(param_1,local_c8,&local_58);
    FUN_1447a1747(local_58,(ulonglong)plStack_50 & 0xffffffff);
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_60 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14931350b FUN_14931350b body=141 status=ok
// SIG undefined FUN_14931350b(void)

undefined4 FUN_14931350b(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = 0;
  local_28 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_28 = 0;
  }
  local_30 = *param_2;
  cVar1 = FUN_146843260(param_1,&local_30,5);
  if (cVar1 != '\0') {
    local_40 = *param_2;
    local_38 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_38 = 0;
    }
    lVar2 = FUN_14571608c(param_1);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14931359a FUN_14931359a body=1470 status=ok
// SIG undefined FUN_14931359a(void)

void FUN_14931359a(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ushort uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined1 auStack_138 [40];
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  undefined2 *local_c8;
  undefined4 local_c0;
  undefined2 *local_b8;
  int local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  longlong *local_80;
  undefined8 *local_78;
  ulonglong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar15 = param_1[1];
  iVar4 = *(int *)(lVar15 + 0x88);
  if ((longlong)*(int *)(lVar15 + 0x68) != 0) {
    lVar14 = *(longlong *)(lVar15 + 0x60);
    lVar9 = (longlong)*(int *)(lVar15 + 0x68) * 0x220;
    do {
      if (*(int *)(lVar14 + 0x90) == iVar4) goto LAB_1493135e0;
      lVar14 = lVar14 + 0x220;
      lVar9 = lVar9 + -0x220;
    } while (lVar9 != 0);
  }
  lVar14 = 0;
LAB_1493135e0:
  *(uint *)(lVar15 + 0x88) = iVar4 + 1U;
  if (*(uint *)(lVar15 + 0x8c) < iVar4 + 1U) {
    FUN_14932ab32((longlong *)(lVar15 + 0x80),iVar4);
  }
  lVar15 = *(longlong *)(lVar15 + 0x80);
  lVar9 = (longlong)iVar4 * 0x58;
  lVar16 = lVar15 + lVar9;
  plVar3 = (longlong *)(lVar15 + 8 + lVar9);
  plVar3[-1] = lVar14;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[3] = 0x3ff0000000000000;
  plVar3[4] = 0x3ff0000000000000;
  plVar3[5] = 0x3ff0000000000000;
  *(undefined4 *)(plVar3 + 6) = 0x3f800000;
  *(undefined4 *)((longlong)plVar3 + 0x34) = 0x60ad78ec;
  *(undefined4 *)(plVar3 + 7) = 0;
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0x3f490fdb;
  plVar3[8] = 0;
  plVar3[9] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1493172de(&local_68,param_2,L"name");
  if (plVar3 != &local_68) {
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
    *(wchar_t **)(lVar16 + 8) = local_68;
    local_68 = (wchar_t *)0x0;
    *(undefined4 *)(lVar16 + 0x10) = (undefined4)uStack_60;
    *(undefined4 *)(lVar16 + 0x14) = uStack_60._4_4_;
    uStack_60 = 0;
  }
  lVar15 = lVar15 + lVar9;
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0x3ff0000000000000;
  local_98 = 0x3ff0000000000000;
  FUN_149315838(&local_68,param_2,L"color");
  *(longlong **)(lVar15 + 0x30) = local_58[0];
  *(undefined4 *)(lVar15 + 0x20) = (undefined4)local_68;
  *(undefined4 *)(lVar15 + 0x24) = local_68._4_4_;
  *(undefined4 *)(lVar15 + 0x28) = (undefined4)uStack_60;
  *(undefined4 *)(lVar15 + 0x2c) = uStack_60._4_4_;
  uVar17 = FUN_149315951(param_2,L"intensity",0x3f800000);
  *(undefined4 *)(lVar16 + 0x38) = uVar17;
  uVar17 = FUN_149315951(param_2,L"range",*(undefined4 *)(lVar16 + 0x3c));
  *(undefined4 *)(lVar16 + 0x3c) = uVar17;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  FUN_1493172de(&local_b8,param_2,L"type",&local_68);
  puVar6 = local_b8;
  if (local_b0 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  lVar15 = 0;
  while( true ) {
    uVar10 = *(ushort *)((longlong)puVar6 + lVar15);
    uVar11 = (ulonglong)uVar10;
    uVar13 = *(ushort *)((longlong)&DAT_14bc30d2e + lVar15);
    if (uVar10 != uVar13) break;
    if (uVar10 == 0) goto LAB_149313a72;
LAB_1493137d6:
    lVar15 = lVar15 + 2;
  }
  if ((uVar13 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    uVar12 = (ulonglong)uVar13;
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar12]) goto LAB_1493137d6;
  }
  if (uVar10 != uVar13) {
    lVar15 = 0;
    goto LAB_14931380f;
  }
LAB_149313a72:
  *(undefined4 *)(lVar16 + 0x18) = 2;
  local_68 = &DAT_14bc30d2e;
  uStack_60 = CONCAT44(uStack_60._4_4_,4);
  cVar5 = FUN_146843260(param_2,&local_68,6);
  if (cVar5 != '\0') {
    local_c8 = &DAT_14bc30d2e;
    local_c0 = 4;
    puVar7 = (undefined8 *)FUN_14047df14(param_2);
    uVar17 = FUN_149315951(*puVar7,L"innerConeAngle",0);
    *(undefined4 *)(lVar16 + 0x40) = uVar17;
    uVar17 = FUN_149315951(*puVar7,L"outerConeAngle",*(undefined4 *)(lVar16 + 0x44));
    *(undefined4 *)(lVar16 + 0x44) = uVar17;
  }
  goto LAB_149313a9e;
LAB_14931380f:
  uVar10 = *(ushort *)((longlong)puVar6 + lVar15);
  uVar11 = (ulonglong)uVar10;
  uVar13 = *(ushort *)((longlong)L"point" + lVar15);
  if (uVar10 == uVar13) {
    if (uVar10 == 0) goto LAB_149313b30;
LAB_149313828:
    lVar15 = lVar15 + 2;
    goto LAB_14931380f;
  }
  if ((uVar13 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    uVar12 = (ulonglong)uVar13;
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar12]) goto LAB_149313828;
  }
  if (uVar10 != uVar13) {
    lVar15 = 0;
    goto LAB_149313861;
  }
LAB_149313b30:
  *(undefined4 *)(lVar16 + 0x18) = 1;
  goto LAB_149313a9e;
LAB_149313861:
  uVar10 = *(ushort *)((longlong)puVar6 + lVar15);
  uVar11 = (ulonglong)uVar10;
  uVar13 = *(ushort *)((longlong)L"directional" + lVar15);
  if (uVar10 == uVar13) {
    if (uVar10 == 0) goto LAB_149313b3d;
LAB_14931387a:
    lVar15 = lVar15 + 2;
    goto LAB_149313861;
  }
  if ((uVar13 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    uVar12 = (ulonglong)uVar13;
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar12]) goto LAB_14931387a;
  }
  if (uVar10 != uVar13) {
    param_1 = (longlong *)*param_1;
    FUN_140009b9a(local_e8,plVar3);
    local_68 = L"UnspecifiedLightType";
    uStack_60._0_4_ = 0x14;
    FUN_1446e940c(local_10c,&local_68);
    local_68 = L"InterchangeGLTFExtensionHandler";
    uStack_60 = CONCAT44(uStack_60._4_4_,0x1f);
    FUN_1446e940c(local_110,&local_68);
    FUN_140208bae(local_108,local_110,local_10c,L"Light has no type specified: %s");
    FUN_14023409e(&local_f8,local_108,1);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(local_58,local_e8);
    local_70 = &local_48;
    local_78 = &local_68;
    FUN_14010d304(&local_a8);
    local_88 = local_f8;
    local_80 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d8,&local_88,&local_a8);
    FUN_14007f2db(local_a8,uStack_a0 & 0xffffffff);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_f0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f0 + 0x10))(local_f0);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    uVar8 = (uint)DAT_14c86aa68;
    iVar4 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
      FUN_149326c66(param_1,iVar4);
    }
    puVar2 = (uint *)(*param_1 + (longlong)iVar4 * 0x18);
    *puVar2 = uVar8 ^ 1;
    FUN_14023423e(puVar2 + 2,local_d8);
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_108[0] != (longlong *)0x0) {
      (**(code **)(*local_108[0] + 0x10))();
    }
    goto LAB_149313a9e;
  }
LAB_149313b3d:
  *(undefined4 *)(lVar16 + 0x18) = 0;
LAB_149313a9e:
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149313b5a FUN_149313b5a body=992 status=ok
// SIG undefined FUN_149313b5a(void)

void FUN_149313b5a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 auStack_158 [36];
  int local_134;
  wchar_t *local_130;
  wchar_t *local_128;
  longlong *local_120;
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  longlong *local_f0 [2];
  longlong *local_e0 [2];
  wchar_t *local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 *local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_d0 = L"extensions";
  local_c8 = 10;
  local_120 = param_1;
  cVar5 = FUN_146843260(param_2,&local_d0,6);
  plVar7 = local_b8;
  if (cVar5 != '\0') {
    local_a8 = L"extensions";
    local_a0 = 10;
    plVar7 = (longlong *)FUN_14047df14(param_2);
    pwVar12 = (wchar_t *)*plVar7;
    pwVar11 = pwVar12 + 8;
    local_68 = (wchar_t *)0x100000000;
    local_58 = (longlong *)&DAT_ffffffff;
    uStack_50 = 0;
    uStack_60 = pwVar11;
    if (*(int *)(pwVar12 + 0x14) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar8 = *(int *)(pwVar12 + 0x14);
    }
    uStack_b0 = CONCAT44(uStack_4c,uStack_50);
    local_b8 = local_58;
    plVar7 = local_b8;
    local_c8 = (undefined4)local_68;
    uStack_c4 = local_68._4_4_;
    uStack_c0 = (undefined4)uStack_60;
    uStack_bc = uStack_60._4_4_;
    local_b8._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_d0 = pwVar12;
    if ((local_b8._4_4_ != iVar8) || (uStack_60 != pwVar11)) {
      iVar6 = local_b8._4_4_;
      local_134 = iVar8;
      local_130 = pwVar12;
      local_128 = pwVar11;
      local_b8 = plVar7;
      do {
        lVar10 = (longlong)iVar6 * 0x28 + *(longlong *)local_d0;
        iVar6 = FUN_144a075de(param_3,lVar10);
        if (iVar6 == -1) {
          plVar7 = (longlong *)*local_120;
          FUN_140009b9a(local_f0,lVar10);
          local_68 = L"UnsupportedExtension";
          uStack_60._0_4_ = 0x14;
          FUN_1446e940c(local_114,&local_68);
          local_68 = L"InterchangeGLTFExtensionHandler";
          uStack_60 = (wchar_t *)CONCAT44(uStack_60._4_4_,0x1f);
          FUN_1446e940c(local_118,&local_68);
          FUN_140208bae(local_110,local_118,local_114,L"Extension is not supported: {0}");
          FUN_14023409e(&local_100,local_110,1);
          local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
          FUN_14023423e(&local_58,local_f0);
          local_80 = &local_48;
          local_88 = &local_68;
          FUN_14010d304(&local_78,&local_88);
          local_98 = local_100;
          local_90 = local_f8;
          if (local_f8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_e0,&local_98,&local_78);
          FUN_14007f2db(local_78,local_70);
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          pwVar12 = local_130;
          if (local_58 != (longlong *)0x0) {
            (**(code **)(*local_58 + 0x10))();
          }
          plVar4 = local_f8;
          if (local_f8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_f8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_f8)(local_f8);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          if (local_f0[0] != (longlong *)0x0) {
            (**(code **)(*local_f0[0] + 0x10))();
          }
          uVar9 = (uint)DAT_14c86aa68;
          iVar8 = (int)plVar7[1];
          *(uint *)(plVar7 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)plVar7 + 0xc) < iVar8 + 1U) {
            FUN_149326c66(plVar7,iVar8);
          }
          puVar3 = (uint *)(*plVar7 + (longlong)iVar8 * 0x18);
          *puVar3 = uVar9 ^ 1;
          FUN_14023423e(puVar3 + 2,local_e0);
          if (local_e0[0] != (longlong *)0x0) {
            (**(code **)(*local_e0[0] + 0x10))();
          }
          pwVar11 = local_128;
          iVar8 = local_134;
          if (local_110[0] != (longlong *)0x0) {
            (**(code **)(*local_110[0] + 0x10))();
          }
        }
        local_b8 = (longlong *)CONCAT44(local_b8._4_4_,(uint)local_b8 & ~uStack_c4);
        FUN_1449c0562(&local_c8);
        iVar6 = local_b8._4_4_;
        plVar7 = local_b8;
      } while (local_d0 != pwVar12 ||
               ((wchar_t *)CONCAT44(uStack_bc,uStack_c0) != pwVar11 || local_b8._4_4_ != iVar8));
    }
  }
  local_b8 = plVar7;
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149313f3c FUN_149313f3c body=3966 status=ok
// SIG undefined FUN_149313f3c(void)

/* WARNING: Removing unreachable block (ram,0x000149314125) */

void FUN_149313f3c(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  double dVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar16;
  undefined8 *puVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  float fVar24;
  undefined4 uVar25;
  undefined1 auStack_288 [32];
  undefined4 *local_268;
  undefined8 local_260;
  undefined4 *local_258;
  undefined4 *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined4 *local_238;
  undefined4 *local_230;
  longlong local_228;
  undefined4 *local_220;
  longlong local_218;
  longlong local_210;
  undefined4 *local_208;
  undefined4 *local_200;
  longlong local_1f8;
  undefined4 *local_1f0;
  undefined4 *local_1e8;
  longlong local_1e0;
  undefined4 *local_1d8;
  undefined4 *local_1d0;
  longlong local_1c8;
  undefined4 *local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  undefined8 *local_1a8;
  undefined1 local_1a0 [4];
  undefined1 local_19c [4];
  longlong *local_198 [2];
  undefined8 local_188;
  longlong *local_180;
  longlong local_178 [2];
  longlong *local_168 [2];
  longlong *local_158 [2];
  longlong local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  int local_120;
  wchar_t *local_118;
  int local_110;
  undefined4 local_10c;
  wchar_t *local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  double local_b0;
  undefined1 local_a8 [8];
  ulonglong local_a0;
  int iVar15;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_c8 = L"extensions";
  uStack_c0 = (double)CONCAT44(uStack_c0._4_4_,10);
  cVar12 = FUN_146843260(param_2,&local_c8,6);
  if (cVar12 != '\0') {
    local_248 = param_2;
    local_1b0 = param_3;
    local_1a8 = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc0c450) && (FUN_144b3d300(&DAT_14cc0c450), DAT_14cc0c450 == -1)) {
      DAT_14cc0c440 = (undefined8 *)0x0;
      DAT_14cc0c448 = 0xc;
      FUN_14932aa48(&DAT_14cc0c440,0xc);
      puVar7 = DAT_14cc0c440;
      DAT_14cc0c440[4] = 0xa00000009;
      puVar7[5] = 0x1100000012;
      puVar7[2] = 0x600000004;
      puVar7[3] = 0x800000007;
      *puVar7 = 0x100000000;
      puVar7[1] = 0x300000002;
      atexit((_func_5014 *)&LAB_1444c1ce5);
      _Init_thread_footer(&DAT_14cc0c450);
    }
    local_f8 = 0;
    uStack_f0 = 0;
    if (DAT_14cc0c448 != 0) {
      lVar19 = 0;
      uVar22 = 0;
      pwVar18 = local_c8;
      dVar11 = uStack_c0;
      do {
        uStack_c0 = dVar11;
        local_c8 = pwVar18;
        uVar16 = FUN_1444c1a74(*(undefined4 *)((longlong)DAT_14cc0c440 + (lVar19 >> 0x1e)));
        FUN_140056680(&local_c8,uVar16);
        uVar10 = uStack_f0;
        lVar20 = (longlong)(int)uStack_f0;
        uVar13 = (int)uStack_f0 + 1;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar13);
        if (uStack_f0._4_4_ < uVar13) {
          FUN_1447a1bd6(&local_f8,uVar10 & 0xffffffff);
        }
        lVar20 = lVar20 * 0x10;
        *(undefined8 *)(local_f8 + lVar20) = 0;
        *(wchar_t **)(local_f8 + lVar20) = local_c8;
        local_c8 = (wchar_t *)0x0;
        pwVar18 = local_c8;
        *(undefined4 *)(local_f8 + 8 + lVar20) = (undefined4)uStack_c0;
        *(undefined4 *)(local_f8 + 0xc + lVar20) = uStack_c0._4_4_;
        uStack_c0 = 0.0;
        dVar11 = uStack_c0;
        uStack_c0 = 0.0;
        local_c8 = (wchar_t *)0x0;
        uVar22 = uVar22 + 1;
        lVar19 = lVar19 + 0x100000000;
      } while (uVar22 < (ulonglong)(longlong)DAT_14cc0c448);
    }
    local_108 = L"extensions";
    local_100 = 10;
    puVar17 = (undefined8 *)FUN_14047df14();
    puVar7 = local_1a8;
    lVar19 = local_1b0;
    if (0 < DAT_14cc0c448) {
      local_240 = *puVar17;
      local_1c0 = (undefined4 *)(local_1b0 + 0x2e4);
      local_1c8 = local_1b0 + 0x29c;
      local_1d0 = (undefined4 *)(local_1b0 + 0x2c4);
      local_258 = (undefined4 *)(local_1b0 + 600);
      local_250 = (undefined4 *)(local_1b0 + 0x274);
      local_1d8 = (undefined4 *)(local_1b0 + 0x1a0);
      local_1e0 = local_1b0 + 0x184;
      local_1e8 = (undefined4 *)(local_1b0 + 0x1b8);
      local_1f0 = (undefined4 *)(local_1b0 + 0x128);
      local_1f8 = local_1b0 + 0x140;
      local_200 = (undefined4 *)(local_1b0 + 0x160);
      local_208 = (undefined4 *)(local_1b0 + 0x10c);
      local_210 = local_1b0 + 0xac;
      local_218 = local_1b0 + 0xcc;
      local_220 = (undefined4 *)(local_1b0 + 0xec);
      local_228 = local_1b0 + 0x10;
      local_230 = (undefined4 *)(local_1b0 + 0x68);
      local_238 = (undefined4 *)(local_1b0 + 0x88);
      lVar20 = 8;
      lVar23 = 0;
      do {
        local_118 = (wchar_t *)0x0;
        local_110 = *(int *)(local_f8 + lVar20);
        lVar21 = (longlong)local_110;
        _Src = *(void **)(local_f8 + -8 + lVar20);
        if (lVar21 == 0) {
          local_10c = 0;
          iVar15 = 0;
        }
        else {
          FUN_1446dd670(&local_118,local_110,0);
          memcpy(local_118,_Src,lVar21 * 2);
          iVar15 = local_110;
        }
        iVar14 = iVar15 + -1;
        if (iVar15 == 0) {
          iVar14 = 0;
        }
        uStack_c0 = (double)CONCAT44(uStack_c0._4_4_,iVar14);
        local_c8 = local_118;
        cVar12 = FUN_146843260(local_240,&local_c8);
        if (cVar12 == '\0') goto LAB_149314a0e;
        local_128 = local_118;
        local_120 = local_110 + -1;
        if (local_110 == 0) {
          local_120 = 0;
        }
        puVar17 = (undefined8 *)FUN_14047df14(local_240,&local_128);
        uVar13 = *(uint *)((longlong)DAT_14cc0c440 + lVar23 * 4);
        if (0x12 < uVar13) {
switchD_1493143b5_caseD_5:
          local_1b8 = (longlong *)*puVar7;
          uVar16 = FUN_1444c1a74();
          FUN_140056680(local_178,uVar16);
          FUN_140233b1a(local_168,local_178);
          local_c8 = L"UnsupportedMaterialExtension";
          uStack_c0._0_4_ = 0x1c;
          FUN_1446e940c(local_19c,&local_c8);
          local_c8 = L"InterchangeGLTFExtensionHandler";
          uStack_c0 = (double)CONCAT44(uStack_c0._4_4_,0x1f);
          FUN_1446e940c(local_1a0,&local_c8);
          FUN_140208bae(local_198,local_1a0,local_19c,L"Material.Extension not supported: {0}");
          FUN_14023409e(&local_188,local_198,1);
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
          FUN_14023423e(&local_b8,local_168);
          local_d0 = local_a8;
          local_d8 = &local_c8;
          FUN_14010d304(&local_148,&local_d8);
          local_e8 = local_188;
          local_e0 = local_180;
          if (local_180 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_180 + 1) = (int)local_180[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_158,&local_e8);
          FUN_14007f2db(local_148,local_140 & 0xffffffff);
          if (local_148 != 0) {
            FUN_1400020a8();
          }
          plVar8 = local_1b8;
          if (local_b8 != (longlong *)0x0) {
            (**(code **)(*local_b8 + 0x10))();
          }
          plVar9 = local_180;
          if (local_180 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_180 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_180)(local_180);
              LOCK();
              piVar3 = (int *)((longlong)plVar9 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          if (local_168[0] != (longlong *)0x0) {
            (**(code **)(*local_168[0] + 0x10))();
          }
          uVar13 = (uint)DAT_14c86aa68;
          iVar15 = (int)plVar8[1];
          *(uint *)(plVar8 + 1) = iVar15 + 1U;
          if (*(uint *)((longlong)plVar8 + 0xc) < iVar15 + 1U) {
            FUN_149326c66(plVar8,iVar15);
          }
          puVar1 = (uint *)(*plVar8 + (longlong)iVar15 * 0x18);
          *puVar1 = uVar13 ^ 1;
          FUN_14023423e(puVar1 + 2,local_158);
          if (local_158[0] != (longlong *)0x0) {
            (**(code **)(*local_158[0] + 0x10))();
          }
          if (local_198[0] != (longlong *)0x0) {
            (**(code **)(*local_198[0] + 0x10))();
          }
          if (local_178[0] != 0) {
            FUN_1400020a8();
          }
          goto LAB_149314a0e;
        }
        uVar16 = *puVar17;
        switch(uVar13) {
        case 0:
          local_260 = *puVar7;
          local_268 = (undefined4 *)local_228;
          FUN_149314ebb(uVar16,L"diffuseTexture",0,puVar7[1] + 0xd0);
          local_148 = 0x3ff0000000000000;
          local_140 = 0x3ff0000000000000;
          local_138 = 0x3ff0000000000000;
          local_130 = 0x3ff0000000000000;
          FUN_1493156ee(&local_c8,uVar16,L"diffuseFactor",&local_148);
          *(float *)(lVar19 + 0x30) = (float)(double)local_c8;
          *(float *)(lVar19 + 0x34) = (float)uStack_c0;
          *(float *)(lVar19 + 0x38) = (float)(double)local_b8;
          *(float *)(lVar19 + 0x3c) = (float)local_b0;
          local_260 = *puVar7;
          local_268 = local_230;
          FUN_149314ebb(uVar16,L"specularGlossinessTexture",0,puVar7[1] + 0xd0);
          local_148 = 0x3ff0000000000000;
          local_140 = 0x3ff0000000000000;
          local_138 = 0x3ff0000000000000;
          FUN_149315838(&local_c8,uVar16,L"specularFactor",&local_148);
          *(longlong **)(local_238 + 4) = local_b8;
          *local_238 = (undefined4)local_c8;
          local_238[1] = local_c8._4_4_;
          local_238[2] = (undefined4)uStack_c0;
          local_238[3] = uStack_c0._4_4_;
          uVar25 = FUN_149315951(uVar16,L"glossinessFactor",0x3f800000);
          *(undefined4 *)(lVar19 + 0xa0) = uVar25;
          *(undefined4 *)(lVar19 + 0x40) = 1;
          lVar21 = puVar7[1] + 0x120;
          local_c8 = (wchar_t *)((ulonglong)local_c8 & 0xffffffff00000000);
          break;
        case 1:
          *(undefined1 *)(lVar19 + 0x290) = 1;
          lVar21 = puVar7[1] + 0x120;
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,1);
          break;
        case 2:
          *(undefined1 *)(lVar19 + 0x291) = 1;
          uVar25 = FUN_149315951(uVar16,L"clearcoatFactor",0);
          *(undefined4 *)(lVar19 + 0xa8) = uVar25;
          local_260 = *puVar7;
          local_268 = (undefined4 *)local_210;
          FUN_149314ebb(uVar16,L"clearcoatTexture",0,puVar7[1] + 0xd0);
          uVar25 = FUN_149315951(uVar16,L"clearcoatRoughnessFactor");
          *(undefined4 *)(lVar19 + 200) = uVar25;
          local_260 = *puVar7;
          local_268 = (undefined4 *)local_218;
          FUN_149314ebb(uVar16,L"clearcoatRoughnessTexture",0,puVar7[1] + 0xd0);
          local_260 = *puVar7;
          local_268 = local_220;
          uVar25 = FUN_149314ebb(uVar16,L"clearcoatNormalTexture",L"scale",puVar7[1] + 0xd0);
          *(undefined4 *)(lVar19 + 0xe8) = uVar25;
          lVar21 = puVar7[1] + 0x120;
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,2);
          break;
        case 3:
          *(undefined1 *)(lVar19 + 0x293) = 1;
          uVar25 = FUN_149315951(uVar16,L"transmissionFactor",0);
          *(undefined4 *)(lVar19 + 0x108) = uVar25;
          local_260 = *puVar7;
          local_268 = local_208;
          FUN_149314ebb(uVar16,L"transmissionTexture",0,puVar7[1] + 0xd0);
          lVar21 = puVar7[1] + 0x120;
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,3);
          break;
        case 4:
          *(undefined1 *)(lVar19 + 0x292) = 1;
          FUN_149315838(&local_c8,uVar16,L"sheenColorFactor",&DAT_14c8464e0);
          *(longlong **)(local_1f0 + 4) = local_b8;
          *local_1f0 = (undefined4)local_c8;
          local_1f0[1] = local_c8._4_4_;
          local_1f0[2] = (undefined4)uStack_c0;
          local_1f0[3] = uStack_c0._4_4_;
          local_260 = *puVar7;
          local_268 = (undefined4 *)local_1f8;
          FUN_149314ebb(uVar16,L"sheenColorTexture",0,puVar7[1] + 0xd0);
          uVar25 = FUN_149315951(uVar16,L"sheenRoughnessFactor",0);
          *(undefined4 *)(lVar19 + 0x15c) = uVar25;
          local_260 = *puVar7;
          local_268 = local_200;
          FUN_149314ebb(uVar16,L"sheenRoughnessTexture",0,puVar7[1] + 0xd0);
          lVar21 = puVar7[1] + 0x120;
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
          break;
        default:
          goto switchD_1493143b5_caseD_5;
        case 6:
          *(undefined1 *)(lVar19 + 0x294) = 1;
          uVar25 = FUN_149315951(uVar16,&DAT_14bc3072e,0x3f800000);
          *(undefined4 *)(lVar19 + 0x1d8) = uVar25;
          lVar21 = puVar7[1] + 0x120;
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,6);
          break;
        case 7:
          *(undefined1 *)(lVar19 + 0x295) = 1;
          uVar25 = FUN_149315951(uVar16,L"specularFactor",0x3f800000);
          *(undefined4 *)(lVar19 + 0x180) = uVar25;
          FUN_149315838(&local_c8,uVar16,L"specularColorFactor",&DAT_14c8464e0);
          *(longlong **)(local_1d8 + 4) = local_b8;
          *local_1d8 = (undefined4)local_c8;
          local_1d8[1] = local_c8._4_4_;
          local_1d8[2] = (undefined4)uStack_c0;
          local_1d8[3] = uStack_c0._4_4_;
          local_260 = *puVar7;
          local_268 = (undefined4 *)local_1e0;
          FUN_149314ebb(uVar16,L"specularTexture",0,puVar7[1] + 0xd0);
          local_260 = *puVar7;
          local_268 = local_1e8;
          FUN_149314ebb(uVar16,L"specularColorTexture",0,puVar7[1] + 0xd0);
          lVar21 = puVar7[1] + 0x120;
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,7);
          break;
        case 8:
          *(undefined1 *)(lVar19 + 0x296) = 1;
          uVar25 = FUN_149315951(uVar16,L"emissiveStrength",0x3f800000);
          *(undefined4 *)(lVar19 + 0x1dc) = uVar25;
          lVar21 = puVar7[1] + 0x120;
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,8);
          break;
        case 9:
          *(undefined1 *)(lVar19 + 0x2e0) = 1;
          uVar25 = FUN_149315951(uVar16,L"iridescenceFactor",0);
          *(undefined4 *)(lVar19 + 0x298) = uVar25;
          local_260 = *puVar7;
          local_268 = (undefined4 *)local_1c8;
          FUN_149314ebb(uVar16,L"iridescenceTexture",0,puVar7[1] + 0xd0);
          uVar25 = FUN_149315951(uVar16,L"iridescenceIor",0x3fa66666);
          *(undefined4 *)(lVar19 + 0x2b8) = uVar25;
          uVar25 = FUN_149315951(uVar16,L"iridescenceThicknessMinimum",0x42c80000);
          *(undefined4 *)(lVar19 + 700) = uVar25;
          uVar25 = FUN_149315951(uVar16,L"iridescenceThicknessMaximum");
          *(undefined4 *)(lVar19 + 0x2c0) = uVar25;
          local_260 = *puVar7;
          lVar21 = puVar7[1];
          local_268 = local_1d0;
          pwVar18 = L"iridescenceThicknessTexture";
          goto LAB_149314b72;
        case 10:
          *(undefined1 *)(lVar19 + 0x308) = 1;
          uVar25 = FUN_149315951(uVar16,L"anisotropyStrength",0);
          *(undefined4 *)(lVar19 + 0x300) = uVar25;
          uVar25 = FUN_149315951(uVar16,L"anisotropyRotation");
          *(undefined4 *)(lVar19 + 0x304) = uVar25;
          local_260 = *puVar7;
          lVar21 = puVar7[1];
          local_268 = local_1c0;
          pwVar18 = L"anisotropyTexture";
LAB_149314b72:
          FUN_149314ebb(uVar16,pwVar18,0,lVar21 + 0xd0);
          goto LAB_149314a0e;
        case 0x11:
          local_260 = *puVar7;
          local_268 = local_258;
          fVar24 = (float)FUN_149314ebb(uVar16,L"normalRoughnessMetallicTexture",0,puVar7[1] + 0xd0)
          ;
          if ((fVar24 == 0.0) && (!NAN(fVar24))) goto LAB_149314a0e;
          uVar25 = *local_258;
          uVar4 = local_258[1];
          uVar5 = local_258[2];
          uVar6 = local_258[3];
          uVar16 = *(undefined8 *)(local_258 + 5);
          *(undefined8 *)(local_250 + 3) = *(undefined8 *)(local_258 + 3);
          *(undefined8 *)(local_250 + 5) = uVar16;
          *local_250 = uVar25;
          local_250[1] = uVar4;
          local_250[2] = uVar5;
          local_250[3] = uVar6;
          *(undefined4 *)(lVar19 + 0x254) = 9;
          lVar21 = puVar7[1] + 0x120;
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,0x11);
          break;
        case 0x12:
          local_260 = *puVar7;
          local_268 = local_258;
          fVar24 = (float)FUN_149314ebb(uVar16,L"occlusionRoughnessMetallicTexture",0,
                                        puVar7[1] + 0xd0);
          uVar25 = 2;
          if ((fVar24 != 0.0) || (NAN(fVar24))) {
LAB_14931472e:
            *(undefined4 *)(lVar19 + 0x254) = uVar25;
          }
          else {
            local_260 = *puVar7;
            local_268 = local_258;
            fVar24 = (float)FUN_149314ebb(uVar16,L"roughnessMetallicOcclusionTexture",0,
                                          puVar7[1] + 0xd0);
            uVar25 = 4;
            if ((fVar24 != 0.0) || (NAN(fVar24))) goto LAB_14931472e;
          }
          local_260 = *puVar7;
          local_268 = local_250;
          fVar24 = (float)FUN_149314ebb(uVar16,L"normalTexture",0,puVar7[1] + 0xd0);
          if ((fVar24 != 0.0) || (NAN(fVar24))) {
            *(uint *)(lVar19 + 0x254) = *(uint *)(lVar19 + 0x254) | 1;
          }
          else if (*(uint *)(lVar19 + 0x254) == 0) goto LAB_149314a0e;
          lVar21 = puVar7[1] + 0x120;
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,0x12);
        }
        FUN_14932a866(lVar21,&local_148);
LAB_149314a0e:
        if (local_118 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        lVar23 = lVar23 + 1;
        lVar20 = lVar20 + 0x10;
      } while (lVar23 < DAT_14cc0c448);
    }
    FUN_149313b5a(puVar7,local_248,&local_f8);
    FUN_1447a1747(local_f8,uStack_f0 & 0xffffffff);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149314ebb FUN_149314ebb body=2098 status=ok
// SIG undefined FUN_149314ebb(void)

/* WARNING: Removing unreachable block (ram,0x00014931515a) */

float FUN_149314ebb(undefined8 param_1,wchar_t *param_2,wchar_t *param_3,longlong param_4,
                   int *param_5,longlong *param_6)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  void *_Src;
  undefined8 uVar4;
  double dVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  undefined4 uVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  size_t sVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  wchar_t *local_180;
  undefined4 local_178;
  wchar_t *local_170;
  undefined4 local_168;
  wchar_t *local_160;
  int local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  longlong *local_148 [2];
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128 [2];
  longlong *local_118 [2];
  wchar_t *local_108;
  int local_100;
  undefined4 local_fc;
  wchar_t *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  wchar_t *local_d0;
  undefined4 local_c8;
  wchar_t *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  int local_78;
  undefined4 uStack_74;
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_78 = 0;
  if (param_2 != (wchar_t *)0x0) {
    sVar13 = wcslen(param_2);
    local_78 = (int)sVar13;
  }
  local_80 = param_2;
  cVar9 = FUN_146843260(param_1,&local_80,6);
  fVar21 = 1.0;
  if (cVar9 != '\0') {
    local_b8 = 0;
    local_c0 = param_2;
    if (param_2 != (wchar_t *)0x0) {
      sVar13 = wcslen(param_2);
      local_b8 = (int)sVar13;
    }
    puVar14 = (undefined8 *)FUN_14047df14(param_1);
    uVar15 = *puVar14;
    iVar11 = FUN_14931bf88(uVar15,L"index",0xffffffff);
    if ((-1 < iVar11) && (iVar11 < *(int *)(param_4 + 8))) {
      *param_5 = iVar11;
      uVar10 = FUN_14931bf88(uVar15,L"texCoord",0);
      *(undefined1 *)(param_5 + 1) = uVar10;
      fVar21 = 1.0;
      if (param_3 != (wchar_t *)0x0) {
        sVar13 = wcslen(param_3);
        local_80 = param_3;
        local_78 = (int)sVar13;
        cVar9 = FUN_146843260(uVar15,&local_80,3);
        if (cVar9 != '\0') {
          local_d0 = param_3;
          sVar13 = wcslen(param_3);
          local_c8 = (int)sVar13;
          dVar5 = (double)FUN_1468393c6(uVar15,&local_d0);
          fVar21 = (float)dVar5;
        }
      }
      local_80 = L"extensions";
      local_78 = 10;
      cVar9 = FUN_146843260(uVar15,&local_80,6);
      if (cVar9 != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cc0c7c0) &&
           (FUN_144b3d300(&DAT_14cc0c7c0), DAT_14cc0c7c0 == -1)) {
          DAT_14cc0c7b0 = (undefined4 *)0x0;
          DAT_14cc0c7b8 = 1;
          FUN_14932aa48(&DAT_14cc0c7b0,1);
          *DAT_14cc0c7b0 = 0xb;
          atexit((_func_5014 *)&LAB_1444c393c);
          _Init_thread_footer(&DAT_14cc0c7c0);
        }
        local_e8 = 0;
        uStack_e0 = 0;
        if (DAT_14cc0c7b8 != 0) {
          lVar17 = 0;
          uVar18 = 0;
          pwVar7 = local_80;
          iVar11 = local_78;
          uVar8 = uStack_74;
          do {
            uStack_74 = uVar8;
            local_78 = iVar11;
            local_80 = pwVar7;
            uVar15 = FUN_1444c1a74(*(undefined4 *)((longlong)DAT_14cc0c7b0 + (lVar17 >> 0x1e)));
            FUN_140056680(&local_80,uVar15);
            uVar6 = uStack_e0;
            lVar20 = (longlong)(int)uStack_e0;
            uVar12 = (int)uStack_e0 + 1;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar12);
            if (uStack_e0._4_4_ < uVar12) {
              FUN_1447a1bd6(&local_e8,uVar6 & 0xffffffff);
            }
            lVar20 = lVar20 * 0x10;
            *(undefined8 *)(local_e8 + lVar20) = 0;
            *(wchar_t **)(local_e8 + lVar20) = local_80;
            local_80 = (wchar_t *)0x0;
            pwVar7 = local_80;
            *(int *)(local_e8 + 8 + lVar20) = local_78;
            *(undefined4 *)(local_e8 + 0xc + lVar20) = uStack_74;
            local_78 = 0;
            iVar11 = local_78;
            uStack_74 = 0;
            uVar8 = uStack_74;
            uStack_74 = 0;
            local_78 = 0;
            local_80 = (wchar_t *)0x0;
            uVar18 = uVar18 + 1;
            lVar17 = lVar17 + 0x100000000;
          } while (uVar18 < (ulonglong)(longlong)DAT_14cc0c7b8);
        }
        local_f8 = L"extensions";
        local_f0 = 10;
        puVar14 = (undefined8 *)FUN_14047df14();
        if (0 < DAT_14cc0c7b8) {
          uVar15 = *puVar14;
          lVar20 = 8;
          lVar17 = 0;
          local_188 = uVar15;
          do {
            local_108 = (wchar_t *)0x0;
            local_100 = *(int *)(local_e8 + lVar20);
            lVar19 = (longlong)local_100;
            _Src = *(void **)(local_e8 + -8 + lVar20);
            if (lVar19 == 0) {
              local_fc = 0;
              iVar11 = 0;
            }
            else {
              FUN_1446dd670(&local_108,local_100,0);
              memcpy(local_108,_Src,lVar19 * 2);
              iVar11 = local_100;
            }
            local_78 = iVar11 + -1;
            if (iVar11 == 0) {
              local_78 = 0;
            }
            local_80 = local_108;
            cVar9 = FUN_146843260(uVar15,&local_80);
            if (cVar9 == '\0') {
              FUN_140009b9a(local_128,&local_108);
              local_80 = L"UnsupportedExtension";
              local_78 = 0x14;
              FUN_1446e940c(local_14c,&local_80);
              local_80 = L"InterchangeGLTFMaterialUtilities";
              local_78 = 0x20;
              FUN_1446e940c(local_150,&local_80);
              FUN_140208bae(local_148,local_150,local_14c,L"Extension is not supported: {0}");
              FUN_14023409e(&local_138,local_148,1);
              local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
              FUN_14023423e(local_70,local_128);
              local_98 = local_60;
              local_a0 = &local_80;
              FUN_14010d304(&local_90,&local_a0);
              local_b0 = local_138;
              local_a8 = local_130;
              if (local_130 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_130 + 1) = (int)local_130[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_118,&local_b0);
              FUN_14007f2db(local_90,local_88);
              if (local_90 != 0) {
                FUN_1400020a8();
              }
              uVar15 = local_188;
              if (local_70[0] != (longlong *)0x0) {
                (**(code **)(*local_70[0] + 0x10))();
              }
              plVar16 = local_130;
              if (local_130 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_130 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_130)(local_130);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar16 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar16 + 0x10))(plVar16);
                  }
                }
              }
              if (local_128[0] != (longlong *)0x0) {
                (**(code **)(*local_128[0] + 0x10))();
              }
              uVar12 = (uint)DAT_14c86aa68;
              iVar11 = (int)param_6[1];
              *(uint *)(param_6 + 1) = iVar11 + 1U;
              if (*(uint *)((longlong)param_6 + 0xc) < iVar11 + 1U) {
                FUN_149326c66(param_6,iVar11);
              }
              puVar1 = (uint *)(*param_6 + (longlong)iVar11 * 0x18);
              *puVar1 = uVar12 ^ 1;
              FUN_14023423e(puVar1 + 2,local_118);
              if (local_118[0] != (longlong *)0x0) {
                (**(code **)(*local_118[0] + 0x10))();
              }
              if (local_148[0] != (longlong *)0x0) {
                (**(code **)(*local_148[0] + 0x10))();
              }
            }
            else {
              local_160 = local_108;
              local_158 = local_100 + -1;
              if (local_100 == 0) {
                local_158 = 0;
              }
              puVar14 = (undefined8 *)FUN_14047df14(uVar15,&local_160);
              if (DAT_14cc0c7b0[lVar17] == 0xb) {
                uVar4 = *puVar14;
                *(undefined1 *)((longlong)param_5 + 5) = 1;
                param_5[2] = 0;
                param_5[3] = 0;
                *(undefined1 **)(param_5 + 5) = &DAT_3f8000003f800000;
                iVar11 = FUN_149315951(uVar4,L"rotation",0);
                param_5[4] = iVar11;
                local_80 = L"offset";
                _local_78 = CONCAT44(uStack_74,6);
                cVar9 = FUN_146843260(uVar4,&local_80,5);
                if (cVar9 != '\0') {
                  local_170 = L"offset";
                  local_168 = 6;
                  plVar16 = (longlong *)FUN_14571608c(uVar4,&local_170);
                  if (1 < (int)plVar16[1]) {
                    dVar5 = (double)FUN_141360850(*(undefined8 *)*plVar16);
                    param_5[2] = (int)(float)dVar5;
                    dVar5 = (double)FUN_141360850(*(undefined8 *)(*plVar16 + 0x10));
                    param_5[3] = (int)(float)dVar5;
                  }
                }
                local_80 = L"scale";
                local_78 = 5;
                cVar9 = FUN_146843260(uVar4,&local_80);
                if (cVar9 != '\0') {
                  local_180 = L"scale";
                  local_178 = 5;
                  plVar16 = (longlong *)FUN_14571608c(uVar4);
                  if (1 < (int)plVar16[1]) {
                    dVar5 = (double)FUN_141360850(*(undefined8 *)*plVar16);
                    param_5[5] = (int)(float)dVar5;
                    dVar5 = (double)FUN_141360850(*(undefined8 *)(*plVar16 + 0x10));
                    param_5[6] = (int)(float)dVar5;
                  }
                }
              }
            }
            if (local_108 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            lVar17 = lVar17 + 1;
            lVar20 = lVar20 + 0x10;
          } while (lVar17 < DAT_14cc0c7b8);
        }
        FUN_1447a1747(local_e8,uStack_e0 & 0xffffffff);
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_60[0] ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return fVar21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493156ee FUN_1493156ee body=329 status=ok
// SIG undefined FUN_1493156ee(void)

double * FUN_1493156ee(double *param_1,undefined8 param_2,wchar_t *param_3,undefined4 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  size_t sVar13;
  longlong *plVar14;
  undefined1 auStack_a8 [40];
  wchar_t *local_80;
  undefined4 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  if (param_3 != (wchar_t *)0x0) {
    sVar13 = wcslen(param_3);
    local_68 = (int)sVar13;
  }
  local_70 = param_3;
  cVar12 = FUN_146843260(param_2,&local_70,5);
  if (cVar12 != '\0') {
    local_78 = 0;
    local_80 = param_3;
    if (param_3 != (wchar_t *)0x0) {
      sVar13 = wcslen(param_3);
      local_78 = (int)sVar13;
    }
    plVar14 = (longlong *)FUN_14571608c(param_2);
    if ((int)plVar14[1] == 4) {
      dVar1 = (double)FUN_141360850(*(undefined8 *)*plVar14);
      dVar2 = (double)FUN_141360850(*(undefined8 *)(*plVar14 + 0x10));
      dVar3 = (double)FUN_141360850(*(undefined8 *)(*plVar14 + 0x20));
      dVar4 = (double)FUN_141360850(*(undefined8 *)(*plVar14 + 0x30));
      *param_1 = (double)(float)dVar1;
      param_1[1] = (double)(float)dVar2;
      param_1[2] = (double)(float)dVar3;
      param_1[3] = (double)(float)dVar4;
      goto LAB_149315760;
    }
  }
  uVar5 = *param_4;
  uVar6 = param_4[1];
  uVar7 = param_4[2];
  uVar8 = param_4[3];
  uVar9 = param_4[5];
  uVar10 = param_4[6];
  uVar11 = param_4[7];
  *(undefined4 *)(param_1 + 2) = param_4[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar9;
  *(undefined4 *)(param_1 + 3) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar11;
  *(undefined4 *)param_1 = uVar5;
  *(undefined4 *)((longlong)param_1 + 4) = uVar6;
  *(undefined4 *)(param_1 + 1) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar8;
LAB_149315760:
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149315838 FUN_149315838 body=280 status=ok
// SIG undefined FUN_149315838(void)

double * FUN_149315838(double *param_1,undefined8 param_2,wchar_t *param_3,undefined4 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  size_t sVar8;
  longlong *plVar9;
  undefined1 auStack_98 [40];
  wchar_t *local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  if (param_3 != (wchar_t *)0x0) {
    sVar8 = wcslen(param_3);
    local_58 = (int)sVar8;
  }
  local_60 = param_3;
  cVar7 = FUN_146843260(param_2,&local_60,5);
  if (cVar7 != '\0') {
    local_68 = 0;
    local_70 = param_3;
    if (param_3 != (wchar_t *)0x0) {
      sVar8 = wcslen(param_3);
      local_68 = (int)sVar8;
    }
    plVar9 = (longlong *)FUN_14571608c(param_2);
    if ((int)plVar9[1] == 3) {
      dVar1 = (double)FUN_141360850(*(undefined8 *)*plVar9);
      dVar2 = (double)FUN_141360850(*(undefined8 *)(*plVar9 + 0x10));
      dVar3 = (double)FUN_141360850(*(undefined8 *)(*plVar9 + 0x20));
      *param_1 = (double)(float)dVar1;
      param_1[1] = (double)(float)dVar2;
      param_1[2] = (double)(float)dVar3;
      goto LAB_1493158a1;
    }
  }
  param_1[2] = *(double *)(param_4 + 4);
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  *(undefined4 *)param_1 = *param_4;
  *(undefined4 *)((longlong)param_1 + 4) = uVar4;
  *(undefined4 *)(param_1 + 1) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
LAB_1493158a1:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149315951 FUN_149315951 body=163 status=ok
// SIG undefined FUN_149315951(void)

undefined8 FUN_149315951(undefined8 param_1,wchar_t *param_2,undefined8 param_3)

{
  double dVar1;
  char cVar2;
  size_t sVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [40];
  wchar_t *local_50;
  undefined4 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  uVar5 = (undefined4)((ulonglong)param_3 >> 0x20);
  fVar4 = (float)param_3;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  if (param_2 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_2);
    local_38 = (int)sVar3;
  }
  local_40 = param_2;
  cVar2 = FUN_146843260(param_1,&local_40,3);
  if (cVar2 != '\0') {
    local_50 = param_2;
    if (param_2 == (wchar_t *)0x0) {
      local_48 = 0;
    }
    else {
      sVar3 = wcslen(param_2);
      local_48 = (int)sVar3;
    }
    dVar1 = (double)FUN_1468393c6(param_1);
    uVar5 = 0;
    fVar4 = (float)dVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT44(uVar5,fVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493159f6 FUN_1493159f6 body=126 status=ok
// SIG undefined FUN_1493159f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1493159f6(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c468) {
    FUN_144b3d300(&DAT_14cc0c468);
    if (DAT_14cc0c468 == -1) {
      DAT_14cc0c458 = 0;
      _DAT_14cc0c460 = 0;
      atexit(FUN_1444c1cf6);
      _Init_thread_footer(&DAT_14cc0c468);
    }
  }
  FUN_149313b5a(param_1,param_2,&DAT_14cc0c458);
  return;
}



// FUNCTION 149315a74 FUN_149315a74 body=126 status=ok
// SIG undefined FUN_149315a74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149315a74(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c480) {
    FUN_144b3d300(&DAT_14cc0c480);
    if (DAT_14cc0c480 == -1) {
      DAT_14cc0c470 = 0;
      _DAT_14cc0c478 = 0;
      atexit(FUN_1444c1d27);
      _Init_thread_footer(&DAT_14cc0c480);
    }
  }
  FUN_149313b5a(param_1,param_2,&DAT_14cc0c470);
  return;
}



// FUNCTION 149315af2 FUN_149315af2 body=126 status=ok
// SIG undefined FUN_149315af2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149315af2(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c498) {
    FUN_144b3d300(&DAT_14cc0c498);
    if (DAT_14cc0c498 == -1) {
      DAT_14cc0c488 = 0;
      _DAT_14cc0c490 = 0;
      atexit(FUN_1444c1d58);
      _Init_thread_footer(&DAT_14cc0c498);
    }
  }
  FUN_149313b5a(param_1,param_2,&DAT_14cc0c488);
  return;
}



// FUNCTION 149315b70 FUN_149315b70 body=4136 status=ok
// SIG undefined FUN_149315b70(void)

/* WARNING: Removing unreachable block (ram,0x000149315d26) */

void FUN_149315b70(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  void *_Src;
  ulonglong *puVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  int *piVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 uVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  undefined1 auStack_2e8 [32];
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined8 *local_2b0;
  longlong local_2a8;
  longlong *local_2a0;
  undefined8 *local_298;
  undefined8 local_290;
  undefined8 local_288;
  longlong *local_280;
  undefined8 local_278;
  longlong local_270;
  longlong *local_268;
  wchar_t **local_260;
  ulonglong *local_258;
  longlong *local_250 [2];
  longlong *local_240;
  longlong *local_238;
  longlong *local_230 [2];
  longlong local_220;
  undefined4 local_218;
  undefined1 local_208 [32];
  wchar_t *local_1e8;
  undefined4 local_1e0;
  wchar_t *local_1d8;
  undefined4 local_1d0;
  wchar_t *local_1c8;
  undefined4 local_1c0;
  wchar_t *local_1b8;
  int local_1b0;
  wchar_t *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  wchar_t *local_198;
  undefined4 local_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  longlong *local_168 [2];
  longlong *local_158;
  longlong *local_150;
  longlong local_148 [2];
  longlong *local_138 [2];
  longlong *local_128 [2];
  longlong *local_118 [2];
  undefined4 local_108;
  undefined1 local_101;
  longlong *local_100;
  longlong *local_f8;
  wchar_t **local_f0;
  ulonglong *local_e8;
  wchar_t **local_e0;
  undefined4 *local_d8;
  wchar_t *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 local_b0 [2];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90 [4];
  undefined1 local_80 [16];
  ulonglong local_70 [6];
  int iVar10;
  
  local_70[0] = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  local_d0 = L"extensions";
  local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,10);
  cVar7 = FUN_146843260(param_2,&local_d0,6);
  if (cVar7 != '\0') {
    local_2b0 = (undefined8 *)CONCAT44(local_2b0._4_4_,param_4);
    local_288 = param_2;
    local_280 = param_1;
    local_270 = param_3;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc0c4b0) && (FUN_144b3d300(&DAT_14cc0c4b0), DAT_14cc0c4b0 == -1)) {
      DAT_14cc0c4a0 = (undefined8 *)0x0;
      DAT_14cc0c4a8 = 2;
      FUN_14932aa48(&DAT_14cc0c4a0,2);
      *DAT_14cc0c4a0 = 0xc00000005;
      atexit((_func_5014 *)&LAB_1444c1d89);
      _Init_thread_footer(&DAT_14cc0c4b0);
    }
    local_188 = 0;
    uStack_180 = 0;
    if (DAT_14cc0c4a8 != 0) {
      lVar20 = 0;
      uVar19 = 0;
      pwVar18 = local_d0;
      puVar12 = local_c8;
      do {
        local_c8 = puVar12;
        local_d0 = pwVar18;
        uVar11 = FUN_1444c1a74(*(undefined4 *)((longlong)DAT_14cc0c4a0 + (lVar20 >> 0x1e)));
        FUN_140056680(&local_d0,uVar11);
        uVar6 = uStack_180;
        lVar24 = (longlong)(int)uStack_180;
        uVar8 = (int)uStack_180 + 1;
        uStack_180 = CONCAT44(uStack_180._4_4_,uVar8);
        if (uStack_180._4_4_ < uVar8) {
          FUN_1447a1bd6(&local_188,uVar6 & 0xffffffff);
        }
        lVar24 = lVar24 * 0x10;
        *(undefined8 *)(local_188 + lVar24) = 0;
        *(wchar_t **)(local_188 + lVar24) = local_d0;
        local_d0 = (wchar_t *)0x0;
        pwVar18 = local_d0;
        *(int *)(local_188 + 8 + lVar24) = (int)local_c8;
        *(undefined4 *)(local_188 + 0xc + lVar24) = local_c8._4_4_;
        local_c8 = (undefined8 *)0x0;
        puVar12 = local_c8;
        local_c8 = (undefined8 *)0x0;
        local_d0 = (wchar_t *)0x0;
        uVar19 = uVar19 + 1;
        lVar20 = lVar20 + 0x100000000;
      } while (uVar19 < (ulonglong)(longlong)DAT_14cc0c4a8);
    }
    local_198 = L"extensions";
    local_190 = 10;
    puVar12 = (undefined8 *)FUN_14047df14(local_288);
    plVar13 = local_280;
    if (0 < DAT_14cc0c4a8) {
      uVar11 = *puVar12;
      local_268 = (longlong *)(local_270 + 0x20);
      local_298 = (undefined8 *)((ulonglong)local_2b0 & 0xffffffff);
      lVar20 = 0;
      lVar24 = local_270;
      local_278 = uVar11;
      do {
        local_1a8 = (wchar_t *)0x0;
        local_1a0 = *(int *)(local_188 + 8 + lVar20 * 0x10);
        lVar23 = (longlong)local_1a0;
        _Src = *(void **)(local_188 + lVar20 * 0x10);
        local_2a8 = lVar20;
        if (lVar23 == 0) {
          local_19c = 0;
          iVar10 = 0;
        }
        else {
          FUN_1446dd670(&local_1a8,local_1a0,0);
          memcpy(local_1a8,_Src,lVar23 * 2);
          iVar10 = local_1a0;
        }
        iVar9 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar9 = 0;
        }
        local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,iVar9);
        local_d0 = local_1a8;
        cVar7 = FUN_146843260(uVar11,&local_d0);
        lVar20 = local_2a8;
        if (cVar7 != '\0') {
          local_1b8 = local_1a8;
          local_1b0 = local_1a0 + -1;
          if (local_1a0 == 0) {
            local_1b0 = 0;
          }
          puVar12 = (undefined8 *)FUN_14047df14(uVar11,&local_1b8);
          uVar22 = *puVar12;
          iVar10 = *(int *)((longlong)DAT_14cc0c4a0 + lVar20 * 4);
          if (iVar10 == 0xc) {
            uVar8 = FUN_14931bf88(uVar22,L"bufferView");
            if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(plVar13[1] + 0x28))) {
              lVar20 = *(longlong *)(plVar13[1] + 0x20);
              local_1e8 = L"attributes";
              local_1e0 = 10;
              puVar12 = (undefined8 *)FUN_14047df14(uVar22,&local_1e8);
              local_290 = *puVar12;
              puVar12 = (undefined8 *)FUN_14001cc68(0x20,0x10);
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
              puVar12[3] = 0;
              FUN_149326668(puVar12);
              FUN_144d7d140(&local_220);
              FUN_144d7d170(&local_220,
                            *(longlong *)(lVar20 + 8 + (ulonglong)uVar8 * 0x28) +
                            *(longlong *)(lVar20 + 0x10 + (ulonglong)uVar8 * 0x28));
              FUN_144d7d390(&local_d0,&local_220);
              iVar10 = (int)local_a8;
              FUN_1401d9a90(&local_c8);
              if (iVar10 == 1) {
                FUN_144d7d5f0(puVar12,&local_d0,&local_220);
                puVar12 = local_a8;
                local_a8 = (undefined8 *)0x0;
                FUN_1401d9a90(&local_c8);
                local_2b0 = puVar12;
                if ((-1 < **(int **)(lVar24 + 0x90)) &&
                   (**(int **)(lVar24 + 0x90) < *(int *)(plVar13[1] + 0x38))) {
                  lVar20 = FUN_149316b9a();
                  cVar7 = FUN_149312899(puVar12,*(undefined4 *)(lVar20 + 0xc),
                                        *(undefined8 *)(lVar20 + 0x98));
                  if (cVar7 == '\0') {
                    *(undefined4 *)(lVar20 + 0xb0) = 0;
                    *(undefined8 *)(lVar20 + 0xa0) = 0;
                    *(undefined8 *)(lVar20 + 0xa8) = 0;
                    *(undefined8 *)(lVar20 + 0x90) = 0;
                    *(undefined8 *)(lVar20 + 0x98) = 0;
                    local_2a0 = (longlong *)*plVar13;
                    FUN_140009b9a(local_230,param_5);
                    local_d0 = L"DracoMeshIndexAcquisitionFailed";
                    local_c8._0_4_ = 0x1f;
                    FUN_1446e940c(local_138,&local_d0);
                    local_d0 = L"InterchangeGLTFExtensionHandler";
                    local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,0x1f);
                    FUN_1446e940c(local_148,&local_d0);
                    FUN_140208bae(local_128,local_148,local_138,
                                  L"Failed to acquire Indices from Draco Mesh, for PrimitiveIdx: {0}, in Mesh: {1}"
                                 );
                    FUN_14023409e(&local_240,local_128,1);
                    local_d0 = (wchar_t *)CONCAT44(local_d0._4_4_,1);
                    local_c0 = (longlong *)0x0;
                    local_b8 = 0;
                    local_c8 = local_298;
                    local_b0[0] = 4;
                    FUN_14023423e(&local_a0,local_230);
                    local_e8 = (ulonglong *)local_90;
                    local_f0 = &local_d0;
                    FUN_14010d304(&local_e0,&local_f0);
                    local_100 = local_240;
                    local_f8 = local_238;
                    if (local_238 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(local_238 + 1) = (int)local_238[1] + 1;
                      UNLOCK();
                    }
                    FUN_14010c016(local_118,&local_100,&local_e0);
                    FUN_14007f2db(local_e0,(ulonglong)local_d8 & 0xffffffff);
                    if (local_e0 != (wchar_t **)0x0) {
                      FUN_1400020a8();
                    }
                    plVar15 = local_2a0;
                    lVar20 = 0x30;
                    do {
                      if (*(longlong **)((longlong)&local_d0 + lVar20) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)((longlong)&local_d0 + lVar20) + 0x10))();
                        *(undefined8 *)((longlong)&local_d0 + lVar20) = 0;
                        *(undefined4 *)((longlong)&local_c8 + lVar20) = 0;
                      }
                      plVar21 = local_238;
                      lVar20 = lVar20 + -0x20;
                    } while (lVar20 != -0x10);
                    if (local_238 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = local_238 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*local_238)(local_238);
                        LOCK();
                        piVar16 = (int *)((longlong)plVar21 + 0xc);
                        *piVar16 = *piVar16 + -1;
                        UNLOCK();
                        if (*piVar16 == 0) {
                          (**(code **)(*plVar21 + 0x10))(plVar21);
                        }
                      }
                    }
                    if (local_230[0] != (longlong *)0x0) {
                      (**(code **)(*local_230[0] + 0x10))();
                    }
                    iVar10 = (int)plVar15[1];
                    *(uint *)(plVar15 + 1) = iVar10 + 1U;
                    if (*(uint *)((longlong)plVar15 + 0xc) < iVar10 + 1U) {
                      FUN_149326c66(plVar15,iVar10);
                    }
                    puVar3 = (undefined4 *)(*plVar15 + (longlong)iVar10 * 0x18);
                    *puVar3 = 1;
                    FUN_14023423e(puVar3 + 2,local_118);
                    if (local_118[0] != (longlong *)0x0) {
                      (**(code **)(*local_118[0] + 0x10))();
                    }
                    if (local_128[0] != (longlong *)0x0) {
                      (**(code **)(*local_128[0] + 0x10))();
                    }
                  }
                }
                lVar20 = 0;
                uVar22 = local_290;
                do {
                  local_101 = (undefined1)lVar20;
                  FUN_1493173bd(&local_d0,&local_101);
                  pwVar18 = L"";
                  if ((int)local_c8 != 0) {
                    pwVar18 = local_d0;
                  }
                  cVar7 = FUN_1493266d6(uVar22,pwVar18);
                  if (local_d0 != (wchar_t *)0x0) {
                    FUN_1400020a8();
                  }
                  if ((cVar7 != '\0') && (lVar23 = FUN_144d7e280(local_2b0,local_108), lVar23 != 0))
                  {
                    piVar16 = (int *)FUN_14931afa2(lVar24,&local_101);
                    if ((-1 < *piVar16) && (*piVar16 < *(int *)(plVar13[1] + 0x38))) {
                      lVar17 = FUN_149316b9a();
                      local_2c0 = *(undefined8 *)(lVar17 + 0x98);
                      local_2c8 = *(undefined4 *)(lVar17 + 0xc0);
                      cVar7 = FUN_149312a19(*(undefined4 *)(lVar17 + 0xc),lVar23,
                                            *(undefined4 *)(lVar17 + 4),
                                            *(undefined4 *)(lVar17 + 200));
                      if (cVar7 == '\0') {
                        *(undefined4 *)(lVar17 + 0xb0) = 0;
                        *(undefined8 *)(lVar17 + 0xa0) = 0;
                        *(undefined8 *)(lVar17 + 0xa8) = 0;
                        *(undefined8 *)(lVar17 + 0x90) = 0;
                        *(undefined8 *)(lVar17 + 0x98) = 0;
                        local_2a0 = (longlong *)*plVar13;
                        FUN_140009b9a(local_128,param_5);
                        FUN_1493173bd(local_148,&local_101);
                        FUN_140233b1a(local_138,local_148);
                        local_d0 = L"DracoMeshAttributeAcquisitionFailed";
                        local_c8._0_4_ = 0x23;
                        FUN_1446e940c(local_16c,&local_d0);
                        local_d0 = L"InterchangeGLTFExtensionHandler";
                        local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,0x1f);
                        FUN_1446e940c(local_170,&local_d0);
                        FUN_140208bae(local_168,local_170,local_16c,
                                      L"Failed to acquire {0} Attributes from Draco Mesh, for PrimitiveIdx: {1}, in Mesh: {2}"
                                     );
                        FUN_14023409e(&local_158,local_168,1);
                        local_d0 = (wchar_t *)CONCAT44(local_d0._4_4_,4);
                        FUN_14023423e(&local_c0,local_138);
                        local_b0[0] = 1;
                        local_a0 = 0;
                        local_98 = 0;
                        local_a8 = local_298;
                        local_90[0] = 4;
                        FUN_14023423e(local_80,local_128);
                        local_e8 = local_70;
                        local_f0 = &local_d0;
                        FUN_14010d304(&local_e0,&local_f0);
                        local_100 = local_158;
                        local_f8 = local_150;
                        if (local_150 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(local_150 + 1) = (int)local_150[1] + 1;
                          UNLOCK();
                        }
                        FUN_14010c016(local_118,&local_100);
                        FUN_14007f2db(local_e0,(ulonglong)local_d8 & 0xffffffff);
                        if (local_e0 != (wchar_t **)0x0) {
                          FUN_1400020a8();
                        }
                        plVar15 = local_2a0;
                        lVar23 = 0x50;
                        do {
                          if (*(longlong **)((longlong)&local_d0 + lVar23) != (longlong *)0x0) {
                            (**(code **)(**(longlong **)((longlong)&local_d0 + lVar23) + 0x10))();
                            *(undefined8 *)((longlong)&local_d0 + lVar23) = 0;
                            *(undefined4 *)((longlong)&local_c8 + lVar23) = 0;
                          }
                          plVar21 = local_150;
                          lVar23 = lVar23 + -0x20;
                        } while (lVar23 != -0x10);
                        if (local_150 != (longlong *)0x0) {
                          LOCK();
                          plVar1 = local_150 + 1;
                          *(int *)plVar1 = (int)*plVar1 + -1;
                          UNLOCK();
                          if ((int)*plVar1 == 0) {
                            (**(code **)*local_150)(local_150);
                            LOCK();
                            piVar16 = (int *)((longlong)plVar21 + 0xc);
                            *piVar16 = *piVar16 + -1;
                            UNLOCK();
                            if (*piVar16 == 0) {
                              (**(code **)(*plVar21 + 0x10))(plVar21);
                            }
                          }
                        }
                        uVar22 = local_290;
                        if (local_138[0] != (longlong *)0x0) {
                          (**(code **)(*local_138[0] + 0x10))();
                        }
                        if (local_128[0] != (longlong *)0x0) {
                          (**(code **)(*local_128[0] + 0x10))();
                        }
                        iVar10 = (int)plVar15[1];
                        *(uint *)(plVar15 + 1) = iVar10 + 1U;
                        if (*(uint *)((longlong)plVar15 + 0xc) < iVar10 + 1U) {
                          FUN_149326c66(plVar15,iVar10);
                        }
                        puVar3 = (undefined4 *)(*plVar15 + (longlong)iVar10 * 0x18);
                        *puVar3 = 1;
                        FUN_14023423e(puVar3 + 2,local_118);
                        if (local_118[0] != (longlong *)0x0) {
                          (**(code **)(*local_118[0] + 0x10))();
                        }
                        if (local_168[0] != (longlong *)0x0) {
                          (**(code **)(*local_168[0] + 0x10))();
                        }
                        if (local_148[0] != 0) {
                          FUN_1400020a8();
                        }
                      }
                    }
                  }
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 8);
                if (local_2b0 != (undefined8 *)0x0) {
                  (**(code **)*local_2b0)(local_2b0,1);
                }
              }
              FUN_144d7d280(local_208);
              lVar20 = local_2a8;
            }
          }
          else if (iVar10 == 5) {
            local_1c8 = L"mappings";
            local_1c0 = 8;
            plVar13 = (longlong *)FUN_14571608c(uVar22,&local_1c8);
            if ((longlong)(int)plVar13[1] != 0) {
              puVar12 = (undefined8 *)*plVar13;
              local_2b0 = puVar12 + (longlong)(int)plVar13[1] * 2;
              do {
                iVar10 = *(int *)(lVar24 + 0x28);
                lVar20 = (longlong)iVar10;
                *(uint *)(lVar24 + 0x28) = iVar10 + 1U;
                if (*(uint *)(lVar24 + 0x2c) < iVar10 + 1U) {
                  FUN_14932aa9e(local_268,iVar10);
                }
                lVar24 = *local_268;
                puVar14 = (undefined8 *)(lVar24 + lVar20 * 0x18);
                *puVar14 = 0;
                puVar14[1] = 0;
                *(undefined8 *)(lVar24 + 0x10 + lVar20 * 0x18) = 0;
                puVar14 = (undefined8 *)(*(code *)**(undefined8 **)*puVar12)();
                uVar11 = *puVar14;
                plVar13 = (longlong *)puVar14[1];
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                  UNLOCK();
                }
                piVar16 = (int *)(lVar24 + lVar20 * 0x18);
                local_d0 = L"material";
                local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,8);
                dVar25 = (double)FUN_1468393c6(uVar11,&local_d0);
                *piVar16 = (int)dVar25;
                local_1d8 = L"variants";
                local_1d0 = 8;
                plVar15 = (longlong *)FUN_14571608c(uVar11,&local_1d8);
                iVar10 = (int)plVar15[1];
                if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar10);
                }
                plVar21 = (longlong *)(lVar24 + lVar20 * 0x18 + 8);
                if (piVar16[5] < iVar10) {
                  FUN_14481578e(plVar21);
                  iVar10 = (int)plVar15[1];
                }
                if (iVar10 != 0) {
                  lVar20 = *plVar15;
                  lVar24 = 0;
                  do {
                    dVar25 = (double)FUN_141360850(*(undefined8 *)(lVar20 + lVar24));
                    iVar9 = piVar16[4];
                    piVar16[4] = iVar9 + 1U;
                    if ((uint)piVar16[5] < iVar9 + 1U) {
                      FUN_1446f48e2(plVar21,iVar9);
                    }
                    *(int *)(*plVar21 + (longlong)iVar9 * 4) = (int)dVar25;
                    lVar24 = lVar24 + 0x10;
                  } while ((longlong)iVar10 * 0x10 != lVar24);
                }
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar15 = plVar13 + 1;
                  *(int *)plVar15 = (int)*plVar15 + -1;
                  UNLOCK();
                  if ((int)*plVar15 == 0) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar16 = (int *)((longlong)plVar13 + 0xc);
                    *piVar16 = *piVar16 + -1;
                    UNLOCK();
                    if (*piVar16 == 0) {
                      (**(code **)(*plVar13 + 0x10))(plVar13);
                    }
                  }
                }
                puVar12 = puVar12 + 2;
                lVar24 = local_270;
              } while (puVar12 != local_2b0);
            }
            plVar13 = local_280;
            local_d0 = (wchar_t *)CONCAT44(local_d0._4_4_,5);
            FUN_14932a866(local_280[1] + 0x120,&local_220);
            lVar20 = local_2a8;
            uVar11 = local_278;
          }
          else {
            plVar15 = (longlong *)*plVar13;
            uVar11 = FUN_1444c1a74();
            FUN_140056680(local_118,uVar11);
            FUN_140233b1a(local_250,local_118);
            local_d0 = L"UnsupportedPrimitiveExtension";
            local_c8._0_4_ = 0x1d;
            FUN_1446e940c(local_138,&local_d0);
            local_d0 = L"InterchangeGLTFExtensionHandler";
            local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,0x1f);
            FUN_1446e940c(local_148,&local_d0);
            FUN_140208bae(local_128,local_148,local_138,L"Primitive.Extension not supported: {0}");
            FUN_14023409e(&local_260,local_128,1);
            local_d0 = (wchar_t *)CONCAT44(local_d0._4_4_,4);
            FUN_14023423e(&local_c0,local_250);
            local_d8 = local_b0;
            local_e0 = &local_d0;
            FUN_14010d304(&local_220,&local_e0);
            local_f0 = local_260;
            local_e8 = local_258;
            if (local_258 != (ulonglong *)0x0) {
              LOCK();
              *(int *)(local_258 + 1) = (int)local_258[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_100,&local_f0);
            FUN_14007f2db(local_220,local_218);
            if (local_220 != 0) {
              FUN_1400020a8();
            }
            if (local_c0 != (longlong *)0x0) {
              (**(code **)(*local_c0 + 0x10))();
            }
            puVar5 = local_258;
            uVar11 = local_278;
            if (local_258 != (ulonglong *)0x0) {
              LOCK();
              puVar2 = local_258 + 1;
              *(int *)puVar2 = (int)*puVar2 + -1;
              UNLOCK();
              if ((int)*puVar2 == 0) {
                (**(code **)*local_258)(local_258);
                LOCK();
                piVar16 = (int *)((longlong)puVar5 + 0xc);
                *piVar16 = *piVar16 + -1;
                UNLOCK();
                if (*piVar16 == 0) {
                  (**(code **)(*puVar5 + 0x10))(puVar5);
                }
              }
            }
            if (local_250[0] != (longlong *)0x0) {
              (**(code **)(*local_250[0] + 0x10))();
            }
            uVar8 = (uint)DAT_14c86aa68;
            iVar10 = (int)plVar15[1];
            *(uint *)(plVar15 + 1) = iVar10 + 1U;
            if (*(uint *)((longlong)plVar15 + 0xc) < iVar10 + 1U) {
              FUN_149326c66(plVar15,iVar10);
            }
            puVar4 = (uint *)(*plVar15 + (longlong)iVar10 * 0x18);
            *puVar4 = uVar8 ^ 1;
            FUN_14023423e(puVar4 + 2,&local_100);
            if (local_100 != (longlong *)0x0) {
              (**(code **)(*local_100 + 0x10))();
            }
            lVar20 = local_2a8;
            if (local_128[0] != (longlong *)0x0) {
              (**(code **)(*local_128[0] + 0x10))();
            }
            if (local_118[0] != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        if (local_1a8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < DAT_14cc0c4a8);
    }
    FUN_149313b5a(plVar13,local_288,&local_188);
    FUN_1447a1747(local_188,uStack_180 & 0xffffffff);
    if (local_188 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70[0] ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149316b9a FUN_149316b9a body=427 status=ok
// SIG undefined FUN_149316b9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_149316b9a(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((int)param_2 < *(int *)(param_1 + 0x38)) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    lVar8 = (ulonglong)param_2 * 0xd0;
    iVar2 = *(int *)(lVar4 + 200 + lVar8);
    uVar7 = (ulonglong)(uint)(*(int *)(lVar4 + 4 + lVar8) * iVar2);
    iVar3 = *(int *)(param_1 + 0x1d8);
    *(uint *)(param_1 + 0x1d8) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x1dc) < iVar3 + 1U) {
      FUN_14698d42e((longlong *)(param_1 + 0x1d0),iVar3);
    }
    puVar6 = (undefined *)(lVar4 + lVar8);
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x1d0) + (longlong)iVar3 * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    if (uVar7 != 0) {
      FUN_140d2d4a8(puVar1,uVar7);
    }
    FUN_1415d7a80(puVar1,uVar7,1);
    uVar5 = *puVar1;
    *(ulonglong *)(puVar6 + 0x90) = uVar7;
    *(undefined8 *)(puVar6 + 0x98) = uVar5;
    *(undefined8 *)(puVar6 + 0xa0) = 0;
    *(ulonglong *)(puVar6 + 0xa8) = uVar7;
    *(int *)(puVar6 + 0xb0) = iVar2;
  }
  else {
    puVar6 = &DAT_14cc0c5e0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc0c6b0) {
      FUN_144b3d300(&DAT_14cc0c6b0);
      if (DAT_14cc0c6b0 == -1) {
        _DAT_14cc0c5e0 = 0xffffffff;
        DAT_14cc0c5f8 = 0;
        _DAT_14cc0c5fc = 0;
        _DAT_14cc0c630 = 0;
        _DAT_14cc0c638 = 0;
        _DAT_14cc0c5e4 = 0;
        _DAT_14cc0c5ea = 0;
        uRam000000014cc0c5ec = 0;
        _DAT_14cc0c608 = 0;
        uRam000000014cc0c610 = 0;
        _DAT_14cc0c618 = 0;
        uRam000000014cc0c620 = 0;
        _DAT_14cc0c628 = 0;
        _DAT_14cc0c640 = 0;
        uRam000000014cc0c648 = 0;
        _DAT_14cc0c650 = 0;
        uRam000000014cc0c658 = 0;
        _DAT_14cc0c660 = 0;
        _DAT_14cc0c668 = 0;
        uRam000000014cc0c670 = 0;
        _DAT_14cc0c678 = 0;
        uRam000000014cc0c680 = 0;
        _DAT_14cc0c684 = 0;
        uRam000000014cc0c688 = 0;
        uRam000000014cc0c68c = 0;
        _DAT_14cc0c698 = 0;
        uRam000000014cc0c6a0 = 0;
        _DAT_14cc0c6a8 = 0;
        _Init_thread_footer(&DAT_14cc0c6b0);
      }
    }
  }
  return puVar6;
}



// FUNCTION 149316d46 FUN_149316d46 body=126 status=ok
// SIG undefined FUN_149316d46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149316d46(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c4c8) {
    FUN_144b3d300(&DAT_14cc0c4c8);
    if (DAT_14cc0c4c8 == -1) {
      DAT_14cc0c4b8 = 0;
      _DAT_14cc0c4c0 = 0;
      atexit(FUN_1444c1d9a);
      _Init_thread_footer(&DAT_14cc0c4c8);
    }
  }
  FUN_149313b5a(param_1,param_2,&DAT_14cc0c4b8);
  return;
}



// FUNCTION 149316dc4 FUN_149316dc4 body=126 status=ok
// SIG undefined FUN_149316dc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149316dc4(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c4e0) {
    FUN_144b3d300(&DAT_14cc0c4e0);
    if (DAT_14cc0c4e0 == -1) {
      DAT_14cc0c4d0 = 0;
      _DAT_14cc0c4d8 = 0;
      atexit(FUN_1444c1dcb);
      _Init_thread_footer(&DAT_14cc0c4e0);
    }
  }
  FUN_149313b5a(param_1,param_2,&DAT_14cc0c4d0);
  return;
}



// FUNCTION 149316e42 FUN_149316e42 body=401 status=ok
// SIG undefined FUN_149316e42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149316e42(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined1 local_40 [8];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1444c1af1(local_40);
  FUN_1444c1b8d(&local_50,local_40);
  if (local_50 != 0) {
    uVar5 = FUN_14931bf88(local_50,L"light",0xffffffff);
    *(undefined4 *)(param_3 + 0x90) = uVar5;
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c4f8) {
    FUN_144b3d300(&DAT_14cc0c4f8);
    iVar4 = DAT_14cc0c428;
    uVar3 = DAT_14cc0c420;
    if (DAT_14cc0c4f8 == -1) {
      DAT_14cc0c4e8 = 0;
      DAT_14cc0c4f0 = DAT_14cc0c428;
      if (DAT_14cc0c428 == 0) {
        _DAT_14cc0c4f4 = 0;
      }
      else {
        FUN_140b856de(&DAT_14cc0c4e8,DAT_14cc0c428,0);
        FUN_140b8566a(DAT_14cc0c4e8,uVar3,iVar4);
      }
      atexit(FUN_1444c1dfc);
      _Init_thread_footer(&DAT_14cc0c4f8);
    }
  }
  FUN_149313b5a(param_1,param_2,&DAT_14cc0c4e8);
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_38 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149316fea FUN_149316fea body=126 status=ok
// SIG undefined FUN_149316fea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149316fea(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c510) {
    FUN_144b3d300(&DAT_14cc0c510);
    if (DAT_14cc0c510 == -1) {
      DAT_14cc0c500 = 0;
      _DAT_14cc0c508 = 0;
      atexit(FUN_1444c1e2d);
      _Init_thread_footer(&DAT_14cc0c510);
    }
  }
  FUN_149313b5a(param_1,param_2,&DAT_14cc0c500);
  return;
}



// FUNCTION 149317068 FUN_149317068 body=126 status=ok
// SIG undefined FUN_149317068(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149317068(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c528) {
    FUN_144b3d300(&DAT_14cc0c528);
    if (DAT_14cc0c528 == -1) {
      DAT_14cc0c518 = 0;
      _DAT_14cc0c520 = 0;
      atexit(FUN_1444c1e5e);
      _Init_thread_footer(&DAT_14cc0c528);
    }
  }
  FUN_149313b5a(param_1,param_2,&DAT_14cc0c518);
  return;
}



// FUNCTION 1493170e6 FUN_1493170e6 body=126 status=ok
// SIG undefined FUN_1493170e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1493170e6(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c540) {
    FUN_144b3d300(&DAT_14cc0c540);
    if (DAT_14cc0c540 == -1) {
      DAT_14cc0c530 = 0;
      _DAT_14cc0c538 = 0;
      atexit(FUN_1444c1e8f);
      _Init_thread_footer(&DAT_14cc0c540);
    }
  }
  FUN_149313b5a(param_1,param_2,&DAT_14cc0c530);
  return;
}



// FUNCTION 149317164 FUN_149317164 body=126 status=ok
// SIG undefined FUN_149317164(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149317164(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c558) {
    FUN_144b3d300(&DAT_14cc0c558);
    if (DAT_14cc0c558 == -1) {
      DAT_14cc0c548 = 0;
      _DAT_14cc0c550 = 0;
      atexit(FUN_1444c1ec0);
      _Init_thread_footer(&DAT_14cc0c558);
    }
  }
  FUN_149313b5a(param_1,param_2,&DAT_14cc0c548);
  return;
}



// FUNCTION 1493171e2 FUN_1493171e2 body=126 status=ok
// SIG undefined FUN_1493171e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1493171e2(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c570) {
    FUN_144b3d300(&DAT_14cc0c570);
    if (DAT_14cc0c570 == -1) {
      DAT_14cc0c560 = 0;
      _DAT_14cc0c568 = 0;
      atexit(FUN_1444c1ef1);
      _Init_thread_footer(&DAT_14cc0c570);
    }
  }
  FUN_149313b5a(param_1,param_2,&DAT_14cc0c560);
  return;
}



// FUNCTION 149317260 FUN_149317260 body=126 status=ok
// SIG undefined FUN_149317260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149317260(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c588) {
    FUN_144b3d300(&DAT_14cc0c588);
    if (DAT_14cc0c588 == -1) {
      DAT_14cc0c578 = 0;
      _DAT_14cc0c580 = 0;
      atexit(FUN_1444c1f22);
      _Init_thread_footer(&DAT_14cc0c588);
    }
  }
  FUN_149313b5a(param_1,param_2,&DAT_14cc0c578);
  return;
}



// FUNCTION 1493172de FUN_1493172de body=222 status=ok
// SIG undefined FUN_1493172de(void)

undefined8 *
FUN_1493172de(undefined8 *param_1,undefined8 param_2,wchar_t *param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  char cVar2;
  size_t sVar3;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  if (param_3 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_3);
    local_30 = (int)sVar3;
  }
  local_38 = param_3;
  cVar2 = FUN_146843260(param_2,&local_38,2);
  if (cVar2 == '\0') {
    *param_1 = 0;
    iVar1 = *(int *)(param_4 + 1);
    _Src = (void *)*param_4;
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
    local_48 = param_3;
    if (param_3 == (wchar_t *)0x0) {
      local_40 = 0;
    }
    else {
      sVar3 = wcslen(param_3);
      local_40 = (int)sVar3;
    }
    FUN_14047df9c(param_2,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493173bd FUN_1493173bd body=57 status=ok
// SIG undefined FUN_1493173bd(void)

undefined8 FUN_1493173bd(undefined8 param_1,byte *param_2)

{
  undefined2 *puVar1;
  
  if ((ulonglong)*param_2 < 8) {
    puVar1 = (undefined2 *)(&DAT_14bc32b30 + *(int *)(&DAT_14bc32b30 + (ulonglong)*param_2 * 4));
  }
  else {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(param_1,puVar1);
  return param_1;
}



// FUNCTION 1493173f6 FUN_1493173f6 body=56 status=ok
// SIG undefined FUN_1493173f6(void)

void FUN_1493173f6(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  FUN_14931742e();
  if (*(int *)(param_1 + 4) != 0) {
    param_2 = param_2 + 8;
    uVar2 = 0;
    do {
      puVar1 = (ulonglong *)(param_2 + -4);
      *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 0xc;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}



// FUNCTION 14931742e FUN_14931742e body=103 status=ok
// SIG undefined FUN_14931742e(void)

void FUN_14931742e(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 8) != 3) {
    return;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1444c3da1(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xc),
                  *(undefined1 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 4),param_1 + 0x90,
                  *(undefined8 *)(param_1 + 0xb8),param_2);
  }
  FUN_1493184a4(param_1,param_2);
  return;
}



// FUNCTION 149317496 FUN_149317496 body=95 status=ok
// SIG undefined FUN_149317496(void)

void FUN_149317496(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  
  FUN_1493174f6();
  if (*(int *)(param_1 + 4) != 0) {
    puVar3 = (uint *)(param_2 + 8);
    uVar2 = 0;
    do {
      uVar1 = puVar3[-1];
      puVar3[-2] = puVar3[-2] ^ 0x80000000;
      puVar3[-1] = *puVar3 ^ 0x80000000;
      *puVar3 = uVar1 ^ 0x80000000;
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 4;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}



// FUNCTION 1493174f6 FUN_1493174f6 body=103 status=ok
// SIG undefined FUN_1493174f6(void)

void FUN_1493174f6(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 8) != 4) {
    return;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1444c4046(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xc),
                  *(undefined1 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 4),param_1 + 0x90,
                  *(undefined8 *)(param_1 + 0xb8),param_2);
  }
  FUN_1493185d8(param_1,param_2);
  return;
}



// FUNCTION 14931755e FUN_14931755e body=80 status=ok
// SIG undefined FUN_14931755e(void)

ulonglong FUN_14931755e(longlong param_1,byte param_2,char param_3)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  if (param_2 < 8) {
    uVar2 = (longlong)&switchD_149317574::switchdataD_14bc32bec +
            (longlong)(int)(&switchD_149317574::switchdataD_14bc32bec)[param_2];
    switch(param_2) {
    default:
      bVar3 = *(int *)(param_1 + 8) == 3;
      break;
    case 2:
      uVar1 = *(uint *)(param_1 + 8);
      uVar2 = (ulonglong)uVar1;
      if (param_3 == '\0') {
        bVar3 = uVar1 == 4;
      }
      else {
        bVar3 = uVar1 == 3;
      }
      break;
    case 3:
    case 4:
      bVar3 = *(int *)(param_1 + 8) == 2;
      break;
    case 5:
      uVar1 = *(int *)(param_1 + 8) - 3;
      return (ulonglong)CONCAT31((int3)(uVar1 >> 8),uVar1 < 2);
    case 6:
    case 7:
      bVar3 = *(int *)(param_1 + 8) == 4;
    }
    uVar2 = CONCAT71((int7)(uVar2 >> 8),bVar3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1493175ae FUN_1493175ae body=119 status=ok
// SIG undefined FUN_1493175ae(void)

ulonglong FUN_1493175ae(longlong param_1,byte param_2,char param_3)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  if (param_3 == '\0') {
    if (7 < param_2) {
      return 0;
    }
    uVar2 = (longlong)&switchD_1493175db::switchdataD_14bc32c0c +
            (longlong)(int)(&switchD_1493175db::switchdataD_14bc32c0c)[param_2];
    switch(param_2) {
    case 0:
    case 1:
    case 2:
      goto switchD_1493175db_caseD_0;
    default:
      uVar1 = *(uint *)(param_1 + 0xc);
      if (*(char *)(param_1 + 0x10) == '\0') goto LAB_14931760c;
      break;
    case 6:
      if (*(char *)(param_1 + 0x10) != '\0') {
        return 0;
      }
      uVar1 = *(uint *)(param_1 + 0xc);
    }
    uVar2 = (ulonglong)(uVar1 - 2);
    bVar3 = (uVar1 - 2 & 0xfffffffd) == 0;
  }
  else {
    uVar2 = 0;
    if (param_2 - 3 < 3) {
      uVar1 = *(uint *)(param_1 + 0xc);
      if (*(char *)(param_1 + 0x10) != '\0') {
        return (ulonglong)CONCAT31((int3)(uVar1 - 1 >> 8),uVar1 - 1 < 4);
      }
LAB_14931760c:
      uVar2 = (ulonglong)uVar1;
      bVar3 = uVar1 == 6;
      goto LAB_14931760f;
    }
    if (2 < param_2) {
      return 0;
    }
switchD_1493175db_caseD_0:
    if (*(char *)(param_1 + 0x10) != '\0') {
      return 0;
    }
    bVar3 = *(int *)(param_1 + 0xc) == 6;
  }
LAB_14931760f:
  return CONCAT71((int7)(uVar2 >> 8),bVar3);
}



// FUNCTION 149317626 FUN_149317626 body=128 status=ok
// SIG undefined FUN_149317626(void)

ulonglong FUN_149317626(longlong param_1,byte param_2,char param_3)

{
  uint uVar1;
  bool bVar3;
  ulonglong uVar2;
  
  if (param_3 == '\0') {
    if (1 < param_2 - 1) {
      if (1 < param_2 - 3) {
        if (param_2 != 0) {
          return 0;
        }
        uVar1 = *(int *)(param_1 + 0xc) - 1;
        return (ulonglong)CONCAT31((int3)(uVar1 >> 8),uVar1 < 4);
      }
      uVar2 = 0;
      if ((*(uint *)(param_1 + 0xc) | 2) == 3) {
        return 1;
      }
      if (*(char *)(param_1 + 0x10) != '\0') {
        return 0;
      }
      bVar3 = (*(uint *)(param_1 + 0xc) - 2 & 0xfffffffd) == 0;
      goto LAB_149317675;
    }
LAB_149317666:
    if (*(char *)(param_1 + 0x10) != '\x01') {
      return 0;
    }
  }
  else {
    if (param_2 - 1 < 2) goto LAB_149317666;
    if (param_2 - 3 < 2) {
      param_2 = *(byte *)(param_1 + 0x10);
    }
    if (param_2 != 0) {
      return 0;
    }
  }
  uVar1 = *(uint *)(param_1 + 0xc) & 0xfffffffd;
  uVar2 = (ulonglong)uVar1;
  bVar3 = uVar1 == 1;
LAB_149317675:
  return CONCAT71((int7)(uVar2 >> 8),bVar3);
}



// FUNCTION 1493176a6 FUN_1493176a6 body=86 status=ok
// SIG undefined FUN_1493176a6(void)

ulonglong FUN_1493176a6(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  cVar1 = FUN_14931755e();
  if (cVar1 != '\0') {
    cVar1 = FUN_1493175ae(param_1,param_2,param_3);
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((cVar1 != '\0') ||
       ((*(char *)(param_1 + 0x11) == '\x01' &&
        (cVar1 = FUN_149317626(param_1,param_2,param_3), cVar1 != '\0')))) goto LAB_1493176c2;
  }
  uVar2 = 0;
LAB_1493176c2:
  return uVar2 & 0xffffffff;
}



// FUNCTION 1493176fc FUN_1493176fc body=220 status=ok
// SIG undefined FUN_1493176fc(void)

void FUN_1493176fc(longlong param_1,int param_2,uint *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_48 = *(undefined4 *)(param_1 + 0x58);
    FUN_1444c1f53(&local_38,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x28,
                  *(undefined8 *)(param_1 + 0x50));
    if ((longlong)local_30 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(local_38 + uVar4) == param_2) {
          if ((int)(~uVar4 >> 2) == 0) break;
          iVar1 = *(int *)(param_1 + 0xc);
          lVar2 = *(longlong *)(param_1 + 0x88);
          lVar5 = *(longlong *)(param_1 + 0x68) + *(longlong *)(param_1 + 0x70) +
                  (ulonglong)(uint)(param_2 * *(int *)(param_1 + 200));
          if (iVar1 == 5) {
            uVar3 = *(uint *)(lVar5 + lVar2);
          }
          else if (iVar1 == 4) {
            uVar3 = (uint)*(ushort *)(lVar5 + lVar2);
          }
          else {
            if (iVar1 != 2) break;
            uVar3 = (uint)*(byte *)(lVar5 + lVar2);
          }
          *param_3 = uVar3;
          break;
        }
        uVar4 = uVar4 + 4;
      } while ((longlong)local_30 * 4 != uVar4);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493177da FUN_1493177da body=289 status=ok
// SIG undefined FUN_1493177da(void)

void FUN_1493177da(longlong param_1,int param_2,undefined2 *param_3)

{
  uint uVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_48 = *(undefined4 *)(param_1 + 0x58);
    FUN_1444c1f53(&local_38,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x28,
                  *(undefined8 *)(param_1 + 0x50));
    if ((longlong)local_30 != 0) {
      uVar3 = 0;
      do {
        if (*(int *)(local_38 + uVar3) == param_2) {
          if ((int)(~uVar3 >> 2) == 0) break;
          lVar4 = *(longlong *)(param_1 + 0x68) + *(longlong *)(param_1 + 0x70) +
                  (ulonglong)(uint)(param_2 * *(int *)(param_1 + 200));
          if (*(int *)(param_1 + 0xc) == 4) {
            uVar3 = *(ulonglong *)(lVar4 + *(longlong *)(param_1 + 0x88));
            uVar5 = (ushort)(uVar3 >> 0x10);
            uVar6 = (ushort)(uVar3 >> 0x20);
            uVar2 = (ushort)(uVar3 >> 0x30);
          }
          else {
            if (*(int *)(param_1 + 0xc) != 2) break;
            uVar1 = *(uint *)(lVar4 + *(longlong *)(param_1 + 0x88));
            auVar7 = pmovzxbw(ZEXT416(uVar1),ZEXT416(uVar1));
            uVar3 = (ulonglong)auVar7._0_4_;
            uVar5 = (ushort)(uVar1 >> 8) & 0xff;
            uVar6 = (ushort)(uVar1 >> 0x10) & 0xff;
            uVar2 = (ushort)(byte)(uVar1 >> 0x18);
          }
          *param_3 = (short)uVar3;
          param_3[1] = uVar5;
          param_3[2] = uVar6;
          param_3[3] = uVar2;
          break;
        }
        uVar3 = uVar3 + 4;
      } while ((longlong)local_30 * 4 != uVar3);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493178fc FUN_1493178fc body=237 status=ok
// SIG undefined FUN_1493178fc(void)

void FUN_1493178fc(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_68 = *(undefined4 *)(param_1 + 0x58);
    FUN_1444c1f53(&local_38,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x28,
                  *(undefined8 *)(param_1 + 0x50));
    if ((longlong)local_30 != 0) {
      uVar2 = 0;
      do {
        if (*(int *)(local_38 + uVar2) == param_2) {
          if ((int)(~uVar2 >> 2) != 0) {
            local_60 = *(undefined1 *)(param_1 + 0x10);
            local_68 = *(undefined4 *)(param_1 + 0xc);
            local_58 = &local_50;
            cVar1 = FUN_1444c1fe9(param_2,param_1 + 0x60,*(undefined8 *)(param_1 + 0x88),
                                  *(undefined4 *)(param_1 + 200));
            if (cVar1 != '\0') {
              *(undefined8 *)(param_3 + 4) = local_40;
              *param_3 = local_50;
              param_3[1] = uStack_4c;
              param_3[2] = uStack_48;
              param_3[3] = uStack_44;
            }
          }
          break;
        }
        uVar2 = uVar2 + 4;
      } while ((longlong)local_30 * 4 != uVar2);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493179ea FUN_1493179ea body=265 status=ok
// SIG undefined FUN_1493179ea(void)

void FUN_1493179ea(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70;
  undefined8 *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_78 = *(undefined4 *)(param_1 + 0x58);
    FUN_1444c1f53(&local_38,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x28,
                  *(undefined8 *)(param_1 + 0x50));
    if ((longlong)local_30 != 0) {
      uVar2 = 0;
      do {
        if (*(int *)(local_38 + uVar2) == param_2) {
          if ((int)(~uVar2 >> 2) != 0) {
            local_68 = &local_58;
            local_58 = 0;
            uStack_50 = 0;
            local_48 = 0;
            uStack_40 = 0x3ff0000000000000;
            local_70 = *(undefined1 *)(param_1 + 0x10);
            local_78 = *(undefined4 *)(param_1 + 0xc);
            cVar1 = FUN_1444c20a1(param_2,param_1 + 0x60,*(undefined8 *)(param_1 + 0x88),
                                  *(undefined4 *)(param_1 + 200));
            if (cVar1 != '\0') {
              *(undefined8 *)(param_3 + 4) = local_48;
              *(undefined8 *)(param_3 + 6) = uStack_40;
              *param_3 = (undefined4)local_58;
              param_3[1] = local_58._4_4_;
              param_3[2] = (undefined4)uStack_50;
              param_3[3] = uStack_50._4_4_;
            }
          }
          break;
        }
        uVar2 = uVar2 + 4;
      } while ((longlong)local_30 * 4 != uVar2);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149317af4 FUN_149317af4 body=271 status=ok
// SIG undefined FUN_149317af4(void)

void FUN_149317af4(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong local_b8;
  int local_b0;
  undefined8 local_a8 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_c8 = *(undefined4 *)(param_1 + 0x58);
    FUN_1444c1f53(&local_b8);
    if ((longlong)local_b0 != 0) {
      uVar2 = 0;
      do {
        if (*(int *)(local_b8 + uVar2) == param_2) {
          if (((int)(~uVar2 >> 2) != 0) && (*(int *)(param_1 + 0xc) == 6)) {
            lVar1 = *(longlong *)(param_1 + 0x70) + *(longlong *)(param_1 + 0x88) +
                    (ulonglong)(uint)(param_2 * *(int *)(param_1 + 200)) +
                    *(longlong *)(param_1 + 0x68);
            puVar3 = local_a8;
            lVar4 = 0;
            do {
              lVar5 = 0;
              do {
                *(double *)((longlong)puVar3 + lVar5) = (double)*(float *)(lVar1 + lVar5 * 2);
                lVar5 = lVar5 + 8;
              } while (lVar5 != 0x20);
              lVar4 = lVar4 + 1;
              puVar3 = puVar3 + 4;
              lVar1 = lVar1 + 4;
            } while (lVar4 != 4);
            puVar3 = local_a8;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *param_3 = *puVar3;
              puVar3 = puVar3 + 1;
              param_3 = param_3 + 1;
            }
          }
          break;
        }
        uVar2 = uVar2 + 4;
      } while ((longlong)local_b0 * 4 != uVar2);
    }
    if (local_b8 != 0) {
      FUN_1400020a8(local_b8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149317c04 FUN_149317c04 body=302 status=ok
// SIG undefined FUN_149317c04(void)

void FUN_149317c04(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(char *)(param_1 + 0x18) == '\x01') && (*(int *)(param_1 + 0x1c) != 0)) {
    local_68 = *(undefined4 *)(param_1 + 0x58);
    FUN_1444c1f53(local_30,*(int *)(param_1 + 0x1c),param_1 + 0x28,*(undefined8 *)(param_1 + 0x50));
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_144a12820(local_48,*(undefined4 *)(param_1 + 0x1c),0);
    local_60 = *(undefined4 *)(param_1 + 0x1c);
    local_68 = *(undefined4 *)(param_1 + 200);
    local_58 = local_48[0];
    cVar2 = FUN_1444c2176(*(undefined1 *)(param_1 + 0x10),param_1 + 0x60,
                          *(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0xc));
    if ((cVar2 != '\0') && (uVar3 = *(uint *)(param_1 + 0x1c), uVar3 != 0)) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        uVar1 = *(uint *)(local_30[0] + (lVar4 >> 0x1e));
        if (uVar1 < *(uint *)(param_1 + 4)) {
          *(undefined4 *)(param_2 + (ulonglong)uVar1 * 4) =
               *(undefined4 *)(local_48[0] + (lVar4 >> 0x20) * 4);
          uVar3 = *(uint *)(param_1 + 0x1c);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x100000000;
      } while (uVar5 < uVar3);
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149317eba FUN_149317eba body=163 status=ok
// SIG undefined FUN_149317eba(void)

uint FUN_149317eba(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_38 [36];
  uint local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar3 = 0;
  if (((param_2 < *(uint *)(param_1 + 4)) && (*(int *)(param_1 + 8) == 1)) &&
     (*(char *)(param_1 + 0x10) == '\0')) {
    iVar1 = *(int *)(param_1 + 0xc);
    lVar2 = *(longlong *)(param_1 + 0xb8);
    lVar4 = *(longlong *)(param_1 + 0x98) + *(longlong *)(param_1 + 0xa0) +
            (ulonglong)(*(int *)(param_1 + 200) * param_2);
    if (iVar1 == 5) {
      local_14 = *(uint *)(lVar4 + lVar2);
    }
    else if (iVar1 == 4) {
      local_14 = (uint)*(ushort *)(lVar4 + lVar2);
    }
    else {
      uVar3 = 0;
      if (iVar1 != 2) goto LAB_149317ee1;
      local_14 = (uint)*(byte *)(lVar4 + lVar2);
    }
    FUN_1493176fc(param_1,param_2,&local_14);
    uVar3 = local_14;
  }
LAB_149317ee1:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149317f5e FUN_149317f5e body=142 status=ok
// SIG undefined FUN_149317f5e(void)

void FUN_149317f5e(longlong param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (((param_2 < *(uint *)(param_1 + 4)) && (*(int *)(param_1 + 8) == 4)) &&
     (*(char *)(param_1 + 0x10) == '\0')) {
    iVar1 = *(int *)(param_1 + 0xc);
    lVar2 = *(longlong *)(param_1 + 0xb8);
    uVar5 = (ulonglong)(*(int *)(param_1 + 200) * param_2);
    *param_3 = 0;
    lVar3 = *(longlong *)(param_1 + 0x98);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    if (iVar1 == 2) {
      lVar6 = 0;
      do {
        *(ushort *)((longlong)param_3 + lVar6 * 2) =
             (ushort)*(byte *)(lVar3 + lVar4 + lVar2 + uVar5 + lVar6);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 4);
    }
    else {
      if (iVar1 != 4) {
        return;
      }
      lVar6 = 0;
      do {
        *(undefined2 *)((longlong)param_3 + lVar6 * 2) =
             *(undefined2 *)(lVar3 + lVar4 + lVar2 + uVar5 + lVar6 * 2);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 4);
    }
    FUN_1493177da();
    return;
  }
  return;
}



// FUNCTION 149317fec FUN_149317fec body=126 status=ok
// SIG undefined FUN_149317fec(void)

undefined8 * FUN_149317fec(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  if (((param_3 < *(uint *)(param_1 + 4)) && (*(int *)(param_1 + 8) == 3)) &&
     (cVar2 = FUN_1444c1fe9(param_3,param_1 + 0x90,*(undefined8 *)(param_1 + 0xb8),
                            *(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xc),
                            *(undefined1 *)(param_1 + 0x10),param_2), cVar2 != '\0')) {
    FUN_1493178fc(param_1,param_3,param_2);
    return param_2;
  }
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14931806a FUN_14931806a body=155 status=ok
// SIG undefined FUN_14931806a(void)

undefined8 * FUN_14931806a(longlong param_1,undefined8 *param_2,uint param_3)

{
  char cVar1;
  
  if ((param_3 < *(uint *)(param_1 + 4)) && (*(int *)(param_1 + 8) == 4)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0x3ff0000000000000;
    cVar1 = FUN_1444c20a1(param_3,param_1 + 0x90,*(undefined8 *)(param_1 + 0xb8),
                          *(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xc),
                          *(undefined1 *)(param_1 + 0x10),param_2);
    if (cVar1 != '\0') {
      FUN_1493179ea(param_1,param_3,param_2);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3ff0000000000000;
  return param_2;
}



// FUNCTION 149318106 FUN_149318106 body=258 status=ok
// SIG undefined FUN_149318106(void)

undefined8 * FUN_149318106(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [17];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((param_3 < *(uint *)(param_1 + 4)) && (*(int *)(param_1 + 8) == 7)) &&
     (*(int *)(param_1 + 0xc) == 6)) {
    lVar1 = *(longlong *)(param_1 + 0xa0) + *(longlong *)(param_1 + 0xb8) +
            (ulonglong)(*(int *)(param_1 + 200) * param_3) + *(longlong *)(param_1 + 0x98);
    puVar2 = local_a8;
    lVar4 = 0;
    do {
      lVar5 = 0;
      do {
        *(double *)((longlong)puVar2 + lVar5) = (double)*(float *)(lVar1 + lVar5 * 2);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x20);
      lVar4 = lVar4 + 1;
      puVar2 = puVar2 + 4;
      lVar1 = lVar1 + 4;
    } while (lVar4 != 4);
    puVar2 = local_a8;
    puVar3 = param_2;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_149317af4(param_1,param_3,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_c8);
  }
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493182bc FUN_1493182bc body=96 status=ok
// SIG undefined FUN_1493182bc(void)

void FUN_1493182bc(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 8) == 1) {
    cVar1 = FUN_1444c2176(*(undefined1 *)(param_1 + 0x10),param_1 + 0x90,
                          *(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc),
                          *(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 4),param_2);
    if (cVar1 != '\0') {
      FUN_149317c04(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14931831c FUN_14931831c body=103 status=ok
// SIG undefined FUN_14931831c(void)

void FUN_14931831c(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 8) != 2) {
    return;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1444c3ae4(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xc),
                  *(undefined1 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 4),param_1 + 0x90,
                  *(undefined8 *)(param_1 + 0xb8),param_2);
  }
  FUN_149318384(param_1,param_2);
  return;
}



// FUNCTION 149318384 FUN_149318384 body=286 status=ok
// SIG undefined FUN_149318384(void)

void FUN_149318384(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(char *)(param_1 + 0x18) == '\x01') && (*(int *)(param_1 + 0x1c) != 0)) {
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x58));
    FUN_1444c1f53(local_30,*(int *)(param_1 + 0x1c),param_1 + 0x28,*(undefined8 *)(param_1 + 0x50));
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_146c50912(local_48,*(undefined4 *)(param_1 + 0x1c),0);
    local_68 = param_1 + 0x60;
    local_60 = *(undefined8 *)(param_1 + 0x88);
    local_58 = local_48[0];
    FUN_1444c3ae4(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xc),
                  *(undefined1 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c));
    uVar2 = *(uint *)(param_1 + 0x1c);
    if (uVar2 != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        uVar1 = *(uint *)(local_30[0] + (lVar3 >> 0x1e));
        if (uVar1 < *(uint *)(param_1 + 4)) {
          *(undefined8 *)(param_2 + (ulonglong)uVar1 * 8) =
               *(undefined8 *)(local_48[0] + (lVar3 >> 0x20) * 8);
          uVar2 = *(uint *)(param_1 + 0x1c);
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x100000000;
      } while (uVar4 < uVar2);
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493184a4 FUN_1493184a4 body=306 status=ok
// SIG undefined FUN_1493184a4(void)

void FUN_1493184a4(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(char *)(param_1 + 0x18) == '\x01') && (*(int *)(param_1 + 0x1c) != 0)) {
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x58));
    FUN_1444c1f53(local_30,*(int *)(param_1 + 0x1c),param_1 + 0x28,*(undefined8 *)(param_1 + 0x50));
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_146bfab7c(local_48,*(undefined4 *)(param_1 + 0x1c),0);
    local_68 = param_1 + 0x60;
    local_60 = *(undefined8 *)(param_1 + 0x88);
    local_58 = local_48[0];
    FUN_1444c3da1(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xc),
                  *(undefined1 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c));
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x1c);
    if (*(uint *)(param_1 + 0x1c) != 0) {
      lVar3 = 0;
      uVar5 = 0;
      do {
        uVar1 = *(uint *)(local_30[0] + (lVar3 >> 0x1e));
        if (uVar1 < *(uint *)(param_1 + 4)) {
          uVar2 = *(undefined8 *)(local_48[0] + (lVar3 >> 0x20) * 0xc);
          *(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc) =
               *(undefined4 *)(local_48[0] + 8 + (lVar3 >> 0x20) * 0xc);
          *(undefined8 *)(param_2 + (ulonglong)uVar1 * 0xc) = uVar2;
          uVar4 = (ulonglong)*(uint *)(param_1 + 0x1c);
        }
        uVar5 = uVar5 + 1;
        lVar3 = lVar3 + 0x100000000;
      } while (uVar5 < uVar4);
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493185d8 FUN_1493185d8 body=297 status=ok
// SIG undefined FUN_1493185d8(void)

void FUN_1493185d8(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(char *)(param_1 + 0x18) == '\x01') && (*(int *)(param_1 + 0x1c) != 0)) {
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x58));
    FUN_1444c1f53(local_30,*(int *)(param_1 + 0x1c),param_1 + 0x28,*(undefined8 *)(param_1 + 0x50));
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_140330574(local_48,*(undefined4 *)(param_1 + 0x1c),0);
    local_68 = param_1 + 0x60;
    local_60 = *(undefined8 *)(param_1 + 0x88);
    local_58 = local_48[0];
    FUN_1444c4046(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xc),
                  *(undefined1 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c));
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x1c);
    if (*(uint *)(param_1 + 0x1c) != 0) {
      lVar7 = 0;
      uVar9 = 0;
      do {
        uVar3 = *(uint *)(local_30[0] + (lVar7 >> 0x1e));
        if (uVar3 < *(uint *)(param_1 + 4)) {
          puVar1 = (undefined4 *)(local_48[0] + (lVar7 >> 0x20) * 0x10);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          puVar2 = (undefined4 *)(param_2 + (ulonglong)uVar3 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          uVar8 = (ulonglong)*(uint *)(param_1 + 0x1c);
        }
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 0x100000000;
      } while (uVar9 < uVar8);
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14931873e FUN_14931873e body=59 status=ok
// SIG undefined FUN_14931873e(void)

void FUN_14931873e(longlong param_1,undefined8 *param_2)

{
  if ((*(longlong *)(param_1 + 0x98) != 0) || (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_144aa29e6(param_2,*(undefined4 *)(param_1 + 4),0);
  }
  FUN_1493182bc(param_1,*param_2);
  return;
}



// FUNCTION 14931877a FUN_14931877a body=56 status=ok
// SIG undefined FUN_14931877a(void)

void FUN_14931877a(longlong param_1,undefined8 *param_2)

{
  if ((*(longlong *)(param_1 + 0x98) != 0) || (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_1493187b2(param_2,*(undefined4 *)(param_1 + 4));
  }
  FUN_14931831c(param_1,*param_2);
  return;
}



// FUNCTION 1493187b2 FUN_1493187b2 body=101 status=ok
// SIG undefined FUN_1493187b2(void)

void FUN_1493187b2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140752556(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149318818 FUN_149318818 body=95 status=ok
// SIG undefined FUN_149318818(void)

void FUN_149318818(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x98) != 0) || (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_140676836(param_2,*(undefined4 *)(param_1 + 4),0);
  }
  lVar3 = *param_2;
  FUN_14931742e(param_1,lVar3);
  if (*(int *)(param_1 + 4) != 0) {
    lVar3 = lVar3 + 8;
    uVar2 = 0;
    do {
      puVar1 = (ulonglong *)(lVar3 + -4);
      *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0xc;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}



// FUNCTION 1493188b4 FUN_1493188b4 body=142 status=ok
// SIG undefined FUN_1493188b4(void)

longlong * FUN_1493188b4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if ((longlong)*(int *)(param_1 + 0x20) == 0) {
    return (longlong *)0x0;
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar8 = plVar2 + (longlong)*(int *)(param_1 + 0x20) * 4;
  iVar1 = (int)param_2[1];
LAB_1493188d6:
  if ((int)plVar2[1] == iVar1) {
    if (iVar1 < 2) {
      return plVar2;
    }
    lVar7 = 0;
    do {
      uVar5 = *(ushort *)(*plVar2 + lVar7);
      uVar6 = (ulonglong)uVar5;
      uVar3 = *(ushort *)(*param_2 + lVar7);
      if (uVar5 == uVar3) {
        if (uVar5 == 0) {
          return plVar2;
        }
      }
      else {
        if (0x7f < (uVar3 | uVar5)) goto LAB_14931893a;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar4 = (ulonglong)uVar3;
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar4]) goto LAB_14931893a;
      }
      lVar7 = lVar7 + 2;
    } while( true );
  }
  if ((int)plVar2[1] + iVar1 == 1) {
    return plVar2;
  }
  goto LAB_14931892a;
LAB_14931893a:
  if (uVar5 == uVar3) {
    return plVar2;
  }
LAB_14931892a:
  plVar2 = plVar2 + 4;
  if (plVar2 == plVar8) {
    return (longlong *)0x0;
  }
  goto LAB_1493188d6;
}



// FUNCTION 149318942 FUN_149318942 body=68 status=ok
// SIG undefined FUN_149318942(void)

void FUN_149318942(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145c74b51(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14932ad02(param_1,param_2);
  return;
}



// FUNCTION 149318988 FUN_149318988 body=68 status=ok
// SIG undefined FUN_149318988(void)

void FUN_149318988(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145c74a27(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14932af36(param_1,param_2);
  return;
}



// FUNCTION 1493189ce FUN_1493189ce body=68 status=ok
// SIG undefined FUN_1493189ce(void)

void FUN_1493189ce(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145c74b26(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14932aff8(param_1,param_2);
  return;
}



// FUNCTION 149318a14 FUN_149318a14 body=68 status=ok
// SIG undefined FUN_149318a14(void)

void FUN_149318a14(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145c74afb(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14932b068(param_1,param_2);
  return;
}



// FUNCTION 149318a5a FUN_149318a5a body=68 status=ok
// SIG undefined FUN_149318a5a(void)

void FUN_149318a5a(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145c74ad0(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14932b130(param_1,param_2);
  return;
}



// FUNCTION 149318aa0 FUN_149318aa0 body=68 status=ok
// SIG undefined FUN_149318aa0(void)

void FUN_149318aa0(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145c74a7a(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14932b206(param_1,param_2);
  return;
}



// FUNCTION 149318ae6 FUN_149318ae6 body=68 status=ok
// SIG undefined FUN_149318ae6(void)

void FUN_149318ae6(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145c749ff(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14932b2d6(param_1,param_2);
  return;
}



// FUNCTION 149318b2c FUN_149318b2c body=68 status=ok
// SIG undefined FUN_149318b2c(void)

void FUN_149318b2c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145c74a4f(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14932b336(param_1,param_2);
  return;
}



// FUNCTION 149318b72 FUN_149318b72 body=73 status=ok
// SIG undefined FUN_149318b72(void)

void FUN_149318b72(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) == 0x20) {
    FUN_14932b408(param_1);
    FUN_145c74c1e(param_1,0x14);
    return;
  }
  FUN_145c74c1e(param_1,0x14);
  *(undefined4 *)(param_1 + 0x48) = 0x20;
  FUN_145abaca2(param_1);
  return;
}



// FUNCTION 149318bbc FUN_149318bbc body=6922 status=ok
// SIG undefined FUN_149318bbc(void)

/* WARNING: Removing unreachable block (ram,0x00014931a5fb) */

void FUN_149318bbc(longlong param_1)

{
  undefined2 **ppuVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined2 **ppuVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_188 [32];
  longlong local_168;
  ulonglong local_160;
  int local_154;
  longlong local_150;
  longlong local_148 [2];
  longlong local_138;
  undefined8 uStack_130;
  undefined2 *local_128;
  undefined8 local_120;
  longlong local_118 [3];
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1449b8608(&local_b8,param_1,L"_scene_");
  local_168 = param_1;
  if (*(int *)(param_1 + 0x58) != 0) {
    plVar12 = local_118 + 2;
    lVar13 = 0;
    uVar16 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0x50);
      plVar14 = (longlong *)(lVar8 + (lVar13 >> 0x19));
      local_118[0] = 0;
      local_118[1] = 0;
      FUN_144a83b10(local_118,uVar16 & 0xffffffff);
      FUN_1407ec8fc(plVar12,&local_b8,local_118);
      if ((longlong *)(lVar8 + (lVar13 >> 0x19) + 0x70) != plVar12) {
        if (plVar14[0xe] != 0) {
          FUN_1400020a8();
        }
        plVar14[0xe] = local_118[2];
        local_118[2] = 0;
        *(int *)(plVar14 + 0xf) = (int)uStack_100;
        *(undefined4 *)((longlong)plVar14 + 0x7c) = uStack_100._4_4_;
        uStack_100 = 0;
      }
      if (local_118[2] != 0) {
        FUN_1400020a8();
      }
      param_1 = local_168;
      if (local_118[0] != 0) {
        FUN_1400020a8();
      }
      if ((int)plVar14[1] < 2) {
        iVar6 = (int)plVar14[0xf] + -1;
        if ((int)plVar14[0xf] == 0) {
          iVar6 = 0;
        }
        FUN_1402980a2(plVar14,plVar14[0xe],iVar6);
      }
      FUN_1492ea756(plVar12,plVar14,0);
      if (plVar14 != plVar12) {
        if (*plVar14 != 0) {
          FUN_1400020a8();
        }
        *plVar14 = local_118[2];
        local_118[2] = 0;
        *(int *)(plVar14 + 1) = (int)uStack_100;
        *(undefined4 *)((longlong)plVar14 + 0xc) = uStack_100._4_4_;
        uStack_100 = 0;
      }
      if (local_118[2] != 0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 + 1;
      lVar13 = lVar13 + 0x100000000;
    } while (uVar16 < (ulonglong)(longlong)*(int *)(param_1 + 0x58));
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_1449b8608(local_118 + 2,param_1,L"_node_");
  FUN_1449b8608(local_118,param_1,L"_joint_");
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar13 = 0x210;
    uVar16 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0x60);
      ppuVar1 = (undefined2 **)(lVar8 + lVar13);
      iVar6 = *(int *)(lVar8 + -400 + lVar13);
      plVar12 = local_118 + 2;
      if (iVar6 == 2) {
        plVar12 = local_118;
      }
      FUN_144a787a6(ppuVar1,plVar12);
      local_138 = 0;
      uStack_130 = 0;
      FUN_144a83b10(&local_138,uVar16 & 0xffffffff);
      FUN_1407ec8fc(&local_128,ppuVar1,&local_138);
      if (ppuVar1 != &local_128) {
        if (*(longlong *)(lVar8 + lVar13) != 0) {
          FUN_1400020a8();
        }
        *(undefined2 **)(lVar8 + lVar13) = local_128;
        local_128 = (undefined2 *)0x0;
        *(int *)(lVar8 + 8 + lVar13) = (int)local_120;
        *(undefined4 *)(lVar8 + 0xc + lVar13) = local_120._4_4_;
        local_120 = 0;
      }
      if (local_128 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      ppuVar11 = (undefined2 **)(lVar8 + lVar13 + -0x210);
      if (*(int *)(lVar8 + lVar13 + -0x208) < 2) {
        iVar10 = *(int *)(lVar8 + 8 + lVar13);
        iVar2 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar2 = 0;
        }
        FUN_1402980a2(ppuVar11,*(undefined8 *)(lVar8 + lVar13),iVar2);
      }
      FUN_1492ea756(&local_128,ppuVar11,iVar6 == 2);
      if (ppuVar11 != &local_128) {
        if (*(longlong *)(lVar8 + -0x210 + lVar13) != 0) {
          FUN_1400020a8();
        }
        *(undefined2 **)(lVar8 + -0x210 + lVar13) = local_128;
        local_128 = (undefined2 *)0x0;
        *(int *)(lVar8 + -0x208 + lVar13) = (int)local_120;
        *(undefined4 *)(lVar8 + -0x204 + lVar13) = local_120._4_4_;
        local_120 = 0;
      }
      if (local_128 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_144a2b0a4(ppuVar11,&local_128);
      puVar7 = &DAT_149dfb77a;
      if ((int)local_120 != 0) {
        puVar7 = local_128;
      }
      iVar6 = (int)local_120 + -1;
      if ((int)local_120 == 0) {
        iVar6 = 0;
      }
      uVar5 = FUN_144a49b4a(iVar6,puVar7);
      iVar6 = FUN_1456cf568(&local_b8,uVar5,&local_128);
      if (iVar6 != -1) {
        puVar7 = &DAT_149dfb77a;
        if (*(int *)(lVar8 + 8 + lVar13) != 0) {
          puVar7 = *ppuVar1;
        }
        FUN_145c42226(local_148,puVar7);
        FUN_140ba7826(&local_138,&DAT_149e01f60,local_148);
        iVar6 = (int)uStack_130 + -1;
        if ((int)uStack_130 == 0) {
          iVar6 = 0;
        }
        FUN_1400020e8(ppuVar11,local_138,iVar6);
        if (local_138 != 0) {
          FUN_1400020a8();
        }
        if (local_148[0] != 0) {
          FUN_1400020a8();
        }
      }
      FUN_14482b35e(&local_b8,&local_138,ppuVar11,0);
      if (local_128 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 + 1;
      lVar13 = lVar13 + 0x220;
      param_1 = local_168;
    } while ((longlong)uVar16 < (longlong)*(int *)(local_168 + 0x68));
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  lVar13 = local_168;
  plVar12 = local_118 + 2;
  if (local_118[2] != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_b8);
  FUN_1449b8608(&local_b8,lVar13,L"_texture_");
  if (0 < *(int *)(lVar13 + 0xd8)) {
    lVar8 = 0x70;
    uVar16 = 0;
    do {
      lVar13 = *(longlong *)(lVar13 + 0xd0);
      local_118[0] = 0;
      local_118[1] = 0;
      FUN_144a83b10(local_118,uVar16 & 0xffffffff);
      FUN_1407ec8fc(plVar12,&local_b8,local_118);
      if ((longlong *)(lVar13 + lVar8) != plVar12) {
        if (*(longlong *)(lVar13 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + lVar8) = local_118[2];
        local_118[2] = 0;
        *(int *)(lVar13 + 8 + lVar8) = (int)uStack_100;
        *(undefined4 *)(lVar13 + 0xc + lVar8) = uStack_100._4_4_;
        uStack_100 = 0;
      }
      if (local_118[2] != 0) {
        FUN_1400020a8();
      }
      if (local_118[0] != 0) {
        FUN_1400020a8();
      }
      plVar14 = (longlong *)(lVar13 + lVar8 + -0x60);
      if (*(int *)(lVar13 + lVar8 + -0x58) < 2) {
        lVar15 = *(longlong *)(lVar13 + -0x70 + lVar8);
        if (*(int *)(lVar15 + 8) < 2) {
          if (1 < *(int *)(lVar15 + 0x18)) {
            cVar3 = FUN_144a791f8(lVar15 + 0x10,&DAT_14bc30efa,5,1);
            if (cVar3 == '\0') {
              FUN_140c50e86(plVar12,*(longlong *)(lVar13 + -0x70 + lVar8) + 0x10,1);
              if (plVar14 != plVar12) {
                if (*(longlong *)(lVar13 + -0x60 + lVar8) != 0) {
                  FUN_1400020a8();
                }
                *(longlong *)(lVar13 + -0x60 + lVar8) = local_118[2];
                local_118[2] = 0;
                *(int *)(lVar13 + -0x58 + lVar8) = (int)uStack_100;
                *(undefined4 *)(lVar13 + -0x54 + lVar8) = uStack_100._4_4_;
                uStack_100 = 0;
              }
              if (local_118[2] != 0) {
                FUN_1400020a8();
              }
              goto LAB_1493191f1;
            }
          }
          iVar6 = *(int *)(lVar13 + 8 + lVar8);
          iVar10 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar10 = 0;
          }
          FUN_1402980a2(plVar14,*(undefined8 *)(lVar13 + lVar8),iVar10);
        }
        else {
          FUN_144a787a6(plVar14);
        }
      }
LAB_1493191f1:
      FUN_1492ea756(plVar12,plVar14,0);
      if (plVar14 != plVar12) {
        if (*(longlong *)(lVar13 + -0x60 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + -0x60 + lVar8) = local_118[2];
        local_118[2] = 0;
        *(int *)(lVar13 + -0x58 + lVar8) = (int)uStack_100;
        *(undefined4 *)(lVar13 + -0x54 + lVar8) = uStack_100._4_4_;
        uStack_100 = 0;
      }
      if (local_118[2] != 0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 + 1;
      lVar8 = lVar8 + 0x80;
      lVar13 = local_168;
    } while ((longlong)uVar16 < (longlong)*(int *)(local_168 + 0xd8));
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  lVar13 = local_168;
  FUN_1449b8608(&local_b8,local_168,L"_camera_");
  if (0 < *(int *)(lVar13 + 0x78)) {
    lVar8 = 0x80;
    uVar16 = 0;
    do {
      lVar13 = *(longlong *)(lVar13 + 0x70);
      local_118[0] = 0;
      local_118[1] = 0;
      FUN_144a83b10(local_118,uVar16 & 0xffffffff);
      FUN_1407ec8fc(plVar12,&local_b8,local_118);
      if ((longlong *)(lVar8 + lVar13) != plVar12) {
        if (*(longlong *)(lVar13 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + lVar8) = local_118[2];
        local_118[2] = 0;
        *(int *)(lVar13 + 8 + lVar8) = (int)uStack_100;
        *(undefined4 *)(lVar13 + 0xc + lVar8) = uStack_100._4_4_;
        uStack_100 = 0;
      }
      if (local_118[2] != 0) {
        FUN_1400020a8();
      }
      if (local_118[0] != 0) {
        FUN_1400020a8();
      }
      plVar14 = (longlong *)(lVar8 + lVar13 + -0x78);
      if (*(int *)(lVar8 + lVar13 + -0x70) < 2) {
        if (*(int *)(*(longlong *)(lVar13 + -0x80 + lVar8) + 8) < 2) {
          iVar6 = *(int *)(lVar13 + 8 + lVar8);
          iVar10 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar10 = 0;
          }
          FUN_1402980a2(plVar14,*(undefined8 *)(lVar13 + lVar8),iVar10);
        }
        else {
          FUN_144a787a6(plVar14);
        }
      }
      FUN_1492ea756(plVar12,plVar14,0);
      if (plVar14 != plVar12) {
        if (*(longlong *)(lVar13 + -0x78 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + -0x78 + lVar8) = local_118[2];
        local_118[2] = 0;
        *(int *)(lVar13 + -0x70 + lVar8) = (int)uStack_100;
        *(undefined4 *)(lVar13 + -0x6c + lVar8) = uStack_100._4_4_;
        uStack_100 = 0;
      }
      if (local_118[2] != 0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 + 1;
      lVar8 = lVar8 + 0x90;
      lVar13 = local_168;
    } while ((longlong)uVar16 < (longlong)*(int *)(local_168 + 0x78));
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1449b8608(&local_b8,lVar13,L"_light_");
  if (0 < *(int *)(lVar13 + 0x88)) {
    lVar8 = 0x48;
    uVar16 = 0;
    do {
      lVar13 = *(longlong *)(lVar13 + 0x80);
      local_118[0] = 0;
      local_118[1] = 0;
      FUN_144a83b10(local_118,uVar16 & 0xffffffff);
      FUN_1407ec8fc(plVar12,&local_b8,local_118);
      if ((longlong *)(lVar13 + lVar8) != plVar12) {
        if (*(longlong *)(lVar13 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + lVar8) = local_118[2];
        local_118[2] = 0;
        *(int *)(lVar13 + 8 + lVar8) = (int)uStack_100;
        *(undefined4 *)(lVar13 + 0xc + lVar8) = uStack_100._4_4_;
        uStack_100 = 0;
      }
      if (local_118[2] != 0) {
        FUN_1400020a8();
      }
      if (local_118[0] != 0) {
        FUN_1400020a8();
      }
      plVar14 = (longlong *)(lVar13 + lVar8 + -0x40);
      if (*(int *)(lVar13 + lVar8 + -0x38) < 2) {
        lVar15 = *(longlong *)(lVar13 + -0x48 + lVar8);
        if ((lVar15 == 0) || (*(int *)(lVar15 + 8) < 2)) {
          iVar6 = *(int *)(lVar13 + 8 + lVar8);
          iVar10 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar10 = 0;
          }
          FUN_1402980a2(plVar14,*(undefined8 *)(lVar13 + lVar8),iVar10);
        }
        else {
          FUN_144a787a6(plVar14);
        }
      }
      FUN_1492ea756(plVar12,plVar14,0);
      if (plVar14 != plVar12) {
        if (*(longlong *)(lVar13 + -0x40 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + -0x40 + lVar8) = local_118[2];
        local_118[2] = 0;
        *(int *)(lVar13 + -0x38 + lVar8) = (int)uStack_100;
        *(undefined4 *)(lVar13 + -0x34 + lVar8) = uStack_100._4_4_;
        uStack_100 = 0;
      }
      if (local_118[2] != 0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 + 1;
      lVar8 = lVar8 + 0x58;
      lVar13 = local_168;
    } while ((longlong)uVar16 < (longlong)*(int *)(local_168 + 0x88));
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  lVar13 = local_168;
  FUN_1449b8608(local_118,local_168,L"_material_");
  if (0 < *(int *)(lVar13 + 0xe8)) {
    lVar8 = 0x360;
    uVar16 = 0;
    do {
      lVar13 = *(longlong *)(lVar13 + 0xe0);
      local_118[2] = 0;
      uStack_100 = 0;
      FUN_144a83b10(local_118 + 2,uVar16 & 0xffffffff);
      FUN_1407ec8fc(&local_b8,local_118,local_118 + 2);
      if ((longlong *)(lVar8 + lVar13) != &local_b8) {
        if (*(longlong *)(lVar13 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + lVar8) = local_b8;
        local_b8 = 0;
        *(int *)(lVar13 + 8 + lVar8) = (int)uStack_b0;
        *(undefined4 *)(lVar13 + 0xc + lVar8) = uStack_b0._4_4_;
        uStack_b0 = 0;
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (local_118[2] != 0) {
        FUN_1400020a8();
      }
      plVar12 = (longlong *)(lVar8 + lVar13 + -0x360);
      if (*(int *)(lVar8 + lVar13 + -0x358) < 2) {
        iVar6 = *(int *)(lVar13 + 8 + lVar8);
        iVar10 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar10 = 0;
        }
        FUN_1402980a2(plVar12,*(undefined8 *)(lVar13 + lVar8),iVar10);
      }
      FUN_1492ea756(&local_b8,plVar12,0);
      if (plVar12 != &local_b8) {
        if (*(longlong *)(lVar13 + -0x360 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + -0x360 + lVar8) = local_b8;
        local_b8 = 0;
        *(int *)(lVar13 + -0x358 + lVar8) = (int)uStack_b0;
        *(undefined4 *)(lVar13 + -0x354 + lVar8) = uStack_b0._4_4_;
        uStack_b0 = 0;
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 + 1;
      lVar8 = lVar8 + 0x370;
      lVar13 = local_168;
    } while ((longlong)uVar16 < (longlong)*(int *)(local_168 + 0xe8));
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1449b8608(local_118,lVar13,L"_skin_");
  if (0 < *(int *)(lVar13 + 0x98)) {
    lVar8 = 0x88;
    uVar16 = 0;
    do {
      lVar13 = *(longlong *)(lVar13 + 0x90);
      local_118[2] = 0;
      uStack_100 = 0;
      FUN_144a83b10(local_118 + 2,uVar16 & 0xffffffff);
      FUN_1407ec8fc(&local_b8,local_118,local_118 + 2);
      if ((longlong *)(lVar8 + lVar13) != &local_b8) {
        if (*(longlong *)(lVar13 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + lVar8) = local_b8;
        local_b8 = 0;
        *(int *)(lVar13 + 8 + lVar8) = (int)uStack_b0;
        *(undefined4 *)(lVar13 + 0xc + lVar8) = uStack_b0._4_4_;
        uStack_b0 = 0;
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (local_118[2] != 0) {
        FUN_1400020a8();
      }
      plVar12 = (longlong *)(lVar8 + lVar13 + -0x80);
      if (*(int *)(lVar8 + lVar13 + -0x78) < 2) {
        iVar6 = *(int *)(lVar13 + 8 + lVar8);
        iVar10 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar10 = 0;
        }
        FUN_1402980a2(plVar12,*(undefined8 *)(lVar13 + lVar8),iVar10);
      }
      FUN_1492ea756(&local_b8,plVar12,0);
      if (plVar12 != &local_b8) {
        if (*(longlong *)(lVar13 + -0x80 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + -0x80 + lVar8) = local_b8;
        local_b8 = 0;
        *(int *)(lVar13 + -0x78 + lVar8) = (int)uStack_b0;
        *(undefined4 *)(lVar13 + -0x74 + lVar8) = uStack_b0._4_4_;
        uStack_b0 = 0;
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 + 1;
      lVar8 = lVar8 + 0x98;
      lVar13 = local_168;
    } while ((longlong)uVar16 < (longlong)*(int *)(local_168 + 0x98));
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1449b8608(local_118,lVar13,L"_animation_");
  if (0 < *(int *)(lVar13 + 0xa8)) {
    lVar8 = 0x80;
    uVar16 = 0;
    do {
      lVar13 = *(longlong *)(lVar13 + 0xa0);
      local_118[2] = 0;
      uStack_100 = 0;
      FUN_144a83b10(local_118 + 2,uVar16 & 0xffffffff);
      FUN_1407ec8fc(&local_b8,local_118,local_118 + 2);
      if ((longlong *)(lVar8 + lVar13) != &local_b8) {
        if (*(longlong *)(lVar13 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + lVar8) = local_b8;
        local_b8 = 0;
        *(int *)(lVar13 + 8 + lVar8) = (int)uStack_b0;
        *(undefined4 *)(lVar13 + 0xc + lVar8) = uStack_b0._4_4_;
        uStack_b0 = 0;
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (local_118[2] != 0) {
        FUN_1400020a8();
      }
      plVar12 = (longlong *)(lVar8 + lVar13 + -0x80);
      if (*(int *)(lVar8 + lVar13 + -0x78) < 2) {
        iVar6 = *(int *)(lVar13 + 8 + lVar8);
        iVar10 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar10 = 0;
        }
        FUN_1402980a2(plVar12,*(undefined8 *)(lVar13 + lVar8),iVar10);
      }
      FUN_1492ea756(&local_b8,plVar12,0);
      if (plVar12 != &local_b8) {
        if (*(longlong *)(lVar13 + -0x80 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + -0x80 + lVar8) = local_b8;
        local_b8 = 0;
        *(int *)(lVar13 + -0x78 + lVar8) = (int)uStack_b0;
        *(undefined4 *)(lVar13 + -0x74 + lVar8) = uStack_b0._4_4_;
        uStack_b0 = 0;
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 + 1;
      lVar8 = lVar8 + 0x90;
      lVar13 = local_168;
    } while ((longlong)uVar16 < (longlong)*(int *)(local_168 + 0xa8));
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1449b8608(local_118,lVar13,L"_image_");
  if (0 < *(int *)(lVar13 + 0xb8)) {
    lVar8 = 0x98;
    uVar16 = 0;
    do {
      lVar13 = *(longlong *)(lVar13 + 0xb0);
      local_118[2] = 0;
      uStack_100 = 0;
      FUN_144a83b10(local_118 + 2,uVar16 & 0xffffffff);
      FUN_1407ec8fc(&local_b8,local_118,local_118 + 2);
      if ((longlong *)(lVar8 + lVar13) != &local_b8) {
        if (*(longlong *)(lVar13 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + lVar8) = local_b8;
        local_b8 = 0;
        *(int *)(lVar13 + 8 + lVar8) = (int)uStack_b0;
        *(undefined4 *)(lVar13 + 0xc + lVar8) = uStack_b0._4_4_;
        uStack_b0 = 0;
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (local_118[2] != 0) {
        FUN_1400020a8();
      }
      plVar12 = (longlong *)(lVar8 + lVar13 + -0x98);
      if (*(int *)(lVar8 + lVar13 + -0x90) < 2) {
        iVar6 = *(int *)(lVar13 + 8 + lVar8);
        iVar10 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar10 = 0;
        }
        FUN_1402980a2(plVar12,*(undefined8 *)(lVar13 + lVar8),iVar10);
      }
      FUN_1492ea756(&local_b8,plVar12,0);
      if (plVar12 != &local_b8) {
        if (*(longlong *)(lVar13 + -0x98 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + -0x98 + lVar8) = local_b8;
        local_b8 = 0;
        *(int *)(lVar13 + -0x90 + lVar8) = (int)uStack_b0;
        *(undefined4 *)(lVar13 + -0x8c + lVar8) = uStack_b0._4_4_;
        uStack_b0 = 0;
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 + 1;
      lVar8 = lVar8 + 0xa8;
      lVar13 = local_168;
    } while ((longlong)uVar16 < (longlong)*(int *)(local_168 + 0xb8));
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1449b8608(local_118,lVar13,L"_mesh_");
  if (0 < *(int *)(lVar13 + 0x48)) {
    lVar8 = 0x90;
    uVar16 = 0;
    do {
      lVar13 = *(longlong *)(lVar13 + 0x40);
      local_118[2] = 0;
      uStack_100 = 0;
      FUN_144a83b10(local_118 + 2,uVar16 & 0xffffffff);
      FUN_1407ec8fc(&local_b8,local_118,local_118 + 2);
      if ((longlong *)(lVar8 + lVar13) != &local_b8) {
        if (*(longlong *)(lVar13 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + lVar8) = local_b8;
        local_b8 = 0;
        *(int *)(lVar13 + 8 + lVar8) = (int)uStack_b0;
        *(undefined4 *)(lVar13 + 0xc + lVar8) = uStack_b0._4_4_;
        uStack_b0 = 0;
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (local_118[2] != 0) {
        FUN_1400020a8();
      }
      plVar12 = (longlong *)(lVar8 + lVar13 + -0x90);
      if (*(int *)(lVar8 + lVar13 + -0x88) < 2) {
        iVar6 = *(int *)(lVar13 + 8 + lVar8);
        iVar10 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar10 = 0;
        }
        FUN_1402980a2(plVar12,*(undefined8 *)(lVar13 + lVar8),iVar10);
      }
      FUN_1492ea756(&local_b8,plVar12,0);
      if (plVar12 != &local_b8) {
        if (*(longlong *)(lVar13 + -0x90 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + -0x90 + lVar8) = local_b8;
        local_b8 = 0;
        *(int *)(lVar13 + -0x88 + lVar8) = (int)uStack_b0;
        *(undefined4 *)(lVar13 + -0x84 + lVar8) = uStack_b0._4_4_;
        uStack_b0 = 0;
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 + 1;
      lVar8 = lVar8 + 0xa8;
      lVar13 = local_168;
    } while ((longlong)uVar16 < (longlong)*(int *)(local_168 + 0x48));
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_118 + 2,L"Material_");
  iVar6 = *(int *)(lVar13 + 0xe8);
  if (0 < iVar6) {
    lVar8 = 0;
    lVar15 = 0;
    do {
      lVar13 = *(longlong *)(lVar13 + 0xe0);
      if (1 < *(int *)(lVar13 + 8 + lVar8)) {
        plVar12 = (longlong *)(lVar8 + lVar13);
        FUN_1446f470e(local_118,*plVar12,1);
        if (local_118[0] == 0) {
          FUN_140474144(&local_b8,local_118 + 2,plVar12);
          if (plVar12 != &local_b8) {
            if (*(longlong *)(lVar13 + lVar8) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar13 + lVar8) = local_b8;
            local_b8 = 0;
            *(int *)(lVar13 + 8 + lVar8) = (int)uStack_b0;
            *(undefined4 *)(lVar13 + 0xc + lVar8) = uStack_b0._4_4_;
            uStack_b0 = 0;
          }
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
        }
        iVar6 = *(int *)(local_168 + 0xe8);
      }
      lVar15 = lVar15 + 1;
      lVar8 = lVar8 + 0x370;
      lVar13 = local_168;
    } while (lVar15 < iVar6);
  }
  if (local_118[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_118 + 2,L"Texture_");
  iVar6 = *(int *)(lVar13 + 0xd8);
  if (0 < iVar6) {
    lVar8 = 0x10;
    lVar15 = 0;
    do {
      lVar13 = *(longlong *)(lVar13 + 0xd0);
      if (1 < *(int *)(lVar13 + 8 + lVar8)) {
        plVar12 = (longlong *)(lVar8 + lVar13);
        FUN_1446f470e(local_118,*plVar12,1);
        if (local_118[0] == 0) {
          FUN_140474144(&local_b8,local_118 + 2,plVar12);
          if (plVar12 != &local_b8) {
            if (*(longlong *)(lVar13 + lVar8) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar13 + lVar8) = local_b8;
            local_b8 = 0;
            *(int *)(lVar13 + 8 + lVar8) = (int)uStack_b0;
            *(undefined4 *)(lVar13 + 0xc + lVar8) = uStack_b0._4_4_;
            uStack_b0 = 0;
          }
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
        }
        iVar6 = *(int *)(local_168 + 0xd8);
      }
      lVar15 = lVar15 + 1;
      lVar8 = lVar8 + 0x80;
      lVar13 = local_168;
    } while (lVar15 < iVar6);
  }
  if (local_118[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_118 + 2,L"Mesh_");
  iVar6 = *(int *)(lVar13 + 0x48);
  if (0 < iVar6) {
    lVar8 = 0;
    lVar15 = 0;
    do {
      lVar13 = *(longlong *)(lVar13 + 0x40);
      if (1 < *(int *)(lVar13 + 8 + lVar8)) {
        plVar12 = (longlong *)(lVar8 + lVar13);
        FUN_1446f470e(local_118,*plVar12,1);
        if (local_118[0] == 0) {
          FUN_140474144(&local_b8,local_118 + 2,plVar12);
          if (plVar12 != &local_b8) {
            if (*(longlong *)(lVar13 + lVar8) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar13 + lVar8) = local_b8;
            local_b8 = 0;
            *(int *)(lVar13 + 8 + lVar8) = (int)uStack_b0;
            *(undefined4 *)(lVar13 + 0xc + lVar8) = uStack_b0._4_4_;
            uStack_b0 = 0;
          }
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
        }
        iVar6 = *(int *)(local_168 + 0x48);
      }
      lVar15 = lVar15 + 1;
      lVar8 = lVar8 + 0xa8;
      lVar13 = local_168;
    } while (lVar15 < iVar6);
  }
  if (local_118[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_118 + 2);
  iVar6 = *(int *)(lVar13 + 0xa8);
  if (0 < iVar6) {
    lVar8 = 0;
    lVar15 = 0;
    do {
      lVar13 = *(longlong *)(lVar13 + 0xa0);
      if (1 < *(int *)(lVar13 + 8 + lVar8)) {
        plVar12 = (longlong *)(lVar8 + lVar13);
        FUN_1446f470e(local_118,*plVar12,1);
        if (local_118[0] == 0) {
          FUN_140474144(&local_b8,local_118 + 2,plVar12);
          if (plVar12 != &local_b8) {
            if (*(longlong *)(lVar13 + lVar8) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar13 + lVar8) = local_b8;
            local_b8 = 0;
            *(int *)(lVar13 + 8 + lVar8) = (int)uStack_b0;
            *(undefined4 *)(lVar13 + 0xc + lVar8) = uStack_b0._4_4_;
            uStack_b0 = 0;
          }
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
        }
        iVar6 = *(int *)(local_168 + 0xa8);
      }
      lVar15 = lVar15 + 1;
      lVar8 = lVar8 + 0x90;
      lVar13 = local_168;
    } while (lVar15 < iVar6);
  }
  if (local_118[2] != 0) {
    FUN_1400020a8();
  }
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  iVar6 = *(int *)(lVar13 + 0x48);
  if (0 < iVar6) {
    lVar8 = 0;
    local_160 = 0;
    do {
      lVar17 = *(longlong *)(lVar13 + 0x40);
      lVar15 = lVar8 * 0xa8;
      if (0 < *(int *)(lVar17 + 0x18 + lVar15)) {
        local_e8 = 0;
        local_e0 = 0;
        local_118[2] = 0;
        uStack_100 = 0;
        local_dc = 0xffffffff00000080;
        local_d4 = 0;
        local_c8 = 0;
        local_c0 = 0;
        lVar9 = (longlong)*(int *)(lVar17 + 0x38 + lVar15);
        lVar13 = local_168;
        if (lVar9 != 0) {
          lVar17 = *(longlong *)(lVar17 + 0x30 + lVar15);
          lVar9 = lVar9 * 0x10;
          local_160 = (ulonglong)((int)local_160 + (int)(lVar9 - 0x10U >> 4) + 1);
          do {
            FUN_14482b35e(&local_b8,local_118,lVar17,0);
            FUN_14482b35e(local_118 + 2,local_118,lVar17);
            lVar13 = local_168;
            lVar17 = lVar17 + 0x10;
            lVar9 = lVar9 + -0x10;
          } while (lVar9 != 0);
          if ((int)uStack_100 - local_d4 !=
              *(int *)(*(longlong *)(local_168 + 0x40) + 0x38 + lVar15)) {
            lVar15 = *(longlong *)(local_168 + 0x40) + lVar15;
            FUN_1447a1747(*(undefined8 *)(lVar15 + 0x30));
            *(undefined4 *)(lVar15 + 0x38) = 0;
            if (*(int *)(lVar15 + 0x3c) != 0) {
              FUN_1408be2c4((undefined8 *)(lVar15 + 0x30));
            }
          }
        }
        local_c0 = 0;
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        FUN_1408910a4(local_118 + 2);
        iVar6 = *(int *)(lVar13 + 0x48);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar6);
    if (0 < iVar6) {
      local_154 = (int)uStack_b0 - local_84;
      lVar8 = 0;
      uVar16 = local_160;
      do {
        lVar15 = lVar8 * 0xa8;
        local_150 = lVar8;
        if (0 < *(int *)(*(longlong *)(lVar13 + 0x40) + 0x18 + lVar15)) {
          if (local_154 != (int)uVar16) {
            lVar13 = *(longlong *)(lVar13 + 0x40) + lVar15;
            FUN_1447a1747(*(undefined8 *)(lVar13 + 0x30),*(undefined4 *)(lVar13 + 0x38));
            *(undefined4 *)(lVar13 + 0x38) = 0;
            if (*(int *)(lVar13 + 0x3c) != 0) {
              FUN_1408be2c4(lVar13 + 0x30,0);
            }
          }
          lVar13 = *(longlong *)(local_168 + 0x40);
          if (*(int *)(lVar13 + 0x18 + lVar15) < 1) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(*(longlong *)(lVar13 + lVar15 + 0x10) + 0x88);
          }
          if (iVar6 != *(int *)(lVar13 + 0x38 + lVar15)) {
            lVar13 = lVar13 + lVar15;
            FUN_1447a1747(*(undefined8 *)(lVar13 + 0x30));
            *(undefined4 *)(lVar13 + 0x38) = 0;
            if (*(int *)(lVar13 + 0x3c) != 0) {
              FUN_1408be2c4((undefined8 *)(lVar13 + 0x30),0);
            }
          }
          lVar8 = *(longlong *)(local_168 + 0x40);
          lVar13 = local_168;
          if (*(int *)(lVar8 + 0x38 + lVar15) == 0) {
            if (0 < iVar6) {
              iVar10 = 0;
              do {
                lVar8 = local_168;
                lVar13 = *(longlong *)(local_168 + 0x40) + lVar15;
                FUN_140002266(&local_128,&DAT_149e063bc,iVar10);
                FUN_1449b8608(&local_138,*(longlong *)(lVar8 + 0x40) + lVar15 + 0x90,&DAT_149e01f60)
                ;
                FUN_1401c7f3e(local_118,&local_138,&local_128);
                FUN_144a882a8(local_118 + 2,local_118,L"_MorphTarget");
                iVar2 = *(int *)(lVar13 + 0x38);
                *(uint *)(lVar13 + 0x38) = iVar2 + 1U;
                if (*(uint *)(lVar13 + 0x3c) < iVar2 + 1U) {
                  FUN_1447a1bd6((longlong *)(lVar13 + 0x30),iVar2);
                }
                lVar13 = *(longlong *)(lVar13 + 0x30);
                lVar8 = (longlong)iVar2 * 0x10;
                *(undefined8 *)(lVar13 + lVar8) = 0;
                *(longlong *)(lVar13 + lVar8) = local_118[2];
                *(int *)(lVar13 + 8 + lVar8) = (int)uStack_100;
                *(undefined4 *)(lVar13 + 0xc + lVar8) = uStack_100._4_4_;
                uStack_100 = 0;
                local_118[2] = 0;
                if (local_118[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_138 != 0) {
                  FUN_1400020a8();
                }
                if (local_128 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                iVar10 = iVar10 + 1;
              } while (iVar6 != iVar10);
              lVar8 = *(longlong *)(local_168 + 0x40);
              uVar16 = local_160;
            }
            uVar4 = FUN_149326792(lVar8 + lVar15);
            *(undefined1 *)(lVar8 + 0xa0 + lVar15) = uVar4;
            *(undefined1 *)(lVar8 + 0xa1 + lVar15) = 1;
            lVar13 = local_168;
          }
        }
        lVar8 = local_150 + 1;
      } while (lVar8 < *(int *)(lVar13 + 0x48));
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1408910a4(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14931a6c8 FUN_14931a6c8 body=96 status=ok
// SIG undefined FUN_14931a6c8(void)

void FUN_14931a6c8(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar2 = (longlong)*(int *)(param_1 + 0x18) * 0xa0 + lVar3;
    do {
      uVar1 = FUN_14931b152(lVar3);
      *(undefined1 *)(lVar3 + 0x98) = uVar1;
      *(undefined1 *)(lVar3 + 0x99) = 1;
      lVar3 = lVar3 + 0xa0;
    } while (lVar3 != lVar2);
  }
  uVar1 = FUN_149326792(param_1);
  *(undefined1 *)(param_1 + 0xa0) = uVar1;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  return;
}



// FUNCTION 14931a728 FUN_14931a728 body=365 status=ok
// SIG undefined FUN_14931a728(void)

bool FUN_14931a728(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  
  if ((longlong)*(int *)(param_1 + 0x48) == 0) {
    bVar9 = false;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x40);
    lVar8 = (longlong)*(int *)(param_1 + 0x48) * 0xa8;
    do {
      if (*(char *)(lVar7 + 0xa1) == '\x01') {
        cVar3 = *(char *)(lVar7 + 0xa0);
      }
      else {
        cVar3 = FUN_149326792(lVar7);
      }
      if (cVar3 == '\0') goto LAB_14931a795;
      lVar7 = lVar7 + 0xa8;
      lVar8 = lVar8 + -0xa8;
    } while (lVar8 != 0);
    lVar7 = 0;
LAB_14931a795:
    bVar9 = lVar7 != 0;
  }
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x60);
    lVar8 = (longlong)*(int *)(param_1 + 0x68) * 0x220;
    do {
      uVar1 = *(uint *)(lVar7 + 0x84);
      if ((ulonglong)uVar1 == 0xffffffff) {
LAB_14931a814:
        uVar4 = FUN_144a78e48(lVar7 + 0x10);
        if (((char)uVar4 != '\0') ||
           (dVar10 = *(double *)(lVar7 + 0x20) * *(double *)(lVar7 + 0x20) +
                     *(double *)(lVar7 + 0x10) * *(double *)(lVar7 + 0x10),
           dVar11 = *(double *)(lVar7 + 0x28) * *(double *)(lVar7 + 0x28) +
                    *(double *)(lVar7 + 0x18) * *(double *)(lVar7 + 0x18),
           auVar2._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar10 + dVar11))),
           auVar2._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar10 + dVar11))),
           iVar5 = movmskpd(uVar4,auVar2), iVar5 != 0)) {
          if (lVar7 == 0) {
            return bVar9;
          }
          return (bool)(bVar9 | 2);
        }
      }
      else if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x48))) {
        if (0 < *(int *)(lVar7 + 0xa8)) {
          lVar6 = (ulonglong)uVar1 * 0xa8;
          if ((*(int *)(*(longlong *)(param_1 + 0x40) + 0x18 + lVar6) < 1) ||
             (*(int *)(lVar7 + 0xa8) !=
              *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar6 + 0x10) + 0x88)))
          goto LAB_14931a859;
        }
        goto LAB_14931a814;
      }
LAB_14931a859:
      lVar7 = lVar7 + 0x220;
      lVar8 = lVar8 + -0x220;
    } while (lVar8 != 0);
  }
  return bVar9;
}



// FUNCTION 14931a896 FUN_14931a896 body=1021 status=ok
// SIG undefined FUN_14931a896(void)

bool FUN_14931a896(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [36];
  uint local_64;
  wchar_t *local_60;
  undefined4 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[4] != 0) {
    FUN_14932683e(*param_1,(int)param_1[1]);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      FUN_149326cfa(param_1);
    }
    uVar9 = (**(code **)(*param_2 + 0x30))(param_2);
    if (0xb < (longlong)uVar9) {
      (**(code **)(*param_2 + 0x180))(param_2,&local_60,0xffffffff);
      iVar8 = (int)local_60;
      (**(code **)(*param_2 + 0x180))(param_2,&local_4c,0xffffffff);
      uVar7 = local_4c;
      (**(code **)(*param_2 + 0x180))(param_2,&local_64,0xffffffff);
      if (((iVar8 == 0x46546c67) && (uVar7 == 2)) && (uVar9 == local_64)) {
        plVar1 = param_1 + 2;
        *(undefined4 *)(param_1 + 3) = 0;
        if (*(int *)((longlong)param_1 + 0x1c) != 0) {
          FUN_144893a1c(plVar1,0);
        }
        lVar10 = param_1[4];
        *(undefined8 *)(lVar10 + 8) = 0;
        if (*(longlong *)(lVar10 + 0x10) != 0) {
          FUN_140d2d4a8(lVar10,0);
        }
        uVar7 = (**(code **)(*param_2 + 0x28))(param_2);
        uVar11 = uVar7 + 3 & 0xfffffffc;
        if (uVar11 != uVar7) {
          (**(code **)(*param_2 + 0x1a0))(param_2,uVar11);
        }
        (**(code **)(*param_2 + 0x180))(param_2,&local_4c,0xffffffff);
        (**(code **)(*param_2 + 0x180))(param_2,&local_60,0xffffffff);
        iVar8 = (**(code **)(*param_2 + 0x30))(param_2);
        uVar7 = iVar8 - (uVar11 + 8);
        if (local_4c <= uVar7) {
          if ((int)local_60 == 0x4e4f534a) {
            uVar11 = local_4c + 3;
            FUN_140393c76(plVar1,local_4c,1);
            (**(code **)(*param_2 + 0x170))(param_2,*plVar1,local_4c);
            if (7 < uVar7 - (uVar11 & 0xfffffffc)) {
              do {
                puVar4 = (undefined8 *)param_1[4];
                uVar9 = (**(code **)(*param_2 + 0x28))(param_2);
                uVar12 = uVar9 + 3 & 0xfffffffffffffffc;
                if (uVar9 != uVar12) {
                  (**(code **)(*param_2 + 0x1a0))(param_2,uVar12);
                }
                puVar5 = (ulonglong *)param_2[1];
                puVar2 = (uint *)*puVar5 + 1;
                if ((uint *)puVar5[1] < puVar2) {
                  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
                  }
                  else {
                    thunk_FUN_14572512c(param_2,&local_4c);
                  }
                }
                else {
                  local_4c = *(uint *)*puVar5;
                  *puVar5 = (ulonglong)puVar2;
                }
                puVar5 = (ulonglong *)param_2[1];
                puVar3 = (undefined4 *)*puVar5 + 1;
                if ((undefined4 *)puVar5[1] < puVar3) {
                  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    (**(code **)(*param_2 + 0x170))(param_2,&local_60,4);
                  }
                  else {
                    thunk_FUN_14572512c(param_2,&local_60);
                  }
                }
                else {
                  local_60 = (wchar_t *)CONCAT44(local_60._4_4_,*(undefined4 *)*puVar5);
                  *puVar5 = (ulonglong)puVar3;
                }
                lVar10 = (**(code **)(*param_2 + 0x30))(param_2);
                uVar7 = local_4c;
                uVar13 = lVar10 - (uVar12 + 8);
                uVar9 = (ulonglong)local_4c;
                if (uVar9 <= uVar13) {
                  if ((int)local_60 == 0x4e4942) {
                    FUN_1415d7a80(puVar4,uVar9,1);
                    (**(code **)(*param_2 + 0x170))(param_2,*puVar4,local_4c);
                    break;
                  }
                  (**(code **)(*param_2 + 0x1a0))(param_2,uVar12 + 8 + uVar9);
                }
              } while (7 < uVar13 - (uVar7 + 3 & 0xfffffffc));
            }
          }
          else {
            (**(code **)(*param_2 + 0x1a0))(param_2,local_4c + uVar11 + 8);
          }
        }
        bVar6 = 0 < (int)param_1[3];
        goto LAB_14931a8be;
      }
    }
    local_60 = L"InvalidHeader";
    local_58 = 0xd;
    FUN_1446e940c(&local_4c,&local_60);
    local_60 = L"InterchangeGLTFBinaryReader";
    local_58 = 0x1b;
    FUN_1446e940c(&local_64,&local_60);
    FUN_140208bae(&local_60,&local_64,&local_4c,L"Invalid GLTF header!");
    iVar8 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
      FUN_149326c66(param_1,iVar8);
    }
    puVar3 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x18);
    *puVar3 = 2;
    FUN_14023423e(puVar3 + 2,&local_60);
    if (local_60 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_60 + 0x10))();
    }
  }
  bVar6 = false;
LAB_14931a8be:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}


