// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141791802 FUN_141791802 body=40 status=ok
// SIG undefined FUN_141791802(void)

undefined8 FUN_141791802(undefined8 param_1,int param_2)

{
  FUN_140ededbe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179182a FUN_14179182a body=29 status=ok
// SIG undefined FUN_14179182a(void)

undefined8 FUN_14179182a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141791847 FUN_141791847 body=85 status=ok
// SIG undefined FUN_141791847(void)

void FUN_141791847(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1401cf74e(puVar1,param_1);
  puVar1[0x5c] = 0;
  *puVar1 = &PTR_FUN_14a3bc700;
  puVar1[5] = &PTR_LAB_14a3bccb0;
  puVar1[6] = &PTR_LAB_14a3bccd0;
  puVar1[0x5d] = 0;
  puVar1[0x5e] = 0;
  *(byte *)(puVar1 + 0x5f) = *(byte *)(puVar1 + 0x5f) & 0xfe;
  return;
}



// FUNCTION 14179189c FUN_14179189c body=130 status=ok
// SIG undefined FUN_14179189c(void)

void FUN_14179189c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14480568a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3bcd10;
  puVar1[5] = &PTR_FUN_14a3bd710;
  puVar1[6] = &PTR_LAB_14a3bd750;
  puVar1[0x55] = &PTR_FUN_14a3bd7a0;
  puVar1[0x56] = &PTR_FUN_14a3bd820;
  puVar1[0x57] = &PTR_FUN_14a3bd830;
  *(undefined1 *)((longlong)puVar1 + 0x1fb) = 0;
  puVar1[0xc4] = 0;
  puVar1[0xc5] = 0;
  puVar1[0xc6] = 0;
  puVar1[199] = 0;
  puVar1[200] = 0;
  puVar1[0xc9] = 0;
  return;
}



// FUNCTION 14179191e FUN_14179191e body=40 status=ok
// SIG undefined FUN_14179191e(void)

undefined8 FUN_14179191e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141791946 FUN_141791946 body=94 status=ok
// SIG undefined FUN_141791946(void)

undefined8 * FUN_141791946(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3bc700;
  param_1[5] = &PTR_LAB_14a3bccb0;
  param_1[6] = &PTR_LAB_14a3bccd0;
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_1401fc27a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417919a4 FUN_1417919a4 body=743 status=ok
// SIG undefined FUN_1417919a4(void)

void FUN_1417919a4(ulonglong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0xb8) < '\0') {
      AcquireSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
      if (DAT_14cad0160 != DAT_14cad018c) {
        uVar7 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        puVar10 = &DAT_14cad0190;
        if (DAT_14cad0198 != (undefined *)0x0) {
          puVar10 = DAT_14cad0198;
        }
        iVar2 = *(int *)(puVar10 + (ulonglong)(DAT_14cad01a0 - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
        while (iVar2 != -1) {
          lVar5 = DAT_14cad0158 + (longlong)iVar2 * 0x20;
          if (*(ulonglong *)(DAT_14cad0158 + (longlong)iVar2 * 0x20) == param_1) {
            if (((lVar5 != 0) && (lVar5 != -8)) && ((longlong)*(int *)(lVar5 + 0x10) != 0)) {
              lVar14 = *(longlong *)(lVar5 + 8);
              lVar5 = (longlong)*(int *)(lVar5 + 0x10) << 5;
              do {
                (**(code **)(*param_2 + 0x88))(param_2,lVar14,0,0);
                lVar14 = lVar14 + 0x20;
                lVar5 = lVar5 + -0x20;
              } while (lVar5 != 0);
            }
            break;
          }
          iVar2 = *(int *)(lVar5 + 0x18);
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
    }
    lVar5 = FUN_1401e2408();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) == lVar5 + 0x30)) goto LAB_1417919fa;
  }
  param_1 = 0;
LAB_1417919fa:
  lVar5 = *(longlong *)(param_1 + 0x7f8);
  iVar2 = *(int *)(lVar5 + 0x30);
  if (iVar2 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar11 = 0;
    iVar4 = 0;
  }
  else {
    puVar6 = *(uint **)(lVar5 + 0x28);
    if (*(uint **)(lVar5 + 0x28) == (uint *)0x0) {
      puVar6 = (uint *)(lVar5 + 0x18);
    }
    uVar7 = *puVar6;
    if (uVar7 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar16 == uVar15) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar16 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar16 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar4 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar7 = 0xffffffff;
    do {
      (**(code **)(*param_2 + 0x88))
                (param_2,(longlong)iVar4 * 0x18 + *(longlong *)(lVar5 + 8),param_1,0);
      uVar7 = ~(uint)uVar16 & uVar7;
      puVar6 = *(uint **)(lVar5 + 0x28);
      if (*(uint **)(lVar5 + 0x28) == (uint *)0x0) {
        puVar6 = (uint *)(lVar5 + 0x18);
      }
      iVar3 = *(int *)(lVar5 + 0x30);
      iVar4 = (int)uVar15;
      lVar14 = (longlong)iVar4;
      uVar12 = puVar6[lVar14] & uVar7;
      if (uVar12 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar4) {
          iVar9 = iVar4;
        }
        if (iVar4 < iVar8) {
          lVar13 = 0;
          do {
            uVar12 = puVar6[lVar14 + lVar13 + 1];
            if (uVar12 != 0) {
              uVar15 = (ulonglong)(iVar4 + (int)lVar13 + 1);
              uVar7 = 0xffffffff;
              goto LAB_141791b2a;
            }
            iVar11 = iVar11 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar14 != lVar13);
          uVar7 = 0xffffffff;
          iVar4 = iVar9;
        }
        uVar15 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_141791b2a:
        uVar16 = (ulonglong)(-uVar12 & uVar12);
        uVar1 = uVar16 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar4 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}



// FUNCTION 141791c98 FUN_141791c98 body=301 status=ok
// SIG undefined FUN_141791c98(void)

void FUN_141791c98(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_1 + 0x3a0);
  uStack_24 = *(undefined4 *)(param_1 + 0x3a4);
  uStack_20 = *(undefined4 *)(param_1 + 0x3a8);
  uStack_1c = *(undefined4 *)(param_1 + 0x3ac);
  uVar1 = local_28;
  if (((*(byte *)(param_2 + 5) & 4) != 0) && ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0)) {
    if (((*(int *)(param_1 + 0x3a0) != *(int *)(param_1 + 0x3b0)) ||
        (((*(int *)(param_1 + 0x3a4) != *(int *)(param_1 + 0x3b4) ||
          (*(int *)(param_1 + 0x3a8) != *(int *)(param_1 + 0x3b8))) ||
         (*(int *)(param_1 + 0x3ac) != *(int *)(param_1 + 0x3bc))))) &&
       (((*(int *)(param_1 + 0x3b4) != 0 || *(int *)(param_1 + 0x3b0) != 0) ||
        *(int *)(param_1 + 0x3b8) != 0) || *(int *)(param_1 + 0x3bc) != 0)) {
      uVar1 = *(undefined4 *)(param_1 + 0x3b0);
      *(undefined4 *)(param_1 + 0x3a0) = uVar1;
      *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_1 + 0x3b4);
      *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0x3b8);
      *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_1 + 0x3bc);
    }
  }
  FUN_1402d084a(uVar1,param_2);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a3bea54);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbc8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  if (((*(byte *)(param_2 + 5) & 4) != 0) && ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x3a0) = local_28;
    *(undefined4 *)(param_1 + 0x3a4) = uStack_24;
    *(undefined4 *)(param_1 + 0x3a8) = uStack_20;
    *(undefined4 *)(param_1 + 0x3ac) = uStack_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141791dc6 FUN_141791dc6 body=724 status=ok
// SIG undefined FUN_141791dc6(void)

void FUN_141791dc6(undefined4 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  code *local_160;
  undefined1 *local_158;
  undefined ***local_150;
  code *local_148;
  code *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined **local_120 [18];
  undefined1 local_90 [88];
  undefined1 local_38;
  undefined4 uStack_37;
  undefined4 uStack_33;
  undefined4 uStack_2f;
  undefined4 uStack_2b;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar5 = param_2;
  if (param_2 == 0) {
LAB_141791f4f:
    uVar7 = FUN_144a7757c();
    lVar5 = FUN_144a78ede(param_2,uVar7);
  }
  else {
    do {
      if ((*(uint *)(lVar5 + 8) & 0x30) != 0) goto LAB_141791e90;
      plVar1 = (longlong *)(lVar5 + 0x20);
      lVar5 = *plVar1;
    } while (*plVar1 != 0);
    if (((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0) || (lVar5 = FUN_14043f728(param_2), lVar5 == 0))
    goto LAB_141791f4f;
    if (DAT_14cb10130 == 0) {
      local_150 = local_120;
      local_120[0] = (undefined **)FUN_140754f84;
      local_140 = FUN_14081d0ea;
      local_148 = FUN_14081d0ea;
      local_158 = &LAB_147da9a76;
      local_160 = FUN_1409f3105;
      local_168 = L"Engine";
      local_170 = 0;
      local_178 = 0x10000000;
      local_180 = 8;
      local_188 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    lVar3 = DAT_14cb10130;
    if (DAT_14c951858 == 0) {
      local_150 = local_120;
      local_120[0] = (undefined **)FUN_1449e2820;
      local_140 = FUN_14081d0ea;
      local_148 = FUN_14081d0ea;
      local_158 = &LAB_1468c5283;
      local_160 = FUN_142809da0;
      local_168 = L"Engine";
      local_170 = 0x400000000;
      local_178 = 0x10000000;
      local_180 = 8;
      local_188 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar6 = *(longlong *)(lVar5 + 0x20);
    if (lVar6 == 0) goto LAB_141791e90;
    iVar2 = *(int *)(lVar3 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar2) ||
         (lVar5 = lVar6,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
         lVar3 + 0x30)) {
        lVar5 = 0;
      }
    } while ((lVar5 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
  }
  if ((lVar5 != 0) && (cVar4 = FUN_1449a7b8c(lVar5), cVar4 != '\0')) {
    FUN_147454cd2(local_120);
    local_138 = *param_1;
    uStack_134 = param_1[1];
    uStack_130 = param_1[2];
    uStack_12c = param_1[3];
    FUN_1402ac1b3(local_120);
    lVar5 = FUN_144b00ba4(lVar5);
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(lVar5 + 0x18);
      local_38 = (undefined1)uVar7;
      uStack_37 = (undefined4)((ulonglong)uVar7 >> 8);
      uStack_33._0_3_ = (undefined3)((ulonglong)uVar7 >> 0x28);
      FUN_147454d28(local_120);
    }
    local_38 = 0;
    FUN_1414fe9a8(local_90,&uStack_37);
    *param_1 = uStack_37;
    param_1[1] = uStack_33;
    param_1[2] = uStack_2f;
    param_1[3] = uStack_2b;
    local_120[0] = &PTR_FUN_14a3c1520;
    FUN_145c422f4(local_90);
    FUN_144a7fc42(local_120);
  }
LAB_141791e90:
  if ((local_20 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14179209c FUN_14179209c body=88 status=ok
// SIG undefined FUN_14179209c(void)

void FUN_14179209c(longlong param_1)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14010ed74();
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
  *(ulong *)(param_1 + 0x780) = local_28.Data1;
  *(undefined4 *)(param_1 + 0x784) = local_28._4_4_;
  *(undefined4 *)(param_1 + 0x788) = local_28.Data4._0_4_;
  *(undefined4 *)(param_1 + 0x78c) = local_28.Data4._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417920f6 FUN_1417920f6 body=81 status=ok
// SIG undefined FUN_1417920f6(void)

void FUN_1417920f6(longlong param_1)

{
  longlong lVar1;
  
  FUN_1448aa298();
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x390) + 0x18))
                        (*(longlong *)(param_1 + 0x20) + 0x390);
      if (lVar1 != 0) {
        FUN_140cb744e(lVar1,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141792148 FUN_141792148 body=103 status=ok
// SIG undefined FUN_141792148(void)

void FUN_141792148(longlong param_1)

{
  longlong lVar1;
  
  FUN_14015649c();
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
  lVar1 = *(longlong *)(lVar1 + 0x260);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x548) != 0) {
      FUN_1448b7762(lVar1);
    }
    if ((*(byte *)(param_1 + 1099) & 0x20) != 0) {
      FUN_1406f7be4(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1417921b6 FUN_1417921b6 body=29 status=ok
// SIG undefined FUN_1417921b6(void)

undefined8 FUN_1417921b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417921d4 FUN_1417921d4 body=61 status=ok
// SIG undefined FUN_1417921d4(void)

void FUN_1417921d4(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141792212 FUN_141792212 body=76 status=ok
// SIG undefined FUN_141792212(void)

undefined8 * FUN_141792212(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a3c14f0;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179225e FUN_14179225e body=463 status=ok
// SIG undefined FUN_14179225e(void)

bool FUN_14179225e(longlong param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa2600) && (FUN_144b3d300(&DAT_14caa2600), DAT_14caa2600 == -1)) {
    FUN_140056680(&DAT_14caa25e8,L"landscape.SupportGPUCulling");
    DAT_14caa25f8 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_14324bc7e);
    _Init_thread_footer(&DAT_14caa2600);
  }
  if ((*(ulonglong *)(param_1 + 0x38) & 0x100000002) == 0) {
    return false;
  }
  uVar1 = *(ushort *)(param_1 + 0x48);
  puVar4 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141792369_caseD_30:
      puVar4 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141792369_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar7 = 0;
        goto LAB_1417922b8;
      }
      lVar5 = FUN_14741392a();
      puVar4 = (undefined8 *)(lVar5 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141792369_caseD_34:
      puVar4 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141792369_caseD_35:
      puVar4 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141792369_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141792369_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141792369_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141792369_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar4 = &DAT_14ca84488;
      }
    }
  }
  uVar7 = *puVar4;
LAB_1417922b8:
  if (DAT_14caa25f8 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar6 = DAT_14caa25e8;
    if (DAT_14caa25f0 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    DAT_14caa25f8 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar6,1);
  }
  cVar2 = FUN_14002b5e0(uVar7,"Windows",7);
  if ((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) {
    return false;
  }
  iVar3 = (**(code **)(*DAT_14caa25f8 + 0xb0))();
  return iVar3 != 0;
}



// FUNCTION 14179242e FUN_14179242e body=56 status=ok
// SIG undefined FUN_14179242e(void)

undefined8 * FUN_14179242e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3c2d50;
  FUN_144725486();
  FUN_1447259a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179248f FUN_14179248f body=129 status=ok
// SIG undefined FUN_14179248f(void)

undefined8 * FUN_14179248f(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  FUN_14025f50e(puVar1,L"LandscapeGrassWeight",0,param_1,0,0);
  *puVar1 = &PTR_FUN_14a3c8080;
  *(undefined4 *)(puVar1 + 10) = 0x11;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[8] = DAT_14c9c0d50;
  puVar1[9] = DAT_14c9c0d98;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return puVar1;
}



// FUNCTION 141792510 FUN_141792510 body=195 status=ok
// SIG undefined FUN_141792510(void)

void FUN_141792510(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x78);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar2 != 0) &&
         ((*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x7c) &&
          ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)))) {
        lVar2 = FUN_14479d2ce();
        local_28 = param_1;
        if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_1);
        }
        local_20 = &local_28;
        FUN_1432619ce(lVar2 + 0x78);
      }
    }
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417925d4 FUN_1417925d4 body=137 status=ok
// SIG undefined FUN_1417925d4(void)

void FUN_1417925d4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ea704(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3c93b0;
  puVar1[5] = &PTR_FUN_14a3c9eb0;
  puVar1[6] = &PTR_FUN_14a3c9ef0;
  puVar1[0x55] = &PTR_FUN_14a3c9f40;
  puVar1[0x56] = &PTR_FUN_14a3c9fc0;
  puVar1[0x57] = &PTR_FUN_14a3c9fd0;
  puVar1[0xe3] = 0;
  puVar1[0xe4] = 0;
  *(undefined1 *)(puVar1 + 0xe5) = 1;
  puVar1[0xe6] = 0;
  puVar1[0xe7] = 0;
  *(byte *)((longlong)puVar1 + 0x2d4) = *(byte *)((longlong)puVar1 + 0x2d4) & 0xf7;
  *(byte *)((longlong)puVar1 + 0x66c) = *(byte *)((longlong)puVar1 + 0x66c) & 0xef;
  return;
}



// FUNCTION 14179265e FUN_14179265e body=1165 status=ok
// SIG undefined FUN_14179265e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14179265e(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined4 uVar18;
  undefined4 uVar20;
  undefined1 auVar19 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar25 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar26 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar27 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  longlong lVar31;
  undefined1 auVar32 [16];
  longlong lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar42 [16];
  
  FUN_1401a1ac2();
  auVar15 = _DAT_149931e80;
  puVar17 = *(undefined1 **)(param_3 + 0x120);
  if (*(undefined1 **)(param_3 + 0x120) == (undefined1 *)0x0) {
    puVar17 = param_3;
  }
  if ((longlong)*(int *)(param_3 + 0x128) != 0) {
    uVar1 = (longlong)*(int *)(param_3 + 0x128) * 0x48 - 0x48;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar1;
    uVar18 = SUB164(auVar21 * ZEXT816(0xe38e38e38e38e38f),8);
    uVar20 = (undefined4)(uVar1 / 0x120000000);
    auVar22._0_8_ = CONCAT44(uVar20,uVar18);
    auVar22._8_4_ = uVar18;
    auVar22._12_4_ = uVar20;
    auVar19._0_8_ = auVar22._0_8_ >> 6;
    auVar19._8_8_ = auVar22._8_8_ >> 6;
    uVar16 = 0;
    auVar21 = pmovsxbq(in_XMM1,0xf0e);
    auVar22 = pmovsxbq(in_XMM2,0xd0c);
    auVar23 = pmovsxbq(in_XMM3,0xb0a);
    auVar24 = pmovsxbq(in_XMM4,0x908);
    auVar25 = pmovsxbq(in_XMM5,0x706);
    auVar26 = pmovsxbq(unaff_XMM6,0x504);
    auVar27 = pmovsxbq(unaff_XMM7,0x302);
    auVar28 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar29._8_4_ = (int)uVar16;
      auVar29._0_8_ = uVar16;
      auVar29._12_4_ = (int)(uVar16 >> 0x20);
      auVar32 = auVar19 | auVar15;
      auVar34 = (auVar29 | auVar28) ^ auVar15;
      lVar31 = auVar32._0_8_;
      auVar35._0_8_ = -(ulonglong)(lVar31 < auVar34._0_8_);
      lVar33 = auVar32._8_8_;
      auVar35._8_8_ = -(ulonglong)(lVar33 < auVar34._8_8_);
      auVar42 = pshuflw(unaff_XMM14,auVar35,0xe8);
      auVar34._8_4_ = 0xffffffff;
      auVar34._0_8_ = 0xffffffffffffffff;
      auVar34._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar42 ^ auVar34,auVar42 ^ auVar34);
      if ((auVar34._0_4_ & 1) != 0) {
        *puVar17 = 1;
      }
      auVar35 = packssdw(auVar35,auVar35);
      auVar42._8_4_ = 0xffffffff;
      auVar42._0_8_ = 0xffffffffffffffff;
      auVar42._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar42,auVar35 ^ auVar42);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[1] & 1) != 0) {
        puVar17[0x48] = 1;
      }
      auVar35 = (auVar29 | auVar27) ^ auVar15;
      auVar36._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar36._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = packssdw(auVar34,auVar36);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar2,auVar34 ^ auVar2);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[2] & 1) != 0) {
        puVar17[0x90] = 1;
      }
      auVar35 = pshufhw(auVar36,auVar36,0x84);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar3,auVar35 ^ auVar3);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[3] & 1) != 0) {
        puVar17[0xd8] = 1;
      }
      auVar35 = (auVar29 | auVar26) ^ auVar15;
      auVar37._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar37._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = pshuflw(auVar34,auVar37,0xe8);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar4,auVar34 ^ auVar4);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[4] & 1) != 0) {
        puVar17[0x120] = 1;
      }
      auVar35 = packssdw(auVar37,auVar37);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar5,auVar35 ^ auVar5);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[5] & 1) != 0) {
        puVar17[0x168] = 1;
      }
      auVar35 = (auVar29 | auVar25) ^ auVar15;
      auVar38._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar38._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = packssdw(auVar34,auVar38);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar6,auVar34 ^ auVar6);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[6] & 1) != 0) {
        puVar17[0x1b0] = 1;
      }
      auVar35 = pshufhw(auVar38,auVar38,0x84);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar7,auVar35 ^ auVar7);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[7] & 1) != 0) {
        puVar17[0x1f8] = 1;
      }
      auVar35 = (auVar29 | auVar24) ^ auVar15;
      auVar39._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar39._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = pshuflw(auVar34,auVar39,0xe8);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar8,auVar34 ^ auVar8);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[8] & 1) != 0) {
        puVar17[0x240] = 1;
      }
      auVar35 = packssdw(auVar39,auVar39);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar9,auVar35 ^ auVar9);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[9] & 1) != 0) {
        puVar17[0x288] = 1;
      }
      auVar35 = (auVar29 | auVar23) ^ auVar15;
      auVar40._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar40._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = packssdw(auVar34,auVar40);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar10,auVar34 ^ auVar10);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[10] & 1) != 0) {
        puVar17[0x2d0] = 1;
      }
      auVar35 = pshufhw(auVar40,auVar40,0x84);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar11,auVar35 ^ auVar11);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[0xb] & 1) != 0) {
        puVar17[0x318] = 1;
      }
      auVar35 = (auVar29 | auVar22) ^ auVar15;
      auVar41._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar41._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = pshuflw(auVar34,auVar41,0xe8);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar12,auVar34 ^ auVar12);
      unaff_XMM14 = packsswb(auVar34,auVar34);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar17[0x360] = 1;
      }
      auVar34 = packssdw(auVar41,auVar41);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar13,auVar34 ^ auVar13);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[0xd] & 1) != 0) {
        puVar17[0x3a8] = 1;
      }
      auVar34 = (auVar29 | auVar21) ^ auVar15;
      auVar30._0_8_ = -(ulonglong)(lVar31 < auVar34._0_8_);
      auVar30._8_8_ = -(ulonglong)(lVar33 < auVar34._8_8_);
      auVar34 = packssdw(auVar32,auVar30);
      auVar32._8_4_ = 0xffffffff;
      auVar32._0_8_ = 0xffffffffffffffff;
      auVar32._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar32,auVar34 ^ auVar32);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[0xe] & 1) != 0) {
        puVar17[0x3f0] = 1;
      }
      auVar34 = pshufhw(auVar30,auVar30,0x84);
      auVar14._8_4_ = 0xffffffff;
      auVar14._0_8_ = 0xffffffffffffffff;
      auVar14._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar14,auVar34 ^ auVar14);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[0xf] & 1) != 0) {
        puVar17[0x438] = 1;
      }
      uVar16 = uVar16 + 0x10;
      puVar17 = puVar17 + 0x480;
    } while ((uVar1 / 0x48 + 0x10 & 0xfffffffffffffff0) != uVar16);
  }
  return;
}



// FUNCTION 141792aec FUN_141792aec body=29 status=ok
// SIG undefined FUN_141792aec(void)

undefined8 FUN_141792aec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141792b0a FUN_141792b0a body=697 status=ok
// SIG undefined FUN_141792b0a(void)

void FUN_141792b0a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar11 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar11,4);
    if ((int)uVar11 < 1) goto LAB_141792b7d;
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
  } while (uVar11 != uVar2);
LAB_141792b7d:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar3 = 0;
    uVar15 = 1;
    iVar8 = 0;
    iVar4 = 0;
  }
  else {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = (uint *)(param_1 + 2);
    }
    uVar11 = *puVar14;
    if (uVar11 == 0) {
      iVar8 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar8 = iVar6 + -1;
      }
      uVar3 = 0;
      uVar15 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar15 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar15 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar11 = puVar14[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar15 = (ulonglong)(-uVar11 & uVar11);
    uVar7 = uVar15 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (iVar4 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar8) {
      iVar8 = iVar6;
    }
  }
  if (iVar8 < iVar6) {
    uVar11 = 0xffffffff;
    do {
      lVar10 = *param_1;
      lVar9 = (longlong)iVar8 * 0x68;
      uVar7 = (longlong)
              (int)(*(uint *)(lVar10 + 4 + lVar9) ^ *(uint *)(lVar10 + lVar9) ^
                    *(uint *)(lVar10 + 8 + lVar9) ^ *(uint *)(lVar10 + 0xc + lVar9) ^
                    *(uint *)(lVar10 + 0x10 + lVar9) ^ *(uint *)(lVar10 + 0x14 + lVar9) ^
                   *(int *)(lVar10 + 0x24 + lVar9) << 0xd ^
                   *(int *)(lVar10 + 0x20 + lVar9) << 3 ^
                   *(int *)(lVar10 + 0x1c + lVar9) << 0x18 ^ *(int *)(lVar10 + 0x18 + lVar9) << 0x10
                   ) & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar7;
      *(int *)(lVar10 + 100 + lVar9) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar10 + 0x60 + lVar9) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
      uVar11 = ~(uint)uVar15 & uVar11;
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar8 = (int)uVar3;
      lVar10 = (longlong)iVar8;
      uVar2 = puVar14[lVar10] & uVar11;
      if (uVar2 == 0) {
        iVar12 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar12 = iVar6 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar8) {
          iVar13 = iVar8;
        }
        if (iVar12 <= iVar8) {
          return;
        }
        lVar9 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar14[lVar10 + lVar9 + 1];
          if (uVar2 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar13 - lVar10 == lVar9) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar8 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar2 & uVar2);
      uVar7 = uVar15 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = (iVar4 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar6);
  }
  return;
}



// FUNCTION 141792dc4 FUN_141792dc4 body=66 status=ok
// SIG undefined FUN_141792dc4(void)

undefined8 * FUN_141792dc4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3cb5b0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141792e2e FUN_141792e2e body=66 status=ok
// SIG undefined FUN_141792e2e(void)

undefined8 * FUN_141792e2e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3cb650;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141792e70 FUN_141792e70 body=66 status=ok
// SIG undefined FUN_141792e70(void)

undefined8 * FUN_141792e70(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3cb6f0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141792eb2 FUN_141792eb2 body=66 status=ok
// SIG undefined FUN_141792eb2(void)

undefined8 * FUN_141792eb2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3cb830;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141792ef4 FUN_141792ef4 body=369 status=ok
// SIG undefined FUN_141792ef4(void)

void FUN_141792ef4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_141792f79;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_141792f79:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 141793066 FUN_141793066 body=353 status=ok
// SIG undefined FUN_141793066(void)

void FUN_141793066(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417930ed;
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
LAB_1417930ed:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417931c8 FUN_1417931c8 body=167 status=ok
// SIG undefined FUN_1417931c8(void)

undefined8 * FUN_1417931c8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14a3cb020;
  lVar3 = param_1[9];
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x340) != 0) {
      FUN_1400020a8();
    }
    FUN_14006ea12(lVar3 + 0x2f0);
    if (*(longlong *)(lVar3 + 0x2e0) != 0) {
      FUN_1400020a8();
    }
    plVar4 = *(longlong **)(lVar3 + 0x130);
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
    FUN_1400020a8(lVar3);
  }
  FUN_140187f4a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141793270 FUN_141793270 body=353 status=ok
// SIG undefined FUN_141793270(void)

void FUN_141793270(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417932f5;
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
LAB_1417932f5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417933d2 FUN_1417933d2 body=137 status=ok
// SIG undefined FUN_1417933d2(void)

void FUN_1417933d2(longlong param_1)

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



// FUNCTION 14179345c FUN_14179345c body=137 status=ok
// SIG undefined FUN_14179345c(void)

void FUN_14179345c(longlong param_1)

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



// FUNCTION 1417934e6 FUN_1417934e6 body=587 status=ok
// SIG undefined FUN_1417934e6(void)

void FUN_1417934e6(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6;
        uVar13 = *(ulonglong *)(lVar11 + lVar10 * 0x18);
        uVar3 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1417936ec;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1417936ec:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141793732 FUN_141793732 body=269 status=ok
// SIG undefined FUN_141793732(void)

void FUN_141793732(longlong param_1,int param_2)

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



// FUNCTION 141793840 FUN_141793840 body=190 status=ok
// SIG undefined FUN_141793840(void)

uint FUN_141793840(ulonglong param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    param_2 = FUN_1447addd0(param_3,0x10);
  }
  uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = param_2 >> 0xd ^ (uVar1 >> 0x10 ^ uVar1) - param_2;
  uVar2 = uVar1 << 8 ^ (-0x61c88647 - param_2) - uVar1;
  uVar3 = uVar2 >> 0xd ^ (param_2 - uVar1) - uVar2;
  uVar1 = uVar3 >> 0xc ^ (uVar1 - uVar2) - uVar3;
  uVar2 = uVar1 << 0x10 ^ (uVar2 - uVar3) - uVar1;
  uVar3 = uVar2 >> 5 ^ (uVar3 - uVar1) - uVar2;
  uVar4 = uVar3 >> 3 ^ (uVar1 - uVar2) - uVar3;
  uVar1 = uVar4 << 10 ^ (uVar2 - uVar3) - uVar4;
  return uVar1 >> 0xf ^ uVar3 - (uVar4 + uVar1);
}



// FUNCTION 141793920 FUN_141793920 body=128 status=ok
// SIG undefined FUN_141793920(void)

void FUN_141793920(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined1 *param_5,undefined1 *param_6)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  *param_3 = 1;
  *param_4 = 0;
  *param_5 = 1;
  *param_6 = 1;
  lVar1 = *(longlong *)(param_1 + 0x580);
  if (lVar1 == 0) {
    *param_4 = 1;
    param_6 = param_5;
  }
  else {
    iVar2 = FUN_144807416(lVar1,param_2,lVar1 + 0x30);
    iVar3 = 2;
    if (iVar2 != 4) {
      iVar3 = iVar2;
    }
    if ((iVar3 == 0) || (*param_4 = 1, iVar3 == 1)) {
      *param_3 = 0;
    }
    else {
      *param_5 = 0;
      if ((iVar3 != 2) && (*param_3 = 0, iVar3 == 3)) {
        return;
      }
    }
  }
  *param_6 = 0;
  return;
}



// FUNCTION 1417939a0 FUN_1417939a0 body=437 status=ok
// SIG undefined FUN_1417939a0(void)

void FUN_1417939a0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  int local_e0;
  uint local_dc;
  ulonglong local_d8 [17];
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_4c = 0x11;
  lVar10 = param_1 + 0x10;
  lVar7 = *(longlong *)(param_1 + 0x90);
  lVar6 = *(longlong *)(param_1 + 0x130);
  bVar1 = *(byte *)(param_1 + 0x13d);
  uVar13 = (uint)bVar1;
  iVar14 = *(int *)(param_1 + 0x138);
  bVar2 = *(byte *)(param_1 + 0x13f);
  bVar3 = *(byte *)(param_1 + 0x13e);
  bVar4 = *(byte *)(param_1 + 0x13c);
  lVar8 = lVar7;
  if (lVar7 == 0) {
    lVar8 = lVar10;
  }
  iVar5 = *(int *)(param_1 + 0x98);
  uVar11 = (ulonglong)iVar5;
  if (uVar11 != 0) {
    lVar12 = 0;
    iVar9 = 0;
    do {
      if ((((*(longlong *)(lVar8 + lVar12) == lVar6) &&
           (*(ushort *)(lVar8 + 0xc + lVar12) == (ushort)bVar1)) &&
          (*(int *)(lVar8 + 8 + lVar12) == iVar14)) && (*(byte *)(lVar8 + 0xe + lVar12) == bVar2)) {
        if (iVar9 != 1) {
          uVar11 = (ulonglong)(uint)-iVar9;
          goto LAB_141793aa1;
        }
        break;
      }
      iVar9 = iVar9 + -1;
      lVar12 = lVar12 + 0x10;
    } while (uVar11 << 4 != lVar12);
  }
  *(uint *)(param_1 + 0x98) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar5 + 1U) {
    local_dc = (uint)bVar1;
    local_e0 = iVar14;
    FUN_14472e0ae(lVar10,iVar5);
    lVar7 = *(longlong *)(param_1 + 0x90);
    iVar14 = local_e0;
    uVar13 = local_dc;
  }
  if (lVar7 != 0) {
    lVar10 = lVar7;
  }
  lVar7 = uVar11 * 0x10;
  *(longlong *)(lVar10 + lVar7) = lVar6;
  *(int *)(lVar10 + 8 + lVar7) = iVar14;
  *(short *)(lVar10 + 0xc + lVar7) = (short)uVar13;
  *(byte *)(lVar10 + 0xe + lVar7) = bVar2;
  *(undefined1 *)(lVar10 + 0xf + lVar7) = 0;
LAB_141793aa1:
  local_50 = 1;
  local_d8[0] = uVar11 & 0xff |
                (ulonglong)bVar4 << 8 |
                (ulonglong)bVar3 << 0x10 |
                (ulonglong)(uVar13 & 0xffff) << 0x20 | (ulonglong)(bVar2 & 1) << 0x30;
  local_e8 = 0xff;
  FUN_1447f936a(param_1,0,local_d8,1);
  FUN_1447f9616(param_1,local_d8,0);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141793b56 FUN_141793b56 body=95 status=ok
// SIG undefined FUN_141793b56(void)

undefined8 * FUN_141793b56(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  FUN_1401c22be(puVar2);
  puVar2[8] = 0;
  puVar2[9] = 0;
  *puVar2 = &PTR_FUN_14a3d31b0;
  bVar1 = *(byte *)(param_1 + 0x2f8);
  *(byte *)(puVar2 + 10) = bVar1 & 1;
  *(byte *)((longlong)puVar2 + 0x51) = bVar1 >> 2 & 1;
  *(byte *)((longlong)puVar2 + 0x52) = bVar1 >> 3 & 1;
  return puVar2;
}



// FUNCTION 141793bbc thunk_FUN_1448284b2 body=5 status=ok
// SIG undefined thunk_FUN_1448284b2(void)

void thunk_FUN_1448284b2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_14010df0a();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3ca68);
  if ((param_1 != 0) && (lVar3 = param_1, (*(byte *)(param_2 + 5) & 1) != 0)) {
    do {
      if ((*(uint *)(lVar3 + 8) & 0x30) != 0) {
        FUN_14013683c(param_1 + 0x410,param_1);
        break;
      }
      plVar1 = (longlong *)(lVar3 + 0x20);
      lVar3 = *plVar1;
    } while (*plVar1 != 0);
  }
  iVar2 = FUN_1448332aa(param_2,&DAT_149e3cb60);
  if ((iVar2 < 0x18) && ((*(byte *)(param_1 + 0x2dd) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x2cf) = 1;
  }
  return;
}



// FUNCTION 141793bc8 FUN_141793bc8 body=142 status=ok
// SIG undefined FUN_141793bc8(void)

void FUN_141793bc8(undefined8 param_1,longlong *param_2)

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
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a3d2228);
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000141793c4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x218))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_1c8,&DAT_149e3cbc8);
}



// FUNCTION 141793c58 FUN_141793c58 body=127 status=ok
// SIG undefined FUN_141793c58(void)

void FUN_141793c58(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 141793cec FUN_141793cec body=240 status=ok
// SIG undefined FUN_141793cec(void)

void FUN_141793cec(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar5 = FUN_1400439fc(param_1,0,&local_40);
  if (cVar5 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if ((DAT_14caa7428 != 0) && (lVar3 = param_1[0x18], (longlong)(int)lVar3 != 0)) {
    lVar1 = param_1[0x17];
    lVar6 = 0;
    do {
      lVar4 = DAT_14cad0ef8;
      plVar2 = *(longlong **)(lVar1 + lVar6);
      FUN_1406900ce(plVar2,&local_40);
      if (local_40 != lVar4) {
        (**(code **)(*plVar2 + 0x728))(plVar2,lVar4,1);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141793dde FUN_141793dde body=40 status=ok
// SIG undefined FUN_141793dde(void)

undefined8 FUN_141793dde(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141793e06 FUN_141793e06 body=88 status=ok
// SIG undefined FUN_141793e06(void)

int FUN_141793e06(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  *(uint *)(param_1 + 0xb0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xb4) < iVar1 + 1U) {
    FUN_1400cd0f8(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    lVar2 = param_1;
  }
  FUN_14470b9e0((longlong)iVar1 * 0xa8 + lVar2,1);
  return iVar1;
}



// FUNCTION 141793e86 FUN_141793e86 body=118 status=ok
// SIG undefined FUN_141793e86(void)

longlong * FUN_141793e86(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    lVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = 0;
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
  }
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar3 = param_2[2];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(int *)(param_1 + 2) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  FUN_140520998(param_1 + 3,param_2 + 3);
  lVar3 = param_2[6];
  lVar6 = param_2[7];
  lVar7 = param_2[8];
  param_1[5] = param_2[5];
  param_1[6] = lVar3;
  param_1[7] = lVar6;
  param_1[8] = lVar7;
  *(int *)(param_1 + 9) = (int)param_2[9];
  return param_1;
}



// FUNCTION 141793efc FUN_141793efc body=38 status=ok
// SIG undefined FUN_141793efc(void)

undefined8 FUN_141793efc(undefined8 param_1,int param_2)

{
  FUN_1401fc4ce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141793f30 FUN_141793f30 body=38 status=ok
// SIG undefined FUN_141793f30(void)

undefined8 FUN_141793f30(undefined8 param_1,int param_2)

{
  FUN_140064a96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141793f56 FUN_141793f56 body=135 status=ok
// SIG undefined FUN_141793f56(void)

void FUN_141793f56(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
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
  return;
}



// FUNCTION 141793fde FUN_141793fde body=135 status=ok
// SIG undefined FUN_141793fde(void)

void FUN_141793fde(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
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
  return;
}



// FUNCTION 141794066 FUN_141794066 body=353 status=ok
// SIG undefined FUN_141794066(void)

void FUN_141794066(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417940eb;
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
LAB_1417940eb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417941c8 FUN_1417941c8 body=269 status=ok
// SIG undefined FUN_1417941c8(void)

void FUN_1417941c8(longlong param_1,int param_2)

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



// FUNCTION 1417942d6 FUN_1417942d6 body=473 status=ok
// SIG undefined FUN_1417942d6(void)

void FUN_1417942d6(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa7180 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14caa7180,0,0,4);
  }
  uVar2 = DAT_14caa7188;
  uVar3 = local_50;
  if (DAT_14caa7188 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14caa7178,0,DAT_14caa7188,4);
    if (0 < (int)uVar2) {
      do {
        puVar6 = DAT_14caa7180;
        if (DAT_14caa7180 == (undefined *)0x0) {
          puVar6 = &DAT_14caa7178;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14caa7188 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14caa7150;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14caa7168 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14caa7140;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar9 = (longlong)(int)DAT_14caa7188 - 1U & (longlong)*(int *)(lVar1 + lVar5 * 0x18);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14caa7180;
        if (DAT_14caa7180 == (undefined *)0x0) {
          puVar6 = &DAT_14caa7178;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14caa7188 - 1U & uVar9) * 4);
        puVar6 = DAT_14caa7180;
        if (DAT_14caa7180 == (undefined *)0x0) {
          puVar6 = &DAT_14caa7178;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14caa7188 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417944b0 FUN_1417944b0 body=370 status=ok
// SIG undefined FUN_1417944b0(void)

void FUN_1417944b0(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141794539;
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
LAB_141794539:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 141794622 FUN_141794622 body=145 status=ok
// SIG undefined FUN_141794622(void)

void FUN_141794622(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  FUN_140298d6a();
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
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
  return;
}



// FUNCTION 1417946b4 FUN_1417946b4 body=32 status=ok
// SIG undefined FUN_1417946b4(void)

void FUN_1417946b4(longlong param_1,undefined8 param_2)

{
  FUN_140563ed0(param_1 + 0x28,param_2,0);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1417946d4 FUN_1417946d4 body=145 status=ok
// SIG undefined FUN_1417946d4(void)

void FUN_1417946d4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  FUN_140298d6a();
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
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
  return;
}



// FUNCTION 141794766 FUN_141794766 body=387 status=ok
// SIG undefined FUN_141794766(void)

void FUN_141794766(ulonglong *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = (uint)param_1[1];
  if ((int)uVar2 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar2) {
      uVar6 = uVar2;
    }
    lVar3 = (longlong)(int)uVar6;
  }
  else {
    lVar3 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar4 = lVar3 * 2;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar5 = uVar4 + 0xf;
      if (0x7ff0 < uVar4) {
        uVar7 = uVar5 & 0xfffffffffffffff0;
        if (uVar7 < 0x7ff1) goto LAB_141794871;
        goto LAB_141794840;
      }
      uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,2);
    }
  }
LAB_1417947ea:
  do {
    uVar7 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 1)) {
      uVar7 = uVar4 >> 1 & 0xffffffff;
    }
    uVar6 = (uint)uVar7;
    *(uint *)((longlong)param_1 + 0xc) = uVar6;
    uVar4 = *param_1;
    if ((uVar4 & 1) == 0) {
      if ((uVar4 == 0) && ((int)uVar6 < 1)) {
        return;
      }
      if (-1 < (int)uVar6) {
        uVar4 = FUN_14001fdce(uVar4,uVar6 * 2,2);
        *param_1 = uVar4;
        return;
      }
    }
    else if (uVar6 <= param_2) {
      return;
    }
    uVar5 = 0;
    FUN_1467ac767();
LAB_141794871:
    bVar1 = (&DAT_14c841e00)[uVar5 >> 4];
    uVar5 = 0x32;
    if (0x32 < bVar1) {
      uVar5 = (ulonglong)bVar1;
    }
    uVar8 = 0x32 - (ulonglong)bVar1;
    do {
      uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417947ea;
      lVar3 = uVar5 + 1 + uVar8;
      uVar8 = uVar8 - 1;
    } while (lVar3 != 0x33);
LAB_141794840:
    uVar4 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar4 = (ulonglong)DAT_14c841df8;
    }
    uVar4 = -uVar4 & (uVar7 + uVar4) - 1;
  } while( true );
}



// FUNCTION 1417948e9 FUN_1417948e9 body=49 status=ok
// SIG undefined FUN_1417948e9(void)

longlong FUN_1417948e9(void)

{
  if (DAT_14caa7e20 == 0) {
    FUN_14086a14e(&DAT_14caa7e20,&PTR_FUN_14a3dae18);
  }
  return DAT_14caa7e20;
}



// FUNCTION 14179491a FUN_14179491a body=49 status=ok
// SIG undefined FUN_14179491a(void)

longlong FUN_14179491a(void)

{
  if (DAT_14caa7e38 == 0) {
    FUN_14086a14e(&DAT_14caa7e38,&PTR_FUN_14a3dafa0);
  }
  return DAT_14caa7e38;
}



// FUNCTION 14179494b FUN_14179494b body=49 status=ok
// SIG undefined FUN_14179494b(void)

longlong FUN_14179494b(void)

{
  if (DAT_14caa7db8 == 0) {
    FUN_14073dd9a(&DAT_14caa7db8,&PTR_LAB_14a3da2d0);
  }
  return DAT_14caa7db8;
}



// FUNCTION 14179497c FUN_14179497c body=49 status=ok
// SIG undefined FUN_14179497c(void)

longlong FUN_14179497c(void)

{
  if (DAT_14caa7e80 == 0) {
    FUN_14086a14e(&DAT_14caa7e80,&PTR_FUN_14a3db388);
  }
  return DAT_14caa7e80;
}



// FUNCTION 1417949ae FUN_1417949ae body=788 status=ok
// SIG undefined FUN_1417949ae(void)

void FUN_1417949ae(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1403a682c;
      local_40 = 0;
      local_48 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1403a682c;
      local_40 = 0;
      local_48 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 == local_28;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141794cc4 FUN_141794cc4 body=1258 status=ok
// SIG undefined FUN_141794cc4(void)

void FUN_141794cc4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  int local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_58);
    }
  }
  plVar4 = *(longlong **)(param_2 + 0x38);
  plVar8 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    plVar8 = local_58;
  }
  uStack_60 = 0;
  uStack_5c = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    local_78 = FUN_1446ddbd2();
    local_70 = FUN_1403a682c;
    local_80 = 0;
    local_88 = 0x108001;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_60);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_60);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_60);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_60 = (undefined4)uVar2;
      uStack_5c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_60);
    }
  }
  local_64 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
    local_78 = FUN_1446ddbd2();
    local_70 = FUN_14067a048;
    local_80 = 0;
    local_88 = 0x28001;
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_64 = (int)uVar2;
      uStack_60 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar5 = CONCAT44(uStack_5c,uStack_60);
  if (local_64 == 0) {
    if (lVar5 != 0) {
      plVar7 = plVar4;
      if (plVar4 == (longlong *)0x0) {
        plVar7 = local_58;
      }
      if ((longlong)(int)plVar7[1] != 0) {
        lVar9 = 0;
        do {
          if (*(longlong *)(*plVar8 + lVar9) == lVar5) goto LAB_1417951a8;
          lVar9 = lVar9 + 8;
        } while ((longlong)(int)plVar7[1] * 8 != lVar9);
      }
      plVar8 = local_58;
      if (plVar4 != (longlong *)0x0) {
        plVar8 = plVar4;
      }
      if ((longlong)(int)plVar8[3] != 0) {
        lVar9 = 0;
        do {
          if (*(longlong *)(plVar8[2] + lVar9) == lVar5) goto LAB_1417951a8;
          lVar9 = lVar9 + 8;
        } while ((longlong)(int)plVar8[3] * 8 != lVar9);
      }
    }
  }
  else if (lVar5 != 0) {
    plVar7 = local_58;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    if ((longlong)(int)plVar7[1] != 0) {
      lVar9 = 0;
      uVar6 = 0;
      do {
        if (*(longlong *)(*plVar8 + lVar9) == lVar5) goto LAB_1417951a8;
        lVar9 = lVar9 + 8;
      } while ((longlong)(int)plVar7[1] * 8 != lVar9);
      goto LAB_141794f35;
    }
  }
  uVar6 = 0;
LAB_141794f35:
  *param_3 = uVar6;
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1417951a8:
  uVar6 = 1;
  goto LAB_141794f35;
}



// FUNCTION 1417951b0 FUN_1417951b0 body=1087 status=ok
// SIG undefined FUN_1417951b0(void)

void FUN_1417951b0(undefined8 param_1,longlong param_2,byte *param_3)

{
  ushort uVar1;
  ushort uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  code *pcVar5;
  void *_Src;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = 0;
      local_88 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar5 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar5 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_48);
    }
    else if (pcVar5 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_48);
    }
    else if (pcVar5 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
    }
    else {
      (*pcVar5)(uVar4,param_2,&local_48);
    }
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_140dafe7a;
      local_80 = 0;
      local_88 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar5 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar5 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2);
    }
    else if (pcVar5 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2);
    }
    else if (pcVar5 == (code *)&LAB_1428293cc) {
      local_58 = *(void **)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
    }
    else {
      (*pcVar5)(uVar4,param_2);
    }
  }
  _Src = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_50;
  local_60 = (int)uStack_50;
  if (lVar8 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,uStack_50 & 0xffffffff,0);
    memcpy(local_68,_Src,lVar8 * 2);
  }
  local_30 = local_48;
  FUN_1400021e4(&local_30,&local_40);
  if (local_38 == local_60) {
    if (local_38 < 2) {
      bVar10 = true;
    }
    else {
      lVar8 = 0;
      while( true ) {
        uVar1 = *(ushort *)(local_40 + lVar8);
        uVar6 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)local_68 + lVar8);
        uVar9 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1417953b6;
          }
          iVar7 = uVar6 - uVar9;
          goto LAB_1417953e1;
        }
        if (uVar1 == 0) break;
LAB_1417953b6:
        lVar8 = lVar8 + 2;
      }
      iVar7 = 0;
LAB_1417953e1:
      bVar10 = iVar7 == 0;
    }
  }
  else {
    bVar10 = local_60 + local_38 == 1;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_3 = bVar10 ^ 1;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417955f0 FUN_1417955f0 body=336 status=ok
// SIG undefined FUN_1417955f0(void)

undefined8 * FUN_1417955f0(longlong *param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < (int)param_1[1]) {
    lVar3 = 0;
    lVar2 = 0;
    do {
      if (param_3 == '\0') {
        FUN_1400021e4(*param_1 + lVar3,&local_58);
        iVar1 = local_50 + -1;
        if (local_50 == 0) {
          iVar1 = 0;
        }
        FUN_1400020e8(param_2,local_58,iVar1);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        FUN_1400020e8(param_2,&DAT_149e01f5a,1);
        FUN_1400021e4(*param_1 + lVar3,&local_58);
        iVar1 = local_50 + -1;
        if (local_50 == 0) {
          iVar1 = 0;
        }
        FUN_1400020e8(param_2,local_58,iVar1);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020e8(param_2,&DAT_149e01f5a,1);
      }
      iVar1 = (int)param_1[1];
      if (lVar2 < (longlong)iVar1 + -1) {
        FUN_1400020e8(param_2,&DAT_149e19f34,2);
        iVar1 = (int)param_1[1];
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (lVar2 < iVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141795742 FUN_141795742 body=188 status=ok
// SIG undefined FUN_141795742(void)

undefined8 * FUN_141795742(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *_Src;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  _Src = local_38;
  uVar1 = *param_1;
  *param_2 = &PTR_FUN_14a3de8d0;
  param_2[1] = uVar1;
  param_2[2] = 0;
  *(int *)(param_2 + 3) = local_30;
  if ((longlong)local_30 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 2,local_30,0);
    memcpy((void *)param_2[2],_Src,(longlong)local_30 * 2);
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141795800 FUN_141795800 body=48 status=ok
// SIG undefined FUN_141795800(void)

void FUN_141795800(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141795838 FUN_141795838 body=54 status=ok
// SIG undefined FUN_141795838(void)

undefined1 FUN_141795838(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1403de7ba(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14179586e FUN_14179586e body=81 status=ok
// SIG undefined FUN_14179586e(void)

void FUN_14179586e(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1417958c0 FUN_1417958c0 body=144 status=ok
// SIG undefined FUN_1417958c0(void)

undefined8 FUN_1417958c0(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x10);
    do {
      if (puVar2 + -2 != param_3) {
        puVar2[-1] = param_3[1];
        iVar1 = *(int *)(param_3 + 3);
        _Src = (void *)param_3[2];
        *(int *)(puVar2 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar2 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar2,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 2);
          }
        }
        *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(param_3 + 4);
      }
      param_3 = param_3 + 5;
      puVar2 = puVar2 + 5;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141795950 FUN_141795950 body=594 status=ok
// SIG undefined FUN_141795950(void)

void FUN_141795950(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x18);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x14 + lVar13 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x10 + lVar13 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_141795b59;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_141795b59:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141795ba4 FUN_141795ba4 body=29 status=ok
// SIG undefined FUN_141795ba4(void)

undefined8 FUN_141795ba4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141795bc1 FUN_141795bc1 body=173 status=ok
// SIG undefined FUN_141795bc1(void)

void FUN_141795bc1(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  uVar2 = FUN_1400ff27c();
  plVar3 = (longlong *)FUN_144718840(lVar5,uVar2);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3);
  if (*plVar4 == 0) {
    return;
  }
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3);
  if ((plVar4 == (longlong *)0x0) || (cVar1 = (**(code **)(*plVar4 + 8))(plVar4), cVar1 == '\0')) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  lVar5 = (**(code **)(*(longlong *)*param_1 + 0x180))();
  if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar5 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(lVar5);
  }
  lVar5 = FUN_140175e7c(lVar5);
  if (lVar5 == 0) {
    return;
  }
  FUN_147481450(lVar5,plVar3);
  return;
}



// FUNCTION 141795c6e FUN_141795c6e body=611 status=ok
// SIG undefined FUN_141795c6e(void)

void FUN_141795c6e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  puVar2 = (undefined8 *)*param_1;
  uVar3 = FUN_14007ca06();
  FUN_144805d84(puVar2,uVar3);
  *puVar2 = &PTR_FUN_14a3ead90;
  puVar2[5] = &PTR_FUN_14a3eb210;
  puVar2[6] = &PTR_LAB_14a3eb250;
  *(byte *)((longlong)puVar2 + 0x4a) = *(byte *)((longlong)puVar2 + 0x4a) | 2;
  puVar1 = puVar2 + 8;
  pbVar4 = (byte *)puVar2[0xc];
  if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 1) == 0)) {
    *(undefined1 *)((longlong)puVar2 + 0x4b) = 1;
  }
  else if (*(char *)((longlong)puVar2 + 0x4b) == '\0') {
    uVar3 = *(undefined8 *)(pbVar4 + 0x28);
    FUN_1402eb48e(uVar3,puVar1);
    *(undefined1 *)((longlong)puVar2 + 0x4b) = 1;
    FUN_1402eb97e(uVar3,puVar1);
    if (*(char *)((longlong)puVar2 + 0x4b) == '\0') {
      *(undefined4 *)(puVar2[0xc] + 0x24) = 0xbf800000;
    }
  }
  *(undefined1 *)(puVar2 + 9) = 4;
  *puVar2 = &PTR_FUN_14a3eba50;
  puVar2[5] = &PTR_FUN_14a3ebed0;
  puVar2[6] = &PTR_LAB_14a3ebf10;
  puVar2[0x27] = 0;
  *(undefined4 *)(puVar2 + 0x28) = 0;
  puVar2[0x23] = 0;
  puVar2[0x24] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x14c) = 0;
  puVar2[0x2b] = 0;
  *(undefined4 *)(puVar2 + 0x2c) = 0;
  puVar2[0x31] = 0;
  *(undefined4 *)(puVar2 + 0x32) = 0;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x19c) = 0;
  puVar2[0x35] = 0;
  *(undefined4 *)(puVar2 + 0x36) = 0;
  puVar2[0x40] = 0;
  *(undefined4 *)(puVar2 + 0x41) = 0;
  puVar2[0x3d] = 0;
  puVar2[0x3b] = 0;
  puVar2[0x3c] = 0;
  puVar2[0x39] = 0;
  puVar2[0x3a] = 0;
  puVar2[0x37] = 0;
  puVar2[0x38] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x214) = 0;
  puVar2[0x44] = 0;
  *(undefined4 *)(puVar2 + 0x45) = 0;
  puVar2[0x4a] = 0;
  *(undefined4 *)(puVar2 + 0x4b) = 0;
  puVar2[0x46] = 0;
  puVar2[0x47] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x25c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x264) = 0;
  puVar2[0x4e] = 0;
  *(undefined4 *)(puVar2 + 0x4f) = 0;
  puVar2[0x54] = 0;
  *(undefined4 *)(puVar2 + 0x55) = 0;
  puVar2[0x50] = 0;
  puVar2[0x51] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x2b4) = 0;
  puVar2[0x58] = 0;
  *(undefined4 *)(puVar2 + 0x59) = 0;
  puVar2[0x5e] = 0;
  *(undefined4 *)(puVar2 + 0x5f) = 0;
  puVar2[0x5a] = 0;
  puVar2[0x5b] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x304) = 0;
  puVar2[0x62] = 0;
  *(undefined4 *)(puVar2 + 99) = 0;
  *(undefined4 *)(puVar2 + 100) = 0xbf800000;
  *(undefined4 *)((longlong)puVar2 + 0x324) = 0xbf800000;
  *(undefined4 *)(puVar2 + 0x65) = 0xbf800000;
  *(undefined4 *)((longlong)puVar2 + 0x32c) = 0xbf800000;
  *(byte *)((longlong)puVar2 + 0x4a) = *(byte *)((longlong)puVar2 + 0x4a) & 0xf1;
  pbVar4 = (byte *)puVar2[0xc];
  if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 1) == 0)) {
    *(undefined1 *)((longlong)puVar2 + 0x4b) = 0;
  }
  else {
    if (*(char *)((longlong)puVar2 + 0x4b) != '\0') {
      uVar3 = *(undefined8 *)(pbVar4 + 0x28);
      FUN_1402eb48e(uVar3,puVar1);
      *(undefined1 *)((longlong)puVar2 + 0x4b) = 0;
      FUN_1402eb97e(uVar3,puVar1);
      if (*(char *)((longlong)puVar2 + 0x4b) != '\0') {
        return;
      }
      pbVar4 = (byte *)puVar2[0xc];
    }
    pbVar4[0x24] = 0;
    pbVar4[0x25] = 0;
    pbVar4[0x26] = 0x80;
    pbVar4[0x27] = 0xbf;
  }
  return;
}



// FUNCTION 141795ed2 FUN_141795ed2 body=29 status=ok
// SIG undefined FUN_141795ed2(void)

undefined8 FUN_141795ed2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141795ef0 FUN_141795ef0 body=29 status=ok
// SIG undefined FUN_141795ef0(void)

undefined8 FUN_141795ef0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141795f0e FUN_141795f0e body=29 status=ok
// SIG undefined FUN_141795f0e(void)

undefined8 FUN_141795f0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141795f2c FUN_141795f2c body=29 status=ok
// SIG undefined FUN_141795f2c(void)

undefined8 FUN_141795f2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141795f4a FUN_141795f4a body=29 status=ok
// SIG undefined FUN_141795f4a(void)

undefined8 FUN_141795f4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141795f68 FUN_141795f68 body=373 status=ok
// SIG undefined FUN_141795f68(void)

void FUN_141795f68(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x48;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141795ff1;
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
LAB_141795ff1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 1417960de FUN_1417960de body=369 status=ok
// SIG undefined FUN_1417960de(void)

void FUN_1417960de(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141796163;
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
LAB_141796163:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x78)) {
    uVar7 = uVar5 / 0x78 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x78,8);
  return;
}



// FUNCTION 141796250 FUN_141796250 body=29 status=ok
// SIG undefined FUN_141796250(void)

undefined8 FUN_141796250(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179626e FUN_14179626e body=53 status=ok
// SIG undefined FUN_14179626e(void)

void FUN_14179626e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar3 = &PTR_FUN_14a3fdee0;
  puVar3[1] = uVar2;
  *(undefined4 *)(puVar3 + 2) = uVar1;
  return;
}



// FUNCTION 1417962a3 FUN_1417962a3 body=49 status=ok
// SIG undefined FUN_1417962a3(void)

longlong FUN_1417962a3(void)

{
  if (DAT_14caa9180 == 0) {
    FUN_14073dd9a(&DAT_14caa9180,&PTR_LAB_14a400f30);
  }
  return DAT_14caa9180;
}



// FUNCTION 1417962d4 FUN_1417962d4 body=149 status=ok
// SIG undefined FUN_1417962d4(void)

void FUN_1417962d4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98 [13];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_a0 == 0) {
      local_a0 = 0;
    }
    else {
      FUN_1456cec3c();
      local_a0 = *param_2;
    }
  }
  plVar3 = local_98;
  plVar2 = param_2;
  for (lVar1 = 0xd; plVar2 = plVar2 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar3 = plVar3 + 1;
  }
  local_30 = (undefined1)param_2[0xe];
  FUN_1447cd2ec(param_1,&local_a0);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179636a FUN_14179636a body=49 status=ok
// SIG undefined FUN_14179636a(void)

longlong FUN_14179636a(void)

{
  if (DAT_14caa9588 == 0) {
    FUN_14073dd9a(&DAT_14caa9588,&PTR_LAB_14a409e30);
  }
  return DAT_14caa9588;
}



// FUNCTION 14179639c FUN_14179639c body=67 status=ok
// SIG undefined FUN_14179639c(void)

void FUN_14179639c(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x840) == (char)param_2) {
    return;
  }
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FUN_146ee929c(*(longlong *)(param_1 + 0xa40),param_2);
  }
  *(char *)(param_1 + 0x840) = (char)param_2;
  FUN_14075ad8a(param_1);
  return;
}



// FUNCTION 1417963e6 FUN_1417963e6 body=41 status=ok
// SIG undefined FUN_1417963e6(void)

void FUN_1417963e6(undefined8 param_1,longlong *param_2)

{
  FUN_1448284b2();
                    /* WARNING: Could not recover jumptable at 0x00014179640c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3c9a0);
  return;
}



// FUNCTION 141796410 FUN_141796410 body=29 status=ok
// SIG undefined FUN_141796410(void)

void FUN_141796410(longlong param_1)

{
  FUN_1448c4a0e();
  *(undefined4 *)(param_1 + 0x97c) = 0x7f7fffff;
  return;
}



// FUNCTION 14179642e FUN_14179642e body=26 status=ok
// SIG undefined FUN_14179642e(void)

void FUN_14179642e(undefined8 param_1)

{
  FUN_140456554();
  FUN_140ca2e9a(param_1);
  return;
}



// FUNCTION 141796448 FUN_141796448 body=78 status=ok
// SIG undefined FUN_141796448(void)

ulonglong FUN_141796448(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 unaff_RBX;
  
  cVar1 = FUN_140c02098();
  bVar3 = 1;
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x851) & 4) == 0)) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
    }
    if (*(byte *)(lVar2 + 0x152) < 7) {
      bVar3 = 0x15 >> (*(byte *)(lVar2 + 0x152) & 0x1f);
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3) & 0xffffff01;
}



// FUNCTION 14179649c FUN_14179649c body=541 status=ok
// SIG undefined FUN_14179649c(void)

undefined8 FUN_14179649c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  ushort uVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar11 = *(longlong *)(param_1 + 0x660);
  local_40 = param_2;
  if (lVar11 != 0) {
    lVar5 = *(longlong *)(lVar11 + 0x218);
    plVar2 = *(longlong **)(lVar11 + 0x220);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar2 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (lVar5 != 0) {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      FUN_1400021e4(&local_40,&local_50);
      lVar5 = (longlong)*(int *)(lVar11 + 0xe8);
      if (lVar5 != 0) {
        plVar9 = *(longlong **)(lVar11 + 0xe0);
        plVar7 = plVar9 + lVar5 * 2;
LAB_14179659b:
        if ((int)plVar9[1] == local_48) {
          bVar3 = true;
          if (1 < local_48) {
            lVar11 = 0;
            do {
              uVar12 = *(ushort *)(*plVar9 + lVar11);
              uVar13 = (ulonglong)uVar12;
              uVar10 = *(ushort *)(local_50 + lVar11);
              if (uVar12 == uVar10) {
                if (uVar12 == 0) break;
              }
              else {
                if (0x7f < (uVar10 | uVar12)) goto LAB_1417965f7;
                uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                uVar15 = (ulonglong)uVar10;
                uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                if ((&DAT_149e05da0)[uVar13] != (&DAT_149e05da0)[uVar15]) goto LAB_1417965f7;
              }
              lVar11 = lVar11 + 2;
            } while( true );
          }
        }
        else {
          if ((int)plVar9[1] + local_48 != 1) goto LAB_1417965ad;
          bVar3 = true;
        }
        goto LAB_14179653a;
      }
      bVar3 = false;
LAB_14179653a:
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar2 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      uVar6 = 1;
      if (bVar3) goto LAB_14179655d;
    }
    uVar4 = local_40;
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x660) + 200);
    if (lVar11 != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0xc0);
      lVar14 = 0;
      do {
        lVar8 = *(longlong *)(lVar5 + lVar14);
        if ((lVar8 != 0) && (lVar8 = FUN_144b2ab1c(lVar8,uVar4), lVar8 != 0)) {
          uVar6 = 1;
          break;
        }
        lVar14 = lVar14 + 8;
        uVar6 = 0;
      } while (lVar11 * 8 != lVar14);
      goto LAB_14179655d;
    }
  }
  uVar6 = 0;
LAB_14179655d:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
LAB_1417965f7:
  if (uVar12 == uVar10) goto LAB_14179653a;
LAB_1417965ad:
  plVar9 = plVar9 + 2;
  bVar3 = false;
  if (plVar9 == plVar7) goto LAB_14179653a;
  goto LAB_14179659b;
}



// FUNCTION 1417966ba FUN_1417966ba body=260 status=ok
// SIG undefined FUN_1417966ba(void)

longlong FUN_1417966ba(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (uint)param_3;
  uVar4 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar4 = (int)((ulonglong)param_2 >> 0x20) + (uVar4 << 0x10 | uVar4 & 0xffff) +
            ((uVar4 & 0xffff) >> 4) + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar2 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar4 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar5 * 0x10000 + (uVar5 & 0xffff)
                              + ((uVar5 >> 0x10) << 0x13 | uVar5 >> 0x10) + ((uVar5 & 0xffff) >> 4)
                              + uVar4 * 0x40 + 0x9e3779b9 ^ uVar4)) * 4);
    if (iVar2 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar3 = (longlong)iVar2 * 0x40;
        lVar1 = lVar6 + lVar3;
        if ((*(longlong *)(lVar6 + lVar3) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar3) == param_3)) break;
        iVar2 = *(int *)(lVar1 + 0x38);
        if (iVar2 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if (lVar1 == -0x10) {
        return 0;
      }
      FUN_1448c236a();
      lVar6 = *(longlong *)(lVar1 + 0x30);
      *(undefined1 *)(lVar6 + 8) = 1;
      return lVar6;
    }
  }
  return 0;
}



// FUNCTION 1417967be FUN_1417967be body=1369 status=ok
// SIG undefined FUN_1417967be(void)

longlong FUN_1417967be(longlong param_1,uint param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong *plVar25;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
  local_98 = param_3;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar25 = plVar6 + 1;
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)*plVar25 == 0) {
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
  lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar25 = plVar6 + 1;
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)*plVar25 == 0) {
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
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x660) + 0x218);
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  uVar11 = DAT_14c9974a8;
  local_90 = (longlong *)0x149f64774;
  local_88 = 0xb;
  uStack_84 = uStack_84 & 0xffffff00;
  uVar13 = FUN_14001a6c0(&local_90,1);
  lVar17 = FUN_1401466c8(uVar7,uVar13,uVar11);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar25 = plVar6 + 1;
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)*plVar25 == 0) {
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
  local_90 = (longlong *)0x149f637b1;
  local_88 = 0xb;
  uStack_84 = uStack_84 & 0xffffff00;
  uVar14 = FUN_14001a6c0(&local_90,1);
  lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (*(int *)(lVar20 + 0x10) == *(int *)(lVar20 + 0x3c)) {
LAB_141796a4d:
    plVar25 = (longlong *)0x0;
  }
  else {
    uVar8 = (uint)((ulonglong)DAT_14c996af0 >> 0x10);
    uVar24 = (uint)DAT_14c996af0 & 0xffff;
    uVar19 = (uVar14 << 0x10 | uVar14 & 0xffff) + ((uVar14 & 0xffff) >> 4) +
             ((uVar14 >> 0x10) << 0x13 | uVar14 >> 0x10);
    lVar23 = lVar20 + 0x40;
    if (*(longlong *)(lVar20 + 0x48) != 0) {
      lVar23 = *(longlong *)(lVar20 + 0x48);
    }
    iVar15 = *(int *)(lVar23 + (ulonglong)
                               (*(int *)(lVar20 + 0x50) - 1U &
                               ((uVar24 >> 4) +
                                (int)((ulonglong)DAT_14c996af0 >> 0x20) +
                                (uint)DAT_14c996af0 * 0x10000 + uVar24 +
                                (uVar19 >> 2) + uVar19 * 0x40 + (uVar8 << 0x13 | uVar8 & 0xffff) +
                                0x9e3779b9 ^ uVar19)) * 4);
    if (iVar15 == -1) goto LAB_141796a4d;
    lVar20 = *(longlong *)(lVar20 + 8);
    plVar25 = (longlong *)0x0;
    do {
      lVar22 = (longlong)iVar15 * 0x40;
      lVar23 = lVar20 + lVar22;
      if ((*(ulonglong *)(lVar20 + lVar22) == (ulonglong)uVar14) &&
         (*(longlong *)(lVar20 + 8 + lVar22) == DAT_14c996af0)) {
        plVar25 = (longlong *)0x0;
        if ((lVar23 != 0) && ((char *)(lVar23 + 0x10) != (char *)0x0)) {
          if (*(char *)(lVar23 + 0x10) != '\t') goto LAB_141796a4d;
          FUN_1448c236a();
          plVar25 = *(longlong **)(lVar23 + 0x30);
          *(undefined1 *)(plVar25 + 1) = 1;
        }
        break;
      }
      iVar15 = *(int *)(lVar23 + 0x38);
    } while (iVar15 != -1);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  lVar20 = 0;
  if ((-1 < (int)param_2) && (plVar25 != (longlong *)0x0)) {
    iVar15 = (**(code **)(*plVar25 + 0x60))(plVar25);
    uVar7 = local_78;
    if ((int)param_2 < iVar15) {
      lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
      if (plVar6 == (longlong *)0x0) {
        iVar15 = *(int *)(*(longlong *)(lVar20 + 0x1b0) + (ulonglong)param_2 * 4);
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        iVar15 = *(int *)(*(longlong *)(lVar20 + 0x1b0) + (ulonglong)param_2 * 4);
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      if (iVar15 == 1) {
        lVar18 = (ulonglong)param_2 * 0x60;
        puVar3 = (undefined4 *)(*(longlong *)(lVar17 + 0x10) + 0x20 + lVar18);
        uVar13 = puVar3[1];
        uVar9 = puVar3[2];
        uVar10 = puVar3[3];
        uVar7 = *(undefined8 *)(*(longlong *)(lVar17 + 0x10) + 0x30 + lVar18);
        fVar4 = *(float *)(plVar25[2] +
                          (longlong)*(int *)(*(longlong *)(lVar5 + 400) + (ulonglong)param_2 * 4) *
                          4);
        *local_98 = *puVar3;
        local_98[1] = uVar13;
        local_98[2] = uVar9;
        local_98[3] = uVar10;
        *(undefined8 *)(local_98 + 4) = uVar7;
        *(double *)(local_98 + 6) = (double)fVar4;
        lVar20 = CONCAT71((uint7)(uint3)(param_2 >> 8),1);
        goto LAB_141796a1f;
      }
      uVar21 = (ulonglong)param_2;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
      if (plVar6 == (longlong *)0x0) {
        iVar15 = *(int *)(*(longlong *)(lVar5 + 0x1b0) + uVar21 * 4);
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        iVar15 = *(int *)(*(longlong *)(lVar5 + 0x1b0) + uVar21 * 4);
        LOCK();
        plVar25 = plVar6 + 1;
        *(int *)plVar25 = (int)*plVar25 + -1;
        UNLOCK();
        if ((int)*plVar25 == 0) {
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
      uVar7 = local_78;
      if (iVar15 == 2) {
        lVar5 = *(longlong *)(lVar18 + 0x140);
        plVar6 = (longlong *)(lVar5 + uVar21 * 0x50);
        lVar5 = lVar5 + uVar21 * 0x50;
        lVar18 = lVar5 + 0x10;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = lVar18;
        if (*(int *)(lVar5 + 0x28) == 0) {
          iVar15 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar15 = (int)plVar6[5];
        }
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar7 = local_78;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        local_90 = plVar6;
        if ((local_78._4_4_ != iVar15) || (uStack_60 != lVar18)) {
          lVar20 = 0;
          iVar16 = local_78._4_4_;
          local_78 = uVar7;
          do {
            cVar12 = FUN_1417967be(param_1,*(undefined4 *)(*local_90 + (longlong)iVar16 * 0xc),
                                   &local_68);
            if (cVar12 != '\0') {
              if (lVar20 == 0) {
                *(undefined8 *)(local_98 + 4) = local_58;
                *(ulonglong *)(local_98 + 6) = CONCAT44(uStack_4c,uStack_50);
                *local_98 = (undefined4)local_68;
                local_98[1] = local_68._4_4_;
                local_98[2] = (undefined4)uStack_60;
                local_98[3] = uStack_60._4_4_;
                lVar20 = 1;
              }
              else {
                FUN_1467ff6fe(local_98,&local_68);
              }
            }
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar16 = local_78._4_4_;
          } while (local_90 != plVar6 ||
                   (CONCAT44(uStack_7c,uStack_80) != lVar18 || local_78._4_4_ != iVar15));
          goto LAB_141796a1f;
        }
      }
    }
    local_78 = uVar7;
    lVar20 = 0;
  }
LAB_141796a1f:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141796d18 FUN_141796d18 body=28 status=ok
// SIG undefined FUN_141796d18(void)

undefined8 FUN_141796d18(undefined8 param_1,undefined8 param_2)

{
  FUN_144709e31(param_2,param_1);
  return param_2;
}



// FUNCTION 141796d34 FUN_141796d34 body=196 status=ok
// SIG undefined FUN_141796d34(void)

void FUN_141796d34(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_144842962();
  if (param_1[0xcc] != 0) {
    cVar1 = FUN_140c02098(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x310))(param_1);
    }
  }
  if (param_1[0xe2] != 0) {
    FUN_1406cc568(param_1 + 0x82);
    param_1[0xe2] = 0;
  }
  if ((((param_1[0x10c] != 0) || (*(char *)((longlong)param_1 + 0x871) == '\x01')) &&
      ((char)param_1[0x10e] == '\0')) && (param_1[0x10d] == 0)) {
    *(undefined1 *)(param_1 + 0x10e) = 1;
    lVar2 = FUN_145b0bce0();
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x10d] = lVar2;
    param_1[0x10c] = 0;
    *(undefined1 *)((longlong)param_1 + 0x871) = 0;
  }
  return;
}



// FUNCTION 141796df8 FUN_141796df8 body=751 status=ok
// SIG undefined FUN_141796df8(void)

void FUN_141796df8(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  void *_Dst;
  undefined **_Src;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong local_a0;
  size_t local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = param_2;
  if (param_1[0xcc] == 0) goto LAB_141797049;
  local_58 = (undefined **)0x0;
  local_50 = 0x200000000;
  cVar7 = FUN_14479fe53(DAT_14ca85550,1,1);
  if ((((cVar7 == '\0') || (*(char *)(param_1[0xcc] + 0xe0) != '\x01')) ||
      (lVar12 = *(longlong *)(param_1[0xcc] + 0x50), lVar12 == 0)) ||
     ((*(char *)(lVar12 + 1) != '\x01' || (DAT_14c760f50 == 0)))) {
    cVar7 = FUN_145784aac();
    if (cVar7 != '\0') {
      local_78 = &DAT_14cae3cb0;
      goto LAB_141796ea6;
    }
  }
  else {
    local_78 = &DAT_14cb00c58;
LAB_141796ea6:
    local_50 = CONCAT44(local_50._4_4_,1);
    local_70 = 0;
  }
  local_a0 = *(longlong *)(param_1[0xcc] + 0x218);
  plVar4 = *(longlong **)(param_1[0xcc] + 0x220);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  local_88 = (longlong *)(local_a0 + 0x4a0);
  iVar8 = (**(code **)(*(longlong *)(local_a0 + 0x4a0) + 0x60))();
  uVar6 = local_50;
  local_a8 = local_58;
  if (0 < iVar8) {
    iVar8 = (int)local_50;
    _Src = &local_78;
    if ((undefined **)local_58 != (undefined **)0x0) {
      _Src = (undefined **)local_58;
    }
    local_98 = (longlong)(int)local_50 << 4;
    lVar12 = 0;
    lVar13 = 0;
    local_90 = param_1;
    do {
      if (*(int *)(*(longlong *)(local_a0 + 0x4b0) + lVar12) == -1) {
        FUN_14003fbd6();
        uVar10 = DAT_14caea080;
      }
      else {
        uVar10 = (**(code **)(*local_90 + 0x610))(local_90);
      }
      iVar9 = *(int *)(param_3 + 0x128);
      *(uint *)(param_3 + 0x128) = iVar9 + 1U;
      if (*(uint *)(param_3 + 300) < iVar9 + 1U) {
        FUN_1401acddc(param_3,iVar9);
      }
      lVar11 = *(longlong *)(param_3 + 0x120);
      if (*(longlong *)(param_3 + 0x120) == 0) {
        lVar11 = param_3;
      }
      lVar5 = (longlong)iVar9 * 0x48;
      FUN_1447244c4(lVar11 + lVar5,1);
      lVar11 = *(longlong *)(param_3 + 0x120);
      if (*(longlong *)(param_3 + 0x120) == 0) {
        lVar11 = param_3;
      }
      lVar3 = lVar11 + lVar5;
      *(undefined1 *)(lVar11 + lVar5) = 0;
      *(undefined8 *)(lVar11 + 8 + lVar5) = uVar10;
      *(int *)(lVar11 + 0x40 + lVar5) = iVar8;
      if (iVar8 == 0 && *(int *)(lVar11 + 0x44 + lVar5) == 0) {
        *(undefined4 *)(lVar3 + 0x44) = 2;
      }
      else {
        _Dst = (void *)(lVar11 + lVar5 + 0x18);
        FUN_1447376de(_Dst,uVar6 & 0xffffffff);
        if (iVar8 != 0) {
          if (*(void **)(lVar3 + 0x38) != (void *)0x0) {
            _Dst = *(void **)(lVar3 + 0x38);
          }
          memcpy(_Dst,_Src,local_98);
        }
      }
      *(undefined8 *)(lVar3 + 0x10) = *local_80;
      lVar13 = lVar13 + 1;
      iVar9 = (**(code **)(*local_88 + 0x60))();
      lVar12 = lVar12 + 0x20;
    } while (lVar13 < iVar9);
  }
  if ((undefined **)local_a8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
LAB_141797049:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417970e8 FUN_1417970e8 body=315 status=ok
// SIG undefined FUN_1417970e8(void)

void FUN_1417970e8(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141797152;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_141797152:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 141797230 FUN_141797230 body=439 status=ok
// SIG undefined FUN_141797230(void)

undefined8
FUN_141797230(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  code *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  if (DAT_14cad3688 == (code *)0x0) {
    local_f0 = &local_d8;
    local_d8 = FUN_144b223ce;
    local_e0 = FUN_14081d0ea;
    local_e8 = &LAB_1417963e0;
    local_f8 = &LAB_147a2f4c9;
    local_100 = &LAB_1400ea6f8;
    local_108 = L"Engine";
    local_110 = 0x200000000000;
    local_118 = 0x10000004;
    local_120 = 0x10;
    local_128 = 0x720;
    FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
  }
  local_d8 = DAT_14cad3688;
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417973e8 FUN_1417973e8 body=135 status=ok
// SIG undefined FUN_1417973e8(void)

undefined8 * FUN_1417973e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4169e0;
  if (param_1[0x8a] != 0) {
    FUN_14491153a();
    param_1[0x8a] = 0;
  }
  FUN_14006e4b8(param_1 + 100);
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a418080;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141797470 FUN_141797470 body=97 status=ok
// SIG undefined FUN_141797470(void)

void FUN_141797470(undefined8 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  
  *param_2 = 0x47c34ff3;
  *(undefined8 *)(param_2 + 2) = 0;
  param_2[4] = 1;
  FUN_140b1cbbc(param_2 + 2,1,0);
  puVar1 = *(undefined2 **)(param_2 + 2);
  *puVar1 = 0x500;
  *(undefined8 *)(puVar1 + 2) = 0xa00000005;
  *(undefined8 *)(puVar1 + 6) = 0x3200000019;
  *(undefined8 *)(puVar1 + 10) = 0x3c3f800000;
  *(undefined8 *)(puVar1 + 0xe) = 0;
  param_2[6] = 5000;
  return;
}



// FUNCTION 1417974e0 FUN_1417974e0 body=317 status=ok
// SIG undefined FUN_1417974e0(void)

void FUN_1417974e0(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14179754e;
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
LAB_14179754e:
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



// FUNCTION 14179761e FUN_14179761e body=29 status=ok
// SIG undefined FUN_14179761e(void)

undefined8 FUN_14179761e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179763c FUN_14179763c body=315 status=ok
// SIG undefined FUN_14179763c(void)

void FUN_14179763c(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417976a6;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1417976a6:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,4,4);
  }
  return;
}



// FUNCTION 141797778 FUN_141797778 body=45 status=ok
// SIG undefined FUN_141797778(void)

void FUN_141797778(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477dc2a();
  FUN_14477dadc(uVar1,param_2);
  FUN_14015e054(param_1,param_2);
  return;
}



// FUNCTION 1417977a6 FUN_1417977a6 body=309 status=ok
// SIG undefined FUN_1417977a6(void)

void FUN_1417977a6(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  uVar5 = *(uint *)(lVar2 + 8);
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar5);
  }
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  *(undefined4 *)(param_1 + 1) = 0;
  if (iVar3 < (int)uVar5) {
    FUN_144717690(param_1,uVar5);
    iVar4 = *(int *)(param_1 + 1);
    iVar3 = *(int *)((longlong)param_1 + 0xc);
  }
  else {
    iVar4 = 0;
  }
  *(uint *)(param_1 + 1) = iVar4 + uVar5;
  if ((uint)(iVar3 - iVar4) < uVar5) {
    FUN_1406600da(param_1);
  }
  if (param_1 != param_2) {
    uVar5 = *(uint *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(uint *)(param_1 + 1) = uVar5;
    if (uVar5 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      goto LAB_141797840;
    }
    FUN_14470ea6a(param_1);
    if (uVar5 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)(int)uVar5 * 0x60);
    }
  }
  uVar5 = *(uint *)(param_1 + 1);
LAB_141797840:
  if (-1 < (int)uVar5) {
    plVar1 = param_1 + 3;
    *(undefined4 *)(param_1 + 4) = 0;
    if (*(uint *)((longlong)param_1 + 0x24) == uVar5) {
      iVar3 = 0;
      uVar6 = uVar5;
    }
    else {
      FUN_140036888(plVar1);
      iVar3 = *(int *)(param_1 + 4);
      uVar5 = *(uint *)((longlong)param_1 + 0x24);
      uVar6 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 4) = uVar6 + iVar3;
    if (uVar5 - iVar3 < uVar6) {
      FUN_1400c29fa(plVar1);
    }
    memset((void *)((longlong)iVar3 + *plVar1),0,(longlong)(int)uVar6);
    *(undefined1 *)*plVar1 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar5);
}



// FUNCTION 1417978dc FUN_1417978dc body=55 status=ok
// SIG undefined FUN_1417978dc(void)

void FUN_1417978dc(longlong param_1,undefined8 param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  FUN_140320438(param_1 + 0x28,param_2);
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  return;
}



// FUNCTION 141797914 FUN_141797914 body=66 status=ok
// SIG undefined FUN_141797914(void)

void FUN_141797914(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014179794b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 141797956 FUN_141797956 body=114 status=ok
// SIG undefined FUN_141797956(void)

void FUN_141797956(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1448d844e(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_1405b2360(param_1 + 0x58,0);
  }
  FUN_1405b2104(*(undefined8 *)(param_1 + 0x30),param_1 + 0x48,2);
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar1 = (longlong)*(int *)(param_1 + 0x40) << 4;
    do {
      FUN_140320438(lVar2,param_2);
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1417979c8 FUN_1417979c8 body=69 status=ok
// SIG undefined FUN_1417979c8(void)

void FUN_1417979c8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 141797a0e FUN_141797a0e body=193 status=ok
// SIG undefined FUN_141797a0e(void)

void FUN_141797a0e(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 *local_a0;
  undefined8 **local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined5 local_5c;
  undefined3 uStack_57;
  undefined5 uStack_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = &local_68;
  local_68 = 0;
  local_60 = 0;
  local_27 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_5c = 0;
  uStack_57 = 0;
  uStack_54 = 0;
  local_90 = *(undefined8 *)(param_1 + 0x38);
  local_88 = *(undefined4 *)(param_1 + 0x40);
  local_80 = param_2 + 4;
  local_98 = &local_80;
  local_78 = param_2 + 7;
  local_70 = param_2 + 0xb;
  local_a8 = *(undefined1 *)(param_2 + 0x13);
  FUN_140035312(*(undefined8 *)(param_1 + 0x30),param_1 + 0x58,&local_90,*param_2);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141797ada FUN_141797ada body=29 status=ok
// SIG undefined FUN_141797ada(void)

void FUN_141797ada(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477dc2a();
  FUN_14477dadc(uVar1,param_2);
  return;
}



// FUNCTION 141797af8 FUN_141797af8 body=78 status=ok
// SIG undefined FUN_141797af8(void)

void FUN_141797af8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  iVar1 = *(int *)(param_1 + 0x30);
  FUN_140320438(param_1 + 0x18);
  if (0 < (longlong)iVar1) {
    lVar2 = 0;
    do {
      FUN_140320438(*(longlong *)(param_1 + 0x28) + lVar2,param_2);
      lVar2 = lVar2 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar2);
  }
  return;
}



// FUNCTION 141797b46 FUN_141797b46 body=46 status=ok
// SIG undefined FUN_141797b46(void)

void FUN_141797b46(longlong param_1,undefined8 param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  FUN_140320438(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 141797b74 FUN_141797b74 body=66 status=ok
// SIG undefined FUN_141797b74(void)

void FUN_141797b74(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141797bab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 141797bb6 FUN_141797bb6 body=364 status=ok
// SIG undefined FUN_141797bb6(void)

void FUN_141797bb6(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    local_38 = param_2[8];
    uStack_44 = *(undefined4 *)(param_1 + 0x20);
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_40 = param_2[5];
    uStack_3c = param_2[7];
    local_34 = *(undefined8 *)(param_2 + 9);
    local_2c = param_2[0xb];
    if ((plVar1[1] != 0) && ((*(byte *)(plVar1[1] + 0x24) & 7) != 0)) {
      FUN_144b1fcbe(&local_58,plVar1);
      FUN_144b1fd46(&local_58,*(undefined8 *)(param_1 + 0x18));
      FUN_144b1fe18(&local_58,*(undefined8 *)(param_1 + 0x18));
      plVar1 = *(longlong **)(param_1 + 0x18);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_58);
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    local_38 = param_2[8];
    uStack_44 = *(undefined4 *)(param_1 + 0x30);
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_40 = param_2[5];
    uStack_3c = param_2[7];
    local_34 = *(undefined8 *)(param_2 + 9);
    local_2c = param_2[0xb];
    if ((plVar1[1] != 0) && ((*(byte *)(plVar1[1] + 0x24) & 7) != 0)) {
      FUN_144b1fcbe(&local_58,plVar1);
      FUN_144b1fd46(&local_58,*(undefined8 *)(param_1 + 0x28));
      FUN_144b1fe18(&local_58,*(undefined8 *)(param_1 + 0x28));
      plVar1 = *(longlong **)(param_1 + 0x28);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_58);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141797d32 FUN_141797d32 body=63 status=ok
// SIG undefined FUN_141797d32(void)

void FUN_141797d32(longlong param_1,undefined8 *param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  *(undefined4 *)(param_1 + 0x18) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0x20) = 0xfffffffe;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  FUN_1401e7a20(param_1,*param_2);
  FUN_140320438(param_1 + 0xa8,param_2);
  return;
}



// FUNCTION 141797d86 FUN_141797d86 body=43 status=ok
// SIG undefined FUN_141797d86(void)

undefined8 FUN_141797d86(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x1c0))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141797da2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141797db2 FUN_141797db2 body=58 status=ok
// SIG undefined FUN_141797db2(void)

void FUN_141797db2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  *(undefined4 *)(param_1 + 0x18) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0x20) = 0xfffffffe;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  uVar1 = FUN_14477dc2a();
  FUN_14477dadc(uVar1,param_2);
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



// FUNCTION 141797dec FUN_141797dec body=38 status=ok
// SIG undefined FUN_141797dec(void)

undefined8 FUN_141797dec(undefined8 param_1,int param_2)

{
  FUN_140280aac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141797e12 FUN_141797e12 body=228 status=ok
// SIG undefined FUN_141797e12(void)

undefined8 FUN_141797e12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      *(undefined2 *)(param_2 + 0x10 + lVar7) = *(undefined2 *)(param_3 + 0x10 + lVar7);
      *(undefined8 *)(param_2 + 8 + lVar7) = *(undefined8 *)(param_3 + 8 + lVar7);
      *(undefined1 *)(param_2 + 0x28 + lVar7) = *(undefined1 *)(param_3 + 0x28 + lVar7);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = *(longlong *)(param_3 + 0x30 + lVar7);
      if (DAT_14c950c29 == '\x01') {
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar6 = *(longlong *)(param_3 + 0x30 + lVar7);
        }
      }
      *(longlong *)(param_2 + lVar7 + 0x30) = lVar6;
      FUN_1404306dc(param_2 + lVar7 + 0x38,param_3 + lVar7 + 0x38);
      FUN_140472d3c(param_2 + lVar7 + 0x48,param_3 + lVar7 + 0x48);
      FUN_140472cde(param_2 + lVar7 + 0x58,param_3 + lVar7 + 0x58);
      *(undefined4 *)(param_2 + lVar7 + 0x68) = *(undefined4 *)(param_3 + lVar7 + 0x68);
      lVar7 = lVar7 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141797ef6 FUN_141797ef6 body=387 status=ok
// SIG undefined FUN_141797ef6(void)

undefined8 FUN_141797ef6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
    do {
      *(undefined2 *)(param_2 + -0xb0) = *(undefined2 *)(param_3 + -0xb0);
      *(undefined8 *)(param_2 + -0xb8) = *(undefined8 *)(param_3 + -0xb8);
      *(undefined8 *)(param_2 + -0x88) = *(undefined8 *)(param_3 + -0x88);
      uVar1 = *(undefined4 *)(param_3 + -0xa8);
      uVar2 = *(undefined4 *)(param_3 + -0xa4);
      uVar3 = *(undefined4 *)(param_3 + -0xa0);
      uVar4 = *(undefined4 *)(param_3 + -0x9c);
      uVar5 = *(undefined4 *)(param_3 + -0x94);
      uVar6 = *(undefined4 *)(param_3 + -0x90);
      uVar7 = *(undefined4 *)(param_3 + -0x8c);
      *(undefined4 *)(param_2 + -0x98) = *(undefined4 *)(param_3 + -0x98);
      *(undefined4 *)(param_2 + -0x94) = uVar5;
      *(undefined4 *)(param_2 + -0x90) = uVar6;
      *(undefined4 *)(param_2 + -0x8c) = uVar7;
      *(undefined4 *)(param_2 + -0xa8) = uVar1;
      *(undefined4 *)(param_2 + -0xa4) = uVar2;
      *(undefined4 *)(param_2 + -0xa0) = uVar3;
      *(undefined4 *)(param_2 + -0x9c) = uVar4;
      *(undefined2 *)(param_2 + -0x78) = *(undefined2 *)(param_3 + -0x78);
      *(undefined8 *)(param_2 + -0x80) = *(undefined8 *)(param_3 + -0x80);
      lVar16 = *(longlong *)(param_3 + -0x70);
      if (DAT_14c950c29 == 1) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar16 = *(longlong *)(param_3 + -0x70);
        }
      }
      bVar15 = DAT_14c950c29;
      *(longlong *)(param_2 + -0x70) = lVar16;
      lVar16 = *(longlong *)(param_3 + -0x68);
      if ((bVar15 & 1) != 0) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar16 = *(longlong *)(param_3 + -0x68);
        }
      }
      *(longlong *)(param_2 + -0x68) = lVar16;
      uVar12 = *(undefined8 *)(param_3 + -0x58);
      uVar13 = *(undefined8 *)(param_3 + -0x50);
      uVar14 = *(undefined8 *)(param_3 + -0x48);
      *(undefined8 *)(param_2 + -0x60) = *(undefined8 *)(param_3 + -0x60);
      *(undefined8 *)(param_2 + -0x58) = uVar12;
      *(undefined8 *)(param_2 + -0x50) = uVar13;
      *(undefined8 *)(param_2 + -0x48) = uVar14;
      *(undefined4 *)(param_2 + -0x40) = *(undefined4 *)(param_3 + -0x40);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      uVar4 = *(undefined4 *)(param_3 + -0x28);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      uVar8 = *(undefined4 *)(param_3 + -0x18);
      uVar9 = *(undefined4 *)(param_3 + -0x14);
      uVar10 = *(undefined4 *)(param_3 + -0x10);
      uVar11 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      *(undefined4 *)(param_2 + -0x28) = uVar4;
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x18) = uVar8;
      *(undefined4 *)(param_2 + -0x14) = uVar9;
      *(undefined4 *)(param_2 + -0x10) = uVar10;
      *(undefined4 *)(param_2 + -0xc) = uVar11;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140d2c6ac(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      puVar17 = (undefined8 *)(param_3 + 0x18);
      puVar18 = (undefined8 *)(param_2 + 0x18);
      for (lVar16 = 0xb; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      }
      *(undefined2 *)(param_2 + 0x74) = *(undefined2 *)(param_3 + 0x74);
      *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
      param_3 = param_3 + 0x138;
      param_2 = param_2 + 0x138;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14179807a FUN_14179807a body=201 status=ok
// SIG undefined FUN_14179807a(void)

longlong FUN_14179807a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined8 *)(param_1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
  FUN_140472d3c(param_1 + 0x40,param_2 + 0x40);
  FUN_140472cde(param_1 + 0x50,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  lVar9 = *(longlong *)(param_2 + 0x68);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x68);
    }
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x68) = lVar9;
  uVar1 = *(undefined4 *)(param_2 + 0x70);
  uVar2 = *(undefined4 *)(param_2 + 0x74);
  uVar3 = *(undefined4 *)(param_2 + 0x78);
  uVar4 = *(undefined4 *)(param_2 + 0x7c);
  uVar5 = *(undefined4 *)(param_2 + 0x84);
  uVar6 = *(undefined4 *)(param_2 + 0x88);
  uVar7 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  *(undefined4 *)(param_1 + 0x8c) = uVar7;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  lVar9 = *(longlong *)(param_2 + 0x90);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x90);
    }
  }
  *(longlong *)(param_1 + 0x90) = lVar9;
  return param_1;
}



// FUNCTION 141798144 FUN_141798144 body=126 status=ok
// SIG undefined FUN_141798144(void)

void FUN_141798144(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a42e670;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    if (param_1[0x19] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  if (*(char *)((longlong)param_1 + 100) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 100) = 0;
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1417981c2 FUN_1417981c2 body=144 status=ok
// SIG undefined FUN_1417981c2(void)

undefined8 FUN_1417981c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x18 + lVar2;
      *(undefined2 *)(lVar1 + -8) = *(undefined2 *)(param_3 + lVar2 + 0x10);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2 + 8);
      FUN_1404306dc();
      FUN_1408cbbee(param_2 + lVar2 + 0x28,param_3 + lVar2 + 0x28);
      FUN_140472cde(param_2 + lVar2 + 0x38,param_3 + lVar2 + 0x38);
      *(undefined4 *)(param_2 + lVar2 + 0x48) = *(undefined4 *)(param_3 + lVar2 + 0x48);
      lVar2 = lVar2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141798252 FUN_141798252 body=85 status=ok
// SIG undefined FUN_141798252(void)

void FUN_141798252(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a428b40;
  FUN_1448d844e(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1417982a8 FUN_1417982a8 body=352 status=ok
// SIG undefined FUN_1417982a8(void)

void FUN_1417982a8(undefined8 *param_1,int param_2,int param_3,longlong param_4)

{
  ulonglong *puVar1;
  void *_Src;
  DWORD DVar2;
  int iVar3;
  DWORD dwTlsIndex;
  DWORD DVar4;
  LPVOID lpTlsValue;
  void *_Dst;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    if ((param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,param_4);
    }
    _Src = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar4 = 0xffffffff;
      LOCK();
      bVar6 = DAT_14c7585d0 != 0xffffffff;
      DVar2 = dwTlsIndex;
      if (bVar6) {
        DVar4 = DAT_14c7585d0;
        DVar2 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar2;
      UNLOCK();
      if (bVar6) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar4;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar1 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    iVar3 = (int)param_4 * param_3;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + 0xfU & 0xfffffffffffffff0);
    uVar5 = (longlong)_Dst + (longlong)iVar3;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar5) {
      FUN_140023dd8(puVar1,iVar3 + 0x10);
      _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      uVar5 = (longlong)iVar3 + (longlong)_Dst;
    }
    *puVar1 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,param_2 * param_4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14179840a FUN_14179840a body=71 status=ok
// SIG undefined FUN_14179840a(void)

void FUN_14179840a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a42d3b0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141798452 FUN_141798452 body=29 status=ok
// SIG undefined FUN_141798452(void)

undefined8 FUN_141798452(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141798470 FUN_141798470 body=29 status=ok
// SIG undefined FUN_141798470(void)

undefined8 FUN_141798470(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179848e FUN_14179848e body=137 status=ok
// SIG undefined FUN_14179848e(void)

undefined8 * FUN_14179848e(void)

{
  DWORD DVar1;
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x430);
  memset(_Dst,0,0x420);
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(_Dst + 1) = DVar1;
  *_Dst = &PTR_FUN_14a42d328;
  _Dst[0x1a] = 0;
  _Dst[0x1b] = 0x800000000;
  _Dst[0x20] = 0;
  _Dst[0x21] = 0x800000000;
  _Dst[0x42] = 0;
  _Dst[0x43] = 0x800000000;
  _Dst[0x84] = 0;
  _Dst[0x85] = 0x800000000;
  return _Dst;
}



// FUNCTION 141798518 FUN_141798518 body=136 status=ok
// SIG undefined FUN_141798518(void)

undefined8 * FUN_141798518(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a42d328;
  FUN_1400cc878(param_1 + 0x44);
  FUN_1400cc8b6(param_1 + 0x22);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1400cc8f4(param_1 + 2);
  *param_1 = &PTR_FUN_14a42d330;
  puVar1 = TlsGetValue(DAT_14c760f84);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c760f84,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417985a0 FUN_1417985a0 body=272 status=ok
// SIG undefined FUN_1417985a0(void)

void FUN_1417985a0(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xa0;
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
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1417986b0 FUN_1417986b0 body=59 status=ok
// SIG undefined FUN_1417986b0(void)

void FUN_1417986b0(longlong param_1,undefined8 param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  FUN_140320438(param_1 + 0x28,param_2);
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xf9;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  return;
}



// FUNCTION 1417986eb FUN_1417986eb body=64 status=ok
// SIG undefined FUN_1417986eb(void)

void FUN_1417986eb(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4820a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a42f670;
  puVar1[0x87] = &PTR_FUN_14a42fa00;
  puVar1[0x88] = 0;
  *(byte *)((longlong)puVar1 + 0x31) = *(byte *)((longlong)puVar1 + 0x31) & 0xfe;
  return;
}



// FUNCTION 14179872c FUN_14179872c body=441 status=ok
// SIG undefined FUN_14179872c(void)

undefined8 * FUN_14179872c(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xd30,0x10);
  FUN_140e14124(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a42fbe0;
  FUN_1409bd804(puVar1 + 0x115);
  puVar1[0x130] = 0;
  *(byte *)(puVar1 + 0x131) = *(byte *)(puVar1 + 0x131) & 0xfc;
  *(undefined1 *)((longlong)puVar1 + 0x989) = 0;
  puVar1[0x12f] = &PTR_FUN_14a42d3b0;
  puVar1[0x132] = 0;
  puVar1[0x133] = 0;
  puVar1[0x134] = 0;
  puVar1[0x135] = 0;
  puVar1[0x136] = 0;
  puVar1[0x137] = 0;
  puVar1[0x138] = 0x3f800000;
  *(undefined2 *)(puVar1 + 0x139) = 0x100;
  puVar1[0x13b] = 0;
  *(byte *)(puVar1 + 0x13c) = *(byte *)(puVar1 + 0x13c) & 0xfc;
  *(undefined1 *)((longlong)puVar1 + 0x9e1) = 0;
  puVar1[0x13a] = &PTR_FUN_14a42d3b0;
  puVar1[0x13d] = 0;
  puVar1[0x13e] = 0;
  puVar1[0x13f] = 0;
  puVar1[0x140] = 0;
  puVar1[0x141] = 0;
  puVar1[0x142] = 0;
  puVar1[0x143] = 0x3f800000;
  *(undefined2 *)(puVar1 + 0x144) = 0x100;
  puVar1[0x146] = 0;
  *(byte *)(puVar1 + 0x147) = *(byte *)(puVar1 + 0x147) & 0xfc;
  *(undefined1 *)((longlong)puVar1 + 0xa39) = 0;
  puVar1[0x145] = &PTR_FUN_14a42d4a0;
  *(undefined1 *)(puVar1 + 0x150) = 0;
  puVar1[0x148] = 0;
  puVar1[0x149] = 0;
  puVar1[0x14a] = 0;
  puVar1[0x14b] = 0;
  puVar1[0x14c] = 0;
  puVar1[0x14d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa69) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa71) = 0;
  puVar1[0x15c] = 0;
  *(undefined4 *)(puVar1 + 0x15d) = 0;
  puVar1[0x151] = 0;
  puVar1[0x152] = 0;
  puVar1[0x153] = 0;
  puVar1[0x154] = 0;
  puVar1[0x155] = 0;
  puVar1[0x156] = 0;
  puVar1[0x157] = 0;
  puVar1[0x158] = 0;
  puVar1[0x159] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xaec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xaf4) = 0;
  puVar1[0x160] = 0;
  *(undefined4 *)(puVar1 + 0x161) = 0;
  puVar1[0x166] = 0;
  *(undefined4 *)(puVar1 + 0x167) = 0;
  puVar1[0x162] = 0;
  puVar1[0x163] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xb3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xb44) = 0;
  puVar1[0x16a] = 0;
  *(undefined4 *)(puVar1 + 0x16b) = 0;
  *(undefined1 *)(puVar1 + 0x186) = 0;
  *(undefined1 *)(puVar1 + 0x188) = 2;
  *(undefined1 *)(puVar1 + 0x196) = 0;
  *(undefined1 *)(puVar1 + 0x1a4) = 0;
  return puVar1;
}



// FUNCTION 1417988e5 FUN_1417988e5 body=49 status=ok
// SIG undefined FUN_1417988e5(void)

longlong FUN_1417988e5(void)

{
  if (DAT_14caaae70 == 0) {
    FUN_14086a14e(&DAT_14caaae70,&PTR_FUN_14a430378);
  }
  return DAT_14caaae70;
}



// FUNCTION 141798916 FUN_141798916 body=49 status=ok
// SIG undefined FUN_141798916(void)

longlong FUN_141798916(void)

{
  if (DAT_14caab5f0 == 0) {
    FUN_14086a14e(&DAT_14caab5f0,&PTR_FUN_14a43b380);
  }
  return DAT_14caab5f0;
}



// FUNCTION 141798948 FUN_141798948 body=38 status=ok
// SIG undefined FUN_141798948(void)

void FUN_141798948(longlong param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  return;
}



// FUNCTION 14179896e FUN_14179896e body=752 status=ok
// SIG undefined FUN_14179896e(void)

void FUN_14179896e(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_1a8 [32];
  uint local_188;
  int local_178 [4];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  int local_b4 [27];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((*(char *)(param_1 + 0xf8) == '\0') && (*(char *)(param_1 + 0xf9) == '\0')) &&
     (*(char *)(param_1 + 0xfa) != '\x01')) goto LAB_141798b23;
  lVar5 = param_2[6];
  uVar3 = *(uint *)(param_1 + 0xe0);
  if ((int)uVar3 < 0) {
    iVar10 = -1;
    if ((((~uVar3 & 0x7fffffff) != 0) && (uVar3 = (int)(uVar3 * 2) >> 1, -1 < (int)uVar3)) &&
       ((int)uVar3 < *(int *)(lVar5 + 0x88))) {
      piVar6 = (int *)((ulonglong)uVar3 * 4 + *(longlong *)(lVar5 + 0x80));
      goto LAB_1417989c3;
    }
  }
  else {
    piVar6 = (int *)(param_1 + 0xe4);
LAB_1417989c3:
    iVar10 = *piVar6;
  }
  uVar3 = *(uint *)(param_1 + 0xf0);
  if ((int)uVar3 < 0) {
    iVar7 = -1;
    if ((((~uVar3 & 0x7fffffff) != 0) && (uVar3 = (int)(uVar3 * 2) >> 1, -1 < (int)uVar3)) &&
       ((int)uVar3 < *(int *)(lVar5 + 0x88))) {
      piVar6 = (int *)((ulonglong)uVar3 * 4 + *(longlong *)(lVar5 + 0x80));
      goto LAB_1417989dc;
    }
  }
  else {
    piVar6 = (int *)(param_1 + 0xf4);
LAB_1417989dc:
    iVar7 = *piVar6;
  }
  plVar1 = param_2 + 4;
  lVar5 = param_2[7];
  if (*(char *)(lVar5 + iVar10) == '\0') {
    FUN_1447d5d8e(plVar1,iVar10);
    lVar5 = param_2[7];
  }
  lVar2 = *plVar1;
  puVar8 = (undefined8 *)((longlong)iVar10 * 0x60 + lVar2);
  piVar6 = &local_118;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)piVar6 = *puVar8;
    puVar8 = puVar8 + 1;
    piVar6 = piVar6 + 2;
  }
  if (*(char *)(lVar5 + iVar7) == '\0') {
    FUN_1447d5d8e(plVar1,iVar7);
    lVar2 = *plVar1;
  }
  puVar8 = (undefined8 *)((longlong)iVar7 * 0x60 + lVar2);
  piVar6 = local_178;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)piVar6 = *puVar8;
    puVar8 = puVar8 + 1;
    piVar6 = piVar6 + 2;
  }
  if (*(byte *)(param_1 + 0xfb) != 1) {
    local_188 = (uint)*(byte *)(param_1 + 0xfb);
    FUN_14045e902(*param_2 + 0x10,plVar1,&local_118,iVar10);
    local_188 = (uint)*(byte *)(param_1 + 0xfb);
    FUN_14045e902(*param_2 + 0x10,plVar1,local_178,iVar7);
  }
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    local_158 = local_f8;
    uStack_154 = uStack_f4;
    uStack_150 = uStack_f0;
    uStack_14c = uStack_ec;
    local_148 = local_e8;
    uStack_140 = 0;
  }
  if (*(char *)(param_1 + 0xf9) == '\x01') {
    local_178[0] = local_118;
    local_178[1] = uStack_114;
    local_178[2] = uStack_110;
    local_178[3] = uStack_10c;
    local_168 = local_108;
    uStack_160 = uStack_100;
  }
  if (*(char *)(param_1 + 0xfa) == '\x01') {
    local_138 = local_d8;
    uStack_134 = uStack_d4;
    uStack_130 = uStack_d0;
    uStack_12c = uStack_cc;
    local_128 = local_c8;
    uStack_120 = 0;
  }
  if (*(byte *)(param_1 + 0xfb) != 1) {
    local_188 = (uint)*(byte *)(param_1 + 0xfb);
    FUN_14045df82(*param_2 + 0x10,plVar1,local_178,iVar7);
  }
  piVar6 = local_178;
  piVar9 = local_b4 + 3;
  for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
    *piVar9 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar9 = piVar9 + 1;
  }
  iVar10 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar10 + 1U) {
    FUN_1400c28ea(param_3,iVar10);
  }
  piVar6 = (int *)(*param_3 + (longlong)iVar10 * 0x70);
  *piVar6 = iVar7;
  piVar9 = local_b4;
  for (lVar5 = 0x1b; piVar6 = piVar6 + 1, lVar5 != 0; lVar5 = lVar5 + -1) {
    *piVar6 = *piVar9;
    piVar9 = piVar9 + 1;
  }
LAB_141798b23:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141798c60 FUN_141798c60 body=48 status=ok
// SIG undefined FUN_141798c60(void)

void FUN_141798c60(longlong param_1,undefined8 param_2)

{
  FUN_14019c9f2(param_1 + 0xd8);
  FUN_14019c9f2(param_1 + 0xe8,param_2);
  return;
}



// FUNCTION 141798c90 FUN_141798c90 body=53 status=ok
// SIG undefined FUN_141798c90(void)

void FUN_141798c90(longlong param_1,undefined8 *param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined8 *)(param_1 + 0x108) = *param_2;
  return;
}



// FUNCTION 141798cc6 FUN_141798cc6 body=1524 status=ok
// SIG undefined FUN_141798cc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141798cc6(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  double *pdVar10;
  undefined4 *puVar11;
  double *pdVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_238 [32];
  uint local_218;
  undefined8 local_208 [12];
  double local_1a8 [2];
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  undefined4 local_13c [27];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar6 = param_2[6];
  uVar3 = *(uint *)(param_1 + 0xe0);
  if ((int)uVar3 < 0) {
    iVar7 = -1;
    if ((((~uVar3 & 0x7fffffff) != 0) && (uVar3 = (int)(uVar3 * 2) >> 1, -1 < (int)uVar3)) &&
       ((int)uVar3 < *(int *)(lVar6 + 0x88))) {
      piVar4 = (int *)((ulonglong)uVar3 * 4 + *(longlong *)(lVar6 + 0x80));
      goto LAB_141798d5b;
    }
  }
  else {
    piVar4 = (int *)(param_1 + 0xe4);
LAB_141798d5b:
    iVar7 = *piVar4;
  }
  plVar1 = param_2 + 4;
  if (*(char *)(param_2[7] + (longlong)iVar7) == '\0') {
    FUN_1447d5d8e(plVar1,iVar7);
  }
  pdVar10 = (double *)((longlong)iVar7 * 0x60 + param_2[4]);
  pdVar12 = local_1a8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar12 = *pdVar10;
    pdVar10 = pdVar10 + 1;
    pdVar12 = pdVar12 + 1;
  }
  puVar9 = (undefined8 *)(*param_2 + 0x10);
  puVar13 = local_208;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar13 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 1;
  }
  if (*(char *)(param_1 + 0x132) != '\0') {
    local_218 = (uint)*(byte *)(param_1 + 0x135);
    FUN_14045e902(local_208,plVar1,local_1a8,iVar7);
    if (*(char *)(param_1 + 0x132) == '\x02') {
      local_158 = local_158 * *(double *)(param_1 + 0x128);
      dStack_160 = dStack_160 * *(double *)(param_1 + 0x120);
      local_168 = local_168 * *(double *)(param_1 + 0x118);
    }
    else {
      local_168 = *(double *)(param_1 + 0x118);
      dStack_160 = *(double *)(param_1 + 0x120);
      local_158 = *(double *)(param_1 + 0x128);
    }
    uStack_150 = 0;
    local_218 = (uint)*(byte *)(param_1 + 0x135);
    FUN_14045df82(local_208,plVar1,local_1a8,iVar7);
  }
  if (*(char *)(param_1 + 0x131) != '\0') {
    local_218 = (uint)*(byte *)(param_1 + 0x134);
    FUN_14045e902(local_208,plVar1,local_1a8,iVar7);
    auVar2 = *(undefined1 (*) [16])(param_1 + 0x100);
    auVar22 = divpd(auVar2,_DAT_1499387d0);
    auVar23._8_8_ = 0;
    auVar23._0_8_ = *(double *)(param_1 + 0x110);
    auVar23 = divpd(auVar23,_DAT_1499387d0);
    auVar22 = roundpd(auVar22,auVar22,3);
    auVar23 = roundpd(auVar23,auVar23,3);
    dVar24 = (auVar2._0_8_ - auVar22._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar26 = (auVar2._8_8_ - auVar22._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar20 = (*(double *)(param_1 + 0x110) - auVar23._0_8_ * (double)DAT_1499387d0) *
             0.008726646259971648;
    dVar21 = (0.0 - auVar23._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar15 = sin(dVar24);
    dVar16 = sin(dVar26);
    dVar17 = sin(dVar20);
    sin(dVar21);
    dVar18 = cos(dVar24);
    dVar19 = cos(dVar26);
    dVar20 = cos(dVar20);
    cos(dVar21);
    dVar24 = -(dVar19 * dVar15 * dVar17) + dVar16 * dVar18 * dVar20;
    dVar26 = dVar16 * dVar15 * dVar17 + dVar19 * dVar18 * dVar20;
    dVar21 = dVar15 * dVar16 * dVar20 - dVar18 * dVar19 * dVar17;
    dVar20 = -(dVar15 * dVar19 * dVar20) - dVar18 * dVar16 * dVar17;
    if (*(char *)(param_1 + 0x131) == '\x02') {
      dVar18 = dVar20 * local_1a8[0];
      dVar19 = dVar20 * local_1a8[1];
      dVar17 = dVar21 * (double)local_198._0_8_;
      dVar15 = dVar21 * local_1a8[1];
      dVar16 = dVar21 * local_1a8[0];
      dVar25 = (double)local_198._0_8_ * dVar24;
      dVar21 = local_1a8[1] * dVar24 * -1.0 +
               (double)local_198._0_8_ * dVar20 +
               dVar21 * (double)local_198._8_8_ * 1.0 + dVar26 * local_1a8[0];
      dVar20 = local_1a8[0] * dVar24 * 1.0 +
               (double)local_198._8_8_ * dVar20 + dVar17 * -1.0 + dVar26 * local_1a8[1];
      dVar24 = (double)local_198._8_8_ * dVar24 * 1.0 +
               ((dVar15 * 1.0 + dVar26 * (double)local_198._0_8_) - dVar18);
      dVar26 = dVar25 * -1.0 + ((dVar16 * -1.0 + dVar26 * (double)local_198._8_8_) - dVar19);
    }
    local_198._8_4_ = SUB84(dVar26,0);
    local_198._0_8_ = dVar24;
    local_198._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    local_218 = (uint)*(byte *)(param_1 + 0x134);
    local_1a8[0] = dVar21;
    local_1a8[1] = dVar20;
    FUN_14045df82(local_208,plVar1,local_1a8,iVar7);
  }
  if (*(char *)(param_1 + 0x130) != '\0') {
    local_218 = (uint)*(byte *)(param_1 + 0x133);
    FUN_14045e902(local_208,plVar1,local_1a8,iVar7);
    dVar26 = *(double *)(param_1 + 0xe8);
    dVar20 = *(double *)(param_1 + 0xf0);
    dVar24 = *(double *)(param_1 + 0xf8);
    dVar21 = 0.0;
    if (*(char *)(param_1 + 0x130) == '\x02') {
      dVar26 = dVar26 + local_188;
      dVar20 = dVar20 + dStack_180;
      dVar24 = dVar24 + local_178;
      dVar21 = dStack_170 + 0.0;
    }
    local_218 = (uint)*(byte *)(param_1 + 0x133);
    local_188 = dVar26;
    dStack_180 = dVar20;
    local_178 = dVar24;
    dStack_170 = dVar21;
    FUN_14045df82(local_208,plVar1,local_1a8,iVar7);
  }
  uVar3 = *(uint *)(param_1 + 0xe0);
  if ((int)uVar3 < 0) {
    uVar8 = 0xffffffff;
    if ((((~uVar3 & 0x7fffffff) == 0) || (uVar3 = (int)(uVar3 * 2) >> 1, (int)uVar3 < 0)) ||
       (*(int *)(lVar6 + 0x88) <= (int)uVar3)) goto LAB_1417990a3;
    puVar14 = (undefined4 *)((ulonglong)uVar3 * 4 + *(longlong *)(lVar6 + 0x80));
  }
  else {
    puVar14 = (undefined4 *)(param_1 + 0xe4);
  }
  uVar8 = *puVar14;
LAB_1417990a3:
  pdVar10 = local_1a8;
  puVar14 = local_13c + 3;
  for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar14 = *(undefined4 *)pdVar10;
    pdVar10 = (double *)((longlong)pdVar10 + 4);
    puVar14 = puVar14 + 1;
  }
  iVar7 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar7 + 1U) {
    FUN_1400c28ea(param_3,iVar7);
  }
  puVar14 = (undefined4 *)(*param_3 + (longlong)iVar7 * 0x70);
  *puVar14 = uVar8;
  puVar11 = local_13c;
  for (lVar6 = 0x1b; puVar14 = puVar14 + 1, lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar14 = *puVar11;
    puVar11 = puVar11 + 1;
  }
  if ((local_d0 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417992bc FUN_1417992bc body=48 status=ok
// SIG undefined FUN_1417992bc(void)

void FUN_1417992bc(longlong param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  return;
}



// FUNCTION 1417992ec FUN_1417992ec body=5074 status=ok
// SIG undefined FUN_1417992ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417992ec(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint *puVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar26;
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar42;
  undefined1 auVar40 [16];
  double dVar43;
  undefined1 auVar41 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auStack_388 [32];
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  double local_340;
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  undefined1 local_2c8 [16];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [32];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double dStack_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if ((*(byte *)(param_1 + 0x174) & 0xe) == 0) goto LAB_141799e8b;
  uVar15 = *(uint *)(param_1 + 0xe0);
  if ((int)uVar15 < 0) {
    uVar21 = (ulonglong)~uVar15;
    uVar17 = 0xffffffff;
    if ((((~uVar15 & 0x7fffffff) != 0) && (uVar15 = (int)(uVar15 * 2) >> 1, -1 < (int)uVar15)) &&
       (uVar21 = param_2[6], (int)uVar15 < *(int *)(uVar21 + 0x88))) {
      puVar11 = (uint *)((ulonglong)uVar15 * 4 + *(longlong *)(uVar21 + 0x80));
      goto LAB_14179939e;
    }
  }
  else {
    puVar11 = (uint *)(param_1 + 0xe4);
    uVar21 = param_1;
LAB_14179939e:
    uVar17 = *puVar11;
  }
  uVar50 = (undefined4)uVar21;
  plVar18 = param_2 + 4;
  lVar19 = (longlong)(int)uVar17;
  plVar16 = param_2;
  if (*(char *)(param_2[7] + lVar19) == '\0') {
    plVar16 = (longlong *)(ulonglong)uVar17;
    plVar13 = plVar18;
    FUN_1447d5d8e();
    uVar50 = SUB84(plVar13,0);
  }
  auVar8 = _DAT_149934d80;
  lVar6 = *param_2;
  lVar14 = param_2[4];
  lVar20 = lVar19 * 0x60;
  pdVar1 = (double *)(lVar14 + lVar20);
  auVar27 = *(undefined1 (*) [16])(lVar6 + 0x50);
  dVar23 = auVar27._0_8_;
  dVar26 = auVar27._8_8_;
  auVar34 = *(undefined1 (*) [16])(lVar6 + 0x60);
  dVar24 = auVar34._0_8_;
  auVar40 = *(undefined1 (*) [16])(lVar14 + 0x40 + lVar20);
  auVar4 = *(undefined1 (*) [16])(lVar14 + 0x50 + lVar20);
  auVar27 = minpd(auVar40,auVar27);
  auVar33 = minpd(auVar4,auVar34);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  iVar12 = movmskpd(uVar50,auVar28);
  auVar27._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
  uVar15 = movmskpd((int)plVar16,auVar27);
  if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
    dVar42 = *(double *)(lVar6 + 0x10);
    dVar43 = *(double *)(lVar6 + 0x18);
    dVar44 = *(double *)(lVar6 + 0x20);
    dVar48 = *(double *)(lVar6 + 0x28);
    dVar45 = *(double *)(lVar6 + 0x28);
    dVar30 = *(double *)(lVar6 + 0x28);
    dVar23 = dVar23 * pdVar1[4];
    dVar26 = dVar26 * pdVar1[5];
    dVar24 = dVar24 * pdVar1[6];
    dVar37 = auVar34._8_8_ * pdVar1[7];
    dVar31 = dVar26 * dVar42 - dVar43 * dVar23;
    dVar47 = dVar24 * dVar43 - dVar44 * dVar26;
    dVar39 = dVar23 * dVar44 - dVar42 * dVar24;
    dVar36 = dVar37 * dVar48 - dVar48 * dVar37;
    dVar47 = dVar47 + dVar47;
    dVar39 = dVar39 + dVar39;
    dVar31 = dVar31 + dVar31;
    dVar36 = dVar36 + dVar36;
    dVar36 = (dVar36 * dVar48 - dVar36 * dVar48) + dVar30 * dVar36 + dVar37 +
             *(double *)(lVar6 + 0x48);
    local_118 = (dVar31 * dVar43 - dVar44 * dVar39) + dVar45 * dVar47 + dVar23 +
                *(double *)(lVar6 + 0x30);
    dStack_110 = (dVar47 * dVar44 - dVar31 * dVar42) + dVar30 * dVar39 + dVar26 +
                 *(double *)(lVar6 + 0x38);
    local_108 = (dVar39 * dVar42 - dVar43 * dVar47) + dVar45 * dVar31 + dVar24 +
                *(double *)(lVar6 + 0x40);
  }
  else {
    dVar45 = *(double *)(lVar6 + 0x10);
    dVar39 = *(double *)(lVar6 + 0x18);
    dVar30 = *(double *)(lVar6 + 0x20);
    dVar37 = dVar39 + dVar39;
    dVar31 = dVar30 + dVar30;
    dVar36 = dVar45 * (dVar45 + dVar45);
    local_1f8 = ((double)DAT_149934d80 - (dVar30 * dVar31 + dVar39 * dVar37)) * dVar23;
    dStack_1d0 = (DAT_149934d80._8_8_ - (dVar30 * dVar31 + dVar36)) * dVar26;
    local_1a8 = (1.0 - (dVar36 + dVar39 * dVar37)) * dVar24;
    dVar30 = *(double *)(lVar6 + 0x10) * dVar31;
    dVar36 = *(double *)(lVar6 + 0x28);
    dVar47 = dVar31 * dVar36;
    dVar42 = (dVar45 + dVar45) * *(double *)(lVar6 + 0x28);
    dVar36 = dVar37 * dVar36;
    dStack_1f0 = (dVar37 * dVar45 + dVar47) * dVar23;
    local_1c8 = (dVar31 * dVar39 + dVar42) * dVar26;
    local_1b8 = (dVar36 + dVar30) * dVar24;
    local_1d8 = (dVar37 * dVar45 - dVar47) * dVar26;
    dStack_1b0 = (dVar31 * dVar39 - dVar42) * dVar24;
    dStack_1e8 = (dVar30 - dVar36) * dVar23;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = *(undefined8 *)(lVar6 + 0x30);
    uStack_190 = *(undefined8 *)(lVar6 + 0x38);
    local_188 = *(undefined8 *)(lVar6 + 0x40);
    uStack_180 = 0x3ff0000000000000;
    dVar30 = *pdVar1;
    dVar45 = pdVar1[1];
    dVar39 = pdVar1[2];
    local_268 = pdVar1[8];
    local_258 = pdVar1[9];
    dStack_230 = pdVar1[10];
    dVar47 = dVar45 + dVar45;
    dVar37 = dVar39 + dVar39;
    dVar36 = dVar30 * (dVar30 + dVar30);
    local_278 = ((double)DAT_149934d80 - (dVar39 * dVar37 + dVar45 * dVar47)) * local_268;
    dStack_250 = (DAT_149934d80._8_8_ - (dVar39 * dVar37 + dVar36)) * local_258;
    local_228 = (1.0 - (dVar36 + dVar45 * dVar47)) * dStack_230;
    dVar36 = pdVar1[3];
    dVar39 = dVar37 * dVar36;
    dVar31 = (dVar30 + dVar30) * pdVar1[3];
    dVar36 = dVar47 * dVar36;
    dStack_270 = (dVar47 * dVar30 + dVar39) * local_268;
    local_248 = (dVar37 * dVar45 + dVar31) * local_258;
    local_238 = (dVar36 + *pdVar1 * dVar37) * dStack_230;
    local_268 = (*pdVar1 * dVar37 - dVar36) * local_268;
    local_258 = (dVar47 * dVar30 - dVar39) * local_258;
    dStack_230 = (dVar37 * dVar45 - dVar31) * dStack_230;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = pdVar1[4];
    dStack_210 = pdVar1[5];
    local_208 = pdVar1[6];
    uStack_200 = 0x3ff0000000000000;
    local_358._0_8_ = plVar18;
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar34._8_8_ = -(ulonglong)(0.0 <= auVar40._8_8_ * dVar26);
    auVar34._0_8_ = -(ulonglong)(0.0 <= auVar40._0_8_ * dVar23);
    auVar27 = blendvpd(_DAT_149936790,auVar8,auVar34);
    uVar21 = -(ulonglong)(0.0 <= auVar4._0_8_ * dVar24);
    dVar23 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
    dVar24 = auVar27._0_8_;
    dStack_170 = dStack_170 * dVar24;
    local_178 = local_178 * dVar24;
    local_168._0_8_ = (double)local_168._0_8_ * dVar24;
    dVar24 = auVar27._8_8_;
    local_148 = local_148 * dVar24;
    local_150 = local_150 * dVar24;
    local_158 = dVar24 * local_158;
    local_128 = local_128 * dVar23;
    local_130 = local_130 * dVar23;
    local_138 = dVar23 * local_138;
    FUN_14481fd10(local_298);
    dVar36 = 0.0;
    plVar18 = (longlong *)local_358._0_8_;
  }
  uVar50 = (undefined4)((ulonglong)dStack_110 >> 0x20);
  fVar22 = *(float *)(param_1 + 0x168);
  if ((fVar22 == 0.0) && (!NAN(fVar22))) {
    auVar40._8_4_ = SUB84(dStack_110,0);
    auVar40._0_8_ = local_118;
    auVar40._12_4_ = uVar50;
    *(undefined1 (*) [16])(param_1 + 0x108) = auVar40;
    *(double *)(param_1 + 0x118) = local_108;
    dVar23 = DAT_14c8464e8;
    *(double *)(param_1 + 0x120) = DAT_14c8464e0;
    *(double *)(param_1 + 0x128) = dVar23;
    *(double *)(param_1 + 0x130) = DAT_14c8464f0;
  }
  dVar26 = DAT_14c8464f0;
  dVar24 = DAT_14c8464e8;
  dVar23 = DAT_14c8464e0;
  lVar14 = lVar14 + lVar20;
  fVar3 = *(float *)(param_1 + 0x16c);
  local_358._8_4_ = SUB84(dVar36,0);
  local_358._0_8_ = local_108;
  local_358._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  if (ABS(fVar3) <= 0.0001) {
    lVar6 = *param_2;
    dVar39 = *(double *)(param_1 + 0x150);
    dVar37 = *(double *)(param_1 + 0x158);
    dVar23 = *(double *)(param_1 + 0x160);
    dVar44 = *(double *)(lVar6 + 0x50) * dVar39;
    dVar26 = *(double *)(lVar6 + 0x58) * dVar37;
    dVar43 = *(double *)(lVar6 + 0x60) * dVar23;
    dVar31 = *(double *)(lVar6 + 0x10);
    dVar47 = *(double *)(lVar6 + 0x18);
    dVar42 = *(double *)(lVar6 + 0x20);
    dVar24 = *(double *)(lVar6 + 0x28);
    dVar36 = dVar26 * dVar31 - dVar44 * dVar47;
    dVar48 = dVar43 * dVar47 - dVar26 * dVar42;
    dVar30 = dVar44 * dVar42 - dVar31 * dVar43;
    dVar48 = dVar48 + dVar48;
    dVar30 = dVar30 + dVar30;
    dVar36 = dVar36 + dVar36;
    dVar45 = (dVar42 * dVar48 - dVar31 * dVar36) + *(double *)(lVar6 + 0x28) * dVar30 + dVar26 +
             *(double *)(lVar6 + 0x38);
    dVar26 = *(double *)(lVar6 + 0x40);
    auVar4._8_4_ = SUB84(dVar45,0);
    auVar4._0_8_ = (dVar36 * dVar47 - dVar30 * dVar42) + dVar24 * dVar48 + dVar44 +
                   *(double *)(lVar6 + 0x30);
    auVar4._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x108) = auVar4;
    *(double *)(param_1 + 0x118) =
         dVar36 * dVar24 + dVar43 + (dVar30 * dVar31 - dVar48 * dVar47) + dVar26;
  }
  else {
    if (fVar22 <= fVar3) {
      dVar36 = *(double *)(param_1 + 0x118);
    }
    else {
      dVar31 = (double)fVar3;
      local_2d0 = *(double *)(param_1 + 0x148) * dVar31;
      local_2d8 = *(double *)(param_1 + 0x140) * dVar31;
      local_2e0 = *(double *)(param_1 + 0x138) * dVar31;
      local_340 = *(double *)(param_1 + 0x100);
      local_2e8 = local_340 * local_340;
      local_2f0 = *(double *)(param_1 + 0xf0);
      dVar30 = *(double *)(param_1 + 0xf8);
      dVar37 = 1.0 / dVar31;
      bVar5 = *(byte *)(param_1 + 0x174);
      local_2f8 = DAT_14c8464e0;
      local_300 = DAT_14c8464e8;
      local_308 = DAT_14c8464f0;
      dVar36 = *(double *)(param_1 + 0x118);
      dVar45 = *(double *)(param_1 + 0x108);
      dVar39 = *(double *)(param_1 + 0x110);
      local_328._8_4_ = SUB84(dStack_110,0);
      local_328._0_8_ = local_118;
      local_328._12_4_ = uVar50;
      do {
        dVar48 = local_108 - (dVar36 + local_2d0);
        dVar44 = dStack_110 - (dVar39 + local_2d8);
        dVar47 = local_118 - (dVar45 + local_2e0);
        dVar43 = dVar36 + local_2d0;
        local_338 = dVar45 + local_2e0;
        dVar42 = dVar39 + local_2d8;
        if (local_2e8 < dVar48 * dVar48 + dVar47 * dVar47 + dVar44 * dVar44) {
          dVar48 = local_108 - local_108;
          dVar44 = dStack_110 - dStack_110;
          dVar47 = local_118 - local_118;
          *(double *)(param_1 + 0x130) = DAT_14c8464f0;
          dVar36 = DAT_14c8464e8;
          *(double *)(param_1 + 0x120) = DAT_14c8464e0;
          *(double *)(param_1 + 0x128) = dVar36;
          dVar43 = local_108;
          local_338 = local_118;
          dVar42 = dStack_110;
        }
        dVar48 = (dVar48 * local_2f0 - dVar30 * *(double *)(param_1 + 0x130)) * dVar31;
        dVar44 = (dVar44 * local_2f0 - dVar30 * *(double *)(param_1 + 0x128)) * dVar31;
        dVar36 = (dVar47 * local_2f0 - dVar30 * *(double *)(param_1 + 0x120)) * dVar31;
        if (dVar37 < dVar30) {
          dVar45 = dVar37 / dVar30;
          dVar48 = dVar48 * dVar45;
          dVar44 = dVar44 * dVar45;
          dVar36 = dVar36 * dVar45;
        }
        dVar36 = *(double *)(param_1 + 0x120) + dVar36;
        dVar44 = *(double *)(param_1 + 0x128) + dVar44;
        dVar48 = *(double *)(param_1 + 0x130) + dVar48;
        dVar45 = SQRT(dVar48 * dVar48 + dVar36 * dVar36 + dVar44 * dVar44) * dVar31;
        if (local_340 < dVar45) {
          dVar45 = local_340 / dVar45;
          dVar36 = dVar36 * dVar45;
          dVar44 = dVar44 * dVar45;
          dVar48 = dVar48 * dVar45;
        }
        dVar45 = local_118;
        if ((bVar5 & 2) != 0) {
          dVar45 = dVar36 * dVar31 + local_338;
        }
        dVar39 = dStack_110;
        if ((bVar5 & 4) != 0) {
          dVar39 = dVar44 * dVar31 + dVar42;
        }
        dVar36 = local_108;
        if ((bVar5 & 8) != 0) {
          dVar36 = dVar48 * dVar31 + dVar43;
        }
        if ((bVar5 & 1) != 0) {
          dVar44 = dVar36 - local_108;
          dVar47 = dVar39 - dStack_110;
          dVar49 = dVar45 - local_118;
          dVar48 = dVar44 * dVar44 + dVar49 * dVar49 + dVar47 * dVar47;
          local_310 = *(double *)(param_1 + 0xe8);
          if (local_310 * local_310 < dVar48) {
            if ((dVar48 != 1.0) || (NAN(dVar48))) {
              uVar50 = SUB84(dVar23,0);
              uVar51 = (undefined4)((ulonglong)dVar23 >> 0x20);
              dVar45 = dVar24;
              dVar36 = dVar26;
              if (9.99999993922529e-09 <= dVar48) {
                dVar36 = 1.0 / SQRT(dVar48);
                dVar44 = dVar44 * dVar36;
                dVar47 = dVar47 * dVar36;
                dVar49 = dVar49 * dVar36;
                goto LAB_14179a490;
              }
            }
            else {
LAB_14179a490:
              uVar50 = SUB84(dVar49,0);
              uVar51 = (undefined4)((ulonglong)dVar49 >> 0x20);
              dVar45 = dVar47;
              dVar36 = dVar44;
            }
            dVar36 = dVar36 * local_310 + local_108;
            dVar39 = dVar45 * local_310 + dStack_110;
            dVar45 = (double)CONCAT44(uVar51,uVar50) * local_310 + local_118;
          }
        }
        *(double *)(param_1 + 0x120) = (dVar45 - local_338) * dVar37;
        *(double *)(param_1 + 0x128) = (dVar39 - dVar42) * dVar37;
        *(double *)(param_1 + 0x130) = (dVar36 - dVar43) * dVar37;
        fVar22 = fVar22 - fVar3;
      } while (fVar3 < fVar22);
      *(double *)(param_1 + 0x108) = dVar45;
      *(double *)(param_1 + 0x110) = dVar39;
      *(double *)(param_1 + 0x118) = dVar36;
      *(float *)(param_1 + 0x168) = fVar22;
      local_368 = dStack_110;
      dStack_360 = dStack_110;
      local_2c8 = ZEXT416((uint)fVar3);
    }
    lVar6 = *param_2;
    dVar23 = *(double *)(param_1 + 0x108) - *(double *)(lVar6 + 0x30);
    dVar24 = *(double *)(param_1 + 0x110) - *(double *)(lVar6 + 0x38);
    dVar36 = dVar36 - *(double *)(lVar6 + 0x40);
    auVar27 = *(undefined1 (*) [16])(lVar6 + 0x50);
    dVar26 = -*(double *)(lVar6 + 0x10);
    dVar30 = -*(double *)(lVar6 + 0x18);
    dVar37 = *(double *)(lVar6 + 0x20) * -1.0;
    dVar42 = *(double *)(lVar6 + 0x28) * 1.0;
    dVar47 = dVar23 * dVar37 - dVar26 * dVar36;
    dVar45 = dVar24 * dVar26 - dVar23 * dVar30;
    dVar31 = dVar36 * dVar30 - dVar24 * dVar37;
    dVar31 = dVar31 + dVar31;
    dVar47 = dVar47 + dVar47;
    dVar45 = dVar45 + dVar45;
    auVar33._8_8_ = 0x3ff0000000000000;
    auVar33._0_8_ = *(double *)(lVar6 + 0x60);
    auVar40 = divpd(_DAT_149934d80,auVar27);
    auVar34 = divpd(ZEXT816(0x3ff0000000000000),auVar33);
    dVar39 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar27._0_8_)) & auVar40._0_8_) *
             ((dVar45 * dVar30 - dVar47 * dVar37) + dVar42 * dVar31 + dVar23);
    dVar37 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar27._8_8_)) & auVar40._8_8_) *
             (dVar45 * *(double *)(lVar6 + 0x10) + dVar37 * dVar31 + dVar42 * dVar47 + dVar24);
    dVar23 = (dVar42 * dVar45 + dVar36 + (dVar47 * dVar26 - dVar31 * dVar30)) *
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(lVar6 + 0x60))) &
                     auVar34._0_8_);
    auVar8._8_4_ = SUB84(dVar37,0);
    auVar8._0_8_ = dVar39;
    auVar8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x150) = auVar8;
    *(double *)(param_1 + 0x160) = dVar23;
  }
  dVar24 = *pdVar1;
  dVar26 = pdVar1[1];
  dVar36 = pdVar1[2];
  dVar30 = pdVar1[3];
  local_2b8 = *(undefined8 *)(lVar14 + 0x40);
  uStack_2b0 = *(undefined8 *)(lVar14 + 0x48);
  local_2a8 = *(undefined8 *)(lVar14 + 0x50);
  uStack_2a0 = *(undefined8 *)(lVar14 + 0x58);
  dVar45 = 0.0;
  if ((*(byte *)(param_1 + 0x174) & 0x70) != 0) {
    iVar12 = *(int *)(*(longlong *)(param_2[6] + 0x90) + lVar19 * 4);
    if (*(char *)(param_2[7] + (longlong)iVar12) == '\0') {
      FUN_1447d5d8e(plVar18,iVar12);
    }
    lVar19 = *plVar18;
    lVar14 = (longlong)iVar12 * 0x60;
    pdVar1 = (double *)(lVar19 + 0x20 + lVar14);
    dVar31 = *pdVar1;
    dVar45 = *(double *)(lVar19 + 0x30 + lVar14);
    local_108 = local_108 - dVar45;
    local_118 = local_118 - dVar31;
    dStack_110 = dStack_110 - pdVar1[1];
    dVar47 = local_108 * local_108 + local_118 * local_118 + dStack_110 * dStack_110;
    if (((dVar47 != 1.0) ||
        (dVar44 = dStack_110, dVar42 = local_108, dVar43 = local_118, NAN(dVar47))) &&
       (dVar44 = DAT_14c8464e8, dVar42 = DAT_14c8464f0, dVar43 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar47)) {
      dVar47 = 1.0 / SQRT(dVar47);
      dVar44 = dStack_110 * dVar47;
      dVar42 = local_108 * dVar47;
      dVar43 = local_118 * dVar47;
    }
    dVar45 = *(double *)(param_1 + 0x118) - dVar45;
    dVar47 = *(double *)(param_1 + 0x110) - *(double *)(lVar19 + 0x28 + lVar14);
    dVar31 = *(double *)(param_1 + 0x108) - dVar31;
    dVar48 = dVar45 * dVar45 + dVar31 * dVar31 + dVar47 * dVar47;
    dStack_360 = 0.0;
    if (((dVar48 != 1.0) || (dVar49 = dVar45, dVar32 = dVar47, dVar38 = dVar31, NAN(dVar48))) &&
       (dVar49 = DAT_14c8464f0, dVar32 = DAT_14c8464e8, dVar38 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar48)) {
      dVar48 = 1.0 / SQRT(dVar48);
      dVar49 = dVar45 * dVar48;
      dVar32 = dVar47 * dVar48;
      dVar38 = dVar31 * dVar48;
    }
    dVar45 = dVar42 * dVar49 + dVar43 * dVar38 + dVar44 * dVar32 + 1.0;
    if (dVar45 < 9.999999974752427e-07) {
      if ((ABS(dVar43) <= ABS(dVar44)) ||
         (dVar49 = DAT_14c846398, dVar32 = DAT_14c846390, dVar38 = DAT_14c846388,
         ABS(dVar43) <= ABS(dVar42))) {
        dVar49 = -DAT_14c8463b0;
        dVar32 = -DAT_14c8463a8;
        dVar38 = -DAT_14c8463a0;
      }
      dVar45 = 0.0;
    }
    dVar31 = dVar43 * dVar32 - dVar38 * dVar44;
    dVar48 = dVar42 * dVar38 - dVar49 * dVar43;
    dVar47 = dVar44 * dVar49 - dVar32 * dVar42;
    dVar42 = dVar31 * dVar31 + dVar47 * dVar47;
    dVar43 = dVar45 * dVar45 + dVar48 * dVar48;
    auVar41._0_8_ = dVar42 + dVar43;
    auVar41._8_8_ = dVar42 + dVar43;
    auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
    auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
    auVar27 = sqrtpd(auVar41,auVar41);
    auVar27 = divpd(_DAT_149934d80,auVar27);
    auVar46._0_8_ = auVar27._0_8_ * dVar31;
    auVar46._8_8_ = auVar27._8_8_ * dVar45;
    local_178 = (double)((ulonglong)(dVar47 * auVar27._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_));
    dStack_170 = (double)((ulonglong)(dVar48 * auVar27._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_));
    local_168 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar46,auVar25);
    local_368 = dVar23;
    local_338 = dVar24;
    dStack_330 = dVar26;
    FUN_1449413b4(&local_178,&local_1f8);
    bVar5 = *(byte *)(param_1 + 0x174);
    if ((bVar5 & 0x10) == 0) {
      local_1f8 = DAT_14c8464e0;
    }
    if ((bVar5 & 0x20) == 0) {
      dStack_1f0 = DAT_14c8464e8;
    }
    if ((bVar5 & 0x40) == 0) {
      dStack_1e8 = DAT_14c8464f0;
    }
    auVar29._8_8_ = dStack_1e8;
    auVar29._0_8_ = dStack_1f0;
    auVar27 = divpd(auVar29,_DAT_1499387d0);
    auVar35._8_8_ = 0;
    auVar35._0_8_ = local_1f8;
    auVar34 = divpd(auVar35,_DAT_1499387d0);
    auVar27 = roundpd(auVar27,auVar27,3);
    auVar34 = roundpd(auVar34,auVar34,3);
    dVar23 = (dStack_1f0 - auVar27._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar24 = (dStack_1e8 - auVar27._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar26 = (local_1f8 - auVar34._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar45 = (0.0 - auVar34._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar31 = sin(dVar23);
    dVar47 = sin(dVar24);
    dVar42 = sin(dVar26);
    sin(dVar45);
    dVar43 = cos(dVar23);
    dVar24 = cos(dVar24);
    dVar26 = cos(dVar26);
    cos(dVar45);
    dVar23 = -(dVar24 * dVar31 * dVar42) + dVar47 * dVar43 * dVar26;
    dVar45 = dVar47 * dVar31 * dVar42 + dVar24 * dVar43 * dVar26;
    dVar44 = dVar31 * dVar47 * dVar26 - dVar43 * dVar24 * dVar42;
    dVar31 = -(dVar31 * dVar24 * dVar26) - dVar43 * dVar47 * dVar42;
    dVar47 = dVar36 * dVar23;
    dVar24 = dStack_330 * dVar23 * -1.0 +
             dVar36 * dVar31 + dVar30 * dVar44 * 1.0 + local_338 * dVar45;
    dVar26 = local_338 * dVar23 * 1.0 +
             dVar30 * dVar31 + dVar36 * dVar44 * -1.0 + dStack_330 * dVar45;
    dVar36 = dVar30 * dVar23 * 1.0 +
             ((dVar44 * dStack_330 * 1.0 + dVar45 * dVar36) - dVar31 * local_338);
    dVar30 = dVar47 * -1.0 + ((dVar44 * local_338 * -1.0 + dVar45 * dVar30) - dVar31 * dStack_330);
    dVar23 = local_368;
    dVar45 = dStack_360;
  }
  iVar12 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar12 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar12 + 1U) {
    FUN_1400c28ea(param_3,iVar12);
  }
  lVar19 = *param_3;
  lVar14 = (longlong)iVar12 * 0x70;
  *(uint *)(lVar19 + lVar14) = uVar17;
  auVar7._8_4_ = SUB84(dVar26,0);
  auVar7._0_8_ = dVar24;
  auVar7._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  *(undefined1 (*) [16])(lVar19 + 0x10 + lVar14) = auVar7;
  auVar10._8_4_ = SUB84(dVar30,0);
  auVar10._0_8_ = dVar36;
  auVar10._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  *(undefined1 (*) [16])(lVar19 + 0x20 + lVar14) = auVar10;
  auVar9._8_4_ = SUB84(dVar37,0);
  auVar9._0_8_ = dVar39;
  auVar9._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
  *(undefined1 (*) [16])(lVar19 + 0x30 + lVar14) = auVar9;
  pdVar1 = (double *)(lVar19 + 0x40 + lVar14);
  *pdVar1 = dVar23;
  pdVar1[1] = dVar45;
  puVar2 = (undefined8 *)(lVar19 + 0x50 + lVar14);
  *puVar2 = local_2b8;
  puVar2[1] = uStack_2b0;
  puVar2 = (undefined8 *)(lVar19 + 0x60 + lVar14);
  *puVar2 = local_2a8;
  puVar2[1] = uStack_2a0;
LAB_141799e8b:
  if ((local_f0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14179a6cc FUN_14179a6cc body=474 status=ok
// SIG undefined FUN_14179a6cc(void)

void FUN_14179a6cc(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  FUN_14019c9f2(param_1 + 0x140);
  FUN_14019c9f2(param_1 + 0x268,param_2);
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if (*(int *)(param_1 + 0x2ac) < 0) {
    FUN_14481578e(param_1 + 0x2a0,0);
  }
  uVar6 = *(uint *)(param_1 + 0x150);
  if ((1 < (longlong)(int)uVar6) && (uVar7 = *(uint *)(param_1 + 0x148), (~uVar7 & 0x7fffffff) != 0)
     ) {
    lVar4 = param_2 + 0x10;
    if (*(longlong *)(param_2 + 0x20) != 0) {
      lVar4 = *(longlong *)(param_2 + 0x20);
    }
    if ((*(uint *)(lVar4 + (ulonglong)(uVar7 >> 3 & 0x1ffc)) >> (uVar7 & 0x1f) & 1) != 0) {
      iVar2 = *(int *)(param_1 + 0x2a8);
      *(uint *)(param_1 + 0x2a8) = iVar2 + uVar6;
      if ((uint)(*(int *)(param_1 + 0x2ac) - iVar2) < uVar6) {
        FUN_1446f48e2(param_1 + 0x2a0);
      }
      memset((void *)((longlong)iVar2 * 4 + *(longlong *)(param_1 + 0x2a0)),0,
             (longlong)(int)uVar6 << 2);
      uVar6 = *(int *)(param_1 + 0x148) * 2 >> 1;
      *(uint *)(*(longlong *)(param_1 + 0x2a0) + -4 + (longlong)*(int *)(param_1 + 0x150) * 4) =
           uVar6;
      iVar2 = *(int *)(param_1 + 0x150);
      if (1 < iVar2) {
        iVar3 = 1;
        lVar4 = -2;
        do {
          if (uVar6 + 1 < 2) {
            uVar7 = 0xffffffff;
            uVar1 = uVar6;
          }
          else {
            uVar7 = 0xffffffff;
            if ((int)uVar6 < 0) {
              uVar1 = 0xffffffff;
            }
            else {
              uVar1 = 0xffffffff;
              if ((int)uVar6 < *(int *)(*(longlong *)(param_2 + 0x48) + 0x28)) {
                uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_2 + 0x48) + 0x20) + 8 +
                                 (ulonglong)uVar6 * 0xc);
                uVar1 = uVar7;
              }
            }
          }
          uVar6 = uVar1;
          iVar3 = iVar3 + 1;
          *(uint *)(*(longlong *)(param_1 + 0x2a0) + (iVar2 + lVar4) * 4) = uVar7;
          iVar2 = *(int *)(param_1 + 0x150);
          lVar4 = lVar4 + -1;
        } while (iVar3 < iVar2);
      }
    }
  }
  if ((longlong)*(int *)(param_1 + 0x240) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x238);
    lVar5 = (longlong)*(int *)(param_1 + 0x240) * 0x70;
    do {
      FUN_14019c9f2(lVar4,param_2);
      lVar4 = lVar4 + 0x70;
      lVar5 = lVar5 + -0x70;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14179a8a6 FUN_14179a8a6 body=1029 status=ok
// SIG undefined FUN_14179a8a6(void)

undefined1 (*) [16]
FUN_14179a8a6(undefined1 (*param_1) [16],undefined8 param_2,longlong *param_3,char *param_4,
             int param_5,double *param_6)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  double *pdVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_178 [32];
  int local_158;
  undefined1 local_148 [16];
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  double local_e8 [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0x3ff0000000000000;
  *(undefined8 *)param_1[4] = 0x3ff0000000000000;
  *(undefined8 *)(param_1[4] + 8) = 0x3ff0000000000000;
  *(undefined8 *)param_1[5] = 0x3ff0000000000000;
  *(undefined8 *)(param_1[5] + 8) = 0;
  if (param_5 != 3) {
    dVar14 = param_6[1];
    dVar12 = param_6[2];
    *(double *)param_1[2] = *param_6;
    *(double *)(param_1[2] + 8) = dVar14;
    *(double *)param_1[3] = dVar12;
    *(undefined8 *)(param_1[3] + 8) = 0;
    pcVar3 = param_4 + 0x10;
    if (*param_4 != '\0') {
      pcVar3 = param_4 + 0x8c;
    }
    local_158 = param_5;
    FUN_14045df82(param_2,param_3,param_1,*(undefined4 *)pcVar3);
    if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_148 = (undefined1  [16])0x0;
  local_138 = 0.0;
  dStack_130 = 1.0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = 1.0;
  dStack_100 = 1.0;
  local_f8 = 1.0;
  uStack_f0 = 0;
  if (*param_4 == '\x01') {
    if (*(int *)(param_4 + 0x8c) != -1) {
      FUN_1474fe94a(param_4 + 0x20,local_e8,param_3);
      local_a8 = *param_6 * local_a8;
      dStack_a0 = param_6[1] * dStack_a0;
      local_98 = param_6[2] * local_98;
      dVar14 = dStack_a0 * local_e8[0] - local_a8 * local_e8[1];
      dVar9 = local_98 * local_e8[1] - dStack_a0 * local_e8[2];
      dVar12 = local_a8 * local_e8[2] - local_e8[0] * local_98;
      dVar9 = dVar9 + dVar9;
      dVar12 = dVar12 + dVar12;
      dVar14 = dVar14 + dVar14;
      local_c8 = (dVar14 * local_e8[1] - dVar12 * local_e8[2]) + local_e8[3] * dVar9 + local_a8 +
                 local_c8;
      dStack_c0 = (local_e8[2] * dVar9 - local_e8[0] * dVar14) + local_e8[3] * dVar12 + dStack_a0 +
                  dStack_c0;
      local_118._0_8_ =
           dVar14 * local_e8[3] + local_98 + (dVar12 * local_e8[0] - dVar9 * local_e8[1]) + local_b8
      ;
      pdVar5 = local_e8;
      pdVar8 = (double *)local_148;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *pdVar8 = *pdVar5;
        pdVar5 = pdVar5 + 1;
        pdVar8 = pdVar8 + 1;
      }
LAB_14179aab2:
      local_128._8_4_ = SUB84(dStack_c0,0);
      local_128._0_8_ = local_c8;
      local_128._12_4_ = (int)((ulonglong)dStack_c0 >> 0x20);
      local_118._8_8_ = 0;
      goto LAB_14179aabd;
    }
  }
  else if (((~*(uint *)(param_4 + 0xc) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(param_4 + 0xc)))
  {
    uVar1 = *(uint *)(param_4 + 0x10);
    uVar6 = (ulonglong)uVar1;
    if ((uVar6 != 0xffffffff) && ((-1 < (int)uVar1 && ((int)uVar1 < (int)param_3[1])))) {
      if (*(char *)(param_3[3] + uVar6) == '\0') {
        FUN_1447d5d8e(param_3,uVar1);
      }
      puVar4 = (undefined8 *)(uVar6 * 0x60 + *param_3);
      puVar7 = (undefined8 *)local_148;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      dVar10 = *param_6 * local_108;
      dVar11 = param_6[1] * dStack_100;
      dVar9 = param_6[2] * local_f8;
      dVar12 = dVar11 * (double)local_148._0_8_ - dVar10 * (double)local_148._8_8_;
      dVar13 = dVar9 * (double)local_148._8_8_ - dVar11 * local_138;
      dVar14 = dVar10 * local_138 - (double)local_148._0_8_ * dVar9;
      dVar13 = dVar13 + dVar13;
      dVar14 = dVar14 + dVar14;
      dVar12 = dVar12 + dVar12;
      local_c8 = (dVar12 * (double)local_148._8_8_ - dVar14 * local_138) +
                 dStack_130 * dVar13 + dVar10 + (double)local_128._0_8_;
      dStack_c0 = (local_138 * dVar13 - (double)local_148._0_8_ * dVar12) +
                  dStack_130 * dVar14 + dVar11 + (double)local_128._8_8_;
      local_118._0_8_ =
           dVar12 * dStack_130 + dVar9 +
           (dVar14 * (double)local_148._0_8_ - dVar13 * (double)local_148._8_8_) +
           (double)local_118._0_8_;
      goto LAB_14179aab2;
    }
  }
  FUN_1474ff0b8(local_e8,param_6,param_2,local_148);
LAB_14179aabd:
  puVar4 = (undefined8 *)local_148;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)*param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_178);
}



// FUNCTION 14179acac FUN_14179acac body=197 status=ok
// SIG undefined FUN_14179acac(void)

void FUN_14179acac(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  FUN_14019c9f2(param_1 + 0xd8);
  FUN_14019c9a8(param_1 + 0x120,param_2);
  FUN_14019c9a8(param_1 + 0x1d0,param_2);
  uVar3 = *(uint *)(param_1 + 0xe0);
  if ((int)uVar3 < 0) {
    if ((((~uVar3 & 0x7fffffff) == 0) || (uVar3 = (int)(uVar3 * 2) >> 1, (int)uVar3 < 0)) ||
       (*(int *)(param_2 + 0x88) <= (int)uVar3)) {
      uVar2 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1c8) = 0xffffffff;
      goto LAB_14179ad2e;
    }
    piVar4 = (int *)((ulonglong)uVar3 * 4 + *(longlong *)(param_2 + 0x80));
  }
  else {
    piVar4 = (int *)(param_1 + 0xe4);
  }
  iVar1 = *piVar4;
  *(undefined4 *)(param_1 + 0x1c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  if ((longlong)iVar1 == -1) {
    return;
  }
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x90) + (longlong)iVar1 * 4);
  *(int *)(param_1 + 0x1c8) = iVar1;
  if ((longlong)iVar1 == -1) {
    return;
  }
  uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x90) + (longlong)iVar1 * 4);
LAB_14179ad2e:
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  return;
}



// FUNCTION 14179ad86 FUN_14179ad86 body=1085 status=ok
// SIG undefined FUN_14179ad86(void)

void FUN_14179ad86(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_168 [40];
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  undefined4 local_120;
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  longlong local_f0 [2];
  longlong *local_e0 [2];
  longlong *local_d0 [2];
  longlong *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  undefined1 *local_98;
  wchar_t *local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined1 local_78;
  longlong local_70;
  undefined8 uStack_68;
  longlong local_60 [2];
  undefined1 local_50;
  char local_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (((plVar4 != (longlong *)0x0) && (plVar4[8] != 0)) && (*param_2 != 0)) {
    lVar5 = param_2[0x13];
    cVar3 = (**(code **)(*plVar4 + 0x2c0))(plVar4);
    if ((cVar3 == '\0') && ((char)lVar5 != '\0')) {
      FUN_140009b9a(local_d0,*param_2 + 0x160);
      local_90 = (wchar_t *)plVar4[3];
      FUN_1400021e4(&local_90,local_f0);
      FUN_140233b1a(local_e0,local_f0);
      local_90 = L"AdditiveMismatchWarning";
      local_88 = 0x17;
      FUN_1446e940c(local_114,&local_90);
      local_90 = L"AnimNode_SequencePlayer";
      local_88 = 0x17;
      FUN_1446e940c(local_118,&local_90);
      FUN_140208bae(local_110,local_118,local_114,
                    L"Trying to play a non-additive animation \'{0}\' into a pose that is expected to be additive in anim instance \'{1}\'"
                   );
      FUN_14023409e(&local_100,local_110,1);
      local_90 = (wchar_t *)CONCAT44(local_90._4_4_,4);
      FUN_14023423e((longlong)&local_84 + 4,local_e0);
      local_70 = CONCAT44(local_70._4_4_,4);
      FUN_14023423e(local_60,local_d0);
      local_98 = &local_50;
      local_a0 = &local_90;
      FUN_14010d304(&local_140);
      local_b0 = local_100;
      local_a8 = local_f8;
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_c0,&local_b0,&local_140);
      FUN_14007f2db(local_140,(ulonglong)local_138 & 0xffffffff);
      if (local_140 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_90 + lVar5) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_90 + lVar5) + 0x10))();
          *(undefined8 *)((longlong)&local_90 + lVar5) = 0;
          *(undefined4 *)((longlong)&local_88 + lVar5) = 0;
        }
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != -0x10);
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar2 = (int *)((longlong)local_f8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_f8 + 0x10))(local_f8);
          }
        }
      }
      if (local_e0[0] != (longlong *)0x0) {
        (**(code **)(*local_e0[0] + 0x10))();
      }
      if (local_d0[0] != (longlong *)0x0) {
        (**(code **)(*local_d0[0] + 0x10))();
      }
      if (local_110[0] != (longlong *)0x0) {
        (**(code **)(*local_110[0] + 0x10))();
      }
      if (local_f0[0] != 0) {
        FUN_1400020a8();
      }
      local_128 = local_c0;
      if (local_c0 == (longlong *)0x0) {
        local_120 = local_b8;
        FUN_1474c7e4c(param_2,3);
      }
      else {
        (**(code **)(*local_c0 + 8))(local_c0);
        local_120 = local_b8;
        FUN_1474c7e4c(param_2,3);
        (**(code **)(*local_c0 + 0x10))(local_c0);
      }
    }
    local_140 = param_2 + 4;
    local_138 = param_2 + 7;
    local_130 = param_2 + 0xb;
    local_78 = (**(code **)(*param_1 + 0x120))();
    local_79 = 0;
    local_7b = 0;
    local_90 = (wchar_t *)(double)*(float *)((longlong)param_1 + 0x2c);
    local_88 = CONCAT31(local_88._1_3_,*(int *)(*param_2 + 0x3f8) != 0);
    local_7c = 0;
    local_84 = 0;
    local_4f = '\0';
    local_60[0] = 0;
    local_60[1] = 0;
    local_70 = 0;
    uStack_68 = 0;
    (**(code **)(*plVar4 + 0x328))(plVar4,&local_140,&local_90);
    if (local_4f == '\x01') {
      local_4f = '\0';
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
  }
  if ((char)param_2[0x13] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
  }
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    FUN_1448859f0(param_2 + 4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168,param_2[6]);
}



// FUNCTION 14179b1f4 FUN_14179b1f4 body=372 status=ok
// SIG undefined FUN_14179b1f4(void)

void FUN_14179b1f4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0x3f800000;
  local_a8 = 0x3dcccccd;
  local_a4 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0x3dcccccd;
  local_84 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = DAT_14c8464e0;
  uStack_50 = DAT_14c8464e8;
  local_48 = DAT_14c8464f0;
  local_3c = 0;
  local_c8 = 1;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *(undefined8 *)(param_3 + 4);
  if (param_2 == 0) {
    local_40 = 0;
    iVar1 = 0;
  }
  else {
    local_40 = *(uint *)(param_2 + 0xc);
    if ((int)local_40 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((local_40 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    iVar1 = *(int *)(lVar2 + 0x10);
    if (*(int *)(lVar2 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar4 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar4) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 0x10);
      bVar4 = iVar1 == 0;
      if (bVar4) {
        *(int *)(lVar2 + 0x10) = iVar3;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar4) {
        iVar1 = iVar3;
      }
    }
  }
  local_3c = iVar1;
  FUN_140559ec4(param_1);
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14179b36a FUN_14179b36a body=164 status=ok
// SIG undefined FUN_14179b36a(void)

void FUN_14179b36a(void)

{
  undefined1 auStack_d8 [40];
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0x3f800000;
  local_90 = 0x3dcccccd;
  local_8c = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0x3dcccccd;
  local_6c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = (undefined4)DAT_14c8464e0;
  uStack_3c = DAT_14c8464e0._4_4_;
  uStack_38 = (undefined4)DAT_14c8464e8;
  uStack_34 = DAT_14c8464e8._4_4_;
  local_30 = DAT_14c8464f0;
  local_28 = 0;
  local_b0 = 2;
  FUN_140559ec4();
  if ((local_8 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179b410 FUN_14179b410 body=40 status=ok
// SIG undefined FUN_14179b410(void)

undefined8 FUN_14179b410(undefined8 param_1,int param_2)

{
  FUN_14064ee12();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179b438 FUN_14179b438 body=62 status=ok
// SIG undefined FUN_14179b438(void)

undefined8 * FUN_14179b438(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179b476 FUN_14179b476 body=82 status=ok
// SIG undefined FUN_14179b476(void)

void FUN_14179b476(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a435f90;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0xffffffff7fffffff;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0xffffffff7fffffff;
  *(undefined4 *)(param_2 + 0x1f) = 0x1000000;
  return;
}



// FUNCTION 14179b4c8 FUN_14179b4c8 body=345 status=ok
// SIG undefined FUN_14179b4c8(void)

undefined8 FUN_14179b4c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
    do {
      *(undefined2 *)(param_2 + -0xb0) = *(undefined2 *)(param_3 + -0xb0);
      *(undefined8 *)(param_2 + -0xb8) = *(undefined8 *)(param_3 + -0xb8);
      *(undefined8 *)(param_2 + -0x88) = *(undefined8 *)(param_3 + -0x88);
      uVar1 = *(undefined4 *)(param_3 + -0xa8);
      uVar2 = *(undefined4 *)(param_3 + -0xa4);
      uVar3 = *(undefined4 *)(param_3 + -0xa0);
      uVar4 = *(undefined4 *)(param_3 + -0x9c);
      uVar5 = *(undefined4 *)(param_3 + -0x94);
      uVar6 = *(undefined4 *)(param_3 + -0x90);
      uVar7 = *(undefined4 *)(param_3 + -0x8c);
      *(undefined4 *)(param_2 + -0x98) = *(undefined4 *)(param_3 + -0x98);
      *(undefined4 *)(param_2 + -0x94) = uVar5;
      *(undefined4 *)(param_2 + -0x90) = uVar6;
      *(undefined4 *)(param_2 + -0x8c) = uVar7;
      *(undefined4 *)(param_2 + -0xa8) = uVar1;
      *(undefined4 *)(param_2 + -0xa4) = uVar2;
      *(undefined4 *)(param_2 + -0xa0) = uVar3;
      *(undefined4 *)(param_2 + -0x9c) = uVar4;
      *(undefined2 *)(param_2 + -0x78) = *(undefined2 *)(param_3 + -0x78);
      *(undefined8 *)(param_2 + -0x80) = *(undefined8 *)(param_3 + -0x80);
      lVar16 = *(longlong *)(param_3 + -0x70);
      if (DAT_14c950c29 == 1) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar16 = *(longlong *)(param_3 + -0x70);
        }
      }
      bVar15 = DAT_14c950c29;
      *(longlong *)(param_2 + -0x70) = lVar16;
      lVar16 = *(longlong *)(param_3 + -0x68);
      if ((bVar15 & 1) != 0) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar16 = *(longlong *)(param_3 + -0x68);
        }
      }
      *(longlong *)(param_2 + -0x68) = lVar16;
      uVar12 = *(undefined8 *)(param_3 + -0x58);
      uVar13 = *(undefined8 *)(param_3 + -0x50);
      uVar14 = *(undefined8 *)(param_3 + -0x48);
      *(undefined8 *)(param_2 + -0x60) = *(undefined8 *)(param_3 + -0x60);
      *(undefined8 *)(param_2 + -0x58) = uVar12;
      *(undefined8 *)(param_2 + -0x50) = uVar13;
      *(undefined8 *)(param_2 + -0x48) = uVar14;
      *(undefined4 *)(param_2 + -0x40) = *(undefined4 *)(param_3 + -0x40);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      uVar4 = *(undefined4 *)(param_3 + -0x28);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      uVar8 = *(undefined4 *)(param_3 + -0x18);
      uVar9 = *(undefined4 *)(param_3 + -0x14);
      uVar10 = *(undefined4 *)(param_3 + -0x10);
      uVar11 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      *(undefined4 *)(param_2 + -0x28) = uVar4;
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x18) = uVar8;
      *(undefined4 *)(param_2 + -0x14) = uVar9;
      *(undefined4 *)(param_2 + -0x10) = uVar10;
      *(undefined4 *)(param_2 + -0xc) = uVar11;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140d2c6ac(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
      uVar12 = *(undefined8 *)(param_3 + 0x18);
      uVar13 = *(undefined8 *)(param_3 + 0x20);
      uVar14 = *(undefined8 *)(param_3 + 0x30);
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
      *(undefined8 *)(param_2 + 0x30) = uVar14;
      *(undefined8 *)(param_2 + 0x18) = uVar12;
      *(undefined8 *)(param_2 + 0x20) = uVar13;
      param_3 = param_3 + 0x100;
      param_2 = param_2 + 0x100;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14179b622 FUN_14179b622 body=94 status=ok
// SIG undefined FUN_14179b622(void)

void FUN_14179b622(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a442710;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1b] = 0xc3c23d70a;
  param_2[0x1c] = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 14179b680 FUN_14179b680 body=478 status=ok
// SIG undefined FUN_14179b680(void)

undefined8 FUN_14179b680(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte bVar20;
  longlong lVar21;
  longlong lVar22;
  
  if (param_4 != 0) {
    lVar22 = 0;
    do {
      *(undefined2 *)(param_2 + 0x10 + lVar22) = *(undefined2 *)(param_3 + 0x10 + lVar22);
      *(undefined8 *)(param_2 + 8 + lVar22) = *(undefined8 *)(param_3 + 8 + lVar22);
      *(undefined8 *)(param_2 + 0x38 + lVar22) = *(undefined8 *)(param_3 + 0x38 + lVar22);
      puVar2 = (undefined4 *)(param_3 + 0x18 + lVar22);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x28 + lVar22);
      uVar10 = puVar2[1];
      uVar11 = puVar2[2];
      uVar12 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + 0x28 + lVar22);
      *puVar3 = *puVar2;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar22);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      *(undefined2 *)(param_2 + 0x48 + lVar22) = *(undefined2 *)(param_3 + 0x48 + lVar22);
      *(undefined8 *)(param_2 + 0x40 + lVar22) = *(undefined8 *)(param_3 + 0x40 + lVar22);
      lVar21 = *(longlong *)(param_3 + 0x50 + lVar22);
      if (DAT_14c950c29 == 1) {
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar21 = *(longlong *)(param_3 + 0x50 + lVar22);
        }
      }
      bVar20 = DAT_14c950c29;
      *(longlong *)(param_2 + 0x50 + lVar22) = lVar21;
      lVar21 = *(longlong *)(param_3 + 0x58 + lVar22);
      if ((bVar20 & 1) != 0) {
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar21 = *(longlong *)(param_3 + 0x58 + lVar22);
        }
      }
      lVar1 = param_2 + lVar22;
      *(longlong *)(param_2 + 0x58 + lVar22) = lVar21;
      lVar21 = param_3 + lVar22;
      puVar4 = (undefined8 *)(param_3 + 0x60 + lVar22);
      uVar17 = puVar4[1];
      puVar5 = (undefined8 *)(param_3 + 0x70 + lVar22);
      uVar18 = *puVar5;
      uVar19 = puVar5[1];
      puVar5 = (undefined8 *)(param_2 + 0x60 + lVar22);
      *puVar5 = *puVar4;
      puVar5[1] = uVar17;
      puVar4 = (undefined8 *)(param_2 + 0x70 + lVar22);
      *puVar4 = uVar18;
      puVar4[1] = uVar19;
      *(undefined4 *)(param_2 + 0x80 + lVar22) = *(undefined4 *)(param_3 + 0x80 + lVar22);
      puVar2 = (undefined4 *)(param_3 + 0x88 + lVar22);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x98 + lVar22);
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0xa8 + lVar22);
      uVar13 = *puVar3;
      uVar14 = puVar3[1];
      uVar15 = puVar3[2];
      uVar16 = puVar3[3];
      puVar3 = (undefined4 *)(param_2 + 0x88 + lVar22);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      puVar2 = (undefined4 *)(param_2 + 0x98 + lVar22);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      puVar2[2] = uVar11;
      puVar2[3] = uVar12;
      puVar2 = (undefined4 *)(param_2 + 0xa8 + lVar22);
      *puVar2 = uVar13;
      puVar2[1] = uVar14;
      puVar2[2] = uVar15;
      puVar2[3] = uVar16;
      *(undefined8 *)(param_2 + 0xb8 + lVar22) = *(undefined8 *)(param_3 + 0xb8 + lVar22);
      FUN_140d2c6ac(lVar1 + 0xc0,lVar21 + 0xc0);
      *(undefined1 *)(param_2 + 0xd0 + lVar22) = *(undefined1 *)(param_3 + 0xd0 + lVar22);
      puVar2 = (undefined4 *)(param_3 + 0xd8 + lVar22);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + 0xd8 + lVar22);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_140d2c702(lVar1 + 0xe8,lVar21 + 0xe8);
      FUN_140d2c758(lVar1 + 0xf8,lVar21 + 0xf8);
      *(undefined8 *)(param_2 + 0x108 + lVar22) = *(undefined8 *)(param_3 + 0x108 + lVar22);
      lVar22 = lVar22 + 0x110;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14179b85e FUN_14179b85e body=109 status=ok
// SIG undefined FUN_14179b85e(void)

void FUN_14179b85e(undefined8 *param_1)

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
    return;
  }
  return;
}



// FUNCTION 14179b8cc FUN_14179b8cc body=75 status=ok
// SIG undefined FUN_14179b8cc(void)

void FUN_14179b8cc(longlong *param_1)

{
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14179b918 FUN_14179b918 body=230 status=ok
// SIG undefined FUN_14179b918(void)

void FUN_14179b918(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a43c110;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0x7fffffff;
  *(undefined4 *)((longlong)param_2 + 0xe4) = 0xffffffff;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0x4049000000000000;
  param_2[0x1f] = 0x4010000000000000;
  param_2[0x20] = 0x4070000000000000;
  param_2[0x23] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x21] = DAT_14c8464e0;
  param_2[0x22] = uVar1;
  param_2[0x26] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x24] = DAT_14c8464e0;
  param_2[0x25] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[0x27] = DAT_14c8464e0;
  param_2[0x28] = uVar1;
  param_2[0x29] = DAT_14c8464f0;
  *(undefined4 *)(param_2 + 0x2d) = 0;
  *(undefined4 *)(param_2 + 0x2e) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x174) = 0xe;
  return;
}



// FUNCTION 14179b9fe FUN_14179b9fe body=342 status=ok
// SIG undefined FUN_14179b9fe(void)

undefined8 FUN_14179b9fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
    do {
      *(undefined2 *)(param_2 + -0xb0) = *(undefined2 *)(param_3 + -0xb0);
      *(undefined8 *)(param_2 + -0xb8) = *(undefined8 *)(param_3 + -0xb8);
      *(undefined8 *)(param_2 + -0x88) = *(undefined8 *)(param_3 + -0x88);
      uVar1 = *(undefined4 *)(param_3 + -0xa8);
      uVar2 = *(undefined4 *)(param_3 + -0xa4);
      uVar3 = *(undefined4 *)(param_3 + -0xa0);
      uVar4 = *(undefined4 *)(param_3 + -0x9c);
      uVar5 = *(undefined4 *)(param_3 + -0x94);
      uVar6 = *(undefined4 *)(param_3 + -0x90);
      uVar7 = *(undefined4 *)(param_3 + -0x8c);
      *(undefined4 *)(param_2 + -0x98) = *(undefined4 *)(param_3 + -0x98);
      *(undefined4 *)(param_2 + -0x94) = uVar5;
      *(undefined4 *)(param_2 + -0x90) = uVar6;
      *(undefined4 *)(param_2 + -0x8c) = uVar7;
      *(undefined4 *)(param_2 + -0xa8) = uVar1;
      *(undefined4 *)(param_2 + -0xa4) = uVar2;
      *(undefined4 *)(param_2 + -0xa0) = uVar3;
      *(undefined4 *)(param_2 + -0x9c) = uVar4;
      *(undefined2 *)(param_2 + -0x78) = *(undefined2 *)(param_3 + -0x78);
      *(undefined8 *)(param_2 + -0x80) = *(undefined8 *)(param_3 + -0x80);
      lVar16 = *(longlong *)(param_3 + -0x70);
      if (DAT_14c950c29 == 1) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar16 = *(longlong *)(param_3 + -0x70);
        }
      }
      bVar15 = DAT_14c950c29;
      *(longlong *)(param_2 + -0x70) = lVar16;
      lVar16 = *(longlong *)(param_3 + -0x68);
      if ((bVar15 & 1) != 0) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar16 = *(longlong *)(param_3 + -0x68);
        }
      }
      *(longlong *)(param_2 + -0x68) = lVar16;
      uVar12 = *(undefined8 *)(param_3 + -0x58);
      uVar13 = *(undefined8 *)(param_3 + -0x50);
      uVar14 = *(undefined8 *)(param_3 + -0x48);
      *(undefined8 *)(param_2 + -0x60) = *(undefined8 *)(param_3 + -0x60);
      *(undefined8 *)(param_2 + -0x58) = uVar12;
      *(undefined8 *)(param_2 + -0x50) = uVar13;
      *(undefined8 *)(param_2 + -0x48) = uVar14;
      *(undefined4 *)(param_2 + -0x40) = *(undefined4 *)(param_3 + -0x40);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      uVar4 = *(undefined4 *)(param_3 + -0x28);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      uVar8 = *(undefined4 *)(param_3 + -0x18);
      uVar9 = *(undefined4 *)(param_3 + -0x14);
      uVar10 = *(undefined4 *)(param_3 + -0x10);
      uVar11 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      *(undefined4 *)(param_2 + -0x28) = uVar4;
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x18) = uVar8;
      *(undefined4 *)(param_2 + -0x14) = uVar9;
      *(undefined4 *)(param_2 + -0x10) = uVar10;
      *(undefined4 *)(param_2 + -0xc) = uVar11;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140d2c6ac(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      memcpy((void *)(param_2 + 0x18),(void *)(param_3 + 0x18),0x9d);
      param_3 = param_3 + 0x178;
      param_2 = param_2 + 0x178;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14179bb54 FUN_14179bb54 body=226 status=ok
// SIG undefined FUN_14179bb54(void)

void FUN_14179bb54(longlong param_1,int param_2)

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



// FUNCTION 14179bc36 FUN_14179bc36 body=96 status=ok
// SIG undefined FUN_14179bc36(void)

void FUN_14179bc36(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 14179bc96 FUN_14179bc96 body=307 status=ok
// SIG undefined FUN_14179bc96(void)

void FUN_14179bc96(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14179bd2a;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14179bd2a:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 14179bdca FUN_14179bdca body=29 status=ok
// SIG undefined FUN_14179bdca(void)

undefined8 FUN_14179bdca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179bde7 FUN_14179bde7 body=49 status=ok
// SIG undefined FUN_14179bde7(void)

longlong FUN_14179bde7(void)

{
  if (DAT_14caab888 == 0) {
    FUN_14086a14e(&DAT_14caab888,&PTR_FUN_14a445e90);
  }
  return DAT_14caab888;
}



// FUNCTION 14179be18 FUN_14179be18 body=49 status=ok
// SIG undefined FUN_14179be18(void)

longlong FUN_14179be18(void)

{
  if (DAT_14caab8f0 == 0) {
    FUN_14086a14e(&DAT_14caab8f0,&PTR_FUN_14a446b70);
  }
  return DAT_14caab8f0;
}



// FUNCTION 14179be49 FUN_14179be49 body=49 status=ok
// SIG undefined FUN_14179be49(void)

longlong FUN_14179be49(void)

{
  if (DAT_14caaba48 == 0) {
    FUN_14086a14e(&DAT_14caaba48,&PTR_FUN_14a4491f0);
  }
  return DAT_14caaba48;
}



// FUNCTION 14179be7a FUN_14179be7a body=49 status=ok
// SIG undefined FUN_14179be7a(void)

longlong FUN_14179be7a(void)

{
  if (DAT_14caabac0 == 0) {
    FUN_14086a14e(&DAT_14caabac0,&PTR_FUN_14a44a280);
  }
  return DAT_14caabac0;
}



// FUNCTION 14179beac FUN_14179beac body=227 status=ok
// SIG undefined FUN_14179beac(void)

void FUN_14179beac(longlong *param_1)

{
  param_1[3] = (longlong)&DAT_14a176f00;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  param_1[3] = (longlong)&PTR_FUN_14a177080;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_14472eb64(param_1 + 4,0);
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14179bf90 FUN_14179bf90 body=29 status=ok
// SIG undefined FUN_14179bf90(void)

undefined8 FUN_14179bf90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179bfad FUN_14179bfad body=374 status=ok
// SIG undefined FUN_14179bfad(void)

undefined8 FUN_14179bfad(undefined8 param_1,uint param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_248 [32];
  double local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  double local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [128];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_248;
  fVar1 = (float)param_2;
  fVar2 = (float)param_3;
  local_1c0 = (double)(fVar2 / fVar2);
  local_1c8 = (double)(fVar1 / (0.0 - fVar1));
  local_200 = (double)(2.0 / (0.0 - fVar2));
  local_228 = (double)(2.0 / fVar1);
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0xbf747ae140000000;
  local_1d0 = 0;
  local_1b8 = 0x3fe0000000000000;
  local_1b0 = 0x3ff0000000000000;
  local_a8 = 0x3ff0000000000000;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0x3ff0000000000000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x3ff0000000000000;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0x3ff0000000000000;
  local_128 = 0x3ff0000000000000;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0x3ff0000000000000;
  FUN_1447fea8d(local_1a8);
  FUN_1447fea8d(param_1,local_1a8,&local_128);
  if ((local_20 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179c124 FUN_14179c124 body=212 status=ok
// SIG undefined FUN_14179c124(void)

undefined8 * FUN_14179c124(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar4 = 0xffffffff;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    uVar1 = (&DAT_14c9c0cec)[2 < param_1];
    if (0 < (int)uVar1) {
      puVar5 = (undefined8 *)(&DAT_14cafe438 + (ulonglong)(2 < param_1) * 0x540);
      uVar6 = 0;
      do {
        iVar2 = wcscmp((wchar_t *)*puVar5,L"SlateMaterialPSOCollector");
        if (iVar2 == 0) {
          uVar4 = (undefined4)uVar6;
          break;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 2;
      } while (uVar1 != uVar6);
    }
  }
  *(undefined4 *)(puVar3 + 1) = uVar4;
  *puVar3 = &PTR_FUN_14a451e00;
  *(int *)(puVar3 + 2) = param_1;
  return puVar3;
}



// FUNCTION 14179c1f8 FUN_14179c1f8 body=195 status=ok
// SIG undefined FUN_14179c1f8(void)

ulonglong FUN_14179c1f8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  void *_Src;
  ulonglong _Size;
  char cVar1;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  cVar1 = (**(code **)(*param_1 + 0x38))();
  _Size = uStack_40;
  _Src = local_48;
  if (cVar1 != '\0') {
    if ((longlong)(int)uStack_40 == uStack_40) {
      *(int *)(param_4 + 1) = (int)uStack_40;
      uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
      if (uStack_40 == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_4 + 0xc) = 0;
        uVar2 = CONCAT71(uVar3,1);
      }
      else {
        FUN_1447a127e(param_4,uStack_40 & 0xffffffff);
        uVar2 = CONCAT71(uVar3,1);
        if (_Size != 0) {
          memcpy((void *)*param_4,_Src,_Size);
        }
      }
      goto LAB_14179c27a;
    }
  }
  uVar2 = 0;
LAB_14179c27a:
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179c2bc FUN_14179c2bc body=186 status=ok
// SIG undefined FUN_14179c2bc(void)

longlong FUN_14179c2bc(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar8 = 0xd8;
  do {
    lVar4 = *(longlong *)(param_1 + 8 + lVar8);
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
    lVar8 = lVar8 + -8;
  } while (lVar8 != 0xb0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179c376 FUN_14179c376 body=29 status=ok
// SIG undefined FUN_14179c376(void)

undefined8 FUN_14179c376(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179c394 FUN_14179c394 body=29 status=ok
// SIG undefined FUN_14179c394(void)

undefined8 FUN_14179c394(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179c3b2 FUN_14179c3b2 body=291 status=ok
// SIG undefined FUN_14179c3b2(void)

ulonglong FUN_14179c3b2(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  uVar1 = FUN_14493c560();
  if (uVar1 == 0) {
    uVar2 = 0;
    uVar7 = 0;
    lVar6 = 0;
  }
  else {
    uVar7 = (ulonglong)(uVar1 >> 0xe);
    uVar2 = uVar1 & 0x3fff;
    lVar6 = (ulonglong)(uVar2 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
  }
  *(longlong *)(lVar6 + 8) = lVar4 + 0x18;
  do {
    uVar5 = DAT_14ca96680;
    uVar3 = (DAT_14ca96680 & 0xfffffffffc000000) + 0x4000000;
    if (uVar3 >> 0x1a < DAT_14ca96680 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar2 * 0x18);
    }
    *(uint *)(lVar4 + 0x10) = (uint)uVar5 & 0x3ffffff;
    LOCK();
    bVar8 = uVar5 != DAT_14ca96680;
    uVar3 = uVar3 | uVar1;
    if (bVar8) {
      uVar5 = DAT_14ca96680;
      uVar3 = DAT_14ca96680;
    }
    DAT_14ca96680 = uVar3;
    UNLOCK();
  } while (bVar8);
  return uVar5;
}



// FUNCTION 14179c4d6 FUN_14179c4d6 body=29 status=ok
// SIG undefined FUN_14179c4d6(void)

undefined8 FUN_14179c4d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179c4f4 FUN_14179c4f4 body=486 status=ok
// SIG undefined FUN_14179c4f4(void)

void FUN_14179c4f4(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
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



// FUNCTION 14179c6dc FUN_14179c6dc body=29 status=ok
// SIG undefined FUN_14179c6dc(void)

undefined8 FUN_14179c6dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179c6fa FUN_14179c6fa body=48 status=ok
// SIG undefined FUN_14179c6fa(void)

void FUN_14179c6fa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14179c72a FUN_14179c72a body=49 status=ok
// SIG undefined FUN_14179c72a(void)

longlong FUN_14179c72a(void)

{
  if (DAT_14cab19b8 == 0) {
    FUN_14073dd9a(&DAT_14cab19b8,&PTR_LAB_14a456490);
  }
  return DAT_14cab19b8;
}



// FUNCTION 14179c75b FUN_14179c75b body=49 status=ok
// SIG undefined FUN_14179c75b(void)

longlong FUN_14179c75b(void)

{
  if (DAT_14cab1ff8 == 0) {
    FUN_14086a14e(&DAT_14cab1ff8,&PTR_FUN_14a460300);
  }
  return DAT_14cab1ff8;
}



// FUNCTION 14179c78c FUN_14179c78c body=49 status=ok
// SIG undefined FUN_14179c78c(void)

longlong FUN_14179c78c(void)

{
  if (DAT_14cab2040 == 0) {
    FUN_14086a14e(&DAT_14cab2040,&PTR_FUN_14a460ab8);
  }
  return DAT_14cab2040;
}



// FUNCTION 14179c7be FUN_14179c7be body=179 status=ok
// SIG undefined FUN_14179c7be(void)

undefined8 FUN_14179c7be(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_3,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_3);
    }
  }
  else {
    *param_3 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_140242ff8(param_3 + 1,param_2);
  param_3 = param_3 + 2;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_3,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_3);
    }
  }
  else {
    *param_3 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  return 1;
}



// FUNCTION 14179c871 FUN_14179c871 body=49 status=ok
// SIG undefined FUN_14179c871(void)

longlong FUN_14179c871(void)

{
  if (DAT_14cab20a8 == 0) {
    FUN_1409ce572(&DAT_14cab20a8,&PTR_FUN_14a464fd0);
  }
  return DAT_14cab20a8;
}



// FUNCTION 14179c8a2 FUN_14179c8a2 body=49 status=ok
// SIG undefined FUN_14179c8a2(void)

longlong FUN_14179c8a2(void)

{
  if (DAT_14cab23a8 == 0) {
    FUN_14086a14e(&DAT_14cab23a8,&PTR_FUN_14a467e18);
  }
  return DAT_14cab23a8;
}



// FUNCTION 14179c8d9 FUN_14179c8d9 body=49 status=ok
// SIG undefined FUN_14179c8d9(void)

longlong FUN_14179c8d9(void)

{
  if (DAT_14cab2150 == 0) {
    FUN_14086a14e(&DAT_14cab2150,&PTR_FUN_14a465768);
  }
  return DAT_14cab2150;
}



// FUNCTION 14179c90a FUN_14179c90a body=276 status=ok
// SIG undefined FUN_14179c90a(void)

longlong *
FUN_14179c90a(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  lVar3 = FUN_1400a16d0(*param_5 + 0x38);
  if (lVar3 != 0) {
    local_38 = param_4;
    FUN_140f96e2c(lVar3,&local_30,param_3 + 8,param_3 + 0x18);
    if (((local_2c != 0) && (-1 < (int)local_30)) && ((int)local_30 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((local_30 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8));
      if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == local_2c)) &&
         (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar3 = *plVar4, lVar3 != 0)))) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar3);
        }
        *param_2 = lVar3;
      }
    }
  }
  plVar4 = (longlong *)param_5[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179ca21 FUN_14179ca21 body=49 status=ok
// SIG undefined FUN_14179ca21(void)

longlong FUN_14179ca21(void)

{
  if (DAT_14cab22f0 == 0) {
    FUN_14086a14e(&DAT_14cab22f0,&PTR_FUN_14a466e70);
  }
  return DAT_14cab22f0;
}



// FUNCTION 14179ca52 FUN_14179ca52 body=49 status=ok
// SIG undefined FUN_14179ca52(void)

longlong FUN_14179ca52(void)

{
  if (DAT_14cab22d8 == 0) {
    FUN_14086a14e(&DAT_14cab22d8,&PTR_FUN_14a466dc0);
  }
  return DAT_14cab22d8;
}



// FUNCTION 14179ca83 FUN_14179ca83 body=49 status=ok
// SIG undefined FUN_14179ca83(void)

longlong FUN_14179ca83(void)

{
  if (DAT_14cab23e8 == 0) {
    FUN_14086a14e(&DAT_14cab23e8,&PTR_FUN_14a468380);
  }
  return DAT_14cab23e8;
}



// FUNCTION 14179cab4 FUN_14179cab4 body=49 status=ok
// SIG undefined FUN_14179cab4(void)

longlong FUN_14179cab4(void)

{
  if (DAT_14cab2400 == 0) {
    FUN_14086a14e(&DAT_14cab2400,&PTR_FUN_14a468730);
  }
  return DAT_14cab2400;
}



// FUNCTION 14179cae6 FUN_14179cae6 body=154 status=ok
// SIG undefined FUN_14179cae6(void)

undefined8 * FUN_14179cae6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 4);
    _Src = (void *)param_2[3];
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x24) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 3,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
      }
    }
  }
  lVar5 = param_2[5];
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_2[5];
    }
  }
  param_1[5] = lVar5;
  return param_1;
}



// FUNCTION 14179cb80 FUN_14179cb80 body=269 status=ok
// SIG undefined FUN_14179cb80(void)

void FUN_14179cb80(longlong param_1,int param_2)

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



// FUNCTION 14179cc94 thunk_FUN_1406adae8 body=5 status=ok
// SIG undefined thunk_FUN_1406adae8(void)

void thunk_FUN_1406adae8(longlong *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_3 != 0xffffffff && param_2 != -1) {
    lVar5 = *param_1;
    lVar7 = (longlong)param_2 * 0x78;
    uVar2 = *(uint *)(lVar5 + 8 + lVar7);
    uVar6 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      lVar4 = *(longlong *)(lVar5 + lVar7);
      while( true ) {
        uVar6 = uVar6 - 1;
        if (*(uint *)(lVar4 + 0x18) == param_3 >> 9) break;
        if ((param_3 >> 9 < *(uint *)(lVar4 + 0x18)) || (lVar4 = lVar4 + 0x20, uVar6 == 0))
        goto LAB_1406adb43;
      }
      cVar3 = FUN_1406add7a(lVar4,param_3);
      if (cVar3 != '\0') {
        return;
      }
      lVar5 = *param_1;
    }
LAB_1406adb43:
    FUN_1406adb7c(lVar5 + lVar7,param_3);
    piVar1 = (int *)(*param_1 + 0x60 + (longlong)(int)param_3 * 0x78);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 14179cc99 FUN_14179cc99 body=49 status=ok
// SIG undefined FUN_14179cc99(void)

longlong FUN_14179cc99(void)

{
  if (DAT_14cab2778 == 0) {
    FUN_14073dd9a(&DAT_14cab2778,&PTR_FUN_14a471618);
  }
  return DAT_14cab2778;
}



// FUNCTION 14179ccca FUN_14179ccca body=200 status=ok
// SIG undefined FUN_14179ccca(void)

void FUN_14179ccca(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *(undefined1 *)((longlong)puVar2 + 0x32) = 4;
  *puVar2 = &PTR_FUN_14a4704d0;
  lVar3 = FUN_14009d2a0();
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(lVar3 + 100);
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    uVar1 = *(undefined2 *)(lVar3 + 0x4a);
    local_28 = puVar2[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_28,uVar1);
    uVar1 = *(undefined2 *)(lVar3 + 0x140);
    local_30 = puVar2[2];
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_30,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179cd93 FUN_14179cd93 body=49 status=ok
// SIG undefined FUN_14179cd93(void)

longlong FUN_14179cd93(void)

{
  if (DAT_14cab2718 == 0) {
    FUN_14073dd9a(&DAT_14cab2718,&PTR_LAB_14a470f58);
  }
  return DAT_14cab2718;
}



// FUNCTION 14179cdc4 FUN_14179cdc4 body=1419 status=ok
// SIG undefined FUN_14179cdc4(void)

undefined2 * FUN_14179cdc4(longlong param_1,undefined2 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  cVar2 = *(char *)(param_3 + 1);
  bVar6 = *(byte *)((longlong)param_3 + 10);
  if (*(int *)(param_1 + 0x14c) == 0) {
    uVar13 = *(uint *)(param_1 + 0x120);
    *(uint *)(param_1 + 0x120) = uVar13 + 1;
    if (*(uint *)(param_1 + 0x124) == uVar13) {
      FUN_1446efaca(param_1 + 0x118,uVar13);
    }
    iVar8 = *(int *)(param_1 + 0x140);
    if (iVar8 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar3 = iVar8 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    lVar9 = param_1 + 0x128;
    iVar10 = iVar8 + 1;
    iVar11 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar11 = iVar8;
    }
    if (iVar11 >> 5 == iVar3) {
      *(int *)(param_1 + 0x140) = iVar10;
    }
    else {
      if (*(int *)(param_1 + 0x144) <= iVar8) {
        if (iVar8 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar3 = iVar8;
        }
        else {
          uVar14 = iVar8 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x144) + 0x1fU < 0xa0) {
            uVar12 = 4;
            if (4 < uVar14) {
              uVar12 = uVar14;
            }
          }
          else {
            uVar12 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar12 << 2,0);
          iVar3 = (int)(uVar5 >> 2);
          iVar10 = -0x20;
          if ((int)uVar14 <= iVar3) {
            iVar10 = iVar3 << 5;
          }
          iVar3 = *(int *)(param_1 + 0x140);
        }
        *(int *)(param_1 + 0x144) = iVar10;
        FUN_1446efbd8(lVar9,iVar3);
        iVar10 = *(int *)(param_1 + 0x140) + 1;
      }
      iVar3 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar3 = iVar10;
      }
      *(int *)(param_1 + 0x140) = iVar10;
      if (iVar10 % 0x20 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x138);
        if (*(longlong *)(param_1 + 0x138) == 0) {
          lVar4 = lVar9;
        }
        bVar7 = -(char)(iVar10 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar3 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar4 = (longlong)(int)uVar13;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x138);
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)(lVar9 + (longlong)(iVar11 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    uVar13 = *(uint *)(param_1 + 0x148);
    lVar4 = (longlong)(int)uVar13;
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x118) + 4 + lVar4 * 0x10);
    *(int *)(param_1 + 0x148) = iVar8;
    iVar3 = *(int *)(param_1 + 0x14c) + -1;
    *(int *)(param_1 + 0x14c) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  uVar14 = 1 << ((byte)uVar13 & 0x1f);
  lVar9 = param_1 + 0x128;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x138);
  }
  uVar12 = uVar13 + 0x1f;
  if (-1 < (int)uVar13) {
    uVar12 = uVar13;
  }
  puVar1 = (uint *)(lVar9 + (longlong)((int)uVar12 >> 5) * 4);
  *puVar1 = *puVar1 | uVar14;
  lVar4 = lVar4 * 0x10;
  lVar9 = *(longlong *)(param_1 + 0x118);
  *(undefined8 *)(lVar9 + lVar4) = *param_3;
  *param_3 = 0;
  *(undefined1 *)(lVar9 + 10 + lVar4) = *(undefined1 *)((longlong)param_3 + 10);
  *(undefined2 *)(lVar9 + 8 + lVar4) = *(undefined2 *)(param_3 + 1);
  if ((bVar6 & 8) != 0) {
    lVar4 = param_1 + 0x1b0;
    uVar12 = uVar13 & 0xffff;
    iVar8 = uVar12 + 1;
    iVar3 = *(int *)(param_1 + 0x1d0);
    iVar10 = iVar8 - iVar3;
    if (iVar10 != 0 && iVar3 <= iVar8) {
      if (iVar3 == 0) {
LAB_14179d06a:
        if (*(int *)(param_1 + 0x1d4) <= (int)uVar12) {
          *(undefined4 *)(param_1 + 0x1d4) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar8 = *(int *)(param_1 + 0x1d0) + iVar10;
        }
        iVar11 = iVar8 + 0x1f;
        if (-1 < iVar8) {
          iVar11 = iVar8;
        }
        *(int *)(param_1 + 0x1d0) = iVar8;
        if (iVar8 % 0x20 != 0) {
          bVar7 = -(char)(iVar8 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar11 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar11 >> 5) * 4) << (bVar7 & 0x1f)) >>
               (bVar7 & 0x1f);
        }
      }
      else {
        iVar11 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar11 = iVar3 + -1;
        }
        if (iVar11 >> 5 != (uVar13 >> 5 & 0x7ff)) goto LAB_14179d06a;
        *(int *)(param_1 + 0x1d0) = iVar8;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar10,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar12 >> 5) * 4);
    *puVar1 = *puVar1 | uVar14;
  }
  if ((bVar6 & 0x10) != 0) {
    lVar4 = param_1 + 0x200;
    uVar12 = uVar13 & 0xffff;
    iVar8 = uVar12 + 1;
    iVar3 = *(int *)(param_1 + 0x220);
    iVar10 = iVar8 - iVar3;
    if (iVar10 != 0 && iVar3 <= iVar8) {
      if (iVar3 == 0) {
LAB_14179d11e:
        if (*(int *)(param_1 + 0x224) <= (int)uVar12) {
          *(undefined4 *)(param_1 + 0x224) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar8 = *(int *)(param_1 + 0x220) + iVar10;
        }
        iVar11 = iVar8 + 0x1f;
        if (-1 < iVar8) {
          iVar11 = iVar8;
        }
        *(int *)(param_1 + 0x220) = iVar8;
        if (iVar8 % 0x20 != 0) {
          bVar7 = -(char)(iVar8 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar11 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar11 >> 5) * 4) << (bVar7 & 0x1f)) >>
               (bVar7 & 0x1f);
        }
      }
      else {
        iVar11 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar11 = iVar3 + -1;
        }
        if (iVar11 >> 5 != (uVar13 >> 5 & 0x7ff)) goto LAB_14179d11e;
        *(int *)(param_1 + 0x220) = iVar8;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar10,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar12 >> 5) * 4);
    *puVar1 = *puVar1 | uVar14;
  }
  if ((bVar6 & 0x20) != 0) {
    FUN_140dba9e6(param_1 + 0x1d8,uVar13);
    FUN_140dba9e6(param_1 + 0x200,uVar13);
  }
  if (cVar2 == '\0') goto LAB_14179cf97;
  lVar4 = param_1 + 0x188;
  uVar12 = uVar13 & 0xffff;
  iVar8 = uVar12 + 1;
  iVar3 = *(int *)(param_1 + 0x1a8);
  iVar10 = iVar8 - iVar3;
  if (iVar10 != 0 && iVar3 <= iVar8) {
    if (iVar3 == 0) {
LAB_14179cf43:
      if (*(int *)(param_1 + 0x1ac) <= (int)uVar12) {
        *(undefined4 *)(param_1 + 0x1ac) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar8 = *(int *)(param_1 + 0x1a8) + iVar10;
      }
      iVar11 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar11 = iVar8;
      }
      *(int *)(param_1 + 0x1a8) = iVar8;
      if (iVar8 % 0x20 != 0) {
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar11 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    else {
      iVar11 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar11 = iVar3 + -1;
      }
      if (iVar11 >> 5 != (uVar13 >> 5 & 0x7ff)) goto LAB_14179cf43;
      *(int *)(param_1 + 0x1a8) = iVar8;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar10,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar12 >> 5) * 4);
  *puVar1 = *puVar1 | uVar14;
LAB_14179cf97:
  *param_2 = (short)uVar13;
  return param_2;
}



// FUNCTION 14179d350 FUN_14179d350 body=179 status=ok
// SIG undefined FUN_14179d350(void)

void FUN_14179d350(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar4 = FUN_14009d2a0();
  uVar2 = *(ushort *)(lVar4 + 0x4a);
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 == 0 || iVar6 < iVar3) goto LAB_14179d3cc;
  if (iVar3 == 0) {
LAB_14179d391:
    if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(param_2 + 0x24) = 0x100;
      FUN_14497ddce(param_2,iVar3);
      iVar6 = *(int *)(param_2 + 0x20) + iVar8;
    }
    iVar7 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_2 + 0x20) = iVar6;
    if (iVar6 % 0x20 != 0) {
      bVar5 = -(char)(iVar6 % 0x20);
      *(uint *)(param_2 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)(param_2 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
           (bVar5 & 0x1f);
    }
  }
  else {
    iVar7 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar7 = iVar3 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14179d391;
    *(int *)(param_2 + 0x20) = iVar6;
  }
  FUN_1447c45ca(param_2,iVar3,iVar8,0);
LAB_14179d3cc:
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 14179d404 FUN_14179d404 body=174 status=ok
// SIG undefined FUN_14179d404(void)

void FUN_14179d404(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *(ushort *)(param_1 + 8);
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_3 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 == 0 || iVar5 < iVar3) goto LAB_14179d47b;
  if (iVar3 == 0) {
LAB_14179d440:
    if (*(int *)(param_3 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(param_3 + 0x24) = 0x100;
      FUN_14497ddce(param_3,iVar3);
      iVar5 = *(int *)(param_3 + 0x20) + iVar7;
    }
    iVar6 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    *(int *)(param_3 + 0x20) = iVar5;
    if (iVar5 % 0x20 != 0) {
      bVar4 = -(char)(iVar5 % 0x20);
      *(uint *)(param_3 + (longlong)(iVar6 >> 5) * 4) =
           (uint)(*(int *)(param_3 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
    }
  }
  else {
    iVar6 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar6 = iVar3 + -1;
    }
    if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14179d440;
    *(int *)(param_3 + 0x20) = iVar5;
  }
  FUN_1447c45ca(param_3,iVar3,iVar7,0);
LAB_14179d47b:
  puVar1 = (uint *)(param_3 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 14179d4b8 FUN_14179d4b8 body=1006 status=ok
// SIG undefined FUN_14179d4b8(void)

/* WARNING: Removing unreachable block (ram,0x00014179d87f) */
/* WARNING: Removing unreachable block (ram,0x00014179d889) */

void FUN_14179d4b8(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  int local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  undefined1 local_78;
  void *local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 local_5b;
  undefined5 uStack_58;
  undefined4 local_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((param_5 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x89) = 1;
  }
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0;
  FUN_14009d848(&local_e0);
  local_b0 = *(undefined8 *)(param_2 + 8);
  local_d0 = *param_2;
  uStack_cc = param_2[1];
  uStack_c8 = param_2[2];
  uStack_c4 = param_2[3];
  local_c0 = param_2[4];
  uStack_bc = param_2[5];
  uStack_b8 = param_2[6];
  uStack_b4 = param_2[7];
  local_a8 = *(undefined8 *)(param_2 + 10);
  local_a0 = param_2[0xc];
  local_98 = 0;
  iVar2 = param_2[0x10];
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  local_90 = CONCAT44(local_90._4_4_,iVar2);
  if (iVar2 == 0) {
    local_90 = 0;
  }
  else {
    FUN_14753cf4a(&local_98,iVar2,0);
    FUN_14753cfbd(local_98,uVar3,iVar2);
  }
  local_88 = (void *)0x0;
  uVar6 = param_2[0x14];
  pvVar4 = *(void **)(param_2 + 0x12);
  local_80 = CONCAT44(local_80._4_4_,uVar6);
  if ((longlong)(int)uVar6 == 0) {
    local_80 = (ulonglong)uVar6;
  }
  else {
    FUN_1456c5740(&local_88,uVar6,0);
    memcpy(local_88,pvVar4,(longlong)(int)uVar6 << 3);
  }
  local_78 = *(undefined1 *)(param_2 + 0x16);
  local_70 = (void *)0x0;
  uVar6 = param_2[0x1a];
  pvVar4 = *(void **)(param_2 + 0x18);
  local_68 = CONCAT44(local_68._4_4_,uVar6);
  if ((longlong)(int)uVar6 == 0) {
    local_68 = (ulonglong)uVar6;
  }
  else {
    FUN_1447bda9e(&local_70,uVar6,0);
    memcpy(local_70,pvVar4,(longlong)(int)uVar6 << 2);
  }
  uStack_58 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x75) >> 0x18);
  uStack_60 = (undefined5)*(undefined8 *)(param_2 + 0x1c);
  local_5b = (undefined3)((ulonglong)*(undefined8 *)(param_2 + 0x1c) >> 0x28);
  uStack_4c = param_5;
  iVar2 = *(int *)(param_1 + 0x20);
  uVar6 = iVar2 + 1;
  *(uint *)(param_1 + 0x20) = uVar6;
  local_50 = param_3;
  if (*(uint *)(param_1 + 0x24) < uVar6) {
    FUN_140411b96((longlong *)(param_1 + 0x18));
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  lVar7 = (longlong)iVar2 * 0x98;
  *(undefined8 *)(lVar5 + lVar7) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar7) = 0;
  *(undefined8 **)(lVar5 + lVar7) = local_e0;
  *(int *)(lVar5 + 8 + lVar7) = local_d8;
  *(undefined8 *)(lVar5 + 0x30 + lVar7) = local_b0;
  puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar7);
  *puVar1 = local_c0;
  puVar1[1] = uStack_bc;
  puVar1[2] = uStack_b8;
  puVar1[3] = uStack_b4;
  puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar7);
  *puVar1 = local_d0;
  puVar1[1] = uStack_cc;
  puVar1[2] = uStack_c8;
  puVar1[3] = uStack_c4;
  *(undefined8 *)(lVar5 + 0x38 + lVar7) = local_a8;
  *(undefined4 *)(lVar5 + 0x40 + lVar7) = local_a0;
  *(undefined8 *)(lVar5 + 0x48 + lVar7) = 0;
  *(longlong *)(lVar5 + 0x48 + lVar7) = local_98;
  *(undefined4 *)(lVar5 + 0x50 + lVar7) = (undefined4)local_90;
  *(undefined4 *)(lVar5 + 0x54 + lVar7) = local_90._4_4_;
  *(undefined8 *)(lVar5 + 0x58 + lVar7) = 0;
  *(void **)(lVar5 + 0x58 + lVar7) = local_88;
  *(undefined4 *)(lVar5 + 0x60 + lVar7) = (undefined4)local_80;
  *(undefined4 *)(lVar5 + 100 + lVar7) = local_80._4_4_;
  *(undefined1 *)(lVar5 + 0x68 + lVar7) = local_78;
  *(undefined8 *)(lVar5 + 0x70 + lVar7) = 0;
  *(void **)(lVar5 + 0x70 + lVar7) = local_70;
  *(undefined4 *)(lVar5 + 0x78 + lVar7) = (undefined4)local_68;
  *(undefined4 *)(lVar5 + 0x7c + lVar7) = local_68._4_4_;
  *(ulonglong *)(lVar5 + 0x85 + lVar7) = CONCAT53(uStack_58,local_5b);
  *(ulonglong *)(lVar5 + 0x80 + lVar7) = CONCAT35(local_5b,uStack_60);
  *(ulonglong *)(lVar5 + 0x90 + lVar7) = CONCAT44(uStack_4c,local_50);
  local_68 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  local_88 = (void *)0x0;
  local_90 = 0;
  local_98 = 0;
  local_d8 = 0;
  local_e0 = (undefined8 *)0x0;
  FUN_1447bda9c(0,0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    if (local_e0 == (undefined8 *)0x0) goto LAB_14179d792;
    (**(code **)*local_e0)(local_e0,0);
    FUN_1446efa72(&local_e0,0,0,0x10);
    local_d8 = 0;
  }
  if (local_e0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14179d792:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179d8a8 FUN_14179d8a8 body=149 status=ok
// SIG undefined FUN_14179d8a8(void)

undefined4 FUN_14179d8a8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  uVar1 = FUN_140d64b1c(0,param_2,&local_28,0);
  if ((int)uStack_20 != 0) {
    if (local_28 == (undefined8 *)0x0) goto LAB_14179d8e5;
    (**(code **)*local_28)(local_28,0);
    FUN_1446efa72(&local_28,0,0,0x10);
    uStack_20 = uStack_20 & 0xffffffff00000000;
  }
  if (local_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14179d8e5:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179d93e FUN_14179d93e body=314 status=ok
// SIG undefined FUN_14179d93e(void)

void FUN_14179d93e(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *puVar2 = &PTR_FUN_14a4720c0;
  puVar2[0x28] = 0;
  puVar2[0x29] = 0x1000000000;
  puVar2[0x2e] = 0x10000000000;
  puVar2[0x33] = 0x10000000000;
  puVar2[0x34] = 0;
  puVar2[0x35] = 0;
  lVar3 = FUN_14009d2a0();
  *(undefined4 *)(puVar2 + 7) = 2;
  local_30 = (longlong)&local_28 + 4;
  local_28 = CONCAT44(local_28._4_4_,*(undefined4 *)(lVar3 + 0x54));
  local_38 = &local_28;
  FUN_1403b5126(puVar2 + 0x2a,&local_38,2);
  *(undefined1 *)((longlong)puVar2 + 0x32) = 8;
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    uVar1 = *(undefined2 *)(lVar3 + 0x54);
    local_38 = (undefined8 *)puVar2[2];
    if ((local_38 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_38,uVar1);
    uVar1 = *(undefined2 *)(lVar3 + 0x56);
    local_28 = puVar2[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_28,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179da8d FUN_14179da8d body=184 status=ok
// SIG undefined FUN_14179da8d(void)

void FUN_14179da8d(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *puVar2 = &PTR_FUN_14a472840;
  puVar2[0xc] = 0;
  *(undefined4 *)(puVar2 + 0xd) = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x74) = 0;
  puVar2[0x10] = 0;
  *(undefined4 *)(puVar2 + 0x11) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x32) = 0x2c;
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0x54);
    local_20 = puVar2[2];
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_20,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179db46 FUN_14179db46 body=83 status=ok
// SIG undefined FUN_14179db46(void)

ulonglong FUN_14179db46(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x74)) {
    lVar3 = FUN_14009d2a0();
    uVar1 = *(ushort *)(lVar3 + 0xfe);
    lVar3 = FUN_14482820e(param_2 + 0x28);
    if ((uVar1 == 0xffff) ||
       (*(uint *)(lVar3 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar3 + 0x20) < (int)(uint)uVar1))
    {
      uVar4 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4);
      uVar4 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),(uVar2 >> (uVar1 & 0x1f) & 1) != 0);
    }
  }
  else {
    uVar4 = CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x48) >> 8),1);
  }
  return uVar4;
}



// FUNCTION 14179db99 FUN_14179db99 body=141 status=ok
// SIG undefined FUN_14179db99(void)

void FUN_14179db99(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *(undefined1 *)((longlong)puVar2 + 0x32) = 4;
  *puVar2 = &PTR_FUN_14a472fd0;
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0x140);
    local_20 = puVar2[2];
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_20,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179dc27 FUN_14179dc27 body=171 status=ok
// SIG undefined FUN_14179dc27(void)

void FUN_14179dc27(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar1,param_1);
  *(undefined1 *)((longlong)puVar1 + 0x32) = 4;
  *puVar1 = &PTR_FUN_14a473370;
  puVar1[8] = 0;
  puVar1[9] = 0;
  if ((*(uint *)(puVar1 + 1) & 0x10) != 0) {
    local_18 = puVar1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_14090928c();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179dcd4 FUN_14179dcd4 body=85 status=ok
// SIG undefined FUN_14179dcd4(void)

byte FUN_14179dcd4(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_14009d2a0();
  uVar1 = *(ushort *)(lVar2 + 0x10a);
  lVar2 = FUN_14482820e(param_2 + 0x28);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar3 = false;
  }
  else {
    bVar3 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return *(int *)(param_2 + 0x430) != 0 | bVar3;
}



// FUNCTION 14179dd2a FUN_14179dd2a body=68 status=ok
// SIG undefined FUN_14179dd2a(void)

undefined4 FUN_14179dd2a(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = FUN_14009d2a0();
  uVar1 = *(ushort *)(lVar4 + 0x10a);
  lVar4 = FUN_14482820e(param_2 + 0x28);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar4 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar4 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4);
    uVar3 = CONCAT31((int3)(uVar2 >> 8),(uVar2 >> (uVar1 & 0x1f) & 1) != 0);
  }
  return uVar3;
}



// FUNCTION 14179dd6e FUN_14179dd6e body=129 status=ok
// SIG undefined FUN_14179dd6e(void)

void FUN_14179dd6e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_20 = FUN_14090928c();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  lVar2 = FUN_14009ee5c(uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1447ba426(*(longlong *)(param_1 + 0x28) + 0x3e0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48,*(undefined2 *)(param_1 + 0x34),
                *(undefined2 *)(lVar2 + 0x34));
}



// FUNCTION 14179ddf0 FUN_14179ddf0 body=40 status=ok
// SIG undefined FUN_14179ddf0(void)

undefined8 FUN_14179ddf0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179de18 FUN_14179de18 body=89 status=ok
// SIG undefined FUN_14179de18(void)

undefined8 * FUN_14179de18(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4720c0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179de72 FUN_14179de72 body=40 status=ok
// SIG undefined FUN_14179de72(void)

undefined8 FUN_14179de72(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179de9a FUN_14179de9a body=95 status=ok
// SIG undefined FUN_14179de9a(void)

undefined8 * FUN_14179de9a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a473370;
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
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179defa FUN_14179defa body=490 status=ok
// SIG undefined FUN_14179defa(void)

void FUN_14179defa(undefined8 param_1,longlong *param_2,undefined8 param_3,uint param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_7a8 [32];
  undefined8 local_788;
  undefined8 local_780;
  undefined *local_778;
  code *local_770;
  undefined1 local_768 [1792];
  undefined1 *local_68;
  uint local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_7a8;
  if (0 < (int)param_4) {
    do {
      if (DAT_14cab25d0 == 0) {
        uVar3 = FUN_140bd662f();
        DAT_14cab25d0 = FUN_140002ddd(FUN_14633bc77,uVar3,L"EasingComponentData");
      }
      lVar2 = DAT_14cab25d0;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c952478) {
        FUN_144b3d300(&DAT_14c952478);
        if (DAT_14c952478 == -1) {
          FUN_1446f4b16();
          local_770 = FUN_1403a5f94;
          local_778 = &DAT_14c951c78;
          local_780 = 0;
          local_788 = 0x4018001;
          FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
          atexit(FUN_1428170e8);
          _Init_thread_footer(&DAT_14c952478);
        }
      }
      local_780 = CONCAT44(local_780._4_4_,2);
      local_788 = CONCAT71(local_788._1_7_,1);
      FUN_140021b28(local_768,&DAT_14c952428,lVar2);
      while (0 < (int)local_60) {
        puVar4 = local_68;
        if (local_68 == (undefined1 *)0x0) {
          puVar4 = local_768;
        }
        puVar5 = *(undefined1 **)(puVar4 + (ulonglong)local_60 * 0xe0 + -0x18);
        if (*(undefined1 **)(puVar4 + (ulonglong)local_60 * 0xe0 + -0x18) == (undefined1 *)0x0) {
          puVar5 = puVar4 + (ulonglong)local_60 * 0xe0 + -0xd8;
        }
        (**(code **)(*param_2 + 0x88))
                  (param_2,*(undefined8 *)
                            (puVar5 + (longlong)*(int *)(puVar4 + (ulonglong)local_60 * 0xe0 + -8) *
                                      0x18 + 8),0);
        FUN_140caedf2(local_768);
      }
      FUN_140021a7a(local_768);
      bVar1 = 1 < param_4;
      param_4 = param_4 - 1;
    } while (bVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_7a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179e0e6 FUN_14179e0e6 body=383 status=ok
// SIG undefined FUN_14179e0e6(void)

longlong FUN_14179e0e6(longlong *param_1,uint param_2,int *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  int local_48 [2];
  int *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar6 * 0x38;
        if (*(int *)(*param_1 + (longlong)iVar6 * 0x38) == *param_3) {
          if (lVar3 != 0) goto LAB_14179e21f;
          break;
        }
        iVar6 = *(int *)(lVar3 + 0x30);
      } while (iVar6 != -1);
    }
  }
  FUN_1403b6b28(param_1,local_48);
  *local_40 = *param_3;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0x80;
  *(undefined1 *)(local_40 + 10) = 0;
  local_40[0xc] = -1;
  cVar1 = FUN_1403b6a0e(param_1,param_2,local_40,local_48);
  if (cVar1 == '\0') {
    uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      local_40[0xd] = param_2;
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      local_40[0xc] = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4) = local_48[0];
    }
    else {
      *(int *)(param_1 + 9) = iVar6;
      FUN_1403b7182(param_1);
    }
  }
  lVar3 = *param_1 + (longlong)local_48[0] * 0x38;
LAB_14179e21f:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14179e266 FUN_14179e266 body=29 status=ok
// SIG undefined FUN_14179e266(void)

undefined8 FUN_14179e266(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179e284 FUN_14179e284 body=29 status=ok
// SIG undefined FUN_14179e284(void)

undefined8 FUN_14179e284(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179e2a2 FUN_14179e2a2 body=348 status=ok
// SIG undefined FUN_14179e2a2(void)

ushort * FUN_14179e2a2(ushort *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = param_2[1];
  *(undefined8 *)param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = uVar3;
  puVar1 = param_1 + 8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x100;
  param_1[0x1b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x100;
  param_1[0x2f] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0x100;
  param_1[0x4b] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0x100;
  param_1[0x5f] = 0;
  uVar2 = *param_1;
  iVar7 = uVar2 + 1;
  iVar5 = iVar7;
  if (0xff < uVar2) {
    FUN_14497ddce(puVar1,0);
    iVar5 = *(int *)(param_1 + 0x18) + iVar7;
  }
  iVar8 = iVar5 + 0x1f;
  if (-1 < iVar5) {
    iVar8 = iVar5;
  }
  *(int *)(param_1 + 0x18) = iVar5;
  if (iVar5 % 0x20 != 0) {
    bVar4 = -(char)(iVar5 % 0x20);
    *(uint *)(puVar1 + (longlong)(iVar8 >> 5) * 2) =
         (uint)(*(int *)(puVar1 + (longlong)(iVar8 >> 5) * 2) << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
  }
  FUN_1447c45ca(puVar1,0,iVar7,0);
  *(uint *)(param_1 + (ulonglong)(uVar2 >> 5) * 2 + 8) =
       *(uint *)(param_1 + (ulonglong)(uVar2 >> 5) * 2 + 8) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_1[1];
  iVar7 = uVar2 + 1;
  iVar5 = *(int *)(param_1 + 0x18);
  iVar8 = iVar7 - iVar5;
  if (iVar8 == 0 || iVar7 < iVar5) goto LAB_14179e3ac;
  if (iVar5 == 0) {
LAB_14179e371:
    if (*(int *)(param_1 + 0x1a) <= (int)(uint)uVar2) {
      param_1[0x1a] = 0x100;
      param_1[0x1b] = 0;
      FUN_14497ddce(puVar1,iVar5);
      iVar7 = *(int *)(param_1 + 0x18) + iVar8;
    }
    iVar6 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    *(int *)(param_1 + 0x18) = iVar7;
    if (iVar7 % 0x20 != 0) {
      bVar4 = -(char)(iVar7 % 0x20);
      *(uint *)(puVar1 + (longlong)(iVar6 >> 5) * 2) =
           (uint)(*(int *)(puVar1 + (longlong)(iVar6 >> 5) * 2) << (bVar4 & 0x1f)) >> (bVar4 & 0x1f)
      ;
    }
  }
  else {
    iVar6 = iVar5 + 0x1e;
    if (-1 < iVar5 + -1) {
      iVar6 = iVar5 + -1;
    }
    if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14179e371;
    *(int *)(param_1 + 0x18) = iVar7;
  }
  FUN_1447c45ca(puVar1,iVar5,iVar8,0);
LAB_14179e3ac:
  *(uint *)(param_1 + (ulonglong)(uVar2 >> 5) * 2 + 8) =
       *(uint *)(param_1 + (ulonglong)(uVar2 >> 5) * 2 + 8) | 1 << ((byte)uVar2 & 0x1f);
  return param_1;
}



// FUNCTION 14179e3fe FUN_14179e3fe body=112 status=ok
// SIG undefined FUN_14179e3fe(void)

undefined8 FUN_14179e3fe(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 14179e46e FUN_14179e46e body=29 status=ok
// SIG undefined FUN_14179e46e(void)

undefined8 FUN_14179e46e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179e48c FUN_14179e48c body=348 status=ok
// SIG undefined FUN_14179e48c(void)

ushort * FUN_14179e48c(ushort *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = param_2[1];
  *(undefined8 *)param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = uVar3;
  puVar1 = param_1 + 8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x100;
  param_1[0x1b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x100;
  param_1[0x2f] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0x100;
  param_1[0x4b] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0x100;
  param_1[0x5f] = 0;
  uVar2 = *param_1;
  iVar7 = uVar2 + 1;
  iVar5 = iVar7;
  if (0xff < uVar2) {
    FUN_14497ddce(puVar1,0);
    iVar5 = *(int *)(param_1 + 0x18) + iVar7;
  }
  iVar8 = iVar5 + 0x1f;
  if (-1 < iVar5) {
    iVar8 = iVar5;
  }
  *(int *)(param_1 + 0x18) = iVar5;
  if (iVar5 % 0x20 != 0) {
    bVar4 = -(char)(iVar5 % 0x20);
    *(uint *)(puVar1 + (longlong)(iVar8 >> 5) * 2) =
         (uint)(*(int *)(puVar1 + (longlong)(iVar8 >> 5) * 2) << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
  }
  FUN_1447c45ca(puVar1,0,iVar7,0);
  *(uint *)(param_1 + (ulonglong)(uVar2 >> 5) * 2 + 8) =
       *(uint *)(param_1 + (ulonglong)(uVar2 >> 5) * 2 + 8) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_1[1];
  iVar7 = uVar2 + 1;
  iVar5 = *(int *)(param_1 + 0x18);
  iVar8 = iVar7 - iVar5;
  if (iVar8 == 0 || iVar7 < iVar5) goto LAB_14179e596;
  if (iVar5 == 0) {
LAB_14179e55b:
    if (*(int *)(param_1 + 0x1a) <= (int)(uint)uVar2) {
      param_1[0x1a] = 0x100;
      param_1[0x1b] = 0;
      FUN_14497ddce(puVar1,iVar5);
      iVar7 = *(int *)(param_1 + 0x18) + iVar8;
    }
    iVar6 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    *(int *)(param_1 + 0x18) = iVar7;
    if (iVar7 % 0x20 != 0) {
      bVar4 = -(char)(iVar7 % 0x20);
      *(uint *)(puVar1 + (longlong)(iVar6 >> 5) * 2) =
           (uint)(*(int *)(puVar1 + (longlong)(iVar6 >> 5) * 2) << (bVar4 & 0x1f)) >> (bVar4 & 0x1f)
      ;
    }
  }
  else {
    iVar6 = iVar5 + 0x1e;
    if (-1 < iVar5 + -1) {
      iVar6 = iVar5 + -1;
    }
    if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14179e55b;
    *(int *)(param_1 + 0x18) = iVar7;
  }
  FUN_1447c45ca(puVar1,iVar5,iVar8,0);
LAB_14179e596:
  *(uint *)(param_1 + (ulonglong)(uVar2 >> 5) * 2 + 8) =
       *(uint *)(param_1 + (ulonglong)(uVar2 >> 5) * 2 + 8) | 1 << ((byte)uVar2 & 0x1f);
  return param_1;
}



// FUNCTION 14179e5e8 FUN_14179e5e8 body=112 status=ok
// SIG undefined FUN_14179e5e8(void)

undefined8 FUN_14179e5e8(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 14179e658 FUN_14179e658 body=29 status=ok
// SIG undefined FUN_14179e658(void)

undefined8 FUN_14179e658(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179e676 FUN_14179e676 body=29 status=ok
// SIG undefined FUN_14179e676(void)

undefined8 FUN_14179e676(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179e693 FUN_14179e693 body=49 status=ok
// SIG undefined FUN_14179e693(void)

longlong FUN_14179e693(void)

{
  if (DAT_14cab2e40 == 0) {
    FUN_14086a14e(&DAT_14cab2e40,&PTR_FUN_14a4784c0);
  }
  return DAT_14cab2e40;
}



// FUNCTION 14179e6c4 FUN_14179e6c4 body=215 status=ok
// SIG undefined FUN_14179e6c4(void)

void FUN_14179e6c4(longlong param_1,uint *param_2)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = FUN_1447bdbdc((longlong *)(param_1 + 0x28),param_2[1] ^ *param_2 ^ param_2[2] ^ param_2[3]
                        ,param_2);
  if (iVar1 != -1) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    if (((lVar3 + (longlong)iVar1 * 0x38 != 0) &&
        (pcVar2 = (char *)((longlong)iVar1 * 0x38 + lVar3 + 0x10), pcVar2 != (char *)0x0)) &&
       (*pcVar2 == '\x01')) {
      *pcVar2 = '\0';
      iVar1 = FUN_1400a4ce0((longlong *)(param_1 + 0x78),
                            param_2[1] ^ *param_2 ^ param_2[2] ^ param_2[3],param_2);
      if (iVar1 != -1) {
        lVar3 = (longlong)iVar1 * 0x68 + *(longlong *)(param_1 + 0x78);
        if (lVar3 + 0x10 != 0 && lVar3 != 0) {
          lVar4 = lVar3 + 0x10;
          if (*(longlong *)(lVar3 + 0x50) != 0) {
            lVar4 = *(longlong *)(lVar3 + 0x50);
          }
          if ((longlong)*(int *)(lVar3 + 0x58) != 0) {
            lVar3 = (longlong)*(int *)(lVar3 + 0x58) << 4;
            do {
              FUN_14179e6c4(param_1,lVar4);
              lVar4 = lVar4 + 0x10;
              lVar3 = lVar3 + -0x10;
            } while (lVar3 != 0);
          }
        }
      }
      FUN_140874968(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14179e79c FUN_14179e79c body=42 status=ok
// SIG undefined FUN_14179e79c(void)

undefined8 * FUN_14179e79c(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_140232b8e(*(longlong *)(param_1 + 8),param_2);
  }
  return param_2;
}



// FUNCTION 14179e7c6 FUN_14179e7c6 body=33 status=ok
// SIG undefined FUN_14179e7c6(void)

longlong FUN_14179e7c6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (((lVar3 == 0) || (lVar2 = *(longlong *)(lVar3 + 0x28), lVar2 == 0)) ||
     (uVar1 = *(uint *)(lVar3 + 0x34), uVar1 == 0xffffffff)) {
    return 0;
  }
  if (*(int *)(lVar2 + 0xe0) != *(int *)(lVar2 + 0x10c)) {
    lVar3 = lVar2 + 0x110;
    if (*(longlong *)(lVar2 + 0x118) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x118);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar2 + 0x120) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(lVar2 + 0xd8) + (longlong)iVar4 * 0x150;
        if (*(uint *)(*(longlong *)(lVar2 + 0xd8) + (longlong)iVar4 * 0x150) == uVar1) break;
        iVar4 = *(int *)(lVar3 + 0x148);
        lVar3 = 0;
      } while (iVar4 != -1);
      goto LAB_1400a383a;
    }
  }
  lVar3 = 0;
LAB_1400a383a:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 14179e7e8 FUN_14179e7e8 body=208 status=ok
// SIG undefined FUN_14179e7e8(void)

undefined8 * FUN_14179e7e8(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a47b380;
  param_1[1] = 0;
  param_1[2] = 0;
  if (DAT_14cab3278 == 0) {
    lVar1 = FUN_144a78877(1,0);
    DAT_14cab3278 = lVar1 << 0x20 | 0x739b7417;
  }
  param_1[3] = DAT_14cab3278;
  return param_1;
}



// FUNCTION 14179e8b8 FUN_14179e8b8 body=24 status=ok
// SIG undefined FUN_14179e8b8(void)

void FUN_14179e8b8(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a47b390;
  lVar1 = param_1[5];
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14179e8d0 FUN_14179e8d0 body=20 status=ok
// SIG undefined FUN_14179e8d0(void)

bool FUN_14179e8d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1400e4054();
  return lVar1 != 0;
}



// FUNCTION 14179e8e4 FUN_14179e8e4 body=48 status=ok
// SIG undefined FUN_14179e8e4(void)

void FUN_14179e8e4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x1c,4);
  }
  return;
}



// FUNCTION 14179e914 FUN_14179e914 body=381 status=ok
// SIG undefined FUN_14179e914(void)

void FUN_14179e914(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
    lVar5 = (longlong)(int)uVar3;
  }
  else {
    lVar5 = (longlong)(int)uVar2 + ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar4 = lVar5 * 0x1c;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar4 + 0xf;
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
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
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14179e9a1;
            lVar5 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar5 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar7 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
    }
  }
LAB_14179e9a1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar4 / 0x1c)) {
    uVar7 = uVar4 / 0x1c & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x1c,4);
  return;
}



// FUNCTION 14179ea92 FUN_14179ea92 body=328 status=ok
// SIG undefined FUN_14179ea92(void)

void FUN_14179ea92(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x78;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14179eafc;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14179eafc:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x78)) {
      uVar5 = uVar3 / 0x78 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x78,8);
  }
  return;
}



// FUNCTION 14179ebda FUN_14179ebda body=29 status=ok
// SIG undefined FUN_14179ebda(void)

undefined8 FUN_14179ebda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179ebf8 FUN_14179ebf8 body=29 status=ok
// SIG undefined FUN_14179ebf8(void)

undefined8 FUN_14179ebf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179ec16 FUN_14179ec16 body=29 status=ok
// SIG undefined FUN_14179ec16(void)

undefined8 FUN_14179ec16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179ec33 FUN_14179ec33 body=49 status=ok
// SIG undefined FUN_14179ec33(void)

longlong FUN_14179ec33(void)

{
  if (DAT_14cab3640 == 0) {
    FUN_14086a14e(&DAT_14cab3640,&PTR_FUN_14a486fe8);
  }
  return DAT_14cab3640;
}



// FUNCTION 14179ec6e FUN_14179ec6e body=49 status=ok
// SIG undefined FUN_14179ec6e(void)

longlong FUN_14179ec6e(void)

{
  if (DAT_14cab3560 == 0) {
    FUN_14086a14e(&DAT_14cab3560,&PTR_FUN_14a485ee8);
  }
  return DAT_14cab3560;
}



// FUNCTION 14179eca0 FUN_14179eca0 body=300 status=ok
// SIG undefined FUN_14179eca0(void)

void FUN_14179eca0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong *local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a483e58);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3906c);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39474);
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
    if ((int)param_2[9] == 0) {
      if (0x75 < iVar1) goto LAB_14179ed77;
    }
    else {
      (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39474);
      iVar1 = FUN_1448332aa(param_2,&DAT_149e39474);
      if (0 < iVar1) goto LAB_14179ed77;
    }
    FUN_14757c75c(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
    FUN_14757ce18(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
    FUN_14757d642(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  }
LAB_14179ed77:
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179edce FUN_14179edce body=31 status=ok
// SIG undefined FUN_14179edce(void)

void FUN_14179edce(undefined8 param_1)

{
  FUN_144757f48(param_1,8);
  FUN_140894914(param_1);
  return;
}



// FUNCTION 14179eded FUN_14179eded body=49 status=ok
// SIG undefined FUN_14179eded(void)

longlong FUN_14179eded(void)

{
  if (DAT_14cab3420 == 0) {
    FUN_14086a14e(&DAT_14cab3420,&PTR_FUN_14a484718);
  }
  return DAT_14cab3420;
}



// FUNCTION 14179ee1e FUN_14179ee1e body=401 status=ok
// SIG undefined FUN_14179ee1e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14179ee1e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14179ef97;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14179eec8;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 1) goto LAB_14179ef4d;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14179efaf;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14179ef1c;
                memcpy(_Dst,param_3,(longlong)(int)lVar6);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14179ef49;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_14179ef4d:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_14179ef77;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14179efb4 FUN_14179efb4 body=49 status=ok
// SIG undefined FUN_14179efb4(void)

longlong FUN_14179efb4(void)

{
  if (DAT_14cab3618 == 0) {
    FUN_14073dd9a(&DAT_14cab3618,&PTR_LAB_14a486a68);
  }
  return DAT_14cab3618;
}



// FUNCTION 14179efe6 FUN_14179efe6 body=47 status=ok
// SIG undefined FUN_14179efe6(void)

undefined8 * FUN_14179efe6(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x10))();
  uVar1 = *(undefined8 *)(lVar2 + 8);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *param_2 = uVar1;
  param_2[1] = lVar2;
  return param_2;
}


