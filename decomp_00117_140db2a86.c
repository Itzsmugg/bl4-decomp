// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140db2a86 FUN_140db2a86 body=245 status=ok
// SIG undefined FUN_140db2a86(void)

void FUN_140db2a86(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar2 = FUN_140db2c5a();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30)) {
      lVar2 = FUN_140db2b7c();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
        *(longlong *)(param_2 + 0x30) = param_1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        *(longlong *)(param_1 + 0x138) = param_2;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0xd8);
      *(uint *)(param_1 + 0xd8) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xdc) < iVar1 + 1U) {
        FUN_140f56d18(param_1 + 0xd0,iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar1 * 8) = param_2;
      FUN_140db2d38(param_2 + 0xf0,local_28,param_1,&LAB_140d112a8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db2b7c FUN_140db2b7c body=221 status=ok
// SIG undefined FUN_140db2b7c(void)

longlong FUN_140db2b7c(void)

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
  if (DAT_14cb622e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486e0b3b;
    local_40 = FUN_143c60a3b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxProgressionDataManager",&DAT_14cb622e0,FUN_1464f7028);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb622e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db2c5a FUN_140db2c5a body=221 status=ok
// SIG undefined FUN_140db2c5a(void)

longlong FUN_140db2c5a(void)

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
  if (DAT_14cb62170 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486e0a08;
    local_40 = FUN_143c608aa;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1b0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxProgressGraph",&DAT_14cb62170,FUN_1464f68d2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb62170;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db2d38 FUN_140db2d38 body=604 status=ok
// SIG undefined FUN_140db2d38(void)

undefined8 * FUN_140db2d38(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_14b4212d0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_50[2] = lVar7;
  *local_50 = (longlong)&PTR_FUN_14b421260;
  local_50[3] = param_3;
  local_50[4] = param_4;
  *param_2 = 0;
  if ((local_50 == (longlong *)0x0) || (cVar4 = (**(code **)(*local_50 + 0x30))(), cVar4 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_140db2e99;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140db2e83;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      uVar6 = local_40;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar2 = *param_1;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar7) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar7) = 0;
    *(longlong **)(lVar2 + lVar7) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar7) = local_48;
LAB_140db2e83:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140db2e99:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db2fa6 FUN_140db2fa6 body=992 status=ok
// SIG undefined FUN_140db2fa6(void)

void FUN_140db2fa6(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58;
  longlong *local_50;
  int local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1408c7d08();
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1);
  if (plVar5 == (longlong *)0x0) goto LAB_140db31a5;
  local_50 = (longlong *)FUN_140db3394();
  if ((local_50 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_50);
  }
  lVar6 = (**(code **)(*plVar5 + 0x598))(plVar5,&local_50);
  if (lVar6 == 0) {
    local_58 = FUN_140db3394();
    if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_58);
    }
    local_68 = 0;
    lVar6 = FUN_140fae5dc(plVar5,&local_58,0,&DAT_14c846480);
    if (lVar6 == 0) goto LAB_140db31a5;
    lVar10 = FUN_140db3394();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
        != lVar10 + 0x30)) goto LAB_140db31a5;
  }
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  plVar5 = local_50;
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_14b42e2d0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_50[2] = lVar7;
  *local_50 = (longlong)&PTR_FUN_14b42e260;
  local_50[3] = 0;
  iVar8 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar8 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar8 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar8 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar4;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar8 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar5 + 0x1c) = iVar8;
  plVar5[4] = (longlong)param_1;
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_50 + 0x30))(), cVar3 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_140db31a5;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140db318f;
    }
  }
  else {
    plVar5 = (longlong *)(lVar6 + 0x950);
    if (*(int *)(lVar6 + 0x964) < 1) {
      iVar8 = *(int *)(lVar6 + 0x958);
      iVar4 = *(int *)(lVar6 + 0x960) + -1;
      *(int *)(lVar6 + 0x960) = iVar4;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
        if (0 < iVar8) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar5 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar5 + (longlong)iVar9 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar5,iVar9);
              FUN_14005b248(plVar5);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar4 = *(int *)(lVar6 + 0x958);
          } while (iVar9 < iVar4);
        }
        iVar9 = 2;
        if (2 < iVar4 * 2) {
          iVar9 = iVar4 * 2;
        }
        *(int *)(lVar6 + 0x960) = iVar9;
        if ((iVar9 < iVar8) && (*(int *)(lVar6 + 0x95c) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,local_40);
    }
    iVar8 = *(int *)(lVar6 + 0x958);
    *(uint *)(lVar6 + 0x958) = iVar8 + 1U;
    if (*(uint *)(lVar6 + 0x95c) < iVar8 + 1U) {
      FUN_1447a71f6(plVar5,iVar8);
    }
    lVar6 = *plVar5;
    lVar10 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar6 + lVar10) = 0;
    *(undefined4 *)(lVar6 + 8 + lVar10) = 0;
    *(longlong **)(lVar6 + lVar10) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar6 + 8 + lVar10) = local_48;
LAB_140db318f:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140db31a5:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140db3394 FUN_140db3394 body=228 status=ok
// SIG undefined FUN_140db3394(void)

longlong FUN_140db3394(void)

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
  if (DAT_14cb56d38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464ba3a0;
    local_38 = &LAB_14863c557;
    local_40 = &LAB_140c20053;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xa00;
    FUN_14081cfa3(L"/Script/GbxGame",L"DeliverySpawnPointComponent",&DAT_14cb56d38,FUN_1464ba378);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb56d38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db347a FUN_140db347a body=103 status=ok
// SIG undefined FUN_140db347a(void)

ulonglong FUN_140db347a(longlong param_1)

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
LAB_140db34c4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140db34c4;
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



// FUNCTION 140db34e8 FUN_140db34e8 body=12 status=ok
// SIG undefined FUN_140db34e8(void)

void FUN_140db34e8(undefined8 param_1,undefined8 param_2)

{
  FUN_140db34f4(param_1,0x22,param_2);
  return;
}



// FUNCTION 140db34f4 FUN_140db34f4 body=309 status=ok
// SIG undefined FUN_140db34f4(void)

void FUN_140db34f4(longlong *param_1,short param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  uVar3 = 0;
  uVar4 = (int)param_1[1] - 1;
  if ((int)param_1[1] == 0) {
    uVar4 = uVar3;
  }
  uVar6 = uVar4;
  if ((int)uVar4 < 1) {
    bVar7 = false;
  }
  else {
    bVar7 = *(short *)*param_1 == param_2;
    if (bVar7) {
      uVar6 = uVar4 - 1;
    }
    if (uVar4 == 1) {
      uVar3 = (uint)bVar7;
    }
    else {
      bVar8 = ((short *)*param_1)[uVar4 - 1] == param_2;
      uVar3 = 1;
      if (!bVar8) {
        uVar3 = (uint)bVar7;
      }
      uVar6 = uVar6 - bVar8;
    }
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = (char)uVar3;
  }
  if (uVar6 == 0x7fffffff) {
    iVar2 = (int)param_1[1];
  }
  else {
    iVar2 = (int)param_1[1];
    if ((longlong)((longlong)(int)uVar6 + (ulonglong)bVar7) < 0x7fffffff) {
      uVar4 = iVar2 - 1;
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      uVar3 = uVar6 + bVar7;
      if ((int)uVar4 <= (int)(uVar6 + bVar7)) {
        uVar3 = uVar4;
      }
      uVar1 = (ulonglong)uVar3;
      if ((int)uVar3 < 1) {
        uVar1 = 0;
      }
      uVar4 = uVar4 - (int)uVar1;
      if (0 < (int)uVar4) {
        iVar5 = iVar2 - (uVar4 + (int)uVar1);
        if (iVar5 != 0) {
          _Dst = (void *)(uVar1 * 2 + *param_1);
          memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar4 * 2),(longlong)iVar5 * 2);
          iVar2 = (int)param_1[1];
        }
        iVar2 = iVar2 - uVar4;
        *(int *)(param_1 + 1) = iVar2;
      }
    }
  }
  uVar4 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  if ((int)(uint)bVar7 < (int)uVar4) {
    uVar4 = (uint)bVar7;
  }
  if (0 < (int)uVar4) {
    if (iVar2 - uVar4 != 0) {
      memmove((void *)*param_1,(void *)(*param_1 + (ulonglong)uVar4 * 2),
              (longlong)(int)(iVar2 - uVar4) * 2);
      iVar2 = (int)param_1[1];
    }
    *(uint *)(param_1 + 1) = iVar2 - uVar4;
  }
  return;
}



// FUNCTION 140db362a FUN_140db362a body=299 status=ok
// SIG undefined FUN_140db362a(void)

void FUN_140db362a(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [40];
  longlong local_90;
  int local_88;
  undefined4 local_84;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = (uint *)*param_2;
  local_90 = *param_1;
  local_88 = (int)param_1[1];
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(local_90 + 0x60) + (longlong)local_88 * 8) + 0x20);
  lVar3 = 0;
  local_60 = lVar2 + (ulonglong)puVar1[5];
  if ((ulonglong)puVar1[5] == 0xffffffff) {
    local_60 = lVar3;
  }
  local_58 = lVar2 + (ulonglong)puVar1[6];
  if ((ulonglong)puVar1[6] == 0xffffffff) {
    local_58 = lVar3;
  }
  local_50 = lVar2 + (ulonglong)puVar1[7];
  if ((ulonglong)puVar1[7] == 0xffffffff) {
    local_50 = lVar3;
  }
  local_48 = lVar2 + (ulonglong)puVar1[8];
  if ((ulonglong)puVar1[8] == 0xffffffff) {
    local_48 = lVar3;
  }
  local_84 = *(undefined4 *)((longlong)param_1 + 0xc);
  local_80 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_80 = lVar3;
  }
  local_78 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_78 = lVar3;
  }
  local_70 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_70 = lVar3;
  }
  local_68 = lVar2 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_68 = lVar3;
  }
  lVar2 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar2 = lVar3;
  }
  FUN_140db3756(&local_90,lVar2);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db3756 FUN_140db3756 body=813 status=ok
// SIG undefined FUN_140db3756(void)

void FUN_140db3756(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  code *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar1 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8) + 0xe);
  lVar11 = *param_3;
  if (lVar11 == 0) {
    lVar11 = param_3[1];
  }
  local_b8 = param_3[2];
  if (local_b8 == 0) {
    local_b8 = param_3[3];
  }
  if (uVar1 != 0) {
    lVar5 = *param_4;
    lVar7 = param_4[1];
    lVar2 = param_4[2];
    lVar3 = param_4[3];
    lVar9 = 0;
    lVar10 = 0;
    local_b0 = lVar7;
    local_a8 = lVar5;
    local_a0 = param_2;
    do {
      if (*(longlong *)(param_2 + lVar10 * 2) != 0) {
        fStack_7c = 1.0;
        if (lVar3 != 0) {
          fStack_7c = (float)*(double *)(lVar3 + lVar10);
        }
        fStack_80 = 1.0;
        if (lVar2 != 0) {
          fStack_80 = (float)*(double *)(lVar2 + lVar10);
        }
        fStack_84 = 1.0;
        if (lVar7 != 0) {
          fStack_84 = (float)*(double *)(lVar7 + lVar10);
        }
        local_88 = 1.0;
        if (lVar5 != 0) {
          local_88 = (float)*(double *)(lVar5 + lVar10);
        }
        lVar4 = FUN_1406f4b62(param_2 + lVar9);
        if (lVar4 != 0) {
          if (DAT_14caec470 == 0) {
            local_78 = FUN_1417df956;
            local_c0 = FUN_14081d0ea;
            local_c8 = &LAB_1463eaa20;
            local_d0 = &local_78;
            local_d8 = &LAB_147bbd9ea;
            local_e0 = FUN_1401cf6d7;
            local_e8 = L"Engine";
            local_f0 = 0;
            local_f8 = 0x10000000;
            local_100 = 8;
            local_108 = 0x330;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e)
            ;
          }
          if ((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) == DAT_14caec470 + 0x30)) {
            if (lVar11 == 0) {
              lVar5 = local_a8;
              lVar7 = local_b0;
              param_2 = local_a0;
              if (local_b8 != 0) {
                local_98 = local_88;
                fStack_94 = fStack_84;
                fStack_90 = fStack_80;
                fStack_8c = fStack_7c;
                FUN_144a9d3f0(lVar4,*(undefined8 *)(local_b8 + lVar10));
                lVar5 = local_a8;
                lVar7 = local_b0;
                param_2 = local_a0;
              }
            }
            else {
              local_78 = (code *)CONCAT44(fStack_84,local_88);
              fStack_70 = fStack_80;
              fStack_6c = fStack_7c;
              FUN_14016d7a8(lVar4,lVar11 + lVar9,&local_78);
              lVar5 = local_a8;
              lVar7 = local_b0;
              param_2 = local_a0;
            }
            goto LAB_140db38f0;
          }
        }
        lVar4 = FUN_1406f4b62(param_2 + lVar9);
        lVar5 = local_a8;
        lVar7 = local_b0;
        param_2 = local_a0;
        if (lVar4 != 0) {
          lVar6 = FUN_140a2e7a0();
          lVar5 = local_a8;
          lVar7 = local_b0;
          param_2 = local_a0;
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            if (lVar11 == 0) {
              if (local_b8 == 0) goto LAB_140db38f0;
              uVar8 = *(undefined8 *)(local_b8 + lVar10);
            }
            else {
              uVar8 = *(undefined8 *)(lVar11 + lVar10 * 2);
            }
            FUN_144938f46(lVar4,uVar8,&local_88);
            lVar5 = local_a8;
            lVar7 = local_b0;
            param_2 = local_a0;
          }
        }
      }
LAB_140db38f0:
      lVar10 = lVar10 + 8;
      lVar9 = lVar9 + 0x10;
    } while ((ulonglong)uVar1 * 8 != lVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140db3a84 FUN_140db3a84 body=83 status=ok
// SIG undefined FUN_140db3a84(void)

undefined8 * FUN_140db3a84(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b422470;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140db3ad8 FUN_140db3ad8 body=9 status=ok
// SIG undefined FUN_140db3ad8(void)

void FUN_140db3ad8(longlong param_1)

{
  FUN_140db3ae2(param_1 + 0x10);
  return;
}



// FUNCTION 140db3ae2 FUN_140db3ae2 body=304 status=ok
// SIG undefined FUN_140db3ae2(void)

void FUN_140db3ae2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b422d20;
  if (*(char *)(param_1 + 0x34) == '\x01') {
    param_1[0x30] = &DAT_14a171d50;
    *(undefined4 *)(param_1 + 0x33) = 0;
    if (*(int *)((longlong)param_1 + 0x19c) != 0) {
      FUN_140115c12(param_1 + 0x32,0);
    }
    param_1[0x31] = 0;
    if (param_1[0x32] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0x24] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xac) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  }
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
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140db3c12 FUN_140db3c12 body=31 status=ok
// SIG undefined FUN_140db3c12(void)

ulonglong FUN_140db3c12(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + -0x3c0) + 0x678))(param_1 + -0x3c0);
  return uVar1 ^ 1;
}



// FUNCTION 140db3c32 FUN_140db3c32 body=157 status=ok
// SIG undefined FUN_140db3c32(void)

undefined8 FUN_140db3c32(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = *(longlong *)(param_1 + 0x2650);
  if (lVar5 == 0) {
    local_20 = *(undefined8 *)(param_1 + 0x2640);
    lVar5 = FUN_14050aea0();
    *(longlong *)(param_1 + 0x2650) = lVar5;
    if (lVar5 == 0) {
      uVar4 = 1;
      goto LAB_140db3c87;
    }
  }
  lVar3 = FUN_1447210f0(param_1);
  if (lVar3 == 0) {
LAB_140db3ca5:
    uVar4 = 0;
  }
  else {
    plVar1 = *(longlong **)(lVar5 + 0x38);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
      if (cVar2 == '\0') goto LAB_140db3ca5;
    }
    uVar4 = FUN_140db3cd0(lVar5,lVar3);
  }
LAB_140db3c87:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db3cd0 FUN_140db3cd0 body=163 status=ok
// SIG undefined FUN_140db3cd0(void)

ulonglong FUN_140db3cd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong unaff_RBX;
  
  if (*(int *)(param_1 + 0x170) == 0) {
LAB_140db3d0a:
    uVar4 = FUN_1406f625c(param_2);
    cVar2 = FUN_143defb48(param_1 + 0x178,uVar4);
    if (cVar2 != '\0') {
      plVar1 = *(longlong **)(param_1 + 0x38);
      if (plVar1 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
        unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
        if (cVar2 == '\0') goto LAB_140db3d65;
      }
      lVar3 = FUN_1418989e6(param_1 + 400);
      if (lVar3 != 0) {
        uVar5 = FUN_143dbe0cc(lVar3,param_2);
        return uVar5;
      }
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
      goto LAB_140db3d65;
    }
  }
  else {
    unaff_RBX = 0;
    lVar3 = FUN_140149a73(param_2,0);
    if (lVar3 == 0) goto LAB_140db3d65;
    cVar2 = FUN_1405d584e(param_1 + 0x168,lVar3);
    if (cVar2 != '\0') goto LAB_140db3d0a;
  }
  unaff_RBX = 0;
LAB_140db3d65:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 140db3d74 FUN_140db3d74 body=208 status=ok
// SIG undefined FUN_140db3d74(void)

void FUN_140db3d74(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_50;
  undefined1 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  uVar1 = FUN_144a52528();
  FUN_140db4062(uVar1,&DAT_149e060b2,&local_68);
  if (0 < (int)uStack_60) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      FUN_140db3e46(local_70,*(undefined8 *)(local_68 + lVar3));
      local_50 = local_68 + lVar3;
      local_48 = local_70;
      FUN_140db3efa(&DAT_14c948208,local_3c,&local_50,0);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < (int)uStack_60);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db3e46 FUN_140db3e46 body=178 status=ok
// SIG undefined FUN_140db3e46(void)

undefined8 FUN_140db3e46(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_168 [40];
  undefined8 local_140;
  wchar_t *local_138;
  undefined1 *local_130;
  ulonglong *local_128;
  char local_120;
  wchar_t local_118 [8];
  undefined1 local_108 [240];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = local_118;
  local_120 = '\0';
  local_128 = &local_18;
  builtin_wcsncpy(local_118,L"/Script/",8);
  local_130 = local_108;
  local_140 = param_2;
  FUN_14005eb5c(&local_140,&local_138);
  FUN_1446f82e2(param_1,(ulonglong)((longlong)local_130 - (longlong)local_138) >> 1,local_138,1);
  if (local_120 == '\x01') {
    FUN_1400020a8(local_138);
  }
  if ((local_18 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db3efa FUN_140db3efa body=358 status=ok
// SIG undefined FUN_140db3efa(void)

undefined4 *
FUN_140db3efa(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402ca3ce(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_14090688a(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140906920(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db4062 FUN_140db4062 body=225 status=ok
// SIG undefined FUN_140db4062(void)

void FUN_140db4062(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1410c0c36(0,param_2,&local_48);
  iVar3 = (int)param_3[1] + (int)uStack_40;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
    FUN_1402191ca(param_3);
  }
  lVar1 = local_48;
  if ((int)uStack_40 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = (longlong)(int)uStack_40;
    lVar5 = 0;
    do {
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_3,iVar3);
      }
      *(undefined8 *)(*param_3 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar1 + lVar5);
      lVar5 = lVar5 + 0x18;
    } while (lVar2 * 0x18 != lVar5);
    uVar4 = uStack_40 & 0xffffffff;
  }
  FUN_1410c0c05(local_48,uVar4);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db41f2 FUN_140db41f2 body=38 status=ok
// SIG undefined FUN_140db41f2(void)

undefined8 FUN_140db41f2(undefined8 param_1,int param_2)

{
  FUN_140db4218();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140db4218 FUN_140db4218 body=161 status=ok
// SIG undefined FUN_140db4218(void)

void FUN_140db4218(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab36d10;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140db42ba(param_1 + 0x22);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140db42ba FUN_140db42ba body=55 status=ok
// SIG undefined FUN_140db42ba(void)

void FUN_140db42ba(longlong *param_1)

{
  FUN_140db42f2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140db42f2 FUN_140db42f2 body=123 status=ok
// SIG undefined FUN_140db42f2(void)

void FUN_140db42f2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140240048(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140db436e FUN_140db436e body=113 status=ok
// SIG undefined FUN_140db436e(void)

void FUN_140db436e(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[0x1af];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_1[0x1ae];
    lVar3 = 0;
    do {
      FUN_140690180(*(undefined8 *)(lVar1 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
    if (0 < (int)param_1[0x1af]) {
                    /* WARNING: Could not recover jumptable at 0x000140db43cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x950))(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 140db43e0 FUN_140db43e0 body=124 status=ok
// SIG undefined FUN_140db43e0(void)

void FUN_140db43e0(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[0x1af];
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(param_1[0x1ae] + lVar2 * 8) != 0) {
        FUN_1400bcfd8();
        iVar1 = (int)param_1[0x1af];
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  lVar2 = param_1[0xb5];
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x74) & 8) == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x570))(param_1);
    FUN_140db445c(lVar2,iVar1 != 0);
  }
  FUN_1402b9e22(param_1,param_2);
  return;
}



// FUNCTION 140db445c FUN_140db445c body=1223 status=ok
// SIG undefined FUN_140db445c(void)

void FUN_140db445c(longlong param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  char local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_140db449c;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_140db44a1;
      goto LAB_140db44ce;
    }
  }
  else {
LAB_140db449c:
    if (iVar7 != 0x10) {
LAB_140db44ce:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_140db44a1;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_140db44a1;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_140db4629;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14365fa42);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_140db4629:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x17);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x17);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_140db46a9;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_140db46a9:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14aa5a018;
        puVar17[0x15] = param_1;
        *(char *)(puVar17 + 0x16) = param_2;
        uVar5 = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar17 + 0xb1) = uVar5;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = local_68._3_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_69 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_69 = 1;
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_78 = &local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aa59fd0;
        local_68 = &LAB_143662a3e;
        local_40 = param_1;
        local_38 = param_2;
        FUN_14005a792(&DAT_14ca9a440,L"SetCollisionEnabled",&DAT_14cafe1d8);
        if (local_68 != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_140db4568;
    }
  }
LAB_140db44a1:
  *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) & 0xdf | param_2 << 5;
LAB_140db4568:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db4938 FUN_140db4938 body=29 status=ok
// SIG undefined FUN_140db4938(void)

undefined8 FUN_140db4938(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140db4956 FUN_140db4956 body=63 status=ok
// SIG undefined FUN_140db4956(void)

undefined1 FUN_140db4956(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140db4996(param_2,param_3);
    param_3 = param_3 + 0x498;
    param_2 = param_2 + 0x498;
  }
  return 1;
}



// FUNCTION 140db4996 FUN_140db4996 body=438 status=ok
// SIG undefined FUN_140db4996(void)

longlong FUN_140db4996(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_2 != param_1) {
    FUN_140db4c02(param_1 + 8,param_2 + 8);
  }
  lVar8 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x20);
    }
  }
  *(longlong *)(param_1 + 0x20) = lVar8;
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  uVar5 = *(undefined4 *)(param_2 + 0x30);
  uVar6 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  FUN_140db4b4c(param_1 + 0x38,param_2 + 0x38);
  FUN_140db4b4c(param_1 + 0x48,param_2 + 0x48);
  FUN_140816b78(param_1 + 0x58,param_2 + 0x58);
  memcpy((void *)(param_1 + 0x170),(void *)(param_2 + 0x170),0x16c);
  FUN_140db4baa(param_1 + 0x2e0,param_2 + 0x2e0);
  lVar8 = *(longlong *)(param_2 + 0x2f0);
  if (*(longlong *)(param_1 + 0x2f0) != lVar8) {
    *(undefined8 *)(param_1 + 0x300) = 0;
  }
  *(longlong *)(param_1 + 0x2f0) = lVar8;
  if (*(longlong *)(param_1 + 0x2f8) != *(longlong *)(param_2 + 0x2f8)) {
    *(undefined8 *)(param_1 + 0x300) = 0;
  }
  uVar7 = FUN_14477b664();
  uVar7 = FUN_14477b664(uVar7);
  *(undefined8 *)(param_1 + 0x2f8) = uVar7;
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_2 + 0x300);
  *(undefined1 *)(param_1 + 0x308) = *(undefined1 *)(param_2 + 0x308);
  *(undefined1 *)(param_1 + 0x310) = *(undefined1 *)(param_2 + 0x310);
  FUN_140b177d4(param_1 + 0x318,param_2 + 0x318);
  uVar7 = *(undefined8 *)(param_2 + 0x338);
  lVar8 = *(longlong *)(param_2 + 0x340);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x340);
  *(undefined8 *)(param_1 + 0x338) = uVar7;
  *(longlong *)(param_1 + 0x340) = lVar8;
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
  memcpy((void *)(param_1 + 0x348),(void *)(param_2 + 0x348),0x150);
  return param_1;
}



// FUNCTION 140db4b4c FUN_140db4b4c body=93 status=ok
// SIG undefined FUN_140db4b4c(void)

undefined8 * FUN_140db4b4c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140893af5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1459847a4(param_1,iVar1);
      FUN_141413385(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140db4baa FUN_140db4baa body=88 status=ok
// SIG undefined FUN_140db4baa(void)

undefined8 * FUN_140db4baa(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14874db9a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140db4c02 FUN_140db4c02 body=395 status=ok
// SIG undefined FUN_140db4c02(void)

void FUN_140db4c02(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140db4d9c FUN_140db4d9c body=31 status=ok
// SIG undefined FUN_140db4d9c(void)

undefined8 FUN_140db4d9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140db4dc4 FUN_140db4dc4 body=1980 status=ok
// SIG undefined FUN_140db4dc4(void)

undefined8 FUN_140db4dc4(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  byte *pbVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_9c;
  undefined8 *local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  undefined8 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8 = DAT_14cb86458;
  local_d0 = DAT_14cb86450;
  FUN_1448075d0(&local_98);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar10 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar9[9];
      }
      iVar4 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_98) * 4);
      if (iVar4 != -1) {
        do {
          lVar13 = *plVar9 + (longlong)iVar4 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar4 * 0x40) == (uint)local_98) {
            if ((((lVar13 != 0) &&
                 (puVar11 = (undefined8 *)(lVar13 + 0x28), puVar11 != (undefined8 *)0x0)) &&
                ((byte *)*puVar11 != (byte *)0x0)) && ((*(byte *)*puVar11 & 0x40) == 0))
            goto LAB_140db4e93;
            break;
          }
          iVar4 = *(int *)(lVar13 + 0x38);
        } while (iVar4 != -1);
      }
    }
  }
  puVar11 = &DAT_14c9a1308;
LAB_140db4e93:
  if (CONCAT71(uStack_7f,uStack_80) != 0) {
    FUN_1400020a8();
  }
  pbVar2 = (byte *)*puVar11;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) != 0)) {
    if ((*pbVar2 & 2) == 0) {
      puVar11 = &DAT_14c9a1270;
    }
    else {
      puVar11 = *(undefined8 **)(pbVar2 + 8);
    }
    if ((longlong)*(int *)(puVar11 + 2) != 0) {
      puVar12 = (undefined8 *)*puVar11;
      puVar11 = puVar12 + (longlong)*(int *)(puVar11 + 2) * 2;
      do {
        local_c8 = DAT_14cb86470;
        local_d0 = DAT_14cb86468;
        FUN_1448075d0(&local_98,&local_d0);
        pbVar2 = (byte *)*puVar12;
        puVar7 = &DAT_14c9a1308;
        if (pbVar2 != (byte *)0x0) {
          plVar9 = &DAT_14c9a1288;
          if ((*pbVar2 & 2) != 0) {
            plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
          }
          puVar7 = &DAT_14c9a1308;
          if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
            plVar10 = plVar9 + 8;
            if ((longlong *)plVar9[9] != (longlong *)0x0) {
              plVar10 = (longlong *)plVar9[9];
            }
            iVar4 = *(int *)((longlong)plVar10 +
                            (ulonglong)((int)plVar9[10] - 1U & (uint)local_98) * 4);
            puVar7 = &DAT_14c9a1308;
            if (iVar4 != -1) {
              do {
                lVar13 = *plVar9 + (longlong)iVar4 * 0x40;
                if (*(uint *)(*plVar9 + (longlong)iVar4 * 0x40) == (uint)local_98) {
                  puVar7 = &DAT_14c9a1308;
                  if (lVar13 == 0) goto LAB_140db5035;
                  puVar8 = (undefined8 *)(lVar13 + 0x28);
                  puVar7 = &DAT_14c9a1308;
                  if ((puVar8 == (undefined8 *)0x0) ||
                     (((byte *)*puVar8 != (byte *)0x0 &&
                      (puVar7 = puVar8, (*(byte *)*puVar8 & 0x40) == 0)))) goto LAB_140db5035;
                  break;
                }
                iVar4 = *(int *)(lVar13 + 0x38);
              } while (iVar4 != -1);
              puVar7 = &DAT_14c9a1308;
            }
          }
        }
LAB_140db5035:
        if (CONCAT71(uStack_7f,uStack_80) != 0) {
          FUN_1400020a8();
        }
        if (((byte *)*puVar7 != (byte *)0x0) && ((~*(byte *)*puVar7 & 3) == 0)) {
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = DAT_14cb864a0;
          local_d0 = DAT_14cb86498;
          FUN_1448075d0(&local_98);
          local_f8 = (undefined8 *)FUN_144a06846(puVar7,&local_98);
          if (CONCAT71(uStack_7f,uStack_80) != 0) {
            FUN_1400020a8();
          }
          uVar3 = uStack_b0;
          if (((byte *)*local_f8 != (byte *)0x0) && ((*(byte *)*local_f8 & 3) != 0)) {
            lVar13 = (longlong)(int)uStack_b0;
            uVar5 = (int)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
            if (uStack_b0._4_4_ < uVar5) {
              FUN_1489138f8(&local_b8,uVar3 & 0xffffffff);
            }
            puVar8 = (undefined8 *)(local_b8 + lVar13 * 0x18);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            uVar6 = FUN_141855bda();
            FUN_14890cd88(puVar8,uVar6);
            FUN_14891398c(puVar8,&local_98);
            plVar9 = plStack_90;
            local_f0 = local_98;
            if (plStack_90 != (longlong *)0x0) {
              LOCK();
              plVar10 = plStack_90 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*plStack_90)(plStack_90);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
            local_e8 = 0;
            uStack_e0 = 0;
            local_d8 = 0;
            FUN_140205d94(&local_d0,local_f8,0);
            local_98 = local_d0;
            uVar6 = FUN_14477b664(CONCAT44(uStack_c4,local_c8));
            plStack_90 = (longlong *)FUN_14477b664(uVar6);
            puVar8 = local_f0;
            local_88 = local_c0;
            FUN_14890cdd6(local_f0 + 4,&local_98);
            local_c8 = DAT_14cb864b8;
            local_d0 = DAT_14cb864b0;
            FUN_1448075d0(&local_98,&local_d0);
            uVar6 = FUN_144a06846(puVar7,&local_98);
            FUN_140d72bcc(puVar8 + 7,uVar6);
            if (CONCAT71(uStack_7f,uStack_80) != 0) {
              FUN_1400020a8();
            }
          }
          local_c8 = DAT_14cb86488;
          local_d0 = DAT_14cb86480;
          FUN_1448075d0(&local_98);
          puVar7 = (undefined8 *)FUN_144a06846(puVar7,&local_98);
          if (CONCAT71(uStack_7f,uStack_80) != 0) {
            FUN_1400020a8();
          }
          uVar3 = uStack_b0;
          if (((byte *)*puVar7 != (byte *)0x0) && ((*(byte *)*puVar7 & 3) != 0)) {
            lVar13 = (longlong)(int)uStack_b0;
            uVar5 = (int)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
            if (uStack_b0._4_4_ < uVar5) {
              FUN_1489138f8(&local_b8,uVar3 & 0xffffffff);
            }
            puVar8 = (undefined8 *)(local_b8 + lVar13 * 0x18);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            uVar6 = FUN_1464f8f46();
            FUN_14890cd88(puVar8,uVar6);
            FUN_1489139e0(puVar8,&local_98);
            plVar9 = plStack_90;
            local_f8 = local_98;
            if (plStack_90 != (longlong *)0x0) {
              LOCK();
              plVar10 = plStack_90 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*plStack_90)(plStack_90);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
            local_d0 = (undefined8 *)0x0;
            local_c8 = 0;
            local_c0 = 0;
            local_9c = 0;
            FUN_140008118(&local_98,puVar7);
            FUN_1457e05f4(local_f8 + 5,&local_98);
          }
          if (0 < (int)uStack_b0) {
            local_6c = 0;
            local_98 = (undefined8 *)0x0;
            plStack_90 = (longlong *)0x0;
            local_88 = 0;
            uStack_80 = 0;
            uStack_7f = 0;
            uStack_78 = 0;
            uStack_77 = 0;
            FUN_1486eaa96(&local_98,&local_b8);
            iVar4 = (int)param_1[0xb];
            *(uint *)(param_1 + 0xb) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0x5c) < iVar4 + 1U) {
              FUN_148913a34(param_1 + 10,iVar4);
            }
            puVar7 = (undefined8 *)(param_1[10] + (longlong)iVar4 * 0x58);
            puVar7[8] = 0;
            puVar7[9] = 0;
            puVar7[6] = 0;
            puVar7[7] = 0;
            puVar7[4] = 0;
            puVar7[5] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[10] = 0;
            FUN_140d237a0(puVar7 + 1,&local_98);
            *(undefined1 *)(puVar7 + 8) = 1;
            FUN_140679fa8(&local_98);
          }
          FUN_140679ffe(local_b8,(int)uStack_b0);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
        }
        puVar12 = puVar12 + 2;
      } while (puVar12 != puVar11);
    }
  }
  uVar6 = FUN_140db5582();
  FUN_1402057ac(param_2,param_1,uVar6,0);
  if (*param_1 != 0) {
    local_c8 = DAT_14cb864d0;
    local_d0 = DAT_14cb864c8;
    FUN_1448075d0(&local_98);
    pbVar2 = (byte *)*param_2;
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar9 = &DAT_14c9a1288;
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
        plVar10 = plVar9 + 8;
        if ((longlong *)plVar9[9] != (longlong *)0x0) {
          plVar10 = (longlong *)plVar9[9];
        }
        iVar4 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_98) * 4)
        ;
        if (iVar4 != -1) {
          do {
            lVar13 = *plVar9 + (longlong)iVar4 * 0x40;
            if (*(uint *)(*plVar9 + (longlong)iVar4 * 0x40) == (uint)local_98) {
              if ((((lVar13 != 0) &&
                   (puVar11 = (undefined8 *)(lVar13 + 0x28), puVar11 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar11 != (byte *)0x0)) && ((*(byte *)*puVar11 & 0x40) == 0))
              goto LAB_140db5104;
              break;
            }
            iVar4 = *(int *)(lVar13 + 0x38);
          } while (iVar4 != -1);
        }
      }
    }
    puVar11 = &DAT_14c9a1308;
LAB_140db5104:
    iVar4 = FUN_140e1edd4(puVar11,0);
    if (CONCAT71(uStack_7f,uStack_80) != 0) {
      FUN_1400020a8();
    }
    if (iVar4 == 1) {
      *param_1 = 0;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140db5582 FUN_140db5582 body=57 status=ok
// SIG undefined FUN_140db5582(void)

void FUN_140db5582(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c230 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c230 = FUN_140002ddd(FUN_146530602,uVar1,L"MissionExitPoint");
  }
  return;
}



// FUNCTION 140db55bc FUN_140db55bc body=123 status=ok
// SIG undefined FUN_140db55bc(void)

undefined8 * FUN_140db55bc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b0c3da0;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140db5637(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 140db5637 FUN_140db5637 body=47 status=ok
// SIG undefined FUN_140db5637(void)

void FUN_140db5637(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140db5666 FUN_140db5666 body=1772 status=ok
// SIG undefined FUN_140db5666(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140db5666(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined *puVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  undefined1 auStack_b8 [36];
  undefined4 local_94;
  ulonglong *local_90;
  undefined1 local_88 [8];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14a390b70;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  local_94 = param_2;
  FUN_1446f470e(param_1 + 4,param_4,1);
  local_90 = param_1 + 5;
  FUN_14099931e(local_90,param_1 + 4);
  FUN_1446f470e(local_88,param_5,1);
  FUN_14099931e(param_1 + 6,local_88);
  param_1[7] = param_5;
  param_1[8] = param_6;
  *(undefined4 *)(param_1 + 9) = param_7;
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_15;
  *(undefined4 *)(param_1 + 10) = param_8;
  param_1[0xb] = param_9;
  param_1[0xc] = param_10;
  param_1[0xd] = param_11;
  param_1[0xe] = param_12;
  param_1[0xf] = param_13;
  param_1[0x10] = param_14;
  param_1[0x11] = param_16;
  puVar1 = param_1 + 0x12;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_1;
  FUN_14170c56a(param_3);
  if (DAT_14ca98540 != (undefined8 *)0x0) {
    *(undefined8 **)((longlong)DAT_14ca98540 + 8) = puVar1;
  }
  param_1[0x12] = DAT_14ca98540;
  param_1[0x13] = &DAT_14ca98540;
  DAT_14ca98540 = puVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca98598) && (FUN_144b3d300(&DAT_14ca98598), DAT_14ca98598 == -1)) {
    DAT_14ca98568 = (undefined *)0x0;
    DAT_14ca98570 = 0;
    DAT_14ca98548 = 0;
    _DAT_14ca98550 = 0;
    _DAT_14ca98574 = 0xffffffff00000080;
    DAT_14ca9857c = 0;
    DAT_14ca98588 = (undefined *)0x0;
    DAT_14ca98590 = 0;
    atexit(FUN_143226fe8);
    _Init_thread_footer(&DAT_14ca98598);
  }
  uVar12 = _DAT_14ca98550;
  if (DAT_14ca9857c == 0) {
    iVar22 = DAT_14ca98550;
    _DAT_14ca98550 = CONCAT44(DAT_14ca98554,DAT_14ca98550 + 1);
    if (DAT_14ca98554 == iVar22) {
      FUN_14482b872(&DAT_14ca98548,uVar12 & 0xffffffff);
    }
    iVar14 = DAT_14ca98570;
    if (DAT_14ca98570 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = DAT_14ca98570 + 0x1e;
      if (-1 < DAT_14ca98570 + -1) {
        iVar7 = DAT_14ca98570 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    iVar11 = DAT_14ca98570 + 1;
    iVar17 = DAT_14ca98570 + 0x1f;
    if (-1 < DAT_14ca98570) {
      iVar17 = DAT_14ca98570;
    }
    if (iVar17 >> 5 != iVar7) {
      if (DAT_14ca98574 <= DAT_14ca98570) {
        if (DAT_14ca98570 + 0x20U < 0xa0) {
          iVar7 = 0x80;
        }
        else {
          uVar18 = DAT_14ca98570 + 0x20U >> 5;
          if (DAT_14ca98574 + 0x1fU < 0xa0) {
            uVar21 = 4;
            if (4 < uVar18) {
              uVar21 = uVar18;
            }
          }
          else {
            uVar21 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar12 = (ulonglong)(uVar21 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar19 = (uint)(uVar12 + 0xf);
              if (uVar21 < 0x1ffd) {
                uVar12 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar12 + 0xf >> 4]];
              }
              else {
                uVar13 = (ulonglong)(uVar19 & 0xfffffff0);
                if (uVar13 < 0x7ff1) {
                  bVar10 = (&DAT_14c841e00)[uVar19 >> 4];
                  uVar16 = 0x32;
                  if (0x32 < bVar10) {
                    uVar16 = (ulonglong)bVar10;
                  }
                  uVar20 = 0x32 - (ulonglong)bVar10;
                  do {
                    uVar12 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar20 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar20 & 0xffffffff] & 0xf) == 0) goto LAB_140db5ba5;
                    lVar8 = uVar16 + 1 + uVar20;
                    uVar20 = uVar20 - 1;
                  } while (lVar8 != 0x33);
                }
                uVar12 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar12 = (ulonglong)DAT_14c841df8;
                }
                uVar12 = -uVar12 & (uVar13 + uVar12) - 1;
              }
            }
            else {
              uVar12 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar12,0);
            }
          }
LAB_140db5ba5:
          iVar11 = (int)(uVar12 >> 2);
          iVar7 = -0x20;
          if ((int)uVar18 <= iVar11) {
            iVar7 = iVar11 << 5;
          }
        }
        _DAT_14ca98574 = CONCAT44(DAT_14ca98578,iVar7);
        FUN_1446efbd8(&DAT_14ca98558,DAT_14ca98570);
        iVar11 = DAT_14ca98570 + 1;
      }
      iVar7 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar7 = iVar11;
      }
      if (iVar11 % 0x20 != 0) {
        puVar15 = &DAT_14ca98558;
        if (DAT_14ca98568 != (undefined *)0x0) {
          puVar15 = DAT_14ca98568;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        DAT_14ca98570 = iVar11;
        *(uint *)(puVar15 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(puVar15 + (longlong)(iVar7 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
        iVar11 = DAT_14ca98570;
      }
    }
    DAT_14ca98570 = iVar11;
    lVar8 = (longlong)iVar22;
    puVar15 = &DAT_14ca98558;
    if (DAT_14ca98568 != (undefined *)0x0) {
      puVar15 = DAT_14ca98568;
    }
    bVar10 = (byte)iVar14 & 0x1f;
    *(uint *)(puVar15 + (longlong)(iVar17 >> 5) * 4) =
         *(uint *)(puVar15 + (longlong)(iVar17 >> 5) * 4) &
         (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar22 = DAT_14ca98578;
    lVar8 = (longlong)DAT_14ca98578;
    iVar14 = *(int *)(DAT_14ca98548 + 4 + lVar8 * 0x18);
    _DAT_14ca98574 = CONCAT44(iVar14,DAT_14ca98574);
    DAT_14ca9857c = DAT_14ca9857c + -1;
    if (DAT_14ca9857c != 0) {
      *(undefined4 *)(DAT_14ca98548 + (longlong)iVar14 * 0x18) = 0xffffffff;
    }
  }
  iVar14 = 1;
  puVar15 = &DAT_14ca98558;
  if (DAT_14ca98568 != (undefined *)0x0) {
    puVar15 = DAT_14ca98568;
  }
  iVar7 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar7 = iVar22;
  }
  *(uint *)(puVar15 + (longlong)(iVar7 >> 5) * 4) =
       *(uint *)(puVar15 + (longlong)(iVar7 >> 5) * 4) | 1 << ((byte)iVar22 & 0x1f);
  plVar9 = (longlong *)(DAT_14ca98548 + lVar8 * 0x18);
  lVar8 = param_1[5];
  *plVar9 = lVar8;
  plVar9[1] = (longlong)param_1;
  *(undefined4 *)(plVar9 + 2) = 0xffffffff;
  uVar18 = (int)((ulonglong)lVar8 >> 0x20) * 0x17 + (int)lVar8;
  uVar21 = DAT_14ca98550 - DAT_14ca9857c;
  if ((uVar21 != 0) && (uVar21 != 1)) {
    puVar15 = &DAT_14ca98580;
    if (DAT_14ca98588 != (undefined *)0x0) {
      puVar15 = DAT_14ca98588;
    }
    iVar7 = *(int *)(puVar15 + (ulonglong)(DAT_14ca98590 - 1U & uVar18) * 4);
    while (iVar7 != -1) {
      plVar3 = (longlong *)(DAT_14ca98548 + (longlong)iVar7 * 0x18);
      if (*plVar3 == lVar8) {
        uVar5 = *(undefined4 *)((longlong)plVar9 + 4);
        lVar8 = plVar9[1];
        uVar6 = *(undefined4 *)((longlong)plVar9 + 0xc);
        *(int *)plVar3 = (int)*plVar9;
        *(undefined4 *)((longlong)plVar3 + 4) = uVar5;
        *(int *)(plVar3 + 1) = (int)lVar8;
        *(undefined4 *)((longlong)plVar3 + 0xc) = uVar6;
        FUN_14099da9c(iVar22);
        goto LAB_140db59cb;
      }
      iVar7 = (int)plVar3[2];
    }
  }
  if (3 < uVar21) {
    uVar12 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar14 = 1 << ((byte)lVar8 & 0x1f);
  }
  if (((int)uVar21 < 1) || (iVar14 <= DAT_14ca98590)) {
    uVar18 = DAT_14ca98590 - 1U & uVar18;
    *(uint *)((longlong)plVar9 + 0x14) = uVar18;
    puVar15 = DAT_14ca98588;
    if (DAT_14ca98588 == (undefined *)0x0) {
      puVar15 = &DAT_14ca98580;
    }
    *(undefined4 *)(plVar9 + 2) =
         *(undefined4 *)(puVar15 + ((longlong)DAT_14ca98590 - 1U & (longlong)(int)uVar18) * 4);
    puVar15 = DAT_14ca98588;
    if (DAT_14ca98588 == (undefined *)0x0) {
      puVar15 = &DAT_14ca98580;
    }
    *(int *)(puVar15 + ((longlong)DAT_14ca98590 - 1U & (longlong)(int)uVar18) * 4) = iVar22;
  }
  else {
    DAT_14ca98590 = iVar14;
    FUN_141790244();
  }
LAB_140db59cb:
  plVar9 = (longlong *)FUN_14099da01(local_94);
  uVar18 = *(uint *)(plVar9 + 1);
  lVar8 = *plVar9;
  if ((int)uVar18 < 1) {
    uVar21 = 0;
  }
  else {
    uVar21 = 0;
    uVar19 = uVar18;
    do {
      uVar2 = (uVar19 >> 1) + uVar21;
      if (*(ulonglong *)(*(longlong *)(lVar8 + (ulonglong)uVar2 * 8) + 0x28) < *local_90) {
        uVar21 = uVar2 + (uVar19 & 1);
      }
      bVar4 = 1 < uVar19;
      uVar19 = uVar19 >> 1;
    } while (bVar4);
  }
  *(uint *)(plVar9 + 1) = uVar18 + 1;
  if (*(uint *)((longlong)plVar9 + 0xc) < uVar18 + 1) {
    FUN_14178e7bc(plVar9,uVar18);
    lVar8 = *plVar9;
  }
  uVar12 = (ulonglong)uVar21;
  memmove((void *)(lVar8 + uVar12 * 8 + 8),(void *)(lVar8 + uVar12 * 8),
          (ulonglong)(uVar18 - uVar21) << 3);
  *(undefined8 **)(*plVar9 + uVar12 * 8) = param_1;
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db5d5a FUN_140db5d5a body=57 status=ok
// SIG undefined FUN_140db5d5a(void)

void FUN_140db5d5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbcde0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbcde0 = FUN_140002ddd(FUN_14660cb3c,uVar1,L"OakVehicleBodySettings");
  }
  return;
}



// FUNCTION 140db6066 FUN_140db6066 body=880 status=ok
// SIG undefined FUN_140db6066(void)

void FUN_140db6066(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_a8;
  longlong local_98;
  longlong lStack_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = *(longlong *)(param_1 + 0x28);
  if ((longlong)*(int *)(lVar3 + 0x20) != 0) {
    plVar15 = *(longlong **)(lVar3 + 0x18);
    local_108 = plVar15 + (longlong)*(int *)(lVar3 + 0x20) * 5;
    do {
      if ((longlong)(int)plVar15[4] != 0) {
        plVar10 = (longlong *)plVar15[3];
        plVar14 = plVar10 + (longlong)(int)plVar15[4] * 8;
        plVar11 = plVar15 + 1;
        local_100 = plVar11;
        local_f8 = plVar14;
        do {
          local_110 = *(longlong *)
                       (*(longlong *)(lVar3 + 8) + (longlong)*(int *)((longlong)plVar10 + 0x34) * 8)
          ;
          if ((longlong)*(int *)(local_110 + 0x688) != 0) {
            plVar9 = (longlong *)(*(longlong *)(local_110 + 0x680) + 0x18);
            lVar8 = (longlong)*(int *)(local_110 + 0x688) * 0x30;
            do {
              if (plVar9[2] == *plVar15) {
                if (plVar9 != (longlong *)&DAT_00000018) {
                  local_e8 = plVar9;
                  if ((longlong)(int)plVar15[2] == 0) {
                    iVar16 = 0;
                  }
                  else {
                    lVar8 = plVar15[1];
                    lVar12 = (longlong)(int)plVar15[2] << 6;
                    lVar13 = 0;
                    local_f0 = lVar12;
                    do {
                      if (*(int *)(local_110 + 0x668) ==
                          *(int *)(*(longlong *)
                                    (*(longlong *)(lVar3 + 8) +
                                    (longlong)*(int *)((longlong)plVar10 + 0x34) * 8) + 0x668)) {
                        local_e0 = 0;
                        FUN_144b468b0(&local_d8);
                        local_d8 = *plVar10;
                        local_a8 = (undefined1)plVar10[2];
                        local_98 = plVar10[4];
                        lStack_90 = plVar10[5];
                        uStack_d0 = *(undefined8 *)(lVar8 + lVar13);
                        local_88 = *(undefined1 *)(lVar8 + 0x10 + lVar13);
                        puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar13);
                        local_78 = *puVar1;
                        uStack_70 = puVar1[1];
                        local_c8 = CONCAT44(*(undefined4 *)(lVar8 + 0x30 + lVar13),(int)plVar10[6]);
                        local_c0 = *(undefined4 *)(lVar3 + 0x48);
                        local_bc = *(undefined4 *)(lVar3 + 0x4c);
                        local_b8 = *(undefined4 *)(lVar3 + 0x50);
                        local_b4 = *(undefined4 *)(lVar3 + 0x54);
                        local_b0 = *(undefined4 *)(lVar3 + 0x58);
                        cVar7 = FUN_144b46900(&local_d8,&local_e0);
                        lVar4 = local_e0;
                        if (cVar7 != '\0') {
                          local_d8 = 0;
                          uStack_d0 = 0;
                          local_c8 = 0;
                          local_e0 = 0;
                          FUN_1409f51ce(&local_d8);
                          plVar11 = local_e8;
                          local_d8 = lVar4;
                          iVar16 = (int)local_e8[1];
                          lVar12 = (longlong)iVar16;
                          *(uint *)(local_e8 + 1) = iVar16 + 1U;
                          if (*(uint *)((longlong)local_e8 + 0xc) < iVar16 + 1U) {
                            FUN_140db6408(local_e8,iVar16);
                          }
                          lVar4 = *plVar11;
                          *(longlong *)(lVar4 + lVar12 * 0x18) = local_d8;
                          *(undefined8 *)(lVar4 + 8 + lVar12 * 0x18) = uStack_d0;
                          *(undefined8 *)(lVar4 + 0x10 + lVar12 * 0x18) = local_c8;
                          local_d8 = 0;
                          uStack_d0 = 0;
                          local_c8 = 0;
                          FUN_1409f518e(&local_d8);
                          lVar12 = local_f0;
                        }
                        if (local_e0 != 0) {
                          FUN_144b3f230();
                        }
                      }
                      lVar13 = lVar13 + 0x40;
                    } while (lVar12 != lVar13);
                    iVar16 = (int)plVar15[2];
                    plVar11 = local_100;
                    plVar14 = local_f8;
                  }
                  *(uint *)(plVar15 + 2) = iVar16 + 1U;
                  if (*(uint *)((longlong)plVar15 + 0x14) < iVar16 + 1U) {
                    FUN_140e15006(plVar11,iVar16);
                  }
                  lVar8 = *plVar11;
                  lVar13 = (longlong)iVar16 * 0x40;
                  *(longlong *)(lVar8 + lVar13) = *plVar10;
                  *(char *)(lVar8 + 0x10 + lVar13) = (char)plVar10[2];
                  uVar5 = *(undefined4 *)((longlong)plVar10 + 0x24);
                  lVar12 = plVar10[5];
                  uVar6 = *(undefined4 *)((longlong)plVar10 + 0x2c);
                  puVar2 = (undefined4 *)(lVar8 + 0x20 + lVar13);
                  *puVar2 = (int)plVar10[4];
                  puVar2[1] = uVar5;
                  puVar2[2] = (int)lVar12;
                  puVar2[3] = uVar6;
                  *(longlong *)(lVar8 + 0x30 + lVar13) = plVar10[6];
                }
                break;
              }
              plVar9 = plVar9 + 6;
              lVar8 = lVar8 + -0x30;
            } while (lVar8 != 0);
          }
          plVar10 = plVar10 + 8;
        } while (plVar10 != plVar14);
      }
      *(undefined4 *)(plVar15 + 2) = 0;
      if (*(int *)((longlong)plVar15 + 0x14) != 0) {
        FUN_140db63d8(plVar15 + 1);
      }
      plVar15 = plVar15 + 5;
    } while (plVar15 != local_108);
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140db63d8 FUN_140db63d8 body=48 status=ok
// SIG undefined FUN_140db63d8(void)

void FUN_140db63d8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,0x10);
  }
  return;
}



// FUNCTION 140db6408 FUN_140db6408 body=370 status=ok
// SIG undefined FUN_140db6408(void)

void FUN_140db6408(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140db6491;
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
LAB_140db6491:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140db6594 FUN_140db6594 body=3123 status=ok
// SIG undefined FUN_140db6594(void)

undefined8 FUN_140db6594(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  int iVar17;
  uint *puVar18;
  ulonglong uVar19;
  longlong *plVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  undefined8 *puVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  int iVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined1 auStack_158 [32];
  code **local_138;
  longlong local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_e9;
  code *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  undefined1 *local_c0;
  code *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar13 = *(longlong *)(param_1 + 0x10);
  *(bool *)(param_1 + 0x18) = (*(byte *)(lVar13 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(lVar13 + 0x48) & 0xfe) == 2) {
    bVar7 = *(byte *)(lVar13 + 0x30) >> 1 & 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)(param_1 + 0x19) = bVar7;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  local_118 = param_2;
  InitializeSRWLock((PSRWLOCK)(param_3 + 1));
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  plVar20 = (longlong *)(param_1 + 0x20);
  lVar13 = *(longlong *)(param_4 + 0x100);
  if (*(int *)(param_1 + 0x54) == 0) {
    iVar9 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar9 + 1;
    if (*(int *)(param_1 + 0x2c) == iVar9) {
      FUN_14482b872(plVar20,iVar9);
    }
    iVar30 = *(int *)(param_1 + 0x48);
    if (iVar30 == 0) {
      iVar17 = -1;
    }
    else {
      iVar17 = iVar30 + 0x1e;
      if (-1 < iVar30 + -1) {
        iVar17 = iVar30 + -1;
      }
      iVar17 = iVar17 >> 5;
    }
    lVar31 = param_1 + 0x30;
    iVar22 = iVar30 + 1;
    iVar25 = iVar30 + 0x1f;
    if (-1 < iVar30) {
      iVar25 = iVar30;
    }
    if (iVar25 >> 5 == iVar17) {
      *(int *)(param_1 + 0x48) = iVar22;
    }
    else {
      if (*(int *)(param_1 + 0x4c) <= iVar30) {
        iVar17 = iVar30;
        local_128 = lVar31;
        if (iVar30 + 0x20U < 0xa0) {
          iVar22 = 0x80;
        }
        else {
          uVar24 = iVar30 + 0x20U >> 5;
          local_120 = (ulonglong)uVar24;
          if (*(int *)(param_1 + 0x4c) + 0x1fU < 0xa0) {
            uVar21 = 4;
            if (4 < uVar24) {
              uVar21 = uVar24;
            }
          }
          else {
            uVar21 = uVar24 + (uVar24 * 3 >> 3) + 0x10;
          }
          uVar19 = (ulonglong)(uVar21 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar24 = (uint)(uVar19 + 0xf);
              if (uVar21 < 0x1ffd) {
                uVar19 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar19 + 0xf >> 4]];
              }
              else {
                uVar23 = (ulonglong)(uVar24 & 0xfffffff0);
                if (uVar23 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar24 >> 4];
                  uVar32 = 0x32;
                  if (0x32 < bVar7) {
                    uVar32 = (ulonglong)bVar7;
                  }
                  uVar28 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar19 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0) goto LAB_140db6bf3;
                    lVar31 = uVar32 + 1 + uVar28;
                    uVar28 = uVar28 - 1;
                  } while (lVar31 != 0x33);
                }
                uVar19 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar19 = (ulonglong)DAT_14c841df8;
                }
                uVar19 = -uVar19 & (uVar23 + uVar19) - 1;
              }
            }
            else {
              uVar19 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar19,0);
              iVar17 = *(int *)(param_1 + 0x48);
            }
          }
LAB_140db6bf3:
          iVar8 = (int)(uVar19 >> 2);
          iVar22 = -0x20;
          if ((int)local_120 <= iVar8) {
            iVar22 = iVar8 << 5;
          }
        }
        *(int *)(param_1 + 0x4c) = iVar22;
        FUN_1446efbd8(local_128,iVar17);
        iVar22 = *(int *)(param_1 + 0x48) + 1;
        lVar31 = local_128;
      }
      iVar17 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar17 = iVar22;
      }
      *(int *)(param_1 + 0x48) = iVar22;
      if (iVar22 % 0x20 != 0) {
        lVar12 = *(longlong *)(param_1 + 0x40);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          lVar12 = lVar31;
        }
        bVar7 = -(char)(iVar22 % 0x20);
        *(uint *)(lVar12 + (longlong)(iVar17 >> 5) * 4) =
             (uint)(*(int *)(lVar12 + (longlong)(iVar17 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar12 = (longlong)iVar9;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar31 = *(longlong *)(param_1 + 0x40);
    }
    bVar7 = (byte)iVar30 & 0x1f;
    puVar15 = (uint *)(lVar31 + (longlong)(iVar25 >> 5) * 4);
    *puVar15 = *puVar15 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar9 = *(int *)(param_1 + 0x50);
    lVar12 = (longlong)iVar9;
    iVar30 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar12 * 0x18);
    *(int *)(param_1 + 0x50) = iVar30;
    iVar17 = *(int *)(param_1 + 0x54) + -1;
    *(int *)(param_1 + 0x54) = iVar17;
    if (iVar17 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar30 * 0x18) = 0xffffffff;
    }
  }
  puVar15 = (uint *)(param_1 + 0x30);
  puVar18 = *(uint **)(param_1 + 0x40);
  if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
    puVar18 = puVar15;
  }
  iVar30 = iVar9 + 0x1f;
  if (-1 < iVar9) {
    iVar30 = iVar9;
  }
  puVar18[iVar30 >> 5] = puVar18[iVar30 >> 5] | 1 << ((byte)iVar9 & 0x1f);
  uVar24 = 1;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x20) + lVar12 * 0x18);
  *plVar3 = lVar13;
  plVar3[1] = (longlong)param_3;
  *(undefined4 *)(plVar3 + 2) = 0xffffffff;
  uVar21 = (int)((ulonglong)lVar13 >> 0x20) * 0x17 + (int)lVar13;
  uVar27 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54);
  if ((uVar27 != 0) && (uVar27 != 1)) {
    lVar31 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar31 = *(longlong *)(param_1 + 0x60);
    }
    iVar30 = *(int *)(lVar31 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & uVar21) * 4);
    if (iVar30 != -1) {
      do {
        plVar4 = (longlong *)(*plVar20 + (longlong)iVar30 * 0x18);
        if (*plVar4 == lVar13) {
          uVar5 = *(undefined4 *)((longlong)plVar3 + 4);
          lVar13 = plVar3[1];
          uVar6 = *(undefined4 *)((longlong)plVar3 + 0xc);
          *(int *)plVar4 = (int)*plVar3;
          *(undefined4 *)((longlong)plVar4 + 4) = uVar5;
          *(int *)(plVar4 + 1) = (int)lVar13;
          *(undefined4 *)((longlong)plVar4 + 0xc) = uVar6;
          FUN_143a19f18(plVar20,iVar9);
          goto LAB_140db6786;
        }
        iVar30 = (int)plVar4[2];
      } while (iVar30 != -1);
    }
  }
  if (3 < uVar27) {
    uVar19 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar24 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar27 < 1) || ((int)uVar24 <= *(int *)(param_1 + 0x68))) {
    uVar21 = *(int *)(param_1 + 0x68) - 1U & uVar21;
    *(uint *)((longlong)plVar3 + 0x14) = uVar21;
    lVar13 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar13 = param_1 + 0x58;
    }
    *(undefined4 *)(plVar3 + 2) =
         *(undefined4 *)
          (lVar13 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar21) * 4);
    lVar13 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar13 = param_1 + 0x58;
    }
    *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar21) * 4) = iVar9
    ;
  }
  else {
    *(uint *)(param_1 + 0x68) = uVar24;
    plVar20 = (longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1446efa72(plVar20,0,0,4);
      uVar24 = *(uint *)(param_1 + 0x68);
    }
    lVar13 = param_1 + 0x58;
    if (uVar24 == 1) {
      if (*plVar20 != 0) {
        FUN_1446efa72(plVar20,0,0,4);
      }
LAB_140db6966:
      uVar21 = 0;
      do {
        lVar31 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar31 = lVar13;
        }
        *(undefined4 *)(lVar31 + (ulonglong)(*(int *)(param_1 + 0x68) + 0x7fffffffU & uVar21) * 4) =
             0xffffffff;
        uVar21 = uVar21 + 1;
      } while (uVar24 != uVar21);
    }
    else {
      if (uVar24 == 0) goto LAB_140db6786;
      FUN_1446efa72(plVar20,0,uVar24,4);
      if (0 < (int)uVar24) goto LAB_140db6966;
    }
    iVar9 = *(int *)(param_1 + 0x48);
    if (iVar9 == 0) {
      uVar19 = 0;
      uVar23 = 1;
      iVar30 = 0;
      iVar17 = 0;
    }
    else {
      puVar18 = *(uint **)(param_1 + 0x40);
      if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
        puVar18 = puVar15;
      }
      uVar24 = *puVar18;
      if (uVar24 == 0) {
        iVar30 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar30 = iVar9 + -1;
        }
        uVar19 = 0;
        uVar23 = (ulonglong)(uint)(iVar30 >> 5);
        if (iVar30 >> 5 < 1) {
          uVar23 = uVar19;
        }
        iVar17 = 0;
        do {
          if (uVar23 == uVar19) goto LAB_140db6786;
          iVar17 = iVar17 + 0x20;
          uVar24 = puVar18[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar24 == 0);
      }
      else {
        uVar19 = 0;
        iVar17 = 0;
      }
      uVar23 = (ulonglong)(-uVar24 & uVar24);
      uVar32 = uVar23 * 2 + 1;
      lVar31 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      iVar30 = (iVar17 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
      if (iVar9 <= iVar30) {
        iVar30 = iVar9;
      }
    }
    if (iVar30 < iVar9) {
      uVar24 = 0xffffffff;
      do {
        lVar31 = *(longlong *)(param_1 + 0x20);
        lVar29 = (longlong)iVar30;
        uVar16 = *(undefined8 *)(lVar31 + lVar29 * 0x18);
        uVar32 = (longlong)((int)((ulonglong)uVar16 >> 0x20) * 0x17 + (int)uVar16) &
                 (longlong)*(int *)(param_1 + 0x68) - 1U;
        iVar9 = (int)uVar32;
        *(int *)(lVar31 + 0x14 + lVar29 * 0x18) = iVar9;
        lVar12 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar12 = lVar13;
        }
        *(undefined4 *)(lVar31 + 0x10 + lVar29 * 0x18) =
             *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x68) - 1U & uVar32) * 4);
        lVar31 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar31 = lVar13;
        }
        *(int *)(lVar31 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x68) - 1U) * 4) = iVar30;
        uVar24 = ~(uint)uVar23 & uVar24;
        puVar18 = *(uint **)(param_1 + 0x40);
        if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
          puVar18 = puVar15;
        }
        iVar9 = *(int *)(param_1 + 0x48);
        iVar30 = (int)uVar19;
        lVar31 = (longlong)iVar30;
        uVar21 = puVar18[lVar31] & uVar24;
        if (uVar21 == 0) {
          iVar22 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar22 = iVar9 + -1;
          }
          iVar22 = iVar22 >> 5;
          iVar25 = iVar22;
          if (iVar22 < iVar30) {
            iVar25 = iVar30;
          }
          if (iVar22 <= iVar30) break;
          lVar12 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar21 = puVar18[lVar31 + lVar12 + 1];
            if (uVar21 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar25 - lVar31 == lVar12) goto LAB_140db6786;
          }
          uVar19 = (ulonglong)(iVar30 + (int)lVar12 + 1);
          uVar24 = 0xffffffff;
        }
        uVar23 = (ulonglong)(-uVar21 & uVar21);
        uVar32 = uVar23 * 2 + 1;
        lVar31 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        iVar30 = (iVar17 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
      } while (iVar30 < iVar9);
    }
  }
LAB_140db6786:
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_140db6d10;
  local_c0 = &local_e9;
  local_e9 = 0;
  local_d8 = 0;
  local_c8 = &PTR_LAB_14adbeaf0;
  local_e8 = FUN_1406f0128;
  FUN_140bb9115(local_118,param_4);
  uStack_108 = *(undefined8 *)(param_4 + 0x100);
  local_100 = *(undefined8 *)(param_4 + 0x870);
  uStack_f8 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4c);
  uStack_f4 = CONCAT31(uStack_f4._1_3_,local_e9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar13 + 0xc60);
  local_110 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_140db6823;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_140db682c;
      goto LAB_140db6c39;
    }
  }
  else {
LAB_140db6823:
    if (iVar9 != 0x10) {
LAB_140db6c39:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar13 + 0xc60), iVar9 == 2))
        goto LAB_140db682c;
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_140db682c;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar15 = (uint *)*puVar2;
        if (puVar15 != (uint *)0x0) goto LAB_140db6de8;
        while( true ) {
          uVar24 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar24 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar24 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar14 = *(undefined4 **)(lVar13 + 0x310);
          *(undefined8 *)(lVar13 + 0x310) = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
LAB_140db6de8:
          puVar26 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar26 + 0x19);
          uVar24 = puVar15[0x12];
          if (puVar18 <= puVar15 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar21 = *puVar15;
            *puVar15 = *puVar15 + uVar24 + 1;
            UNLOCK();
            if ((uVar21 ^ uVar24) != 0xffffffff) break;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar26 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar26 + 0x19);
            uVar24 = 0;
            if (puVar18 <= puVar15 + 0x4000) {
              uVar24 = 1;
              goto LAB_140db6e68;
            }
          }
        }
        uVar24 = uVar24 + 1;
LAB_140db6e68:
        *(uint **)(puVar15 + 0x10) = puVar18;
        puVar15[0x12] = uVar24;
        iVar9 = 0;
        FUN_1447247dc(puVar26,0);
        *puVar26 = &PTR_FUN_14adbeb30;
        *(undefined4 *)(puVar26 + 0x15) = (undefined4)local_110;
        *(undefined4 *)((longlong)puVar26 + 0xac) = local_110._4_4_;
        *(undefined4 *)(puVar26 + 0x16) = (undefined4)uStack_108;
        *(undefined4 *)((longlong)puVar26 + 0xb4) = uStack_108._4_4_;
        *(undefined4 *)(puVar26 + 0x17) = (undefined4)local_100;
        *(undefined4 *)((longlong)puVar26 + 0xbc) = local_100._4_4_;
        *(undefined4 *)(puVar26 + 0x18) = uStack_f8;
        *(undefined4 *)((longlong)puVar26 + 0xc4) = uStack_f4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar24 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar24 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
            iVar9 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
        }
        puVar26[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar26[9] = puVar26;
        puVar26[10] = puVar26;
        lVar13 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar13 == 0) {
          uVar23 = 1;
          if ((char)uVar19 != '\x06') {
            uVar23 = uVar19;
          }
          uVar19 = uVar23;
          uVar16 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
          }
          uVar16 = *(undefined8 *)(lVar13 + 0x30);
        }
        puVar26[0xf] = uVar16;
        puVar26[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar26 + 0x1c) = iVar9;
        if (puVar26 == (undefined8 *)0x0) {
          local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
          UNLOCK();
          local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(puVar26);
          LOCK();
          piVar1 = (int *)(puVar26 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar26)(puVar26,1);
          }
        }
      }
      else {
        local_a8[0] = (code *)0x0;
        local_98 = (longlong *)FUN_14001cc68(0x28,8);
        *local_98 = (longlong)&PTR_LAB_14adbeb10;
        *(undefined4 *)(local_98 + 3) = (undefined4)local_100;
        *(undefined4 *)((longlong)local_98 + 0x1c) = local_100._4_4_;
        *(undefined4 *)(local_98 + 4) = uStack_f8;
        *(undefined4 *)((longlong)local_98 + 0x24) = uStack_f4;
        *(undefined4 *)(local_98 + 1) = (undefined4)local_110;
        *(undefined4 *)((longlong)local_98 + 0xc) = local_110._4_4_;
        *(undefined4 *)(local_98 + 2) = (undefined4)uStack_108;
        *(undefined4 *)((longlong)local_98 + 0x14) = uStack_108._4_4_;
        if (local_98 + 1 != (longlong *)0x0) {
          local_a8[0] = FUN_140931442;
        }
        local_138 = local_a8;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_AddProxy",&DAT_14cb3ae8c);
        if (local_a8[0] != (code *)0x0) {
          plVar20 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar20 = local_88;
          }
          (**(code **)(*plVar20 + 0x10))();
        }
      }
      goto LAB_140db6d10;
    }
  }
LAB_140db682c:
  FUN_148139748(&local_110,&DAT_14ca85100);
LAB_140db6d10:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140db71c8 FUN_140db71c8 body=3130 status=ok
// SIG undefined FUN_140db71c8(void)

undefined8 FUN_140db71c8(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  int iVar17;
  uint *puVar18;
  ulonglong uVar19;
  longlong *plVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  undefined8 *puVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  int iVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined1 auStack_158 [32];
  code **local_138;
  longlong local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_e9;
  code *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  undefined1 *local_c0;
  code *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar13 = *(longlong *)(param_1 + 0x10);
  *(bool *)(param_1 + 0x18) = (*(byte *)(lVar13 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(lVar13 + 0x48) & 0xfe) == 2) {
    bVar7 = *(byte *)(lVar13 + 0x30) >> 1 & 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)(param_1 + 0x19) = bVar7;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  InitializeSRWLock((PSRWLOCK)(param_3 + 1));
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  plVar20 = (longlong *)(param_1 + 0x20);
  lVar13 = *(longlong *)(param_4 + 0x100);
  local_118 = param_2;
  if (*(int *)(param_1 + 0x54) == 0) {
    iVar8 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar8 + 1;
    if (*(int *)(param_1 + 0x2c) == iVar8) {
      FUN_14482b872(plVar20,iVar8);
    }
    iVar30 = *(int *)(param_1 + 0x48);
    if (iVar30 == 0) {
      iVar17 = -1;
    }
    else {
      iVar17 = iVar30 + 0x1e;
      if (-1 < iVar30 + -1) {
        iVar17 = iVar30 + -1;
      }
      iVar17 = iVar17 >> 5;
    }
    lVar31 = param_1 + 0x30;
    iVar22 = iVar30 + 1;
    iVar25 = iVar30 + 0x1f;
    if (-1 < iVar30) {
      iVar25 = iVar30;
    }
    if (iVar25 >> 5 == iVar17) {
      *(int *)(param_1 + 0x48) = iVar22;
    }
    else {
      if (*(int *)(param_1 + 0x4c) <= iVar30) {
        iVar17 = iVar30;
        local_128 = lVar31;
        if (iVar30 + 0x20U < 0xa0) {
          iVar22 = 0x80;
        }
        else {
          uVar24 = iVar30 + 0x20U >> 5;
          local_120 = (ulonglong)uVar24;
          if (*(int *)(param_1 + 0x4c) + 0x1fU < 0xa0) {
            uVar21 = 4;
            if (4 < uVar24) {
              uVar21 = uVar24;
            }
          }
          else {
            uVar21 = uVar24 + (uVar24 * 3 >> 3) + 0x10;
          }
          uVar19 = (ulonglong)(uVar21 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar24 = (uint)(uVar19 + 0xf);
              if (uVar21 < 0x1ffd) {
                uVar19 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar19 + 0xf >> 4]];
              }
              else {
                uVar23 = (ulonglong)(uVar24 & 0xfffffff0);
                if (uVar23 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar24 >> 4];
                  uVar32 = 0x32;
                  if (0x32 < bVar7) {
                    uVar32 = (ulonglong)bVar7;
                  }
                  uVar28 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar19 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0) goto LAB_140db7c85;
                    lVar31 = uVar32 + 1 + uVar28;
                    uVar28 = uVar28 - 1;
                  } while (lVar31 != 0x33);
                }
                uVar19 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar19 = (ulonglong)DAT_14c841df8;
                }
                uVar19 = -uVar19 & (uVar23 + uVar19) - 1;
              }
            }
            else {
              uVar19 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar19,0);
              iVar17 = *(int *)(param_1 + 0x48);
            }
          }
LAB_140db7c85:
          iVar9 = (int)(uVar19 >> 2);
          iVar22 = -0x20;
          if ((int)local_120 <= iVar9) {
            iVar22 = iVar9 << 5;
          }
        }
        *(int *)(param_1 + 0x4c) = iVar22;
        FUN_1446efbd8(local_128,iVar17);
        iVar22 = *(int *)(param_1 + 0x48) + 1;
        lVar31 = local_128;
      }
      iVar17 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar17 = iVar22;
      }
      *(int *)(param_1 + 0x48) = iVar22;
      if (iVar22 % 0x20 != 0) {
        lVar12 = *(longlong *)(param_1 + 0x40);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          lVar12 = lVar31;
        }
        bVar7 = -(char)(iVar22 % 0x20);
        *(uint *)(lVar12 + (longlong)(iVar17 >> 5) * 4) =
             (uint)(*(int *)(lVar12 + (longlong)(iVar17 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar12 = (longlong)iVar8;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar31 = *(longlong *)(param_1 + 0x40);
    }
    bVar7 = (byte)iVar30 & 0x1f;
    puVar15 = (uint *)(lVar31 + (longlong)(iVar25 >> 5) * 4);
    *puVar15 = *puVar15 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x50);
    lVar12 = (longlong)iVar8;
    iVar30 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar12 * 0x18);
    *(int *)(param_1 + 0x50) = iVar30;
    iVar17 = *(int *)(param_1 + 0x54) + -1;
    *(int *)(param_1 + 0x54) = iVar17;
    if (iVar17 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar30 * 0x18) = 0xffffffff;
    }
  }
  puVar15 = (uint *)(param_1 + 0x30);
  puVar18 = *(uint **)(param_1 + 0x40);
  if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
    puVar18 = puVar15;
  }
  iVar30 = iVar8 + 0x1f;
  if (-1 < iVar8) {
    iVar30 = iVar8;
  }
  puVar18[iVar30 >> 5] = puVar18[iVar30 >> 5] | 1 << ((byte)iVar8 & 0x1f);
  uVar24 = 1;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x20) + lVar12 * 0x18);
  *plVar3 = lVar13;
  plVar3[1] = (longlong)param_3;
  *(undefined4 *)(plVar3 + 2) = 0xffffffff;
  uVar21 = (int)((ulonglong)lVar13 >> 0x20) * 0x17 + (int)lVar13;
  uVar27 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54);
  if (1 < uVar27) {
    lVar31 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar31 = *(longlong *)(param_1 + 0x60);
    }
    iVar30 = *(int *)(lVar31 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & uVar21) * 4);
    if (iVar30 != -1) {
      do {
        plVar4 = (longlong *)(*plVar20 + (longlong)iVar30 * 0x18);
        if (*plVar4 == lVar13) {
          uVar5 = *(undefined4 *)((longlong)plVar3 + 4);
          lVar13 = plVar3[1];
          uVar6 = *(undefined4 *)((longlong)plVar3 + 0xc);
          *(int *)plVar4 = (int)*plVar3;
          *(undefined4 *)((longlong)plVar4 + 4) = uVar5;
          *(int *)(plVar4 + 1) = (int)lVar13;
          *(undefined4 *)((longlong)plVar4 + 0xc) = uVar6;
          FUN_143a0ea6e(plVar20,iVar8);
          goto LAB_140db73c5;
        }
        iVar30 = (int)plVar4[2];
      } while (iVar30 != -1);
    }
  }
  if (3 < uVar27) {
    uVar19 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar24 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar27 < 1) || ((int)uVar24 <= *(int *)(param_1 + 0x68))) {
    uVar21 = *(int *)(param_1 + 0x68) - 1U & uVar21;
    *(uint *)((longlong)plVar3 + 0x14) = uVar21;
    lVar13 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar13 = param_1 + 0x58;
    }
    *(undefined4 *)(plVar3 + 2) =
         *(undefined4 *)
          (lVar13 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar21) * 4);
    lVar13 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar13 = param_1 + 0x58;
    }
    *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar21) * 4) = iVar8
    ;
  }
  else {
    *(uint *)(param_1 + 0x68) = uVar24;
    plVar20 = (longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1446efa72(plVar20,0,0,4);
      uVar24 = *(uint *)(param_1 + 0x68);
    }
    lVar13 = param_1 + 0x58;
    if (uVar24 == 1) {
      if (*plVar20 != 0) {
        FUN_1446efa72(plVar20,0,0,4);
      }
LAB_140db75a7:
      uVar21 = 0;
      do {
        lVar31 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar31 = lVar13;
        }
        *(undefined4 *)(lVar31 + (ulonglong)(*(int *)(param_1 + 0x68) + 0x7fffffffU & uVar21) * 4) =
             0xffffffff;
        uVar21 = uVar21 + 1;
      } while (uVar24 != uVar21);
    }
    else {
      if (uVar24 == 0) goto LAB_140db73c5;
      FUN_1446efa72(plVar20,0,uVar24,4);
      if (0 < (int)uVar24) goto LAB_140db75a7;
    }
    iVar8 = *(int *)(param_1 + 0x48);
    if (iVar8 == 0) {
      uVar19 = 0;
      uVar23 = 1;
      iVar30 = 0;
      iVar17 = 0;
    }
    else {
      puVar18 = *(uint **)(param_1 + 0x40);
      if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
        puVar18 = puVar15;
      }
      uVar24 = *puVar18;
      if (uVar24 == 0) {
        iVar30 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar30 = iVar8 + -1;
        }
        uVar19 = 0;
        uVar23 = (ulonglong)(uint)(iVar30 >> 5);
        if (iVar30 >> 5 < 1) {
          uVar23 = uVar19;
        }
        iVar17 = 0;
        do {
          if (uVar23 == uVar19) goto LAB_140db73c5;
          iVar17 = iVar17 + 0x20;
          uVar24 = puVar18[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar24 == 0);
      }
      else {
        uVar19 = 0;
        iVar17 = 0;
      }
      uVar23 = (ulonglong)(-uVar24 & uVar24);
      uVar32 = uVar23 * 2 + 1;
      lVar31 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      iVar30 = (iVar17 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
      if (iVar8 <= iVar30) {
        iVar30 = iVar8;
      }
    }
    if (iVar30 < iVar8) {
      uVar24 = 0xffffffff;
      do {
        lVar31 = *(longlong *)(param_1 + 0x20);
        lVar29 = (longlong)iVar30;
        uVar16 = *(undefined8 *)(lVar31 + lVar29 * 0x18);
        uVar32 = (longlong)((int)((ulonglong)uVar16 >> 0x20) * 0x17 + (int)uVar16) &
                 (longlong)*(int *)(param_1 + 0x68) - 1U;
        iVar8 = (int)uVar32;
        *(int *)(lVar31 + 0x14 + lVar29 * 0x18) = iVar8;
        lVar12 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar12 = lVar13;
        }
        *(undefined4 *)(lVar31 + 0x10 + lVar29 * 0x18) =
             *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x68) - 1U & uVar32) * 4);
        lVar31 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar31 = lVar13;
        }
        *(int *)(lVar31 + ((longlong)iVar8 & (longlong)*(int *)(param_1 + 0x68) - 1U) * 4) = iVar30;
        uVar24 = ~(uint)uVar23 & uVar24;
        puVar18 = *(uint **)(param_1 + 0x40);
        if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
          puVar18 = puVar15;
        }
        iVar8 = *(int *)(param_1 + 0x48);
        iVar30 = (int)uVar19;
        lVar31 = (longlong)iVar30;
        uVar21 = puVar18[lVar31] & uVar24;
        if (uVar21 == 0) {
          iVar22 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar22 = iVar8 + -1;
          }
          iVar22 = iVar22 >> 5;
          iVar25 = iVar22;
          if (iVar22 < iVar30) {
            iVar25 = iVar30;
          }
          if (iVar22 <= iVar30) break;
          lVar12 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar21 = puVar18[lVar31 + lVar12 + 1];
            if (uVar21 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar25 - lVar31 == lVar12) goto LAB_140db73c5;
          }
          uVar19 = (ulonglong)(iVar30 + (int)lVar12 + 1);
          uVar24 = 0xffffffff;
        }
        uVar23 = (ulonglong)(-uVar21 & uVar21);
        uVar32 = uVar23 * 2 + 1;
        lVar31 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        iVar30 = (iVar17 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
      } while (iVar30 < iVar8);
    }
  }
LAB_140db73c5:
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_140db789f;
  local_c0 = &local_e9;
  local_e9 = 0;
  local_d8 = 0;
  local_c8 = &PTR_LAB_14adbca40;
  local_e8 = FUN_141824134;
  FUN_140bb9115(local_118,param_4);
  uStack_108 = *(undefined8 *)(param_4 + 0x100);
  local_100 = *(undefined8 *)(param_4 + 0x870);
  uStack_f8 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4c);
  uStack_f4 = CONCAT31(uStack_f4._1_3_,local_e9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xc60);
  local_110 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_140db7462;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_140db746b;
      goto LAB_140db77c8;
    }
  }
  else {
LAB_140db7462:
    if (iVar8 != 0x10) {
LAB_140db77c8:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar13 + 0xc60), iVar8 == 2))
        goto LAB_140db746b;
        if (iVar8 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_140db746b;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar15 = (uint *)*puVar2;
        if (puVar15 != (uint *)0x0) goto LAB_140db7977;
        while( true ) {
          uVar24 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar24 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar24 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar14 = *(undefined4 **)(lVar13 + 0x310);
          *(undefined8 *)(lVar13 + 0x310) = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
LAB_140db7977:
          puVar26 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar26 + 0x19);
          uVar24 = puVar15[0x12];
          if (puVar18 <= puVar15 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar21 = *puVar15;
            *puVar15 = *puVar15 + uVar24 + 1;
            UNLOCK();
            if ((uVar21 ^ uVar24) != 0xffffffff) break;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar26 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar26 + 0x19);
            uVar24 = 0;
            if (puVar18 <= puVar15 + 0x4000) {
              uVar24 = 1;
              goto LAB_140db79f7;
            }
          }
        }
        uVar24 = uVar24 + 1;
LAB_140db79f7:
        *(uint **)(puVar15 + 0x10) = puVar18;
        puVar15[0x12] = uVar24;
        iVar8 = 0;
        FUN_1447247dc(puVar26,0);
        *puVar26 = &PTR_FUN_14adbcab8;
        *(undefined4 *)(puVar26 + 0x15) = (undefined4)local_110;
        *(undefined4 *)((longlong)puVar26 + 0xac) = local_110._4_4_;
        *(undefined4 *)(puVar26 + 0x16) = (undefined4)uStack_108;
        *(undefined4 *)((longlong)puVar26 + 0xb4) = uStack_108._4_4_;
        *(undefined4 *)(puVar26 + 0x17) = (undefined4)local_100;
        *(undefined4 *)((longlong)puVar26 + 0xbc) = local_100._4_4_;
        *(undefined4 *)(puVar26 + 0x18) = uStack_f8;
        *(undefined4 *)((longlong)puVar26 + 0xc4) = uStack_f4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar24 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar24 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
            iVar8 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
        }
        puVar26[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar26[9] = puVar26;
        puVar26[10] = puVar26;
        lVar13 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar13 == 0) {
          uVar23 = 1;
          if ((char)uVar19 != '\x06') {
            uVar23 = uVar19;
          }
          uVar19 = uVar23;
          uVar16 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
          }
          uVar16 = *(undefined8 *)(lVar13 + 0x30);
        }
        puVar26[0xf] = uVar16;
        puVar26[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar26 + 0x1c) = iVar8;
        if (puVar26 == (undefined8 *)0x0) {
          local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
          UNLOCK();
          local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(puVar26);
          LOCK();
          piVar1 = (int *)(puVar26 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar26)(puVar26,1);
          }
        }
      }
      else {
        local_a8[0] = (code *)0x0;
        local_98 = (longlong *)FUN_14001cc68(0x28,8);
        *local_98 = (longlong)&PTR_LAB_14adbca60;
        *(undefined4 *)(local_98 + 3) = (undefined4)local_100;
        *(undefined4 *)((longlong)local_98 + 0x1c) = local_100._4_4_;
        *(undefined4 *)(local_98 + 4) = uStack_f8;
        *(undefined4 *)((longlong)local_98 + 0x24) = uStack_f4;
        *(undefined4 *)(local_98 + 1) = (undefined4)local_110;
        *(undefined4 *)((longlong)local_98 + 0xc) = local_110._4_4_;
        *(undefined4 *)(local_98 + 2) = (undefined4)uStack_108;
        *(undefined4 *)((longlong)local_98 + 0x14) = uStack_108._4_4_;
        if (local_98 + 1 != (longlong *)0x0) {
          local_a8[0] = FUN_1409de594;
        }
        local_138 = local_a8;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_AddProxy",&DAT_14cb3ae3c);
        if (local_a8[0] != (code *)0x0) {
          plVar20 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar20 = local_88;
          }
          (**(code **)(*plVar20 + 0x10))();
        }
      }
      goto LAB_140db789f;
    }
  }
LAB_140db746b:
  FUN_148129032(&local_110,&DAT_14ca85100);
LAB_140db789f:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140db7e04 FUN_140db7e04 body=3148 status=ok
// SIG undefined FUN_140db7e04(void)

undefined8 FUN_140db7e04(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 uVar18;
  uint *puVar19;
  longlong *plVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  undefined8 *puVar26;
  uint uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  int iVar31;
  ulonglong uVar32;
  undefined1 auStack_158 [32];
  undefined1 **local_138;
  ulonglong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_e9;
  code *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  undefined1 *local_c0;
  undefined1 *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar14 = *(longlong *)(param_1 + 0x10);
  *(bool *)(param_1 + 0x18) = (*(byte *)(lVar14 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(lVar14 + 0x48) & 0xfe) == 2) {
    bVar7 = *(byte *)(lVar14 + 0x30) >> 1 & 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)(param_1 + 0x19) = bVar7;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  local_120 = param_2;
  InitializeSRWLock((PSRWLOCK)(param_3 + 1));
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  plVar20 = (longlong *)(param_1 + 0x20);
  lVar14 = *(longlong *)(param_4 + 0x100);
  local_118 = param_4;
  if (*(int *)(param_1 + 0x54) == 0) {
    iVar9 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar9 + 1;
    if (*(int *)(param_1 + 0x2c) == iVar9) {
      FUN_14482b872(plVar20,iVar9);
    }
    iVar31 = *(int *)(param_1 + 0x48);
    if (iVar31 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar31 + 0x1e;
      if (-1 < iVar31 + -1) {
        iVar8 = iVar31 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    lVar28 = param_1 + 0x30;
    iVar23 = iVar31 + 1;
    iVar25 = iVar31 + 0x1f;
    if (-1 < iVar31) {
      iVar25 = iVar31;
    }
    if (iVar25 >> 5 == iVar8) {
      *(int *)(param_1 + 0x48) = iVar23;
    }
    else {
      if (*(int *)(param_1 + 0x4c) <= iVar31) {
        iVar8 = iVar31;
        if (iVar31 + 0x20U < 0xa0) {
          iVar23 = 0x80;
        }
        else {
          uVar22 = iVar31 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x4c) + 0x1fU < 0xa0) {
            uVar21 = 4;
            if (4 < uVar22) {
              uVar21 = uVar22;
            }
          }
          else {
            uVar21 = uVar22 + (uVar22 * 3 >> 3) + 0x10;
          }
          uVar15 = (ulonglong)(uVar21 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar27 = (uint)(uVar15 + 0xf);
              if (uVar21 < 0x1ffd) {
                uVar15 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar15 + 0xf >> 4]];
              }
              else {
                uVar24 = (ulonglong)(uVar27 & 0xfffffff0);
                if (uVar24 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar27 >> 4];
                  uVar32 = 0x32;
                  if (0x32 < bVar7) {
                    uVar32 = (ulonglong)bVar7;
                  }
                  uVar29 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar15 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar29 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar29 & 0xffffffff] & 0xf) == 0) goto LAB_140db8876;
                    lVar13 = uVar32 + 1 + uVar29;
                    uVar29 = uVar29 - 1;
                  } while (lVar13 != 0x33);
                }
                uVar15 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar15 = (ulonglong)DAT_14c841df8;
                }
                uVar15 = -uVar15 & (uVar24 + uVar15) - 1;
              }
            }
            else {
              local_128 = (ulonglong)uVar22;
              uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar15,0);
              uVar22 = (uint)local_128;
              iVar8 = *(int *)(param_1 + 0x48);
            }
          }
LAB_140db8876:
          iVar10 = (int)(uVar15 >> 2);
          iVar23 = -0x20;
          if ((int)uVar22 <= iVar10) {
            iVar23 = iVar10 << 5;
          }
        }
        *(int *)(param_1 + 0x4c) = iVar23;
        FUN_1446efbd8(lVar28,iVar8);
        iVar23 = *(int *)(param_1 + 0x48) + 1;
      }
      iVar8 = iVar23 + 0x1f;
      if (-1 < iVar23) {
        iVar8 = iVar23;
      }
      *(int *)(param_1 + 0x48) = iVar23;
      if (iVar23 % 0x20 != 0) {
        lVar13 = *(longlong *)(param_1 + 0x40);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          lVar13 = lVar28;
        }
        bVar7 = -(char)(iVar23 % 0x20);
        *(uint *)(lVar13 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)(lVar13 + (longlong)(iVar8 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar13 = (longlong)iVar9;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar28 = *(longlong *)(param_1 + 0x40);
    }
    bVar7 = (byte)iVar31 & 0x1f;
    puVar17 = (uint *)(lVar28 + (longlong)(iVar25 >> 5) * 4);
    *puVar17 = *puVar17 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar9 = *(int *)(param_1 + 0x50);
    lVar13 = (longlong)iVar9;
    iVar31 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar13 * 0x18);
    *(int *)(param_1 + 0x50) = iVar31;
    iVar8 = *(int *)(param_1 + 0x54) + -1;
    *(int *)(param_1 + 0x54) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar31 * 0x18) = 0xffffffff;
    }
  }
  puVar17 = (uint *)(param_1 + 0x30);
  puVar19 = *(uint **)(param_1 + 0x40);
  if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
    puVar19 = puVar17;
  }
  iVar31 = iVar9 + 0x1f;
  if (-1 < iVar9) {
    iVar31 = iVar9;
  }
  puVar19[iVar31 >> 5] = puVar19[iVar31 >> 5] | 1 << ((byte)iVar9 & 0x1f);
  uVar22 = 1;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x20) + lVar13 * 0x18);
  *plVar3 = lVar14;
  plVar3[1] = (longlong)param_3;
  *(undefined4 *)(plVar3 + 2) = 0xffffffff;
  uVar21 = (int)((ulonglong)lVar14 >> 0x20) * 0x17 + (int)lVar14;
  uVar27 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54);
  if (1 < uVar27) {
    lVar13 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x60);
    }
    iVar31 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & uVar21) * 4);
    if (iVar31 != -1) {
      do {
        plVar4 = (longlong *)(*plVar20 + (longlong)iVar31 * 0x18);
        if (*plVar4 == lVar14) {
          uVar5 = *(undefined4 *)((longlong)plVar3 + 4);
          lVar14 = plVar3[1];
          uVar6 = *(undefined4 *)((longlong)plVar3 + 0xc);
          *(int *)plVar4 = (int)*plVar3;
          *(undefined4 *)((longlong)plVar4 + 4) = uVar5;
          *(int *)(plVar4 + 1) = (int)lVar14;
          *(undefined4 *)((longlong)plVar4 + 0xc) = uVar6;
          FUN_143a1598c(plVar20,iVar9);
          goto LAB_140db82fb;
        }
        iVar31 = (int)plVar4[2];
      } while (iVar31 != -1);
    }
  }
  if (3 < uVar27) {
    uVar15 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar22 = 1 << ((byte)lVar14 & 0x1f);
  }
  if (((int)uVar27 < 1) || ((int)uVar22 <= *(int *)(param_1 + 0x68))) {
    uVar21 = *(int *)(param_1 + 0x68) - 1U & uVar21;
    *(uint *)((longlong)plVar3 + 0x14) = uVar21;
    lVar14 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar14 = param_1 + 0x58;
    }
    *(undefined4 *)(plVar3 + 2) =
         *(undefined4 *)
          (lVar14 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar21) * 4);
    lVar14 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar14 = param_1 + 0x58;
    }
    *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar21) * 4) = iVar9
    ;
  }
  else {
    *(uint *)(param_1 + 0x68) = uVar22;
    plVar20 = (longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1446efa72(plVar20,0,0,4);
      uVar22 = *(uint *)(param_1 + 0x68);
    }
    lVar14 = param_1 + 0x58;
    if (uVar22 == 1) {
      if (*plVar20 != 0) {
        FUN_1446efa72(plVar20,0,0,4);
      }
LAB_140db8132:
      uVar21 = 0;
      do {
        lVar13 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar13 = lVar14;
        }
        *(undefined4 *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x68) + 0x7fffffffU & uVar21) * 4) =
             0xffffffff;
        uVar21 = uVar21 + 1;
      } while (uVar22 != uVar21);
    }
    else {
      if (uVar22 == 0) goto LAB_140db82fb;
      FUN_1446efa72(plVar20,0,uVar22,4);
      if (0 < (int)uVar22) goto LAB_140db8132;
    }
    iVar9 = *(int *)(param_1 + 0x48);
    if (iVar9 == 0) {
      uVar15 = 0;
      uVar24 = 1;
      iVar31 = 0;
      iVar8 = 0;
    }
    else {
      puVar19 = *(uint **)(param_1 + 0x40);
      if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
        puVar19 = puVar17;
      }
      uVar22 = *puVar19;
      if (uVar22 == 0) {
        iVar31 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar31 = iVar9 + -1;
        }
        uVar15 = 0;
        uVar24 = (ulonglong)(uint)(iVar31 >> 5);
        if (iVar31 >> 5 < 1) {
          uVar24 = uVar15;
        }
        iVar8 = 0;
        do {
          if (uVar24 == uVar15) goto LAB_140db82fb;
          iVar8 = iVar8 + 0x20;
          uVar22 = puVar19[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar22 == 0);
      }
      else {
        uVar15 = 0;
        iVar8 = 0;
      }
      uVar24 = (ulonglong)(-uVar22 & uVar22);
      uVar32 = uVar24 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar31 = (iVar8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar9 <= iVar31) {
        iVar31 = iVar9;
      }
    }
    if (iVar31 < iVar9) {
      uVar22 = 0xffffffff;
      do {
        lVar13 = *(longlong *)(param_1 + 0x20);
        lVar30 = (longlong)iVar31;
        uVar18 = *(undefined8 *)(lVar13 + lVar30 * 0x18);
        uVar32 = (longlong)((int)((ulonglong)uVar18 >> 0x20) * 0x17 + (int)uVar18) &
                 (longlong)*(int *)(param_1 + 0x68) - 1U;
        iVar9 = (int)uVar32;
        *(int *)(lVar13 + 0x14 + lVar30 * 0x18) = iVar9;
        lVar28 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar28 = lVar14;
        }
        *(undefined4 *)(lVar13 + 0x10 + lVar30 * 0x18) =
             *(undefined4 *)(lVar28 + ((longlong)*(int *)(param_1 + 0x68) - 1U & uVar32) * 4);
        lVar13 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar13 = lVar14;
        }
        *(int *)(lVar13 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x68) - 1U) * 4) = iVar31;
        uVar22 = ~(uint)uVar24 & uVar22;
        puVar19 = *(uint **)(param_1 + 0x40);
        if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
          puVar19 = puVar17;
        }
        iVar9 = *(int *)(param_1 + 0x48);
        iVar31 = (int)uVar15;
        lVar13 = (longlong)iVar31;
        uVar21 = puVar19[lVar13] & uVar22;
        if (uVar21 == 0) {
          iVar23 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar23 = iVar9 + -1;
          }
          iVar23 = iVar23 >> 5;
          iVar25 = iVar23;
          if (iVar23 < iVar31) {
            iVar25 = iVar31;
          }
          if (iVar23 <= iVar31) break;
          lVar28 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar21 = puVar19[lVar13 + lVar28 + 1];
            if (uVar21 != 0) break;
            lVar28 = lVar28 + 1;
            if (iVar25 - lVar13 == lVar28) goto LAB_140db82fb;
          }
          uVar15 = (ulonglong)(iVar31 + (int)lVar28 + 1);
          uVar22 = 0xffffffff;
        }
        uVar24 = (ulonglong)(-uVar21 & uVar21);
        uVar32 = uVar24 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar31 = (iVar8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar31 < iVar9);
    }
  }
LAB_140db82fb:
  lVar14 = local_118;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_140db847d;
  local_c0 = &local_e9;
  local_e9 = 0;
  local_d8 = 0;
  local_c8 = &PTR_LAB_14adbde10;
  local_e8 = FUN_148131ece;
  FUN_140bb9115(local_120,local_118);
  uStack_108 = *(undefined8 *)(lVar14 + 0x100);
  local_100 = *(undefined8 *)(lVar14 + 0x870);
  uStack_f8 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4c);
  uStack_f4 = CONCAT31(uStack_f4._1_3_,local_e9);
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar14 + 0xc60);
  local_110 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_140db839d;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_140db88ae;
      goto LAB_140db83a6;
    }
  }
  else {
LAB_140db839d:
    if (iVar9 != 0x10) {
LAB_140db83a6:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar14 + 0xc60), iVar9 == 2))
        goto LAB_140db88ae;
        if (iVar9 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_140db88ae;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar17 = (uint *)*puVar2;
        if (puVar17 != (uint *)0x0) goto LAB_140db856e;
        while( true ) {
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar16 = *(undefined4 **)(lVar14 + 0x310);
          *(undefined8 *)(lVar14 + 0x310) = 0;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar16 = 0xffffffff;
          *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar2 = puVar16;
          FUN_140217a48(puVar2);
          puVar17 = (uint *)*puVar2;
LAB_140db856e:
          puVar26 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar26 + 0x19);
          uVar22 = puVar17[0x12];
          if (puVar19 <= puVar17 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
            LOCK();
            uVar21 = *puVar17;
            *puVar17 = *puVar17 + uVar22 + 1;
            UNLOCK();
            if ((uVar21 ^ uVar22) != 0xffffffff) break;
            puVar17 = (uint *)*puVar2;
            *puVar17 = 0xffffffff;
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar2 = puVar17;
            puVar26 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar26 + 0x19);
            uVar22 = 0;
            if (puVar19 <= puVar17 + 0x4000) {
              uVar22 = 1;
              goto LAB_140db85ee;
            }
          }
        }
        uVar22 = uVar22 + 1;
LAB_140db85ee:
        *(uint **)(puVar17 + 0x10) = puVar19;
        puVar17[0x12] = uVar22;
        iVar9 = 0;
        FUN_1447247dc(puVar26,0);
        *puVar26 = &PTR_FUN_14adbde50;
        *(undefined4 *)(puVar26 + 0x15) = (undefined4)local_110;
        *(undefined4 *)((longlong)puVar26 + 0xac) = local_110._4_4_;
        *(undefined4 *)(puVar26 + 0x16) = (undefined4)uStack_108;
        *(undefined4 *)((longlong)puVar26 + 0xb4) = uStack_108._4_4_;
        *(undefined4 *)(puVar26 + 0x17) = (undefined4)local_100;
        *(undefined4 *)((longlong)puVar26 + 0xbc) = local_100._4_4_;
        *(undefined4 *)(puVar26 + 0x18) = uStack_f8;
        *(undefined4 *)((longlong)puVar26 + 0xc4) = uStack_f4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar22 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar22 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar22];
            iVar9 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
        }
        puVar26[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar26[9] = puVar26;
        puVar26[10] = puVar26;
        lVar14 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar14 == 0) {
          uVar24 = 1;
          if ((char)uVar15 != '\x06') {
            uVar24 = uVar15;
          }
          uVar15 = uVar24;
          uVar18 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar14 + 0x38) >> 0x3b;
          }
          uVar18 = *(undefined8 *)(lVar14 + 0x30);
        }
        puVar26[0xf] = uVar18;
        puVar26[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar26 + 0x1c) = iVar9;
        if (puVar26 == (undefined8 *)0x0) {
          local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
          UNLOCK();
          local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(puVar26);
          LOCK();
          piVar1 = (int *)(puVar26 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar26)(puVar26,1);
          }
        }
      }
      else {
        local_a8[0] = (undefined1 *)0x0;
        local_98 = (longlong *)FUN_14001cc68(0x28,8);
        *local_98 = (longlong)&PTR_LAB_14adbde30;
        *(undefined4 *)(local_98 + 3) = (undefined4)local_100;
        *(undefined4 *)((longlong)local_98 + 0x1c) = local_100._4_4_;
        *(undefined4 *)(local_98 + 4) = uStack_f8;
        *(undefined4 *)((longlong)local_98 + 0x24) = uStack_f4;
        *(undefined4 *)(local_98 + 1) = (undefined4)local_110;
        *(undefined4 *)((longlong)local_98 + 0xc) = local_110._4_4_;
        *(undefined4 *)(local_98 + 2) = (undefined4)uStack_108;
        *(undefined4 *)((longlong)local_98 + 0x14) = uStack_108._4_4_;
        if (local_98 + 1 != (longlong *)0x0) {
          local_a8[0] = &LAB_148132530;
        }
        local_138 = local_a8;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_AddProxy",&DAT_14cb3ae6c);
        if (local_a8[0] != (undefined1 *)0x0) {
          plVar20 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar20 = local_88;
          }
          (**(code **)(*plVar20 + 0x10))();
        }
      }
      goto LAB_140db847d;
    }
  }
LAB_140db88ae:
  FUN_148131f38(&local_110,&DAT_14ca85100);
LAB_140db847d:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140db8a52 FUN_140db8a52 body=40 status=ok
// SIG undefined FUN_140db8a52(void)

undefined8 FUN_140db8a52(undefined8 param_1,int param_2)

{
  FUN_140db8a7a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140db8a7a FUN_140db8a7a body=145 status=ok
// SIG undefined FUN_140db8a7a(void)

void FUN_140db8a7a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acbd8f0;
  param_1[5] = &PTR_FUN_14acbdd70;
  param_1[6] = &PTR_LAB_14acbddb0;
  FUN_140db8b0b(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 140db8b0b FUN_140db8b0b body=49 status=ok
// SIG undefined FUN_140db8b0b(void)

void FUN_140db8b0b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140db8b3c FUN_140db8b3c body=45 status=ok
// SIG undefined FUN_140db8b3c(void)

undefined8 FUN_140db8b3c(undefined8 param_1,int param_2)

{
  FUN_140db8b6a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 140db8b6a FUN_140db8b6a body=928 status=ok
// SIG undefined FUN_140db8b6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140db8b6a(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ab5d3e0;
  plVar1 = param_1 + 0x3a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x3e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x3d)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x3d)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x33;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x37) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x36)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x36)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x2c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x30) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x2f)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x2f)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x23;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x27) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x26)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x26)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x1b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1e)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1e)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x13;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x17) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x16)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x16)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xc;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x10) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xf)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0xf)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 5;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 9) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 8)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 8)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar3 = (undefined8 *)param_1[1], puVar3 != (undefined8 *)0x0)) {
    if (puVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar3 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x000140db8e47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140db8f0a FUN_140db8f0a body=69 status=ok
// SIG undefined FUN_140db8f0a(void)

void FUN_140db8f0a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140db8f50(param_2);
  *param_2 = &PTR_FUN_14b95cec0;
  param_2[0x92] = 0;
  param_2[0x93] = 0;
  *(undefined8 *)((longlong)param_2 + 0x499) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4a1) = 0;
  param_2[0x96] = 0;
  param_2[0x97] = 0;
  *(undefined8 *)((longlong)param_2 + 0x4ba) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c2) = 0;
  *(undefined2 *)((longlong)param_2 + 0x24) = 0x201;
  return;
}



// FUNCTION 140db8f50 FUN_140db8f50 body=291 status=ok
// SIG undefined FUN_140db8f50(void)

undefined8 * FUN_140db8f50(undefined8 *param_1)

{
  FUN_1409e6bf8();
  *param_1 = &PTR_FUN_14b112240;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0x414e0001;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0x3f800000ffdf959d;
  param_1[0x78] = 0x4040000000000000;
  param_1[0x79] = 0x4040000000000000;
  param_1[0x7a] = 0x4040000000000000;
  param_1[0x7b] = 0x4230000041b00000;
  *(undefined4 *)(param_1 + 0x7c) = 0x41b00000;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x43fa0000;
  param_1[0x8e] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0x10;
  param_1[0x90] = 0;
  *(undefined1 *)(param_1 + 0x91) = 1;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x201;
  *(undefined4 *)(param_1 + 0x76) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2f9) = 1;
  return param_1;
}



// FUNCTION 140db9074 FUN_140db9074 body=115 status=ok
// SIG undefined FUN_140db9074(void)

undefined8 FUN_140db9074(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0x48) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x50), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        uVar6 = FUN_140db90e8(0);
        return uVar6;
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
    uVar6 = FUN_140db90e8(*(undefined8 *)(param_1 + 0x48));
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



// FUNCTION 140db90e8 FUN_140db90e8 body=133 status=ok
// SIG undefined FUN_140db90e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140db90e8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0x10) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        uVar6 = FUN_140672052(*(undefined8 *)(_DAT_00000010 + 8));
        return uVar6;
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
    uVar6 = FUN_140672052(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 8));
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



// FUNCTION 140db916e FUN_140db916e body=1121 status=ok
// SIG undefined FUN_140db916e(void)

void FUN_140db916e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar14 = (longlong *)(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x218) = 0;
  local_90 = param_2;
  if (*(int *)(param_1 + 0x21c) != 0) {
    FUN_1402191ca(plVar14,0);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x18);
    plVar10 = plVar11 + (longlong)*(int *)(param_1 + 0x20) * 2;
    local_a0 = plVar14;
    local_88 = param_1;
    do {
      plVar14 = (longlong *)*plVar11;
      plVar4 = (longlong *)plVar11[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (plVar14 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar14 + 8))(plVar14);
        lVar8 = FUN_140db95d0();
        if ((((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
             lVar8 + 0x30)) && (plVar14[6] != 0)) {
          FUN_140db960a(plVar14 + 6,&local_78);
          local_80 = local_70;
          if ((longlong)*(int *)(local_90 + 0x18) != 0) {
            local_98 = local_78;
            lVar7 = plVar14[2];
            plVar14 = *(longlong **)(local_90 + 0x10);
            lVar8 = (longlong)*(int *)(local_90 + 0x18) << 3;
            do {
              if (*plVar14 != 0) {
                puVar15 = *(undefined4 **)(*plVar14 + 8);
                if (puVar15 == (undefined4 *)0x0) {
                  puVar15 = &DAT_14c9485f0;
                }
                if (DAT_14c947fe0 == 0) {
                  lVar9 = FUN_14001cc68(0x140,0x10);
                  FUN_1456b2032(lVar9);
                  DAT_14c947fe0 = lVar9;
                }
                FUN_140045924(DAT_14c947fe0,&local_78,puVar15,1);
                if (local_78 == lVar7) {
                  if (plVar14 == (longlong *)0x0) break;
                  if (*(longlong *)(*plVar14 + 0x40) == DAT_14cbcc870) {
                    iVar13 = (int)uStack_50;
                    uVar6 = (int)uStack_50 + 1;
                    uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
                    if (uStack_50._4_4_ < uVar6) {
                      plVar14 = &local_58;
                      goto LAB_140db9338;
                    }
                    plVar14 = &local_58;
                  }
                  else {
                    if (*(longlong *)(*plVar14 + 0x40) != DAT_14cbcc878) break;
                    iVar13 = (uint)uStack_60;
                    uVar6 = (uint)uStack_60 + 1;
                    uStack_60 = CONCAT44(uStack_60._4_4_,uVar6);
                    if (uStack_60._4_4_ < uVar6) {
                      plVar14 = &local_68;
LAB_140db9338:
                      FUN_1446f84a2(plVar14,iVar13);
                    }
                    else {
                      plVar14 = &local_68;
                    }
                  }
                  *(undefined8 *)(*plVar14 + (longlong)iVar13 * 8) =
                       *(undefined8 *)(local_98 + 0x1d4);
                  break;
                }
              }
              plVar14 = plVar14 + 1;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
          plVar14 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar4 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
      plVar11 = plVar11 + 2;
    } while (plVar11 != plVar10);
    param_1 = local_88;
    plVar14 = local_a0;
    if (-1 < (char)((char)uStack_50 - 1U)) {
      uVar12 = (ulonglong)(byte)((char)uStack_50 - 1U);
      do {
        lVar7 = local_58;
        uVar6 = (uint)uStack_60 & 0xff;
        iVar13 = ~(uint)uStack_60 << 0x18;
        do {
          uVar6 = uVar6 - 1;
          if ((char)uVar6 < '\0') goto LAB_140db946e;
          uVar16 = (ulonglong)(uVar6 & 0x7f);
          iVar13 = iVar13 + 0x1000000;
        } while (*(longlong *)(local_58 + uVar12 * 8) != *(longlong *)(local_68 + uVar16 * 8));
        iVar3 = *(int *)(param_1 + 0x218);
        *(uint *)(param_1 + 0x218) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x21c) < iVar3 + 1U) {
          FUN_1446f84a2(local_a0,iVar3);
        }
        *(undefined8 *)(*local_a0 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar7 + uVar12 * 8);
        iVar13 = (iVar13 >> 0x18) + (uint)uStack_60;
        if (iVar13 != 0) {
          memmove((void *)(local_68 + uVar16 * 8),(void *)(local_68 + uVar16 * 8 + 8),
                  (longlong)iVar13 << 3);
        }
        uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 + -1);
        FUN_1406ce816();
        iVar13 = ~(uint)uVar12 + (int)uStack_50;
        if (iVar13 != 0) {
          memmove((void *)(local_58 + uVar12 * 8),(void *)(local_58 + uVar12 * 8 + 8),
                  (longlong)iVar13 << 3);
        }
        uStack_50 = CONCAT44(uStack_50._4_4_,(int)uStack_50 + -1);
        FUN_1406ce816();
        param_1 = local_88;
        plVar14 = local_a0;
LAB_140db946e:
        bVar5 = 0 < (longlong)uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar5);
    }
  }
  local_78 = FUN_140db9ae4();
  local_70 = (longlong *)param_1;
  FUN_140db9698(&local_78,&local_58,0);
  FUN_140db9698(&local_78,&local_68,1);
  FUN_140db9698(&local_78,plVar14,2);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140217c2a(param_1,local_90);
  return;
}



// FUNCTION 140db95d0 FUN_140db95d0 body=57 status=ok
// SIG undefined FUN_140db95d0(void)

void FUN_140db95d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4b90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4b90 = FUN_140002ddd(FUN_1465bfd96,uVar1,L"InventoryAugmentAspect");
  }
  return;
}



// FUNCTION 140db960a FUN_140db960a body=83 status=ok
// SIG undefined FUN_140db960a(void)

longlong * FUN_140db960a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140db965e();
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



// FUNCTION 140db965e FUN_140db965e body=57 status=ok
// SIG undefined FUN_140db965e(void)

void FUN_140db965e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4cb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4cb0 = FUN_140002ddd(FUN_1465bfdc5,uVar1,L"InventoryAugmentDef");
  }
  return;
}



// FUNCTION 140db9698 FUN_140db9698 body=1099 status=ok
// SIG undefined FUN_140db9698(void)

void FUN_140db9698(longlong *param_1,longlong *param_2,byte param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong *unaff_R13;
  longlong *plVar16;
  undefined4 uVar17;
  undefined1 auStack_138 [32];
  char *local_118;
  byte local_109;
  longlong local_108;
  uint local_fc;
  longlong *local_f8;
  char local_f0 [16];
  longlong *local_e0;
  undefined4 local_c8 [2];
  undefined4 local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_109 = param_3;
  if ((longlong)(int)param_2[1] != 0) {
    lVar3 = param_1[1];
    plVar16 = (longlong *)*param_2;
    local_f8 = plVar16 + (int)param_2[1];
    local_108 = lVar3 + 0x1e8;
    local_fc = (uint)param_3;
    do {
      lVar14 = *param_1;
      if (*(int *)(lVar14 + 0x90) != *(int *)(lVar14 + 0xbc)) {
        lVar10 = *plVar16;
        uVar6 = (uint)((ulonglong)lVar10 >> 0x10);
        uVar15 = (uint)lVar10 & 0xffff;
        lVar11 = lVar14 + 0xc0;
        if (*(longlong *)(lVar14 + 200) != 0) {
          lVar11 = *(longlong *)(lVar14 + 200);
        }
        iVar13 = *(int *)(lVar11 + (ulonglong)
                                   (*(int *)(lVar14 + 0xd0) - 1U &
                                   (int)((ulonglong)lVar10 >> 0x20) +
                                   ((uint)lVar10 << 0x10 | uVar15) +
                                   (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar15 >> 4)) * 4);
        if (iVar13 != -1) {
          do {
            plVar2 = (longlong *)(*(longlong *)(lVar14 + 0x88) + (longlong)iVar13 * 0x14);
            if (*plVar2 == lVar10) {
              if (plVar2 + 1 != (longlong *)0x0 && plVar2 != (longlong *)0x0) {
                iVar13 = (int)plVar2[1];
                while (iVar13 != -1) {
                  lVar14 = (longlong)iVar13 * 0x120 + *(longlong *)(*param_1 + 0x78);
                  if (local_109 == 2) {
                    lVar10 = lVar14 + 0x28;
                  }
                  else if (local_fc == 1) {
                    lVar10 = lVar14 + 200;
                  }
                  else {
                    lVar10 = lVar14 + 0x78;
                  }
                  local_f0[0] = '\0';
                  local_c8[0] = 0;
                  FUN_140217b36(local_f0,local_108);
                  FUN_1448729ea(lVar10,&local_c0,local_f0);
                  if (local_a0 == 3) {
                    uVar17 = local_c0;
                    bVar7 = 3;
                  }
                  else {
                    FUN_1400b56fe(&local_98,&local_c0,3);
                    uVar17 = 0x3f800000;
                    if (local_78 != 0) {
                      uVar17 = local_98;
                    }
                    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                                       (ulonglong)((uint)local_78 * 0x120));
                    if (pcVar4 != (code *)0x0) {
                      puVar12 = &local_98;
                      if (0x18 < local_80) {
                        puVar12 = (undefined4 *)CONCAT44(uStack_94,local_98);
                      }
                      (*pcVar4)(puVar12);
                    }
                    bVar7 = local_a0;
                    if (0x18 < local_80) {
                      FUN_1400020a8(CONCAT44(uStack_94,local_98));
                      bVar7 = local_a0;
                    }
                  }
                  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
                  if (pcVar4 != (code *)0x0) {
                    puVar12 = &local_c0;
                    if (0x18 < local_a8) {
                      puVar12 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
                    }
                    (*pcVar4)(puVar12);
                  }
                  if (0x18 < local_a8) {
                    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
                  }
                  FUN_1448173f8(local_c8);
                  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
                    LOCK();
                    piVar1 = (int *)((longlong)local_e0 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*local_e0 + 0x10))();
                    }
                  }
                  local_f0[0] = '\0';
                  unaff_R13 = (longlong *)
                              CONCAT71((int7)((ulonglong)unaff_R13 >> 8),*(char *)(lVar14 + 0x20));
                  plVar2 = (longlong *)(lVar14 + 8);
                  lVar10 = *(longlong *)(lVar14 + 0x10);
                  if (*(char *)(lVar14 + 0x20) == '\x04') {
                    if (lVar10 == 0) {
                      uVar9 = FUN_14016979c();
                      lVar10 = FUN_14477b664(uVar9);
                      *(longlong *)(lVar14 + 0x10) = lVar10;
                    }
                    lVar11 = *(longlong *)(lVar14 + 0x18);
                    if (lVar11 == 0) {
                      if (lVar10 == 0 || *plVar2 == 0) {
                        lVar11 = 0;
                      }
                      else {
                        unaff_R13 = *(longlong **)(lVar10 + 0xb8);
                        if ((unaff_R13 == (longlong *)0x0) ||
                           (cVar8 = (**(code **)(*unaff_R13 + 0x108))(unaff_R13), cVar8 == '\0')) {
                          lVar11 = 0;
                        }
                        else {
                          uVar9 = (**(code **)(*unaff_R13 + 0x110))(unaff_R13);
                          lVar11 = FUN_144aff482(uVar9,plVar2);
                        }
                        *(longlong *)(lVar14 + 0x18) = lVar11;
                      }
                    }
                    FUN_1407cace8(lVar3,lVar11,uVar17,1);
                  }
                  else {
                    if (lVar10 == 0) {
                      uVar9 = FUN_14016979c();
                      lVar10 = FUN_14477b664(uVar9);
                      *(longlong *)(lVar14 + 0x10) = lVar10;
                    }
                    lVar11 = *(longlong *)(lVar14 + 0x18);
                    if (lVar11 == 0) {
                      if (lVar10 == 0 || *plVar2 == 0) {
                        lVar11 = 0;
                      }
                      else {
                        plVar5 = *(longlong **)(lVar10 + 0xb8);
                        if ((plVar5 == (longlong *)0x0) ||
                           (cVar8 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar8 == '\0')) {
                          lVar11 = 0;
                        }
                        else {
                          uVar9 = (**(code **)(*plVar5 + 0x110))(plVar5);
                          lVar11 = FUN_144aff482(uVar9,plVar2);
                        }
                        *(longlong *)(lVar14 + 0x18) = lVar11;
                      }
                    }
                    local_118 = local_f0;
                    FUN_14021808c(lVar3,lVar11,(ulonglong)unaff_R13 & 0xffffffff,uVar17);
                  }
                  iVar13 = *(int *)(lVar14 + 0x118);
                }
              }
              break;
            }
            iVar13 = *(int *)((longlong)plVar2 + 0xc);
          } while (iVar13 != -1);
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != local_f8);
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140db9ae4 FUN_140db9ae4 body=442 status=ok
// SIG undefined FUN_140db9ae4(void)

longlong * FUN_140db9ae4(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbcc790 == (longlong *)0x0) {
    memset(&DAT_14cbcc798,0,0xd8);
    FUN_145bd83a8(&DAT_14cbcc798);
    DAT_14cbcc790 = (longlong *)&DAT_14cbcc798;
  }
  plVar1 = DAT_14cbcc790;
  plVar4 = DAT_14cbcc790 + 1;
  cVar2 = (char)DAT_14cbcc790[2];
  plVar5 = plVar4;
  if (cVar2 == '\0') {
LAB_140db9b18:
    if (*plVar5 == 0) goto LAB_140db9bf1;
    plVar5 = plVar4;
    if (cVar2 == '\0') {
LAB_140db9b29:
      if (*plVar5 == 0) goto LAB_140db9b92;
      if ((((int)DAT_14cbcc790[3] == *(int *)(*plVar5 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         ((*plVar4 == 0 ||
          (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar4 + 0x28)),
          plVar4 == (longlong *)0x0)))) goto LAB_140db9b3d;
      cVar2 = (**(code **)(*plVar4 + 0x2a8))(plVar4,plVar1);
    }
    else {
      if (cVar2 == '\x02') {
        plVar5 = (longlong *)(*plVar4 + 0x30);
        goto LAB_140db9b29;
      }
LAB_140db9b92:
      if (((DAT_14c9a1ab0 == 0) || (*plVar4 == 0)) ||
         (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar4 + 0x28)),
         plVar4 == (longlong *)0x0)) goto LAB_140db9b3d;
      puVar6 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar4 + 0x2a0))(plVar4,plVar1,puVar6);
    }
    if (cVar2 == '\0') goto LAB_140db9b3d;
  }
  else {
    if (cVar2 == '\x02') {
      plVar5 = (longlong *)(*plVar4 + 0x30);
      goto LAB_140db9b18;
    }
LAB_140db9bf1:
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_140db9b3d;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_shield",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_140db9b3d:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 140db9ca0 FUN_140db9ca0 body=423 status=ok
// SIG undefined FUN_140db9ca0(void)

void FUN_140db9ca0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_88 [44];
  int local_5c;
  longlong local_58;
  int *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x88);
  FUN_140171a5c(plVar1,0);
  local_5c = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x118 + (longlong)local_5c * 0x120) =
           0xffffffff;
      lVar3 = *(longlong *)(param_1 + 0x78);
      if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
        lVar5 = *(longlong *)(lVar3 + (longlong)local_5c * 0x120);
        uVar4 = (uint)((ulonglong)lVar5 >> 0x10);
        uVar8 = (uint)lVar5 & 0xffff;
        lVar7 = *(longlong *)(param_1 + 200);
        if (*(longlong *)(param_1 + 200) == 0) {
          lVar7 = param_1 + 0xc0;
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)
                                 (*(int *)(param_1 + 0xd0) - 1U &
                                 (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar8) +
                                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar6 != -1) {
LAB_140db9d9f:
          plVar2 = (longlong *)(*plVar1 + (longlong)iVar6 * 0x14);
          if (*plVar2 != lVar5) goto code_r0x000140db9daf;
          if (plVar2 != (longlong *)0x0) {
            iVar6 = (int)plVar2[1];
            do {
              lVar5 = (longlong)iVar6;
              iVar6 = *(int *)(lVar3 + 0x118 + lVar5 * 0x120);
            } while (iVar6 != -1);
            *(int *)(lVar3 + lVar5 * 0x120 + 0x118) = local_5c;
            goto LAB_140db9ddc;
          }
        }
      }
LAB_140db9db9:
      local_58 = lVar3 + (longlong)local_5c * 0x120;
      local_50 = &local_5c;
      FUN_140171856(plVar1,local_44,&local_58,0);
LAB_140db9ddc:
      local_5c = local_5c + 1;
    } while (local_5c < *(int *)(param_1 + 0x80));
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140db9daf:
  iVar6 = *(int *)((longlong)plVar2 + 0xc);
  if (iVar6 == -1) goto LAB_140db9db9;
  goto LAB_140db9d9f;
}



// FUNCTION 140db9e56 FUN_140db9e56 body=124 status=ok
// SIG undefined FUN_140db9e56(void)

undefined8 * FUN_140db9e56(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a442710;
  FUN_1408f8ca5(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140db9ed2 FUN_140db9ed2 body=215 status=ok
// SIG undefined FUN_140db9ed2(void)

undefined4 FUN_140db9ed2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140db9faa();
  if ((char)uVar1 != '\0') {
    *(undefined2 *)(param_2 + 0xdc) = *(undefined2 *)(param_1 + 0xdc);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
    FUN_14093c00e(param_2 + 0xe0,param_1 + 0xe0);
    *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_1 + 0x158);
    *(undefined2 *)(param_2 + 0x15c) = *(undefined2 *)(param_1 + 0x15c);
    FUN_14093c00e(param_2 + 0x160,param_1 + 0x160);
    *(undefined4 *)(param_2 + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
    *(undefined2 *)(param_2 + 0x1dc) = *(undefined2 *)(param_1 + 0x1dc);
    FUN_14093c00e(param_2 + 0x1e0,param_1 + 0x1e0);
    *(undefined4 *)(param_2 + 600) = *(undefined4 *)(param_1 + 600);
    *(undefined2 *)(param_2 + 0x25c) = *(undefined2 *)(param_1 + 0x25c);
    FUN_14093c00e(param_2 + 0x260,param_1 + 0x260);
  }
  return uVar1;
}



// FUNCTION 140db9faa FUN_140db9faa body=254 status=ok
// SIG undefined FUN_140db9faa(void)

ulonglong FUN_140db9faa(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  
  if ((param_2 == (longlong *)0x0) || (param_2[2] != param_1[2])) {
    uVar3 = 0;
  }
  else {
    *(uint *)((longlong)param_2 + 0x5c) =
         *(uint *)((longlong)param_2 + 0x5c) & 0xfffffffe | *(uint *)((longlong)param_1 + 0x5c) & 1;
    if (param_2 != param_1) {
      iVar1 = (int)param_1[8];
      _Src = (void *)param_1[7];
      *(int *)(param_2 + 8) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)param_2 + 0x44) == 0) {
        *(undefined4 *)((longlong)param_2 + 0x44) = 0;
      }
      else {
        FUN_1447c510a(param_2 + 7,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)param_2[7],_Src,(longlong)iVar1 << 2);
        }
      }
    }
    *(int *)(param_2 + 9) = (int)param_1[9];
    *(undefined4 *)((longlong)param_2 + 0x4c) = *(undefined4 *)((longlong)param_1 + 0x4c);
    *(int *)(param_2 + 10) = (int)param_1[10];
    *(undefined4 *)((longlong)param_2 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x54);
    uVar2 = *(uint *)(param_2 + 6);
    *(uint *)((longlong)param_2 + 0x5c) =
         *(uint *)((longlong)param_2 + 0x5c) & 0xfffffffd | *(uint *)((longlong)param_1 + 0x5c) & 2;
    param_2[0xc] = param_1[0xc];
    *(uint *)(param_2 + 6) = uVar2 | 1;
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((~uVar2 & 4) == 0) {
      (**(code **)(*param_2 + 0x428))(param_2);
      *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfe;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 140dba0a8 FUN_140dba0a8 body=311 status=ok
// SIG undefined FUN_140dba0a8(void)

undefined4 * FUN_140dba0a8(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402ba9e4(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_140dba1e0(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140dba25c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dba1e0 FUN_140dba1e0 body=124 status=ok
// SIG undefined FUN_140dba1e0(void)

undefined8 FUN_140dba1e0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_14701a870(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 140dba25c FUN_140dba25c body=670 status=ok
// SIG undefined FUN_140dba25c(void)

void FUN_140dba25c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_140dba2cf;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_140dba2cf:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 140dba502 FUN_140dba502 body=959 status=ok
// SIG undefined FUN_140dba502(void)

undefined8 * FUN_140dba502(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = FUN_14007ca06();
  FUN_1406ed334(param_1,uVar4);
  *param_1 = &PTR_FUN_14acb0e10;
  plVar5 = (longlong *)FUN_14001cc68(0x128);
  memset(plVar5,0,0x128);
  *(undefined1 *)(plVar5 + 8) = 2;
  *(undefined1 *)(plVar5 + 9) = 2;
  *(undefined4 *)((longlong)plVar5 + 0x5c) = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  plVar5[0x10] = 0;
  FUN_140942716(plVar5 + 0x10);
  plVar5[0x13] = 0;
  plVar5[0x11] = 0;
  plVar5[0x12] = 0;
  FUN_140942716(plVar5 + 0x13);
  InitializeCriticalSection((LPCRITICAL_SECTION)(plVar5 + 0x14));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar5 + 0x14),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(plVar5 + 0x19));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar5 + 0x19),4000);
  plVar5[0x1e] = 0;
  *(undefined4 *)(plVar5 + 0x1f) = 100;
  *(undefined4 *)((longlong)plVar5 + 0xfc) = 0xbf800000;
  *(undefined4 *)(plVar5 + 0x20) = 0xbf800000;
  *(undefined4 *)((longlong)plVar5 + 0x104) = 0xbf800000;
  *(undefined4 *)(plVar5 + 0x21) = 0x3f800000;
  *(undefined2 *)((longlong)plVar5 + 0x10c) = 1;
  *(undefined1 *)((longlong)plVar5 + 0x10e) = 0;
  *(undefined4 *)(plVar5 + 0x22) = 0;
  plVar5[0x23] = 0;
  *(undefined4 *)(plVar5 + 0x24) = 0xbf800000;
  param_1[0x1f] = plVar5;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14acb1640;
  plVar6[2] = (longlong)plVar5;
  param_1[0x20] = plVar6;
  if ((plVar5 != (longlong *)0x0) &&
     (((*plVar5 == 0 || (plVar5[1] == 0)) || (*(int *)(plVar5[1] + 8) < 1)))) {
    if (plVar6 == (longlong *)0x0) {
      *plVar5 = (longlong)plVar5;
      plVar8 = (longlong *)plVar5[1];
      if (plVar8 != (longlong *)0x0) {
LAB_140dba885:
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        plVar5[1] = (longlong)plVar6;
        if (plVar6 != (longlong *)0x0) goto LAB_140dba6a5;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      *plVar5 = (longlong)plVar5;
      if ((longlong *)plVar5[1] != plVar6) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar5[1];
        if (plVar8 != (longlong *)0x0) goto LAB_140dba885;
        plVar5[1] = (longlong)plVar6;
      }
LAB_140dba6a5:
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 100;
  *(undefined1 *)(param_1 + 0x22) = 1;
  FUN_1400b22c2(param_1 + 0x23,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  FUN_140942716(param_1 + 0x2e);
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  FUN_140942716(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x31) = 0xbf800000;
  if (DAT_14cb253f8 == 0) {
    local_70 = &local_58;
    local_58 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_78 = &LAB_147f6f09d;
    local_80 = &LAB_146201c25;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000006;
    local_a0 = 8;
    local_a8 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  lVar2 = DAT_14cb253f8;
  lVar7 = *(longlong *)(DAT_14cb253f8 + 0x110);
  if (lVar7 == 0) {
    FUN_140aa6c08(DAT_14cb253f8);
    lVar7 = *(longlong *)(lVar2 + 0x110);
    if (lVar7 == 0) {
      uVar3 = 0;
      goto LAB_140dba766;
    }
  }
  uVar3 = *(undefined1 *)(lVar7 + 0x2f4);
LAB_140dba766:
  *(undefined1 *)(param_1 + 0x22) = uVar3;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140dba8c2 FUN_140dba8c2 body=88 status=ok
// SIG undefined FUN_140dba8c2(void)

void FUN_140dba8c2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    plVar1 = (longlong *)param_1[2];
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
    }
    if (lVar2 == *plVar1) break;
    lVar2 = FUN_140dba96c(*(undefined8 *)*param_1);
    *param_1 = lVar2;
    FUN_140dba91a(param_1);
    lVar2 = *param_1;
  }
  return;
}



// FUNCTION 140dba91a FUN_140dba91a body=81 status=ok
// SIG undefined FUN_140dba91a(void)

void FUN_140dba91a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    lVar2 = *(longlong *)(lVar2 + 0x10);
    lVar1 = FUN_1407fbe78();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) break;
    lVar2 = FUN_140dba96c(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140dba96c FUN_140dba96c body=122 status=ok
// SIG undefined FUN_140dba96c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140dba96c(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_140dba9ba:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_140dba9ba;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 140dba9e6 FUN_140dba9e6 body=173 status=ok
// SIG undefined FUN_140dba9e6(void)

void FUN_140dba9e6(longlong param_1,ushort param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_2 + 1;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar6 = iVar4 - iVar2;
  if (iVar6 == 0 || iVar4 < iVar2) goto LAB_140dbaa5c;
  if (iVar2 == 0) {
LAB_140dbaa21:
    if (*(int *)(param_1 + 0x24) <= (int)(uint)param_2) {
      *(undefined4 *)(param_1 + 0x24) = 0x100;
      FUN_14497ddce(param_1,iVar2);
      iVar4 = *(int *)(param_1 + 0x20) + iVar6;
    }
    iVar5 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
    *(int *)(param_1 + 0x20) = iVar4;
    if (iVar4 % 0x20 != 0) {
      bVar3 = -(char)(iVar4 % 0x20);
      *(uint *)(param_1 + (longlong)(iVar5 >> 5) * 4) =
           (uint)(*(int *)(param_1 + (longlong)(iVar5 >> 5) * 4) << (bVar3 & 0x1f)) >>
           (bVar3 & 0x1f);
    }
  }
  else {
    iVar5 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar5 = iVar2 + -1;
    }
    if (iVar5 >> 5 != (uint)(param_2 >> 5)) goto LAB_140dbaa21;
    *(int *)(param_1 + 0x20) = iVar4;
  }
  FUN_1447c45ca(param_1,iVar2,iVar6,0);
LAB_140dbaa5c:
  puVar1 = (uint *)(param_1 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  return;
}



// FUNCTION 140dbaa93 FUN_140dbaa93 body=323 status=ok
// SIG undefined FUN_140dbaa93(void)

undefined8 FUN_140dbaa93(longlong *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  longlong local_80 [2];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == (longlong *)0x0) {
    uVar7 = 0xbf800000;
    uVar8 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x308))();
    uVar7 = 0;
    uVar8 = 0;
    if (0 < *(int *)(lVar3 + 0x28)) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        local_88 = *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + lVar5);
        FUN_1400021e4(&local_88,local_80);
        iVar1 = DAT_14caddd78 + -1;
        if (DAT_14caddd78 == 0) {
          iVar1 = 0;
        }
        puVar4 = &DAT_149dfb77a;
        if (DAT_14caddd78 != 0) {
          puVar4 = DAT_14caddd70;
        }
        cVar2 = FUN_144a38768(local_80,puVar4,iVar1,1);
        if (cVar2 != '\0') {
          local_88 = local_88 & 0xffffffff00000000;
          FUN_140d50689(lVar3,lVar3 + 0x30,uVar6 & 0xffffffff,&local_88);
          unaff_XMM7_Db = 0;
          unaff_XMM7_Da = (undefined4)local_88;
        }
        if (local_80[0] != 0) {
          FUN_1400020a8();
        }
        uVar7 = unaff_XMM7_Da;
        uVar8 = unaff_XMM7_Db;
        if (cVar2 != '\0') break;
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0xc;
        uVar7 = 0;
        uVar8 = 0;
      } while ((longlong)uVar6 < (longlong)*(int *)(lVar3 + 0x28));
    }
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar8,uVar7);
}



// FUNCTION 140dbabd8 FUN_140dbabd8 body=187 status=ok
// SIG undefined FUN_140dbabd8(void)

ulonglong FUN_140dbabd8(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (lVar4 = *(longlong *)(lVar2 + 0x1f0), lVar4 != 0)) {
    lVar3 = FUN_140dbac94(lVar4);
    if (lVar3 != 0) {
      lVar4 = FUN_140dbafcc(lVar4);
      if (lVar4 != 0) {
        lVar2 = FUN_1400f6f32(lVar2);
        if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x68), lVar2 != 0)) {
          param_2 = param_2 + 0x18;
          lVar4 = FUN_140bccd38(lVar2,param_2);
          if (lVar4 != 0) {
            uVar1 = FUN_140def96c(lVar2,param_2);
            lVar2 = FUN_140dbae30(lVar4);
            uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
            if (lVar2 != 0) {
              FUN_140dbb1ea(lVar2,param_4,param_5,uVar1);
            }
            goto LAB_140dbac83;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_140dbac83:
  return uVar5 & 0xffffffff;
}



// FUNCTION 140dbac94 FUN_140dbac94 body=105 status=ok
// SIG undefined FUN_140dbac94(void)

void FUN_140dbac94(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140dbad4a();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140dbacfe(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dbacfe FUN_140dbacfe body=76 status=ok
// SIG undefined FUN_140dbacfe(void)

void FUN_140dbacfe(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140dbad4a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140dbad3b;
    }
  }
  lVar2 = 0;
LAB_140dbad3b:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140dbad4a FUN_140dbad4a body=228 status=ok
// SIG undefined FUN_140dbad4a(void)

longlong FUN_140dbad4a(void)

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
  if (DAT_14cbb1b50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14656bf7a;
    local_38 = &LAB_148c534f3;
    local_40 = FUN_1459a1c28;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUICoherentSubsystem",&DAT_14cbb1b50,&DAT_148c534f2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb1b50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dbae30 FUN_140dbae30 body=105 status=ok
// SIG undefined FUN_140dbae30(void)

void FUN_140dbae30(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140dbaee6();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140dbae9a(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dbae9a FUN_140dbae9a body=76 status=ok
// SIG undefined FUN_140dbae9a(void)

void FUN_140dbae9a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140dbaee6();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140dbaed7;
    }
  }
  lVar2 = 0;
LAB_140dbaed7:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140dbaee6 FUN_140dbaee6 body=228 status=ok
// SIG undefined FUN_140dbaee6(void)

longlong FUN_140dbaee6(void)

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
  if (DAT_14cbb2100 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_1411b127e;
    local_38 = &LAB_148c5876b;
    local_40 = FUN_1465f4c2f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_CrosshairSettings",&DAT_14cbb2100,
                  &DAT_148c5876a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb2100;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dbafcc FUN_140dbafcc body=540 status=ok
// SIG undefined FUN_140dbafcc(void)

undefined8 FUN_140dbafcc(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    if (DAT_14cb92088 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = &LAB_1417ad04a;
      local_38 = &LAB_14107a1fc;
      local_48 = &LAB_1489f8be7;
      local_50 = FUN_14656bf51;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x38;
      FUN_14081cfa3(L"/Script/GbxUICoherent",L"GbxUICoherentSubsystem",&DAT_14cb92088,&DAT_1489f8be6
                   );
    }
    lVar1 = DAT_14cb92088;
    if ((DAT_14cb92088 == 0) || (DAT_14c950c29 == '\0')) {
      if (DAT_14cb92088 != 0) goto LAB_140dbb024;
LAB_140dbb1e2:
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c(DAT_14cb92088);
      if (DAT_14cb92088 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = &LAB_1417ad04a;
        local_38 = &LAB_14107a1fc;
        local_48 = &LAB_1489f8be7;
        local_50 = FUN_14656bf51;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000000;
        local_70 = 8;
        local_78 = 0x38;
        FUN_14081cfa3(L"/Script/GbxUICoherent",L"GbxUICoherentSubsystem",&DAT_14cb92088,
                      &DAT_1489f8be6);
        if (DAT_14cb92088 == 0) goto LAB_140dbb1e2;
      }
LAB_140dbb024:
      if (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cb92088 + 0x38)) goto LAB_140dbb1e2;
      lVar3 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb92088 + 0x38) * 8)
          == DAT_14cb92088 + 0x30) {
        lVar3 = lVar1;
      }
    }
    lVar1 = FUN_1448a6f9c(param_1 + 0x100,lVar3);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x30);
      goto LAB_140dbb058;
    }
  }
  uVar2 = 0;
LAB_140dbb058:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 140dbb1ea FUN_140dbb1ea body=782 status=ok
// SIG undefined FUN_140dbb1ea(void)

void FUN_140dbb1ea(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_50;
  longlong *local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1402815f4(param_1,&local_50);
  lVar4 = *(longlong *)(local_50 + 0x4e0);
  AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x40));
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)local_48 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if (((byte *)*param_3 == (byte *)0x0) || ((*(byte *)*param_3 & 3) == 0)) {
    FUN_14009b010(param_3,3,0);
  }
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  FUN_14009b010(&local_68,2,0);
  FUN_140dbb4fa(&local_68,lVar4);
  local_78 = DAT_14cbd60e0;
  local_70 = DAT_14cbd60e8;
  FUN_1448075d0(&local_50);
  if (*param_3 != 0) {
    local_c8 = 0;
    FUN_14014191c(*param_3,&local_50,&local_68,0);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  FUN_14009b010(&local_88,2,0);
  FUN_140dbb4fa(&local_88,lVar4 + 0x14);
  local_98 = DAT_14cbd60ec;
  local_90 = DAT_14cbd60f4;
  FUN_1448075d0(&local_50);
  if (*param_3 != 0) {
    local_c8 = 0;
    FUN_14014191c(*param_3,&local_50,&local_88,0);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  FUN_14009b010(&local_a8,2,0);
  FUN_140dbb4fa(&local_a8,lVar4 + 0x28);
  local_b8 = DAT_14cbd60f8;
  local_b0 = DAT_14cbd6100;
  FUN_1448075d0(&local_50);
  if (*param_3 != 0) {
    local_c8 = 0;
    FUN_14014191c(*param_3,&local_50,&local_a8,0);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  plVar1 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_a0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_80 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x40));
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dbb4fa FUN_140dbb4fa body=550 status=ok
// SIG undefined FUN_140dbb4fa(void)

void FUN_140dbb4fa(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((byte *)*param_1 != (byte *)0x0) && ((*(byte *)*param_1 & 3) == 2)) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    FUN_14009b010(&local_38,1,0);
    if (local_38 != 0) {
      FUN_1406111c2(local_38,*param_2);
    }
    if (*param_1 != 0) {
      local_78 = 0;
      FUN_140141db6(*param_1,&local_38,0,0);
    }
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_14009b010(&local_48,1,0);
    if (local_48 != 0) {
      FUN_1406111c2(local_48,param_2[1]);
    }
    if (*param_1 != 0) {
      local_78 = 0;
      FUN_140141db6(*param_1,&local_48,0,0);
    }
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    FUN_14009b010(&local_58,1,0);
    if (local_58 != 0) {
      FUN_1406111c2(local_58,param_2[2]);
    }
    if (*param_1 != 0) {
      local_78 = 0;
      FUN_140141db6(*param_1,&local_58,0,0);
    }
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    FUN_14009b010(&local_68,1,0);
    if (local_68 != 0) {
      FUN_1406111c2(local_68,param_2[3]);
    }
    if (*param_1 != 0) {
      local_78 = 0;
      FUN_140141db6(*param_1,&local_68,0,0);
    }
    plVar3 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
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
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
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
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dbb721 FUN_140dbb721 body=19 status=ok
// SIG undefined FUN_140dbb721(void)

void FUN_140dbb721(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 140dbb734 FUN_140dbb734 body=150 status=ok
// SIG undefined FUN_140dbb734(void)

undefined8 FUN_140dbb734(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1403de9f2(param_2,&local_28,&DAT_149e0635c,1);
  if ((int)uStack_20 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140dbce66(*(undefined8 *)(param_1 + 0x10),&local_28,0);
  }
  FUN_1447a1747(local_28,(int)uStack_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dbb7cc FUN_140dbb7cc body=79 status=ok
// SIG undefined FUN_140dbb7cc(void)

void FUN_140dbb7cc(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0x110) == '\x01') {
    FUN_140ae8660(param_1 + 0x60);
  }
  FUN_140ae8062(param_1 + 0x100,param_2,param_3,param_3,param_4);
  return;
}



// FUNCTION 140dbb81c FUN_140dbb81c body=664 status=ok
// SIG undefined FUN_140dbb81c(void)

int * FUN_140dbb81c(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar14) {
      FUN_144869a3c(param_1,iVar14);
    }
    iVar15 = (int)param_1[5];
    if (iVar15 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar5 = iVar15 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar10 = param_1 + 2;
    iVar9 = iVar15 + 1;
    iVar13 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar13 = iVar15;
    }
    if (iVar13 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar15) {
        if (iVar15 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar5 = iVar15;
        }
        else {
          uVar8 = iVar15 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar16 = 4;
            if (4 < uVar8) {
              uVar16 = uVar8;
            }
          }
          else {
            uVar16 = (uVar8 * 3 >> 3) + uVar8 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar16 << 2,0);
          iVar5 = (int)(uVar11 >> 2);
          iVar9 = -0x20;
          if ((int)uVar8 <= iVar5) {
            iVar9 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar10,iVar5);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar5 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar5 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar12 = plVar10;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar14;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar15 & 0x1f;
    puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar13 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar14 = (int)param_1[6];
    lVar6 = (longlong)iVar14;
    iVar15 = *(int *)(*param_1 + 4 + lVar6 * 0x10);
    *(int *)(param_1 + 6) = iVar15;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar15 * 0x10) = 0xffffffff;
    }
  }
  iVar15 = 1;
  plVar10 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[4];
  }
  iVar5 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar5 = iVar14;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  lVar2 = *param_1;
  lVar6 = lVar6 * 0x10;
  puVar3 = (undefined2 *)param_3[1];
  uVar8 = *(uint *)*param_3;
  *(uint *)(lVar2 + lVar6) = uVar8;
  *(undefined2 *)(lVar2 + 4 + lVar6) = *puVar3;
  *(undefined4 *)(lVar2 + 8 + lVar6) = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar16) {
    uVar11 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar15 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar16 < 1) || (iVar15 <= (int)param_1[9])) {
    uVar8 = (int)param_1[9] - 1U & uVar8;
    *(uint *)(lVar2 + lVar6 + 0xc) = uVar8;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(lVar2 + lVar6 + 8) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    FUN_140dbbdfe(param_1);
  }
  *param_2 = iVar14;
  return param_2;
}



// FUNCTION 140dbbab4 FUN_140dbbab4 body=362 status=ok
// SIG undefined FUN_140dbbab4(void)

longlong *
FUN_140dbbab4(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 local_3e;
  char local_3c;
  char local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *param_4;
  uStack_54 = param_4[1];
  uStack_50 = param_4[2];
  uStack_4c = param_4[3];
  FUN_140d4d2ba(&local_3e);
  if (local_3a == '\x01') {
    if (local_3c == '\x01') {
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)param_1 = local_3e;
      *(undefined1 *)(param_1 + 3) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 2) = 0;
      *(undefined2 *)param_1 = local_3e;
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  else {
    FUN_1400021e4(param_3 + 1,local_68);
    plVar5 = (longlong *)FUN_14001cc68(0x88,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14a4758c0;
    plVar1 = plVar5 + 2;
    FUN_140e13128(plVar1,*param_3,local_68);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    lVar6 = FUN_1406f9508(plVar1,param_2);
    if (lVar6 == 0) {
      uVar4 = 0;
    }
    else {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      *(undefined1 *)(param_1 + 2) = 2;
      *param_1 = (longlong)plVar1;
      param_1[1] = (longlong)plVar5;
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 3) = uVar4;
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
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dbbc20 FUN_140dbbc20 body=325 status=ok
// SIG undefined FUN_140dbbc20(void)

void FUN_140dbbc20(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dbbd66 FUN_140dbbd66 body=151 status=ok
// SIG undefined FUN_140dbbd66(void)

void FUN_140dbbd66(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_140dbbd99;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_140dbbd99:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(short *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       param_1[1];
  if ((char)param_1[2] == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140dbbdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140dbbdfe FUN_140dbbdfe body=640 status=ok
// SIG undefined FUN_140dbbdfe(void)

void FUN_140dbbdfe(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_140dbbe61;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_140dbbe61:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 140dbc07e FUN_140dbc07e body=353 status=ok
// SIG undefined FUN_140dbc07e(void)

void FUN_140dbc07e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140dbc103;
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
LAB_140dbc103:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140dbc1e0 FUN_140dbc1e0 body=302 status=ok
// SIG undefined FUN_140dbc1e0(void)

void FUN_140dbc1e0(longlong param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  char cVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  
  uVar1 = param_3[8] + 0x1f;
  iVar10 = -1;
  if (0x1f < uVar1) {
    lVar9 = 0;
    puVar11 = param_3;
    do {
      uVar4 = *puVar11;
      if (uVar4 != 0) {
        iVar8 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> iVar8 & 1) == 0; iVar8 = iVar8 + 1) {
          }
        }
        iVar8 = iVar8 - (int)lVar9;
        if (iVar8 < (int)param_3[8]) {
          iVar10 = iVar8;
        }
        break;
      }
      lVar9 = lVar9 + -0x20;
      puVar11 = puVar11 + 1;
    } while ((ulonglong)(uVar1 & 0xffffffe0) + lVar9 != 0);
  }
  lVar9 = *(longlong *)(param_1 + 0x98);
  uVar12 = (ulonglong)(ushort)param_2;
  uVar2 = *(ushort *)(lVar9 + uVar12 * 8);
  if (uVar2 == 0xffff) {
    if (iVar10 == -1) {
      return;
    }
  }
  else {
    cVar5 = FUN_1403b8874((ulonglong)((uint)uVar2 * 0x28) + *(longlong *)(param_1 + 8),param_3,0);
    if (cVar5 != '\0') {
      return;
    }
    if (iVar10 == -1) {
      FUN_145721252(param_1,*(undefined2 *)(lVar9 + uVar12 * 8),
                    *(undefined2 *)(lVar9 + 2 + uVar12 * 8));
      *(undefined4 *)(lVar9 + uVar12 * 8) = 0xffff;
      return;
    }
  }
  uVar7 = FUN_14055ca2e(param_1,param_3,0);
  sVar3 = *(short *)(lVar9 + uVar12 * 8);
  if (sVar3 == -1) {
    uVar6 = FUN_1449dfe96(param_1,uVar7,param_2,1);
  }
  else {
    uVar6 = FUN_14055cf42(param_1,uVar7,sVar3,*(undefined2 *)(lVar9 + 2 + uVar12 * 8));
  }
  *(short *)(lVar9 + uVar12 * 8) = (short)uVar7;
  *(undefined2 *)(lVar9 + 2 + uVar12 * 8) = uVar6;
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
  *(undefined1 *)(param_1 + 0x261) = 1;
  return;
}



// FUNCTION 140dbc30e FUN_140dbc30e body=1646 status=ok
// SIG undefined FUN_140dbc30e(void)

void FUN_140dbc30e(longlong param_1,longlong param_2)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  int *piVar18;
  int iVar19;
  undefined1 auStack_188 [39];
  char local_161;
  longlong local_160;
  int local_158;
  int local_154;
  ulonglong local_150;
  longlong local_148;
  longlong local_140;
  ulonglong local_138;
  uint *local_130;
  longlong local_128;
  int local_120;
  int local_114;
  undefined2 local_110;
  ushort local_10e [4];
  ushort local_106;
  undefined1 local_103;
  undefined4 local_100;
  undefined1 local_fc;
  uint local_f8 [8];
  undefined8 local_d8;
  uint local_d0 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_78;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x1b8) + 0x58);
  iVar13 = uVar2 + 1;
  uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x1b8) + 0x5c);
  local_103 = 0;
  local_100 = 0x6ff;
  local_fc = 0;
  local_d8 = 0x10000000000;
  local_b0 = 0x10000000000;
  local_78 = 0x10000000000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_50 = 0x10000000000;
  iVar9 = iVar13;
  local_160 = param_2;
  local_106 = uVar2;
  if (0xff < uVar2) {
    FUN_14497ddce(local_f8,0);
    iVar9 = (int)local_d8 + iVar13;
  }
  iVar4 = iVar9 + 0x1f;
  if (-1 < iVar9) {
    iVar4 = iVar9;
  }
  local_d8 = CONCAT44(local_d8._4_4_,iVar9);
  if (iVar9 % 0x20 != 0) {
    bVar8 = -(char)(iVar9 % 0x20);
    local_f8[iVar4 >> 5] = (local_f8[iVar4 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
  }
  FUN_1447c45ca(local_f8,0,iVar13,0);
  local_f8[uVar2 >> 5] = local_f8[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
  uVar16 = local_b0;
  iVar9 = uVar3 + 1;
  iVar13 = iVar9 - (int)local_b0;
  if (iVar13 == 0 || iVar9 < (int)local_b0) goto LAB_140dbc48c;
  if ((int)local_b0 == 0) {
LAB_140dbc43c:
    if (local_b0._4_4_ <= (int)(uint)uVar3) {
      local_b0 = CONCAT44(0x100,(int)local_b0);
      FUN_14497ddce(local_d0,uVar16 & 0xffffffff);
      iVar9 = (int)local_b0 + iVar13;
    }
    iVar4 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar4 = iVar9;
    }
    local_b0 = CONCAT44(local_b0._4_4_,iVar9);
    if (iVar9 % 0x20 != 0) {
      bVar8 = -(char)(iVar9 % 0x20);
      local_d0[iVar4 >> 5] = (local_d0[iVar4 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
    }
  }
  else {
    iVar4 = (int)local_b0 + 0x1e;
    if (-1 < (int)local_b0 + -1) {
      iVar4 = (int)local_b0 + -1;
    }
    if (iVar4 >> 5 != (uint)(uVar3 >> 5)) goto LAB_140dbc43c;
    local_b0 = CONCAT44(local_b0._4_4_,iVar9);
  }
  FUN_1447c45ca(local_d0,uVar16 & 0xffffffff,iVar13,0);
LAB_140dbc48c:
  local_d0[uVar3 >> 5] = local_d0[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
  lVar15 = *(longlong *)(param_1 + 0x1b8);
  local_10e[0] = *(ushort *)(lVar15 + 0x4a);
  local_10e[1] = *(undefined2 *)(lVar15 + 0x62);
  local_10e[2] = *(undefined2 *)(lVar15 + 0x11c);
  lVar15 = 0;
  do {
    uVar16 = local_d8;
    uVar2 = *(ushort *)((longlong)local_10e + lVar15);
    iVar9 = uVar2 + 1;
    iVar13 = iVar9 - (int)local_d8;
    if (iVar13 != 0 && (int)local_d8 <= iVar9) {
      if ((int)local_d8 == 0) {
LAB_140dbc4fc:
        if (local_d8._4_4_ <= (int)(uint)uVar2) {
          local_d8 = CONCAT44(0x100,(int)local_d8);
          FUN_14497ddce(local_f8,uVar16 & 0xffffffff);
          iVar9 = (int)local_d8 + iVar13;
        }
        iVar4 = iVar9 + 0x1f;
        if (-1 < iVar9) {
          iVar4 = iVar9;
        }
        local_d8 = CONCAT44(local_d8._4_4_,iVar9);
        if (iVar9 % 0x20 != 0) {
          bVar8 = -(char)(iVar9 % 0x20);
          local_f8[iVar4 >> 5] = (local_f8[iVar4 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
        }
      }
      else {
        iVar4 = (int)local_d8 + 0x1e;
        if (-1 < (int)local_d8 + -1) {
          iVar4 = (int)local_d8 + -1;
        }
        if (iVar4 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dbc4fc;
        local_d8 = CONCAT44(local_d8._4_4_,iVar9);
      }
      FUN_1447c45ca(local_f8,uVar16 & 0xffffffff,iVar13,0);
    }
    local_f8[uVar2 >> 5] = local_f8[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
    lVar15 = lVar15 + 2;
    if (lVar15 == 6) {
      if (local_106 != 0xffff) {
        lVar15 = *(longlong *)(param_1 + 0x28);
        local_128 = lVar15 + 0x28;
        cVar12 = *(char *)(lVar15 + 0x298);
        if (cVar12 == '\0') {
          *(int *)(lVar15 + 0x28c) = *(int *)(lVar15 + 0x28c) + 1;
        }
        else {
          LOCK();
          *(int *)(lVar15 + 0x28c) = *(int *)(lVar15 + 0x28c) + 1;
          UNLOCK();
        }
        local_130 = local_f8;
        local_120 = FUN_1403b8464(&local_130);
        if (local_120 != *(int *)(lVar15 + 0x38)) {
          local_161 = cVar12;
          local_154 = *(int *)(lVar15 + 0x38);
          do {
            lVar15 = *(longlong *)(*(longlong *)(local_128 + 0x60) + (longlong)local_120 * 8);
            if (cVar12 == '\0') {
              *(undefined4 *)(lVar15 + 0x14) = 0;
              local_148 = lVar15;
            }
            else {
              local_148 = 0;
            }
            if (*(ushort *)(lVar15 + 0xc) != 0) {
              plVar17 = *(longlong **)(lVar15 + 0x28);
              lVar6 = (ulonglong)*(ushort *)(lVar15 + 0xc) << 5;
              do {
                if (*(ushort *)((longlong)plVar17 + 0x1e) == local_106) goto LAB_140dbc68c;
                plVar17 = plVar17 + 4;
                lVar6 = lVar6 + -0x20;
              } while (lVar6 != 0);
            }
            plVar17 = (longlong *)0x0;
LAB_140dbc68c:
            local_158 = *(int *)(lVar15 + 0x14);
            if (local_158 == 1) {
              AcquireSRWLockShared((PSRWLOCK)(plVar17 + 1));
            }
            LOCK();
            *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
            UNLOCK();
            local_138 = (ulonglong)*(ushort *)(lVar15 + 0xe);
            if (local_138 != 0) {
              local_140 = *(longlong *)(lVar15 + 0x18);
              piVar18 = (int *)(*plVar17 + 4);
              uVar16 = 0;
              do {
                local_110 = *(undefined2 *)(local_140 + uVar16 * 2);
                iVar9 = *piVar18;
                if (iVar9 != -1) {
                  iVar13 = iVar9 + 1;
                  iVar4 = *(int *)(local_160 + 0x18);
                  iVar14 = iVar13 - iVar4;
                  if (iVar14 == 0 || iVar13 < iVar4) {
                    iVar19 = iVar9 + 0x1f;
                    if (-1 < iVar9) {
                      iVar19 = iVar9;
                    }
                    iVar19 = iVar19 >> 5;
                  }
                  else {
                    if (iVar4 == 0) {
                      iVar5 = -1;
                    }
                    else {
                      iVar5 = iVar4 + 0x1e;
                      if (-1 < iVar4 + -1) {
                        iVar5 = iVar4 + -1;
                      }
                      iVar5 = iVar5 >> 5;
                    }
                    iVar19 = iVar9 + 0x1f;
                    if (-1 < iVar9) {
                      iVar19 = iVar9;
                    }
                    iVar19 = iVar19 >> 5;
                    if (iVar19 == iVar5) {
                      *(int *)(local_160 + 0x18) = iVar13;
                    }
                    else {
                      if (*(int *)(local_160 + 0x1c) <= iVar9) {
                        if (iVar9 + 0x20U < 0xa0) {
                          iVar5 = 0x80;
                          iVar13 = iVar4;
                        }
                        else {
                          uVar11 = iVar9 + 0x20U >> 5;
                          local_150 = (ulonglong)uVar11;
                          if (*(int *)(local_160 + 0x1c) + 0x1fU < 0xa0) {
                            uVar10 = 4;
                            if (4 < uVar11) {
                              uVar10 = uVar11;
                            }
                          }
                          else {
                            uVar10 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
                          }
                          uVar7 = FUN_144a3809e(uVar10 << 2,0);
                          iVar13 = (int)(uVar7 >> 2);
                          iVar5 = iVar13 << 5;
                          if (iVar13 < (int)local_150) {
                            iVar5 = -0x20;
                          }
                          iVar13 = *(int *)(local_160 + 0x18);
                        }
                        *(int *)(local_160 + 0x1c) = iVar5;
                        FUN_1446efbd8(local_160,iVar13);
                        iVar13 = *(int *)(local_160 + 0x18) + iVar14;
                      }
                      iVar5 = iVar13 + 0x1f;
                      if (-1 < iVar13) {
                        iVar5 = iVar13;
                      }
                      *(int *)(local_160 + 0x18) = iVar13;
                      if (iVar13 % 0x20 != 0) {
                        lVar15 = *(longlong *)(local_160 + 0x10);
                        if (*(longlong *)(local_160 + 0x10) == 0) {
                          lVar15 = local_160;
                        }
                        bVar8 = -(char)(iVar13 % 0x20);
                        *(uint *)(lVar15 + (longlong)(iVar5 >> 5) * 4) =
                             (uint)(*(int *)(lVar15 + (longlong)(iVar5 >> 5) * 4) << (bVar8 & 0x1f))
                             >> (bVar8 & 0x1f);
                      }
                    }
                    FUN_1447c6044(local_160,iVar4,iVar14,0);
                  }
                  lVar15 = *(longlong *)(local_160 + 0x10);
                  if (*(longlong *)(local_160 + 0x10) == 0) {
                    lVar15 = local_160;
                  }
                  puVar1 = (uint *)(lVar15 + (longlong)iVar19 * 4);
                  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
                  local_114 = iVar9;
                  FUN_140dbc97e(param_1 + 0x80,&local_114,&local_110);
                }
                uVar16 = uVar16 + 1;
                piVar18 = piVar18 + 3;
              } while (local_138 != uVar16);
            }
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar17 + 3) = (int)plVar17[3] + -1;
              UNLOCK();
              if (local_158 == 1) {
                ReleaseSRWLockShared((PSRWLOCK)(plVar17 + 1));
              }
            }
            iVar9 = local_154;
            cVar12 = local_161;
            if (local_148 != 0) {
              *(undefined4 *)(local_148 + 0x14) = 1;
            }
            local_120 = FUN_1403b8464(&local_130);
          } while (local_120 != iVar9);
        }
        if (local_130 != (uint *)0x0) {
          if (*(char *)(local_128 + 0x270) == '\0') {
            *(int *)(local_128 + 0x264) = *(int *)(local_128 + 0x264) + -1;
          }
          else {
            LOCK();
            *(int *)(local_128 + 0x264) = *(int *)(local_128 + 0x264) + -1;
            UNLOCK();
          }
        }
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 140dbc97e FUN_140dbc97e body=159 status=ok
// SIG undefined FUN_140dbc97e(void)

void FUN_140dbc97e(longlong *param_1,uint *param_2,short *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  if ((int)param_1[9] != 0) {
    uVar1 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (longlong)(int)((int)param_1[9] - 1U & uVar1) * 4);
    while (iVar5 = iVar4, iVar5 != -1) {
      lVar2 = *param_1;
      iVar4 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
      if (*(uint *)(lVar2 + (longlong)iVar5 * 0x10) == uVar1) {
        do {
          if (*(short *)(lVar2 + 4 + (longlong)iVar5 * 0x10) == *param_3) {
            FUN_140dbca1e(param_1);
            uVar1 = *param_2;
          }
          do {
            iVar5 = iVar4;
            if (iVar5 == -1) {
              return;
            }
            lVar2 = *param_1;
            iVar4 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
          } while (*(uint *)(lVar2 + (longlong)iVar5 * 0x10) != uVar1);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 140dbca1e FUN_140dbca1e body=195 status=ok
// SIG undefined FUN_140dbca1e(void)

void FUN_140dbca1e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  
  lVar2 = *param_1;
  lVar5 = (longlong)param_2 * 0x10;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar7 = (longlong)*(int *)(lVar2 + 0xc + lVar5);
  iVar8 = *(int *)((longlong)plVar6 + lVar7 * 4);
  if (iVar8 == param_2) {
    piVar9 = (int *)((longlong)plVar6 + lVar7 * 4);
  }
  else {
    do {
      piVar9 = (int *)(lVar2 + (longlong)iVar8 * 0x10 + 8);
      iVar8 = *piVar9;
    } while (iVar8 != param_2);
  }
  *piVar9 = *(int *)(lVar2 + lVar5 + 8);
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + lVar5) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + lVar5 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140dbcae2 FUN_140dbcae2 body=332 status=ok
// SIG undefined FUN_140dbcae2(void)

void * FUN_140dbcae2(longlong param_1,void *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined1 local_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0x10000000000;
  if ((param_2 != param_3) && (*(char *)(param_1 + 0x50) == '\0')) {
    iVar3 = *(int *)((longlong)param_3 + 0x20);
    uVar1 = iVar3 + 0x1fU & 0xffffffe0;
    if (0x100 < (int)uVar1) {
      *(uint *)((longlong)param_2 + 0x24) = uVar1;
      FUN_14497ddce(param_2,0);
      iVar3 = *(int *)((longlong)param_3 + 0x20);
    }
    *(int *)((longlong)param_2 + 0x20) = iVar3;
    if (iVar3 != 0) {
      memcpy(param_2,param_3,(ulonglong)(iVar3 + 0x1fU >> 3 & 0xfffffffc));
    }
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 == 0) goto LAB_140dbcbeb;
  uVar4 = uVar1 + 0x1f;
  uVar2 = uVar4 & 0xffffffe0;
  if ((int)uVar2 < 1) {
    local_28 = (ulonglong)uVar1;
LAB_140dbcbb2:
    memcpy(local_48,(void *)(param_1 + 0x28),(ulonglong)(uVar4 >> 3 & 0x1ffffffc));
  }
  else {
    local_28._4_4_ = 0x100;
    if (0x100 < uVar2) {
      local_28._4_4_ = uVar2;
    }
    local_28._0_4_ = 0;
    FUN_14497ddce(local_48,0);
    iVar3 = *(int *)(param_1 + 0x48);
    local_28 = CONCAT44(local_28._4_4_,iVar3);
    if (iVar3 != 0) {
      uVar4 = iVar3 + 0x1f;
      goto LAB_140dbcbb2;
    }
  }
  FUN_140dbcc30(local_48);
  FUN_14497de01(local_48,param_2,0x14,&local_49);
LAB_140dbcbeb:
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_14010b303(param_1,param_2,1,local_48);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dbcc30 FUN_140dbcc30 body=135 status=ok
// SIG undefined FUN_140dbcc30(void)

void FUN_140dbcc30(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  uVar6 = *(uint *)(param_1 + 0x20);
  uVar5 = 0xffffffff >> (-(char)((int)uVar6 % 0x20) & 0x1fU);
  if ((int)uVar6 % 0x20 < 1) {
    uVar5 = 0xffffffff;
  }
  if (0 < (int)uVar6) {
    uVar3 = (ulonglong)uVar6 + 0x1f >> 5;
    iVar1 = (int)uVar3;
    uVar2 = iVar1 - 1;
    uVar6 = 0xffffffff;
    if (uVar2 == 0) {
      uVar6 = uVar5;
    }
    uVar7 = 0;
    do {
      uVar4 = 0xffffffff;
      if (uVar2 == uVar7) {
        uVar4 = uVar5;
      }
      *(uint *)(param_1 + uVar7 * 4) = uVar4 & ~(uVar6 & *(uint *)(param_1 + uVar7 * 4));
      bVar8 = iVar1 - 2 == uVar7;
      uVar7 = uVar7 + 1;
      uVar6 = 0xffffffff;
      if (bVar8) {
        uVar6 = uVar5;
      }
    } while (uVar3 != uVar7);
  }
  return;
}



// FUNCTION 140dbccb8 FUN_140dbccb8 body=118 status=ok
// SIG undefined FUN_140dbccb8(void)

longlong * FUN_140dbccb8(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (longlong)param_4 * 2 + *param_2;
  }
  return param_1;
}



// FUNCTION 140dbcd2e FUN_140dbcd2e body=234 status=ok
// SIG undefined FUN_140dbcd2e(void)

void FUN_140dbcd2e(short *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  short *psVar6;
  longlong *plVar7;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *param_1) goto LAB_140dbcd63;
      plVar7 = plVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_140dbcd63:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  psVar6 = (short *)((longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar7 + 0x1c) + *plVar7);
  if (psVar6 != param_1 + 4) {
    *(undefined8 *)psVar6 = *(undefined8 *)(param_1 + 4);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    plVar3 = *(longlong **)(param_1 + 8);
    plVar4 = *(longlong **)(psVar6 + 4);
    if (plVar3 != plVar4) {
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      *(longlong **)(psVar6 + 4) = plVar3;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    }
  }
  FUN_140dbce18(param_1 + 4);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140dbcde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140dbce18 FUN_140dbce18 body=77 status=ok
// SIG undefined FUN_140dbce18(void)

void FUN_140dbce18(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != -1) {
    plVar3 = (longlong *)param_1[1];
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
    *param_1 = -1;
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 140dbce66 FUN_140dbce66 body=826 status=ok
// SIG undefined FUN_140dbce66(void)

longlong FUN_140dbce66(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  code *local_60;
  longlong local_50 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*param_2 + 8 + (longlong)param_3 * 0x10) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(*param_2 + (longlong)param_3 * 0x10);
  }
  FUN_140056680(local_50,puVar4);
  FUN_140dbd1a1(local_40,param_1,local_50);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] == 0) {
    local_40[0] = 0;
    goto LAB_140dbcf5f;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    FUN_1446ddbd2();
    local_60 = FUN_140b31576;
    local_68 = &DAT_14c951a38;
    local_70 = 0;
    local_78 = 0x208001;
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  puVar6 = *(undefined **)(local_40[0] + 8);
  if (DAT_14c951a98 == 0) {
    bVar8 = puVar6 != (undefined *)0x0;
    puVar5 = puVar6;
    if (puVar6 != &DAT_14c951a90 && bVar8) {
      do {
        puVar5 = *(undefined **)(puVar5 + 0x30);
        bVar8 = puVar5 != (undefined *)0x0;
        if (puVar5 == &DAT_14c951a90) break;
      } while (puVar5 != (undefined *)0x0);
    }
    if (!bVar8) goto LAB_140dbcf20;
LAB_140dbd0ce:
    lVar1 = *(longlong *)(local_40[0] + 0x78);
    if (lVar1 != 0) {
      lVar7 = *(longlong *)(lVar1 + 8);
      lVar2 = FUN_1446dcc8c();
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar8 = lVar7 != 0;
        if (lVar7 != lVar2 && bVar8) {
          do {
            lVar7 = *(longlong *)(lVar7 + 0x30);
            bVar8 = lVar7 != 0;
            if (lVar7 == lVar2) break;
          } while (lVar7 != 0);
        }
        if (bVar8) goto LAB_140dbd189;
      }
      else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_140dbd189:
        if ((-1 < param_3 + 1) && (param_3 + 1 < (int)param_2[1])) {
          uVar3 = *(undefined8 *)(lVar1 + 0x70);
          goto LAB_140dbd149;
        }
      }
    }
    local_40[0] = *(longlong *)(local_40[0] + 0x78);
  }
  else {
    if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c951a98) != 0) goto LAB_140dbd0ce;
LAB_140dbcf20:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    if (DAT_14c952a10 == 0) {
      bVar8 = puVar6 != (undefined *)0x0;
      if (puVar6 != &DAT_14c952a08 && bVar8) {
        do {
          puVar6 = *(undefined **)(puVar6 + 0x30);
          bVar8 = puVar6 != (undefined *)0x0;
          if (puVar6 == &DAT_14c952a08) break;
        } while (puVar6 != (undefined *)0x0);
      }
      if (!bVar8) goto LAB_140dbcf5f;
    }
    else if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c952a10) == 0) goto LAB_140dbcf5f;
    if ((param_3 + 1 < 0) || ((int)param_2[1] <= param_3 + 1)) goto LAB_140dbcf5f;
    uVar3 = *(undefined8 *)(local_40[0] + 0x70);
LAB_140dbd149:
    local_40[0] = FUN_140dbce66(uVar3,param_2,param_3 + 1);
  }
LAB_140dbcf5f:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_40[0];
}



// FUNCTION 140dbd1a1 FUN_140dbd1a1 body=554 status=ok
// SIG undefined FUN_140dbd1a1(void)

longlong * FUN_140dbd1a1(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  longlong *local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  iVar4 = (int)param_3[1];
  uVar2 = iVar4 - 1;
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  puVar3 = (undefined2 *)*param_3;
  if ((0 < (int)uVar2) && (puVar3[(ulonglong)uVar2 - 1] == 0x5d)) {
    lVar6 = (longlong)iVar4 << 0x20;
    uVar5 = (longlong)iVar4 * 2;
    do {
      if (uVar5 == 0) goto LAB_140dbd1f7;
      lVar6 = lVar6 + -0x100000000;
      uVar9 = uVar5 - 2;
      lVar1 = uVar5 - 2;
      uVar5 = uVar9;
    } while (*(short *)((longlong)puVar3 + lVar1) != 0x5b);
    uVar9 = uVar9 >> 1;
    iVar7 = (int)uVar9;
    if (iVar7 != -1) {
      if (iVar4 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      FUN_14006620a(&local_78,puVar3,uVar9 & 0xffffffff);
      puVar3 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar3 = local_78;
      }
      FUN_1446f470e(local_68,puVar3,0);
      lVar1 = FUN_144a8e29b(param_2,local_68[0],3);
      *param_1 = lVar1;
      iVar4 = (int)param_3[1] + -1;
      if ((int)param_3[1] == 0) {
        iVar4 = 0;
      }
      iVar4 = iVar4 - iVar7;
      if (iVar4 - 3U < 10) {
        memcpy(local_68,(void *)(*param_3 + (lVar6 >> 0x20) * 2 + 2),(ulonglong)(iVar4 - 2) * 2);
        iVar4 = _wtoi((wchar_t *)local_68);
        *(int *)(param_1 + 1) = iVar4;
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140dbd28a;
    }
  }
LAB_140dbd1f7:
  if (iVar4 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  lVar6 = 0;
  FUN_1446f470e(local_68,puVar3,0);
  plVar8 = local_68[0];
  if (param_2 != (longlong *)0x0) {
    while (lVar6 = 0, plVar8 != (longlong *)0x0) {
      for (lVar6 = param_2[10]; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
        if ((~*(uint *)(*(longlong *)(lVar6 + 8) + 0x18) & 0x8001) == 0) goto LAB_140dbd244;
      }
      param_2 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
      plVar8 = param_2;
    }
  }
  goto LAB_140dbd287;
LAB_140dbd244:
  if (*(longlong **)(lVar6 + 0x20) != local_68[0]) {
    plVar8 = (longlong *)(lVar6 + 0x18);
    do {
      for (lVar6 = *plVar8; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
        if ((~*(uint *)(*(longlong *)(lVar6 + 8) + 0x18) & 0x8001) == 0) goto LAB_140dbd244;
      }
      param_2 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
      plVar8 = param_2 + 10;
    } while (param_2 != (longlong *)0x0);
    lVar6 = 0;
  }
LAB_140dbd287:
  *param_1 = lVar6;
LAB_140dbd28a:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140dbd3cc FUN_140dbd3cc body=752 status=ok
// SIG undefined FUN_140dbd3cc(void)

void FUN_140dbd3cc(longlong param_1,ushort param_2,uint param_3,undefined8 param_4)

{
  void *_Src;
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined2 uVar11;
  undefined1 auStack_128 [32];
  uint *local_108;
  uint *local_100;
  undefined2 local_f6;
  uint local_f4;
  uint local_f0;
  undefined1 local_e9;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_c0 [32];
  int local_a0;
  uint local_9c;
  uint local_98 [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 local_74;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar3 = *(longlong *)(param_1 + 0x98);
  uVar1 = *(ushort *)(lVar3 + (ulonglong)param_2 * 8);
  if (uVar1 != 0xffff) {
    local_f4 = (uint)*(ushort *)(lVar3 + 2 + (ulonglong)param_2 * 8);
    uVar9 = (ulonglong)(param_3 & 0xffff);
    uVar2 = *(ushort *)(lVar3 + uVar9 * 8);
    local_f0 = (uint)*(ushort *)(lVar3 + 2 + uVar9 * 8);
    local_f6 = *(undefined2 *)(lVar3 + 4 + uVar9 * 8);
    local_50 = 0x10000000000;
    local_108 = local_98;
    FUN_14009e926(param_4,(ulonglong)((uint)uVar1 * 0x28) + *(longlong *)(param_1 + 8),&local_70,2);
    local_98[0] = local_70;
    local_98[1] = uStack_6c;
    local_98[2] = uStack_68;
    local_98[3] = uStack_64;
    local_88 = local_60;
    uStack_84 = uStack_5c;
    uStack_80 = uStack_58;
    uStack_7c = uStack_54;
    local_78 = (int)local_50;
    local_74 = local_50._4_4_;
    if (0x1f < (int)local_50 + 0x1fU) {
      iVar8 = 0;
      uVar10 = 0;
      do {
        uVar6 = local_98[uVar10];
        if (uVar6 != 0) {
          iVar4 = 0;
          if (uVar6 != 0) {
            for (; (uVar6 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
            }
          }
          if ((iVar4 - iVar8 < (int)local_50) && (iVar4 + 1 != iVar8)) {
            if (uVar2 == 0xffff) {
              uVar7 = FUN_14055ca2e(param_1,local_98,0);
              uVar11 = (undefined2)uVar7;
              uVar7 = FUN_1449dfe96(param_1,uVar7,param_3,1);
            }
            else {
              _Src = (void *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 0x28);
              local_9c = 0;
              iVar8 = *(int *)((longlong)_Src + 0x20);
              local_a0 = 0;
              uVar6 = iVar8 + 0x1fU & 0xffffffe0;
              if (0 < (int)uVar6) {
                local_9c = 0x100;
                if (0x100 < uVar6) {
                  local_9c = uVar6;
                }
                FUN_14497ddce(local_c0,0);
                iVar8 = *(int *)((longlong)_Src + 0x20);
              }
              local_a0 = iVar8;
              if (iVar8 != 0) {
                memcpy(local_c0,_Src,(ulonglong)(iVar8 + 0x1fU >> 3 & 0xfffffffc));
              }
              local_50 = 0x10000000000;
              local_108 = (uint *)&local_e9;
              FUN_1406adeff(local_c0,local_98,&local_70,1);
              local_e8 = local_70;
              uStack_e4 = uStack_6c;
              uStack_e0 = uStack_68;
              uStack_dc = uStack_64;
              local_d8 = local_60;
              uStack_d4 = uStack_5c;
              uStack_d0 = uStack_58;
              uStack_cc = uStack_54;
              local_c8 = local_50;
              cVar5 = FUN_1403b8874(&local_e8,local_c0,0);
              if (cVar5 != '\0') {
                local_108 = (uint *)CONCAT44(local_108._4_4_,local_f4);
                local_100 = local_98;
                FUN_141101bca(param_1,uVar2,local_f0,uVar1);
                break;
              }
              uVar7 = FUN_14055ca2e(param_1,&local_e8,0);
              uVar11 = (undefined2)uVar7;
              uVar7 = FUN_14055cf42(param_1,uVar7,(ulonglong)uVar2,local_f0);
            }
            lVar3 = *(longlong *)(param_1 + 0x98);
            *(undefined2 *)(lVar3 + uVar9 * 8) = uVar11;
            *(short *)(lVar3 + 2 + uVar9 * 8) = (short)uVar7;
            *(undefined2 *)(lVar3 + 4 + uVar9 * 8) = local_f6;
            local_108 = (uint *)CONCAT44(local_108._4_4_,local_f4);
            local_100 = local_98;
            FUN_141101bca(param_1,uVar11,uVar7,uVar1);
            *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
            *(undefined1 *)(param_1 + 0x261) = 1;
          }
          break;
        }
        uVar10 = uVar10 + 1;
        iVar8 = iVar8 + -0x20;
      } while ((int)local_50 + 0x1fU >> 5 != uVar10);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dbd8a8 FUN_140dbd8a8 body=146 status=ok
// SIG undefined FUN_140dbd8a8(void)

void FUN_140dbd8a8(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_140dbd8db;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_140dbd8db:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined4 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined4 *)(param_1 + 1);
  if ((char)param_1[3] == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140dbd93a FUN_140dbd93a body=632 status=ok
// SIG undefined FUN_140dbd93a(void)

undefined8 * FUN_140dbd93a(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined2 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  int iVar12;
  undefined1 auStack_88 [36];
  int local_64;
  longlong local_60;
  int local_58;
  longlong *local_50;
  ulonglong local_48;
  int iVar11;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 200) != 0) {
    uVar2 = *(uint *)(param_3 + 2);
    lVar5 = param_1 + 0xb8;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xc0);
    }
    iVar10 = *(int *)(lVar5 + (longlong)(int)(*(int *)(param_1 + 200) - 1U & uVar2) * 4);
    while (iVar11 = iVar10, iVar11 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x80);
      iVar10 = *(int *)(lVar5 + 8 + (longlong)iVar11 * 0x10);
      if (*(uint *)(lVar5 + (longlong)iVar11 * 0x10) == uVar2) {
        iVar12 = -0x80000000;
        plVar8 = (longlong *)0x0;
        do {
          FUN_146085102(*(longlong *)(param_1 + 0x28) + 0x28,&local_60,
                        *(undefined2 *)(lVar5 + 4 + (longlong)iVar11 * 0x10),
                        *(undefined2 *)(*(longlong *)(param_1 + 0x1b8) + 0xf6));
          plVar9 = local_50;
          plVar6 = plVar8;
          if (local_50 != (longlong *)0x0) {
            lVar5 = *local_50;
            local_64 = iVar12;
            if ((((lVar5 == 0) || (lVar4 = FUN_1405621bc(), lVar4 == 0)) ||
                (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
                lVar4 + 0x30)) {
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = (longlong *)*plVar9;
            }
            iVar11 = local_64;
            iVar12 = iVar11;
            if (plVar8 != plVar9) {
              lVar5 = plVar9[0x22];
              if (lVar5 == 0) {
                (**(code **)(*plVar9 + 1000))(plVar9);
                lVar5 = plVar9[0x22];
              }
              iVar3 = *(int *)(lVar5 + 0x60);
              plVar6 = plVar9;
              iVar12 = iVar3;
              if ((plVar8 != (longlong *)0x0) && (plVar6 = plVar8, iVar12 = iVar11, iVar11 < iVar3))
              {
                plVar6 = plVar9;
                iVar12 = iVar3;
              }
            }
          }
          if (local_60 != 0) {
            LOCK();
            *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
            UNLOCK();
            if (local_58 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
            }
          }
          do {
            iVar11 = iVar10;
            if (iVar11 == -1) {
              if (plVar6 == (longlong *)0x0) goto LAB_140dbdacc;
              goto LAB_140dbdae1;
            }
            lVar5 = *(longlong *)(param_1 + 0x80);
            iVar10 = *(int *)(lVar5 + 8 + (longlong)iVar11 * 0x10);
            plVar8 = plVar6;
          } while (*(uint *)(lVar5 + (longlong)iVar11 * 0x10) != uVar2);
        } while( true );
      }
    }
  }
LAB_140dbdacc:
  plVar6 = *(longlong **)(param_3[1] + 0x28);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)FUN_14099c56c();
  }
LAB_140dbdae1:
  lVar5 = plVar6[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 1000))(plVar6);
    lVar5 = plVar6[0x22];
  }
  uVar1 = *(undefined2 *)(lVar5 + 0x66);
  iVar10 = *(int *)(*param_3 + 0x1c);
  uVar7 = 0xffff;
  if (iVar10 != 0) {
    uVar2 = *(uint *)(*param_3 + 0x18);
    plVar8 = (longlong *)0x0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140dbdb79;
    plVar8 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar8 != (longlong *)0x0) &&
       ((((int)plVar8[2] == iVar10 && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) &&
        (lVar5 = *plVar8, lVar5 != 0)))) {
      plVar8 = plVar6;
      uVar7 = uVar1;
      if (*(longlong **)(lVar5 + 0x10) != plVar6) {
        uVar7 = *(undefined2 *)(lVar5 + 0x66);
        plVar8 = *(longlong **)(lVar5 + 0x10);
      }
      goto LAB_140dbdb79;
    }
  }
  plVar8 = (longlong *)0x0;
LAB_140dbdb79:
  *param_2 = plVar6;
  *(undefined2 *)(param_2 + 1) = uVar1;
  param_2[2] = plVar8;
  *(undefined2 *)(param_2 + 3) = uVar7;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dbdbb4 FUN_140dbdbb4 body=151 status=ok
// SIG undefined FUN_140dbdbb4(void)

void FUN_140dbdbb4(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_140dbdbe7;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_140dbdbe7:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(short *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       param_1[1];
  if ((char)param_1[2] == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140dbdc3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140dbdc4c FUN_140dbdc4c body=180 status=ok
// SIG undefined FUN_140dbdc4c(void)

void FUN_140dbdc4c(longlong param_1,longlong *param_2)

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
    lVar4 = uVar3 * 0x28;
    do {
      lVar4 = lVar4 + -0x28;
      if (*(int *)(param_1 + 0x88) < 1) break;
      cVar2 = (**(code **)(*param_2 + 0x28))(param_2,*(longlong *)(param_1 + 0x90) + lVar4);
      if (cVar2 != '\0') {
        FUN_140dbdd56(param_1,(int)uVar3 + -1);
      }
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  FUN_140ce8090(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dbdd56 FUN_140dbdd56 body=195 status=ok
// SIG undefined FUN_140dbdd56(void)

void FUN_140dbdd56(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  byte bVar2;
  int iVar3;
  
  lVar1 = (longlong)(int)param_2 * 0x28;
  (**(code **)(*param_1 + 0xc0))(param_1,param_1[0x12] + lVar1);
  _Dst = (void *)(param_1[0x12] + lVar1);
  if ((*(byte *)(param_1[0x12] + 0x1c + lVar1) & 1) != 0) {
    *(int *)(param_1 + 0x11) = (int)param_1[0x11] + -1;
  }
  if (*(int *)((longlong)_Dst + 4) != -1) {
    *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) + -1;
  }
  bVar2 = *(byte *)((longlong)_Dst + 0x14);
  if (bVar2 == 1) {
    *(int *)(param_1 + 0x10) = (int)param_1[0x10] + -1;
    bVar2 = *(byte *)((longlong)_Dst + 0x14);
  }
  if ((bVar2 & 1) != 0) {
    *(undefined1 *)((longlong)_Dst + 0x14) = 0;
  }
  if (*(int *)((longlong)_Dst + 4) != -1) {
    *(undefined8 *)((longlong)_Dst + 4) = 0xffffffff;
  }
  iVar3 = (int)param_1[0x13];
  if (~param_2 + iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar3) * 0x28);
    iVar3 = (int)param_1[0x13];
  }
  *(int *)(param_1 + 0x13) = iVar3 + -1;
  FUN_140dbde6e(param_1 + 0x12);
  return;
}



// FUNCTION 140dbde6e FUN_140dbde6e body=158 status=ok
// SIG undefined FUN_140dbde6e(void)

void FUN_140dbde6e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x28)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x28,8);
      uVar3 = uVar3 / 0x28;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x28,8);
    }
  }
  return;
}



// FUNCTION 140dbdf0c FUN_140dbdf0c body=448 status=ok
// SIG undefined FUN_140dbdf0c(void)

undefined4 *
FUN_140dbdf0c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140ac5f02();
  uVar8 = 0;
  FUN_140dbe0ce(local_48,0,*param_3,param_3[1]);
  *(undefined4 *)(local_48 + 4) = 0xffffffff;
  local_54 = local_50;
  iVar7 = *(int *)(local_48 + 1);
  iVar4 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if (iVar7 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*local_48;
    }
    lVar5 = 0;
    uVar8 = 0;
    do {
      uVar6 = ((uint)(0x19 < (ushort)puVar2[lVar5] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar5]) -
              0x20;
      uVar8 = uVar8 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar8 ^ uVar6) & 0xff) * 4);
      uVar8 = uVar8 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
      lVar5 = lVar5 + 1;
    } while (iVar4 != (int)lVar5);
  }
  local_68 = param_4;
  cVar1 = FUN_140ac5e66(param_1,uVar8,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar6 < 4) {
      iVar7 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_48 + 0x24) = uVar8;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 4) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140b7fdd8(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dbe0ce FUN_140dbe0ce body=121 status=ok
// SIG undefined FUN_140dbe0ce(void)

undefined8 *
FUN_140dbe0ce(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  param_1[2] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  return param_1;
}



// FUNCTION 140dbe148 FUN_140dbe148 body=23 status=ok
// SIG undefined FUN_140dbe148(void)

bool FUN_140dbe148(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  return cVar1 == '\x02';
}



// FUNCTION 140dbe160 FUN_140dbe160 body=1242 status=ok
// SIG undefined FUN_140dbe160(void)

ulonglong FUN_140dbe160(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 unaff_RSI;
  ulonglong uVar11;
  ulonglong uVar12;
  float *pfVar13;
  float *pfVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_108 [32];
  int local_e8;
  uint local_e4;
  char local_e0 [8];
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  int local_b8 [2];
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  fVar16 = *(float *)(param_2 + 8);
  if (((fVar16 < *(float *)(param_1 + 0xe0)) ||
      ((lVar3 = *(longlong *)(param_1 + 0x48), *(char *)(lVar3 + 0x138) == '\x01' &&
       ((*(char *)(param_1 + 0xf4) != '\x01' || (fVar16 < *(float *)(param_1 + 0xec))))))) ||
     ((*(char *)(lVar3 + 0x178) == '\x01' && (fVar16 < *(float *)(param_1 + 0xf0))))) {
    uVar11 = 0;
    goto LAB_140dbe1a1;
  }
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),2);
  if (*(char *)(lVar3 + 0xb8) != '\x01') goto LAB_140dbe1a1;
  if (*(longlong *)(lVar3 + 0x20) != 0) {
    iVar7 = *(int *)(*(longlong *)(lVar3 + 0x20) + 0x18);
    if (((-1 < (longlong)iVar7) &&
        (lVar10 = *(longlong *)(param_1 + 0x40), iVar7 < *(int *)(lVar10 + 0x78))) &&
       (lVar4 = *(longlong *)(*(longlong *)(lVar10 + 0x70) + (longlong)iVar7 * 8), lVar4 != 0)) {
      if (*(char *)(lVar4 + 0xb4) == '\x02') {
        *(undefined1 *)(param_1 + 0x100) = 1;
        fVar16 = *(float *)(param_2 + 8);
      }
      else if (*(char *)(param_1 + 0x100) == '\x01') {
        *(undefined1 *)(param_1 + 0x100) = 0;
        if (lVar10 == 0) {
          lVar9 = 0;
          local_d8 = 0;
LAB_140dbe56a:
          local_d0 = (longlong *)0x0;
          uVar12 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        }
        else {
          if (*(int *)(lVar10 + 0x4c) == 0) {
LAB_140dbe524:
            lVar9 = 0;
          }
          else {
            uVar8 = *(uint *)(lVar10 + 0x48);
            lVar9 = 0;
            if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
              param_3 = (longlong *)
                        ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
              if ((param_3 == (longlong *)0x0) ||
                 (((int)param_3[2] != *(int *)(lVar10 + 0x4c) ||
                  ((*(uint *)(param_3 + 1) & 0x10200000) != 0)))) goto LAB_140dbe524;
              lVar9 = *param_3;
            }
          }
          plVar5 = *(longlong **)(lVar10 + 0x118);
          local_d8 = param_1;
          if (plVar5 == (longlong *)0x0) goto LAB_140dbe56a;
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
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
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          uVar12 = 0;
          local_d0 = plVar5;
        }
        plVar5 = local_d0;
        local_b8[0] = 0;
        local_e0[0] = '\x03';
        local_c8._0_4_ = 0;
        if (lVar9 == 0) {
          iVar7 = 0;
          uVar8 = (uint)local_c8;
        }
        else {
          uVar8 = *(uint *)(lVar9 + 0xc);
          local_c8 = (ulonglong)uVar8;
          if ((int)uVar8 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          iVar7 = *(int *)(lVar10 + 0x10);
          if (iVar7 == 0) {
            local_e4 = (uint)uVar12;
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            local_e8 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,local_e8);
            }
            LOCK();
            iVar7 = *(int *)(lVar10 + 0x10);
            bVar15 = iVar7 == 0;
            if (bVar15) {
              *(int *)(lVar10 + 0x10) = local_e8;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar15) {
              iVar7 = local_e8;
            }
            uVar12 = (ulonglong)local_e4;
            uVar8 = (uint)local_c8;
          }
        }
        local_c8._0_4_ = uVar8;
        local_c8 = CONCAT44(iVar7,(uint)local_c8);
        local_c0 = 2;
        if (local_b8[0] != 0) {
          FUN_1417398fc(&DAT_14c9a3da0,local_b8[0] + -1,1);
          local_b8[0] = 0;
        }
        if ((char)uVar12 == '\0') {
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        pfVar13 = &local_b0;
        FUN_1447c3578(lVar3 + 0x80,pfVar13,local_e0);
        if (local_90 == 3) {
          uVar8 = 3;
          fVar16 = local_b0;
        }
        else {
          pfVar14 = &local_88;
          FUN_1400b56fe(pfVar14,&local_b0,3);
          fVar16 = 0.0;
          if (local_68 != 0) {
            fVar16 = local_88;
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
          if (pcVar6 != (code *)0x0) {
            if (0x18 < local_70) {
              pfVar14 = (float *)CONCAT44(uStack_84,local_88);
            }
            (*pcVar6)(pfVar14);
          }
          if (0x18 < local_70) {
            FUN_1400020a8(CONCAT44(uStack_84,local_88));
          }
          uVar8 = (uint)local_90;
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar8 * 0x120));
        if (pcVar6 != (code *)0x0) {
          if (0x18 < local_98) {
            pfVar13 = (float *)CONCAT44(uStack_ac,local_b0);
          }
          (*pcVar6)(pfVar13);
        }
        if (0x18 < local_98) {
          FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
        }
        FUN_1448173f8(local_b8);
        if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_d0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_d0 + 0x10))();
          }
        }
        if (*(float *)(lVar4 + 0x128) <= fVar16 && fVar16 != *(float *)(lVar4 + 0x128)) {
          *(float *)(lVar4 + 0x128) = fVar16;
        }
        fVar16 = *(float *)(param_2 + 8);
        if (*(float *)(lVar4 + 300) <= 0.0 && *(float *)(lVar4 + 300) != 0.0) {
          *(float *)(lVar4 + 300) = fVar16;
        }
      }
      if (0.0 < (*(float *)(lVar4 + 300) + *(float *)(lVar4 + 0x128)) - fVar16) goto LAB_140dbe1a1;
    }
  }
  *(undefined1 *)(param_1 + 0x100) = 1;
LAB_140dbe1a1:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 140dbe63c FUN_140dbe63c body=2777 status=ok
// SIG undefined FUN_140dbe63c(void)

void FUN_140dbe63c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined7 *puVar7;
  undefined7 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_348 [32];
  undefined1 *local_328;
  undefined4 *local_320;
  undefined *local_318;
  code *local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  longlong local_2f8;
  undefined4 local_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  longlong lStack_2d8;
  undefined1 local_2c9;
  undefined7 uStack_2c8;
  undefined1 uStack_2c1;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_274;
  undefined4 local_26c;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0;
  undefined4 local_178;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_2b0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_318 = (undefined *)FUN_1446ddbd2();
      local_310 = FUN_1468d96f0;
      local_320 = (undefined4 *)0x0;
      local_328 = (undefined1 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2b0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2b0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2b0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_2b0 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2b0);
    }
  }
  local_2b8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_318 = (undefined *)FUN_1446ddbd2();
      local_310 = FUN_1468d96f0;
      local_320 = (undefined4 *)0x0;
      local_328 = (undefined1 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2b8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2b8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2b8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_2b8 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2b8);
    }
  }
  local_280 = 0;
  local_278 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  local_274 = 0xffffffff00000080;
  local_26c = 0;
  local_260 = 0;
  local_258 = 0;
  local_230 = 0;
  local_228 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_224 = 0xffffffff00000080;
  local_21c = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0xffffffff00000000;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1c4 = 0xffffffff00000080;
  local_1bc = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_178 = 0;
  local_150 = 0;
  local_148 = 0x200000000;
  local_138 = 0;
  local_130 = 0;
  uStack_12c = 0x20;
  uStack_128 = 0xffffffff;
  uStack_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_e8 = 0;
  local_e0 = 0x200000000;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0x20;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0x200000000;
  local_68 = 0;
  local_60 = 0;
  uStack_5c = 0x20;
  uStack_58 = 0xffffffff;
  uStack_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  plVar1 = (longlong *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2a8);
LAB_140dbe9a5:
    pbVar5 = *(byte **)(param_2 + 0x20);
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2a8);
      goto LAB_140dbe9a5;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2a8);
      goto LAB_140dbe9a5;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_2a8);
      goto LAB_140dbe9a5;
    }
    local_2a8 = *(undefined8 *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 9;
    *(byte **)(param_2 + 0x20) = pbVar5;
    puVar6 = (undefined8 *)0x0;
  }
  puVar9 = &local_2a8;
  if (puVar6 != (undefined8 *)0x0) {
    puVar9 = puVar6;
  }
  uStack_2c8 = 0;
  uStack_2c1 = 0;
  uStack_2c0 = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_2c8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_2c8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_2c8);
    }
    else {
      if (pcVar3 == (code *)&LAB_1428293cc) {
        uVar2 = *(undefined8 *)(pbVar5 + 1);
        pbVar5 = pbVar5 + 9;
        *(byte **)(param_2 + 0x20) = pbVar5;
        uStack_2c8 = (undefined7)uVar2;
        uStack_2c1 = (undefined1)((ulonglong)uVar2 >> 0x38);
        puVar7 = (undefined7 *)0x0;
        goto LAB_140dbea42;
      }
      (*pcVar3)(uVar2,param_2,&uStack_2c8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  puVar7 = *(undefined7 **)(param_2 + 0x38);
LAB_140dbea42:
  puVar8 = &uStack_2c8;
  if (puVar7 != (undefined7 *)0x0) {
    puVar8 = puVar7;
  }
  local_2c9 = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c9);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c9);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c9);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      local_2c9 = (undefined1)uVar2;
      uStack_2c8 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c9);
    }
  }
  puVar10 = &local_2c9;
  if ((undefined1 *)*plVar1 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)*plVar1;
  }
  uStack_2e8 = 0xffffffff;
  uStack_2e4 = 0xffffffff;
  uStack_2e0 = 0;
  lStack_2d8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_318 = (undefined *)FUN_1446ddbd2();
      local_310 = FUN_1403a682c;
      local_320 = (undefined4 *)0x0;
      local_328 = (undefined1 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_2e8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_2e8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_2e8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      uStack_2e8 = (undefined4)uVar2;
      uStack_2e4 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_2e8);
    }
  }
  local_2ec = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_310 = FUN_1405ebbb2;
      local_318 = &DAT_14c9520b8;
      local_320 = (undefined4 *)0x0;
      local_328 = (undefined1 *)0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2ec);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2ec);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2ec);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      local_2ec = (undefined4)uVar2;
      uStack_2e8 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2ec);
    }
  }
  uVar4 = local_2ec;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_308 = uStack_2e8;
  uStack_304 = uStack_2e4;
  uStack_300 = (undefined4)uStack_2e0;
  uStack_2fc = uStack_2e0._4_4_;
  local_2f8 = lStack_2d8;
  if ((lStack_2d8 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_318 = (undefined *)CONCAT44(local_318._4_4_,uVar4);
  local_320 = &local_308;
  local_328 = puVar10;
  FUN_140dbf116(local_2b0,local_2b8,puVar9,puVar8);
  if (CONCAT17(uStack_2c1,uStack_2c8) != 0) {
    FUN_1400020a8();
  }
  local_2a8 = 0;
  FUN_14076ba36();
  if ((local_28 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dbf116 FUN_140dbf116 body=249 status=ok
// SIG undefined FUN_140dbf116(void)

void FUN_140dbf116(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_4 + 8) = 0;
  if (*(int *)(param_4 + 0xc) < 0) {
    FUN_140c5c1ec(param_4,0);
  }
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x1f0) == 0) {
      lVar1 = lVar1 + 0x460;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0xf8);
    }
    uVar2 = FUN_14001cc68(0x48,0x10);
    FUN_140dbf210(uVar2,param_2,param_3,param_4,param_5,param_6,param_7);
    FUN_140b1330e(lVar1,*(undefined8 *)(param_6 + 0x10),*(undefined4 *)(param_6 + 4),uVar2);
    return;
  }
  return;
}



// FUNCTION 140dbf210 FUN_140dbf210 body=678 status=ok
// SIG undefined FUN_140dbf210(void)

undefined8 *
FUN_140dbf210(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6,undefined4 param_7)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14ac8c7b0;
  *(undefined4 *)(param_1 + 1) = *param_6;
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_6 + 2);
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  if (*(longlong *)(param_6 + 4) == 0) {
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(param_6 + 4) + 0xc);
    *(uint *)((longlong)param_1 + 0x14) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar6 = iVar8;
      }
    }
  }
  *(int *)(param_1 + 3) = iVar6;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_4;
  *(undefined4 *)(param_1 + 7) = param_7;
  param_1[8] = param_5;
  if ((param_2 != 0) && (cVar5 = FUN_140dbf4b8(param_3), cVar5 != '\0')) {
    uVar7 = FUN_1447210f0(param_2);
    FUN_1409e0c66(&local_58,uVar7);
    if (local_50 != (longlong *)0x0) {
      iVar6 = (int)local_50[1];
      do {
        if (iVar6 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar8 = (int)local_50[1];
        bVar11 = iVar6 == iVar8;
        if (bVar11) {
          *(int *)(local_50 + 1) = iVar6 + 1;
          iVar8 = iVar6;
        }
        iVar6 = iVar8;
        UNLOCK();
        plVar10 = local_50;
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
      if (plVar10 != (longlong *)0x0) {
        if (local_58 != 0) {
          local_68 = 0;
          FUN_140a41f04(local_58,&local_58,param_2,param_3);
          plVar2 = local_50;
          if (param_1 + 4 != &local_58) {
            param_1[4] = local_58;
            local_58 = 0;
            plVar4 = (longlong *)param_1[5];
            if (local_50 != plVar4) {
              local_50 = (longlong *)0x0;
              param_1[5] = plVar2;
              if (plVar4 != (longlong *)0x0) {
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
              }
            }
          }
          plVar2 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_50 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
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
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140dbf4b8 FUN_140dbf4b8 body=80 status=ok
// SIG undefined FUN_140dbf4b8(void)

undefined8 FUN_140dbf4b8(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_1 != 0) {
    lVar1 = *(longlong *)(*param_1 + 0x30);
    if (*(char *)(lVar1 + 0x330) == '\0') {
      FUN_140e5e628(lVar1);
    }
    uVar2 = FUN_140dbf508(param_1 + 1,lVar1 + 200,1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140dbf508 FUN_140dbf508 body=1107 status=ok
// SIG undefined FUN_140dbf508(void)

ulonglong FUN_140dbf508(longlong *param_1,longlong *param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  ulonglong local_d8;
  uint local_cc;
  ulonglong local_c8;
  longlong *local_c0;
  uint *local_b8;
  undefined1 local_b0 [40];
  int local_88;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar8 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  if (param_3 == '\0') {
    if (iVar5 == iVar8) goto LAB_140dbf550;
  }
  else if (iVar8 <= iVar5) {
LAB_140dbf550:
    uVar16 = *(uint *)(param_2 + 5);
    if (uVar16 == 0) {
      local_d8 = 1;
      uVar17 = 0;
      uVar6 = 0;
      iVar5 = 0;
    }
    else {
      puVar7 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar7 = (uint *)(param_2 + 2);
      }
      uVar6 = *puVar7;
      if (uVar6 == 0) {
        iVar5 = uVar16 + 0x1e;
        if (-1 < (int)(uVar16 - 1)) {
          iVar5 = uVar16 - 1;
        }
        uVar17 = 0;
        uVar12 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar12 = uVar17;
        }
        iVar5 = 0;
        do {
          if (uVar12 == uVar17) goto LAB_140dbf7ce;
          iVar5 = iVar5 + 0x20;
          uVar6 = puVar7[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar6 == 0);
      }
      else {
        uVar17 = 0;
        iVar5 = 0;
      }
      local_d8 = (ulonglong)(-uVar6 & uVar6);
      uVar12 = local_d8 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar6 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if ((int)uVar16 <= (int)uVar6) {
        uVar6 = uVar16;
      }
    }
    if (uVar6 != uVar16) {
      local_e0 = param_1 + 7;
      uVar9 = 0xffffffff;
      local_c8 = (ulonglong)uVar16;
      local_c0 = param_2;
      local_b8 = (uint *)(param_2 + 2);
      do {
        local_cc = uVar9;
        if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_140dbf8ff;
        lVar14 = *(longlong *)(*local_c0 + (longlong)(int)uVar6 * 0x48);
        uVar16 = (uint)((ulonglong)lVar14 >> 0x10);
        uVar9 = (uint)lVar14 & 0xffff;
        plVar13 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar13 = local_e0;
        }
        iVar8 = *(int *)((longlong)plVar13 +
                        (ulonglong)
                        ((int)param_1[9] - 1U &
                        (int)((ulonglong)lVar14 >> 0x20) + ((uint)lVar14 << 0x10 | uVar9) +
                        (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar8 == -1) goto LAB_140dbf8ff;
        while (plVar13 = (longlong *)(*param_1 + (longlong)iVar8 * 0x48), *plVar13 != lVar14) {
          iVar8 = (int)plVar13[8];
          if (iVar8 == -1) goto LAB_140dbf8ff;
        }
        uVar12 = 0;
        if ((plVar13 == (longlong *)0x0) || (plVar13 == (longlong *)&DAT_fffffffffffffff8))
        goto LAB_140dbf901;
        bVar1 = *(byte *)(*local_c0 + (longlong)(int)uVar6 * 0x48 + 0x38);
        bVar2 = *(byte *)(plVar13 + 6);
        if (bVar2 != bVar1) {
          uVar16 = (uint)bVar2 * 0x120;
          if ((*(code **)(&DAT_14c9a8560 + uVar16) == (code *)0x0) ||
             (cVar4 = (**(code **)(&DAT_14c9a8560 + uVar16))(bVar1), cVar4 == '\0')) {
            pcVar3 = *(code **)((longlong)&DAT_14c9a8568 + (ulonglong)((uint)bVar1 * 0x120));
            if (((pcVar3 == (code *)0x0) || (cVar4 = (*pcVar3)((uint)bVar2), cVar4 == '\0')) &&
               (((((&DAT_14c9a8514)[uVar16] & 0x20) == 0 ||
                 (((&DAT_14c9a8514)[(uint)bVar1 * 0x120] & 0x20) != 0)) ||
                ((*(code **)(&DAT_14c9a8588 + uVar16) != (code *)0x0 &&
                 (cVar4 = (**(code **)(&DAT_14c9a8588 + uVar16))(bVar1), cVar4 == '\0'))))))
            goto LAB_140dbf8ff;
          }
        }
        uVar9 = local_cc & ~(uint)local_d8;
        puVar7 = (uint *)local_c0[4];
        if ((uint *)local_c0[4] == (uint *)0x0) {
          puVar7 = local_b8;
        }
        uVar16 = *(uint *)(local_c0 + 5);
        iVar8 = (int)uVar17;
        lVar14 = (longlong)iVar8;
        uVar6 = puVar7[lVar14] & uVar9;
        if (uVar6 == 0) {
          iVar10 = uVar16 + 0x1e;
          if (-1 < (int)(uVar16 - 1)) {
            iVar10 = uVar16 - 1;
          }
          iVar10 = iVar10 >> 5;
          iVar5 = iVar5 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar8) {
            iVar11 = iVar8;
          }
          if (iVar8 < iVar10) {
            lVar15 = 0;
            do {
              uVar6 = puVar7[lVar14 + lVar15 + 1];
              if (uVar6 != 0) {
                uVar17 = (ulonglong)(iVar8 + (int)lVar15 + 1);
                uVar9 = 0xffffffff;
                goto LAB_140dbf799;
              }
              iVar5 = iVar5 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar11 - lVar14 != lVar15);
            uVar9 = 0xffffffff;
            iVar8 = iVar11;
          }
          uVar17 = (ulonglong)(iVar8 + 1);
          uVar6 = uVar16;
        }
        else {
LAB_140dbf799:
          local_d8 = (ulonglong)(-uVar6 & uVar6);
          uVar12 = local_d8 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar6 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if ((int)uVar16 <= (int)uVar6) {
            uVar6 = uVar16;
          }
        }
        param_2 = local_c0;
      } while (uVar6 != (uint)local_c8);
    }
LAB_140dbf7ce:
    FUN_140dbf994(param_1 + 0x26,local_b0,param_2 + 0x26);
    iVar8 = local_64;
    iVar5 = local_88;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140dbf95c(local_b0);
    if (iVar5 == iVar8) {
      FUN_140dbf994(param_1 + 0x33,local_b0,param_2 + 0x33);
      uVar12 = CONCAT71((int7)((ulonglong)local_b0 >> 8),local_88 == local_64);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_140dbf95c(local_b0);
      goto LAB_140dbf901;
    }
  }
LAB_140dbf8ff:
  uVar12 = 0;
LAB_140dbf901:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 140dbf95c FUN_140dbf95c body=55 status=ok
// SIG undefined FUN_140dbf95c(void)

void FUN_140dbf95c(longlong param_1)

{
  FUN_142b327ca(param_1,0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140dbf994 FUN_140dbf994 body=1139 status=ok
// SIG undefined FUN_140dbf994(void)

longlong FUN_140dbf994(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  void *pvVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  longlong local_60;
  ulonglong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar17 = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0x200000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0x20;
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x60) = 0;
  uVar18 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x4c);
  if (uVar18 != 0) {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar18);
    }
    if (uVar18 < 3) {
      iVar3 = 0;
      iVar15 = 2;
    }
    else {
      FUN_142b32846(param_2);
      iVar3 = *(int *)(param_2 + 0x28);
      iVar15 = *(int *)(param_2 + 0x2c);
    }
    *(uint *)(param_2 + 0x28) = iVar3 + uVar18;
    if ((uint)(iVar15 - iVar3) < uVar18) {
      FUN_142b32a36(param_2);
    }
    lVar13 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar13 = param_2;
    }
    if (iVar3 < (int)uVar18) {
      iVar15 = *(int *)(param_2 + 0x4c);
      puVar8 = (undefined4 *)((ulonglong)uVar18 * 0x10 + lVar13 + -0xc);
      uVar19 = (ulonglong)uVar18;
      do {
        uVar1 = uVar19 - 1;
        if (iVar15 == 0) {
          iVar15 = (int)uVar19 + -1;
        }
        else {
          *(int *)(lVar13 + (longlong)*(int *)(param_2 + 0x48) * 0x10) = (int)uVar19 + -1;
          iVar15 = (int)uVar1;
        }
        uVar14 = 0xffffffff;
        puVar8[-1] = 0xffffffff;
        if (0 < *(int *)(param_2 + 0x4c)) {
          uVar14 = *(undefined4 *)(param_2 + 0x48);
        }
        *puVar8 = uVar14;
        *(int *)(param_2 + 0x48) = iVar15;
        iVar15 = *(int *)(param_2 + 0x4c) + 1;
        *(int *)(param_2 + 0x4c) = iVar15;
        puVar8 = puVar8 + -4;
        uVar19 = uVar1;
      } while ((longlong)iVar3 < (longlong)uVar1);
    }
    puVar2 = (ulonglong *)(param_2 + 0x38);
    *(uint *)(param_2 + 0x40) = uVar18;
    uVar16 = uVar18 + 0x1f >> 5;
    pvVar11 = *(void **)(param_2 + 0x38);
    local_68 = puVar2;
    local_60 = param_3;
    if (*(int *)(param_2 + 0x44) + 0x1fU >> 5 < uVar16) {
      bVar20 = pvVar11 != (void *)0x0;
      pvVar11 = (void *)0x0;
      if (bVar20 || 0x20 < uVar18) {
        if (0x20 < uVar18) {
          pvVar11 = (void *)(ulonglong)uVar16;
        }
        FUN_1446efa72(puVar2,0,pvVar11,4);
        pvVar11 = (void *)*puVar2;
      }
      *(uint *)(param_2 + 0x44) = uVar18 + 0x1f & 0xffffffe0;
    }
    param_3 = local_60;
    if (pvVar11 == (void *)0x0) {
      pvVar11 = (void *)(param_2 + 0x30U);
    }
    if (uVar18 < 0x101) {
      uVar16 = uVar16 + (uVar16 == 0);
    }
    memset(pvVar11,0,(ulonglong)(uVar16 << 2));
    iVar3 = *(int *)(param_2 + 0x40);
    iVar15 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar15 = iVar3;
    }
    if (iVar3 % 0x20 != 0) {
      pvVar11 = (void *)(param_2 + 0x30U);
      if ((void *)*local_68 != (void *)0x0) {
        pvVar11 = (void *)*local_68;
      }
      bVar4 = -(char)(iVar3 % 0x20);
      *(uint *)((longlong)pvVar11 + (longlong)(iVar15 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar11 + (longlong)(iVar15 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
    }
    uVar19 = (ulonglong)(((uVar18 >> 1) - 1) + (uint)(uVar18 >> 1 == 0)) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar13 & 0x1f);
    if (uVar18 < 4) {
      iVar3 = 1;
    }
    if (*(int *)(param_2 + 0x60) < iVar3) {
      *(int *)(param_2 + 0x60) = iVar3;
      FUN_142b4a9ee();
    }
  }
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 == 0) {
    uVar19 = 1;
    iVar15 = 0;
    iVar10 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x30);
    }
    uVar18 = *puVar7;
    if (uVar18 == 0) {
      iVar15 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar15 = iVar3 + -1;
      }
      uVar17 = 0;
      uVar19 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar19 = uVar17;
      }
      iVar10 = 0;
      do {
        if (uVar19 == uVar17) goto LAB_140dbfdd5;
        iVar10 = iVar10 + 0x20;
        uVar18 = puVar7[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar17 = 0;
      iVar10 = 0;
    }
    uVar19 = (ulonglong)(-uVar18 & uVar18);
    uVar1 = uVar19 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar15 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar15) {
      iVar15 = iVar3;
    }
  }
  if (iVar15 < iVar3) {
    local_60 = param_3 + 0x50;
    uVar18 = 0xffffffff;
    do {
      local_68 = (ulonglong *)CONCAT44(local_68._4_4_,uVar18);
      lVar13 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar13 = param_1;
      }
      if (*(int *)(param_3 + 0x28) != *(int *)(param_3 + 0x4c)) {
        lVar9 = *(longlong *)(lVar13 + (longlong)iVar15 * 0x10);
        uVar18 = (uint)((ulonglong)lVar9 >> 0x10);
        uVar16 = (uint)lVar9 & 0xffff;
        lVar12 = *(longlong *)(param_3 + 0x58);
        if (*(longlong *)(param_3 + 0x58) == 0) {
          lVar12 = local_60;
        }
        iVar5 = *(int *)(lVar12 + (ulonglong)
                                  (*(int *)(param_3 + 0x60) - 1U &
                                  (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar16) +
                                  (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar16 >> 4)) * 4);
        local_58 = uVar17;
        if (iVar5 != -1) {
          lVar12 = *(longlong *)(param_3 + 0x20);
          if (*(longlong *)(param_3 + 0x20) == 0) {
            lVar12 = param_3;
          }
          do {
            if (*(longlong *)(lVar12 + (longlong)iVar5 * 0x10) == lVar9) goto LAB_140dbfd3b;
            iVar5 = *(int *)((longlong)iVar5 * 0x10 + lVar12 + 8);
          } while (iVar5 != -1);
        }
      }
      FUN_142b4ac8e(param_2,local_4c,lVar13 + (longlong)iVar15 * 0x10);
      iVar3 = *(int *)(param_1 + 0x40);
LAB_140dbfd3b:
      uVar18 = (uint)local_68 & ~(uint)uVar19;
      puVar7 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x30);
      }
      iVar15 = (int)uVar17;
      lVar13 = (longlong)iVar15;
      uVar16 = puVar7[lVar13] & uVar18;
      if (uVar16 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar15) {
          iVar6 = iVar15;
        }
        if (iVar5 <= iVar15) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar16 = puVar7[lVar13 + lVar9 + 1];
          if (uVar16 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar6 - lVar13 == lVar9) goto LAB_140dbfdd5;
        }
        uVar17 = (ulonglong)(iVar15 + (int)lVar9 + 1);
        uVar18 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar19 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar15 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar3);
  }
LAB_140dbfdd5:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dbfe18 FUN_140dbfe18 body=45 status=ok
// SIG undefined FUN_140dbfe18(void)

undefined8 FUN_140dbfe18(undefined8 param_1,int param_2)

{
  FUN_140dbfe46();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 140dbfe46 FUN_140dbfe46 body=145 status=ok
// SIG undefined FUN_140dbfe46(void)

void FUN_140dbfe46(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b49c220;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140dbfed8 FUN_140dbfed8 body=109 status=ok
// SIG undefined FUN_140dbfed8(void)

undefined8 FUN_140dbfed8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined ***local_28;
  undefined **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_140dbff46();
  local_18 = &PTR_FUN_149fcf6f0;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_28 = &local_18;
    uVar2 = FUN_1411bde97(*(undefined8 *)(lVar1 + 0x10),lVar1,0,param_1 + 0x20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dbff46 FUN_140dbff46 body=149 status=ok
// SIG undefined FUN_140dbff46(void)

longlong * FUN_140dbff46(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = DAT_14cb0d2b0;
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      if (DAT_14cb0d2b0 != 0) {
        if (*(longlong **)(DAT_14cb0d2b0 + 0x2c8) != (longlong *)0x0) {
          return *(longlong **)(DAT_14cb0d2b0 + 0x2c8);
        }
        FUN_145876474(DAT_14cb0d2b0);
        return *(longlong **)(lVar4 + 0x2c8);
      }
    }
    else if ((cVar1 == '\x01') && (param_2 != (longlong *)0x0)) {
      uVar3 = (**(code **)(*param_2 + 0x180))(param_2);
      lVar4 = FUN_140334a94(param_2,uVar3);
      if (lVar4 != 0) {
        plVar2 = *(longlong **)(lVar4 + 0x398);
        if (DAT_14c950c29 != '\x01') {
          return plVar2;
        }
        if (plVar2 == (longlong *)0x0) {
          return (longlong *)0x0;
        }
        FUN_1456cec3c(plVar2);
        return plVar2;
      }
    }
    param_2 = (longlong *)0x0;
  }
  return param_2;
}



// FUNCTION 140dbffdc FUN_140dbffdc body=32 status=ok
// SIG undefined FUN_140dbffdc(void)

undefined8 * FUN_140dbffdc(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14aac7310;
  return param_1;
}



// FUNCTION 140dbfffc FUN_140dbfffc body=476 status=ok
// SIG undefined FUN_140dbfffc(void)

undefined8 FUN_140dbfffc(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar8 = *(longlong *)(param_1 + 0x48);
  if ((param_3 == '\x02') && (*(int *)(lVar8 + 0x108) == 2)) {
    cVar5 = FUN_14037e5a4(param_1);
    if (cVar5 != '\0') {
      *(undefined1 *)(param_1 + 0xf8) = 0;
    }
LAB_140dc0036:
    if ((*(char *)(lVar8 + 0x10c) == '\x01') && (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0))
    {
      if ((*(int *)(param_1 + 0xec) != 0) &&
         ((uVar4 = *(uint *)(param_1 + 0xe8), -1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)))) {
        lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        if ((lVar8 != 0) &&
           ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0xec) &&
            ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x50))();
          FUN_140dc01da(uVar6,&local_30,*(undefined1 *)(param_1 + 0xd8));
          if (local_30 != 0) {
            lVar8 = *(longlong *)(local_30 + 0x30);
            lVar7 = FUN_140ed0e8c();
            plVar2 = local_28;
            lVar8 = *(longlong *)(lVar8 + 0x10);
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              if (local_28 == (longlong *)0x0) {
                FUN_1410c9a0e(local_30,0);
              }
              else {
                LOCK();
                *(int *)(local_28 + 1) = (int)local_28[1] + 1;
                UNLOCK();
                FUN_1410c9a0e(local_30,0);
                LOCK();
                plVar1 = plVar2 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar2)(plVar2);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar2 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar2 + 0x10))(plVar2);
                  }
                }
                if (local_28 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_28 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_28)(local_28);
                    LOCK();
                    piVar3 = (int *)((longlong)local_28 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*local_28 + 0x10))(local_28);
                    }
                  }
                }
              }
              uVar6 = 0;
              goto LAB_140dc00dd;
            }
          }
          if (local_28 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_28 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_28)(local_28);
              LOCK();
              piVar3 = (int *)((longlong)local_28 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*local_28 + 0x10))(local_28);
              }
            }
          }
        }
      }
    }
  }
  else if (param_3 != '\x04') goto LAB_140dc0036;
  uVar6 = 1;
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    *(undefined1 *)(param_1 + 0xb5) = 1;
  }
LAB_140dc00dd:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dc01da FUN_140dc01da body=77 status=ok
// SIG undefined FUN_140dc01da(void)

void FUN_140dc01da(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
    lVar3 = (longlong)*(int *)(param_1 + 0x48) << 4;
    do {
      lVar1 = *plVar2;
      if ((lVar1 != 0) && (*(char *)(lVar1 + 0x40) == param_3)) {
        if (plVar2 != (longlong *)0x0) {
          *param_2 = lVar1;
          lVar3 = plVar2[1];
          param_2[1] = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          return;
        }
        break;
      }
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 140dc023e FUN_140dc023e body=319 status=ok
// SIG undefined FUN_140dc023e(void)

void FUN_140dc023e(longlong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  bool bVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = (**(code **)(*param_1 + 0x180))();
  if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x155) & 0x20) == 0)) {
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x91);
    iVar2 = *(int *)((longlong)param_1 + 0x44);
    *(int *)((longlong)param_1 + 0x44) = iVar2 + 1;
    uVar8 = (ulonglong)(int)param_1[7];
    if ((longlong)uVar8 < 1) {
      *(int *)((longlong)param_1 + 0x44) = iVar2;
    }
    else {
      bVar9 = false;
      do {
        lVar7 = uVar8 * 0x10 + -8;
        uVar10 = uVar8;
        while ((lVar3 = param_1[6], *(int *)(lVar3 + lVar7) != 0 &&
               (plVar4 = *(longlong **)(lVar3 + -8 + lVar7), plVar4 != (longlong *)0x0))) {
          cVar6 = (**(code **)(*plVar4 + 0x60))
                            (plVar4,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
          if (cVar6 == '\0') break;
          lVar7 = lVar7 + -0x10;
          bVar5 = uVar10 < 2;
          uVar10 = uVar10 - 1;
          if (bVar5) {
            *(int *)((longlong)param_1 + 0x44) = *(int *)((longlong)param_1 + 0x44) + -1;
            if (!bVar9) goto LAB_140dc02f1;
            goto LAB_140dc036f;
          }
        }
        uVar8 = uVar10 - 1;
        bVar9 = true;
      } while (1 < uVar10);
      *(int *)((longlong)param_1 + 0x44) = *(int *)((longlong)param_1 + 0x44) + -1;
LAB_140dc036f:
      FUN_14474d06a(param_1 + 6,0);
    }
LAB_140dc02f1:
    local_40.s.LowPart._0_1_ = *(undefined1 *)((longlong)param_1 + 0x91);
    FUN_1447cd2ec(param_1 + 0xd);
    QueryPerformanceCounter(&local_40);
    param_1[0x10] =
         (longlong)
         ((double)CONCAT71(local_40.QuadPart._1_7_,local_40.s.LowPart._0_1_) * DAT_14c83f420 +
         16777216.0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dc037e FUN_140dc037e body=6045 status=ok
// SIG undefined FUN_140dc037e(void)

undefined8 *
FUN_140dc037e(undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
             undefined4 param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  int *piVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  byte bVar14;
  int iVar15;
  uint *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar19;
  longlong *plVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined1 auStack_438 [32];
  undefined1 local_418;
  undefined8 *local_408;
  ulonglong local_400;
  uint *local_3f8;
  int local_3f0;
  undefined4 local_3ec;
  undefined8 *local_3e8;
  longlong *local_3e0;
  longlong *local_3d8;
  longlong local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  ulonglong local_3b8;
  longlong *local_3b0;
  longlong local_3a8;
  int local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined1 local_388 [8];
  int local_380;
  uint local_378;
  int iStack_374;
  int iStack_370;
  int iStack_36c;
  void *local_368;
  int local_360;
  longlong local_358;
  int local_350;
  longlong local_348;
  uint local_340;
  undefined8 local_334;
  undefined4 local_32c;
  longlong local_328 [2];
  uint *local_318 [2];
  longlong local_308 [3];
  undefined8 local_2f0;
  int local_2e8;
  int iStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  int local_2c0;
  longlong local_2b8;
  int local_2b0;
  undefined1 local_2a8 [64];
  longlong local_268;
  undefined4 local_260;
  undefined8 local_258;
  longlong *local_250;
  undefined1 local_248 [48];
  longlong local_218;
  undefined4 local_210;
  undefined8 *local_208;
  undefined8 uStack_200;
  uint local_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  uint *local_1e8;
  uint local_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  int iStack_1d4;
  uint local_1d0 [2];
  uint *local_1c8;
  int local_1c0;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_438;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = param_5;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3ff00000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3ff00000;
  param_1[0x14] = 0x3ff0000000000000;
  param_1[0x15] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  local_408 = param_1;
  local_3e8 = param_4;
  if (param_2 != 0) {
    param_1[1] = param_2;
    goto LAB_140dc0492;
  }
  plVar12 = (longlong *)FUN_14001cc68(0xc0,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14be867f0;
  FUN_1414db454(plVar12 + 2);
  puVar27 = local_408;
  if (plVar12 == (longlong *)0x0) {
    local_408[5] = 0x10;
    plVar20 = (longlong *)local_408[6];
    if (plVar20 != (longlong *)0x0) {
      local_408[6] = 0;
LAB_140dc1783:
      LOCK();
      plVar2 = plVar20 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar11 = (int *)((longlong)plVar20 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
      if (plVar12 != (longlong *)0x0) goto LAB_140dc17a7;
    }
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    local_408[5] = plVar12 + 2;
    plVar20 = (longlong *)local_408[6];
    if (plVar12 == plVar20) {
      LOCK();
      plVar20 = plVar12 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar11 = (int *)((longlong)plVar12 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    else {
      local_408[6] = plVar12;
      if (plVar20 != (longlong *)0x0) goto LAB_140dc1783;
    }
LAB_140dc17a7:
    LOCK();
    plVar20 = plVar12 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar11 = (int *)((longlong)plVar12 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  puVar13 = (undefined1 *)FUN_14001cc68(0x28,0x10);
  local_258 = param_1[5];
  local_250 = (longlong *)puVar27[6];
  if (local_250 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_250 + 1) = (int)local_250[1] + 1;
    UNLOCK();
  }
  local_208 = &local_258;
  uStack_200 = local_248;
  FUN_14062e434(&local_1b8);
  *puVar13 = 0;
  *(undefined8 *)(puVar13 + 8) = 0;
  *(undefined8 *)(puVar13 + 0x10) = 0;
  *(undefined8 *)(puVar13 + 0x18) = 0;
  *(undefined8 *)(puVar13 + 0x20) = 0;
  FUN_14062e584(puVar13,&local_1b8);
  local_408[1] = puVar13;
  FUN_14062e3e9(local_1b8,uStack_1b0 & 0xffffffff);
  if (local_1b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar12 = local_250;
  if (local_250 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_250 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*local_250)(local_250);
      LOCK();
      piVar11 = (int *)((longlong)plVar12 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
LAB_140dc0492:
  puVar27 = local_408;
  plVar12 = local_408 + 0x1c;
  *local_408 = param_3;
  if (param_3 == (longlong *)0x0) {
    FUN_140dc256c(plVar12,0);
  }
  else {
    uVar8 = (**(code **)(*param_3 + 8))(param_3);
    local_3b0 = plVar12;
    FUN_140dc256c(plVar12,uVar8);
    if (0 < (int)uVar8) {
      uVar22 = 0;
      local_3b8 = (ulonglong)uVar8;
      do {
        local_400 = uVar22;
        (**(code **)(*(longlong *)*puVar27 + 0x68))((longlong *)*puVar27,&local_348);
        uVar8 = local_340;
        local_1e8 = (uint *)0x0;
        local_1e0 = 0;
        local_208 = (undefined8 *)0x0;
        uStack_200 = (undefined1 *)0x0;
        uStack_1dc = 0x80;
        uStack_1d8 = 0xffffffff;
        iStack_1d4 = 0;
        local_1c8 = (uint *)0x0;
        local_1c0 = 0;
        if ((longlong)(int)local_340 != 0) {
          if ((int)local_340 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b((longlong)(int)local_340);
          }
          FUN_140549ad6(&local_208);
          iVar9 = (uint)uStack_200;
          lVar30 = (longlong)(int)(uint)uStack_200;
          uStack_200 = (undefined1 *)CONCAT44(uStack_200._4_4_,(uint)uStack_200 + uVar8);
          if (uStack_200._4_4_ - iVar9 < uVar8) {
            FUN_140549c28(&local_208);
          }
          uVar22 = (ulonglong)uVar8;
          if (iVar9 < (int)uVar8) {
            puVar16 = (uint *)((longlong)local_208 + uVar22 * 0x28 + -0x24);
            uVar31 = uVar22;
            do {
              uVar1 = uVar31 - 1;
              if (iStack_1d4 == 0) {
                uVar29 = (int)uVar31 - 1;
              }
              else {
                *(int *)(local_208 + (longlong)(int)uStack_1d8 * 5) = (int)uVar31 + -1;
                uVar29 = (uint)uVar1;
              }
              puVar16[-1] = 0xffffffff;
              uVar24 = 0xffffffff;
              if (0 < iStack_1d4) {
                uVar24 = uStack_1d8;
              }
              *puVar16 = uVar24;
              iStack_1d4 = iStack_1d4 + 1;
              puVar16 = puVar16 + -10;
              uVar31 = uVar1;
              uStack_1d8 = uVar29;
            } while (lVar30 < (longlong)uVar1);
          }
          local_1e0 = uVar8;
          uVar31 = uVar22 + 0x1f >> 5;
          uVar29 = (uint)uVar31;
          if (uStack_1dc + 0x1f >> 5 < uVar29) {
            FUN_14499171c(&local_1f8,0,uVar31,4);
            uStack_1dc = (uint)(uVar22 + 0x1f) & 0xffffffe0;
          }
          puVar16 = local_1e8;
          if (local_1e8 == (uint *)0x0) {
            puVar16 = &local_1f8;
          }
          if (uVar8 < 0x101) {
            uVar29 = uVar29 + (uVar29 == 0);
          }
          memset(puVar16,0,(ulonglong)(uVar29 << 2));
          uVar29 = local_1e0 + 0x1f;
          if (-1 < (int)local_1e0) {
            uVar29 = local_1e0;
          }
          if ((int)local_1e0 % 0x20 != 0) {
            puVar16 = local_1e8;
            if (local_1e8 == (uint *)0x0) {
              puVar16 = &local_1f8;
            }
            bVar14 = -(char)((int)local_1e0 % 0x20);
            puVar16[(int)uVar29 >> 5] =
                 (puVar16[(int)uVar29 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
          }
          if (uVar8 < 4) {
            iVar9 = 1;
          }
          else {
            uVar8 = (uVar8 | 1) + 0xe;
            iVar9 = 0x1f;
            if (uVar8 != 0) {
              for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
              }
            }
            iVar9 = 1 << ((byte)iVar9 & 0x1f);
          }
          if ((local_1c0 == 0) || (local_1c0 < iVar9)) {
            local_1c0 = iVar9;
            FUN_140dc3334(&local_208);
          }
        }
        (**(code **)(*(longlong *)*puVar27 + 0x78))((longlong *)*puVar27,&local_358,local_400);
        if (0 < (int)local_340) {
          lVar30 = 0;
          do {
            if (lVar30 < local_350) {
              lVar17 = lVar30 * 0x10;
              lVar18 = *(longlong *)(local_358 + lVar17);
              uVar21 = *(undefined4 *)(local_358 + 8 + lVar17);
              uVar19 = *(undefined4 *)(local_358 + 0xc + lVar17);
            }
            else {
              uVar21 = 0;
              lVar18 = 0;
              uVar19 = local_3ec;
            }
            FUN_1400021e4(lVar30 * 8 + local_348,&local_1b8);
            uVar8 = uStack_1d8;
            uVar22 = (ulonglong)uStack_200;
            if (iStack_1d4 == 0) {
              uVar8 = (uint)uStack_200;
              uStack_200 = (undefined1 *)CONCAT44(uStack_200._4_4_,(uint)uStack_200 + 1);
              if (uStack_200._4_4_ == uVar8) {
                FUN_140549c28(&local_208,uVar22 & 0xffffffff);
              }
              lVar17 = (longlong)(int)uVar8;
              iVar9 = FUN_144a54ea4(&local_1f8,1);
              puVar16 = local_1e8;
              if (local_1e8 == (uint *)0x0) {
                puVar16 = &local_1f8;
              }
              iVar15 = iVar9 + 0x1f;
              if (-1 < iVar9) {
                iVar15 = iVar9;
              }
              bVar14 = (byte)iVar9 & 0x1f;
              puVar16[iVar15 >> 5] =
                   puVar16[iVar15 >> 5] & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
              puVar27 = local_408;
            }
            else {
              lVar17 = (longlong)(int)uStack_1d8;
              uStack_1d8 = *(uint *)((longlong)local_208 + lVar17 * 0x28 + 4);
              iStack_1d4 = iStack_1d4 + -1;
              if (iStack_1d4 != 0) {
                *(undefined4 *)(local_208 + (longlong)(int)uStack_1d8 * 5) = 0xffffffff;
              }
            }
            puVar16 = local_1e8;
            if (local_1e8 == (uint *)0x0) {
              puVar16 = &local_1f8;
            }
            uVar29 = uVar8 + 0x1f;
            if (-1 < (int)uVar8) {
              uVar29 = uVar8;
            }
            puVar16[(int)uVar29 >> 5] = puVar16[(int)uVar29 >> 5] | 1 << ((byte)uVar8 & 0x1f);
            plVar12 = local_208 + lVar17 * 5;
            *plVar12 = (longlong)local_1b8;
            uVar22 = 0;
            local_1b8 = (longlong *)0x0;
            *(int *)(plVar12 + 1) = (int)uStack_1b0;
            *(uint *)((longlong)plVar12 + 0xc) = uStack_1b0._4_4_;
            uStack_1b0 = 0;
            plVar12[2] = lVar18;
            *(undefined4 *)(plVar12 + 3) = uVar21;
            *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar19;
            *(undefined4 *)(plVar12 + 4) = 0xffffffff;
            iVar9 = (int)plVar12[1];
            iVar15 = iVar9 + -1;
            if (iVar9 == 0) {
              iVar15 = 0;
            }
            if (0 < iVar15) {
              puVar10 = &DAT_149dfb77a;
              if (iVar9 != 0) {
                puVar10 = (undefined2 *)*plVar12;
              }
              lVar18 = 0;
              uVar22 = 0;
              do {
                uVar29 = ((uint)(0x19 < (ushort)puVar10[lVar18] - 0x61) * 0x20 +
                         (uint)(ushort)puVar10[lVar18]) - 0x20;
                uVar24 = (uint)(uVar22 >> 8) ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar22 ^ uVar29) & 0xff) * 4)
                ;
                uVar22 = (ulonglong)
                         (uVar24 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar24 & 0xff ^ uVar29 >> 8 & 0xff) * 4));
                lVar18 = lVar18 + 1;
              } while (iVar15 != (int)lVar18);
            }
            iVar9 = 1;
            local_3ec = uVar19;
            if ((uint)uStack_200 - iStack_1d4 == 1) {
              uVar29 = 1;
LAB_140dc09bc:
              if (((int)uVar29 < 1) || (iVar9 <= local_1c0)) {
                uVar29 = local_1c0 - 1U & (uint)uVar22;
                *(uint *)((longlong)plVar12 + 0x24) = uVar29;
                puVar16 = local_1c8;
                if (local_1c8 == (uint *)0x0) {
                  puVar16 = local_1d0;
                }
                *(uint *)(plVar12 + 4) = puVar16[(longlong)local_1c0 - 1U & (longlong)(int)uVar29];
                puVar16 = local_1c8;
                if (local_1c8 == (uint *)0x0) {
                  puVar16 = local_1d0;
                }
                puVar16[(longlong)local_1c0 - 1U & (longlong)(int)uVar29] = uVar8;
              }
              else {
                local_1c0 = iVar9;
                FUN_140dc3334();
              }
            }
            else {
              iVar15 = FUN_140aad9fa(&local_208,uVar22,plVar12);
              puVar28 = local_208;
              if (iVar15 == -1) {
                uVar29 = (uint)uStack_200 - iStack_1d4;
                if (3 < uVar29) {
                  uVar31 = (ulonglong)(uVar29 & 0xfffffffe) + 0xf;
                  lVar18 = 0x3f;
                  if (uVar31 != 0) {
                    for (; uVar31 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                    }
                  }
                  iVar9 = 1 << ((byte)lVar18 & 0x1f);
                }
                goto LAB_140dc09bc;
              }
              if (local_208[(longlong)iVar15 * 5] != 0) {
                FUN_1400020a8();
              }
              puVar28 = puVar28 + (longlong)iVar15 * 5;
              lVar18 = *plVar12;
              uVar21 = *(undefined4 *)((longlong)plVar12 + 4);
              lVar17 = plVar12[1];
              uVar19 = *(undefined4 *)((longlong)plVar12 + 0xc);
              uVar4 = *(undefined4 *)((longlong)plVar12 + 0x14);
              lVar7 = plVar12[3];
              uVar6 = *(undefined4 *)((longlong)plVar12 + 0x1c);
              *(int *)(puVar28 + 2) = (int)plVar12[2];
              *(undefined4 *)((longlong)puVar28 + 0x14) = uVar4;
              *(int *)(puVar28 + 3) = (int)lVar7;
              *(undefined4 *)((longlong)puVar28 + 0x1c) = uVar6;
              *(int *)puVar28 = (int)lVar18;
              *(undefined4 *)((longlong)puVar28 + 4) = uVar21;
              *(int *)(puVar28 + 1) = (int)lVar17;
              *(undefined4 *)((longlong)puVar28 + 0xc) = uVar19;
              FUN_149801412(&local_208,uVar8);
              puVar27 = local_408;
            }
            if (local_1b8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            lVar30 = lVar30 + 1;
          } while (lVar30 < (int)local_340);
        }
        uVar22 = local_400;
        (**(code **)(*(longlong *)*puVar27 + 0x80))
                  ((longlong *)*puVar27,&local_258,local_400 & 0xffffffff);
        (**(code **)(*(longlong *)*puVar27 + 0x88))
                  ((longlong *)*puVar27,local_2a8,uVar22 & 0xffffffff);
        (**(code **)(*(longlong *)*puVar27 + 0x90))
                  ((longlong *)*puVar27,local_308 + 2,uVar22 & 0xffffffff);
        plVar12 = *(longlong **)((char *)puVar27[1] + 0x18);
        if (*(char *)puVar27[1] == '\0') {
          plVar12 = plVar12 + local_400;
        }
        lVar30 = *plVar12;
        FUN_140056680(&local_1b8,L"UseGeodesicTethers");
        iVar9 = FUN_144a41c6c(lVar30,&local_1b8);
        if (iVar9 == -1) {
          uVar8 = (uint)CONCAT71((int7)((ulonglong)lVar30 >> 8),1);
        }
        else {
          uVar8 = -(uint)(*(float *)(*(longlong *)(lVar30 + 0x18) + (longlong)iVar9 * 0xc) != 0.0) &
                  1;
        }
        if (local_1b8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar22 = local_400;
        (**(code **)(*(longlong *)*puVar27 + 0x98))
                  ((longlong *)*puVar27,&local_368,local_400 & 0xffffffff,uVar8);
        (**(code **)(*(longlong *)*puVar27 + 0x60))
                  ((longlong *)*puVar27,&local_378,uVar22 & 0xffffffff);
        (**(code **)(*(longlong *)*puVar27 + 0x58))
                  ((longlong *)*puVar27,local_388,uVar22 & 0xffffffff);
        (**(code **)(*(longlong *)*puVar27 + 0x40))
                  ((longlong *)*puVar27,&local_398,uVar22 & 0xffffffff);
        (**(code **)(*(longlong *)*puVar27 + 0x50))
                  ((longlong *)*puVar27,&local_3a8,uVar22 & 0xffffffff);
        iVar9 = (**(code **)(*(longlong *)*puVar27 + 0x28))
                          ((longlong *)*puVar27,uVar22 & 0xffffffff);
        piVar11 = (int *)FUN_14001cc68(0x470,0x10);
        *piVar11 = iVar9;
        piVar11[0x12] = 0;
        piVar11[0x13] = 0;
        piVar11[0x14] = 0;
        *(undefined8 **)(piVar11 + 2) = local_208;
        local_208 = (undefined8 *)0x0;
        piVar11[4] = (uint)uStack_200;
        piVar11[5] = uStack_200._4_4_;
        uStack_200 = (undefined1 *)0x0;
        if (local_1e8 == (uint *)0x0) {
          piVar11[6] = local_1f8;
          piVar11[7] = iStack_1f4;
          piVar11[8] = iStack_1f0;
          piVar11[9] = iStack_1ec;
        }
        *(uint **)(piVar11 + 10) = local_1e8;
        local_1e8 = (uint *)0x0;
        *(ulonglong *)(piVar11 + 0xc) = CONCAT44(uStack_1dc,local_1e0);
        local_1e0 = 0;
        uStack_1dc = 0;
        *(ulonglong *)(piVar11 + 0xe) = CONCAT44(iStack_1d4,uStack_1d8);
        uStack_1d8 = 0xffffffff;
        iStack_1d4 = 0;
        if (local_1c8 == (uint *)0x0) {
          piVar11[0x10] = local_1d0[0];
        }
        *(uint **)(piVar11 + 0x12) = local_1c8;
        local_1c8 = (uint *)0x0;
        piVar11[0x14] = local_1c0;
        local_1c0 = 0;
        FUN_140dc2122(piVar11 + 0x16,&local_258);
        FUN_140dc2122(piVar11 + 0x2a,local_2a8);
        pvVar5 = local_368;
        piVar11[0x4e] = 0;
        piVar11[0x4f] = 0;
        piVar11[0x50] = 0;
        *(longlong *)(piVar11 + 0x3e) = local_308[2];
        local_308[2] = 0;
        piVar11[0x40] = (int)local_2f0;
        piVar11[0x41] = local_2f0._4_4_;
        local_2f0 = 0;
        if (local_2d8 == 0) {
          piVar11[0x42] = local_2e8;
          piVar11[0x43] = iStack_2e4;
          piVar11[0x44] = iStack_2e0;
          piVar11[0x45] = iStack_2dc;
        }
        *(longlong *)(piVar11 + 0x46) = local_2d8;
        local_2d8 = 0;
        *(undefined8 *)(piVar11 + 0x48) = local_2d0;
        local_2d0 = 0;
        *(undefined8 *)(piVar11 + 0x4a) = local_2c8;
        local_2c8 = 0xffffffff;
        if (local_2b8 == 0) {
          piVar11[0x4c] = local_2c0;
        }
        lVar30 = (longlong)local_360;
        *(longlong *)(piVar11 + 0x4e) = local_2b8;
        local_2b8 = 0;
        piVar11[0x50] = local_2b0;
        local_2b0 = 0;
        piVar11[0x52] = 0;
        piVar11[0x53] = 0;
        piVar11[0x54] = local_360;
        if (lVar30 == 0) {
          piVar11[0x55] = 0;
        }
        else {
          FUN_140dc28f2(piVar11 + 0x52,local_360);
          memcpy(*(void **)(piVar11 + 0x52),pvVar5,lVar30 << 4);
        }
        plVar12 = (longlong *)(piVar11 + 0x56);
        iVar9 = *piVar11;
        FUN_140dc1ca4(plVar12);
        *(undefined8 *)(piVar11 + 0xa8) = local_398;
        *(undefined8 *)(piVar11 + 0xaa) = uStack_390;
        piVar11[0xac] = local_378;
        piVar11[0xad] = iStack_374;
        piVar11[0xae] = iStack_370;
        piVar11[0xaf] = iStack_36c;
        piVar11[0xb0] = 0;
        piVar11[0xb1] = 0;
        piVar11[0xb2] = 0;
        piVar11[0xb3] = 0;
        if (local_3a0 == local_380) {
          plVar20 = (longlong *)(piVar11 + 0xb0);
          iVar15 = piVar11[0xaa];
          FUN_140dc2c5c(plVar12,local_388,iVar15);
          if (iVar15 == 0) {
            piVar11[0xb2] = 0;
            if (piVar11[0xb3] < 0) {
              FUN_1457ac0ca(plVar20);
            }
          }
          else {
            local_178 = 0;
            local_170 = 0;
            local_1b8 = (longlong *)0x0;
            uStack_1b0 = 0;
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_198 = 0;
            uStack_190 = 0;
            local_16c = 0xffffffff00000080;
            local_164 = 0;
            local_158 = 0;
            local_150 = 0;
            local_118 = 0;
            local_110 = 0;
            local_148 = 0;
            uStack_140 = 0;
            local_138 = 0;
            uStack_130 = 0;
            local_10c = 0xffffffff00000080;
            local_104 = 0;
            local_f8 = 0;
            local_f0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_bc = 0xffffffff00000080;
            local_b4 = 0;
            local_a8 = 0;
            local_a0 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
            FUN_140dc2c5c(&local_1b8,&local_3a8,iVar9);
            local_308[0] = 0;
            local_308[1] = 0;
            FUN_141087922(local_308,uStack_1b0 & 0xffffffff,1);
            if (0 < (int)uStack_1b0) {
              lVar30 = 8;
              lVar18 = 0;
              do {
                iVar9 = *(int *)((longlong)local_1b8 + lVar30);
                iVar15 = *(int *)((longlong)local_1b8 + lVar30 + -8);
                iVar23 = *(int *)((longlong)local_1b8 + lVar30 + -4);
                iVar26 = iVar23;
                if (((iVar15 != iVar23) && (iVar26 = iVar15, iVar23 <= iVar15 != iVar15 < iVar9)) &&
                   (iVar26 = iVar23, iVar23 < iVar9 != iVar15 < iVar23)) {
                  iVar26 = iVar9;
                }
                iVar25 = iVar15;
                if (iVar15 < iVar23) {
                  iVar25 = iVar23;
                }
                if (iVar25 < iVar9) {
                  iVar25 = iVar9;
                }
                if (iVar15 < iVar23) {
                  iVar23 = iVar15;
                }
                if (iVar9 <= iVar23) {
                  iVar23 = iVar9;
                }
                *(int *)(local_308[0] + -8 + lVar30) = iVar23;
                *(int *)(local_308[0] + -4 + lVar30) = iVar26;
                *(int *)(local_308[0] + lVar30) = iVar25;
                lVar18 = lVar18 + 1;
                lVar30 = lVar30 + 0xc;
              } while (lVar18 < (int)uStack_1b0);
            }
            FUN_140aaccac(&local_1b8,local_318);
            local_328[0] = 0;
            local_328[1] = 0;
            local_334 = 0xffffffffffffffff;
            local_32c = 0xffffffff;
            FUN_1457ac0fa(local_328,&local_334,uStack_1b0 & 0xffffffff);
            if (0 < piVar11[0x58]) {
              local_3e0 = (longlong *)(piVar11 + 0xac);
              local_3f8 = local_318[0];
              lVar30 = 0;
              do {
                local_3c0 = lVar30;
                local_3c8 = *plVar12;
                local_3d0 = local_3c0 * 3;
                lVar30 = *local_3e0;
                iVar9 = *(int *)(lVar30 + (longlong)*(int *)(local_3c8 + 8 + local_3c0 * 0xc) * 4);
                local_3f0 = *(int *)(lVar30 + (longlong)*(int *)(local_3c8 + 4 + local_3c0 * 0xc) *
                                              4);
                iVar15 = *(int *)(lVar30 + (longlong)*(int *)(local_3c8 + local_3c0 * 0xc) * 4);
                iVar23 = local_3f0;
                if (((iVar15 != local_3f0) &&
                    (iVar23 = iVar15, local_3f0 <= iVar15 != iVar15 < iVar9)) &&
                   (iVar23 = local_3f0, local_3f0 < iVar9 != iVar15 < local_3f0)) {
                  iVar23 = iVar9;
                }
                iVar26 = iVar15;
                if (iVar15 < local_3f0) {
                  iVar26 = local_3f0;
                }
                if (iVar26 < iVar9) {
                  iVar26 = iVar9;
                }
                iVar25 = local_3f0;
                if (iVar15 < local_3f0) {
                  iVar25 = iVar15;
                }
                if (iVar9 <= iVar25) {
                  iVar25 = iVar9;
                }
                local_3d8 = plVar20;
                if (((iVar25 != *(int *)(local_308[0] + local_3c0 * 0xc)) ||
                    (lVar30 = local_308[0] + local_3c0 * 0xc, iVar23 != *(int *)(lVar30 + 4))) ||
                   ((iVar26 != *(int *)(lVar30 + 8) ||
                    (((*(int *)(local_328[0] + local_3c0 * 0xc) != -1 ||
                      (lVar30 = local_328[0] + local_3c0 * 0xc, *(int *)(lVar30 + 4) != -1)) ||
                     (*(int *)(lVar30 + 8) != -1)))))) {
                  if ((longlong)(int)local_318[0][(longlong)iVar15 * 4 + 2] != 0) {
                    lVar30 = 0;
                    while( true ) {
                      lVar18 = (longlong)
                               *(int *)(*(longlong *)(local_318[0] + (longlong)iVar15 * 4) + lVar30)
                      ;
                      if (((*(int *)(local_308[0] + lVar18 * 0xc) == iVar25) &&
                          (lVar17 = local_308[0] + lVar18 * 0xc, *(int *)(lVar17 + 4) == iVar23)) &&
                         (((*(int *)(lVar17 + 8) == iVar26 &&
                           ((*(int *)(local_328[0] + lVar18 * 0xc) == -1 &&
                            (lVar17 = local_328[0] + lVar18 * 0xc, *(int *)(lVar17 + 4) == -1)))) &&
                          (*(int *)(lVar17 + 8) == -1)))) break;
                      lVar30 = lVar30 + 4;
                      if ((longlong)(int)local_318[0][(longlong)iVar15 * 4 + 2] * 4 == lVar30)
                      goto LAB_140dc144c;
                    }
                    if (*(int *)(*(longlong *)(local_318[0] + (longlong)iVar15 * 4) + lVar30) != -1)
                    goto LAB_140dc11e5;
                  }
LAB_140dc144c:
                  FUN_140dc2bb8(plVar12);
                  goto LAB_140dc1454;
                }
                lVar18 = (longlong)(int)local_3c0;
LAB_140dc11e5:
                lVar30 = local_3c8 + local_3c0 * 0xc;
                lVar18 = lVar18 * 0xc;
                uVar22 = (ulonglong)((local_3f0 != *(int *)((longlong)local_1b8 + lVar18)) + 1);
                if (iVar15 == *(int *)((longlong)local_1b8 + lVar18)) {
                  uVar22 = 0;
                }
                *(undefined4 *)(local_328[0] + lVar18) = *(undefined4 *)(lVar30 + uVar22 * 4);
                iVar9 = *(int *)((longlong)local_1b8 + lVar18 + 4);
                uVar8 = (local_3f0 != iVar9) + 1;
                if (iVar15 == iVar9) {
                  uVar8 = 0;
                }
                *(undefined4 *)(local_328[0] + 4 + lVar18) =
                     *(undefined4 *)(lVar30 + (ulonglong)uVar8 * 4);
                iVar9 = *(int *)((longlong)local_1b8 + lVar18 + 8);
                uVar22 = (ulonglong)((local_3f0 != iVar9) + 1);
                if (iVar15 == iVar9) {
                  uVar22 = 0;
                }
                *(undefined4 *)(local_328[0] + 8 + lVar18) = *(undefined4 *)(lVar30 + uVar22 * 4);
                lVar30 = local_3c0 + 1;
              } while (local_3c0 + 1 < (longlong)piVar11[0x58]);
            }
            FUN_1457ac172(plVar20);
            if (0 < (int)uStack_1b0) {
              plVar12 = (longlong *)(piVar11 + 0xa8);
              lVar30 = 8;
              lVar18 = 0;
              do {
                lVar17 = *plVar20;
                *(undefined8 *)(lVar17 + -0x10 + lVar30 * 2) =
                     *(undefined8 *)(*plVar12 + (longlong)*(int *)(local_328[0] + -8 + lVar30) * 8);
                *(undefined8 *)(lVar17 + -8 + lVar30 * 2) =
                     *(undefined8 *)(*plVar12 + (longlong)*(int *)(local_328[0] + -4 + lVar30) * 8);
                *(undefined8 *)(lVar17 + lVar30 * 2) =
                     *(undefined8 *)(*plVar12 + (longlong)*(int *)(local_328[0] + lVar30) * 8);
                lVar18 = lVar18 + 1;
                lVar30 = lVar30 + 0xc;
              } while (lVar18 < (int)uStack_1b0);
            }
LAB_140dc1454:
            if (local_328[0] != 0) {
              FUN_1400020a8();
            }
            if (local_308[0] != 0) {
              FUN_1400020a8();
            }
            FUN_14062bdec(&local_1b8);
          }
        }
        else {
          FUN_140dc2bb8(plVar12);
        }
        local_3f8 = (uint *)(piVar11 + 0xb4);
        iVar9 = *piVar11;
        FUN_140dc1ca4(local_3f8);
        uVar22 = (ulonglong)(uint)(local_3a0 / 3);
        local_1b8 = (longlong *)0x0;
        uStack_1b0 = 0;
        if (local_3a0 < -2) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar22);
        }
        if (2 < local_3a0) {
          FUN_1405c2e9e(&local_1b8,uVar22);
          lVar30 = 8;
          do {
            uVar31 = uStack_1b0;
            uVar21 = *(undefined4 *)(local_3a8 + -8 + lVar30);
            uVar19 = *(undefined4 *)(local_3a8 + -4 + lVar30);
            uVar4 = *(undefined4 *)(local_3a8 + lVar30);
            lVar18 = (longlong)(int)uStack_1b0;
            uVar8 = (int)uStack_1b0 + 1;
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar8);
            if (uStack_1b0._4_4_ < uVar8) {
              FUN_141087970(&local_1b8,uVar31 & 0xffffffff);
            }
            *(undefined4 *)((longlong)local_1b8 + lVar18 * 0xc) = uVar21;
            *(undefined4 *)((longlong)local_1b8 + lVar18 * 0xc + 4) = uVar19;
            *(undefined4 *)((longlong)local_1b8 + lVar18 * 0xc + 8) = uVar4;
            lVar30 = lVar30 + 0xc;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        puVar16 = local_3f8;
        local_418 = 1;
        FUN_140dc1be2(local_3f8,&local_1b8,0,iVar9 + -1);
        FUN_140aaccac(puVar16,local_308);
        if (local_1b8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        plVar12 = local_3b0;
        puVar27 = local_408;
        piVar11[0x10e] = 0;
        piVar11[0x10f] = 0;
        piVar11[0x110] = 0;
        piVar11[0x106] = 0;
        piVar11[0x107] = 0;
        piVar11[0x108] = 0;
        piVar11[0x109] = 0;
        piVar11[0x111] = 0x80;
        piVar11[0x112] = -1;
        piVar11[0x113] = 0;
        piVar11[0x116] = 0;
        piVar11[0x117] = 0;
        piVar11[0x118] = 0;
        iVar9 = *(int *)(local_408 + 0x1d);
        *(uint *)(local_408 + 0x1d) = iVar9 + 1U;
        if (*(uint *)((longlong)local_408 + 0xec) < iVar9 + 1U) {
          FUN_149801484(local_3b0,iVar9);
        }
        *(int **)(*plVar12 + (longlong)iVar9 * 8) = piVar11;
        if (local_368 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_2b0 = 0;
        if (local_2b8 != 0) {
          FUN_1400020a8();
        }
        FUN_140dc25bc(local_308 + 2);
        local_260 = 0;
        if (local_268 != 0) {
          FUN_1400020a8();
        }
        FUN_140dc236c(local_2a8);
        local_210 = 0;
        if (local_218 != 0) {
          FUN_1400020a8();
        }
        FUN_140dc236c(&local_258);
        if (local_358 != 0) {
          FUN_1400020a8();
        }
        local_1c0 = 0;
        if (local_1c8 != (uint *)0x0) {
          FUN_1400020a8();
        }
        FUN_140dc29c8(&local_208);
        if (local_348 != 0) {
          FUN_1400020a8();
        }
        uVar22 = local_400 + 1;
      } while (uVar22 != local_3b8);
    }
  }
  local_1b8 = (longlong *)0x0;
  uStack_1b0 = 0;
  FUN_140dc38ac(puVar27 + 0x1e);
  puVar28 = puVar27;
  if ((longlong)(int)uStack_1b0 != 0) {
    plVar12 = local_1b8 + (int)uStack_1b0;
    plVar20 = local_1b8;
    do {
      lVar30 = (longlong)*(int *)(*plVar20 + 0x80);
      if (lVar30 != 0) {
        uVar22 = 0;
        do {
          if (*(undefined8 **)(*(longlong *)(*plVar20 + 0x78) + uVar22) == local_408) {
            if ((int)(~uVar22 >> 3) != 0) {
              FUN_144628a1c();
            }
            break;
          }
          uVar22 = uVar22 + 8;
        } while (lVar30 * 8 != uVar22);
      }
      plVar20 = plVar20 + 1;
      puVar28 = local_408;
    } while (plVar20 != plVar12);
  }
  if (local_1b8 != (longlong *)0x0) {
    FUN_1400020a8(local_1b8);
  }
  puVar3 = puVar28 + 2;
  lVar30 = puVar28[2];
  iVar9 = *(int *)(puVar28 + 3);
  puVar28[2] = 0;
  puVar28[3] = 0;
  if (puVar3 != local_3e8) {
    iVar15 = *(int *)(local_3e8 + 1);
    pvVar5 = (void *)*local_3e8;
    *(int *)(puVar28 + 3) = iVar15;
    if ((longlong)iVar15 == 0) {
      *(undefined4 *)((longlong)puVar28 + 0x1c) = 0;
    }
    else {
      FUN_140dc2d7e(puVar3,iVar15,0);
      memcpy((void *)*puVar3,pvVar5,(longlong)iVar15 << 3);
    }
  }
  local_1b8 = (longlong *)0x0;
  uStack_1b0 = 0;
  FUN_140dc38ac(puVar27 + 0x1e,&local_1b8);
  if ((longlong)(int)uStack_1b0 != 0) {
    plVar12 = local_1b8 + (int)uStack_1b0;
    plVar20 = local_1b8;
    do {
      lVar18 = *plVar20;
      if (iVar9 != 0) {
        lVar17 = 0;
        do {
          FUN_1497ef9e0(*(undefined8 *)(lVar30 + lVar17),lVar18,local_408);
          lVar17 = lVar17 + 8;
        } while ((longlong)iVar9 * 8 - lVar17 != 0);
      }
      if ((longlong)*(int *)(lVar18 + 0x80) != 0) {
        uVar22 = 0;
        do {
          if (*(undefined8 **)(*(longlong *)(lVar18 + 0x78) + uVar22) == local_408) {
            if ((int)(~uVar22 >> 3) != 0) {
              FUN_144628a1c();
            }
            break;
          }
          uVar22 = uVar22 + 8;
        } while ((longlong)*(int *)(lVar18 + 0x80) * 8 != uVar22);
      }
      plVar20 = plVar20 + 1;
      puVar28 = local_408;
    } while (plVar20 != plVar12);
  }
  if (local_1b8 != (longlong *)0x0) {
    FUN_1400020a8(local_1b8);
  }
  if (lVar30 != 0) {
    FUN_1400020a8(lVar30);
  }
  if ((local_70 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar28;
}



// FUNCTION 140dc1be2 FUN_140dc1be2 body=124 status=ok
// SIG undefined FUN_140dc1be2(void)

void FUN_140dc1be2(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined8 unaff_RBX;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  param_1[0x28] = 0;
  FUN_140dc1d4c(param_1);
  FUN_140dc220a(param_1,param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 140dc1ca4 FUN_140dc1ca4 body=168 status=ok
// SIG undefined FUN_140dc1ca4(void)

void FUN_140dc1ca4(undefined8 *param_1)

{
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
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
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return;
}



// FUNCTION 140dc1d4c FUN_140dc1d4c body=285 status=ok
// SIG undefined FUN_140dc1d4c(void)

void FUN_140dc1d4c(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0x1c);
  FUN_144716727(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_1403b10bc(param_1 + 0x10,0);
  }
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    FUN_140dc1fce(param_1 + 0x20);
    FUN_146d8b6b2(param_1 + 0x20);
  }
  local_28 = 0;
  uStack_20 = 0;
  FUN_140dc1e6a(param_1 + 0x70);
  if (*(int *)(param_1 + 300) < 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    FUN_1405c2e9e(param_1 + 0x120,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  if (*(int *)(param_1 + 0x13c) < 0) {
    *(undefined4 *)(param_1 + 0x138) = 0;
    FUN_1401adc10(param_1 + 0x130,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dc1e6a FUN_140dc1e6a body=51 status=ok
// SIG undefined FUN_140dc1e6a(void)

void FUN_140dc1e6a(longlong param_1,undefined8 param_2)

{
  FUN_140dc1ef6(param_1 + 0x10,0);
  FUN_140dc1f62(param_1 + 0x60,0);
  FUN_140dc1e9e(param_1,param_2);
  return;
}



// FUNCTION 140dc1e9e FUN_140dc1e9e body=88 status=ok
// SIG undefined FUN_140dc1e9e(void)

undefined8 * FUN_140dc1e9e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146d8cdea(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140dc1ef6 FUN_140dc1ef6 body=107 status=ok
// SIG undefined FUN_140dc1ef6(void)

void FUN_140dc1ef6(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_140dc1f45:
      FUN_14083edc8(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140148e72(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_140dc1f45;
  FUN_140147efc(param_1);
  FUN_14083edc8(param_1,param_2);
  return;
}



// FUNCTION 140dc1f62 FUN_140dc1f62 body=107 status=ok
// SIG undefined FUN_140dc1f62(void)

void FUN_140dc1f62(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_140dc1fb1:
      FUN_14062bf24(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_146d8b9a4(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_140dc1fb1;
  FUN_140dc1fce(param_1);
  FUN_14062bf24(param_1,param_2);
  return;
}



// FUNCTION 140dc1fce FUN_140dc1fce body=339 status=ok
// SIG undefined FUN_140dc1fce(void)

void FUN_140dc1fce(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dc2122 FUN_140dc2122 body=232 status=ok
// SIG undefined FUN_140dc2122(void)

undefined8 * FUN_140dc2122(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar2 = *(undefined4 *)(param_2 + 3);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if (param_2[8] == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_2 + 9) = 0;
  return param_1;
}



// FUNCTION 140dc220a FUN_140dc220a body=353 status=ok
// SIG undefined FUN_140dc220a(void)

void FUN_140dc220a(longlong *param_1,int param_2,int param_3,char param_4)

{
  int *_Dst;
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)(int)param_1[1];
  if (uVar9 == 0) {
    iVar3 = (int)param_1[0x28];
    iVar8 = *(int *)((longlong)param_1 + 0x144) + -1;
  }
  else {
    iVar8 = *(int *)(*param_1 + -0xc + uVar9 * 0xc);
    *(int *)(param_1 + 0x28) = iVar8;
    iVar3 = iVar8;
    if (0 < (int)param_1[1]) {
      lVar7 = uVar9 * 0xc;
      do {
        lVar1 = *param_1;
        _Dst = (int *)(lVar1 + (uVar9 - 1) * 0xc);
        iVar3 = (int)param_1[0x28];
        lVar6 = -0xc;
        do {
          iVar5 = *(int *)(lVar1 + lVar7 + lVar6);
          if (iVar5 <= iVar3) {
            iVar3 = iVar5;
          }
          *(int *)(param_1 + 0x28) = iVar3;
          iVar5 = *(int *)(lVar1 + lVar7 + lVar6);
          if (iVar8 < iVar5) {
            iVar8 = iVar5;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != 0);
        if (param_4 != '\0') {
          if (((*_Dst == _Dst[1]) || (*_Dst == _Dst[2])) || (_Dst[1] == _Dst[2])) {
            uVar4 = *(uint *)(param_1 + 1);
            if (uVar9 != uVar4) {
              iVar5 = uVar4 - (int)uVar9;
              iVar3 = 1;
              if (iVar5 < 1) {
                iVar3 = iVar5;
              }
              memmove(_Dst,(void *)(lVar1 + (longlong)(int)(uVar4 - iVar3) * 0xc),
                      (longlong)iVar3 * 0xc);
              uVar4 = *(uint *)(param_1 + 1);
            }
            *(uint *)(param_1 + 1) = uVar4 - 1;
            FUN_146d8b5fc(param_1);
          }
        }
        lVar7 = lVar7 + -0xc;
        bVar2 = 1 < (longlong)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar2);
      iVar3 = (int)param_1[0x28];
    }
    iVar8 = iVar8 - iVar3;
    *(int *)((longlong)param_1 + 0x144) = iVar8 + 1;
  }
  if ((param_2 <= iVar3) && (iVar8 + iVar3 <= param_3)) {
    *(int *)(param_1 + 0x28) = param_2;
    *(int *)((longlong)param_1 + 0x144) = (param_3 - param_2) + 1;
  }
  return;
}



// FUNCTION 140dc236c FUN_140dc236c body=512 status=ok
// SIG undefined FUN_140dc236c(void)

void FUN_140dc236c(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar10 = 0;
    uVar13 = 1;
    iVar11 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar10 = 0;
      uVar8 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar8 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar8 == uVar10) goto LAB_140dc239a;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar7[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar8 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar14 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar10;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar14;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_140dc239a;
        }
        uVar10 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140dc239a:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
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



// FUNCTION 140dc256c FUN_140dc256c body=79 status=ok
// SIG undefined FUN_140dc256c(void)

void FUN_140dc256c(undefined8 *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_14062ba7c(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < param_2) && (*(int *)((longlong)param_1 + 0xc) != param_2)) {
    FUN_140dc31f4(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140dc25bc FUN_140dc25bc body=393 status=ok
// SIG undefined FUN_140dc25bc(void)

void FUN_140dc25bc(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dc2756 FUN_140dc2756 body=210 status=ok
// SIG undefined FUN_140dc2756(void)

longlong * FUN_140dc2756(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (((-1 < (int)param_3) && (lVar8 = *(longlong *)(param_1 + 8), lVar8 != 0)) &&
     ((int)param_3 < *(int *)(lVar8 + 0xa8))) {
    lVar8 = (ulonglong)param_3 * 0x158 + *(longlong *)(lVar8 + 0xa0);
    uVar1 = *(uint *)((ulonglong)param_4 * 0x10 + 0xf8 + lVar8);
    uVar6 = (ulonglong)uVar1;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    if (uVar6 != 0) {
      FUN_140dc282a(param_2,uVar6);
      lVar7 = 0;
      do {
        lVar4 = *(longlong *)(lVar8 + (ulonglong)param_4 * 0x10 + 0xf0);
        uVar5 = *(undefined8 *)(lVar4 + lVar7);
        uVar2 = *(undefined4 *)(lVar4 + 8 + lVar7);
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_149802d7c(param_2,iVar3);
        }
        lVar4 = *param_2;
        *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = uVar5;
        *(undefined4 *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = uVar2;
        lVar7 = lVar7 + 0x10;
      } while (uVar6 << 4 != lVar7);
    }
  }
  return param_2;
}



// FUNCTION 140dc282a FUN_140dc282a body=199 status=ok
// SIG undefined FUN_140dc282a(void)

void FUN_140dc282a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x800) {
        uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 140dc28f2 FUN_140dc28f2 body=213 status=ok
// SIG undefined FUN_140dc28f2(void)

void FUN_140dc28f2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 140dc29c8 FUN_140dc29c8 body=495 status=ok
// SIG undefined FUN_140dc29c8(void)

void FUN_140dc29c8(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar10 = 0;
    uVar13 = 1;
    iVar11 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar10 = 0;
      uVar8 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar8 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar8 == uVar10) goto LAB_140dc2aa3;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar7[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar8 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar14 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x28) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar10;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar14;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_140dc2aa3;
        }
        uVar10 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140dc2aa3:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
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



// FUNCTION 140dc2bb8 FUN_140dc2bb8 body=155 status=ok
// SIG undefined FUN_140dc2bb8(void)

void FUN_140dc2bb8(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_140dc2c5c(param_1,&local_28,0);
  if (-1 < *(int *)(param_1 + 0x174)) {
    *(undefined4 *)(param_1 + 0x170) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1457ac0ca(param_1 + 0x168);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dc2c5c FUN_140dc2c5c body=287 status=ok
// SIG undefined FUN_140dc2c5c(void)

void FUN_140dc2c5c(undefined8 param_1,longlong *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  int local_64;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = (int)param_2[1];
  uVar6 = iVar1 / 3;
  local_58 = 0;
  uStack_50 = 0;
  local_64 = param_3;
  if (iVar1 < -2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  local_60 = param_1;
  if (2 < iVar1) {
    FUN_1405c2e9e(&local_58,uVar6);
    uVar7 = (ulonglong)uVar6;
    lVar8 = 8;
    do {
      uVar5 = uStack_50;
      lVar9 = *param_2;
      uVar2 = *(undefined4 *)(lVar9 + -8 + lVar8);
      uVar3 = *(undefined4 *)(lVar9 + -4 + lVar8);
      uVar4 = *(undefined4 *)(lVar9 + lVar8);
      lVar9 = (longlong)(int)uStack_50;
      uVar6 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
      if (uStack_50._4_4_ < uVar6) {
        FUN_141087970(&local_58,uVar5 & 0xffffffff);
      }
      *(undefined4 *)(local_58 + lVar9 * 0xc) = uVar2;
      *(undefined4 *)(local_58 + 4 + lVar9 * 0xc) = uVar3;
      *(undefined4 *)(local_58 + 8 + lVar9 * 0xc) = uVar4;
      lVar8 = lVar8 + 0xc;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  local_78 = 0;
  FUN_140dc1be2(local_60,&local_58,0,local_64 + -1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dc2d7e FUN_140dc2d7e body=317 status=ok
// SIG undefined FUN_140dc2d7e(void)

void FUN_140dc2d7e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140dc2dec;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_140dc2dec:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140dc2ebc FUN_140dc2ebc body=611 status=ok
// SIG undefined FUN_140dc2ebc(void)

longlong * FUN_140dc2ebc(longlong param_1,longlong *param_2,uint param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (((-1 < (int)param_3) && (lVar14 = *(longlong *)(param_1 + 8), lVar14 != 0)) &&
     ((int)param_3 < *(int *)(lVar14 + 0xa8))) {
    lVar14 = *(longlong *)(lVar14 + 0xa0);
    lVar10 = (ulonglong)param_3 * 0x158;
    iVar11 = *(int *)(lVar14 + 0x38 + lVar10) - *(int *)(lVar14 + 100 + lVar10);
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    plVar2 = (longlong *)(lVar14 + 0x30 + lVar10);
    if (iVar11 != 0) {
      FUN_140dc3120(param_2);
    }
    iVar11 = (int)plVar2[5];
    if (iVar11 == 0) {
      uVar16 = 1;
      uVar15 = 0;
      iVar6 = 0;
      iVar13 = 0;
    }
    else {
      puVar7 = (uint *)plVar2[4];
      if ((uint *)plVar2[4] == (uint *)0x0) {
        puVar7 = (uint *)(plVar2 + 2);
      }
      uVar17 = *puVar7;
      if (uVar17 == 0) {
        iVar6 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar6 = iVar11 + -1;
        }
        uVar15 = 0;
        uVar16 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar16 = uVar15;
        }
        iVar13 = 0;
        do {
          if (uVar16 == uVar15) {
            return param_2;
          }
          iVar13 = iVar13 + 0x20;
          uVar17 = puVar7[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar15 = 0;
        iVar13 = 0;
      }
      uVar16 = (ulonglong)(-uVar17 & uVar17);
      uVar1 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar6 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar11 <= iVar6) {
        iVar6 = iVar11;
      }
    }
    if (iVar6 != iVar11) {
      uVar17 = 0xffffffff;
      do {
        uVar5 = *(undefined8 *)(*plVar2 + 8 + (longlong)iVar6 * 0x20);
        uVar3 = *(undefined4 *)(*plVar2 + 0x10 + (longlong)iVar6 * 0x20);
        iVar6 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
          FUN_149802c84(param_2,iVar6);
        }
        lVar14 = *param_2;
        *(undefined8 *)(lVar14 + (longlong)iVar6 * 0x10) = uVar5;
        *(undefined4 *)(lVar14 + 8 + (longlong)iVar6 * 0x10) = uVar3;
        uVar17 = uVar17 & ~(uint)uVar16;
        puVar7 = (uint *)plVar2[4];
        if ((uint *)plVar2[4] == (uint *)0x0) {
          puVar7 = (uint *)(plVar2 + 2);
        }
        iVar4 = (int)plVar2[5];
        iVar6 = (int)uVar15;
        lVar14 = (longlong)iVar6;
        uVar12 = puVar7[lVar14] & uVar17;
        if (uVar12 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar6) {
            iVar9 = iVar6;
          }
          if (iVar6 < iVar8) {
            lVar10 = 0;
            do {
              uVar12 = puVar7[lVar14 + lVar10 + 1];
              if (uVar12 != 0) {
                uVar15 = (ulonglong)(iVar6 + (int)lVar10 + 1);
                uVar17 = 0xffffffff;
                goto LAB_140dc306f;
              }
              iVar13 = iVar13 + 0x20;
              lVar10 = lVar10 + 1;
            } while (iVar9 - lVar14 != lVar10);
            uVar17 = 0xffffffff;
            iVar6 = iVar9;
          }
          uVar15 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar4;
        }
        else {
LAB_140dc306f:
          uVar16 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar16 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar6 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar6) {
            iVar6 = iVar4;
          }
        }
      } while (iVar6 != iVar11);
    }
  }
  return param_2;
}



// FUNCTION 140dc3120 FUN_140dc3120 body=212 status=ok
// SIG undefined FUN_140dc3120(void)

void FUN_140dc3120(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 140dc31f4 FUN_140dc31f4 body=320 status=ok
// SIG undefined FUN_140dc31f4(void)

void FUN_140dc31f4(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140dc325d;
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
LAB_140dc325d:
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



// FUNCTION 140dc3334 FUN_140dc3334 body=635 status=ok
// SIG undefined FUN_140dc3334(void)

void FUN_140dc3334(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  int local_68;
  uint local_64;
  uint *local_60;
  uint local_58;
  int local_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar8 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar8,0,0);
  }
  plVar1 = param_1 + 7;
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 == 1) {
    if (*plVar8 != 0) {
      FUN_1446efa72(plVar8,0,0);
    }
LAB_140dc337f:
    uVar3 = 0;
    do {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar11 != uVar3);
  }
  else {
    if (uVar11 == 0) goto LAB_140dc346c;
    FUN_1446efa72(plVar8,0);
    if (0 < (int)uVar11) goto LAB_140dc337f;
  }
  local_60 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  local_64 = 1;
  if (iVar4 == 0) {
    local_50 = 0;
    local_68 = 0;
    local_54 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = local_60;
    }
    uVar11 = *puVar13;
    if (uVar11 == 0) {
      iVar12 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar12 = iVar4 + -1;
      }
      uVar10 = 0;
      uVar6 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar6 = uVar10;
      }
      local_68 = (int)uVar6 + 1;
      local_50 = (int)uVar6 * 0x20 + 0x20;
      iVar12 = 0;
      do {
        local_54 = iVar4;
        if (uVar6 == uVar10) goto LAB_140dc3440;
        iVar12 = iVar12 + 0x20;
        uVar11 = puVar13[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar11 == 0);
      local_68 = (int)uVar10;
      local_50 = iVar12;
    }
    else {
      local_50 = 0;
      local_68 = 0;
    }
    local_64 = -uVar11 & uVar11;
    uVar6 = (ulonglong)local_64 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_54 = (local_50 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar4 <= local_54) {
      local_54 = iVar4;
    }
  }
LAB_140dc3440:
  local_58 = 0xffffffff;
  local_70 = param_1;
  if (local_54 < iVar4) {
    do {
      iVar12 = local_54;
      lVar2 = *local_70;
      lVar5 = (longlong)local_54;
      iVar4 = *(int *)(lVar2 + 8 + lVar5 * 0x28);
      puVar9 = &DAT_149dfb77a;
      iVar7 = 0;
      if (iVar4 != 0) {
        puVar9 = *(undefined2 **)(lVar2 + lVar5 * 0x28);
        iVar7 = iVar4 + -1;
      }
      iVar4 = FUN_144a49b4a(iVar7,puVar9);
      uVar6 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
      iVar4 = (int)uVar6;
      *(int *)(lVar2 + 0x24 + lVar5 * 0x28) = iVar4;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
           *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(int *)((longlong)plVar8 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      local_58 = local_58 & ~local_64;
      FUN_1449c0562(&local_68);
    } while (local_54 < (int)local_60[6]);
  }
LAB_140dc346c:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dc35b0 FUN_140dc35b0 body=763 status=ok
// SIG undefined FUN_140dc35b0(void)

longlong * FUN_140dc35b0(longlong param_1,longlong *param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [32];
  longlong *local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = param_2;
  if (((-1 < (int)param_3) && (lVar3 = *(longlong *)(param_1 + 8), lVar3 != 0)) &&
     ((int)param_3 < *(int *)(lVar3 + 0xa8))) {
    lVar3 = *(longlong *)(lVar3 + 0xa0);
    lVar10 = (ulonglong)param_3 * 0x158;
    iVar9 = *(int *)(lVar3 + 0x38 + lVar10) - *(int *)(lVar3 + 100 + lVar10);
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (iVar9 != 0) {
      FUN_1402191ca(param_2);
    }
    lVar3 = lVar3 + lVar10;
    local_68 = DAT_14cc26ef0;
    if (DAT_14cc26ef0 == 0) {
      uVar6 = FUN_145c5c1ab();
      DAT_14cc26ef0 = FUN_14171c317(FUN_14675de33,uVar6,L"EChaosWeightMapTarget");
    }
    uVar2 = *(uint *)(lVar3 + 0x58);
    local_68 = DAT_14cc26ef0;
    if (uVar2 == 0) {
      uVar11 = 1;
      uVar15 = 0;
      uVar4 = 0;
      iVar9 = 0;
    }
    else {
      puVar5 = *(uint **)(lVar3 + 0x50);
      if (*(uint **)(lVar3 + 0x50) == (uint *)0x0) {
        puVar5 = (uint *)(lVar3 + 0x40);
      }
      uVar4 = *puVar5;
      if (uVar4 == 0) {
        iVar9 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar9 = uVar2 - 1;
        }
        uVar15 = 0;
        uVar11 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar11 = uVar15;
        }
        iVar9 = 0;
        do {
          if (uVar11 == uVar15) goto LAB_140dc37f2;
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar5[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar15 = 0;
        iVar9 = 0;
      }
      uVar11 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar11 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar4 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if ((int)uVar2 <= (int)uVar4) {
        uVar4 = uVar2;
      }
    }
    if (uVar4 != uVar2) {
      uVar13 = 0xffffffff;
      local_70 = (ulonglong)uVar2;
      do {
        FUN_1401cfad2(local_68,&local_60,
                      *(undefined4 *)(*(longlong *)(lVar3 + 0x30) + (longlong)(int)uVar4 * 0x20));
        iVar14 = local_58 + -1;
        if (local_58 == 0) {
          iVar14 = 0;
        }
        FUN_1446f82e2(&local_50,iVar14,local_60,1);
        uVar6 = local_50;
        iVar14 = (int)local_78[1];
        *(uint *)(local_78 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)local_78 + 0xc) < iVar14 + 1U) {
          FUN_1446f84a2(local_78,iVar14);
        }
        *(undefined8 *)(*local_78 + (longlong)iVar14 * 8) = uVar6;
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        uVar13 = uVar13 & ~(uint)uVar11;
        puVar5 = *(uint **)(lVar3 + 0x50);
        if (*(uint **)(lVar3 + 0x50) == (uint *)0x0) {
          puVar5 = (uint *)(lVar3 + 0x40);
        }
        uVar2 = *(uint *)(lVar3 + 0x58);
        iVar14 = (int)uVar15;
        lVar10 = (longlong)iVar14;
        uVar4 = puVar5[lVar10] & uVar13;
        if (uVar4 == 0) {
          iVar7 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar7 = uVar2 - 1;
          }
          iVar7 = iVar7 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar14) {
            iVar8 = iVar14;
          }
          if (iVar14 < iVar7) {
            lVar12 = 0;
            do {
              uVar4 = puVar5[lVar10 + lVar12 + 1];
              if (uVar4 != 0) {
                uVar15 = (ulonglong)(iVar14 + (int)lVar12 + 1);
                uVar13 = 0xffffffff;
                goto LAB_140dc37c1;
              }
              iVar9 = iVar9 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar8 - lVar10 != lVar12);
            uVar13 = 0xffffffff;
            iVar14 = iVar8;
          }
          uVar15 = (ulonglong)(iVar14 + 1);
          uVar4 = uVar2;
        }
        else {
LAB_140dc37c1:
          uVar11 = (ulonglong)(-uVar4 & uVar4);
          uVar1 = uVar11 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar4 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar4) {
            uVar4 = uVar2;
          }
        }
      } while (uVar4 != (uint)local_70);
    }
  }
LAB_140dc37f2:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_78;
}



// FUNCTION 140dc38ac FUN_140dc38ac body=949 status=ok
// SIG undefined FUN_140dc38ac(void)

void FUN_140dc38ac(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14980150a(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar6 != 0) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar6);
    }
    FUN_14980156a(&local_98,uVar6);
    iVar5 = 1;
    if (3 < uVar6) {
      uVar6 = (uVar6 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_149801708();
    }
  }
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_14980150a(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar3 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        uVar2 = *(ulonglong *)(lVar1 + lVar3 * 0x18);
        uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar5 = *(int *)(puVar4 + (ulonglong)(local_50 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
            iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_98 + 8)) {
          if (*(ulonglong *)(local_98 + (longlong)iVar5 * 0x10) == uVar2) goto LAB_140dc3b92;
        }
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1498018e6(param_2,iVar5);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar3 * 0x18 + lVar1);
      FUN_14980196c(&local_98,&local_b8,(longlong)iStack_c4 * 0x18 + *local_e0);
LAB_140dc3b92:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    FUN_14474875a(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dc3c64 FUN_140dc3c64 body=1891 status=ok
// SIG undefined FUN_140dc3c64(void)

longlong * FUN_140dc3c64(longlong param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *_Src;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *plVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  undefined2 *puVar27;
  
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  if ((int)param_3 < 0) {
    return param_2;
  }
  lVar17 = *(longlong *)(param_1 + 8);
  if (lVar17 == 0) {
    return param_2;
  }
  if (*(int *)(lVar17 + 0xa8) <= (int)param_3) {
    return param_2;
  }
  lVar17 = *(longlong *)(lVar17 + 0xa0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc272d8) && (FUN_144b3d300(&DAT_14cc272d8), DAT_14cc272d8 == -1)) {
    FUN_140056680(&DAT_14cc272c8,L"SelfCollisionSphereSetName");
    atexit((_func_5014 *)&LAB_14462d71e);
    _Init_thread_footer(&DAT_14cc272d8);
  }
  if (*(int *)((longlong)param_2 + 0x34) == 0) {
    iVar15 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_2 + 0xc) == iVar15) {
      FUN_1447711aa(param_2,iVar15);
    }
    iVar22 = (int)param_2[5];
    if (iVar22 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar9 = iVar22 + -1;
      }
      iVar9 = iVar9 >> 5;
    }
    plVar18 = param_2 + 2;
    iVar13 = iVar22 + 1;
    iVar16 = iVar22 + 0x1f;
    if (-1 < iVar22) {
      iVar16 = iVar22;
    }
    if (iVar16 >> 5 == iVar9) {
      *(int *)(param_2 + 5) = iVar13;
    }
    else {
      if (*(int *)((longlong)param_2 + 0x2c) <= iVar22) {
        if (iVar22 + 0x20U < 0xa0) {
          iVar13 = 0x80;
          iVar9 = iVar22;
        }
        else {
          uVar24 = iVar22 + 0x20U >> 5;
          if (*(int *)((longlong)param_2 + 0x2c) + 0x1fU < 0xa0) {
            uVar21 = 4;
            if (4 < uVar24) {
              uVar21 = uVar24;
            }
          }
          else {
            uVar21 = (uVar24 * 3 >> 3) + uVar24 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar21 << 2,0);
          iVar9 = (int)(uVar11 >> 2);
          iVar13 = -0x20;
          if ((int)uVar24 <= iVar9) {
            iVar13 = iVar9 << 5;
          }
          iVar9 = (int)param_2[5];
        }
        *(int *)((longlong)param_2 + 0x2c) = iVar13;
        FUN_1446efbd8(plVar18,iVar9);
        iVar13 = (int)param_2[5] + 1;
      }
      iVar9 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar9 = iVar13;
      }
      *(int *)(param_2 + 5) = iVar13;
      if (iVar13 % 0x20 != 0) {
        plVar20 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar20 = plVar18;
        }
        bVar12 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)plVar20 + (longlong)(iVar9 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar20 + (longlong)(iVar9 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar10 = (longlong)iVar15;
    if ((longlong *)param_2[4] != (longlong *)0x0) {
      plVar18 = (longlong *)param_2[4];
    }
    bVar12 = (byte)iVar22 & 0x1f;
    puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar15 = (int)param_2[6];
    lVar10 = (longlong)iVar15;
    iVar22 = *(int *)(*param_2 + 4 + lVar10 * 0x20);
    *(int *)(param_2 + 6) = iVar22;
    iVar9 = *(int *)((longlong)param_2 + 0x34) + -1;
    *(int *)((longlong)param_2 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_2 + (longlong)iVar22 * 0x20) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_2 + 2);
  puVar14 = (uint *)param_2[4];
  if ((uint *)param_2[4] == (uint *)0x0) {
    puVar14 = puVar1;
  }
  iVar22 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar22 = iVar15;
  }
  puVar14[iVar22 >> 5] = puVar14[iVar22 >> 5] | 1 << ((byte)iVar15 & 0x1f);
  lVar4 = *param_2;
  lVar10 = lVar10 * 0x20;
  puVar2 = (undefined8 *)(lVar4 + lVar10);
  *(undefined8 *)(lVar4 + lVar10) = 0;
  iVar22 = DAT_14cc272d0;
  _Src = DAT_14cc272c8;
  lVar25 = (longlong)DAT_14cc272d0;
  *(int *)(lVar4 + 8 + lVar10) = DAT_14cc272d0;
  if (lVar25 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    iVar22 = 0;
  }
  else {
    FUN_1446dd670(puVar2,iVar22,0);
    memcpy((void *)*puVar2,_Src,lVar25 * 2);
    iVar22 = *(int *)(puVar2 + 1);
  }
  puVar2[2] = lVar17 + (ulonglong)param_3 * 0x158 + 0xa0;
  *(undefined4 *)(puVar2 + 3) = 0xffffffff;
  uVar24 = 0;
  iVar9 = iVar22 + -1;
  if (iVar22 == 0) {
    iVar9 = 0;
  }
  if (0 < iVar9) {
    if (iVar22 == 0) {
      puVar27 = &DAT_149dfb77a;
    }
    else {
      puVar27 = (undefined2 *)*puVar2;
    }
    lVar17 = 0;
    uVar24 = 0;
    do {
      uVar21 = ((uint)(0x19 < (ushort)puVar27[lVar17] - 0x61) * 0x20 + (uint)(ushort)puVar27[lVar17]
               ) - 0x20;
      uVar24 = uVar24 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar24 ^ uVar21) & 0xff) * 4);
      uVar24 = uVar24 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar24 & 0xff ^ uVar21 >> 8 & 0xff) * 4);
      lVar17 = lVar17 + 1;
    } while (iVar9 != (int)lVar17);
  }
  uVar26 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  uVar21 = 1;
  if (uVar26 != 1) {
    iVar22 = FUN_1408ab52e(param_2,uVar24,puVar2);
    if (iVar22 != -1) {
      puVar3 = (undefined4 *)(*param_2 + (longlong)iVar22 * 0x20);
      if (*(longlong *)(*param_2 + (longlong)iVar22 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar5 = *(undefined4 *)puVar2;
      uVar6 = *(undefined4 *)((longlong)puVar2 + 4);
      uVar7 = *(undefined4 *)(puVar2 + 1);
      uVar8 = *(undefined4 *)((longlong)puVar2 + 0xc);
      *(undefined8 *)(puVar3 + 4) = puVar2[2];
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_149802d0a(param_2,iVar15);
      return param_2;
    }
    if (3 < uVar26) {
      uVar11 = (ulonglong)(uVar26 & 0xfffffffe) + 0xf;
      lVar17 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar21 = 1 << ((byte)lVar17 & 0x1f);
    }
  }
  if (((int)uVar26 < 1) || ((int)uVar21 <= (int)param_2[9])) {
    uVar24 = (int)param_2[9] - 1U & uVar24;
    *(uint *)((longlong)puVar2 + 0x1c) = uVar24;
    plVar18 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar18 = param_2 + 7;
    }
    *(undefined4 *)(puVar2 + 3) =
         *(undefined4 *)
          ((longlong)plVar18 + ((longlong)(int)param_2[9] - 1U & (longlong)(int)uVar24) * 4);
    plVar18 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar18 = param_2 + 7;
    }
    *(int *)((longlong)plVar18 + ((longlong)(int)param_2[9] - 1U & (longlong)(int)uVar24) * 4) =
         iVar15;
    return param_2;
  }
  plVar18 = param_2 + 8;
  *(uint *)(param_2 + 9) = uVar21;
  if (param_2[8] != 0) {
    FUN_1446efa72(plVar18,0,0,4);
    uVar21 = *(uint *)(param_2 + 9);
  }
  plVar20 = param_2 + 7;
  if (uVar21 == 1) {
    if (*plVar18 != 0) {
      FUN_1446efa72(plVar18,0,0,4);
    }
  }
  else {
    if (uVar21 == 0) {
      return param_2;
    }
    FUN_1446efa72(plVar18,0,uVar21,4);
    if ((int)uVar21 < 1) goto LAB_140dc3f09;
  }
  uVar24 = 0;
  do {
    plVar18 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar18 = plVar20;
    }
    *(undefined4 *)((longlong)plVar18 + (ulonglong)((int)param_2[9] + 0x7fffffffU & uVar24) * 4) =
         0xffffffff;
    uVar24 = uVar24 + 1;
  } while (uVar21 != uVar24);
LAB_140dc3f09:
  iVar15 = (int)param_2[5];
  if (iVar15 == 0) {
    uVar11 = 0;
    uVar23 = 1;
    iVar22 = 0;
    iVar9 = 0;
  }
  else {
    puVar14 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar24 = *puVar14;
    if (uVar24 == 0) {
      iVar22 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar22 = iVar15 + -1;
      }
      uVar11 = 0;
      uVar23 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar23 = uVar11;
      }
      iVar9 = 0;
      do {
        if (uVar23 == uVar11) {
          return param_2;
        }
        iVar9 = iVar9 + 0x20;
        uVar24 = puVar14[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar24 == 0);
    }
    else {
      uVar11 = 0;
      iVar9 = 0;
    }
    uVar23 = (ulonglong)(-uVar24 & uVar24);
    uVar19 = uVar23 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar22 = (iVar9 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar22) {
      iVar22 = iVar15;
    }
  }
  if (iVar22 < iVar15) {
    uVar24 = 0xffffffff;
    do {
      puVar2 = (undefined8 *)(*param_2 + (longlong)iVar22 * 0x20);
      iVar15 = *(int *)(*param_2 + 8 + (longlong)iVar22 * 0x20);
      iVar16 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar16 = 0;
      }
      uVar21 = 0;
      if (0 < iVar16) {
        puVar27 = &DAT_149dfb77a;
        if (iVar15 != 0) {
          puVar27 = (undefined2 *)*puVar2;
        }
        lVar17 = 0;
        uVar21 = 0;
        do {
          uVar26 = ((uint)(ushort)puVar27[lVar17] +
                   (uint)(0x19 < (ushort)puVar27[lVar17] - 0x61) * 0x20) - 0x20;
          uVar21 = uVar21 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar21 ^ uVar26) & 0xff) * 4);
          uVar21 = uVar21 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar21 & 0xff ^ uVar26 >> 8 & 0xff) * 4);
          lVar17 = lVar17 + 1;
        } while (iVar16 != (int)lVar17);
      }
      uVar19 = (longlong)(int)uVar21 & (longlong)(int)param_2[9] - 1U;
      iVar15 = (int)uVar19;
      *(int *)((longlong)puVar2 + 0x1c) = iVar15;
      plVar18 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar18 = plVar20;
      }
      *(undefined4 *)(puVar2 + 3) =
           *(undefined4 *)((longlong)plVar18 + ((longlong)(int)param_2[9] - 1U & uVar19) * 4);
      plVar18 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar18 = plVar20;
      }
      *(int *)((longlong)plVar18 + ((longlong)iVar15 & (longlong)(int)param_2[9] - 1U) * 4) = iVar22
      ;
      uVar24 = uVar24 & ~(uint)uVar23;
      puVar14 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar14 = puVar1;
      }
      iVar15 = (int)param_2[5];
      iVar22 = (int)uVar11;
      lVar17 = (longlong)iVar22;
      uVar21 = puVar14[lVar17] & uVar24;
      if (uVar21 == 0) {
        iVar16 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar16 = iVar15 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar13 = iVar16;
        if (iVar16 < iVar22) {
          iVar13 = iVar22;
        }
        if (iVar16 <= iVar22) {
          return param_2;
        }
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar21 = puVar14[lVar17 + lVar10 + 1];
          if (uVar21 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar13 - lVar17 == lVar10) {
            return param_2;
          }
        }
        uVar11 = (ulonglong)(iVar22 + (int)lVar10 + 1);
        uVar24 = 0xffffffff;
      }
      uVar23 = (ulonglong)(-uVar21 & uVar21);
      uVar19 = uVar23 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar22 = (iVar9 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar22 < iVar15);
  }
  return param_2;
}



// FUNCTION 140dc43de FUN_140dc43de body=140 status=ok
// SIG undefined FUN_140dc43de(void)

void FUN_140dc43de(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x1b0);
  if ((plVar1 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar1 + 0x700))(), cVar3 == '\0')) {
    cVar3 = *(char *)(param_1 + 0xcd);
    bVar2 = *(byte *)(param_1 + 0xce) >> 4;
    *(byte *)(param_1 + 0xcd) = bVar2;
    switch(bVar2) {
    case 0:
      if (cVar3 == '\x01') goto switchD_140dc442c_caseD_2;
      break;
    case 1:
      FUN_140dcff80(param_1,0xbf800000);
      return;
    case 2:
switchD_140dc442c_caseD_2:
      FUN_140dc4546(param_1);
      return;
    case 3:
      FUN_140dc446a(param_1,&DAT_14b9e1e01);
      return;
    }
  }
  return;
}



// FUNCTION 140dc446a FUN_140dc446a body=220 status=ok
// SIG undefined FUN_140dc446a(void)

void FUN_140dc446a(longlong *param_1,char param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if ((param_2 != '\0') && (param_1[0x1c] != 0)) {
    plVar1 = param_1 + 0x1c;
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    lVar3 = FUN_144a61814(uVar2,plVar1);
    if (lVar3 != 0) {
      FUN_1405a424c(uVar2,*plVar1);
    }
    *plVar1 = 0;
  }
  param_1[0x1e] = -0x4010000000000000;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((char)param_1[0x1d] != '\0') {
    if ((*(longlong *)(param_1[6] + 0xb38) != 0) &&
       (plVar1 = *(longlong **)(param_1[6] + 0xb40), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x38))();
    }
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  FUN_140994e4c(param_1[6],DAT_14cbe7a18,0,0);
  return;
}



// FUNCTION 140dc4546 FUN_140dc4546 body=288 status=ok
// SIG undefined FUN_140dc4546(void)

void FUN_140dc4546(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int7 iVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((0 < *(int *)(param_1 + 0xb0)) && ((*(byte *)(param_1 + 0xcc) & 2) == 0)) &&
     (*(char *)(param_1 + 0xe8) != '\0')) {
    lVar5 = FUN_1407ca824(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x1b0));
    if (lVar5 != 0) {
      FUN_140dc01da(lVar5,&local_20,*(undefined1 *)(param_1 + 0xe8));
      if (local_20 != 0) {
        lVar5 = *(longlong *)(local_20 + 0x30);
        lVar6 = FUN_140ed0e8c();
        plVar1 = local_18;
        lVar5 = *(longlong *)(lVar5 + 0x10);
        iVar4 = *(int *)(lVar6 + 0x38);
        if ((iVar4 <= *(int *)(lVar5 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar4 * 8) == lVar6 + 0x30)) {
          iVar7 = (int7)(int3)((uint)iVar4 >> 8);
          if (local_18 == (longlong *)0x0) {
            FUN_1410c9a0e(local_20,CONCAT71(iVar7,1));
          }
          else {
            LOCK();
            *(int *)(local_18 + 1) = (int)local_18[1] + 1;
            UNLOCK();
            FUN_1410c9a0e(local_20,CONCAT71(iVar7,1));
            LOCK();
            plVar3 = plVar1 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar1)(plVar1);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
        }
      }
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
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dc4668 FUN_140dc4668 body=1861 status=ok
// SIG undefined FUN_140dc4668(void)

void FUN_140dc4668(void)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  
  iVar2 = DAT_14cb44478;
  if (DAT_14cb44478 == 0) {
    uVar17 = 1;
    uVar14 = 0;
    iVar3 = 0;
    iVar13 = 0;
  }
  else {
    puVar12 = &DAT_14cb44460;
    if (DAT_14cb44470 != (uint *)0x0) {
      puVar12 = DAT_14cb44470;
    }
    uVar19 = *puVar12;
    if (uVar19 == 0) {
      iVar3 = DAT_14cb44478 + 0x1e;
      if (-1 < DAT_14cb44478 + -1) {
        iVar3 = DAT_14cb44478 + -1;
      }
      uVar14 = 0;
      uVar17 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar17 = uVar14;
      }
      iVar13 = 0;
      do {
        if (uVar17 == uVar14) {
          return;
        }
        iVar13 = iVar13 + 0x20;
        uVar19 = puVar12[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar14 = 0;
      iVar13 = 0;
    }
    uVar17 = (ulonglong)(-uVar19 & uVar19);
    uVar11 = uVar17 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar3 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (DAT_14cb44478 <= iVar3) {
      iVar3 = DAT_14cb44478;
    }
  }
  if (iVar3 != DAT_14cb44478) {
    uVar19 = 0xffffffff;
    do {
      lVar16 = *(longlong *)(DAT_14cb44450 + 8 + (longlong)iVar3 * 0x18);
      if (DAT_14c762a24 != 0) {
        lVar22 = 0;
        do {
          plVar1 = (longlong *)(lVar16 + 0x1c0 + lVar22 * 0x50);
          lVar20 = lVar16 + 0x1c0 + lVar22 * 0x50;
          puVar12 = (uint *)(lVar20 + 0x10);
          iVar3 = *(int *)(lVar20 + 0x28);
          if (iVar3 == 0) {
            uVar11 = 1;
            uVar24 = 0;
            iVar4 = 0;
            iVar23 = 0;
          }
          else {
            puVar5 = (uint *)plVar1[4];
            if ((uint *)plVar1[4] == (uint *)0x0) {
              puVar5 = puVar12;
            }
            uVar7 = *puVar5;
            if (uVar7 == 0) {
              iVar4 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar4 = iVar3 + -1;
              }
              uVar24 = 0;
              uVar11 = (ulonglong)(uint)(iVar4 >> 5);
              if (iVar4 >> 5 < 1) {
                uVar11 = uVar24;
              }
              iVar23 = 0;
              do {
                if (uVar11 == uVar24) goto LAB_140dc48bb;
                iVar23 = iVar23 + 0x20;
                uVar7 = puVar5[uVar24 + 1];
                uVar24 = uVar24 + 1;
              } while (uVar7 == 0);
            }
            else {
              uVar24 = 0;
              iVar23 = 0;
            }
            uVar11 = (ulonglong)(-uVar7 & uVar7);
            uVar21 = uVar11 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            iVar4 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar4) {
              iVar4 = iVar3;
            }
          }
          if (iVar4 != iVar3) {
            uVar7 = 0xffffffff;
            do {
              FUN_14012d1c4(*(undefined8 *)(*plVar1 + 8 + (longlong)iVar4 * 0x20),0);
              uVar7 = ~(uint)uVar11 & uVar7;
              puVar5 = (uint *)plVar1[4];
              if ((uint *)plVar1[4] == (uint *)0x0) {
                puVar5 = puVar12;
              }
              iVar8 = (int)plVar1[5];
              iVar4 = (int)uVar24;
              lVar20 = (longlong)iVar4;
              uVar15 = puVar5[lVar20] & uVar7;
              if (uVar15 == 0) {
                iVar9 = iVar8 + 0x1e;
                if (-1 < iVar8 + -1) {
                  iVar9 = iVar8 + -1;
                }
                iVar9 = iVar9 >> 5;
                iVar23 = iVar23 + 0x20;
                iVar10 = iVar9;
                if (iVar9 < iVar4) {
                  iVar10 = iVar4;
                }
                if (iVar4 < iVar9) {
                  lVar18 = 0;
                  do {
                    uVar15 = puVar5[lVar20 + lVar18 + 1];
                    if (uVar15 != 0) {
                      uVar24 = (ulonglong)(iVar4 + (int)lVar18 + 1);
                      uVar7 = 0xffffffff;
                      goto LAB_140dc4885;
                    }
                    iVar23 = iVar23 + 0x20;
                    lVar18 = lVar18 + 1;
                  } while (iVar10 - lVar20 != lVar18);
                  uVar7 = 0xffffffff;
                  lVar20 = (longlong)iVar10;
                }
                uVar24 = lVar20 + 1U & 0xffffffff;
                iVar4 = iVar8;
              }
              else {
LAB_140dc4885:
                uVar11 = (ulonglong)(-uVar15 & uVar15);
                uVar21 = uVar11 * 2 + 1;
                lVar20 = 0x3f;
                if (uVar21 != 0) {
                  for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                iVar4 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                if (iVar8 <= iVar4) {
                  iVar4 = iVar8;
                }
              }
            } while (iVar4 != iVar3);
          }
LAB_140dc48bb:
          lVar22 = lVar22 + 1;
        } while (lVar22 != 7);
      }
      iVar3 = *(int *)(lVar16 + 0x1bc8);
      if (iVar3 == 0) {
        uVar24 = 1;
        uVar11 = 0;
        iVar4 = 0;
        iVar23 = 0;
      }
      else {
        puVar12 = *(uint **)(lVar16 + 0x1bc0);
        if (*(uint **)(lVar16 + 0x1bc0) == (uint *)0x0) {
          puVar12 = (uint *)(lVar16 + 0x1bb0);
        }
        uVar7 = *puVar12;
        if (uVar7 == 0) {
          iVar4 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar4 = iVar3 + -1;
          }
          uVar11 = 0;
          uVar24 = (ulonglong)(uint)(iVar4 >> 5);
          if (iVar4 >> 5 < 1) {
            uVar24 = uVar11;
          }
          iVar23 = 0;
          do {
            if (uVar24 == uVar11) goto LAB_140dc4a52;
            iVar23 = iVar23 + 0x20;
            uVar7 = puVar12[uVar11 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar11 = 0;
          iVar23 = 0;
        }
        uVar24 = (ulonglong)(-uVar7 & uVar7);
        uVar21 = uVar24 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar4 = (iVar23 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
      if (iVar4 < iVar3) {
        uVar7 = 0xffffffff;
        do {
          lVar22 = *(longlong *)(lVar16 + 0x1ba0);
          lVar20 = *(longlong *)(lVar22 + (longlong)iVar4 * 0xf0);
          if (((lVar20 == 0) || ((*(uint *)(lVar20 + 8) >> 0x1e & 1) != 0)) ||
             (*(int *)(lVar22 + 0x18 + (longlong)iVar4 * 0xf0) == 0)) {
            FUN_140dc4dae((longlong *)(lVar16 + 0x1ba0));
            iVar3 = *(int *)(lVar16 + 0x1bc8);
          }
          uVar7 = uVar7 & ~(uint)uVar24;
          puVar12 = *(uint **)(lVar16 + 0x1bc0);
          if (*(uint **)(lVar16 + 0x1bc0) == (uint *)0x0) {
            puVar12 = (uint *)(lVar16 + 0x1bb0);
          }
          iVar4 = (int)uVar11;
          lVar22 = (longlong)iVar4;
          uVar15 = puVar12[lVar22] & uVar7;
          if (uVar15 == 0) {
            iVar8 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar8 = iVar3 + -1;
            }
            iVar8 = iVar8 >> 5;
            iVar9 = iVar8;
            if (iVar8 < iVar4) {
              iVar9 = iVar4;
            }
            if (iVar8 <= iVar4) break;
            lVar20 = 0;
            while( true ) {
              iVar23 = iVar23 + 0x20;
              uVar15 = puVar12[lVar22 + lVar20 + 1];
              if (uVar15 != 0) break;
              lVar20 = lVar20 + 1;
              if (iVar9 - lVar22 == lVar20) goto LAB_140dc4a52;
            }
            uVar11 = (ulonglong)(iVar4 + (int)lVar20 + 1);
            uVar7 = 0xffffffff;
          }
          uVar24 = (ulonglong)(-uVar15 & uVar15);
          uVar21 = uVar24 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar4 = (iVar23 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        } while (iVar4 < iVar3);
      }
LAB_140dc4a52:
      plVar1 = *(longlong **)(lVar16 + 0x1c80);
      if (plVar1 != (longlong *)0x0) {
        iVar3 = (int)plVar1[9];
        if (iVar3 < 2) {
          plVar6 = plVar1 + 7;
          if ((longlong *)plVar1[8] != (longlong *)0x0) {
            plVar6 = (longlong *)plVar1[8];
          }
          iVar4 = iVar3 + 3;
          if (-1 < iVar3) {
            iVar4 = iVar3;
          }
          if ((int)plVar1[1] - *(int *)((longlong)plVar1 + 0x34) < iVar4 >> 2) {
            iVar3 = (int)plVar1[5];
            if (iVar3 != 0) {
              puVar12 = (uint *)plVar1[4];
              if ((uint *)plVar1[4] == (uint *)0x0) {
                puVar12 = (uint *)(plVar1 + 2);
              }
              uVar11 = 0;
              iVar4 = 0;
              uVar7 = *puVar12;
              while (uVar7 == 0) {
                iVar23 = iVar3 + 0x1e;
                if (-1 < iVar3 + -1) {
                  iVar23 = iVar3 + -1;
                }
                uVar24 = (ulonglong)(uint)(iVar23 >> 5);
                if (iVar23 >> 5 < 1) {
                  uVar24 = 0;
                }
                if (uVar11 == uVar24) goto LAB_140dc4aa0;
                iVar4 = iVar4 + 0x20;
                lVar16 = uVar11 + 1;
                uVar11 = uVar11 + 1;
                uVar7 = puVar12[lVar16];
              }
              uVar21 = (ulonglong)(-uVar7 & uVar7);
              uVar24 = uVar21 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar24 != 0) {
                for (; uVar24 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              iVar23 = (iVar4 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              if (iVar23 < iVar3) {
                uVar7 = 0xffffffff;
                do {
                  *(undefined4 *)
                   ((longlong)plVar6 +
                   (longlong)*(int *)(*plVar1 + 0x1c + (longlong)iVar23 * 0x20) * 4) = 0xffffffff;
                  uVar7 = ~(uint)uVar21 & uVar7;
                  puVar12 = (uint *)plVar1[4];
                  if ((uint *)plVar1[4] == (uint *)0x0) {
                    puVar12 = (uint *)(plVar1 + 2);
                  }
                  iVar8 = (int)plVar1[5];
                  iVar23 = (int)uVar11;
                  lVar16 = (longlong)iVar23;
                  uVar15 = puVar12[lVar16] & uVar7;
                  if (uVar15 == 0) {
                    iVar9 = iVar8 + 0x1e;
                    if (-1 < iVar8 + -1) {
                      iVar9 = iVar8 + -1;
                    }
                    iVar9 = iVar9 >> 5;
                    iVar4 = iVar4 + 0x20;
                    iVar10 = iVar9;
                    if (iVar9 < iVar23) {
                      iVar10 = iVar23;
                    }
                    if (iVar23 < iVar9) {
                      lVar22 = 0;
                      do {
                        uVar15 = puVar12[lVar16 + lVar22 + 1];
                        if (uVar15 != 0) {
                          uVar11 = (ulonglong)(iVar23 + (int)lVar22 + 1);
                          uVar7 = 0xffffffff;
                          goto LAB_140dc4d42;
                        }
                        iVar4 = iVar4 + 0x20;
                        lVar22 = lVar22 + 1;
                      } while (iVar10 - lVar16 != lVar22);
                      uVar7 = 0xffffffff;
                      lVar16 = (longlong)iVar10;
                    }
                    uVar11 = lVar16 + 1U & 0xffffffff;
                    iVar23 = iVar8;
                  }
                  else {
LAB_140dc4d42:
                    uVar21 = (ulonglong)(-uVar15 & uVar15);
                    uVar24 = uVar21 * 2 + 1;
                    lVar16 = 0x3f;
                    if (uVar24 != 0) {
                      for (; uVar24 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                      }
                    }
                    iVar23 = (iVar4 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                    if (iVar8 <= iVar23) {
                      iVar23 = iVar8;
                    }
                  }
                } while (iVar23 != iVar3);
              }
            }
          }
          else if (iVar3 == 1) {
            lVar16 = 0;
            do {
              *(undefined4 *)((longlong)plVar6 + lVar16 * 4) = 0xffffffff;
              lVar16 = lVar16 + 1;
            } while (lVar16 < (int)plVar1[9]);
          }
LAB_140dc4aa0:
          FUN_140dc4eb0(plVar1);
        }
        else {
          FUN_140dc4eb0(plVar1);
          *(undefined4 *)(plVar1 + 9) = 1;
          FUN_145f79534(plVar1);
        }
      }
      uVar19 = uVar19 & ~(uint)uVar17;
      puVar12 = DAT_14cb44470;
      if (DAT_14cb44470 == (uint *)0x0) {
        puVar12 = &DAT_14cb44460;
      }
      iVar3 = (int)uVar14;
      lVar16 = (longlong)iVar3;
      uVar7 = puVar12[lVar16] & uVar19;
      if (uVar7 == 0) {
        iVar4 = DAT_14cb44478 + 0x1e;
        if (-1 < DAT_14cb44478 + -1) {
          iVar4 = DAT_14cb44478 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar23 = iVar4;
        if (iVar4 < iVar3) {
          iVar23 = iVar3;
        }
        if (iVar3 < iVar4) {
          lVar22 = 0;
          do {
            uVar7 = puVar12[lVar16 + lVar22 + 1];
            if (uVar7 != 0) {
              uVar14 = (ulonglong)(iVar3 + (int)lVar22 + 1);
              uVar19 = 0xffffffff;
              goto LAB_140dc4b34;
            }
            iVar13 = iVar13 + 0x20;
            lVar22 = lVar22 + 1;
          } while (iVar23 - lVar16 != lVar22);
          uVar19 = 0xffffffff;
          iVar3 = iVar23;
        }
        uVar14 = (ulonglong)(iVar3 + 1);
        iVar3 = DAT_14cb44478;
      }
      else {
LAB_140dc4b34:
        uVar17 = (ulonglong)(-uVar7 & uVar7);
        uVar11 = uVar17 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar3 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (DAT_14cb44478 <= iVar3) {
          iVar3 = DAT_14cb44478;
        }
      }
    } while (iVar3 != iVar2);
  }
  return;
}



// FUNCTION 140dc4dae FUN_140dc4dae body=135 status=ok
// SIG undefined FUN_140dc4dae(void)

void FUN_140dc4dae(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0xf0;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0xec + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0xf0 + 0xe8);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0xe8);
  FUN_140439908(*param_1 + lVar2 + 8);
  FUN_140dc4e36(param_1,param_2);
  return;
}



// FUNCTION 140dc4e36 FUN_140dc4e36 body=122 status=ok
// SIG undefined FUN_140dc4e36(void)

void FUN_140dc4e36(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xf0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xf0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xf0 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140dc4eb0 FUN_140dc4eb0 body=346 status=ok
// SIG undefined FUN_140dc4eb0(void)

void FUN_140dc4eb0(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dc5012 FUN_140dc5012 body=57 status=ok
// SIG undefined FUN_140dc5012(void)

void FUN_140dc5012(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb235a8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb235a8 = FUN_140002ddd(FUN_14643e207,uVar1,L"GpsTestSettings_NavTrace");
  }
  return;
}



// FUNCTION 140dc504c FUN_140dc504c body=66 status=ok
// SIG undefined FUN_140dc504c(void)

void FUN_140dc504c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  (*(code *)*param_1)(param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dc5090 FUN_140dc5090 body=66 status=ok
// SIG undefined FUN_140dc5090(void)

void FUN_140dc5090(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  (*(code *)*param_1)(param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dc50e2 FUN_140dc50e2 body=64 status=ok
// SIG undefined FUN_140dc50e2(void)

undefined8 * FUN_140dc50e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2d2b30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140dc5128 FUN_140dc5128 body=432 status=ok
// SIG undefined FUN_140dc5128(void)

ulonglong FUN_140dc5128(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  DWORD DVar8;
  DWORD DVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 unaff_RBX;
  int iVar13;
  
  lVar7 = DAT_14c9de370;
  iVar2 = *(int *)(param_1 + 4);
  iVar13 = iVar2 + 3;
  iVar4 = iVar2 + 7;
  iVar5 = iVar2 + 0x7f;
  if (-1 < iVar2) {
    iVar13 = iVar2;
    iVar4 = iVar2;
    iVar5 = iVar2;
  }
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((iVar5 >> 7 & 0x80000001U) != 1) {
    uVar12 = iVar2 / 2 & 0x80000001;
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar2 = *(int *)(lVar3 + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar10 = 0;
    }
    else if (iVar2 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar8 != DVar9);
    }
    else {
      uVar10 = 1;
    }
    lVar6 = DAT_14c9de340;
    uVar11 = CONCAT71((uint7)(uint3)(uVar12 >> 8),2);
    if ((uVar12 == 1) != (*(int *)(lVar7 + uVar10 * 4) == 0)) {
      piVar1 = (int *)(lVar3 + 0xc60);
      iVar2 = *piVar1;
      if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
        uVar10 = 0;
      }
      else if (iVar2 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        uVar10 = (ulonglong)(DVar8 != DVar9);
      }
      else {
        uVar10 = 1;
      }
      lVar7 = DAT_14c9de3b8;
      if (((iVar13 >> 2 & 0x80000001U) == 1) != (*(int *)(lVar6 + uVar10 * 4) == 0)) {
        iVar2 = *piVar1;
        if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
          uVar11 = 0;
        }
        else if (iVar2 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          uVar11 = (ulonglong)(DVar8 != DVar9);
        }
        else {
          uVar11 = 1;
        }
        uVar11 = CONCAT71((int7)((ulonglong)lVar7 >> 8),
                          ((*(int *)(lVar7 + uVar11 * 4) != 2) == ((iVar4 >> 3 & 0x80000001U) == 1))
                          * '\x02');
      }
    }
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 140dc52d8 FUN_140dc52d8 body=162 status=ok
// SIG undefined FUN_140dc52d8(void)

longlong FUN_140dc52d8(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      while (puVar1 = (ulonglong *)(*param_1 + (longlong)iVar4 * 0x18), *puVar1 != param_2) {
        iVar4 = (int)puVar1[2];
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (puVar1 == (ulonglong *)0x0) {
        return 0;
      }
      if (puVar1 + 1 == (ulonglong *)0x0) {
        return 0;
      }
      return (longlong)(int)puVar1[1] * 0x1a0 + param_1[10];
    }
  }
  return 0;
}



// FUNCTION 140dc5380 FUN_140dc5380 body=57 status=ok
// SIG undefined FUN_140dc5380(void)

void FUN_140dc5380(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22960 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22960 = FUN_140002ddd(FUN_146439f58,uVar1,L"GpsGenerator_Circle");
  }
  return;
}



// FUNCTION 140dc53ba FUN_140dc53ba body=141 status=ok
// SIG undefined FUN_140dc53ba(void)

void FUN_140dc53ba(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149e26c80;
  FUN_140dc5480();
  FUN_140dc55e6(&DAT_14c8466b0,param_1 + 2);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_140dc5448(param_1 + 0x13);
  FUN_140dc54ec(param_1 + 6);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140dc5448 FUN_140dc5448 body=55 status=ok
// SIG undefined FUN_140dc5448(void)

void FUN_140dc5448(longlong *param_1)

{
  FUN_140dc5840(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140dc5480 FUN_140dc5480 body=108 status=ok
// SIG undefined FUN_140dc5480(void)

undefined8 * FUN_140dc5480(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c846b10) {
    FUN_144b3d300(&DAT_14c846b10);
    if (DAT_14c846b10 == -1) {
      FUN_1457ac1ba(&DAT_14c8466b0);
      atexit((_func_5014 *)&LAB_142770ff1);
      _Init_thread_footer(&DAT_14c846b10);
    }
  }
  return &DAT_14c8466b0;
}



// FUNCTION 140dc54ec FUN_140dc54ec body=150 status=ok
// SIG undefined FUN_140dc54ec(void)

void FUN_140dc54ec(longlong param_1)

{
  FUN_140dc5770();
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_140dc5582(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_140dc55aa(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140dc5582 FUN_140dc5582 body=40 status=ok
// SIG undefined FUN_140dc5582(void)

void FUN_140dc5582(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146801f4e(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 140dc55aa FUN_140dc55aa body=59 status=ok
// SIG undefined FUN_140dc55aa(void)

void FUN_140dc55aa(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 140dc55e6 FUN_140dc55e6 body=193 status=ok
// SIG undefined FUN_140dc55e6(void)

bool FUN_140dc55e6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar4 = 0;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    lVar6 = 0;
    uVar4 = 0;
    do {
      uVar5 = ((uint)(0x19 < (ushort)puVar2[lVar6] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar6]) -
              0x20;
      uVar7 = (uint)(uVar4 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar4 ^ uVar5) & 0xff) * 4);
      uVar4 = (ulonglong)
              (uVar7 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar5 >> 8 & 0xff) * 4));
      lVar6 = lVar6 + 1;
    } while (iVar3 != (int)lVar6);
  }
  iVar1 = FUN_140dc56a8(param_1 + 0x278,uVar4,param_2);
  if (iVar1 != -1) {
    FUN_140dc59b8(param_1 + 0x278,param_2);
  }
  return iVar1 != -1;
}



// FUNCTION 140dc56a8 FUN_140dc56a8 body=199 status=ok
// SIG undefined FUN_140dc56a8(void)

int FUN_140dc56a8(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_140dc56ee:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_140dc575b;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140dc575b;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_140dc5708;
    }
  }
  return -1;
LAB_140dc575b:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_140dc5708:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_140dc56ee;
}



// FUNCTION 140dc5770 FUN_140dc5770 body=208 status=ok
// SIG undefined FUN_140dc5770(void)

void FUN_140dc5770(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 100) != 0)) {
    FUN_1408be2c4(param_1 + 0x58,0);
  }
  FUN_140dc5582(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_146809bf6(param_1 + 0x40);
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1408be2c4(param_1 + 8,0);
  }
  FUN_140dc55aa(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_146809c26(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1446f8c06(param_1 + 0x28,0);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 140dc5840 FUN_140dc5840 body=375 status=ok
// SIG undefined FUN_140dc5840(void)

void FUN_140dc5840(longlong *param_1,int param_2)

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
      FUN_1468023ae((longlong)iStack_54 * 0x40 + *local_70);
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
    FUN_140b7ce44(param_1,param_2);
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



// FUNCTION 140dc59b8 FUN_140dc59b8 body=451 status=ok
// SIG undefined FUN_140dc59b8(void)

undefined8 FUN_140dc59b8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar6 = (int)param_2[1];
  iVar8 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar8 = 0;
  }
  uVar13 = 0;
  if (0 < iVar8) {
    if (iVar6 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = (undefined2 *)*param_2;
    }
    lVar11 = 0;
    uVar13 = 0;
    do {
      uVar5 = ((uint)(ushort)puVar9[lVar11] + (uint)(0x19 < (ushort)puVar9[lVar11] - 0x61) * 0x20) -
              0x20;
      uVar13 = uVar13 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar13 ^ uVar5) & 0xff) * 4);
      uVar13 = uVar13 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar5 >> 8 & 0xff) * 4);
      lVar11 = lVar11 + 1;
    } while (iVar8 != (int)lVar11);
  }
  plVar10 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[8];
  }
  iVar8 = *(int *)((longlong)plVar10 + ((longlong)(int)uVar13 & (longlong)(int)param_1[9] - 1U) * 4)
  ;
  if (iVar8 == -1) {
    return 0;
  }
  lVar11 = *param_1;
LAB_140dc5a95:
  lVar4 = (longlong)iVar8 * 0x20;
  plVar1 = (longlong *)(lVar11 + lVar4);
  iVar14 = *(int *)(lVar11 + 8 + lVar4);
  if (iVar14 == iVar6) {
    if (1 < iVar6) {
      lVar12 = 0;
      do {
        uVar2 = *(ushort *)(*plVar1 + lVar12);
        uVar3 = *(ushort *)(*param_2 + lVar12);
        if (uVar2 == uVar3) {
          if (uVar2 == 0) break;
        }
        else {
          if (0x7f < (uVar3 | uVar2)) {
            iVar14 = (uint)uVar2 - (uint)uVar3;
            goto LAB_140dc5af6;
          }
          if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) goto code_r0x000140dc5af3;
        }
        lVar12 = lVar12 + 2;
      } while( true );
    }
    goto LAB_140dc5afb;
  }
  if (iVar14 + iVar6 == 1) goto LAB_140dc5afb;
  goto LAB_140dc5b53;
code_r0x000140dc5af3:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_140dc5af6:
  if (iVar14 == 0) {
LAB_140dc5afb:
    iVar6 = *(int *)((longlong)plVar10 + (longlong)*(int *)((longlong)plVar1 + 0x1c) * 4);
    if (iVar6 == iVar8) {
      piVar7 = (int *)((longlong)plVar10 + (longlong)*(int *)((longlong)plVar1 + 0x1c) * 4);
    }
    else {
      do {
        piVar7 = (int *)(lVar11 + (longlong)iVar6 * 0x20 + 0x18);
        iVar6 = *piVar7;
      } while (iVar6 != iVar8);
    }
    *piVar7 = (int)plVar1[3];
    if (*(longlong *)(*param_1 + lVar4) != 0) {
      FUN_1400020a8();
    }
    FUN_140dc5b7c(param_1,iVar8);
    return 1;
  }
LAB_140dc5b53:
  iVar8 = (int)plVar1[3];
  if (iVar8 == -1) {
    return 0;
  }
  goto LAB_140dc5a95;
}



// FUNCTION 140dc5b7c FUN_140dc5b7c body=114 status=ok
// SIG undefined FUN_140dc5b7c(void)

void FUN_140dc5b7c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 140dc5bee FUN_140dc5bee body=1626 status=ok
// SIG undefined FUN_140dc5bee(void)

int * FUN_140dc5bee(longlong *param_1,int *param_2,longlong *param_3)

{
  uint *puVar1;
  void *_Dst;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  byte bVar19;
  int iVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar26 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar26 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar26) {
      FUN_14045f6dc(param_1,iVar26);
    }
    iVar30 = (int)param_1[5];
    if (iVar30 == 0) {
      iVar15 = -1;
    }
    else {
      iVar15 = iVar30 + 0x1e;
      if (-1 < iVar30 + -1) {
        iVar15 = iVar30 + -1;
      }
      iVar15 = iVar15 >> 5;
    }
    plVar21 = param_1 + 2;
    iVar20 = iVar30 + 1;
    iVar25 = iVar30 + 0x1f;
    if (-1 < iVar30) {
      iVar25 = iVar30;
    }
    if (iVar25 >> 5 == iVar15) {
      *(int *)(param_1 + 5) = iVar20;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar30) {
        if (iVar30 + 0x20U < 0xa0) {
          iVar20 = 0x80;
          iVar15 = iVar30;
        }
        else {
          uVar16 = iVar30 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar28 = 4;
            if (4 < uVar16) {
              uVar28 = uVar16;
            }
          }
          else {
            uVar28 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar33 = FUN_144a3809e(uVar28 << 2,0);
          iVar15 = (int)(uVar33 >> 2);
          iVar20 = -0x20;
          if ((int)uVar16 <= iVar15) {
            iVar20 = iVar15 << 5;
          }
          iVar15 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar20;
        FUN_1446efbd8(plVar21,iVar15);
        iVar20 = (int)param_1[5] + 1;
      }
      iVar15 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar15 = iVar20;
      }
      *(int *)(param_1 + 5) = iVar20;
      if (iVar20 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar21;
        }
        bVar19 = -(char)(iVar20 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar15 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar15 >> 5) * 4) << (bVar19 & 0x1f)) >>
             (bVar19 & 0x1f);
      }
    }
    lVar17 = (longlong)iVar26;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar21 = (longlong *)param_1[4];
    }
    bVar19 = (byte)iVar30 & 0x1f;
    puVar1 = (uint *)((longlong)plVar21 + (longlong)(iVar25 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
  }
  else {
    iVar26 = (int)param_1[6];
    lVar17 = (longlong)iVar26;
    iVar30 = *(int *)(*param_1 + 4 + lVar17 * 0x80);
    *(int *)(param_1 + 6) = iVar30;
    iVar15 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar30 * 0x80) = 0xffffffff;
    }
  }
  plVar21 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar21 = (longlong *)param_1[4];
  }
  iVar30 = iVar26 + 0x1f;
  if (-1 < iVar26) {
    iVar30 = iVar26;
  }
  puVar1 = (uint *)((longlong)plVar21 + (longlong)(iVar30 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar26 & 0x1f);
  lVar24 = *param_1;
  lVar17 = lVar17 * 0x80;
  plVar21 = (longlong *)(lVar24 + lVar17);
  puVar3 = (undefined8 *)*param_3;
  plVar18 = (longlong *)param_3[1];
  uVar8 = *puVar3;
  uVar9 = puVar3[1];
  uVar10 = puVar3[2];
  uVar11 = puVar3[3];
  uVar4 = *(undefined4 *)((longlong)puVar3 + 0x24);
  uVar5 = *(undefined4 *)(puVar3 + 5);
  uVar6 = *(undefined4 *)((longlong)puVar3 + 0x2c);
  puVar2 = (undefined4 *)(lVar24 + 0x20 + lVar17);
  *puVar2 = *(undefined4 *)(puVar3 + 4);
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar3 = (undefined8 *)(lVar24 + 0x10 + lVar17);
  *puVar3 = uVar10;
  puVar3[1] = uVar11;
  *(undefined8 *)(lVar24 + lVar17) = uVar8;
  ((undefined8 *)(lVar24 + lVar17))[1] = uVar9;
  lVar27 = *plVar18;
  *(longlong *)(lVar24 + 0x30 + lVar17) = lVar27;
  *(longlong *)(lVar24 + 0x40 + lVar17) = plVar18[2];
  plVar18[2] = 0;
  lVar12 = plVar18[4];
  uVar4 = *(undefined4 *)((longlong)plVar18 + 0x24);
  lVar13 = plVar18[5];
  uVar5 = *(undefined4 *)((longlong)plVar18 + 0x2c);
  uVar6 = *(undefined4 *)((longlong)plVar18 + 0x34);
  lVar14 = plVar18[7];
  uVar7 = *(undefined4 *)((longlong)plVar18 + 0x3c);
  puVar2 = (undefined4 *)(lVar24 + 0x60 + lVar17);
  *puVar2 = (int)plVar18[6];
  puVar2[1] = uVar6;
  puVar2[2] = (int)lVar14;
  puVar2[3] = uVar7;
  puVar2 = (undefined4 *)(lVar24 + 0x50 + lVar17);
  *puVar2 = (int)lVar12;
  puVar2[1] = uVar4;
  puVar2[2] = (int)lVar13;
  puVar2[3] = uVar5;
  if (lVar27 != 0) {
    *plVar18 = 0;
  }
  *(int *)(plVar21 + 0xe) = -1;
  uVar22 = plVar21[2] + 0x9ae16a3b2f90404f;
  uVar33 = plVar21[1];
  uVar32 = plVar21[3];
  uVar23 = ((uVar22 << 0x27 | uVar22 >> 0x19) + uVar32) * -0x651e95c4d06fbf91;
  uVar32 = ((uVar32 << 0x1b | uVar32 >> 0x25) * -0x651e95c4d06fbf91 + uVar22 ^ uVar23) *
           -0x651e95c4d06fbf91;
  lVar17 = (uVar32 >> 0x2f ^ uVar23 ^ uVar32) * -0x651e95c4d06fbf91;
  uVar28 = (uint)((ulonglong)lVar17 >> 0x2f) ^ (uint)lVar17;
  uVar32 = *plVar21 + 0x9ae16a3b2f90404f;
  uVar22 = ((uVar32 << 0x27 | uVar32 >> 0x19) + uVar33) * -0x651e95c4d06fbf91;
  uVar33 = ((uVar33 << 0x1b | uVar33 >> 0x25) * -0x651e95c4d06fbf91 + uVar32 ^ uVar22) *
           -0x651e95c4d06fbf91;
  lVar17 = (uVar33 >> 0x2f ^ uVar22 ^ uVar33) * -0x651e95c4d06fbf91;
  uVar16 = uVar28 * 0x2f90406f >> 0xd ^
           (((uint)((ulonglong)lVar17 >> 0x2f) ^ (uint)lVar17) - uVar28) * 0x2f90406f;
  uVar29 = uVar16 << 8 ^ (uVar28 * -0x2f90406f + -0x61c88647) - uVar16;
  uVar31 = uVar29 >> 0xd ^ (uVar28 * 0x2f90406f - uVar16) - uVar29;
  uVar28 = uVar31 >> 0xc ^ (uVar16 - uVar29) - uVar31;
  uVar16 = uVar28 << 0x10 ^ (uVar29 - uVar31) - uVar28;
  uVar29 = uVar16 >> 5 ^ (uVar31 - uVar28) - uVar16;
  uVar28 = uVar29 >> 3 ^ (uVar28 - uVar16) - uVar29;
  uVar16 = uVar28 << 10 ^ (uVar16 - uVar29) - uVar28;
  uVar29 = uVar16 >> 0xf ^ uVar29 - (uVar28 + uVar16);
  lVar17 = plVar21[4];
  uVar32 = lVar17 + 0x9ae16a3b2f90404f;
  uVar33 = plVar21[5];
  uVar22 = ((uVar32 << 0x27 | uVar32 >> 0x19) + uVar33) * -0x651e95c4d06fbf91;
  uVar32 = ((uVar33 << 0x1b | uVar33 >> 0x25) * -0x651e95c4d06fbf91 + uVar32 ^ uVar22) *
           -0x651e95c4d06fbf91;
  lVar24 = (uVar32 >> 0x2f ^ uVar22 ^ uVar32) * -0x651e95c4d06fbf91;
  uVar28 = uVar29 >> 0xd ^ ((uint)((ulonglong)lVar24 >> 0x2f) ^ (uint)lVar24) * 0x2f90406f - uVar29;
  uVar16 = uVar28 << 8 ^ (-0x61c88647 - uVar29) - uVar28;
  uVar29 = uVar16 >> 0xd ^ (uVar29 - uVar28) - uVar16;
  uVar31 = uVar29 >> 0xc ^ (uVar28 - uVar16) - uVar29;
  uVar28 = uVar31 << 0x10 ^ (uVar16 - uVar29) - uVar31;
  uVar16 = uVar28 >> 5 ^ (uVar29 - uVar31) - uVar28;
  uVar29 = uVar16 >> 3 ^ (uVar31 - uVar28) - uVar16;
  uVar28 = uVar29 << 10 ^ (uVar28 - uVar16) - uVar29;
  uVar16 = uVar28 >> 0xf ^ uVar16 - (uVar29 + uVar28);
  uVar28 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar28 != 0) && (uVar28 != 1)) {
    plVar18 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar18 = (longlong *)param_1[8];
    }
    iVar30 = *(int *)((longlong)plVar18 + (ulonglong)((int)param_1[9] - 1U & uVar16) * 4);
    if (iVar30 != -1) {
      lVar24 = *param_1;
      do {
        lVar27 = (longlong)iVar30 * 0x80;
        if ((((((*(int *)(lVar24 + lVar27) == (int)*plVar21) &&
               (*(int *)(lVar24 + 4 + lVar27) == *(int *)((longlong)plVar21 + 4))) &&
              (*(int *)(lVar24 + 8 + lVar27) == (int)plVar21[1])) &&
             (((*(int *)(lVar24 + 0xc + lVar27) == *(int *)((longlong)plVar21 + 0xc) &&
               (_Dst = (void *)(lVar24 + lVar27), *(int *)((longlong)_Dst + 0x10) == (int)plVar21[2]
               )) && ((*(int *)((longlong)_Dst + 0x14) == *(int *)((longlong)plVar21 + 0x14) &&
                      ((*(int *)((longlong)_Dst + 0x18) == (int)plVar21[3] &&
                       (*(int *)((longlong)_Dst + 0x1c) == *(int *)((longlong)plVar21 + 0x1c))))))))
             ) && (*(int *)((longlong)_Dst + 0x20) == (int)lVar17)) &&
           (((*(int *)((longlong)_Dst + 0x24) == (int)((ulonglong)lVar17 >> 0x20) &&
             (*(int *)((longlong)_Dst + 0x28) == (int)uVar33)) &&
            (*(int *)((longlong)_Dst + 0x2c) == (int)(uVar33 >> 0x20))))) {
          if (*(longlong *)((longlong)_Dst + 0x30) != 0) {
            plVar18 = (longlong *)((longlong)_Dst + 0x50);
            if (*(longlong **)((longlong)_Dst + 0x40) != (longlong *)0x0) {
              plVar18 = *(longlong **)((longlong)_Dst + 0x40);
            }
            (**(code **)(*plVar18 + 0x10))();
          }
          memmove(_Dst,plVar21,0x70);
          FUN_1457ad072(param_1,iVar26);
          iVar26 = iVar30;
          goto LAB_140dc610b;
        }
        iVar30 = *(int *)(lVar24 + 0x70 + lVar27);
      } while (iVar30 != -1);
    }
  }
  if (uVar28 < 4) {
    iVar30 = 1;
  }
  else {
    uVar33 = (ulonglong)(uVar28 & 0xfffffffe) + 0xf;
    lVar17 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar30 = 1 << ((byte)lVar17 & 0x1f);
  }
  if (((int)uVar28 < 1) || (iVar30 <= (int)param_1[9])) {
    uVar16 = (int)param_1[9] - 1U & uVar16;
    *(uint *)((longlong)plVar21 + 0x74) = uVar16;
    plVar18 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar18 = param_1 + 7;
    }
    *(int *)(plVar21 + 0xe) =
         *(int *)((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar21 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar21 = param_1 + 7;
    }
    *(int *)((longlong)plVar21 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         iVar26;
  }
  else {
    *(int *)(param_1 + 9) = iVar30;
    FUN_140dc6880(param_1);
  }
LAB_140dc610b:
  *param_2 = iVar26;
  return param_2;
}



// FUNCTION 140dc6248 FUN_140dc6248 body=110 status=ok
// SIG undefined FUN_140dc6248(void)

void FUN_140dc6248(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1457adc16((longlong *)(param_1 + 8),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  lVar7 = (longlong)iVar2 * 0x40;
  *(undefined8 *)(lVar3 + lVar7) = *param_2;
  *(undefined8 *)(lVar3 + 0x10 + lVar7) = param_2[2];
  param_2[2] = 0;
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[7];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = param_2[6];
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  if (*(longlong *)(lVar3 + lVar7) != 0) {
    *param_2 = 0;
  }
  return;
}



// FUNCTION 140dc62b6 FUN_140dc62b6 body=408 status=ok
// SIG undefined FUN_140dc62b6(void)

undefined4 *
FUN_140dc62b6(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140dc64d0(param_1,local_50);
  puVar1 = (undefined4 *)*param_3;
  plVar2 = (longlong *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)local_48 = *puVar1;
  *(undefined4 *)((longlong)local_48 + 4) = uVar3;
  *(undefined4 *)(local_48 + 1) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar5;
  *(int *)(local_48 + 3) = (int)plVar2[1];
  local_48[2] = *plVar2;
  *(undefined4 *)((longlong)local_48 + 0x1c) = 0xffffffff;
  local_54 = local_50[0];
  uVar7 = local_48[1];
  uVar12 = *local_48 + 0x9ae16a3b2f90404f;
  uVar12 = ((uVar12 << 0x27 | uVar12 >> 0x19) + uVar7) * -0x651e95c4d06fbf91;
  uVar7 = (*local_48 + (uVar7 << 0x1b | uVar7 >> 0x25) * -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f ^
          uVar12) * -0x651e95c4d06fbf91;
  lVar8 = (uVar7 >> 0x2f ^ uVar12 ^ uVar7) * -0x651e95c4d06fbf91;
  uVar10 = ((uint)((ulonglong)lVar8 >> 0x2f) ^ (uint)lVar8) * 0x2f90406f;
  local_68 = param_4;
  cVar6 = FUN_140dc6450(param_1,uVar10,local_48);
  if (cVar6 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar9 < 4) {
      iVar11 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar10 = *(int *)(param_1 + 0x48) - 1U & uVar10;
      *(uint *)(local_48 + 4) = uVar10;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_48 + 0x1c) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_140dc66ba(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dc6450 FUN_140dc6450 body=127 status=ok
// SIG undefined FUN_140dc6450(void)

void FUN_140dc6450(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar9 = FUN_140f5cdc4();
    if (iVar9 != -1) {
      lVar2 = *param_1;
      lVar10 = (longlong)iVar9;
      uVar4 = *param_3;
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      uVar3 = *(undefined8 *)(param_3 + 4);
      *(undefined4 *)(lVar2 + 0x18 + lVar10 * 0x24) = param_3[6];
      *(undefined8 *)(lVar2 + 0x10 + lVar10 * 0x24) = uVar3;
      puVar1 = (undefined4 *)(lVar2 + lVar10 * 0x24);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      FUN_1467f466a(param_1,*param_4,1);
      *param_4 = iVar9;
      uVar8 = 1;
      goto LAB_140dc647f;
    }
  }
  uVar8 = 0;
LAB_140dc647f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 140dc64d0 FUN_140dc64d0 body=489 status=ok
// SIG undefined FUN_140dc64d0(void)

int * FUN_140dc64d0(longlong *param_1,int *param_2)

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
      FUN_14042c636(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x24);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x24) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x24 + *param_1;
  return param_2;
}



// FUNCTION 140dc66ba FUN_140dc66ba body=452 status=ok
// SIG undefined FUN_140dc66ba(void)

void FUN_140dc66ba(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x24;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x20) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x1c) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dc6880 FUN_140dc6880 body=453 status=ok
// SIG undefined FUN_140dc6880(void)

void FUN_140dc6880(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x80;
        iVar6 = FUN_144a70b6e(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x74 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x70 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dc6a54 FUN_140dc6a54 body=31 status=ok
// SIG undefined FUN_140dc6a54(void)

undefined8 FUN_140dc6a54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dc6a82 FUN_140dc6a82 body=31 status=ok
// SIG undefined FUN_140dc6a82(void)

undefined8 FUN_140dc6a82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dc6aa2 FUN_140dc6aa2 body=123 status=ok
// SIG undefined FUN_140dc6aa2(void)

undefined8 FUN_140dc6aa2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_140dc6b1e();
      FUN_140dc6b7c(param_2 + lVar2 + 0x20,param_3 + lVar2 + 0x20);
      FUN_140dc6c16(param_2 + lVar2 + 0x70,param_3 + lVar2 + 0x70);
      lVar2 = lVar2 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140dc6b1e FUN_140dc6b1e body=93 status=ok
// SIG undefined FUN_140dc6b1e(void)

undefined8 * FUN_140dc6b1e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1448262fc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14791b2f6(param_1,iVar1);
      FUN_14052b3b1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140dc6b7c FUN_140dc6b7c body=154 status=ok
// SIG undefined FUN_140dc6b7c(void)

longlong FUN_140dc6b7c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140dc6ba8;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140dc6ba8:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140dc6da6(param_1,param_2);
  return param_1;
}



// FUNCTION 140dc6c16 FUN_140dc6c16 body=154 status=ok
// SIG undefined FUN_140dc6c16(void)

longlong FUN_140dc6c16(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140dc6c42;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140dc6c42:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140dc6cb0(param_1,param_2);
  return param_1;
}



// FUNCTION 140dc6cb0 FUN_140dc6cb0 body=245 status=ok
// SIG undefined FUN_140dc6cb0(void)

undefined8 * FUN_140dc6cb0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1404dc466(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar4 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      _Src = param_2 + 2;
      if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
        _Src = (undefined8 *)param_2[4];
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 140dc6da6 FUN_140dc6da6 body=368 status=ok
// SIG undefined FUN_140dc6da6(void)

longlong * FUN_140dc6da6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1404dc4e2(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar7 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar7;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar9 = 0;
      uVar8 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar6 + (uVar8 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar8 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
          *(undefined4 *)(lVar4 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
        }
        else {
          *(undefined8 *)(lVar4 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
          FUN_147914106(lVar4 + 8 + lVar9,lVar3 + 8 + lVar9);
          *(undefined8 *)(lVar4 + 0x18 + lVar9) = *(undefined8 *)(lVar3 + 0x18 + lVar9);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x20;
      } while (uVar1 != uVar8);
    }
  }
  return param_1;
}



// FUNCTION 140dc6f16 FUN_140dc6f16 body=24 status=ok
// SIG undefined FUN_140dc6f16(void)

void FUN_140dc6f16(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140dc6f2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 140dc6f2e FUN_140dc6f2e body=38 status=ok
// SIG undefined FUN_140dc6f2e(void)

undefined8 FUN_140dc6f2e(undefined8 param_1,int param_2)

{
  FUN_140dc6f54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dc6f54 FUN_140dc6f54 body=64 status=ok
// SIG undefined FUN_140dc6f54(void)

void FUN_140dc6f54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e44780;
  FUN_14047b1f0(param_1 + 0x10,param_1[0x10]);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_140dc6f94(param_1);
  return;
}



// FUNCTION 140dc6f94 FUN_140dc6f94 body=89 status=ok
// SIG undefined FUN_140dc6f94(void)

void FUN_140dc6f94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e447a0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140dc7008 FUN_140dc7008 body=153 status=ok
// SIG undefined FUN_140dc7008(void)

void FUN_140dc7008(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c17710(param_1,&local_48,param_4);
  lVar1 = local_48;
  if ((longlong)local_40 != 0) {
    lVar2 = 0;
    do {
      FUN_140dc70a2(param_1,param_2,param_3,*(undefined4 *)(lVar1 + lVar2));
      lVar2 = lVar2 + 4;
    } while ((longlong)local_40 * 4 != lVar2);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dc70a2 FUN_140dc70a2 body=196 status=ok
// SIG undefined FUN_140dc70a2(void)

void FUN_140dc70a2(longlong param_1,undefined8 param_2,char param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
    lVar5 = param_1 + 0x188;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar5 = *(longlong *)(param_1 + 400);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x198) - 1U & param_4) * 4);
    if (iVar6 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x150) + (longlong)iVar6 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar6 * 0x20) == param_4) {
          if (lVar5 == 0) {
            return;
          }
          lVar3 = *(longlong *)(lVar5 + 8);
          plVar4 = *(longlong **)(lVar5 + 0x10);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          if (lVar3 != 0) {
            if (param_3 == '\0') {
              FUN_1400bc8c2(lVar3 + 0x560);
            }
            else {
              FUN_1400bc96c();
            }
          }
          if (plVar4 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return;
          }
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 != 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000140dc7162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
        iVar6 = *(int *)(lVar5 + 0x18);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 140dc7166 FUN_140dc7166 body=297 status=ok
// SIG undefined FUN_140dc7166(void)

undefined8 FUN_140dc7166(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140dc7288;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140dc7288;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140dc7288:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140dc7233;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140dc7233;
    }
  }
  uVar6 = 0;
LAB_140dc7233:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dc7290 FUN_140dc7290 body=821 status=ok
// SIG undefined FUN_140dc7290(void)

void FUN_140dc7290(longlong param_1,longlong *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(int *)(param_1 + 0xc4) == 0) || (uVar1 = *(uint *)(param_1 + 0xc0), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) goto LAB_140dc7306;
  plVar4 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar4 == (longlong *)0x0) || ((int)plVar4[2] != *(int *)(param_1 + 0xc4))) ||
     (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 ||
      ((*plVar4 == 0 || (*(char *)(param_1 + 0x9c) != '\x01')))))) goto LAB_140dc7306;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6168) {
    FUN_144b3d300(&DAT_14cbd6168);
    if (DAT_14cbd6168 == -1) {
      FUN_1447683ea(&local_48,&DAT_14cbd6130,1);
      local_58 = (undefined8 *)0x0;
      local_50 = 1;
      FUN_140c19d4e(&local_58,1,0);
      *local_58 = CONCAT44(uStack_44,local_48);
      FUN_1457ae23a(&DAT_14cbd6148,&local_58);
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit(FUN_144259dfd);
      _Init_thread_footer(&DAT_14cbd6168);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6190) {
    FUN_144b3d300(&DAT_14cbd6190);
    if (DAT_14cbd6190 == -1) {
      FUN_1447683ea(&local_48,&DAT_14cbd6138,1);
      FUN_1447683ea(&uStack_40,&DAT_14cbd6140,1);
      local_58 = (undefined8 *)0x0;
      local_50 = 2;
      FUN_140c19d4e(&local_58,2,0);
      *(undefined4 *)local_58 = local_48;
      *(undefined4 *)((longlong)local_58 + 4) = uStack_44;
      *(undefined4 *)(local_58 + 1) = uStack_40;
      *(undefined4 *)((longlong)local_58 + 0xc) = uStack_3c;
      FUN_1457ae23a(&DAT_14cbd6170,&local_58);
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit(FUN_144259e2d);
      _Init_thread_footer(&DAT_14cbd6190);
    }
  }
  if ((longlong)DAT_14cbd6150 != 0) {
    plVar4 = DAT_14cbd6148;
    do {
      if ((int)param_2[1] != 0) {
        lVar5 = 0;
        do {
          if (*(longlong *)(*param_2 + lVar5) == *plVar4) goto LAB_140dc7477;
          lVar5 = lVar5 + 8;
        } while ((longlong)(int)param_2[1] << 3 != lVar5);
      }
      if ((int)param_2[3] != 0) {
        lVar5 = 0;
        do {
          if (*(longlong *)(param_2[2] + lVar5) == *plVar4) goto LAB_140dc7477;
          lVar5 = lVar5 + 8;
        } while ((longlong)(int)param_2[3] << 3 != lVar5);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != DAT_14cbd6148 + DAT_14cbd6150);
  }
  bVar2 = 0;
LAB_140dc73f0:
  bVar3 = 1;
  if ((longlong)DAT_14cbd6178 != 0) {
    plVar4 = DAT_14cbd6170;
    do {
      if ((int)param_2[1] != 0) {
        lVar5 = 0;
        do {
          if (*(longlong *)(*param_2 + lVar5) == *plVar4) goto LAB_140dc75bf;
          lVar5 = lVar5 + 8;
        } while ((longlong)(int)param_2[1] << 3 != lVar5);
      }
      if ((int)param_2[3] != 0) {
        lVar5 = 0;
        do {
          if (*(longlong *)(param_2[2] + lVar5) == *plVar4) goto LAB_140dc75bf;
          lVar5 = lVar5 + 8;
        } while ((longlong)(int)param_2[3] << 3 != lVar5);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != DAT_14cbd6170 + DAT_14cbd6178);
  }
LAB_140dc746a:
  *(byte *)(param_1 + 0xd9) = bVar3 & bVar2;
LAB_140dc7306:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140dc7477:
  bVar2 = 1;
  goto LAB_140dc73f0;
LAB_140dc75bf:
  bVar3 = 0;
  goto LAB_140dc746a;
}



// FUNCTION 140dc75d4 FUN_140dc75d4 body=45 status=ok
// SIG undefined FUN_140dc75d4(void)

undefined8 FUN_140dc75d4(undefined8 param_1,int param_2)

{
  FUN_140dc7602();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140dc7602 FUN_140dc7602 body=148 status=ok
// SIG undefined FUN_140dc7602(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dc7602(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b33d560;
  FUN_140dc7696(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140dc7688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140dc7696 FUN_140dc7696 body=140 status=ok
// SIG undefined FUN_140dc7696(void)

void FUN_140dc7696(longlong param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x58);
    do {
      plVar1 = plVar4 + 3;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(plVar4 + 7) * 0x120));
      if (pcVar2 != (code *)0x0) {
        plVar3 = plVar1;
        if (0x18 < *(ushort *)(plVar4 + 6)) {
          plVar3 = (longlong *)*plVar1;
        }
        (*pcVar2)(plVar3);
      }
      if (0x18 < *(ushort *)(plVar4 + 6)) {
        FUN_1400020a8(*plVar1);
      }
      FUN_140d12bca(*plVar4,(int)plVar4[1]);
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
      plVar4 = plVar4 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140dc7722 FUN_140dc7722 body=757 status=ok
// SIG undefined FUN_140dc7722(void)

void FUN_140dc7722(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_c8 [44];
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 local_90;
  longlong *plStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) {
    uVar4 = 0;
    local_98._4_4_ = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    local_98._4_4_ = *(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      local_98._4_4_ = *(uint *)(lVar11 + 0x10);
      bVar13 = local_98._4_4_ == 0;
      if (bVar13) {
        *(uint *)(lVar11 + 0x10) = uVar5;
        local_98._4_4_ = 0;
      }
      UNLOCK();
      if (bVar13) {
        local_98._4_4_ = uVar5;
      }
    }
  }
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  plStack_88 = (longlong *)0x0;
  local_64 = 0xffffffff00000080;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  uVar5 = local_98._4_4_ >> 0xd ^ uVar4 - local_98._4_4_;
  uVar8 = uVar5 << 8 ^ (-0x61c88647 - uVar5) - local_98._4_4_;
  uVar10 = uVar8 >> 0xd ^ (local_98._4_4_ - uVar5) - uVar8;
  uVar7 = uVar10 >> 0xc ^ (uVar5 - uVar8) - uVar10;
  uVar5 = uVar7 << 0x10 ^ (uVar8 - uVar10) - uVar7;
  uVar8 = uVar5 >> 5 ^ (uVar10 - uVar7) - uVar5;
  uVar7 = uVar8 >> 3 ^ (uVar7 - uVar5) - uVar8;
  uVar5 = uVar7 << 10 ^ (uVar5 - uVar8) - uVar7;
  local_98._0_4_ = uVar4;
  lVar11 = FUN_140dc7c72(param_1,uVar5 >> 0xf ^ uVar8 - (uVar7 + uVar5),&local_98);
  local_48 = 0;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_140dc7a18(&local_90);
  if (param_3 == 0) {
    local_98 = 0;
  }
  else {
    uVar4 = *(uint *)(param_3 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar6 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar6 = iVar9;
      }
    }
    local_98 = CONCAT44(iVar6,uVar4);
  }
  local_90 = *param_4;
  plStack_88 = (longlong *)param_4[1];
  if (plStack_88 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_88 + 1) = (int)plStack_88[1] + 1;
    UNLOCK();
  }
  FUN_140dc8046(lVar11 + 8,local_9c,&local_98,0);
  plVar3 = plStack_88;
  if (plStack_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_88)(plStack_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dc7a18 FUN_140dc7a18 body=55 status=ok
// SIG undefined FUN_140dc7a18(void)

void FUN_140dc7a18(longlong *param_1)

{
  FUN_140dc7a50(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140dc7a50 FUN_140dc7a50 body=546 status=ok
// SIG undefined FUN_140dc7a50(void)

void FUN_140dc7a50(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar17 = 0;
    uVar16 = 1;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar17) goto LAB_140dc7a85;
        iVar13 = iVar13 + 0x20;
        uVar14 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar11 = uVar16 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar17;
      lVar15 = (longlong)iVar9;
      uVar6 = puVar10[lVar15] & uVar14;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar7 <= iVar9) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar6 = puVar10[lVar15 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar15 == lVar12) goto LAB_140dc7a85;
        }
        uVar17 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar16 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_140dc7a85:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar14 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar14) {
    uVar6 = uVar14;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140dc7c72 FUN_140dc7c72 body=980 status=ok
// SIG undefined FUN_140dc7c72(void)

int * FUN_140dc7c72(longlong *param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  
  iVar15 = (int)param_1[1];
  iVar12 = *(int *)((longlong)param_1 + 0x34);
  if (iVar15 != iVar12) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar7 = *param_1;
      do {
        lVar16 = (longlong)iVar5 * 0x60;
        if ((*(int *)(lVar7 + lVar16) == *param_3) && (*(int *)(lVar7 + 4 + lVar16) == param_3[1]))
        {
          return (int *)(lVar7 + lVar16);
        }
        iVar5 = ((int *)(lVar7 + lVar16))[0x16];
      } while (iVar5 != -1);
    }
  }
  if (iVar12 == 0) {
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14488f93c(param_1,iVar15);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar5 = iVar12 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar6 = param_1 + 2;
    iVar10 = iVar12 + 1;
    iVar14 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar14 = iVar12;
    }
    if (iVar14 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar5 = iVar12;
        }
        else {
          uVar4 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar4) {
              uVar9 = uVar4;
            }
          }
          else {
            uVar9 = (uVar4 * 3 >> 3) + uVar4 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar9 << 2,0);
          iVar5 = (int)(uVar11 >> 2);
          iVar10 = -0x20;
          if ((int)uVar4 <= iVar5) {
            iVar10 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar6,iVar5);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar5 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar6;
        }
        bVar8 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar5 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar12 & 0x1f;
    puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar7 = (longlong)iVar15;
    iVar5 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar12 + -1;
    if (iVar12 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x60) = 0xffffffff;
    }
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar12 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar12 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar12 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  lVar16 = *param_1;
  lVar7 = lVar7 * 0x60;
  piVar2 = (int *)(lVar16 + lVar7);
  *(undefined8 *)(lVar16 + lVar7) = *(undefined8 *)param_3;
  *(undefined8 *)(lVar16 + 0x28 + lVar7) = 0;
  *(undefined4 *)(lVar16 + 0x30 + lVar7) = 0;
  puVar3 = (undefined8 *)(lVar16 + 8 + lVar7);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(lVar16 + 0x34 + lVar7) = 0xffffffff00000080;
  *(undefined4 *)(lVar16 + 0x3c + lVar7) = 0;
  *(undefined8 *)(lVar16 + 0x48 + lVar7) = 0;
  *(undefined4 *)(lVar16 + 0x50 + lVar7) = 0;
  if (piVar2 != param_3) {
    *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(param_3 + 2);
    param_3[2] = 0;
    param_3[3] = 0;
    piVar2[4] = param_3[4];
    piVar2[5] = param_3[5];
    param_3[4] = 0;
    param_3[5] = 0;
    if (*(longlong *)(param_3 + 10) == 0) {
      iVar12 = param_3[7];
      iVar5 = param_3[8];
      iVar10 = param_3[9];
      piVar2[6] = param_3[6];
      piVar2[7] = iVar12;
      piVar2[8] = iVar5;
      piVar2[9] = iVar10;
    }
    if (*(longlong *)(piVar2 + 10) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(piVar2 + 10) = *(undefined8 *)(param_3 + 10);
    param_3[10] = 0;
    param_3[0xb] = 0;
    piVar2[0xc] = param_3[0xc];
    piVar2[0xd] = param_3[0xd];
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    piVar2[0xe] = param_3[0xe];
    piVar2[0xf] = param_3[0xf];
    param_3[0xe] = -1;
    param_3[0xf] = 0;
  }
  if (*(longlong *)(param_3 + 0x12) == 0) {
    piVar2[0x10] = param_3[0x10];
  }
  if (*(longlong *)(piVar2 + 0x12) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(piVar2 + 0x12) = *(undefined8 *)(param_3 + 0x12);
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  piVar2[0x14] = param_3[0x14];
  param_3[0x14] = 0;
  piVar2[0x16] = -1;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 < 4) {
    iVar12 = 1;
  }
  else {
    uVar11 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar4 < 1) || (iVar12 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    piVar2[0x17] = param_2;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    piVar2[0x16] = *(int *)((longlong)plVar6 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_140dc8786(param_1);
  }
  return piVar2;
}



// FUNCTION 140dc8046 FUN_140dc8046 body=1856 status=ok
// SIG undefined FUN_140dc8046(void)

uint * FUN_140dc8046(longlong *param_1,uint *param_2,ulonglong *param_3,char *param_4)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  uint *puVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar25 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar25 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar25) {
      FUN_1447711aa(param_1,uVar25);
    }
    iVar19 = (int)param_1[5];
    if (iVar19 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar5 = iVar19 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar16 = param_1 + 2;
    iVar8 = iVar19 + 1;
    iVar13 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar13 = iVar19;
    }
    if (iVar13 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar19) {
        if (iVar19 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar19;
        }
        else {
          uVar12 = iVar19 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar12) {
              uVar11 = uVar12;
            }
          }
          else {
            uVar11 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar6 = FUN_144a3809e(uVar11 << 2,0);
          iVar5 = (int)(uVar6 >> 2);
          iVar8 = -0x20;
          if ((int)uVar12 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar16,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar16;
        }
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar5 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar15 = (longlong)(int)uVar25;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar19 & 0x1f;
    puVar3 = (uint *)((longlong)plVar16 + (longlong)(iVar13 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    uVar25 = *(uint *)(param_1 + 6);
    lVar15 = (longlong)(int)uVar25;
    iVar19 = *(int *)(*param_1 + 4 + lVar15 * 0x20);
    *(int *)(param_1 + 6) = iVar19;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar19 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = (uint *)(param_1 + 2);
  puVar9 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar9 = puVar3;
  }
  uVar12 = uVar25 + 0x1f;
  if (-1 < (int)uVar25) {
    uVar12 = uVar25;
  }
  puVar9[(int)uVar12 >> 5] = puVar9[(int)uVar12 >> 5] | 1 << ((byte)uVar25 & 0x1f);
  lVar24 = *param_1;
  lVar15 = lVar15 * 0x20;
  puVar9 = (uint *)(lVar24 + lVar15);
  uVar6 = *param_3;
  *(ulonglong *)(lVar24 + lVar15) = uVar6;
  *(ulonglong *)(lVar24 + 8 + lVar15) = param_3[1];
  uVar18 = param_3[2];
  *(ulonglong *)(lVar24 + 0x10 + lVar15) = uVar18;
  if (uVar18 == 0) {
    uVar12 = (uint)(uVar6 >> 0x20);
  }
  else {
    LOCK();
    *(int *)(uVar18 + 8) = *(int *)(uVar18 + 8) + 1;
    UNLOCK();
    uVar6 = (ulonglong)*puVar9;
    uVar12 = puVar9[1];
  }
  puVar9[6] = 0xffffffff;
  uVar11 = uVar12 >> 0xd ^ (int)uVar6 - uVar12;
  uVar21 = uVar11 << 8 ^ (-0x61c88647 - uVar12) - uVar11;
  uVar22 = uVar21 >> 0xd ^ (uVar12 - uVar11) - uVar21;
  uVar23 = uVar22 >> 0xc ^ (uVar11 - uVar21) - uVar22;
  uVar11 = uVar23 << 0x10 ^ (uVar21 - uVar22) - uVar23;
  uVar21 = uVar11 >> 5 ^ (uVar22 - uVar23) - uVar11;
  uVar22 = uVar21 >> 3 ^ (uVar23 - uVar11) - uVar21;
  uVar11 = uVar22 << 10 ^ (uVar11 - uVar21) - uVar22;
  uVar11 = uVar11 >> 0xf ^ uVar21 - (uVar22 + uVar11);
  if ((uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) < 2) {
LAB_140dc820e:
    cVar10 = '\0';
  }
  else {
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    uVar21 = *(uint *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & uVar11) * 4);
    if (uVar21 == 0xffffffff) goto LAB_140dc820e;
    lVar15 = *param_1;
    do {
      lVar24 = (longlong)(int)uVar21 * 0x20;
      puVar2 = (uint *)(lVar15 + lVar24);
      if ((*(int *)(lVar15 + lVar24) == (int)uVar6) && (*(uint *)(lVar15 + 4 + lVar24) == uVar12)) {
        plVar16 = *(longlong **)(puVar2 + 4);
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar17 = plVar16 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*plVar16)();
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))();
            }
          }
        }
        uVar12 = *puVar9;
        uVar22 = puVar9[1];
        uVar23 = puVar9[2];
        uVar4 = puVar9[3];
        *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar9 + 4);
        *puVar2 = uVar12;
        puVar2[1] = uVar22;
        puVar2[2] = uVar23;
        puVar2[3] = uVar4;
        FUN_140d7d1d8(param_1,uVar25);
        cVar10 = '\x01';
        uVar25 = uVar21;
        break;
      }
      uVar21 = puVar2[6];
      cVar10 = '\0';
    } while (uVar21 != 0xffffffff);
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar10;
  }
  if (cVar10 != '\0') goto LAB_140dc8507;
  uVar21 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar12 = 1;
  if (3 < uVar21) {
    uVar6 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
    lVar15 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar15 & 0x1f);
  }
  if (((int)uVar21 < 1) || ((int)uVar12 <= (int)param_1[9])) {
    uVar11 = (int)param_1[9] - 1U & uVar11;
    puVar9[7] = uVar11;
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    puVar9[6] = *(uint *)((longlong)plVar16 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(uint *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         uVar25;
    goto LAB_140dc8507;
  }
  *(uint *)(param_1 + 9) = uVar12;
  plVar16 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar16,0,0,4);
    uVar12 = *(uint *)(param_1 + 9);
  }
  plVar17 = param_1 + 7;
  if (uVar12 == 1) {
    if (*plVar16 != 0) {
      FUN_1446efa72(plVar16,0,0,4);
    }
LAB_140dc8274:
    uVar11 = 0;
    do {
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar17;
      }
      *(undefined4 *)((longlong)plVar16 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4) =
           0xffffffff;
      uVar11 = uVar11 + 1;
    } while (uVar12 != uVar11);
  }
  else {
    if (uVar12 == 0) goto LAB_140dc8507;
    FUN_1446efa72(plVar16,0,uVar12,4);
    if (0 < (int)uVar12) goto LAB_140dc8274;
  }
  iVar19 = (int)param_1[5];
  if (iVar19 == 0) {
    uVar6 = 0;
    uVar18 = 1;
    iVar5 = 0;
    iVar8 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar3;
    }
    uVar12 = *puVar9;
    if (uVar12 == 0) {
      iVar5 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar5 = iVar19 + -1;
      }
      uVar6 = 0;
      uVar18 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar18 = uVar6;
      }
      iVar8 = 0;
      do {
        if (uVar18 == uVar6) goto LAB_140dc8507;
        iVar8 = iVar8 + 0x20;
        uVar12 = puVar9[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar6 = 0;
      iVar8 = 0;
    }
    uVar18 = (ulonglong)(-uVar12 & uVar12);
    uVar20 = uVar18 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar5 = (iVar8 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar19 <= iVar5) {
      iVar5 = iVar19;
    }
  }
  if (iVar5 < iVar19) {
    uVar12 = 0xffffffff;
    do {
      lVar15 = *param_1;
      lVar24 = (longlong)iVar5 * 0x20;
      uVar11 = *(uint *)(lVar15 + 4 + lVar24);
      uVar23 = uVar11 >> 0xd ^ *(int *)(lVar15 + lVar24) - uVar11;
      uVar21 = uVar23 << 8 ^ (-0x61c88647 - uVar11) - uVar23;
      uVar22 = uVar21 >> 0xd ^ (uVar11 - uVar23) - uVar21;
      uVar11 = uVar22 >> 0xc ^ (uVar23 - uVar21) - uVar22;
      uVar23 = uVar11 << 0x10 ^ (uVar21 - uVar22) - uVar11;
      uVar21 = uVar23 >> 5 ^ (uVar22 - uVar11) - uVar23;
      uVar22 = uVar21 >> 3 ^ (uVar11 - uVar23) - uVar21;
      uVar11 = uVar22 << 10 ^ (uVar23 - uVar21) - uVar22;
      uVar20 = (longlong)(int)(uVar11 >> 0xf ^ uVar21 - (uVar22 + uVar11)) &
               (longlong)(int)param_1[9] - 1U;
      iVar19 = (int)uVar20;
      *(int *)(lVar15 + 0x1c + lVar24) = iVar19;
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar17;
      }
      *(undefined4 *)(lVar15 + 0x18 + lVar24) =
           *(undefined4 *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & uVar20) * 4);
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar17;
      }
      *(int *)((longlong)plVar16 + ((longlong)iVar19 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar12 = ~(uint)uVar18 & uVar12;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar3;
      }
      iVar19 = (int)param_1[5];
      iVar5 = (int)uVar6;
      lVar15 = (longlong)iVar5;
      uVar11 = puVar9[lVar15] & uVar12;
      if (uVar11 == 0) {
        iVar13 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar13 = iVar19 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar5) {
          iVar14 = iVar5;
        }
        if (iVar13 <= iVar5) break;
        lVar24 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar11 = puVar9[lVar15 + lVar24 + 1];
          if (uVar11 != 0) break;
          lVar24 = lVar24 + 1;
          if (iVar14 - lVar15 == lVar24) goto LAB_140dc8507;
        }
        uVar6 = (ulonglong)(iVar5 + (int)lVar24 + 1);
        uVar12 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar11 & uVar11);
      uVar20 = uVar18 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar5 = (iVar8 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar19);
  }
LAB_140dc8507:
  *param_2 = uVar25;
  return param_2;
}



// FUNCTION 140dc8786 FUN_140dc8786 body=698 status=ok
// SIG undefined FUN_140dc8786(void)

void FUN_140dc8786(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_50._0_4_ = 0xffffffff;
      local_50._4_4_ = 0;
      local_60._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      uVar8 = local_60 >> 0x20;
    }
    iVar4 = (int)local_60;
    uVar5 = (uint)local_50;
    iVar6 = local_50._4_4_;
    iVar10 = local_48;
    if (local_50._4_4_ < (int)local_58[3]) {
      do {
        lVar12 = *param_1;
        lVar11 = (longlong)iVar6 * 0x60;
        uVar3 = *(uint *)(lVar12 + 4 + lVar11);
        uVar15 = uVar3 >> 0xd ^ *(int *)(lVar12 + lVar11) - uVar3;
        uVar9 = uVar15 << 8 ^ (-0x61c88647 - uVar3) - uVar15;
        uVar3 = uVar9 >> 0xd ^ (uVar3 - uVar15) - uVar9;
        uVar15 = uVar3 >> 0xc ^ (uVar15 - uVar9) - uVar3;
        uVar16 = uVar15 << 0x10 ^ (uVar9 - uVar3) - uVar15;
        uVar3 = uVar16 >> 5 ^ (uVar3 - uVar15) - uVar16;
        uVar9 = uVar3 >> 3 ^ (uVar15 - uVar16) - uVar3;
        uVar15 = uVar9 << 10 ^ (uVar16 - uVar3) - uVar9;
        uVar14 = (longlong)(int)(uVar15 >> 0xf ^ uVar3 - (uVar9 + uVar15)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar13 = (int)uVar14;
        *(int *)(lVar12 + 0x5c + lVar11) = iVar13;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0x58 + lVar11) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar13 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_58[2];
        if ((longlong *)local_58[2] == (longlong *)0x0) {
          plVar7 = local_58;
        }
        iVar13 = (int)local_58[3];
        lVar12 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar12 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar6 = iVar13 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar11 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4 + lVar12 * 4 + 4);
            if (uVar3 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar2 - lVar12 == lVar11) goto LAB_140dc89f5;
          }
          iVar4 = iVar4 + (int)lVar11 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar14 = uVar8 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar13);
    }
  }
LAB_140dc89f5:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dc8a50 FUN_140dc8a50 body=85 status=ok
// SIG undefined FUN_140dc8a50(void)

undefined8 * FUN_140dc8a50(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b036de0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dc8ab4 FUN_140dc8ab4 body=36 status=ok
// SIG undefined FUN_140dc8ab4(void)

undefined8 FUN_140dc8ab4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140dc8ae6 FUN_140dc8ae6 body=40 status=ok
// SIG undefined FUN_140dc8ae6(void)

undefined8 FUN_140dc8ae6(undefined8 param_1,int param_2)

{
  FUN_140dc8b0e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dc8b0e FUN_140dc8b0e body=297 status=ok
// SIG undefined FUN_140dc8b0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dc8b0e(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b7b80f0;
  FUN_14494dff0(param_1 + 0x5d);
  FUN_14494dff0(param_1 + 0x39);
  FUN_14494dff0(param_1 + 0x15);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0xd;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x11) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x10)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x10)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140dc8c37(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar3 = (undefined8 *)param_1[1], puVar3 != (undefined8 *)0x0)) {
    if (puVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar3 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x000140dc8c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140dc8c37 FUN_140dc8c37 body=105 status=ok
// SIG undefined FUN_140dc8c37(void)

void FUN_140dc8c37(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    do {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140dc8ca0 FUN_140dc8ca0 body=378 status=ok
// SIG undefined FUN_140dc8ca0(void)

void FUN_140dc8ca0(longlong param_1,double *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  iVar2 = *(int *)(param_1 + 0x34);
  if ((iVar2 == 0) || (uVar1 = *(uint *)(param_1 + 0x30), (int)uVar1 < 0)) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return;
  }
  plVar6 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar6[2] != iVar2) {
    return;
  }
  if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
    return;
  }
  if (param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1] < 9.99999905104687e-09
     ) {
    if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar6;
    }
    else {
      lVar3 = 0;
    }
    FUN_140dc8e1a(lVar3 + 0x60e8,0);
    return;
  }
  if (((((*(int *)(param_1 + 0x3c) == 0) || (uVar1 = *(uint *)(param_1 + 0x38), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar5 == (undefined8 *)0x0 || (*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x3c))))) ||
     ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) {
LAB_140dc8db4:
    uVar1 = *(uint *)(param_1 + 0x30);
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140dc8df1;
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar6 != (longlong *)0x0) &&
       (((int)plVar6[2] == iVar2 && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
      lVar3 = *plVar6;
      goto LAB_140dc8df1;
    }
  }
  else {
    if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
      uVar4 = *puVar5;
    }
    else {
      uVar4 = 0;
    }
    FUN_140545fa2(uVar4);
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 != 0) goto LAB_140dc8db4;
  }
  lVar3 = 0;
LAB_140dc8df1:
  FUN_140dc8f42(lVar3 + 0x60e8,0);
  return;
}



// FUNCTION 140dc8e1a FUN_140dc8e1a body=296 status=ok
// SIG undefined FUN_140dc8e1a(void)

void FUN_140dc8e1a(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xa8);
  if (0 < (int)*(uint *)(param_1 + 0xa8)) {
    bVar3 = (byte)param_2 & 0x3f;
    uVar8 = -2L << bVar3 | 0xfffffffffffffffeU >> 0x40 - bVar3;
    lVar6 = ((param_2 & 0xff) >> 6) * 8 + 0x60;
    lVar7 = 0x20;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + lVar7);
      if ((plVar2 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(plVar2);
LAB_140dc8e90:
        bVar3 = *(byte *)(plVar2 + 0x17b);
        if ((int)(uint)bVar3 < (int)plVar2[0x17e]) {
          if ((*(longlong *)(plVar2[0x17d] + 8 + (ulonglong)bVar3 * 0x80 + (ulonglong)bVar3 * 8) !=
               0) && ((*(uint *)(plVar2[0x17d] + (ulonglong)bVar3 * 0x80 + (ulonglong)bVar3 * 8) >>
                       ((uint)(param_2 & 0xff) & 0x1f) & 1) != 0)) {
            if (lVar5 < *(int *)(param_1 + 0xa8)) {
              puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xa0) + lVar6);
              *puVar1 = *puVar1 & uVar8;
            }
            (**(code **)(*plVar2 + 0x828))(plVar2,param_2 & 0xffffffff,0);
          }
        }
      }
      else {
        if (plVar2 != (longlong *)0x0) goto LAB_140dc8e90;
        if (lVar5 < (int)uVar4) {
          puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xa0) + lVar6);
          *puVar1 = *puVar1 & uVar8;
        }
      }
      lVar5 = lVar5 + 1;
      uVar4 = (ulonglong)*(int *)(param_1 + 0xa8);
      lVar6 = lVar6 + 0x170;
      lVar7 = lVar7 + 0x170;
    } while (lVar5 < (longlong)uVar4);
  }
  return;
}



// FUNCTION 140dc8f42 FUN_140dc8f42 body=355 status=ok
// SIG undefined FUN_140dc8f42(void)

void FUN_140dc8f42(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (0 < *(int *)(param_1 + 0xa8)) {
    bVar4 = (byte)param_2;
    lVar8 = 0;
    uVar7 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x20 + lVar8);
      if ((DAT_14c950c29 == '\x01') && (plVar3 != (longlong *)0x0)) {
        FUN_1456cec3c(plVar3);
LAB_140dc8faf:
        bVar2 = *(byte *)(plVar3 + 0x17b);
        if ((((int)(uint)bVar2 < (int)plVar3[0x17e]) &&
            (*(longlong *)(plVar3[0x17d] + 8 + (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8) != 0)
            ) && ((*(uint *)(plVar3[0x17d] + (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8) &
                  1 << (bVar4 & 0x1f)) != 0)) {
          lVar6 = (longlong)*(int *)(param_1 + 0xa8);
          if ((longlong)uVar7 < lVar6) {
            puVar1 = (ulonglong *)
                     (lVar8 + 0x60 + *(longlong *)(param_1 + 0xa0) + (ulonglong)(bVar4 >> 3 & 0x18))
            ;
            *puVar1 = *puVar1 | 1L << (bVar4 & 0x3f);
            lVar6 = (longlong)*(int *)(param_1 + 0xa8);
          }
          if (((((lVar6 <= (longlong)uVar7) ||
                (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x58 + lVar8) == 0)) &&
               ((lVar8 != 0 || (*(longlong *)(param_1 + 0x160) == 0)))) &&
              (((*(byte *)(param_1 + 0x15c) & 3) != 1 ||
               (*(float *)((longlong)plVar3 + 0xc54) <= 0.0)))) &&
             (cVar5 = FUN_1403ae2fa(param_1,0,uVar7 & 0xffffffff), cVar5 != '\0')) {
            (**(code **)(*plVar3 + 0x820))(plVar3,param_2);
          }
        }
      }
      else if (plVar3 != (longlong *)0x0) goto LAB_140dc8faf;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x170;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0xa8));
  }
  return;
}



// FUNCTION 140dc90a6 FUN_140dc90a6 body=40 status=ok
// SIG undefined FUN_140dc90a6(void)

undefined8 FUN_140dc90a6(undefined8 param_1,int param_2)

{
  FUN_140dc90ce();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dc90ce FUN_140dc90ce body=231 status=ok
// SIG undefined FUN_140dc90ce(void)

void FUN_140dc90ce(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b94e320;
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x1e) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x1e) + -1;
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
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  plVar4 = (longlong *)param_1[0x1d];
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
  FUN_140dc91b6(param_1);
  return;
}



// FUNCTION 140dc91b6 FUN_140dc91b6 body=472 status=ok
// SIG undefined FUN_140dc91b6(void)

void FUN_140dc91b6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b49c290;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0xa4) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0xa4) + -1;
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
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x13) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x13) + -1;
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
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  plVar4 = (longlong *)param_1[0x10];
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
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140dc9394 FUN_140dc9394 body=57 status=ok
// SIG undefined FUN_140dc9394(void)

void FUN_140dc9394(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfcd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfcd8 = FUN_140002ddd(FUN_146614521,uVar1,L"RepairKitClassData");
  }
  return;
}



// FUNCTION 140dc93dc FUN_140dc93dc body=196 status=ok
// SIG undefined FUN_140dc93dc(void)

undefined8 * FUN_140dc93dc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b911080;
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dc94a0 FUN_140dc94a0 body=769 status=ok
// SIG undefined FUN_140dc94a0(void)

void FUN_140dc94a0(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  float *pfVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  PSRWLOCK pRVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  float fVar16;
  undefined1 auStack_88 [40];
  PSRWLOCK local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0x10))(param_1 + -8);
  if ((cVar6 != '\0') && (*(int *)(param_1 + 0x48) != 0)) {
    iVar7 = *(int *)(param_1 + 0x28);
    if (iVar7 < *(int *)(param_1 + 0x48)) {
      (**(code **)(*(longlong *)(param_1 + -0x38) + 0x2c8))(param_1 + -0x38);
      iVar7 = *(int *)(param_1 + 0x28);
    }
    if (iVar7 != 0) {
      if (*(int *)(param_1 + 0x58) != 0) {
        FUN_1402815f4(param_1 + -0x38,&local_58);
        plVar5 = *(longlong **)(local_58 + 0x1e0);
        pRVar12 = (PSRWLOCK)(plVar5 + 6);
        AcquireSRWLockExclusive(pRVar12);
        *(int *)(plVar5 + 5) = (int)plVar5[5] + 1;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_50 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
        if ((longlong)*(int *)(param_1 + 0x58) != 0) {
          puVar15 = *(uint **)(param_1 + 0x50);
          puVar2 = puVar15 + (longlong)*(int *)(param_1 + 0x58) * 2;
          do {
            if (((((puVar15[1] != 0) && (uVar4 = *puVar15, -1 < (int)uVar4)) &&
                 ((int)uVar4 < DAT_14c9647dc)) &&
                ((plVar11 = (longlong *)
                            ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                 plVar11 != (longlong *)0x0 && (*(uint *)(plVar11 + 2) == puVar15[1])))) &&
               ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
                lVar13 = *plVar11;
              }
              else {
                lVar13 = 0;
              }
              if ((*(longlong *)(lVar13 + 0x3b0) != 0) && (0 < (int)plVar5[1])) {
                iVar7 = *(int *)(*(longlong *)(lVar13 + 0x3b0) + 0x394);
                lVar14 = 0;
                lVar13 = 0;
                local_60 = pRVar12;
                do {
                  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
                  if (iVar7 == *(int *)(*plVar5 + lVar14)) {
                    if ((((puVar15[1] == 0) || (uVar4 = *puVar15, (int)uVar4 < 0)) ||
                        (DAT_14c9647dc <= (int)uVar4)) ||
                       ((plVar11 = (longlong *)
                                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                        plVar11 == (longlong *)0x0 || (*(uint *)(plVar11 + 2) != puVar15[1])))) {
                      lVar10 = 0x71a8;
                      if (DAT_000073ed != '\x01') goto LAB_140dc96c9;
LAB_140dc9725:
                      fVar16 = (float)FUN_1401d646e(lVar10);
                    }
                    else {
                      if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
                        lVar8 = *plVar11;
                      }
                      else {
                        lVar8 = 0;
                      }
                      if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
                        lVar10 = *plVar11 + 0x71a8;
                      }
                      else {
                        lVar10 = 0x71a8;
                      }
                      if ((&DAT_000073ed)[lVar8] == '\x01') goto LAB_140dc9725;
LAB_140dc96c9:
                      fVar16 = (float)FUN_140264e80();
                    }
                    *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
                    lVar10 = *plVar5;
                    pfVar3 = (float *)(lVar10 + 0xa8 + lVar14);
                    iVar9 = *(int *)(lVar10 + 0xac + lVar14);
                    pRVar12 = local_60;
                    if ((fVar16 == *pfVar3) && (!NAN(fVar16) && !NAN(*pfVar3))) {
                      if (iVar9 != 0) goto LAB_140dc970c;
                      iVar9 = 0;
                    }
                    *(float *)(lVar10 + 0xa8 + lVar14) = fVar16;
                    *(int *)(lVar10 + 0xac + lVar14) = iVar9 + 1;
                  }
LAB_140dc970c:
                  lVar13 = lVar13 + 1;
                  lVar14 = lVar14 + 0xd8;
                } while (lVar13 < (int)plVar5[1]);
              }
            }
            puVar15 = puVar15 + 2;
          } while (puVar15 != puVar2);
        }
        ReleaseSRWLockExclusive(pRVar12);
      }
      if ((*(char *)(param_1 + 100) != '\0') ||
         (*(int *)(param_1 + 0x60) < *(int *)(param_1 + 0x28))) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dc97ba FUN_140dc97ba body=595 status=ok
// SIG undefined FUN_140dc97ba(void)

void FUN_140dc97ba(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
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
  lVar4 = param_1[0x10];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = param_1[0xf];
    lVar10 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 4 + lVar10);
      if (((((iVar1 != 0) && (uVar2 = *(uint *)(lVar3 + lVar10), -1 < (int)uVar2)) &&
           ((int)uVar2 < DAT_14c9647dc)) &&
          (((plVar6 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
            plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar1)) &&
           (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
            (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))))))) &&
         (lVar8 = *(longlong *)(*plVar6 + 0x408), lVar8 != 0)) {
        if (DAT_14cba8288 == 0) {
          local_50 = &local_38;
          local_38 = FUN_141864c34;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1464cee30;
          local_58 = &LAB_148bfac22;
          local_60 = &LAB_140f21842;
          local_68 = &DAT_149e063b2;
          local_70 = 0;
          local_78 = 0x10000004;
          local_80 = 0x10;
          local_88 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) {
          lVar5 = FUN_1402095ca();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
             ((*(longlong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30 ||
              (lVar8 = *(longlong *)(lVar8 + 0x1710), lVar8 == 0)))) goto LAB_140dc989e;
        }
        if (*(longlong *)(lVar8 + 0x13f8) != 0) {
          iVar1 = *(int *)(lVar3 + 4 + lVar10);
          if ((iVar1 == 0) || (uVar2 = *(uint *)(lVar3 + lVar10), (int)uVar2 < 0)) {
LAB_140dc992e:
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            if ((int)uVar2 < DAT_14c9647dc) {
              puVar7 = (undefined8 *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != iVar1)) ||
                 ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_140dc992e;
              uVar9 = *puVar7;
            }
          }
          (**(code **)(*param_1 + 0x2c0))(param_1,lVar8,uVar9);
        }
      }
LAB_140dc989e:
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar10);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dc9a0e FUN_140dc9a0e body=1545 status=ok
// SIG undefined FUN_140dc9a0e(void)

void FUN_140dc9a0e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong *plStack_140;
  longlong local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  char local_5c;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  cVar7 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(param_1 + 0x30);
  if (((param_3 == 0) || (param_2 == 0)) || (cVar7 == '\0')) goto LAB_140dc9b61;
  iVar9 = *(int *)(param_3 + 0x394);
  plVar1 = (longlong *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x60);
  local_150 = param_2;
  if ((longlong)iVar4 != 0) {
    uVar16 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x58) + 0x10 + uVar16) == iVar9) {
        iVar12 = (int)(uVar16 >> 3) * -0xf0f0f0f;
        if ((-1 < iVar12) && (iVar12 < iVar4)) goto LAB_140dc9ab4;
        break;
      }
      uVar16 = uVar16 + 0x88;
    } while ((longlong)iVar4 * 0x88 != uVar16);
  }
  local_128 = 0;
  uStack_120 = (longlong *)0x0;
  local_118 = 0xffffffffffffffff;
  local_110 = 0xffffffff;
  local_a8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  FUN_14485c47a(&local_128,param_3);
  FUN_14485c47a(&uStack_120,param_2);
  local_118 = CONCAT44(local_118._4_4_,iVar9);
  uVar8 = FUN_1457ae312(param_1);
  local_110 = uVar8;
  lVar10 = FUN_144a7b4ca();
  if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
      == lVar10 + 0x30)) {
    uVar8 = *(undefined4 *)(param_3 + 0xef0);
  }
  local_118 = CONCAT44(uVar8,(undefined4)local_118);
  iVar12 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar12 + 1U;
  if (*(uint *)(param_1 + 100) < iVar12 + 1U) {
    FUN_1457ae370(plVar1,iVar12);
  }
  lVar10 = *plVar1;
  lVar6 = (longlong)iVar12 * 0x88;
  puVar13 = &local_128;
  puVar14 = (undefined8 *)(lVar10 + lVar6);
  for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined8 *)(lVar10 + 0x58 + lVar6) = 0;
  *(undefined4 *)(lVar10 + 0x60 + lVar6) = 0;
  *(undefined8 *)(lVar10 + 0x58 + lVar6) = uStack_d0;
  uStack_d0 = 0;
  *(undefined4 *)(lVar10 + 0x60 + lVar6) = local_c8;
  local_c8 = 0;
  *(undefined8 *)(lVar10 + 0x68 + lVar6) = local_c0;
  *(undefined8 *)(lVar10 + 0x70 + lVar6) = 0;
  *(undefined4 *)(lVar10 + 0x78 + lVar6) = 0;
  *(undefined8 *)(lVar10 + 0x70 + lVar6) = uStack_b8;
  uStack_b8 = 0;
  *(undefined4 *)(lVar10 + 0x78 + lVar6) = local_b0;
  local_b0 = 0;
  *(undefined8 *)(lVar10 + 0x80 + lVar6) = local_a8;
  FUN_1449db362(&uStack_b8);
  FUN_1449db362(&uStack_d0);
LAB_140dc9ab4:
  lVar10 = FUN_1408bb964(param_1 + 0x44);
  if (lVar10 == 0) goto LAB_140dc9b61;
  local_158 = param_3;
  FUN_1402815f4(param_1,&local_128);
  puVar13 = *(undefined8 **)(local_128 + 0x1e0);
  AcquireSRWLockExclusive((PSRWLOCK)(puVar13 + 6));
  plVar3 = uStack_120;
  *(int *)(puVar13 + 5) = *(int *)(puVar13 + 5) + 1;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_120 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*uStack_120)(uStack_120);
      LOCK();
      piVar15 = (int *)((longlong)plVar3 + 0xc);
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (*piVar15 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  uVar5 = *(uint *)(puVar13 + 1);
  if (0 < (int)uVar5) {
    lVar6 = *plVar1;
    iVar4 = *(int *)(puVar13 + 2);
    piVar15 = (int *)*puVar13;
    uVar16 = 0;
    do {
      *(int *)(puVar13 + 2) = iVar4 + 1 + (int)uVar16;
      if (*piVar15 == *(int *)(lVar6 + (longlong)iVar12 * 0x88 + 0x10)) {
        if ((int)uVar16 < (int)uVar5) goto LAB_140dc9b58;
        break;
      }
      uVar16 = uVar16 + 1;
      piVar15 = piVar15 + 0x36;
    } while (uVar5 != uVar16);
  }
  FUN_1457ae406(&local_128);
  FUN_141220240(local_158,&local_138);
  FUN_140775538(&uStack_100,&local_138);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_128._4_4_ == 0 || iVar9 != (int)local_128) {
    local_128 = CONCAT44(local_128._4_4_ + 1,iVar9);
  }
  lVar6 = (longlong)iVar12 * 0x88;
  iVar9 = *(int *)(*plVar1 + 0x14 + lVar6);
  if (uStack_120._4_4_ == 0 || iVar9 != (int)uStack_120) {
    uStack_120 = (longlong *)CONCAT44(uStack_120._4_4_ + 1,iVar9);
  }
  local_110 = *(undefined4 *)(*plVar1 + 0x18 + lVar6);
  lVar11 = FUN_140b64196(lVar10);
  lVar6 = local_158;
  if (lVar11 != 0) {
    if ((&DAT_149fc1b6e)[*(byte *)(local_158 + 0x3b8)] == '\x01') {
      if (*(longlong **)(local_158 + 0x3a8) != (longlong *)0x0) {
        cVar7 = (**(code **)(**(longlong **)(local_158 + 0x3a8) + 0x28))();
        if (cVar7 != '\0') goto LAB_140dc9dfb;
      }
LAB_140dc9fa2:
      bVar17 = false;
    }
    else {
      if ((*(uint *)(local_158 + 0x3a8) & 0xffffff) == 0) goto LAB_140dc9fa2;
LAB_140dc9dfb:
      FUN_1408e4d18(lVar6 + 0x3a0,&local_148);
      local_138 = local_148;
      plStack_130 = plStack_140;
      local_148 = 0;
      plStack_140 = (longlong *)0x0;
      iVar9 = FUN_140b64372(lVar11,&local_138);
      plVar1 = plStack_130;
      bVar17 = iVar9 == 1;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_130 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_130)(plStack_130);
          LOCK();
          piVar15 = (int *)((longlong)plVar1 + 0xc);
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (*piVar15 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      plVar1 = plStack_140;
      if (plStack_140 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_140 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_140)(plStack_140);
          LOCK();
          piVar15 = (int *)((longlong)plVar1 + 0xc);
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (*piVar15 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    if (local_58 == 0 || bVar17 != (bool)local_5c) {
      local_58 = local_58 + 1;
      local_5c = bVar17;
    }
  }
  lVar6 = local_158;
  lVar10 = *(longlong *)(lVar10 + 0x48);
  if (lVar10 != 0) {
    lVar11 = FUN_140b7066c();
    if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8
         ) == lVar11 + 0x30)) {
      lVar10 = FUN_14586ea88(lVar10);
      iVar9 = local_118._4_4_;
      if (local_118._4_4_ == 0 || (bool)(char)local_118 != (lVar10 == lVar6)) {
        local_118 = CONCAT71(local_118._1_7_,lVar10 == lVar6);
        local_118 = CONCAT44(iVar9 + 1,(undefined4)local_118);
      }
    }
  }
  if ((*(char *)(local_150 + 0x178) == '\x03') || (*(char *)(local_150 + 0x68) == '\x03')) {
    local_d8 = CONCAT44(local_d8._4_4_,(int)local_d8 + 1);
    local_138 = 0;
    plStack_130 = (longlong *)0x0;
    uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)uStack_f0 + 1);
    FUN_141179052(local_158,&uStack_100,&local_e8,&local_138);
    plVar1 = plStack_130;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_130 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_130)(plStack_130);
        LOCK();
        piVar15 = (int *)((longlong)plVar1 + 0xc);
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (*piVar15 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  FUN_1457ae83e(param_1,iVar12);
  FUN_1457ae2ca(puVar13,&local_128);
  FUN_1457ae28c(&local_128);
LAB_140dc9b58:
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar13 + 6));
LAB_140dc9b61:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dca018 FUN_140dca018 body=370 status=ok
// SIG undefined FUN_140dca018(void)

undefined8 * FUN_140dca018(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140dca198 FUN_140dca198 body=370 status=ok
// SIG undefined FUN_140dca198(void)

undefined8 * FUN_140dca198(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140dca318 FUN_140dca318 body=237 status=ok
// SIG undefined FUN_140dca318(void)

void FUN_140dca318(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_140dca418(*(longlong *)(param_1 + 0x138),param_2);
    local_30 = 0;
    plVar3 = (longlong *)param_2[1];
    local_28 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) {
          local_28 = (longlong *)0x0;
          goto LAB_140dca3ce;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar6 = iVar5 == iVar4;
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar6);
      if (plVar3 != (longlong *)0x0) {
        local_30 = *param_2;
        FUN_140dca65a(param_1 + -0x48);
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
        goto LAB_140dca397;
      }
    }
LAB_140dca3ce:
    FUN_140dca65a(param_1 + -0x48,&local_30);
  }
LAB_140dca397:
  if (param_2[1] != 0) {
    LOCK();
    piVar2 = (int *)(param_2[1] + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dca418 FUN_140dca418 body=218 status=ok
// SIG undefined FUN_140dca418(void)

void FUN_140dca418(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    FUN_140dca4f4(param_1 + 0x120,param_2);
    local_30 = 0;
    plVar3 = (longlong *)param_2[1];
    local_28 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) {
          local_28 = (longlong *)0x0;
          goto LAB_140dca4cb;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar6 = iVar5 == iVar4;
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar6);
      if (plVar3 != (longlong *)0x0) {
        local_30 = *param_2;
        FUN_140dcae94(param_1);
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
        goto LAB_140dca4a3;
      }
    }
LAB_140dca4cb:
    FUN_140dcae94(param_1,&local_30);
  }
LAB_140dca4a3:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dca4f4 FUN_140dca4f4 body=103 status=ok
// SIG undefined FUN_140dca4f4(void)

int FUN_140dca4f4(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_140dca55c();
  if (iVar3 == -1) {
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_140dcb648(param_1,iVar3);
    }
    lVar1 = *param_1;
    *(undefined8 *)(lVar1 + (longlong)iVar3 * 0x10) = *param_2;
    lVar2 = param_2[1];
    *(longlong *)(lVar1 + 8 + (longlong)iVar3 * 0x10) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
      UNLOCK();
    }
  }
  return iVar3;
}



// FUNCTION 140dca55c FUN_140dca55c body=254 status=ok
// SIG undefined FUN_140dca55c(void)

ulonglong FUN_140dca55c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    param_1 = (longlong *)*param_1;
    plVar10 = param_1;
    do {
      plVar8 = (longlong *)plVar10[1];
      if (plVar8 == (longlong *)0x0) {
LAB_140dca60b:
        plVar8 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar8[1];
        do {
          if (iVar6 == 0) goto LAB_140dca60b;
          LOCK();
          iVar5 = (int)plVar8[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar8 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
      }
      lVar7 = *plVar10;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_140dca60f:
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_140dca60f;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *param_2;
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
      if (plVar8 == (longlong *)0x0) {
        lVar7 = 0;
      }
      else {
        LOCK();
        plVar3 = plVar8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (lVar7 == lVar9) {
        return (ulonglong)((longlong)plVar10 - (longlong)param_1) >> 4 & 0xffffffff;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != param_1 + (longlong)(int)lVar4 * 2);
  }
  return 0xffffffff;
}



// FUNCTION 140dca65a FUN_140dca65a body=725 status=ok
// SIG undefined FUN_140dca65a(void)

void FUN_140dca65a(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
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
  if (*param_2 == 0) goto LAB_140dca875;
  lVar7 = *(longlong *)(param_1 + 0x20);
  bVar1 = true;
  if (lVar7 == 0) {
LAB_140dca939:
    lVar7 = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141864c34;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464cee30;
      local_58 = &LAB_148bfac22;
      local_60 = &LAB_140f21842;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_140dca939;
    uVar3 = FUN_1401902e2();
    if ((((int)uVar3 < 0) || (*(int *)(lVar7 + 0x78f0) <= (int)uVar3)) ||
       (lVar4 = (ulonglong)uVar3 * 0x48 + *(longlong *)(lVar7 + 0x78e8), lVar4 == 0)) {
LAB_140dca6f2:
      bVar1 = false;
    }
    else {
      bVar1 = false;
      if ((*(longlong *)(lVar4 + 0x20) != 0) && (*(longlong **)(lVar4 + 0x28) != (longlong *)0x0)) {
        lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 8))();
        if (lVar4 != 0) {
          lVar5 = FUN_1401900c0();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            FUN_140dcad76(lVar4,param_2);
          }
        }
        goto LAB_140dca6f2;
      }
    }
  }
  FUN_140dcab30(param_1,param_2);
  if (((*(longlong *)(param_1 + 0x180) == 0) ||
      (*(int *)(*(longlong *)(param_1 + 0x180) + 0x138) == 0)) ||
     (*(char *)(param_1 + 0x141) != '\0')) {
LAB_140dca875:
    if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar4 = *param_2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x168));
  *(int *)(lVar4 + 0x160) = *(int *)(lVar4 + 0x160) + 1;
  FUN_140dca948(param_1 + 0x58,lVar4 + 0x10);
  FUN_140dca948(param_1 + 0x90,lVar4 + 0x40);
  FUN_140dca948(param_1 + 200,lVar4 + 0x70);
  if (bVar1) {
LAB_140dca856:
    cVar2 = '\0';
  }
  else {
    iVar6 = *(int *)(lVar7 + 0x47d8);
    if (((longlong)iVar6 < 0) || (*(int *)(lVar7 + 0x47c0) <= iVar6)) goto LAB_140dca856;
    cVar2 = *(char *)(*(longlong *)(lVar7 + 0x47b8) + 0x80 + (longlong)iVar6 * 0x88);
  }
  if (cVar2 == *(char *)(lVar4 + 0x124)) {
    if (*(int *)(lVar4 + 0x128) != 0) goto LAB_140dca7cd;
    iVar6 = 1;
  }
  else {
    iVar6 = *(int *)(lVar4 + 0x128) + 1;
  }
  *(char *)(lVar4 + 0x124) = cVar2;
  *(int *)(lVar4 + 0x128) = iVar6;
LAB_140dca7cd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
}



// FUNCTION 140dca948 FUN_140dca948 body=486 status=ok
// SIG undefined FUN_140dca948(void)

void FUN_140dca948(undefined8 param_1,float *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  undefined1 auVar5 [16];
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_1403ae288();
  if (cVar1 == '\0') {
    if (param_2[1] == 0.0 || *param_2 != 0.0) {
      *param_2 = 0.0;
      param_2[1] = (float)((int)param_2[1] + 1);
    }
    if (param_2[5] == 0.0 || param_2[4] != 0.0) {
      param_2[4] = 0.0;
      param_2[5] = (float)((int)param_2[5] + 1);
    }
    if (param_2[7] == 0.0 || param_2[6] != 0.0) {
      param_2[6] = 0.0;
      param_2[7] = (float)((int)param_2[7] + 1);
    }
    if (param_2[0xb] == 0.0 || *(char *)(param_2 + 10) != '\x04') {
      *(undefined1 *)(param_2 + 10) = 4;
      param_2[0xb] = (float)((int)param_2[0xb] + 1);
    }
  }
  else {
    lVar2 = FUN_140280ec4(param_1);
    if (param_2[1] == 0.0 || *(float *)(lVar2 + 200) != *param_2) {
      *param_2 = *(float *)(lVar2 + 200);
      param_2[1] = (float)((int)param_2[1] + 1);
    }
    lVar2 = FUN_140280ec4(param_1);
    if ((*(longlong *)(lVar2 + 0x18) == 0) ||
       (*(char *)(*(longlong *)(lVar2 + 0x18) + 0x18) != '\x01')) {
      fVar4 = *(float *)(lVar2 + 0x30);
    }
    else {
      auVar5 = roundps(ZEXT416(*(uint *)(lVar2 + 0x30)),ZEXT416(*(uint *)(lVar2 + 0x30)),3);
      fVar4 = auVar5._0_4_;
    }
    if (param_2[5] == 0.0 || fVar4 != param_2[4]) {
      param_2[4] = fVar4;
      param_2[5] = (float)((int)param_2[5] + 1);
    }
    lVar2 = FUN_140280ec4(param_1);
    if (param_2[7] == 0.0 || *(float *)(lVar2 + 0x3c) != param_2[6]) {
      param_2[6] = *(float *)(lVar2 + 0x3c);
      param_2[7] = (float)((int)param_2[7] + 1);
    }
    local_21 = '\x04';
    uVar3 = FUN_140280ec4(param_1);
    cVar1 = FUN_140280f4a(uVar3,&local_21);
    if (cVar1 != '\0') {
      if (param_2[0xb] == 0.0 || local_21 != *(char *)(param_2 + 10)) {
        *(char *)(param_2 + 10) = local_21;
        param_2[0xb] = (float)((int)param_2[0xb] + 1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dcab30 FUN_140dcab30 body=581 status=ok
// SIG undefined FUN_140dcab30(void)

void FUN_140dcab30(longlong param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x168));
  *(int *)(lVar2 + 0x160) = *(int *)(lVar2 + 0x160) + 1;
  *(int *)(lVar2 + 0x118) = *(int *)(lVar2 + 0x118) + 1;
  if (*(char *)(param_1 + 0x1a4) == *(char *)(lVar2 + 0x108)) {
    if (*(int *)(lVar2 + 0x10c) == 0) {
      iVar3 = 1;
      goto LAB_140dcad06;
    }
  }
  else {
    iVar3 = *(int *)(lVar2 + 0x10c) + 1;
LAB_140dcad06:
    *(char *)(lVar2 + 0x108) = *(char *)(param_1 + 0x1a4);
    *(int *)(lVar2 + 0x10c) = iVar3;
  }
  if (*(int *)(param_1 + 0x188) == *(int *)(lVar2 + 0xd8)) {
    if (*(int *)(lVar2 + 0xdc) == 0) {
      iVar3 = 1;
      goto LAB_140dcaca4;
    }
  }
  else {
    iVar3 = *(int *)(lVar2 + 0xdc) + 1;
LAB_140dcaca4:
    *(int *)(lVar2 + 0xd8) = *(int *)(param_1 + 0x188);
    *(int *)(lVar2 + 0xdc) = iVar3;
  }
  if (*(char *)(param_1 + 0x18c) == *(char *)(lVar2 + 0x110)) {
    if (*(int *)(lVar2 + 0x114) == 0) {
      iVar3 = 1;
      goto LAB_140dcacf3;
    }
  }
  else {
    iVar3 = *(int *)(lVar2 + 0x114) + 1;
LAB_140dcacf3:
    *(char *)(lVar2 + 0x110) = *(char *)(param_1 + 0x18c);
    *(int *)(lVar2 + 0x114) = iVar3;
  }
  fVar1 = *(float *)(param_1 + 400);
  if ((fVar1 != *(float *)(lVar2 + 0xe0)) || (NAN(fVar1) || NAN(*(float *)(lVar2 + 0xe0)))) {
    iVar3 = *(int *)(lVar2 + 0xe4) + 1;
LAB_140dcacc9:
    *(float *)(lVar2 + 0xe0) = fVar1;
    *(int *)(lVar2 + 0xe4) = iVar3;
  }
  else if (*(int *)(lVar2 + 0xe4) == 0) {
    iVar3 = 1;
    goto LAB_140dcacc9;
  }
  fVar1 = *(float *)(param_1 + 0x194);
  if ((fVar1 != *(float *)(lVar2 + 0xf0)) || (NAN(fVar1) || NAN(*(float *)(lVar2 + 0xf0)))) {
    iVar3 = *(int *)(lVar2 + 0xf4) + 1;
LAB_140dcacde:
    *(float *)(lVar2 + 0xf0) = fVar1;
    *(int *)(lVar2 + 0xf4) = iVar3;
  }
  else if (*(int *)(lVar2 + 0xf4) == 0) {
    iVar3 = 1;
    goto LAB_140dcacde;
  }
  fVar1 = *(float *)(param_1 + 0x198);
  if ((fVar1 != *(float *)(lVar2 + 0xe8)) || (NAN(fVar1) || NAN(*(float *)(lVar2 + 0xe8)))) {
    iVar3 = *(int *)(lVar2 + 0xec) + 1;
LAB_140dcad19:
    *(float *)(lVar2 + 0xe8) = fVar1;
    *(int *)(lVar2 + 0xec) = iVar3;
  }
  else if (*(int *)(lVar2 + 0xec) == 0) {
    iVar3 = 1;
    goto LAB_140dcad19;
  }
  fVar1 = *(float *)(param_1 + 0x19c);
  if ((fVar1 != *(float *)(lVar2 + 0xf8)) || (NAN(fVar1) || NAN(*(float *)(lVar2 + 0xf8)))) {
    iVar3 = *(int *)(lVar2 + 0xfc) + 1;
LAB_140dcacb7:
    *(float *)(lVar2 + 0xf8) = fVar1;
    *(int *)(lVar2 + 0xfc) = iVar3;
  }
  else if (*(int *)(lVar2 + 0xfc) == 0) {
    iVar3 = 1;
    goto LAB_140dcacb7;
  }
  fVar1 = *(float *)(param_1 + 0x1a0);
  if ((fVar1 != *(float *)(lVar2 + 0x100)) || (NAN(fVar1) || NAN(*(float *)(lVar2 + 0x100)))) {
    iVar3 = *(int *)(lVar2 + 0x104) + 1;
  }
  else {
    if (*(int *)(lVar2 + 0x104) != 0) goto LAB_140dcac7f;
    iVar3 = 1;
  }
  *(float *)(lVar2 + 0x100) = fVar1;
  *(int *)(lVar2 + 0x104) = iVar3;
LAB_140dcac7f:
                    /* WARNING: Could not recover jumptable at 0x000140dcac89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x168));
  return;
}



// FUNCTION 140dcad76 FUN_140dcad76 body=285 status=ok
// SIG undefined FUN_140dcad76(void)

void FUN_140dcad76(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x168));
  *(int *)(lVar1 + 0x160) = *(int *)(lVar1 + 0x160) + 1;
  if (*(char *)(lVar1 + 300) == '\0') {
    iVar3 = *(int *)(lVar1 + 0x130) + 1;
LAB_140dcae57:
    *(undefined1 *)(lVar1 + 300) = 1;
    *(int *)(lVar1 + 0x130) = iVar3;
  }
  else if (*(int *)(lVar1 + 0x130) == 0) {
    iVar3 = 1;
    goto LAB_140dcae57;
  }
  if (*(uint *)(lVar1 + 0x14c) == (uint)*(byte *)(param_1 + 0xac1)) {
    if (*(int *)(lVar1 + 0x150) == 0) {
      iVar3 = 1;
      goto LAB_140dcae33;
    }
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x150) + 1;
LAB_140dcae33:
    *(uint *)(lVar1 + 0x14c) = (uint)*(byte *)(param_1 + 0xac1);
    *(int *)(lVar1 + 0x150) = iVar3;
  }
  cVar2 = FUN_1403ae288(param_1 + 0x9a8);
  if (cVar2 == '\0') {
    param_1 = param_1 + 0xa4c;
  }
  else {
    param_1 = FUN_140280ec4(param_1 + 0x9a8);
    param_1 = param_1 + 0x44;
  }
  if (*(int *)(param_1 + 4) == *(int *)(lVar1 + 0x154)) {
    if (*(int *)(lVar1 + 0x158) != 0) goto LAB_140dcae1e;
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x158) + 1;
  }
  *(int *)(lVar1 + 0x154) = *(int *)(param_1 + 4);
  *(int *)(lVar1 + 0x158) = iVar3;
LAB_140dcae1e:
                    /* WARNING: Could not recover jumptable at 0x000140dcae2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x168));
  return;
}



// FUNCTION 140dcae94 FUN_140dcae94 body=1299 status=ok
// SIG undefined FUN_140dcae94(void)

void FUN_140dcae94(longlong param_1,longlong *param_2)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  longlong lVar14;
  float fVar15;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong local_78;
  PSRWLOCK local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    local_70 = (PSRWLOCK)(param_2 + 0x2d);
    AcquireSRWLockExclusive(local_70);
    *(int *)(param_2 + 0x2c) = (int)param_2[0x2c] + 1;
    if (((*(int *)(param_1 + 0x138) != 0) && (*(char *)(param_1 + 0x140) == '\0')) &&
       (plVar6 = *(longlong **)(param_1 + 0x118), plVar6 != (longlong *)0x0)) {
      if (DAT_14cb56270 == 0) {
        local_90 = &local_68;
        local_68 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_1427b09ee;
        local_98 = &LAB_148630fef;
        local_a0 = FUN_1464b6a91;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10004001;
        local_c0 = 8;
        local_c8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,DAT_14cb56270);
      if (plVar6 != (longlong *)0x0) {
        if (DAT_14cb56270 == 0) {
          local_90 = &local_68;
          local_68 = FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_1427b09ee;
          local_98 = &LAB_148630fef;
          local_a0 = FUN_1464b6a91;
          local_a8 = L"Engine";
          local_b0 = 0;
          local_b8 = 0x10004001;
          local_c0 = 8;
          local_c8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
        }
        plVar7 = (longlong *)FUN_144718840(plVar6,DAT_14cb56270);
        if (((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) &&
           ((local_78 = (**(code **)(*plVar7 + 0x10))(plVar7), local_78 != 0 &&
            ((*(int *)(param_1 + 0x138) == *(int *)(local_78 + 0x40) &&
             (FUN_140dcb3f2(param_2,*(int *)(param_1 + 0x138),1), 0 < *(int *)(param_1 + 0x138))))))
           ) {
          lVar9 = 0;
          lVar14 = 0;
          lVar8 = 0;
          do {
            lVar11 = *(longlong *)(param_1 + 0x130);
            lVar10 = *param_2;
            iVar5 = *(int *)(lVar10 + 8 + lVar14);
            if (*(longlong *)(lVar11 + lVar14) == *(longlong *)(lVar10 + lVar14)) {
              if (iVar5 == 0) {
                iVar5 = 0;
                goto LAB_140dcb1a9;
              }
            }
            else {
LAB_140dcb1a9:
              *(longlong *)(lVar10 + lVar14) = *(longlong *)(lVar11 + lVar14);
              *(int *)(lVar10 + 8 + lVar14) = iVar5 + 1;
              lVar11 = *(longlong *)(param_1 + 0x130);
              lVar10 = *param_2;
            }
            if (((*(int *)(lVar10 + 0x20 + lVar14) == 0) ||
                (*(int *)(lVar10 + 0x18 + lVar14) != *(int *)(lVar11 + 0x50 + lVar14))) ||
               (cVar4 = FUN_140dcb3a8(*(undefined8 *)(lVar10 + 0x10 + lVar14),
                                      *(undefined8 *)(lVar11 + 0x48 + lVar14)), cVar4 == '\0')) {
              FUN_140dcb4aa(lVar10 + lVar14 + 0x10,lVar11 + lVar14 + 0x48);
              piVar1 = (int *)(lVar10 + lVar14 + 0x20);
              *piVar1 = *piVar1 + 1;
            }
            lVar12 = *(longlong *)(local_78 + 0x38) + lVar9;
            lVar11 = *param_2;
            lVar10 = *(longlong *)(param_1 + 0x130);
            fVar15 = (float)FUN_14055830e(lVar12);
            pfVar2 = (float *)(lVar11 + 0x28 + lVar14);
            iVar5 = *(int *)(lVar11 + 0x2c + lVar14);
            if ((fVar15 != *pfVar2) || (NAN(fVar15) || NAN(*pfVar2))) {
LAB_140dcb041:
              *(float *)(lVar11 + 0x28 + lVar14) = fVar15;
              *(int *)(lVar11 + 0x2c + lVar14) = iVar5 + 1;
            }
            else if (iVar5 == 0) {
              iVar5 = 0;
              goto LAB_140dcb041;
            }
            fVar15 = (float)FUN_1405583ce(lVar12);
            pfVar2 = (float *)(lVar11 + 0x38 + lVar14);
            iVar5 = *(int *)(lVar11 + 0x3c + lVar14);
            if ((fVar15 != *pfVar2) || (NAN(fVar15) || NAN(*pfVar2))) {
LAB_140dcb06a:
              *(float *)(lVar11 + 0x38 + lVar14) = fVar15;
              *(int *)(lVar11 + 0x3c + lVar14) = iVar5 + 1;
            }
            else if (iVar5 == 0) {
              iVar5 = 0;
              goto LAB_140dcb06a;
            }
            plVar6 = *(longlong **)(lVar10 + 0x18 + lVar14);
            fVar15 = 1.0;
            if (plVar6 != (longlong *)0x0) {
              iVar5 = *(int *)(lVar10 + 0x14 + lVar14);
              fVar15 = 1.0;
              if (iVar5 != 0) {
                puVar13 = (uint *)(lVar10 + lVar14 + 0x10);
                uVar3 = *puVar13;
                fVar15 = 1.0;
                if ((-1 < (int)uVar3) && (fVar15 = 1.0, (int)uVar3 < DAT_14c9647dc)) {
                  fVar15 = 1.0;
                  lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                  if ((lVar10 != 0) &&
                     ((fVar15 = 1.0, *(int *)(lVar10 + 0x10) == iVar5 &&
                      (fVar15 = 1.0, (*(uint *)(lVar10 + 8) & 0x10200000) == 0)))) {
                    if (*(code **)(*plVar6 + 0x10) == (code *)&LAB_1447a1f2e) {
                      plVar6 = plVar6 + 0xd9;
                    }
                    else {
                      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))();
                    }
                    cVar4 = FUN_14486eb0e(plVar6,puVar13);
                    fVar15 = 1.0;
                    if (cVar4 != '\0') {
                      lVar10 = FUN_140280ec4(puVar13);
                      fVar15 = *(float *)(lVar10 + 0x3c);
                    }
                  }
                }
              }
            }
            pfVar2 = (float *)(lVar11 + 0x40 + lVar14);
            iVar5 = *(int *)(lVar11 + 0x44 + lVar14);
            if ((fVar15 != *pfVar2) || (NAN(fVar15) || NAN(*pfVar2))) {
LAB_140dcb1e7:
              *(float *)(lVar11 + 0x40 + lVar14) = fVar15;
              *(int *)(lVar11 + 0x44 + lVar14) = iVar5 + 1;
            }
            else if (iVar5 == 0) {
              iVar5 = 0;
              goto LAB_140dcb1e7;
            }
            local_68 = (code *)CONCAT71(local_68._1_7_,4);
            cVar4 = FUN_14071466e(lVar12,&local_68);
            if (cVar4 != '\0') {
              iVar5 = *(int *)(lVar11 + 0x54 + lVar14);
              if ((char)local_68 == *(char *)(lVar11 + 0x50 + lVar14)) {
                if (iVar5 != 0) goto LAB_140dcb17c;
                iVar5 = 0;
              }
              *(char *)(lVar11 + 0x50 + lVar14) = (char)local_68;
              *(int *)(lVar11 + 0x54 + lVar14) = iVar5 + 1;
            }
LAB_140dcb17c:
            lVar8 = lVar8 + 1;
            lVar14 = lVar14 + 0x58;
            lVar9 = lVar9 + 0x88;
          } while (lVar8 < *(int *)(param_1 + 0x138));
        }
      }
    }
    ReleaseSRWLockExclusive(local_70);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dcb3a8 FUN_140dcb3a8 body=73 status=ok
// SIG undefined FUN_140dcb3a8(void)

char FUN_140dcb3a8(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = '\x01';
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_2 + 4);
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_144b085bc(param_1,*puVar2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 0xc;
      puVar2 = puVar2 + 3;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 140dcb3f2 FUN_140dcb3f2 body=183 status=ok
// SIG undefined FUN_140dcb3f2(void)

void FUN_140dcb3f2(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1457af3a6(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x58 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x54) = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      *(undefined8 *)((longlong)puVar2 + 0x41) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x49) = 0;
      puVar2 = puVar2 + 0xb;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (FUN_140dcb548(param_1,param_2,iVar1 - param_2), param_3 == '\x01')) {
      FUN_140dcb508(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140dcb4aa FUN_140dcb4aa body=93 status=ok
// SIG undefined FUN_140dcb4aa(void)

undefined8 * FUN_140dcb4aa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1408bd9f2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1470d8626(param_1,iVar1);
      FUN_1470d8699(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140dcb508 FUN_140dcb508 body=64 status=ok
// SIG undefined FUN_140dcb508(void)

void FUN_140dcb508(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140dcb5e2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 140dcb548 FUN_140dcb548 body=94 status=ok
// SIG undefined FUN_140dcb548(void)

void FUN_140dcb548(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x58 + *param_1);
  FUN_140dcb5a6(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x58 + (longlong)_Dst),(longlong)iVar2 * 0x58);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 140dcb5a6 FUN_140dcb5a6 body=60 status=ok
// SIG undefined FUN_140dcb5a6(void)

void FUN_140dcb5a6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      FUN_1408bd9f2(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


