// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140f1e58c FUN_140f1e58c body=800 status=ok
// SIG undefined FUN_140f1e58c(void)

void FUN_140f1e58c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  LARGE_INTEGER local_68;
  undefined8 uStack_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = param_2[0x23];
  if (lVar6 != 0) {
    if (DAT_14c87e718 == '\0') {
      iVar2 = *(int *)(lVar6 + 0x1c);
      if (2 < iVar2) {
        bVar5 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
        if (bVar5 < 3) {
          local_68.QuadPart = 0x20100000001;
          uStack_60 = 0x30100000101;
          local_58 = DAT_14c7585c8;
          local_54 = DAT_14c7585c8 | 0x200;
          local_50 = DAT_14c7585c8 | 0x100;
          local_4c = DAT_14c7585c8 | 0x300;
          local_48 = 0;
          uStack_44 = 0x200;
          uStack_40 = 0x100;
          uStack_3c = 0x300;
          if (*(byte *)((longlong)&local_68 + (ulonglong)(iVar2 - 3) * 4) == bVar5)
          goto LAB_140f1e814;
        }
      }
      QueryPerformanceCounter(&local_68);
      uStack_60 = 0xffffffffffffffff;
      FUN_140056092(lVar6,&local_68);
    }
    else {
LAB_140f1e814:
      FUN_140082318(lVar6);
    }
    puVar4 = (undefined8 *)param_2[0x23];
    param_2[0x23] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  *param_1 = (longlong)(param_2 + 9);
  lVar6 = param_2[0x23];
  if (lVar6 == 0) goto LAB_140f1e5d5;
  if (DAT_14c87e718 == '\0') {
    iVar2 = *(int *)(lVar6 + 0x1c);
    if (2 < iVar2) {
      bVar5 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar5 < 3) {
        local_68.QuadPart = 0x20100000001;
        uStack_60 = 0x30100000101;
        local_58 = DAT_14c7585c8;
        local_54 = DAT_14c7585c8 | 0x200;
        local_50 = DAT_14c7585c8 | 0x100;
        local_4c = DAT_14c7585c8 | 0x300;
        local_48 = 0;
        uStack_44 = 0x200;
        uStack_40 = 0x100;
        uStack_3c = 0x300;
        if (*(byte *)((longlong)&local_68 + (ulonglong)(iVar2 - 3) * 4) == bVar5)
        goto LAB_140f1e8a0;
      }
    }
    QueryPerformanceCounter(&local_68);
    uStack_60 = 0xffffffffffffffff;
    FUN_140056092(lVar6,&local_68);
  }
  else {
LAB_140f1e8a0:
    FUN_140082318(lVar6);
  }
  puVar4 = (undefined8 *)param_2[0x23];
  param_2[0x23] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
LAB_140f1e5d5:
  param_1[1] = (longlong)(param_2 + 0x16);
  if (((*param_2 == 0) || (param_2[1] == 0)) || (*(int *)(param_2[1] + 8) < 1)) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_2[2];
  }
  uVar3 = *(undefined8 *)
           (lVar6 + 0x390 + (ulonglong)(-(uint)(*(float *)(lVar6 + 0x398) != 0.0) & 1) * 8);
  param_1[3] = (longlong)(param_2 + 0x26);
  FUN_14286a384(param_1,param_2 + 0x30,uVar3);
  lVar6 = param_2[0x11b];
  if ((longlong)(int)lVar6 != 0) {
    plVar8 = param_2 + 0x116;
    if ((longlong *)param_2[0x11a] != (longlong *)0x0) {
      plVar8 = (longlong *)param_2[0x11a];
    }
    lVar7 = 0;
    do {
      if (*(longlong *)((longlong)plVar8 + lVar7) != 0) {
        FUN_142872d1c(param_1,*(longlong *)((longlong)plVar8 + lVar7),uVar3);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar7);
  }
  FUN_14171e7fc(param_2);
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f1e8b4 FUN_140f1e8b4 body=57 status=ok
// SIG undefined FUN_140f1e8b4(void)

void FUN_140f1e8b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f750 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f750 = FUN_140002ddd(FUN_1465a4ff1,uVar1,L"CameraModeBehavior_SnapToTarget");
  }
  return;
}



// FUNCTION 140f1e8fc FUN_140f1e8fc body=40 status=ok
// SIG undefined FUN_140f1e8fc(void)

undefined8 FUN_140f1e8fc(undefined8 param_1,int param_2)

{
  FUN_140f1e924();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f1e924 FUN_140f1e924 body=213 status=ok
// SIG undefined FUN_140f1e924(void)

void FUN_140f1e924(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b945360;
  param_1[0x8c] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  if (*(int *)((longlong)param_1 + 0x47c) != 0) {
    FUN_140115c12(param_1 + 0x8e,0);
  }
  param_1[0x8d] = 0;
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  param_1[0x88] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  if (*(int *)((longlong)param_1 + 0x45c) != 0) {
    FUN_140115c12(param_1 + 0x8a,0);
  }
  param_1[0x89] = 0;
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b9444d0;
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  FUN_140ad8262(param_1);
  return;
}



// FUNCTION 140f1ea08 FUN_140f1ea08 body=137 status=ok
// SIG undefined FUN_140f1ea08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140f1ea08(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140f1ea92 FUN_140f1ea92 body=388 status=ok
// SIG undefined FUN_140f1ea92(void)

void FUN_140f1ea92(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_24 = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  local_38 = 0;
  uStack_30 = 0;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    FUN_146e9d93a(param_1,&local_48);
    local_38 = CONCAT44(uStack_44,local_48);
    uStack_30 = CONCAT44(uStack_3c,uStack_40);
  }
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (iVar3 < 8) {
    FUN_146d8e09e(param_2,&local_38);
  }
  else {
    FUN_140f1ec18(&local_38,param_2,0);
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     ((**(code **)*param_1)(param_1,uStack_30 & 0xffffffff), 0 < *(int *)(param_1 + 5))) {
    uVar4 = 0;
    do {
      uVar5 = 1 << ((byte)uVar4 & 0x1f);
      puVar6 = (undefined8 *)param_1[4];
      if ((undefined8 *)param_1[4] == (undefined8 *)0x0) {
        puVar6 = param_1 + 2;
      }
      uVar7 = uVar4 >> 5 & 0x7ffffff;
      if (*(char *)(local_38 + uVar4) == '\x01') {
        uVar5 = uVar5 | *(uint *)((longlong)puVar6 + uVar7 * 4);
      }
      else {
        uVar5 = ~uVar5 & *(uint *)((longlong)puVar6 + uVar7 * 4);
      }
      *(uint *)((longlong)puVar6 + uVar7 * 4) = uVar5;
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 5));
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f1ec18 FUN_140f1ec18 body=555 status=ok
// SIG undefined FUN_140f1ec18(void)

void FUN_140f1ec18(undefined8 *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 1;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_146e9d99c(param_2,param_1);
    goto LAB_140f1ed32;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1),(longlong)*(int *)((longlong)param_1 + 0xc));
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_140f1ed32;
    local_28 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_140f1ed23:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_28);
  }
  else {
    if (local_24 == 1) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (-1 < (int)local_28) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_28;
        if (*(uint *)((longlong)param_1 + 0xc) != local_28) {
          FUN_14475e67c(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_28 + iVar4;
        if (uVar5 - iVar4 < local_28) {
          FUN_1401c3474(param_1,iVar4);
        }
        goto LAB_140f1ed23;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_140f1ed32:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f1ee52 FUN_140f1ee52 body=57 status=ok
// SIG undefined FUN_140f1ee52(void)

void FUN_140f1ee52(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && ((*(byte *)(param_2 + 0x29) & 1) != 0)) {
    iVar1 = FUN_1448332aa(param_2,&DAT_14ac8a7b0);
    if (iVar1 < 0) {
      *(undefined1 *)(param_1 + 0xb8) = 1;
    }
  }
  return;
}



// FUNCTION 140f1ee8c FUN_140f1ee8c body=195 status=ok
// SIG undefined FUN_140f1ee8c(void)

/* WARNING: Removing unreachable block (ram,0x000140f1ef3a) */
/* WARNING: Removing unreachable block (ram,0x000140f1ef40) */

void FUN_140f1ee8c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  int local_38 [2];
  undefined8 local_30;
  longlong *local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (longlong *)0x0;
  local_38[0] = *(int *)(param_1 + 0xc18) + 5;
  local_30 = *param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    local_28 = plVar2;
  }
  if (*(char *)(param_1 + 0xc1c) == '\x01') {
    FUN_1402d3992(param_1);
    *(undefined1 *)(param_1 + 0xc1c) = 0;
  }
  FUN_1402d3872(param_1,local_38,&local_19);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f1ef50 thunk_FUN_14006e79a body=5 status=ok
// SIG undefined thunk_FUN_14006e79a(void)

void thunk_FUN_14006e79a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a73f970;
  param_1[5] = &PTR_FUN_14a73ff50;
  param_1[6] = &PTR_LAB_14a73ff90;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x40],*(undefined4 *)(param_1 + 0x41));
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 140f1ef64 FUN_140f1ef64 body=142 status=ok
// SIG undefined FUN_140f1ef64(void)

undefined8 * FUN_140f1ef64(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b27f810;
  FUN_140f1eff2(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_140890760(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f1eff2 FUN_140f1eff2 body=51 status=ok
// SIG undefined FUN_140f1eff2(void)

void FUN_140f1eff2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f1f025 FUN_140f1f025 body=361 status=ok
// SIG undefined FUN_140f1f025(void)

void FUN_140f1f025(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined4 local_4c;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)*param_1;
  FUN_14007ca06();
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  *puVar1 = &PTR_FUN_14add1fb0;
  puVar1[7] = &PTR_FUN_14add23f0;
  *(undefined2 *)(puVar1 + 9) = 0x100;
  *(undefined1 *)((longlong)puVar1 + 0x4b) = 3;
  puVar1[10] = 0;
  uVar3 = FUN_144830b78(puVar1 + 0xb,&DAT_14cb41380);
  *(undefined4 *)(puVar1 + 0xb) = uVar3;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xa4) = 0;
  puVar1[0x16] = 0;
  *(undefined4 *)(puVar1 + 0x17) = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14add3fb0;
  puVar4[6] = 0;
  *(undefined4 *)(puVar4 + 7) = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0x44) = 0;
  puVar4[10] = 0;
  *(undefined4 *)(puVar4 + 0xb) = 0;
  puVar2 = (undefined8 *)puVar1[5];
  if ((puVar2 != puVar4) && (puVar1[5] = puVar4, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  local_58 = FUN_140f1f190();
  if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_58);
  }
  local_50 = 1;
  local_4e = 0;
  local_4c = 0xffffffff;
  uVar3 = FUN_144830b78(local_44);
  *(undefined4 *)(puVar1 + 0xb) = uVar3;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f1f190 FUN_140f1f190 body=228 status=ok
// SIG undefined FUN_140f1f190(void)

longlong FUN_140f1f190(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0b938 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14580b774;
    local_38 = &LAB_147d70e0b;
    local_40 = FUN_146408819;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x140;
    FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget",&DAT_14cb0b938,&DAT_147d70e0a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0b938;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f1f2ce FUN_140f1f2ce body=174 status=ok
// SIG undefined FUN_140f1f2ce(void)

void FUN_140f1f2ce(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *(byte *)((longlong)param_1 + 0xcc) = *(byte *)((longlong)param_1 + 0xcc) & 0xfe;
  param_1[0x1b] = 0;
  if (param_1[0x1c] != 0) {
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar3;
    lVar2 = FUN_144a61814(uVar1,param_1 + 0x1c);
    if (lVar2 != 0) {
      FUN_1405a424c(uVar1,param_1[0x1c]);
    }
    param_1[0x1c] = 0;
    FUN_140f1f37c(param_1);
  }
  FUN_140dcf9f6(param_1,0);
  FUN_140898514(param_1 + 0xb,1);
  *(byte *)((longlong)param_1 + 0xcc) = *(byte *)((longlong)param_1 + 0xcc) & 0xf7;
  return;
}



// FUNCTION 140f1f37c FUN_140f1f37c body=490 status=ok
// SIG undefined FUN_140f1f37c(void)

void FUN_140f1f37c(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  
  *(undefined8 *)(param_1 + 0xe0) = 0;
  bVar1 = *(byte *)(param_1 + 0xcc);
  *(byte *)(param_1 + 0xcc) = bVar1 | 4;
  if ((bVar1 & 2) != 0 || *(int *)(param_1 + 0xb0) < 1) {
    if (0 < *(int *)(param_1 + 0xb8)) {
      *(char *)(param_1 + 0xcf) = *(char *)(param_1 + 0xcf) + '\x01';
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),2);
      if (*(int *)(param_1 + 0xb8) < (int)(uint)*(byte *)(param_1 + 0xcf)) {
        *(undefined1 *)(param_1 + 0xcf) = 0;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x30);
    (**(code **)(*plVar2 + 0x808))(plVar2,0xffffffff,0,0);
    if (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x48) == '\x01') {
      FUN_140994e4c(plVar2,DAT_14cbe7a18,0,0);
    }
    FUN_1447f69b6(param_1 + 0x70);
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x30);
  (**(code **)(*plVar2 + 0x808))(plVar2,*(int *)(param_1 + 0xb0),0,0);
  FUN_1447f69b6(param_1 + 0x70);
  bVar1 = *(byte *)(plVar2 + 0x17b);
  if ((int)(uint)bVar1 < (int)plVar2[0x17e]) {
    plVar3 = *(longlong **)(plVar2[0x17d] + 0x10 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (plVar3 != (longlong *)0x0) {
      if ((*(byte *)(param_1 + 0xcc) & 1) != 0) {
        cVar4 = (**(code **)(*plVar3 + 0x338))(plVar3,1);
        if (cVar4 != '\0') goto LAB_140f1f537;
      }
      cVar4 = (**(code **)(*plVar3 + 0x330))(plVar3);
      if (cVar4 == '\0') {
        cVar4 = (**(code **)(*plVar3 + 0x340))(plVar3);
        if (cVar4 != '\0') {
          if ((*(byte *)(param_1 + 0xcc) & 1) == 0) {
            cVar4 = (**(code **)(*plVar3 + 0x338))(plVar3,1);
            if (((cVar4 != '\0') && ((int)plVar2[0x182] != 0)) &&
               ((longlong *)plVar2[0x36] != (longlong *)0x0)) {
              cVar4 = (**(code **)(*(longlong *)plVar2[0x36] + 0x700))();
              if (cVar4 != '\0') {
                *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) | 1;
                FUN_148f15734(param_1);
                return;
              }
            }
          }
          return;
        }
      }
    }
  }
LAB_140f1f537:
  FUN_140dcf9f6(param_1,2);
  FUN_140dc4546(param_1);
  return;
}



// FUNCTION 140f1f566 FUN_140f1f566 body=157 status=ok
// SIG undefined FUN_140f1f566(void)

void FUN_140f1f566(longlong param_1,int param_2,char param_3,undefined4 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  FUN_140f1f604();
  if (param_3 != '\0') {
    bVar1 = *(byte *)(param_1 + 0xbd8);
    if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
      lVar2 = *(longlong *)
               (*(longlong *)(param_1 + 0xbe8) + 0x20 +
               (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      if (lVar2 != 0) {
        lVar3 = FUN_14018fcd2();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          fVar4 = (float)param_2 / 100.0;
          if (1.0 <= fVar4) {
            fVar4 = 1.0;
          }
          if (fVar4 <= 0.0) {
            fVar4 = 0.0;
          }
          FUN_1457c7c16(lVar2,fVar4,param_4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140f1f604 FUN_140f1f604 body=181 status=ok
// SIG undefined FUN_140f1f604(void)

void FUN_140f1f604(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  
  if ((*(char *)(param_1 + 0xb51) == '\x01') && (*(char *)(param_1 + 0x178) == '\x03')) {
    *(undefined1 *)(param_1 + 0xb51) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0xbd8);
  if ((((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) &&
      (plVar3 = *(longlong **)
                 (*(longlong *)(param_1 + 0xbe8) + 0x10 +
                 (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar3 != (longlong *)0x0)) &&
     ((((ulonglong)bVar1 == 0 || (cVar2 = (**(code **)(*plVar3 + 0x368))(plVar3), cVar2 == '\0')) ||
      ((0 < *(int *)(param_1 + 0xbf0) &&
       (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 0x10), plVar3 != (longlong *)0x0)))
      ))) {
    (**(code **)(*plVar3 + 0x370))(plVar3,param_2,param_3,param_4,1);
  }
  return;
}



// FUNCTION 140f1f6b9 FUN_140f1f6b9 body=49 status=ok
// SIG undefined FUN_140f1f6b9(void)

longlong FUN_140f1f6b9(void)

{
  if (DAT_14cc2d460 == 0) {
    FUN_140f50038(&DAT_14cc2d460,&PTR_s__Script_ControlRigSpline_14beb2497_1_14beb2478);
  }
  return DAT_14cc2d460;
}



// FUNCTION 140f1f6ea FUN_140f1f6ea body=96 status=ok
// SIG undefined FUN_140f1f6ea(void)

ulonglong FUN_140f1f6ea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140f1f72d:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140f1f72d;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 140f1f774 FUN_140f1f774 body=9 status=ok
// SIG undefined FUN_140f1f774(void)

void FUN_140f1f774(longlong param_1)

{
  FUN_140f1f77e(param_1 + 0x10);
  return;
}



// FUNCTION 140f1f77e FUN_140f1f77e body=170 status=ok
// SIG undefined FUN_140f1f77e(void)

void FUN_140f1f77e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_149f1d040;
  if (*(char *)(param_1 + 0xbb) == '\x01') {
    *(undefined1 *)(param_1 + 0xbb) = 0;
  }
  if ((longlong *)param_1[0xb3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb3] + 0x10))();
  }
  plVar3 = (longlong *)param_1[0xa3];
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
  FUN_140e9e952(param_1 + 0x40);
  lVar4 = param_1[0x3e];
  if (lVar4 != 0) {
    FUN_140f1f828(lVar4);
    FUN_1400020a8(lVar4);
  }
  if ((longlong *)param_1[0x3c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3c] + 0x10))();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 140f1f828 FUN_140f1f828 body=277 status=ok
// SIG undefined FUN_140f1f828(void)

void FUN_140f1f828(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_20 = *(longlong *)(param_1 + 0x60);
    FUN_1447a2442();
  }
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
  }
  piVar2 = *(int **)(param_1 + 0x48);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 2) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(piVar2);
    }
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
  }
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f1f93e FUN_140f1f93e body=228 status=ok
// SIG undefined FUN_140f1f93e(void)

longlong FUN_140f1f93e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba5cd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1413594aa;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1465c526e;
    local_38 = &LAB_148bdfe1f;
    local_40 = &LAB_141206583;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1d10;
    FUN_14081cfa3(L"/Script/OakGame",L"ModularGrenade",&DAT_14cba5cd0,FUN_1465c5246);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba5cd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f1fa23 FUN_140f1fa23 body=155 status=ok
// SIG undefined FUN_140f1fa23(void)

void FUN_140f1fa23(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  uint local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    FUN_1400021e4(param_1 + 0x20,&local_38);
    local_3c = *(undefined4 *)(param_1 + 0x30);
    local_48 = local_38;
    if (local_30 == 0) {
      local_48 = &DAT_149dfb77a;
    }
    local_40 = (uint)*(ushort *)(param_1 + 0x40);
    FUN_140c2c993(&local_48,param_2,param_3);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f1fabf FUN_140f1fabf body=464 status=ok
// SIG undefined FUN_140f1fabf(void)

longlong FUN_140f1fabf(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_70;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = 0;
  local_30 = param_2;
  if ((param_1 != (longlong *)0x0) && (plVar2 = param_1, plVar5 = param_1, param_2 != 0)) {
LAB_140f1fafc:
    do {
      for (lVar3 = plVar2[10]; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
        if ((~*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) & 0x8001) == 0) goto LAB_140f1fb1e;
      }
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
    } while (plVar2 != (longlong *)0x0);
    goto LAB_140f1fb60;
  }
LAB_140f1fc4c:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
LAB_140f1fb1e:
  if (*(longlong *)(lVar3 + 0x20) == param_2) goto LAB_140f1fc4c;
  plVar1 = (longlong *)(lVar3 + 0x18);
  do {
    for (lVar3 = *plVar1; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
      if ((~*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) & 0x8001) == 0) goto LAB_140f1fb1e;
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
    plVar1 = plVar2 + 10;
  } while (plVar2 != (longlong *)0x0);
LAB_140f1fb60:
  plVar2 = (longlong *)plVar5[4];
  if (plVar2 == (longlong *)0x0) goto LAB_140f1fb8d;
  lVar3 = FUN_1449e2fb2();
  if ((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (plVar5 = plVar2,
     *(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
     lVar3 + 0x30)) goto LAB_140f1fb8d;
  goto LAB_140f1fafc;
LAB_140f1fb8d:
  FUN_144750a86(param_1,&local_40,0,0);
  puVar6 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar6 = local_40;
  }
  FUN_1400021e4(&local_30,&local_50);
  local_78 = &DAT_149dfb77a;
  if (local_48 != 0) {
    local_78 = local_50;
  }
  uVar4 = FUN_1446ddbd2();
  FUN_1400021e4(uVar4,&local_60);
  puVar7 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar7 = local_60;
  }
  local_70 = puVar6;
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x1bde,
                L"Failed to find %s %s in %s",puVar7);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0;
  goto LAB_140f1fc4c;
}



// FUNCTION 140f1fcc2 FUN_140f1fcc2 body=221 status=ok
// SIG undefined FUN_140f1fcc2(void)

void FUN_140f1fcc2(longlong param_1,char param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xd0);
  if (((cVar1 != param_2) && (cVar1 != '\x01' || param_2 != '\0')) &&
     (param_2 != '\x02' || cVar1 != '\x03')) {
    if ((param_2 == '\x03' && cVar1 == '\0') || (param_2 == '\x01' && cVar1 == '\x02')) {
      FUN_1440bcefa(param_1);
      return;
    }
    switch(param_2) {
    case '\0':
      if (param_3 == 0) {
        param_3 = FUN_140963a30(param_1 + 0xd8);
      }
      FUN_1440bd63e(param_1,param_3,param_4);
      return;
    case '\x01':
      FUN_1440bcfae(param_1);
      return;
    case '\x02':
      if (param_3 == 0) {
        param_3 = FUN_140963a30(param_1 + 0x108);
      }
      FUN_1440bd69a(param_1,param_3,param_4);
      return;
    case '\x03':
      FUN_14037010a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140f1fdaa FUN_140f1fdaa body=1231 status=ok
// SIG undefined FUN_140f1fdaa(void)

/* WARNING: Removing unreachable block (ram,0x000140f2000d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140f1fdaa(double *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  double *pdVar1;
  float *pfVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar17;
  undefined1 auStack_88 [36];
  float local_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [12];
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c8733f4);
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    local_58 = *param_1;
    uStack_50 = param_1[1];
    dVar17 = *(double *)*(undefined1 (*) [16])(param_1 + 2);
    dVar12 = param_1[3];
    _local_48 = *(undefined1 (*) [16])(param_1 + 2);
    if (dVar12 * dVar12 + dVar17 * dVar17 + local_58 * local_58 + uStack_50 * uStack_50 <=
        9.99999993922529e-09) {
      stack0xffffffffffffffc0 = (double)DAT_14c8463e8;
      local_48._0_8_ = DAT_14c8463e0;
      local_58 = (double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
      uStack_50 = (double)CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
    }
    else {
      dVar13 = dVar17 * dVar17 + local_58 * local_58;
      dVar16 = dVar12 * dVar12 + uStack_50 * uStack_50;
      auVar14._0_8_ = dVar13 + dVar16;
      auVar14._8_8_ = dVar13 + dVar16;
      auVar15._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - auVar14._8_8_));
      auVar15._0_8_ =
           -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - auVar14._0_8_));
      iVar9 = movmskpd(uVar7,auVar15);
      if (iVar9 == 0) {
        uVar7 = SUB84(dVar12,0);
        uVar11 = (undefined4)((ulonglong)dVar12 >> 0x20);
      }
      else {
        uVar10 = -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
        auVar15 = sqrtpd(auVar14,auVar14);
        auVar15 = divpd(_DAT_149934d80,auVar15);
        local_58 = (double)((ulonglong)(local_58 * auVar15._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_));
        uStack_50 = (double)((ulonglong)(uStack_50 * auVar15._8_8_) & uVar10);
        auVar5._8_4_ = (int)uVar10;
        auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
        auVar5._12_4_ = (int)(uVar10 >> 0x20);
        auVar6._8_8_ = dVar12 * auVar15._8_8_;
        auVar6._0_8_ = dVar17 * auVar15._0_8_;
        _local_48 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar6,auVar5);
        dVar17 = local_48._0_8_;
        uVar7 = local_48._8_4_;
        uVar11 = local_48._12_4_;
      }
      if ((double)CONCAT44(uVar11,uVar7) <= 0.0 && (double)CONCAT44(uVar11,uVar7) != 0.0) {
        local_58 = -local_58;
        uStack_50 = -uStack_50;
        stack0xffffffffffffffc0 = (double)(CONCAT44(uVar11,uVar7) ^ 0x8000000000000000);
        local_48._0_8_ = -dVar17;
      }
    }
  }
  uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  if ((uVar8 < 0x16) || (iVar9 = (**(code **)(*param_2 + 0x48))(param_2), iVar9 == 0x1a)) {
    puVar3 = (ulonglong *)param_2[1];
    pfVar2 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_5c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_5c);
      }
    }
    else {
      local_5c = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar2;
    }
    puVar3 = (ulonglong *)param_2[1];
    pfVar2 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_60,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_60);
      }
    }
    else {
      local_60 = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar2;
    }
    puVar3 = (ulonglong *)param_2[1];
    pfVar2 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_64,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_64);
      }
    }
    else {
      local_64 = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar2;
    }
    local_58 = (double)local_5c;
    uStack_50 = (double)local_60;
    local_48._0_8_ = (double)local_64;
  }
  else {
    puVar3 = (ulonglong *)param_2[1];
    pdVar1 = (double *)*puVar3 + 1;
    if ((double *)puVar3[1] < pdVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_58,8);
      }
      else {
        thunk_FUN_146821949(param_2,&local_58);
      }
    }
    else {
      local_58 = *(double *)*puVar3;
      *puVar3 = (ulonglong)pdVar1;
    }
    plVar4 = (longlong *)param_2[1];
    if ((double *)plVar4[1] < (double *)*plVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&uStack_50,8);
      }
      else {
        thunk_FUN_146821949(param_2,&uStack_50);
      }
    }
    else {
      uStack_50 = *(double *)*plVar4;
      *plVar4 = *plVar4 + 8;
    }
    plVar4 = (longlong *)param_2[1];
    if ((undefined8 *)plVar4[1] < (undefined8 *)*plVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,local_48,8);
      }
      else {
        thunk_FUN_146821949(param_2,local_48);
      }
    }
    else {
      local_48._0_8_ = *(undefined8 *)*plVar4;
      *plVar4 = *plVar4 + 8;
    }
  }
  auVar15 = _local_48;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    dVar17 = (double)local_48._0_8_ * (double)local_48._0_8_ +
             local_58 * local_58 + uStack_50 * uStack_50;
    dVar12 = 1.0 - dVar17;
    unique0x100005e2 = 0.0;
    if (dVar12 < 0.0) {
      dVar17 = 1.0 / SQRT(dVar17);
      local_58 = local_58 * dVar17;
      uStack_50 = uStack_50 * dVar17;
      local_48._0_8_ = (double)local_48._0_8_ * dVar17;
    }
    else {
      unique0x100002c9 = SQRT(dVar12);
    }
    auVar15 = _local_48;
    *param_1 = local_58;
    param_1[1] = uStack_50;
    uStack_3c = (undefined4)((ulonglong)unique0x100005da >> 0x20);
    *(undefined4 *)(param_1 + 2) = local_48._0_4_;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_48._4_4_;
    *(undefined4 *)(param_1 + 3) = local_48._8_4_;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_3c;
  }
  _local_48 = auVar15;
  *param_4 = 1;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140f2027a FUN_140f2027a body=1016 status=ok
// SIG undefined FUN_140f2027a(void)

undefined8 * FUN_140f2027a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b949340;
  param_1[9] = &PTR_FUN_14b8028e0;
  plVar4 = (longlong *)param_1[0x15];
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
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x94) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x11) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x11) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x7c) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0xe) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 100) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xb) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0xb) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  FUN_140f20672(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f20672 FUN_140f20672 body=73 status=ok
// SIG undefined FUN_140f20672(void)

void FUN_140f20672(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4a6460;
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140f206bc FUN_140f206bc body=444 status=ok
// SIG undefined FUN_140f206bc(void)

void FUN_140f206bc(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar16 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar11 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar16 = local_68 >> 0x20;
    iVar11 = (int)param_1[5];
  }
  plVar6 = local_60;
  iVar8 = (int)local_68;
  uVar15 = (uint)local_58;
  iVar7 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ != iVar11 || local_60 != plVar1) {
    do {
      puVar4 = *(undefined8 **)(*param_1 + 8 + (longlong)iVar7 * 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      uVar15 = uVar15 & ~(uint)uVar16;
      plVar14 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar14 = plVar6;
      }
      iVar3 = (int)plVar6[3];
      lVar12 = (longlong)iVar8;
      uVar9 = *(uint *)((longlong)plVar14 + lVar12 * 4) & uVar15;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar5 = iVar7;
        if (iVar7 < iVar8) {
          iVar5 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar13 = 0;
          do {
            uVar9 = *(uint *)((longlong)plVar14 + lVar13 * 4 + lVar12 * 4 + 4);
            if (uVar9 != 0) {
              iVar8 = iVar8 + (int)lVar13 + 1;
              uVar15 = 0xffffffff;
              goto LAB_140f207ee;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar5 - lVar12 != lVar13);
          uVar15 = 0xffffffff;
          iVar8 = iVar5;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar3;
      }
      else {
LAB_140f207ee:
        uVar16 = (ulonglong)(-uVar9 & uVar9);
        uVar2 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar11 || plVar6 != plVar1);
  }
  FUN_1457c897e(param_1);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f2087a FUN_140f2087a body=38 status=ok
// SIG undefined FUN_140f2087a(void)

undefined8 FUN_140f2087a(undefined8 param_1,int param_2)

{
  FUN_1406624c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f208a0 FUN_140f208a0 body=484 status=ok
// SIG undefined FUN_140f208a0(void)

int * FUN_140f208a0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_140f20a84(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x90);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x90) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x90 + *param_1;
  return param_2;
}



// FUNCTION 140f20a84 FUN_140f20a84 body=275 status=ok
// SIG undefined FUN_140f20a84(void)

void FUN_140f20a84(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x90;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140f20b98 FUN_140f20b98 body=24 status=ok
// SIG undefined FUN_140f20b98(void)

void FUN_140f20b98(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140f20bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 140f20bb0 FUN_140f20bb0 body=183 status=ok
// SIG undefined FUN_140f20bb0(void)

undefined8 * FUN_140f20bb0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149f0f2e0;
  plVar1 = param_1 + 0x8f;
  if (*(int *)(param_1 + 0x90) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140f20bde;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140f20bde:
  FUN_1404578a2(param_1[0x8b],*(undefined4 *)(param_1 + 0x8c));
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  FUN_140e9e952(param_1 + 0x2c);
  FUN_140f20c68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f20c68 FUN_140f20c68 body=539 status=ok
// SIG undefined FUN_140f20c68(void)

void FUN_140f20c68(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_LAB_149f0f7d0;
  if (*(char *)((longlong)param_1 + 0x151) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x151) = 0;
  }
  plVar4 = param_1 + 0x28;
  if (*(int *)(param_1 + 0x29) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_140f20cab;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 0x29) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_140f20cab:
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x24];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar4 = (longlong *)param_1[0x23];
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
  plVar4 = (longlong *)param_1[0x21];
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
  plVar4 = (longlong *)param_1[0x1f];
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
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    FUN_1447a08a2(param_1 + 8,0);
  }
  param_1[0xe] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x6c)) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80;
    FUN_1446efbd8(param_1 + 10,0);
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1409d13c1(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140f20e83(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f20e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140f20e83 FUN_140f20e83 body=40 status=ok
// SIG undefined FUN_140f20e83(void)

void FUN_140f20e83(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1410f0cf0(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 140f20eba FUN_140f20eba body=31 status=ok
// SIG undefined FUN_140f20eba(void)

undefined8 FUN_140f20eba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f20ee2 FUN_140f20ee2 body=316 status=ok
// SIG undefined FUN_140f20ee2(void)

void FUN_140f20ee2(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14b49c220;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xf00000d0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x91) = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xc5daac38;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3ff00000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0x3ff0000000000000;
  param_1[0x27] = 0x3ff0000000000000;
  param_1[0x28] = 0x3ff0000000000000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xc5daac38;
  param_1[0x37] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3ff00000;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0x3ff0000000000000;
  param_1[0x3f] = 0x3ff0000000000000;
  param_1[0x40] = 0x3ff0000000000000;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  return;
}



// FUNCTION 140f2102c FUN_140f2102c body=31 status=ok
// SIG undefined FUN_140f2102c(void)

undefined8 FUN_140f2102c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f2104c FUN_140f2104c body=579 status=ok
// SIG undefined FUN_140f2104c(void)

void FUN_140f2104c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined1 local_98;
  undefined8 local_90;
  longlong *plStack_88;
  undefined8 local_80;
  longlong lStack_78;
  int local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14082167c();
  plVar4 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b41baa0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[0xf] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b35c3c0;
  *(undefined4 *)((longlong)plVar4 + 0x1c) = 1;
  *(undefined1 *)(plVar4 + 4) = 1;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  *(undefined4 *)(plVar4 + 10) = 0xf00000d0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  *(undefined2 *)(plVar4 + 0xf) = 0x101;
  uVar5 = FUN_140f21290();
  FUN_140005f6c(plVar4 + 0xc,uVar5,0,0);
  local_a8 = (longlong *)
             (CONCAT44(*(undefined4 *)(param_1 + 0x78),local_a8._0_4_) & 0xffffffffffffff00);
  local_a0 = (longlong *)CONCAT71(local_a0._1_7_,1);
  local_98 = 0;
  local_90 = 0;
  plStack_88 = (longlong *)0x0;
  local_80 = 0;
  lStack_78 = 0;
  local_70 = -0xfffff30;
  local_68 = 0;
  *(undefined1 *)(plVar4 + 4) = 1;
  plVar4[3] = (longlong)local_a8;
  *(undefined1 *)(plVar4 + 5) = 0;
  FUN_14029d0b6(plVar4 + 6,&local_90);
  plVar2 = plStack_88;
  if ((plVar4[9] != lStack_78) || ((int)plVar4[10] != local_70)) {
    plVar4[9] = lStack_78;
    *(int *)(plVar4 + 10) = local_70;
    plVar4[0xb] = 0;
  }
  if (plStack_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_88)(plStack_88);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  *(undefined1 *)(plVar4 + 0xf) = *(undefined1 *)(param_1 + 0x7c);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_a8 = plVar4 + 2;
  local_a0 = plVar4;
  FUN_1408229d0(param_2 + 0x2c0,&local_a8);
  plVar2 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f21290 FUN_140f21290 body=57 status=ok
// SIG undefined FUN_140f21290(void)

void FUN_140f21290(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dfb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dfb0 = FUN_140002ddd(FUN_146539684,uVar1,L"ObjectiveValueEvaluator_CompositeObjective")
    ;
  }
  return;
}



// FUNCTION 140f212ca FUN_140f212ca body=151 status=ok
// SIG undefined FUN_140f212ca(void)

void FUN_140f212ca(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_1 == 0) {
    uVar6 = 0;
    uVar3 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar4 + 0x10);
      bVar7 = uVar2 == 0;
      if (bVar7) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar2 = uVar5;
      }
      uVar3 = (ulonglong)uVar2;
    }
  }
  FUN_140f21362((ulonglong)uVar6 | uVar3 << 0x20);
  return;
}



// FUNCTION 140f21362 FUN_140f21362 body=415 status=ok
// SIG undefined FUN_140f21362(void)

void FUN_140f21362(undefined8 param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined *puVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  lVar5 = DAT_14cb85778;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb85780 != DAT_14cb857ac) {
    puVar7 = DAT_14cb857b8;
    if (DAT_14cb857b8 == (undefined *)0x0) {
      puVar7 = &DAT_14cb857b0;
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_1 >> 0x20) ^ (uint)param_1) &
            (longlong)DAT_14cb857c0 - 1U;
    if ((longlong)*(int *)(puVar7 + uVar6 * 4) != -1) {
      lVar10 = (longlong)*(int *)(puVar7 + uVar6 * 4) * 0x20;
      local_40 = *(undefined8 *)(DAT_14cb85778 + lVar10);
      local_48 = param_1;
      cVar4 = FUN_140bf1e82();
      if (cVar4 == '\0') {
        lVar5 = lVar5 + lVar10;
        do {
          lVar11 = lVar5;
          lVar10 = (longlong)*(int *)(lVar11 + 0x18);
          if (lVar10 == -1) goto LAB_140f2138c;
          lVar10 = lVar10 * 0x20;
          lVar5 = DAT_14cb85778 + lVar10;
          local_40 = *(undefined8 *)(DAT_14cb85778 + lVar10);
          local_48 = param_1;
          cVar4 = FUN_140bf1e82(&local_40,&local_48);
        } while (cVar4 == '\0');
        piVar9 = (int *)(lVar11 + 0x18);
      }
      else {
        piVar9 = (int *)(puVar7 + uVar6 * 4);
      }
      iVar2 = *piVar9;
      lVar5 = (longlong)iVar2 * 0x20;
      puVar7 = &DAT_14cb857b0;
      if (DAT_14cb857b8 != (undefined *)0x0) {
        puVar7 = DAT_14cb857b8;
      }
      lVar10 = (longlong)*(int *)(DAT_14cb85778 + 0x1c + lVar5);
      iVar8 = *(int *)(puVar7 + lVar10 * 4);
      if (iVar8 == iVar2) {
        piVar9 = (int *)(puVar7 + lVar10 * 4);
      }
      else {
        do {
          piVar9 = (int *)(DAT_14cb85778 + (longlong)iVar8 * 0x20 + 0x18);
          iVar8 = *piVar9;
        } while (iVar8 != iVar2);
      }
      *piVar9 = *(int *)(DAT_14cb85778 + lVar5 + 0x18);
      plVar3 = *(longlong **)(DAT_14cb85778 + 0x10 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar9 = (int *)((longlong)plVar3 + 0xc);
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      FUN_140f21592(iVar2);
    }
  }
LAB_140f2138c:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f21502 FUN_140f21502 body=66 status=ok
// SIG undefined FUN_140f21502(void)

void FUN_140f21502(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b416960;
  FUN_140f21544(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 0x10);
  return;
}



// FUNCTION 140f21544 FUN_140f21544 body=77 status=ok
// SIG undefined FUN_140f21544(void)

void FUN_140f21544(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f21592 FUN_140f21592 body=137 status=ok
// SIG undefined FUN_140f21592(void)

void FUN_140f21592(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  
  lVar2 = DAT_14cb85778;
  if (DAT_14cb857ac != 0) {
    *(int *)(DAT_14cb85778 + (longlong)DAT_14cb857a8 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar3 = -1;
  if (0 < DAT_14cb857ac) {
    iVar3 = DAT_14cb857a8;
  }
  *(int *)(lVar2 + (longlong)param_1 * 0x20 + 4) = iVar3;
  DAT_14cb857ac = DAT_14cb857ac + 1;
  puVar4 = &DAT_14cb85788;
  if (DAT_14cb85798 != (undefined *)0x0) {
    puVar4 = DAT_14cb85798;
  }
  iVar3 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar3 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb857a8 = param_1;
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 140f2161c FUN_140f2161c body=40 status=ok
// SIG undefined FUN_140f2161c(void)

undefined8 FUN_140f2161c(undefined8 param_1,int param_2)

{
  FUN_140f21644();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f21644 FUN_140f21644 body=228 status=ok
// SIG undefined FUN_140f21644(void)

void FUN_140f21644(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b222b10;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_140f217ae(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_140e31739(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140f21765(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140f21728(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140f21728 FUN_140f21728 body=61 status=ok
// SIG undefined FUN_140f21728(void)

void FUN_140f21728(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f21765 FUN_140f21765 body=73 status=ok
// SIG undefined FUN_140f21765(void)

void FUN_140f21765(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f217ae FUN_140f217ae body=75 status=ok
// SIG undefined FUN_140f217ae(void)

void FUN_140f217ae(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x20);
    do {
      FUN_140f217f9(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f217f9 FUN_140f217f9 body=73 status=ok
// SIG undefined FUN_140f217f9(void)

void FUN_140f217f9(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f2184e FUN_140f2184e body=10150 status=ok
// SIG undefined FUN_140f2184e(void)

undefined8 * FUN_140f2184e(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  code *local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  uVar7 = DAT_14cacfcd8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_14016cc74();
  FUN_140486538(param_2,uVar7);
  FUN_14048646a(param_2 + 0x20,uVar7,uVar5,0);
  FUN_140f2566e(param_1);
  local_88 = param_1 + 0x744;
  param_1[0x744] = &PTR_LAB_14b6fe470;
  param_1[0x745] = &PTR_LAB_14b6fe490;
  param_1[0x746] = &PTR_LAB_14b6fe4c0;
  param_1[0x747] = &PTR_LAB_14b6fe5a0;
  param_1[0x748] = &PTR_LAB_14b6fe5c0;
  param_1[0x749] = &PTR_FUN_14b2fa070;
  param_1[0x74a] = 0;
  param_1[0x74b] = 0;
  *(undefined4 *)(param_1 + 0x74c) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3a64) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a74) = 0;
  param_1[0x74f] = 2;
  param_1[0x750] = &PTR_LAB_14b6fe5e0;
  param_1[0x751] = &PTR_LAB_14b6fe600;
  param_1[0x752] = &PTR_LAB_14b178720;
  param_1[0x753] = 0;
  param_1[0x754] = 0;
  param_1[0x755] = 0;
  param_1[0x756] = 0;
  param_1[0x757] = 0;
  param_1[0x758] = 0;
  param_1[0x759] = &PTR_LAB_14b6fe640;
  param_1[0x75a] = &PTR_FUN_14b6fe680;
  param_1[0x75b] = &PTR_LAB_14b6fe6b0;
  param_1[0x75c] = &PTR_LAB_14b6fe6e0;
  param_1[0x75d] = &PTR_FUN_14b2c6a40;
  *(undefined4 *)(param_1 + 0x760) = 0;
  param_1[0x75e] = 0;
  param_1[0x75f] = 0;
  param_1[0x761] = &PTR_FUN_14b6fe720;
  param_1[0x762] = 0;
  param_1[0x763] = 0;
  param_1[0x764] = &PTR_LAB_14b6fe730;
  param_1[0x765] = &PTR_LAB_14b6fe770;
  param_1[0x766] = &PTR_LAB_14b6fe880;
  param_1[0x767] = &PTR_LAB_14b6fe8a0;
  param_1[0x768] = &PTR_LAB_14b6fe8c0;
  param_1[0x769] = &PTR_LAB_14b6fe960;
  param_1[0x76a] = &PTR_LAB_14b6fea00;
  param_1[0x76b] = &PTR_LAB_14b6fea40;
  param_1[0x76c] = &PTR_LAB_14b6fea70;
  param_1[0x76d] = &PTR_LAB_14b6feb00;
  param_1[0x76e] = &PTR_LAB_14b6feb70;
  *(undefined1 *)(param_1 + 0x76f) = 0;
  param_1[0x770] = 0;
  param_1[0x771] = 0;
  param_1[0x772] = 0;
  param_1[0x773] = &PTR_FUN_14b6feba0;
  param_1[0x774] = &PTR_LAB_14b6febe0;
  param_1[0x775] = &PTR_LAB_14b6fec10;
  param_1[0x776] = &PTR_FUN_14b6fec28;
  param_1[0x777] = &PTR_LAB_14b6fec40;
  param_1[0x778] = &PTR_LAB_14b6fec70;
  param_1[0x779] = &PTR_LAB_14b6feca0;
  param_1[0x77a] = 0;
  *(undefined1 *)(param_1 + 0x77b) = 0;
  param_1[0x77c] = &PTR_FUN_14b6fece0;
  param_1[0x77d] = &PTR_LAB_14b6fed60;
  param_1[0x77e] = &PTR_LAB_14b6fee30;
  param_1[0x77f] = &PTR_LAB_14b6fee50;
  param_1[0x780] = &PTR_LAB_14b6fee70;
  param_1[0x781] = &PTR_LAB_14b6feea0;
  param_1[0x782] = &PTR_LAB_14b6feec0;
  param_1[0x783] = &PTR_LAB_14b6feee0;
  param_1[0x784] = &PTR_LAB_14b6fef10;
  param_1[0x785] = &PTR_LAB_14b6fef40;
  param_1[0x786] = &PTR_LAB_14b6fef60;
  param_1[0x787] = &PTR_LAB_14b6fef80;
  param_1[0x788] = &PTR_LAB_14b6fefb0;
  param_1[0x789] = &PTR_LAB_14b6fefd0;
  param_1[0x78a] = &PTR_LAB_14b6feff0;
  param_1[0x78b] = &PTR_LAB_14b6ff040;
  param_1[0x78c] = &PTR_FUN_14b6ff080;
  param_1[0x78d] = &PTR_FUN_14b6ff0e0;
  *param_1 = &PTR_FUN_14b6fbc30;
  param_1[0x72] = &PTR_FUN_14b6fc800;
  param_1[0xe9] = &PTR_FUN_14b6fc860;
  param_1[0xea] = &PTR_FUN_14b6fc878;
  param_1[0x10c] = &PTR_FUN_14b6fc890;
  param_1[0x10d] = &PTR_FUN_14b6fc8b0;
  param_1[0x10e] = &PTR_FUN_14b6fc8f0;
  param_1[0x10f] = &PTR_FUN_14b6fc910;
  param_1[0x214] = &PTR_FUN_14b6fc930;
  param_1[0x215] = &PTR_FUN_14b6fc9f0;
  param_1[0x216] = &PTR_FUN_14b6fca20;
  param_1[0x217] = &PTR_FUN_14b6fca90;
  param_1[0x218] = &PTR_FUN_14b6fcac0;
  param_1[0x219] = &PTR_FUN_14b6fcb40;
  param_1[0x21a] = &PTR_FUN_14b6fcbb0;
  param_1[0x21b] = &PTR_FUN_14b6fcbe0;
  param_1[0x21c] = &PTR_FUN_14b6fcc10;
  param_1[0x21d] = &PTR_FUN_14b6fcc80;
  param_1[0x21e] = &PTR_FUN_14b6fcca0;
  param_1[0x21f] = &PTR_FUN_14b6fccc0;
  param_1[0x220] = &PTR_FUN_14b6fccf0;
  param_1[0x221] = &PTR_FUN_14b6fcd30;
  param_1[0x222] = &PTR_FUN_14b6fcd50;
  param_1[0x223] = &PTR_FUN_14b6fcd70;
  param_1[0x224] = &PTR_FUN_14b6fcda0;
  param_1[0x225] = &PTR_FUN_14b6fcde0;
  param_1[0x226] = &PTR_FUN_14b6fce00;
  param_1[0x227] = &PTR_FUN_14b6fce20;
  param_1[0x228] = &PTR_FUN_14b6fcec0;
  param_1[0x229] = &PTR_FUN_14b6fcef0;
  param_1[0x22a] = &PTR_FUN_14b6fcf10;
  param_1[0x22b] = &PTR_FUN_14b6fcf50;
  param_1[0x22c] = &PTR_FUN_14b6fcf80;
  param_1[0x22d] = &PTR_FUN_14b6fcfa0;
  param_1[0x22e] = &PTR_FUN_14b6fcfd0;
  param_1[0x22f] = &PTR_FUN_14b6fd020;
  param_1[0x230] = &PTR_FUN_14b6fd050;
  param_1[0x231] = &PTR_FUN_14b6fd0a0;
  param_1[0x232] = &PTR_FUN_14b6fd0d0;
  param_1[0x233] = &PTR_FUN_14b6fd0f0;
  param_1[0x236] = &PTR_FUN_14b6fd130;
  param_1[0x744] = &PTR_FUN_14b6fd150;
  param_1[0x745] = &PTR_FUN_14b6fd170;
  param_1[0x746] = &PTR_FUN_14b6fd1a0;
  param_1[0x747] = &PTR_FUN_14b6fd280;
  param_1[0x748] = &PTR_FUN_14b6fd2a0;
  param_1[0x749] = &PTR_FUN_14b6fd2b8;
  param_1[0x750] = &PTR_FUN_14b6fd2d0;
  param_1[0x751] = &PTR_FUN_14b6fd2f0;
  param_1[0x752] = &PTR_FUN_14b6fd330;
  param_1[0x759] = &PTR_FUN_14b6fd3e0;
  param_1[0x75a] = &PTR_FUN_14b6fd420;
  param_1[0x75b] = &PTR_FUN_14b6fd450;
  param_1[0x75c] = &PTR_FUN_14b6fd480;
  param_1[0x75d] = &PTR_FUN_14b6fd4c0;
  param_1[0x761] = &PTR_FUN_14b6fd4e0;
  param_1[0x764] = &PTR_FUN_14b6fd4f0;
  param_1[0x765] = &PTR_FUN_14b6fd530;
  param_1[0x766] = &PTR_FUN_14b6fd640;
  param_1[0x767] = &PTR_FUN_14b6fd660;
  param_1[0x768] = &PTR_FUN_14b6fd680;
  param_1[0x769] = &PTR_FUN_14b6fd720;
  param_1[0x76a] = &PTR_FUN_14b6fd7c0;
  param_1[0x76b] = &PTR_FUN_14b6fd800;
  param_1[0x76c] = &PTR_FUN_14b6fd830;
  param_1[0x76d] = &PTR_FUN_14b6fd8c0;
  param_1[0x76e] = &PTR_FUN_14b6fd930;
  param_1[0x773] = &PTR_FUN_14b6fd960;
  param_1[0x774] = &PTR_FUN_14b6fd9a0;
  param_1[0x775] = &PTR_FUN_14b6fd9d0;
  param_1[0x776] = &PTR_FUN_14b6fd9e8;
  param_1[0x777] = &PTR_FUN_14b6fda00;
  param_1[0x778] = &PTR_FUN_14b6fda30;
  param_1[0x779] = &PTR_FUN_14b6fda60;
  param_1[0x77c] = &PTR_FUN_14b6fdaa0;
  param_1[0x77d] = &PTR_FUN_14b6fdac0;
  param_1[0x77e] = &PTR_FUN_14b6fdb90;
  param_1[0x77f] = &PTR_FUN_14b6fdbb0;
  param_1[0x780] = &PTR_FUN_14b6fdbd0;
  param_1[0x781] = &PTR_FUN_14b6fdc00;
  param_1[0x782] = &PTR_FUN_14b6fdc20;
  param_1[0x783] = &PTR_FUN_14b6fdc40;
  param_1[0x784] = &PTR_FUN_14b6fdc70;
  param_1[0x785] = &PTR_FUN_14b6fdca0;
  param_1[0x786] = &PTR_FUN_14b6fdcc0;
  param_1[0x787] = &PTR_FUN_14b6fdce0;
  param_1[0x788] = &PTR_FUN_14b6fdd10;
  param_1[0x789] = &PTR_FUN_14b6fdd30;
  param_1[0x78a] = &PTR_FUN_14b6fdd50;
  param_1[0x78b] = &PTR_FUN_14b6fdda0;
  param_1[0x78c] = &PTR_FUN_14b6fdde0;
  param_1[0x78d] = &PTR_FUN_14b6fde40;
  param_1[0x793] = 0;
  param_1[0x794] = 0;
  param_1[0x791] = 0;
  param_1[0x792] = 0;
  param_1[0x78f] = 0;
  param_1[0x790] = 0;
  *(undefined4 *)(param_1 + 0x795) = 2;
  param_1[0x7a6] = 0;
  *(undefined4 *)(param_1 + 0x7a7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ccc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ce4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d04) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d0c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3d1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3d44) = 0;
  param_1[0x7aa] = 0;
  *(undefined4 *)(param_1 + 0x7ab) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d6d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d75) = 0;
  param_1[0x7ac] = 0;
  param_1[0x7ad] = 0;
  param_1[0x7b4] = 0;
  param_1[0x7b5] = 0;
  param_1[0x7b2] = 0;
  param_1[0x7b3] = 0;
  param_1[0x7b0] = 0;
  param_1[0x7b1] = 0;
  param_1[0x7b6] = 2;
  *(undefined1 *)(param_1 + 0x7cc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3db7) = 0;
  param_1[0x7be] = 0;
  param_1[0x7bc] = 0;
  param_1[0x7bd] = 0;
  param_1[0x7ba] = 0;
  param_1[0x7bb] = 0;
  param_1[0x7b8] = 0;
  param_1[0x7b9] = 0;
  param_1[2000] = 0;
  param_1[0x7d1] = 0;
  param_1[0x7ce] = 0;
  param_1[1999] = 0;
  *(undefined1 *)(param_1 + 0x7b7) = 1;
  param_1[0x78e] = &PTR_FUN_14b635770;
  *(undefined1 *)((longlong)param_1 + 0x3ebc) = 0;
  param_1[0x7d6] = 0;
  param_1[0x7d4] = 0;
  param_1[0x7d5] = 0;
  param_1[0x7d2] = 0;
  param_1[0x7d3] = 0;
  memset(param_1 + 0x7d8,0,0xa9);
  param_1[0x7ef] = 0;
  param_1[0x7f0] = 0;
  param_1[0x7f1] = 0;
  *(undefined4 *)(param_1 + 0x7f2) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3f94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fb4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3fbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fdc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3fe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ff4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3ffc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4004) = 0;
  *(undefined8 *)((longlong)param_1 + 0x400c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4024) = 0;
  *(undefined8 *)((longlong)param_1 + 0x402c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4014) = 0;
  *(undefined8 *)((longlong)param_1 + 0x401c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4034) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x406c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x405c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4064) = 0;
  *(undefined8 *)((longlong)param_1 + 0x404c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4054) = 0;
  *(undefined8 *)((longlong)param_1 + 0x403c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4044) = 0;
  *(undefined4 *)(param_1 + 0x80e) = 2;
  param_1[0x814] = 0;
  param_1[0x815] = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4074) = 0;
  *(undefined8 *)((longlong)param_1 + 0x407c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4081) = 0;
  *(undefined2 *)(param_1 + 0x816) = 0;
  local_90 = param_1 + 0x81d;
  param_1[0x817] = 0;
  param_1[0x818] = 0;
  param_1[0x819] = 0;
  param_1[0x81a] = 0;
  param_1[0x81b] = 0;
  param_1[0x81c] = 0;
  param_1[0x81d] = 0;
  param_1[0x81e] = 0;
  *(undefined4 *)(param_1 + 0x81f) = 2;
  *(undefined8 *)((longlong)param_1 + 0x40fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x410c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4119) = 0;
  FUN_140cd77a2(param_1 + 0x825);
  FUN_140f241b8(param_1 + 0x8f0);
  param_1[0x92d] = 0;
  param_1[0x92e] = 0;
  param_1[0x92f] = 0;
  param_1[0x930] = 0;
  param_1[0x931] = 2;
  param_1[0x932] = 0;
  *(undefined1 *)(param_1 + 0x933) = 0;
  *(undefined8 *)((longlong)param_1 + 0x499c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a2c) = 0;
  param_1[0x935] = 0;
  param_1[0x936] = 0;
  param_1[0x937] = 0;
  param_1[0x938] = 0;
  *(undefined1 *)(param_1 + 0x939) = 0;
  *(undefined1 *)(param_1 + 0x93f) = 0;
  param_1[0x93d] = 0;
  param_1[0x93e] = 0;
  param_1[0x93b] = 0;
  param_1[0x93c] = 0;
  param_1[0x941] = 0;
  param_1[0x942] = 0;
  param_1[0x943] = 0;
  param_1[0x944] = 0;
  *(undefined1 *)(param_1 + 0x945) = 0;
  *(undefined4 *)(param_1 + 0x951) = 0;
  param_1[0x94f] = 0;
  param_1[0x950] = 0;
  param_1[0x94d] = 0;
  param_1[0x94e] = 0;
  param_1[0x94b] = 0;
  param_1[0x94c] = 0;
  param_1[0x949] = 0;
  param_1[0x94a] = 0;
  param_1[0x947] = 0;
  param_1[0x948] = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a8c) = 0xff;
  param_1[0x952] = 0;
  param_1[0x953] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a9a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4aa2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4aac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ab4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4abc) = 0;
  *(undefined1 *)(param_1 + 0x959) = 1;
  FUN_140d235c4(param_1 + 0x95a);
  param_1[0x95a] = &PTR_FUN_14b6a9790;
  param_1[0x99d] = 0;
  param_1[0x99e] = 0;
  *(undefined4 *)(param_1 + 0x99f) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4cfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d04) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d09) = 0;
  param_1[0x9a3] = 0;
  param_1[0x9a4] = 0;
  *(undefined4 *)(param_1 + 0x9a5) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4d2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d4c) = 0xff7fffff00000000;
  param_1[0x9ab] = 0;
  param_1[0x9ac] = 0;
  param_1[0x9ad] = 0;
  param_1[0x9ae] = 0;
  param_1[0x9af] = 0;
  param_1[0x9b0] = 0;
  param_1[0x9b1] = 0;
  param_1[0x9b2] = 0;
  param_1[0x9b3] = 2;
  param_1[0x9b4] = 0;
  param_1[0x9bb] = 0;
  param_1[0x9bc] = 0x200000000;
  param_1[0x9bd] = 0;
  *(undefined1 *)(param_1 + 0x9be) = 0;
  param_1[0x9c1] = 0;
  param_1[0x9c2] = 0x200000000;
  *(byte *)(param_1 + 0x9c3) = *(byte *)(param_1 + 0x9c3) & 0xe0 | 3;
  param_1[0x9c4] = 0;
  param_1[0x9c5] = 0;
  param_1[0x9c6] = 0;
  *(undefined4 *)(param_1 + 0x9c7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4e3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e64) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e8c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4e94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e9c) = 0;
  param_1[0x9d4] = 0;
  param_1[0x9d5] = 0;
  *(undefined4 *)(param_1 + 0x9d6) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4eb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ebc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ec4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4ecc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ed4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4edc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4f02) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ef4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4efc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ee4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4eec) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f0a) = 5;
  *(undefined8 *)((longlong)param_1 + 0x4f0c) = 0;
  param_1[0x9e3] = 0;
  param_1[0x9e4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f34) = 0xff;
  param_1[0x9e7] = 0;
  param_1[0x9e8] = 0;
  FUN_140f24e0a(param_1 + 0x9e9);
  param_1[0xb9e] = 0;
  *(undefined4 *)(param_1 + 0xb9f) = 0;
  param_1[0xb99] = 0;
  param_1[0xb9a] = 0;
  *(undefined1 *)(param_1 + 0xb9b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5cfc) = 2;
  *(undefined1 *)(param_1 + 0xba0) = 0;
  param_1[0xba3] = 0;
  *(undefined4 *)(param_1 + 0xba4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5d24) = 2;
  param_1[0xba5] = 0;
  param_1[0xbb0] = 0;
  param_1[0xbb1] = 0;
  param_1[0xbb2] = 0;
  param_1[0xbb3] = 0;
  param_1[0xba7] = 0;
  param_1[0xba8] = 0;
  param_1[0xba9] = 0;
  param_1[0xbaa] = 0;
  param_1[0xbab] = 0;
  param_1[0xbac] = 0;
  param_1[0xbad] = 0;
  param_1[0xbae] = 0;
  *(undefined2 *)(param_1 + 0xbaf) = 0;
  *(undefined4 *)(param_1 + 0xbb4) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5da4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5db4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5dbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ddc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5de4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5df4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e04) = 0;
  param_1[0xbc1] = 0;
  param_1[0xbc2] = 0;
  *(undefined2 *)(param_1 + 0xbc6) = 4;
  *(undefined4 *)(param_1 + 0xbc3) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xbc7) = 3;
  cVar1 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0xbc8) = cVar1;
  param_1[0xbc9] = 0;
  *(undefined2 *)(param_1 + 0xbcd) = 4;
  *(undefined4 *)(param_1 + 0xbca) = 0;
  *(undefined1 *)(param_1 + 0xbce) = 3;
  *(char *)(param_1 + 0xbcf) = cVar1;
  *(undefined2 *)(param_1 + 0xbd0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5e82) = 0;
  param_1[0xbd1] = 0;
  *(undefined2 *)(param_1 + 0xbd5) = 0;
  *(undefined1 *)(param_1 + 0xbd6) = 0;
  *(undefined1 *)(param_1 + 0xbd7) = 0;
  *(undefined1 *)(param_1 + 0xbd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ec4) = 0;
  param_1[0xbde] = 0;
  *(undefined4 *)(param_1 + 0xbdf) = 0;
  param_1[0xbda] = 0;
  param_1[0xbdb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5efc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5f04) = 0;
  param_1[0xbe2] = 0;
  *(undefined4 *)(param_1 + 0xbe3) = 0;
  param_1[0xbe8] = 0;
  *(undefined4 *)(param_1 + 0xbe9) = 0;
  param_1[0xbe4] = 0;
  param_1[0xbe5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5f54) = 0;
  param_1[0xbec] = 0;
  *(undefined4 *)(param_1 + 0xbed) = 0;
  param_1[0xbee] = 0;
  param_1[0xbef] = 0;
  param_1[0xbf0] = 0;
  param_1[0xbf1] = 0;
  param_1[0xbf2] = 0;
  param_1[0xbf3] = 0;
  *(undefined4 *)(param_1 + 0xbf4) = 0;
  *(undefined1 **)((longlong)param_1 + 0x5fa4) = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)param_1 + 0x5fac) = 0;
  param_1[0xbf6] = 0;
  param_1[0xbf7] = 0;
  param_1[0xbf8] = 0;
  param_1[0xbf9] = 0;
  param_1[0xbfa] = 0;
  param_1[0xbfb] = 0;
  *(undefined4 *)(param_1 + 0xbfc) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5fe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5fec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ff4) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x600c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ffc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6004) = 0;
  *(undefined4 *)(param_1 + 0xc02) = 2;
  *(undefined8 *)((longlong)param_1 + 0x6044) = 0;
  *(undefined8 *)((longlong)param_1 + 0x604c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6034) = 0;
  *(undefined8 *)((longlong)param_1 + 0x603c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6024) = 0;
  *(undefined8 *)((longlong)param_1 + 0x602c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6014) = 0;
  *(undefined8 *)((longlong)param_1 + 0x601c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6054) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x605c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6064) = 0;
  *(undefined8 *)((longlong)param_1 + 0x606c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6074) = 0;
  *(undefined8 *)((longlong)param_1 + 0x607c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6084) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x608c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6094) = 0;
  *(undefined8 *)((longlong)param_1 + 0x609c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x60a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60b4) = 0x200000000;
  param_1[0xc1b] = 0;
  param_1[0xc1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x60cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60c4) = 0;
  FUN_1411236fe(param_1 + 0xc1d);
  param_1[0xc1d] = &PTR_FUN_14b9df6e0;
  *(undefined4 *)(param_1 + 0xc5e) = 0;
  *(undefined4 *)(param_1 + 0xc5f) = 0;
  lVar6 = 0x6324;
  do {
    *(undefined1 *)((longlong)param_1 + lVar6 + -0x24) = 0;
    *(undefined8 *)((longlong)param_1 + lVar6 + -0xc) = 0;
    *(undefined8 *)((longlong)param_1 + lVar6 + -4) = 0x200000000;
    lVar6 = lVar6 + 0x28;
  } while (lVar6 != 0x6374);
  *(undefined4 *)(param_1 + 0xc6a) = 0;
  lVar6 = 0x637c;
  do {
    *(undefined1 *)((longlong)param_1 + lVar6 + -0x24) = 0;
    *(undefined8 *)((longlong)param_1 + lVar6 + -0xc) = 0;
    *(undefined8 *)((longlong)param_1 + lVar6 + -4) = 0x200000000;
    lVar6 = lVar6 + 0x28;
  } while (lVar6 != 0x64bc);
  *(undefined4 *)(param_1 + 0xc93) = 0;
  lVar6 = 0x64c4;
  do {
    *(undefined1 *)((longlong)param_1 + lVar6 + -0x24) = 0;
    *(undefined8 *)((longlong)param_1 + lVar6 + -0xc) = 0;
    *(undefined8 *)((longlong)param_1 + lVar6 + -4) = 0x200000000;
    lVar6 = lVar6 + 0x28;
  } while (lVar6 != 0x6604);
  *(undefined1 *)(param_1 + 0xcbc) = 0;
  param_1[0xcbf] = 0;
  param_1[0xcc0] = 0x200000000;
  *(undefined1 *)(param_1 + 0xcc1) = 0;
  param_1[0xcc4] = 0;
  param_1[0xcc5] = 0x200000000;
  param_1[0xcca] = 0;
  *(undefined4 *)(param_1 + 0xccb) = 0;
  param_1[0xcc6] = 0;
  param_1[0xcc7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x665c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6664) = 0;
  param_1[0xcce] = 0;
  *(undefined4 *)(param_1 + 0xccf) = 0;
  param_1[0xcd0] = 0;
  param_1[0xcd1] = 0;
  param_1[0xcd2] = 0;
  param_1[0xcd3] = 0;
  param_1[0xcd4] = 0;
  param_1[0xcd5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x66a9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66b1) = 0;
  param_1[0xcdc] = 0;
  param_1[0xcdd] = 0;
  param_1[0xcda] = 0;
  param_1[0xcdb] = 0;
  param_1[0xcd8] = 0;
  param_1[0xcd9] = 0;
  param_1[0xcde] = 2;
  param_1[0xce9] = 0;
  *(undefined4 *)(param_1 + 0xcea) = 0;
  param_1[0xce5] = 0;
  param_1[0xce6] = 0;
  param_1[0xce3] = 0;
  param_1[0xce4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x670c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6704) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6754) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x675c) = 0;
  param_1[0xced] = 0;
  *(undefined4 *)(param_1 + 0xcee) = 0;
  param_1[0xcf3] = 0;
  *(undefined4 *)(param_1 + 0xcf4) = 0;
  param_1[0xcef] = 0;
  param_1[0xcf0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x67a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x67ac) = 0;
  param_1[0xcf7] = 0;
  *(undefined4 *)(param_1 + 0xcf8) = 0;
  *(undefined1 *)(param_1 + 0xcf9) = 0;
  param_1[0xd02] = 0;
  *(undefined4 *)(param_1 + 0xd03) = 0;
  *(undefined4 *)(param_1 + 0xcfc) = 0;
  param_1[0xcfa] = 0;
  param_1[0xcfb] = 0;
  *(undefined1 *)(param_1 + 0xcff) = 0;
  param_1[0xcfd] = 0;
  param_1[0xcfe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x681c) = 2;
  local_98 = param_1 + 0xd04;
  param_1[0xd05] = 0;
  param_1[0xd04] = &PTR_FUN_14b6ff100;
  *(undefined4 *)(param_1 + 0xd06) = 1;
  local_a0 = param_1 + 0xd07;
  param_1[0xd08] = 0;
  param_1[0xd07] = &PTR_FUN_14b6ff160;
  *(undefined4 *)(param_1 + 0xd09) = 0;
  param_1[0xd0d] = 0;
  param_1[0xd0e] = 0;
  *(undefined4 *)(param_1 + 0xd0c) = 0;
  param_1[0xd0a] = 0;
  param_1[0xd0b] = 0;
  *(undefined4 *)(param_1 + 0xd0f) = 2;
  *(undefined4 *)((longlong)param_1 + 0x688c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x687c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6884) = 0;
  param_1[0xd1f] = 0;
  param_1[0xd20] = 0;
  param_1[0xd1d] = 0;
  param_1[0xd1e] = 0;
  param_1[0xd1b] = 0;
  param_1[0xd1c] = 0;
  param_1[0xd19] = 0;
  param_1[0xd1a] = 0;
  param_1[0xd17] = 0;
  param_1[0xd18] = 0;
  param_1[0xd15] = 0;
  param_1[0xd16] = 0;
  param_1[0xd13] = 0;
  param_1[0xd14] = 0;
  *(byte *)(param_1 + 0xd21) = *(byte *)(param_1 + 0xd21) & 0xfe;
  local_b0 = param_1 + 0xd0a;
  local_a8 = param_1 + 0xd0b;
  *(undefined4 *)((longlong)param_1 + 0x692c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x691c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6924) = 0;
  *(undefined8 *)((longlong)param_1 + 0x690c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6914) = 0;
  *(undefined4 *)(param_1 + 0xd26) = 2;
  *(undefined4 *)((longlong)param_1 + 0x6944) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6934) = 0;
  *(undefined8 *)((longlong)param_1 + 0x693c) = 0;
  param_1[0xd29] = 2;
  *(byte *)(param_1 + 0xd2a) = *(byte *)(param_1 + 0xd2a) & 0xf0;
  param_1[0xd12] = &PTR_FUN_14b6ff190;
  param_1[0xd2b] = 0;
  param_1[0xd2c] = 0;
  *(undefined4 *)(param_1 + 0xd2d) = 2;
  *(undefined4 *)((longlong)param_1 + 0x697c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x696c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6974) = 0;
  *(undefined4 *)(param_1 + 0xd30) = 2;
  *(undefined8 *)((longlong)param_1 + 0x69a1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6994) = 0;
  *(undefined8 *)((longlong)param_1 + 0x699c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6984) = 0;
  *(undefined8 *)((longlong)param_1 + 0x698c) = 0;
  param_1[0xd36] = 0;
  param_1[0xd37] = 0;
  param_1[0xd3b] = 0;
  param_1[0xd3c] = 0;
  *(undefined4 *)(param_1 + 0xd38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x69c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd39) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x69cc) = 0xffffffff;
  param_1[0xd3a] = 0xffffffffffffffff;
  param_1[0xd46] = 0;
  *(undefined4 *)(param_1 + 0xd47) = 0;
  *(undefined1 *)(param_1 + 0xd43) = 0;
  param_1[0xd41] = 0;
  param_1[0xd42] = 0;
  param_1[0xd3f] = 0;
  param_1[0xd40] = 0;
  param_1[0xd3d] = 0;
  param_1[0xd3e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6a3c) = 2;
  *(undefined1 *)((longlong)param_1 + 0x6a44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6a4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6a54) = 0;
  param_1[0xd4b] = 0;
  *(undefined1 *)((longlong)param_1 + 0x6a64) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6a95) = 0;
  param_1[0xd51] = 0;
  param_1[0xd52] = 0;
  param_1[0xd4f] = 0;
  param_1[0xd50] = 0;
  param_1[0xd4d] = 0;
  param_1[0xd4e] = 0;
  FUN_140f23ff6(param_1 + 0xd54);
  param_1[0xd76] = 0;
  param_1[0xd77] = 0;
  param_1[0xd78] = 0;
  param_1[0xd79] = 0;
  *(byte *)(param_1 + 0xd7a) = *(byte *)(param_1 + 0xd7a) & 0xfc;
  FUN_140f2466a(param_1 + 0xd7b);
  FUN_140e51d94(param_1 + 0xd89);
  param_1[0xd89] = &PTR_FUN_14b6ff1b8;
  param_1[0xdcb] = 0;
  param_1[0xdcc] = 0;
  *(undefined4 *)(param_1 + 0xdcd) = 2;
  *(undefined8 *)((longlong)param_1 + 0x6e6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e7c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6e84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e94) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6e9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ea4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6eac) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6eb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ebc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ec4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6ecc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ed4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6edc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6ee4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6eec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ef4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6f59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f0c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6efc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f04) = 0;
  *(undefined1 *)(param_1 + 0xded) = 0;
  param_1[0xdf0] = 0;
  param_1[0xdf1] = 0x200000000;
  param_1[0xdf2] = 0;
  param_1[0xdf3] = 0;
  *(undefined4 *)(param_1 + 0xdf4) = 2;
  *(undefined8 *)((longlong)param_1 + 0x6fa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6fac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6fb4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6fbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6fc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6fcc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6fd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6fdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6fe4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6fec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ff4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ffc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x7004) = 0;
  *(undefined8 *)((longlong)param_1 + 0x700c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7014) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x702c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x701c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7024) = 0;
  *(undefined4 *)(param_1 + 0xe06) = 2;
  *(undefined8 *)((longlong)param_1 + 0x7054) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7041) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7049) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7034) = 0;
  *(undefined8 *)((longlong)param_1 + 0x703c) = 0;
  param_1[0xe10] = 0;
  param_1[0xe11] = 0;
  param_1[0xe0e] = 0;
  param_1[0xe0f] = 0;
  param_1[0xe0c] = 0;
  param_1[0xe0d] = 0;
  *(undefined4 *)(param_1 + 0xe12) = 2;
  *(undefined8 *)((longlong)param_1 + 0x70b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7094) = 0;
  *(undefined8 *)((longlong)param_1 + 0x709c) = 0;
  param_1[0xe18] = 0;
  param_1[0xe19] = 0;
  param_1[0xe1a] = &PTR_FUN_14b694008;
  *(undefined4 *)(param_1 + 0xe22) = 0;
  *(undefined1 *)(param_1 + 0xe23) = 0;
  *(undefined4 *)(param_1 + 0xe28) = 0;
  *(undefined1 *)(param_1 + 0xe29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x714c) = 0;
  *(undefined2 *)(param_1 + 0xe2a) = 0;
  *(undefined1 *)(param_1 + 0xe1d) = 0;
  param_1[0xe1b] = 0;
  param_1[0xe1c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x715c) = 0;
  FUN_140f24134(param_1 + 0xe2d);
  FUN_140f24bda(param_1 + 0xe35);
  *(undefined1 *)(param_1 + 0xeba) = 0;
  param_1[0xeb0] = 0;
  param_1[0xeb1] = 0;
  param_1[0xeb2] = 0;
  param_1[0xeb3] = 0;
  param_1[0xeb4] = 0;
  param_1[0xeb5] = 0;
  param_1[0xeb6] = 0;
  param_1[0xebb] = 0;
  param_1[0xebc] = 0;
  param_1[0xeab] = 0;
  param_1[0xeac] = 0;
  param_1[0xead] = 0;
  param_1[0xeae] = 0;
  *(undefined4 *)(param_1 + 0xeaf) = 0;
  FUN_140945b6a(param_1 + 0xebd);
  param_1[0xef2] = 0;
  param_1[0xef3] = 0;
  *(undefined4 *)(param_1 + 0xef4) = 2;
  *(undefined8 *)((longlong)param_1 + 0x77a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x77ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x77b4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x77bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x77c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x77cc) = 0;
  param_1[0xefa] = 2;
  FUN_140f23ff6(param_1 + 0xefb);
  *(undefined4 *)(param_1 + 0xf20) = 0;
  param_1[0xf31] = 0;
  param_1[0xf38] = 0;
  *(undefined4 *)(param_1 + 0xf39) = 0;
  param_1[0xf1d] = 0;
  param_1[0xf1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x78f6) = 0;
  param_1[0xf21] = 0;
  param_1[0xf22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7914) = 0;
  *(undefined8 *)((longlong)param_1 + 0x791c) = 0;
  param_1[0xf25] = 0;
  param_1[0xf26] = 0;
  param_1[0xf27] = 0;
  param_1[0xf28] = 0;
  *(undefined4 *)(param_1 + 0xf29) = 0;
  param_1[0xf2a] = 0;
  param_1[0xf2b] = 0;
  param_1[0xf2c] = 0;
  param_1[0xf2d] = 0;
  param_1[0xf2e] = 0;
  param_1[0xf2f] = 0;
  param_1[0xf33] = 0;
  param_1[0xf34] = 0;
  param_1[0xf35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x79d4) = 0;
  param_1[0xf3c] = 0;
  *(undefined4 *)(param_1 + 0xf3d) = 0;
  param_1[0xf42] = 0;
  *(undefined4 *)(param_1 + 0xf43) = 0;
  param_1[0xf3e] = 0;
  param_1[0xf3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a1c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7a24) = 0;
  param_1[0xf46] = 0;
  *(undefined4 *)(param_1 + 0xf47) = 0;
  param_1[0xf48] = 0;
  param_1[0xf49] = 0xffffffff00000000;
  param_1[0xf4e] = 0;
  *(undefined4 *)(param_1 + 0xf4f) = 0;
  param_1[0xf4a] = 0;
  param_1[0xf4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7a84) = 0;
  param_1[0xf52] = 0;
  *(undefined4 *)(param_1 + 0xf53) = 0;
  *(undefined1 *)(param_1 + 0xf54) = 0;
  *(undefined4 *)(param_1 + 0xf59) = 0;
  param_1[0xf5e] = 0;
  param_1[0xf5f] = 0x200000000;
  param_1[0xf61] = 0;
  param_1[0xf62] = 0x2000000000;
  param_1[0xf63] = 0xffffffff;
  param_1[0xf65] = 0;
  *(undefined4 *)(param_1 + 0xf66) = 0;
  param_1[0xf6b] = 0;
  param_1[0xf6c] = 0x200000000;
  param_1[0xf6e] = 0;
  param_1[0xf6f] = 0x2000000000;
  param_1[0xf70] = 0xffffffff;
  param_1[0xf72] = 0;
  *(undefined4 *)(param_1 + 0xf73) = 0;
  param_1[0xf78] = 0;
  param_1[0xf79] = 0x200000000;
  param_1[0xf7b] = 0;
  param_1[0xf7c] = 0x2000000000;
  param_1[0xf7d] = 0xffffffff;
  param_1[0xf7f] = 0;
  *(undefined4 *)(param_1 + 0xf80) = 0;
  param_1[0xf87] = 0;
  *(undefined4 *)(param_1 + 0xf88) = 0;
  param_1[0xf83] = 0;
  param_1[0xf84] = 0;
  param_1[0xf81] = 0;
  param_1[0xf82] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c4c) = 0;
  param_1[0xf8b] = 0;
  *(undefined4 *)(param_1 + 0xf8c) = 0;
  param_1[0xf92] = 0;
  param_1[0xf93] = 0x200000000;
  *(undefined1 *)(param_1 + 0xf8f) = 0;
  param_1[0xf8d] = 0;
  param_1[0xf8e] = 0;
  lVar6 = 0x7cc4;
  do {
    *(undefined1 *)((longlong)param_1 + lVar6 + -0x24) = 0;
    *(undefined8 *)((longlong)param_1 + lVar6 + -0xc) = 0;
    *(undefined8 *)((longlong)param_1 + lVar6 + -4) = 0x200000000;
    lVar6 = lVar6 + 0x28;
  } while (lVar6 != 0x7db4);
  param_1[0xfb2] = 0;
  param_1[0xfb3] = 0;
  *(undefined4 *)(param_1 + 0xfb4) = 2;
  *(undefined1 *)(param_1 + 0xfcc) = 0;
  param_1[0xfd3] = 0;
  param_1[0xfd4] = 0x400000000;
  *(undefined8 *)((longlong)param_1 + 0x7da4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7dac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7db4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7dbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7dc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7dcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7dd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ddc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7de4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7dec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7df4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7dfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e02) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e0a) = 0;
  param_1[0xfc3] = 0;
  param_1[0xfc4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e2a) = 0;
  param_1[0xfc7] = 0;
  param_1[0xfc8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7efc) = 0;
  param_1[0xfdd] = 0;
  param_1[0xfde] = 0;
  param_1[0xfdb] = 0;
  param_1[0xfdc] = 0;
  param_1[0xfd9] = 0;
  param_1[0xfda] = 0;
  param_1[0xfd7] = 0;
  param_1[0xfd8] = 0;
  param_1[0xfd5] = 0;
  param_1[0xfd6] = 0;
  *(undefined1 *)(param_1 + 0xfdf) = 0;
  param_1[0xfe2] = DAT_14c8464f0;
  uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0xfe0] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xfe1] = uVar7;
  param_1[0xfe3] = 0;
  *(undefined1 *)(param_1 + 0xfe4) = 1;
  param_1[0xfe5] = 0;
  param_1[0xfe6] = 0;
  param_1[0xfe7] = 0;
  param_1[0xfe8] = 0;
  param_1[0xfe9] = 0;
  param_1[0xfea] = 0;
  param_1[0xfeb] = 0;
  param_1[0xfec] = 0;
  param_1[0xfed] = 0;
  param_1[0xfee] = 0;
  param_1[0xfef] = 0;
  *(undefined4 *)(param_1 + 0xff0) = 0xffffffff;
  param_1[0xff1] = 0;
  param_1[0xff2] = 0;
  param_1[0xff3] = 0;
  param_1[0xff4] = 0;
  param_1[0xff5] = 0;
  param_1[0xff6] = 0;
  param_1[0xff7] = 0;
  param_1[0xff8] = 0;
  param_1[0xff9] = 0;
  param_1[0xffa] = 0;
  param_1[0xffb] = 0;
  param_1[0xffc] = 2;
  *(undefined1 *)(param_1 + 0xffd) = 0xff;
  *(undefined4 *)(param_1 + 0xffe) = 0;
  param_1[0x1010] = 0;
  *(undefined4 *)(param_1 + 0x1011) = 0;
  param_1[0x100d] = 0;
  param_1[0x100b] = 0;
  param_1[0x100c] = 0;
  param_1[0x1009] = 0;
  param_1[0x100a] = 0;
  param_1[0x1007] = 0;
  param_1[0x1008] = 0;
  param_1[0x1005] = 0;
  param_1[0x1006] = 0;
  param_1[0x1003] = 0;
  param_1[0x1004] = 0;
  param_1[0x1001] = 0;
  param_1[0x1002] = 0;
  param_1[0xfff] = 0;
  param_1[0x1000] = 0;
  *(undefined8 *)((longlong)param_1 + 0x808c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8094) = 0;
  param_1[0x1014] = 0;
  *(undefined4 *)(param_1 + 0x1015) = 0;
  param_1[0x101a] = 0;
  param_1[0x1018] = 0;
  param_1[0x1019] = 0;
  param_1[0x1016] = 0;
  param_1[0x1017] = 0;
  param_1[0x101b] = 0xf;
  *(undefined2 *)(param_1 + 0x101c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x80e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80ec) = 0;
  puVar9 = &DAT_14c846480;
  puVar10 = param_1 + 0x1020;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  param_1[0x1032] = 0;
  param_1[0x1030] = 0;
  param_1[0x1031] = 0;
  param_1[0x102e] = 0;
  param_1[0x102f] = 0;
  param_1[0x102c] = 0;
  param_1[0x102d] = 0;
  *(undefined1 *)(param_1 + 0x103e) = 0;
  param_1[0x1041] = 0;
  param_1[0x1042] = 0x200000000;
  param_1[0x1035] = 0;
  param_1[0x1036] = 0;
  param_1[0x1037] = 0;
  param_1[0x1038] = 0;
  *(undefined8 *)((longlong)param_1 + 0x81c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81cc) = 0;
  param_1[0x103b] = 0;
  param_1[0x103c] = 0;
  *(undefined1 *)(param_1 + 0x103d) = 0;
  *(undefined2 *)(param_1 + 0x1043) = 0;
  uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1044] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x1045] = uVar7;
  param_1[0x1046] = DAT_14c8464f0;
  *(undefined8 *)((longlong)param_1 + 0x8241) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8249) = 0;
  param_1[0x1047] = 0;
  param_1[0x1048] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8254) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x825c) = 0x3f800000;
  *(undefined1 **)((longlong)param_1 + 0x8264) = &DAT_3f8000003f800000;
  *(undefined2 *)((longlong)param_1 + 0x826c) = 0;
  param_1[0x1055] = 0;
  *(undefined4 *)(param_1 + 0x1056) = 0;
  *(undefined1 *)(param_1 + 0x1054) = 0;
  param_1[0x1052] = 0;
  param_1[0x1053] = 0;
  param_1[0x1050] = 0;
  param_1[0x1051] = 0;
  param_1[0x104e] = 0;
  param_1[0x104f] = 0;
  param_1[0x1057] = 0;
  param_1[0x1058] = 0;
  *(undefined4 *)(param_1 + 0x1059) = 0;
  param_1[0x105a] = 0;
  param_1[0x105b] = 0;
  param_1[0x105c] = 0;
  param_1[0x105d] = 0;
  param_1[0x105e] = 0;
  param_1[0x105f] = 0;
  param_1[0x1060] = 0;
  param_1[0x1061] = 0;
  param_1[0x1062] = 0;
  param_1[0x1063] = 0;
  param_1[0x1064] = 0;
  param_1[0x1034] = &PTR_FUN_14b6ff1c0;
  *(undefined4 *)(param_1 + 0x1065) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8394) = 0;
  *(undefined1 *)(param_1 + 0x1073) = 0;
  param_1[0x1074] = 0;
  *(undefined4 *)(param_1 + 0x1075) = 0;
  param_1[0x107c] = 0;
  param_1[0x107d] = 0x200000000;
  param_1[0x1076] = 0;
  param_1[0x1077] = 0;
  *(undefined8 *)((longlong)param_1 + 0x83b9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x83c1) = 0;
  param_1[0x1066] = 0;
  param_1[0x1067] = 0;
  param_1[0x1068] = 0;
  param_1[0x1069] = 0;
  *(undefined8 *)((longlong)param_1 + 0x834a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8352) = 0;
  param_1[0x106c] = 0;
  param_1[0x106d] = 0;
  param_1[0x106e] = 0;
  param_1[0x106f] = 0;
  param_1[0x1070] = 0;
  param_1[0x1071] = 0;
  *(undefined1 *)(param_1 + 0x1072) = 0;
  *(undefined1 *)(param_1 + 0x107e) = 0;
  *(undefined1 *)(param_1 + 0x1082) = 0;
  *(undefined4 *)(param_1 + 0x1081) = 0;
  param_1[0x107f] = 0;
  param_1[0x1080] = 0;
  param_1[0x1085] = DAT_14c8464f0;
  uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1083] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x1084] = uVar7;
  param_1[0x1086] = 0;
  param_1[0x1089] = DAT_14c8464f0;
  uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1087] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x1088] = uVar7;
  param_1[0x108a] = 0;
  *(undefined1 *)(param_1 + 0x108b) = 0;
  *(undefined1 *)(param_1 + 0x108f) = 0;
  param_1[0x108c] = 0;
  param_1[0x108d] = 0;
  *(undefined4 *)(param_1 + 0x108e) = 0;
  param_1[0x1092] = DAT_14c8464f0;
  uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1090] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x1091] = uVar7;
  param_1[0x1093] = 0;
  param_1[0x1096] = DAT_14c8464f0;
  uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1094] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x1095] = uVar7;
  param_1[0x1097] = 0;
  *(undefined1 *)(param_1 + 0x1098) = 0;
  *(undefined1 *)(param_1 + 0x109c) = 0;
  *(undefined4 *)(param_1 + 0x109b) = 0;
  param_1[0x1099] = 0;
  param_1[0x109a] = 0;
  uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x109d] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x109e] = uVar7;
  param_1[0x109f] = DAT_14c8464f0;
  param_1[0x10a0] = 0;
  param_1[0x10a3] = DAT_14c8464f0;
  uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x10a1] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x10a2] = uVar7;
  param_1[0x10a4] = 0;
  *(undefined1 *)(param_1 + 0x10a5) = 0;
  *(undefined1 *)(param_1 + 0x10ac) = 0;
  *(undefined1 *)(param_1 + 0x10ad) = 0;
  *(undefined8 *)((longlong)param_1 + 0x856c) = 0;
  param_1[0x10a6] = 0;
  param_1[0x10a7] = 0;
  *(undefined4 *)(param_1 + 0x10a8) = 0;
  *(undefined4 *)(param_1 + 0x10ab) = 0;
  param_1[0x10a9] = 0;
  param_1[0x10aa] = 0;
  param_1[0x10b1] = DAT_14c8464f0;
  uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x10af] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x10b0] = uVar7;
  param_1[0x10b4] = DAT_14c8464f0;
  uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x10b2] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x10b3] = uVar7;
  param_1[0x10b7] = DAT_14c8464f0;
  uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x10b5] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x10b6] = uVar7;
  param_1[0x10b8] = 0;
  *(undefined4 *)(param_1 + 0x10b9) = 0;
  param_1[0x10bc] = DAT_14c8464f0;
  uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x10ba] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x10bb] = uVar7;
  param_1[0x10bf] = DAT_14c8464f0;
  uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x10bd] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x10be] = uVar7;
  *(undefined4 *)(param_1 + 0x10c4) = 0;
  param_1[0x10c2] = 0;
  param_1[0x10c3] = 0;
  param_1[0x10c0] = 0;
  param_1[0x10c1] = 0;
  param_1[0x10c7] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x10c5) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x862c) = uVar2;
  *(undefined4 *)(param_1 + 0x10c6) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x8634) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x8679) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8681) = 0;
  param_1[0x10ce] = 0;
  param_1[0x10cf] = 0;
  param_1[0x10cc] = 0;
  param_1[0x10cd] = 0;
  param_1[0x10ca] = 0;
  param_1[0x10cb] = 0;
  param_1[0x10c8] = 0;
  param_1[0x10c9] = 0;
  param_1[0x10d6] = 0;
  param_1[0x10d7] = 0;
  param_1[0x10d4] = 0;
  param_1[0x10d5] = 0;
  param_1[0x10d2] = 0;
  param_1[0x10d3] = 0;
  *(undefined4 *)(param_1 + 0x10d8) = 2;
  *(undefined4 *)((longlong)param_1 + 0x8734) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8724) = 0;
  *(undefined8 *)((longlong)param_1 + 0x872c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8714) = 0;
  *(undefined8 *)((longlong)param_1 + 0x871c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8704) = 0;
  *(undefined8 *)((longlong)param_1 + 0x870c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86cc) = 0;
  *(undefined4 *)(param_1 + 0x10e7) = 2;
  *(undefined4 *)((longlong)param_1 + 0x877c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x876c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8774) = 0;
  *(undefined8 *)((longlong)param_1 + 0x875c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8764) = 0;
  *(undefined8 *)((longlong)param_1 + 0x874c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8754) = 0;
  *(undefined8 *)((longlong)param_1 + 0x873c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8744) = 0;
  *(undefined4 *)(param_1 + 0x10f0) = 2;
  *(undefined4 *)((longlong)param_1 + 0x8794) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8784) = 0;
  *(undefined8 *)((longlong)param_1 + 0x878c) = 0;
  *(undefined4 *)(param_1 + 0x10f3) = 2;
  *(undefined4 *)((longlong)param_1 + 0x87ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x879c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x87a4) = 0;
  param_1[0x10f6] = 2;
  *(undefined1 *)(param_1 + 0x10f7) = 1;
  param_1[0x1101] = 0;
  *(undefined4 *)(param_1 + 0x1102) = 0;
  param_1[0x10fe] = 0;
  param_1[0x10fc] = 0;
  param_1[0x10fd] = 0;
  param_1[0x10fa] = 0;
  param_1[0x10fb] = 0;
  param_1[0x10f8] = 0;
  param_1[0x10f9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8814) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x881c) = 0;
  param_1[0x1105] = 0;
  *(undefined4 *)(param_1 + 0x1106) = 0;
  param_1[0x110d] = 0;
  param_1[0x110e] = 0;
  param_1[0x110b] = 0;
  param_1[0x110c] = 0;
  param_1[0x1109] = 0;
  param_1[0x110a] = 0;
  param_1[0x1107] = 0;
  param_1[0x1108] = 0;
  *(undefined4 *)(param_1 + 0x110f) = 2;
  *(undefined4 *)((longlong)param_1 + 0x889c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x888c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8894) = 0;
  *(undefined8 *)((longlong)param_1 + 0x887c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8884) = 0;
  *(undefined4 *)(param_1 + 0x1114) = 2;
  *(undefined4 *)((longlong)param_1 + 0x88c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88ac) = 0;
  *(undefined4 *)(param_1 + 0x1119) = 2;
  *(undefined4 *)((longlong)param_1 + 0x88dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88d4) = 0;
  *(undefined4 *)(param_1 + 0x111c) = 2;
  param_1[0x1128] = 0;
  *(undefined4 *)(param_1 + 0x1129) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88f2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88fa) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88ec) = 0;
  *(undefined1 *)(param_1 + 0x1125) = 0;
  param_1[0x1123] = 0;
  param_1[0x1124] = 0;
  param_1[0x1121] = 0;
  param_1[0x1122] = 0;
  *(undefined4 *)((longlong)param_1 + 0x894c) = 2;
  *(undefined1 *)(param_1 + 0x112a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x895c) = 0;
  *(undefined4 *)(param_1 + 0x112b) = 0;
  *(undefined1 *)(param_1 + 0x112d) = 0;
  param_1[0x112c] = 0;
  param_1[0x112e] = 0;
  param_1[0x112f] = 0;
  *(undefined4 *)(param_1 + 0x1130) = 2;
  *(undefined4 *)((longlong)param_1 + 0x8994) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8984) = 0;
  *(undefined8 *)((longlong)param_1 + 0x898c) = 0;
  param_1[0x1133] = 2;
  *(undefined2 *)(param_1 + 0x1134) = 0;
  param_1[0x1139] = 0;
  param_1[0x113a] = 0;
  param_1[0x1137] = 0;
  param_1[0x1138] = 0;
  param_1[0x1135] = 0;
  param_1[0x1136] = 0;
  *(undefined4 *)(param_1 + 0x113b) = 2;
  *(undefined4 *)((longlong)param_1 + 0x89fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89e4) = 0;
  param_1[0x1140] = 2;
  *(undefined1 *)(param_1 + 0x1141) = 0;
  param_1[0x1142] = 0;
  *(undefined1 *)(param_1 + 0x1143) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8abc) = 0;
  FUN_140f24832(param_1 + 0x1158);
  param_1[0x11f3] = 0;
  param_1[0x11f4] = 0;
  param_1[0x11f5] = 0;
  param_1[0x11f6] = 0;
  param_1[0x11f7] = 0;
  param_1[0x11f8] = 0;
  param_1[0x11f9] = 0;
  param_1[0x11fa] = 0;
  param_1[0x11fb] = 0;
  *(undefined4 *)(param_1 + 0x11fc) = 2;
  *(undefined1 *)(param_1 + 0x1202) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8fe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8fec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8ff4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8ffc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9002) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9014) = 0;
  *(undefined1 *)(param_1 + 0x1203) = 0;
  param_1[0x1204] = 0;
  param_1[0x1205] = 0;
  *(undefined4 *)(param_1 + 0x1206) = 2;
  *(undefined8 *)((longlong)param_1 + 0x9034) = 0;
  *(undefined8 *)((longlong)param_1 + 0x903c) = 0;
  param_1[0x1208] = 0;
  param_1[0x1209] = 0;
  uVar7 = FUN_140f2474c();
  param_1[0x120a] = &PTR_FUN_14aac8f28;
  param_1[0x120f] = 0;
  *(undefined4 *)(param_1 + 0x1210) = 0;
  param_1[0x120b] = 0;
  param_1[0x120c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9084) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x908c) = 0;
  param_1[0x1213] = 0;
  *(undefined4 *)(param_1 + 0x1214) = 0;
  param_1[0x1219] = 0;
  *(undefined4 *)(param_1 + 0x121a) = 0;
  param_1[0x1215] = 0;
  param_1[0x1216] = 0;
  *(undefined8 *)((longlong)param_1 + 0x90d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x90dc) = 0;
  param_1[0x121d] = 0;
  *(undefined4 *)(param_1 + 0x121e) = 0;
  param_1[0x121f] = uVar7;
  param_1[0x1220] = 0;
  *(undefined2 *)(param_1 + 0x1221) = 0;
  param_1[0x1222] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 0x1223) = 0;
  FUN_1405bceb4(param_1 + 0x1222);
  param_1[0x120a] = &PTR_FUN_14b6ff220;
  param_1[0x1222] = &PTR_LAB_14b6ff230;
  *(undefined1 *)(param_1 + 0x1224) = 0;
  memset(param_1 + 0x1230,0,0x88);
  param_1[0x1225] = 0;
  param_1[0x1226] = 0;
  param_1[0x1227] = 0;
  param_1[0x1228] = 0;
  param_1[0x1229] = 0;
  param_1[0x122a] = 0;
  param_1[0x122b] = 0;
  param_1[0x122c] = 0;
  param_1[0x122d] = 0;
  param_1[0x122e] = 0;
  *(undefined1 *)(param_1 + 0x122f) = 0;
  *(undefined1 *)(param_1 + 0x1241) = 3;
  param_1[0x1242] = 0;
  param_1[0x1243] = 0;
  param_1[0x1244] = 0;
  param_1[0x1245] = 0;
  param_1[0x1246] = 0;
  *(undefined1 *)(param_1 + 0x1247) = 1;
  param_1[0x1248] = 0;
  param_1[0x1249] = 0;
  param_1[0x124a] = 0;
  param_1[0x124b] = 0;
  param_1[0x124c] = 0;
  *(undefined2 *)(param_1 + 0x124d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x926a) = 0;
  param_1[0x124e] = 0;
  param_1[0x124f] = 0;
  param_1[0x1250] = 0;
  param_1[0x1251] = 0;
  *(undefined8 *)((longlong)param_1 + 0x928a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9292) = 0;
  *(undefined1 *)((longlong)param_1 + 0x929a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x929c) = 0x3dcccccd;
  param_1[0x1254] = 0;
  param_1[0x1255] = 0;
  *(undefined1 *)(param_1 + 0x1256) = 0;
  param_1[0x1257] = 0;
  param_1[0x1258] = 0;
  param_1[0x1259] = 0;
  param_1[0x125a] = 0;
  param_1[0x125b] = 0;
  *(undefined4 *)(param_1 + 0x125c) = 0x10101;
  *(undefined1 *)((longlong)param_1 + 0x92e4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x92e9) = 1;
  *(undefined4 *)((longlong)param_1 + 0x92e5) = 0x1010101;
  param_1[0x125e] = 0;
  param_1[0x125f] = 0;
  param_1[0x1260] = 0;
  param_1[0x1261] = 0;
  *(undefined8 *)((longlong)param_1 + 0x930b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9313) = 0;
  *(undefined1 *)((longlong)param_1 + 0x931b) = 1;
  param_1[0x126a] = 0;
  *(undefined4 *)(param_1 + 0x126b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9329) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9331) = 0;
  param_1[0x1264] = 0;
  param_1[0x1265] = 0;
  *(undefined4 *)((longlong)param_1 + 0x935c) = 2;
  param_1[0x126c] = 0;
  param_1[0x126d] = 0;
  *(undefined1 *)(param_1 + 0x126e) = 3;
  *(undefined1 *)(param_1 + 0x126f) = 1;
  param_1[0x1270] = 0;
  param_1[0x1271] = 0;
  param_1[0x1272] = 0;
  param_1[0x1273] = 0;
  param_1[0x1274] = 0;
  *(undefined4 *)(param_1 + 0x1275) = 2;
  *(undefined8 *)((longlong)param_1 + 0x93e4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x93dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x93cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x93d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x93bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x93c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x93ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x93b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x93f9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9401) = 0;
  param_1[0x127e] = 0;
  param_1[0x127f] = 0;
  *(byte *)(param_1 + 0x127c) = *(byte *)(param_1 + 0x127c) & 0xf8;
  *(undefined4 *)((longlong)param_1 + 0x9454) = 0;
  param_1[0x128b] = 0;
  *(undefined1 *)(param_1 + 0x128c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9464) = 0;
  param_1[0x128d] = 0;
  param_1[0x1288] = 0;
  param_1[0x1289] = 0;
  param_1[0x1286] = 0;
  param_1[0x1287] = 0;
  param_1[0x1284] = 0;
  param_1[0x1285] = 0;
  param_1[0x1282] = 0;
  param_1[0x1283] = 0;
  *(byte *)(param_1 + 0x128a) = *(byte *)(param_1 + 0x128a) & 0xfe;
  FUN_140cc2f8a(param_1 + 0x128e);
  param_1[0x128e] = &PTR_FUN_14b973bb0;
  param_1[0x1321] = 0;
  param_1[0x1322] = 0;
  *(undefined4 *)(param_1 + 0x1323) = 2;
  *(undefined8 *)((longlong)param_1 + 0x991c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9924) = 0;
  *(undefined8 *)((longlong)param_1 + 0x992c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9934) = 0;
  *(undefined8 *)((longlong)param_1 + 0x993c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9944) = 0;
  param_1[0x1329] = 0;
  param_1[0x132a] = 0;
  *(undefined4 *)(param_1 + 0x132b) = 2;
  *(undefined8 *)((longlong)param_1 + 0x995c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9964) = 0;
  *(undefined4 *)((longlong)param_1 + 0x996c) = 0;
  *(undefined4 *)(param_1 + 0x132e) = 2;
  *(undefined8 *)((longlong)param_1 + 0x9974) = 0;
  *(undefined8 *)((longlong)param_1 + 0x997c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9984) = 0;
  *(undefined8 *)((longlong)param_1 + 0x998c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9994) = 0;
  *(undefined8 *)((longlong)param_1 + 0x999c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99b2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99ba) = 0;
  param_1[0x1339] = 0;
  param_1[0x133a] = 0;
  param_1[0x133b] = 0;
  param_1[0x133c] = 0;
  param_1[0x133d] = 0;
  param_1[0x133e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x99f2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99fa) = 0;
  param_1[0x1343] = 0;
  param_1[0x1344] = 0;
  param_1[0x1341] = 0;
  param_1[0x1342] = 0;
  param_1[0x1346] = 0;
  param_1[0x1347] = 0;
  *(undefined4 *)(param_1 + 0x1348) = 0;
  *(undefined1 **)((longlong)param_1 + 0x9a44) = &DAT_3f8000003f800000;
  param_1[0x1357] = 0;
  param_1[0x134a] = 0;
  param_1[0x134b] = 0;
  param_1[0x134c] = 0;
  param_1[0x134d] = 0;
  param_1[0x134e] = 0;
  param_1[0x134f] = 0;
  param_1[0x1350] = 0;
  param_1[0x1351] = 0;
  param_1[0x1352] = 0;
  param_1[0x1353] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9a99) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9aa1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9aac) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9ab4) = 0;
  *(undefined1 *)(param_1 + 0x1358) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9ac4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9acc) = 0xffffffff;
  param_1[0x135a] = 0;
  param_1[0x135b] = 0;
  *(undefined4 *)(param_1 + 0x135c) = 0;
  *(undefined4 *)(param_1 + 0x1361) = 0;
  param_1[0x135f] = 0;
  param_1[0x1360] = 0;
  param_1[0x135d] = 0;
  param_1[0x135e] = 0;
  param_1[0x1369] = 0;
  param_1[0x136a] = 0x200000000;
  param_1[0x1362] = 0;
  param_1[0x1363] = 0;
  param_1[0x1364] = 0;
  param_1[0x1365] = 0;
  *(undefined1 *)(param_1 + 0x1366) = 0;
  *(undefined2 *)(param_1 + 0x136b) = 0;
  param_1[0x136c] = &PTR_FUN_14b9a1008;
  param_1[0x136f] = 0;
  param_1[0x1370] = 0;
  param_1[0x136d] = 0;
  param_1[0x136e] = 0;
  *(byte *)(param_1 + 0x1371) = *(byte *)(param_1 + 0x1371) & 0xf8;
  *(undefined1 *)(param_1 + 0x1373) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9b9c) = 0;
  param_1[0x1374] = 0;
  param_1[0x1376] = 0;
  param_1[0x1377] = 0;
  *(undefined1 *)(param_1 + 0x1383) = 0;
  param_1[0x1381] = 0;
  param_1[0x1382] = 0;
  param_1[0x137f] = 0;
  param_1[0x1380] = 0;
  param_1[0x137d] = 0;
  param_1[0x137e] = 0;
  param_1[0x137b] = 0;
  param_1[0x137c] = 0;
  param_1[0x1379] = 0;
  param_1[0x137a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c1c) = 0x3f800000;
  param_1[0x1385] = 0;
  param_1[0x1386] = 0x4120000000000000;
  *(undefined1 *)(param_1 + 0x138b) = 0;
  param_1[0x1389] = 0;
  param_1[0x138a] = 0;
  param_1[4999] = 0;
  param_1[5000] = 0;
  param_1[0x138e] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x138c) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x9c64) = uVar2;
  *(undefined4 *)(param_1 + 0x138d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x9c6c) = uVar4;
  *(undefined1 *)(param_1 + 0x138f) = 0;
  param_1[0x1392] = 0;
  param_1[0x1393] = 0x200000000;
  param_1[0x1398] = 0;
  param_1[0x1399] = 0;
  param_1[0x1396] = 0;
  param_1[0x1397] = 0;
  param_1[0x1394] = 0;
  param_1[0x1395] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) goto LAB_140f23fa5;
  pbVar8 = (byte *)(**(code **)(*(longlong *)(param_1[0x86] + 0x178) + 0x38))(param_1[0x86] + 0x178)
  ;
  *pbVar8 = *pbVar8 | 1;
  FUN_140f2409e(local_98,param_1);
  FUN_140f2409e(local_a0,param_1);
  lVar6 = param_1[0x86];
  if ((lVar6 == 0) || (DAT_14c950c29 == '\0')) {
    *local_b0 = lVar6;
    puVar9 = local_a8;
    if (lVar6 != 0) goto LAB_140f23e7d;
  }
  else {
    FUN_1456cec3c(lVar6);
    *local_b0 = lVar6;
LAB_140f23e7d:
    puVar9 = local_a8;
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      FUN_140f2435e(&local_68);
      local_78 = FUN_140e0e29e;
      local_70 = 0;
      FUN_140f24416(lVar6 + 0x3688,param_1,&local_78,local_68);
      lVar6 = param_1[0xd0a];
      FUN_140f242ac(&local_80);
      local_78 = FUN_140f57a96;
      local_70 = 0;
      FUN_140f24416(lVar6 + 0x3698,param_1,&local_78,local_80);
    }
  }
  lVar6 = param_1[0x87];
  if (lVar6 != 0) {
    *(undefined4 *)(param_1 + 0xead) = *(undefined4 *)(lVar6 + 0x640);
    *(undefined4 *)((longlong)param_1 + 0x756c) = *(undefined4 *)(lVar6 + 0x644);
  }
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar6 = FUN_1447210f0(param_1);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x152) != '\x02')) {
      FUN_140c4b7f0(local_90,local_88);
    }
  }
  *(undefined4 *)(param_1 + 0xd0c) = 0x3f800000;
  FUN_14020a6cc(puVar9,1);
  *(undefined4 *)((longlong)param_1 + 0x564) = 2;
  FUN_1446f470e(&local_78,L"Ladder",1);
  param_1[0x7d6] = local_78;
  *(undefined4 *)(param_1 + 0x7d7) = 0x3e4ccccd;
  *(undefined1 *)((longlong)param_1 + 0x7904) = 0;
LAB_140f23fa5:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f23ff6 FUN_140f23ff6 body=168 status=ok
// SIG undefined FUN_140f23ff6(void)

void FUN_140f23ff6(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 2;
  return;
}



// FUNCTION 140f2409e FUN_140f2409e body=150 status=ok
// SIG undefined FUN_140f2409e(void)

void FUN_140f2409e(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 8) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 140f24134 FUN_140f24134 body=132 status=ok
// SIG undefined FUN_140f24134(void)

undefined8 * FUN_140f24134(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  FUN_14020a6cc(0,1);
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0xc,1);
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_14020a6cc(param_1 + 3,1);
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0x24,1);
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  FUN_14020a6cc(param_1 + 6,1);
  return param_1;
}



// FUNCTION 140f241b8 FUN_140f241b8 body=243 status=ok
// SIG undefined FUN_140f241b8(void)

undefined8 * FUN_140f241b8(undefined8 *param_1)

{
  FUN_140650534();
  *param_1 = &PTR_FUN_14b6ff2c0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 2;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0x200000000;
  param_1[0x36] = 0;
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined2 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d9) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x35) = 1;
  FUN_140841e14(param_1 + 0x34,1);
  return param_1;
}



// FUNCTION 140f242ac FUN_140f242ac body=176 status=ok
// SIG undefined FUN_140f242ac(void)

undefined8 * FUN_140f242ac(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc207c) {
    FUN_144b3d300(&DAT_14cbc207c);
    if (DAT_14cbc207c == -1) {
      builtin_wcsncpy(local_38 + 8,L"rinting",8);
      builtin_wcsncpy(local_38,L"OnStopSp",8);
      FUN_1446f470e(&DAT_14cbc2074,local_38,1);
      _Init_thread_footer(&DAT_14cbc207c);
    }
  }
  *param_1 = DAT_14cbc2074;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f2435e FUN_140f2435e body=182 status=ok
// SIG undefined FUN_140f2435e(void)

undefined8 * FUN_140f2435e(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc2070) {
    FUN_144b3d300(&DAT_14cbc2070);
    if (DAT_14cbc2070 == -1) {
      builtin_wcsncpy(local_38 + 8,L"printing",9);
      builtin_wcsncpy(local_38,L"OnStartS",8);
      FUN_1446f470e(&DAT_14cbc2068,local_38,1);
      _Init_thread_footer(&DAT_14cbc2070);
    }
  }
  *param_1 = DAT_14cbc2068;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f24416 FUN_140f24416 body=595 status=ok
// SIG undefined FUN_140f24416(void)

void FUN_140f24416(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint *_Dst;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar3 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar3 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar3 = uVar6;
      }
    }
    uVar5 = (ulonglong)uVar3;
    if (param_4 == 0) {
      param_4 = 0;
    }
    else if (uVar3 == 0) {
      uVar5 = 0;
    }
    else if ((((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) &&
             (plVar4 = (longlong *)
                       ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0)) &&
            (((*(uint *)(plVar4 + 2) == uVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (*plVar4 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),param_4);
    }
  }
  local_48 = (ulonglong)uVar8 | uVar5 << 0x20;
  local_40 = param_4;
  FUN_1403350f6(param_1);
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar9 = 0;
    bVar10 = false;
    do {
      while( true ) {
        lVar1 = *param_1;
        _Dst = (uint *)(lVar1 + lVar9 * 0x10);
        if (((*(longlong *)(lVar1 + 8 + lVar9 * 0x10) != 0) && (_Dst[1] != 0)) &&
           ((uVar8 = *_Dst, -1 < (int)uVar8 &&
            (((((int)uVar8 < DAT_14c9647dc &&
               (plVar4 = (longlong *)
                         ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
               plVar4 != (longlong *)0x0)) && (*(uint *)(plVar4 + 2) == _Dst[1])) &&
             (((*(uint *)(plVar4 + 1) >> 0x1c & 1) == 0 && (*plVar4 != 0)))))))) break;
        iVar7 = ~(uint)lVar9 + iVar2;
        if (iVar7 != 0) {
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar7) * 0x10),(longlong)iVar7 << 4);
          iVar2 = (int)param_1[1];
        }
        iVar2 = iVar2 + -1;
        *(int *)(param_1 + 1) = iVar2;
        bVar10 = true;
        if (iVar2 <= lVar9) goto LAB_140f2460b;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
    if (bVar10) {
LAB_140f2460b:
      FUN_1400bbcfc(param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f2466a FUN_140f2466a body=225 status=ok
// SIG undefined FUN_140f2466a(void)

undefined8 * FUN_140f2466a(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14b6ff2e8;
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
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  FUN_14020a6cc(param_1 + 2,1);
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  FUN_14020a6cc(param_1 + 5,1);
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0x1c,1);
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0x34,1);
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  FUN_14020a6cc(param_1 + 8,1);
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  FUN_14020a6cc(param_1 + 0xb,1);
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0x4c,1);
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 100,1);
  return param_1;
}



// FUNCTION 140f2474c FUN_140f2474c body=228 status=ok
// SIG undefined FUN_140f2474c(void)

longlong FUN_140f2474c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba8d28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1465c56e4;
    local_28 = &LAB_146406b72;
    local_38 = &LAB_148c020cf;
    local_40 = &LAB_1459a6779;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacterSubsystem",&DAT_14cba8d28,&DAT_148c020ce);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba8d28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f24832 FUN_140f24832 body=936 status=ok
// SIG undefined FUN_140f24832(void)

undefined8 * FUN_140f24832(undefined8 *param_1)

{
  char cVar1;
  byte bVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23) = 0;
  memset(param_1 + 0xb,0,0xb8);
  *(undefined2 *)(param_1 + 0x10) = 4;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 3;
  *(char *)(param_1 + 0x12) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x17) = 4;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x18) = 3;
  *(char *)(param_1 + 0x19) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd2) = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0x101;
  param_1[0x2c] = 0;
  *(undefined2 *)(param_1 + 0x30) = 4;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  bVar2 = DAT_14c9a8634;
  *(bool *)(param_1 + 0x32) = (DAT_14c9a8634 & 0x20) == 0;
  param_1[0x33] = 0;
  *(undefined2 *)(param_1 + 0x37) = 4;
  *(undefined4 *)(param_1 + 0x34) = 0x40200000;
  *(undefined1 *)(param_1 + 0x38) = 3;
  *(char *)(param_1 + 0x39) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x3a] = 0;
  *(undefined2 *)(param_1 + 0x3e) = 4;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 1;
  *(bool *)(param_1 + 0x40) = (bVar2 & 0x20) == 0;
  param_1[0x41] = 0;
  *(undefined2 *)(param_1 + 0x45) = 4;
  *(undefined4 *)(param_1 + 0x42) = 0x40200000;
  *(undefined1 *)(param_1 + 0x46) = 3;
  *(char *)(param_1 + 0x47) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined2 *)(param_1 + 0x50) = 0x101;
  param_1[0x51] = 0;
  *(undefined2 *)(param_1 + 0x55) = 4;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x56) = 1;
  *(bool *)(param_1 + 0x57) = (bVar2 & 0x20) == 0;
  param_1[0x58] = 0;
  *(undefined2 *)(param_1 + 0x5c) = 4;
  *(undefined4 *)(param_1 + 0x59) = 0x40200000;
  *(undefined1 *)(param_1 + 0x5d) = 3;
  *(char *)(param_1 + 0x5e) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x5f] = 0;
  *(undefined2 *)(param_1 + 99) = 4;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 100) = 1;
  *(bool *)(param_1 + 0x65) = (bVar2 & 0x20) == 0;
  param_1[0x66] = 0;
  *(undefined2 *)(param_1 + 0x6a) = 4;
  *(undefined4 *)(param_1 + 0x67) = 0x40200000;
  *(undefined1 *)(param_1 + 0x6b) = 3;
  *(char *)(param_1 + 0x6c) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined1 *)(param_1 + 0x71) = 1;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0xffffffff;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined2 *)(param_1 + 0x77) = 0x101;
  param_1[0x78] = 0;
  *(undefined2 *)(param_1 + 0x7c) = 4;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 1;
  *(bool *)(param_1 + 0x7e) = (bVar2 & 0x20) == 0;
  param_1[0x7f] = 0;
  *(undefined2 *)(param_1 + 0x83) = 4;
  *(undefined4 *)(param_1 + 0x80) = 0x40200000;
  *(undefined1 *)(param_1 + 0x84) = 3;
  cVar1 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0x85) = cVar1;
  param_1[0x86] = 0;
  *(undefined2 *)(param_1 + 0x8a) = 4;
  *(undefined4 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x8b) = 1;
  *(bool *)(param_1 + 0x8c) = (bVar2 & 0x20) == 0;
  param_1[0x8d] = 0;
  *(undefined2 *)(param_1 + 0x91) = 4;
  *(undefined4 *)(param_1 + 0x8e) = 0x40200000;
  *(undefined1 *)(param_1 + 0x92) = 3;
  *(char *)(param_1 + 0x93) = cVar1;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined1 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  return param_1;
}



// FUNCTION 140f24bda FUN_140f24bda body=559 status=ok
// SIG undefined FUN_140f24bda(void)

undefined8 * FUN_140f24bda(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 2;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0x200000000;
  memset((void *)((longlong)param_1 + 0x134),0,0x84);
  *(undefined4 *)(param_1 + 0x37) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3d] = 2;
  param_1[0x3e] = 0x3f80000000000000;
  param_1[0x3f] = 0x3f800000;
  param_1[0x40] = &DAT_3f8000003f800000;
  param_1[0x41] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x42) = 0x3f800000;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)((longlong)param_1 + 0x242) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 2;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined1 *)((longlong)param_1 + 700) = 0xff;
  param_1[0x5a] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5b] = 0x3f800000bf800000;
  param_1[0x5c] = 0xbf80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)((longlong)param_1 + 0x324) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0;
  *(undefined8 *)((longlong)param_1 + 0x379) = 0;
  *(undefined8 *)((longlong)param_1 + 0x381) = 0;
  param_1[0x74] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(byte *)((longlong)param_1 + 0x241) = *(byte *)((longlong)param_1 + 0x241) & 0xe0;
  return param_1;
}



// FUNCTION 140f24e0a FUN_140f24e0a body=2147 status=ok
// SIG undefined FUN_140f24e0a(void)

void FUN_140f24e0a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 2;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 2;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 2;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 2;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 2;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x22) = 2;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x26) = 2;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 2;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 2;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x32) = 2;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x36) = 2;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 2;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 2;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x42) = 2;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x46) = 2;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 2;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 2;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x52) = 2;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x56) = 2;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x5a) = 2;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 2;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x62) = 2;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 0x66) = 2;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 2;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0;
  *(undefined4 *)(param_1 + 0x6e) = 2;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 0;
  *(undefined4 *)(param_1 + 0x73) = 2;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined4 *)(param_1 + 0x77) = 2;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x7b) = 2;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined4 *)(param_1 + 0x7f) = 2;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x83) = 2;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x87) = 2;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined4 *)(param_1 + 0x8b) = 2;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x8f) = 2;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x94) = 2;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ac) = 0;
  *(undefined4 *)(param_1 + 0x98) = 2;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x9d) = 2;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0xa1) = 2;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x50c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0;
  *(undefined4 *)(param_1 + 0xa5) = 2;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x53c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x544) = 0;
  *(undefined8 *)((longlong)param_1 + 0x52c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x534) = 0;
  *(undefined4 *)(param_1 + 0xaa) = 2;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55c) = 0;
  *(undefined4 *)(param_1 + 0xae) = 2;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x574) = 0;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0;
  *(undefined4 *)(param_1 + 0xb2) = 2;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x594) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59c) = 0;
  *(undefined4 *)(param_1 + 0xb6) = 2;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined4 *)(param_1 + 0xba) = 2;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dc) = 0;
  *(undefined4 *)(param_1 + 0xbe) = 2;
  *(undefined4 *)((longlong)param_1 + 0x614) = 0;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = 0;
  *(undefined4 *)(param_1 + 0xc3) = 2;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x62c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x624) = 0;
  *(undefined4 *)(param_1 + 200) = 2;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 2;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66c) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 2;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x684) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68c) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 2;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ac) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 2;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6cc) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 2;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ec) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 2;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x704) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70c) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 2;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x724) = 0;
  *(undefined8 *)((longlong)param_1 + 0x72c) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 2;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x744) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74c) = 0;
  *(undefined4 *)(param_1 + 0xec) = 2;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined8 *)((longlong)param_1 + 0x764) = 0;
  *(undefined8 *)((longlong)param_1 + 0x76c) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 2;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x784) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78c) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 2;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ac) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 2;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7cc) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 2;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ec) = 0;
  *(undefined4 *)(param_1 + 0x100) = 2;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  *(undefined8 *)((longlong)param_1 + 0x804) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80c) = 0;
  *(undefined4 *)(param_1 + 0x104) = 2;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  *(undefined8 *)((longlong)param_1 + 0x824) = 0;
  *(undefined8 *)((longlong)param_1 + 0x82c) = 0;
  *(undefined4 *)(param_1 + 0x108) = 2;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x844) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84c) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 2;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x864) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 2;
  *(undefined4 *)((longlong)param_1 + 0x8a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x894) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x884) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88c) = 0;
  *(undefined4 *)(param_1 + 0x115) = 2;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b4) = 0;
  *(undefined4 *)(param_1 + 0x119) = 2;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d4) = 0;
  *(undefined4 *)(param_1 + 0x11d) = 2;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8f4) = 0;
  *(undefined4 *)(param_1 + 0x121) = 2;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  *(undefined8 *)((longlong)param_1 + 0x90c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x914) = 0;
  *(undefined4 *)(param_1 + 0x125) = 2;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  *(undefined8 *)((longlong)param_1 + 0x92c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x934) = 0;
  *(undefined4 *)(param_1 + 0x129) = 2;
  param_1[299] = 0;
  param_1[300] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x954) = 0;
  *(undefined4 *)(param_1 + 0x12d) = 2;
  *(undefined4 *)((longlong)param_1 + 0x97c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x96c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x974) = 0;
  *(undefined4 *)(param_1 + 0x130) = 2;
  *(undefined4 *)((longlong)param_1 + 0x994) = 0;
  *(undefined8 *)((longlong)param_1 + 0x984) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98c) = 0;
  *(undefined4 *)(param_1 + 0x133) = 2;
  *(undefined4 *)((longlong)param_1 + 0x9ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9a4) = 0;
  *(undefined4 *)(param_1 + 0x136) = 2;
  *(undefined4 *)((longlong)param_1 + 0x9c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9bc) = 0;
  *(undefined4 *)(param_1 + 0x139) = 2;
  *(undefined4 *)((longlong)param_1 + 0x9dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d4) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 2;
  *(undefined4 *)((longlong)param_1 + 0xa04) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9ec) = 0;
  *(undefined4 *)(param_1 + 0x141) = 2;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa14) = 0;
  *(undefined4 *)(param_1 + 0x145) = 2;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa34) = 0;
  *(undefined4 *)(param_1 + 0x149) = 2;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa54) = 0;
  *(undefined4 *)(param_1 + 0x14d) = 2;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa74) = 0;
  *(undefined4 *)(param_1 + 0x151) = 2;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa94) = 0;
  *(undefined4 *)(param_1 + 0x155) = 2;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  *(undefined8 *)((longlong)param_1 + 0xaac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xab4) = 0;
  *(undefined4 *)(param_1 + 0x159) = 2;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xacc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xad4) = 0;
  *(undefined4 *)(param_1 + 0x15d) = 2;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  *(undefined8 *)((longlong)param_1 + 0xafc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb04) = 0;
  *(undefined8 *)((longlong)param_1 + 0xaec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xaf4) = 0;
  *(undefined4 *)(param_1 + 0x163) = 2;
  *(undefined8 *)((longlong)param_1 + 0xb2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb24) = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  *(undefined4 *)(param_1 + 0x169) = 2;
  *(undefined4 *)((longlong)param_1 + 0xb6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb64) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb54) = 0;
  *(undefined4 *)(param_1 + 0x16e) = 2;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb84) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb74) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb7c) = 0;
  *(undefined4 *)(param_1 + 0x176) = 2;
  param_1[0x17d] = 0;
  *(undefined4 *)(param_1 + 0x17e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbfc) = 0;
  param_1[0x181] = 0;
  *(undefined4 *)(param_1 + 0x182) = 0;
  param_1[0x188] = 0;
  *(undefined4 *)(param_1 + 0x189) = 0;
  param_1[0x185] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc54) = 0;
  param_1[0x18c] = 0;
  *(undefined4 *)(param_1 + 0x18d) = 0;
  param_1[0x192] = 0;
  *(undefined4 *)(param_1 + 0x193) = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xca4) = 0;
  param_1[0x196] = 0;
  *(undefined4 *)(param_1 + 0x197) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  param_1[0x19d] = 0;
  *(undefined4 *)(param_1 + 0x19e) = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcfc) = 0;
  param_1[0x1a1] = 0;
  *(undefined4 *)(param_1 + 0x1a2) = 0;
  param_1[0x1a7] = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4c) = 0;
  param_1[0x1ab] = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  param_1[0x1af] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  return;
}



// FUNCTION 140f2566e FUN_140f2566e body=4755 status=ok
// SIG undefined FUN_140f2566e(void)

longlong * FUN_140f2566e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  longlong *local_70;
  code *local_68;
  ulonglong local_60;
  
  uVar5 = DAT_14cacfcd8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = FUN_140993a2e();
  FUN_140486538(param_2,uVar5);
  plVar9 = param_2 + 4;
  FUN_14048646a(plVar9,uVar5,uVar4,0);
  uVar5 = DAT_14cb71260;
  FUN_140486538(param_2,DAT_14cb71260);
  FUN_14048646a(plVar9,uVar5,0,0);
  uVar5 = DAT_14cacfcc8;
  FUN_140486538(param_2,DAT_14cacfcc8);
  FUN_14048646a(plVar9,uVar5,0,0);
  local_70 = param_2;
  FUN_140f26e4e(param_1);
  param_1[0x234] = 0;
  param_1[0x235] = 0;
  *param_1 = (longlong)&PTR_FUN_14b0dbbc0;
  param_1[0x72] = (longlong)&PTR_FUN_14b0dc590;
  param_1[0xe9] = (longlong)&PTR_FUN_14b0dc5f0;
  param_1[0xea] = (longlong)&PTR_FUN_14b0dc608;
  param_1[0x10c] = (longlong)&PTR_FUN_14b0dc620;
  param_1[0x10d] = (longlong)&PTR_FUN_14b0dc640;
  param_1[0x10e] = (longlong)&PTR_FUN_14b0dc680;
  param_1[0x10f] = (longlong)&PTR_FUN_14b0dc6a0;
  param_1[0x214] = (longlong)&PTR_FUN_14b0dc6c0;
  param_1[0x215] = (longlong)&PTR_FUN_14b0dc780;
  param_1[0x216] = (longlong)&PTR_FUN_14b0dc7b0;
  param_1[0x217] = (longlong)&PTR_FUN_14b0dc820;
  param_1[0x218] = (longlong)&PTR_FUN_14b0dc850;
  param_1[0x219] = (longlong)&PTR_FUN_14b0dc8d0;
  param_1[0x21a] = (longlong)&PTR_FUN_14b0dc940;
  param_1[0x21b] = (longlong)&PTR_FUN_14b0dc970;
  param_1[0x21c] = (longlong)&PTR_FUN_14b0dc9a0;
  param_1[0x21d] = (longlong)&PTR_FUN_14b0dca10;
  param_1[0x21e] = (longlong)&PTR_FUN_14b0dca30;
  param_1[0x21f] = (longlong)&PTR_FUN_14b0dca50;
  param_1[0x220] = (longlong)&PTR_FUN_14b0dca80;
  param_1[0x221] = (longlong)&PTR_FUN_14b0dcac0;
  param_1[0x222] = (longlong)&PTR_FUN_14b0dcae0;
  param_1[0x223] = (longlong)&PTR_FUN_14b0dcb00;
  param_1[0x224] = (longlong)&PTR_FUN_14b0dcb30;
  param_1[0x225] = (longlong)&PTR_FUN_14b0dcb70;
  param_1[0x226] = (longlong)&PTR_FUN_14b0dcb90;
  param_1[0x227] = (longlong)&PTR_FUN_14b0dcbb0;
  param_1[0x228] = (longlong)&PTR_FUN_14b0dcc50;
  param_1[0x229] = (longlong)&PTR_FUN_14b0dcc80;
  param_1[0x22a] = (longlong)&PTR_FUN_14b0dcca0;
  param_1[0x22b] = (longlong)&PTR_FUN_14b0dcce0;
  param_1[0x22c] = (longlong)&PTR_FUN_14b0dcd10;
  param_1[0x22d] = (longlong)&PTR_FUN_14b0dcd30;
  param_1[0x22e] = (longlong)&PTR_FUN_14b0dcd60;
  param_1[0x22f] = (longlong)&PTR_FUN_14b0dcdb0;
  param_1[0x230] = (longlong)&PTR_FUN_14b0dcde0;
  param_1[0x231] = (longlong)&PTR_FUN_14b0dce30;
  param_1[0x232] = (longlong)&PTR_FUN_14b0dce60;
  param_1[0x233] = (longlong)&PTR_FUN_14b0dce80;
  param_1[0x236] = (longlong)&PTR_FUN_14b0dcec0;
  param_1[0x237] = 0;
  param_1[0x238] = 0;
  *(undefined4 *)(param_1 + 0x239) = 2;
  *(undefined8 *)((longlong)param_1 + 0x11cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11dc) = 0x200000000;
  param_1[0x240] = 0;
  param_1[0x241] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11ec) = 0;
  *(undefined4 *)(param_1 + 0x242) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x121c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1224) = 0x200000000;
  plVar9 = param_1 + 0x24c;
  memset((void *)((longlong)param_1 + 0x122c),0,0xa4);
  *(undefined4 *)(param_1 + 0x25a) = 2;
  *(undefined8 *)((longlong)param_1 + 0x12d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12e4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x12ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12fc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x131c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1324) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x132c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x133c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1344) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x135c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1364) = 0;
  *(undefined8 *)((longlong)param_1 + 0x136c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1374) = 0;
  *(undefined8 *)((longlong)param_1 + 0x137c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1384) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1394) = 0;
  *(undefined8 *)((longlong)param_1 + 0x139c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13ac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13b4) = 0;
  *(undefined4 *)(param_1 + 0x277) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x13bc) = 0;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  param_1[0x27a] = 0;
  param_1[0x27b] = 0;
  param_1[0x27c] = 0;
  param_1[0x27d] = 0;
  *(undefined4 *)(param_1 + 0x27e) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1404) = 0;
  param_1[0x285] = 0;
  *(undefined4 *)(param_1 + 0x286) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1406) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1416) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1434) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x143c) = 0;
  param_1[0x289] = 0;
  *(undefined4 *)(param_1 + 0x28a) = 0;
  param_1[0x291] = 0;
  param_1[0x292] = 0;
  param_1[0x28f] = 0;
  param_1[0x290] = 0;
  param_1[0x28d] = 0;
  param_1[0x28e] = 0;
  param_1[0x28b] = 0;
  param_1[0x28c] = 0;
  *(undefined4 *)(param_1 + 0x293) = 2;
  param_1[0x2b5] = 0;
  param_1[0x2b6] = 0;
  param_1[0x2b3] = 0;
  param_1[0x2b4] = 0;
  param_1[0x2b1] = 0;
  param_1[0x2b2] = 0;
  param_1[0x2af] = 0;
  param_1[0x2b0] = 0;
  param_1[0x2ad] = 0;
  param_1[0x2ae] = 0;
  param_1[0x2ab] = 0;
  param_1[0x2ac] = 0;
  param_1[0x2a9] = 0;
  param_1[0x2aa] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14eb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x149c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14a4) = 0;
  param_1[0x2a6] = 0;
  param_1[0x2a7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1524) = 0;
  *(undefined8 *)((longlong)param_1 + 0x152c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1514) = 0;
  *(undefined8 *)((longlong)param_1 + 0x151c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1504) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14fc) = 0;
  *(undefined4 *)(param_1 + 0x2b7) = 2;
  *(undefined4 *)((longlong)param_1 + 0x15cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c4) = 0;
  *(undefined4 *)(param_1 + 0x2ba) = 2;
  *(undefined4 *)((longlong)param_1 + 0x15f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15dc) = 0;
  plVar7 = &DAT_14c846480;
  plVar10 = param_1 + 0x2c0;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *plVar10 = *plVar7;
    plVar7 = plVar7 + 1;
    plVar10 = plVar10 + 1;
  }
  param_1[0x2d2] = 0;
  param_1[0x2d0] = 0;
  param_1[0x2d1] = 0;
  param_1[0x2ce] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2cc] = 0;
  param_1[0x2cd] = 0;
  lVar8 = DAT_14c8462c8;
  param_1[0x2d3] = DAT_14c8462c0;
  param_1[0x2d4] = lVar8;
  param_1[0x2d5] = DAT_14c8462d0;
  lVar8 = DAT_14c8464e8;
  param_1[0x2d6] = DAT_14c8464e0;
  param_1[0x2d7] = lVar8;
  param_1[0x2d8] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x2d9) = 0;
  *(undefined1 *)(param_1 + 0x2db) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16d9) = 0;
  *(undefined1 *)(param_1 + 0x2dc) = 0;
  param_1[0x2df] = 0;
  param_1[0x2e0] = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x16cc) = 0;
  *(undefined1 *)(param_1 + 0x2e1) = 0;
  param_1[0x2e4] = 0;
  param_1[0x2e5] = 0x200000000;
  param_1[0x2e6] = 0;
  param_1[0x2e7] = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1744) = 0;
  *(undefined4 *)(param_1 + 0x2e9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174c) = 0x3ff00000;
  param_1[0x2ea] = 0;
  param_1[0x2eb] = 0;
  param_1[0x2ec] = 0;
  param_1[0x2ed] = 0;
  *(undefined4 *)(param_1 + 0x2ee) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1774) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x2ef) = 0;
  *(undefined4 *)((longlong)param_1 + 0x177c) = 0x3ff00000;
  param_1[0x2f0] = 0x3ff0000000000000;
  param_1[0x2f1] = 0;
  param_1[0x2f2] = 0;
  param_1[0x2f3] = 0;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17a4) = 0;
  *(undefined4 *)(param_1 + 0x2f5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17ac) = 0x3ff00000;
  param_1[0x2f8] = 0;
  param_1[0x2f9] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f7] = 0;
  *(undefined4 *)(param_1 + 0x2fa) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17d4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x2fb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17dc) = 0x3ff00000;
  param_1[0x2fc] = 0x3ff0000000000000;
  param_1[0x2fd] = 0;
  *(undefined1 *)(param_1 + 0x300) = 0;
  param_1[0x2fe] = 0;
  param_1[0x2ff] = 0;
  param_1[0x306] = 0;
  param_1[0x307] = 0;
  param_1[0x304] = 0;
  param_1[0x305] = 0;
  param_1[0x302] = 0;
  param_1[0x303] = 0;
  *(undefined4 *)(param_1 + 0x308) = 2;
  param_1[0x319] = 0;
  *(undefined4 *)(param_1 + 0x31a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1894) = 0;
  *(undefined8 *)((longlong)param_1 + 0x189c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1884) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1874) = 0;
  *(undefined8 *)((longlong)param_1 + 0x187c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1864) = 0;
  *(undefined8 *)((longlong)param_1 + 0x186c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1854) = 0;
  *(undefined8 *)((longlong)param_1 + 0x185c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1844) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x18dc) = 0;
  param_1[0x31d] = 0;
  *(undefined4 *)(param_1 + 0x31e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1905) = 0;
  *(undefined8 *)((longlong)param_1 + 0x190d) = 0;
  param_1[799] = 0;
  param_1[800] = 0;
  param_1[0x325] = 0;
  param_1[0x326] = 0;
  param_1[0x323] = 0;
  param_1[0x324] = 0;
  param_1[0x301] = (longlong)&PTR_FUN_14b0db3b0;
  param_1[0x327] = 0;
  param_1[0x328] = 0;
  *(undefined4 *)(param_1 + 0x329) = 2;
  *(undefined8 *)((longlong)param_1 + 0x197a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1982) = 0;
  *(undefined8 *)((longlong)param_1 + 0x196c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1974) = 0;
  *(undefined8 *)((longlong)param_1 + 0x195c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1964) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1954) = 0;
  *(undefined1 *)(param_1 + 0x332) = 0;
  param_1[0x33a] = 0;
  param_1[0x33b] = 0;
  *(undefined4 *)(param_1 + 0x339) = 0;
  param_1[0x337] = 0;
  param_1[0x338] = 0;
  param_1[0x335] = 0;
  param_1[0x336] = 0;
  param_1[0x333] = 0;
  param_1[0x334] = 0;
  param_1[0x33c] = 0xbf800000;
  lVar8 = 0x1b18;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar8 + -0x108);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar8 + -0x118);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar8 + -0x128);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar8 + -0xf8) = 2;
    *(undefined8 *)((longlong)param_1 + lVar8 + -0x70) = 0;
    *(undefined4 *)((longlong)param_1 + lVar8 + -0x68) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar8 + -0xf4);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar8 + -0xe4);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar8 + -0xd4);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar8 + -0xc4);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar8 + -0xb4);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar8 + -0xa4);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar8 + -0x94);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar8 + -0x84) = 0;
    *(undefined8 *)((longlong)param_1 + lVar8 + -100) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar8 + -0x5c) = 0;
    *(undefined8 *)((longlong)param_1 + lVar8 + -0x50) = 0;
    *(undefined4 *)((longlong)param_1 + lVar8 + -0x48) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar8 + -0x33);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar8 + -0x40);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar8 + -0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar8 + -0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined ***)((longlong)param_1 + lVar8 + -0x130) = &PTR_FUN_14ac52c10;
    *(undefined8 *)((longlong)param_1 + lVar8) = 0;
    lVar8 = lVar8 + 0x138;
  } while (lVar8 != 0x1ec0);
  param_1[0x3c2] = 0;
  param_1[0x3c3] = 0x300000000;
  param_1[0x3c9] = 0;
  param_1[0x3ca] = 0x200000000;
  param_1[0x3c4] = 0;
  param_1[0x3c5] = 0;
  *(undefined1 *)(param_1 + 0x3c6) = 0;
  *(undefined1 *)(param_1 + 0x3cb) = 0;
  param_1[0x3ce] = 0;
  param_1[0x3cf] = 0x200000000;
  param_1[0x3d4] = 0;
  param_1[0x3d5] = 0x400000000;
  *(undefined4 *)(param_1 + 0x3db) = 0;
  param_1[0x3d6] = 0;
  param_1[0x3d7] = 0;
  param_1[0x3d8] = 0;
  param_1[0x3d9] = 0;
  *(undefined2 *)(param_1 + 0x3da) = 0;
  param_1[0x501] = 0;
  *(undefined4 *)(param_1 + 0x502) = 0;
  *(undefined4 *)(param_1 + 0x3de) = 0;
  param_1[0x3dc] = 0;
  param_1[0x3dd] = 0;
  param_1[0x3df] = 0;
  param_1[0x3e0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2814) = 0x20;
  *(undefined1 *)((longlong)param_1 + 0x281c) = 0;
  param_1[0x504] = 0;
  param_1[0x505] = 0;
  param_1[0x506] = 0;
  param_1[0x507] = 0;
  *(undefined4 *)(param_1 + 0x508) = 2;
  param_1[0x510] = 0;
  *(undefined4 *)(param_1 + 0x511) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2844) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2854) = 0;
  *(undefined8 *)((longlong)param_1 + 0x285c) = 0;
  param_1[0x50c] = 0;
  param_1[0x50d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x288c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2894) = 0;
  param_1[0x514] = 0;
  *(undefined4 *)(param_1 + 0x515) = 0;
  *(undefined1 *)(param_1 + 0x516) = 0;
  param_1[0x519] = 0;
  param_1[0x51a] = 0x200000000;
  param_1[0x52c] = 0;
  *(undefined4 *)(param_1 + 0x52d) = 0;
  param_1[0x522] = 0;
  param_1[0x523] = 0;
  param_1[0x520] = 0;
  param_1[0x521] = 0;
  param_1[0x51e] = 0;
  param_1[0x51f] = 0;
  param_1[0x51c] = 0;
  param_1[0x51d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x296c) = 4;
  param_1[0x52e] = 0;
  FUN_140ca180a(param_1 + 0x52f);
  FUN_140ca180a(param_1 + 0x563);
  param_1[0x597] = 0;
  *(undefined2 *)(param_1 + 0x59b) = 0;
  *(undefined1 *)(param_1 + 0x59c) = 0;
  *(undefined1 *)(param_1 + 0x59d) = 0;
  param_1[0x59e] = 0;
  param_1[0x59f] = 0;
  param_1[0x5a0] = 0;
  param_1[0x5a1] = 0;
  param_1[0x5a2] = 0;
  param_1[0x5a3] = 0;
  *(undefined2 *)(param_1 + 0x5a7) = 4;
  *(undefined4 *)(param_1 + 0x5a4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5a8) = 3;
  cVar3 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0x5a9) = cVar3;
  param_1[0x5aa] = 0;
  *(undefined2 *)(param_1 + 0x5ae) = 4;
  *(undefined4 *)(param_1 + 0x5ab) = 0;
  *(undefined1 *)(param_1 + 0x5af) = 3;
  *(char *)(param_1 + 0x5b0) = cVar3;
  *(undefined2 *)(param_1 + 0x5b1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2d8a) = 0;
  param_1[0x5b2] = 0;
  *(undefined2 *)(param_1 + 0x5b6) = 0;
  *(undefined1 *)(param_1 + 0x5b7) = 0;
  *(undefined1 *)(param_1 + 0x5b8) = 0;
  *(undefined1 *)(param_1 + 0x5b9) = 0;
  FUN_140ca180a(param_1 + 0x5ba);
  param_1[0x5ee] = 0;
  *(undefined2 *)(param_1 + 0x5f2) = 0;
  *(undefined1 *)(param_1 + 0x5f3) = 0;
  *(undefined1 *)(param_1 + 0x5f4) = 0;
  param_1[0x5f5] = 0;
  *(undefined2 *)(param_1 + 0x5f9) = 4;
  *(undefined4 *)(param_1 + 0x5f6) = 0x40000000;
  *(undefined1 *)(param_1 + 0x5fa) = 3;
  cVar3 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0x5fb) = cVar3;
  param_1[0x5fc] = 0;
  *(undefined2 *)(param_1 + 0x600) = 4;
  *(undefined4 *)(param_1 + 0x5fd) = 0x41200000;
  *(undefined1 *)(param_1 + 0x601) = 3;
  *(char *)(param_1 + 0x602) = cVar3;
  *(undefined1 *)(param_1 + 0x60a) = 0;
  param_1[0x605] = 0;
  param_1[0x606] = 0;
  param_1[0x603] = 0;
  param_1[0x604] = 0;
  param_1[0x609] = DAT_14c8464f0;
  lVar8 = DAT_14c8464e8;
  param_1[0x607] = DAT_14c8464e0;
  param_1[0x608] = lVar8;
  *(undefined1 *)(param_1 + 0x610) = 0;
  param_1[0x60b] = 0;
  param_1[0x60c] = 0;
  lVar8 = DAT_14c8464e8;
  param_1[0x60d] = DAT_14c8464e0;
  param_1[0x60e] = lVar8;
  param_1[0x60f] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x637) = 0;
  param_1[0x612] = 0;
  param_1[0x613] = 0;
  param_1[0x614] = 0;
  param_1[0x615] = 0;
  param_1[0x616] = 0;
  param_1[0x617] = 0;
  param_1[0x618] = 0;
  param_1[0x619] = 0;
  param_1[0x61a] = 0;
  param_1[0x61b] = 0;
  param_1[0x61c] = 0;
  param_1[0x61d] = 0;
  param_1[0x61e] = 0;
  param_1[0x61f] = 0;
  *(undefined4 *)(param_1 + 0x63e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x31f4) = 0;
  param_1[0x645] = 0;
  param_1[0x646] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3211) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3219) = 0;
  param_1[0x641] = 0;
  param_1[0x642] = 0;
  param_1[0x63f] = 0;
  param_1[0x640] = 0;
  *(undefined8 *)((longlong)param_1 + 0x31df) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31e7) = 0;
  param_1[0x63a] = 0;
  param_1[0x63b] = 0;
  param_1[0x638] = 0;
  param_1[0x639] = 0;
  *(undefined4 *)(param_1 + 0x647) = 2;
  *(undefined8 *)((longlong)param_1 + 0x323c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x325c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3261) = 0;
  param_1[0x64e] = 0;
  param_1[0x64f] = 0;
  param_1[0x650] = 0;
  param_1[0x651] = 0;
  param_1[0x652] = 0;
  param_1[0x653] = 0;
  param_1[0x654] = 0;
  param_1[0x655] = 0;
  param_1[0x656] = 0;
  *(undefined1 *)(param_1 + 0x658) = 0;
  param_1[0x65a] = 0;
  param_1[0x65b] = 0;
  param_1[0x65c] = 0;
  param_1[0x65d] = 0;
  param_1[0x65e] = 0;
  param_1[0x65f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x32fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3304) = 0;
  *(undefined2 *)((longlong)param_1 + 0x32cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x330c) = 0xffffffff;
  param_1[0x662] = 0;
  *(undefined4 *)(param_1 + 0x663) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x331c) = 0;
  memset(param_1 + 0x664,0,0x130);
  *(undefined4 *)(param_1 + 0x68a) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3454) = 0;
  *(undefined8 *)((longlong)param_1 + 0x345c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3464) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x346c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3474) = 0;
  param_1[0x68f] = 0;
  param_1[0x690] = 0;
  lVar8 = FUN_140161d51();
  param_1[0x690] = *(longlong *)(lVar8 + 0x20);
  param_1[0x691] = 0;
  param_1[0x692] = 0;
  *(undefined4 *)(param_1 + 0x693) = 2;
  *(undefined8 *)((longlong)param_1 + 0x34bc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x349c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34cc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34f4) = 0xff;
  param_1[0x6a3] = 0;
  *(undefined4 *)(param_1 + 0x6a4) = 0;
  param_1[0x69f] = 0;
  param_1[0x6a0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3524) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x352c) = 0;
  param_1[0x6a7] = 0;
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  param_1[0x6ad] = 0;
  *(undefined4 *)(param_1 + 0x6ae) = 0;
  param_1[0x6a9] = 0;
  param_1[0x6aa] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3574) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x357c) = 0;
  param_1[0x6b1] = 0;
  *(undefined4 *)(param_1 + 0x6b2) = 0;
  param_1[0x6b6] = 0;
  param_1[0x6b3] = 0;
  param_1[0x6b4] = 0;
  *(undefined1 *)(param_1 + 0x6b5) = 0;
  *(undefined4 *)(param_1 + 0x6b7) = 0;
  *(undefined1 **)((longlong)param_1 + 0x35bc) = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x35c4) = 0;
  param_1[0x6b9] = (longlong)&DAT_3f8000003f800000;
  param_1[0x6ba] = 0;
  param_1[0x6bb] = 0;
  param_1[0x6bc] = 0;
  param_1[0x6bd] = 0;
  param_1[0x6be] = 0;
  param_1[0x6bf] = 0;
  param_1[0x6c0] = 0;
  param_1[0x6c1] = 0;
  param_1[0x6c2] = 0;
  param_1[0x6c3] = DAT_14caa8578;
  param_1[0x6c4] = 0;
  FUN_140f23ff6(param_1 + 0x6c5);
  param_1[0x6e7] = 0;
  param_1[0x6e8] = 0;
  FUN_140f26b6e(param_1 + 0x6e9);
  param_1[0x722] = 0;
  param_1[0x723] = 0;
  param_1[0x724] = 0;
  param_1[0x725] = 0;
  param_1[0x726] = 0;
  param_1[0x727] = 0;
  param_1[0x728] = 2;
  *(undefined1 *)(param_1 + 0x729) = 0;
  *(undefined8 *)((longlong)param_1 + 0x394c) = 0;
  param_1[0x734] = 0;
  *(undefined4 *)(param_1 + 0x735) = 0;
  param_1[0x72b] = 0;
  param_1[0x72c] = 0;
  param_1[0x72d] = 0;
  param_1[0x72e] = 0;
  param_1[0x72f] = 0;
  param_1[0x730] = 0;
  param_1[0x731] = 0;
  *(undefined8 *)((longlong)param_1 + 0x39ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x39b4) = 0;
  param_1[0x738] = 0;
  *(undefined4 *)(param_1 + 0x739) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a19) = 0;
  param_1[0x742] = 0;
  param_1[0x740] = 0;
  param_1[0x741] = 0;
  param_1[0x73e] = 0;
  param_1[0x73f] = 0;
  param_1[0x73c] = 0;
  param_1[0x73d] = 0;
  param_1[0x73a] = 0;
  param_1[0x73b] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    if (param_1[0x24e] == 0) {
      param_1[0x24f] = (longlong)&DAT_14cb71320;
      param_1[0x24e] = (longlong)param_1;
      lVar8 = DAT_14cb71320;
      while( true ) {
        param_1[0x24c] = lVar8;
        LOCK();
        lVar6 = *(longlong *)param_1[0x24f];
        bVar11 = lVar8 == lVar6;
        if (bVar11) {
          *(longlong *)param_1[0x24f] = (longlong)plVar9;
          lVar6 = lVar8;
        }
        UNLOCK();
        if (bVar11) break;
        param_1[0x24c] = lVar6;
        lVar8 = *(longlong *)param_1[0x24f];
      }
      if (*plVar9 != 0) {
        *(longlong **)(*plVar9 + 8) = plVar9;
      }
    }
    if (param_1 == (longlong *)0x0) {
LAB_140f268c4:
      lVar6 = 0;
    }
    else {
      uVar5 = FUN_140f26902();
      lVar8 = (**(code **)(*param_1 + 0x288))(param_1,uVar5);
      if (lVar8 == 0) goto LAB_140f268c4;
      uVar5 = FUN_140f26902();
      lVar6 = FUN_144718840(lVar8,uVar5);
      if (lVar8 == lVar6) goto LAB_140f268c4;
    }
    FUN_140f269e8(param_1 + 0x6e9,lVar6);
  }
  plVar9 = (longlong *)param_1[0x87];
  if (plVar9 != (longlong *)0x0) {
    plVar9[200] = 0x4208000042b00000;
    (**(code **)(*plVar9 + 0x728))(plVar9,DAT_14cad0ec8,1);
    *(undefined1 *)((longlong)plVar9 + 0x2eb) = 0;
    plVar7 = plVar9;
    if (DAT_14c76142c == 1) {
      do {
        if ((*(byte *)(plVar7 + 0x3f) & 2) == 0) break;
        *(byte *)(plVar7 + 0x3f) = *(byte *)(plVar7 + 0x3f) & 0xfd;
        plVar10 = plVar7 + 0x24;
        plVar7 = (longlong *)*plVar10;
      } while ((longlong *)*plVar10 != (longlong *)0x0);
    }
    *(byte *)((longlong)plVar9 + 0x1f9) = *(byte *)((longlong)plVar9 + 0x1f9) | 4;
    if ((char)*(byte *)((longlong)plVar9 + 0x9e) < '\0') {
      *(byte *)((longlong)plVar9 + 0x9e) = *(byte *)((longlong)plVar9 + 0x9e) & 0x7f;
      FUN_140381836(plVar9,0);
    }
    *(byte *)((longlong)plVar9 + 0x62c) = *(byte *)((longlong)plVar9 + 0x62c) | 4;
  }
  lVar8 = param_1[0x86];
  if (lVar8 != 0) {
    lVar6 = FUN_140993a2e();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar8);
      }
      goto LAB_140f2660f;
    }
  }
  lVar8 = 0;
LAB_140f2660f:
  param_1[0x23d] = lVar8;
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) & 0xef;
  uVar5 = DAT_14cb71330;
  uVar2 = *(uint *)(param_1[2] + 0xd4);
  if (DAT_14cb63950 == 0) {
    local_90 = &local_68;
    local_68 = FUN_144a7958c;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_1464ec72a;
    local_98 = &LAB_1486f5f75;
    local_a0 = &LAB_140945686;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10000004;
    local_c0 = 0x10;
    local_c8 = 0x19d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
  }
  local_c0 = CONCAT31(local_c0._1_3_,(uVar2 >> 0x12 & 1) == 0);
  local_c8 = local_c8 & 0xffffff00;
  lVar8 = FUN_14048696c(param_1,uVar5,DAT_14cb63950,DAT_14cb63950);
  param_1[0x657] = lVar8;
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x2de) = *(byte *)(lVar8 + 0x2de) | 4;
    *(byte *)(param_1[0x657] + 0x2de) = *(byte *)(param_1[0x657] + 0x2de) | 8;
    *(byte *)(param_1[0x657] + 0x2d5) = *(byte *)(param_1[0x657] + 0x2d5) & 0xfd;
    *(byte *)(param_1[0x657] + 0x2d4) = *(byte *)(param_1[0x657] + 0x2d4) & 0xbf;
    *(byte *)(param_1[0x657] + 0x2d5) = *(byte *)(param_1[0x657] + 0x2d5) | 1;
    *(undefined1 *)(param_1[0x657] + 0x89c) = 4;
    *(byte *)(param_1[0x657] + 0x2d6) = *(byte *)(param_1[0x657] + 0x2d6) | 0x40;
    *(byte *)(param_1[0x657] + 0x2d6) = *(byte *)(param_1[0x657] + 0x2d6) | 8;
    *(undefined1 *)(param_1[0x657] + 0x48) = 0;
    (**(code **)(*(longlong *)param_1[0x657] + 0x728))((longlong *)param_1[0x657],DAT_14cb71268,1);
    plVar9 = (longlong *)param_1[0x657];
    if ((*(byte *)((longlong)plVar9 + 0x2d3) & 8) != 0) {
      *(byte *)((longlong)plVar9 + 0x2d3) = *(byte *)((longlong)plVar9 + 0x2d3) & 0xf7;
      (**(code **)(*plVar9 + 0x958))();
      plVar9 = (longlong *)param_1[0x657];
    }
    if ((char)*(byte *)((longlong)plVar9 + 0x9e) < '\0') {
      *(byte *)((longlong)plVar9 + 0x9e) = *(byte *)((longlong)plVar9 + 0x9e) & 0x7f;
      FUN_140381836(plVar9,0);
      plVar9 = (longlong *)param_1[0x657];
    }
    FUN_140486fc4(plVar9,param_1[0x39],0);
    *(byte *)(param_1[0x657] + 0x2d4) = *(byte *)(param_1[0x657] + 0x2d4) & 0xfe;
    lVar8 = param_1[0x657];
    lVar6 = lVar8;
    if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar8);
      lVar6 = param_1[0x657];
    }
    param_1[0x85] = lVar8;
    if (lVar6 != 0) {
      FUN_140f26c7f();
      *(undefined8 *)(lVar6 + 0x1898) = DAT_14cb710c0;
    }
  }
  *(undefined4 *)(param_1 + 0x280) = 1;
  *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) & 0xfd;
  for (lVar8 = *local_70; (lVar8 != 0 && ((*(uint *)(lVar8 + 8) & 0x30) == 0));
      lVar8 = *(longlong *)(lVar8 + 0x20)) {
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140f26902 FUN_140f26902 body=228 status=ok
// SIG undefined FUN_140f26902(void)

longlong FUN_140f26902(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb55008 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14861c087;
    local_40 = FUN_1464b05a4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"AvatarAppearanceService",&DAT_14cb55008,&DAT_14861c086);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55008;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f269e8 FUN_140f269e8 body=184 status=ok
// SIG undefined FUN_140f269e8(void)

void FUN_140f269e8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140f26aa2(&local_28);
  *(undefined4 *)(param_1 + 0x138) = local_28;
  *(undefined4 *)(param_1 + 0x13c) = uStack_24;
  *(undefined4 *)(param_1 + 0x140) = uStack_20;
  *(undefined4 *)(param_1 + 0x144) = uStack_1c;
  if (*(longlong **)(param_1 + 0x140) != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x13c) != 0) {
      uVar1 = *(uint *)(param_1 + 0x138);
      uVar3 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140f26a78;
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar2 != 0) &&
         ((*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x13c) &&
          ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)))) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x28))();
        goto LAB_140f26a78;
      }
    }
  }
  uVar3 = 0;
LAB_140f26a78:
  *(undefined8 *)(param_1 + 0x148) = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f26aa2 FUN_140f26aa2 body=204 status=ok
// SIG undefined FUN_140f26aa2(void)

uint * FUN_140f26aa2(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 140f26b6e FUN_140f26b6e body=273 status=ok
// SIG undefined FUN_140f26b6e(void)

void FUN_140f26b6e(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 2;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 2;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  return;
}



// FUNCTION 140f26c7f FUN_140f26c7f body=461 status=ok
// SIG undefined FUN_140f26c7f(void)

void FUN_140f26c7f(void)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb710d8 == '\0') {
    DAT_14cb710d8 = '\x01';
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    lVar1 = DAT_14caa8580;
    FUN_140056680(local_38,L"(Native)");
    FUN_1446f470e(&local_40,L"Parts.ViewTarget.3rd",1);
    FUN_1413e432a(lVar1,&local_28,local_40,local_38);
    DAT_14cb710c0 = local_28;
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_38,L"(Native)");
    FUN_1446f470e(&local_48,L"Parts.ViewTarget.1st",1);
    FUN_1413e432a(lVar1,&local_28,local_48,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_38,L"(Native)");
    FUN_1446f470e(&local_50,L"Parts.ViewTarget.1st.Arms",1);
    FUN_1413e432a(lVar1,&local_28,local_50,local_38);
    DAT_14cb710c8 = local_28;
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_38,L"(Native)");
    FUN_1446f470e(&local_58,L"Parts.ViewTarget.1st.Legs",1);
    FUN_1413e432a(lVar1,&local_28,local_58,local_38);
    DAT_14cb710d0 = local_28;
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f26e4e FUN_140f26e4e body=1066 status=ok
// SIG undefined FUN_140f26e4e(void)

undefined8 * FUN_140f26e4e(undefined8 *param_1)

{
  FUN_140f27278();
  *param_1 = &PTR_FUN_14ac2d560;
  param_1[0x72] = &PTR_FUN_14ac2de70;
  param_1[0xe9] = &PTR_FUN_14ac2ded0;
  param_1[0xea] = &PTR_FUN_14ac2dee8;
  param_1[0x10c] = &PTR_FUN_14ac2df00;
  param_1[0x10d] = &PTR_FUN_14ac2df20;
  param_1[0x10e] = &PTR_FUN_14ac2df60;
  param_1[0x10f] = &PTR_FUN_14ac2df80;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined1 *)(param_1 + 0x112) = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  *(undefined4 *)(param_1 + 0x115) = 2;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b4) = 0;
  *(undefined2 *)(param_1 + 0x118) = 0xffff;
  param_1[0x11b] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  *(undefined2 *)(param_1 + 0x11b) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x8e7) = 0;
  param_1[0x11c] = 0;
  *(undefined1 *)((longlong)param_1 + 0x8eb) = 1;
  param_1[0x11e] = 0;
  FUN_1406524d8(param_1 + 0x11f);
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 2;
  *(undefined2 *)(param_1 + 0x15e) = 0;
  *(undefined1 *)(param_1 + 0x15f) = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb14) = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb7d) = 0;
  param_1[0x176] = 0;
  *(undefined4 *)(param_1 + 0x177) = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc4) = 0;
  param_1[0x17a] = 0;
  *(undefined4 *)(param_1 + 0x17b) = 0;
  param_1[0x180] = 0;
  *(undefined4 *)(param_1 + 0x181) = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc14) = 0;
  param_1[0x184] = 0;
  *(undefined4 *)(param_1 + 0x185) = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0xffffffff00000000;
  param_1[0x18c] = 0;
  *(undefined4 *)(param_1 + 0x18d) = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc74) = 0;
  param_1[400] = 0;
  *(undefined4 *)(param_1 + 0x191) = 0;
  *(undefined1 *)(param_1 + 0x192) = 0;
  *(undefined4 *)(param_1 + 0x197) = 0;
  param_1[0x19c] = 0;
  param_1[0x19d] = 0x200000000;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0x2000000000;
  param_1[0x1a1] = 0xffffffff;
  param_1[0x1a3] = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0x200000000;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0x2000000000;
  param_1[0x1ae] = 0xffffffff;
  param_1[0x1b0] = 0;
  *(undefined4 *)(param_1 + 0x1b1) = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0x200000000;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0x2000000000;
  param_1[0x1bb] = 0xffffffff;
  param_1[0x1bd] = 0;
  *(undefined4 *)(param_1 + 0x1be) = 0;
  param_1[0x1c5] = 0;
  *(undefined4 *)(param_1 + 0x1c6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe01) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe09) = 0;
  param_1[0x1bf] = 0;
  param_1[0x1c0] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe34) = 2;
  *(undefined1 *)(param_1 + 0x1c7) = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0x200000000;
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 2;
  param_1[0x1dc] = 0;
  *(undefined4 *)(param_1 + 0x1dd) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe84) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xea4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xeac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xeb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xebc) = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  *(undefined8 *)((longlong)param_1 + 0xeec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xef4) = 0;
  param_1[0x1e0] = 0;
  *(undefined4 *)(param_1 + 0x1e1) = 0;
  param_1[0x1e7] = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e4] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4c) = 0;
  param_1[0x1eb] = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined1 *)(param_1 + 0x1ed) = 0;
  param_1[0x1f0] = 0;
  param_1[0x1f1] = 0x200000000;
  param_1[499] = 0;
  param_1[500] = 0;
  *(undefined4 *)(param_1 + 0x1f5) = 2;
  param_1[0x1fa] = 0;
  *(undefined4 *)(param_1 + 0x1fb) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfe4) = 0;
  param_1[0x1fe] = 0;
  *(undefined4 *)(param_1 + 0x1ff) = 0;
  param_1[0x211] = 0;
  *(undefined4 *)(param_1 + 0x212) = 0;
  *(undefined1 *)(param_1 + 0x20e) = 0;
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  param_1[0x20a] = 0;
  param_1[0x20b] = 0;
  param_1[0x208] = 0;
  param_1[0x209] = 0;
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  param_1[0x204] = 0;
  param_1[0x205] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1094) = 0xbf80000000000002;
  *(undefined2 *)((longlong)param_1 + 0x109c) = 0;
  return param_1;
}



// FUNCTION 140f27278 FUN_140f27278 body=772 status=ok
// SIG undefined FUN_140f27278(void)

undefined8 * FUN_140f27278(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  uVar2 = DAT_14cacfcd8;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = FUN_140a41018();
  FUN_140486538(param_2,uVar2);
  FUN_14048646a(param_2 + 0x20,uVar2,uVar5,0);
  FUN_140f2757e(param_1,param_2);
  *param_1 = &PTR_FUN_14ab7eb80;
  param_1[0x72] = &PTR_FUN_14ab7f490;
  param_1[0xe9] = &PTR_FUN_14ab7f4f0;
  param_1[0xea] = &PTR_FUN_14ab7f508;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  *(undefined8 *)((longlong)param_1 + 0x821) = 0;
  *(undefined8 *)((longlong)param_1 + 0x829) = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  lVar9 = param_1[0x86];
  if (lVar9 != 0) {
    lVar6 = FUN_140a41018();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar9);
      }
      param_1[0x10b] = lVar9;
      *(undefined1 *)((longlong)param_1 + 0x3a1) = 0;
      param_1[0x75] = 0;
      lVar6 = (**(code **)(*(longlong *)(lVar9 + 0x11c0) + 0x10))(lVar9 + 0x11c0);
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar3 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14aba0be0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_48[2] = lVar7;
      *local_48 = &PTR_FUN_14aba0600;
      local_48[3] = 0;
      iVar4 = 0;
      if (param_1 != (undefined8 *)0x0) {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_48 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar4 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar4 = *(int *)(lVar9 + 0x10);
          bVar10 = iVar4 == 0;
          if (bVar10) {
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar4 = iVar8;
          }
        }
      }
      *(int *)((longlong)puVar3 + 0x1c) = iVar4;
      puVar3[4] = &LAB_1437fc024;
      *(undefined4 *)(puVar3 + 5) = 0;
      FUN_140e6ff7a(lVar6 + 0x48,local_50,&local_48);
      if (local_40 != 0) {
        if (local_48 == (undefined8 *)0x0) goto LAB_140f2748f;
        (**(code **)*local_48)(local_48,0);
        FUN_1446efa72(&local_48,0,0,0x10);
        local_40 = 0;
      }
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140f2748f;
    }
  }
  param_1[0x10b] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a1) = 0;
  param_1[0x75] = 0;
LAB_140f2748f:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140f2757e FUN_140f2757e body=280 status=ok
// SIG undefined FUN_140f2757e(void)

undefined8 * FUN_140f2757e(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = DAT_14cacfcd8;
  uVar3 = FUN_140f27696();
  FUN_140486538(param_2,uVar2);
  FUN_14048646a(param_2 + 0x20,uVar2,uVar3,0);
  FUN_140f2777c(param_1,param_2);
  *param_1 = &PTR_FUN_14a1aa210;
  param_1[0x72] = &PTR_FUN_14a1aab00;
  param_1[0xe9] = &PTR_FUN_14a1aab60;
  param_1[0xea] = &PTR_FUN_14a1aab78;
  param_1[0xeb] = 0;
  *(undefined1 *)(param_1 + 0xec) = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0x200000000;
  FUN_140c4b70a(param_1 + 0xf1);
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x4dbebc20;
  lVar1 = param_1[0x86];
  lVar4 = 0;
  if (lVar1 != 0) {
    lVar4 = FUN_140f27696();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
    }
  }
  param_1[0xeb] = lVar4;
  return param_1;
}



// FUNCTION 140f27696 FUN_140f27696 body=228 status=ok
// SIG undefined FUN_140f27696(void)

longlong FUN_140f27696(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a5280 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140c3e89a;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462ac6e0;
    local_38 = &LAB_1470c83ab;
    local_40 = &LAB_1462ac6e5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x11c0;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxEngineCharacterMovementComponent",&DAT_14c9a5280,
                  &DAT_1470c83aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5280;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f2777c FUN_140f2777c body=1715 status=ok
// SIG undefined FUN_140f2777c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140f2777c(undefined8 *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140f27f16();
  *param_1 = &PTR_FUN_14a812380;
  param_1[0x72] = &PTR_FUN_14a812c60;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined8 *)((longlong)param_1 + 0x432) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43a) = 0;
  *(byte *)((longlong)param_1 + 0x442) = *(byte *)((longlong)param_1 + 0x442) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  param_1[0x8a] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x47a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x482) = 0;
  *(byte *)((longlong)param_1 + 0x48a) = *(byte *)((longlong)param_1 + 0x48a) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0;
  param_1[0x93] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = &PTR_FUN_14a819a28;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xf0;
  *(undefined1 *)((longlong)param_1 + 0x5e1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x604) = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f9) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x624) = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x62c) = 0x3ff00000;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  *(undefined4 *)((longlong)param_1 + 0x654) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xcb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x65c) = 0x3ff00000;
  param_1[0xcc] = 0x3ff0000000000000;
  param_1[0xcd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x68c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x67b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x683) = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = &PTR_FUN_14a819a28;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  *(byte *)(param_1 + 0xdf) = *(byte *)(param_1 + 0xdf) & 0xf0;
  *(undefined1 *)((longlong)param_1 + 0x6f9) = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacf8f0) && (FUN_144b3d300(&DAT_14cacf8f0), DAT_14cacf8f0 == -1)) {
    FUN_140f28370();
    atexit((_func_5014 *)&LAB_14341f5f8);
    _Init_thread_footer(&DAT_14cacf8f0);
  }
  *(uint *)(param_1 + 0x73) = *(uint *)(param_1 + 0x73) & 0xfffffff8 | 2;
  uVar3 = DAT_14cacfcd0;
  uVar8 = FUN_1400b5618();
  local_70 = local_70 & 0xffffff00;
  local_78 = CONCAT31(local_78._1_3_,1);
  lVar9 = FUN_14048696c(param_1,uVar3,uVar8,uVar8);
  if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar9);
  }
  param_1[0x87] = lVar9;
  *(undefined8 *)(lVar9 + 0x640) = 0x4208000042b00000;
  (**(code **)(*(longlong *)param_1[0x87] + 0x728))((longlong *)param_1[0x87],DAT_14cad0ec8,1);
  *(undefined1 *)(param_1[0x87] + 0x2eb) = 0;
  lVar9 = param_1[0x87];
  lVar10 = lVar9;
  if (DAT_14c76142c == 1) {
    do {
      if ((*(byte *)(lVar10 + 0x1f8) & 2) == 0) break;
      *(byte *)(lVar10 + 0x1f8) = *(byte *)(lVar10 + 0x1f8) & 0xfd;
      plVar2 = (longlong *)(lVar10 + 0x120);
      lVar10 = *plVar2;
    } while (*plVar2 != 0);
  }
  pbVar1 = (byte *)(lVar9 + 0x1f9);
  *pbVar1 = *pbVar1 | 4;
  lVar9 = param_1[0x87];
  if ((char)*(byte *)(lVar9 + 0x9e) < '\0') {
    *(byte *)(lVar9 + 0x9e) = *(byte *)(lVar9 + 0x9e) & 0x7f;
    FUN_140381836(lVar9,0);
    lVar9 = param_1[0x87];
  }
  *(byte *)(lVar9 + 0x62c) = *(byte *)(lVar9 + 0x62c) | 4;
  lVar9 = param_1[0x87];
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = param_1[0x87];
    }
  }
  param_1[0x39] = lVar9;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0;
  param_1[0xac] = 0x100000000;
  param_1[0xad] = 0;
  *(byte *)((longlong)param_1 + 0x551) = *(byte *)((longlong)param_1 + 0x551) & 0xf5 | 2;
  *(undefined4 *)(param_1 + 0xa9) = 0x3f800000;
  uVar3 = DAT_14cacfcd8;
  uVar8 = FUN_140f27e30();
  local_70 = local_70 & 0xffffff00;
  local_78 = CONCAT31(local_78._1_3_,1);
  lVar9 = FUN_14048696c(param_1,uVar3,uVar8,uVar8);
  bVar7 = DAT_14c950c29;
  if (lVar9 == 0 || DAT_14c950c29 != 1) {
    param_1[0x86] = lVar9;
    if (lVar9 != 0) goto LAB_140f27aaa;
  }
  else {
    FUN_1456cec3c(lVar9);
    param_1[0x86] = lVar9;
    bVar7 = DAT_14c950c29;
LAB_140f27aaa:
    lVar10 = param_1[0x87];
    if ((bVar7 & 1) != 0) {
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar10 = param_1[0x87];
      }
    }
    *(longlong *)(lVar9 + 0x110) = lVar10;
    if (param_1[0x86] != 0) {
      *(float *)((longlong)param_1 + 0x54c) = *(float *)(param_1[0x86] + 800) * 0.8;
    }
  }
  uVar3 = DAT_14cacfcc8;
  if (DAT_14cad2858 == 0) {
    local_40 = &local_28;
    local_28 = FUN_144a7958c;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_146395584;
    local_48 = &LAB_147a0ba80;
    local_50 = &LAB_14575ccce;
    local_58 = L"Engine";
    local_60 = 0x40000000000;
    local_68 = 0x10000004;
    local_70 = 0x10;
    local_78 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  plVar2 = param_1 + 0x85;
  local_70 = local_70 & 0xffffff00;
  local_78 = local_78 & 0xffffff00;
  lVar9 = FUN_14048696c(param_1,uVar3,DAT_14cad2858,DAT_14cad2858);
  if ((lVar9 == 0) || (DAT_14c950c29 == 0)) {
    *plVar2 = lVar9;
    if (lVar9 == 0) goto LAB_140f27b3b;
  }
  else {
    FUN_1456cec3c(lVar9);
    *plVar2 = lVar9;
  }
  *(byte *)(lVar9 + 0x2de) = *(byte *)(lVar9 + 0x2de) | 4;
  *(byte *)(param_1[0x85] + 0x2de) = *(byte *)(param_1[0x85] + 0x2de) | 8;
  *(byte *)(param_1[0x85] + 0x2d5) = *(byte *)(param_1[0x85] + 0x2d5) & 0xfd;
  *(undefined1 *)(param_1[0x85] + 0x89c) = 1;
  *(byte *)(param_1[0x85] + 0x2d6) = *(byte *)(param_1[0x85] + 0x2d6) | 0x40;
  *(byte *)(param_1[0x85] + 0x2d6) = *(byte *)(param_1[0x85] + 0x2d6) | 8;
  *(undefined1 *)(param_1[0x85] + 0x48) = 0;
  FUN_140486fc4(param_1[0x85],param_1[0x87],0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacf900) && (FUN_144b3d300(&DAT_14cacf900), DAT_14cacf900 == -1)) {
    FUN_1446f470e(&DAT_14cacf8f8,L"CharacterMesh",1);
    _Init_thread_footer(&DAT_14cacf900);
  }
  (**(code **)(*(longlong *)*plVar2 + 0x728))((longlong *)*plVar2,DAT_14cacf8f8,1);
  plVar11 = (longlong *)*plVar2;
  if ((*(byte *)((longlong)plVar11 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)plVar11 + 0x2d3) = *(byte *)((longlong)plVar11 + 0x2d3) & 0xf7;
    (**(code **)(*plVar11 + 0x958))();
    plVar11 = (longlong *)*plVar2;
  }
  if ((char)*(byte *)((longlong)plVar11 + 0x9e) < '\0') {
    *(byte *)((longlong)plVar11 + 0x9e) = *(byte *)((longlong)plVar11 + 0x9e) & 0x7f;
    FUN_140381836(plVar11,0);
  }
LAB_140f27b3b:
  uVar3 = DAT_14c8463e8;
  param_1[0x9e] = DAT_14c8463e0;
  param_1[0x9f] = uVar3;
  uVar3 = DAT_14c8463d8;
  param_1[0x9c] = DAT_14c8463d0;
  param_1[0x9d] = uVar3;
  uVar6 = uRam000000014cad0eb4;
  uVar5 = _DAT_14cad0eb0;
  uVar4 = uRam000000014cad0eac;
  *(undefined4 *)(param_1 + 0xa3) = _DAT_14cad0ea8;
  *(undefined4 *)((longlong)param_1 + 0x51c) = uVar4;
  *(undefined4 *)(param_1 + 0xa4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x524) = uVar6;
  param_1[0xa5] = DAT_14cad0eb8;
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140f27e30 FUN_140f27e30 body=228 status=ok
// SIG undefined FUN_140f27e30(void)

longlong FUN_140f27e30(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad0850 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140c3e89a;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b639a;
    local_38 = &LAB_1479c180b;
    local_40 = &LAB_1463b639f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1060;
    FUN_14081cfa3(L"/Script/Engine",L"CharacterMovementComponent",&DAT_14cad0850,FUN_1463b6378);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad0850;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f27f16 FUN_140f27f16 body=1113 status=ok
// SIG undefined FUN_140f27f16(void)

undefined8 * FUN_140f27f16(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140312256();
  *param_1 = &PTR_FUN_14aa0a8c0;
  param_1[0x72] = &PTR_FUN_14aa0b070;
  plVar1 = param_1 + 0x75;
  *(undefined2 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 2;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a1) = 1;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    plVar3 = (longlong *)param_1[2];
    if (DAT_14caf64b8 == (longlong *)0x0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_142b4754c;
      local_58 = &LAB_147c45ce0;
      local_60 = &LAB_1463f1ff4;
      local_68 = &DAT_149e063b2;
      local_70 = 0x4000000000;
      local_78 = 0x10000004;
      local_80 = CONCAT44(local_80._4_4_,8);
      local_88 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if (plVar3 == DAT_14caf64b8) {
      plVar3 = (longlong *)FUN_144a7e210();
      lVar2 = plVar3[0x22];
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 1000))(plVar3);
        lVar2 = plVar3[0x22];
      }
      FUN_14475cc44(lVar2 + 600,&local_38);
      pcVar6 = local_38;
      if (local_30 == 0) {
        pcVar6 = (code *)&DAT_149dfb77a;
      }
      uVar4 = FUN_144a797b2();
      lVar2 = FUN_140277b32(uVar4,0,pcVar6,0);
      if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
        *plVar1 = lVar2;
        if (lVar2 != 0) goto LAB_140f2811b;
LAB_140f282e7:
        pcVar6 = local_38;
        if (local_30 == 0) {
          pcVar6 = (code *)&DAT_149dfb77a;
        }
        uVar4 = FUN_14490fee6();
        local_80 = 0;
        local_88 = 0;
        lVar2 = FUN_141433b6f(uVar4,0,pcVar6,0);
        if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar2);
        }
        *plVar1 = lVar2;
      }
      else {
        FUN_1456cec3c(lVar2);
        *plVar1 = lVar2;
LAB_140f2811b:
        lVar5 = FUN_14490fee6();
        if ((((lVar5 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38))) ||
            (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
             lVar5 + 0x30)) || (*plVar1 == 0)) goto LAB_140f282e7;
      }
      if (local_38 != (code *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140f27fe8;
    }
  }
  if (DAT_14caf64b8 == (longlong *)0x0) {
    local_50 = &local_38;
    local_38 = FUN_141030f22;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_142b4754c;
    local_58 = &LAB_147c45ce0;
    local_60 = &LAB_1463f1ff4;
    local_68 = &DAT_149e063b2;
    local_70 = 0x4000000000;
    local_78 = 0x10000004;
    local_80 = CONCAT44(local_80._4_4_,8);
    local_88 = 0x428;
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  plVar3 = DAT_14caf64b8;
  lVar2 = DAT_14caf64b8[0x22];
  if (lVar2 == 0) {
    (**(code **)(*DAT_14caf64b8 + 1000))(DAT_14caf64b8);
    lVar2 = plVar3[0x22];
  }
  lVar5 = *(longlong *)(lVar2 + 0x3a8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(lVar2 + 0x3a8);
    }
  }
  *plVar1 = lVar5;
LAB_140f27fe8:
  FUN_1403121a6(param_1,1);
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(undefined4 *)(param_1 + 0x34) = 0x40400000;
  FUN_1405e4918(param_1,0x42c80000);
  FUN_1405ba932(param_1,1);
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0x42800000;
  *(undefined4 *)(param_1 + 0x7a) = 0x412fd70a;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 3;
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) | 0x50;
  *(uint *)(param_1 + 0x73) = *(uint *)(param_1 + 0x73) & 0xffffff88 | 0x10;
  lVar2 = FUN_1402020be(param_1);
  *(undefined1 *)(lVar2 + 0x84) = 2;
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140f28370 FUN_140f28370 body=186 status=ok
// SIG undefined FUN_140f28370(void)

void FUN_140f28370(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&DAT_14cacf8d8,L"Characters",1);
  local_40 = L"Characters";
  local_38 = 10;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"SpriteCategory";
  local_38 = 0xe;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Characters";
  local_38 = 10;
  FUN_140208c1e(&DAT_14cacf8e0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f2842c FUN_140f2842c body=539 status=ok
// SIG undefined FUN_140f2842c(void)

bool FUN_140f2842c(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  double dVar4;
  undefined1 auStack_178 [32];
  longlong local_158;
  uint local_150 [4];
  undefined1 local_140 [4];
  undefined4 local_13c;
  undefined4 local_9c;
  undefined4 local_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(byte *)(param_3 + 0xad) & 1) != 0) {
    if ((*(byte *)(param_3 + 0xad) & 2) == 0) {
      cVar2 = (**(code **)(*param_1 + 0x878))(param_1,param_3);
      if (cVar2 != '\0') {
        lVar1 = *(longlong *)(param_1[0x3e] + 0x438);
        dVar4 = *(double *)(lVar1 + 0x280);
        if (*(double *)(lVar1 + 0x288) <= *(double *)(lVar1 + 0x280)) {
          dVar4 = *(double *)(lVar1 + 0x288);
        }
        if (((-(double)param_1[0x46] * *(double *)(param_3 + 0x28) -
             (double)param_1[0x47] * *(double *)(param_3 + 0x30)) -
             (double)param_1[0x48] * *(double *)(param_3 + 0x38) <
             (double)(float)((double)((float)dVar4 * *(float *)(lVar1 + 0x644)) +
                            (((*(double *)(param_3 + 0x10) * -(double)param_1[0x46] -
                              *(double *)(param_3 + 0x18) * (double)param_1[0x47]) -
                             *(double *)(param_3 + 0x20) * (double)param_1[0x48]) -
                            (double)((float)*(double *)(lVar1 + 0x290) * *(float *)(lVar1 + 0x640)))
                            )) &&
           (cVar2 = (**(code **)(*param_1 + 0x8f8))(param_1,param_3 + 0x10,param_3 + 0x28),
           cVar2 != '\0')) goto LAB_140f2858d;
      }
    }
    else if (9.999999747378752e-05 <=
             (-(double)param_1[0x46] * *(double *)(param_3 + 0x40) -
             *(double *)(param_3 + 0x48) * (double)param_1[0x47]) -
             *(double *)(param_3 + 0x50) * (double)param_1[0x48]) {
LAB_140f2858d:
      local_150[0] = 0;
      local_150[1] = 0;
      local_150[2] = 0;
      memset(local_140,0,0x100);
      local_70 = 0xffffffff;
      local_9c = 0xffffffff;
      local_13c = 0x3f800000;
      local_158 = param_3;
      (**(code **)(*param_1 + 0x900))(param_1,param_2,local_150,0);
      bVar3 = ((local_150[0] ^ 0xffffffff) & 3) == 0;
      goto LAB_140f28485;
    }
  }
  bVar3 = false;
LAB_140f28485:
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 140f28648 FUN_140f28648 body=208 status=ok
// SIG undefined FUN_140f28648(void)

bool FUN_140f28648(longlong param_1,double *param_2,double *param_3,float param_4)

{
  double dVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (param_3[2] - param_2[2]) * *(double *)(param_1 + 0x240) +
          (*param_3 - *param_2) * *(double *)(param_1 + 0x230) +
          (param_3[1] - param_2[1]) * *(double *)(param_1 + 0x238);
  dVar1 = (param_3[2] - param_2[2]) - *(double *)(param_1 + 0x240) * dVar3;
  dVar4 = (param_3[1] - param_2[1]) - *(double *)(param_1 + 0x238) * dVar3;
  dVar3 = (*param_3 - *param_2) - dVar3 * *(double *)(param_1 + 0x230);
  fVar2 = 0.15010001;
  if (0.15010001 <= param_4 + -0.15) {
    fVar2 = param_4 + -0.15;
  }
  return (float)(dVar1 * dVar1 + dVar3 * dVar3 + dVar4 * dVar4) < fVar2 * fVar2;
}



// FUNCTION 140f28720 FUN_140f28720 body=209 status=ok
// SIG undefined FUN_140f28720(void)

void FUN_140f28720(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b3d90a0;
  *(undefined2 *)(param_1 + 5) = 0;
  uVar1 = DAT_14c846500;
  param_1[6] = DAT_14c8464f8;
  param_1[7] = uVar1;
  param_1[8] = DAT_14c846508;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x61) = 0;
  uVar1 = DAT_14c846500;
  param_1[0xd] = DAT_14c8464f8;
  param_1[0xe] = uVar1;
  param_1[0xf] = DAT_14c846508;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xffffffc0 | 0xc;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x4416000043c80000;
  param_1[0xb] = 0x4434000044070000;
  *(undefined1 *)(param_1 + 0xc) = 4;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0x3ff0000000000000;
  param_1[0x14] = 0x3ff0000000000000;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  return;
}



// FUNCTION 140f287f2 FUN_140f287f2 body=666 status=ok
// SIG undefined FUN_140f287f2(void)

undefined4 FUN_140f287f2(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  code *local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = (longlong *)0x0;
  local_88 = (code *)0x0;
  local_78 = (longlong *)0x0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = (code *)0x0;
  uVar3 = (**(code **)(*param_1 + 0xa8))();
  if ((char)uVar3 != '\0') {
    FUN_140f28e74(param_1,&local_d8);
    pcVar1 = local_88;
    *(undefined4 *)(param_2 + 100) = (undefined4)uStack_d0;
    if (local_88 == (code *)0x0) {
      iVar9 = (int)param_1[0x2c];
      iVar4 = iVar9;
    }
    else {
      plVar7 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar7 = local_68;
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      iVar4 = (*pcVar1)(uVar5,param_2);
      iVar9 = (int)param_1[0x2c];
    }
    plVar7 = param_1 + 0x2b;
    *(int *)(param_1 + 0x2c) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0x164) == iVar9) {
      FUN_140f2935e(plVar7,iVar9);
    }
    lVar6 = (longlong)iVar4 * 0xc;
    memmove((void *)(*plVar7 + lVar6 + 0xc),(void *)(*plVar7 + lVar6),
            (ulonglong)(uint)(iVar9 - iVar4) * 0xc);
    puVar10 = (undefined4 *)(lVar6 + *plVar7);
    FUN_140f28a8d(puVar10);
    pcVar1 = local_c8;
    if (local_c8 != (code *)0x0) {
      plVar7 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar7 = local_a8;
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      (*pcVar1)(uVar5,puVar10,param_2);
    }
    *puVar10 = *(undefined4 *)(param_2 + 0x20);
    if ((longlong)(int)param_1[0x2e] != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      lVar6 = param_1[0x2d];
      lVar8 = (longlong)(int)param_1[0x2e] << 4;
      do {
        cVar2 = FUN_1409d2f40(lVar6,uVar5);
        if (cVar2 != '\0') {
          if (lVar6 != 0) {
            iVar4 = *(int *)(lVar6 + 8);
            goto LAB_140f28949;
          }
          break;
        }
        lVar6 = lVar6 + 0x10;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
    }
    lVar6 = FUN_140c5f5f4(param_1 + 0x2d);
    FUN_14485c47a(lVar6,*(undefined8 *)(param_2 + 0x18));
    iVar4 = *(int *)((longlong)param_1 + 0xe4) + (uint)(*(int *)((longlong)param_1 + 0xe4) == 0);
    *(int *)((longlong)param_1 + 0xe4) = iVar4 + 1;
    *(int *)(lVar6 + 8) = iVar4;
LAB_140f28949:
    *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
    puVar10[1] = iVar4;
    (**(code **)(*param_1 + 0xb0))(param_1,puVar10,param_2);
    FUN_140c5ef80(param_1,(int)param_1[0x2c],iVar9);
  }
  if (local_88 != (code *)0x0) {
    plVar7 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar7 = local_68;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_c8 != (code *)0x0) {
    plVar7 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar7 = local_a8;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f28a8d FUN_140f28a8d body=15 status=ok
// SIG undefined FUN_140f28a8d(void)

void FUN_140f28a8d(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 140f28a9c FUN_140f28a9c body=422 status=ok
// SIG undefined FUN_140f28a9c(void)

undefined8 FUN_140f28a9c(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  undefined1 auStack_d8 [40];
  float local_b0;
  char local_ac;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140f17d30(&local_b0,param_2 + 0x48);
  if (local_ac == '\x01') {
    fVar1 = *(float *)(param_1 + 0x17c);
    if (*(float *)(param_1 + 0x19c) < fVar1) {
      fVar8 = fVar1 - *(float *)(param_1 + 0x19c);
      if (fVar1 * local_b0 <= fVar8) {
        fVar8 = fVar1 * local_b0;
      }
      if (-1 < (int)fVar8 && fVar8 != 0.0) {
        local_b0 = fVar8 / local_b0;
        if (1.0 <= local_b0) {
          local_b0 = 1.0;
        }
        if (local_b0 <= 0.0) {
          local_b0 = 0.0;
        }
        local_a8 = *(longlong *)(param_3 + 0x10);
        uStack_60 = *(undefined8 *)(param_3 + 0x18);
        local_98 = *(longlong **)(param_3 + 0x20);
        uStack_50 = *(undefined8 *)(param_3 + 0x28);
        local_48 = *(longlong *)(param_3 + 0x30);
        uStack_40 = *(undefined8 *)(param_3 + 0x38);
        local_38 = *(undefined8 *)(param_3 + 0x40);
        uStack_30 = *(undefined8 *)(param_3 + 0x48);
        uVar4 = local_38;
        uVar5 = uStack_30;
        uVar3 = uStack_40;
        local_58 = local_98;
        uVar2 = uStack_50;
        local_68 = local_a8;
        uVar6 = uStack_60;
        *(ulonglong *)(param_3 + 0x40) = CONCAT44(uStack_74,local_78);
        *(ulonglong *)(param_3 + 0x48) = CONCAT44(uStack_6c,uStack_70);
        *(undefined ***)(param_3 + 0x30) = &PTR_LAB_14b42ecb0;
        *(ulonglong *)(param_3 + 0x38) = CONCAT44(local_b0,fVar8);
        *(undefined8 *)(param_3 + 0x20) = 0;
        *(ulonglong *)(param_3 + 0x28) = CONCAT44(uStack_8c,uStack_90);
        *(undefined1 **)(param_3 + 0x10) = &LAB_143e45710;
        *(ulonglong *)(param_3 + 0x18) = CONCAT44(uStack_9c,uStack_a0);
        uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
        uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
        uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
        local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
        uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
        local_78 = (undefined4)local_38;
        uStack_74 = local_38._4_4_;
        uStack_70 = (undefined4)uStack_30;
        uStack_6c = uStack_30._4_4_;
        local_88 = local_48;
        uStack_80 = (undefined4)uStack_40;
        uStack_7c = uStack_40._4_4_;
        uStack_90 = (undefined4)uStack_50;
        uStack_8c = uStack_50._4_4_;
        uStack_a0 = (undefined4)uStack_60;
        uStack_9c = uStack_60._4_4_;
        uStack_60 = uVar6;
        uStack_50 = uVar2;
        uStack_40 = uVar3;
        local_38 = uVar4;
        uStack_30 = uVar5;
        if (local_a8 != 0) {
          plVar7 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar7 = &local_88;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        uVar6 = 1;
        goto LAB_140f28c1e;
      }
    }
  }
  uVar6 = 0;
LAB_140f28c1e:
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f28c44 FUN_140f28c44 body=527 status=ok
// SIG undefined FUN_140f28c44(void)

void FUN_140f28c44(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_6c;
  float local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_6c = 0;
  if (*(int *)(param_1 + 0x178) == 0) {
    fVar6 = *(float *)(param_1 + 0x180);
  }
  else {
    FUN_1402a453c(&local_6c);
    iVar4 = local_6c;
    iVar2 = *(int *)(param_1 + 0x178);
    local_78 = (longlong)local_6c * 0x88;
    lVar1 = DAT_14c9a3d60 + local_78;
    lVar5 = (longlong)iVar2 * 0x88 + DAT_14c9a3d60;
    FUN_1402a4668(lVar1 + -0x88,lVar5 + -0x88);
    if (iVar2 != iVar4) {
      FUN_1402a4744(lVar1 + -0x18,lVar5 + -0x18);
    }
    fVar6 = *(float *)(param_1 + 0x180);
    if (iVar4 != 0) {
      fVar6 = (float)FUN_14020a770(local_78 + DAT_14c9a3d60 + -0x88,fVar6,0);
      goto LAB_140f28c90;
    }
  }
  iVar4 = 0;
LAB_140f28c90:
  lVar1 = DAT_14c9a3d60;
  fVar7 = *(float *)(param_1 + 0x19c) + *(float *)(param_2 + 8);
  if (fVar6 <= fVar7) {
    fVar7 = fVar6;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_68 = fVar6;
  if ((iVar4 != 0) && (DAT_14c9a3d68 != DAT_14c9a3d94)) {
    lVar3 = (longlong)(iVar4 + -1) * 0x88;
    lVar5 = DAT_14c9a3d60 + lVar3;
    FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar3),
                  *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar3));
    if (*(longlong *)(lVar1 + 0x70 + lVar3) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar5 + 0x60) != 0) {
      FUN_1400020a8();
    }
    FUN_14059507c(&DAT_14c9a3d60,iVar4 + -1,1);
  }
  *(float *)(param_1 + 0x19c) = fVar7;
  if (*(char *)(param_1 + 0x1a4) != '\x01') {
    *(undefined1 *)(param_1 + 0x1a4) = 1;
  }
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x188);
  if (fVar7 < *(float *)(param_1 + 0x17c)) {
    if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98);
}



// FUNCTION 140f28e74 FUN_140f28e74 body=876 status=ok
// SIG undefined FUN_140f28e74(void)

void FUN_140f28e74(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined **ppuVar5;
  byte bVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  int iVar15;
  int iVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  ulonglong uVar19;
  undefined **ppuVar20;
  longlong lVar21;
  float fVar22;
  undefined1 auStack_368 [32];
  undefined **local_348;
  int *local_340;
  longlong *local_338;
  undefined4 local_330;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  iVar16 = (int)param_2[1];
  if ((longlong)iVar16 < 1) goto LAB_140f28ea2;
  ppuVar13 = (undefined **)*param_2;
  if (iVar16 == 1) {
    ppuVar7 = (undefined **)((longlong)ppuVar13 + 4);
LAB_140f28ee7:
    do {
      iVar16 = *(int *)ppuVar13;
      if ((-1 < (longlong)iVar16) && (iVar16 < *(int *)(param_1 + 0x160))) {
        FUN_140f291e2(param_1,*(undefined4 *)
                               (*(longlong *)(param_1 + 0x158) + 4 + (longlong)iVar16 * 0xc));
      }
      ppuVar13 = (undefined **)((longlong)ppuVar13 + 4);
    } while (ppuVar13 != ppuVar7);
  }
  else {
    memset(&local_338,0,0x2f0);
    local_340 = (int *)((longlong)ppuVar13 + ((longlong)iVar16 + -1) * 4);
    local_348 = ppuVar13;
    fVar22 = logf((float)iVar16);
    local_338 = (longlong *)CONCAT44(local_338._4_4_,(int)(longlong)(fVar22 + fVar22));
    pppuVar10 = &local_348;
    do {
      ppuVar7 = *pppuVar10;
      ppuVar13 = pppuVar10[1];
      iVar16 = *(int *)(pppuVar10 + 2);
      iVar9 = (int)((ulonglong)((longlong)ppuVar13 - (longlong)ppuVar7) >> 2);
      ppuVar12 = ppuVar13;
      ppuVar17 = ppuVar7;
      if (iVar16 != 0) {
LAB_140f29049:
        if (8 < (int)(iVar9 + 1U)) {
          uVar19 = (ulonglong)(iVar9 + 1U >> 1);
          iVar9 = *(int *)((longlong)ppuVar7 + uVar19 * 4);
          *(int *)((longlong)ppuVar7 + uVar19 * 4) = *(int *)ppuVar7;
          *(int *)ppuVar7 = iVar9;
          ppuVar11 = (undefined **)((longlong)ppuVar13 + 4);
          ppuVar8 = ppuVar7;
          do {
            ppuVar5 = (undefined **)((longlong)ppuVar8 + 4);
            ppuVar14 = (undefined **)((longlong)ppuVar8 + 4);
            do {
              ppuVar8 = ppuVar14;
              ppuVar18 = ppuVar5;
              if (ppuVar13 < ppuVar8) break;
              ppuVar5 = (undefined **)((longlong)ppuVar18 + 4);
              ppuVar14 = (undefined **)((longlong)ppuVar8 + 4);
            } while (*(int *)ppuVar7 <= *(int *)ppuVar8);
            ppuVar5 = ppuVar11 + -1;
            do {
              ppuVar14 = ppuVar11;
              ppuVar20 = ppuVar5;
              ppuVar11 = (undefined **)((longlong)ppuVar14 + -4);
              if (ppuVar11 <= ppuVar7) break;
              ppuVar5 = (undefined **)((longlong)ppuVar20 + -4);
            } while (*(int *)ppuVar11 <= *(int *)ppuVar7);
            if (ppuVar11 < ppuVar8) goto LAB_140f29139;
            iVar9 = *(int *)ppuVar8;
            *(int *)ppuVar8 = *(int *)ppuVar11;
            *(int *)ppuVar11 = iVar9;
          } while( true );
        }
        if (ppuVar7 < ppuVar13) {
          do {
            ppuVar12 = ppuVar7;
            if ((undefined **)((longlong)ppuVar7 + 4U) <= ppuVar13) {
              ppuVar17 = (undefined **)((longlong)ppuVar7 + 4U);
              iVar16 = *(int *)ppuVar7;
              do {
                iVar9 = *(int *)ppuVar17;
                iVar15 = iVar16;
                if (iVar9 <= iVar16) {
                  iVar15 = iVar9;
                }
                if (iVar9 < iVar16) {
                  ppuVar12 = ppuVar17;
                }
                ppuVar17 = (undefined **)((longlong)ppuVar17 + 4);
                iVar16 = iVar15;
              } while (ppuVar17 <= ppuVar13);
            }
            iVar16 = *(int *)ppuVar12;
            *(int *)ppuVar12 = *(int *)ppuVar13;
            *(int *)ppuVar13 = iVar16;
            ppuVar13 = (undefined **)((longlong)ppuVar13 - 4);
          } while (ppuVar7 < ppuVar13);
        }
        goto LAB_140f290f9;
      }
LAB_140f291d7:
      FUN_14899bcf7(ppuVar7);
LAB_140f290f9:
      pppuVar10 = pppuVar10 + -3;
    } while (&local_348 <= pppuVar10);
    if ((longlong)(int)param_2[1] != 0) {
      ppuVar13 = (undefined **)*param_2;
      ppuVar7 = (undefined **)((longlong)ppuVar13 + (longlong)(int)param_2[1] * 4);
      goto LAB_140f28ee7;
    }
  }
  pppuVar10 = &local_348;
  local_348 = &PTR_FUN_14b42ecd0;
  local_330 = 0;
  local_340 = (int *)(param_1 + 0x158);
  local_338 = param_2;
  FUN_140c5fd14(param_1);
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar21 = 0;
    bVar6 = 0;
    do {
      uVar1 = *(uint *)(lVar2 + lVar21);
      uVar19 = (ulonglong)(int)uVar1;
      if (((longlong)uVar19 < 0) || (iVar16 = *(int *)(param_1 + 0x160), iVar16 <= (int)uVar1)) {
        uVar19 = (ulonglong)pppuVar10 & 0xffffffff;
      }
      else {
        bVar3 = (bool)(bVar6 & (int)pppuVar10 <= (int)uVar1);
        bVar6 = 1;
        if (!bVar3) {
          if (~uVar1 + iVar16 != 0) {
            memmove((void *)(*(longlong *)(param_1 + 0x158) + uVar19 * 0xc),
                    (void *)(*(longlong *)(param_1 + 0x158) + uVar19 * 0xc + 0xc),
                    (longlong)(int)(~uVar1 + iVar16) * 0xc);
            iVar16 = *(int *)(param_1 + 0x160);
          }
          *(int *)(param_1 + 0x160) = iVar16 + -1;
          FUN_140f292be((int *)(param_1 + 0x158));
        }
      }
      lVar21 = lVar21 + 4;
      pppuVar10 = (undefined ***)(uVar19 & 0xffffffff);
    } while ((longlong)(int)lVar4 * 4 != lVar21);
  }
LAB_140f28ea2:
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140f29139:
  iVar9 = *(int *)ppuVar7;
  *(int *)ppuVar7 = *(int *)ppuVar11;
  *(int *)ppuVar11 = iVar9;
  iVar16 = iVar16 + -1;
  ppuVar14 = ppuVar14 + -1;
  if ((longlong)ppuVar20 - (longlong)ppuVar17 < (longlong)ppuVar12 - (longlong)ppuVar18) {
    if (ppuVar8 < ppuVar13) {
      *pppuVar10 = ppuVar8;
      pppuVar10[1] = ppuVar13;
      *(int *)(pppuVar10 + 2) = iVar16;
      pppuVar10 = pppuVar10 + 3;
    }
    ppuVar18 = ppuVar7;
    if (ppuVar11 <= (undefined **)((longlong)ppuVar7 + 4U)) goto LAB_140f290f9;
  }
  else {
    if ((undefined **)((longlong)ppuVar7 + 4U) < ppuVar11) {
      *pppuVar10 = ppuVar7;
      pppuVar10[1] = ppuVar14;
      *(int *)(pppuVar10 + 2) = iVar16;
      pppuVar10 = pppuVar10 + 3;
    }
    ppuVar7 = ppuVar8;
    ppuVar14 = ppuVar13;
    ppuVar20 = ppuVar13;
    if (ppuVar13 <= ppuVar8) goto LAB_140f290f9;
  }
  iVar9 = (int)((ulonglong)((longlong)ppuVar20 - (longlong)ppuVar18) >> 2);
  ppuVar13 = ppuVar14;
  ppuVar12 = ppuVar20;
  ppuVar17 = ppuVar18;
  if (iVar16 == 0) goto LAB_140f291d7;
  goto LAB_140f29049;
}



// FUNCTION 140f291e2 FUN_140f291e2 body=219 status=ok
// SIG undefined FUN_140f291e2(void)

void FUN_140f291e2(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar4 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x168);
    lVar3 = 0;
    uVar2 = 0;
    do {
      if (*(int *)(lVar1 + 8 + lVar3) == param_2) {
        if ((int)uVar2 < 0) {
          return;
        }
        if (iVar4 <= (int)uVar2) {
          return;
        }
        lVar3 = (ulonglong)(uVar2 & 0x7fffffff) * 0x10;
        iVar4 = *(int *)(lVar1 + 0xc + lVar3);
        iVar5 = 1;
        if (1 < iVar4) {
          iVar5 = iVar4;
        }
        *(int *)(lVar1 + 0xc + lVar3) = iVar5 + -1;
        lVar1 = *(longlong *)(param_1 + 0x168);
        if (*(int *)(lVar1 + 0xc + lVar3) != 0) {
          return;
        }
        iVar4 = *(int *)(param_1 + 0x170);
        if (iVar4 - 1U != uVar2) {
          iVar6 = (iVar4 - 1U) - uVar2;
          iVar5 = 1;
          if (iVar6 < 1) {
            iVar5 = iVar6;
          }
          memmove((void *)(lVar3 + lVar1),(void *)((longlong)(iVar4 - iVar5) * 0x10 + lVar1),
                  (longlong)iVar5 << 4);
          iVar4 = *(int *)(param_1 + 0x170);
        }
        *(int *)(param_1 + 0x170) = iVar4 + -1;
        FUN_140c5fdc4((longlong *)(param_1 + 0x168));
        return;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar4 << 4 != lVar3);
  }
  return;
}



// FUNCTION 140f292be FUN_140f292be body=159 status=ok
// SIG undefined FUN_140f292be(void)

void FUN_140f292be(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0xc)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0xc,4);
      uVar3 = uVar3 / 0xc;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc,4);
    }
  }
  return;
}



// FUNCTION 140f2935e FUN_140f2935e body=373 status=ok
// SIG undefined FUN_140f2935e(void)

void FUN_140f2935e(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f293e7;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140f293e7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 140f294d4 FUN_140f294d4 body=31 status=ok
// SIG undefined FUN_140f294d4(void)

void FUN_140f294d4(longlong *param_1)

{
  FUN_140115e24();
                    /* WARNING: Could not recover jumptable at 0x000140f294ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x640))(param_1);
  return;
}



// FUNCTION 140f294f4 FUN_140f294f4 body=3021 status=ok
// SIG undefined FUN_140f294f4(void)

void FUN_140f294f4(longlong *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  undefined8 in_R11;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  bool local_145;
  uint local_144;
  ulonglong local_140;
  uint *local_138;
  longlong local_130;
  longlong local_128;
  code *local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  ulonglong uStack_100;
  undefined2 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  longlong *local_c8;
  longlong local_b8 [4];
  undefined8 local_98;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar9 = (longlong *)FUN_140cc289e();
  lVar12 = plVar9[0x22];
  plVar11 = param_1;
  if (lVar12 == 0) {
    (**(code **)(*plVar9 + 1000))(plVar9);
    lVar12 = plVar9[0x22];
  }
  for (; plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[4]) {
    if ((*(uint *)(plVar11 + 1) & 0x30) != 0) goto LAB_140f295d0;
  }
  plVar11 = (longlong *)param_1[2];
  plVar9 = (longlong *)plVar11[0x22];
  if (plVar9 == (longlong *)0x0) {
    (**(code **)(*plVar11 + 1000))(plVar11);
    plVar9 = (longlong *)plVar11[0x22];
  }
  cVar3 = (**(code **)(*plVar9 + 0x638))();
  cVar4 = (**(code **)(*param_1 + 0x638))(param_1);
  if (cVar3 == cVar4) {
    plVar11 = (longlong *)param_1[2];
    lVar12 = plVar11[0x22];
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 1000))(plVar11);
      lVar12 = plVar11[0x22];
    }
    lVar18 = *(longlong *)(lVar12 + 0x3a8);
    plVar11 = (longlong *)(lVar18 + 0x10);
LAB_140f295c8:
    lVar12 = *plVar11;
  }
  else {
LAB_140f295d0:
    uVar5 = (**(code **)(*param_1 + 0x638))(param_1);
    switch(uVar5) {
    case 0:
      lVar12 = *(longlong *)(lVar12 + 0xa0);
      if ((DAT_14c950c29 == 1) && (lVar12 != 0)) {
        FUN_1456cec3c(lVar12);
LAB_140f29615:
        lVar19 = FUN_140719b1e();
        if (((lVar19 != 0) && (*(int *)(lVar19 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8) ==
            lVar19 + 0x30)) goto LAB_140f29db2;
      }
      else if (lVar12 != 0) goto LAB_140f29615;
      lVar12 = param_1[0x7c];
      if (((lVar12 != 0) && (lVar19 = FUN_140719b1e(), lVar19 != 0)) &&
         ((*(int *)(lVar19 + 0x38) <= *(int *)(lVar12 + 0x38) &&
          (lVar18 = 0,
          *(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8) ==
          lVar19 + 0x30)))) {
        plVar11 = param_1 + 0x7c;
        goto LAB_140f295c8;
      }
      break;
    case 1:
      lVar12 = *(longlong *)(lVar12 + 0xa8);
      if ((DAT_14c950c29 == 1) && (lVar12 != 0)) {
        FUN_1456cec3c(lVar12);
LAB_140f297be:
        lVar19 = FUN_140719c04();
        if (((lVar19 != 0) && (*(int *)(lVar19 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8) ==
            lVar19 + 0x30)) goto LAB_140f29db2;
      }
      else if (lVar12 != 0) goto LAB_140f297be;
      lVar12 = param_1[0x7d];
      if (((lVar12 != 0) && (lVar19 = FUN_140719c04(), lVar19 != 0)) &&
         ((*(int *)(lVar19 + 0x38) <= *(int *)(lVar12 + 0x38) &&
          (lVar18 = 0,
          *(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8) ==
          lVar19 + 0x30)))) {
        plVar11 = param_1 + 0x7d;
        goto LAB_140f295c8;
      }
      break;
    case 2:
      lVar12 = *(longlong *)(lVar12 + 0xb0);
      if ((DAT_14c950c29 == 1) && (lVar12 != 0)) {
        FUN_1456cec3c(lVar12);
LAB_140f296a4:
        lVar19 = FUN_140719dd0();
        if (((lVar19 != 0) && (*(int *)(lVar19 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8) ==
            lVar19 + 0x30)) goto LAB_140f29db2;
      }
      else if (lVar12 != 0) goto LAB_140f296a4;
      lVar12 = param_1[0x7e];
      if (((lVar12 != 0) && (lVar19 = FUN_140719dd0(), lVar19 != 0)) &&
         ((*(int *)(lVar19 + 0x38) <= *(int *)(lVar12 + 0x38) &&
          (lVar18 = 0,
          *(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8) ==
          lVar19 + 0x30)))) {
        plVar11 = param_1 + 0x7e;
        goto LAB_140f295c8;
      }
      break;
    case 3:
      lVar12 = *(longlong *)(lVar12 + 0xb8);
      if ((DAT_14c950c29 == 1) && (lVar12 != 0)) {
        FUN_1456cec3c(lVar12);
LAB_140f29733:
        lVar19 = FUN_140719cea();
        if (((lVar19 == 0) || (*(int *)(lVar12 + 0x38) < *(int *)(lVar19 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8) !=
            lVar19 + 0x30)) goto LAB_140f29758;
LAB_140f29db2:
        lVar18 = 0;
        goto LAB_140f2980b;
      }
      if (lVar12 != 0) goto LAB_140f29733;
LAB_140f29758:
      lVar12 = param_1[0x7f];
      if (((lVar12 != 0) && (lVar19 = FUN_140719cea(), lVar19 != 0)) &&
         ((*(int *)(lVar19 + 0x38) <= *(int *)(lVar12 + 0x38) &&
          (lVar18 = 0,
          *(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8) ==
          lVar19 + 0x30)))) {
        plVar11 = param_1 + 0x7f;
        goto LAB_140f295c8;
      }
    }
    lVar18 = 0;
    lVar12 = 0;
  }
LAB_140f2980b:
  plVar11 = (longlong *)param_1[0x75];
  if ((plVar11 == (longlong *)0x0) || ((longlong *)plVar11[0x15] != param_1)) {
LAB_140f29844:
    local_128 = lVar12;
    if ((lVar12 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar12);
    }
    lVar19 = (**(code **)(*param_1 + 0x598))(param_1,&local_128);
    if (lVar19 == 0) {
LAB_140f2989e:
      lVar19 = 0;
    }
    else {
      lVar10 = FUN_1411ae49e();
      if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) goto LAB_140f2989e;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(lVar19);
      }
    }
    param_1[0x75] = lVar19;
  }
  else {
    cVar3 = (**(code **)(*plVar11 + 0xa40))();
    cVar4 = (**(code **)(*param_1 + 0x638))(param_1);
    if (cVar3 != cVar4) goto LAB_140f29844;
    lVar19 = param_1[0x75];
  }
  if (lVar19 == 0) {
    uVar8 = *(uint *)(param_1 + 1);
    bVar6 = (**(code **)(*param_1 + 0x638))(param_1);
    if (bVar6 < 4) {
      pwVar16 = (wchar_t *)(&DAT_14ae8c490 + *(int *)(&DAT_14ae8c490 + (ulonglong)bVar6 * 4));
    }
    else {
      pwVar16 = L"WaterBodyUnknownComponent";
    }
    FUN_1446f470e(&local_130,pwVar16,1);
    if (local_130 == 0) {
      FUN_14058b40c(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                   );
    }
    local_c8 = (longlong *)0x0;
    local_98 = 0;
    local_f8 = 0;
    local_d8 = 0;
    local_108 = local_130;
    uStack_100 = (ulonglong)uVar8 & 0xffffffff00000069 | 0x40000;
    local_e8 = 0;
    uStack_e0 = 0;
    local_118 = lVar12;
    local_110 = param_1;
    local_f0 = lVar18;
    plVar11 = (longlong *)FUN_1402710dd(&local_118);
    if (local_d8 != 0) {
      plVar9 = local_c8;
      if (local_c8 == (longlong *)0x0) {
        plVar9 = local_b8;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if ((plVar11 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(plVar11);
    }
    param_1[0x75] = (longlong)plVar11;
    (**(code **)(*plVar11 + 0x588))(plVar11,0);
    lVar19 = param_1[0x75];
  }
  FUN_14092e51e(param_1,lVar19);
  local_58 = (longlong *)0x0;
  local_50 = 0x1800000000;
  lVar12 = FUN_1411ae49e();
  bVar2 = lVar12 != 0;
  if ((lVar12 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar12 != 0) goto LAB_140f299e7;
    uVar21 = CONCAT71((int7)((ulonglong)lVar18 >> 8),1);
    if (DAT_14cad00c8 == 0) goto LAB_140f29e9f;
    lVar19 = 0;
    uVar21 = CONCAT71((int7)((ulonglong)in_R11 >> 8),1);
LAB_140f29a16:
    local_145 = bVar2;
    if (lVar19 == DAT_14cad00c8) {
      if ((lVar12 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar12);
      }
      FUN_1483effca(param_1,&local_118);
      goto LAB_140f29f67;
    }
  }
  else {
    FUN_1456cec3c(lVar12);
LAB_140f299e7:
    if (DAT_14cad00c8 == 0) {
      local_160 = &local_120;
      local_120 = FUN_144a7958c;
      local_150 = FUN_14081d0ea;
      local_158 = FUN_14081d0ea;
      local_168 = &LAB_1479b7a0c;
      local_170 = &LAB_1463b464e;
      local_178 = L"Engine";
      local_180 = 0;
      local_188 = 0x10000005;
      local_190 = 8;
      local_198 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) {
        uVar21 = 0;
LAB_140f29e9f:
        local_160 = &local_120;
        local_120 = FUN_144a7958c;
        local_150 = FUN_14081d0ea;
        local_158 = FUN_14081d0ea;
        local_168 = &LAB_1479b7a0c;
        local_170 = &LAB_1463b464e;
        local_178 = L"Engine";
        local_180 = 0;
        local_188 = 0x10000005;
        local_190 = 8;
        local_198 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        lVar19 = 0;
        uVar21 = uVar21 & 0xffffffff;
        goto LAB_140f29a16;
      }
    }
    local_145 = true;
    if (*(int *)(lVar12 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      lVar19 = lVar12;
      if (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
          == DAT_14cad00c8 + 0x30) goto LAB_140f29a16;
    }
  }
  bVar6 = local_145;
  if ((local_145 != false) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar12);
    uVar21 = uVar21 & 0xffffffff;
  }
  puVar20 = (uint *)(param_1 + 0x4a);
  uVar8 = *(uint *)(param_1 + 0x4d);
  if (uVar8 == 0) {
    uVar17 = 1;
    uVar24 = 0;
    uVar7 = 0;
    iVar22 = 0;
  }
  else {
    puVar13 = (uint *)param_1[0x4c];
    if ((uint *)param_1[0x4c] == (uint *)0x0) {
      puVar13 = puVar20;
    }
    uVar7 = *puVar13;
    if (uVar7 == 0) {
      iVar22 = uVar8 + 0x1e;
      if (-1 < (int)(uVar8 - 1)) {
        iVar22 = uVar8 - 1;
      }
      uVar24 = 0;
      uVar17 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar17 = uVar24;
      }
      iVar22 = 0;
      do {
        if (uVar17 == uVar24) goto LAB_140f29f67;
        iVar22 = iVar22 + 0x20;
        uVar7 = puVar13[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar24 = 0;
      iVar22 = 0;
    }
    uVar17 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar17 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar7 = (iVar22 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if ((int)uVar8 <= (int)uVar7) {
      uVar7 = uVar8;
    }
  }
  if (uVar7 != uVar8) {
    uVar25 = 0xffffffff;
    local_140 = (ulonglong)uVar8;
    do {
      lVar19 = *(longlong *)(param_1[0x48] + (longlong)(int)uVar7 * 0x10);
      if (lVar19 != 0) {
        if ((DAT_14c950c29 & bVar6) == 1) {
          local_144 = (uint)uVar21;
          FUN_1456cec3c(lVar12);
          uVar21 = (ulonglong)local_144;
          bVar6 = local_145;
LAB_140f29b0b:
          if (DAT_14cad00c8 == 0) {
            local_120 = FUN_144a7958c;
            local_150 = FUN_14081d0ea;
            local_158 = FUN_14081d0ea;
            local_160 = &local_120;
            local_168 = &LAB_1479b7a0c;
            local_170 = &LAB_1463b464e;
            local_178 = L"Engine";
            local_180 = 0;
            local_188 = 0x10000005;
            local_190 = 8;
            local_198 = 0x110;
            local_144 = (uint)uVar21;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            uVar21 = (ulonglong)local_144;
            bVar6 = local_145;
            if (DAT_14cad00c8 == 0) goto LAB_140f29d13;
          }
          if (*(int *)(lVar12 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140f29d13;
          lVar18 = 0;
          if (*(longlong *)
               (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
              DAT_14cad00c8 + 0x30) {
            lVar18 = lVar12;
          }
        }
        else {
          if ((char)uVar21 == '\0') goto LAB_140f29b0b;
LAB_140f29d13:
          lVar18 = 0;
        }
        uVar1 = local_50;
        if ((*(int *)(lVar18 + 0x38) <= *(int *)(*(longlong *)(lVar19 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar18 + 0x38) * 8) == lVar18 + 0x30)) {
          lVar18 = (longlong)(int)local_50;
          uVar8 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar8);
          if (local_50._4_4_ < uVar8) {
            local_144 = (uint)uVar21;
            local_138 = puVar20;
            FUN_1483f011c(&local_118,uVar1 & 0xffffffff);
            uVar21 = (ulonglong)local_144;
            puVar20 = local_138;
          }
          plVar11 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar11 = &local_118;
          }
          plVar11[lVar18] = lVar19;
          bVar6 = local_145;
        }
      }
      uVar25 = uVar25 & ~(uint)uVar17;
      puVar13 = (uint *)param_1[0x4c];
      if ((uint *)param_1[0x4c] == (uint *)0x0) {
        puVar13 = puVar20;
      }
      uVar8 = *(uint *)(param_1 + 0x4d);
      iVar23 = (int)uVar24;
      lVar19 = (longlong)iVar23;
      uVar7 = puVar13[lVar19] & uVar25;
      if (uVar7 == 0) {
        iVar14 = uVar8 + 0x1e;
        if (-1 < (int)(uVar8 - 1)) {
          iVar14 = uVar8 - 1;
        }
        iVar14 = iVar14 >> 5;
        iVar22 = iVar22 + 0x20;
        iVar15 = iVar14;
        if (iVar14 < iVar23) {
          iVar15 = iVar23;
        }
        if (iVar23 < iVar14) {
          lVar18 = 0;
          do {
            uVar7 = puVar13[lVar19 + lVar18 + 1];
            if (uVar7 != 0) {
              uVar24 = (ulonglong)(iVar23 + (int)lVar18 + 1);
              uVar25 = 0xffffffff;
              goto LAB_140f29c24;
            }
            iVar22 = iVar22 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar15 - lVar19 != lVar18);
          uVar25 = 0xffffffff;
          iVar23 = iVar15;
        }
        uVar24 = (ulonglong)(iVar23 + 1);
        bVar6 = local_145;
        uVar7 = uVar8;
      }
      else {
LAB_140f29c24:
        uVar17 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar17 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar7 = (iVar22 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if ((int)uVar8 <= (int)uVar7) {
          uVar7 = uVar8;
        }
      }
    } while (uVar7 != (uint)local_140);
  }
LAB_140f29f67:
  plVar11 = local_58;
  if (local_58 == (longlong *)0x0) {
    plVar11 = &local_118;
  }
  lVar12 = (longlong)(int)local_50;
  if (lVar12 != 0) {
    lVar19 = 0;
    do {
      plVar9 = *(longlong **)((longlong)plVar11 + lVar19);
      if (plVar9 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar9 + 0xa40))(plVar9);
        cVar4 = (**(code **)(*param_1 + 0x638))(param_1);
        if (cVar3 != cVar4) {
          (**(code **)(*plVar9 + 0x420))(plVar9,0);
        }
      }
      lVar19 = lVar19 + 8;
    } while (lVar12 * 8 != lVar19);
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f2a0c2 FUN_140f2a0c2 body=250 status=ok
// SIG undefined FUN_140f2a0c2(void)

longlong *
FUN_140f2a0c2(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_4;
  local_38 = (longlong *)param_4[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)FUN_14001cc68(0xd0,0x10);
  FUN_140f2a1be(plVar3,param_3,&local_40);
  local_30 = plVar3 + 2;
  local_28 = plVar3;
  FUN_140f2a2b0(&local_30);
  plVar3 = local_28;
  *param_2 = (longlong)local_30;
  param_2[1] = (longlong)local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
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
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f2a1be FUN_140f2a1be body=135 status=ok
// SIG undefined FUN_140f2a1be(void)

undefined8 * FUN_140f2a1be(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b426710;
  FUN_140f2a246(param_1 + 2);
  param_1[2] = &PTR_LAB_14b426850;
  param_1[0x14] = *param_3;
  lVar1 = param_3[1];
  param_1[0x15] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)((longlong)param_1 + 0xc9) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[2] = &PTR_FUN_14b426730;
  return param_1;
}



// FUNCTION 140f2a246 FUN_140f2a246 body=106 status=ok
// SIG undefined FUN_140f2a246(void)

void FUN_140f2a246(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14b427790;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = *param_2;
  lVar1 = param_2[1];
  param_1[0xc] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(byte *)((longlong)param_1 + 0x89) = *(byte *)((longlong)param_1 + 0x89) & 0xfc;
  return;
}



// FUNCTION 140f2a2b0 FUN_140f2a2b0 body=162 status=ok
// SIG undefined FUN_140f2a2b0(void)

void FUN_140f2a2b0(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140f2a2ef;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140f2a2ef;
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
LAB_140f2a2ef:
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
                    /* WARNING: Could not recover jumptable at 0x000140f2a34e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140f2a352 FUN_140f2a352 body=1547 status=ok
// SIG undefined FUN_140f2a352(void)

void FUN_140f2a352(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8 [5];
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_80;
  int local_78;
  longlong local_70;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_64 = 0;
  lVar6 = FUN_140f2af30(&local_64);
  if ((int)local_64 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_64);
  }
  lVar10 = param_1 + 0x28;
  if (*(int *)(param_1 + 0x34) < (int)local_64) {
    FUN_1406dd1ae(lVar10,local_64);
  }
  uVar9 = local_64;
  lVar1 = param_1 + 0x38;
  if ((uint)(*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x6c)) < local_64) {
    if ((int)local_64 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)local_64);
    }
    FUN_140f2b1f8(lVar1,local_64);
    if (uVar9 < 4) {
      iVar5 = 1;
    }
    else {
      uVar9 = (uVar9 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x80) == 0) || (*(int *)(param_1 + 0x80) < iVar5)) {
      *(int *)(param_1 + 0x80) = iVar5;
      FUN_1409bd292(lVar1);
    }
  }
  lVar2 = param_1 + 0x88;
  uVar9 = (int)local_64 / 2;
  if ((uint)(*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0xbc)) < uVar9) {
    if ((int)local_64 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar9);
    }
    FUN_140f2b03c(lVar2,uVar9);
    if (uVar9 < 4) {
      iVar5 = 1;
    }
    else {
      uVar9 = (uVar9 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((*(int *)(param_1 + 0xd0) == 0) || (*(int *)(param_1 + 0xd0) < iVar5)) {
      *(int *)(param_1 + 0xd0) = iVar5;
      FUN_140f2b3b6(lVar2);
    }
  }
  local_f8 = lVar2;
  local_f0 = lVar1;
  local_e8 = lVar10;
  local_e0 = param_1;
  local_70 = param_1;
  if (0 < (int)local_64) {
    lVar6 = lVar6 + 0x1a;
    lVar10 = 0;
    plVar3 = local_c8 + 4;
    plVar7 = local_c8 + 2;
    do {
      FUN_1400b22c2(&local_80,lVar6 + -0x12);
      FUN_1400b22c2(&local_98,lVar6 + -6);
      FUN_1400b22c2(plVar3,lVar6);
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_108 = plVar7;
      FUN_140f2a95e(&local_70,&local_80,&local_80,local_c8);
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_c8[2] != 0) {
        FUN_1400020a8();
      }
      if (1 < (int)uStack_a0) {
        local_c8[2] = 0;
        local_c8[3] = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        FUN_140f2ad5a(local_c8,&local_80,&local_d8,plVar3);
        local_108 = plVar3;
        FUN_140f2a95e(&local_70,local_c8,&local_80,plVar7);
        if (local_c8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_c8[2] != 0) {
          FUN_1400020a8();
        }
      }
      if (1 < (int)uStack_90) {
        local_c8[2] = 0;
        local_c8[3] = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        FUN_140f2ad5a(local_c8,&local_80,&local_98,&local_d8);
        local_108 = plVar7;
        FUN_140f2a95e(&local_70,local_c8,&local_80,&local_98);
        if (local_c8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_c8[2] != 0) {
          FUN_1400020a8();
        }
        if ((1 < (int)uStack_90) && (1 < (int)uStack_a0)) {
          FUN_140f2ad5a(plVar7,&local_80,&local_98,plVar3);
          local_108 = plVar3;
          FUN_140f2a95e(&local_70,plVar7,&local_80,&local_98);
          if (local_c8[2] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_c8[4] != 0) {
        FUN_1400020a8();
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 1;
      lVar6 = lVar6 + 0xe0;
    } while (lVar10 < (int)local_64);
  }
  plVar7 = (longlong *)thunk_FUN_1424ea500();
  lVar6 = *plVar7;
  if (lVar6 != 0) {
    do {
      if (*(char *)(lVar6 + 2) == '\0') {
        FUN_1400b22c2(&local_80);
        uVar9 = local_78 - 1;
        if (local_78 == 0) {
          uVar9 = 0;
        }
        if (0 < (int)uVar9) {
          uVar8 = 0;
          do {
            uVar4 = *(ushort *)(local_80 + uVar8 * 2);
            *(ushort *)(local_80 + uVar8 * 2) = (ushort)(uVar4 - 0x41 < 0x1a) * 0x20 + uVar4;
            uVar8 = uVar8 + 1;
          } while (uVar9 != uVar8);
        }
        local_98 = 0;
        uStack_90 = 0;
        local_c8[4] = 0;
        uStack_a0 = 0;
        local_108 = &local_98;
        FUN_140f2a95e(&local_70,&local_80,&local_80,local_c8 + 4);
        if (local_c8[4] != 0) {
          FUN_1400020a8();
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_80 != 0) {
          FUN_1400020a8();
        }
      }
      lVar6 = plVar7[1];
      plVar7 = plVar7 + 1;
    } while (lVar6 != 0);
  }
  FUN_140056680(&local_80,L"US-POSIX");
  local_98 = 0;
  uStack_90 = 0;
  FUN_140056680(local_c8 + 4,&DAT_149e19e7a);
  FUN_140056680(local_c8 + 2,L"en-US-POSIX");
  local_108 = &local_80;
  FUN_140f2a95e(&local_70,local_c8 + 2,local_c8 + 4,&local_98);
  if (local_c8[2] != 0) {
    FUN_1400020a8();
  }
  lVar10 = local_e8;
  lVar6 = local_f0;
  if (local_c8[4] != 0) {
    FUN_1400020a8();
  }
  lVar2 = local_e0;
  lVar1 = local_f8;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(lVar2 + 0x34) != *(int *)(lVar2 + 0x30)) {
    FUN_1406dd1ae(lVar10);
  }
  FUN_1457c8c36(lVar6);
  FUN_1457c8bde(lVar6,*(int *)(lVar2 + 0x40) - *(int *)(lVar2 + 0x6c),1);
  FUN_140f2af7a(lVar1);
  FUN_1457c8b92(lVar1,*(int *)(lVar2 + 0x90) - *(int *)(lVar2 + 0xbc));
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f2a95e FUN_140f2a95e body=1018 status=ok
// SIG undefined FUN_140f2a95e(void)

void FUN_140f2a95e(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  longlong *local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *param_1;
  iVar4 = (int)param_2[1];
  uVar13 = 0;
  iVar10 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar10 = 0;
  }
  if (0 < iVar10) {
    if (iVar4 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    lVar11 = 0;
    do {
      uVar9 = ((uint)(ushort)puVar7[lVar11] + (uint)(0x19 < (ushort)puVar7[lVar11] - 0x61) * 0x20) -
              0x20;
      uVar13 = uVar13 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar13 ^ uVar9) & 0xff) * 4);
      uVar13 = uVar13 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar9 >> 8 & 0xff) * 4);
      lVar11 = lVar11 + 1;
    } while (iVar10 != (int)lVar11);
  }
  if (*(int *)(lVar5 + 0x40) != *(int *)(lVar5 + 0x6c)) {
    lVar11 = lVar5 + 0x70;
    if (*(longlong *)(lVar5 + 0x78) != 0) {
      lVar11 = *(longlong *)(lVar5 + 0x78);
    }
    iVar10 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar5 + 0x80) - 1U & uVar13) * 4);
    if (iVar10 != -1) {
      lVar11 = *(longlong *)(lVar5 + 0x38);
LAB_140f2aa53:
      lVar12 = (longlong)iVar10 * 0x20;
      iVar10 = *(int *)(lVar11 + 8 + lVar12);
      if (iVar10 == iVar4) {
        if (1 < iVar4) {
          lVar14 = 0;
          do {
            uVar2 = *(ushort *)(*(longlong *)(lVar11 + lVar12) + lVar14);
            uVar3 = *(ushort *)(*param_2 + lVar14);
            if (uVar2 == uVar3) {
              if (uVar2 == 0) break;
            }
            else {
              if (0x7f < (uVar3 | uVar2)) {
                iVar10 = (uint)uVar2 - (uint)uVar3;
                goto LAB_140f2aab4;
              }
              if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
              goto code_r0x000140f2aab1;
            }
            lVar14 = lVar14 + 2;
          } while( true );
        }
      }
      else if (iVar10 + iVar4 != 1) goto LAB_140f2aacb;
      goto LAB_140f2ad21;
    }
  }
LAB_140f2aae1:
  local_64 = *(undefined4 *)(lVar5 + 0x30);
  local_58 = &local_64;
  uVar13 = 0;
  local_60 = param_2;
  FUN_1409bc59c((longlong *)(lVar5 + 0x38),local_4c,&local_60,0);
  iVar4 = (int)param_3[1];
  iVar10 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar10 = 0;
  }
  if (0 < iVar10) {
    if (iVar4 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_3;
    }
    lVar11 = 0;
    uVar13 = 0;
    do {
      uVar9 = ((uint)(0x19 < (ushort)puVar7[lVar11] - 0x61) * 0x20 + (uint)(ushort)puVar7[lVar11]) -
              0x20;
      uVar13 = uVar13 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar13 ^ uVar9) & 0xff) * 4);
      uVar13 = uVar13 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar9 >> 8 & 0xff) * 4);
      lVar11 = lVar11 + 1;
    } while (iVar10 != (int)lVar11);
  }
  plVar8 = (longlong *)FUN_140c9ec4c(lVar5 + 0x88,uVar13,param_3);
  iVar4 = (int)plVar8[1];
  *(uint *)(plVar8 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar8 + 0xc) < iVar4 + 1U) {
    FUN_1446f48e2(plVar8,iVar4);
  }
  *(undefined4 *)(*plVar8 + (longlong)iVar4 * 4) = local_64;
  iVar4 = *(int *)(lVar5 + 0x30);
  *(uint *)(lVar5 + 0x30) = iVar4 + 1U;
  if (*(uint *)(lVar5 + 0x34) < iVar4 + 1U) {
    FUN_1406dd284((longlong *)(lVar5 + 0x28),iVar4);
  }
  plVar8 = (longlong *)((longlong)iVar4 * 0x40 + *(longlong *)(lVar5 + 0x28));
  FUN_14276145c(plVar8);
  if (plVar8 != param_2) {
    iVar4 = (int)param_2[1];
    pvVar6 = (void *)*param_2;
    *(int *)(plVar8 + 1) = iVar4;
    if (iVar4 == 0 && *(int *)((longlong)plVar8 + 0xc) == 0) {
      *(undefined4 *)((longlong)plVar8 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(plVar8,iVar4);
      if (iVar4 != 0) {
        memcpy((void *)*plVar8,pvVar6,(longlong)iVar4 * 2);
      }
    }
  }
  plVar1 = plVar8 + 2;
  if (plVar1 != param_3) {
    iVar4 = (int)param_3[1];
    pvVar6 = (void *)*param_3;
    *(int *)(plVar8 + 3) = iVar4;
    if (iVar4 == 0 && *(int *)((longlong)plVar8 + 0x1c) == 0) {
      *(undefined4 *)((longlong)plVar8 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar4);
      if (iVar4 != 0) {
        memcpy((void *)*plVar1,pvVar6,(longlong)iVar4 * 2);
      }
    }
  }
  plVar1 = plVar8 + 4;
  if (plVar1 != param_4) {
    iVar4 = (int)param_4[1];
    pvVar6 = (void *)*param_4;
    *(int *)(plVar8 + 5) = iVar4;
    if (iVar4 == 0 && *(int *)((longlong)plVar8 + 0x2c) == 0) {
      *(undefined4 *)((longlong)plVar8 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar4);
      if (iVar4 != 0) {
        memcpy((void *)*plVar1,pvVar6,(longlong)iVar4 * 2);
      }
    }
  }
  plVar1 = plVar8 + 6;
  if (plVar1 != param_5) {
    iVar4 = (int)param_5[1];
    pvVar6 = (void *)*param_5;
    *(int *)(plVar8 + 7) = iVar4;
    if (iVar4 == 0 && *(int *)((longlong)plVar8 + 0x3c) == 0) {
      *(undefined4 *)((longlong)plVar8 + 0x3c) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar4);
      if (iVar4 != 0) {
        memcpy((void *)*plVar1,pvVar6,(longlong)iVar4 * 2);
      }
    }
  }
LAB_140f2ad21:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140f2aab1:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_140f2aab4:
  if (iVar10 == 0) goto LAB_140f2ad21;
LAB_140f2aacb:
  iVar10 = *(int *)(lVar11 + 0x18 + lVar12);
  if (iVar10 == -1) goto LAB_140f2aae1;
  goto LAB_140f2aa53;
}



// FUNCTION 140f2ad5a FUN_140f2ad5a body=443 status=ok
// SIG undefined FUN_140f2ad5a(void)

undefined8 *
FUN_140f2ad5a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_3 + 1);
  iVar1 = *(int *)(param_4 + 1);
  if (iVar3 < 2) {
    if (iVar1 < 2) {
      *param_1 = 0;
      iVar3 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(param_1 + 1) = iVar3;
      if ((longlong)iVar3 != 0) {
        FUN_1446dd670(param_1,iVar3,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar3 * 2);
        return param_1;
      }
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    iVar3 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar3 = 0;
    }
    if (0 < iVar1 + iVar3) {
      FUN_1446f8c06(param_1,iVar1 + iVar3 + 1);
      iVar3 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        iVar3 = 0;
      }
    }
    FUN_1400020e8(param_1,*param_2,iVar3);
    FUN_140002184(param_1,0x2d);
    iVar3 = *(int *)(param_4 + 1) + -1;
    if (*(int *)(param_4 + 1) == 0) {
      iVar3 = 0;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    iVar4 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar4 = 0;
    }
    if (iVar1 < 2) {
      if (0 < iVar3 + iVar4) {
        FUN_1446f8c06(param_1,iVar3 + iVar4 + 1);
        iVar4 = *(int *)(param_2 + 1) + -1;
        if (*(int *)(param_2 + 1) == 0) {
          iVar4 = 0;
        }
      }
      FUN_1400020e8(param_1,*param_2,iVar4);
      FUN_140002184(param_1,0x2d);
      iVar3 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar3 = 0;
      }
      uVar2 = *param_3;
      goto LAB_140f2adda;
    }
    iVar3 = iVar1 + iVar3 + iVar4;
    if (0 < iVar3) {
      FUN_1446f8c06(param_1,iVar3 + 1);
      iVar4 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        iVar4 = 0;
      }
    }
    FUN_1400020e8(param_1,*param_2,iVar4);
    FUN_140002184(param_1,0x2d);
    iVar3 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(param_1,*param_3,iVar3);
    FUN_140002184(param_1,0x2d);
    iVar3 = *(int *)(param_4 + 1) + -1;
    if (*(int *)(param_4 + 1) == 0) {
      iVar3 = 0;
    }
  }
  uVar2 = *param_4;
LAB_140f2adda:
  FUN_1400020e8(param_1,uVar2,iVar3);
  return param_1;
}



// FUNCTION 140f2af20 thunk_FUN_1424ea500 body=5 status=ok
// SIG undefined thunk_FUN_1424ea500(void)

undefined ** thunk_FUN_1424ea500(void)

{
  return &PTR_DAT_149969250;
}



// FUNCTION 140f2af30 FUN_140f2af30 body=73 status=ok
// SIG undefined FUN_140f2af30(void)

undefined8 FUN_140f2af30(undefined4 *param_1)

{
  char cVar1;
  
  if (DAT_14c77eb08 != 2) {
    cVar1 = FUN_142501800(&DAT_14c77eb08);
    if (cVar1 != '\0') {
      FUN_1424c3490();
      FUN_1425019c0(&DAT_14c77eb08);
    }
  }
  *param_1 = DAT_14c77eae0;
  return DAT_14c77eae8;
}



// FUNCTION 140f2af7a FUN_140f2af7a body=194 status=ok
// SIG undefined FUN_140f2af7a(void)

void FUN_140f2af7a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)(int)uVar7;
        if (iVar3 < (int)uVar7) {
          iVar5 = *(int *)(lVar2 + lVar6 * 0x28);
          iVar1 = *(int *)(lVar2 + 4 + lVar6 * 0x28);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x28) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x28) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + lVar6 * 0x28);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) != iVar5) {
    FUN_140549ad6(param_1,iVar5);
    return;
  }
  return;
}



// FUNCTION 140f2b03c FUN_140f2b03c body=444 status=ok
// SIG undefined FUN_140f2b03c(void)

void FUN_140f2b03c(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140549ad6(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_140549c28(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x28 + -0x24);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -10;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
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
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 140f2b1f8 FUN_140f2b1f8 body=446 status=ok
// SIG undefined FUN_140f2b1f8(void)

void FUN_140f2b1f8(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1446f4a44(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1447711aa(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x20 + lVar2 + -0x1c);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -8;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
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
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 140f2b3b6 FUN_140f2b3b6 body=486 status=ok
// SIG undefined FUN_140f2b3b6(void)

void FUN_140f2b3b6(longlong *param_1)

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
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
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



// FUNCTION 140f2b59e FUN_140f2b59e body=713 status=ok
// SIG undefined FUN_140f2b59e(void)

void FUN_140f2b59e(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_80;
  longlong local_78 [3];
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((*(longlong *)(param_1 + -0x11a0) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + -0x11a0) + 0x65) & 2) == 0)) &&
      ((*(byte *)(param_1 + -0x11a9) & 0x40) == 0)) && ((longlong)(int)param_2[1] != 0)) {
    lVar1 = param_1 + -0x1248;
    plVar9 = (longlong *)*param_2;
    plVar8 = plVar9 + (int)param_2[1];
    bVar11 = false;
    local_88 = param_2;
    do {
      lVar7 = *plVar9;
      if (lVar7 != 0) {
        if ((longlong)*(int *)(param_1 + 0x408) != 0) {
          lVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x400) + lVar10) == lVar7) goto LAB_140f2b668;
            lVar10 = lVar10 + 8;
          } while ((longlong)*(int *)(param_1 + 0x408) * 8 != lVar10);
        }
        iVar5 = *(int *)(param_1 + 0x448);
        uVar4 = iVar5 + 1;
        *(uint *)(param_1 + 0x448) = uVar4;
        if (*(uint *)(param_1 + 0x44c) < uVar4) {
          FUN_140cd402e((longlong *)(param_1 + 0x440));
        }
        *(longlong *)(*(longlong *)(param_1 + 0x440) + (longlong)iVar5 * 8) = lVar7;
        bVar11 = true;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar7);
        }
      }
LAB_140f2b668:
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar8);
    iVar5 = (int)local_88[1];
    plVar9 = local_88;
    if ((0 < iVar5) && (iVar6 = (int)param_3[1], 0 < iVar6)) {
      lVar10 = 0;
      lVar7 = 1;
      do {
        if (*(int *)(*param_3 + 8 + lVar10) != 0) {
          local_78[0] = 0;
          local_78[1] = 0;
          FUN_1457c8d02(local_78,*param_3 + lVar10);
          local_80 = *(longlong *)(*plVar9 + -8 + lVar7 * 8);
          if ((local_80 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
          local_60 = &local_80;
          local_58 = local_78;
          FUN_1457c8d4c(param_1 + 0x450,local_4c);
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          iVar5 = (int)local_88[1];
          iVar6 = (int)param_3[1];
          plVar9 = local_88;
        }
        if (iVar5 <= lVar7) break;
        lVar10 = lVar10 + 0x10;
        bVar2 = lVar7 < iVar6;
        lVar7 = lVar7 + 1;
      } while (bVar2);
    }
    if ((bVar11) &&
       (((((*(longlong *)(param_1 + -0x11a0) != 0 &&
           (*(char *)(*(longlong *)(param_1 + -0x11a0) + 0x178) == '\x03')) ||
          (cVar3 = FUN_140f2b868(lVar1), cVar3 == '\0')) &&
         ((*(byte *)(param_1 + -0x11ac) & 1) != 0)) ||
        (((*(longlong *)(param_1 + -0x11a0) == 0 ||
          (*(char *)(*(longlong *)(param_1 + -0x11a0) + 0x178) != '\x03')) &&
         ((*(byte *)(param_1 + -0x11a9) & 0x20) != 0)))))) {
      FUN_140f2b9a2(lVar1);
      FUN_140f2be08(lVar1);
      if ((longlong)*(int *)(param_1 + 0x750) != 0) {
        lVar7 = 0;
        do {
          if ((*(int *)(*(longlong *)(param_1 + 0x748) + 8 + lVar7) != 0) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x748) + lVar7) != 0)) {
            FUN_140f2bd4c(param_1 + 0x748,lVar1,plVar9,1);
            break;
          }
          lVar7 = lVar7 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x750) * 0x10 != lVar7);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f2b868 FUN_140f2b868 body=83 status=ok
// SIG undefined FUN_140f2b868(void)

bool FUN_140f2b868(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_140f2b8bc();
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_140f2b8bc();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar3 != lVar4) goto LAB_140f2b8ab;
    }
  }
  lVar4 = 0;
LAB_140f2b8ab:
  return lVar4 != 0;
}



// FUNCTION 140f2b8bc FUN_140f2b8bc body=228 status=ok
// SIG undefined FUN_140f2b8bc(void)

longlong FUN_140f2b8bc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb68d38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14874b44b;
    local_40 = FUN_14651e104;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GestaltPartReplicationDataInterface",&DAT_14cb68d38,
                  &DAT_14874b44a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68d38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f2b9a2 FUN_140f2b9a2 body=936 status=ok
// SIG undefined FUN_140f2b9a2(void)

void FUN_140f2b9a2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  int local_70;
  longlong local_68;
  undefined8 uStack_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_1 + 0x628) != 0) {
    local_98 = (longlong *)(param_1 + 0x620);
    local_68 = 0;
    uStack_60 = 0;
    FUN_1447a68a4(0,&local_68);
    if (*(int *)(param_1 + 0x628) < (int)uStack_60) {
      FUN_140ddbde4(local_98);
    }
    FUN_14008fc84(param_1);
    if ((longlong)local_70 != 0) {
      local_80 = local_78 + local_70;
      iVar4 = 0;
      plVar9 = local_78;
      local_90 = param_1;
      local_88 = param_2;
LAB_140f2ba51:
      plVar1 = (longlong *)*plVar9;
      if ((longlong)(int)param_2[1] != 0) {
        lVar3 = 0;
        do {
          if (*(longlong **)(*param_2 + lVar3) == plVar1) goto LAB_140f2bab7;
          lVar3 = lVar3 + 8;
        } while ((longlong)(int)param_2[1] * 8 != lVar3);
      }
      if ((longlong)*(int *)(local_90 + 0x1690) != 0) {
        lVar3 = 0;
        do {
          if (*(longlong **)(*(longlong *)(local_90 + 0x1688) + lVar3) == plVar1)
          goto LAB_140f2bab7;
          lVar3 = lVar3 + 8;
        } while ((longlong)*(int *)(local_90 + 0x1690) * 8 != lVar3);
      }
      goto LAB_140f2bb7b;
    }
LAB_140f2bbff:
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8(local_78);
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140f2bab7:
  iVar2 = (**(code **)(*plVar1 + 0x330))(plVar1);
  if (0 < iVar2) {
    lVar5 = (longlong)iVar4;
    lVar3 = lVar5 * 0x28;
    lVar7 = 0;
    do {
      lVar8 = lVar5 + lVar7;
      if ((lVar8 < 0) || ((int)uStack_60 <= lVar8)) {
        if (-1 < lVar8) {
          lVar6 = 0;
          goto LAB_140f2bb18;
        }
      }
      else {
        lVar6 = *(longlong *)(local_68 + lVar3);
        if ((DAT_14c950c29 == '\x01') && (lVar6 != 0)) {
          local_a0 = lVar6;
          FUN_1456cec3c(lVar6);
          lVar6 = local_a0;
        }
LAB_140f2bb18:
        if (lVar8 < *(int *)(local_90 + 0x628)) {
          lVar8 = *(longlong *)(*local_98 + lVar5 * 8 + lVar7 * 8);
          if ((DAT_14c950c29 == '\x01') && (lVar8 != 0)) {
            local_a0 = lVar6;
            FUN_1456cec3c(lVar8);
            lVar6 = local_a0;
          }
          else if (lVar8 == 0) goto LAB_140f2bb55;
          if (DAT_14caec470 == 0) {
            local_c0 = &local_50;
            local_50 = FUN_1417df956;
            local_b0 = FUN_14081d0ea;
            local_b8 = &LAB_1463eaa20;
            local_c8 = &LAB_147bbd9ea;
            local_d0 = FUN_1401cf6d7;
            local_d8 = L"Engine";
            local_e0 = 0;
            local_e8 = 0x10000000;
            local_f0 = 8;
            local_f8 = 0x330;
            local_a0 = lVar6;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e)
            ;
            lVar6 = local_a0;
          }
          if ((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) == DAT_14caec470 + 0x30)) {
            lVar8 = *(longlong *)(lVar8 + 0x110);
          }
          if (lVar8 != lVar6) {
            *(undefined8 *)(*local_98 + lVar5 * 8 + lVar7 * 8) = 0;
          }
        }
      }
LAB_140f2bb55:
      lVar7 = lVar7 + 1;
      iVar2 = (**(code **)(*plVar1 + 0x330))(plVar1);
      lVar3 = lVar3 + 0x28;
      param_2 = local_88;
    } while (lVar7 < iVar2);
  }
LAB_140f2bb7b:
  iVar2 = (**(code **)(*plVar1 + 0x330))(plVar1);
  iVar4 = iVar4 + iVar2;
  plVar9 = plVar9 + 1;
  if (plVar9 == local_80) goto LAB_140f2bbff;
  goto LAB_140f2ba51;
}



// FUNCTION 140f2bd4c FUN_140f2bd4c body=187 status=ok
// SIG undefined FUN_140f2bd4c(void)

void FUN_140f2bd4c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140f2bdef;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140f2bdef:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140f2be08 FUN_140f2be08 body=9572 status=ok
// SIG undefined FUN_140f2be08(void)

void FUN_140f2be08(longlong *param_1,byte param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  ushort uVar6;
  ushort uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  code *pcVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  code **ppcVar25;
  undefined8 uVar26;
  byte bVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong **pplVar31;
  longlong *plVar32;
  int iVar33;
  longlong lVar34;
  undefined2 *puVar35;
  code **ppcVar36;
  int iVar37;
  undefined8 *puVar38;
  int iVar39;
  ulonglong uVar40;
  longlong lVar41;
  ulonglong uVar42;
  bool bVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  longlong *plVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined4 local_240;
  undefined4 local_238;
  undefined8 local_230;
  wchar_t *local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  code **local_210;
  undefined1 *local_208;
  code *local_200;
  byte local_1f1;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  code *local_1c0;
  longlong *local_1b8;
  undefined1 local_1b0 [8];
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  undefined8 uStack_190;
  code *local_188;
  longlong *plStack_180;
  longlong *local_178;
  ulonglong uStack_170;
  longlong **local_168;
  int local_160;
  uint uStack_15c;
  undefined4 uStack_158;
  int iStack_154;
  undefined8 local_150;
  longlong lStack_148;
  int local_140;
  longlong *local_138;
  longlong local_128 [4];
  undefined8 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_14036294a(param_1,1,1);
  local_1c8 = param_1 + 0x2c3;
  FUN_143ce9b36(local_1c8,param_1);
  FUN_14150b006(param_1);
  if ((((param_2 == 0) && ((char)param_1[0x2c0] == '\x01')) && ((int)param_1[0xc5] != 0)) &&
     ((iVar14 = (**(code **)(*param_1 + 0x7b0))(param_1), iVar14 < (int)param_1[0xc5] &&
      (FUN_140ddbde4(param_1 + 0xc4,iVar14), (~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0)))) {
    bVar27 = *(byte *)((longlong)param_1 + 0x9d);
    if ((bVar27 & 1) != 0) {
      if ((param_1[0x16] != 0) || (lVar20 = FUN_1448abda6(param_1), lVar20 != 0))
      goto LAB_140f2bf56;
      bVar27 = *(byte *)((longlong)param_1 + 0x9d);
    }
    *(byte *)((longlong)param_1 + 0x9d) = bVar27 | 1;
    FUN_1401057d4(param_1);
    FUN_14010586c(&DAT_14cad0140,param_1);
  }
LAB_140f2bf56:
  local_1f1 = param_2;
  FUN_140831e24(param_1);
  FUN_14008fc84(param_1,&local_188);
  local_1e8 = param_1 + 0x2e9;
  FUN_1406c9372(local_1e8,(ulonglong)plStack_180 & 0xffffffff);
  local_1f0 = param_1;
  if ((longlong)(int)plStack_180 != 0) {
    local_1c0 = local_188 + (longlong)(int)plStack_180 * 8;
    local_1e0 = param_1 + 0x2eb;
    local_1d8 = param_1 + 0x2f0;
    iVar14 = 0;
    pcVar21 = local_188;
    do {
      plVar24 = local_1e0;
      plVar32 = *(longlong **)pcVar21;
      if (*(int *)((longlong)param_1 + 0x177c) == 0) {
        iVar39 = (int)param_1[0x2ea];
        *(int *)(param_1 + 0x2ea) = iVar39 + 1;
        if (*(int *)((longlong)param_1 + 0x1754) == iVar39) {
          FUN_14482b872(local_1e8,iVar39);
        }
        iVar33 = (int)param_1[0x2ee];
        if (iVar33 == 0) {
          iVar15 = -1;
        }
        else {
          iVar15 = iVar33 + 0x1e;
          if (-1 < iVar33 + -1) {
            iVar15 = iVar33 + -1;
          }
          iVar15 = iVar15 >> 5;
        }
        iVar28 = iVar33 + 1;
        iVar37 = iVar33 + 0x1f;
        if (-1 < iVar33) {
          iVar37 = iVar33;
        }
        if (iVar37 >> 5 == iVar15) {
          *(int *)(param_1 + 0x2ee) = iVar28;
        }
        else {
          if (*(int *)((longlong)param_1 + 0x1774) <= iVar33) {
            iVar15 = iVar33;
            if (iVar33 + 0x20U < 0xa0) {
              iVar28 = 0x80;
            }
            else {
              uVar16 = iVar33 + 0x20U >> 5;
              if (*(int *)((longlong)param_1 + 0x1774) + 0x1fU < 0xa0) {
                uVar17 = 4;
                if (4 < uVar16) {
                  uVar17 = uVar16;
                }
              }
              else {
                uVar17 = uVar16 + (uVar16 * 3 >> 3) + 0x10;
              }
              uVar29 = (ulonglong)(uVar17 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar18 = (uint)(uVar29 + 0xf);
                  if (uVar17 < 0x1ffd) {
                    uVar29 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar29 + 0xf >> 4]];
                  }
                  else {
                    uVar30 = (ulonglong)(uVar18 & 0xfffffff0);
                    param_1 = local_1f0;
                    if (uVar30 < 0x7ff1) {
                      bVar27 = (&DAT_14c841e00)[uVar18 >> 4];
                      uVar42 = 0x32;
                      if (0x32 < bVar27) {
                        uVar42 = (ulonglong)bVar27;
                      }
                      uVar40 = 0x32 - (ulonglong)bVar27;
                      do {
                        uVar29 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar40 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar40 & 0xffffffff] & 0xf) == 0) goto LAB_140f2c3ed;
                        lVar20 = uVar42 + 1 + uVar40;
                        uVar40 = uVar40 - 1;
                      } while (lVar20 != 0x33);
                    }
                    uVar29 = (ulonglong)DAT_14c841df8;
                    if (DAT_14c841df8 < 0x11) {
                      uVar29 = 0x10;
                    }
                    uVar29 = -uVar29 & (uVar30 + uVar29) - 1;
                  }
                }
                else {
                  uVar29 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar29,0);
                  iVar15 = (int)param_1[0x2ee];
                }
              }
LAB_140f2c3ed:
              iVar19 = (int)(uVar29 >> 2);
              iVar28 = iVar19 << 5;
              if (iVar19 < (int)uVar16) {
                iVar28 = -0x20;
              }
            }
            plVar24 = local_1e0;
            *(int *)((longlong)param_1 + 0x1774) = iVar28;
            FUN_1446efbd8(local_1e0,iVar15);
            iVar28 = (int)param_1[0x2ee] + 1;
          }
          iVar15 = iVar28 + 0x1f;
          if (-1 < iVar28) {
            iVar15 = iVar28;
          }
          *(int *)(param_1 + 0x2ee) = iVar28;
          if (iVar28 % 0x20 != 0) {
            plVar50 = (longlong *)param_1[0x2ed];
            if ((longlong *)param_1[0x2ed] == (longlong *)0x0) {
              plVar50 = plVar24;
            }
            bVar27 = -(char)(iVar28 % 0x20);
            *(uint *)((longlong)plVar50 + (longlong)(iVar15 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar50 + (longlong)(iVar15 >> 5) * 4) << (bVar27 & 0x1f)
                       ) >> (bVar27 & 0x1f);
          }
        }
        lVar20 = (longlong)iVar39;
        plVar50 = (longlong *)param_1[0x2ed];
        if ((longlong *)param_1[0x2ed] == (longlong *)0x0) {
          plVar50 = plVar24;
        }
        bVar27 = (byte)iVar33 & 0x1f;
        puVar1 = (uint *)((longlong)plVar50 + (longlong)(iVar37 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar27 | 0xfffffffeU >> 0x20 - bVar27);
      }
      else {
        iVar39 = (int)param_1[0x2ef];
        lVar20 = (longlong)iVar39;
        iVar33 = *(int *)(param_1[0x2e9] + 4 + lVar20 * 0x18);
        *(int *)(param_1 + 0x2ef) = iVar33;
        iVar15 = *(int *)((longlong)param_1 + 0x177c) + -1;
        *(int *)((longlong)param_1 + 0x177c) = iVar15;
        if (iVar15 != 0) {
          *(undefined4 *)(param_1[0x2e9] + (longlong)iVar33 * 0x18) = 0xffffffff;
        }
      }
      plVar50 = (longlong *)param_1[0x2ed];
      if ((longlong *)param_1[0x2ed] == (longlong *)0x0) {
        plVar50 = plVar24;
      }
      iVar33 = iVar39 + 0x1f;
      if (-1 < iVar39) {
        iVar33 = iVar39;
      }
      puVar1 = (uint *)((longlong)plVar50 + (longlong)(iVar33 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar39 & 0x1f);
      plVar24 = (longlong *)(param_1[0x2e9] + lVar20 * 0x18);
      *plVar24 = (longlong)plVar32;
      plVar50 = plVar32;
      if (plVar32 != (longlong *)0x0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(plVar32);
        plVar50 = (longlong *)*plVar24;
      }
      bVar27 = DAT_14c950c29;
      *(int *)(plVar24 + 1) = iVar14;
      *(undefined4 *)(plVar24 + 2) = 0xffffffff;
      if (((bVar27 & 1) != 0) && (plVar50 != (longlong *)0x0)) {
        FUN_1456cec3c(plVar50);
      }
      uVar16 = ((uint)((ulonglong)plVar50 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar50 >> 4)) *
               -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      uVar16 = uVar16 >> 0x10 ^ uVar16;
      iVar33 = (int)param_1[0x2ea];
      iVar15 = *(int *)((longlong)param_1 + 0x177c);
      iVar28 = iVar33;
      if (iVar33 - iVar15 != 1) {
        lVar20 = *plVar24;
        if ((DAT_14c950c29 == 1) && (lVar20 != 0)) {
          FUN_1456cec3c(lVar20);
          iVar33 = (int)param_1[0x2ea];
          iVar15 = *(int *)((longlong)param_1 + 0x177c);
        }
        iVar28 = iVar15;
        if (iVar33 != iVar15) {
          plVar50 = (longlong *)param_1[0x2f1];
          if ((longlong *)param_1[0x2f1] == (longlong *)0x0) {
            plVar50 = local_1d8;
          }
          iVar37 = *(int *)((longlong)plVar50 + (ulonglong)((int)param_1[0x2f2] - 1U & uVar16) * 4);
          plVar50 = local_1e8;
          iVar28 = iVar33;
          bVar27 = DAT_14c950c29;
          if (iVar37 != -1) {
            do {
              if (((bVar27 & 1) != 0) && (lVar20 != 0)) {
                FUN_1456cec3c(lVar20);
                plVar50 = local_1e8;
                bVar27 = DAT_14c950c29;
              }
              lVar34 = (longlong)iVar37;
              lVar22 = *(longlong *)(*plVar50 + lVar34 * 0x18);
              if (((bVar27 & 1) != 0) && (lVar22 != 0)) {
                local_1d0 = plVar32;
                FUN_1456cec3c(lVar22);
                plVar50 = local_1e8;
                plVar32 = local_1d0;
                bVar27 = DAT_14c950c29;
              }
              if (((bVar27 & 1) != 0) && (lVar20 != 0)) {
                local_1d0 = plVar32;
                FUN_1456cec3c(lVar20);
                plVar50 = local_1e8;
                plVar32 = local_1d0;
                bVar27 = DAT_14c950c29;
              }
              if (lVar22 == lVar20) {
                uVar44 = *(undefined4 *)((longlong)plVar24 + 4);
                lVar20 = plVar24[1];
                uVar45 = *(undefined4 *)((longlong)plVar24 + 0xc);
                puVar2 = (undefined4 *)(*plVar50 + lVar34 * 0x18);
                *puVar2 = (int)*plVar24;
                puVar2[1] = uVar44;
                puVar2[2] = (int)lVar20;
                puVar2[3] = uVar45;
                FUN_148813d18(plVar50,iVar39);
                param_1 = local_1f0;
                goto LAB_140f2c236;
              }
              iVar37 = *(int *)(*plVar50 + 0x10 + lVar34 * 0x18);
            } while (iVar37 != -1);
            iVar15 = *(int *)((longlong)local_1f0 + 0x177c);
            iVar28 = (int)local_1f0[0x2ea];
          }
        }
      }
      param_1 = local_1f0;
      uVar17 = iVar28 - iVar15;
      if (uVar17 < 4) {
        iVar33 = 1;
      }
      else {
        uVar29 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
        lVar20 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar33 = 1 << ((byte)lVar20 & 0x1f);
      }
      if (((int)uVar17 < 1) || (iVar33 <= (int)local_1f0[0x2f2])) {
        uVar16 = (int)local_1f0[0x2f2] - 1U & uVar16;
        *(uint *)((longlong)plVar24 + 0x14) = uVar16;
        plVar50 = (longlong *)local_1f0[0x2f1];
        if ((longlong *)local_1f0[0x2f1] == (longlong *)0x0) {
          plVar50 = local_1d8;
        }
        *(undefined4 *)(plVar24 + 2) =
             *(undefined4 *)
              ((longlong)plVar50 +
              ((longlong)(int)local_1f0[0x2f2] - 1U & (longlong)(int)uVar16) * 4);
        plVar24 = (longlong *)local_1f0[0x2f1];
        if ((longlong *)local_1f0[0x2f1] == (longlong *)0x0) {
          plVar24 = local_1d8;
        }
        *(int *)((longlong)plVar24 +
                ((longlong)(int)local_1f0[0x2f2] - 1U & (longlong)(int)uVar16) * 4) = iVar39;
      }
      else {
        *(int *)(local_1f0 + 0x2f2) = iVar33;
        FUN_1406c952e(local_1e8);
      }
LAB_140f2c236:
      lVar20 = (**(code **)(*plVar32 + 0x3b8))(plVar32);
      iVar14 = iVar14 + *(int *)(lVar20 + 8);
      pcVar21 = pcVar21 + 8;
    } while (pcVar21 != local_1c0);
  }
  if (local_188 != (code *)0x0) {
    FUN_1400020a8(local_188);
  }
  plVar32 = (longlong *)param_1[0xcb];
  if (plVar32 == (longlong *)0x0) {
    plVar32 = (longlong *)param_1[0xcc];
    if ((DAT_14c950c29 & plVar32 != (longlong *)0x0) != 0) goto LAB_140f2e293;
    if (plVar32 != (longlong *)0x0) goto LAB_140f2c61a;
LAB_140f2dcda:
    plVar32 = (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_140f2e293:
      FUN_1456cec3c(plVar32);
    }
LAB_140f2c61a:
    if (DAT_14cb06da8 == (code *)0x0) {
      local_188 = FUN_1449e2820;
      local_200 = FUN_14081d0ea;
      local_208 = &LAB_1464003b0;
      local_210 = &local_188;
      local_218 = &LAB_147d17bdf;
      local_220 = &LAB_1417edf22;
      local_228 = L"Engine";
      local_230 = 0;
      local_238 = 0x10000000;
      local_240 = 8;
      local_248 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(plVar32[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(code **)(*(longlong *)(plVar32[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8)
        != DAT_14cb06da8 + 0x30)) goto LAB_140f2dcda;
  }
  bVar12 = FUN_1405aecb8(param_1);
  pcVar21 = (code *)(**(code **)(*param_1 + 0xbf0))();
  bVar27 = (byte)pcVar21;
  if ((bVar12 == 0) && (plVar32 != (longlong *)0x0)) {
    ppcVar36 = &local_188;
    local_188 = (code *)0x0;
    plStack_180 = (longlong *)0x0;
    local_198 = (longlong *)plVar32[3];
    pcVar21 = (code *)FUN_1400348e2(&local_198,ppcVar36);
    uVar30 = 0;
    uVar29 = (ulonglong)(DAT_14cadbef0 - 1);
    if (DAT_14cadbef0 == 0) {
      uVar29 = uVar30;
    }
    if (0 < (int)uVar29) {
      puVar35 = &DAT_149dfb77a;
      if (DAT_14cadbef0 != 0) {
        puVar35 = DAT_14cadbee8;
      }
      pcVar21 = (code *)&DAT_149dfb77a;
      if ((int)plStack_180 != 0) {
        pcVar21 = local_188;
      }
      lVar20 = 0;
LAB_140f2c6ef:
      uVar6 = *(ushort *)(pcVar21 + lVar20);
      uVar7 = *(ushort *)((longlong)puVar35 + lVar20);
      ppcVar36 = (code **)(ulonglong)uVar7;
      if (uVar6 == uVar7) {
        iVar14 = 0;
        if ((uVar6 == 0) || (uVar29 == 1)) goto LAB_140f2c73e;
LAB_140f2c70a:
        uVar29 = uVar29 - 1;
        lVar20 = lVar20 + 2;
        goto LAB_140f2c6ef;
      }
      if ((uVar7 | uVar6) < 0x80) {
        if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[(uint)uVar7]) {
          iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar6] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar7];
          goto LAB_140f2c73e;
        }
        if (uVar29 == 1) {
          iVar14 = 0;
          goto LAB_140f2c73e;
        }
        goto LAB_140f2c70a;
      }
      iVar14 = (uint)uVar6 - (uint)uVar7;
LAB_140f2c73e:
      uVar30 = (ulonglong)(iVar14 == 0);
    }
    if (local_188 != (code *)0x0) {
      pcVar21 = (code *)FUN_1400020a8();
    }
    if (((char)uVar30 == '\0') || (*(char *)((longlong)param_1 + 0x17fc) != '\x01'))
    goto LAB_140f2c7d2;
    if ((bVar27 == 0) && (param_1[0x2c7] == 0)) {
      local_1e0 = (longlong *)0x0;
      FUN_1406547e8(param_1,0);
    }
    else {
      lVar22 = (**(code **)(*plVar32 + 0x3f8))(plVar32);
      lVar20 = param_1[0x2cc];
      if ((longlong)(int)lVar20 < 1) {
        plVar24 = (longlong *)param_1[0x2c6];
        if (lVar22 != 0 || plVar24 == (longlong *)0x0) goto LAB_140f2cc3e;
        local_188 = (code *)0x0;
        plStack_180 = (longlong *)0x0;
        LOCK();
        iVar14 = DAT_14cb80fb0 + 1;
        UNLOCK();
        iVar39 = DAT_14cb80fb0 + 1;
        DAT_14cb80fb0 = iVar14;
        if ((int)plVar24[8] != iVar39) {
          *(int *)(plVar24 + 8) = iVar39;
          (**(code **)(*plVar24 + 0x2b0))();
        }
        if ((longlong)(int)plStack_180 == 0) {
          bVar43 = true;
        }
        else {
          lVar20 = 0;
          do {
            ppcVar36 = *(code ***)(local_188 + lVar20);
            bVar43 = ppcVar36 == (code **)0x0;
            if (!bVar43) goto LAB_140f2e38e;
            lVar20 = lVar20 + 8;
          } while ((longlong)(int)plStack_180 * 8 != lVar20);
          ppcVar36 = (code **)0x0;
        }
LAB_140f2e38e:
        if (local_188 != (code *)0x0) {
          FUN_1400020a8();
        }
        param_1 = local_1f0;
        if (bVar43) goto LAB_140f2cc3e;
LAB_140f2cc6f:
        ppcVar25 = (code **)FUN_140f692f0(param_1);
        if (ppcVar36 == (code **)0x0) goto LAB_140f2ccbb;
LAB_140f2cc96:
        bVar27 = local_1f1;
        if (ppcVar25 != (code **)0x0) {
          lVar20 = (**(code **)(*ppcVar36 + 0x3f8))(ppcVar36);
          lVar22 = (**(code **)(*ppcVar25 + 0x3f8))(ppcVar25);
          if (lVar20 != lVar22) goto LAB_140f2ccbb;
        }
        local_1e0 = (longlong *)0x0;
      }
      else {
        lVar34 = param_1[0x2cb];
        lVar41 = 0;
        do {
          ppcVar36 = *(code ***)(lVar34 + lVar41);
          if ((ppcVar36 != (code **)0x0) &&
             ((lVar22 == 0 ||
              (lVar23 = (**(code **)(*ppcVar36 + 0x3f8))(ppcVar36), lVar23 == lVar22))))
          goto LAB_140f2cc86;
          lVar41 = lVar41 + 8;
        } while ((longlong)(int)lVar20 * 8 != lVar41);
LAB_140f2cc3e:
        ppcVar36 = (code **)param_1[0x2c7];
        if (ppcVar36 != (code **)0x0) {
          if (lVar22 == 0) {
LAB_140f2cc86:
            ppcVar25 = (code **)FUN_140f692f0(param_1);
            goto LAB_140f2cc96;
          }
          lVar20 = (**(code **)(*ppcVar36 + 0x3f8))(ppcVar36);
          if (lVar20 == lVar22) {
            ppcVar36 = (code **)param_1[0x2c7];
            goto LAB_140f2cc6f;
          }
        }
        ppcVar25 = (code **)FUN_140f692f0(param_1);
LAB_140f2ccbb:
        ppcVar36 = ppcVar25;
        uVar26 = (**(code **)(*ppcVar36 + 0x3f8))(ppcVar36);
        uVar26 = (**(code **)(*plVar32 + 0x400))(plVar32,uVar26);
        local_1e0 = (longlong *)CONCAT71((int7)((ulonglong)uVar26 >> 8),1);
        bVar27 = 1;
      }
      FUN_143ce7320(plVar32,ppcVar36);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1))
      {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32);
        }
        DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
        _Init_thread_footer(&DAT_14c8442bc);
        param_1 = local_1f0;
      }
      bVar12 = DAT_14c8442b8;
      if (DAT_14c872bf0 == '\x01') {
        if (DAT_14c872bf1 == '\x01') {
          bVar12 = DAT_14c8442b8 & 1;
          goto joined_r0x000140f2cd49;
        }
      }
      else {
joined_r0x000140f2cd49:
        if (bVar12 == 0) {
          FUN_1436b0f12(plVar32);
        }
      }
      bVar12 = FUN_1408326be(param_1);
      if ((byte)(bVar27 | bVar12 ^ 1) != 1) {
        *(byte *)((longlong)param_1 + 0xc71) = *(byte *)((longlong)param_1 + 0xc71) & 0xdf;
        FUN_144a2cb66(param_1,plVar32);
        goto LAB_140f2ca88;
      }
      FUN_14081653e(param_1,plVar32);
      FUN_144a2cb66(param_1,plVar32);
      lVar20 = (**(code **)(*plVar32 + 0x370))(plVar32);
      *(undefined4 *)(lVar20 + 8) = 0;
      if (*(int *)(lVar20 + 0xc) != 0) {
        FUN_14491ce3c(lVar20,0);
      }
      FUN_1436b10cc();
      if (((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0) ||
         (((((*(int *)((longlong)param_1 + 0x66c) != 0 &&
             (uVar16 = *(uint *)(param_1 + 0xcd), -1 < (int)uVar16)) &&
            ((int)uVar16 < DAT_14c9647dc)) &&
           (((lVar20 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar20 != 0
             && (*(int *)(lVar20 + 0x10) == *(int *)((longlong)param_1 + 0x66c))) &&
            ((*(uint *)(lVar20 + 8) & 0x10200000) == 0)))) ||
          (cVar13 = (**(code **)(*param_1 + 0xb50))(), cVar13 == '\0')))) goto LAB_140f2ca88;
LAB_140f2ca80:
      FUN_1406c4f64();
    }
LAB_140f2ca88:
    if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
      bVar27 = *(byte *)((longlong)param_1 + 0x9d);
      if ((bVar27 & 1) != 0) {
        if ((param_1[0x16] != 0) || (lVar20 = FUN_1448abda6(), param_1 = local_1f0, lVar20 != 0))
        goto LAB_140f2cae3;
        bVar27 = *(byte *)((longlong)local_1f0 + 0x9d);
      }
      *(byte *)((longlong)param_1 + 0x9d) = bVar27 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
    }
  }
  else {
LAB_140f2c7d2:
    if (((bVar27 == 0) && (param_1[0x2c7] == 0)) ||
       ((plVar32 != (longlong *)0x0 && (*(char *)((longlong)param_1 + 0x17fc) != '\x01')))) {
      local_1e0 = (longlong *)0x0;
    }
    else {
      if ((bVar27 == 0) && (param_1[0x2c7] == 0)) {
        uVar26 = CONCAT71((int7)((ulonglong)pcVar21 >> 8),1);
        plVar50 = (longlong *)0x0;
      }
      else {
        plVar24 = param_1;
        if (bVar12 != 0) {
          plVar24 = DAT_14c951640;
        }
        if (plVar24 == (longlong *)0x0) {
          plVar24 = (longlong *)0x0;
LAB_140f2c8c5:
          FUN_1405aea94(param_1,&local_198);
          plVar50 = local_198;
          if (local_198 == (longlong *)0x0) {
            FUN_14058b40c(plVar24,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                         );
          }
          if (DAT_14cb06da8 == (code *)0x0) {
            local_188 = FUN_1449e2820;
            local_200 = FUN_14081d0ea;
            local_208 = &LAB_1464003b0;
            local_210 = &local_188;
            local_218 = &LAB_147d17bdf;
            local_220 = &LAB_1417edf22;
            local_228 = L"Engine";
            local_230 = 0;
            local_238 = 0x10000000;
            local_240 = 8;
            local_248 = 0x588;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
          }
          local_188 = DAT_14cb06da8;
          local_138 = (longlong *)0x0;
          local_108 = 0;
          local_168 = (longlong **)((ulonglong)local_168 & 0xffffffffffff0000);
          local_150 = 0;
          lStack_148 = 0;
          local_178 = plVar50;
          uStack_170 = 0x800041;
          local_160 = 0;
          uStack_15c = 0;
          uStack_158 = 0;
          iStack_154 = 0;
          plStack_180 = plVar24;
          plVar50 = (longlong *)FUN_1402710dd(&local_188);
          if (lStack_148 != 0) {
            plVar24 = local_138;
            if (local_138 == (longlong *)0x0) {
              plVar24 = local_128;
            }
            (**(code **)(*plVar24 + 0x10))();
          }
          FUN_140cad38c(plVar50);
          plVar24 = (longlong *)FUN_140f692f0(param_1);
          if (plVar24 != (longlong *)0x0) {
            uVar26 = (**(code **)(*plVar24 + 0x3f8))(plVar24);
            (**(code **)(*plVar50 + 0x400))(plVar50,uVar26);
            FUN_143ce7320(plVar50,plVar24);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
            if (DAT_14c846b14 == '\0') {
              FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32);
            }
            DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
            _Init_thread_footer(&DAT_14c8442bc);
            param_1 = local_1f0;
          }
          bVar27 = DAT_14c8442b8;
          if (DAT_14c872bf0 == '\x01') {
            if (DAT_14c872bf1 == '\x01') {
              bVar27 = DAT_14c8442b8 & 1;
              goto joined_r0x000140f2c9d3;
            }
          }
          else {
joined_r0x000140f2c9d3:
            if (bVar27 == 0) {
              FUN_1436b0f12(plVar50);
            }
          }
          FUN_14081653e(param_1,plVar50);
          FUN_144a2cb66(param_1,plVar50);
          lVar20 = (**(code **)(*plVar50 + 0x370))(plVar50);
          *(undefined4 *)(lVar20 + 8) = 0;
          if (*(int *)(lVar20 + 0xc) != 0) {
            FUN_14491ce3c(lVar20,0);
          }
          uVar26 = FUN_1436b10cc(plVar50);
        }
        else {
          FUN_1405aea94(param_1,&local_198);
          plVar50 = local_198;
          if (DAT_14cb06da8 == (code *)0x0) {
            local_188 = FUN_1449e2820;
            local_200 = FUN_14081d0ea;
            local_208 = &LAB_1464003b0;
            local_210 = &local_188;
            local_218 = &LAB_147d17bdf;
            local_220 = &LAB_1417edf22;
            local_228 = L"Engine";
            local_230 = 0;
            local_238 = 0x10000000;
            local_240 = 8;
            local_248 = 0x588;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
          }
          local_240 = 0;
          local_248 = 0;
          plVar50 = (longlong *)FUN_1407cc3a2(DAT_14cb06da8,plVar24,plVar50,1);
          if (plVar50 == (longlong *)0x0) goto LAB_140f2c8c5;
          if (DAT_14cb06da8 == (code *)0x0) {
            local_188 = FUN_1449e2820;
            local_200 = FUN_14081d0ea;
            local_208 = &LAB_1464003b0;
            local_210 = &local_188;
            local_218 = &LAB_147d17bdf;
            local_220 = &LAB_1417edf22;
            local_228 = L"Engine";
            local_230 = 0;
            local_238 = 0x10000000;
            local_240 = 8;
            local_248 = 0x588;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
          }
          if ((*(int *)(plVar50[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
             (*(code **)(*(longlong *)(plVar50[2] + 0x30) +
                        (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
          goto LAB_140f2c8c5;
          if ((bVar27 & bVar12) != 1) {
            if (bVar12 == 0) {
              FUN_140644460(plVar50);
            }
            else {
              *(undefined1 *)((longlong)param_1 + 0x17fe) = 0;
            }
            *(uint *)((longlong)param_1 + 0x1804) = ~*(uint *)((longlong)param_1 + 0x1804) & 1;
            plVar24 = param_1;
            goto LAB_140f2c8c5;
          }
          uVar26 = FUN_144a2cb66(param_1,plVar50);
        }
        uVar26 = CONCAT71((int7)((ulonglong)uVar26 >> 8),1);
        if ((plVar32 != (longlong *)0x0) && (plVar50 != (longlong *)0x0)) {
          lVar20 = (**(code **)(*plVar32 + 0x3f8))(plVar32);
          lVar22 = (**(code **)(*plVar50 + 0x3f8))(plVar50);
          uVar26 = CONCAT71((int7)((ulonglong)lVar22 >> 8),lVar20 != lVar22);
        }
      }
      local_1e0 = (longlong *)uVar26;
      if ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) {
        FUN_1406547e8(param_1,plVar50);
        goto LAB_140f2ca80;
      }
      FUN_140c989ce(param_1,plVar50);
    }
  }
LAB_140f2cae3:
  *(undefined1 *)((longlong)param_1 + 0x17fc) = 0;
  if (*(char *)((longlong)param_1 + 0x17fd) == '\x01') {
    FUN_14036083c();
    *(undefined1 *)((longlong)param_1 + 0x17fd) = 0;
  }
  lVar20 = param_1[0xcb];
  if (lVar20 == 0) {
    lVar20 = param_1[0xcc];
    if ((DAT_14c950c29 & lVar20 != 0) != 0) goto LAB_140f2e2a0;
    if (lVar20 != 0) goto LAB_140f2cb1f;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_140f2e2a0:
      FUN_1456cec3c(lVar20);
    }
LAB_140f2cb1f:
    if (DAT_14cb06da8 == (code *)0x0) {
      local_188 = FUN_1449e2820;
      local_200 = FUN_14081d0ea;
      local_208 = &LAB_1464003b0;
      local_210 = &local_188;
      local_218 = &LAB_147d17bdf;
      local_220 = &LAB_1417edf22;
      local_228 = L"Engine";
      local_230 = 0;
      local_238 = 0x10000000;
      local_240 = 8;
      local_248 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
       (*(code **)(*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
                  (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
      local_188 = (code *)0x0;
      plStack_180 = (longlong *)0x0;
      local_198 = *(longlong **)(lVar20 + 0x18);
      FUN_1400348e2();
      uVar30 = 0;
      uVar29 = (ulonglong)(DAT_14cadbef0 - 1);
      if (DAT_14cadbef0 == 0) {
        uVar29 = uVar30;
      }
      if (0 < (int)uVar29) {
        puVar35 = &DAT_149dfb77a;
        if (DAT_14cadbef0 != 0) {
          puVar35 = DAT_14cadbee8;
        }
        pcVar21 = (code *)&DAT_149dfb77a;
        if ((int)plStack_180 != 0) {
          pcVar21 = local_188;
        }
        lVar22 = 0;
LAB_140f2cbc8:
        uVar6 = *(ushort *)(pcVar21 + lVar22);
        uVar7 = *(ushort *)((longlong)puVar35 + lVar22);
        if (uVar6 == uVar7) {
          iVar14 = 0;
          if ((uVar6 == 0) || (uVar29 == 1)) goto LAB_140f2ce82;
LAB_140f2cbeb:
          uVar29 = uVar29 - 1;
          lVar22 = lVar22 + 2;
          goto LAB_140f2cbc8;
        }
        if ((uVar7 | uVar6) < 0x80) {
          if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[(uint)uVar7]) {
            iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar6] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar7]
            ;
            goto LAB_140f2ce82;
          }
          if (uVar29 == 1) {
            iVar14 = 0;
            goto LAB_140f2ce82;
          }
          goto LAB_140f2cbeb;
        }
        iVar14 = (uint)uVar6 - (uint)uVar7;
LAB_140f2ce82:
        uVar30 = (ulonglong)(iVar14 == 0);
      }
      if (local_188 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (((char)uVar30 != '\0') && (cVar13 = (**(code **)(*param_1 + 0xbf0))(), cVar13 != '\0')) {
        if ((longlong)(int)param_1[0x2cc] == 0) {
          plVar32 = (longlong *)0x0;
          dVar52 = 0.0;
          dVar48 = 0.0;
          dVar49 = 0.0;
          dVar10 = 0.0;
          dVar9 = 0.0;
          dVar8 = 0.0;
        }
        else {
          lVar22 = 0;
          uVar44 = 0;
          uVar45 = 0;
          dVar48 = 0.0;
          dVar49 = 0.0;
          uVar54 = 0;
          uVar55 = 0;
          dVar53 = 0.0;
          dVar11 = 0.0;
          plVar32 = (longlong *)0x0;
          do {
            local_1d8 = plVar32;
            lVar34 = *(longlong *)(param_1[0x2cb] + lVar22);
            dVar4 = *(double *)(lVar34 + 0xf8);
            local_1e8 = *(longlong **)(lVar34 + 0x100);
            dVar5 = *(double *)(lVar34 + 0x108);
            dVar46 = (double)CONCAT44(uVar55,uVar54) - dVar49;
            dVar49 = dVar49 + (double)CONCAT44(uVar55,uVar54);
            dVar47 = dVar11 - dVar48;
            dVar48 = dVar48 + dVar11;
            dVar51 = dVar53 - (double)CONCAT44(uVar45,uVar44);
            dVar52 = (double)CONCAT44(uVar45,uVar44) + dVar53;
            dVar8 = dVar46;
            if (dVar49 <= dVar46) {
              dVar8 = dVar49;
            }
            if (dVar46 <= dVar49) {
              dVar46 = dVar49;
            }
            dVar9 = dVar47;
            if (dVar48 <= dVar47) {
              dVar9 = dVar48;
            }
            if (dVar47 <= dVar48) {
              dVar47 = dVar48;
            }
            dVar10 = dVar51;
            if (dVar52 <= dVar51) {
              dVar10 = dVar52;
            }
            if (dVar51 <= dVar52) {
              dVar51 = dVar52;
            }
            dVar49 = dVar4 - *(double *)(lVar34 + 0x110);
            if (dVar49 <= dVar8) {
              dVar8 = dVar49;
            }
            if (dVar46 <= dVar49) {
              dVar46 = dVar49;
            }
            dVar49 = (double)local_1e8 - *(double *)(lVar34 + 0x118);
            if (dVar49 <= dVar9) {
              dVar9 = dVar49;
            }
            if (dVar47 <= dVar49) {
              dVar47 = dVar49;
            }
            dVar49 = dVar5 - *(double *)(lVar34 + 0x120);
            if (dVar49 <= dVar10) {
              dVar10 = dVar49;
            }
            if (dVar51 <= dVar49) {
              dVar51 = dVar49;
            }
            dVar49 = *(double *)(lVar34 + 0x110) + dVar4;
            if (dVar49 <= dVar8) {
              dVar8 = dVar49;
            }
            if (dVar46 <= dVar49) {
              dVar46 = dVar49;
            }
            dVar49 = *(double *)(lVar34 + 0x120) + dVar5;
            dVar48 = *(double *)(lVar34 + 0x118) + (double)local_1e8;
            if (dVar48 <= dVar9) {
              dVar9 = dVar48;
            }
            if (dVar49 <= dVar10) {
              dVar10 = dVar49;
            }
            if (dVar47 <= dVar48) {
              dVar47 = dVar48;
            }
            if (dVar51 <= dVar49) {
              dVar51 = dVar49;
            }
            dVar52 = (dVar51 - dVar10) * 0.5;
            dVar48 = (dVar47 - dVar9) * 0.5;
            dVar49 = (dVar46 - dVar8) * 0.5;
            dVar10 = dVar10 + dVar52;
            dVar9 = dVar9 + dVar48;
            dVar8 = dVar8 + dVar49;
            plVar32 = (longlong *)SQRT(dVar52 * dVar52 + dVar49 * dVar49 + dVar48 * dVar48);
            plVar24 = (longlong *)
                      (SQRT((dVar5 - dVar10) * (dVar5 - dVar10) +
                            (dVar4 - dVar8) * (dVar4 - dVar8) +
                            ((double)local_1e8 - dVar9) * ((double)local_1e8 - dVar9)) +
                      *(double *)(lVar34 + 0x128));
            dVar4 = (double)CONCAT44(uVar55,uVar54) - dVar8;
            plVar50 = (longlong *)
                      (SQRT((dVar53 - dVar10) * (dVar53 - dVar10) +
                            dVar4 * dVar4 + (dVar11 - dVar9) * (dVar11 - dVar9)) + (double)local_1d8
                      );
            if ((double)plVar50 <= (double)plVar24) {
              plVar50 = plVar24;
            }
            if ((double)plVar50 <= (double)plVar32) {
              plVar32 = plVar50;
            }
            lVar22 = lVar22 + 8;
            uVar44 = SUB84(dVar52,0);
            uVar45 = (undefined4)((ulonglong)dVar52 >> 0x20);
            uVar54 = SUB84(dVar8,0);
            uVar55 = (undefined4)((ulonglong)dVar8 >> 0x20);
            dVar53 = dVar10;
            dVar11 = dVar9;
          } while ((longlong)(int)param_1[0x2cc] * 8 != lVar22);
        }
        *(double *)(lVar20 + 0xf8) = dVar8;
        *(double *)(lVar20 + 0x100) = dVar9;
        *(double *)(lVar20 + 0x108) = dVar10;
        *(double *)(lVar20 + 0x110) = dVar49;
        *(double *)(lVar20 + 0x118) = dVar48;
        *(double *)(lVar20 + 0x120) = dVar52;
        *(longlong **)(lVar20 + 0x128) = plVar32;
        FUN_140aeee12();
      }
    }
  }
  local_198 = (longlong *)0x0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uVar29 = param_1[0x108];
  if (uVar29 == 0) {
    if ((longlong)(int)param_1[0x2cc] != 0) {
      puVar38 = (undefined8 *)param_1[0x2cb];
      puVar3 = puVar38 + (int)param_1[0x2cc];
      do {
        lVar20 = (**(code **)(*(longlong *)*puVar38 + 0x3a8))();
        uVar29 = uStack_190;
        if (lVar20 != 0) {
          lVar22 = (longlong)(int)(uint)uStack_190;
          if (lVar22 != 0) {
            uVar30 = 0;
            do {
              if (*(longlong *)((longlong)local_198 + uVar30) == lVar20) {
                if ((~uVar30 & 0x7fffffff8) != 0) goto LAB_140f2d23e;
                break;
              }
              uVar30 = uVar30 + 8;
            } while (lVar22 * 8 - uVar30 != 0);
          }
          uVar16 = (uint)uStack_190 + 1;
          uStack_190 = CONCAT44(uStack_190._4_4_,uVar16);
          if (uStack_190._4_4_ < uVar16) {
            FUN_141876832(&local_198,uVar29 & 0xffffffff);
          }
          local_198[lVar22] = lVar20;
        }
LAB_140f2d23e:
        puVar38 = puVar38 + 1;
      } while (puVar38 != puVar3);
    }
    lVar20 = param_1[0x2de];
    if ((longlong)(int)lVar20 != 0) {
      lVar22 = param_1[0x2dd];
      lVar34 = 0;
      do {
        if (((*(code **)(lVar22 + lVar34) != (code *)0x0) &&
            (local_188 = *(code **)(lVar22 + lVar34), uVar16 = FUN_148813bf2(&local_198,&local_188),
            *(longlong *)(lVar22 + 8 + lVar34) != 0)) &&
           (((int)uStack_1a0 <= (int)uVar16 || (int)uVar16 < 0 ||
            (*(longlong *)(local_1a8 + (ulonglong)uVar16 * 8) == 0)))) {
          iVar14 = (int)uStack_1a0;
          if ((int)uStack_1a0 < (int)(uVar16 + 1)) {
            iVar14 = uVar16 + 1;
          }
          FUN_1406089a0(&local_1a8,iVar14);
          *(undefined8 *)(local_1a8 + (longlong)(int)uVar16 * 8) =
               *(undefined8 *)(lVar22 + 8 + lVar34);
        }
        lVar34 = lVar34 + 0x10;
      } while ((longlong)(int)lVar20 * 0x10 != lVar34);
    }
    if ((longlong)(int)(uint)uStack_190 == 0) {
      bVar43 = false;
      uVar16 = 0;
    }
    else {
      lVar20 = 0;
      uVar29 = 0;
      do {
        uVar16 = ((uint)((ulonglong)local_198[lVar20] >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_198[lVar20] >> 4)) * -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        uVar16 = (uVar16 >> 0x10 ^ uVar16) + (int)(uVar29 >> 2) + (uint)uVar29 * 0x40 + 0x9e3779b9 ^
                 (uint)uVar29;
        uVar29 = (ulonglong)uVar16;
        lVar20 = lVar20 + 1;
      } while ((int)(uint)uStack_190 != lVar20);
      bVar43 = 0 < (int)(uint)uStack_190;
    }
  }
  else {
    uVar16 = ((uint)(uVar29 >> 0x14) & 0xffff ^ (uint)(uVar29 >> 4)) * -0x7a143595;
    uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
    uVar16 = uVar16 >> 0x10 ^ uVar16;
    param_1[0x2d0] = 0;
    bVar43 = false;
  }
  if (uVar16 != *(uint *)((longlong)param_1 + 0x17f4)) {
    *(uint *)((longlong)param_1 + 0x17f4) = uVar16;
    if (bVar43) {
      FUN_140c89340(local_1b0);
      if ((longlong)(int)(uint)uStack_190 == 1) {
        lVar20 = *local_198;
        if ((lVar20 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar20);
        }
        param_1[0x2d0] = lVar20;
      }
      else {
        lVar20 = param_1[0x2d0];
        if ((lVar20 == 0) || ((*(uint *)(lVar20 + 8) & 0x40) == 0)) {
LAB_140f2d403:
          uVar16 = *(uint *)(param_1 + 1);
          FUN_1446f470e(&local_1b8,L"GestaltPhysicsAsset",1);
          pcVar21 = (code *)FUN_140654dc2();
          if (local_1b8 == (longlong *)0x0) {
            FUN_14058b40c(param_1,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                         );
          }
          local_138 = (longlong *)0x0;
          local_108 = 0;
          local_168 = (longlong **)((ulonglong)local_168 & 0xffffffffffff0000);
          local_178 = local_1b8;
          uStack_170 = (ulonglong)uVar16 & 0xffffffff00000040;
          local_160 = 0;
          uStack_15c = 0;
          uStack_158 = 0;
          iStack_154 = 0;
          local_150 = 0;
          lStack_148 = 0;
          local_188 = pcVar21;
          plStack_180 = param_1;
          lVar20 = FUN_1402710dd(&local_188);
          if (lStack_148 != 0) {
            plVar32 = local_138;
            if (local_138 == (longlong *)0x0) {
              plVar32 = local_128;
            }
            (**(code **)(*plVar32 + 0x10))();
          }
          if ((lVar20 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar20);
          }
          param_1[0x2d0] = lVar20;
LAB_140f2d4a5:
          if (lVar20 == 0) goto LAB_140f2d4d9;
        }
        else if ((uint)uStack_190 != 0) {
          lVar22 = 0;
          do {
            if (lVar20 == *(longlong *)((longlong)local_198 + lVar22)) goto LAB_140f2d403;
            lVar22 = lVar22 + 8;
          } while ((longlong)(int)(uint)uStack_190 * 8 != lVar22);
          goto LAB_140f2d4a5;
        }
        FUN_14058b086(lVar20,&local_198,&local_1a8);
        uVar26 = FUN_140418574(param_1);
        FUN_142b4e962(param_1[0x2d0],uVar26);
      }
LAB_140f2d4d9:
      FUN_140c8931a(local_1b0);
    }
    if ((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) {
      FUN_1406cc378(param_1);
    }
    FUN_1406c97fc(param_1);
  }
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_198 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar20 = param_1[0xcb];
  if (lVar20 == 0) {
    lVar20 = param_1[0xcc];
    if ((DAT_14c950c29 & lVar20 != 0) != 0) goto LAB_140f2e2ad;
    if (lVar20 == 0) goto LAB_140f2d8f9;
  }
  else if (DAT_14c950c29 == 1) {
LAB_140f2e2ad:
    FUN_1456cec3c(lVar20);
  }
  if (DAT_14cb06da8 == (code *)0x0) {
    local_188 = FUN_1449e2820;
    local_200 = FUN_14081d0ea;
    local_208 = &LAB_1464003b0;
    local_210 = &local_188;
    local_218 = &LAB_147d17bdf;
    local_220 = &LAB_1417edf22;
    local_228 = L"Engine";
    local_230 = 0;
    local_238 = 0x10000000;
    local_240 = 8;
    local_248 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
     (*(code **)(*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
                (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
    local_188 = (code *)0x0;
    plStack_180 = (longlong *)0x0;
    local_198 = *(longlong **)(lVar20 + 0x18);
    FUN_1400348e2(&local_198,&local_188);
    uVar30 = 0;
    uVar29 = (ulonglong)(DAT_14cadbef0 - 1);
    if (DAT_14cadbef0 == 0) {
      uVar29 = uVar30;
    }
    if (0 < (int)uVar29) {
      puVar35 = &DAT_149dfb77a;
      if (DAT_14cadbef0 != 0) {
        puVar35 = DAT_14cadbee8;
      }
      pcVar21 = (code *)&DAT_149dfb77a;
      if ((int)plStack_180 != 0) {
        pcVar21 = local_188;
      }
      lVar22 = 0;
LAB_140f2d5e9:
      uVar6 = *(ushort *)(pcVar21 + lVar22);
      uVar7 = *(ushort *)((longlong)puVar35 + lVar22);
      if (uVar6 == uVar7) {
        iVar14 = 0;
        if ((uVar6 == 0) || (uVar29 == 1)) goto LAB_140f2d684;
LAB_140f2d608:
        uVar29 = uVar29 - 1;
        lVar22 = lVar22 + 2;
        goto LAB_140f2d5e9;
      }
      if ((uVar7 | uVar6) < 0x80) {
        if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[(uint)uVar7]) {
          iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar6] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar7];
          goto LAB_140f2d684;
        }
        if (uVar29 == 1) {
          iVar14 = 0;
          goto LAB_140f2d684;
        }
        goto LAB_140f2d608;
      }
      iVar14 = (uint)uVar6 - (uint)uVar7;
LAB_140f2d684:
      uVar30 = (ulonglong)(iVar14 == 0);
    }
    if (local_188 != (code *)0x0) {
      FUN_1400020a8();
    }
    if ((char)uVar30 != '\0') {
      cVar13 = (**(code **)(*param_1 + 0xbf0))(param_1);
      if (cVar13 == '\0') {
        *(undefined4 *)(lVar20 + 0x4e8) = 0;
        if (*(int *)(lVar20 + 0x4ec) != 0) {
          FUN_146401f4e(lVar20 + 0x4e0,0);
        }
        FUN_1405a7cce(lVar20);
      }
      else {
        local_168 = (longlong **)0x0;
        local_160 = 0;
        local_188 = (code *)0x0;
        plStack_180 = (longlong *)0x0;
        uStack_15c = 0x80;
        uStack_158 = 0xffffffff;
        iStack_154 = 0;
        lStack_148 = 0;
        local_140 = 0;
        plStack_180._0_4_ = 0;
        if ((longlong)(int)param_1[0x2cc] != 0) {
          plVar24 = (longlong *)param_1[0x2cb];
          plVar32 = plVar24 + (int)param_1[0x2cc];
          do {
            iVar14 = *(int *)(*plVar24 + 0x4e8);
            uVar29 = ((longlong)(int)plStack_180 - (longlong)iStack_154) + (longlong)iVar14;
            uVar16 = (uint)uVar29;
            if ((uint)((longlong)(int)plStack_180 - (longlong)iStack_154) < uVar16) {
              if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456acd4b(uVar29);
              }
              FUN_146549182(&local_188,uVar29 & 0xffffffff);
              iVar39 = 1;
              if (3 < uVar16) {
                uVar16 = (uVar16 | 1) + 0xe;
                iVar39 = 0x1f;
                if (uVar16 != 0) {
                  for (; uVar16 >> iVar39 == 0; iVar39 = iVar39 + -1) {
                  }
                }
                iVar39 = 1 << ((byte)iVar39 & 0x1f);
              }
              if ((local_140 == 0) || (local_140 < iVar39)) {
                local_140 = iVar39;
                FUN_14654932e(&local_188);
              }
            }
            if (iVar14 != 0) {
              lVar22 = (longlong)iVar14 << 3;
              do {
                FUN_14589f5ea(&local_188,&local_198);
                lVar22 = lVar22 + -8;
              } while (lVar22 != 0);
            }
            plVar24 = plVar24 + 1;
          } while (plVar24 != plVar32);
        }
        iVar14 = (int)plStack_180 - iStack_154;
        if (iVar14 < 0) {
LAB_140f2dcb1:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar14);
        }
        plVar32 = (longlong *)(lVar20 + 0x4e0);
        *(undefined4 *)(lVar20 + 0x4e8) = 0;
        iVar39 = (int)plStack_180;
        if (*(int *)(lVar20 + 0x4ec) < iVar14) {
          FUN_146401f4e(plVar32);
          iVar14 = (int)plStack_180 - iStack_154;
          local_198 = (longlong *)0x0;
          uStack_190 = 0;
          iVar39 = (int)plStack_180;
          if (iVar14 < 0) goto LAB_140f2dcb1;
        }
        uStack_190 = 0;
        local_198 = (longlong *)0x0;
        if (iVar39 != iStack_154) {
          FUN_146549516(&local_198);
        }
        if (local_160 == 0) {
          uVar29 = 0;
          uVar42 = 1;
          iVar14 = 0;
          iVar39 = 0;
        }
        else {
          pplVar31 = local_168;
          if (local_168 == (longlong **)0x0) {
            pplVar31 = &local_178;
          }
          uVar16 = *(uint *)pplVar31;
          if (uVar16 == 0) {
            iVar14 = local_160 + 0x1e;
            if (-1 < local_160 + -1) {
              iVar14 = local_160 + -1;
            }
            uVar29 = 0;
            uVar30 = (ulonglong)(uint)(iVar14 >> 5);
            if (iVar14 >> 5 < 1) {
              uVar30 = uVar29;
            }
            iVar14 = 0;
            do {
              if (uVar30 == uVar29) goto LAB_140f2d84a;
              iVar14 = iVar14 + 0x20;
              uVar16 = *(uint *)((longlong)pplVar31 + (uVar29 + 1) * 4);
              uVar29 = uVar29 + 1;
            } while (uVar16 == 0);
          }
          else {
            uVar29 = 0;
            iVar14 = 0;
          }
          uVar42 = (ulonglong)(-uVar16 & uVar16);
          uVar30 = uVar42 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar39 = (iVar14 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if (local_160 <= iVar39) {
            iVar39 = local_160;
          }
        }
        if (iVar39 < local_160) {
          uVar16 = 0xffffffff;
          do {
            uVar30 = uStack_190;
            pcVar21 = local_188 + (longlong)iVar39 * 0x10;
            lVar22 = (longlong)(int)(uint)uStack_190;
            uVar17 = (uint)uStack_190 + 1;
            uStack_190 = CONCAT44(uStack_190._4_4_,uVar17);
            if (uStack_190._4_4_ < uVar17) {
              local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,uVar16);
              FUN_14043e5f8(&local_198,uVar30 & 0xffffffff);
              uVar16 = (uint)local_1d8;
            }
            local_198[lVar22] = *(longlong *)pcVar21;
            uVar16 = uVar16 & ~(uint)uVar42;
            pplVar31 = local_168;
            if (local_168 == (longlong **)0x0) {
              pplVar31 = &local_178;
            }
            iVar39 = (int)uVar29;
            lVar22 = (longlong)iVar39;
            uVar17 = *(uint *)((longlong)pplVar31 + lVar22 * 4) & uVar16;
            if (uVar17 == 0) {
              iVar33 = local_160 + 0x1e;
              if (-1 < local_160 + -1) {
                iVar33 = local_160 + -1;
              }
              iVar15 = iVar33 >> 5;
              if (iVar33 >> 5 < iVar39) {
                iVar15 = iVar39;
              }
              lVar34 = 0;
              do {
                if (iVar15 - lVar22 == lVar34) goto LAB_140f2d84a;
                iVar14 = iVar14 + 0x20;
                uVar17 = *(uint *)((longlong)pplVar31 + (lVar22 + lVar34 + 1) * 4);
                lVar34 = lVar34 + 1;
              } while (uVar17 == 0);
              uVar29 = (ulonglong)(uint)(iVar39 + (int)lVar34);
              uVar16 = 0xffffffff;
            }
            uVar42 = (ulonglong)(-uVar17 & uVar17);
            uVar30 = uVar42 * 2 + 1;
            lVar22 = 0x3f;
            if (uVar30 != 0) {
              for (; uVar30 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            iVar39 = (iVar14 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          } while (iVar39 < local_160);
        }
LAB_140f2d84a:
        uVar29 = uStack_190;
        param_1 = local_1f0;
        if ((uint)uStack_190 != 0) {
          iVar14 = *(int *)(lVar20 + 0x4e8);
          *(uint *)(lVar20 + 0x4e8) = iVar14 + (uint)uStack_190;
          if ((uint)(*(int *)(lVar20 + 0x4ec) - iVar14) < (uint)uStack_190) {
            FUN_147d2deb6(plVar32,iVar14);
          }
          FUN_148813ccc((longlong)iVar14 * 8 + *plVar32,local_198,uVar29 & 0xffffffff);
          uStack_190 = uStack_190 & 0xffffffff00000000;
        }
        if (local_198 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        FUN_1405a7cce(lVar20);
        local_140 = 0;
        if (lStack_148 != 0) {
          FUN_1400020a8();
        }
        uVar29 = (ulonglong)plStack_180 >> 0x20;
        plStack_180 = (longlong *)((ulonglong)plStack_180 & 0xffffffff00000000);
        if ((int)uVar29 != 0) {
          FUN_14474875a(&local_188,0);
        }
        uStack_158 = 0xffffffff;
        iStack_154 = 0;
        local_160 = 0;
        if (0x80 < uStack_15c) {
          uStack_15c = 0x80;
          FUN_1446efbd8(&local_178,0);
        }
        if (local_168 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        if (local_188 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_140f2d8f9:
  FUN_143ce9b36(local_1c8,param_1,0);
  (**(code **)(*param_1 + 0x310))(param_1);
  if (((char)local_1e0 != '\0') && ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0)) {
    FUN_14072bb4a(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_268);
  }
  if ((local_f0 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f2e3e6 FUN_140f2e3e6 body=127 status=ok
// SIG undefined FUN_140f2e3e6(void)

void FUN_140f2e3e6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140656b66();
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = FUN_140f2e466();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(longlong **)(param_1 + 0x1a50) = param_2;
      *(longlong *)(param_1 + 0x1674) = param_2[0x69];
      goto LAB_140f2e44f;
    }
  }
  *(undefined8 *)(param_1 + 0x1a50) = 0;
LAB_140f2e44f:
  FUN_140f2e4a0(param_1 + -0x400);
  return;
}



// FUNCTION 140f2e466 FUN_140f2e466 body=57 status=ok
// SIG undefined FUN_140f2e466(void)

void FUN_140f2e466(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55d18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55d18 = FUN_140002ddd(FUN_1464b563c,uVar1,L"ClimbableDef");
  }
  return;
}



// FUNCTION 140f2e4a0 FUN_140f2e4a0 body=241 status=ok
// SIG undefined FUN_140f2e4a0(void)

void FUN_140f2e4a0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    plVar1 = (longlong *)(param_1 + 0x398);
    plVar2 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x398) + 0x18))(plVar1);
    if ((DAT_14cb75ec0 != 0) && ((longlong)(int)plVar2[1] != 0)) {
      uVar3 = 0;
      do {
        if (*(longlong *)(*plVar2 + 0x68 + uVar3) == DAT_14cb75ec0) {
          if ((int)(uVar3 >> 3) * -0xf0f0f0f != -1) {
            uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
            local_30 = DAT_14cb75ec0;
            local_28 = 0xffffffff;
            FUN_140c823b2(uVar4,local_24);
            if ((local_1c != -1) && (*(char *)(param_1 + 0x1c21) != (char)local_1c)) {
              *(char *)(param_1 + 0x1c21) = (char)local_1c;
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
            }
          }
          break;
        }
        uVar3 = uVar3 + 0x88;
      } while ((longlong)(int)plVar2[1] * 0x88 != uVar3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f2e5a8 FUN_140f2e5a8 body=190 status=ok
// SIG undefined FUN_140f2e5a8(void)

undefined8 * FUN_140f2e5a8(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_14076ffa2();
  *param_1 = &PTR_FUN_14b2bd500;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xf00000d000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x1ffffffff;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x14] = DAT_14cb8ce08;
  *param_1 = &PTR_FUN_14b2bde30;
  param_1[6] = &PTR_LAB_14b2be120;
  lVar1 = 0xd8;
  do {
    FUN_1406d2124((longlong)param_1 + lVar1);
    lVar1 = lVar1 + 0x150;
  } while (lVar1 != 0x618);
  *(undefined1 *)(param_1 + 0xc3) = 1;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  return param_1;
}



// FUNCTION 140f2e676 FUN_140f2e676 body=292 status=ok
// SIG undefined FUN_140f2e676(void)

void FUN_140f2e676(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,1);
  if (0 < (int)param_1[0xf]) {
    FUN_1457c92fe(param_1 + 0x10,param_1 + 0xe);
  }
  plVar2 = (longlong *)FUN_140f2e83e();
  local_30 = plVar2[0x22];
  if (local_30 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    local_30 = plVar2[0x22];
  }
  local_38 = param_1;
  if ((longlong)(int)param_1[0x11] != 0) {
    lVar3 = param_1[0x10];
    lVar4 = (longlong)(int)param_1[0x11] * 0x90;
    do {
      FUN_140f2e79c(&local_38,lVar3);
      lVar3 = lVar3 + 0x90;
      lVar4 = lVar4 + -0x90;
    } while (lVar4 != 0);
  }
  if ((longlong)(int)param_1[0x13] != 0) {
    lVar3 = param_1[0x12];
    lVar4 = (longlong)(int)param_1[0x13] * 0x90;
    do {
      FUN_140f2e79c(&local_38,lVar3);
      lVar3 = lVar3 + 0x90;
      lVar4 = lVar4 + -0x90;
    } while (lVar4 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f2e79c FUN_140f2e79c body=162 status=ok
// SIG undefined FUN_140f2e79c(void)

void FUN_140f2e79c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (*(char *)(param_2 + 0x78) == '\x01') {
    if ((((*(int *)(param_2 + 0x68) == DAT_14cb5476c) && (*(int *)(param_2 + 0x6c) == DAT_14cb54770)
         ) && (*(int *)(param_2 + 0x70) == (int)DAT_14cb54774)) &&
       (*(int *)(param_2 + 0x74) == DAT_14cb54774._4_4_)) {
      return;
    }
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x80);
    if (lVar4 != 0) {
      puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x78);
      lVar4 = lVar4 * 0x18;
      do {
        if (((*(int *)(puVar3 + 1) == *(int *)(param_2 + 0x68)) &&
            (*(int *)((longlong)puVar3 + 0xc) == *(int *)(param_2 + 0x6c))) &&
           ((*(int *)(puVar3 + 2) == *(int *)(param_2 + 0x70) &&
            (*(int *)((longlong)puVar3 + 0x14) == *(int *)(param_2 + 0x74))))) goto LAB_140f2e81d;
        puVar3 = puVar3 + 3;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
    }
    puVar3 = (undefined8 *)0x0;
LAB_140f2e81d:
    puVar2 = (undefined8 *)&DAT_14cb54764;
    if (puVar3 != (undefined8 *)0x0) {
      puVar2 = puVar3;
    }
  }
  else {
    puVar2 = (undefined8 *)&DAT_14cb54764;
  }
  *(undefined8 *)(param_2 + 0x70) = puVar2[2];
  uVar1 = puVar2[1];
  *(undefined8 *)(param_2 + 0x60) = *puVar2;
  *(undefined8 *)(param_2 + 0x68) = uVar1;
  return;
}



// FUNCTION 140f2e83e FUN_140f2e83e body=228 status=ok
// SIG undefined FUN_140f2e83e(void)

longlong FUN_140f2e83e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb53f08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_1485fd84d;
    local_40 = FUN_1464ac144;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/GbxTimeOfDay",L"TimeOfDayProjectSettings",&DAT_14cb53f08,&DAT_1485fd84c)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb53f08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f2e932 FUN_140f2e932 body=36 status=ok
// SIG undefined FUN_140f2e932(void)

undefined8 FUN_140f2e932(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140f2e956 FUN_140f2e956 body=697 status=ok
// SIG undefined FUN_140f2e956(void)

void FUN_140f2e956(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  void *param_5,undefined1 *param_6,undefined1 *param_7,undefined1 *param_8)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 *local_120;
  void *local_118;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [48];
  longlong local_b8;
  undefined8 local_b0;
  byte local_9f;
  byte local_9e;
  byte local_9d;
  undefined2 local_68;
  undefined8 local_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *param_7 = 0;
  *param_8 = 0;
  *param_6 = 0;
  local_120 = param_2;
  if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x30) != 0)) {
    local_140 = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x58);
    local_150 = *param_2;
    local_158 = *(undefined8 *)((longlong)param_5 + 0x28);
    local_128 = param_8;
    local_130 = param_7;
    local_138 = param_6;
    local_148 = param_4;
    FUN_140f2ec10(param_1,param_2,param_2 + 4);
    *(undefined1 *)((longlong)param_5 + 0x4a) = *param_6;
    if ((*(longlong *)(param_1 + 0x58) != 0) &&
       (local_100 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x58) + 8), local_100 != 0)) {
      local_110 = *(longlong *)((longlong)param_5 + 0x58);
      lVar7 = 0;
      uVar4 = 0;
      local_108 = param_1;
      do {
        lVar3 = *(longlong *)(param_1 + 0x28);
        uVar5 = (ulonglong)((uint)*(ushort *)(**(longlong **)(param_1 + 0x58) + lVar7) * 0x30);
        lVar1 = *(longlong *)(lVar3 + uVar5);
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x70) + 0xb8);
        memcpy(local_e8,param_5,0x82);
        local_60 = (void *)0x0;
        iStack_58 = *(int *)((longlong)param_5 + 0x90);
        lVar6 = (longlong)iStack_58;
        if (lVar6 == 0) {
          uStack_54 = 0;
        }
        else {
          local_118 = *(void **)((longlong)param_5 + 0x88);
          FUN_1446dd670(&local_60,iStack_58,0);
          memcpy(local_60,local_118,lVar6 * 2);
        }
        lVar3 = lVar3 + uVar5;
        local_50 = *(undefined4 *)((longlong)param_5 + 0x98);
        FUN_1400021e4(lVar3 + 8,&local_f8);
        if (local_60 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_60 = (void *)CONCAT44(uStack_f4,local_f8);
        iStack_58 = uStack_f0;
        uStack_54 = uStack_ec;
        local_b0 = *(undefined8 *)(lVar1 + 0x70);
        local_9f = 0;
        local_9d = 0;
        local_68 = (undefined2)uVar4;
        local_b8 = *(int *)(lVar3 + 0x14) + local_110;
        (**(code **)(*plVar2 + 0x48))(plVar2,local_e8);
        param_1 = local_108;
        if ((local_9f == 1) && (*(int *)(lVar3 + 0x28) != -1)) {
          FUN_140f2f56e(local_120,param_5,lVar1,*(undefined4 *)(lVar3 + 0x10));
        }
        *(byte *)((longlong)param_5 + 0x49) = *(byte *)((longlong)param_5 + 0x49) | local_9f;
        *(byte *)((longlong)param_5 + 0x4b) = *(byte *)((longlong)param_5 + 0x4b) | local_9d;
        *(byte *)((longlong)param_5 + 0x4a) = *(byte *)((longlong)param_5 + 0x4a) | local_9e;
        if (local_60 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar4 = uVar4 + 1;
        lVar7 = lVar7 + 0x18;
      } while (local_100 != uVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f2ec10 FUN_140f2ec10 body=2397 status=ok
// SIG undefined FUN_140f2ec10(void)

void FUN_140f2ec10(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  double *param_5,longlong param_6,longlong param_7,int param_8,char *param_9,
                  undefined1 *param_10,undefined1 *param_11)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  void *_Src;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  ushort uVar11;
  int iVar12;
  void *_Dst;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  double *pdVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ushort uVar21;
  longlong lVar22;
  double *pdVar23;
  ulonglong uVar24;
  int iVar25;
  uint *puVar26;
  ulonglong uVar27;
  bool bVar28;
  bool bVar29;
  undefined1 auStack_1d8 [32];
  double *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  int local_1a0;
  char *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  uint local_178;
  int local_174;
  longlong local_170;
  uint *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined **local_118 [11];
  longlong *local_c0;
  longlong local_a0;
  longlong local_88;
  longlong local_60;
  double *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar26 = (uint *)(param_3 + 2);
  iVar12 = (int)param_3[5];
  local_158 = param_4;
  local_148 = param_2;
  if (iVar12 == 0) {
    uVar27 = 1;
    uVar18 = 0;
    iVar17 = 0;
    iVar25 = 0;
  }
  else {
    puVar9 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar9 = puVar26;
    }
    uVar14 = *puVar9;
    if (uVar14 == 0) {
      iVar17 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar17 = iVar12 + -1;
      }
      uVar18 = 0;
      uVar27 = (ulonglong)(uint)(iVar17 >> 5);
      if (iVar17 >> 5 < 1) {
        uVar27 = uVar18;
      }
      iVar17 = 0;
      do {
        if (uVar27 == uVar18) goto LAB_140f2f537;
        iVar17 = iVar17 + 0x20;
        uVar14 = puVar9[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar18 = 0;
      iVar17 = 0;
    }
    uVar27 = (ulonglong)(-uVar14 & uVar14);
    uVar13 = uVar27 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    iVar25 = (iVar17 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar25) {
      iVar25 = iVar12;
    }
  }
  if (iVar25 < iVar12) {
    local_140 = (longlong *)(param_1 + 0xe8);
    local_138 = param_1 + 0x120;
    local_130 = param_2 + 0x70;
    uVar14 = 0xffffffff;
    local_170 = param_1;
    local_168 = puVar26;
    local_160 = param_3;
    do {
      lVar5 = local_170;
      lVar22 = *param_3;
      lVar10 = (longlong)iVar25 * 0xe0;
      iVar12 = *(int *)(lVar22 + lVar10);
      lVar15 = (longlong)iVar12;
      local_178 = uVar14;
      if (param_8 <= iVar12) {
        FUN_1417ecdba(param_3,iVar25);
        lVar5 = param_1;
        uVar14 = local_178;
        goto LAB_140f2f0df;
      }
      bVar28 = param_6 == 0;
      lVar3 = *(longlong *)(param_1 + 0x38);
      lVar20 = (longlong)*(int *)(lVar22 + 0xc + lVar10) * 0x20;
      plVar1 = (longlong *)(lVar3 + lVar20);
      lVar19 = (longlong)*(int *)(lVar22 + 8 + lVar10) * 0x30;
      bVar29 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x28 + lVar19) == -1;
      lVar20 = (longlong)*(int *)(lVar3 + 0x10 + lVar20) + (lVar15 - *(int *)(lVar3 + 0xc + lVar20))
      ;
      lVar3 = *(longlong *)(lVar22 + 200 + lVar10);
      local_174 = iVar17;
      if (lVar3 != 0) {
        if (bVar29 || bVar28) {
          local_1a8 = *(undefined8 *)(param_7 + lVar15);
          local_1b0 = 0;
          local_1a0 = (uint)*(ushort *)((longlong)plVar1 + 10) * *(int *)(param_7 + 8 + lVar15);
        }
        else {
          local_1b0 = *(undefined8 *)(param_6 + lVar20);
          iVar12 = *(int *)(param_7 + 8 + lVar15) * (uint)*(ushort *)((longlong)plVar1 + 10);
          local_1a0 = (uint)*(ushort *)((longlong)plVar1 + 10) * *(int *)(param_6 + 8 + lVar20);
          local_1a8 = *(undefined8 *)(param_7 + lVar15);
          if (iVar12 <= local_1a0) {
            local_1a0 = iVar12;
          }
        }
        local_188 = param_11;
        local_190 = param_10;
        local_198 = param_9;
        local_1b8 = param_5;
        FUN_140f2ec10(local_170,local_148,lVar3,local_158);
        param_3 = local_160;
        puVar26 = local_168;
        iVar17 = local_174;
        uVar14 = local_178;
        goto LAB_140f2f0df;
      }
      lVar22 = lVar22 + lVar10;
      lVar10 = lVar22 + 8;
      local_1b8 = (double *)CONCAT44(local_1b8._4_4_,iVar12);
      local_150 = plVar1;
      local_120 = *(longlong *)(param_1 + 0x28);
      cVar4 = FUN_142a63b1c(lVar10,param_5[0xd],local_158,*plVar1);
      if (cVar4 == '\0') goto LAB_140f2f0b1;
      if (*param_9 == '\0') {
        (**(code **)(*local_158 + 0x210))();
        *param_9 = '\x01';
      }
      *param_10 = 1;
      if (!bVar29 && !bVar28) {
        _Src = (void *)(param_7 + lVar15);
        _Dst = (void *)((int)lVar20 + param_6);
        if (_Dst != _Src) {
          plVar1 = (longlong *)*local_150;
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,_Dst,_Src,1);
          }
          else {
            memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      local_128 = lVar10;
      FUN_1448fcc30(local_118,param_5[0xd],*(undefined8 *)(lVar22 + 0xb8),
                    (longlong)*(int *)(lVar22 + 0x10));
      FUN_143588808(param_5,local_118);
      pdVar16 = (double *)(lVar15 + param_7);
      local_1b8 = (double *)0x0;
      (**(code **)(*(longlong *)*local_150 + 0xd8))
                ((longlong *)*local_150,local_118,param_5[0xd],pdVar16);
      plVar1 = local_150;
      if (bVar29 || bVar28) goto LAB_140f2f037;
      lVar19 = local_120 + lVar19;
      if (*(int *)(lVar19 + 0x24) == 1) goto LAB_140f2f027;
      if (0x17 < *(byte *)((longlong)local_150 + 0x1c) - 2) {
        if (*local_150 == 0) {
          FUN_140056680(&local_58,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*local_150 + 0x20,&local_58);
        }
        local_1b8 = (double *)&DAT_149dfb77a;
        if (local_50 != 0) {
          local_1b8 = local_58;
        }
        FUN_140033559(".\\Runtime/Engine/Private/RepLayout.cpp",0x2e5,
                      L"PropertiesAreIdentical: Unsupported type! %i (%s)",
                      *(undefined1 *)((longlong)plVar1 + 0x1c));
        if (local_58 != (double *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_140f2f027;
      }
      pdVar23 = (double *)((int)lVar20 + param_6);
      switch((uint)*(byte *)((longlong)local_150 + 0x1c)) {
      case 2:
      case 3:
      case 0x16:
      case 0x18:
        cVar4 = (**(code **)(*(longlong *)*local_150 + 200))
                          ((longlong *)*local_150,pdVar23,pdVar16,0);
        goto LAB_140f2f262;
      case 4:
        bVar29 = NAN(*(float *)pdVar23) || NAN(*(float *)pdVar16);
        bVar28 = *(float *)pdVar23 == *(float *)pdVar16;
LAB_140f2f2da:
        if ((!bVar28) || (bVar29)) goto LAB_140f2f027;
        break;
      case 5:
      case 9:
        if (*(float *)pdVar23 != *(float *)pdVar16) goto LAB_140f2f027;
        break;
      case 6:
      case 0x15:
        if (*(char *)pdVar23 != *(char *)pdVar16) goto LAB_140f2f027;
        break;
      case 7:
      case 0x14:
      case 0x17:
        if (*pdVar23 != *pdVar16) goto LAB_140f2f027;
        break;
      case 8:
        plVar1 = (longlong *)*local_150;
        lVar22 = (**(code **)(*plVar1 + 0x210))(plVar1,pdVar23);
        lVar5 = (**(code **)(*plVar1 + 0x210))(plVar1,pdVar16);
        if (lVar22 != lVar5) goto LAB_140f2f027;
        break;
      default:
        if ((*pdVar23 == *pdVar16) && (!NAN(*pdVar23) && !NAN(*pdVar16))) {
          if ((pdVar23[1] == pdVar16[1]) && (!NAN(pdVar23[1]) && !NAN(pdVar16[1]))) {
            bVar29 = NAN(pdVar23[2]) || NAN(pdVar16[2]);
            bVar28 = pdVar23[2] == pdVar16[2];
            goto LAB_140f2f2da;
          }
        }
        goto LAB_140f2f027;
      case 0xc:
        if ((*pdVar23 == *pdVar16) && (!NAN(*pdVar23) && !NAN(*pdVar16))) {
          if ((pdVar23[1] == pdVar16[1]) && (!NAN(pdVar23[1]) && !NAN(pdVar16[1]))) {
            if ((pdVar23[2] == pdVar16[2]) && (!NAN(pdVar23[2]) && !NAN(pdVar16[2]))) {
              bVar29 = NAN(pdVar23[3]) || NAN(pdVar16[3]);
              bVar28 = pdVar23[3] == pdVar16[3];
              goto LAB_140f2f2da;
            }
          }
        }
        goto LAB_140f2f027;
      case 0xe:
        cVar4 = FUN_140ba41f1(pdVar23,pdVar16);
        goto LAB_140f2f262;
      case 0xf:
        cVar4 = FUN_1436982e0(pdVar23,pdVar16);
        goto LAB_140f2f262;
      case 0x13:
        fVar2 = *(float *)(pdVar23 + 1);
        if (fVar2 == *(float *)(pdVar16 + 1)) {
          if (1 < (int)fVar2) {
            lVar22 = 0;
            while( true ) {
              uVar11 = *(ushort *)((longlong)*pdVar23 + lVar22);
              uVar13 = (ulonglong)uVar11;
              uVar21 = *(ushort *)((longlong)*pdVar16 + lVar22);
              if (uVar11 != uVar21) break;
              if (uVar11 == 0) goto LAB_140f2f037;
LAB_140f2f344:
              lVar22 = lVar22 + 2;
            }
            if ((uVar21 | uVar11) < 0x80) {
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
              uVar24 = (ulonglong)uVar21;
              uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
              if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar24]) goto LAB_140f2f344;
            }
            if (uVar11 != uVar21) goto LAB_140f2f027;
          }
        }
        else if ((int)*(float *)(pdVar16 + 1) + (int)fVar2 != 1) goto LAB_140f2f027;
        break;
      case 0x19:
        if (*(int *)(local_170 + 0xf0) != *(int *)(local_170 + 0x11c)) {
          uVar14 = ((uint)((ulonglong)local_150 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_150 >> 4)) * -0x7a143595;
          uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
          lVar22 = *(longlong *)(local_170 + 0x128);
          if (*(longlong *)(local_170 + 0x128) == 0) {
            lVar22 = local_138;
          }
          iVar12 = *(int *)(lVar22 + (ulonglong)
                                     (*(int *)(local_170 + 0x130) - 1U & (uVar14 >> 0x10 ^ uVar14))
                                     * 4);
          if (iVar12 != -1) {
            do {
              lVar22 = *local_140 + (longlong)iVar12 * 0x20;
              if (*(longlong **)(*local_140 + (longlong)iVar12 * 0x20) == local_150)
              goto LAB_140f2f458;
              iVar12 = *(int *)(lVar22 + 0x18);
            } while (iVar12 != -1);
          }
        }
        lVar22 = 0;
LAB_140f2f458:
        local_1b8 = pdVar16;
        cVar4 = FUN_143697dfb(lVar22 + 8,local_140,0xffffffff);
LAB_140f2f262:
        if (cVar4 == '\0') {
LAB_140f2f027:
          FUN_1417c47ea(local_130,lVar19);
        }
      }
LAB_140f2f037:
      local_118[0] = &PTR_FUN_149e73df0;
      if (local_60 != 0) {
        (**(code **)(local_60 + -0x10))(local_60 + -0x10);
      }
      lVar10 = local_128;
      local_118[0] = &PTR_FUN_149e37220;
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      plVar1 = local_c0;
      local_118[0] = &PTR__purecall_149e35f70;
      if (local_c0 != (longlong *)0x0) {
        if (*local_c0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      lVar22 = local_a0;
      if (local_a0 != 0) {
        if (*(longlong *)(local_a0 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar22);
      }
LAB_140f2f0b1:
      param_3 = local_160;
      puVar26 = local_168;
      lVar5 = local_170;
      iVar17 = local_174;
      uVar14 = local_178;
      if (*(int *)(lVar10 + 0x44) < *(int *)(lVar10 + 0x18)) {
        *param_11 = 1;
      }
      else if ((*(int *)(lVar10 + 0x18) == *(int *)(lVar10 + 0x44)) &&
              (*(int *)(lVar10 + 0x68) == *(int *)(lVar10 + 0x94))) {
        FUN_1417ecdba(local_160,iVar25);
      }
LAB_140f2f0df:
      uVar14 = uVar14 & ~(uint)uVar27;
      puVar9 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar9 = puVar26;
      }
      iVar12 = (int)param_3[5];
      iVar25 = (int)uVar18;
      lVar22 = (longlong)iVar25;
      uVar6 = puVar9[lVar22] & uVar14;
      if (uVar6 == 0) {
        iVar7 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar7 = iVar12 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar25) {
          iVar8 = iVar25;
        }
        if (iVar7 <= iVar25) break;
        lVar10 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar6 = puVar9[lVar22 + lVar10 + 1];
          if (uVar6 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar22 == lVar10) goto LAB_140f2f537;
        }
        uVar18 = (ulonglong)(iVar25 + (int)lVar10 + 1);
        uVar14 = 0xffffffff;
      }
      uVar27 = (ulonglong)(-uVar6 & uVar6);
      uVar13 = uVar27 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar25 = (iVar17 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      param_1 = lVar5;
    } while (iVar25 < iVar12);
  }
LAB_140f2f537:
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f2f56e FUN_140f2f56e body=212 status=ok
// SIG undefined FUN_140f2f56e(void)

void FUN_140f2f56e(longlong param_1,longlong param_2,ulonglong param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_3;
  FUN_1417c47ea(param_1 + 0x70,&local_30);
  lVar3 = FUN_14477b072(*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(local_30 + 0x68));
  if ((*(char *)(lVar3 + 0xb4) != '\0') && (*(int *)(local_30 + 0x30) != 1)) {
    uVar2 = ((uint)(local_30 >> 0x14) & 0xffff ^ (uint)(local_30 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar4 = (longlong *)FUN_147a4ffa4(param_1 + 0x80,uVar2 >> 0x10 ^ uVar2,&local_30);
    iVar1 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
      FUN_1447403be(plVar4,iVar1);
    }
    *(undefined1 *)(*plVar4 + (longlong)iVar1) = param_4;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f2f64e FUN_140f2f64e body=231 status=ok
// SIG undefined FUN_140f2f64e(void)

undefined8 * FUN_140f2f64e(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14ab739f0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  FUN_1446f470e(&local_28,L"FlightNav",1);
  uVar2 = FUN_140f2f736();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_28,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x74] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x74];
  }
  param_1[0x39] = lVar3;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f2f736 FUN_140f2f736 body=228 status=ok
// SIG undefined FUN_140f2f736(void)

longlong FUN_140f2f736(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1b698 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459ea784;
    local_38 = &LAB_147e2d6b3;
    local_40 = &LAB_140f86209;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x690;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxFlightNavComponent",&DAT_14cb1b698,&DAT_147e2d6b2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1b698;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f2f822 FUN_140f2f822 body=57 status=ok
// SIG undefined FUN_140f2f822(void)

void FUN_140f2f822(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23230 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23230 = FUN_140002ddd(FUN_14643d0f9,uVar1,L"GpsTest_Enemies");
  }
  return;
}



// FUNCTION 140f2f85c FUN_140f2f85c body=75 status=ok
// SIG undefined FUN_140f2f85c(void)

void FUN_140f2f85c(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1403ae288(param_1 + 0x30);
  if (cVar1 != '\0') {
    lVar2 = FUN_14008e0ae(param_1 + 0x30);
    *(uint *)(lVar2 + 0xb8) = param_2 & 0xff;
    FUN_140841e14(lVar2 + 0xb0,1);
    return;
  }
  return;
}



// FUNCTION 140f2f8a8 FUN_140f2f8a8 body=262 status=ok
// SIG undefined FUN_140f2f8a8(void)

void FUN_140f2f8a8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_1;
  FUN_140f2f9b0();
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 == 0) {
    iVar6 = 0;
  }
  else {
    lVar1 = *param_2;
    lVar5 = 0;
    iVar6 = 0;
    do {
      local_80 = *(undefined8 *)(lVar1 + lVar5);
      local_78 = *(undefined4 *)(lVar1 + 8 + lVar5);
      FUN_1448075d0(local_70,&local_80);
      lVar4 = FUN_14060eaf6(local_70);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (lVar4 != 0) {
        bVar3 = FUN_1407a73f8(lVar4 + 0x4f0,&DAT_14cbcddd8);
        iVar6 = iVar6 + (uint)bVar3;
      }
      lVar5 = lVar5 + 0xc;
    } while ((longlong)(int)lVar2 * 0xc != lVar5);
  }
  if (*(int *)(local_88 + 0x170) != iVar6) {
    *(int *)(local_88 + 0x170) = iVar6;
    FUN_1401861f4(local_88 + 0x178,iVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f2f9b0 FUN_140f2f9b0 body=505 status=ok
// SIG undefined FUN_140f2f9b0(void)

void FUN_140f2f9b0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_2[1] != 0) {
    piVar8 = (int *)*param_2;
    piVar2 = piVar8 + (longlong)(int)param_2[1] * 3;
    do {
      if ((longlong)(int)param_1[0x29] != 0) {
        lVar6 = 0;
        do {
          if ((*(int *)(param_1[0x28] + lVar6) == *piVar8) &&
             (*(int *)(param_1[0x28] + 8 + lVar6) == piVar8[2])) goto LAB_140f2fa37;
          lVar6 = lVar6 + 0xc;
        } while ((longlong)(int)param_1[0x29] * 0xc != lVar6);
      }
      local_48 = piVar8[2];
      local_50 = *(undefined8 *)piVar8;
      (**(code **)(*param_1 + 0x78))(param_1,&local_50);
      iVar3 = (int)param_1[0x29];
      *(uint *)(param_1 + 0x29) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x14c) < iVar3 + 1U) {
        FUN_1446dd912(param_1 + 0x28,iVar3);
      }
      lVar6 = param_1[0x28];
      *(int *)(lVar6 + 8 + (longlong)iVar3 * 0xc) = piVar8[2];
      *(undefined8 *)(lVar6 + (longlong)iVar3 * 0xc) = *(undefined8 *)piVar8;
LAB_140f2fa37:
      piVar8 = piVar8 + 3;
    } while (piVar8 != piVar2);
  }
  if (0 < (longlong)(int)param_1[0x29]) {
    uVar9 = (longlong)(int)param_1[0x29];
    do {
      uVar1 = uVar9 - 1;
      lVar6 = param_1[0x28];
      if ((longlong)(int)param_2[1] != 0) {
        piVar2 = (int *)(lVar6 + uVar1 * 0xc);
        lVar7 = 0;
        do {
          if ((*(int *)(*param_2 + lVar7) == *piVar2) &&
             (*(int *)(*param_2 + 8 + lVar7) == piVar2[2])) goto LAB_140f2fafb;
          lVar7 = lVar7 + 0xc;
        } while ((longlong)(int)param_2[1] * 0xc != lVar7);
      }
      local_58 = *(undefined4 *)(lVar6 + 8 + uVar1 * 0xc);
      local_60 = *(undefined8 *)(lVar6 + uVar1 * 0xc);
      (**(code **)(*param_1 + 0x78))(param_1,&local_60,0);
      uVar5 = *(uint *)(param_1 + 0x29);
      if (uVar9 != uVar5) {
        memmove((void *)(param_1[0x28] + uVar1 * 0xc),(void *)(param_1[0x28] + uVar1 * 0xc + 0xc),
                (longlong)(int)(uVar5 - (int)uVar9) * 0xc);
        uVar5 = *(uint *)(param_1 + 0x29);
      }
      *(uint *)(param_1 + 0x29) = uVar5 - 1;
      FUN_140c05acc(param_1 + 0x28);
LAB_140f2fafb:
      bVar4 = 1 < (longlong)uVar9;
      uVar9 = uVar1;
    } while (bVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f2fbaa FUN_140f2fbaa body=77 status=ok
// SIG undefined FUN_140f2fbaa(void)

void FUN_140f2fbaa(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  FUN_140c05cae(param_1 + 0x20,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f2fbf8 FUN_140f2fbf8 body=40 status=ok
// SIG undefined FUN_140f2fbf8(void)

void FUN_140f2fbf8(longlong param_1)

{
  FUN_140f2fc20();
  FUN_140e3d9d4(param_1 + 0x3ae0,*(undefined8 *)(&DAT_00001ce8 + param_1));
  return;
}



// FUNCTION 140f2fc20 FUN_140f2fc20 body=76 status=ok
// SIG undefined FUN_140f2fc20(void)

void FUN_140f2fc20(longlong *param_1)

{
  FUN_140f2fd72();
  FUN_140f30084(param_1);
  FUN_1409e8446(param_1);
  FUN_140f2fc6c(param_1);
  if ((char)param_1[0x220] == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x000140f2fc62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x7c0))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 140f2fc6c FUN_140f2fc6c body=261 status=ok
// SIG undefined FUN_140f2fc6c(void)

void FUN_140f2fc6c(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [216];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = param_1[0x29d];
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x178) == '\x03')) {
    uVar3 = FUN_1401b0f18();
    plVar4 = (longlong *)FUN_144718840(lVar5,uVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
      if (((*(int *)(lVar5 + 0xd4) != 0) && (uVar1 = *(uint *)(lVar5 + 0xd0), -1 < (int)uVar1)) &&
         ((int)uVar1 < DAT_14c9647dc)) {
        plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(lVar5 + 0xd4))) &&
           (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
            ((lVar2 = *plVar4, lVar2 != 0 && (*(longlong *)(lVar5 + 0xd8) != 0)))))) {
          FUN_140f2fe8a(lVar2,local_f8,(longlong *)(lVar5 + 0xd8));
          (**(code **)(*param_1 + 0xc50))(param_1,local_f8,lVar2);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f2fd72 FUN_140f2fd72 body=280 status=ok
// SIG undefined FUN_140f2fd72(void)

void FUN_140f2fd72(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_1401c3ca6();
  plVar2 = (longlong *)param_1[0x3e];
  if (plVar2 != (longlong *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x5e8);
    if (pcVar3 == FUN_140972dde) {
      if (plVar2[0x76] != 0) goto LAB_140f2fe61;
      pcVar3 = *(code **)(*plVar2 + 0x5f8);
      if (pcVar3 == FUN_144784df4) {
        if (*(code **)(plVar2[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (*(int *)((longlong)plVar2 + 0x75b4) == 0) {
            return;
          }
          uVar1 = *(uint *)(plVar2 + 0xeb6);
          if ((int)uVar1 < 0) {
            return;
          }
          if (DAT_14c9647dc <= (int)uVar1) {
            return;
          }
          plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (plVar5 == (longlong *)0x0) {
            return;
          }
          if ((int)plVar5[2] != *(int *)((longlong)plVar2 + 0x75b4)) {
            return;
          }
          if ((*(uint *)(plVar5 + 1) & 0x10200000) != 0) {
            return;
          }
          if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
            lVar4 = *plVar5;
          }
          else {
            lVar4 = 0;
          }
          lVar4 = lVar4 + 0x110;
        }
        else {
          lVar4 = (**(code **)(plVar2[0x784] + 0x18))(plVar2 + 0x784);
        }
        if (lVar4 == 0) {
          return;
        }
        lVar4 = *(longlong *)(lVar4 + 0x20);
      }
      else {
        lVar4 = (*pcVar3)();
      }
      if (lVar4 == 0) {
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x3b0);
    }
    else {
      lVar4 = (*pcVar3)();
    }
    if (lVar4 != 0) {
LAB_140f2fe61:
                    /* WARNING: Could not recover jumptable at 0x000140f2fe6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x9b0))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140f2fe8a FUN_140f2fe8a body=395 status=ok
// SIG undefined FUN_140f2fe8a(void)

undefined8 * FUN_140f2fe8a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  undefined1 local_190 [8];
  undefined8 local_188 [12];
  undefined1 local_128 [208];
  char local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(longlong *)(param_1 + 0x6f4) != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x240);
    puVar6 = local_188;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar2 = (**(code **)(*(longlong *)*param_3 + 0xd0))();
    plVar3 = (longlong *)FUN_140f30018(uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 0x6fc);
      (**(code **)(*(longlong *)*param_3 + 0xd8))((longlong *)*param_3,local_190);
      local_1a8 = local_188;
      local_1a0 = param_1 + 0x710;
      local_198 = uVar1;
      (**(code **)(*plVar3 + 0x30))(plVar3,local_128,param_1 + 0x6f4,local_190);
      if (local_58 == '\0') {
        puVar5 = &DAT_14c846480;
        puVar6 = param_2;
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        param_2[0x18] = 0;
        param_2[0x19] = 0;
        puVar5 = &DAT_14c846480;
        puVar6 = param_2 + 0xc;
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        memcpy(param_2,local_128,0xd0);
      }
      if ((local_40 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  }
  puVar5 = &DAT_14c846480;
  puVar6 = param_2;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  puVar5 = &DAT_14c846480;
  puVar6 = param_2 + 0xc;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 140f30018 FUN_140f30018 body=49 status=ok
// SIG undefined FUN_140f30018(void)

longlong FUN_140f30018(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = FUN_140f3004a();
    cVar1 = FUN_1448093f4(param_1,uVar2);
    lVar3 = 0;
    if (cVar1 != '\0') {
      lVar3 = param_1;
    }
  }
  return lVar3;
}



// FUNCTION 140f3004a FUN_140f3004a body=57 status=ok
// SIG undefined FUN_140f3004a(void)

void FUN_140f3004a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ad50 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1ad50 = FUN_140002ddd(FUN_14641a52d,uVar1,L"TaggedAnimDef_GbxSpawn");
  }
  return;
}



// FUNCTION 140f30084 FUN_140f30084 body=1406 status=ok
// SIG undefined FUN_140f30084(void)

void FUN_140f30084(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_178 [40];
  uint local_150;
  int iStack_14c;
  longlong *local_148;
  undefined8 local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 local_90;
  char local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(longlong *)(param_1 + 0x1f0) == 0) || (*(char *)(param_1 + 0x1539) == '\0'))
  goto LAB_140f3033f;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if ((lVar5 != 0) || (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)) {
    uVar2 = DAT_14cb1c840;
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_150,uVar2,lVar5);
    plVar11 = local_148;
    lVar5 = CONCAT44(iStack_14c,local_150);
    if ((lVar5 == 0) || (local_148 == (longlong *)0x0)) {
      plVar11 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_148 + 0xc) = *(int *)((longlong)local_148 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar8 = local_148 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_148 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      iVar4 = (int)plVar11[1];
      do {
        plVar8 = (longlong *)0x0;
        if (iVar4 == 0) break;
        LOCK();
        iVar6 = (int)plVar11[1];
        bVar12 = iVar4 == iVar6;
        if (bVar12) {
          *(int *)(plVar11 + 1) = iVar4 + 1;
          iVar6 = iVar4;
        }
        iVar4 = iVar6;
        UNLOCK();
        plVar8 = plVar11;
      } while (!bVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      if (plVar8 != (longlong *)0x0) {
        if ((lVar5 != 0) && (iStack_14c = 0, param_1 != 0)) {
          local_150 = *(uint *)(param_1 + 0xc);
          if ((int)local_150 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((local_150 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_150 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          iVar4 = *(int *)(lVar10 + 0x10);
          if (iVar4 == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            iVar6 = DAT_14c964868 + 1;
            bVar12 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar12) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar6);
            }
            LOCK();
            iVar4 = *(int *)(lVar10 + 0x10);
            bVar12 = iVar4 == 0;
            if (bVar12) {
              *(int *)(lVar10 + 0x10) = iVar6;
              iVar4 = 0;
            }
            UNLOCK();
            if (bVar12) {
              iVar4 = iVar6;
            }
            iStack_14c = iVar4;
            if (iVar4 == 0) goto LAB_140f30215;
          }
          iStack_14c = iVar4;
          if ((((-1 < (int)local_150) && ((int)local_150 < DAT_14c9647dc)) &&
              (lVar10 = (ulonglong)((local_150 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_150 >> 0x10) * 8),
              lVar10 != 0)) &&
             ((*(int *)(lVar10 + 0x10) == iVar4 && ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)))) {
            FUN_140e28a9c(lVar5 + 0x130,&local_150);
          }
        }
LAB_140f30215:
        LOCK();
        plVar11 = plVar8 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
  }
  FUN_144a75fa0(param_1,&local_150,0);
  puVar7 = &local_150;
  puVar9 = (undefined8 *)(param_1 + 0x1738);
  for (lVar5 = 0xb; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *(undefined8 *)puVar7;
    puVar7 = puVar7 + 2;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)(param_1 + 0x1798) = local_f0;
  *(undefined8 *)(param_1 + 0x1790) = local_f8;
  if (DAT_14c950c29 == '\x01') {
    if (local_e8 == 0) {
      local_e8 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *(longlong *)(param_1 + 0x17a0) = local_e8;
  if (&local_f8 != (undefined8 *)(param_1 + 0x1790)) {
    if (local_88 == '\x01') {
      if ((*(char *)(param_1 + 0x1800) != '\0') && (*(longlong *)(param_1 + 0x17f0) != 0)) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0x17c8) = local_c0;
      *(undefined8 *)(param_1 + 0x17b8) = local_d0;
      *(undefined8 *)(param_1 + 0x17c0) = uStack_c8;
      *(undefined8 *)(param_1 + 0x17a8) = local_e0;
      *(undefined8 *)(param_1 + 0x17b0) = uStack_d8;
      if (local_98 == 0) {
        *(undefined8 *)(param_1 + 0x17e0) = local_a8;
        *(undefined8 *)(param_1 + 0x17e8) = uStack_a0;
        *(undefined8 *)(param_1 + 0x17d0) = local_b8;
        *(undefined8 *)(param_1 + 0x17d8) = uStack_b0;
      }
      *(longlong *)(param_1 + 0x17f0) = local_98;
      local_98 = 0;
      *(undefined4 *)(param_1 + 0x17f8) = (undefined4)local_90;
      *(undefined4 *)(param_1 + 0x17fc) = local_90._4_4_;
      local_90 = 0x200000000;
      uVar3 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x1800) == '\0') goto LAB_140f3029c;
      if (*(longlong *)(param_1 + 0x17f0) != 0) {
        FUN_1400020a8();
      }
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0x1800) = uVar3;
  }
LAB_140f3029c:
  plVar11 = local_48;
  *(undefined4 *)(param_1 + 0x1828) = local_60;
  *(undefined4 *)(param_1 + 0x182c) = uStack_5c;
  *(undefined4 *)(param_1 + 0x1830) = uStack_58;
  *(undefined4 *)(param_1 + 0x1834) = uStack_54;
  *(undefined4 *)(param_1 + 0x1818) = local_70;
  *(undefined4 *)(param_1 + 0x181c) = uStack_6c;
  *(undefined4 *)(param_1 + 0x1820) = uStack_68;
  *(undefined4 *)(param_1 + 0x1824) = uStack_64;
  *(undefined4 *)(param_1 + 0x1808) = local_80;
  *(undefined4 *)(param_1 + 0x180c) = uStack_7c;
  *(undefined4 *)(param_1 + 0x1810) = uStack_78;
  *(undefined4 *)(param_1 + 0x1814) = uStack_74;
  if ((undefined8 *)(param_1 + 0x1838) != &local_50) {
    *(undefined8 *)(param_1 + 0x1838) = local_50;
    local_50 = 0;
    plVar8 = *(longlong **)(param_1 + 0x1840);
    if (local_48 != plVar8) {
      local_48 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x1840) = plVar11;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar8 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
  }
  plVar11 = local_48;
  *(undefined4 *)(param_1 + 0x1848) = local_40;
  *(undefined8 *)(param_1 + 0x1850) = local_38;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_48 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_88 == '\x01') && (local_98 != 0)) {
    FUN_1400020a8();
  }
LAB_140f3033f:
  if ((local_30 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f30604 FUN_140f30604 body=1656 status=ok
// SIG undefined FUN_140f30604(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140f30604(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *_Dst;
  longlong lVar7;
  undefined8 *_Src;
  undefined1 auStack_4a8 [32];
  undefined1 *local_488;
  undefined8 *local_480;
  undefined4 local_478;
  undefined8 local_470;
  undefined1 local_468;
  longlong local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined8 local_3a4;
  undefined4 local_39c;
  longlong *local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  longlong *local_320;
  longlong *local_2a8;
  undefined4 local_280;
  undefined8 local_270;
  undefined8 uStack_268;
  longlong local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined1 local_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  longlong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 *local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_168 [104];
  longlong local_100;
  char local_f0;
  longlong *local_b0;
  undefined1 local_98 [40];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  FUN_1446dcdd4(local_98,param_2 + 0x18);
  plVar4 = (longlong *)FUN_140a6b12c(local_98);
  if (plVar4 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
    if (cVar2 != '\0') {
      if (param_3 == 0) {
LAB_140f30af2:
        param_3 = 0;
      }
      else {
        lVar5 = FUN_14048671e();
        if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_140f30af2;
      }
      local_1b8 = param_2[0xc];
      uStack_1b0 = param_2[0xd];
      local_1a8 = *(undefined4 *)(param_2 + 0xe);
      uStack_1a4 = *(undefined4 *)((longlong)param_2 + 0x74);
      uStack_1a0 = *(undefined4 *)(param_2 + 0xf);
      uStack_19c = *(undefined4 *)((longlong)param_2 + 0x7c);
      FUN_1448052ee(&local_1b8,&local_270);
      uStack_258 = param_2[0x10];
      uStack_250 = param_2[0x11];
      uStack_248 = param_2[0x12];
      local_260 = 0;
      cVar2 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xe0))(param_1 + 0x178);
      if (cVar2 != '\0') {
        local_270 = 0;
      }
      if ((char)plVar4[3] == '\0') {
        uVar3 = (**(code **)(*plVar4 + 0x70))(plVar4);
        *(undefined1 *)(plVar4 + 3) = uVar3;
      }
      FUN_144a75fa0(param_1,&local_1b8,0);
      local_478 = 0;
      if ((param_3 != 0) && (*(char *)(param_3 + 0x834) == '\x01')) {
        local_478 = *(undefined4 *)(param_3 + 0x830);
      }
      uVar6 = *(undefined8 *)(param_1 + 0x13c8);
      local_3a4 = 0xfffffffffffffffe;
      local_39c = 0xffffffff;
      local_218 = uStack_250;
      uStack_210 = uStack_248;
      local_228 = local_260;
      uStack_220 = uStack_258;
      local_238 = local_270;
      uStack_230 = uStack_268;
      local_208 = _DAT_14cb1c848;
      uStack_200 = _DAT_14cb1c850;
      local_1f8 = DAT_14cb1c858;
      uStack_1f0 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
      uStack_1e8 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
      local_1e0 = DAT_14cb1c870;
      local_1d8 = (undefined8 *)0x0;
      uStack_1d0 = 0;
      local_1c8 = CONCAT44(local_1c8._4_4_,0xffffffff);
      local_398 = (longlong *)*param_2;
      uStack_390 = param_2[1];
      local_388 = *(undefined4 *)(param_2 + 2);
      uStack_384 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_380 = *(undefined4 *)(param_2 + 3);
      uStack_37c = *(undefined4 *)((longlong)param_2 + 0x1c);
      local_460 = param_3;
      FUN_1448052ee(&local_398,&local_458);
      local_440 = param_2[4];
      uStack_438 = param_2[5];
      local_430 = param_2[6];
      local_428 = local_458;
      uStack_420 = uStack_450;
      local_418 = uStack_448;
      local_3f8 = _DAT_14cb1c848;
      uStack_3f0 = _DAT_14cb1c850;
      local_3e8 = DAT_14cb1c858;
      local_3e0 = (undefined4)DAT_14cb1c860;
      uStack_3dc = DAT_14cb1c860._4_4_;
      uStack_3d8 = (undefined4)DAT_14cb1c868;
      uStack_3d4 = DAT_14cb1c868._4_4_;
      local_3d0 = DAT_14cb1c870;
      local_3c8 = 0;
      uStack_3c0 = 0;
      local_3b8 = 0xffffffff;
      local_480 = &local_3a4;
      local_488 = local_168;
      local_468 = 1;
      local_470 = uVar6;
      uStack_410 = local_440;
      local_408 = uStack_438;
      uStack_400 = local_430;
      FUN_140f30c7e(&local_398,plVar4,&local_428,&local_238);
      if ((longlong **)(param_1 + 0x15e8) != &local_398) {
        FUN_140f30d7a((longlong **)(param_1 + 0x15e8),&local_398);
      }
      if (local_398 == (longlong *)0x0) {
        local_1d8 = (undefined8 *)0x0;
        uStack_1d0 = 0;
        uStack_1e8 = 0;
        local_1e0 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_1c8 = 0;
        local_238 = 0x3f80000000000000;
        uStack_230 = 1;
        *(undefined1 *)(param_1 + 0x1798) = 1;
        *(undefined8 *)(param_1 + 0x1790) = 0x3f80000000000000;
        lVar7 = 0;
        lVar5 = local_460;
      }
      else {
        (**(code **)(*local_398 + 0x30))(local_398,&local_238,0,&local_398);
        lVar5 = local_460;
        *(undefined1 *)(param_1 + 0x1798) = (undefined1)uStack_230;
        *(undefined8 *)(param_1 + 0x1790) = local_238;
        lVar7 = local_228;
        if (DAT_14c950c29 != '\0') {
          if (local_228 == 0) {
            lVar7 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar7 = local_228;
          }
        }
      }
      *(longlong *)(param_1 + 0x17a0) = lVar7;
      if (&local_238 != (undefined8 *)(param_1 + 0x1790)) {
        if ((char)local_1c8 == '\x01') {
          if ((*(char *)(param_1 + 0x1800) != '\0') && (*(longlong *)(param_1 + 0x17f0) != 0)) {
            FUN_1400020a8();
          }
          *(undefined8 *)(param_1 + 0x17c8) = uStack_200;
          *(undefined4 *)(param_1 + 0x17b8) = (undefined4)uStack_210;
          *(undefined4 *)(param_1 + 0x17bc) = uStack_210._4_4_;
          *(undefined4 *)(param_1 + 0x17c0) = (undefined4)local_208;
          *(undefined4 *)(param_1 + 0x17c4) = local_208._4_4_;
          *(undefined4 *)(param_1 + 0x17a8) = (undefined4)uStack_220;
          *(undefined4 *)(param_1 + 0x17ac) = uStack_220._4_4_;
          *(undefined4 *)(param_1 + 0x17b0) = (undefined4)local_218;
          *(undefined4 *)(param_1 + 0x17b4) = local_218._4_4_;
          *(undefined8 *)(param_1 + 0x17f0) = 0;
          lVar7 = (longlong)(int)uStack_1d0;
          *(int *)(param_1 + 0x17f8) = (int)uStack_1d0;
          if (lVar7 == 0) {
            *(undefined4 *)(param_1 + 0x17fc) = 2;
          }
          else {
            _Src = &local_1f8;
            if (local_1d8 != (undefined8 *)0x0) {
              _Src = local_1d8;
            }
            FUN_144891736((void *)(param_1 + 0x17d0),uStack_1d0 & 0xffffffff,0);
            _Dst = *(void **)(param_1 + 0x17f0);
            if (*(void **)(param_1 + 0x17f0) == (void *)0x0) {
              _Dst = (void *)(param_1 + 0x17d0);
            }
            memcpy(_Dst,_Src,lVar7 << 4);
          }
          uVar3 = 1;
        }
        else {
          if (*(char *)(param_1 + 0x1800) == '\0') goto LAB_140f30951;
          if (*(longlong *)(param_1 + 0x17f0) != 0) {
            FUN_1400020a8();
          }
          uVar3 = 0;
        }
        *(undefined1 *)(param_1 + 0x1800) = uVar3;
      }
LAB_140f30951:
      if (((char)local_1c8 == '\x01') && (local_1d8 != (undefined8 *)0x0)) {
        FUN_1400020a8();
      }
      if (lVar5 != 0) {
        local_240 = local_280;
        local_23c = 1;
        FUN_140f30e64(lVar5,*(undefined8 *)(param_1 + 0x14e8));
      }
      if (local_2a8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_2a8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_2a8)(local_2a8);
          LOCK();
          piVar1 = (int *)((longlong)local_2a8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_2a8 + 0x10))(local_2a8);
          }
        }
      }
      if (local_320 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_320 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_320)(local_320);
          LOCK();
          piVar1 = (int *)((longlong)local_320 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_320 + 0x10))(local_320);
          }
        }
      }
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_b0 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b0 + 0x10))(local_b0);
          }
        }
      }
      if ((local_f0 == '\x01') && (local_100 != 0)) {
        FUN_1400020a8();
      }
      uVar6 = 1;
      goto LAB_140f309d1;
    }
  }
  uVar6 = 0;
LAB_140f309d1:
  if ((local_70 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f30c7e FUN_140f30c7e body=251 status=ok
// SIG undefined FUN_140f30c7e(void)

longlong *
FUN_140f30c7e(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,longlong *param_6,undefined4 param_7,longlong param_8,
             undefined1 param_9)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  *param_1 = param_2;
  param_1[1] = param_8;
  plVar2 = param_3;
  plVar3 = param_1 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  param_1[0xe] = param_3[0xc];
  lVar1 = param_3[0xd];
  param_1[0xf] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(int *)(param_1 + 0x10) = (int)param_3[0xe];
  plVar2 = param_4;
  plVar3 = param_1 + 0x11;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  param_1[0x1d] = param_4[0xc];
  lVar1 = param_4[0xd];
  param_1[0x1e] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(int *)(param_1 + 0x1f) = (int)param_4[0xe];
  param_1[0x20] = *param_5;
  param_1[0x21] = *param_6;
  *(int *)(param_1 + 0x22) = (int)param_6[1];
  *(undefined4 *)((longlong)param_1 + 0x114) = param_7;
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
  }
  *(undefined4 *)(param_1 + 0x23) = uVar4;
  *(undefined1 *)((longlong)param_1 + 0x11c) = param_9;
  return param_1;
}



// FUNCTION 140f30d7a FUN_140f30d7a body=233 status=ok
// SIG undefined FUN_140f30d7a(void)

undefined8 * FUN_140f30d7a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (*(char *)(param_1 + 0x24) == '\x01') {
    FUN_140302978(param_1);
  }
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  puVar5 = param_2 + 2;
  puVar6 = param_1 + 2;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0xe] = param_2[0xe];
  lVar4 = param_2[0xf];
  param_1[0xf] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  puVar5 = param_2 + 0x11;
  puVar6 = param_1 + 0x11;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x1d] = param_2[0x1d];
  lVar4 = param_2[0x1e];
  param_1[0x1e] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  uVar1 = param_2[0x21];
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x10d);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x115);
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x10d) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x115) = uVar3;
  *(undefined1 *)(param_1 + 0x24) = 1;
  return param_1;
}



// FUNCTION 140f30e64 FUN_140f30e64 body=495 status=ok
// SIG undefined FUN_140f30e64(void)

void FUN_140f30e64(longlong *param_1,longlong param_2,float *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  if (((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) &&
     ((*(char *)(param_3 + 1) != '\x01' || (0.0 < *param_3)))) {
    if ((longlong)(int)param_1[0xf7] != 0) {
      lVar7 = param_1[0xf6];
      lVar9 = (longlong)(int)param_1[0xf7] << 4;
      do {
        lVar6 = FUN_14479d2ce(lVar7);
        if (lVar6 == param_2) goto LAB_140f30fa0;
        lVar7 = lVar7 + 0x10;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
    }
    lVar7 = param_1[0x16];
    if (((lVar7 != 0) || (lVar7 = FUN_1448abda6(param_1), lVar7 != 0)) &&
       ((*(byte *)(lVar7 + 0x155) & 0x20) == 0)) {
      puVar5 = (uint *)FUN_140f31060(param_1 + 0xf6);
      uVar3 = *(uint *)(param_2 + 0xc);
      *puVar5 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      uVar3 = *(uint *)(lVar9 + 0x10);
      if (*(uint *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
        }
        LOCK();
        uVar3 = *(uint *)(lVar9 + 0x10);
        bVar10 = uVar3 == 0;
        if (bVar10) {
          *(uint *)(lVar9 + 0x10) = uVar8;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar3 = uVar8;
        }
      }
      puVar5[1] = uVar3;
      if (*(char *)(param_3 + 1) == '\x01') {
        puVar5[2] = (uint)(*param_3 + *(float *)(lVar7 + 0x930));
        *(undefined1 *)(puVar5 + 3) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0xf8) = 1;
      }
      (**(code **)(*param_1 + 0xa38))(param_1,param_2,param_3);
      (**(code **)(*param_1 + 0xa30))(param_1);
      if ((int)param_1[0xf7] == 1) {
        uVar4 = (**(code **)(*param_1 + 0xa58))(param_1);
        cVar2 = (**(code **)(*param_1 + 0x3b8))(param_1);
        if ((char)uVar4 != cVar2) {
          (**(code **)(*param_1 + 0x3b0))(param_1,uVar4);
        }
        FUN_1447f69b6(param_1 + 199);
      }
    }
  }
LAB_140f30fa0:
  if (*(char *)(param_3 + 1) == '\x01') {
    *(undefined1 *)(param_3 + 1) = 0;
  }
  return;
}



// FUNCTION 140f31060 FUN_140f31060 body=64 status=ok
// SIG undefined FUN_140f31060(void)

longlong FUN_140f31060(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140f310b8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_140f310a0(lVar2,1);
  return lVar2;
}



// FUNCTION 140f310a0 FUN_140f310a0 body=24 status=ok
// SIG undefined FUN_140f310a0(void)

void FUN_140f310a0(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140f310b8 FUN_140f310b8 body=269 status=ok
// SIG undefined FUN_140f310b8(void)

void FUN_140f310b8(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140f311d4 FUN_140f311d4 body=73 status=ok
// SIG undefined FUN_140f311d4(void)

undefined8 * FUN_140f311d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f31226 FUN_140f31226 body=241 status=ok
// SIG undefined FUN_140f31226(void)

undefined8 * FUN_140f31226(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar3 = FUN_14007ca06();
  FUN_14077009c(param_1,uVar3);
  *param_1 = &PTR_FUN_14b3a5d60;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = &DAT_41200000;
  param_1[0x10] = &DAT_41200000;
  *(undefined4 *)((longlong)param_1 + 0x87) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3e800000;
  *(undefined2 *)(param_1 + 0x12) = 0x100;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puVar2 = param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      plVar1 = param_1 + 0x13;
      param_1[0x16] = &DAT_14cb88c80;
      param_1[0x15] = param_1;
      lVar4 = DAT_14cb88c80;
      while( true ) {
        param_1[0x13] = lVar4;
        LOCK();
        lVar5 = *(longlong *)param_1[0x16];
        bVar6 = lVar4 == lVar5;
        if (bVar6) {
          *(longlong *)param_1[0x16] = (longlong)plVar1;
          lVar5 = lVar4;
        }
        UNLOCK();
        if (bVar6) break;
        param_1[0x13] = lVar5;
        lVar4 = *(longlong *)param_1[0x16];
      }
      if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 8) = plVar1;
      }
      return param_1;
    }
    if ((*(uint *)(puVar2 + 1) & 0x30) != 0) break;
    puVar2 = (undefined8 *)puVar2[4];
  }
  return param_1;
}



// FUNCTION 140f31318 FUN_140f31318 body=286 status=ok
// SIG undefined FUN_140f31318(void)

undefined8 FUN_140f31318(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140f31430;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f31430;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140f31430:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f313dd;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140f313dd;
    }
  }
  uVar6 = 0;
LAB_140f313dd:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f31438 FUN_140f31438 body=320 status=ok
// SIG undefined FUN_140f31438(void)

void FUN_140f31438(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x1888);
  if ((lVar3 != 0) && (lVar3 == *param_2)) {
    if (*(char *)(param_1 + 0x1640) == '\x02') {
      iVar1 = *(int *)(lVar3 + 0x4f0);
      if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar3 + 0x880))) {
        lVar6 = lVar3 + 0x4f8;
        if (*(longlong *)(lVar3 + 0x878) != 0) {
          lVar6 = *(longlong *)(lVar3 + 0x878);
        }
        puVar5 = (undefined8 *)((longlong)iVar1 * 0x38 + lVar6);
        if (puVar5 != (undefined8 *)0x0) {
          if (*(char *)(puVar5 + 4) == '\x04') {
            local_48 = (undefined8 *)puVar5[2];
            local_58 = (undefined8 **)*puVar5;
            uStack_50 = (undefined8 **)puVar5[1];
          }
          else {
            FUN_1400b56fe(local_40,puVar5,CONCAT71((int7)((ulonglong)lVar6 >> 8),4));
            pppuVar4 = (undefined8 ***)&DAT_14c9ab228;
            if (local_20 != 0) {
              pppuVar4 = local_40;
            }
            local_48 = pppuVar4[2];
            local_58 = *pppuVar4;
            uStack_50 = pppuVar4[1];
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
            if (pcVar2 != (code *)0x0) {
              pppuVar4 = local_40;
              if (0x18 < local_28) {
                pppuVar4 = (undefined8 ***)local_40[0];
              }
              (*pcVar2)(pppuVar4);
            }
            if (0x18 < local_28) {
              FUN_1400020a8(local_40[0]);
            }
            lVar3 = *(longlong *)(param_1 + 0x1888);
          }
          *(undefined8 **)(param_1 + 0x18a8) = local_48;
          *(undefined4 *)(param_1 + 0x1898) = (undefined4)local_58;
          *(undefined4 *)(param_1 + 0x189c) = local_58._4_4_;
          *(undefined4 *)(param_1 + 0x18a0) = (undefined4)uStack_50;
          *(undefined4 *)(param_1 + 0x18a4) = uStack_50._4_4_;
        }
      }
    }
    if (*(char *)(lVar3 + 0xc30) == '\0') {
      FUN_14064d5a6();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f3157a FUN_140f3157a body=425 status=ok
// SIG undefined FUN_140f3157a(void)

void FUN_140f3157a(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 ***pppuVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(char *)(param_1 + 0x178) != '\x03') ||
      (lVar4 = *(longlong *)(param_1 + 0x1858), lVar4 == 0)) || (lVar4 != *param_2))
  goto LAB_140f31675;
  if (*(char *)(param_1 + 0x1640) == '\x02') {
    iVar1 = *(int *)(lVar4 + 0x4f0);
    if (((longlong)iVar1 < 0) || (*(int *)(lVar4 + 0x880) <= iVar1)) {
LAB_140f31707:
      uVar3 = 0;
    }
    else {
      lVar7 = lVar4 + 0x4f8;
      if (*(longlong *)(lVar4 + 0x878) != 0) {
        lVar7 = *(longlong *)(lVar4 + 0x878);
      }
      puVar6 = (undefined8 *)((longlong)iVar1 * 0x38 + lVar7);
      if (puVar6 == (undefined8 *)0x0) goto LAB_140f31707;
      if (*(char *)(puVar6 + 4) == '\x04') {
        local_48 = (undefined8 *)puVar6[2];
        local_58 = (undefined8 *)*puVar6;
        puStack_50 = (undefined8 *)puVar6[1];
      }
      else {
        FUN_1400b56fe(local_40,puVar6,CONCAT71((int7)((ulonglong)lVar7 >> 8),4));
        pppuVar5 = (undefined8 ***)&DAT_14c9ab228;
        if (local_20 != 0) {
          pppuVar5 = local_40;
        }
        local_48 = pppuVar5[2];
        local_58 = *pppuVar5;
        puStack_50 = pppuVar5[1];
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
        if (pcVar2 != (code *)0x0) {
          pppuVar5 = local_40;
          if (0x18 < local_28) {
            pppuVar5 = (undefined8 ***)local_40[0];
          }
          (*pcVar2)(pppuVar5);
        }
        if (0x18 < local_28) {
          FUN_1400020a8(local_40[0]);
        }
        lVar4 = *(longlong *)(param_1 + 0x1858);
      }
      *(undefined8 **)(param_1 + 0x1880) = local_48;
      *(undefined8 **)(param_1 + 0x1870) = local_58;
      *(undefined8 **)(param_1 + 0x1878) = puStack_50;
      *(undefined8 *)(param_1 + 0x16f0) = *(undefined8 *)(param_1 + 0x1880);
      *(undefined4 *)(param_1 + 0x16e0) = *(undefined4 *)(param_1 + 0x1870);
      *(undefined4 *)(param_1 + 0x16e4) = *(undefined4 *)(param_1 + 0x1874);
      *(undefined4 *)(param_1 + 0x16e8) = *(undefined4 *)(param_1 + 0x1878);
      *(undefined4 *)(param_1 + 0x16ec) = *(undefined4 *)(param_1 + 0x187c);
      *(undefined1 *)(param_1 + 0x16f8) = 2;
      *(undefined1 *)(param_1 + 0x1730) = 0;
      uVar3 = 1;
    }
    (&DAT_00001868)[param_1] = uVar3;
  }
  if (*(char *)(lVar4 + 0xc30) == '\0') {
    FUN_14064d5a6();
  }
LAB_140f31675:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f31724 FUN_140f31724 body=286 status=ok
// SIG undefined FUN_140f31724(void)

undefined8 FUN_140f31724(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140f3183c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f3183c;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140f3183c:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f317e9;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140f317e9;
    }
  }
  uVar6 = 0;
LAB_140f317e9:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f31844 FUN_140f31844 body=33 status=ok
// SIG undefined FUN_140f31844(void)

void FUN_140f31844(longlong param_1)

{
  FUN_140f31866();
  FUN_1447f69b6(&DAT_00005128 + param_1);
  return;
}



// FUNCTION 140f31866 FUN_140f31866 body=540 status=ok
// SIG undefined FUN_140f31866(void)

void FUN_140f31866(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 ****ppppuVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  char local_b8 [8];
  longlong local_b0;
  longlong *plStack_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = *(longlong *)(param_1 + 0x3f70);
  if (lVar3 != 0) {
    local_b8[0] = *(char *)(lVar3 + 0xec8);
    local_b0 = 0;
    plStack_a8 = (longlong *)0x0;
    local_a0 = 0;
    FUN_1401f3db8(&local_b0,lVar3 + 0xed0);
    plVar5 = plStack_a8;
    local_98 = *(longlong *)(lVar3 + 0xee8);
    local_90 = *(undefined4 *)(lVar3 + 0xef0);
    local_88 = 0;
    lVar3 = local_98;
    if (((local_b8[0] == '\0') || (lVar3 = local_b0, local_b8[0] == '\x01')) ||
       (local_b8[0] == '\x02')) {
      bVar8 = lVar3 == 0;
    }
    else {
      bVar8 = true;
    }
    if (plStack_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_a8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_a8)(plStack_a8);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (!bVar8) {
      lVar3 = *(longlong *)(param_1 + 0x3f70);
      local_b8[0] = *(char *)(lVar3 + 0xec8);
      local_b0 = 0;
      plStack_a8 = (longlong *)0x0;
      local_a0 = 0;
      FUN_1401f3db8(&local_b0,lVar3 + 0xed0);
      local_98 = *(longlong *)(lVar3 + 0xee8);
      local_90 = *(undefined4 *)(lVar3 + 0xef0);
      local_88 = 0;
      local_80[0] = 0;
      local_58 = 0;
      FUN_1456bb102(local_80,param_1);
      FUN_140168de2(local_b8,local_50,local_80);
      cVar6 = FUN_144a7fca4(local_50);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppuVar7 = local_50;
        if (0x18 < local_38) {
          ppppuVar7 = (undefined8 ****)local_50[0];
        }
        (*pcVar4)(ppppuVar7);
      }
      if (0x18 < local_38) {
        FUN_1400020a8(local_50[0]);
      }
      FUN_144a5ac3a(local_80);
      plVar5 = plStack_a8;
      if (plStack_a8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_a8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_a8)(plStack_a8);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if (*(char *)(param_1 + 0x8358) != cVar6) {
        *(char *)(param_1 + 0x8358) = cVar6;
        FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x4b);
        FUN_148cce460(param_1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f31a84 FUN_140f31a84 body=1113 status=ok
// SIG undefined FUN_140f31a84(void)

void FUN_140f31a84(code *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined2 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  code *local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  longlong local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined *local_70;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_140f31866();
  lVar6 = (**(code **)(*param_2 + 0x118))(param_2);
  if (lVar6 == 0) {
LAB_140f31d74:
    lVar6 = (**(code **)(*param_2 + 0x100))(param_2);
    if (lVar6 != 0) {
      lVar11 = FUN_144a5dd5e();
      if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) goto LAB_140f31b05;
    }
    lVar6 = (**(code **)(*param_2 + 0x100))(param_2);
    if (lVar6 != 0) {
      lVar11 = FUN_144a2f878();
      if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) goto LAB_140f31b15;
    }
    plVar8 = (longlong *)(**(code **)(*param_2 + 0x100))(param_2);
    if (plVar8 == (longlong *)0x0) goto LAB_140f31c75;
    lVar6 = FUN_14102013a();
    if (((*(int *)(plVar8[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
        (*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
         lVar6 + 0x30)) || (lVar6 = (**(code **)(*plVar8 + 0x5e0))(plVar8), lVar6 == 0))
    goto LAB_140f31c75;
    lVar11 = FUN_144a2f878();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
        != lVar11 + 0x30)) goto LAB_140f31c75;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_100 = &local_e8;
      local_e8 = FUN_141030f22;
      local_f0 = FUN_14081d0ea;
      local_f8 = &LAB_1459f2e4c;
      local_108 = &LAB_148c39de3;
      local_110 = &LAB_1457a9eb2;
      local_118 = &DAT_149e063b2;
      local_120 = 0;
      local_128 = 0x10000004;
      local_130 = 0x10;
      local_138 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_140f31d74;
LAB_140f31b05:
    lVar6 = *(longlong *)(lVar6 + 0xf48);
    if (lVar6 == 0) goto LAB_140f31c75;
  }
LAB_140f31b15:
  if (param_2 != (longlong *)0x0) {
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (code *)0x0;
    lStack_e0 = 0;
    local_c8 = 0x3002;
    local_c0 = 0;
    local_88 = 0;
    local_80 = 0x200000000;
    FUN_1405c5fa2();
    local_70 = &DAT_14cb769e8;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = &PTR_FUN_14b0394b0;
    FUN_140f31ede(&local_e8,param_2);
    lVar11 = lStack_e0;
    if ((lStack_e0 == 0) && (lVar11 = lVar6, DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c(lVar6);
    }
    lStack_e0 = lVar11;
    pcVar4 = local_e8;
    if (((param_1 != (code *)0x0) && (local_e8 == (code *)0x0)) &&
       (pcVar4 = param_1, DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c(param_1);
      pcVar4 = param_1;
    }
    local_e8 = pcVar4;
    iVar1 = *(int *)(lVar6 + 0x53ec);
    *(int *)(lVar6 + 0x53ec) = iVar1 + 1;
    uVar7 = (ulonglong)*(int *)(lVar6 + 0x53e0);
    if ((longlong)uVar7 < 1) {
      *(int *)(lVar6 + 0x53ec) = iVar1;
    }
    else {
      bVar9 = false;
      do {
        lVar11 = uVar7 * 0x10 + -8;
        uVar10 = uVar7;
        while (((lVar2 = *(longlong *)(lVar6 + 0x53d8), *(int *)(lVar2 + lVar11) != 0 &&
                (plVar8 = *(longlong **)(lVar2 + -8 + lVar11), plVar8 != (longlong *)0x0)) &&
               (cVar5 = (**(code **)(*plVar8 + 0x60))(plVar8,&local_e8), cVar5 != '\0'))) {
          lVar11 = lVar11 + -0x10;
          bVar3 = uVar10 < 2;
          uVar10 = uVar10 - 1;
          if (bVar3) {
            *(int *)(lVar6 + 0x53ec) = *(int *)(lVar6 + 0x53ec) + -1;
            if (bVar9) goto LAB_140f31e81;
            goto LAB_140f31c23;
          }
        }
        uVar7 = uVar10 - 1;
        bVar9 = true;
      } while (1 < uVar10);
      *(int *)(lVar6 + 0x53ec) = *(int *)(lVar6 + 0x53ec) + -1;
LAB_140f31e81:
      FUN_14474d06a((longlong *)(lVar6 + 0x53d8),0);
    }
LAB_140f31c23:
    local_78 = (undefined **)&DAT_14a171d50;
    uVar7 = uStack_60 >> 0x20;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    if ((int)uVar7 != 0) {
      FUN_140115c12(&local_68,0);
    }
    local_70 = (undefined *)0x0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140f31c75:
  if ((local_50 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1447f69b6(&DAT_00005128 + (longlong)param_1);
  return;
}



// FUNCTION 140f31ede FUN_140f31ede body=443 status=ok
// SIG undefined FUN_140f31ede(void)

void FUN_140f31ede(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = (**(code **)(*param_2 + 0x140))(param_2,0);
  *(undefined4 *)(param_1 + 2) = uVar5;
  lVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(lVar1 + 4);
  lVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *param_1 = lVar1;
  lVar1 = (**(code **)(*param_2 + 0x110))(param_2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[1] = lVar1;
  plVar2 = (longlong *)(**(code **)(*param_2 + 0xd8))(param_2);
  if (param_1 + 6 != plVar2) {
    plVar3 = (longlong *)plVar2[6];
    if ((longlong *)plVar2[6] == (longlong *)0x0) {
      plVar3 = plVar2;
    }
    FUN_1400709d4(param_1 + 6,plVar3,(int)plVar2[7],*(undefined4 *)((longlong)param_1 + 0x6c));
  }
  lVar1 = (**(code **)(*param_2 + 0xe0))(param_2);
  if (lVar1 == 0) {
    local_38 = 0;
  }
  else {
    puVar4 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar1 + 8) != (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(lVar1 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,&local_38,puVar4,1);
  }
  if (param_1[3] != local_38) {
    param_1[5] = 0;
  }
  param_1[3] = local_38;
  lVar1 = (**(code **)(*param_2 + 0xe8))(param_2);
  (**(code **)(param_1[0xe] + 0x20))(param_1 + 0xe,0);
  param_1[0xf] = *(longlong *)(lVar1 + 8);
  FUN_1406022fe(param_1 + 0x10,lVar1 + 0x10);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f3209a FUN_140f3209a body=303 status=ok
// SIG undefined FUN_140f3209a(void)

void FUN_140f3209a(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if ((char)param_1[0x2f] != '\x03') {
    return;
  }
  if (param_2 == (longlong *)0x0) {
    param_1[0x9b4] = 0;
    FUN_14118c70e(param_1 + 0x9b5,&DAT_14cb77c90);
    goto LAB_140f32121;
  }
  lVar2 = (**(code **)(*param_2 + 0x108))(param_2);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x9b4] = lVar2;
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_2 + 0x100))(param_2);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) goto LAB_140f321b5;
      goto LAB_140f321bd;
    }
  }
  else {
LAB_140f321b5:
    FUN_1456cec3c(lVar2);
LAB_140f321bd:
    param_1[0x9b4] = lVar2;
  }
  plVar3 = (longlong *)(**(code **)(*param_2 + 0xd8))(param_2);
  if (param_1 + 0x9b5 != plVar3) {
    plVar4 = (longlong *)plVar3[6];
    if ((longlong *)plVar3[6] == (longlong *)0x0) {
      plVar4 = plVar3;
    }
    FUN_1400709d4(param_1 + 0x9b5,plVar4,(int)plVar3[7],*(undefined4 *)((longlong)param_1 + 0x4de4))
    ;
  }
LAB_140f32121:
  if (((*(byte *)((longlong)param_1 + 0x41a5) & 4) != 0) &&
     (cVar1 = (**(code **)(param_1[0x214] + 0x40))(param_1 + 0x214), cVar1 == '\0')) {
    FUN_1457c939e(param_1);
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x41a4) & 0x40) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f32149. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x928))(param_1,1);
  return;
}



// FUNCTION 140f321ca FUN_140f321ca body=3880 status=ok
// SIG undefined FUN_140f321ca(void)

void FUN_140f321ca(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined *puVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  float fVar18;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined8 *local_b0;
  int local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar8 = FUN_1447210f0();
  if ((((lVar8 == 0) || ((*(uint *)(lVar8 + 8) >> 0x1e & 1) != 0)) ||
      (lVar9 = FUN_1405e677a(DAT_14cb0d2b0,lVar8), *(char *)(lVar9 + 0x88) != '\0')) ||
     ((((char)param_1[0x2f] != '\x03' || (*(char *)((longlong)param_1 + 0x5d31) != '\0')) ||
      ((char)param_1[0x332] != '\0')))) goto LAB_140f32a12;
  *(char *)((longlong)param_1 + 0x5d31) = (char)param_2;
  uVar3 = param_1[5];
  if (uVar3 < 0xffffffff00000000) {
    plVar14 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar14 = (longlong *)0x0;
    }
    (**(code **)(*plVar14 + 0x58))(plVar14,param_1,uVar3,0x2d);
  }
  else {
    uVar16 = (uint)uVar3;
    if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
      puVar13 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar13 = DAT_14c998080;
      }
      if ((*(uint *)(puVar13 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0) {
        lVar12 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
        lVar9 = *(longlong *)(lVar12 + 0x18);
        if (*(longlong *)(lVar12 + 0x18) == 0) {
          lVar9 = lVar12 + 8;
        }
        *(uint *)(lVar9 + 4) = *(uint *)(lVar9 + 4) | 0x2000;
        *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
      }
    }
  }
  cVar6 = *(char *)((longlong)param_1 + 0x73eb);
  if (((int)param_1[0x8f8] < 1) || (fVar18 = (float)FUN_14055830e(), 0.0 < fVar18)) {
    if ((*(byte *)(param_1 + 0x8b3) & 2) == 0) {
      FUN_140960bca(param_1 + 0x825,0);
    }
    if (((*(char *)((longlong)param_1 + 0x73eb) == '\x01') && (cVar6 == '\x01')) &&
       (*(char *)((longlong)param_1 + 0x5d31) == '\x04')) goto LAB_140f322e2;
  }
  else if (*(char *)((longlong)param_1 + 0x73eb) == '\x01') {
LAB_140f322e2:
    FUN_1416c1800(param_1 + 0xe35,5);
  }
  if ((char)param_1[0xba6] != '\x02') {
    *(undefined1 *)(param_1 + 0xba6) = 2;
    uVar3 = param_1[5];
    if (uVar3 < 0xffffffff00000000) {
      plVar14 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar14 = (longlong *)0x0;
      }
      (**(code **)(*plVar14 + 0x58))(plVar14,param_1,uVar3,0x2c);
    }
    else {
      uVar16 = (uint)uVar3;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
        puVar13 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar13 = DAT_14c998080;
        }
        if ((*(uint *)(puVar13 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0) {
          lVar12 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
          lVar9 = *(longlong *)(lVar12 + 0x18);
          if (*(longlong *)(lVar12 + 0x18) == 0) {
            lVar9 = lVar12 + 8;
          }
          *(uint *)(lVar9 + 4) = *(uint *)(lVar9 + 4) | 0x1000;
          *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
        }
      }
    }
    FUN_140fbbe26(param_1);
  }
  lVar9 = (**(code **)(param_1[0x10c] + 0x10))(param_1 + 0x10c);
  if (*(char *)(lVar9 + 0x18) == '\0') {
    FUN_1403663e2(lVar9);
  }
  FUN_1400bc96c(lVar9 + 0x18,&DAT_14cbc1d58);
  FUN_1400bc96c(lVar9 + 0x40,&DAT_14cbc1d58);
  pcVar4 = *(code **)(*param_1 + 0x5e8);
  if (pcVar4 == FUN_140972dde) {
    lVar9 = param_1[0x76];
    if (lVar9 != 0) goto LAB_140f32440;
    pcVar4 = *(code **)(*param_1 + 0x5f8);
    if (pcVar4 == FUN_144784df4) {
      if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
        if (((*(int *)((longlong)param_1 + 0x75b4) != 0) &&
            (uVar16 = *(uint *)(param_1 + 0xeb6), -1 < (int)uVar16)) &&
           (((int)uVar16 < DAT_14c9647dc &&
            (((plVar14 = (longlong *)
                         ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
              plVar14 != (longlong *)0x0 &&
              ((int)plVar14[2] == *(int *)((longlong)param_1 + 0x75b4))) &&
             ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))))) {
          if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
            lVar9 = *plVar14;
          }
          else {
            lVar9 = 0;
          }
          lVar9 = lVar9 + 0x110;
          goto LAB_140f32426;
        }
      }
      else {
        lVar9 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_140f32426:
        if (lVar9 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x20);
          goto LAB_140f3242f;
        }
      }
    }
    else {
      lVar9 = (*pcVar4)(param_1);
LAB_140f3242f:
      if (lVar9 != 0) {
        lVar9 = *(longlong *)(lVar9 + 0x3b0);
        goto LAB_140f3243b;
      }
    }
LAB_140f32449:
    lVar9 = (**(code **)(param_1[0x223] + 0x20))(param_1 + 0x223);
    if (lVar9 != 0) {
      FUN_140ba2cd0(lVar9,&DAT_14cbc1d58,1);
    }
    FUN_140356874(param_1,0);
  }
  else {
    lVar9 = (*pcVar4)(param_1);
LAB_140f3243b:
    if (lVar9 == 0) goto LAB_140f32449;
LAB_140f32440:
    if ((*(byte *)(lVar9 + 0x39a) & 8) != 0) goto LAB_140f32449;
  }
  FUN_14111cb72(param_1);
  if (*(char *)((longlong)param_1 + 0x7923) == '\x01') {
    FUN_140ebee6c(param_1 + 0x9bd,DAT_14cbc1de0,1);
    iVar7 = (int)param_1[0xf2d] + (int)param_1[0xf2b];
    if (iVar7 == 0) {
      FUN_1440ae47e(param_1);
      iVar7 = (int)param_1[0xf2d] + (int)param_1[0xf2b];
    }
    if (iVar7 < 1) {
      if (param_1[0x7ee] != 0) {
        if (*(longlong *)(lVar8 + 0x1f0) == 0) {
          puVar10 = (undefined8 *)(lVar8 + 0x458);
        }
        else {
          puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x1f0) + 0xf0);
        }
        uVar11 = *puVar10;
        local_b0 = (undefined8 *)0x0;
        local_a8 = 0;
        FUN_1446efa72(&local_b0,0,3,0x10);
        puVar10 = local_b0;
        local_a8 = 3;
        *local_b0 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        local_b0[2] = lVar12;
        *local_b0 = &PTR_FUN_14b95cc50;
        local_b0[3] = 0;
        iVar7 = 0;
        if (param_1 != (longlong *)0x0) {
          uVar16 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(local_b0 + 3) = uVar16;
          if ((int)uVar16 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          iVar7 = *(int *)(lVar9 + 0x10);
          if (*(int *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar15 = DAT_14c964868 + 1;
            bVar17 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar17) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar15);
            }
            LOCK();
            iVar7 = *(int *)(lVar9 + 0x10);
            bVar17 = iVar7 == 0;
            if (bVar17) {
              *(int *)(lVar9 + 0x10) = iVar15;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar17) {
              iVar7 = iVar15;
            }
          }
        }
        *(int *)((longlong)puVar10 + 0x1c) = iVar7;
        puVar10[4] = FUN_1412f78d8;
        *(undefined4 *)(puVar10 + 5) = 0;
        local_98 = (code *)0x0;
        uStack_90 = (longlong *)((ulonglong)uStack_90._4_4_ << 0x20);
        FUN_14487d8d8(&local_98,&local_b0);
        local_58 = 1;
        local_108 = local_a0;
        local_a0[0] = 0;
        local_9c = 0xbf800000;
        FUN_1406f4044(uVar11,param_1 + 0xf82,&local_98,0x3c23d70a);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
        if (local_a8 != 0) {
          if (local_b0 == (undefined8 *)0x0) goto LAB_140f3267f;
          (**(code **)*local_b0)(local_b0,0);
          FUN_1446efa72(&local_b0,0,0,0x10);
          local_a8 = 0;
        }
        if (local_b0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      FUN_148cccd00(param_1);
    }
  }
LAB_140f3267f:
  pcVar4 = *(code **)(*param_1 + 0x5e8);
  if (pcVar4 == FUN_140972dde) {
    if (param_1[0x76] != 0) goto LAB_140f32a7d;
    pcVar4 = *(code **)(*param_1 + 0x5f8);
    if (pcVar4 == FUN_144784df4) {
      if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
        if (((*(int *)((longlong)param_1 + 0x75b4) != 0) &&
            (uVar16 = *(uint *)(param_1 + 0xeb6), -1 < (int)uVar16)) &&
           ((((int)uVar16 < DAT_14c9647dc &&
             ((plVar14 = (longlong *)
                         ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
              plVar14 != (longlong *)0x0 &&
              ((int)plVar14[2] == *(int *)((longlong)param_1 + 0x75b4))))) &&
            ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
            lVar9 = *plVar14;
          }
          else {
            lVar9 = 0;
          }
          lVar9 = lVar9 + 0x110;
          goto LAB_140f32a57;
        }
      }
      else {
        lVar9 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_140f32a57:
        if (lVar9 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x20);
          goto LAB_140f32a64;
        }
      }
    }
    else {
      lVar9 = (*pcVar4)(param_1);
LAB_140f32a64:
      if (lVar9 != 0) {
        lVar9 = *(longlong *)(lVar9 + 0x3b0);
        goto LAB_140f32a74;
      }
    }
  }
  else {
    lVar9 = (*pcVar4)(param_1);
LAB_140f32a74:
    if (lVar9 != 0) {
LAB_140f32a7d:
      cVar6 = FUN_14661cd1e(param_1);
      if (cVar6 != '\0') {
        FUN_1407afb5c(param_1,1,1);
      }
      plVar14 = (longlong *)FUN_140cf8aa6(param_1);
      if ((plVar14 != (longlong *)0x0) &&
         ((cVar6 = FUN_14030d5d4(plVar14), cVar6 != '\0' ||
          (cVar6 = FUN_141660e76(plVar14), cVar6 == '\0')))) {
        FUN_1410ef0a8(plVar14);
        cVar6 = FUN_140ae0922(plVar14);
        if (cVar6 != '\0') {
          FUN_1463cd9b8(plVar14,0);
          (**(code **)(*plVar14 + 0x1010))(plVar14);
        }
      }
      if (*(longlong *)(lVar8 + 0x170) != 0) {
        lVar9 = FUN_140425b9a();
        plVar14 = *(longlong **)(lVar8 + 0x170);
        if ((((plVar14 != (longlong *)0x0) && (lVar9 != 0)) && (lVar12 = plVar14[2], lVar12 != 0))
           && ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar12 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                == lVar9 + 0x30)))) {
          lVar9 = param_1[0x885];
          if (lVar9 != 0) {
            if (DAT_14cbadd90 == 0) {
              local_d0 = &local_98;
              local_98 = FUN_141030f22;
              local_c0 = FUN_14081d0ea;
              local_c8 = &LAB_1459f2e4c;
              local_d8 = &LAB_148c39de3;
              local_e0 = &LAB_1457a9eb2;
              local_e8 = &DAT_149e063b2;
              local_f0 = 0;
              local_f8 = 0x10000004;
              local_100 = 0x10;
              local_108 = (undefined2 *)CONCAT44(local_108._4_4_,0x3de0);
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            }
            if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
              (**(code **)(*plVar14 + 0x9b0))(plVar14,lVar9);
              if (*(longlong *)(lVar9 + 0xf48) != 0) {
                FUN_1466233fc(*(longlong *)(lVar9 + 0xf48) + 0x4ad0,param_1,
                              *(char *)((longlong)param_1 + 0x73ec) == '\x06');
              }
            }
          }
          if (plVar14[0x7e] != 0) {
            lVar12 = FUN_14030d660();
            lVar9 = plVar14[0x7e];
            if ((((lVar9 != 0) && (lVar12 != 0)) &&
                (lVar5 = *(longlong *)(lVar9 + 0x10), lVar5 != 0)) &&
               (((*(int *)(lVar12 + 0x38) <= *(int *)(lVar5 + 0x38) &&
                 (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8)
                  == lVar12 + 0x30)) &&
                (((char)param_1[0x2f] == '\x03' &&
                 ((*(char *)(lVar9 + 0x5f5) == '\x01' && (*(char *)(lVar9 + 0x5f6) == '\0')))))))) {
              uVar11 = FUN_1447210f0(param_1);
              FUN_144120578(1,uVar11);
            }
          }
        }
      }
      lVar9 = param_1[0x78];
      if (lVar9 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_d0 = &local_98;
          local_98 = FUN_141030f22;
          local_c0 = FUN_14081d0ea;
          local_c8 = &LAB_1459f2e4c;
          local_d8 = &LAB_148c39de3;
          local_e0 = &LAB_1457a9eb2;
          local_e8 = &DAT_149e063b2;
          local_f0 = 0;
          local_f8 = 0x10000004;
          local_100 = 0x10;
          local_108 = (undefined2 *)CONCAT44(local_108._4_4_,0x3de0);
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          lVar9 = param_1[0x78];
          if (lVar9 == 0) goto LAB_140f3271b;
        }
        if ((((DAT_14cbadd90 != 0) && (lVar12 = *(longlong *)(lVar9 + 0x10), lVar12 != 0)) &&
            (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
           (*(longlong *)
             (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
            DAT_14cbadd90 + 0x30)) {
          lVar12 = param_1[0x39];
          if (lVar12 == 0) {
            local_88 = DAT_14c8464f0;
            local_98 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_90 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            local_98 = *(code **)(lVar12 + 0x260);
            uStack_90 = *(longlong **)(lVar12 + 0x268);
            local_88 = *(undefined8 *)(lVar12 + 0x270);
          }
          FUN_1441f3558(lVar9,&local_98);
        }
      }
    }
  }
LAB_140f3271b:
  FUN_141864f6c(param_1,param_2);
  if (((longlong *)param_1[0x7ee] == (longlong *)0x0) ||
     (cVar6 = (**(code **)(*(longlong *)param_1[0x7ee] + 0x80))(), cVar6 == '\0')) {
    pcVar4 = *(code **)(*param_1 + 0x5e8);
    if (pcVar4 == FUN_140972dde) {
      lVar9 = param_1[0x76];
      if (lVar9 != 0) goto LAB_140f32811;
      pcVar4 = *(code **)(*param_1 + 0x5f8);
      if (pcVar4 == FUN_144784df4) {
        if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (((*(int *)((longlong)param_1 + 0x75b4) != 0) &&
              (uVar16 = *(uint *)(param_1 + 0xeb6), -1 < (int)uVar16)) &&
             (((int)uVar16 < DAT_14c9647dc &&
              (((plVar14 = (longlong *)
                           ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
                plVar14 != (longlong *)0x0 &&
                ((int)plVar14[2] == *(int *)((longlong)param_1 + 0x75b4))) &&
               ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))))) {
            if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
              lVar9 = *plVar14;
            }
            else {
              lVar9 = 0;
            }
            lVar9 = lVar9 + 0x110;
            goto LAB_140f327f7;
          }
        }
        else {
          lVar9 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_140f327f7:
          if (lVar9 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x20);
            goto LAB_140f32800;
          }
        }
      }
      else {
        lVar9 = (*pcVar4)(param_1);
LAB_140f32800:
        if (lVar9 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x3b0);
          goto LAB_140f3280c;
        }
      }
    }
    else {
      lVar9 = (*pcVar4)(param_1);
LAB_140f3280c:
      if (lVar9 != 0) {
LAB_140f32811:
        if (((*(byte *)(lVar9 + 0x39a) & 8) == 0) &&
           ((*(byte *)((longlong)param_1 + 0x41a5) & 4) != 0)) goto LAB_140f3298b;
      }
    }
    if (*(longlong *)(lVar8 + 0x1f0) == 0) {
      puVar10 = (undefined8 *)(lVar8 + 0x458);
    }
    else {
      puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x1f0) + 0xf0);
    }
    uVar11 = *puVar10;
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar10 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_b0[2] = lVar9;
    *local_b0 = &PTR_FUN_14b95c410;
    local_b0[3] = 0;
    iVar7 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar16 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_b0 + 3) = uVar16;
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar7 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar7 = *(int *)(lVar8 + 0x10);
        bVar17 = iVar7 == 0;
        if (bVar17) {
          *(int *)(lVar8 + 0x10) = iVar15;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iVar7 = iVar15;
        }
      }
    }
    *(int *)((longlong)puVar10 + 0x1c) = iVar7;
    puVar10[4] = param_1;
    local_98 = (code *)0x0;
    uStack_90 = (longlong *)((ulonglong)uStack_90 & 0xffffffff00000000);
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    FUN_14016fdb0(uVar11,local_a0,&local_98);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    if (local_a8 != 0) {
      if (local_b0 == (undefined8 *)0x0) goto LAB_140f3298b;
      (**(code **)*local_b0)(local_b0,0);
      FUN_1446efa72(&local_b0,0,0,0x10);
      local_a8 = 0;
    }
    if (local_b0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140f3298b:
  uVar11 = FUN_1447210f0(param_1);
  FUN_14189b2f2(&local_98,uVar11);
  if (uStack_90 != (longlong *)0x0) {
    iVar7 = (int)uStack_90[1];
    do {
      if (iVar7 == 0) {
        plVar14 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar15 = (int)uStack_90[1];
      bVar17 = iVar7 == iVar15;
      if (bVar17) {
        *(int *)(uStack_90 + 1) = iVar7 + 1;
        iVar15 = iVar7;
      }
      iVar7 = iVar15;
      UNLOCK();
      plVar14 = uStack_90;
    } while (!bVar17);
    LOCK();
    piVar1 = (int *)((longlong)uStack_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*uStack_90 + 0x10))();
    }
    if (plVar14 != (longlong *)0x0) {
      if (local_98 != (code *)0x0) {
        FUN_143dd1e24(local_98,param_1,1);
      }
      LOCK();
      plVar2 = plVar14 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
LAB_140f32a12:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f330f4 FUN_140f330f4 body=9201 status=ok
// SIG undefined FUN_140f330f4(void)

void FUN_140f330f4(undefined1 *param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  code *pcVar4;
  longlong *plVar5;
  byte bVar6;
  undefined1 uVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  undefined8 uVar15;
  code *****pppppcVar16;
  code *****pppppcVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  int iVar29;
  longlong lVar30;
  undefined8 *****pppppuVar31;
  undefined1 **ppuVar32;
  longlong lVar33;
  code ****ppppcVar34;
  bool bVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined1 auStack_378 [32];
  undefined4 *local_358;
  undefined1 *local_348;
  longlong local_340;
  longlong local_338;
  undefined1 local_329;
  undefined1 *local_328;
  undefined1 *local_320;
  undefined1 **local_318;
  longlong *plStack_310;
  undefined1 **local_300;
  code *local_2f8;
  uchar auStack_2f0 [8];
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  byte local_2c8;
  undefined1 local_2c0 [32];
  undefined1 local_2a0 [32];
  byte local_280 [8];
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  byte local_258;
  undefined1 local_250 [32];
  undefined1 local_230 [40];
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  byte local_1e8;
  undefined8 ****local_1e0;
  GUID *local_1d8;
  longlong local_1d0;
  ushort local_1c8;
  byte local_1c0 [32];
  byte local_1a0;
  code ****local_198;
  undefined8 ****local_190;
  longlong local_188;
  ushort local_180;
  byte local_178 [32];
  byte local_158;
  undefined1 local_150 [32];
  longlong local_130;
  undefined4 local_128;
  longlong local_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  longlong *plStack_f0;
  char local_e4;
  ulonglong local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint local_90;
  uint local_8c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if ((*(longlong *)(param_1 + 0x230) == 0) || ((param_1[0x240] & 0x45) != 5)) goto LAB_140f33142;
  plVar21 = *(longlong **)(param_1 + 0x238);
  pcVar4 = *(code **)(*plVar21 + 0x5e8);
  if (pcVar4 == FUN_140972dde) {
    lVar13 = plVar21[0x76];
    if (lVar13 == 0) {
      pcVar4 = *(code **)(*plVar21 + 0x5f8);
      if (pcVar4 == FUN_144784df4) {
        if (*(code **)(plVar21[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (*(int *)((longlong)plVar21 + 0x75b4) != 0) {
            uVar24 = *(uint *)(plVar21 + 0xeb6);
            lVar13 = 0;
            if (((int)uVar24 < 0) || (DAT_14c9647dc <= (int)uVar24)) goto LAB_140f33233;
            plVar12 = (longlong *)
                      ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
            if ((plVar12 != (longlong *)0x0) &&
               (((int)plVar12[2] == *(int *)((longlong)plVar21 + 0x75b4) &&
                ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
                lVar13 = *plVar12;
              }
              else {
                lVar13 = 0;
              }
              lVar13 = lVar13 + 0x110;
              goto LAB_140f34b99;
            }
          }
        }
        else {
          lVar13 = (**(code **)(plVar21[0x784] + 0x18))(plVar21 + 0x784);
LAB_140f34b99:
          if (lVar13 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20);
            goto LAB_140f34ba6;
          }
        }
      }
      else {
        lVar13 = (*pcVar4)();
LAB_140f34ba6:
        if (lVar13 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x3b0);
          goto LAB_140f33233;
        }
      }
      lVar13 = 0;
    }
  }
  else {
    lVar13 = (*pcVar4)();
  }
LAB_140f33233:
  param_1[0x240] = param_1[0x240] & 0xfd | (lVar13 != 0) * '\x02';
  param_1[0x241] = param_1[0x241] & 0xf7;
  lVar13 = FUN_140cf8aa6(*(undefined8 *)(param_1 + 0x238));
  if ((param_1[0x240] & 2) != 0) {
    local_318 = (undefined1 **)0x0;
    plStack_310 = (longlong *)0x0;
    lVar33 = *(longlong *)(param_1 + 0x238);
    if (*(int *)(lVar33 + 0x4de0) < 1) {
LAB_140f332e7:
      bVar6 = *(byte *)(lVar33 + 0x5d31);
      lVar33 = FUN_14867721a();
      if ((longlong)*(int *)(lVar33 + 0x48) == 0) {
        local_198 = (code ****)0x0;
      }
      else {
        local_198 = (code ****)0x0;
        lVar30 = 0;
        do {
          if (*(ulonglong *)(*(longlong *)(lVar33 + 0x40) + 8 + lVar30) == (ulonglong)bVar6) {
            local_198 = *(code *****)(*(longlong *)(lVar33 + 0x40) + lVar30);
            break;
          }
          lVar30 = lVar30 + 0x10;
        } while ((longlong)*(int *)(lVar33 + 0x48) * 0x10 != lVar30);
      }
      FUN_1400021e4(&local_198,&local_108);
      ppuVar32 = local_108;
      if ((int)uStack_100 == 0) {
        ppuVar32 = (undefined1 **)&DAT_149dfb77a;
      }
      if (ppuVar32 == (undefined1 **)0x0) {
        ppuVar32 = (undefined1 **)0x0;
      }
      else {
        pwVar14 = wcsrchr((wchar_t *)ppuVar32,L':');
        if ((pwVar14 != (wchar_t *)0x0) && (pwVar14[1] != L'\0')) {
          ppuVar32 = (undefined1 **)(pwVar14 + 1);
        }
      }
      FUN_14020fad6(&local_318,ppuVar32);
      if (local_108 != (undefined1 **)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      plVar21 = (longlong *)(lVar33 + 0x4da8);
      if (*(longlong **)(lVar33 + 0x4dd8) != (longlong *)0x0) {
        plVar21 = *(longlong **)(lVar33 + 0x4dd8);
      }
      local_198 = (code ****)*plVar21;
      if (((code *****)local_198 == (code *****)0x0) || (0xfffffffd < (int)plVar21[1] - 1U))
      goto LAB_140f332e7;
      FUN_1400021e4(&local_198,&local_108);
      if (local_318 != (undefined1 **)0x0) {
        FUN_1400020a8();
      }
      local_318 = local_108;
      plStack_310 = uStack_100;
    }
    local_1e8 = 0;
    FUN_140056680(&local_108,L"Start");
    (*(code *)(&PTR_FUN_14a1842f0)[local_1e8])(&local_208);
    local_208 = (undefined4)local_108;
    uStack_204 = local_108._4_4_;
    uStack_200 = (int)uStack_100;
    uStack_1fc = uStack_100._4_4_;
    local_1e8 = 4;
    local_358 = &local_208;
    FUN_140d767d6(&local_1e0,&DAT_14cbc67c0,2,L"Down");
    if ((*(longlong *)((longlong)local_1e0 + 0x3c) == 0) ||
       (*(char *)(local_1e0 + 7) < (char)local_1d8)) {
      local_2c8 = 0;
      FUN_140056680(&local_108,L"Start");
      (*(code *)(&PTR_FUN_14a1842f0)[local_2c8])(&local_2e8);
      local_2e8 = (undefined4)local_108;
      uStack_2e4 = local_108._4_4_;
      uStack_2e0 = (int)uStack_100;
      uStack_2dc = uStack_100._4_4_;
      local_2c8 = 4;
      local_358 = &local_2e8;
      FUN_140d767d6(local_2c0,&DAT_14cbc67c0,2,L"Down");
      FUN_140d76846(&local_198,local_2c0);
      bVar36 = false;
    }
    else {
      local_300 = local_318;
      if ((int)plStack_310 == 0) {
        local_300 = (undefined1 **)&DAT_149dfb77a;
      }
      local_258 = 0;
      FUN_140056680(&local_108,L"Start");
      (*(code *)(&PTR_FUN_14a1842f0)[local_258])(&local_278);
      local_278 = (undefined4)local_108;
      uStack_274 = local_108._4_4_;
      uStack_270 = (int)uStack_100;
      uStack_26c = uStack_100._4_4_;
      local_258 = 4;
      local_358 = &local_278;
      FUN_140d767d6(local_250,&DAT_14cbc67c0,2,L"Down");
      FUN_1457e18d1(&local_198,local_250,&local_300);
      bVar36 = true;
    }
    FUN_14027c224(&local_108,&local_198);
    if (*(longlong *)(param_1 + 0x238) == 0) {
      uVar27 = 0;
      uVar18 = 0;
    }
    else {
      uVar24 = *(uint *)(*(longlong *)(param_1 + 0x238) + 0xc);
      uVar27 = (ulonglong)uVar24;
      if ((int)uVar24 < DAT_14c9647dc) {
        lVar33 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
      }
      else {
        lVar33 = 0;
      }
      uVar18 = (ulonglong)*(uint *)(lVar33 + 0x10);
      if (*(uint *)(lVar33 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        uVar24 = DAT_14c964868 + 1;
        bVar35 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar35) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar24);
        }
        LOCK();
        uVar25 = *(uint *)(lVar33 + 0x10);
        bVar35 = uVar25 == 0;
        if (bVar35) {
          *(uint *)(lVar33 + 0x10) = uVar24;
          uVar25 = 0;
        }
        UNLOCK();
        if (bVar35) {
          uVar25 = uVar24;
        }
        uVar18 = (ulonglong)uVar25;
      }
    }
    uVar24 = local_90;
    uVar15 = DAT_14c9a3c28;
    if ((((char)local_108 == '\x01') && (*(longlong *)((longlong)uStack_100 + 0x3c) != 0)) &&
       ((char)local_f8 <= (char)uStack_100[7])) {
      lVar33 = (longlong)(int)local_90;
      local_90 = local_90 + 1;
      if (local_8c < local_90) {
        FUN_141225836(&local_98,uVar24);
      }
      lVar30 = CONCAT44(uStack_94,local_98);
      lVar33 = lVar33 * 0x40;
      *(undefined8 *)(lVar30 + lVar33) = uVar15;
      *(ulonglong *)(lVar30 + 8 + lVar33) = uVar27 | uVar18 << 0x20;
      puVar22 = (undefined8 *)(lVar30 + 0x10 + lVar33);
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22 = (undefined8 *)(lVar30 + 0x20 + lVar33);
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22 = (undefined8 *)(lVar30 + 0x30 + lVar33);
      *puVar22 = 0;
      puVar22[1] = 0;
      FUN_1404eec70(0,0);
    }
    lVar33 = *(longlong *)(*(longlong *)(param_1 + 0x238) + 0x4da0);
    if ((lVar33 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar33);
LAB_140f33669:
      uVar24 = *(uint *)(lVar33 + 0xc);
      if ((int)uVar24 < DAT_14c9647dc) {
        lVar33 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
      }
      else {
        lVar33 = 0;
      }
      uVar18 = (ulonglong)*(uint *)(lVar33 + 0x10);
      if (*(uint *)(lVar33 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        uVar25 = DAT_14c964868 + 1;
        bVar35 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar35) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar25);
        }
        LOCK();
        uVar11 = *(uint *)(lVar33 + 0x10);
        bVar35 = uVar11 == 0;
        if (bVar35) {
          *(uint *)(lVar33 + 0x10) = uVar25;
          uVar11 = 0;
        }
        UNLOCK();
        if (bVar35) {
          uVar11 = uVar25;
        }
        uVar18 = (ulonglong)uVar11;
      }
    }
    else {
      if (lVar33 != 0) goto LAB_140f33669;
      uVar24 = 0;
      uVar18 = 0;
    }
    uVar25 = local_90;
    uVar15 = DAT_14c9a3c30;
    if ((((char)local_108 == '\x01') && (*(longlong *)((longlong)uStack_100 + 0x3c) != 0)) &&
       ((char)local_f8 <= (char)uStack_100[7])) {
      lVar33 = (longlong)(int)local_90;
      local_90 = local_90 + 1;
      if (local_8c < local_90) {
        FUN_141225836(&local_98,uVar25);
      }
      lVar30 = CONCAT44(uStack_94,local_98);
      lVar33 = lVar33 * 0x40;
      *(undefined8 *)(lVar30 + lVar33) = uVar15;
      *(ulonglong *)(lVar30 + 8 + lVar33) = (ulonglong)uVar24 | uVar18 << 0x20;
      puVar22 = (undefined8 *)(lVar30 + 0x10 + lVar33);
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22 = (undefined8 *)(lVar30 + 0x20 + lVar33);
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22 = (undefined8 *)(lVar30 + 0x30 + lVar33);
      *puVar22 = 0;
      puVar22[1] = 0;
      FUN_1404eec70(0,0);
    }
    local_2f8 = (code *)0x0;
    auStack_2f0[0] = '\0';
    auStack_2f0[1] = '\0';
    auStack_2f0[2] = '\0';
    auStack_2f0[3] = '\0';
    auStack_2f0[4] = '\0';
    auStack_2f0[5] = '\0';
    auStack_2f0[6] = '\0';
    auStack_2f0[7] = '\0';
    CoCreateGuid((GUID *)&local_2f8);
    if ((*(longlong *)(param_1 + 0x238) != 0) && ((char)local_108 != '\0')) {
      FUN_14111b8d6(uStack_100,*(longlong *)(param_1 + 0x238),&local_2f8);
    }
    FUN_14027c198(&local_108);
    FUN_1404eec70(local_120,local_118);
    if (local_120 != 0) {
      FUN_1400020a8();
    }
    FUN_1404eecb3(local_130,local_128);
    if (local_130 != 0) {
      FUN_1400020a8();
    }
    FUN_1404eec06(local_150);
    (*(code *)(&PTR_FUN_14a1842f0)[local_158])(local_178);
    if (local_188 != 0) {
      FUN_1400020a8();
    }
    if (bVar36) {
      puVar19 = local_230;
    }
    else {
      puVar19 = local_2a0;
    }
    (*(code *)(&PTR_FUN_14a1842f0)[(byte)puVar19[0x20]])(puVar19);
    if (*(longlong *)(puVar19 + -0x10) != 0) {
      FUN_1400020a8();
    }
    (*(code *)(&PTR_FUN_14a1842f0)[local_1a0])(local_1c0);
    if (local_1d0 != 0) {
      FUN_1400020a8();
    }
    if (lVar13 != 0) {
      local_320 = &local_329;
      local_300 = &local_328;
      local_328 = &LAB_1440fecc4;
      auStack_2f0 = (uchar  [8])&local_300;
      local_2f8 = FUN_1411f620e;
      FUN_140d8b592(&local_108,lVar13);
      local_1e0 = (undefined8 ****)&DAT_14cb89450;
      local_190 = &local_1e0;
      local_198 = (code ****)FUN_140c4fac4;
      local_1d8 = (GUID *)&local_2f8;
      FUN_140d8b39e(&DAT_14cb89450,&local_108,lVar13);
    }
    if (local_318 != (undefined1 **)0x0) {
      FUN_1400020a8();
    }
  }
  uVar15 = FUN_14097cfe8();
  pppppcVar17 = *(code ******)(param_1 + 0x238);
  if (pppppcVar17 == (code *****)0x0) {
    pppppcVar17 = (code *****)0x0;
    ppppcVar34 = (code ****)0x0;
  }
  else {
    ppppcVar34 = pppppcVar17[0x9b4];
    if ((ppppcVar34 != (code ****)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(ppppcVar34);
      pppppcVar17 = *(code ******)(param_1 + 0x238);
    }
  }
  FUN_1457b32b0(uVar15,pppppcVar17,ppppcVar34);
  lVar33 = *(longlong *)(param_1 + 0x238);
  if ((longlong)*(int *)(lVar33 + 0x47c0) != 0) {
    lVar30 = *(longlong *)(lVar33 + 0x47b8);
    lVar33 = (longlong)*(int *)(lVar33 + 0x47c0) * 0x88;
    do {
      pppppcVar17 = (code *****)CONCAT71((int7)((ulonglong)pppppcVar17 >> 8),1);
      FUN_140f2f85c(lVar30,pppppcVar17);
      lVar30 = lVar30 + 0x88;
      lVar33 = lVar33 + -0x88;
    } while (lVar33 != 0);
    lVar33 = *(longlong *)(param_1 + 0x238);
  }
  FUN_14661cd94(lVar33);
  plVar21 = *(longlong **)(param_1 + 0x238);
  if ((int)plVar21[0x8f8] < 1) {
LAB_140f339c5:
    bVar6 = param_1[0x240] | 0x40;
    param_1[0x240] = bVar6;
    if ((*(byte *)(plVar21 + 0x8b3) & 2) == 0) {
      pppppcVar17 = (code *****)0x0;
      FUN_140960bca(plVar21 + 0x825,0);
      bVar6 = param_1[0x240];
      plVar21 = *(longlong **)(param_1 + 0x238);
    }
    param_1[0x240] = bVar6 & 0xbf;
  }
  else {
    fVar37 = (float)FUN_14055830e(plVar21[0x8f7]);
    plVar21 = *(longlong **)(param_1 + 0x238);
    if (0.0 < fVar37) goto LAB_140f339c5;
  }
  if ((char)plVar21[0x2f] == '\x03') {
    FUN_1447f69b6(plVar21 + 0xa05);
    plVar21 = *(longlong **)(param_1 + 0x238);
  }
  if (plVar21[0xeac] != 0) {
    plVar12 = (longlong *)(plVar21[0xeac] + 0x3a90);
    if (plVar21 == (longlong *)0x0) {
LAB_140f33a70:
      pppppcVar17 = (code *****)0x0;
    }
    else {
      uVar15 = FUN_1413dc03c();
      pppppcVar16 = (code *****)(**(code **)(*plVar21 + 0x288))(plVar21,uVar15);
      if (pppppcVar16 == (code *****)0x0) goto LAB_140f33a70;
      uVar15 = FUN_1413dc03c();
      pppppcVar17 = (code *****)FUN_144718840(pppppcVar16,uVar15);
      if (pppppcVar16 == pppppcVar17) goto LAB_140f33a70;
    }
    (**(code **)(*plVar12 + 0x30))(plVar12,pppppcVar17,0);
    plVar21 = *(longlong **)(param_1 + 0x238);
  }
  (**(code **)(plVar21[0x769] + 0x58))(plVar21 + 0x769);
  if (*(longlong *)(&DAT_00006850 + *(longlong *)(param_1 + 0x238)) != 0) {
    FUN_1457de438();
  }
  if (lVar13 != 0) {
    FUN_1410ef0a8(lVar13);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x230) + 0x68) == '\x01') {
    lVar33 = *(longlong *)(param_1 + 0x238);
    FUN_140fb62a4(lVar33 + 0x60e8,&DAT_14cbc67a0,1);
    pppppcVar17 = DAT_14cbc67a0;
    FUN_1412bb140(lVar33 + 0x60e8,DAT_14cbc67a0,1);
  }
  if ((param_2 != '\0') && (cVar8 = FUN_14661cd1e(*(undefined8 *)(param_1 + 0x238)), cVar8 != '\0'))
  {
    pppppcVar17 = (code *****)CONCAT71((int7)((ulonglong)pppppcVar17 >> 8),1);
    FUN_1407afb5c(*(undefined8 *)(param_1 + 0x238),pppppcVar17,1);
  }
  if ((*(longlong *)(*(longlong *)(param_1 + 0x230) + 0x88) != 0) &&
     (lVar33 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x238) + 0x3a28) + 0x10))
                         (*(longlong *)(param_1 + 0x238) + 0x3a28), lVar33 != 0)) {
    local_e4 = '\0';
    local_c0 = 0;
    local_b8 = 0;
    local_108 = (undefined1 **)0x0;
    uStack_100 = (longlong *)0x0;
    local_f8 = (longlong *)0x0;
    plStack_f0 = (longlong *)0x0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_b4 = 0xffffffff00000080;
    local_ac = 0;
    local_a0 = 0;
    local_98 = 0;
    ppuVar32 = *(undefined1 ***)(*(longlong *)(param_1 + 0x230) + 0x88);
    plVar21 = *(longlong **)(*(longlong *)(param_1 + 0x230) + 0x90);
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
      LOCK();
      plVar12 = plVar21 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
      plVar12 = uStack_100;
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
      local_108 = ppuVar32;
      if (plVar21 == uStack_100) {
        LOCK();
        plVar12 = plVar21 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        plVar5 = uStack_100;
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar10 = *piVar1;
          UNLOCK();
          plVar12 = plVar21;
joined_r0x000140f33c4b:
          plVar5 = uStack_100;
          if (iVar10 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            plVar5 = uStack_100;
          }
        }
      }
      else {
        plVar5 = plVar21;
        if (uStack_100 != (longlong *)0x0) {
          LOCK();
          plVar2 = uStack_100 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            puVar22 = (undefined8 *)*uStack_100;
            uStack_100 = plVar21;
            (*(code *)*puVar22)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar10 = *piVar1;
            UNLOCK();
            goto joined_r0x000140f33c4b;
          }
        }
      }
      uStack_100 = plVar5;
      LOCK();
      plVar12 = plVar21 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      ppuVar32 = local_108;
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        ppuVar32 = local_108;
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          ppuVar32 = local_108;
        }
      }
    }
    local_108 = ppuVar32;
    pppppcVar17 = &local_198;
    FUN_140fbc5b2(lVar33 + 0x48,&local_198,&local_108);
    if (&local_198 != (code *****)(param_1 + 0x3a8)) {
      if (((ulonglong)local_198 & 0x100000000) == 0) {
        if (param_1[0x3ac] != '\x01') goto LAB_140f33cc9;
        uVar7 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x3a8) = local_198._0_4_;
        uVar7 = 1;
      }
      param_1[0x3ac] = uVar7;
    }
LAB_140f33cc9:
    local_98 = 0;
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_e0);
    plVar21 = plStack_f0;
    if (local_e4 == '\x01') {
      local_e4 = '\0';
    }
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_f0 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plStack_f0)(plStack_f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    plVar21 = uStack_100;
    if (uStack_100 != (longlong *)0x0) {
      LOCK();
      plVar12 = uStack_100 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*uStack_100)(uStack_100);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    lVar33 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x238));
    pppppcVar17 = *(code ******)(param_1 + 0x2e8);
    if (pppppcVar17 != (code *****)0x0) {
      uVar24 = (uint)pppppcVar17;
      if ((int)(uVar24 & 0xffffff) < *(int *)(lVar33 + 0x10)) {
        lVar30 = lVar33 + 0x18;
        if (*(longlong *)(lVar33 + 0x28) != 0) {
          lVar30 = *(longlong *)(lVar33 + 0x28);
        }
        if ((*(uint *)(lVar30 + (ulonglong)((uVar24 & 0xffffff) >> 5) * 4) >> (uVar24 & 0x1f) & 1)
            != 0) {
          lVar30 = *(longlong *)(lVar33 + 8);
          lVar26 = (ulonglong)(uVar24 & 0xffffff) * 0x70;
          if (((lVar30 + lVar26 != 0) && (*(code ******)(lVar30 + 0x60 + lVar26) == pppppcVar17)) &&
             (*(char *)(lVar30 + 1 + lVar26) != '\x04')) {
            FUN_1405a424c(lVar33);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x2e8) = 0;
  }
  uVar9 = FUN_140843f56(param_1);
  if ((param_2 == '\0') && (param_1[0x388] != '\x01')) {
    if (param_1[0x243] == '\0') {
      bVar6 = param_1[0x240];
      param_1[0x240] = bVar6 | 8;
      lVar33 = *(longlong *)(param_1 + 0x230);
      uVar28 = 1;
      if (lVar33 != 0) {
        if ((bVar6 & 1) != 0) {
          lVar33 = FUN_14011c2be(lVar33 + 0x18);
          if (lVar33 != 0) {
            uVar15 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x238) + 0x3a20) + 0x10))
                               (*(longlong *)(param_1 + 0x238) + 0x3a20);
            FUN_14036c7e6(uVar15,&local_108,lVar33,1);
            *(longlong **)(param_1 + 0x2b0) = local_f8;
            *(longlong **)(param_1 + 0x2b8) = plStack_f0;
            *(undefined4 *)(param_1 + 0x2a0) = (undefined4)local_108;
            *(undefined4 *)(param_1 + 0x2a4) = local_108._4_4_;
            *(int *)(param_1 + 0x2a8) = (int)uStack_100;
            *(undefined4 *)(param_1 + 0x2ac) = uStack_100._4_4_;
          }
          puVar19 = param_1 + 0x2a0;
          cVar8 = FUN_1403ae288(puVar19);
          if (cVar8 != '\0') {
            if (((param_1[0x240] & 2) != 0) && (0 < *(int *)(param_1 + 0x2e0))) {
              local_348 = param_1 + 0x208;
              lVar33 = *(longlong *)(param_1 + 0x230);
              local_108 = (undefined1 **)((ulonglong)local_108 & 0xffffffffffffff00);
              local_e0 = local_e0 & 0xffffffff00000000;
              FUN_1456bb102(&local_108,*(undefined8 *)(param_1 + 0x238));
              FUN_1448729ea(lVar33 + 0xa0,&local_1e0,&local_108);
              if (local_1c0[0] == 3) {
                uVar39 = local_1e0._0_4_;
              }
              else {
                FUN_1400b56fe(&local_198,&local_1e0,3);
                if (local_178[0] == 0) {
                  uVar39 = 0x3f800000;
                }
                else {
                  uVar39 = local_198._0_4_;
                }
                pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                                   (ulonglong)((uint)local_178[0] * 0x120));
                if (pcVar4 != (code *)0x0) {
                  pppppcVar17 = &local_198;
                  if (0x18 < local_180) {
                    pppppcVar17 = (code *****)local_198;
                  }
                  (*pcVar4)(pppppcVar17);
                }
                if (0x18 < local_180) {
                  FUN_1400020a8(local_198);
                }
              }
              *(undefined4 *)(param_1 + 0x210) = uVar39;
              FUN_14020a6cc(local_348,1);
              pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_1c0[0] * 0x120)
                                 );
              if (pcVar4 != (code *)0x0) {
                pppppuVar31 = &local_1e0;
                if (0x18 < local_1c8) {
                  pppppuVar31 = (undefined8 *****)local_1e0;
                }
                (*pcVar4)(pppppuVar31);
              }
              if (0x18 < local_1c8) {
                FUN_1400020a8(local_1e0);
              }
              lVar33 = DAT_14c9a3da0;
              if ((longlong)(int)local_e0 != 0) {
                lVar26 = (longlong)(int)local_e0 + -1;
                lVar30 = lVar26 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar30),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar30));
                if (*(longlong *)(lVar33 + lVar30) != 0) {
                  FUN_1400020a8();
                }
                lVar33 = DAT_14c9a3da0;
                iVar10 = (int)lVar26;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
                }
                *(undefined4 *)(lVar33 + lVar30) = 0xffffffff;
                iVar23 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar23 = DAT_14c9a3dd0;
                }
                *(int *)(lVar33 + 4 + lVar30) = iVar23;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar20 = &DAT_14c9a3db0;
                if (DAT_14c9a3dc0 != (undefined *)0x0) {
                  puVar20 = DAT_14c9a3dc0;
                }
                iVar23 = iVar10 + 0x1f;
                if (-1 < iVar10) {
                  iVar23 = iVar10;
                }
                bVar6 = (byte)lVar26 & 0x1f;
                DAT_14c9a3dd0 = iVar10;
                *(uint *)(puVar20 + (longlong)(iVar23 >> 5) * 4) =
                     *(uint *)(puVar20 + (longlong)(iVar23 >> 5) * 4) &
                     (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
                local_e0 = local_e0 & 0xffffffff00000000;
              }
              if (((char)local_108 == '\x03') && (local_f8 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_f8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_f8 + 0x10))();
                }
              }
              lVar33 = FUN_14008e0ae(puVar19);
              fVar37 = *(float *)(lVar33 + 0x54);
              fVar38 = powf(*(float *)(param_1 + 0x20c),(float)*(int *)(param_1 + 0x2e0));
              lVar33 = FUN_14008e0ae(puVar19);
              *(float *)(lVar33 + 0x58) = (1.0 / fVar38) * fVar37;
              FUN_14020a6cc(lVar33 + 0x50,1);
            }
            lVar33 = FUN_14008e0ae(puVar19);
            fVar37 = *(float *)(*(longlong *)(param_1 + 0x230) + 0x30);
            if (1.0 <= fVar37) {
              fVar37 = 1.0;
            }
            if (fVar37 <= 0.0) {
              fVar37 = 0.0;
            }
            FUN_1409d461e(lVar33,(*(float *)(lVar33 + 0x30) - *(float *)(lVar33 + 0x24)) * fVar37,0)
            ;
            lVar33 = FUN_14008e0ae(puVar19);
            *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(lVar33 + 0x54);
            if (*(longlong *)(param_1 + 0x2c0) == 0) {
              local_348 = puVar19;
              lVar33 = FUN_14008e0ae(puVar19);
              iVar10 = *(int *)(lVar33 + 0x50);
              if (iVar10 == 0) {
                FUN_1402a453c((int *)(lVar33 + 0x50));
                iVar10 = *(int *)(lVar33 + 0x50);
              }
              local_338 = DAT_14c9a3d60;
              local_340 = (longlong)iVar10 * 0x88;
              lVar33 = *(longlong *)(param_1 + 0x238);
              local_108 = (undefined1 **)0x0;
              uStack_100 = (longlong *)((ulonglong)uStack_100 & 0xffffffff00000000);
              FUN_1446efa72(&local_108,0,3,0x10);
              ppuVar32 = local_108;
              uStack_100 = (longlong *)CONCAT44(uStack_100._4_4_,3);
              *local_108 = (undefined1 *)&PTR_LAB_14a1c8700;
              LOCK();
              UNLOCK();
              puVar19 = (undefined1 *)(DAT_14c758608 + 1);
              lVar30 = DAT_14c758608 + 1;
              if (puVar19 == (undefined1 *)0x0) {
                LOCK();
                UNLOCK();
                puVar19 = (undefined1 *)(DAT_14c758608 + 2);
                lVar30 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar30;
              lVar30 = local_338 + local_340;
              local_108[2] = puVar19;
              *local_108 = (undefined1 *)&PTR_FUN_14b966030;
              local_108[3] = (undefined1 *)0x0;
              iVar10 = 0;
              if (lVar33 != 0) {
                uVar24 = *(uint *)(lVar33 + 0xc);
                *(uint *)(local_108 + 3) = uVar24;
                if ((int)uVar24 < DAT_14c9647dc) {
                  lVar33 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
                }
                else {
                  lVar33 = 0;
                }
                iVar10 = *(int *)(lVar33 + 0x10);
                if (*(int *)(lVar33 + 0x10) == 0) {
                  LOCK();
                  iVar10 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar23 = DAT_14c964868 + 1;
                  bVar36 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar10;
                  if (bVar36) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar23);
                  }
                  LOCK();
                  iVar10 = *(int *)(lVar33 + 0x10);
                  bVar36 = iVar10 == 0;
                  if (bVar36) {
                    *(int *)(lVar33 + 0x10) = iVar23;
                    iVar10 = 0;
                  }
                  UNLOCK();
                  if (bVar36) {
                    iVar10 = iVar23;
                  }
                }
              }
              *(int *)((longlong)ppuVar32 + 0x1c) = iVar10;
              ppuVar32[4] = param_1;
              FUN_140c67310(lVar30 + -0x18,&local_198,&local_108);
              puVar19 = local_348;
              if ((int)uStack_100 == 0) {
LAB_140f341d1:
                if (local_108 != (undefined1 **)0x0) {
                  FUN_1400020a8();
                }
              }
              else if (local_108 != (undefined1 **)0x0) {
                (**(code **)*local_108)(local_108,0);
                FUN_1446efa72(&local_108,0,0,0x10);
                uStack_100 = (longlong *)((ulonglong)uStack_100 & 0xffffffff00000000);
                goto LAB_140f341d1;
              }
              *(code *****)(param_1 + 0x2c0) = local_198;
            }
            if (*(longlong *)(param_1 + 0x2c8) == 0) {
              local_348 = puVar19;
              lVar26 = FUN_14008e0ae(puVar19);
              lVar33 = *(longlong *)(param_1 + 0x238);
              local_108 = (undefined1 **)0x0;
              uStack_100 = (longlong *)((ulonglong)uStack_100 & 0xffffffff00000000);
              FUN_1446efa72(&local_108,0,3,0x10);
              ppuVar32 = local_108;
              uStack_100 = (longlong *)CONCAT44(uStack_100._4_4_,3);
              *local_108 = (undefined1 *)&PTR_LAB_14b3f7890;
              LOCK();
              UNLOCK();
              puVar19 = (undefined1 *)(DAT_14c758608 + 1);
              lVar30 = DAT_14c758608 + 1;
              if (puVar19 == (undefined1 *)0x0) {
                LOCK();
                UNLOCK();
                puVar19 = (undefined1 *)(DAT_14c758608 + 2);
                lVar30 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar30;
              local_108[2] = puVar19;
              *local_108 = (undefined1 *)&PTR_FUN_14b9660a0;
              local_108[3] = (undefined1 *)0x0;
              iVar10 = 0;
              if (lVar33 != 0) {
                uVar24 = *(uint *)(lVar33 + 0xc);
                *(uint *)(local_108 + 3) = uVar24;
                if ((int)uVar24 < DAT_14c9647dc) {
                  lVar33 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
                }
                else {
                  lVar33 = 0;
                }
                iVar10 = *(int *)(lVar33 + 0x10);
                if (*(int *)(lVar33 + 0x10) == 0) {
                  LOCK();
                  iVar10 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar23 = DAT_14c964868 + 1;
                  bVar36 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar10;
                  if (bVar36) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar23);
                  }
                  LOCK();
                  iVar10 = *(int *)(lVar33 + 0x10);
                  bVar36 = iVar10 == 0;
                  if (bVar36) {
                    *(int *)(lVar33 + 0x10) = iVar23;
                    iVar10 = 0;
                  }
                  UNLOCK();
                  if (bVar36) {
                    iVar10 = iVar23;
                  }
                }
              }
              *(int *)((longlong)ppuVar32 + 0x1c) = iVar10;
              ppuVar32[4] = param_1;
              FUN_14036a282(lVar26 + 0x168,&local_198,&local_108);
              puVar19 = local_348;
              if ((int)uStack_100 == 0) {
LAB_140f34342:
                if (local_108 != (undefined1 **)0x0) {
                  FUN_1400020a8();
                }
              }
              else if (local_108 != (undefined1 **)0x0) {
                (**(code **)*local_108)(local_108,0);
                FUN_1446efa72(&local_108,0,0,0x10);
                uStack_100 = (longlong *)((ulonglong)uStack_100 & 0xffffffff00000000);
                goto LAB_140f34342;
              }
              *(code *****)(param_1 + 0x2c8) = local_198;
            }
            if ((*(char *)(*(longlong *)(param_1 + 0x230) + 0x3c) == '\0') &&
               (*(longlong *)(param_1 + 0x2d0) == 0)) {
              lVar30 = FUN_14008e0ae(puVar19);
              local_348 = *(undefined1 **)(param_1 + 0x238);
              local_108 = (undefined1 **)0x0;
              uStack_100 = (longlong *)((ulonglong)uStack_100 & 0xffffffff00000000);
              FUN_1446efa72(&local_108,0,3,0x10);
              ppuVar32 = local_108;
              uStack_100 = (longlong *)CONCAT44(uStack_100._4_4_,3);
              *local_108 = (undefined1 *)&PTR_LAB_14b3f7890;
              LOCK();
              UNLOCK();
              puVar19 = (undefined1 *)(DAT_14c758608 + 1);
              lVar33 = DAT_14c758608 + 1;
              if (puVar19 == (undefined1 *)0x0) {
                LOCK();
                UNLOCK();
                puVar19 = (undefined1 *)(DAT_14c758608 + 2);
                lVar33 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar33;
              local_108[2] = puVar19;
              *local_108 = (undefined1 *)&PTR_FUN_14b966110;
              local_108[3] = (undefined1 *)0x0;
              iVar10 = 0;
              if (local_348 != (undefined1 *)0x0) {
                uVar24 = *(uint *)(local_348 + 0xc);
                *(uint *)(local_108 + 3) = uVar24;
                if ((int)uVar24 < DAT_14c9647dc) {
                  lVar33 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
                }
                else {
                  lVar33 = 0;
                }
                iVar10 = *(int *)(lVar33 + 0x10);
                if (*(int *)(lVar33 + 0x10) == 0) {
                  LOCK();
                  iVar10 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar23 = DAT_14c964868 + 1;
                  bVar36 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar10;
                  if (bVar36) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar23);
                  }
                  LOCK();
                  iVar10 = *(int *)(lVar33 + 0x10);
                  bVar36 = iVar10 == 0;
                  if (bVar36) {
                    *(int *)(lVar33 + 0x10) = iVar23;
                    iVar10 = 0;
                  }
                  UNLOCK();
                  if (bVar36) {
                    iVar10 = iVar23;
                  }
                }
              }
              *(int *)((longlong)ppuVar32 + 0x1c) = iVar10;
              ppuVar32[4] = param_1;
              FUN_14036a282(lVar30 + 0x198,&local_198,&local_108);
              if ((int)uStack_100 == 0) {
LAB_140f344c5:
                if (local_108 != (undefined1 **)0x0) {
                  FUN_1400020a8();
                }
              }
              else if (local_108 != (undefined1 **)0x0) {
                (**(code **)*local_108)(local_108,0);
                FUN_1446efa72(&local_108,0,0,0x10);
                uStack_100 = (longlong *)((ulonglong)uStack_100 & 0xffffffff00000000);
                goto LAB_140f344c5;
              }
              *(code *****)(param_1 + 0x2d0) = local_198;
            }
            if ((param_1[0x240] & 2) != 0) {
              FUN_14142ad0e(param_1,1,&DAT_14cbc67b8);
            }
          }
          lVar33 = *(longlong *)(param_1 + 0x230);
          if ((*(longlong *)(param_1 + 0x248) == 0) && (*(char *)(lVar33 + 0x36) == '\x01')) {
            lVar33 = *(longlong *)(param_1 + 0x238);
            local_108 = (undefined1 **)0x0;
            uStack_100 = (longlong *)((ulonglong)uStack_100 & 0xffffffff00000000);
            FUN_1446efa72(&local_108,0,3,0x10);
            ppuVar32 = local_108;
            uStack_100 = (longlong *)CONCAT44(uStack_100._4_4_,3);
            *local_108 = (undefined1 *)&PTR_LAB_14b3e9ef0;
            LOCK();
            UNLOCK();
            puVar19 = (undefined1 *)(DAT_14c758608 + 1);
            lVar30 = DAT_14c758608 + 1;
            if (puVar19 == (undefined1 *)0x0) {
              LOCK();
              UNLOCK();
              puVar19 = (undefined1 *)(DAT_14c758608 + 2);
              lVar30 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar30;
            local_108[2] = puVar19;
            *local_108 = (undefined1 *)&PTR_FUN_14b966180;
            local_108[3] = (undefined1 *)0x0;
            iVar10 = 0;
            if (lVar33 != 0) {
              uVar24 = *(uint *)(lVar33 + 0xc);
              *(uint *)(local_108 + 3) = uVar24;
              if ((int)uVar24 < DAT_14c9647dc) {
                lVar30 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
              }
              else {
                lVar30 = 0;
              }
              iVar10 = *(int *)(lVar30 + 0x10);
              if (*(int *)(lVar30 + 0x10) == 0) {
                LOCK();
                iVar10 = DAT_14c964868 + 1;
                UNLOCK();
                iVar23 = DAT_14c964868 + 1;
                bVar36 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar10;
                if (bVar36) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar23);
                }
                LOCK();
                iVar10 = *(int *)(lVar30 + 0x10);
                bVar36 = iVar10 == 0;
                if (bVar36) {
                  *(int *)(lVar30 + 0x10) = iVar23;
                  iVar10 = 0;
                }
                UNLOCK();
                if (bVar36) {
                  iVar10 = iVar23;
                }
              }
            }
            *(int *)((longlong)ppuVar32 + 0x1c) = iVar10;
            ppuVar32[4] = param_1;
            FUN_1403524de(lVar33 + 0x4220,&local_198,&local_108);
            if ((int)uStack_100 == 0) {
LAB_140f34647:
              if (local_108 != (undefined1 **)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_108 != (undefined1 **)0x0) {
              (**(code **)*local_108)(local_108,0);
              FUN_1446efa72(&local_108,0,0,0x10);
              uStack_100 = (longlong *)((ulonglong)uStack_100 & 0xffffffff00000000);
              goto LAB_140f34647;
            }
            *(code *****)(param_1 + 0x248) = local_198;
            lVar33 = *(longlong *)(param_1 + 0x230);
          }
          if (lVar33 == 0) goto LAB_140f34677;
        }
        uVar28 = *(undefined4 *)(lVar33 + 0x58);
      }
LAB_140f34677:
      *(undefined4 *)(param_1 + 0x2f4) = uVar28;
      FUN_14164c272(param_1,1);
      param_1[0x244] = 0;
      if ((param_1[0x240] & 1) != 0) {
        *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558) =
             *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558) & 0xffc3;
        uVar18 = *(ulonglong *)(*(longlong *)(param_1 + 0x238) + 0x28);
        if (uVar18 < 0xffffffff00000000) {
          plVar21 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar21 = (longlong *)0x0;
          }
          (**(code **)(*plVar21 + 0x58))(plVar21,*(longlong *)(param_1 + 0x238),uVar18,0x40);
        }
        else {
          uVar24 = (uint)uVar18;
          if ((-1 < (int)uVar24) && ((int)uVar24 < DAT_14c998088)) {
            puVar20 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar20 = DAT_14c998080;
            }
            if ((*(uint *)(puVar20 + ((uint)(uVar18 >> 3) & 0xffffffc)) >> (uVar24 & 0x1f) & 1) != 0
               ) {
              lVar30 = DAT_14c998060 + (ulonglong)(uVar24 & 0x7fffffff) * 0x68;
              lVar33 = *(longlong *)(lVar30 + 0x18);
              if (*(longlong *)(lVar30 + 0x18) == 0) {
                lVar33 = lVar30 + 8;
              }
              *(uint *)(lVar33 + 8) = *(uint *)(lVar33 + 8) | 1;
              *(byte *)(lVar30 + 0x60) = *(byte *)(lVar30 + 0x60) | 1;
            }
          }
        }
      }
      lVar33 = FUN_1447210f0();
      dVar3 = *(double *)(lVar33 + 0x6d0);
      *(float *)(param_1 + 0x2d8) = (float)dVar3;
      param_1[0x245] = 0;
      if ((param_1[0x240] & 1) != 0) {
        *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558) =
             *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558) & 0xff3f;
        uVar18 = *(ulonglong *)(*(longlong *)(param_1 + 0x238) + 0x28);
        if (uVar18 < 0xffffffff00000000) {
          plVar21 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar21 = (longlong *)0x0;
          }
          (**(code **)(*plVar21 + 0x58))((float)dVar3,*(longlong *)(param_1 + 0x238),uVar18,0x40);
        }
        else {
          uVar24 = (uint)uVar18;
          if ((-1 < (int)uVar24) && ((int)uVar24 < DAT_14c998088)) {
            puVar20 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar20 = DAT_14c998080;
            }
            if ((*(uint *)(puVar20 + ((uint)(uVar18 >> 3) & 0xffffffc)) >> (uVar24 & 0x1f) & 1) != 0
               ) {
              lVar30 = DAT_14c998060 + (ulonglong)(uVar24 & 0x7fffffff) * 0x68;
              lVar33 = *(longlong *)(lVar30 + 0x18);
              if (*(longlong *)(lVar30 + 0x18) == 0) {
                lVar33 = lVar30 + 8;
              }
              *(uint *)(lVar33 + 8) = *(uint *)(lVar33 + 8) | 1;
              *(byte *)(lVar30 + 0x60) = *(byte *)(lVar30 + 0x60) | 1;
            }
          }
        }
      }
      FUN_140843a9c(param_1);
      puVar22 = &local_108;
      local_108 = (undefined1 **)(CONCAT71(local_108._1_7_,param_1[0x240]) & 0xffffffffffffff01);
      local_108._0_2_ = CONCAT11((char)uVar9,(char)local_108);
      FUN_1447cd2ec(param_1);
      FUN_1440fd31a(param_1 + 0x10,
                    CONCAT71((int7)((ulonglong)puVar22 >> 8),param_1[0x240]) & 0xffffffffffffff01,
                    uVar9);
      if (lVar13 != 0) {
        lVar33 = *(longlong *)(param_1 + 0x238);
        local_108 = (undefined1 **)0x0;
        uStack_100 = (longlong *)((ulonglong)uStack_100 & 0xffffffff00000000);
        FUN_1446efa72(&local_108,0,3,0x10);
        puVar22 = local_108;
        uStack_100._0_4_ = 3;
        *local_108 = (undefined1 *)&PTR_LAB_14b3e9ef0;
        LOCK();
        UNLOCK();
        lVar26 = DAT_14c758608 + 1;
        lVar30 = DAT_14c758608 + 1;
        if (lVar26 == 0) {
          LOCK();
          UNLOCK();
          lVar26 = DAT_14c758608 + 2;
          lVar30 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar30;
        local_108[2] = (undefined1 *)lVar26;
        *local_108 = (undefined1 *)&PTR_FUN_14b9662d0;
        local_108[3] = (undefined1 *)0x0;
        iVar10 = 0;
        if (lVar33 != 0) {
          uVar24 = *(uint *)(lVar33 + 0xc);
          *(uint *)(local_108 + 3) = uVar24;
          if ((int)uVar24 < DAT_14c9647dc) {
            lVar33 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          }
          else {
            lVar33 = 0;
          }
          iVar10 = *(int *)(lVar33 + 0x10);
          if (*(int *)(lVar33 + 0x10) == 0) {
            LOCK();
            iVar10 = DAT_14c964868 + 1;
            UNLOCK();
            iVar23 = DAT_14c964868 + 1;
            bVar36 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar10;
            if (bVar36) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar23);
            }
            LOCK();
            iVar10 = *(int *)(lVar33 + 0x10);
            bVar36 = iVar10 == 0;
            if (bVar36) {
              *(int *)(lVar33 + 0x10) = iVar23;
              iVar10 = 0;
            }
            UNLOCK();
            if (bVar36) {
              iVar10 = iVar23;
            }
          }
        }
        *(int *)((longlong)puVar22 + 0x1c) = iVar10;
        puVar22[4] = param_1;
        FUN_1403524de(lVar13 + 0xcf8,&local_198,&local_108);
        if ((int)uStack_100 == 0) {
LAB_140f348aa:
          if (local_108 != (undefined1 **)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_108 != (undefined1 **)0x0) {
          (**(code **)*local_108)(local_108,0);
          FUN_1446efa72(&local_108,0,0,0x10);
          uStack_100._0_4_ = 0;
          goto LAB_140f348aa;
        }
        *(code *****)(param_1 + 0x358) = local_198;
        lVar33 = *(longlong *)(param_1 + 0x238);
        local_108 = (undefined1 **)0x0;
        uStack_100._0_4_ = 0;
        FUN_1446efa72(&local_108,0,3,0x10);
        puVar22 = local_108;
        uStack_100._0_4_ = 3;
        iVar10 = (int)uStack_100;
        uStack_100._0_4_ = 3;
        *local_108 = (undefined1 *)&PTR_LAB_14b3e9ef0;
        LOCK();
        UNLOCK();
        lVar26 = DAT_14c758608 + 1;
        lVar30 = DAT_14c758608 + 1;
        if (lVar26 == 0) {
          LOCK();
          UNLOCK();
          lVar26 = DAT_14c758608 + 2;
          lVar30 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar30;
        local_108[2] = (undefined1 *)lVar26;
        *local_108 = (undefined1 *)&PTR_FUN_14b966340;
        local_108[3] = (undefined1 *)0x0;
        iVar23 = 0;
        if (lVar33 != 0) {
          uVar24 = *(uint *)(lVar33 + 0xc);
          *(uint *)(local_108 + 3) = uVar24;
          if ((int)uVar24 < DAT_14c9647dc) {
            lVar33 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          }
          else {
            lVar33 = 0;
          }
          iVar23 = *(int *)(lVar33 + 0x10);
          if (*(int *)(lVar33 + 0x10) == 0) {
            LOCK();
            iVar23 = DAT_14c964868 + 1;
            UNLOCK();
            iVar29 = DAT_14c964868 + 1;
            bVar36 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar23;
            uStack_100._0_4_ = iVar10;
            if (bVar36) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar29);
            }
            LOCK();
            iVar23 = *(int *)(lVar33 + 0x10);
            bVar36 = iVar23 == 0;
            if (bVar36) {
              *(int *)(lVar33 + 0x10) = iVar29;
              iVar23 = 0;
            }
            UNLOCK();
            if (bVar36) {
              iVar23 = iVar29;
            }
          }
        }
        *(int *)((longlong)puVar22 + 0x1c) = iVar23;
        puVar22[4] = param_1;
        FUN_1403524de(lVar13 + 0xd28,&local_198,&local_108);
        if ((int)uStack_100 == 0) {
LAB_140f349ea:
          if (local_108 != (undefined1 **)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_108 != (undefined1 **)0x0) {
          (**(code **)*local_108)(local_108,0);
          FUN_1446efa72(&local_108,0,0,0x10);
          uStack_100._0_4_ = 0;
          goto LAB_140f349ea;
        }
        *(code *****)(param_1 + 0x378) = local_198;
        lVar33 = *(longlong *)(param_1 + 0x238);
        local_108 = (undefined1 **)0x0;
        uStack_100._0_4_ = 0;
        FUN_1446efa72(&local_108,0,3,0x10);
        ppuVar32 = local_108;
        uStack_100 = (longlong *)CONCAT44(uStack_100._4_4_,3);
        *local_108 = (undefined1 *)&PTR_LAB_14b3e9ef0;
        LOCK();
        UNLOCK();
        puVar19 = (undefined1 *)(DAT_14c758608 + 1);
        lVar30 = DAT_14c758608 + 1;
        if (puVar19 == (undefined1 *)0x0) {
          LOCK();
          UNLOCK();
          puVar19 = (undefined1 *)(DAT_14c758608 + 2);
          lVar30 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar30;
        local_108[2] = puVar19;
        *local_108 = (undefined1 *)&PTR_FUN_14b9663b0;
        local_108[3] = (undefined1 *)0x0;
        iVar10 = 0;
        if (lVar33 != 0) {
          uVar24 = *(uint *)(lVar33 + 0xc);
          *(uint *)(local_108 + 3) = uVar24;
          if ((int)uVar24 < DAT_14c9647dc) {
            lVar33 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          }
          else {
            lVar33 = 0;
          }
          iVar10 = *(int *)(lVar33 + 0x10);
          if (*(int *)(lVar33 + 0x10) == 0) {
            LOCK();
            iVar10 = DAT_14c964868 + 1;
            UNLOCK();
            iVar23 = DAT_14c964868 + 1;
            bVar36 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar10;
            if (bVar36) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar23);
            }
            LOCK();
            iVar10 = *(int *)(lVar33 + 0x10);
            bVar36 = iVar10 == 0;
            if (bVar36) {
              *(int *)(lVar33 + 0x10) = iVar23;
              iVar10 = 0;
            }
            UNLOCK();
            if (bVar36) {
              iVar10 = iVar23;
            }
          }
        }
        *(int *)((longlong)ppuVar32 + 0x1c) = iVar10;
        ppuVar32[4] = param_1;
        FUN_1403524de(lVar13 + 0xd10,&local_198,&local_108);
        if ((int)uStack_100 == 0) {
LAB_140f34b26:
          if (local_108 != (undefined1 **)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_108 != (undefined1 **)0x0) {
          (**(code **)*local_108)(local_108,0);
          FUN_1446efa72(&local_108,0,0,0x10);
          uStack_100 = (longlong *)((ulonglong)uStack_100 & 0xffffffff00000000);
          goto LAB_140f34b26;
        }
        *(code *****)(param_1 + 0x368) = local_198;
      }
      FUN_1409b52ac(*(longlong *)(param_1 + 0x238) + 0x3a90);
      param_1[0x240] = param_1[0x240] & 0xf7;
    }
  }
  else {
    cVar8 = param_1[0x243];
    FUN_1440f959a(param_1,CONCAT71((int7)((ulonglong)pppppcVar17 >> 8),cVar8 == '\0') | 4);
    if (cVar8 != '\0') {
      FUN_146622fa2(param_1);
    }
    FUN_14164c272(param_1,1);
    lVar13 = FUN_1447210f0();
    dVar3 = *(double *)(lVar13 + 0x6d0);
    *(float *)(param_1 + 0x2d8) = (float)dVar3;
    param_1[0x245] = 0;
    if ((param_1[0x240] & 1) != 0) {
      *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558) =
           *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558) & 0xff3f;
      uVar18 = *(ulonglong *)(*(longlong *)(param_1 + 0x238) + 0x28);
      if (uVar18 < 0xffffffff00000000) {
        plVar21 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar21 = (longlong *)0x0;
        }
        (**(code **)(*plVar21 + 0x58))((float)dVar3,*(longlong *)(param_1 + 0x238),uVar18,0x40);
      }
      else {
        uVar24 = (uint)uVar18;
        if ((-1 < (int)uVar24) && ((int)uVar24 < DAT_14c998088)) {
          puVar20 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar20 = DAT_14c998080;
          }
          if ((*(uint *)(puVar20 + ((uint)(uVar18 >> 3) & 0xffffffc)) >> (uVar24 & 0x1f) & 1) != 0)
          {
            lVar33 = DAT_14c998060 + (ulonglong)(uVar24 & 0x7fffffff) * 0x68;
            lVar13 = *(longlong *)(lVar33 + 0x18);
            if (*(longlong *)(lVar33 + 0x18) == 0) {
              lVar13 = lVar33 + 8;
            }
            *(uint *)(lVar13 + 8) = *(uint *)(lVar13 + 8) | 1;
            *(byte *)(lVar33 + 0x60) = *(byte *)(lVar33 + 0x60) | 1;
          }
        }
      }
    }
    FUN_143d06c5c(*(longlong *)(param_1 + 0x238) + 0x4128,0);
    param_1[0x240] = param_1[0x240] & 0xef;
    if (param_1[0x388] == '\x01') {
      FUN_1416c1800(param_1,6);
      lVar33 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x238));
      lVar13 = *(longlong *)(param_1 + 0x390);
      if (lVar13 != 0) {
        uVar24 = (uint)lVar13;
        if ((int)(uVar24 & 0xffffff) < *(int *)(lVar33 + 0x10)) {
          lVar30 = lVar33 + 0x18;
          if (*(longlong *)(lVar33 + 0x28) != 0) {
            lVar30 = *(longlong *)(lVar33 + 0x28);
          }
          if ((*(uint *)(lVar30 + (ulonglong)((uVar24 & 0xffffff) >> 5) * 4) >> (uVar24 & 0x1f) & 1)
              != 0) {
            lVar30 = *(longlong *)(lVar33 + 8);
            lVar26 = (ulonglong)(uVar24 & 0xffffff) * 0x70;
            if (((lVar30 + lVar26 != 0) && (*(longlong *)(lVar30 + 0x60 + lVar26) == lVar13)) &&
               (*(char *)(lVar30 + 1 + lVar26) != '\x04')) {
              FUN_1405a424c(lVar33);
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0x390) = 0;
      param_1[0x388] = 0;
    }
    else {
      FUN_1416c1800(param_1,param_1[0x244]);
    }
  }
  if ((param_1[0x240] & 0x10) != 0) {
    param_1[0x240] = param_1[0x240] & 0xef;
    FUN_141509760(param_1);
  }
LAB_140f33142:
  if ((local_70 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f354e6 FUN_140f354e6 body=125 status=ok
// SIG undefined FUN_140f354e6(void)

void FUN_140f354e6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1447210f0();
  if ((((lVar2 != 0) && (*(longlong *)(param_1 + 0x4f0) != 0)) && (*(int *)(param_1 + 0x4ec) != 0))
     && ((uVar1 = *(uint *)(param_1 + 0x4e8), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar2 != 0) &&
       ((*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x4ec) &&
        ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)))) {
      FUN_140f35564(param_1);
      FUN_14113263c(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140f35564 FUN_140f35564 body=406 status=ok
// SIG undefined FUN_140f35564(void)

void FUN_140f35564(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(char *)(param_1 + 0x178) == '\x03') && (DAT_14c872bf0 == '\0')) &&
      (*(longlong *)(param_1 + 0x26e0) != 0)) &&
     ((DAT_14cbd42a8 != 0 && ((longlong)*(int *)(param_1 + 0x4e0) != 0)))) {
    uVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x4d8) + 0x68 + uVar2) == DAT_14cbd42a8) {
        if ((int)(uVar2 >> 3) * -0xf0f0f0f == -1) break;
        cVar1 = (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x70))(param_1 + 0x3c0);
        if ((*(longlong *)(param_1 + 0x2460) == 0) ||
           (*(int *)(*(longlong *)(param_1 + 0x2460) + 0xa0) < 1)) {
          if (0 < *(int *)(param_1 + 0x26b0)) {
            plVar3 = &DAT_14cbd42b8;
            goto LAB_140f3564a;
          }
LAB_140f3565f:
          plVar3 = &DAT_14cbd42c8;
          if (cVar1 != '\0') {
            plVar3 = &DAT_14cbd42c0;
          }
LAB_140f35673:
          lVar4 = *plVar3;
          if (lVar4 == 0) break;
        }
        else {
          plVar3 = &DAT_14cbd42b0;
LAB_140f3564a:
          lVar4 = *plVar3;
          if (lVar4 == 0) goto LAB_140f3565f;
          if (cVar1 != '\0') {
            plVar3 = &DAT_14cbd42c0;
            goto LAB_140f35673;
          }
        }
        local_48 = DAT_14cbd42a8;
        local_40 = 0xffffffff;
        FUN_140c823b2(param_1 + 0x4d8,&local_38);
        if (lVar4 != local_38) {
          local_24 = 0;
          local_30 = 0xffffffff;
          local_48 = DAT_14cbd42a8;
          local_40 = 0xffffffff;
          local_38 = lVar4;
          FUN_140f8b8f2(param_1 + 0x4d8);
        }
        break;
      }
      uVar2 = uVar2 + 0x88;
    } while ((longlong)*(int *)(param_1 + 0x4e0) * 0x88 != uVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f356fc FUN_140f356fc body=38 status=ok
// SIG undefined FUN_140f356fc(void)

undefined8 FUN_140f356fc(undefined8 param_1,int param_2)

{
  FUN_140f35722();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f35722 FUN_140f35722 body=890 status=ok
// SIG undefined FUN_140f35722(void)

void FUN_140f35722(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f635f0;
  param_1[0x2a] = &PTR_FUN_149f63650;
  param_1[0x2c] = &PTR_FUN_149f63670;
  param_1[0x94] = &PTR_LAB_149f63990;
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  param_1[0x90] = &PTR_FUN_149f62cf0;
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  param_1[0x8c] = &PTR_FUN_149f62cf0;
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  param_1[0x88] = &PTR_FUN_149f62cf0;
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x84] = &PTR_FUN_149f62cf0;
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  param_1[0x80] = &PTR_FUN_149f631f0;
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  param_1[0x7c] = &PTR_FUN_149f631f0;
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  param_1[0x78] = &PTR_LAB_149f630b0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x74] = &PTR_FUN_149f62cf0;
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  param_1[0x6e] = &PTR_FUN_149f62f70;
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  param_1[0x6a] = &PTR_FUN_149f62cf0;
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x66] = &PTR_FUN_149f62cf0;
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  param_1[0x60] = &PTR_FUN_149f62f70;
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  param_1[0x5c] = &PTR_LAB_149f62e30;
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  param_1[0x58] = &PTR_FUN_149f62cf0;
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x54] = &PTR_LAB_149f45be0;
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  param_1[0x50] = &PTR_LAB_149f45be0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  param_1[0x4c] = &PTR_LAB_149f45be0;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  param_1[0x48] = &PTR_LAB_149f45d00;
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x44] = &PTR_LAB_149f45be0;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  param_1[0x40] = &PTR_FUN_149f62cf0;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  param_1[0x3c] = &PTR_FUN_149f62cf0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  param_1[0x38] = &PTR_FUN_149f62cf0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x34] = &PTR_FUN_149f62cf0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  param_1[0x30] = &PTR_FUN_149f62cf0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_140f35a9c(param_1);
  return;
}



// FUNCTION 140f35a9c FUN_140f35a9c body=222 status=ok
// SIG undefined FUN_140f35a9c(void)

void FUN_140f35a9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f66000;
  param_1[0x26] = &PTR_LAB_149f63e10;
  FUN_140f35b7a(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  param_1[0x22] = &PTR_FUN_149f62cf0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1e] = &PTR_LAB_149f45d00;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1a] = &PTR_LAB_149f4b720;
  FUN_1447a1747(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x16] = &PTR_LAB_149f627f0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1);
  return;
}



// FUNCTION 140f35b7a FUN_140f35b7a body=156 status=ok
// SIG undefined FUN_140f35b7a(void)

void FUN_140f35b7a(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 9) = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      FUN_1447a08a2(param_1,0);
    }
    param_1[6] = 0xffffffff;
    *(undefined4 *)(param_1 + 5) = 0;
    if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
      FUN_1446efbd8(param_1 + 2);
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 140f35c16 FUN_140f35c16 body=1198 status=ok
// SIG undefined FUN_140f35c16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140f35c16(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_3;
  local_80 = param_2;
  plVar7 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b429140;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar12 = plVar7 + 2;
  *plVar12 = (longlong)&PTR_FUN_14b429160;
  plVar7[8] = 0;
  plVar7[9] = 0;
  if (plVar12 == (longlong *)0x0) goto LAB_140f35ccc;
  if (plVar7 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar11 = (longlong *)&DAT_00000020;
    plVar9 = _DAT_00000020;
    if (_DAT_00000020 == (longlong *)0x0) goto LAB_140f35ccc;
LAB_140f36054:
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    *plVar11 = (longlong)plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_140f35ccc;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    plVar7[3] = (longlong)plVar12;
    if ((longlong *)plVar7[4] != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar7[4] != (longlong *)0x0) {
        plVar11 = plVar7 + 4;
        plVar9 = (longlong *)plVar7[4];
        goto LAB_140f36054;
      }
      plVar7[4] = (longlong)plVar7;
    }
  }
  LOCK();
  plVar11 = plVar7 + 1;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)*plVar11 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_140f35ccc:
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_78 = (longlong)*(int *)(param_1 + 0x18) * 0x18;
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar10);
      if (lVar5 != 0) {
        plVar11 = *(longlong **)(lVar4 + 8 + lVar10);
        if (plVar11 == (longlong *)0x0) {
          local_70 = *local_88;
          local_60 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          plVar9 = plVar11 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          local_70 = *local_88;
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          local_60 = plVar11;
        }
        local_68 = lVar5;
        FUN_140f360c6(lVar5,&local_58,&local_70);
        plVar9 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar11 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        lVar5 = local_58;
        if (local_58 != 0) {
          plVar11 = (longlong *)(local_58 + 0x18);
          if (*(int *)(local_58 + 0x20) != 4) {
            FUN_1446efa72(plVar11,0,4,0x10);
            *(undefined4 *)(lVar5 + 0x20) = 4;
          }
          puVar6 = (undefined8 *)*plVar11;
          if (plVar7 == (longlong *)0x0) {
            *puVar6 = &PTR_LAB_149e020b0;
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 1;
            lVar5 = DAT_14c758608 + 1;
            if (lVar8 == 0) {
              LOCK();
              UNLOCK();
              lVar8 = DAT_14c758608 + 2;
              lVar5 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar5;
            puVar6[2] = lVar8;
            *puVar6 = &PTR_FUN_14b429180;
            puVar6[3] = 0x10;
            puVar6[4] = 0;
            puVar6[5] = &LAB_1406f4400;
            *(undefined4 *)(puVar6 + 6) = 0;
          }
          else {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            *puVar6 = &PTR_LAB_149e020b0;
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 1;
            lVar5 = DAT_14c758608 + 1;
            if (lVar8 == 0) {
              LOCK();
              UNLOCK();
              lVar8 = DAT_14c758608 + 2;
              lVar5 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar5;
            puVar6[2] = lVar8;
            *puVar6 = &PTR_FUN_14b429180;
            puVar6[3] = plVar12;
            puVar6[4] = plVar7;
            LOCK();
            *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
            UNLOCK();
            puVar6[5] = &LAB_1406f4400;
            *(undefined4 *)(puVar6 + 6) = 0;
            LOCK();
            plVar11 = plVar7 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          plVar11 = local_50;
          lVar5 = local_58;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          iVar3 = (int)plVar7[9];
          *(uint *)(plVar7 + 9) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar7 + 0x4c) < iVar3 + 1U) {
            FUN_140f36142(plVar7 + 8,iVar3);
          }
          lVar8 = plVar7[8];
          *(longlong *)(lVar8 + (longlong)iVar3 * 0x10) = lVar5;
          *(longlong **)(lVar8 + 8 + (longlong)iVar3 * 0x10) = plVar11;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            LOCK();
            plVar9 = plVar11 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
        }
        plVar11 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_50 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
      }
      lVar10 = lVar10 + 0x18;
    } while (local_78 != lVar10);
  }
  puVar6 = local_80;
  *local_80 = plVar12;
  local_80[1] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar7 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar6;
}



// FUNCTION 140f360c6 FUN_140f360c6 body=123 status=ok
// SIG undefined FUN_140f360c6(void)

longlong * FUN_140f360c6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(*param_1 + 0x10))();
  plVar3 = (longlong *)*param_2;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)param_2[1];
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
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if ((char)param_1[1] == '\x01') {
      *(byte *)(plVar3 + 5) = *(byte *)(plVar3 + 5) ^ 2;
      *(byte *)(*param_2 + 0x28) = *(byte *)(*param_2 + 0x28) | 8;
      plVar3 = (longlong *)*param_2;
    }
    if ((*(byte *)(plVar3 + 5) & 1) == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      *(byte *)(plVar3 + 5) = *(byte *)(plVar3 + 5) | 1;
    }
  }
  return param_2;
}



// FUNCTION 140f36142 FUN_140f36142 body=269 status=ok
// SIG undefined FUN_140f36142(void)

void FUN_140f36142(longlong param_1,int param_2)

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



// FUNCTION 140f36250 FUN_140f36250 body=24806 status=ok
// SIG undefined FUN_140f36250(void)

int FUN_140f36250(longlong param_1,short *param_2)

{
  byte bVar1;
  short sVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined2 *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    iVar7 = -1;
  }
  else {
    if (param_2 == (short *)0x0) {
      FUN_140056680(&local_68);
      puVar3 = local_68;
      if ((int)uStack_60 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      lVar4 = 0;
      do {
        uVar5 = puVar3[lVar4];
        bVar1 = "PostProcessing"[lVar4];
        iVar7 = (uint)uVar5 - (uint)bVar1;
        if (iVar7 == 0) {
          if (uVar5 == 0) goto LAB_140f3a5e3;
        }
        else {
          if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f362f9;
          if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f362f6;
        }
        lVar4 = lVar4 + 1;
      } while( true );
    }
    iVar8 = 0;
    iVar7 = -1;
    do {
      local_68 = (undefined2 *)0x0;
      uStack_60 = 0;
      for (; (sVar2 = *param_2, sVar2 != 0x2c && (sVar2 != 0)); param_2 = param_2 + 1) {
        FUN_140002184(&local_68);
      }
      puVar3 = local_68;
      if ((int)uStack_60 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)((longlong)puVar3 + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar9 = *(ushort *)(param_1 + lVar4);
        if (uVar5 != uVar9) break;
        if (uVar5 == 0) goto LAB_140f3a7e8;
LAB_140f3a7bb:
        lVar4 = lVar4 + 2;
      }
      if ((uVar9 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar10 = (ulonglong)uVar9;
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar10]) goto LAB_140f3a7bb;
      }
      if (uVar5 != uVar9) {
        bVar11 = sVar2 != 0;
        param_2 = param_2 + bVar11;
        goto LAB_140f3a7ee;
      }
LAB_140f3a7e8:
      bVar11 = false;
      iVar7 = iVar8;
LAB_140f3a7ee:
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      iVar8 = iVar8 + 1;
    } while (bVar11);
  }
  goto LAB_140f3a5f4;
code_r0x000140f362f6:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f362f9:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Bloom"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 1;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36345;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36342;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
LAB_140f3a5e3:
  iVar7 = 0;
  goto LAB_140f3a5e5;
code_r0x000140f36342:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36345:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LocalExposure"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 2;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36391;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3638e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 1;
  goto LAB_140f3a5e5;
code_r0x000140f3638e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36391:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Tonemapper"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 3;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f363dd;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f363da;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 2;
  goto LAB_140f3a5e5;
code_r0x000140f363da:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f363dd:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "AntiAliasing"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 4;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36429;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36426;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 3;
  goto LAB_140f3a5e5;
code_r0x000140f36426:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36429:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "TemporalAA"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 5;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36475;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36472;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 4;
  goto LAB_140f3a5e5;
code_r0x000140f36472:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36475:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "EdgeDetection"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 6;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f364c1;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f364be;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 5;
  goto LAB_140f3a5e5;
code_r0x000140f364be:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f364c1:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "EdgeVisualization"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 7;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3650d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3650a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 6;
  goto LAB_140f3a5e5;
code_r0x000140f3650a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3650d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Kuwahara"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 8;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36559;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36556;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 7;
  goto LAB_140f3a5e5;
code_r0x000140f36556:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36559:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeKuwahara"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 9;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f365a5;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f365a2;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 8;
  goto LAB_140f3a5e5;
code_r0x000140f365a2:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f365a5:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "OutlineTech"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 10;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f365f1;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f365ee;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 9;
  goto LAB_140f3a5e5;
code_r0x000140f365ee:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f365f1:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "AmbientCubemap"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xb;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3663d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3663a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 10;
  goto LAB_140f3a5e5;
code_r0x000140f3663a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3663d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "EyeAdaptation"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xc;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36689;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36686;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xb;
  goto LAB_140f3a5e5;
code_r0x000140f36686:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36689:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeHDR"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xd;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f366d5;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f366d2;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xc;
  goto LAB_140f3a5e5;
code_r0x000140f366d2:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f366d5:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeSkyLightIlluminance"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xe;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36721;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3671e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xd;
  goto LAB_140f3a5e5;
code_r0x000140f3671e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36721:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeLocalExposure"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xf;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3676d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3676a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xe;
  goto LAB_140f3a5e5;
code_r0x000140f3676a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3676d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "HdrGrayBars"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x10;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f367b9;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f367b6;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xf;
  goto LAB_140f3a5e5;
code_r0x000140f367b6:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f367b9:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "HdrCalibration"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x11;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36805;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36802;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x10;
  goto LAB_140f3a5e5;
code_r0x000140f36802:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36805:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LensFlares"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x12;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36851;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3684e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x11;
  goto LAB_140f3a5e5;
code_r0x000140f3684e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36851:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LensDistortion"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x13;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3689d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3689a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x12;
  goto LAB_140f3a5e5;
code_r0x000140f3689a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3689d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "GlobalIllumination"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x14;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f368e9;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f368e6;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x13;
  goto LAB_140f3a5e5;
code_r0x000140f368e6:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f368e9:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Vignette"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x15;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36935;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36932;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x14;
  goto LAB_140f3a5e5;
code_r0x000140f36932:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36935:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Grain"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x16;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36981;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3697e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x15;
  goto LAB_140f3a5e5;
code_r0x000140f3697e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36981:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "AmbientOcclusion"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x17;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f369cd;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f369ca;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x16;
  goto LAB_140f3a5e5;
code_r0x000140f369ca:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f369cd:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Decals"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x18;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36a19;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36a16;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x17;
  goto LAB_140f3a5e5;
code_r0x000140f36a16:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36a19:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "CameraImperfections"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x19;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36a65;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36a62;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x18;
  goto LAB_140f3a5e5;
code_r0x000140f36a62:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36a65:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "OnScreenDebug"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x1a;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36ab1;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36aae;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x19;
  goto LAB_140f3a5e5;
code_r0x000140f36aae:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36ab1:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "OverrideDiffuseAndSpecular"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x1b;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36afd;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36afa;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x1a;
  goto LAB_140f3a5e5;
code_r0x000140f36afa:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36afd:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LightingOnlyOverride"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x1c;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36b49;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36b46;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x1b;
  goto LAB_140f3a5e5;
code_r0x000140f36b46:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36b49:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ReflectionOverride"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x1d;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36b95;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36b92;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x1c;
  goto LAB_140f3a5e5;
code_r0x000140f36b92:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36b95:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeBuffer"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x1e;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36be1;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36bde;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x1d;
  goto LAB_140f3a5e5;
code_r0x000140f36bde:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36be1:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeNanite"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x1f;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36c2d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36c2a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x1e;
  goto LAB_140f3a5e5;
code_r0x000140f36c2a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36c2d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeLumen"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x20;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36c79;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36c76;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x1f;
  goto LAB_140f3a5e5;
code_r0x000140f36c76:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36c79:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeSubstrate"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x21;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36cc5;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36cc2;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x20;
  goto LAB_140f3a5e5;
code_r0x000140f36cc2:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36cc5:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeGroom"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x22;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36d11;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36d0e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x21;
  goto LAB_140f3a5e5;
code_r0x000140f36d0e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36d11:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeVirtualShadowMap"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x23;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36d5d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36d5a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x22;
  goto LAB_140f3a5e5;
code_r0x000140f36d5a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36d5d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "DirectLighting"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x24;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36da9;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36da6;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x23;
  goto LAB_140f3a5e5;
code_r0x000140f36da6:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36da9:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "DirectionalLights"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x25;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36df5;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36df2;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x24;
  goto LAB_140f3a5e5;
code_r0x000140f36df2:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36df5:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "PointLights"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x26;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36e41;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36e3e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x25;
  goto LAB_140f3a5e5;
code_r0x000140f36e3e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36e41:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "SpotLights"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x27;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36e8d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36e8a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x26;
  goto LAB_140f3a5e5;
code_r0x000140f36e8a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36e8d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "RectLights"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x28;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36ed9;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36ed6;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x27;
  goto LAB_140f3a5e5;
code_r0x000140f36ed6:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36ed9:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ColorGrading"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x29;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36f25;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36f22;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x28;
  goto LAB_140f3a5e5;
code_r0x000140f36f22:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36f25:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VectorFields"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x2a;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36f71;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36f6e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x29;
  goto LAB_140f3a5e5;
code_r0x000140f36f6e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36f71:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "DepthOfField"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x2b;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f36fbd;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f36fba;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x2a;
  goto LAB_140f3a5e5;
code_r0x000140f36fba:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f36fbd:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "GBufferHints"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x2c;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37009;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37006;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x2b;
  goto LAB_140f3a5e5;
code_r0x000140f37006:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37009:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "MotionBlur"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x2d;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37055;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37052;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x2c;
  goto LAB_140f3a5e5;
code_r0x000140f37052:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37055:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "CompositeEditorPrimitives"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x2e;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f370a1;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3709e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x2d;
  goto LAB_140f3a5e5;
code_r0x000140f3709e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f370a1:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "OpaqueCompositeEditorPrimitives"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x2f;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f370ed;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f370ea;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x2e;
  goto LAB_140f3a5e5;
code_r0x000140f370ea:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f370ed:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "TestImage"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x30;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37139;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37136;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x2f;
  goto LAB_140f3a5e5;
code_r0x000140f37136:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37139:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeDOF"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x31;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37185;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37182;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x30;
  goto LAB_140f3a5e5;
code_r0x000140f37182:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37185:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VertexColors"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x32;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f371d1;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f371ce;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x31;
  goto LAB_140f3a5e5;
code_r0x000140f371ce:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f371d1:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "PhysicalMaterialMasks"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x33;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3721d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3721a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x32;
  goto LAB_140f3a5e5;
code_r0x000140f3721a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3721d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Refraction"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x34;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37269;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37266;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x33;
  goto LAB_140f3a5e5;
code_r0x000140f37266:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37269:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "CameraInterpolation"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x35;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f372b5;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f372b2;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x34;
  goto LAB_140f3a5e5;
code_r0x000140f372b2:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f372b5:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "SceneColorFringe"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x36;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37301;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f372fe;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x35;
  goto LAB_140f3a5e5;
code_r0x000140f372fe:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37301:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ToneCurve"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x37;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3734d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3734a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x36;
  goto LAB_140f3a5e5;
code_r0x000140f3734a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3734d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "SeparateTranslucency"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x38;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37399;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37396;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x37;
  goto LAB_140f3a5e5;
code_r0x000140f37396:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37399:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ScreenPercentage"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x39;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f373e5;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f373e2;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x38;
  goto LAB_140f3a5e5;
code_r0x000140f373e2:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f373e5:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeMotionBlur"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x3a;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37431;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3742e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x39;
  goto LAB_140f3a5e5;
code_r0x000140f3742e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37431:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeMotionVectors"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x3b;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3747d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3747a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x3a;
  goto LAB_140f3a5e5;
code_r0x000140f3747a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3747d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeReprojection"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x3c;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f374c9;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f374c6;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x3b;
  goto LAB_140f3a5e5;
code_r0x000140f374c6:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f374c9:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeTemporalUpscaler"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x3d;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37515;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37512;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x3c;
  goto LAB_140f3a5e5;
code_r0x000140f37512:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37515:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeTSR"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x3e;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37561;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3755e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x3d;
  goto LAB_140f3a5e5;
code_r0x000140f3755e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37561:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "MegaLights"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x3f;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f375ad;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f375aa;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x3e;
  goto LAB_140f3a5e5;
code_r0x000140f375aa:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f375ad:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ReflectionEnvironment"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x40;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f375f9;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f375f6;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x3f;
  goto LAB_140f3a5e5;
code_r0x000140f375f6:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f375f9:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeOutOfBoundsPixels"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x41;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37645;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37642;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x40;
  goto LAB_140f3a5e5;
code_r0x000140f37642:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37645:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Diffuse"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x42;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37691;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3768e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x41;
  goto LAB_140f3a5e5;
code_r0x000140f3768e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37691:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Specular"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x43;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f376dd;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f376da;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x42;
  goto LAB_140f3a5e5;
code_r0x000140f376da:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f376dd:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "SelectionOutline"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x44;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37729;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37726;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x43;
  goto LAB_140f3a5e5;
code_r0x000140f37726:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37729:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ScreenSpaceReflections"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x45;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37775;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37772;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x44;
  goto LAB_140f3a5e5;
code_r0x000140f37772:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37775:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LumenReflections"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x46;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f377c1;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f377be;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x45;
  goto LAB_140f3a5e5;
code_r0x000140f377be:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f377c1:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ContactShadows"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x47;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3780d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3780a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x46;
  goto LAB_140f3a5e5;
code_r0x000140f3780a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3780d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "RayTracedDistanceFieldShadows"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x48;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37859;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37856;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x47;
  goto LAB_140f3a5e5;
code_r0x000140f37856:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37859:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "CapsuleShadows"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x49;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f378a5;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f378a2;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x48;
  goto LAB_140f3a5e5;
code_r0x000140f378a2:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f378a5:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "SubsurfaceScattering"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x4a;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f378f1;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f378ee;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x49;
  goto LAB_140f3a5e5;
code_r0x000140f378ee:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f378f1:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeSSS"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x4b;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3793d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3793a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x4a;
  goto LAB_140f3a5e5;
code_r0x000140f3793a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3793d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VolumetricLightmap"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x4c;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37989;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37986;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x4b;
  goto LAB_140f3a5e5;
code_r0x000140f37986:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37989:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "IndirectLightingCache"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x4d;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f379d5;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f379d2;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x4c;
  goto LAB_140f3a5e5;
code_r0x000140f379d2:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f379d5:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "DebugAI"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x4e;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37a21;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37a1e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x4d;
  goto LAB_140f3a5e5;
code_r0x000140f37a1e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37a21:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisLog"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x4f;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37a6d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37a6a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x4e;
  goto LAB_140f3a5e5;
code_r0x000140f37a6a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37a6d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Navigation"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x50;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37ab9;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37ab6;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x4f;
  goto LAB_140f3a5e5;
code_r0x000140f37ab6:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37ab9:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "GameplayDebug"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x51;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37b05;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37b02;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x50;
  goto LAB_140f3a5e5;
code_r0x000140f37b02:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37b05:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "TexturedLightProfiles"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x52;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37b51;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37b4e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x51;
  goto LAB_140f3a5e5;
code_r0x000140f37b4e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37b51:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LightFunctions"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x53;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37b9d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37b9a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x52;
  goto LAB_140f3a5e5;
code_r0x000140f37b9a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37b9d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "InstancedStaticMeshes"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x54;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37be9;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37be6;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x53;
  goto LAB_140f3a5e5;
code_r0x000140f37be6:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37be9:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "InstancedFoliage"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x55;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37c35;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37c32;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x54;
  goto LAB_140f3a5e5;
code_r0x000140f37c32:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37c35:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "HISMCOcclusionBounds"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x56;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37c81;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37c7e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x55;
  goto LAB_140f3a5e5;
code_r0x000140f37c7e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37c81:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "HISMCClusterTree"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x57;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37ccd;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37cca;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x56;
  goto LAB_140f3a5e5;
code_r0x000140f37cca:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37ccd:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeInstanceUpdates"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x58;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37d19;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37d16;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x57;
  goto LAB_140f3a5e5;
code_r0x000140f37d16:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37d19:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "InstancedGrass"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x59;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37d65;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37d62;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x58;
  goto LAB_140f3a5e5;
code_r0x000140f37d62:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37d65:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "DynamicShadows"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x5a;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37db1;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37dae;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x59;
  goto LAB_140f3a5e5;
code_r0x000140f37dae:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37db1:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Particles"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x5b;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37dfd;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37dfa;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x5a;
  goto LAB_140f3a5e5;
code_r0x000140f37dfa:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37dfd:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Niagara"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x5c;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37e49;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37e46;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x5b;
  goto LAB_140f3a5e5;
code_r0x000140f37e46:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37e49:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "HeterogeneousVolumes"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x5d;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37e95;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37e92;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x5c;
  goto LAB_140f3a5e5;
code_r0x000140f37e92:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37e95:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "SkeletalMeshes"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x5e;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37ee1;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37ede;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x5d;
  goto LAB_140f3a5e5;
code_r0x000140f37ede:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37ee1:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "BuilderBrush"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x5f;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37f2d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37f2a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x5e;
  goto LAB_140f3a5e5;
code_r0x000140f37f2a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37f2d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Translucency"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x60;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37f79;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37f76;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x5f;
  goto LAB_140f3a5e5;
code_r0x000140f37f76:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37f79:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "BillboardSprites"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x61;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f37fc5;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f37fc2;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x60;
  goto LAB_140f3a5e5;
code_r0x000140f37fc2:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f37fc5:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = (&DAT_14aa84a37)[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x62;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38011;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3800e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x61;
  goto LAB_140f3a5e5;
code_r0x000140f3800e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38011:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LightComplexity"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 99;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3805d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3805a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x62;
  goto LAB_140f3a5e5;
code_r0x000140f3805a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3805d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ShaderComplexity"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 100;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f380a9;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f380a6;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 99;
  goto LAB_140f3a5e5;
code_r0x000140f380a6:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f380a9:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "StationaryLightOverlap"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x65;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f380f5;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f380f2;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 100;
  goto LAB_140f3a5e5;
code_r0x000140f380f2:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f380f5:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LightMapDensity"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x66;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38141;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3813e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x65;
  goto LAB_140f3a5e5;
code_r0x000140f3813e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38141:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "StreamingBounds"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x67;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3818d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3818a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x66;
  goto LAB_140f3a5e5;
code_r0x000140f3818a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3818d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Constraints"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x68;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f381d9;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f381d6;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x67;
  goto LAB_140f3a5e5;
code_r0x000140f381d6:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f381d9:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "MassProperties"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x69;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38225;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38222;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x68;
  goto LAB_140f3a5e5;
code_r0x000140f38222:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38225:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "CameraFrustums"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x6a;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38271;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3826e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x69;
  goto LAB_140f3a5e5;
code_r0x000140f3826e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38271:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "AudioRadius"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x6b;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f382bd;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f382ba;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x6a;
  goto LAB_140f3a5e5;
code_r0x000140f382ba:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f382bd:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ForceFeedbackRadius"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x6c;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38309;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38306;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x6b;
  goto LAB_140f3a5e5;
code_r0x000140f38306:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38309:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "BSPSplit"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x6d;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38355;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38352;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x6c;
  goto LAB_140f3a5e5;
code_r0x000140f38352:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38355:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Brushes"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x6e;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f383a1;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3839e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x6d;
  goto LAB_140f3a5e5;
code_r0x000140f3839e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f383a1:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Lighting"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x6f;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f383ed;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f383ea;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x6e;
  goto LAB_140f3a5e5;
code_r0x000140f383ea:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f383ed:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "DeferredLighting"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x70;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38439;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38436;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x6f;
  goto LAB_140f3a5e5;
code_r0x000140f38436:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38439:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Editor"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x71;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38485;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38482;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x70;
  goto LAB_140f3a5e5;
code_r0x000140f38482:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38485:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "BSPTriangles"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x72;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f384d1;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f384ce;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x71;
  goto LAB_140f3a5e5;
code_r0x000140f384ce:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f384d1:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LargeVertices"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x73;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3851d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3851a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x72;
  goto LAB_140f3a5e5;
code_r0x000140f3851a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3851d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = (&DAT_14aa84b0f)[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x74;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38569;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38566;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x73;
  goto LAB_140f3a5e5;
code_r0x000140f38566:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38569:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = (&DAT_14aa84b14)[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x75;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f385b5;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f385b2;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x74;
  goto LAB_140f3a5e5;
code_r0x000140f385b2:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f385b5:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "MeshEdges"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x76;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38601;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f385fe;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x75;
  goto LAB_140f3a5e5;
code_r0x000140f385fe:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38601:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Cover"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x77;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3864d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3864a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x76;
  goto LAB_140f3a5e5;
code_r0x000140f3864a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3864d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Splines"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x78;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38699;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38696;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x77;
  goto LAB_140f3a5e5;
code_r0x000140f38696:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38699:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Selection"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x79;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f386e5;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f386e2;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x78;
  goto LAB_140f3a5e5;
code_r0x000140f386e2:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f386e5:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeLevelInstanceEditing"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x7a;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38731;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3872e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x79;
  goto LAB_140f3a5e5;
code_r0x000140f3872e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38731:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "EditingLevelInstance"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x7b;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3877d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3877a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x7a;
  goto LAB_140f3a5e5;
code_r0x000140f3877a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3877d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ModeWidgets"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x7c;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f387c9;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f387c6;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x7b;
  goto LAB_140f3a5e5;
code_r0x000140f387c6:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f387c9:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Bounds"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x7d;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38815;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38812;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x7c;
  goto LAB_140f3a5e5;
code_r0x000140f38812:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38815:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "HitProxies"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x7e;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38861;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3885e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x7d;
  goto LAB_140f3a5e5;
code_r0x000140f3885e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38861:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LightInfluences"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x7f;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f388ad;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f388aa;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x7e;
  goto LAB_140f3a5e5;
code_r0x000140f388aa:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f388ad:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = (&DAT_14a544bc0)[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x80;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f388f9;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f388f6;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x7f;
  goto LAB_140f3a5e5;
code_r0x000140f388f6:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f388f9:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ShadowFrustums"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x81;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38945;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38942;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x80;
  goto LAB_140f3a5e5;
code_r0x000140f38942:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38945:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Wireframe"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x82;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38991;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3898e;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x81;
  goto LAB_140f3a5e5;
code_r0x000140f3898e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38991:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Materials"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x83;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f389dd;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f389da;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x82;
  goto LAB_140f3a5e5;
code_r0x000140f389da:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f389dd:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "StaticMeshes"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x84;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38a29;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38a26;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x83;
  goto LAB_140f3a5e5;
code_r0x000140f38a26:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38a29:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Landscape"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x85;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38a75;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38a72;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x84;
  goto LAB_140f3a5e5;
code_r0x000140f38a72:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38a75:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LightRadius"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x86;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38ac1;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38abe;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x85;
  goto LAB_140f3a5e5;
code_r0x000140f38abe:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38ac1:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = (&DAT_14aa84bc7)[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x87;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38b0d;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38b0a;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x86;
  goto LAB_140f3a5e5;
code_r0x000140f38b0a:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38b0d:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Volumes"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x88;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38b59;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38b56;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x87;
  goto LAB_140f3a5e5;
code_r0x000140f38b56:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38b59:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = (&DAT_149e2b654)[lVar4];
      iVar8 = (uint)uVar5 - (uint)bVar1;
      if (iVar8 == 0) {
        iVar7 = 0x89;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38ba5;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38ba2;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x88;
  goto LAB_140f3a5e5;
code_r0x000140f38ba2:
  iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38ba5:
  iVar7 = 0x89;
  if (iVar8 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ActorColoration"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x8a;
        if (uVar5 == 0) break;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38bf6;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38bf3;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  goto LAB_140f3a5e5;
code_r0x000140f38bf3:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38bf6:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = (&DAT_149e3b98e)[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x8b;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38c42;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38c3f;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x8a;
  goto LAB_140f3a5e5;
code_r0x000140f38c3f:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38c42:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Collision"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x8c;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38c8e;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38c8b;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x8b;
  goto LAB_140f3a5e5;
code_r0x000140f38c8b:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38c8e:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "CollisionVisibility"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x8d;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38cda;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38cd7;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x8c;
  goto LAB_140f3a5e5;
code_r0x000140f38cd7:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38cda:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "CollisionPawn"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x8e;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38d26;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38d23;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x8d;
  goto LAB_140f3a5e5;
code_r0x000140f38d23:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38d26:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LightShafts"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x8f;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38d72;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38d6f;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x8e;
  goto LAB_140f3a5e5;
code_r0x000140f38d6f:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38d72:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "PostProcessMaterial"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x90;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38dbe;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38dbb;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x8f;
  goto LAB_140f3a5e5;
code_r0x000140f38dbb:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38dbe:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Atmosphere"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x91;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38e0a;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38e07;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x90;
  goto LAB_140f3a5e5;
code_r0x000140f38e07:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38e0a:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = (&DAT_14aa84c3a)[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x92;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38e56;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38e53;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x91;
  goto LAB_140f3a5e5;
code_r0x000140f38e53:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38e56:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "CameraAspectRatioBars"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x93;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38ea2;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38e9f;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x92;
  goto LAB_140f3a5e5;
code_r0x000140f38e9f:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38ea2:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "CameraSafeFrames"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x94;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38eee;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38eeb;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x93;
  goto LAB_140f3a5e5;
code_r0x000140f38eeb:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38eee:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "TextRender"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x95;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38f3a;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38f37;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x94;
  goto LAB_140f3a5e5;
code_r0x000140f38f37:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38f3a:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Rendering"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x96;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38f86;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38f83;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x95;
  goto LAB_140f3a5e5;
code_r0x000140f38f83:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38f86:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "HighResScreenshotMask"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x97;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f38fd2;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f38fcf;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x96;
  goto LAB_140f3a5e5;
code_r0x000140f38fcf:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f38fd2:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "HMDDistortion"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x98;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3901e;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3901b;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x97;
  goto LAB_140f3a5e5;
code_r0x000140f3901b:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3901e:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "StereoRendering"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x99;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3906a;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39067;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x98;
  goto LAB_140f3a5e5;
code_r0x000140f39067:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3906a:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "DistanceCulledPrimitives"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x9a;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f390b6;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f390b3;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x99;
  goto LAB_140f3a5e5;
code_r0x000140f390b3:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f390b6:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeLightCulling"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x9b;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39102;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f390ff;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x9a;
  goto LAB_140f3a5e5;
code_r0x000140f390ff:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39102:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "PrecomputedVisibility"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x9c;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3914e;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3914b;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x9b;
  goto LAB_140f3a5e5;
code_r0x000140f3914b:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3914e:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "SkyLighting"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x9d;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3919a;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39197;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x9c;
  goto LAB_140f3a5e5;
code_r0x000140f39197:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3919a:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "PreviewShadowsIndicator"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x9e;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f391e6;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f391e3;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x9d;
  goto LAB_140f3a5e5;
code_r0x000140f391e3:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f391e6:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "PrecomputedVisibilityCells"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0x9f;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39232;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3922f;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x9e;
  goto LAB_140f3a5e5;
code_r0x000140f3922f:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39232:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeVolumetricLightmap"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xa0;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3927e;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3927b;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0x9f;
  goto LAB_140f3a5e5;
code_r0x000140f3927b:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3927e:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VolumeLightingSamples"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xa1;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f392ca;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f392c7;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xa0;
  goto LAB_140f3a5e5;
code_r0x000140f392c7:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f392ca:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Paper2DSprites"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xa2;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39316;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39313;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xa1;
  goto LAB_140f3a5e5;
code_r0x000140f39313:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39316:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeDistanceFieldAO"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xa3;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39362;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3935f;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xa2;
  goto LAB_140f3a5e5;
code_r0x000140f3935f:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39362:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeMeshDistanceFields"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xa4;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f393ae;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f393ab;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xa3;
  goto LAB_140f3a5e5;
code_r0x000140f393ab:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f393ae:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "PhysicsField"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xa5;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f393fa;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f393f7;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xa4;
  goto LAB_140f3a5e5;
code_r0x000140f393f7:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f393fa:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeGlobalDistanceField"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xa6;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39446;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39443;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xa5;
  goto LAB_140f3a5e5;
code_r0x000140f39443:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39446:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeLightingOnProbes"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xa7;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39492;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3948f;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xa6;
  goto LAB_140f3a5e5;
code_r0x000140f3948f:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39492:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ScreenSpaceAO"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xa8;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f394de;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f394db;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xa7;
  goto LAB_140f3a5e5;
code_r0x000140f394db:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f394de:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "DistanceFieldAO"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xa9;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3952a;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39527;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xa8;
  goto LAB_140f3a5e5;
code_r0x000140f39527:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3952a:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LumenGlobalIllumination"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xaa;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39576;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39573;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xa9;
  goto LAB_140f3a5e5;
code_r0x000140f39573:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39576:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VolumetricFog"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xab;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f395c2;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f395bf;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xaa;
  goto LAB_140f3a5e5;
code_r0x000140f395bf:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f395c2:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeSSR"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xac;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3960e;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3960b;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xab;
  goto LAB_140f3a5e5;
code_r0x000140f3960b:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3960e:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeShadingModels"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xad;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3965a;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39657;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xac;
  goto LAB_140f3a5e5;
code_r0x000140f39657:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3965a:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeSenses"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xae;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f396a6;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f396a3;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xad;
  goto LAB_140f3a5e5;
code_r0x000140f396a3:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f396a6:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LODColoration"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xaf;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f396f2;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f396ef;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xae;
  goto LAB_140f3a5e5;
code_r0x000140f396ef:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f396f2:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "HLODColoration"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xb0;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3973e;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3973b;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xaf;
  goto LAB_140f3a5e5;
code_r0x000140f3973b:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3973e:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "QuadOverdraw"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xb1;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3978a;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39787;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xb0;
  goto LAB_140f3a5e5;
code_r0x000140f39787:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3978a:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ShaderComplexityWithQuadOverdraw"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xb2;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f397d6;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f397d3;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xb1;
  goto LAB_140f3a5e5;
code_r0x000140f397d3:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f397d6:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "PrimitiveDistanceAccuracy"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xb3;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39822;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3981f;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xb2;
  goto LAB_140f3a5e5;
code_r0x000140f3981f:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39822:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "MeshUVDensityAccuracy"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xb4;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3986e;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3986b;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xb3;
  goto LAB_140f3a5e5;
code_r0x000140f3986b:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3986e:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "MaterialTextureScaleAccuracy"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xb5;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f398ba;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f398b7;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xb4;
  goto LAB_140f3a5e5;
code_r0x000140f398b7:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f398ba:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "OutputMaterialTextureScales"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xb6;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39906;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39903;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xb5;
  goto LAB_140f3a5e5;
code_r0x000140f39903:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39906:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "RequiredTextureResolution"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xb7;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39952;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3994f;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xb6;
  goto LAB_140f3a5e5;
code_r0x000140f3994f:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39952:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VirtualTexturePendingMips"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xb8;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3999e;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3999b;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xb7;
  goto LAB_140f3a5e5;
code_r0x000140f3999b:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3999e:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "WidgetComponents"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xb9;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f399ea;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f399e7;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xb8;
  goto LAB_140f3a5e5;
code_r0x000140f399e7:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f399ea:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Bones"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xba;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39a36;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39a33;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xb9;
  goto LAB_140f3a5e5;
code_r0x000140f39a33:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39a36:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ServerDrawDebug"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xbb;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39a82;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39a7f;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xba;
  goto LAB_140f3a5e5;
code_r0x000140f39a7f:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39a82:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "MediaPlanes"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xbc;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39ace;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39acb;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xbb;
  goto LAB_140f3a5e5;
code_r0x000140f39acb:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39ace:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VREditing"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xbd;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39b1a;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39b17;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xbc;
  goto LAB_140f3a5e5;
code_r0x000140f39b17:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39b1a:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "OcclusionMeshes"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xbe;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39b66;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39b63;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xbd;
  goto LAB_140f3a5e5;
code_r0x000140f39b63:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39b66:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeInstanceOcclusionQueries"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xbf;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39bb2;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39baf;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xbe;
  goto LAB_140f3a5e5;
code_r0x000140f39baf:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39bb2:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "DisableOcclusionQueries"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xc0;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39bfe;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39bfb;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xbf;
  goto LAB_140f3a5e5;
code_r0x000140f39bfb:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39bfe:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "PathTracing"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xc1;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39c4a;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39c47;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xc0;
  goto LAB_140f3a5e5;
code_r0x000140f39c47:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39c4a:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "RayTracingDebug"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xc2;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39c96;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39c93;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xc1;
  goto LAB_140f3a5e5;
code_r0x000140f39c93:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39c96:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeSkyAtmosphere"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xc3;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39ce2;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39cdf;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xc2;
  goto LAB_140f3a5e5;
code_r0x000140f39cdf:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39ce2:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeLightFunctionAtlas"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xc4;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39d2e;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39d2b;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xc3;
  goto LAB_140f3a5e5;
code_r0x000140f39d2b:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39d2e:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeCalibrationColor"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xc5;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39d7a;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39d77;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xc4;
  goto LAB_140f3a5e5;
code_r0x000140f39d77:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39d7a:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeCalibrationGrayscale"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xc6;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39dc6;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39dc3;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xc5;
  goto LAB_140f3a5e5;
code_r0x000140f39dc3:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39dc6:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeCalibrationCustom"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 199;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39e12;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39e0f;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xc6;
  goto LAB_140f3a5e5;
code_r0x000140f39e0f:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39e12:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizePostProcessStack"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 200;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39e5e;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39e5b;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 199;
  goto LAB_140f3a5e5;
code_r0x000140f39e5b:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39e5e:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VirtualTexturePrimitives"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xc9;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39eaa;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39ea7;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 200;
  goto LAB_140f3a5e5;
code_r0x000140f39ea7:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39eaa:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeVolumetricCloudConservativeDensity"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xca;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39ef6;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39ef3;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xc9;
  goto LAB_140f3a5e5;
code_r0x000140f39ef3:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39ef6:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeVolumetricCloudEmptySpaceSkipping"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xcb;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39f42;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39f3f;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xca;
  goto LAB_140f3a5e5;
code_r0x000140f39f3f:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39f42:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VirtualShadowMapPersistentData"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xcc;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39f8e;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39f8b;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xcb;
  goto LAB_140f3a5e5;
code_r0x000140f39f8b:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39f8e:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "DebugDrawDistantVirtualSMLights"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xcd;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f39fda;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f39fd7;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xcc;
  goto LAB_140f3a5e5;
code_r0x000140f39fd7:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f39fda:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VirtualTextureResidency"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xce;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a026;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a023;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xcd;
  goto LAB_140f3a5e5;
code_r0x000140f3a023:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a026:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "InputDebugVisualizer"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xcf;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a072;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a06f;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xce;
  goto LAB_140f3a5e5;
code_r0x000140f3a06f:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a072:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LumenScreenTraces"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xd0;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a0be;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a0bb;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xcf;
  goto LAB_140f3a5e5;
code_r0x000140f3a0bb:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a0be:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LumenDetailTraces"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xd1;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a10a;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a107;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xd0;
  goto LAB_140f3a5e5;
code_r0x000140f3a107:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a10a:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LumenGlobalTraces"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xd2;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a156;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a153;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xd1;
  goto LAB_140f3a5e5;
code_r0x000140f3a153:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a156:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LumenFarFieldTraces"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xd3;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a1a2;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a19f;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xd2;
  goto LAB_140f3a5e5;
code_r0x000140f3a19f:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a1a2:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LumenSecondaryBounces"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xd4;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a1ee;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a1eb;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xd3;
  goto LAB_140f3a5e5;
code_r0x000140f3a1eb:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a1ee:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "LumenShortRangeAmbientOcclusion"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xd5;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a23a;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a237;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xd4;
  goto LAB_140f3a5e5;
code_r0x000140f3a237:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a23a:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "NaniteMeshes"[lVar4];
      iVar8 = (uint)uVar5 - (uint)bVar1;
      if (iVar8 == 0) {
        iVar7 = 0xd6;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a286;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a283;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xd5;
  goto LAB_140f3a5e5;
code_r0x000140f3a283:
  iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a286:
  iVar7 = 0xd6;
  if (iVar8 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "NaniteStreamingGeometry"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xd7;
        if (uVar5 == 0) break;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a2d7;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a2d4;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  goto LAB_140f3a5e5;
code_r0x000140f3a2d4:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a2d7:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeGPUSkinCache"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xd8;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a323;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a320;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xd7;
  goto LAB_140f3a5e5;
code_r0x000140f3a320:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a323:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeLWCComplexity"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xd9;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a36f;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a36c;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xd8;
  goto LAB_140f3a5e5;
code_r0x000140f3a36c:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a36f:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "ShaderPrint"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xda;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a3bb;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a3b8;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xd9;
  goto LAB_140f3a5e5;
code_r0x000140f3a3b8:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a3bb:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "SceneCaptureCopySceneDepth"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xdb;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a407;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a404;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xda;
  goto LAB_140f3a5e5;
code_r0x000140f3a404:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a407:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "Cameras"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xdc;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a453;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a450;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xdb;
  goto LAB_140f3a5e5;
code_r0x000140f3a450:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a453:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = (&DAT_14aa85250)[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xdd;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a49f;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a49c;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xdc;
  goto LAB_140f3a5e5;
code_r0x000140f3a49c:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a49f:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "VisualizeGameDifficultyHeatMap"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xde;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a4eb;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a4e8;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xdd;
  goto LAB_140f3a5e5;
code_r0x000140f3a4e8:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a4eb:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "AudioOpportunistic"[lVar4];
      iVar7 = (uint)uVar5 - (uint)bVar1;
      if (iVar7 == 0) {
        iVar7 = 0xdf;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a537;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a534;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xde;
  goto LAB_140f3a5e5;
code_r0x000140f3a534:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a537:
  if (iVar7 != 0) {
    lVar4 = 0;
    do {
      uVar5 = puVar3[lVar4];
      bVar1 = "FlightNavigation"[lVar4];
      iVar8 = (uint)uVar5 - (uint)bVar1;
      if (iVar8 == 0) {
        iVar7 = 0xe0;
        if (uVar5 == 0) goto LAB_140f3a5e5;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar5)) goto LAB_140f3a583;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar1]) goto code_r0x000140f3a580;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  iVar7 = 0xdf;
  goto LAB_140f3a5e5;
code_r0x000140f3a580:
  iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140f3a583:
  iVar7 = 0xe0;
  if (iVar8 != 0) {
    lVar4 = 0;
    while( true ) {
      uVar5 = puVar3[lVar4];
      bVar1 = "GbxWeather"[lVar4];
      iVar8 = (uint)uVar5 - (uint)bVar1;
      if (iVar8 != 0) break;
      iVar7 = 0xe1;
      if (uVar5 == 0) goto LAB_140f3a5e5;
LAB_140f3a5d9:
      lVar4 = lVar4 + 1;
    }
    if (((uint)bVar1 | (uint)uVar5) < 0x80) {
      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[bVar1]) goto LAB_140f3a5d9;
      iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar1];
    }
    iVar7 = 0xe1;
    if (iVar8 != 0) {
      FUN_140056680(local_78,param_1);
      iVar8 = FUN_147d11a40(local_78);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      iVar7 = iVar8 + 0xe2;
      if (iVar8 == -1) {
        iVar7 = -1;
      }
    }
  }
LAB_140f3a5e5:
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_140f3a5f4:
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 140f3c338 FUN_140f3c338 body=40 status=ok
// SIG undefined FUN_140f3c338(void)

undefined8 FUN_140f3c338(undefined8 param_1,int param_2)

{
  FUN_140f3c360();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f3c360 FUN_140f3c360 body=45 status=ok
// SIG undefined FUN_140f3c360(void)

void FUN_140f3c360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b546d50;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140f3c38e FUN_140f3c38e body=805 status=ok
// SIG undefined FUN_140f3c38e(void)

undefined8 FUN_140f3c38e(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  code **ppcVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  longlong local_68;
  undefined8 uStack_60;
  code *local_58;
  undefined1 local_50 [8];
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a4785fc);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) {
      uVar4 = 0;
      goto LAB_140f3c476;
    }
    if ((*(byte *)(param_3 + 6) & 1) == 0) {
      local_68 = 0;
      uStack_60 = 0;
      FUN_14021219d(param_2,&local_68);
    }
    else {
      if ((*(byte *)(param_3 + 6) & 2) == 0) {
        param_3 = (longlong *)*param_3;
      }
      uVar4 = (**(code **)(*param_3 + 0x20))(param_3);
      local_68 = 0;
      uStack_60 = 0;
      FUN_1401031ac(uVar4,0,&local_68);
      FUN_14021219d(param_2,&local_68);
      FUN_14047320e(uVar4,param_2,param_3,0);
    }
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    FUN_14021219d(param_2,&local_68);
    lVar2 = local_68;
    if (1 < (int)uStack_60) {
      if (DAT_14c948fa0 == 0) {
        local_58 = (code *)&DAT_1427db2a2;
        lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948fa0 = lVar5;
        FUN_1446f470e(local_50,L"ScriptStruct",1);
        local_88 = &LAB_1468915ce;
        local_90 = FUN_1427dc742;
        local_a0 = L"Engine";
        local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
        local_a8 = 0x10;
        local_b0 = 0x10000020;
        local_b8._0_4_ = 8;
        local_80 = &local_58;
        FUN_14574b4b2(lVar5);
        DAT_14c948fa0 = lVar5;
        if (DAT_14c927740 == 0) {
          local_80 = &local_48;
          local_48 = FUN_1449e2820;
          local_70 = FUN_14081d0ea;
          local_78 = FUN_14081d0ea;
          local_88 = &LAB_146856450;
          local_90 = FUN_1427b121c;
          local_98 = L"Engine";
          local_a0 = (wchar_t *)0x0;
          local_a8 = CONCAT44(local_a8._4_4_,0x10000021);
          local_b0 = 8;
          local_b8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar1 = DAT_14c948fa0;
        lVar5 = DAT_14c927740;
        uVar4 = FUN_1449e2fb2();
        local_b8 = L"ScriptStruct";
        FUN_14574b446(uVar4,lVar1,lVar5,L"/Script/CoreUObject");
      }
      lVar2 = FUN_140277b32(DAT_14c948fa0,0,lVar2,0);
      if (lVar2 == 0) {
        lVar2 = FUN_1457c4038();
        ppcVar3 = &local_48;
      }
      else {
        ppcVar3 = (code **)FUN_140f3c6b4(param_3,*(undefined4 *)(*(longlong *)(lVar2 + 0xb8) + 8),
                                         *(undefined4 *)(*(longlong *)(lVar2 + 0xb8) + 0xc));
        (**(code **)(**(longlong **)(lVar2 + 0xb8) + 0x10))(*(longlong **)(lVar2 + 0xb8),ppcVar3);
      }
      FUN_14047320e(lVar2,param_2,ppcVar3,0);
    }
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  uVar4 = 1;
LAB_140f3c476:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140f3c6b4 FUN_140f3c6b4 body=101 status=ok
// SIG undefined FUN_140f3c6b4(void)

undefined8 * FUN_140f3c6b4(undefined8 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  FUN_140a31f5e();
  bVar1 = *(byte *)(param_1 + 6) & 0xfd | (8 >= param_3 && 0x30 >= param_2) * '\x02';
  *(byte *)(param_1 + 6) = bVar1;
  if (8 < param_3 || 0x30 < param_2) {
    uVar2 = FUN_14001cc68(param_2,param_3);
    *param_1 = uVar2;
    bVar1 = *(byte *)(param_1 + 6);
  }
  *(byte *)(param_1 + 6) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = (undefined8 *)*param_1;
  }
  return param_1;
}



// FUNCTION 140f3c722 FUN_140f3c722 body=486 status=ok
// SIG undefined FUN_140f3c722(void)

undefined8 * FUN_140f3c722(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b2ec8c0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xf00000d0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xf00000d0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xf00000d0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xf00000d0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2f) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xf00000d0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0xf00000d0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  FUN_1405c5fa2();
  param_1[0x45] = &DAT_14cb769e8;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = &PTR_FUN_14b0394b0;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 10;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 2;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x4fc71eb4;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined2 *)(param_1 + 3) = 0x3fc2;
  *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xe1 | 8;
  return param_1;
}



// FUNCTION 140f3c908 FUN_140f3c908 body=40 status=ok
// SIG undefined FUN_140f3c908(void)

undefined8 FUN_140f3c908(undefined8 param_1,int param_2)

{
  FUN_140f3c930();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f3c930 FUN_140f3c930 body=87 status=ok
// SIG undefined FUN_140f3c930(void)

void FUN_140f3c930(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a52c970;
  param_1[5] = &PTR_FUN_14a52cc70;
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
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 140f3c996 FUN_140f3c996 body=36 status=ok
// SIG undefined FUN_140f3c996(void)

undefined8 FUN_140f3c996(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 140f3c9ba FUN_140f3c9ba body=78 status=ok
// SIG undefined FUN_140f3c9ba(void)

void FUN_140f3c9ba(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_140f3ca08(param_1,param_2);
  }
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (longlong)*(int *)(param_1 + 0x30) << 5;
    do {
      FUN_140f3ca08(lVar2,param_2);
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 140f3ca08 FUN_140f3ca08 body=401 status=ok
// SIG undefined FUN_140f3ca08(void)

void FUN_140f3ca08(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = (**(code **)(*param_1 + 8))();
  if ((lVar4 != 0) && (cVar3 = (**(code **)(*param_1 + 0x10))(param_1), cVar3 != '\0')) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar2 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_40[2] = lVar5;
    *local_40 = &PTR_FUN_14b42a5e0;
    local_40[3] = 0;
    iVar6 = 0;
    if (param_2 != 0) {
      uVar1 = *(uint *)(param_2 + 0xc);
      *(uint *)(local_40 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar6 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar6 = *(int *)(lVar8 + 0x10);
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar6 = iVar7;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar6;
    puVar2[4] = FUN_140c85358;
    FUN_140844560(lVar4,local_48,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f3cbbe FUN_140f3cbbe body=8 status=ok
// SIG undefined FUN_140f3cbbe(void)

bool FUN_140f3cbbe(longlong param_1)

{
  return *(int *)(param_1 + 0x6c) == 1;
}



// FUNCTION 140f3cbc6 FUN_140f3cbc6 body=58 status=ok
// SIG undefined FUN_140f3cbc6(void)

void FUN_140f3cbc6(longlong param_1,longlong *param_2)

{
  FUN_140b972e4(param_1,*(undefined8 *)(*(longlong *)(*param_2 + 0x58) + 0x10),
                *(undefined8 *)(*param_2 + 0x38));
  FUN_140b9733e(param_1);
  FUN_140f3cc00(*(undefined8 *)(param_1 + 0x20),param_2);
  return;
}



// FUNCTION 140f3cc00 FUN_140f3cc00 body=1037 status=ok
// SIG undefined FUN_140f3cc00(void)

void FUN_140f3cc00(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  byte *local_c0;
  byte *local_b8;
  longlong local_b0;
  int local_a4;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  byte local_52;
  byte local_51;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b0 = *param_2;
  lVar4 = (longlong)
          *(int *)(**(longlong **)(param_1 + 0x58) + 4 +
                  (ulonglong)*(ushort *)(local_b0 + 0x80) * 0x18);
  if (lVar4 != -1) {
    lVar4 = lVar4 * 0x20;
    local_70 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x38) + 10 + lVar4);
    local_78 = *(longlong *)(local_b0 + 0x58);
    local_80 = *(longlong *)(local_78 + *(int *)(*(longlong *)(param_1 + 0x38) + 0xc + lVar4));
    plVar2 = (longlong *)param_2[1];
    iVar17 = (int)plVar2[0x1a];
    if (iVar17 == 0) {
      uVar18 = 1;
      uVar16 = 0;
      iVar14 = 0;
      iVar12 = 0;
    }
    else {
      puVar10 = (uint *)plVar2[0x19];
      if ((uint *)plVar2[0x19] == (uint *)0x0) {
        puVar10 = (uint *)(plVar2 + 0x17);
      }
      uVar15 = *puVar10;
      if (uVar15 == 0) {
        iVar14 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar14 = iVar17 + -1;
        }
        uVar16 = 0;
        uVar18 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar18 = uVar16;
        }
        iVar14 = 0;
        do {
          if (uVar18 == uVar16) goto LAB_140f3cfd7;
          iVar14 = iVar14 + 0x20;
          uVar15 = puVar10[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar16 = 0;
        iVar14 = 0;
      }
      uVar18 = (ulonglong)(-uVar15 & uVar15);
      uVar1 = uVar18 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar12 = (iVar14 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
      if (iVar17 <= iVar12) {
        iVar12 = iVar17;
      }
    }
    if (iVar12 < iVar17) {
      local_a0 = plVar2 + 0x15;
      local_68 = plVar2 + 7;
      local_90 = param_2 + 0x16;
      uVar15 = 0xffffffff;
      local_98 = param_2;
      local_88 = param_1;
      do {
        if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
          uVar7 = *(uint *)(plVar2[0x15] + (longlong)iVar12 * 0x60);
          plVar11 = (longlong *)plVar2[8];
          if ((longlong *)plVar2[8] == (longlong *)0x0) {
            plVar11 = local_68;
          }
          iVar17 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar2[9] - 1U & uVar7) * 4);
          if (iVar17 != -1) {
            do {
              lVar4 = *plVar2 + (longlong)iVar17 * 0x10;
              if (*(uint *)(*plVar2 + (longlong)iVar17 * 0x10) == uVar7) {
                if ((lVar4 != 0) && ((int *)(lVar4 + 4) != (int *)0x0)) {
                  local_51 = 0;
                  local_52 = 0;
                  iVar17 = *(int *)(lVar4 + 4);
                  lVar4 = (longlong)iVar17 * local_70 + local_80;
                  local_c8 = *param_2 + 0x4a;
                  local_e8 = *(undefined8 *)(local_b0 + 0x28);
                  local_b8 = &local_52;
                  local_c0 = &local_51;
                  local_d0 = (undefined4)local_70;
                  local_e0 = 0;
                  local_d8 = lVar4;
                  local_a4 = iVar14;
                  local_60 = uVar16;
                  FUN_140f2ec10(param_1,0,plVar2[0x15] + (longlong)iVar12 * 0x60 + 8,local_78);
                  if (local_51 == 1) {
                    lVar13 = param_2[0x24];
                    if (lVar13 != 0) {
                      iVar14 = *(int *)(lVar13 + 0x28);
                      *(uint *)(lVar13 + 0x28) = iVar14 + 1U;
                      if (*(uint *)(lVar13 + 0x2c) < iVar14 + 1U) {
                        FUN_1400cc390(lVar13,iVar14);
                      }
                      lVar5 = *(longlong *)(lVar13 + 0x20);
                      if (*(longlong *)(lVar13 + 0x20) == 0) {
                        lVar5 = lVar13;
                      }
                      *(int *)(lVar5 + (longlong)iVar14 * 4) = iVar17;
                      param_2 = local_98;
                    }
                    pcVar3 = (code *)param_2[0x12];
                    plVar11 = (longlong *)param_2[0x14];
                    if ((longlong *)param_2[0x14] == (longlong *)0x0) {
                      plVar11 = local_90;
                    }
                    local_50 = lVar4;
                    uVar6 = (**(code **)(*plVar11 + 8))();
                    (*pcVar3)(uVar6,&local_50,param_2);
                    param_1 = local_88;
                  }
                  *(byte *)(local_b0 + 0x4b) = *(byte *)(local_b0 + 0x4b) | local_52;
                  *(byte *)(local_b0 + 0x49) = *(byte *)(local_b0 + 0x49) | local_51;
                  uVar16 = local_60;
                  iVar14 = local_a4;
                  goto LAB_140f3cf3e;
                }
                break;
              }
              iVar17 = *(int *)(lVar4 + 8);
            } while (iVar17 != -1);
          }
        }
        FUN_14588c93a(local_a0);
LAB_140f3cf3e:
        uVar15 = uVar15 & ~(uint)uVar18;
        puVar10 = (uint *)plVar2[0x19];
        if ((uint *)plVar2[0x19] == (uint *)0x0) {
          puVar10 = (uint *)(plVar2 + 0x17);
        }
        iVar17 = (int)plVar2[0x1a];
        iVar12 = (int)uVar16;
        lVar4 = (longlong)iVar12;
        uVar7 = puVar10[lVar4] & uVar15;
        if (uVar7 == 0) {
          iVar8 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar8 = iVar17 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar12) {
            iVar9 = iVar12;
          }
          if (iVar8 <= iVar12) break;
          lVar13 = 0;
          while( true ) {
            iVar14 = iVar14 + 0x20;
            uVar7 = puVar10[lVar4 + lVar13 + 1];
            if (uVar7 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar9 - lVar4 == lVar13) goto LAB_140f3cfd7;
          }
          uVar16 = (ulonglong)(iVar12 + (int)lVar13 + 1);
          uVar15 = 0xffffffff;
        }
        uVar18 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar18 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar12 = (iVar14 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar17);
    }
  }
LAB_140f3cfd7:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f3d00e FUN_140f3d00e body=312 status=ok
// SIG undefined FUN_140f3d00e(void)

undefined8
FUN_140f3d00e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140f3d13f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f3d13f;
    }
    FUN_1400841de(param_1 + 0x18,&local_40);
  }
  else {
LAB_140f3d13f:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f3d0f1;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_48 = param_5;
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_140f3d0f1;
    }
  }
  uVar6 = 0;
LAB_140f3d0f1:
  if (local_40 != 0) {
    FUN_140113f3a(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f3d148 FUN_140f3d148 body=140 status=ok
// SIG undefined FUN_140f3d148(void)

void FUN_140f3d148(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x140);
    lVar2 = (longlong)*(int *)(param_1 + 0x148) * 0x48;
    do {
      if (puVar1[7] == param_2) {
        if (puVar1 != (undefined8 *)0x0) {
          local_28 = *puVar1;
          local_20 = *(undefined8 *)(param_3 + 8);
          local_10 = param_5;
          local_18 = param_4;
          FUN_1447cd2ec(param_1 + 0x110);
        }
        break;
      }
      puVar1 = puVar1 + 9;
      lVar2 = lVar2 + -0x48;
    } while (lVar2 != 0);
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f3d1e4 FUN_140f3d1e4 body=31 status=ok
// SIG undefined FUN_140f3d1e4(void)

undefined8 FUN_140f3d1e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f3d212 FUN_140f3d212 body=83 status=ok
// SIG undefined FUN_140f3d212(void)

undefined8 * FUN_140f3d212(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b27ff60;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f3d266 FUN_140f3d266 body=155 status=ok
// SIG undefined FUN_140f3d266(void)

void FUN_140f3d266(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140c04244();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  if (param_2[2] == 0) {
    if ((lVar4 != 0) && (*param_2 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')) {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_2);
        param_2[2] = lVar4;
        if (lVar4 == 0) {
          return;
        }
        goto LAB_140f3d283;
      }
      param_2[2] = 0;
    }
    return;
  }
LAB_140f3d283:
  FUN_140f3d302(param_1,param_2);
  return;
}



// FUNCTION 140f3d302 FUN_140f3d302 body=1080 status=ok
// SIG undefined FUN_140f3d302(void)

undefined8 FUN_140f3d302(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined **ppuVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  int *piVar20;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar10 = param_2[1];
    if (lVar10 == 0) {
      lVar10 = FUN_140c04244();
    }
    lVar12 = *param_2;
    uVar9 = FUN_14477b664(lVar10);
    uVar6 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
    uVar14 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar14 = uVar14 >> 0x10 ^ uVar14;
    uVar6 = (uint)((ulonglong)lVar12 >> 0x10);
    uVar17 = (uint)lVar12 & 0xffff;
    uVar6 = uVar14 >> 0xd ^
            (((uint)lVar12 << 0x10 | uVar17) + (int)((ulonglong)lVar12 >> 0x20) +
             (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar17 >> 4)) - uVar14;
    uVar17 = uVar6 << 8 ^ (-0x61c88647 - uVar14) - uVar6;
    uVar18 = uVar17 >> 0xd ^ (uVar14 - uVar6) - uVar17;
    uVar6 = uVar18 >> 0xc ^ (uVar6 - uVar17) - uVar18;
    uVar14 = uVar6 << 0x10 ^ (uVar17 - uVar18) - uVar6;
    uVar17 = uVar14 >> 5 ^ (uVar18 - uVar6) - uVar14;
    uVar18 = uVar17 >> 3 ^ (uVar6 - uVar14) - uVar17;
    uVar6 = uVar18 << 10 ^ (uVar14 - uVar17) - uVar18;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    uVar9 = (longlong)(int)(uVar6 >> 0xf ^ uVar17 - (uVar18 + uVar6)) &
            (longlong)(int)param_1[9] - 1U;
    iVar7 = *(int *)((longlong)plVar15 + uVar9 * 4);
    if (iVar7 != -1) {
      plVar15 = (longlong *)((longlong)plVar15 + uVar9 * 4);
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar7 * 0x30);
        if (*(longlong *)(*param_1 + 8 + (longlong)iVar7 * 0x30) == 0) {
          uVar13 = FUN_140c04244();
          lVar10 = FUN_14477b664(uVar13);
          plVar1[1] = lVar10;
        }
        lVar10 = param_2[1];
        if (lVar10 == 0) {
          lVar10 = FUN_140c04244();
        }
        lVar12 = *param_2;
        lVar10 = FUN_14477b664(lVar10);
        iVar7 = 0;
        if ((lVar10 != 0) && (plVar2 = *(longlong **)(lVar10 + 0xb8), plVar2 != (longlong *)0x0)) {
          lVar19 = *plVar2;
          pcVar3 = *(code **)(lVar19 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar2);
            iVar7 = 0;
            if (cVar5 == '\0') goto LAB_140f3d4ea;
            lVar19 = *plVar2;
          }
          pcVar3 = *(code **)(lVar19 + 0x110);
          ppuVar16 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar16 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar16 = (undefined **)(*pcVar3)(plVar2);
          }
          iVar7 = FUN_144aff48c(ppuVar16);
        }
LAB_140f3d4ea:
        lVar19 = *plVar1;
        lVar4 = plVar1[1];
        iVar8 = 0;
        if ((lVar4 != 0) &&
           (plVar2 = *(longlong **)(lVar4 + 0xb8), iVar8 = 0, plVar2 != (longlong *)0x0)) {
          lVar11 = *plVar2;
          pcVar3 = *(code **)(lVar11 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar2);
            if (cVar5 == '\0') goto LAB_140f3d558;
            lVar11 = *plVar2;
          }
          pcVar3 = *(code **)(lVar11 + 0x110);
          ppuVar16 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar16 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar16 = (undefined **)(*pcVar3)(plVar2);
          }
          iVar8 = FUN_144aff48c(ppuVar16);
        }
LAB_140f3d558:
        if ((iVar8 == iVar7) && (lVar19 == lVar12)) {
          if (lVar4 == lVar10) {
LAB_140f3d5fc:
            iVar7 = (int)*plVar15;
            lVar10 = *param_1;
            lVar12 = (longlong)iVar7 * 0x30;
            plVar15 = param_1 + 7;
            if ((longlong *)param_1[8] != (longlong *)0x0) {
              plVar15 = (longlong *)param_1[8];
            }
            lVar19 = (longlong)*(int *)(lVar10 + 0x2c + lVar12);
            iVar8 = *(int *)((longlong)plVar15 + lVar19 * 4);
            if (iVar8 == iVar7) {
              piVar20 = (int *)((longlong)plVar15 + lVar19 * 4);
            }
            else {
              do {
                piVar20 = (int *)(lVar10 + (longlong)iVar8 * 0x30 + 0x28);
                iVar8 = *piVar20;
              } while (iVar8 != iVar7);
            }
            *piVar20 = *(int *)(lVar10 + lVar12 + 0x28);
            plVar15 = *(longlong **)(*param_1 + 0x20 + lVar12);
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar15 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar20 = (int *)((longlong)plVar15 + 0xc);
                *piVar20 = *piVar20 + -1;
                UNLOCK();
                if (*piVar20 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
            FUN_140f3d73a(param_1,iVar7);
            return 1;
          }
          if ((lVar10 != 0) && (lVar4 != 0)) {
            iVar7 = *(int *)(lVar10 + 0x38);
            iVar8 = *(int *)(lVar4 + 0x38);
            if (((iVar7 <= iVar8) &&
                (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar7 * 8) == lVar10 + 0x30))
               || ((iVar8 <= iVar7 &&
                   (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar8 * 8) ==
                    lVar4 + 0x30)))) goto LAB_140f3d5fc;
          }
        }
        iVar7 = (int)plVar1[5];
        plVar15 = plVar1 + 5;
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 140f3d73a FUN_140f3d73a body=122 status=ok
// SIG undefined FUN_140f3d73a(void)

void FUN_140f3d73a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140f3d7b4 FUN_140f3d7b4 body=124 status=ok
// SIG undefined FUN_140f3d7b4(void)

void FUN_140f3d7b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_144760e21(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x30);
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
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f3d82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140f3d83e FUN_140f3d83e body=90 status=ok
// SIG undefined FUN_140f3d83e(void)

undefined8 * FUN_140f3d83e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7ee740;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f3d8a6 FUN_140f3d8a6 body=97 status=ok
// SIG undefined FUN_140f3d8a6(void)

undefined8 * FUN_140f3d8a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b345c50;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f3d908 FUN_140f3d908 body=217 status=ok
// SIG undefined FUN_140f3d908(void)

ulonglong FUN_140f3d908(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong unaff_RDI;
  
  lVar4 = param_1;
  lVar3 = *(longlong *)(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    do {
      lVar3 = lVar4;
      lVar4 = *(longlong *)(lVar3 + 0xb8);
    } while (*(longlong *)(lVar3 + 0xb8) != 0);
    if ((*(longlong *)(lVar3 + 0x98) != 0) || (*(longlong *)(lVar3 + 0xa0) != 0)) {
      for (lVar4 = *(longlong *)(param_1 + 0x98); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x98)) {
        cVar1 = FUN_140f3da40(lVar4);
        unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
        if (cVar1 == '\0') goto LAB_140f3d9d7;
      }
      cVar1 = FUN_140f3d9e2(param_1);
      if (cVar1 == '\0') {
        uVar2 = FUN_140f3da40(param_1);
        return uVar2;
      }
    }
  }
  else {
    do {
      lVar4 = lVar3;
      lVar3 = *(longlong *)(lVar4 + 0xb8);
    } while (*(longlong *)(lVar4 + 0xb8) != 0);
    if ((*(longlong *)(lVar4 + 0x98) != 0) || (*(longlong *)(lVar4 + 0xa0) != 0)) {
      cVar1 = FUN_140f3d908();
      unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
      if ((cVar1 != '\0') ||
         ((cVar1 = FUN_140f3d9e2(*(undefined8 *)(param_1 + 0xb8)), cVar1 == '\0' &&
          (cVar1 = FUN_140f3da40(param_1), cVar1 != '\0')))) goto LAB_140f3d9d7;
    }
  }
  unaff_RDI = 0;
LAB_140f3d9d7:
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 140f3d9e2 FUN_140f3d9e2 body=93 status=ok
// SIG undefined FUN_140f3d9e2(void)

undefined8 FUN_140f3d9e2(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = param_1;
  do {
    lVar3 = lVar1;
    lVar1 = *(longlong *)(lVar3 + 0xb8);
  } while (*(longlong *)(lVar3 + 0xb8) != 0);
  if ((*(longlong *)(lVar3 + 0x98) != 0) || (*(longlong *)(lVar3 + 0xa0) != 0)) {
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        return 1;
      }
    }
    else {
      cVar2 = FUN_140f3d9e2(*(longlong *)(param_1 + 0xb8));
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140f3da40 FUN_140f3da40 body=159 status=ok
// SIG undefined FUN_140f3da40(void)

undefined8 FUN_140f3da40(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x110);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x108);
    lVar5 = 0;
    do {
      cVar1 = FUN_140f3dae0(*(undefined8 *)(lVar4 + lVar5));
      if (cVar1 != '\0') {
        return 1;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x338);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x69) == '\x01')) {
    lVar4 = FUN_140dcc81c(param_1);
    iVar3 = 0;
    iVar2 = 0;
    if (lVar4 != 0) {
      iVar2 = FUN_140f43134(lVar4);
    }
    lVar4 = FUN_140dcc81c(param_1);
    if (lVar4 != 0) {
      iVar3 = FUN_145ad3200(lVar4);
    }
    if (iVar3 <= iVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140f3dae0 FUN_140f3dae0 body=306 status=ok
// SIG undefined FUN_140f3dae0(void)

ulonglong FUN_140f3dae0(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  int *piVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
  int local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  int local_50;
  undefined4 uStack_4c;
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar4 = 0;
  }
  else {
    piVar5 = &local_78;
    FUN_140f3dc14(*(longlong *)(param_1 + 0x18),piVar5);
    if (local_58 == 1) {
      bVar6 = local_78 != 0;
      uVar2 = 1;
    }
    else {
      piVar3 = &local_50;
      FUN_1400b56fe(piVar3,&local_78,1);
      bVar6 = local_50 != 0;
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_38) {
          piVar3 = (int *)CONCAT44(uStack_4c,local_50);
        }
        (*pcVar1)(piVar3);
      }
      if (0x18 < local_38) {
        FUN_1400020a8(CONCAT44(uStack_4c,local_50));
      }
      bVar6 = local_30 != 0 && bVar6;
      uVar2 = (uint)local_58;
    }
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar6);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_60) {
        piVar5 = (int *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar1)(piVar5);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f3dc14 FUN_140f3dc14 body=128 status=ok
// SIG undefined FUN_140f3dc14(void)

undefined8 * FUN_140f3dc14(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  _Src = (undefined8 *)(param_1 + 0x30);
  bVar1 = *(byte *)(param_1 + 0x50);
  uVar2 = *(ushort *)(param_1 + 0x48);
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
    *param_2 = _Dst;
    _Src = (undefined8 *)*_Src;
  }
  uVar4 = (ulonglong)((uint)bVar1 * 0x120);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4);
  if (pcVar3 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
  }
  else {
    (*pcVar3)(_Dst,_Src);
  }
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x50);
  return param_2;
}



// FUNCTION 140f3dc94 FUN_140f3dc94 body=154 status=ok
// SIG undefined FUN_140f3dc94(void)

void FUN_140f3dc94(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  longlong local_58;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140f3dd30();
  if ((*(uint *)(param_1 + -0x390) & 0x10) == 0) {
    FUN_140851e80(local_70,param_1 + -0x398);
    FUN_14042b1ec(param_2,local_70,1);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f3dd30 FUN_140f3dd30 body=167 status=ok
// SIG undefined FUN_140f3dd30(void)

void FUN_140f3dd30(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  longlong local_58;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(uint *)(param_1 + -0x390) & 0x10) == 0) {
    FUN_1406c9d00(param_1 + 0x5f0,local_88);
    FUN_14031575e(local_70,local_88);
    FUN_14042b1ec(param_2,local_70,1);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f3ddd8 FUN_140f3ddd8 body=117 status=ok
// SIG undefined FUN_140f3ddd8(void)

void FUN_140f3ddd8(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined **local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_14b42ae50;
  local_28 = 0;
  uStack_20 = 0;
  local_30 = param_1;
  FUN_140f3de4e(&local_38,*(undefined8 *)(param_1 + 0xa8));
  FUN_140f3e196(&local_38);
  FUN_140f3debe(param_1 + 0x140,param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f3de4e FUN_140f3de4e body=110 status=ok
// SIG undefined FUN_140f3de4e(void)

void FUN_140f3de4e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    uVar1 = FUN_14050fd64();
    local_38 = 0;
    FUN_14088df30(uVar1,local_30,param_2,0);
    FUN_140f3df62(param_1,local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f3debe FUN_140f3debe body=112 status=ok
// SIG undefined FUN_140f3debe(void)

ulonglong FUN_140f3debe(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  longlong lVar4;
  
  if (((*(char *)(param_1 + 0x20) == '\x01') && (lVar4 = *(longlong *)(param_1 + 0x10), lVar4 != 0))
     && ((*(char *)(lVar4 + 0x30) != '\0' || (*(char *)(lVar4 + 0x31) == '\x01')))) {
    FUN_1407d097e();
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x28);
    lVar4 = (longlong)*(int *)(param_1 + 0x30) << 5;
    do {
      bVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
      uVar3 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 | bVar1);
      plVar2 = plVar2 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  return uVar3 & 0xffffff01;
}



// FUNCTION 140f3df2e FUN_140f3df2e body=52 status=ok
// SIG undefined FUN_140f3df2e(void)

undefined8 FUN_140f3df2e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 == 0) || ((*(char *)(lVar1 + 0x30) == '\0' && (*(char *)(lVar1 + 0x31) != '\x01')))) {
    uVar2 = 0;
  }
  else {
    FUN_1407d0516(lVar1,4,100);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140f3df62 FUN_140f3df62 body=204 status=ok
// SIG undefined FUN_140f3df62(void)

void FUN_140f3df62(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    iVar3 = *(int *)(lVar4 + 0x170);
    *(uint *)(lVar4 + 0x170) = iVar3 + 1U;
    if (*(uint *)(lVar4 + 0x174) < iVar3 + 1U) {
      FUN_140f3e096((longlong *)(lVar4 + 0x168),iVar3);
    }
    lVar4 = *(longlong *)(lVar4 + 0x168);
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_140f3e030(lVar4 + (longlong)iVar3 * 0x20,&local_30);
    *(undefined ***)(lVar4 + (longlong)iVar3 * 0x20) = &PTR_FUN_14b42be10;
  }
  plVar5 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f3e030 FUN_140f3e030 body=101 status=ok
// SIG undefined FUN_140f3e030(void)

undefined8 * FUN_140f3e030(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  param_1[1] = 0;
  *param_1 = &PTR_LAB_14b222c30;
  param_1[2] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
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
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 140f3e096 FUN_140f3e096 body=255 status=ok
// SIG undefined FUN_140f3e096(void)

void FUN_140f3e096(longlong param_1,int param_2)

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



// FUNCTION 140f3e196 FUN_140f3e196 body=713 status=ok
// SIG undefined FUN_140f3e196(void)

void FUN_140f3e196(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined **ppuVar10;
  bool bVar11;
  undefined1 auStack_a8 [40];
  undefined **local_80;
  longlong *local_78;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14b42ae50;
  plVar1 = param_1 + 2;
  iVar6 = *(int *)(param_1 + 3);
  if (iVar6 < 1) goto LAB_140f3e1c8;
  FUN_144a79b68(&local_60,*(undefined8 *)(param_1[1] + 0xa8));
  local_58 = DAT_14cb8b730;
  local_50 = local_60;
  local_48 = 0;
  uVar7 = FUN_14050fd64();
  FUN_140520a5e(uVar7,&local_80,&local_58);
  if (local_78 == (longlong *)0x0) {
LAB_140f3e260:
    bVar11 = true;
    plVar8 = (longlong *)0x0;
LAB_140f3e265:
    uVar7 = FUN_14050fd64();
    FUN_140b0c6f6(uVar7,&local_80,&local_58);
    plVar9 = local_78;
    ppuVar10 = local_80;
    local_80 = (undefined **)0x0;
    plVar4 = plVar8;
    if (local_78 != plVar8) {
      local_78 = (longlong *)0x0;
      if (bVar11) goto LAB_140f3e2ab;
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plVar4 = plVar9;
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar3 = (int *)((longlong)plVar8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    plVar9 = plVar4;
    plVar8 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_78 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar3 = (int *)((longlong)plVar8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    iVar6 = (int)local_78[1];
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_78[1];
      bVar11 = iVar6 == iVar5;
      if (bVar11) {
        *(int *)(local_78 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar8 = local_78;
    } while (!bVar11);
    LOCK();
    piVar3 = (int *)((longlong)local_78 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    if (plVar8 == (longlong *)0x0) goto LAB_140f3e260;
    plVar9 = plVar8;
    ppuVar10 = local_80;
    if (local_80 == (undefined **)0x0) {
      bVar11 = false;
      goto LAB_140f3e265;
    }
  }
LAB_140f3e2ab:
  (**(code **)(*ppuVar10 + 0x10))(ppuVar10,plVar1,0,0);
  if (plVar9 == (longlong *)0x0) {
    local_78 = (longlong *)0x0;
    local_68 = (longlong *)0x0;
    local_80 = &PTR_FUN_14b42afd0;
    FUN_1457c94f8(param_1[1] + 0x140,&local_80);
    FUN_140e0f122(&local_80);
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    local_78 = (longlong *)0x0;
    local_80 = &PTR_LAB_14b222b90;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    local_68 = plVar9;
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    local_80 = &PTR_FUN_14b42afd0;
    FUN_1457c94f8(param_1[1] + 0x140,&local_80);
    FUN_140e0f122(&local_80);
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  iVar6 = *(int *)(param_1 + 3);
LAB_140f3e1c8:
  FUN_140861e20(*plVar1,iVar6);
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f3e460 FUN_140f3e460 body=538 status=ok
// SIG undefined FUN_140f3e460(void)

void FUN_140f3e460(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140f3e67c();
  if ((param_3 == 1) && (param_1[0x19] != 0)) {
    plVar1 = (longlong *)FUN_140f3e7c6();
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
      lVar3 = FUN_1406d3bdc();
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
        if (((lVar2 != 0) && (param_2 - 1U < 2)) && (*(char *)((longlong)plVar1 + 0x24c) != '\0')) {
          lVar2 = FUN_14041acbe(param_1);
          if (lVar2 != 0) {
            if (DAT_14cbadd90 == 0) {
              local_50 = &local_38;
              local_38 = FUN_141030f22;
              local_40 = FUN_14081d0ea;
              local_48 = &LAB_1459f2e4c;
              local_58 = &LAB_148c39de3;
              local_60 = &LAB_1457a9eb2;
              local_68 = &DAT_149e063b2;
              local_70 = 0;
              local_78 = 0x10000004;
              local_80 = 0x10;
              local_88 = 0x3de0;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            }
            if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
              puVar4 = &DAT_14c9485f0;
              if (*(undefined4 **)(param_1[0x19] + 8) != (undefined4 *)0x0) {
                puVar4 = *(undefined4 **)(param_1[0x19] + 8);
              }
              if (DAT_14c947fe0 == 0) {
                lVar3 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar3);
                DAT_14c947fe0 = lVar3;
              }
              FUN_140045924(DAT_14c947fe0,&local_38,puVar4,1);
              FUN_140f3ea3a(lVar2,&local_38,param_2);
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f3e67c FUN_140f3e67c body=329 status=ok
// SIG undefined FUN_140f3e67c(void)

void FUN_140f3e67c(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 < 9) {
    *(bool *)((longlong)param_1 + (ulonglong)param_2 + 0xb8) = param_3 == 1;
  }
  FUN_1402798cc(param_1);
  if (param_1[0x19] != 0) {
    lVar2 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if ((param_2 == 2 && lVar2 != 0) && (*(char *)(lVar2 + 0x98) == '\x01')) {
      lVar2 = FUN_14073f764(param_1);
      if (lVar2 != 0) {
        FUN_14073f620(local_68,param_1[0x19]);
        iVar1 = FUN_1406ba864(lVar2,local_68,0);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        *(bool *)((longlong)param_1 + 0xf9) = param_3 == 1;
        FUN_140f3e8de(lVar2,param_1[0x19],param_3 == 1,iVar1 < 2);
      }
    }
  }
  if (param_3 == 1) {
    if (param_2 == 1) {
      if (0 < *(int *)((longlong)param_1 + 0xfc)) goto LAB_140f3e6ee;
      *(undefined4 *)((longlong)param_1 + 0xfc) = 1;
    }
    else {
      if ((param_2 != 2) || (1 < *(int *)((longlong)param_1 + 0xfc))) goto LAB_140f3e6ee;
      *(undefined4 *)((longlong)param_1 + 0xfc) = 2;
    }
    FUN_14073f16e(param_1);
    FUN_1402798cc(param_1);
  }
LAB_140f3e6ee:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f3e7c6 FUN_140f3e7c6 body=279 status=ok
// SIG undefined FUN_140f3e7c6(void)

longlong FUN_140f3e7c6(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x38);
  if (lVar6 == 0) {
    uVar5 = FUN_14050c9fe();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x38) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 == 0) {
    if (lVar6 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar4 = FUN_144aff482(uVar5,plVar1);
      *(longlong *)(param_1 + 0x40) = lVar4;
      if (lVar4 == 0) {
        return 0;
      }
      lVar6 = *(longlong *)(param_1 + 0x38);
      goto LAB_140f3e7e6;
    }
  }
  else {
LAB_140f3e7e6:
    if (lVar6 != 0) {
      return lVar4;
    }
    uVar5 = FUN_14050c9fe();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x38) = lVar6;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      return *(longlong *)(param_1 + 0x40);
    }
    if (lVar6 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar5,plVar1);
      goto LAB_140f3e8c9;
    }
  }
  lVar6 = 0;
LAB_140f3e8c9:
  *(longlong *)(param_1 + 0x40) = lVar6;
  return lVar6;
}



// FUNCTION 140f3e8de FUN_140f3e8de body=173 status=ok
// SIG undefined FUN_140f3e8de(void)

void FUN_140f3e8de(longlong param_1,longlong param_2,char param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x380) < 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = **(longlong **)(param_1 + 0x378);
    }
    if (param_3 == '\0') {
      FUN_1457c95d0((undefined8 *)(param_1 + 0x378),&local_30,1);
    }
    else {
      FUN_1457c9566();
    }
    if (*(int *)(param_1 + 0x380) < 1) {
      lVar1 = 0;
    }
    else {
      lVar1 = **(longlong **)(param_1 + 0x378);
    }
    if (lVar1 != lVar2) {
      FUN_140f3e98c(param_1 + 0x360,lVar1,param_4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f3e98c FUN_140f3e98c body=173 status=ok
// SIG undefined FUN_140f3e98c(void)

void FUN_140f3e98c(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140f3ea23;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140f3ea23:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140f3ea3a FUN_140f3ea3a body=234 status=ok
// SIG undefined FUN_140f3ea3a(void)

void FUN_140f3ea3a(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar2 = FUN_1400f6e0c(lVar1);
    lVar1 = DAT_14cb78540;
    if (((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0xc0), lVar2 != 0)) && (DAT_14cb78540 != 0))
    {
      FUN_1446dcdd4(local_58,param_2);
      lVar1 = FUN_144837462(lVar1,local_58);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (lVar1 != 0) {
        lVar3 = FUN_140f3e7c6(lVar1);
        if (lVar3 != 0) {
          FUN_140f3ebb8(lVar2,local_58,lVar3);
          local_68 = param_3;
          FUN_140f3eb26(lVar2,lVar1 + 0x48,local_58,lVar1 + 0xb8);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f3eb26 FUN_140f3eb26 body=146 status=ok
// SIG undefined FUN_140f3eb26(void)

void FUN_140f3eb26(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 != 0) {
    cVar1 = FUN_1401144ce(param_2);
    if (cVar1 != '\0') {
      lVar2 = FUN_140f3ed06(param_2,param_1 + 7);
      *(undefined1 *)(lVar2 + 400) = param_5;
      FUN_140f3ef88(param_1,param_2,param_3,param_4,param_5);
      FUN_140fd7786(param_1 + 7,param_1 + 0x1b);
      return;
    }
  }
  return;
}



// FUNCTION 140f3ebb8 FUN_140f3ebb8 body=333 status=ok
// SIG undefined FUN_140f3ebb8(void)

undefined8 * FUN_140f3ebb8(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (param_3 != 0) {
    puVar6 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,&local_48,puVar6,1);
    FUN_1400021e4(&local_48,&local_38);
    if ((longlong)local_30 != 0) {
      lVar5 = (longlong)local_30 * 2;
      lVar3 = 0;
      do {
        if (*(short *)(local_38 + lVar3 * 2) == 0x5f) {
          uVar7 = local_30 - 1;
          if (local_30 == 0) {
            uVar7 = 0;
          }
          iVar2 = (int)lVar3;
          if ((-1 < iVar2) && (iVar2 < (int)uVar7)) {
            uVar1 = iVar2 + 1U;
            if ((int)uVar7 <= (int)(iVar2 + 1U)) {
              uVar1 = uVar7;
            }
            uVar4 = (ulonglong)uVar1;
            if ((int)uVar1 < 1) {
              uVar4 = 0;
            }
            FUN_14006620a(&local_48,local_38 + uVar4 * 2,uVar7 - (int)uVar4);
            uVar4 = (ulonglong)(local_40 - 1);
            if (local_40 == 0) {
              uVar4 = 0;
            }
            FUN_1446f82e2(param_2,uVar4,local_48,1);
            if (local_48 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        lVar3 = lVar3 + 1;
        lVar5 = lVar5 + -2;
      } while (lVar5 != 0);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f3ed06 FUN_140f3ed06 body=641 status=ok
// SIG undefined FUN_140f3ed06(void)

longlong FUN_140f3ed06(char *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_98 [40];
  int local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_1 == '\x01') {
    FUN_1447a97f4(&local_70,param_1 + 0x10);
    if (0 < local_6c) {
      lVar6 = 0;
      uVar7 = 0;
      iVar1 = local_6c;
      iVar2 = DAT_14c948000;
      do {
        bVar8 = local_70 != 0;
        bVar9 = local_70 != iVar2;
        piVar3 = &DAT_14c948620;
        piVar4 = (int *)&DAT_14c948618;
        if (bVar9 && bVar8) {
          puVar5 = local_68;
          if (0 < local_4c) {
            puVar5 = local_58;
          }
          if (1 < iVar1) {
            puVar5 = local_58;
          }
          piVar3 = (int *)(puVar5 + lVar6 + 8);
          piVar4 = (int *)(puVar5 + lVar6);
        }
        if ((*piVar4 == DAT_14cb7beb0) && (*piVar3 == DAT_14cb7beb8)) {
LAB_140f3eefc:
          FUN_1402b5374(&local_70,uVar7 & 0xffffffff,0);
          iVar1 = local_6c;
          iVar2 = DAT_14c948000;
        }
        else {
          piVar3 = &DAT_14c948620;
          piVar4 = (int *)&DAT_14c948618;
          if (bVar9 && bVar8) {
            puVar5 = local_68;
            if (0 < local_4c) {
              puVar5 = local_58;
            }
            if (1 < iVar1) {
              puVar5 = local_58;
            }
            piVar3 = (int *)(puVar5 + lVar6 + 8);
            piVar4 = (int *)(puVar5 + lVar6);
          }
          if ((*piVar4 == DAT_14cb7bec8) && (*piVar3 == DAT_14cb7bed0)) goto LAB_140f3eefc;
          piVar3 = &DAT_14c948620;
          piVar4 = (int *)&DAT_14c948618;
          if (bVar9 && bVar8) {
            puVar5 = local_68;
            if (0 < local_4c) {
              puVar5 = local_58;
            }
            if (1 < iVar1) {
              puVar5 = local_58;
            }
            piVar3 = (int *)(puVar5 + lVar6 + 8);
            piVar4 = (int *)(puVar5 + lVar6);
          }
          if ((*piVar4 == DAT_14cb7bee0) && (*piVar3 == DAT_14cb7bee8)) goto LAB_140f3eefc;
          piVar3 = &DAT_14c948620;
          piVar4 = (int *)&DAT_14c948618;
          if (bVar9 && bVar8) {
            puVar5 = local_68;
            if (0 < local_4c) {
              puVar5 = local_58;
            }
            if (1 < iVar1) {
              puVar5 = local_58;
            }
            piVar3 = (int *)(puVar5 + lVar6 + 8);
            piVar4 = (int *)(puVar5 + lVar6);
          }
          if ((*piVar4 == DAT_14cb7bef8) && (*piVar3 == DAT_14cb7bf00)) goto LAB_140f3eefc;
          piVar3 = &DAT_14c948620;
          piVar4 = (int *)&DAT_14c948618;
          if (bVar9 && bVar8) {
            puVar5 = local_68;
            if (0 < local_4c) {
              puVar5 = local_58;
            }
            if (1 < iVar1) {
              puVar5 = local_58;
            }
            piVar3 = (int *)(puVar5 + lVar6 + 8);
            piVar4 = (int *)(puVar5 + lVar6);
          }
          if ((*piVar4 == DAT_14cb7bf10) && (*piVar3 == DAT_14cb7bf18)) goto LAB_140f3eefc;
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0xc;
      } while ((longlong)uVar7 < (longlong)iVar1);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_70 = *(int *)(param_1 + 0x10);
  }
  lVar6 = FUN_140fd713a(param_2,local_70,param_1);
  *(undefined8 *)(lVar6 + 8) = *(undefined8 *)param_1;
  *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(param_1 + 8);
  FUN_1447715ec(lVar6 + 0x18,param_1 + 0x10);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 140f3ef88 FUN_140f3ef88 body=2230 status=ok
// SIG undefined FUN_140f3ef88(void)

void FUN_140f3ef88(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  byte param_5)

{
  int iVar1;
  void *_Src;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_328 [32];
  undefined4 *local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  undefined2 *local_2f0;
  int local_2e8;
  undefined2 *local_2e0;
  int local_2d8;
  undefined2 *local_2d0;
  int local_2c8;
  undefined4 local_2c0 [8];
  undefined1 local_2a0;
  undefined1 local_298 [16];
  longlong local_288;
  undefined1 local_278 [32];
  byte local_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  undefined1 local_230;
  undefined1 local_228 [16];
  longlong local_218;
  undefined1 local_208 [32];
  byte local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  byte local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  undefined1 local_198 [32];
  byte local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  undefined1 local_150 [32];
  byte local_130;
  undefined1 local_128 [32];
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e0;
  int iStack_d8;
  undefined4 uStack_d4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if ((int)param_1[0x1e] != *(int *)((longlong)param_1 + 0x11c)) {
    plVar4 = (longlong *)param_1[0x25];
    if ((longlong *)param_1[0x25] == (longlong *)0x0) {
      plVar4 = param_1 + 0x24;
    }
    iVar7 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[0x26] - 1U & (uint)param_5) * 4);
    if (iVar7 != -1) {
      do {
        if (*(byte *)(param_1[0x1d] + (longlong)iVar7 * 0x20) == param_5) {
          if (((*(int *)(param_2 + 0x10) == 0) || (iVar7 = *(int *)(param_2 + 0x14), iVar7 == 0)) ||
             (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
LAB_140f3f6de:
            iStack_d8 = DAT_14c948620;
            local_e0 = DAT_14c948618;
          }
          else {
            lVar8 = param_2 + 0x18;
            if (0 < *(int *)(param_2 + 0x34)) {
              lVar8 = *(longlong *)(param_2 + 0x28);
            }
            if (1 < iVar7) {
              lVar8 = *(longlong *)(param_2 + 0x28);
            }
            if ((iVar7 == 1) || (iVar7 < 5)) goto LAB_140f3f6de;
            iStack_d8 = *(int *)(lVar8 + 0x38);
            local_e0 = *(void **)(lVar8 + 0x30);
          }
          local_300 = param_3;
          local_2f8 = param_4;
          FUN_1408226d0(&local_e0,&local_2d0,1);
          puVar9 = &DAT_149dfb77a;
          if (local_2c8 != 0) {
            puVar9 = local_2d0;
          }
          local_1c0 = 0;
          FUN_140056680(&local_e0,puVar9);
          (*(code *)(&PTR_FUN_14a1842f0)[local_1c0])(&local_1e0);
          local_1e0 = (undefined4)local_e0;
          uStack_1dc = local_e0._4_4_;
          iStack_1d8 = iStack_d8;
          uStack_1d4 = uStack_d4;
          local_1c0 = 4;
          puVar9 = &DAT_149dfb77a;
          if (DAT_14cbd0ff8 != 0) {
            puVar9 = DAT_14cbd0ff0;
          }
          local_308 = &local_1e0;
          FUN_140d767d6(&local_1b8,&DAT_14cbd0df0,3,puVar9);
          if ((*(longlong *)(local_1b8 + 0x3c) == 0) || (*(char *)(local_1b8 + 0x38) < local_1b0)) {
            FUN_144a659ac((int *)(param_2 + 0x10),&local_e0,4);
            FUN_1408226d0(&local_e0,&local_2f0,1);
            puVar9 = &DAT_149dfb77a;
            if (local_2e8 != 0) {
              puVar9 = local_2f0;
            }
            local_2a0 = 0;
            FUN_14101bd16(local_2c0,puVar9);
            puVar9 = &DAT_149dfb77a;
            if (DAT_14cbd0ff8 != 0) {
              puVar9 = DAT_14cbd0ff0;
            }
            local_308 = local_2c0;
            FUN_140d767d6(local_298,&DAT_14cbd0df0,3,puVar9);
            FUN_140d76846(&local_170,local_298);
            bVar2 = false;
            goto LAB_140f3f561;
          }
          if ((int)param_1[0x1e] == *(int *)((longlong)param_1 + 0x11c)) goto LAB_140f3f19e;
          plVar4 = param_1 + 0x24;
          if ((longlong *)param_1[0x25] != (longlong *)0x0) {
            plVar4 = (longlong *)param_1[0x25];
          }
          iVar7 = *(int *)((longlong)plVar4 +
                          (ulonglong)((int)param_1[0x26] - 1U & (uint)param_5) * 4);
          if (iVar7 == -1) goto LAB_140f3f19e;
          goto LAB_140f3f183;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + param_1[0x1d] + 0x18);
      } while (iVar7 != -1);
    }
  }
  goto LAB_140f3f687;
  while (iVar7 = *(int *)(lVar8 + 0x18), iVar7 != -1) {
LAB_140f3f183:
    lVar8 = param_1[0x1d] + (longlong)iVar7 * 0x20;
    if (*(byte *)(param_1[0x1d] + (longlong)iVar7 * 0x20) == param_5) goto LAB_140f3f1a1;
  }
LAB_140f3f19e:
  lVar8 = 0;
LAB_140f3f1a1:
  iVar7 = *(int *)(param_2 + 0x10);
  if (((iVar7 == 0) || (iVar1 = *(int *)(param_2 + 0x14), iVar1 == 0)) || (iVar7 == DAT_14c948000))
  {
LAB_140f3f6f7:
    iStack_d8 = DAT_14c948620;
    local_e0 = DAT_14c948618;
  }
  else {
    lVar11 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar11 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      lVar11 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 5)) goto LAB_140f3f6f7;
    iStack_d8 = *(int *)(lVar11 + 0x38);
    local_e0 = *(void **)(lVar11 + 0x30);
  }
  bVar2 = true;
  FUN_1408226d0(&local_e0,&local_2e0,1);
  puVar9 = &DAT_149dfb77a;
  if (local_2d8 != 0) {
    puVar9 = local_2e0;
  }
  FUN_140056680(&local_e0,puVar9);
  local_250 = (undefined4)local_e0;
  uStack_24c = local_e0._4_4_;
  iStack_248 = iStack_d8;
  uStack_244 = uStack_d4;
  local_230 = 4;
  puVar9 = &DAT_149dfb77a;
  if (DAT_14cbd0ff8 != 0) {
    puVar9 = DAT_14cbd0ff0;
  }
  local_308 = &local_250;
  FUN_140d767d6(local_228,&DAT_14cbd0df0,3,puVar9);
  FUN_14027c0e6(&local_170,local_228);
  if (((*(longlong *)(local_170 + 0x3c) != 0) && (local_168 <= *(char *)(local_170 + 0x38))) &&
     (FUN_140d76916(&local_170), *(longlong *)(local_170 + 0x3c) != 0)) {
    cVar6 = *(char *)(local_170 + 0x38);
    if (local_168 <= cVar6) {
      plVar4 = (longlong *)FUN_14027bf48();
      lVar11 = plVar4[1];
      uVar3 = (int)lVar11 + 1;
      *(uint *)(plVar4 + 1) = uVar3;
      if (*(uint *)((longlong)plVar4 + 0xc) < uVar3) {
        FUN_140eed74c();
      }
      puVar10 = (undefined8 *)((longlong)(int)lVar11 * 0x30 + *plVar4);
      local_e0 = (void *)0x0;
      iStack_d8 = *(int *)(lVar8 + 0x10);
      lVar11 = (longlong)iStack_d8;
      _Src = *(void **)(lVar8 + 8);
      if (lVar11 == 0) {
        uStack_d4 = 0;
        iVar7 = 0;
      }
      else {
        FUN_1446dd670(&local_e0,iStack_d8,0);
        memcpy(local_e0,_Src,lVar11 * 2);
        iVar7 = iStack_d8;
      }
      *puVar10 = local_e0;
      *(int *)(puVar10 + 1) = iVar7;
      *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_d4;
      *(undefined1 *)(puVar10 + 4) = 4;
      puVar10[5] = DAT_14cbd1010;
      if (*(longlong *)(local_170 + 0x3c) == 0) goto LAB_140f3f561;
      cVar6 = *(char *)(local_170 + 0x38);
    }
    puVar10 = local_2f8;
    if (local_168 <= cVar6) {
      plVar4 = (longlong *)FUN_14027bf48(&local_170);
      iVar7 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar7 + 1U) {
        FUN_140eed74c(plVar4,iVar7);
      }
      lVar8 = *plVar4;
      lVar11 = (longlong)iVar7 * 0x30;
      uVar5 = *local_300;
      *(undefined1 *)(lVar8 + 0x20 + lVar11) = 0;
      FUN_140aec01a(lVar8 + lVar11,uVar5);
      *(undefined8 *)(lVar8 + 0x28 + lVar11) = DAT_14cbd1020;
      if (*(longlong *)(local_170 + 0x3c) == 0) goto LAB_140f3f561;
      cVar6 = *(char *)(local_170 + 0x38);
    }
    if (local_168 <= cVar6) {
      plVar4 = (longlong *)FUN_14027bf48(&local_170);
      iVar7 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar7 + 1U) {
        FUN_140eed74c(plVar4,iVar7);
      }
      lVar8 = *plVar4;
      lVar11 = (longlong)iVar7 * 0x30;
      *(undefined8 *)(lVar8 + lVar11) = *puVar10;
      *(undefined1 *)(lVar8 + 0x20 + lVar11) = 3;
      *(undefined8 *)(lVar8 + 0x28 + lVar11) = DAT_14cbd1030;
      if (*(longlong *)(local_170 + 0x3c) == 0) goto LAB_140f3f561;
      cVar6 = *(char *)(local_170 + 0x38);
    }
    if (local_168 <= cVar6) {
      plVar4 = (longlong *)FUN_14027bf48(&local_170);
      iVar7 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar7 + 1U) {
        FUN_140eed74c(plVar4,iVar7);
      }
      lVar8 = *plVar4;
      lVar11 = (longlong)iVar7 * 0x30;
      *(undefined8 *)(lVar8 + lVar11) = puVar10[1];
      *(undefined1 *)(lVar8 + 0x20 + lVar11) = 3;
      *(undefined8 *)(lVar8 + 0x28 + lVar11) = DAT_14cbd1040;
      if (*(longlong *)(local_170 + 0x3c) == 0) goto LAB_140f3f561;
      cVar6 = *(char *)(local_170 + 0x38);
    }
    if (local_168 <= cVar6) {
      plVar4 = (longlong *)FUN_14027bf48(&local_170);
      iVar7 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar7 + 1U) {
        FUN_140eed74c(plVar4,iVar7);
      }
      lVar8 = *plVar4;
      lVar11 = (longlong)iVar7 * 0x30;
      *(undefined8 *)(lVar8 + lVar11) = puVar10[2];
      *(undefined1 *)(lVar8 + 0x20 + lVar11) = 3;
      *(undefined8 *)(lVar8 + 0x28 + lVar11) = DAT_14cbd1050;
    }
  }
LAB_140f3f561:
  FUN_14027c224(&local_e0,&local_170);
  uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((char)local_e0 == '\x01') {
    FUN_140f3f840(&iStack_d8,uVar5);
  }
  FUN_14027c198(&local_e0);
  FUN_1404eec70(local_f8,local_f0);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_108,local_100);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_128);
  (*(code *)(&PTR_FUN_14a1842f0)[local_130])(local_150);
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  if (bVar2) {
    (*(code *)(&PTR_FUN_14a1842f0)[local_1e8])(local_208);
    if (local_218 != 0) {
      FUN_1400020a8();
    }
    if (local_2e0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    (*(code *)(&PTR_FUN_14a1842f0)[local_258])(local_278);
    if (local_288 != 0) {
      FUN_1400020a8();
    }
    if (local_2f0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_178])(local_198);
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_2d0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_140f3f687:
  if ((local_48 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f3f840 FUN_140f3f840 body=162 status=ok
// SIG undefined FUN_140f3f840(void)

longlong FUN_140f3f840(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x88) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0x8c) = iVar2;
  return param_1;
}



// FUNCTION 140f3f8f0 FUN_140f3f8f0 body=181 status=ok
// SIG undefined FUN_140f3f8f0(void)

undefined8 * FUN_140f3f8f0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b365c10;
  FUN_14494dff0(param_1 + 0x66);
  FUN_14494dff0(param_1 + 0x42);
  FUN_14494dff0(param_1 + 0x1e);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x10];
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
  *param_1 = &PTR_FUN_14b366bf0;
  FUN_14029b636(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f3f9a6 FUN_140f3f9a6 body=960 status=ok
// SIG undefined FUN_140f3f9a6(void)

void FUN_140f3f9a6(longlong *param_1,uint param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,char param_6)

{
  ulonglong uVar1;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined1 local_170 [16];
  undefined **local_160;
  longlong local_158;
  undefined4 local_150;
  int local_14c;
  undefined1 local_148 [16];
  longlong local_138;
  undefined4 local_130;
  uint local_12c;
  undefined8 local_128;
  longlong local_118;
  undefined4 local_110;
  longlong local_108;
  longlong local_f0;
  undefined8 local_e0;
  uint local_d8;
  undefined **local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  longlong local_60 [8];
  
  local_60[2] = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((param_2 < 2) &&
     (((param_6 != '\0' || ((char)param_1[(ulonglong)param_2 * 0x12 + 3] != '\x01')) ||
      ((param_3 != (undefined8 *)0x0 && (*(char *)(param_3 + 1) == '\x01')))))) {
    local_e0 = 0;
    local_d8 = local_d8 & 0xffffff00;
    local_a8 = 0;
    local_a0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_9c = 0x80;
    uStack_98 = 0xffffffff;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_64 = 0x404;
    local_d0 = (undefined **)&DAT_14a176f00;
    local_60[0] = 0;
    local_60[1] = 0;
    if (param_3 == (undefined8 *)0x0) {
      local_68 = *(undefined4 *)((longlong)param_1 + 0xc);
    }
    else {
      local_d8 = *(uint *)(param_3 + 1);
      local_e0 = *param_3;
      local_64 = *(undefined2 *)((longlong)param_3 + 0x7c);
      local_68 = *(undefined4 *)(param_3 + 0xf);
      FUN_14093c00e(local_60,param_3 + 0x10);
    }
    local_178 = param_5;
    FUN_140f3fd67(local_170,param_1 + (ulonglong)param_2 * 0x12 + 2,&local_e0,param_4);
    (**(code **)(*param_1 + 0x38))(param_1,param_2,local_170);
    local_160 = (undefined **)&DAT_14a176f00;
    if (local_f0 != 0) {
      FUN_1400020a8();
    }
    local_160 = &PTR_FUN_14a177080;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    local_110 = 0;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    local_150 = 0;
    if (local_14c != 0) {
      FUN_14472eb64(&local_158,0);
    }
    local_128 = 0xffffffff;
    local_130 = 0;
    if (0x80 < local_12c) {
      local_12c = 0x80;
      FUN_1446efbd8(local_148,0);
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    if (local_158 != 0) {
      FUN_1400020a8();
    }
    local_d0 = (undefined **)&DAT_14a176f00;
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    local_d0 = &PTR_FUN_14a177080;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    local_80 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    uVar1 = uStack_c0 >> 0x20;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      FUN_14472eb64(&local_c8,0);
    }
    uStack_98 = 0xffffffff;
    local_94 = 0;
    local_a0 = 0;
    if (0x80 < local_9c) {
      local_9c = 0x80;
      FUN_1446efbd8(local_b8,0);
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60[2] ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f3fd67 FUN_140f3fd67 body=781 status=ok
// SIG undefined FUN_140f3fd67(void)

undefined8 *
FUN_140f3fd67(undefined8 *param_1,longlong param_2,undefined8 *param_3,float param_4,float param_5)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  int local_c0;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
  *param_1 = *param_3;
  puVar1 = param_1 + 2;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_3 + 0xf);
  *(undefined2 *)((longlong)param_1 + 0x7c) = *(undefined2 *)((longlong)param_3 + 0x7c);
  param_1[2] = &DAT_14a176f00;
  param_1[0x10] = 0;
  iVar2 = *(int *)(param_3 + 0x11);
  _Src = (void *)param_3[0x10];
  *(int *)(param_1 + 0x11) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_140501c24(param_1 + 0x10,iVar2,0);
    memcpy((void *)param_1[0x10],_Src,(longlong)iVar2 * 0x1c);
  }
  uVar3 = FUN_1448c9f94(param_2 + 0x10,param_4,0);
  LOCK();
  UNLOCK();
  local_c0 = DAT_14c761474 + 1;
  local_c8 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(puVar1,&local_a4,param_4,uVar3);
  param_5 = param_5 + param_4;
  uVar4 = FUN_1448c9f94(param_3 + 2,param_5,0);
  LOCK();
  UNLOCK();
  local_c0 = DAT_14c761474 + 1;
  local_c8 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(puVar1,&local_a8,param_5,uVar4);
  if ((local_a4 != local_a8) && (FUN_140f40076(puVar1,&local_ac,local_a4), local_ac != local_a8)) {
    do {
      FUN_147a41244(puVar1);
      FUN_140f40076(puVar1,&local_ac,local_a4);
    } while (local_ac != local_a8);
  }
  if (1.0 < param_5) {
    LOCK();
    UNLOCK();
    local_c0 = DAT_14c761474 + 1;
    local_c8 = 0;
    DAT_14c761474 = DAT_14c761474 + 1;
    FUN_1406507bc(puVar1,&local_ac,param_4 + -1.0,uVar3);
    LOCK();
    UNLOCK();
    local_c0 = DAT_14c761474 + 1;
    local_c8 = 0;
    DAT_14c761474 = DAT_14c761474 + 1;
    FUN_1406507bc(puVar1,&local_b0,param_5 + -1.0,uVar4);
    if ((local_ac != local_b0) && (FUN_140f40076(puVar1,&local_b4,local_ac), local_b4 != local_b0))
    {
      do {
        FUN_147a41244(puVar1);
        FUN_140f40076(puVar1,&local_b4,local_ac);
      } while (local_b4 != local_b0);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140f40076 FUN_140f40076 body=122 status=ok
// SIG undefined FUN_140f40076(void)

undefined4 * FUN_140f40076(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_3;
  piVar3 = (int *)FUN_14045d29c(param_1 + 1);
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    iVar2 = (**(code **)(*param_1 + 8))(param_1);
    if (iVar1 + 1 < iVar2) {
      FUN_140da68da(param_1,param_2,iVar1 + 1);
      goto LAB_140f400c7;
    }
  }
  *param_2 = 0;
LAB_140f400c7:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f4014b FUN_140f4014b body=61 status=ok
// SIG undefined FUN_140f4014b(void)

void FUN_140f4014b(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f40189 FUN_140f40189 body=60 status=ok
// SIG undefined FUN_140f40189(void)

void FUN_140f40189(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cd2ec();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f401c6 FUN_140f401c6 body=2811 status=ok
// SIG undefined FUN_140f401c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f401c6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStack_148 [40];
  longlong local_120;
  longlong local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b0;
  ulonglong uVar22;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar24 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar24 + 0x18) != *(int *)(lVar24 + 0x44)) {
    lVar19 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar23 = lVar24 + 0x48;
    if (*(longlong *)(lVar24 + 0x50) != 0) {
      lVar23 = *(longlong *)(lVar24 + 0x50);
    }
    iVar20 = *(int *)(lVar23 + (ulonglong)
                               (*(int *)(lVar24 + 0x58) - 1U &
                               (int)lVar19 + (int)((ulonglong)lVar19 >> 0x20) * 0x17) * 4);
    if (iVar20 != -1) {
      do {
        lVar23 = *(longlong *)(lVar24 + 0x10) + (longlong)iVar20 * 0x410;
        if (*(longlong *)(*(longlong *)(lVar24 + 0x10) + (longlong)iVar20 * 0x410) == lVar19)
        goto LAB_140f40292;
        iVar20 = *(int *)(lVar23 + 0x400);
      } while (iVar20 != -1);
    }
  }
  lVar23 = 0;
LAB_140f40292:
  uVar21 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar22 = (ulonglong)uVar21;
  FUN_140f40cc2();
  *(uint *)(param_2 + 0x50) = uVar21 + _DAT_14cb3ca7c;
  uVar18 = DAT_14c9c0de0;
  uVar17 = DAT_14c9c0d80;
  lVar24 = *(longlong *)(param_2 + 0x38);
  *(undefined8 *)(lVar24 + 0x10 + uVar22) = DAT_14c9c0de0;
  *(undefined8 *)(lVar24 + 0xc0 + uVar22) = uVar18;
  *(undefined8 *)(lVar24 + 0x178 + uVar22) = uVar18;
  *(undefined8 *)(lVar24 + 0x180 + uVar22) = uVar18;
  if ((DAT_14c8736a0 >> 0x17 & 1) == 0) {
    uVar18 = uVar17;
  }
  plVar1 = (longlong *)(lVar24 + uVar22);
  *(undefined8 *)(lVar24 + 0x230 + uVar22) = uVar18;
  *(undefined8 *)(lVar24 + 0x2f0 + uVar22) = uVar17;
  if (lVar23 == 0) {
    bVar25 = true;
    bVar11 = true;
    bVar16 = true;
LAB_140f40352:
    *plVar1 = *(longlong *)(DAT_14ca8c008 + 0x48);
    plVar1[1] = *(longlong *)(DAT_14ca8c090 + 0x10);
    lVar24 = DAT_14c846258;
    plVar1[6] = _DAT_14c846250;
    plVar1[7] = lVar24;
    lVar24 = _DAT_14c846268;
    plVar1[8] = _DAT_14c846260;
    plVar1[9] = lVar24;
    lVar24 = _DAT_14c846278;
    plVar1[10] = _DAT_14c846270;
    plVar1[0xb] = lVar24;
    lVar24 = _DAT_14c846288;
    plVar1[0xc] = _DAT_14c846280;
    plVar1[0xd] = lVar24;
    plVar1[0xe] = 0;
    plVar1[0x10] = 0;
    plVar1[0x11] = 0;
    plVar1[0x12] = 0;
    plVar1[0x13] = 0;
    plVar1[0x14] = 0;
    plVar1[0x15] = 0;
    if (!bVar16) goto LAB_140f4043e;
  }
  else {
    if (*(longlong *)(lVar23 + 0x10) == 0) {
      bVar15 = false;
    }
    else {
      bVar15 = false;
      if (*(longlong *)(lVar23 + 0xc0) != 0) {
        *plVar1 = *(longlong *)(lVar23 + 0xc0);
        plVar1[1] = *(longlong *)(lVar23 + 0x10);
        local_100 = *(undefined8 *)(lVar23 + 0x50);
        local_110 = *(undefined4 *)(lVar23 + 0x40);
        uStack_10c = *(undefined4 *)(lVar23 + 0x44);
        uStack_108 = *(undefined4 *)(lVar23 + 0x48);
        uStack_104 = *(undefined4 *)(lVar23 + 0x4c);
        FUN_144b35076(&local_f8);
        *(float *)(plVar1 + 4) = (float)(double)CONCAT44(uStack_f4,local_f8);
        *(float *)((longlong)plVar1 + 0x24) = (float)(double)CONCAT44(uStack_ec,uStack_f0);
        *(float *)(plVar1 + 5) = (float)(double)CONCAT44(uStack_e4,local_e8);
        dVar8 = *(double *)(lVar23 + 0x90);
        dVar9 = *(double *)(lVar23 + 0x88);
        dVar10 = *(double *)(lVar23 + 0x80);
        dVar3 = *(double *)(lVar23 + 0x70);
        dVar4 = *(double *)(lVar23 + 0x68);
        dVar5 = *(double *)(lVar23 + 0x60);
        *(float *)(plVar1 + 6) = (float)(double)CONCAT44(uStack_dc,uStack_e0);
        *(float *)((longlong)plVar1 + 0x34) = (float)(double)CONCAT44(uStack_d4,local_d8);
        *(float *)(plVar1 + 7) = (float)(double)CONCAT44(uStack_cc,uStack_d0);
        *(undefined4 *)((longlong)plVar1 + 0x3c) = 0;
        *(float *)(plVar1 + 8) = (float)dVar5;
        *(float *)((longlong)plVar1 + 0x44) = (float)dVar4;
        *(float *)(plVar1 + 9) = (float)dVar3;
        *(undefined4 *)((longlong)plVar1 + 0x4c) = 0;
        *(float *)(plVar1 + 10) = (float)dVar10;
        *(float *)((longlong)plVar1 + 0x54) = (float)dVar9;
        *(float *)(plVar1 + 0xb) = (float)dVar8;
        *(undefined8 *)((longlong)plVar1 + 0x5c) = 0;
        *(undefined8 *)((longlong)plVar1 + 100) = 0;
        *(undefined4 *)((longlong)plVar1 + 0x6c) = 0x3f800000;
        *(uint *)(plVar1 + 0xe) = (uint)*(byte *)(lVar23 + 0x3f0);
        *(undefined4 *)((longlong)plVar1 + 0x74) = 1;
        lVar24 = *(longlong *)(lVar23 + 0x20);
        plVar1[0x10] = *(longlong *)(lVar23 + 0x18);
        plVar1[0x11] = lVar24;
        lVar24 = *(longlong *)(lVar23 + 0x30);
        plVar1[0x12] = *(longlong *)(lVar23 + 0x28);
        plVar1[0x13] = lVar24;
        uVar12 = *(undefined4 *)(lVar23 + 0xcc);
        uVar13 = *(undefined4 *)(lVar23 + 0xd0);
        uVar14 = *(undefined4 *)(lVar23 + 0xd4);
        *(undefined4 *)(plVar1 + 0x14) = *(undefined4 *)(lVar23 + 200);
        *(undefined4 *)((longlong)plVar1 + 0xa4) = uVar12;
        *(undefined4 *)(plVar1 + 0x15) = uVar13;
        *(undefined4 *)((longlong)plVar1 + 0xac) = uVar14;
        bVar15 = true;
      }
    }
    if (*(longlong *)(lVar23 + 0xe0) == 0) {
      bVar16 = false;
    }
    else {
      bVar16 = false;
      if (*(longlong *)(lVar23 + 400) != 0) {
        plVar1[0x16] = *(longlong *)(lVar23 + 400);
        plVar1[0x17] = *(longlong *)(lVar23 + 0xe0);
        local_100 = *(undefined8 *)(lVar23 + 0x120);
        local_110 = *(undefined4 *)(lVar23 + 0x110);
        uStack_10c = *(undefined4 *)(lVar23 + 0x114);
        uStack_108 = *(undefined4 *)(lVar23 + 0x118);
        uStack_104 = *(undefined4 *)(lVar23 + 0x11c);
        FUN_144b35076(&local_f8);
        *(float *)(plVar1 + 0x1a) = (float)(double)CONCAT44(uStack_f4,local_f8);
        *(float *)((longlong)plVar1 + 0xd4) = (float)(double)CONCAT44(uStack_ec,uStack_f0);
        *(float *)(plVar1 + 0x1b) = (float)(double)CONCAT44(uStack_e4,local_e8);
        dVar8 = *(double *)(lVar23 + 0x180);
        dVar9 = *(double *)(lVar23 + 0x178);
        dVar10 = *(double *)(lVar23 + 0x170);
        dVar3 = *(double *)(lVar23 + 0x160);
        dVar4 = *(double *)(lVar23 + 0x158);
        dVar5 = *(double *)(lVar23 + 0x150);
        dVar6 = *(double *)(lVar23 + 0x140);
        dVar7 = *(double *)(lVar23 + 0x138);
        dVar2 = *(double *)(lVar23 + 0x130);
        *(float *)(plVar1 + 0x1c) = (float)(double)CONCAT44(uStack_dc,uStack_e0);
        *(float *)((longlong)plVar1 + 0xe4) = (float)(double)CONCAT44(uStack_d4,local_d8);
        *(float *)(plVar1 + 0x1d) = (float)(double)CONCAT44(uStack_cc,uStack_d0);
        *(undefined4 *)((longlong)plVar1 + 0xec) = 0;
        *(float *)(plVar1 + 0x1e) = (float)dVar2;
        *(float *)((longlong)plVar1 + 0xf4) = (float)dVar7;
        *(float *)(plVar1 + 0x1f) = (float)dVar6;
        *(undefined4 *)((longlong)plVar1 + 0xfc) = 0;
        *(float *)(plVar1 + 0x20) = (float)dVar5;
        *(float *)((longlong)plVar1 + 0x104) = (float)dVar4;
        *(float *)(plVar1 + 0x21) = (float)dVar3;
        *(undefined4 *)((longlong)plVar1 + 0x10c) = 0;
        *(float *)(plVar1 + 0x22) = (float)dVar10;
        *(float *)((longlong)plVar1 + 0x114) = (float)dVar9;
        *(float *)(plVar1 + 0x23) = (float)dVar8;
        *(undefined8 *)((longlong)plVar1 + 0x11c) = 0x13f800000;
        lVar24 = *(longlong *)(lVar23 + 0xf0);
        plVar1[0x26] = *(longlong *)(lVar23 + 0xe8);
        plVar1[0x27] = lVar24;
        lVar24 = *(longlong *)(lVar23 + 0x100);
        plVar1[0x28] = *(longlong *)(lVar23 + 0xf8);
        plVar1[0x29] = lVar24;
        uVar12 = *(undefined4 *)(lVar23 + 0x19c);
        uVar13 = *(undefined4 *)(lVar23 + 0x1a0);
        uVar14 = *(undefined4 *)(lVar23 + 0x1a4);
        *(undefined4 *)(plVar1 + 0x2a) = *(undefined4 *)(lVar23 + 0x198);
        *(undefined4 *)((longlong)plVar1 + 0x154) = uVar12;
        *(undefined4 *)(plVar1 + 0x2b) = uVar13;
        *(undefined4 *)((longlong)plVar1 + 0x15c) = uVar14;
        bVar16 = true;
      }
    }
    bVar25 = true;
    bVar11 = true;
    if (*(longlong *)(lVar23 + 0x1b0) != 0) {
      bVar11 = true;
      if ((*(longlong *)(lVar23 + 0x260) != 0) &&
         (bVar11 = true, *(longlong *)(lVar23 + 0x278) != 0)) {
        plVar1[0x2c] = *(longlong *)(lVar23 + 0x260);
        plVar1[0x2d] = *(longlong *)(lVar23 + 0x278);
        plVar1[0x2e] = *(longlong *)(lVar23 + 0x1b0);
        local_100 = *(undefined8 *)(lVar23 + 0x1f0);
        local_110 = *(undefined4 *)(lVar23 + 0x1e0);
        uStack_10c = *(undefined4 *)(lVar23 + 0x1e4);
        uStack_108 = *(undefined4 *)(lVar23 + 0x1e8);
        uStack_104 = *(undefined4 *)(lVar23 + 0x1ec);
        FUN_144b35076(&local_f8);
        *(float *)(plVar1 + 0x32) = (float)(double)CONCAT44(uStack_f4,local_f8);
        *(float *)((longlong)plVar1 + 0x194) = (float)(double)CONCAT44(uStack_ec,uStack_f0);
        *(float *)(plVar1 + 0x33) = (float)(double)CONCAT44(uStack_e4,local_e8);
        dVar8 = *(double *)(lVar23 + 0x238);
        dVar9 = *(double *)(lVar23 + 0x230);
        dVar10 = *(double *)(lVar23 + 0x228);
        dVar3 = *(double *)(lVar23 + 0x220);
        dVar4 = *(double *)(lVar23 + 0x218);
        dVar5 = *(double *)(lVar23 + 0x210);
        dVar6 = *(double *)(lVar23 + 0x208);
        dVar7 = *(double *)(lVar23 + 0x200);
        *(float *)(plVar1 + 0x34) = (float)(double)CONCAT44(uStack_dc,uStack_e0);
        *(float *)((longlong)plVar1 + 0x1a4) = (float)(double)CONCAT44(uStack_d4,local_d8);
        *(float *)(plVar1 + 0x35) = (float)(double)CONCAT44(uStack_cc,uStack_d0);
        *(undefined4 *)((longlong)plVar1 + 0x1ac) = 0x3f800000;
        *(float *)(plVar1 + 0x36) = (float)dVar7;
        *(float *)((longlong)plVar1 + 0x1b4) = (float)dVar6;
        *(float *)(plVar1 + 0x37) = (float)dVar5;
        *(float *)((longlong)plVar1 + 0x1bc) = (float)dVar4;
        *(float *)(plVar1 + 0x38) = (float)dVar3;
        *(float *)((longlong)plVar1 + 0x1c4) = (float)dVar10;
        *(float *)(plVar1 + 0x39) = (float)dVar9;
        *(float *)((longlong)plVar1 + 0x1cc) = (float)dVar8;
        plVar1[0x3a] = 0;
        plVar1[0x3b] = 0x3f80000000000000;
        *(undefined4 *)((longlong)plVar1 + 0x224) = 1;
        *(undefined4 *)(plVar1 + 0x44) = *(undefined4 *)(lVar23 + 0x290);
        lVar24 = *(longlong *)(lVar23 + 0x1c0);
        plVar1[0x3c] = *(longlong *)(lVar23 + 0x1b8);
        plVar1[0x3d] = lVar24;
        lVar24 = *(longlong *)(lVar23 + 0x1d0);
        plVar1[0x3e] = *(longlong *)(lVar23 + 0x1c8);
        plVar1[0x3f] = lVar24;
        lVar24 = *(longlong *)(lVar23 + 0x270);
        plVar1[0x40] = *(longlong *)(lVar23 + 0x268);
        plVar1[0x41] = lVar24;
        uVar12 = *(undefined4 *)(lVar23 + 0x284);
        uVar13 = *(undefined4 *)(lVar23 + 0x288);
        uVar14 = *(undefined4 *)(lVar23 + 0x28c);
        *(undefined4 *)(plVar1 + 0x42) = *(undefined4 *)(lVar23 + 0x280);
        *(undefined4 *)((longlong)plVar1 + 0x214) = uVar12;
        *(undefined4 *)(plVar1 + 0x43) = uVar13;
        *(undefined4 *)((longlong)plVar1 + 0x21c) = uVar14;
        bVar11 = false;
      }
    }
    lVar24 = *(longlong *)(lVar23 + 0x2a0);
    if (lVar24 != 0) {
      local_120 = *(longlong *)(lVar24 + 0x10);
      local_118 = *(longlong *)(lVar24 + 0x28);
      if (local_120 != 0 || local_118 != 0) {
        lVar24 = *(longlong *)(lVar24 + 0x40);
        *(undefined4 *)(plVar1 + 0x49) = *(undefined4 *)(lVar23 + 0x2b0);
        plVar1[0x48] = *(longlong *)(lVar23 + 0x2a8);
        FUN_144a928e2(&local_f8,lVar23 + 0x2c0);
        *(undefined4 *)(plVar1 + 0x4a) = local_f8;
        *(undefined4 *)((longlong)plVar1 + 0x254) = uStack_f4;
        *(undefined4 *)(plVar1 + 0x4b) = uStack_f0;
        *(undefined4 *)((longlong)plVar1 + 0x25c) = uStack_ec;
        *(undefined4 *)(plVar1 + 0x4c) = local_e8;
        *(undefined4 *)((longlong)plVar1 + 0x264) = uStack_e4;
        *(undefined4 *)(plVar1 + 0x4d) = uStack_e0;
        *(undefined4 *)((longlong)plVar1 + 0x26c) = uStack_dc;
        *(undefined4 *)(plVar1 + 0x4e) = local_d8;
        *(undefined4 *)((longlong)plVar1 + 0x274) = uStack_d4;
        *(undefined4 *)(plVar1 + 0x4f) = uStack_d0;
        *(undefined4 *)((longlong)plVar1 + 0x27c) = uStack_cc;
        *(undefined4 *)(plVar1 + 0x50) = local_c8;
        *(undefined4 *)((longlong)plVar1 + 0x284) = uStack_c4;
        *(undefined4 *)(plVar1 + 0x51) = uStack_c0;
        *(undefined4 *)((longlong)plVar1 + 0x28c) = uStack_bc;
        FUN_144a928e2(&local_f8,lVar23 + 0x340);
        plVar1[0x52] = CONCAT44(uStack_f4,local_f8);
        plVar1[0x53] = CONCAT44(uStack_ec,uStack_f0);
        plVar1[0x54] = CONCAT44(uStack_e4,local_e8);
        plVar1[0x55] = CONCAT44(uStack_dc,uStack_e0);
        plVar1[0x56] = CONCAT44(uStack_d4,local_d8);
        plVar1[0x57] = CONCAT44(uStack_cc,uStack_d0);
        plVar1[0x58] = CONCAT44(uStack_c4,local_c8);
        plVar1[0x59] = CONCAT44(uStack_bc,uStack_c0);
        dVar8 = *(double *)(lVar23 + 0x3d8);
        dVar9 = *(double *)(lVar23 + 0x3d0);
        dVar10 = *(double *)(lVar23 + 0x3c8);
        *(float *)(plVar1 + 0x5a) = (float)*(double *)(lVar23 + 0x3c0);
        *(float *)((longlong)plVar1 + 0x2d4) = (float)dVar10;
        *(float *)(plVar1 + 0x5b) = (float)dVar9;
        *(float *)((longlong)plVar1 + 0x2dc) = (float)dVar8;
        dVar8 = *(double *)(lVar23 + 1000);
        *(float *)(plVar1 + 0x5c) = (float)*(double *)(lVar23 + 0x3e0);
        *(float *)((longlong)plVar1 + 0x2e4) = (float)dVar8;
        bVar25 = local_120 != 0;
        lVar19 = lVar24;
        if (!bVar25) {
          local_120 = *(longlong *)(DAT_14ca94dc8 + 0x10);
          lVar19 = 0;
        }
        plVar1[0x45] = local_120;
        *(uint *)(plVar1 + 0x47) = (uint)bVar25;
        plVar1[0x5d] = lVar19;
        if (local_118 == 0) {
          local_118 = *(longlong *)(DAT_14ca8c090 + 0x10);
          lVar24 = 0;
        }
        plVar1[0x5f] = local_118;
        plVar1[0x60] = lVar24;
        bVar25 = false;
      }
    }
    if (!bVar15) {
      bVar16 = (bool)(bVar16 ^ 1);
      goto LAB_140f40352;
    }
    if (bVar16) goto LAB_140f4043e;
  }
  plVar1[0x16] = *(longlong *)(DAT_14ca8c008 + 0x48);
  plVar1[0x17] = *(longlong *)(DAT_14ca8c090 + 0x10);
  lVar24 = DAT_14c846258;
  plVar1[0x1c] = _DAT_14c846250;
  plVar1[0x1d] = lVar24;
  lVar24 = _DAT_14c846268;
  plVar1[0x1e] = _DAT_14c846260;
  plVar1[0x1f] = lVar24;
  lVar24 = _DAT_14c846278;
  plVar1[0x20] = _DAT_14c846270;
  plVar1[0x21] = lVar24;
  lVar24 = _DAT_14c846288;
  plVar1[0x22] = _DAT_14c846280;
  plVar1[0x23] = lVar24;
  *(undefined4 *)(plVar1 + 0x24) = 0;
  plVar1[0x26] = 0;
  plVar1[0x27] = 0;
  plVar1[0x28] = 0;
  plVar1[0x29] = 0;
  plVar1[0x2a] = 0;
  plVar1[0x2b] = 0;
LAB_140f4043e:
  if (bVar11) {
    lVar24 = *(longlong *)(DAT_14ca8c008 + 0x48);
    plVar1[0x2c] = lVar24;
    plVar1[0x2d] = lVar24;
    plVar1[0x2e] = *(longlong *)(DAT_14ca8c090 + 0x10);
    lVar24 = DAT_14c846258;
    plVar1[0x34] = _DAT_14c846250;
    plVar1[0x35] = lVar24;
    lVar24 = _DAT_14c846268;
    plVar1[0x36] = _DAT_14c846260;
    plVar1[0x37] = lVar24;
    lVar24 = _DAT_14c846278;
    plVar1[0x38] = _DAT_14c846270;
    plVar1[0x39] = lVar24;
    lVar24 = _DAT_14c846288;
    plVar1[0x3a] = _DAT_14c846280;
    plVar1[0x3b] = lVar24;
    plVar1[0x3c] = 0;
    plVar1[0x3d] = 0;
    plVar1[0x3e] = 0;
    plVar1[0x3f] = 0;
    plVar1[0x40] = 0;
    plVar1[0x41] = 0;
    plVar1[0x42] = 0;
    plVar1[0x43] = 0;
    plVar1[0x44] = 0;
  }
  if (bVar25) {
    plVar1[0x45] = *(longlong *)(DAT_14ca94dc8 + 0x10);
    *(undefined4 *)(plVar1 + 0x49) = DAT_14c846338;
    plVar1[0x48] = DAT_14c846330;
    lVar24 = DAT_14c846258;
    plVar1[0x4a] = _DAT_14c846250;
    plVar1[0x4b] = lVar24;
    lVar24 = _DAT_14c846268;
    plVar1[0x4c] = _DAT_14c846260;
    plVar1[0x4d] = lVar24;
    lVar24 = _DAT_14c846278;
    plVar1[0x4e] = _DAT_14c846270;
    plVar1[0x4f] = lVar24;
    lVar24 = _DAT_14c846288;
    plVar1[0x50] = _DAT_14c846280;
    plVar1[0x51] = lVar24;
    lVar24 = _DAT_14c846268;
    plVar1[0x54] = _DAT_14c846260;
    plVar1[0x55] = lVar24;
    lVar24 = _DAT_14c846278;
    plVar1[0x56] = _DAT_14c846270;
    plVar1[0x57] = lVar24;
    lVar24 = _DAT_14c846288;
    plVar1[0x58] = _DAT_14c846280;
    plVar1[0x59] = lVar24;
    lVar24 = DAT_14c846258;
    plVar1[0x52] = _DAT_14c846250;
    plVar1[0x53] = lVar24;
    plVar1[0x5a] = 0;
    plVar1[0x5b] = 0;
    plVar1[0x5c] = DAT_14c84635c;
    *(undefined4 *)(plVar1 + 0x47) = 0;
    plVar1[0x5f] = *(longlong *)(DAT_14ca8c090 + 0x10);
  }
  lVar24 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18);
  lVar19 = *(longlong *)(lVar24 + 0x14);
  *(undefined4 *)(plVar1 + 99) = *(undefined4 *)(lVar24 + 0x1c);
  plVar1[0x62] = lVar19;
  if ((local_b0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f40cc2 FUN_140f40cc2 body=258 status=ok
// SIG undefined FUN_140f40cc2(void)

void FUN_140f40cc2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3cac0) {
    FUN_144b3d300(&DAT_14cb3cac0);
    if (DAT_14cb3cac0 == -1) {
      FUN_140f40dc6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 800;
      local_58 = 0x47;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3ca40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a5545b);
      _Init_thread_footer(&DAT_14cb3cac0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f40dc6 FUN_140f40dc6 body=226 status=ok
// SIG undefined FUN_140f40dc6(void)

longlong * FUN_140f40dc6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1464715c2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f40eaa FUN_140f40eaa body=204 status=ok
// SIG undefined FUN_140f40eaa(void)

void FUN_140f40eaa(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar5 = DAT_14caca278;
  if (DAT_14caca280 == 0) {
    plVar5 = (longlong *)0x0;
  }
  (**(code **)(*plVar5 + 0x58))(plVar5,param_1);
  lVar3 = FUN_1447210f0(param_1);
  if (lVar3 != 0) {
    uVar4 = FUN_1447210f0(param_1);
    FUN_140f40f76(uVar4,param_1 + 0x3c8);
    lVar3 = FUN_1447210f0(param_1);
    iVar1 = *(int *)(lVar3 + 0x6b0);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(lVar3 + 0x6a8);
      lVar6 = (longlong)iVar1 * 8;
      lVar7 = 0;
      lVar8 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar7 * 8) == param_1 + 0x3c8) {
          if ((uint)lVar7 == 0xffffffff) {
            return;
          }
          memmove((void *)(lVar2 + (lVar8 >> 0x20) * 8),(void *)(lVar2 + (lVar8 >> 0x20) * 8 + 8),
                  (longlong)(int)(~(uint)lVar7 + iVar1) << 3);
          *(int *)(lVar3 + 0x6b0) = *(int *)(lVar3 + 0x6b0) + -1;
          return;
        }
        lVar8 = lVar8 + 0x100000000;
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
  }
  return;
}



// FUNCTION 140f40f76 FUN_140f40f76 body=123 status=ok
// SIG undefined FUN_140f40f76(void)

void FUN_140f40f76(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x6b0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x6a8);
    lVar3 = (longlong)iVar1 * 8;
    lVar4 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4 * 8) == param_2) {
        if ((uint)lVar4 == 0xffffffff) {
          return;
        }
        memmove((void *)(lVar2 + (lVar5 >> 0x20) * 8),(void *)(lVar2 + (lVar5 >> 0x20) * 8 + 8),
                (longlong)(int)(~(uint)lVar4 + iVar1) << 3);
        *(int *)(param_1 + 0x6b0) = *(int *)(param_1 + 0x6b0) + -1;
        return;
      }
      lVar5 = lVar5 + 0x100000000;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 140f40ff2 FUN_140f40ff2 body=186 status=ok
// SIG undefined FUN_140f40ff2(void)

longlong FUN_140f40ff2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = FUN_140f410ac();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 != 0) goto LAB_140f4101e;
  }
  else {
    FUN_1456cec3c(lVar1);
LAB_140f4101e:
    lVar2 = FUN_140f410ac();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      lVar5 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        lVar5 = lVar1;
      }
      goto LAB_140f41043;
    }
  }
  lVar5 = 0;
LAB_140f41043:
  plVar3 = (longlong *)FUN_1448a6f9c(param_1 + 0x70,lVar5);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_14086c8a8();
    lVar1 = (**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (lVar1 != 0) {
      uVar4 = FUN_14086c8a8();
      lVar2 = FUN_144718840(lVar1,uVar4);
      if (lVar1 == lVar2) {
        return 0;
      }
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140f410ac FUN_140f410ac body=228 status=ok
// SIG undefined FUN_140f410ac(void)

longlong FUN_140f410ac(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbb2358 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1465d5e5a;
    local_28 = &LAB_1459f378a;
    local_38 = &LAB_148c588f5;
    local_40 = FUN_1418d0ce0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_DroneVitals",&DAT_14cbb2358,&DAT_148c588f4
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb2358;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f41192 FUN_140f41192 body=135 status=ok
// SIG undefined FUN_140f41192(void)

void FUN_140f41192(longlong *param_1)

{
  undefined8 uVar1;
  
  if (((*(byte *)((longlong)param_1 + 0xb2a) & 1) == 0) && (param_1[0x154] != 0)) {
    uVar1 = FUN_14074d544(param_1 + 0x154);
    (**(code **)(*param_1 + 0x638))
              (param_1,uVar1,1,*(undefined4 *)((longlong)param_1 + 0xa8c),(int)param_1[0x152],
               *(undefined4 *)((longlong)param_1 + 0xa94),0xbf800000,0);
    FUN_14472eae2(param_1,0x4000000);
    return;
  }
  return;
}



// FUNCTION 140f4121a FUN_140f4121a body=2286 status=ok
// SIG undefined FUN_140f4121a(void)

void FUN_140f4121a(longlong *param_1,longlong param_2,char param_3,undefined4 param_4,float param_5,
                  undefined4 param_6,float param_7,int param_8)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  byte bVar11;
  undefined4 *puVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong lStack_88;
  longlong *local_78;
  longlong local_68 [4];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(int *)(param_1 + 0x151) = param_8;
  if (param_8 == 0) {
    iVar13 = 0;
    if (0 < DAT_14c763974) {
      iVar13 = DAT_14c763974;
    }
    iVar13 = iVar13 + 1;
    *(int *)(param_1 + 0x151) = DAT_14c763974;
    DAT_14c763974 = iVar13;
  }
  *(byte *)((longlong)param_1 + 0xb2a) =
       (param_3 * '\b' | *(byte *)((longlong)param_1 + 0xb2a) & 0xf6) + 1;
  *(undefined4 *)((longlong)param_1 + 0xa94) = param_6;
  uVar2 = ~-(uint)(0.0 < param_5) & *(uint *)(param_2 + 0x6c) |
          (uint)param_5 & -(uint)(0.0 < param_5);
  *(uint *)(param_1 + 0x152) = uVar2;
  *(uint *)((longlong)param_1 + 0xa84) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xa8c) = param_4;
  param_1[0x166] = param_2;
  *(undefined1 *)((longlong)param_1 + 0xb29) = *(undefined1 *)(param_2 + 0x58);
  if ((param_3 == '\0') && ((char)param_1[0x165] != '\0')) {
    *(char *)((longlong)param_1 + 0xb29) = (char)param_1[0x165] + -1;
  }
  lVar6 = FUN_1447210f0(param_1);
  if (lVar6 == 0) {
LAB_140f41311:
    bVar11 = 0;
  }
  else {
    lVar6 = FUN_1447210f0(param_1);
    if (6 < *(byte *)(lVar6 + 0x152)) goto LAB_140f41311;
    bVar11 = 0x6a >> (*(byte *)(lVar6 + 0x152) & 0x1f);
  }
  if ((char)param_1[0x2f] == '\x03') {
    if (param_1[0x166] == 0) {
      puVar12 = &DAT_14c9485f0;
    }
    else {
      puVar4 = *(undefined4 **)(param_1[0x166] + 8);
      puVar12 = &DAT_14c9485f0;
      if (puVar4 != (undefined4 *)0x0) {
        puVar12 = puVar4;
      }
    }
    if (DAT_14c947fe0 == 0) {
      lVar6 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar6);
      DAT_14c947fe0 = lVar6;
    }
    FUN_140045924(DAT_14c947fe0,&local_d0,puVar12,1);
    if (param_1[0x154] != local_d0) {
      param_1[0x156] = 0;
    }
    param_1[0x154] = local_d0;
  }
  lVar6 = DAT_14cb818f8;
  if ((param_1[0x140] == 0) || ((*(uint *)(param_1[0x140] + 8) >> 0x1e & 1) != 0)) {
    if (DAT_14cb818f8 == 0) {
      FUN_14058b40c(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                   );
    }
    local_c8 = (undefined8 *)FUN_1409059be();
    local_78 = (longlong *)0x0;
    local_48 = 0;
    local_a8 = 0;
    local_90 = 0;
    lStack_88 = 0;
    local_b8 = lVar6;
    uStack_b0 = 0x41;
    local_a0 = 0;
    uStack_98 = 0;
    local_c0 = param_1;
    lVar6 = FUN_1402710dd(&local_c8);
    if (lStack_88 != 0) {
      plVar8 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar8 = local_68;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar6);
    }
    param_1[0x140] = lVar6;
    *(byte *)(lVar6 + 0x2d6) = *(byte *)(lVar6 + 0x2d6) & 0xfd;
    plVar8 = (longlong *)param_1[0x140];
    if ((*(byte *)((longlong)plVar8 + 0x2d3) & 8) == 0) {
      *(byte *)((longlong)plVar8 + 0x2d3) = *(byte *)((longlong)plVar8 + 0x2d3) | 8;
      (**(code **)(*plVar8 + 0x958))();
      plVar8 = (longlong *)param_1[0x140];
    }
    *(byte *)((longlong)plVar8 + 0x1f9) = *(byte *)((longlong)plVar8 + 0x1f9) | 8;
    *(undefined1 *)(param_1[0x140] + 0x1fb) = 2;
    *(byte *)(param_1[0x140] + 0x4a) = *(byte *)(param_1[0x140] + 0x4a) & 0xfd;
    FUN_140486fc4(param_1[0x140],param_1[0x39],0);
    (**(code **)(*(longlong *)param_1[0x140] + 0x728))((longlong *)param_1[0x140],DAT_14cb818e0,1);
    FUN_140f41b96(param_1[0x140],0);
    FUN_140b506a4(param_1[0x140]);
  }
  if (((((param_1[0x141] == 0) || ((*(uint *)(param_1[0x141] + 8) >> 0x1e & 1) != 0)) &&
       (lVar6 = FUN_140f41b0a(param_1[0x166] + 0x40), lVar6 != 0)) && (*(int *)(lVar6 + 0x58) != 0))
     && (((*(int *)(lVar6 + 0x58) != 1 ||
          (**(longlong **)(lVar6 + 0x50) != *(longlong *)(lVar6 + 0x20))) ||
         ((int)(*(longlong **)(lVar6 + 0x50))[1] != *(int *)(lVar6 + 0x28))))) {
    lVar6 = FUN_1488bcc41(param_1,DAT_14cb81900);
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar6);
    }
    param_1[0x141] = lVar6;
    FUN_14057a3b2(lVar6,0,0,1);
    FUN_140486fc4(param_1[0x141],param_1[0x39],0);
    *(undefined1 *)(param_1[0x141] + 0x1fb) = 2;
    FUN_140b506a4(param_1[0x141]);
  }
  FUN_140f41ee4(param_1);
  if ((bVar11 & 1) != 0) {
    if (0.0 <= param_7) {
      *(float *)((longlong)param_1 + 0x98c) = param_7;
    }
    plVar8 = param_1 + 0x74;
    FUN_140e40132(plVar8,param_1[0x140]);
    FUN_140f41cc4(plVar8,param_1[0x140]);
    if (param_1[0x141] != 0) {
      FUN_140f41cc4(plVar8);
    }
    FUN_140f41c18(plVar8,param_1[0x142]);
    local_c8 = (undefined8 *)0x0;
    local_c0 = (longlong *)((ulonglong)local_c0 & 0xffffffff00000000);
    FUN_1446efa72(&local_c8,0,3,0x10);
    puVar5 = local_c8;
    local_c0 = (longlong *)CONCAT44(local_c0._4_4_,3);
    *local_c8 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_c8[2] = lVar9;
    *local_c8 = &PTR_FUN_14b40ff80;
    local_c8[3] = 0;
    iVar13 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_c8 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar13 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar13 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar13;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar13 = *(int *)(lVar6 + 0x10);
        bVar14 = iVar13 == 0;
        if (bVar14) {
          *(int *)(lVar6 + 0x10) = iVar10;
          iVar13 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar13 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar5 + 0x1c) = iVar13;
    puVar5[4] = FUN_140faa9cc;
    *(undefined4 *)(puVar5 + 5) = 0;
    FUN_1448b6402(plVar8,&local_d8,&local_c8);
    if ((int)local_c0 != 0) {
      if (local_c8 == (undefined8 *)0x0) goto LAB_140f415d6;
      (**(code **)*local_c8)(local_c8,0);
      FUN_1446efa72(&local_c8,0,0,0x10);
      local_c0 = (longlong *)((ulonglong)local_c0 & 0xffffffff00000000);
    }
    if (local_c8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140f415d6:
  uVar7 = FUN_14050fd64();
  local_f8 = 0;
  FUN_14088df30(uVar7,&local_c8,param_1[0x166],0);
  plVar8 = local_c0;
  if ((undefined8 **)(param_1 + 0x16b) != &local_c8) {
    param_1[0x16b] = (longlong)local_c8;
    local_c8 = (undefined8 *)0x0;
    plVar3 = (longlong *)param_1[0x16c];
    if (local_c0 != plVar3) {
      local_c0 = (longlong *)0x0;
      param_1[0x16c] = (longlong)plVar8;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar3 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
    }
  }
  plVar8 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_c0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  local_c8 = (undefined8 *)0x0;
  local_c0 = (longlong *)((ulonglong)local_c0 & 0xffffffff00000000);
  FUN_1446efa72(&local_c8,0,3,0x10);
  puVar5 = local_c8;
  local_c0._0_4_ = 3;
  *local_c8 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_c8[2] = lVar9;
  *local_c8 = &PTR_FUN_14b40ff80;
  local_c8[3] = 0;
  iVar13 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_c8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar13 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar13 = *(int *)(lVar6 + 0x10);
      bVar14 = iVar13 == 0;
      if (bVar14) {
        *(int *)(lVar6 + 0x10) = iVar10;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar13 = iVar10;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x1c) = iVar13;
  puVar5[4] = FUN_140faa18a;
  *(undefined4 *)(puVar5 + 5) = 0;
  lVar6 = param_1[0x16b];
  local_e8 = 0;
  local_e0 = 0;
  FUN_14009d848(&local_e8,&local_c8);
  FUN_140844560(lVar6,&local_d8,&local_e8);
  param_1[0x16a] = local_d8;
  if ((int)local_c0 != 0) {
    if (local_c8 == (undefined8 *)0x0) goto LAB_140f41771;
    (**(code **)*local_c8)(local_c8,0);
    FUN_1446efa72(&local_c8,0,0,0x10);
    local_c0._0_4_ = 0;
  }
  if (local_c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140f41771:
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f41b0a FUN_140f41b0a body=138 status=ok
// SIG undefined FUN_140f41b0a(void)

longlong FUN_140f41b0a(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb818c8 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144815d88(DAT_14cb818c8,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f41b96 FUN_140f41b96 body=129 status=ok
// SIG undefined FUN_140f41b96(void)

void FUN_140f41b96(longlong param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  
  if (((*(byte *)(param_1 + 0x2d4) & 0x40) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x2d4) = *(byte *)(param_1 + 0x2d4) & 0xbf | param_2 << 6;
    if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
      bVar2 = *(byte *)(param_1 + 0x9d);
      if ((bVar2 & 1) == 0) {
LAB_140f41bf3:
        *(byte *)(param_1 + 0x9d) = bVar2 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
        return;
      }
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar1 = FUN_1448abda6(param_1);
        if (lVar1 == 0) {
          bVar2 = *(byte *)(param_1 + 0x9d);
          goto LAB_140f41bf3;
        }
      }
    }
  }
  return;
}



// FUNCTION 140f41c18 FUN_140f41c18 body=171 status=ok
// SIG undefined FUN_140f41c18(void)

void FUN_140f41c18(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0xe8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xec) < iVar1 + 1U) {
    FUN_140f41d82((longlong *)(param_1 + 0xe0),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  if (((*(byte *)(param_1 + 0x5e8) & 2) != 0) && (*(char *)(param_1 + 0xf1) == '\0')) {
    FUN_14104f46a(param_1,0,0x3f800000);
    return;
  }
  return;
}



// FUNCTION 140f41cc4 FUN_140f41cc4 body=190 status=ok
// SIG undefined FUN_140f41cc4(void)

void FUN_140f41cc4(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0xd8);
  *(uint *)(param_1 + 0xd8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xdc) < iVar1 + 1U) {
    FUN_140e402be((longlong *)(param_1 + 0xd0),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  if ((*(byte *)(param_1 + 0x5e8) & 2) != 0) {
    FUN_141891bec(*(undefined8 *)(param_1 + 0x598),param_2);
    if (*(char *)(param_1 + 0xf1) == '\x02') {
      FUN_14104f46a(param_1,0,0x3f800000);
      return;
    }
  }
  return;
}



// FUNCTION 140f41d82 FUN_140f41d82 body=353 status=ok
// SIG undefined FUN_140f41d82(void)

void FUN_140f41d82(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f41e07;
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
LAB_140f41e07:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140f41ee4 FUN_140f41ee4 body=752 status=ok
// SIG undefined FUN_140f41ee4(void)

void FUN_140f41ee4(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined *puVar6;
  uint *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined7 uVar10;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  uVar1 = DAT_14cb818f0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0xb29) == '\0') {
    uVar3 = FUN_1405fc15c();
    local_68 = 0;
    FUN_140af9fb2(&local_28,param_1,uVar3,uVar1);
    plVar4 = (longlong *)FUN_140f421d5(param_1,local_28,0x41);
    uVar2 = rand();
    *(float *)(param_1 + 0xa5c) = ((float)(uVar2 & 0x7fff) / 32767.0) * 512.0 + -256.0;
    *(undefined1 *)((longlong)plVar4 + 0x1fb) = 2;
    *(byte *)((longlong)plVar4 + 0x1f9) = *(byte *)((longlong)plVar4 + 0x1f9) | 8;
    FUN_14045627c(plVar4,1,1);
    local_38 = 0;
    uStack_30 = 0;
    uVar9 = plVar4[7];
    if (uVar9 < 0xffffffff00000000) {
      plVar8 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar8 = (longlong *)0x0;
      }
      (**(code **)(*plVar8 + 0x58))(0,plVar4,uVar9,6);
    }
    else {
      uVar2 = (uint)uVar9;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c998088)) {
        puVar6 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar6 = DAT_14c998080;
        }
        if ((*(uint *)(puVar6 + ((uint)(uVar9 >> 3) & 0xffffffc)) >> (uVar2 & 0x1f) & 1) != 0) {
          lVar5 = DAT_14c998060 + (ulonglong)(uVar2 & 0x7fffffff) * 0x68;
          puVar7 = *(uint **)(lVar5 + 0x18);
          if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
            puVar7 = (uint *)(lVar5 + 8);
          }
          *puVar7 = *puVar7 | 0x40;
          *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
        }
      }
    }
    plVar4[0x36] = -0x3fa9800000000000;
    *(undefined4 *)(plVar4 + 0x37) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar4 + 0x1bc) = local_38._4_4_;
    *(undefined4 *)(plVar4 + 0x38) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)plVar4 + 0x1c4) = uStack_30._4_4_;
    *(undefined4 *)(plVar4 + 0x56) = 1;
  }
  else {
    uVar3 = FUN_144a7a726();
    local_68 = 0;
    FUN_140af9fb2(&local_28,param_1,uVar3,uVar1);
    local_60 = 0;
    local_68 = local_68 & 0xffffff00;
    plVar4 = (longlong *)FUN_141797230(param_1,local_28,0x41,0);
    uVar9 = CONCAT71((int7)((ulonglong)local_28 >> 8),*(undefined1 *)((longlong)plVar4 + 0x2d2)) &
            0xfffffffffffffff7;
    uVar10 = (undefined7)(uVar9 >> 8);
    *(byte *)((longlong)plVar4 + 0x2d2) = (byte)uVar9 | *(byte *)(param_1 + 0xb2a) & 8;
    *(byte *)((longlong)plVar4 + 0x2d6) = *(byte *)((longlong)plVar4 + 0x2d6) & 0xfd;
    if ((*(byte *)((longlong)plVar4 + 0x2d3) & 8) != 0) {
      *(byte *)((longlong)plVar4 + 0x2d3) = *(byte *)((longlong)plVar4 + 0x2d3) & 0xf7;
      (**(code **)(*plVar4 + 0x958))(plVar4);
    }
    *(byte *)((longlong)plVar4 + 0x1f9) = *(byte *)((longlong)plVar4 + 0x1f9) | 8;
    FUN_14045627c(plVar4,CONCAT71(uVar10,1),1);
    *(byte *)((longlong)plVar4 + 0x2d4) = *(byte *)((longlong)plVar4 + 0x2d4) & 0xbf;
    *(byte *)((longlong)plVar4 + 0x2d5) = *(byte *)((longlong)plVar4 + 0x2d5) & 0xfe;
    *(undefined1 *)((longlong)plVar4 + 0x1fb) = 2;
    *(byte *)((longlong)plVar4 + 0x4a) = *(byte *)((longlong)plVar4 + 0x4a) & 0xfd;
    (**(code **)(*plVar4 + 0x728))(plVar4,DAT_14cb818e8,1);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0x3fb99999a0000000;
    FUN_144a48320(plVar4);
  }
  FUN_14057a3b2(plVar4,0,0,1);
  FUN_140486fc4(plVar4,*(undefined8 *)(param_1 + 0x1c8),0);
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar4);
  }
  *(longlong **)(param_1 + 0xa10) = plVar4;
  FUN_140b506a4(plVar4);
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f421d5 FUN_140f421d5 body=217 status=ok
// SIG undefined FUN_140f421d5(void)

undefined8 FUN_140f421d5(undefined8 param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong lStack_88;
  longlong *local_78;
  longlong local_68 [4];
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_c8 = FUN_1405fc15c();
  local_78 = (longlong *)0x0;
  local_48 = 0;
  local_a8 = 0;
  local_90 = 0;
  lStack_88 = 0;
  uStack_b0 = (ulonglong)param_3;
  local_a0 = 0;
  uStack_98 = 0;
  local_c0 = param_1;
  local_b8 = param_2;
  uVar1 = FUN_1402710dd(&local_c8);
  if (lStack_88 != 0) {
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



// FUNCTION 140f422b0 FUN_140f422b0 body=426 status=ok
// SIG undefined FUN_140f422b0(void)

longlong * FUN_140f422b0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1457c98a0(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x55555 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_140f42475(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x30;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1457c98a0(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_146896bce(param_2,iVar2);
        }
        lVar4 = (longlong)iVar2 * 0x30 + *param_2;
        FUN_140f4245b(lVar4);
        FUN_140f42475(param_1,lVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140f4245b FUN_140f4245b body=26 status=ok
// SIG undefined FUN_140f4245b(void)

void FUN_140f4245b(undefined8 *param_1)

{
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 140f42475 FUN_140f42475 body=591 status=ok
// SIG undefined FUN_140f42475(void)

longlong * FUN_140f42475(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint *puVar3;
  undefined1 *puVar4;
  ulonglong *puVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x138))();
  FUN_1402ac1b3(param_1,param_2 + 8);
  (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0x18);
  puVar4 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x20),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x20) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  iVar9 = FUN_1448332aa(param_1,&DAT_149e6b600);
  if (0 < iVar9) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      iVar9 = FUN_1448332aa(param_1,&DAT_149e6b600);
      if (iVar9 < 2) {
        local_38 = local_38 & 0xffffffffffffff00;
        puVar5 = (ulonglong *)param_1[1];
        pcVar1 = (char *)*puVar5 + 1;
        if ((char *)puVar5[1] < pcVar1) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_38,1);
          cVar8 = (char)local_38;
        }
        else {
          cVar8 = *(char *)*puVar5;
          *puVar5 = (ulonglong)pcVar1;
        }
        if ((cVar8 != '\0') && ((ulonglong)*(byte *)(param_2 + 0x23) < 2)) {
          *(char *)(param_2 + 0x21 + (ulonglong)*(byte *)(param_2 + 0x23)) = cVar8;
          *(char *)(param_2 + 0x23) = *(char *)(param_2 + 0x23) + '\x01';
        }
        goto LAB_140f425f1;
      }
    }
    pbVar2 = (byte *)(param_2 + 0x23);
    pbVar6 = *(byte **)param_1[1];
    if ((byte *)((undefined8 *)param_1[1])[1] < pbVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,pbVar2,1);
    }
    else {
      *pbVar2 = *pbVar6;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    if (*pbVar2 != 0) {
      uVar11 = 0;
      do {
        puVar4 = (undefined1 *)(param_2 + 0x21 + uVar11);
        puVar7 = *(undefined1 **)param_1[1];
        if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar7 + 1) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar4,1);
        }
        else {
          *puVar4 = *puVar7;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *pbVar2);
    }
  }
LAB_140f425f1:
  puVar5 = (ulonglong *)param_1[1];
  puVar3 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar3) {
    local_38 = local_38 & 0xffffffff00000000;
    (**(code **)(*param_1 + 0x170))(param_1,&local_38,4);
    uVar10 = (uint)local_38;
    if (1 < (uint)local_38) {
      FUN_14572541c(param_1);
      uVar10 = (uint)local_38;
    }
  }
  else {
    uVar10 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar3;
  }
  if (uVar10 != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_146896c62(param_1);
    iVar9 = FUN_1448332aa(param_1,&DAT_149e6b600);
    if (2 < iVar9) {
      local_40 = 0;
      (**(code **)(*param_1 + 0x138))(param_1);
    }
    FUN_146896e93(local_38,uStack_30 & 0xffffffff);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f426f6 FUN_140f426f6 body=576 status=ok
// SIG undefined FUN_140f426f6(void)

void FUN_140f426f6(ulonglong param_1,longlong *param_2)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_118 [40];
  code *local_f0;
  ulonglong *local_e8;
  ulonglong local_e0;
  undefined4 local_d8;
  longlong *local_d0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(longlong *)(param_1 + 0x200) != 0) && ((longlong)(int)param_2[1] != 0)) {
    lVar6 = (longlong)(int)param_2[1] * 0x60;
    lVar5 = *param_2 + 0x58;
    do {
      local_e0 = local_e0 & 0xffffffffffffff00;
      local_b8[0] = 0;
      FUN_140217b36(&local_e0,param_1 + 0x1e8);
      FUN_1448729ea(lVar5 + -0x50,&local_b0,&local_e0);
      if (local_90 == 3) {
        uVar7 = local_b0;
        bVar3 = 3;
      }
      else {
        FUN_1400b56fe(&local_88,&local_b0,3);
        uVar7 = 0;
        if (local_68 != 0) {
          uVar7 = local_88;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar2 != (code *)0x0) {
          puVar4 = &local_88;
          if (0x18 < local_70) {
            puVar4 = (undefined4 *)CONCAT44(uStack_84,local_88);
          }
          (*pcVar2)(puVar4);
        }
        bVar3 = local_90;
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(uStack_84,local_88));
          bVar3 = local_90;
        }
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
      if (pcVar2 != (code *)0x0) {
        puVar4 = &local_b0;
        if (0x18 < local_98) {
          puVar4 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
        }
        (*pcVar2)(puVar4);
      }
      if (0x18 < local_98) {
        FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
      }
      FUN_1448173f8(local_b8);
      if (((char)local_e0 == '\x03') && (local_d0 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d0 + 0x10))();
        }
      }
      local_f0 = FUN_143dafc18;
      local_e8 = &local_e0;
      local_e0 = param_1;
      local_d8 = uVar7;
      FUN_140ae6d9e(*(undefined8 *)(param_1 + 0x200),lVar5,&local_f0);
      lVar5 = lVar5 + 0x60;
      lVar6 = lVar6 + -0x60;
    } while (lVar6 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f42938 FUN_140f42938 body=473 status=ok
// SIG undefined FUN_140f42938(void)

void FUN_140f42938(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar6 = FUN_140526f64();
  if (cVar6 != '\0') {
    lVar1 = param_1 + 0xc0;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = lVar1;
    if (*(int *)(param_1 + 0xd8) == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar11 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar16 = local_68 >> 0x20;
      iVar11 = *(int *)(param_1 + 0xd8);
    }
    lVar5 = local_60;
    iVar9 = (int)local_68;
    uVar7 = (uint)local_58;
    iVar8 = local_58._4_4_;
    iVar10 = local_50;
    if (local_58._4_4_ != iVar11 || local_60 != lVar1) {
      do {
        FUN_140f42b12(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x10 + (longlong)iVar8 * 0x20)
                     );
        uVar7 = ~(uint)uVar16 & uVar7;
        lVar15 = *(longlong *)(lVar5 + 0x10);
        if (*(longlong *)(lVar5 + 0x10) == 0) {
          lVar15 = lVar5;
        }
        iVar3 = *(int *)(lVar5 + 0x18);
        lVar13 = (longlong)iVar9;
        uVar12 = *(uint *)(lVar15 + lVar13 * 4) & uVar7;
        if (uVar12 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar4 = iVar8;
          if (iVar8 < iVar9) {
            iVar4 = iVar9;
          }
          if (iVar9 < iVar8) {
            lVar14 = 0;
            do {
              uVar12 = *(uint *)(lVar15 + lVar13 * 4 + 4 + lVar14 * 4);
              if (uVar12 != 0) {
                iVar9 = iVar9 + (int)lVar14 + 1;
                uVar7 = 0xffffffff;
                goto LAB_140f42a67;
              }
              iVar10 = iVar10 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar4 - lVar13 != lVar14);
            uVar7 = 0xffffffff;
            iVar9 = iVar4;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar3;
        }
        else {
LAB_140f42a67:
          uVar16 = (ulonglong)(-uVar12 & uVar12);
          uVar2 = uVar16 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar8 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar11 || lVar5 != lVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f42b12 FUN_140f42b12 body=218 status=ok
// SIG undefined FUN_140f42b12(void)

void FUN_140f42b12(longlong param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_140e1935a();
  iVar3 = 0;
  if (lVar4 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_140e192e0(lVar4);
  }
  lVar4 = FUN_140e1935a(param_1);
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x58), lVar4 != 0)) {
    iVar3 = FUN_140e195fa(lVar4 + 0x38);
    if (iVar3 < 0) {
      lVar4 = FUN_140e1935a(param_1);
      iVar3 = 0;
      if (lVar4 != 0) {
        iVar3 = 0;
        FUN_148842fb0(lVar4,0);
      }
    }
  }
  if (cVar2 == '\x01') {
    FUN_140f13b56(param_1 + 0x78,param_1 + 0x80);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    do {
      FUN_140f42bec(*(undefined8 *)(lVar4 + lVar5),cVar2 == '\x02',iVar3,param_1 + 0x80);
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 140f42bec FUN_140f42bec body=839 status=ok
// SIG undefined FUN_140f42bec(void)

void FUN_140f42bec(longlong param_1,char param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 < *(int *)(*(longlong *)(param_1 + 0xa0) + 0x60c)) {
    lVar6 = FUN_140f42f34(param_1);
    if ((lVar6 == 0) || (cVar2 = FUN_1405f61f4(lVar6), cVar2 == '\0')) goto LAB_140f42c69;
    uVar9 = 0;
  }
  else {
    if ((param_2 == '\0') &&
       (iVar5 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x610), param_3 <= iVar5 || iVar5 < 0)) {
      lVar6 = FUN_140f42f34(param_1);
      if (((lVar6 == 0) || (cVar2 = FUN_1405f61f4(lVar6), cVar2 == '\0')) &&
         ((longlong)(int)param_4[1] != 0)) {
        lVar6 = 0;
        do {
          if (*(longlong *)(*param_4 + lVar6) == param_1) {
            uVar9 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
            goto LAB_140f42e49;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)param_4[1] * 8 != lVar6);
      }
      goto LAB_140f42c69;
    }
    lVar6 = FUN_140f42f34(param_1);
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),6);
    if ((lVar6 != 0) && (cVar2 = FUN_1405f61f4(lVar6), cVar2 == '\x06')) goto LAB_140f42c69;
  }
LAB_140f42e49:
  FUN_140f13ae4(param_1,uVar9 & 0xffffffff,1);
LAB_140f42c69:
  lVar6 = FUN_140f42f34(param_1);
  if ((lVar6 == 0) || (cVar2 = FUN_1405f61f4(lVar6), 2 < (byte)(cVar2 - 5U))) {
    lVar6 = FUN_140f42f34(param_1);
    if ((lVar6 != 0) && (bVar3 = FUN_1405f61f4(lVar6), 2 < bVar3)) {
      FUN_140f4316e(param_1);
    }
    lVar6 = FUN_140f42f34(param_1);
    if (lVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_140f430f8(lVar6);
      if ((int)uVar4 < 0) {
        uVar4 = 0;
        FUN_14890e164(param_1,0);
      }
    }
    lVar6 = FUN_140f42f34(param_1);
    if ((lVar6 != 0) && (cVar2 = FUN_1405f61f4(lVar6), cVar2 == '\x04')) {
      FUN_140d8369e(param_1 + 0x1b8,param_1 + 0x1c0);
    }
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    FUN_140f54b44(param_1);
    if ((longlong)(int)uStack_40 != 0) {
      plVar1 = local_48 + (int)uStack_40;
      plVar8 = local_48;
      do {
        lVar6 = *plVar8;
        lVar7 = FUN_140dcc81c(lVar6);
        if (lVar7 == 0) {
          if (*(int *)(*(longlong *)(lVar6 + 0x40) + 0x3c) <= (int)uVar4) {
            if (*(uint *)(*(longlong *)(lVar6 + 0x40) + 0x40) < uVar4) goto LAB_140f42eae;
LAB_140f42d9c:
            if ((longlong)*(int *)(param_1 + 0x1c8) != 0) {
              lVar7 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + lVar7) == lVar6)
                goto LAB_140f42f23;
                lVar7 = lVar7 + 8;
              } while ((longlong)*(int *)(param_1 + 0x1c8) * 8 != lVar7);
            }
          }
        }
        else {
          cVar2 = FUN_141042fba(lVar7);
          if ((int)uVar4 < *(int *)(*(longlong *)(lVar6 + 0x40) + 0x3c)) {
            if (cVar2 != '\0') {
LAB_140f42f23:
              FUN_140dcc746(lVar6);
            }
          }
          else if (*(uint *)(*(longlong *)(lVar6 + 0x40) + 0x40) < uVar4) {
LAB_140f42eae:
            lVar7 = FUN_140dcc81c(lVar6);
            if ((lVar7 == 0) || (bVar3 = FUN_141042fba(lVar7), bVar3 < 6)) goto LAB_140f42f23;
          }
          else if (cVar2 == '\0') goto LAB_140f42d9c;
        }
        lVar7 = FUN_140dcc81c(lVar6);
        if ((((lVar7 != 0) && (iVar5 = FUN_140f43134(lVar7), 0 < iVar5)) &&
            ((lVar7 = FUN_140dcc81c(lVar6), lVar7 == 0 || (bVar3 = FUN_141042fba(lVar7), bVar3 < 4))
            )) && (lVar6 = FUN_140dcc81c(lVar6), lVar6 != 0)) {
          FUN_1488433d2(lVar6);
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
    }
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f42f34 FUN_140f42f34 body=451 status=ok
// SIG undefined FUN_140f42f34(void)

longlong FUN_140f42f34(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [44];
  undefined1 local_5c [12];
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((char *)param_1[0x15] != (char *)0x0) && (*(char *)param_1[0x15] != '\0'))
  goto LAB_140f430bc;
  if ((*(char *)((longlong)param_1 + 0x1ea) == '\0') &&
     ((*(char *)((longlong)param_1 + 0x1eb) == '\0' && (*(char *)(param_1[1] + 0x1c7) != '\x01'))))
  {
    plVar3 = (longlong *)FUN_140d7e454();
    if (plVar3 == (longlong *)0x0) goto LAB_140f4307d;
    lVar4 = (**(code **)(*param_1 + 0x70))(param_1);
    if (lVar4 == 0) {
      local_50 = 0;
      local_48 = 0;
    }
    else {
      local_48 = *(undefined4 *)(lVar4 + 0x98);
      local_50 = *(undefined8 *)(lVar4 + 0x90);
    }
    FUN_143df58dc(param_1,local_5c);
    (**(code **)(*plVar3 + 0x70))(plVar3,&local_40,local_5c,&local_50);
    plVar3 = local_38;
    if (param_1 + 0x15 != &local_40) {
      param_1[0x15] = local_40;
      local_40 = 0;
      plVar2 = (longlong *)param_1[0x16];
      if (local_38 != plVar2) {
        local_38 = (longlong *)0x0;
        param_1[0x16] = (longlong)plVar3;
        if (plVar2 != (longlong *)0x0) {
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
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
      }
    }
    plVar3 = local_38;
    if (local_38 == (longlong *)0x0) goto LAB_140f430bc;
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_140f430bc;
    (**(code **)*local_38)(local_38);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_140f430bc;
    lVar4 = *plVar3;
  }
  else {
LAB_140f4307d:
    param_1[0x15] = 0;
    plVar3 = (longlong *)param_1[0x16];
    if (plVar3 == (longlong *)0x0) goto LAB_140f430bc;
    param_1[0x16] = 0;
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_140f430bc;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_140f430bc;
    lVar4 = *plVar3;
  }
  (**(code **)(lVar4 + 0x10))(plVar3);
LAB_140f430bc:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1[0x15];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f430f8 FUN_140f430f8 body=59 status=ok
// SIG undefined FUN_140f430f8(void)

uint FUN_140f430f8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x60);
  uVar3 = 0;
  if (lVar2 != 0) {
    cVar1 = *(char *)(lVar2 + 0x38);
    if (cVar1 == '\x03') {
      bVar4 = *(longlong *)(lVar2 + 0x3c) == 0;
LAB_140f43118:
      return (uint)!bVar4;
    }
    if (cVar1 == '\x02') {
      uVar3 = *(uint *)(lVar2 + 0x44);
    }
    else if (cVar1 == '\x01') {
      bVar4 = *(int *)(lVar2 + 0x44) == 0;
      goto LAB_140f43118;
    }
  }
  return uVar3;
}



// FUNCTION 140f43134 FUN_140f43134 body=57 status=ok
// SIG undefined FUN_140f43134(void)

uint FUN_140f43134(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x60);
  uVar3 = 0;
  if (lVar2 != 0) {
    cVar1 = *(char *)(lVar2 + 0x38);
    if (cVar1 == '\x03') {
      bVar4 = *(longlong *)(lVar2 + 0x3c) == 0;
LAB_140f43153:
      return (uint)!bVar4;
    }
    if (cVar1 == '\x02') {
      uVar3 = *(uint *)(lVar2 + 0x44);
    }
    else if (cVar1 == '\x01') {
      bVar4 = *(int *)(lVar2 + 0x44) == 0;
      goto LAB_140f43153;
    }
  }
  return uVar3;
}


