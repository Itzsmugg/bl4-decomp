// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1487f569c FUN_1487f569c body=48 status=ok
// SIG undefined FUN_1487f569c(void)

void FUN_1487f569c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 1487f56cc FUN_1487f56cc body=48 status=ok
// SIG undefined FUN_1487f56cc(void)

void FUN_1487f56cc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x80,8);
  }
  return;
}



// FUNCTION 1487f56fc FUN_1487f56fc body=48 status=ok
// SIG undefined FUN_1487f56fc(void)

void FUN_1487f56fc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1487f572c FUN_1487f572c body=83 status=ok
// SIG undefined FUN_1487f572c(void)

longlong * FUN_1487f572c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1464b02ee();
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



// FUNCTION 1487f5780 FUN_1487f5780 body=132 status=ok
// SIG undefined FUN_1487f5780(void)

void FUN_1487f5780(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f5806 FUN_1487f5806 body=96 status=ok
// SIG undefined FUN_1487f5806(void)

void FUN_1487f5806(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = FUN_1487f5866();
  if (iVar6 == -1) {
    iVar6 = (int)param_1[1];
    lVar7 = (longlong)iVar6;
    *(uint *)(param_1 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
      FUN_1487f58c6(param_1,iVar6);
    }
    lVar2 = *param_1;
    *(undefined ***)(lVar2 + lVar7 * 0x28) = &PTR_FUN_14aff1350;
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    puVar1 = (undefined8 *)(lVar2 + 8 + lVar7 * 0x28);
    *puVar1 = *(undefined8 *)(param_2 + 8);
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)(lVar2 + 0x18 + lVar7 * 0x28);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
  }
  return;
}



// FUNCTION 1487f5866 FUN_1487f5866 body=95 status=ok
// SIG undefined FUN_1487f5866(void)

int FUN_1487f5866(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    uVar2 = 0;
    do {
      if ((((*(longlong *)(lVar1 + 8 + uVar2) == *(longlong *)(param_2 + 8)) &&
           (*(longlong *)(lVar1 + 0x10 + uVar2) == *(longlong *)(param_2 + 0x10))) &&
          (*(longlong *)(lVar1 + 0x18 + uVar2) == *(longlong *)(param_2 + 0x18))) &&
         (*(longlong *)(lVar1 + 0x20 + uVar2) == *(longlong *)(param_2 + 0x20))) {
        return (int)(uVar2 >> 3) * -0x33333333;
      }
      uVar2 = uVar2 + 0x28;
    } while ((longlong)(int)param_1[1] * 0x28 != uVar2);
  }
  return -1;
}



// FUNCTION 1487f58c6 FUN_1487f58c6 body=147 status=ok
// SIG undefined FUN_1487f58c6(void)

void FUN_1487f58c6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f595a FUN_1487f595a body=83 status=ok
// SIG undefined FUN_1487f595a(void)

longlong * FUN_1487f595a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1464b02ee();
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



// FUNCTION 1487f59ae FUN_1487f59ae body=110 status=ok
// SIG undefined FUN_1487f59ae(void)

void FUN_1487f59ae(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_14087ebc4(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_14087068c(param_1);
    return;
  }
  FUN_1487f5a1c(param_1);
  FUN_14087ebc4(param_1,param_2);
  return;
}



// FUNCTION 1487f5a1c FUN_1487f5a1c body=322 status=ok
// SIG undefined FUN_1487f5a1c(void)

void FUN_1487f5a1c(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 1487f5b60 FUN_1487f5b60 body=96 status=ok
// SIG undefined FUN_1487f5b60(void)

void FUN_1487f5b60(longlong param_1,int param_2)

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



// FUNCTION 1487f5bc0 FUN_1487f5bc0 body=660 status=ok
// SIG undefined FUN_1487f5bc0(void)

void FUN_1487f5bc0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auStack_388 [40];
  longlong *local_360;
  int local_354;
  undefined8 local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_350 = param_4;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar8 = &local_348;
    do {
      puVar9 = (undefined8 *)*plVar8;
      puVar10 = (undefined8 *)plVar8[1];
      local_354 = (int)plVar8[2];
      iVar5 = (int)((ulonglong)((longlong)puVar10 - (longlong)puVar9) >> 3);
      puVar11 = puVar9;
      puVar13 = puVar10;
      local_360 = plVar8;
      if (local_354 != 0) {
LAB_1487f5c8f:
        plVar8 = local_360;
        if (8 < (int)(iVar5 + 1U)) {
          uVar6 = iVar5 + 1U >> 1;
          uVar1 = puVar11[uVar6];
          puVar11[uVar6] = *puVar11;
          *puVar11 = uVar1;
          puVar15 = puVar13 + 1;
          puVar12 = puVar11;
          do {
            puVar2 = puVar12 + 1;
            puVar14 = puVar12 + 1;
            do {
              puVar12 = puVar14;
              puVar4 = puVar2;
              if (puVar13 < puVar12) break;
              cVar3 = FUN_1487e4ee0(*puVar11,*puVar12);
              puVar2 = puVar4 + 1;
              puVar14 = puVar12 + 1;
            } while (cVar3 == '\0');
            puVar2 = puVar15 + -2;
            do {
              puVar14 = puVar15;
              puVar7 = puVar2;
              puVar15 = puVar14 + -1;
              if (puVar15 <= puVar11) break;
              cVar3 = FUN_1487e4ee0(*puVar15,*puVar11);
              puVar2 = puVar7 + -1;
            } while (cVar3 == '\0');
            if (puVar15 < puVar12) goto LAB_1487f5d1c;
            uVar1 = *puVar12;
            *puVar12 = *puVar15;
            *puVar15 = uVar1;
          } while( true );
        }
        for (; local_360 = plVar8, puVar10 = puVar11, puVar9 = puVar11, puVar11 < puVar13;
            puVar13 = puVar13 + -1) {
          while (puVar15 = puVar10, puVar9 = puVar9 + 1, puVar9 <= puVar13) {
            cVar3 = FUN_1487e4ee0(*puVar15,*puVar9);
            puVar10 = puVar9;
            if (cVar3 == '\0') {
              puVar10 = puVar15;
            }
          }
          uVar1 = *puVar15;
          *puVar15 = *puVar13;
          *puVar13 = uVar1;
          plVar8 = local_360;
        }
        goto LAB_1487f5e26;
      }
LAB_1487f5e40:
      FUN_1487f5e55(puVar11);
      plVar8 = local_360;
LAB_1487f5e26:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1487f5d1c:
  uVar1 = *puVar11;
  *puVar11 = *puVar15;
  *puVar15 = uVar1;
  local_354 = local_354 + -1;
  puVar14 = puVar14 + -2;
  if ((longlong)puVar7 - (longlong)puVar9 < (longlong)puVar10 - (longlong)puVar4) {
    plVar8 = local_360;
    if (puVar12 < puVar13) {
      *local_360 = (longlong)puVar12;
      local_360[1] = (longlong)puVar13;
      *(int *)(local_360 + 2) = local_354;
      plVar8 = local_360 + 3;
    }
    puVar10 = puVar7;
    puVar9 = puVar11;
    if (puVar15 <= puVar11 + 1) goto LAB_1487f5e26;
  }
  else {
    if (puVar11 + 1 < puVar15) {
      *local_360 = (longlong)puVar11;
      local_360[1] = (longlong)puVar14;
      *(int *)(local_360 + 2) = local_354;
      local_360 = local_360 + 3;
    }
    plVar8 = local_360;
    puVar11 = puVar12;
    puVar14 = puVar13;
    puVar10 = puVar13;
    puVar9 = puVar4;
    if (puVar13 <= puVar12) goto LAB_1487f5e26;
  }
  local_360 = plVar8;
  iVar5 = (int)((ulonglong)((longlong)puVar10 - (longlong)puVar9) >> 3);
  puVar13 = puVar14;
  if (local_354 == 0) goto LAB_1487f5e40;
  goto LAB_1487f5c8f;
}



// FUNCTION 1487f5e55 FUN_1487f5e55 body=356 status=ok
// SIG undefined FUN_1487f5e55(void)

void FUN_1487f5e55(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x0001487f5e87:
    do {
      iVar4 = iVar3 * 2 + 1;
      if (iVar4 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           (cVar2 = FUN_1487e4ee0(param_1[iVar7],param_1[iVar4]), cVar2 == '\0')) {
          iVar4 = iVar7;
        }
        cVar2 = FUN_1487e4ee0(param_1[iVar3],param_1[iVar4]);
        if (cVar2 != '\0') {
          uVar1 = param_1[iVar3];
          param_1[iVar3] = param_1[iVar4];
          param_1[iVar4] = uVar1;
          iVar3 = iVar4;
          goto joined_r0x0001487f5e87;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar5 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar5 - 1];
      param_1[uVar5 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar6 = uVar5 - 1;
          iVar3 = 0;
          iVar4 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar4;
            if (((longlong)iVar3 < (longlong)uVar6) &&
               (cVar2 = FUN_1487e4ee0(param_1[iVar3],param_1[iVar4]), cVar2 == '\0')) {
              iVar7 = iVar3;
            }
            cVar2 = FUN_1487e4ee0(param_1[iVar8],param_1[iVar7]);
            if (cVar2 == '\0') break;
            uVar1 = param_1[iVar8];
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = uVar1;
            iVar3 = iVar7 * 2;
            iVar4 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar4 < (longlong)uVar6);
          uVar1 = *param_1;
          *param_1 = param_1[uVar5 - 2];
          param_1[uVar5 - 2] = uVar1;
          uVar5 = uVar6;
        } while (2 < uVar6);
      }
    }
  }
  return;
}



// FUNCTION 1487f5fba FUN_1487f5fba body=96 status=ok
// SIG undefined FUN_1487f5fba(void)

void FUN_1487f5fba(longlong param_1,int param_2)

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



// FUNCTION 1487f601a FUN_1487f601a body=132 status=ok
// SIG undefined FUN_1487f601a(void)

void FUN_1487f601a(longlong param_1,int param_2)

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



// FUNCTION 1487f60a0 FUN_1487f60a0 body=110 status=ok
// SIG undefined FUN_1487f60a0(void)

void FUN_1487f60a0(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_14861b1de(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1487f6252(param_1);
    return;
  }
  FUN_1487f610e(param_1);
  FUN_14861b1de(param_1,param_2);
  return;
}



// FUNCTION 1487f610e FUN_1487f610e body=322 status=ok
// SIG undefined FUN_1487f610e(void)

void FUN_1487f610e(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1487f6252 FUN_1487f6252 body=476 status=ok
// SIG undefined FUN_1487f6252(void)

void FUN_1487f6252(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1487f6430 FUN_1487f6430 body=52 status=ok
// SIG undefined FUN_1487f6430(void)

void FUN_1487f6430(longlong *param_1)

{
  FUN_1487f6464();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487f6464 FUN_1487f6464 body=89 status=ok
// SIG undefined FUN_1487f6464(void)

void FUN_1487f6464(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1487f64be FUN_1487f64be body=326 status=ok
// SIG undefined FUN_1487f64be(void)

undefined4 *
FUN_1487f64be(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1487f6606(param_1,local_50);
  uVar5 = *param_3;
  *local_48 = uVar5;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_1487f66ec(param_1,uVar3,local_48,&local_54);
  uVar1 = local_54;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
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
      *(uint *)((longlong)local_48 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1487f67e8(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f6606 FUN_1487f6606 body=229 status=ok
// SIG undefined FUN_1487f6606(void)

int * FUN_1487f6606(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1487f66ec FUN_1487f66ec body=138 status=ok
// SIG undefined FUN_1487f66ec(void)

void FUN_1487f66ec(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_1487f6776(param_1,*param_4);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_1487f6757;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_1487f6757:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1487f6776 FUN_1487f6776 body=114 status=ok
// SIG undefined FUN_1487f6776(void)

void FUN_1487f6776(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 1487f67e8 FUN_1487f67e8 body=477 status=ok
// SIG undefined FUN_1487f67e8(void)

void FUN_1487f67e8(longlong *param_1)

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



// FUNCTION 1487f69c6 FUN_1487f69c6 body=107 status=ok
// SIG undefined FUN_1487f69c6(void)

void FUN_1487f69c6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1487f8e90(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 1487f6a31 FUN_1487f6a31 body=15 status=ok
// SIG undefined FUN_1487f6a31(void)

void FUN_1487f6a31(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 1487f6a40 FUN_1487f6a40 body=147 status=ok
// SIG undefined FUN_1487f6a40(void)

void FUN_1487f6a40(longlong param_1,int param_2)

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



// FUNCTION 1487f6ad4 FUN_1487f6ad4 body=29 status=ok
// SIG undefined FUN_1487f6ad4(void)

undefined8 FUN_1487f6ad4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487f6b0c FUN_1487f6b0c body=29 status=ok
// SIG undefined FUN_1487f6b0c(void)

bool FUN_1487f6b0c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487f6b2a FUN_1487f6b2a body=26 status=ok
// SIG undefined FUN_1487f6b2a(void)

bool FUN_1487f6b2a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487f6b44 FUN_1487f6b44 body=24 status=ok
// SIG undefined FUN_1487f6b44(void)

bool FUN_1487f6b44(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1487f6b5c FUN_1487f6b5c body=101 status=ok
// SIG undefined FUN_1487f6b5c(void)

void FUN_1487f6b5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f04c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487f6bc2 FUN_1487f6bc2 body=101 status=ok
// SIG undefined FUN_1487f6bc2(void)

void FUN_1487f6bc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f04c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487f6c28 FUN_1487f6c28 body=134 status=ok
// SIG undefined FUN_1487f6c28(void)

void FUN_1487f6c28(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f04c0;
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
                    /* WARNING: Could not recover jumptable at 0x0001487f6c9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487f6cae FUN_1487f6cae body=44 status=ok
// SIG undefined FUN_1487f6cae(void)

void FUN_1487f6cae(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487f6cd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1487f6cda FUN_1487f6cda body=156 status=ok
// SIG undefined FUN_1487f6cda(void)

bool FUN_1487f6cda(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f6d78 FUN_1487f6d78 body=331 status=ok
// SIG undefined FUN_1487f6d78(void)

undefined4 * FUN_1487f6d78(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1487f6ec4(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_1487f6faa(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_1487f70be(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f6ec4 FUN_1487f6ec4 body=229 status=ok
// SIG undefined FUN_1487f6ec4(void)

int * FUN_1487f6ec4(longlong *param_1,int *param_2)

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



// FUNCTION 1487f6faa FUN_1487f6faa body=161 status=ok
// SIG undefined FUN_1487f6faa(void)

undefined8 FUN_1487f6faa(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
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
          FUN_1487f704c(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1487f704c FUN_1487f704c body=114 status=ok
// SIG undefined FUN_1487f704c(void)

void FUN_1487f704c(longlong *param_1,int param_2)

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



// FUNCTION 1487f70be FUN_1487f70be body=476 status=ok
// SIG undefined FUN_1487f70be(void)

void FUN_1487f70be(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1487f729c FUN_1487f729c body=398 status=ok
// SIG undefined FUN_1487f729c(void)

undefined8 * FUN_1487f729c(undefined8 *param_1)

{
  param_1[1] = &DAT_14cb738f8;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_LAB_14affee90;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  memset(param_1 + 0x2c,0,0xb0);
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 2;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  return param_1;
}



// FUNCTION 1487f742a FUN_1487f742a body=9 status=ok
// SIG undefined FUN_1487f742a(void)

void FUN_1487f742a(longlong param_1)

{
  FUN_143cc7ec0(param_1 + 0x10);
  return;
}



// FUNCTION 1487f7434 FUN_1487f7434 body=29 status=ok
// SIG undefined FUN_1487f7434(void)

undefined8 FUN_1487f7434(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487f7452 FUN_1487f7452 body=96 status=ok
// SIG undefined FUN_1487f7452(void)

void FUN_1487f7452(longlong param_1,int param_2)

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



// FUNCTION 1487f74b2 FUN_1487f74b2 body=48 status=ok
// SIG undefined FUN_1487f74b2(void)

void FUN_1487f74b2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1487f74e2 FUN_1487f74e2 body=48 status=ok
// SIG undefined FUN_1487f74e2(void)

void FUN_1487f74e2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1487f7512 FUN_1487f7512 body=48 status=ok
// SIG undefined FUN_1487f7512(void)

void FUN_1487f7512(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1487f7542 FUN_1487f7542 body=95 status=ok
// SIG undefined FUN_1487f7542(void)

void FUN_1487f7542(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1487f75a2 FUN_1487f75a2 body=48 status=ok
// SIG undefined FUN_1487f75a2(void)

void FUN_1487f75a2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1487f75d2 FUN_1487f75d2 body=48 status=ok
// SIG undefined FUN_1487f75d2(void)

void FUN_1487f75d2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1487f7602 FUN_1487f7602 body=95 status=ok
// SIG undefined FUN_1487f7602(void)

void FUN_1487f7602(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1487f7662 FUN_1487f7662 body=67 status=ok
// SIG undefined FUN_1487f7662(void)

void FUN_1487f7662(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14861fc4a(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1487f77ea(param_1);
    return;
  }
  FUN_1487f76a6(param_1);
  FUN_14861fc4a(param_1,0);
  return;
}



// FUNCTION 1487f76a6 FUN_1487f76a6 body=322 status=ok
// SIG undefined FUN_1487f76a6(void)

void FUN_1487f76a6(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1487f77ea FUN_1487f77ea body=474 status=ok
// SIG undefined FUN_1487f77ea(void)

void FUN_1487f77ea(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1487f79c6 FUN_1487f79c6 body=48 status=ok
// SIG undefined FUN_1487f79c6(void)

void FUN_1487f79c6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1487f79f6 FUN_1487f79f6 body=89 status=ok
// SIG undefined FUN_1487f79f6(void)

void FUN_1487f79f6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1487f7a50 FUN_1487f7a50 body=132 status=ok
// SIG undefined FUN_1487f7a50(void)

void FUN_1487f7a50(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f7ad6 FUN_1487f7ad6 body=48 status=ok
// SIG undefined FUN_1487f7ad6(void)

void FUN_1487f7ad6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1487f7b06 FUN_1487f7b06 body=132 status=ok
// SIG undefined FUN_1487f7b06(void)

void FUN_1487f7b06(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f7b8b FUN_1487f7b8b body=1060 status=ok
// SIG undefined FUN_1487f7b8b(void)

void FUN_1487f7b8b(longlong param_1,uint param_2)

{
  longlong *plVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  uint uVar17;
  undefined2 *puVar18;
  float fVar19;
  undefined1 auStack_378 [36];
  int local_354;
  longlong *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar19 + fVar19);
    plVar6 = &local_348;
    do {
      plVar9 = (longlong *)*plVar6;
      plVar14 = (longlong *)plVar6[1];
      local_354 = (int)plVar6[2];
      iVar11 = (int)((ulonglong)((longlong)plVar14 - (longlong)plVar9) >> 3);
      local_350 = plVar6;
      if (local_354 != 0) {
LAB_1487f7c40:
        if (8 < (int)(iVar11 + 1U)) {
          uVar10 = iVar11 + 1U >> 1;
          lVar13 = plVar9[uVar10];
          plVar9[uVar10] = *plVar9;
          *plVar9 = lVar13;
          plVar6 = plVar14 + 1;
          plVar8 = plVar9;
          do {
            plVar8 = plVar8 + 1;
            if (plVar8 <= plVar14) {
              lVar13 = *plVar9;
              fVar19 = *(float *)(lVar13 + 0x28);
              do {
                lVar12 = *plVar8;
                fVar2 = *(float *)(lVar12 + 0x28);
                if ((fVar2 != fVar19) || (NAN(fVar2) || NAN(fVar19))) {
                  if (fVar2 < fVar19) break;
                }
                else {
                  puVar16 = &DAT_149dfb77a;
                  if (*(int *)(lVar13 + 0x20) != 0) {
                    puVar16 = *(undefined2 **)(lVar13 + 0x18);
                  }
                  puVar18 = &DAT_149dfb77a;
                  if (*(int *)(lVar12 + 0x20) != 0) {
                    puVar18 = *(undefined2 **)(lVar12 + 0x18);
                  }
                  lVar12 = 0;
                  while( true ) {
                    uVar3 = *(ushort *)((longlong)puVar18 + lVar12);
                    uVar17 = (uint)uVar3;
                    uVar4 = *(ushort *)((longlong)puVar16 + lVar12);
                    uVar10 = (uint)uVar4;
                    if (uVar3 != uVar4) break;
                    if (uVar3 == 0) goto LAB_1487f7da0;
LAB_1487f7d67:
                    lVar12 = lVar12 + 2;
                  }
                  if ((uVar4 | uVar3) < 0x80) {
                    uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1487f7d67;
                  }
                  if (0 < (int)(uVar17 - uVar10)) break;
                }
LAB_1487f7da0:
                plVar8 = plVar8 + 1;
              } while (plVar8 <= plVar14);
            }
            plVar15 = plVar6 + -1;
            plVar7 = plVar6;
            if (plVar9 < plVar15) {
              lVar13 = *plVar9;
              fVar19 = *(float *)(lVar13 + 0x28);
              do {
                lVar12 = plVar6[-1];
                fVar2 = *(float *)(lVar12 + 0x28);
                plVar7 = plVar6;
                if ((fVar19 != fVar2) || (NAN(fVar19) || NAN(fVar2))) {
                  if (fVar19 < fVar2) break;
                }
                else {
                  puVar16 = &DAT_149dfb77a;
                  if (*(int *)(lVar12 + 0x20) != 0) {
                    puVar16 = *(undefined2 **)(lVar12 + 0x18);
                  }
                  puVar18 = &DAT_149dfb77a;
                  if (*(int *)(lVar13 + 0x20) != 0) {
                    puVar18 = *(undefined2 **)(lVar13 + 0x18);
                  }
                  lVar12 = 0;
                  while( true ) {
                    uVar3 = *(ushort *)((longlong)puVar18 + lVar12);
                    uVar4 = *(ushort *)((longlong)puVar16 + lVar12);
                    if (uVar3 != uVar4) break;
                    if (uVar3 == 0) goto LAB_1487f7d08;
LAB_1487f7ccb:
                    lVar12 = lVar12 + 2;
                  }
                  if ((uVar4 | uVar3) < 0x80) {
                    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[(uint)uVar4])
                    goto LAB_1487f7ccb;
                    iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar3] -
                             (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
                  }
                  else {
                    iVar11 = (uint)uVar3 - (uint)uVar4;
                  }
                  if (0 < iVar11) break;
                }
LAB_1487f7d08:
                plVar1 = plVar15 + -1;
                plVar6 = plVar15;
                plVar7 = plVar15;
                plVar15 = plVar1;
              } while (plVar9 < plVar1);
            }
            plVar6 = plVar15;
            if (plVar6 < plVar8) goto LAB_1487f7dd5;
            lVar13 = *plVar8;
            *plVar8 = plVar7[-1];
            *plVar6 = lVar13;
          } while( true );
        }
        for (; plVar8 = plVar9, plVar6 = plVar9, plVar9 < plVar14; plVar14 = plVar14 + -1) {
          while (plVar6 = plVar6 + 1, plVar6 <= plVar14) {
            lVar13 = *plVar6;
            lVar12 = *plVar8;
            fVar19 = *(float *)(lVar13 + 0x28);
            fVar2 = *(float *)(lVar12 + 0x28);
            if ((fVar19 != fVar2) || (NAN(fVar19) || NAN(fVar2))) {
              bVar5 = fVar19 < fVar2;
            }
            else {
              puVar16 = &DAT_149dfb77a;
              if (*(int *)(lVar12 + 0x20) != 0) {
                puVar16 = *(undefined2 **)(lVar12 + 0x18);
              }
              puVar18 = &DAT_149dfb77a;
              if (*(int *)(lVar13 + 0x20) != 0) {
                puVar18 = *(undefined2 **)(lVar13 + 0x18);
              }
              lVar13 = 0;
              while( true ) {
                uVar3 = *(ushort *)((longlong)puVar18 + lVar13);
                uVar17 = (uint)uVar3;
                uVar4 = *(ushort *)((longlong)puVar16 + lVar13);
                uVar10 = (uint)uVar4;
                if (uVar3 != uVar4) {
                  if ((uVar4 | uVar3) < 0x80) {
                    uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1487f7f0b;
                  }
                  iVar11 = uVar17 - uVar10;
                  goto LAB_1487f7f37;
                }
                if (uVar3 == 0) break;
LAB_1487f7f0b:
                lVar13 = lVar13 + 2;
              }
              iVar11 = 0;
LAB_1487f7f37:
              bVar5 = 0 < iVar11;
            }
            if (bVar5) {
              plVar8 = plVar6;
            }
          }
          lVar13 = *plVar8;
          *plVar8 = *plVar14;
          *plVar14 = lVar13;
        }
        goto LAB_1487f7f60;
      }
LAB_1487f7e7b:
      FUN_1487f7fb0(plVar9);
LAB_1487f7f60:
      plVar6 = local_350 + -3;
    } while (&local_348 <= plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1487f7dd5:
  lVar13 = *plVar9;
  *plVar9 = plVar7[-1];
  *plVar6 = lVar13;
  local_354 = local_354 + -1;
  plVar7 = plVar7 + -2;
  if ((longlong)plVar7 - (longlong)plVar9 < (longlong)plVar14 - (longlong)plVar8) {
    if (plVar8 < plVar14) {
      *local_350 = (longlong)plVar8;
      local_350[1] = (longlong)plVar14;
      *(int *)(local_350 + 2) = local_354;
      local_350 = local_350 + 3;
    }
    if (plVar6 <= plVar9 + 1) goto LAB_1487f7f60;
  }
  else {
    if (plVar9 + 1 < plVar6) {
      *local_350 = (longlong)plVar9;
      local_350[1] = (longlong)plVar7;
      *(int *)(local_350 + 2) = local_354;
      local_350 = local_350 + 3;
    }
    plVar7 = plVar14;
    plVar9 = plVar8;
    if (plVar14 <= plVar8) goto LAB_1487f7f60;
  }
  iVar11 = (int)((ulonglong)((longlong)plVar7 - (longlong)plVar9) >> 3);
  plVar14 = plVar7;
  if (local_354 == 0) goto LAB_1487f7e7b;
  goto LAB_1487f7c40;
}



// FUNCTION 1487f7fb0 FUN_1487f7fb0 body=922 status=ok
// SIG undefined FUN_1487f7fb0(void)

void FUN_1487f7fb0(undefined8 *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined2 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  
  if (param_2 != 0) {
    iVar14 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      iVar17 = iVar14 * 2 + 1;
      iVar15 = iVar14;
      if (iVar17 < (int)param_2) {
LAB_1487f7ff4:
        iVar16 = iVar15 * 2 + 2;
        iVar9 = iVar17;
        if (iVar16 < (int)param_2) {
          lVar19 = param_1[iVar17];
          lVar5 = param_1[iVar16];
          fVar1 = *(float *)(lVar19 + 0x28);
          fVar2 = *(float *)(lVar5 + 0x28);
          if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
            bVar20 = fVar1 < fVar2;
          }
          else {
            puVar13 = &DAT_149dfb77a;
            if (*(int *)(lVar5 + 0x20) != 0) {
              puVar13 = *(undefined2 **)(lVar5 + 0x18);
            }
            puVar10 = &DAT_149dfb77a;
            if (*(int *)(lVar19 + 0x20) != 0) {
              puVar10 = *(undefined2 **)(lVar19 + 0x18);
            }
            lVar19 = 0;
            while( true ) {
              uVar3 = *(ushort *)((longlong)puVar10 + lVar19);
              uVar11 = (uint)uVar3;
              uVar4 = *(ushort *)((longlong)puVar13 + lVar19);
              uVar12 = (uint)uVar4;
              if (uVar3 != uVar4) {
                if ((uVar4 | uVar3) < 0x80) {
                  uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                  uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                  if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1487f805c;
                }
                iVar9 = uVar11 - uVar12;
                goto LAB_1487f8098;
              }
              if (uVar3 == 0) break;
LAB_1487f805c:
              lVar19 = lVar19 + 2;
            }
            iVar9 = 0;
LAB_1487f8098:
            bVar20 = 0 < iVar9;
          }
          iVar9 = iVar16;
          if (bVar20) {
            iVar9 = iVar17;
          }
        }
        lVar19 = param_1[iVar9];
        lVar5 = param_1[iVar15];
        fVar1 = *(float *)(lVar19 + 0x28);
        fVar2 = *(float *)(lVar5 + 0x28);
        if ((fVar1 == fVar2) && (!NAN(fVar1) && !NAN(fVar2))) {
          puVar13 = &DAT_149dfb77a;
          if (*(int *)(lVar5 + 0x20) != 0) {
            puVar13 = *(undefined2 **)(lVar5 + 0x18);
          }
          puVar10 = &DAT_149dfb77a;
          if (*(int *)(lVar19 + 0x20) != 0) {
            puVar10 = *(undefined2 **)(lVar19 + 0x18);
          }
          lVar18 = 0;
          do {
            uVar3 = *(ushort *)((longlong)puVar10 + lVar18);
            uVar4 = *(ushort *)((longlong)puVar13 + lVar18);
            if (uVar3 == uVar4) {
              if (uVar3 == 0) goto LAB_1487f8160;
            }
            else {
              if (0x7f < (uVar4 | uVar3)) {
                iVar17 = (uint)uVar3 - (uint)uVar4;
                goto LAB_1487f815b;
              }
              if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) goto LAB_1487f8158;
            }
            lVar18 = lVar18 + 2;
          } while( true );
        }
        if (fVar1 < fVar2) goto LAB_1487f812a;
      }
LAB_1487f8160:
      bVar20 = iVar14 != 0;
      iVar14 = iVar14 + -1;
    } while (bVar20);
    if (1 < (int)param_2) {
      uVar7 = (ulonglong)param_2;
      uVar6 = *param_1;
      *param_1 = param_1[uVar7 - 1];
      param_1[uVar7 - 1] = uVar6;
      if (param_2 != 2) {
LAB_1487f81ab:
        uVar8 = uVar7 - 1;
        iVar15 = 1;
        iVar14 = 0;
        iVar17 = 0;
LAB_1487f81b7:
        iVar14 = iVar14 + 2;
        iVar9 = iVar15;
        if ((longlong)iVar14 < (longlong)uVar8) {
          lVar19 = param_1[iVar15];
          lVar5 = param_1[iVar14];
          fVar1 = *(float *)(lVar19 + 0x28);
          fVar2 = *(float *)(lVar5 + 0x28);
          if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
            bVar20 = fVar1 < fVar2;
          }
          else {
            puVar13 = &DAT_149dfb77a;
            if (*(int *)(lVar5 + 0x20) != 0) {
              puVar13 = *(undefined2 **)(lVar5 + 0x18);
            }
            puVar10 = &DAT_149dfb77a;
            if (*(int *)(lVar19 + 0x20) != 0) {
              puVar10 = *(undefined2 **)(lVar19 + 0x18);
            }
            lVar19 = 0;
            while( true ) {
              uVar3 = *(ushort *)((longlong)puVar10 + lVar19);
              uVar12 = (uint)uVar3;
              uVar4 = *(ushort *)((longlong)puVar13 + lVar19);
              uVar11 = (uint)uVar4;
              if (uVar3 != uVar4) {
                if ((uVar4 | uVar3) < 0x80) {
                  uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                  uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                  if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1487f821b;
                }
                iVar9 = uVar12 - uVar11;
                goto LAB_1487f8252;
              }
              if (uVar3 == 0) break;
LAB_1487f821b:
              lVar19 = lVar19 + 2;
            }
            iVar9 = 0;
LAB_1487f8252:
            bVar20 = 0 < iVar9;
          }
          iVar9 = iVar14;
          if (bVar20) {
            iVar9 = iVar15;
          }
        }
        lVar19 = param_1[iVar9];
        lVar5 = param_1[iVar17];
        fVar1 = *(float *)(lVar19 + 0x28);
        fVar2 = *(float *)(lVar5 + 0x28);
        if ((fVar1 == fVar2) && (!NAN(fVar1) && !NAN(fVar2))) {
          puVar13 = &DAT_149dfb77a;
          if (*(int *)(lVar5 + 0x20) != 0) {
            puVar13 = *(undefined2 **)(lVar5 + 0x18);
          }
          puVar10 = &DAT_149dfb77a;
          if (*(int *)(lVar19 + 0x20) != 0) {
            puVar10 = *(undefined2 **)(lVar19 + 0x18);
          }
          lVar18 = 0;
          do {
            uVar3 = *(ushort *)((longlong)puVar10 + lVar18);
            uVar11 = (uint)uVar3;
            uVar4 = *(ushort *)((longlong)puVar13 + lVar18);
            uVar12 = (uint)uVar4;
            if (uVar3 == uVar4) {
              if (uVar3 == 0) goto LAB_1487f8315;
            }
            else {
              if (0x7f < (uVar4 | uVar3)) goto LAB_1487f830d;
              uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[uVar4]) goto LAB_1487f830d;
            }
            lVar18 = lVar18 + 2;
          } while( true );
        }
        if (fVar1 < fVar2) goto LAB_1487f82db;
        goto LAB_1487f8315;
      }
    }
  }
  return;
LAB_1487f8158:
  iVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_1487f815b:
  if (iVar17 < 1) goto LAB_1487f8160;
LAB_1487f812a:
  param_1[iVar15] = lVar19;
  param_1[iVar9] = lVar5;
  iVar17 = iVar9 * 2 + 1;
  iVar15 = iVar9;
  if ((int)param_2 <= iVar17) goto LAB_1487f8160;
  goto LAB_1487f7ff4;
LAB_1487f830d:
  if ((int)(uVar11 - uVar12) < 1) goto LAB_1487f8315;
LAB_1487f82db:
  param_1[iVar17] = lVar19;
  param_1[iVar9] = lVar5;
  iVar14 = iVar9 * 2;
  iVar15 = iVar9 * 2 + 1;
  iVar17 = iVar9;
  if ((longlong)uVar8 <= (longlong)iVar15) goto LAB_1487f8315;
  goto LAB_1487f81b7;
LAB_1487f8315:
  uVar6 = *param_1;
  *param_1 = param_1[uVar7 - 2];
  param_1[uVar7 - 2] = uVar6;
  uVar7 = uVar8;
  if (uVar8 < 3) {
    return;
  }
  goto LAB_1487f81ab;
}



// FUNCTION 1487f834a FUN_1487f834a body=132 status=ok
// SIG undefined FUN_1487f834a(void)

void FUN_1487f834a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f83cf FUN_1487f83cf body=604 status=ok
// SIG undefined FUN_1487f83cf(void)

void FUN_1487f83cf(longlong param_1,uint param_2)

{
  float *pfVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar18 + fVar18);
    plVar11 = &local_348;
    do {
      plVar3 = (longlong *)*plVar11;
      plVar12 = (longlong *)plVar11[1];
      iVar14 = (int)plVar11[2];
      iVar5 = (int)((ulonglong)((longlong)plVar12 - (longlong)plVar3) >> 3);
      plVar9 = plVar3;
      plVar8 = plVar12;
      if (iVar14 != 0) {
LAB_1487f8492:
        if (8 < (int)(iVar5 + 1U)) {
          uVar6 = iVar5 + 1U >> 1;
          lVar15 = plVar3[uVar6];
          plVar3[uVar6] = *plVar3;
          *plVar3 = lVar15;
          plVar7 = plVar12 + 1;
          plVar4 = plVar3;
          do {
            plVar2 = plVar4 + 1;
            plVar13 = plVar4 + 1;
            do {
              plVar4 = plVar13;
              plVar16 = plVar2;
              if (plVar12 < plVar4) break;
              plVar2 = plVar16 + 1;
              plVar13 = plVar4 + 1;
            } while (*(float *)(*plVar3 + 0x1c) < *(float *)(*plVar4 + 0x1c) ||
                     *(float *)(*plVar3 + 0x1c) == *(float *)(*plVar4 + 0x1c));
            plVar2 = plVar7 + -2;
            do {
              plVar13 = plVar7;
              plVar17 = plVar2;
              plVar7 = plVar13 + -1;
              if (plVar7 <= plVar3) break;
              plVar2 = plVar17 + -1;
            } while (*(float *)(*plVar7 + 0x1c) < *(float *)(*plVar3 + 0x1c) ||
                     *(float *)(*plVar7 + 0x1c) == *(float *)(*plVar3 + 0x1c));
            if (plVar7 < plVar4) goto LAB_1487f8527;
            lVar15 = *plVar4;
            *plVar4 = *plVar7;
            *plVar7 = lVar15;
          } while( true );
        }
        if (plVar3 < plVar12) {
          do {
            plVar9 = plVar3;
            if (plVar3 + 1 <= plVar12) {
              plVar8 = plVar3 + 1;
              lVar15 = *plVar3;
              plVar7 = plVar3;
              do {
                pfVar1 = (float *)(*plVar8 + 0x1c);
                lVar10 = *plVar8;
                plVar9 = plVar8;
                if (*(float *)(lVar15 + 0x1c) < *pfVar1 || *(float *)(lVar15 + 0x1c) == *pfVar1) {
                  lVar10 = lVar15;
                  plVar9 = plVar7;
                }
                plVar8 = plVar8 + 1;
                lVar15 = lVar10;
                plVar7 = plVar9;
              } while (plVar8 <= plVar12);
            }
            lVar15 = *plVar9;
            *plVar9 = *plVar12;
            *plVar12 = lVar15;
            plVar12 = plVar12 + -1;
          } while (plVar3 < plVar12);
        }
        goto LAB_1487f860a;
      }
LAB_1487f861f:
      FUN_1487f862c(plVar3);
LAB_1487f860a:
      plVar11 = plVar11 + -3;
    } while (&local_348 <= plVar11);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1487f8527:
  lVar15 = *plVar3;
  *plVar3 = *plVar7;
  *plVar7 = lVar15;
  iVar14 = iVar14 + -1;
  plVar13 = plVar13 + -2;
  if ((longlong)plVar17 - (longlong)plVar9 < (longlong)plVar8 - (longlong)plVar16) {
    if (plVar4 < plVar12) {
      *plVar11 = (longlong)plVar4;
      plVar11[1] = (longlong)plVar12;
      *(int *)(plVar11 + 2) = iVar14;
      plVar11 = plVar11 + 3;
    }
    plVar16 = plVar3;
    if (plVar7 <= plVar3 + 1) goto LAB_1487f860a;
  }
  else {
    if (plVar3 + 1 < plVar7) {
      *plVar11 = (longlong)plVar3;
      plVar11[1] = (longlong)plVar13;
      *(int *)(plVar11 + 2) = iVar14;
      plVar11 = plVar11 + 3;
    }
    plVar3 = plVar4;
    plVar13 = plVar12;
    plVar17 = plVar12;
    if (plVar12 <= plVar4) goto LAB_1487f860a;
  }
  iVar5 = (int)((ulonglong)((longlong)plVar17 - (longlong)plVar16) >> 3);
  plVar9 = plVar16;
  plVar12 = plVar13;
  plVar8 = plVar17;
  if (iVar14 == 0) goto LAB_1487f861f;
  goto LAB_1487f8492;
}



// FUNCTION 1487f862c FUN_1487f862c body=327 status=ok
// SIG undefined FUN_1487f862c(void)

void FUN_1487f862c(undefined8 *param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar10 = iVar5;
joined_r0x0001487f864d:
    do {
      iVar8 = iVar5 * 2 + 1;
      if (iVar8 < (int)param_2) {
        iVar9 = iVar5 * 2 + 2;
        if ((iVar9 < (int)param_2) &&
           (*(float *)(param_1[iVar9] + 0x1c) < *(float *)(param_1[iVar8] + 0x1c) ||
            *(float *)(param_1[iVar9] + 0x1c) == *(float *)(param_1[iVar8] + 0x1c))) {
          iVar8 = iVar9;
        }
        lVar3 = param_1[iVar5];
        fVar2 = *(float *)(lVar3 + 0x1c);
        pfVar1 = (float *)(param_1[iVar8] + 0x1c);
        if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
          param_1[iVar5] = param_1[iVar8];
          param_1[iVar8] = lVar3;
          iVar5 = iVar8;
          goto joined_r0x0001487f864d;
        }
      }
      bVar11 = iVar10 != 0;
      iVar5 = iVar10 + -1;
      iVar10 = iVar5;
    } while (bVar11);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2;
      uVar4 = *param_1;
      *param_1 = param_1[uVar6 - 1];
      param_1[uVar6 - 1] = uVar4;
      if (param_2 != 2) {
        do {
          uVar7 = uVar6 - 1;
          iVar5 = 0;
          iVar8 = 1;
          iVar10 = 0;
          do {
            iVar5 = iVar5 + 2;
            iVar9 = iVar8;
            if (((longlong)iVar5 < (longlong)uVar7) &&
               (*(float *)(param_1[iVar5] + 0x1c) < *(float *)(param_1[iVar8] + 0x1c) ||
                *(float *)(param_1[iVar5] + 0x1c) == *(float *)(param_1[iVar8] + 0x1c))) {
              iVar9 = iVar5;
            }
            lVar3 = param_1[iVar10];
            fVar2 = *(float *)(lVar3 + 0x1c);
            pfVar1 = (float *)(param_1[iVar9] + 0x1c);
            if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
            param_1[iVar10] = param_1[iVar9];
            param_1[iVar9] = lVar3;
            iVar5 = iVar9 * 2;
            iVar8 = iVar9 * 2 + 1;
            iVar10 = iVar9;
          } while ((longlong)iVar8 < (longlong)uVar7);
          uVar4 = *param_1;
          *param_1 = param_1[uVar6 - 2];
          param_1[uVar6 - 2] = uVar4;
          uVar6 = uVar7;
        } while (2 < uVar7);
      }
    }
  }
  return;
}



// FUNCTION 1487f8774 FUN_1487f8774 body=62 status=ok
// SIG undefined FUN_1487f8774(void)

void FUN_1487f8774(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487f87b2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1487f87b2 FUN_1487f87b2 body=93 status=ok
// SIG undefined FUN_1487f87b2(void)

ulonglong FUN_1487f87b2(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1487f8810 FUN_1487f8810 body=132 status=ok
// SIG undefined FUN_1487f8810(void)

void FUN_1487f8810(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f8896 FUN_1487f8896 body=48 status=ok
// SIG undefined FUN_1487f8896(void)

void FUN_1487f8896(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1487f88c6 FUN_1487f88c6 body=132 status=ok
// SIG undefined FUN_1487f88c6(void)

void FUN_1487f88c6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f894c FUN_1487f894c body=341 status=ok
// SIG undefined FUN_1487f894c(void)

undefined4 * FUN_1487f894c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1487f8aa2(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0x14) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1487f8b9e(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 3) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0x14) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1487f8cae(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f8aa2 FUN_1487f8aa2 body=251 status=ok
// SIG undefined FUN_1487f8aa2(void)

int * FUN_1487f8aa2(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 1487f8b9e FUN_1487f8b9e body=144 status=ok
// SIG undefined FUN_1487f8b9e(void)

undefined8 FUN_1487f8b9e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x1c);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x1c) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          puVar1[4] = (int)param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1487f8c2e((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[5];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1487f8c2e FUN_1487f8c2e body=128 status=ok
// SIG undefined FUN_1487f8c2e(void)

void FUN_1487f8c2e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 1487f8cae FUN_1487f8cae body=480 status=ok
// SIG undefined FUN_1487f8cae(void)

void FUN_1487f8cae(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
      iVar6 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar5 = (longlong)iVar6 * 0x1c;
        uVar4 = *(undefined8 *)(lVar3 + lVar5);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x18 + lVar5) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar5) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
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



// FUNCTION 1487f8e90 FUN_1487f8e90 body=132 status=ok
// SIG undefined FUN_1487f8e90(void)

void FUN_1487f8e90(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f8f16 FUN_1487f8f16 body=175 status=ok
// SIG undefined FUN_1487f8f16(void)

void FUN_1487f8f16(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_1487f8f9f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1487f8f9f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1487f8fc6 FUN_1487f8fc6 body=95 status=ok
// SIG undefined FUN_1487f8fc6(void)

void FUN_1487f8fc6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1487f9026 FUN_1487f9026 body=48 status=ok
// SIG undefined FUN_1487f9026(void)

void FUN_1487f9026(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1487f9056 FUN_1487f9056 body=132 status=ok
// SIG undefined FUN_1487f9056(void)

void FUN_1487f9056(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f90dc FUN_1487f90dc body=86 status=ok
// SIG undefined FUN_1487f90dc(void)

void FUN_1487f90dc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1487f9132 FUN_1487f9132 body=86 status=ok
// SIG undefined FUN_1487f9132(void)

void FUN_1487f9132(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1487f9188 FUN_1487f9188 body=86 status=ok
// SIG undefined FUN_1487f9188(void)

void FUN_1487f9188(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1487f91de FUN_1487f91de body=86 status=ok
// SIG undefined FUN_1487f91de(void)

void FUN_1487f91de(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1487f9234 FUN_1487f9234 body=132 status=ok
// SIG undefined FUN_1487f9234(void)

void FUN_1487f9234(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f92ba FUN_1487f92ba body=132 status=ok
// SIG undefined FUN_1487f92ba(void)

void FUN_1487f92ba(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f9340 FUN_1487f9340 body=132 status=ok
// SIG undefined FUN_1487f9340(void)

void FUN_1487f9340(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f93c6 FUN_1487f93c6 body=132 status=ok
// SIG undefined FUN_1487f93c6(void)

void FUN_1487f93c6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f944c FUN_1487f944c body=132 status=ok
// SIG undefined FUN_1487f944c(void)

void FUN_1487f944c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f94d2 FUN_1487f94d2 body=132 status=ok
// SIG undefined FUN_1487f94d2(void)

void FUN_1487f94d2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f9558 FUN_1487f9558 body=326 status=ok
// SIG undefined FUN_1487f9558(void)

undefined4 * FUN_1487f9558(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1487f96a0(param_1,local_48);
  puVar1 = (undefined2 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined2 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1487f9786(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1487f77ea(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f96a0 FUN_1487f96a0 body=230 status=ok
// SIG undefined FUN_1487f96a0(void)

int * FUN_1487f96a0(longlong *param_1,int *param_2)

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



// FUNCTION 1487f9786 FUN_1487f9786 body=128 status=ok
// SIG undefined FUN_1487f9786(void)

undefined8 FUN_1487f9786(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1487f9806((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1487f9806 FUN_1487f9806 body=114 status=ok
// SIG undefined FUN_1487f9806(void)

void FUN_1487f9806(longlong *param_1,int param_2)

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



// FUNCTION 1487f9878 FUN_1487f9878 body=132 status=ok
// SIG undefined FUN_1487f9878(void)

void FUN_1487f9878(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f98fe FUN_1487f98fe body=132 status=ok
// SIG undefined FUN_1487f98fe(void)

void FUN_1487f98fe(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f9984 FUN_1487f9984 body=132 status=ok
// SIG undefined FUN_1487f9984(void)

void FUN_1487f9984(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f9a0a FUN_1487f9a0a body=132 status=ok
// SIG undefined FUN_1487f9a0a(void)

void FUN_1487f9a0a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f9a90 FUN_1487f9a90 body=132 status=ok
// SIG undefined FUN_1487f9a90(void)

void FUN_1487f9a90(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487f9b15 FUN_1487f9b15 body=682 status=ok
// SIG undefined FUN_1487f9b15(void)

void FUN_1487f9b15(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  short *psVar2;
  short *psVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *puVar14;
  char cVar15;
  float fVar16;
  undefined1 auStack_358 [32];
  longlong local_338;
  longlong local_330;
  undefined4 local_328 [188];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (1 < (int)param_2) {
    memset(local_328,0,0x2f0);
    local_330 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_338 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_328[0] = (int)(longlong)(fVar16 + fVar16);
    plVar12 = &local_338;
    do {
      puVar7 = (undefined8 *)*plVar12;
      puVar14 = (undefined8 *)plVar12[1];
      iVar13 = (int)plVar12[2];
      iVar8 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar7) >> 3);
      if (iVar13 != 0) {
LAB_1487f9bae:
        if (8 < (int)(iVar8 + 1U)) {
          uVar9 = iVar8 + 1U >> 1;
          uVar1 = puVar7[uVar9];
          puVar7[uVar9] = *puVar7;
          *puVar7 = uVar1;
          puVar10 = puVar14 + 1;
          puVar6 = puVar7;
          do {
            puVar6 = puVar6 + 1;
            if (puVar6 <= puVar14) {
              psVar2 = (short *)*puVar7;
              do {
                psVar3 = (short *)*puVar6;
                if (*(byte *)(psVar2 + 0x10) == *(byte *)(psVar3 + 0x10)) {
                  if ((char)psVar2[6] == (char)psVar3[6]) {
                    if (*psVar2 < *psVar3) break;
                  }
                  else if ((char)psVar2[6] != '\0') break;
                }
                else if (*(byte *)(psVar2 + 0x10) < *(byte *)(psVar3 + 0x10)) break;
                puVar6 = puVar6 + 1;
              } while (puVar6 <= puVar14);
            }
            puVar4 = puVar10 + -1;
            puVar5 = puVar10;
            if (puVar7 < puVar4) {
              psVar2 = (short *)*puVar7;
              do {
                puVar11 = puVar4;
                psVar3 = (short *)puVar10[-1];
                puVar4 = puVar11;
                puVar5 = puVar10;
                if (*(byte *)(psVar3 + 0x10) == *(byte *)(psVar2 + 0x10)) {
                  if ((char)psVar3[6] == (char)psVar2[6]) {
                    if (*psVar3 < *psVar2) {
                      puVar5 = puVar11 + 1;
                      break;
                    }
                  }
                  else if ((char)psVar3[6] != '\0') break;
                }
                else if (*(byte *)(psVar3 + 0x10) < *(byte *)(psVar2 + 0x10)) break;
                puVar4 = puVar11 + -1;
                puVar10 = puVar11;
                puVar5 = puVar11;
              } while (puVar7 < puVar4);
            }
            puVar10 = puVar4;
            if (puVar10 < puVar6) goto LAB_1487f9c8a;
            uVar1 = *puVar6;
            *puVar6 = *puVar10;
            *puVar10 = uVar1;
          } while( true );
        }
        for (; puVar6 = puVar7, puVar10 = puVar7, puVar7 < puVar14; puVar14 = puVar14 + -1) {
          while (puVar4 = puVar6, puVar10 = puVar10 + 1, puVar10 <= puVar14) {
            psVar2 = (short *)*puVar10;
            psVar3 = (short *)*puVar4;
            cVar15 = *(byte *)(psVar3 + 0x10) < *(byte *)(psVar2 + 0x10);
            if ((*(byte *)(psVar3 + 0x10) == *(byte *)(psVar2 + 0x10)) &&
               (cVar15 = (char)psVar3[6], cVar15 == (char)psVar2[6])) {
              cVar15 = *psVar3 < *psVar2;
            }
            puVar6 = puVar10;
            if (cVar15 == '\0') {
              puVar6 = puVar4;
            }
          }
          uVar1 = *puVar4;
          *puVar4 = *puVar14;
          *puVar14 = uVar1;
        }
        goto LAB_1487f9d89;
      }
LAB_1487f9d10:
      FUN_1487f9dc0(puVar7);
LAB_1487f9d89:
      plVar12 = plVar12 + -3;
    } while (&local_338 <= plVar12);
  }
  if ((local_38 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1487f9c8a:
  uVar1 = *puVar7;
  *puVar7 = *puVar10;
  *puVar10 = uVar1;
  iVar13 = iVar13 + -1;
  puVar5 = puVar5 + -2;
  if ((longlong)puVar5 - (longlong)puVar7 < (longlong)puVar14 - (longlong)puVar6) {
    if (puVar6 < puVar14) {
      *plVar12 = (longlong)puVar6;
      plVar12[1] = (longlong)puVar14;
      *(int *)(plVar12 + 2) = iVar13;
      plVar12 = plVar12 + 3;
    }
    if (puVar10 <= puVar7 + 1) goto LAB_1487f9d89;
  }
  else {
    if (puVar7 + 1 < puVar10) {
      *plVar12 = (longlong)puVar7;
      plVar12[1] = (longlong)puVar5;
      *(int *)(plVar12 + 2) = iVar13;
      plVar12 = plVar12 + 3;
    }
    puVar5 = puVar14;
    puVar7 = puVar6;
    if (puVar14 <= puVar6) goto LAB_1487f9d89;
  }
  iVar8 = (int)((ulonglong)((longlong)puVar5 - (longlong)puVar7) >> 3);
  puVar14 = puVar5;
  if (iVar13 == 0) goto LAB_1487f9d10;
  goto LAB_1487f9bae;
}



// FUNCTION 1487f9dc0 FUN_1487f9dc0 body=460 status=ok
// SIG undefined FUN_1487f9dc0(void)

void FUN_1487f9dc0(undefined8 *param_1,uint param_2)

{
  short *psVar1;
  short *psVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  
  if (param_2 != 0) {
    iVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar9 = iVar4;
joined_r0x0001487f9de3:
    do {
      iVar7 = iVar4 * 2 + 1;
      if (iVar7 < (int)param_2) {
        iVar8 = iVar4 * 2 + 2;
        if (iVar8 < (int)param_2) {
          psVar1 = (short *)param_1[iVar7];
          psVar2 = (short *)param_1[iVar8];
          cVar10 = *(byte *)(psVar2 + 0x10) < *(byte *)(psVar1 + 0x10);
          if ((*(byte *)(psVar2 + 0x10) == *(byte *)(psVar1 + 0x10)) &&
             (cVar10 = (char)psVar2[6], cVar10 == (char)psVar1[6])) {
            cVar10 = *psVar2 < *psVar1;
          }
          if (cVar10 == '\0') {
            iVar7 = iVar8;
          }
        }
        psVar1 = (short *)param_1[iVar7];
        psVar2 = (short *)param_1[iVar4];
        if (*(byte *)(psVar2 + 0x10) == *(byte *)(psVar1 + 0x10)) {
          if ((char)psVar2[6] == (char)psVar1[6]) {
            if (*psVar2 < *psVar1) {
LAB_1487f9e6e:
              param_1[iVar4] = psVar1;
              param_1[iVar7] = psVar2;
              iVar4 = iVar7;
              goto joined_r0x0001487f9de3;
            }
          }
          else if ((char)psVar2[6] != '\0') goto LAB_1487f9e6e;
        }
        else if (*(byte *)(psVar2 + 0x10) < *(byte *)(psVar1 + 0x10)) goto LAB_1487f9e6e;
      }
      bVar11 = iVar9 != 0;
      iVar4 = iVar9 + -1;
      iVar9 = iVar4;
    } while (bVar11);
    if (1 < (int)param_2) {
      uVar5 = (ulonglong)param_2;
      uVar3 = *param_1;
      *param_1 = param_1[uVar5 - 1];
      param_1[uVar5 - 1] = uVar3;
      if (param_2 != 2) {
        do {
          uVar6 = uVar5 - 1;
          iVar4 = 0;
          iVar7 = 1;
          iVar9 = 0;
          do {
            iVar4 = iVar4 + 2;
            iVar8 = iVar7;
            if ((longlong)iVar4 < (longlong)uVar6) {
              psVar1 = (short *)param_1[iVar7];
              psVar2 = (short *)param_1[iVar4];
              cVar10 = *(byte *)(psVar2 + 0x10) < *(byte *)(psVar1 + 0x10);
              if ((*(byte *)(psVar2 + 0x10) == *(byte *)(psVar1 + 0x10)) &&
                 (cVar10 = (char)psVar2[6], cVar10 == (char)psVar1[6])) {
                cVar10 = *psVar2 < *psVar1;
              }
              if (cVar10 == '\0') {
                iVar8 = iVar4;
              }
            }
            psVar1 = (short *)param_1[iVar8];
            psVar2 = (short *)param_1[iVar9];
            if (*(byte *)(psVar2 + 0x10) == *(byte *)(psVar1 + 0x10)) {
              if ((char)psVar2[6] == (char)psVar1[6]) {
                if (*psVar1 <= *psVar2) break;
              }
              else if ((char)psVar2[6] == '\0') break;
            }
            else if (*(byte *)(psVar1 + 0x10) <= *(byte *)(psVar2 + 0x10)) break;
            param_1[iVar9] = psVar1;
            param_1[iVar8] = psVar2;
            iVar4 = iVar8 * 2;
            iVar7 = iVar8 * 2 + 1;
            iVar9 = iVar8;
          } while ((longlong)iVar7 < (longlong)uVar6);
          uVar3 = *param_1;
          *param_1 = param_1[uVar5 - 2];
          param_1[uVar5 - 2] = uVar3;
          uVar5 = uVar6;
        } while (2 < uVar6);
      }
    }
  }
  return;
}



// FUNCTION 1487f9f8c FUN_1487f9f8c body=111 status=ok
// SIG undefined FUN_1487f9f8c(void)

void FUN_1487f9f8c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xb0,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xb0)) {
      uVar2 = uVar1 / 0xb0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xb0,8);
  }
  return;
}



// FUNCTION 1487f9ffc FUN_1487f9ffc body=339 status=ok
// SIG undefined FUN_1487f9ffc(void)

void FUN_1487f9ffc(longlong *param_1,uint param_2,longlong *param_3,char *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x10) == *param_3) goto LAB_1487fa093;
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + *param_1 + 8);
      } while (iVar5 != -1);
      iVar5 = -1;
LAB_1487fa093:
      bVar6 = iVar5 != -1;
      goto LAB_1487fa026;
    }
  }
  bVar6 = false;
LAB_1487fa026:
  if (param_4 != (char *)0x0) {
    *param_4 = bVar6;
  }
  if (bVar6 == false) {
    FUN_144a75156(param_1,local_38);
    *local_30 = *param_3;
    *(undefined4 *)(local_30 + 1) = 0xffffffff;
    uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      *(uint *)((longlong)local_30 + 0xc) = param_2;
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      *(undefined4 *)(local_30 + 1) =
           *(undefined4 *)
            ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      *(undefined4 *)
       ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           local_38[0];
    }
    else {
      *(int *)(param_1 + 9) = iVar5;
      FUN_144869b4a(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fa150 FUN_1487fa150 body=146 status=ok
// SIG undefined FUN_1487fa150(void)

void FUN_1487fa150(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487fa1e4 FUN_1487fa1e4 body=202 status=ok
// SIG undefined FUN_1487fa1e4(void)

int FUN_1487fa1e4(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar6 = param_1[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar2 = *param_1;
    uVar7 = 0;
    do {
      cVar4 = FUN_144a7afa6(lVar2 + 8 + uVar7,param_2 + 1);
      if (cVar4 != '\0') {
        iVar5 = (int)(uVar7 >> 3) * -0x33333333;
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      uVar7 = uVar7 + 0x28;
    } while ((longlong)(int)lVar6 * 0x28 != uVar7);
  }
  iVar5 = (int)param_1[1];
  lVar6 = (longlong)iVar5;
  *(uint *)(param_1 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
    FUN_140353c32(param_1,iVar5);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar6 * 0x28) = *param_2;
  uVar3 = param_2[2];
  puVar1 = (undefined8 *)(lVar2 + 8 + lVar6 * 0x28);
  *puVar1 = param_2[1];
  puVar1[1] = uVar3;
  *(undefined8 *)(lVar2 + 0x18 + lVar6 * 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x18 + lVar6 * 0x28) = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(lVar2 + 0x20 + lVar6 * 0x28) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(lVar2 + 0x24 + lVar6 * 0x28) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  return iVar5;
}



// FUNCTION 1487fa2ae FUN_1487fa2ae body=62 status=ok
// SIG undefined FUN_1487fa2ae(void)

void FUN_1487fa2ae(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487fa2ec(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1487fa2ec FUN_1487fa2ec body=93 status=ok
// SIG undefined FUN_1487fa2ec(void)

ulonglong FUN_1487fa2ec(uint param_1,uint param_2)

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



// FUNCTION 1487fa349 FUN_1487fa349 body=45 status=ok
// SIG undefined FUN_1487fa349(void)

void FUN_1487fa349(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_148617258(param_1);
      param_1 = param_1 + 0xb0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1487fa376 FUN_1487fa376 body=132 status=ok
// SIG undefined FUN_1487fa376(void)

void FUN_1487fa376(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487fa3fb FUN_1487fa3fb body=104 status=ok
// SIG undefined FUN_1487fa3fb(void)

void FUN_1487fa3fb(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffff;
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 3) = 2;
    param_1[4] = 0xffffffff;
    *(undefined ***)(param_1 + 6) = &PTR_FUN_14afff010;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    param_1[0xb] = 0x3f800000;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 **)(param_1 + 0x1a) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_1 + 0x1c) = &DAT_3f8000003f800000;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    param_1 = param_1 + 0x26;
  }
  return;
}



// FUNCTION 1487fa464 FUN_1487fa464 body=146 status=ok
// SIG undefined FUN_1487fa464(void)

void FUN_1487fa464(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487fa4f8 FUN_1487fa4f8 body=98 status=ok
// SIG undefined FUN_1487fa4f8(void)

void FUN_1487fa4f8(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x98 + *param_1);
  FUN_1487f46ae(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x98 + (longlong)_Dst),(longlong)iVar2 * 0x98);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1487fa55a FUN_1487fa55a body=62 status=ok
// SIG undefined FUN_1487fa55a(void)

void FUN_1487fa55a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487fa598(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x98,8);
  }
  return;
}



// FUNCTION 1487fa598 FUN_1487fa598 body=110 status=ok
// SIG undefined FUN_1487fa598(void)

ulonglong FUN_1487fa598(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x98) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1487fa5d1;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x98,8);
      param_2 = param_2 / 0x98;
    }
  }
LAB_1487fa5d1:
  return param_2 & 0xffffffff;
}



// FUNCTION 1487fa606 FUN_1487fa606 body=341 status=ok
// SIG undefined FUN_1487fa606(void)

undefined4 * FUN_1487fa606(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1487f8aa2(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0x14) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1487f8b9e(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 3) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0x14) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1487f8cae(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fa75c FUN_1487fa75c body=95 status=ok
// SIG undefined FUN_1487fa75c(void)

void FUN_1487fa75c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1487fa7bc FUN_1487fa7bc body=132 status=ok
// SIG undefined FUN_1487fa7bc(void)

void FUN_1487fa7bc(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487fa842 FUN_1487fa842 body=132 status=ok
// SIG undefined FUN_1487fa842(void)

void FUN_1487fa842(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487fa8c8 FUN_1487fa8c8 body=335 status=ok
// SIG undefined FUN_1487fa8c8(void)

undefined4 * FUN_1487fa8c8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1487faa18(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1487faafe(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1487fabf0(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487faa18 FUN_1487faa18 body=230 status=ok
// SIG undefined FUN_1487faa18(void)

int * FUN_1487faa18(longlong *param_1,int *param_2)

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



// FUNCTION 1487faafe FUN_1487faafe body=128 status=ok
// SIG undefined FUN_1487faafe(void)

undefined8 FUN_1487faafe(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1487fab7e((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1487fab7e FUN_1487fab7e body=114 status=ok
// SIG undefined FUN_1487fab7e(void)

void FUN_1487fab7e(longlong *param_1,int param_2)

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



// FUNCTION 1487fabf0 FUN_1487fabf0 body=473 status=ok
// SIG undefined FUN_1487fabf0(void)

void FUN_1487fabf0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1487fadca FUN_1487fadca body=67 status=ok
// SIG undefined FUN_1487fadca(void)

void FUN_1487fadca(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14861f6ec(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1487fabf0(param_1);
    return;
  }
  FUN_1487fae0e(param_1);
  FUN_14861f6ec(param_1,0);
  return;
}



// FUNCTION 1487fae0e FUN_1487fae0e body=322 status=ok
// SIG undefined FUN_1487fae0e(void)

void FUN_1487fae0e(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1487faf52 FUN_1487faf52 body=29 status=ok
// SIG undefined FUN_1487faf52(void)

undefined8 FUN_1487faf52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487faf8c FUN_1487faf8c body=93 status=ok
// SIG undefined FUN_1487faf8c(void)

void FUN_1487faf8c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f0550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487fafea FUN_1487fafea body=93 status=ok
// SIG undefined FUN_1487fafea(void)

void FUN_1487fafea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f0550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487fb048 FUN_1487fb048 body=126 status=ok
// SIG undefined FUN_1487fb048(void)

void FUN_1487fb048(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f0550;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487fb0b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487fb0d2 FUN_1487fb0d2 body=21 status=ok
// SIG undefined FUN_1487fb0d2(void)

undefined8 FUN_1487fb0d2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1487fb0e8 FUN_1487fb0e8 body=67 status=ok
// SIG undefined FUN_1487fb0e8(void)

void FUN_1487fb0e8(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14861f3ee(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1487f8cae(param_1);
    return;
  }
  FUN_1487fb12c(param_1);
  FUN_14861f3ee(param_1,0);
  return;
}



// FUNCTION 1487fb12c FUN_1487fb12c body=329 status=ok
// SIG undefined FUN_1487fb12c(void)

void FUN_1487fb12c(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x18 + (longlong)iVar4 * 0x1c) * 4) =
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



// FUNCTION 1487fb276 FUN_1487fb276 body=139 status=ok
// SIG undefined FUN_1487fb276(void)

void FUN_1487fb276(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x1c) == param_2) {
          FUN_1487fb302(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x1c + *param_1 + 0x14);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1487fb302 FUN_1487fb302 body=101 status=ok
// SIG undefined FUN_1487fb302(void)

void FUN_1487fb302(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x18 + (longlong)param_2 * 0x1c);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x14 + lVar5 * 0x1c);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x1c + 0x14);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x1c + 0x14);
  FUN_1487f8c2e();
  return;
}



// FUNCTION 1487fb368 FUN_1487fb368 body=339 status=ok
// SIG undefined FUN_1487fb368(void)

undefined4 * FUN_1487fb368(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1487f8aa2(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  local_40[2] = 0xffffffff0000ffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_1487f8b9e(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)(local_40 + 3) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0x14) =
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
      FUN_1487f8cae(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fb4bc FUN_1487fb4bc body=62 status=ok
// SIG undefined FUN_1487fb4bc(void)

void FUN_1487fb4bc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487fb4fa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1487fb4fa FUN_1487fb4fa body=93 status=ok
// SIG undefined FUN_1487fb4fa(void)

ulonglong FUN_1487fb4fa(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1487fb558 FUN_1487fb558 body=89 status=ok
// SIG undefined FUN_1487fb558(void)

void FUN_1487fb558(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1487fb5b2 FUN_1487fb5b2 body=411 status=ok
// SIG undefined FUN_1487fb5b2(void)

void FUN_1487fb5b2(longlong *param_1,uint param_2)

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



// FUNCTION 1487fb74e FUN_1487fb74e body=474 status=ok
// SIG undefined FUN_1487fb74e(void)

void FUN_1487fb74e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1487fb92a FUN_1487fb92a body=326 status=ok
// SIG undefined FUN_1487fb92a(void)

undefined4 * FUN_1487fb92a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1487fba72(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1487fbb58(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1487fb74e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fba72 FUN_1487fba72 body=230 status=ok
// SIG undefined FUN_1487fba72(void)

int * FUN_1487fba72(longlong *param_1,int *param_2)

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



// FUNCTION 1487fbb58 FUN_1487fbb58 body=128 status=ok
// SIG undefined FUN_1487fbb58(void)

undefined8 FUN_1487fbb58(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1487fbbd8((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1487fbbd8 FUN_1487fbbd8 body=114 status=ok
// SIG undefined FUN_1487fbbd8(void)

void FUN_1487fbbd8(longlong *param_1,int param_2)

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



// FUNCTION 1487fbc4a FUN_1487fbc4a body=230 status=ok
// SIG undefined FUN_1487fbc4a(void)

undefined8 * FUN_1487fbc4a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fbd32 FUN_1487fbd32 body=29 status=ok
// SIG undefined FUN_1487fbd32(void)

undefined8 FUN_1487fbd32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487fbd78 FUN_1487fbd78 body=93 status=ok
// SIG undefined FUN_1487fbd78(void)

void FUN_1487fbd78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f0630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f05c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487fbdd6 FUN_1487fbdd6 body=93 status=ok
// SIG undefined FUN_1487fbdd6(void)

void FUN_1487fbdd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f0630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f05c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487fbe34 FUN_1487fbe34 body=126 status=ok
// SIG undefined FUN_1487fbe34(void)

void FUN_1487fbe34(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f0630;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f05c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487fbea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487fbec0 FUN_1487fbec0 body=21 status=ok
// SIG undefined FUN_1487fbec0(void)

undefined8 FUN_1487fbec0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1487fbed8 FUN_1487fbed8 body=83 status=ok
// SIG undefined FUN_1487fbed8(void)

longlong * FUN_1487fbed8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1464b08e8();
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



// FUNCTION 1487fbf2c FUN_1487fbf2c body=114 status=ok
// SIG undefined FUN_1487fbf2c(void)

void FUN_1487fbf2c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 1487fbf9e FUN_1487fbf9e body=15 status=ok
// SIG undefined FUN_1487fbf9e(void)

void FUN_1487fbf9e(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  return;
}



// FUNCTION 1487fbfae FUN_1487fbfae body=143 status=ok
// SIG undefined FUN_1487fbfae(void)

void FUN_1487fbfae(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487fc03e FUN_1487fc03e body=210 status=ok
// SIG undefined FUN_1487fc03e(void)

void FUN_1487fc03e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1487fc0e2;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1487fc0e2:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1487fc114 FUN_1487fc114 body=81 status=ok
// SIG undefined FUN_1487fc114(void)

undefined8 FUN_1487fc114(longlong param_1)

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



// FUNCTION 1487fc16c FUN_1487fc16c body=89 status=ok
// SIG undefined FUN_1487fc16c(void)

bool FUN_1487fc16c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1487fc1b7;
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
LAB_1487fc1b7:
  return lVar6 == param_2;
}



// FUNCTION 1487fc1c6 FUN_1487fc1c6 body=118 status=ok
// SIG undefined FUN_1487fc1c6(void)

void FUN_1487fc1c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f06a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487fc23c FUN_1487fc23c body=156 status=ok
// SIG undefined FUN_1487fc23c(void)

void FUN_1487fc23c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f06a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487fc2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487fc2d8 FUN_1487fc2d8 body=94 status=ok
// SIG undefined FUN_1487fc2d8(void)

void FUN_1487fc2d8(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001487fc320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487fc32b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1487fc336 FUN_1487fc336 body=473 status=ok
// SIG undefined FUN_1487fc336(void)

void FUN_1487fc336(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1487fc510 FUN_1487fc510 body=167 status=ok
// SIG undefined FUN_1487fc510(void)

void FUN_1487fc510(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,0), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1487fc593;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1487fc593:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1487fc5b8 FUN_1487fc5b8 body=335 status=ok
// SIG undefined FUN_1487fc5b8(void)

undefined4 * FUN_1487fc5b8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1487fc708(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1487fc7ee(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1487fc336(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fc708 FUN_1487fc708 body=230 status=ok
// SIG undefined FUN_1487fc708(void)

int * FUN_1487fc708(longlong *param_1,int *param_2)

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



// FUNCTION 1487fc7ee FUN_1487fc7ee body=128 status=ok
// SIG undefined FUN_1487fc7ee(void)

undefined8 FUN_1487fc7ee(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1487fc86e((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1487fc86e FUN_1487fc86e body=114 status=ok
// SIG undefined FUN_1487fc86e(void)

void FUN_1487fc86e(longlong *param_1,int param_2)

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



// FUNCTION 1487fc8e0 FUN_1487fc8e0 body=132 status=ok
// SIG undefined FUN_1487fc8e0(void)

void FUN_1487fc8e0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487fc966 FUN_1487fc966 body=132 status=ok
// SIG undefined FUN_1487fc966(void)

void FUN_1487fc966(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_1487fc9ea(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1487fc9ea FUN_1487fc9ea body=87 status=ok
// SIG undefined FUN_1487fc9ea(void)

void FUN_1487fc9ea(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1487fc86e();
  return;
}



// FUNCTION 1487fca42 FUN_1487fca42 body=57 status=ok
// SIG undefined FUN_1487fca42(void)

void FUN_1487fca42(undefined8 *param_1,int param_2)

{
  FUN_14096d529(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1487fca7c(param_1,param_2);
  return;
}



// FUNCTION 1487fca7c FUN_1487fca7c body=112 status=ok
// SIG undefined FUN_1487fca7c(void)

void FUN_1487fca7c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1487fcaec FUN_1487fcaec body=329 status=ok
// SIG undefined FUN_1487fcaec(void)

undefined4 * FUN_1487fcaec(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1459b28c4(param_1,local_48);
  FUN_1487fcc36(param_3,local_40);
  *(undefined4 *)(local_40 + 8) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_1459b280e(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x44) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
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
      FUN_1459b29ac(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fcc36 FUN_1487fcc36 body=120 status=ok
// SIG undefined FUN_1487fcc36(void)

void FUN_1487fcc36(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = *puVar1;
  param_2[2] = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  param_2[3] = puVar1[2];
  puVar1[2] = 0;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar1 + 3);
  *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)((longlong)puVar1 + 0x1c);
  puVar1[3] = 0;
  *(undefined1 *)((longlong)param_2 + 0x2c) = *(undefined1 *)((longlong)puVar1 + 0x24);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(puVar1 + 4);
  param_2[6] = puVar1[5];
  puVar1[5] = 0;
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(puVar1 + 6);
  *(undefined4 *)((longlong)param_2 + 0x3c) = *(undefined4 *)((longlong)puVar1 + 0x34);
  puVar1[6] = 0;
  return;
}



// FUNCTION 1487fccae FUN_1487fccae body=129 status=ok
// SIG undefined FUN_1487fccae(void)

void FUN_1487fccae(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(param_1 + 0x18);
  do {
    puVar5[-3] = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar3 = *(undefined4 *)(param_2 + 2);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
    *(undefined4 *)(puVar5 + -1) = uVar3;
    *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
    *puVar5 = 0;
    iVar1 = *(int *)(param_2 + 4);
    _Src = (void *)param_2[3];
    *(int *)(puVar5 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar5,iVar1,0);
      memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
    }
    param_2 = param_2 + 5;
    puVar5 = puVar5 + 5;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1487fcd30 FUN_1487fcd30 body=48 status=ok
// SIG undefined FUN_1487fcd30(void)

void FUN_1487fcd30(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1487fcd60 FUN_1487fcd60 body=132 status=ok
// SIG undefined FUN_1487fcd60(void)

void FUN_1487fcd60(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487fce26 FUN_1487fce26 body=119 status=ok
// SIG undefined FUN_1487fce26(void)

void FUN_1487fce26(void)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  lVar1 = DAT_14cb73f40;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((DAT_14cb73f40 != 0) && (*(longlong *)(DAT_14cb73f40 + 0x368) == 0)) && (DAT_14c9a1ab0 != 0))
  {
    FUN_1487fce9e(DAT_14c9a1ab0 + 0x5b0,&local_20,DAT_14cb73f40);
    *(undefined8 *)(lVar1 + 0x368) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fce9e FUN_1487fce9e body=244 status=ok
// SIG undefined FUN_1487fce9e(void)

undefined8 FUN_1487fce9e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b3f23f0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_1487fcf94;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fcfb6 FUN_1487fcfb6 body=26 status=ok
// SIG undefined FUN_1487fcfb6(void)

void FUN_1487fcfb6(undefined8 param_1)

{
  FUN_1487fcfd0();
  FUN_143cd0b2a(param_1);
  return;
}



// FUNCTION 1487fcfd0 FUN_1487fcfd0 body=1664 status=ok
// SIG undefined FUN_1487fcfd0(void)

void FUN_1487fcfd0(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_f8 [36];
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  longlong *local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar11 = (longlong *)(param_1 + 0x2e8);
  local_c8 = (longlong *)(param_1 + 0x2f8);
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  uStack_b0 = local_c8;
  if (*(int *)(param_1 + 0x310) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar9 = *(int *)(param_1 + 0x310);
  }
  local_78 = local_a8;
  lVar4 = local_78;
  uStack_70 = uStack_a0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  local_d0 = plVar11;
  local_c0 = param_1;
  local_90 = plVar11;
  if ((local_78._4_4_ != iVar9) || (uStack_b0 != local_c8)) {
    iVar2 = local_78._4_4_;
    local_d4 = iVar9;
    local_78 = lVar4;
    do {
      lVar4 = *(longlong *)(*local_90 + 0x10 + (longlong)iVar2 * 0x20);
      if (lVar4 != 0) {
        plVar8 = (longlong *)(*local_90 + (longlong)iVar2 * 0x20 + 0x10);
        plVar11 = *(longlong **)(lVar4 + 0x30);
        if (plVar11 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar11 + 8))(plVar11);
          lVar7 = FUN_1464af53c();
          if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
               lVar7 + 0x30)) && (((char)plVar11[8] == '\x01' && ((longlong)(int)plVar11[7] != 0))))
          {
            lVar4 = 0;
            do {
              if ((*(longlong *)(plVar11[6] + lVar4) != 0) &&
                 (*(int *)(*(longlong *)(plVar11[6] + lVar4) + 0x40) == -2)) {
                *(undefined4 *)(*plVar8 + 0x40) = 0xfffffffe;
                break;
              }
              lVar4 = lVar4 + 8;
            } while ((longlong)(int)plVar11[7] << 3 != lVar4);
          }
        }
        lVar7 = *plVar8;
        lVar4 = lVar7 + 0x80;
        local_68 = (longlong *)&DAT_100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        lStack_60 = lVar4;
        if (*(int *)(lVar7 + 0x98) == 0) {
          iVar2 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar2 = *(int *)(lVar7 + 0x98);
        }
        plVar8 = (longlong *)(lVar7 + 0x70);
        uStack_98 = CONCAT44(uStack_4c,uStack_50);
        uStack_a0 = local_58;
        uVar1 = uStack_a0;
        uStack_b0 = local_68;
        local_a8 = lStack_60;
        uStack_a0._4_4_ = (int)(local_58 >> 0x20);
        iVar3 = uStack_a0._4_4_;
        local_b8 = plVar8;
        if ((uStack_a0._4_4_ != iVar2) ||
           (plVar11 = local_d0, iVar9 = local_d4, uStack_a0 = uVar1, lStack_60 != lVar4)) {
          do {
            uStack_a0 = uVar1;
            lVar7 = *local_b8;
            plVar11 = *(longlong **)(*(longlong *)(lVar7 + 0x10 + (longlong)iVar3 * 0x20) + 0x30);
            if (plVar11 != (longlong *)0x0) {
              lVar5 = (**(code **)(*plVar11 + 8))(plVar11);
              lVar6 = FUN_1464af43e();
              if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
                  (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                   == lVar6 + 0x30)) &&
                 (((char)plVar11[8] == '\x01' && ((longlong)(int)plVar11[7] != 0)))) {
                lVar5 = 0;
                do {
                  if ((*(longlong *)(plVar11[6] + lVar5) != 0) &&
                     (*(int *)(*(longlong *)(plVar11[6] + lVar5) + 0x40) == -2)) {
                    *(undefined4 *)(*(longlong *)(lVar7 + (longlong)iVar3 * 0x20 + 0x10) + 0x40) =
                         0xfffffffe;
                    break;
                  }
                  lVar5 = lVar5 + 8;
                } while ((longlong)(int)plVar11[7] << 3 != lVar5);
              }
            }
            uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
            FUN_1449c0562(&uStack_b0);
            plVar11 = local_d0;
            iVar9 = local_d4;
            iVar3 = uStack_a0._4_4_;
            uVar1 = uStack_a0;
          } while (local_b8 != plVar8 || (local_a8 != lVar4 || uStack_a0._4_4_ != iVar2));
        }
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar2 = local_78._4_4_;
    } while (local_90 != plVar11 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != local_c8 || local_78._4_4_ != iVar9));
    iVar9 = *(int *)(local_c0 + 0x310);
    lVar4 = local_78;
  }
  local_78 = lVar4;
  lVar4 = local_c0;
  local_b8 = (longlong *)&DAT_100000000;
  uStack_b0 = local_c8;
  local_a8 = 0xffffffff;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar9 = *(int *)(lVar4 + 0x310);
  }
  local_78 = local_a8;
  lVar4 = local_78;
  uStack_70 = uStack_a0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  local_90 = plVar11;
  if ((local_78._4_4_ != iVar9) || (uStack_b0 != local_c8)) {
    iVar2 = local_78._4_4_;
    local_d4 = iVar9;
    local_78 = lVar4;
    do {
      lVar4 = *local_90;
      lVar7 = *(longlong *)(lVar4 + 0x10 + (longlong)iVar2 * 0x20);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x40) == -2) {
          plVar8 = *(longlong **)(lVar7 + 0x30);
          if (plVar8 == (longlong *)0x0) {
            plVar8 = (longlong *)0x0;
          }
          else {
            lVar7 = (**(code **)(*plVar8 + 8))(plVar8);
            lVar5 = FUN_1464af53c();
            plVar11 = local_d0;
            if ((lVar5 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) {
              plVar8 = (longlong *)0x0;
            }
            else if (*(longlong *)
                      (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                     lVar5 + 0x30) {
              plVar8 = (longlong *)0x0;
            }
          }
          plVar10 = (longlong *)(lVar4 + (longlong)iVar2 * 0x20 + 0x10);
          local_b8 = plVar8;
          FUN_1487fd652(local_c0,&local_b8,*plVar10);
          lVar7 = *plVar10;
          iVar9 = local_d4;
        }
        lVar4 = lVar7 + 0x80;
        local_68 = (longlong *)&DAT_100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        lStack_60 = lVar4;
        if (*(int *)(lVar7 + 0x98) == 0) {
          iVar2 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar2 = *(int *)(lVar7 + 0x98);
        }
        plVar8 = (longlong *)(lVar7 + 0x70);
        uStack_98 = CONCAT44(uStack_4c,uStack_50);
        uStack_a0 = local_58;
        uVar1 = uStack_a0;
        uStack_b0 = local_68;
        local_a8 = lStack_60;
        uStack_a0._4_4_ = (int)(local_58 >> 0x20);
        iVar3 = uStack_a0._4_4_;
        local_b8 = plVar8;
        if ((uStack_a0._4_4_ != iVar2) || (uStack_a0 = uVar1, lStack_60 != lVar4)) {
          do {
            uStack_a0 = uVar1;
            lVar7 = *local_b8;
            lVar5 = *(longlong *)(lVar7 + 0x10 + (longlong)iVar3 * 0x20);
            if (*(int *)(lVar5 + 0x40) == -2) {
              plVar10 = *(longlong **)(lVar5 + 0x30);
              if (plVar10 == (longlong *)0x0) {
                plVar10 = (longlong *)0x0;
              }
              else {
                lVar5 = (**(code **)(*plVar10 + 8))(plVar10);
                lVar6 = FUN_1464af43e();
                plVar11 = local_d0;
                if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) {
                  plVar10 = (longlong *)0x0;
                }
                else if (*(longlong *)
                          (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
                         lVar6 + 0x30) {
                  plVar10 = (longlong *)0x0;
                }
              }
              local_68 = plVar10;
              FUN_1487fd812(local_c0,&local_68,
                            *(undefined8 *)(lVar7 + (longlong)iVar3 * 0x20 + 0x10));
              iVar9 = local_d4;
            }
            uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
            FUN_1449c0562(&uStack_b0);
            iVar3 = uStack_a0._4_4_;
            uVar1 = uStack_a0;
          } while (local_b8 != plVar8 || (local_a8 != lVar4 || uStack_a0._4_4_ != iVar2));
        }
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar2 = local_78._4_4_;
      lVar4 = local_78;
    } while (local_90 != plVar11 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != local_c8 || local_78._4_4_ != iVar9));
  }
  local_78 = lVar4;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487fd652 FUN_1487fd652 body=447 status=ok
// SIG undefined FUN_1487fd652(void)

void FUN_1487fd652(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  byte *local_68;
  longlong *plStack_60;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[0] = 0;
  local_58[1] = 0;
  uVar4 = FUN_144aff4ae(param_3);
  cVar3 = FUN_1487fda30(param_1,local_58,param_3,uVar4);
  if (cVar3 != '\0') {
    local_68 = (byte *)0x0;
    plStack_60 = (longlong *)0x0;
    cVar3 = FUN_1446e9750(param_1,&local_68,local_58,0);
    plVar7 = plStack_60;
    if (((cVar3 != '\0') && (local_68 != (byte *)0x0)) && ((*local_68 & 0x6b) == 3)) {
      lVar5 = *param_2;
      if (lVar5 == 0) {
        lVar5 = FUN_1487e2cf8();
        *param_2 = lVar5;
        *(longlong *)(param_3 + 0x30) = lVar5;
LAB_1487fd7a2:
        FUN_1407d81c6(param_1,param_3);
        uVar6 = FUN_1464af53c();
        FUN_1446e7478(&local_68,*param_2,uVar6,0);
        *(undefined1 *)(*param_2 + 0x40) = 1;
        *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x44);
        lVar5 = *param_2;
      }
      else if (*(int *)(param_3 + 0x44) != *(int *)(param_3 + 0x40)) {
        plVar7 = (longlong *)FUN_1464af53c();
        (**(code **)(*plVar7 + 0x2f0))(plVar7,lVar5,1);
        plVar7 = (longlong *)FUN_1464af53c();
        (**(code **)(*plVar7 + 0x2e8))(plVar7,lVar5,1);
        goto LAB_1487fd7a2;
      }
      FUN_1487e3926(lVar5,local_58);
      plVar7 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      goto LAB_1487fd761;
    }
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if (*param_2 != 0) {
    FUN_1487e3926(*param_2,local_58);
    *(undefined1 *)(*param_2 + 0x40) = 0;
  }
LAB_1487fd761:
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fd812 FUN_1487fd812 body=450 status=ok
// SIG undefined FUN_1487fd812(void)

void FUN_1487fd812(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  byte *local_68;
  longlong *plStack_60;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[0] = 0;
  local_58[1] = 0;
  uVar4 = FUN_144aff4ae(param_3);
  cVar3 = FUN_1487fda30(param_1,local_58,param_3,uVar4);
  if (cVar3 != '\0') {
    local_68 = (byte *)0x0;
    plStack_60 = (longlong *)0x0;
    cVar3 = FUN_1446e9750(param_1,&local_68,local_58,0);
    plVar7 = plStack_60;
    if (((cVar3 != '\0') && (local_68 != (byte *)0x0)) && ((*local_68 & 0x6b) == 3)) {
      lVar5 = *param_2;
      if (lVar5 == 0) {
        lVar5 = FUN_1487e2c22();
        *param_2 = lVar5;
        *(longlong *)(param_3 + 0x30) = lVar5;
LAB_1487fd962:
        FUN_1400f0d6e(param_1,param_3,1);
        uVar6 = FUN_1464af43e();
        FUN_1446e7478(&local_68,*param_2,uVar6,0);
        *(undefined1 *)(*param_2 + 0x40) = 1;
        *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x44);
        lVar5 = *param_2;
      }
      else if (*(int *)(param_3 + 0x44) != *(int *)(param_3 + 0x40)) {
        plVar7 = (longlong *)FUN_1464af43e();
        (**(code **)(*plVar7 + 0x2f0))(plVar7,lVar5,1);
        plVar7 = (longlong *)FUN_1464af43e();
        (**(code **)(*plVar7 + 0x2e8))(plVar7,lVar5,1);
        goto LAB_1487fd962;
      }
      FUN_1487e3926(lVar5,local_58);
      plVar7 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      goto LAB_1487fd921;
    }
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if (*param_2 != 0) {
    FUN_1487e3926(*param_2,local_58);
    *(undefined1 *)(*param_2 + 0x40) = 0;
  }
LAB_1487fd921:
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fd9d6 FUN_1487fd9d6 body=89 status=ok
// SIG undefined FUN_1487fd9d6(void)

void FUN_1487fd9d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_144aff4ae(param_3);
  if (iVar1 == 1) {
    uVar3 = thunk_FUN_1400e3c00();
  }
  else {
    uVar3 = FUN_14173887e(param_1,param_3,1);
  }
  uVar2 = FUN_144aff4ae(param_3);
  FUN_1487fda30(param_1,param_2,uVar3,uVar2);
  return;
}



// FUNCTION 1487fda30 FUN_1487fda30 body=166 status=ok
// SIG undefined FUN_1487fda30(void)

bool FUN_1487fda30(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1487fdad8(0,&local_48);
  iVar3 = (int)uStack_40;
  if (0 < (longlong)(int)uStack_40) {
    uVar4 = (longlong)(int)uStack_40 + 1;
    do {
      lVar2 = local_48;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_144837cf2(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + -0x10 + uVar4 * 8);
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0 < iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fdad8 FUN_1487fdad8 body=303 status=ok
// SIG undefined FUN_1487fdad8(void)

void FUN_1487fdad8(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_58 [38];
  short local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    if ((longlong)(int)param_2[1] != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(*param_2 + lVar4) == param_3) goto LAB_1487fdba7;
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar4);
    }
    FUN_144837e54(param_3,0);
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144837cf2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_3;
    local_32 = -1;
    uVar2 = FUN_144a06846(param_3 + 0x48,param_1 + 0x340);
    piVar3 = (int *)FUN_144a89cb0(uVar2,&local_32);
    if ((((local_32 == *(short *)(param_1 + 0xb6)) && (*piVar3 != 0)) && (piVar3[1] != 0)) &&
       (*piVar3 != DAT_14c948000)) {
      iVar1 = FUN_144aff4ae(piVar3);
      if (iVar1 == param_4) {
        if (param_4 == 1) {
          lVar4 = thunk_FUN_1400e3c00();
        }
        else {
          lVar4 = FUN_14173887e(param_1,piVar3,1);
        }
        if (lVar4 != 0) {
          FUN_1487fdad8(param_1,param_2,lVar4,param_4);
        }
      }
    }
  }
LAB_1487fdba7:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fdc08 FUN_1487fdc08 body=270 status=ok
// SIG undefined FUN_1487fdc08(void)

undefined8 FUN_1487fdc08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 *local_70 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  int local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14141bbdc(param_2,local_50);
  if (local_48 == 2) {
    FUN_14141bbdc(param_2,local_70);
    local_60 = *local_70[0];
    local_58 = *(undefined4 *)(local_70[0] + 1);
    FUN_1448075d0(local_50);
    uVar1 = FUN_1487fdd18(param_1,local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    FUN_14141bbdc(param_2,local_70);
    local_80 = *(undefined8 *)((longlong)local_70[0] + 0xc);
    local_78 = *(undefined4 *)((longlong)local_70[0] + 0x14);
    FUN_1448075d0(local_50);
    uVar1 = FUN_1487fdde6(param_1,uVar1,local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar1 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fdd18 FUN_1487fdd18 body=205 status=ok
// SIG undefined FUN_1487fdd18(void)

ulonglong FUN_1487fdd18(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [40];
  ulonglong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a62e5c(local_30,param_2,*(undefined4 *)(param_1 + 0x338),*(undefined4 *)(param_1 + 0x33c));
  iVar1 = FUN_144aff4b2(local_30);
  if (iVar1 != 0) {
    FUN_144a78877(local_30[0] & 0xffffffff,iVar1);
  }
  iVar1 = FUN_1447fa34e((longlong *)(param_1 + 0x2e8));
  if (((iVar1 == -1) ||
      (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x2e8), lVar2 == 0)) ||
     (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    local_30[0] = *(ulonglong *)(lVar2 + 0x30);
    uVar3 = local_30[0];
    if (local_30[0] == 0) {
      FUN_1487fd652(param_1,local_30);
      uVar3 = local_30[0];
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fdde6 FUN_1487fdde6 body=280 status=ok
// SIG undefined FUN_1487fdde6(void)

ulonglong FUN_1487fdde6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x40) == '\x01')) {
    plVar4 = (longlong *)(param_2 + 8);
    if (*(char *)(param_2 + 0x10) != '\0') {
      if (*(char *)(param_2 + 0x10) != '\x02') goto LAB_1487fdede;
      plVar4 = (longlong *)(*plVar4 + 0x30);
    }
    if ((*plVar4 != 0) && (lVar2 = *(longlong *)(*plVar4 + 0x68), lVar2 != 0)) {
      FUN_144a62e5c(local_30,param_3,*(undefined4 *)(lVar2 + 0xc0),*(undefined4 *)(lVar2 + 0xc4));
      iVar1 = FUN_144aff4b2(local_30);
      if (iVar1 != 0) {
        FUN_144a78877(local_30[0] & 0xffffffff,iVar1);
      }
      iVar1 = FUN_144b0847a((longlong *)(lVar2 + 0x70));
      if (((iVar1 != -1) &&
          (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)(lVar2 + 0x70), lVar2 != 0)) &&
         (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 != 0)) {
        local_30[0] = *(ulonglong *)(lVar2 + 0x30);
        uVar3 = local_30[0];
        if (local_30[0] == 0) {
          FUN_1487fd812(param_1,local_30);
          uVar3 = local_30[0];
        }
        goto LAB_1487fdee0;
      }
    }
  }
LAB_1487fdede:
  uVar3 = 0;
LAB_1487fdee0:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fdf06 FUN_1487fdf06 body=136 status=ok
// SIG undefined FUN_1487fdf06(void)

longlong FUN_1487fdf06(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x40) == '\x01')) {
    plVar2 = (longlong *)(param_2 + 8);
    if (*(char *)(param_2 + 0x10) != '\0') {
      if (*(char *)(param_2 + 0x10) != '\x02') goto LAB_1487fdf70;
      plVar2 = (longlong *)(*plVar2 + 0x30);
    }
    if ((*plVar2 != 0) && (lVar1 = *(longlong *)(*plVar2 + 0x68), lVar1 != 0)) {
      local_18 = *(longlong *)(lVar1 + 0x30);
      lVar1 = local_18;
      if (local_18 == 0) {
        FUN_1487fd652(param_1,&local_18);
        lVar1 = local_18;
      }
      goto LAB_1487fdf72;
    }
  }
LAB_1487fdf70:
  lVar1 = 0;
LAB_1487fdf72:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fdf90 thunk_FUN_144837462 body=5 status=ok
// SIG undefined thunk_FUN_144837462(void)

void thunk_FUN_144837462(void)

{
  FUN_144837462();
  return;
}



// FUNCTION 1487fdf96 FUN_1487fdf96 body=74 status=ok
// SIG undefined FUN_1487fdf96(void)

void FUN_1487fdf96(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = FUN_145bc9f92();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(undefined1 *)(param_2 + 3) = param_3;
    }
  }
  return;
}



// FUNCTION 1487fdfe0 FUN_1487fdfe0 body=19 status=ok
// SIG undefined FUN_1487fdfe0(void)

void FUN_1487fdfe0(void)

{
  FUN_141499196();
  FUN_1487fce26();
  return;
}



// FUNCTION 1487fdff4 FUN_1487fdff4 body=8 status=ok
// SIG undefined FUN_1487fdff4(void)

undefined8 FUN_1487fdff4(void)

{
  return DAT_14cb73f60;
}



// FUNCTION 1487fe024 thunk_FUN_144837462 body=5 status=ok
// SIG undefined thunk_FUN_144837462(void)

void thunk_FUN_144837462(void)

{
  FUN_144837462();
  return;
}



// FUNCTION 1487fe02a FUN_1487fe02a body=74 status=ok
// SIG undefined FUN_1487fe02a(void)

void FUN_1487fe02a(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = FUN_145d3a0da();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(undefined1 *)(param_2 + 3) = param_3;
    }
  }
  return;
}



// FUNCTION 1487fe074 FUN_1487fe074 body=19 status=ok
// SIG undefined FUN_1487fe074(void)

void FUN_1487fe074(void)

{
  FUN_141499196();
  FUN_1487fce26();
  return;
}



// FUNCTION 1487fe088 FUN_1487fe088 body=8 status=ok
// SIG undefined FUN_1487fe088(void)

undefined8 FUN_1487fe088(void)

{
  return DAT_14cb73f80;
}



// FUNCTION 1487fe0b8 FUN_1487fe0b8 body=132 status=ok
// SIG undefined FUN_1487fe0b8(void)

undefined8 FUN_1487fe0b8(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *param_2 = 0;
  *param_3 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar2 = FUN_14018b740();
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_14018b740();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        uVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
        *param_2 = uVar1;
        uVar1 = (**(code **)(*plVar4 + 0x18))(plVar4);
        *param_3 = uVar1;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1487fe140 FUN_1487fe140 body=262 status=ok
// SIG undefined FUN_1487fe140(void)

undefined8 FUN_1487fe140(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
    uVar1 = FUN_140dddafc(param_2);
    FUN_1446dcdd4(local_48,&DAT_14cb73fb8);
    FUN_14045886c(uVar1,local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    uVar1 = FUN_140dddafc(param_2);
    FUN_1446dcdd4(local_48,&DAT_14cb73fc0);
    FUN_14045886c(uVar1,local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    uVar1 = FUN_140dddafc(param_2);
    FUN_1446dcdd4(local_48,&DAT_14cb73fc8);
    FUN_14045886c(uVar1,local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fe250 FUN_1487fe250 body=88 status=ok
// SIG undefined FUN_1487fe250(void)

bool FUN_1487fe250(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_14880c946(param_3);
  if (plVar2 != (longlong *)0x0) {
    if (*(char *)(param_1 + 8) == '\0') {
      lVar3 = 0x20;
    }
    else {
      if (*(char *)(param_1 + 8) != '\x01') goto LAB_1487fe29a;
      lVar3 = 0x30;
    }
    uVar1 = FUN_1405d5f74(param_4);
    (**(code **)(*plVar2 + lVar3))(plVar2,uVar1);
  }
LAB_1487fe29a:
  return plVar2 != (longlong *)0x0;
}



// FUNCTION 1487fe2a8 FUN_1487fe2a8 body=79 status=ok
// SIG undefined FUN_1487fe2a8(void)

undefined8 FUN_1487fe2a8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x10);
      }
                    /* WARNING: Could not recover jumptable at 0x0001487fe2e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1487fe2f8 FUN_1487fe2f8 body=121 status=ok
// SIG undefined FUN_1487fe2f8(void)

void FUN_1487fe2f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  ulonglong local_28;
  
  uVar1 = DAT_14cb84f20;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400f0e12(param_1,local_34,1);
  FUN_144a7660c(param_1,local_40,1);
  FUN_141871b10(uVar1,local_40,local_34);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487fe3a2 FUN_1487fe3a2 body=197 status=ok
// SIG undefined FUN_1487fe3a2(void)

longlong FUN_1487fe3a2(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_14585de9a();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1487fe4bc FUN_1487fe4bc body=114 status=ok
// SIG undefined FUN_1487fe4bc(void)

undefined8 FUN_1487fe4bc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_1459ef6d8();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (*(int *)(lVar1 + 0x3e0) != 0)) && (DAT_14c950c28 == '\0')) {
      uVar3 = FUN_14001cc68(0x3d0,0x10);
      FUN_1487fe52e(uVar3,param_1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1487fe52e FUN_1487fe52e body=3998 status=ok
// SIG undefined FUN_1487fe52e(void)

undefined8 * FUN_1487fe52e(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *pvVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined4 uVar21;
  double dVar22;
  int iVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 *puVar27;
  double dVar28;
  undefined4 uVar29;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong *local_190;
  longlong local_188;
  undefined8 *local_180;
  longlong local_178;
  double local_170;
  double local_168;
  longlong *local_160;
  double local_158;
  double dStack_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  void *local_120;
  int local_118;
  int local_114;
  undefined8 local_110;
  undefined1 local_108;
  void *local_100;
  int local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1406ff464();
  *param_1 = &PTR_FUN_14b3f08e0;
  *(undefined1 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(byte *)((longlong)param_1 + 0x6f) = *(byte *)((longlong)param_1 + 0x6f) & 0x7f;
  lVar15 = *(longlong *)(param_2 + 0xa8);
  if (lVar15 != 0) {
    lVar14 = FUN_1459ef6d8();
    if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8
         ) == lVar14 + 0x30)) goto LAB_1487fe61b;
  }
  lVar15 = 0;
LAB_1487fe61b:
  local_198 = param_1 + 0x72;
  param_1[0x71] = lVar15;
  lVar15 = FUN_1447210f0(lVar15);
  *(uint *)(param_1 + 0x78) = (uint)*(byte *)(lVar15 + 0x152);
  lVar15 = param_1[0x71];
  *(undefined1 *)((longlong)param_1 + 0x3c4) = *(undefined1 *)(lVar15 + 0x393);
  *(undefined4 *)(param_1 + 0x6f) = 0;
  lVar14 = *(longlong *)(lVar15 + 0x3b0);
  if (lVar14 == 0) {
    if (((9.999999747378752e-05 < ABS(*(double *)(lVar15 + 0x3c0))) ||
        (9.999999747378752e-05 < ABS(*(double *)(lVar15 + 0x3c8)))) ||
       (9.999999747378752e-05 < ABS(*(double *)(lVar15 + 0x3d0)))) {
      local_128 = *(double *)(lVar15 + 0x3d0);
      local_138 = *(double *)(lVar15 + 0x3c0);
      uStack_130 = *(double *)(lVar15 + 0x3c8);
      iVar23 = *(int *)(param_1 + 0x73);
      *(uint *)(param_1 + 0x73) = iVar23 + 1U;
      if (*(uint *)((longlong)param_1 + 0x39c) < iVar23 + 1U) {
        FUN_14880c976(local_198,iVar23);
      }
      lVar15 = *local_198;
      lVar14 = (longlong)iVar23 * 0x20;
      *(double *)(lVar15 + 0x10 + lVar14) = local_128;
      puVar18 = (undefined4 *)(lVar15 + lVar14);
      *puVar18 = (undefined4)local_138;
      puVar18[1] = local_138._4_4_;
      puVar18[2] = (undefined4)uStack_130;
      puVar18[3] = uStack_130._4_4_;
      *(undefined8 *)(lVar15 + 0x18 + lVar14) = 0x41c80000ffa907e4;
    }
  }
  else {
    uVar11 = *(undefined8 *)(lVar14 + 0x260);
    uVar12 = *(undefined8 *)(lVar14 + 0x268);
    uVar1 = *(undefined8 *)(lVar14 + 0x270);
    iVar23 = *(int *)(param_1 + 0x73);
    *(uint *)(param_1 + 0x73) = iVar23 + 1U;
    if (*(uint *)((longlong)param_1 + 0x39c) < iVar23 + 1U) {
      FUN_14880c976(local_198,iVar23);
    }
    lVar15 = param_1[0x72];
    lVar14 = (longlong)iVar23 * 0x20;
    *(undefined8 *)(lVar15 + lVar14) = uVar11;
    ((undefined8 *)(lVar15 + lVar14))[1] = uVar12;
    *(undefined8 *)(lVar15 + 0x10 + lVar14) = uVar1;
    *(undefined8 *)(lVar15 + 0x18 + lVar14) = 0x41c80000ffa907e4;
    lVar15 = param_1[0x71];
    if (((9.999999747378752e-05 < ABS(*(double *)(lVar15 + 0x3c0))) ||
        (9.999999747378752e-05 < ABS(*(double *)(lVar15 + 0x3c8)))) ||
       (9.999999747378752e-05 < ABS(*(double *)(lVar15 + 0x3d0)))) {
      uVar11 = *(undefined8 *)(lVar15 + 0x3c0);
      uVar12 = *(undefined8 *)(lVar15 + 0x3c8);
      uVar1 = *(undefined8 *)(lVar15 + 0x3d0);
      iVar23 = *(int *)(param_1 + 0x73);
      *(uint *)(param_1 + 0x73) = iVar23 + 1U;
      if (*(uint *)((longlong)param_1 + 0x39c) < iVar23 + 1U) {
        FUN_14880c976(local_198,iVar23);
      }
      lVar15 = *local_198;
      lVar14 = (longlong)iVar23 * 0x20;
      *(undefined8 *)(lVar15 + lVar14) = uVar11;
      ((undefined8 *)(lVar15 + lVar14))[1] = uVar12;
      *(undefined8 *)(lVar15 + 0x10 + lVar14) = uVar1;
      *(undefined8 *)(lVar15 + 0x18 + lVar14) = 0x41c80000ffa907e4;
    }
  }
  lVar15 = (longlong)*(int *)(param_1[0x71] + 0x3e0);
  if (lVar15 != 0) {
    local_190 = param_1 + 0x74;
    local_160 = param_1 + 0x76;
    lVar14 = *(longlong *)(param_1[0x71] + 0x3d8);
    local_148 = lVar14 + lVar15 * 0x28;
    do {
      local_140 = lVar14;
      lVar15 = FUN_1487fe3a2();
      if (lVar15 != 0) {
        dVar22 = (double)param_1[0x71];
        if (*(char *)((longlong)dVar22 + 0x395) == '\x01') {
          uVar11 = *(undefined8 *)(lVar15 + 0x260);
          uVar12 = *(undefined8 *)(lVar15 + 0x268);
          uVar1 = *(undefined8 *)(lVar15 + 0x270);
          iVar23 = *(int *)(param_1 + 0x73);
          *(uint *)(param_1 + 0x73) = iVar23 + 1U;
          if (*(uint *)((longlong)param_1 + 0x39c) < iVar23 + 1U) {
            FUN_14880c976(local_198,iVar23);
          }
          lVar14 = param_1[0x72];
          lVar25 = (longlong)iVar23 * 0x20;
          *(undefined8 *)(lVar14 + lVar25) = uVar11;
          ((undefined8 *)(lVar14 + lVar25))[1] = uVar12;
          *(undefined8 *)(lVar14 + 0x10 + lVar25) = uVar1;
          *(undefined8 *)(lVar14 + 0x18 + lVar25) = 0x41700000ff00ff00;
          dVar22 = (double)param_1[0x71];
        }
        if ((*(char *)((longlong)dVar22 + 0x396) == '\x01') &&
           ((longlong)*(int *)(lVar15 + 0x2c0) != 0)) {
          lVar14 = *(longlong *)(lVar15 + 0x2b8);
          lVar25 = (longlong)*(int *)(lVar15 + 0x2c0) * 0x58 + lVar14;
          do {
            lVar17 = lVar14 + 0x30;
            lVar16 = FUN_1487fe3a2(lVar17);
            if (lVar16 != 0) {
              local_158 = *(double *)(lVar15 + 0x260);
              dStack_150 = *(double *)(lVar15 + 0x268);
              local_180 = *(undefined8 **)(lVar15 + 0x270);
              lVar16 = FUN_1487fe3a2(lVar17);
              dVar4 = DAT_14c8462d0;
              dVar3 = DAT_14c8462c0;
              dVar2 = *(double *)(lVar16 + 0x270) - *(double *)(lVar15 + 0x270);
              dVar9 = *(double *)(lVar16 + 0x260) - *(double *)(lVar15 + 0x260);
              dVar10 = *(double *)(lVar16 + 0x268) - *(double *)(lVar15 + 0x268);
              dVar22 = dVar2 * dVar2 + dVar9 * dVar9 + dVar10 * dVar10;
              if ((dVar22 != 1.0) || (NAN(dVar22))) {
                if (9.99999993922529e-09 <= dVar22) {
                  dVar28 = 1.0 / SQRT(dVar22);
                  dVar2 = dVar2 * dVar28;
                  dVar10 = dVar10 * dVar28;
                  dVar9 = dVar9 * dVar28;
                }
                else {
                  dVar9 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                  dVar10 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                  dVar2 = DAT_14c8464f0;
                }
              }
              local_168 = DAT_14c8462c8;
              lVar17 = FUN_1487fe3a2(lVar17);
              puVar18 = &DAT_149e1e2f0;
              uVar29 = 0x41c80000;
              if (0 < *(int *)(lVar17 + 0x2c0)) {
                lVar20 = 0x30;
                lVar16 = 0;
                do {
                  lVar26 = FUN_1487fe3a2(*(longlong *)(lVar17 + 0x2b8) + lVar20);
                  if (lVar26 == lVar15) {
                    puVar18 = &DAT_149e1b56c;
                    uVar29 = 0x42480000;
                    goto LAB_1487fe989;
                  }
                  lVar16 = lVar16 + 1;
                  lVar20 = lVar20 + 0x58;
                } while (lVar16 < *(int *)(lVar17 + 0x2c0));
                puVar18 = &DAT_149e1e2f0;
                uVar29 = 0x41c80000;
              }
LAB_1487fe989:
              local_170 = dVar3;
              uVar21 = *puVar18;
              iVar23 = *(int *)(param_1 + 0x75);
              *(uint *)(param_1 + 0x75) = iVar23 + 1U;
              local_188 = CONCAT44(local_188._4_4_,uVar29);
              if (*(uint *)((longlong)param_1 + 0x3ac) < iVar23 + 1U) {
                FUN_14880c9fc(local_190,iVar23);
                uVar29 = (undefined4)local_188;
              }
              dVar6 = dStack_150;
              dVar3 = (double)((float)SQRT(dVar22) + -100.0);
              dVar5 = dVar2 * dVar3 + (double)local_180;
              dVar28 = dVar10 * dVar3 + dStack_150;
              dVar3 = dVar3 * dVar9 + local_158;
              lVar17 = param_1[0x74];
              lVar16 = (longlong)iVar23 * 0x38;
              *(double *)(lVar17 + lVar16) = dVar9 * 100.0 + local_158;
              *(double *)(lVar17 + 8 + lVar16) = dVar10 * 100.0 + dStack_150;
              *(double *)(lVar17 + 0x10 + lVar16) = dVar2 * 100.0 + (double)local_180;
              *(double *)(lVar17 + 0x18 + lVar16) = dVar3;
              *(double *)(lVar17 + 0x20 + lVar16) = dVar28;
              *(double *)(lVar17 + 0x28 + lVar16) = dVar5;
              *(undefined4 *)(lVar17 + 0x30 + lVar16) = uVar21;
              *(undefined4 *)(lVar17 + 0x34 + lVar16) = uVar29;
              if (*(char *)(param_1[0x71] + 0x397) == '\x01') {
                dVar22 = (double)(float)SQRT(dVar22);
                FUN_140002266(&local_100,L"Cost: %0.2f",dVar22);
                local_128 = DAT_14c8464f0;
                local_138 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                uStack_130 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                FUN_140056680(&local_120,L"Default Text");
                iVar23 = local_f8;
                pvVar13 = local_100;
                local_110 = &DAT_3f800000ffffffff;
                local_108 = 0;
                lVar17 = (longlong)local_f8;
                local_118 = local_f8;
                if (local_f8 == 0 && local_114 == 0) {
                  local_114 = 0;
                }
                else {
                  FUN_1446dd670(&local_120,local_f8);
                  if (iVar23 != 0) {
                    memcpy(local_120,pvVar13,lVar17 * 2);
                  }
                }
                local_178 = CONCAT44(local_178._4_4_,uVar21);
                local_128 = (double)local_180 + dVar2 * dVar22 * 0.5;
                uStack_130 = dVar10 * dVar22 * 0.5 + dVar6;
                local_138 = dVar22 * dVar9 * 0.5 + local_158;
                local_110 = (undefined1 *)CONCAT44(local_110._4_4_,0xffffffff);
                uVar29 = FUN_145788320(0,0);
                local_110 = (undefined1 *)CONCAT44(uVar29,(undefined4)local_110);
                local_108 = 1;
                iVar23 = *(int *)(param_1 + 0x77);
                *(uint *)(param_1 + 0x77) = iVar23 + 1U;
                if (*(uint *)((longlong)param_1 + 0x3bc) < iVar23 + 1U) {
                  FUN_14880ca8c(local_160,iVar23);
                }
                pvVar13 = local_120;
                lVar16 = *local_160;
                lVar20 = (longlong)iVar23 * 0x38;
                lVar17 = lVar16 + lVar20;
                *(double *)(lVar16 + 0x10 + lVar20) = local_128;
                puVar18 = (undefined4 *)(lVar16 + lVar20);
                *puVar18 = (undefined4)local_138;
                puVar18[1] = local_138._4_4_;
                puVar18[2] = (undefined4)uStack_130;
                puVar18[3] = uStack_130._4_4_;
                *(undefined8 *)(lVar16 + 0x18 + lVar20) = 0;
                lVar26 = (longlong)local_118;
                *(int *)(lVar16 + 0x20 + lVar20) = local_118;
                if (lVar26 == 0) {
                  *(undefined4 *)(lVar17 + 0x24) = 0;
                }
                else {
                  local_180 = (undefined8 *)(lVar20 + lVar16 + 0x18);
                  FUN_1446dd670(local_180,local_118,0);
                  memcpy((void *)*local_180,pvVar13,lVar26 * 2);
                }
                uVar21 = (undefined4)local_178;
                *(undefined1 *)(lVar17 + 0x30) = local_108;
                *(undefined1 **)(lVar17 + 0x28) = local_110;
                if (local_120 != (void *)0x0) {
                  FUN_1400020a8();
                }
                uVar29 = (undefined4)local_188;
                if (local_100 != (void *)0x0) {
                  FUN_1400020a8();
                  uVar29 = (undefined4)local_188;
                }
              }
              iVar23 = *(int *)(param_1 + 0x75);
              *(uint *)(param_1 + 0x75) = iVar23 + 1U;
              if (*(uint *)((longlong)param_1 + 0x3ac) < iVar23 + 1U) {
                FUN_14880c9fc(local_190,iVar23);
                uVar29 = (undefined4)local_188;
              }
              dVar6 = (local_170 * dVar10 - dVar9 * local_168) * 100.0;
              dVar7 = (dVar4 * dVar9 - dVar2 * local_170) * 100.0;
              dVar4 = (local_168 * dVar2 - dVar10 * dVar4) * 100.0;
              dVar22 = dVar28 - (dVar10 * 200.0 + dVar7);
              lVar17 = param_1[0x74];
              lVar16 = (longlong)iVar23 * 0x38;
              *(double *)(lVar17 + lVar16) = dVar3;
              *(double *)(lVar17 + 8 + lVar16) = dVar28;
              *(double *)(lVar17 + 0x10 + lVar16) = dVar5;
              *(double *)(lVar17 + 0x18 + lVar16) = dVar3 - (dVar9 * 200.0 + dVar4);
              *(double *)(lVar17 + 0x20 + lVar16) = dVar22;
              *(double *)(lVar17 + 0x28 + lVar16) = dVar5 - (dVar2 * 200.0 + dVar6);
              *(undefined4 *)(lVar17 + 0x30 + lVar16) = uVar21;
              *(undefined4 *)(lVar17 + 0x34 + lVar16) = uVar29;
              iVar23 = *(int *)(param_1 + 0x75);
              *(uint *)(param_1 + 0x75) = iVar23 + 1U;
              if (*(uint *)((longlong)param_1 + 0x3ac) < iVar23 + 1U) {
                FUN_14880c9fc(SUB84(dVar22,0),iVar23);
                uVar29 = (undefined4)local_188;
              }
              lVar17 = *local_190;
              lVar16 = (longlong)iVar23 * 0x38;
              *(double *)(lVar17 + lVar16) = dVar3;
              *(double *)(lVar17 + 8 + lVar16) = dVar28;
              *(double *)(lVar17 + 0x10 + lVar16) = dVar5;
              *(double *)(lVar17 + 0x18 + lVar16) = dVar3 - (dVar9 * 200.0 - dVar4);
              *(double *)(lVar17 + 0x20 + lVar16) = dVar28 - (dVar10 * 200.0 - dVar7);
              *(double *)(lVar17 + 0x28 + lVar16) = dVar5 - (dVar2 * 200.0 - dVar6);
              *(undefined4 *)(lVar17 + 0x30 + lVar16) = uVar21;
              *(undefined4 *)(lVar17 + 0x34 + lVar16) = uVar29;
            }
            lVar14 = lVar14 + 0x58;
          } while (lVar14 != lVar25);
          dVar22 = (double)param_1[0x71];
        }
        iVar23 = *(int *)((longlong)dVar22 + 0x3f0);
        if (0 < iVar23) {
          lVar15 = *(longlong *)((longlong)dVar22 + 1000);
          lVar14 = 0;
          plVar19 = local_198;
          plVar24 = local_190;
          local_170 = dVar22;
          do {
            if (((*(char *)(lVar15 + 0x11 + lVar14 * 0x28) == '\x01') &&
                (*(int *)(lVar15 + lVar14 * 0x28 + 0x20) != 0)) &&
               (0 < *(int *)(lVar15 + 0x20 + lVar14 * 0x28))) {
              lVar25 = lVar15 + lVar14 * 0x28;
              puVar27 = (undefined8 *)0x0;
              lVar17 = 0;
              local_178 = lVar14;
              local_168 = (double)(lVar14 * 5);
              do {
                local_158 = *(double *)(lVar25 + 0x18);
                local_188 = (longlong)puVar27 * 0x30;
                uVar29 = 0xff00ffff;
                if (puVar27 == (undefined8 *)0x0) {
                  uVar29 = 0xff0000ff;
                }
                local_180 = (undefined8 *)((longlong)puVar27 + 1);
                dVar22 = (double)(int)local_180;
                dVar9 = DAT_14c8462d0 * 100.0 * dVar22;
                dVar10 = DAT_14c8462c8 * 100.0 * dVar22;
                dVar22 = DAT_14c8462c0 * 100.0 * dVar22;
                lVar15 = (longlong)*(int *)((longlong)local_158 + 0x10 + local_188);
                if (lVar15 != 0) {
                  lVar14 = *(longlong *)((longlong)local_158 + 8 + local_188);
                  lVar16 = 0;
                  lVar25 = lVar17;
                  do {
                    lVar17 = *(longlong *)(lVar14 + lVar16);
                    dVar2 = *(double *)(lVar17 + 0x270);
                    dVar3 = *(double *)(lVar17 + 0x268);
                    dVar4 = *(double *)(lVar17 + 0x260);
                    iVar23 = *(int *)(param_1 + 0x73);
                    *(uint *)(param_1 + 0x73) = iVar23 + 1U;
                    if (*(uint *)((longlong)param_1 + 0x39c) < iVar23 + 1U) {
                      FUN_14880c976(plVar19,iVar23);
                      plVar19 = local_198;
                      plVar24 = local_190;
                    }
                    lVar20 = *plVar19;
                    lVar26 = (longlong)iVar23 * 0x20;
                    *(double *)(lVar20 + lVar26) = dVar4 + dVar22;
                    *(double *)(lVar20 + 8 + lVar26) = dVar3 + dVar10;
                    *(double *)(lVar20 + 0x10 + lVar26) = dVar2 + dVar9;
                    *(undefined4 *)(lVar20 + 0x18 + lVar26) = uVar29;
                    *(undefined4 *)(lVar20 + 0x1c + lVar26) = 0x41700000;
                    if (lVar25 != 0) {
                      dVar2 = *(double *)(lVar17 + 0x270);
                      dVar3 = *(double *)(lVar17 + 0x268);
                      dVar4 = *(double *)(lVar17 + 0x260);
                      dVar28 = *(double *)(lVar25 + 0x270);
                      dVar5 = *(double *)(lVar25 + 0x268);
                      dVar6 = *(double *)(lVar25 + 0x260);
                      iVar23 = *(int *)(param_1 + 0x75);
                      *(uint *)(param_1 + 0x75) = iVar23 + 1U;
                      if (*(uint *)((longlong)param_1 + 0x3ac) < iVar23 + 1U) {
                        FUN_14880c9fc(plVar24,iVar23);
                        plVar19 = local_198;
                        plVar24 = local_190;
                      }
                      lVar25 = *plVar24;
                      lVar20 = (longlong)iVar23 * 0x38;
                      *(double *)(lVar25 + lVar20) = dVar4 + dVar22;
                      *(double *)(lVar25 + 8 + lVar20) = dVar3 + dVar10;
                      *(double *)(lVar25 + 0x10 + lVar20) = dVar2 + dVar9;
                      *(double *)(lVar25 + 0x18 + lVar20) = dVar6 + dVar22;
                      *(double *)(lVar25 + 0x20 + lVar20) = dVar5 + dVar10;
                      *(double *)(lVar25 + 0x28 + lVar20) = dVar28 + dVar9;
                      *(undefined4 *)(lVar25 + 0x30 + lVar20) = uVar29;
                      *(undefined4 *)(lVar25 + 0x34 + lVar20) = 0x41c80000;
                    }
                    lVar16 = lVar16 + 8;
                    lVar25 = lVar17;
                  } while (lVar15 * 8 != lVar16);
                }
                dVar3 = local_168;
                dVar2 = local_170;
                puVar27 = local_180;
                if (lVar17 != 0) {
                  lVar15 = (longlong)local_158 + local_188;
                  dVar4 = *(double *)(lVar15 + 0x28);
                  dVar28 = *(double *)(lVar15 + 0x20);
                  dVar5 = *(double *)(lVar15 + 0x18);
                  iVar23 = *(int *)(param_1 + 0x73);
                  *(uint *)(param_1 + 0x73) = iVar23 + 1U;
                  if (*(uint *)((longlong)param_1 + 0x39c) < iVar23 + 1U) {
                    FUN_14880c976(plVar19,iVar23);
                    plVar19 = local_198;
                    plVar24 = local_190;
                  }
                  lVar14 = param_1[0x72];
                  lVar25 = (longlong)iVar23 * 0x20;
                  *(double *)(lVar14 + lVar25) = dVar5 + dVar22;
                  *(double *)(lVar14 + 8 + lVar25) = dVar28 + dVar10;
                  *(double *)(lVar14 + 0x10 + lVar25) = dVar4 + dVar9;
                  *(undefined8 *)(lVar14 + 0x18 + lVar25) = 0x41700000ffff0000;
                  dVar4 = *(double *)(lVar17 + 0x270);
                  dVar28 = *(double *)(lVar17 + 0x268);
                  dVar5 = *(double *)(lVar17 + 0x260);
                  dVar6 = *(double *)(lVar15 + 0x28);
                  dVar7 = *(double *)(lVar15 + 0x20);
                  dVar8 = *(double *)(lVar15 + 0x18);
                  iVar23 = *(int *)(param_1 + 0x75);
                  *(uint *)(param_1 + 0x75) = iVar23 + 1U;
                  if (*(uint *)((longlong)param_1 + 0x3ac) < iVar23 + 1U) {
                    FUN_14880c9fc(plVar24,iVar23);
                    plVar19 = local_198;
                    plVar24 = local_190;
                  }
                  lVar15 = *plVar24;
                  lVar14 = (longlong)iVar23 * 0x38;
                  *(double *)(lVar15 + lVar14) = dVar5 + dVar22;
                  *(double *)(lVar15 + 8 + lVar14) = dVar28 + dVar10;
                  *(double *)(lVar15 + 0x10 + lVar14) = dVar4 + dVar9;
                  *(double *)(lVar15 + 0x18 + lVar14) = dVar22 + dVar8;
                  *(double *)(lVar15 + 0x20 + lVar14) = dVar10 + dVar7;
                  *(double *)(lVar15 + 0x28 + lVar14) = dVar9 + dVar6;
                  *(undefined4 *)(lVar15 + 0x30 + lVar14) = uVar29;
                  *(undefined4 *)(lVar15 + 0x34 + lVar14) = 0x41c80000;
                }
                lVar15 = *(longlong *)((longlong)dVar2 + 1000);
                lVar25 = lVar15 + (longlong)dVar3 * 8;
              } while ((longlong)puVar27 < (longlong)*(int *)(lVar25 + 0x20));
              iVar23 = *(int *)((longlong)dVar2 + 0x3f0);
              lVar14 = local_178;
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 < iVar23);
        }
      }
      lVar14 = local_140 + 0x28;
    } while (lVar14 != local_148);
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1487ff4fe FUN_1487ff4fe body=101 status=ok
// SIG undefined FUN_1487ff4fe(void)

void FUN_1487ff4fe(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_14880cb1c(param_1,param_3);
  }
  do {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_14880cb72(param_1,iVar2);
    }
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1487ff564 FUN_1487ff564 body=257 status=ok
// SIG undefined FUN_1487ff564(void)

float FUN_1487ff564(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar3 = DAT_14cb74110;
  dVar2 = 1.0;
  dVar1 = dVar2;
  if (*(char *)(param_1 + 0x23) == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar4 ^ 1);
    }
    dVar1 = (double)*(float *)(lVar3 + uVar5 * 4);
  }
  lVar3 = DAT_14cb74110;
  if (*(char *)(param_2 + 0x23) == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar4 ^ 1);
    }
    dVar2 = (double)*(float *)(lVar3 + uVar5 * 4);
  }
  dVar6 = *(double *)(param_1 + 0x18) - *(double *)(param_2 + 0x18);
  dVar8 = *(double *)(param_1 + 0x10) - *(double *)(param_2 + 0x10);
  dVar7 = *(double *)(param_1 + 8) - *(double *)(param_2 + 8);
  dVar2 = dVar1 * (dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8) * dVar2;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  return (float)dVar2;
}



// FUNCTION 1487ff666 FUN_1487ff666 body=93 status=ok
// SIG undefined FUN_1487ff666(void)

undefined8 * FUN_1487ff666(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = param_1 + 1;
  FUN_14880cbf8(puVar1);
  param_1[0xd] = puVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = puVar1;
  param_1[0x11] = param_1 + 0xd;
  FUN_147f0b62e(param_1 + 0xe,0x40);
  if (*(int *)((longlong)param_1 + 0x14) < 0x40) {
    FUN_14880d06c(puVar1);
  }
  return param_1;
}



// FUNCTION 1487ff6c4 FUN_1487ff6c4 body=1538 status=ok
// SIG undefined FUN_1487ff6c4(void)

char FUN_1487ff6c4(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  byte *pbVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  size_t sVar18;
  char cVar19;
  uint uVar20;
  int *piVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong *plVar27;
  size_t _Size;
  longlong lVar28;
  float fVar29;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  int *local_90;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar26 = *param_2;
  cVar19 = '\0';
  if ((((lVar26 != 0) && (0 < *(int *)(lVar26 + 0x30))) && (lVar28 = *param_3, lVar28 != 0)) &&
     ((cVar19 = '\0', 0 < *(int *)(lVar28 + 0x30) && (cVar19 = '\x01', lVar26 != lVar28)))) {
    local_c8 = (longlong *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)(param_1 + 0x14) < 0x40) {
      FUN_14880d06c(local_c8);
    }
    local_a8 = param_1 + 0x18;
    FUN_14880d138();
    lVar26 = param_1 + 0x70;
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (*(int *)(param_1 + 0x7c) < 0) {
      FUN_147f0b62e(lVar26,0);
    }
    iVar4 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar4 + 1U) {
      FUN_14880d2dc(local_c8,iVar4);
    }
    lVar28 = *(longlong *)(param_1 + 8);
    lVar6 = *param_2;
    iVar24 = *(int *)((longlong)param_2 + 4);
    lVar23 = param_2[1];
    iVar10 = *(int *)((longlong)param_2 + 0xc);
    lVar15 = param_2[2];
    iVar11 = *(int *)((longlong)param_2 + 0x14);
    lVar16 = param_2[3];
    iVar12 = *(int *)((longlong)param_2 + 0x1c);
    iVar13 = *(int *)((longlong)param_2 + 0x24);
    lVar17 = param_2[5];
    iVar14 = *(int *)((longlong)param_2 + 0x2c);
    piVar21 = (int *)(lVar28 + 0x20 + (longlong)iVar4 * 0x30);
    *piVar21 = (int)param_2[4];
    piVar21[1] = iVar13;
    piVar21[2] = (int)lVar17;
    piVar21[3] = iVar14;
    piVar21[-4] = (int)lVar15;
    piVar21[-3] = iVar11;
    piVar21[-2] = (int)lVar16;
    piVar21[-1] = iVar12;
    piVar21[-8] = (int)lVar6;
    piVar21[-7] = iVar24;
    piVar21[-6] = (int)lVar23;
    piVar21[-5] = iVar10;
    *piVar21 = (int)((ulonglong)((lVar28 + (longlong)iVar4 * 0x30) - *(longlong *)(param_1 + 8)) >>
                    4) * -0x55555555;
    local_98 = param_2;
    local_90 = piVar21;
    FUN_14880d370(local_a8,&local_84);
    piVar21[-4] = 0;
    piVar21[-3] = 0;
    fVar29 = (float)FUN_1487ff564(*param_2,*param_3);
    *(double *)(piVar21 + -2) = (double)fVar29;
    FUN_14880d68e(lVar26,piVar21,*(undefined8 *)(param_1 + 0x88));
    *(byte *)(piVar21 + 2) = *(byte *)(piVar21 + 2) | 1;
    local_c0 = (ulonglong)*piVar21;
    dVar2 = *(double *)(piVar21 + -2);
    local_a0 = *(longlong *)(*(longlong *)(param_1 + 8) + local_c0 * 0x30);
    iVar4 = *(int *)(param_1 + 0x78);
    plVar27 = local_c8;
    lVar28 = local_b8;
    while (local_b8 = lVar26, 0 < iVar4) {
      uVar22 = (ulonglong)local_98 >> 0x20;
      local_98 = (longlong *)CONCAT44((int)uVar22,0xffffffff);
      FUN_14880d7b6(local_b8,&local_98,*(undefined8 *)(param_1 + 0x88));
      lVar6 = (longlong)(int)local_98 * 0x30;
      pbVar1 = (byte *)(**(longlong **)(param_1 + 0x80) + 0x28 + lVar6);
      *pbVar1 = *pbVar1 & 0xfe;
      lVar26 = *(longlong *)(param_1 + 8);
      pbVar1 = (byte *)(lVar26 + 0x28 + lVar6);
      *pbVar1 = *pbVar1 | 2;
      lVar28 = *(longlong *)(lVar26 + lVar6);
      plVar27 = local_c8;
      if (lVar28 == *param_3) {
        local_c0 = (ulonglong)*(uint *)(lVar26 + lVar6 + 0x20);
        goto LAB_1487ff9af;
      }
      if (lVar28 != 0) {
        iVar4 = *(int *)(lVar28 + 0x30);
        if (0 < (longlong)iVar4) {
          lVar26 = (longlong)(int)local_98 * 0x30;
          lVar28 = 0;
          local_b0 = lVar6;
          do {
            plVar25 = *(longlong **)(*plVar27 + lVar26);
            if (((plVar25 == (longlong *)0x0) ||
                (plVar5 = *(longlong **)(plVar25[5] + lVar28 * 8), plVar5 == (longlong *)0x0)) ||
               ((int)plVar5[6] < 1)) {
              if (iVar4 == 0x7fffffff) break;
            }
            else if ((((plVar5 != plVar25) && (plVar5 != *(longlong **)(*plVar27 + lVar26 + 8))) &&
                     (cVar19 = FUN_143cd662e(plVar25,plVar5), plVar27 = local_c8, cVar19 != '\0'))
                    && (((char)plVar25[4] == '\0' && ((char)plVar5[4] == '\0')))) {
              local_84 = 0xffffffff;
              uVar20 = ((uint)((ulonglong)plVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar5 >> 4))
                       * -0x7a143595;
              uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
              local_98 = plVar5;
              piVar21 = (int *)FUN_14880d8b6(local_a8,uVar20 >> 0x10 ^ uVar20,&local_98,&local_84);
              if ((longlong)*piVar21 == -1) {
                iVar24 = *(int *)(param_1 + 0x10);
                *(uint *)(param_1 + 0x10) = iVar24 + 1U;
                if (*(uint *)(param_1 + 0x14) < iVar24 + 1U) {
                  FUN_14880d2dc(local_c8,iVar24);
                }
                lVar6 = *local_c8;
                lVar23 = (longlong)iVar24 * 0x30;
                *(longlong **)(lVar6 + lVar23) = local_98;
                *(undefined8 *)(lVar6 + 8 + lVar23) = 0;
                *(undefined8 *)(lVar6 + 0x10 + lVar23) = 0x7fefffffffffffff;
                *(undefined8 *)(lVar6 + 0x18 + lVar23) = 0x7fefffffffffffff;
                *(undefined8 *)(lVar6 + 0x20 + lVar23) = 0xffffffffffffffff;
                pbVar1 = (byte *)(lVar6 + 0x28 + lVar23);
                *pbVar1 = *pbVar1 & 0xfc;
                plVar25 = (longlong *)(lVar6 + lVar23);
                iVar24 = (int)((ulonglong)((longlong)plVar25 - *local_c8) >> 4) * -0x55555555;
                *(int *)(lVar6 + 0x20 + lVar23) = iVar24;
                *piVar21 = iVar24;
              }
              else {
                plVar25 = (longlong *)((longlong)*piVar21 * 0x30 + *local_c8);
              }
              lVar6 = local_b0;
              plVar27 = local_c8;
              if ((*(byte *)(plVar25 + 5) & 2) == 0) {
                fVar29 = (float)FUN_1487ff564(*(undefined8 *)(*local_c8 + local_b0),*plVar25);
                dVar9 = (double)fVar29 + *(double *)(*local_c8 + 0x10 + lVar6);
                dVar8 = 0.0;
                if (*plVar25 != *param_3) {
                  fVar29 = (float)FUN_1487ff564();
                  dVar8 = (double)fVar29;
                }
                dVar7 = dVar9 + dVar8;
                plVar27 = local_c8;
                if (dVar7 < (double)plVar25[3]) {
                  plVar25[2] = (longlong)dVar9;
                  plVar25[3] = (longlong)dVar7;
                  plVar25[1] = *(longlong *)(*local_c8 + local_b0);
                  *(undefined4 *)((longlong)plVar25 + 0x24) =
                       *(undefined4 *)(*local_c8 + 0x20 + local_b0);
                  bVar3 = *(byte *)(plVar25 + 5);
                  *(byte *)(plVar25 + 5) = bVar3 & 0xfd;
                  if ((bVar3 & 1) == 0) {
                    FUN_14880d68e(local_b8,plVar25 + 4,*(undefined8 *)(param_1 + 0x88));
                    *(byte *)(plVar25 + 5) = *(byte *)(plVar25 + 5) | 1;
                  }
                  else {
                    FUN_14880d72a(local_b8,plVar25);
                  }
                  plVar27 = local_c8;
                  if (dVar8 < dVar2) {
                    local_c0 = (ulonglong)*(uint *)(plVar25 + 4);
                    dVar2 = dVar8;
                  }
                }
              }
            }
            lVar28 = lVar28 + 1;
          } while (iVar4 != lVar28);
        }
      }
      lVar26 = local_b8;
      lVar28 = local_b8;
      iVar4 = *(int *)(param_1 + 0x78);
    }
    cVar19 = '\x02';
    local_b8 = lVar28;
    if ((dVar2 == 0.0) && (!NAN(dVar2))) {
LAB_1487ff9af:
      uVar22 = local_c0;
      lVar26 = 1;
      sVar18 = 8;
      do {
        _Size = sVar18;
        lVar28 = lVar26;
        iVar4 = *(int *)(*plVar27 + 0x24 + (longlong)(int)uVar22 * 0x30);
        uVar22 = (ulonglong)iVar4;
        iVar24 = (int)lVar28;
        if ((((longlong)uVar22 < 0) || (*(int *)(param_1 + 0x10) <= iVar4)) ||
           (*(longlong *)(*plVar27 + uVar22 * 0x30) == local_a0)) break;
        lVar26 = lVar28 + 1;
        sVar18 = _Size + 8;
      } while (iVar24 - 1U < 9999);
      FUN_14880d10e(param_4);
      iVar4 = (int)param_4[1];
      *(int *)(param_4 + 1) = iVar4 + iVar24;
      if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar4) <= iVar24 - 1U) {
        FUN_141873c2e(param_4);
      }
      cVar19 = (0x270e < iVar24 - 1U) * '\x02' + '\x01';
      memset((void *)((longlong)iVar4 * 8 + *param_4),0,_Size);
      lVar26 = (longlong)(int)local_c0;
      *(undefined8 *)(*param_4 + -8 + lVar28 * 8) = *(undefined8 *)(*local_c8 + lVar26 * 0x30);
      if (iVar24 != 1) {
        do {
          lVar26 = (longlong)*(int *)(*local_c8 + 0x24 + lVar26 * 0x30);
          *(undefined8 *)(*param_4 + -0x10 + lVar28 * 8) =
               *(undefined8 *)(*local_c8 + lVar26 * 0x30);
          lVar28 = lVar28 + -1;
        } while (1 < lVar28);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return cVar19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ffcc8 FUN_1487ffcc8 body=92 status=ok
// SIG undefined FUN_1487ffcc8(void)

void FUN_1487ffcc8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 2;
  do {
    lVar1 = *(longlong *)(param_1 + lVar2 * 8);
    if (lVar1 != 0) {
      FUN_14031ec32(lVar1);
      FUN_1400020a8(lVar1);
      *(undefined8 *)(param_1 + lVar2 * 8) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 6);
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14880dc6c(param_1);
  }
  *(undefined1 *)(param_1 + 0x6c) = 0;
  return;
}



// FUNCTION 1487ffd2a FUN_1487ffd2a body=63 status=ok
// SIG undefined FUN_1487ffd2a(void)

void FUN_1487ffd2a(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14b00ba40;
  uVar1 = DAT_14c8464e8;
  puVar2[3] = DAT_14c8464e0;
  puVar2[4] = uVar1;
  puVar2[5] = DAT_14c8464f0;
  return;
}



// FUNCTION 1487ffd6a FUN_1487ffd6a body=230 status=ok
// SIG undefined FUN_1487ffd6a(void)

undefined8 FUN_1487ffd6a(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  longlong *local_18;
  
  plVar2 = (longlong *)(DAT_14c707940 ^ (ulonglong)auStack_68);
  local_18 = plVar2;
  if (*param_2 == 0) {
    plVar5 = &DAT_14c9a1308;
  }
  else {
    plVar2 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar5 = plVar2;
  }
  uVar3 = CONCAT71((int7)((ulonglong)plVar2 >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar5 != 0) {
    uVar3 = FUN_14000584e(*plVar5,uVar3 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar3;
  local_38 = DAT_14c8464f0;
  local_48 = (undefined4)DAT_14c8464e0;
  uStack_44 = DAT_14c8464e0._4_4_;
  uStack_40 = (undefined4)DAT_14c8464e8;
  uStack_3c = DAT_14c8464e8._4_4_;
  if (*param_2 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb741a0);
  }
  pbVar1 = (byte *)*puVar4;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(pbVar1 + 8);
  }
  FUN_147095002(&local_30,uVar6,&local_48);
  *(undefined8 *)(param_1 + 0x28) = local_20;
  *(undefined4 *)(param_1 + 0x18) = local_30;
  *(undefined4 *)(param_1 + 0x1c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x20) = uStack_28;
  *(undefined4 *)(param_1 + 0x24) = uStack_24;
  if (((ulonglong)local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ffe52 FUN_1487ffe52 body=69 status=ok
// SIG undefined FUN_1487ffe52(void)

undefined4 FUN_1487ffe52(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  if (*param_2 == 0) {
    plVar2 = &DAT_14c9a1308;
  }
  else {
    plVar2 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
  }
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  if (*plVar2 != 0) {
    uVar1 = FUN_14000584e(*plVar2,uVar1);
  }
  *(undefined1 *)(param_1 + 0x11) = uVar1;
  return 1;
}



// FUNCTION 1487ffed8 FUN_1487ffed8 body=63 status=ok
// SIG undefined FUN_1487ffed8(void)

void FUN_1487ffed8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14b00bac0;
  uVar1 = DAT_14c8464e8;
  puVar2[3] = DAT_14c8464e0;
  puVar2[4] = uVar1;
  puVar2[5] = DAT_14c8464f0;
  return;
}



// FUNCTION 1487fff18 FUN_1487fff18 body=454 status=ok
// SIG undefined FUN_1487fff18(void)

void FUN_1487fff18(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_3 != 0) && (*(longlong *)(param_3 + 0x28) != 0)) &&
     (dVar9 = *(double *)(*(longlong *)(param_3 + 0x28) + 0xe0), dVar9 != 0.0)) {
    lVar1 = *(longlong *)((longlong)dVar9 + 0x1c8);
    if (lVar1 == 0) {
      local_58 = DAT_14c846508;
      local_68 = (undefined4)DAT_14c8464f8;
      uStack_64 = DAT_14c8464f8._4_4_;
      uStack_60 = (undefined4)DAT_14c846500;
      uStack_5c = DAT_14c846500._4_4_;
    }
    else {
      dVar4 = *(double *)(lVar1 + 0x240);
      dVar5 = *(double *)(lVar1 + 0x248);
      dVar6 = *(double *)(lVar1 + 0x250);
      dVar7 = *(double *)(lVar1 + 600);
      pdVar10 = *(double **)(lVar1 + 0x228);
      lVar12 = param_1;
      local_88 = dVar4;
      uStack_80 = dVar5;
      local_78 = dVar6;
      uStack_70 = dVar7;
      if (pdVar10 == (double *)0x0) {
        lVar12 = 0x40;
        pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
        dVar9 = DAT_14c8463d8;
        *pdVar10 = DAT_14c8463d0;
        pdVar10[1] = dVar9;
        dVar9 = DAT_14c8463e8;
        pdVar10[2] = DAT_14c8463e0;
        pdVar10[3] = dVar9;
        dVar9 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar10[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar10[5] = dVar9;
        dVar9 = DAT_14c846508;
        pdVar10[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar10;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar10[1]);
      auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar10);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar10[1]) >> 0x20);
      iVar8 = movmskpd(SUB84(dVar9,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar10[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar10[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar10[3]) >> 0x20);
      uVar11 = movmskpd((int)lVar12,auVar3);
      if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
        *(undefined4 *)(pdVar10 + 2) = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar10 + 0x14) = local_78._4_4_;
        *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_70._4_4_;
        *(undefined4 *)pdVar10 = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar10 + 4) = local_88._4_4_;
        *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_80._4_4_;
        FUN_1448052ee(&local_88,&local_68);
        pdVar10[6] = local_58;
        pdVar10[4] = (double)CONCAT44(uStack_64,local_68);
        pdVar10[5] = (double)CONCAT44(uStack_5c,uStack_60);
      }
      local_58 = pdVar10[6];
      local_68 = *(undefined4 *)(pdVar10 + 4);
      uStack_64 = *(undefined4 *)((longlong)pdVar10 + 0x24);
      uStack_60 = *(undefined4 *)(pdVar10 + 5);
      uStack_5c = *(undefined4 *)((longlong)pdVar10 + 0x2c);
    }
    FUN_1401c9a0e(&local_68,&local_88,param_1 + 0x18);
    *(double *)(param_3 + 0x70) = local_88 + *(double *)(param_3 + 0x70);
    *(double *)(param_3 + 0x78) = uStack_80 + *(double *)(param_3 + 0x78);
    *(double *)(param_3 + 0x80) = local_78 + *(double *)(param_3 + 0x80);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488000e6 FUN_1488000e6 body=49 status=ok
// SIG undefined FUN_1488000e6(void)

void FUN_1488000e6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_14b00bb40;
  return;
}



// FUNCTION 148800118 FUN_148800118 body=133 status=ok
// SIG undefined FUN_148800118(void)

undefined8 FUN_148800118(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong *in_RAX;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (*param_2 == 0) {
    plVar3 = &DAT_14c9a1308;
  }
  else {
    in_RAX = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar3 = in_RAX;
  }
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar3 != 0) {
    uVar2 = FUN_14000584e(*plVar3,uVar2 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar2;
  if (*param_2 == 0) {
    plVar3 = &DAT_14c9a1308;
  }
  else {
    plVar3 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb742b0);
  }
  if (*plVar3 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_14000584e(*plVar3,0);
  }
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe | bVar1;
  return 1;
}



// FUNCTION 1488001a4 FUN_1488001a4 body=55 status=ok
// SIG undefined FUN_1488001a4(void)

void FUN_1488001a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[1] = 0;
  *(undefined4 *)((longlong)puVar1 + 0xf) = 0;
  *puVar1 = &PTR_FUN_14b00bbc0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



// FUNCTION 1488001dc FUN_1488001dc body=439 status=ok
// SIG undefined FUN_1488001dc(void)

undefined8 FUN_1488001dc(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  longlong *local_20;
  
  plVar3 = (longlong *)(DAT_14c707940 ^ (ulonglong)auStack_88);
  local_20 = plVar3;
  if (*param_2 == 0) {
    plVar6 = &DAT_14c9a1308;
  }
  else {
    plVar3 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar6 = plVar3;
  }
  uVar4 = CONCAT71((int7)((ulonglong)plVar3 >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar6 != 0) {
    uVar4 = FUN_14000584e(*plVar6,uVar4 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar4;
  local_50 = DAT_14cb74348;
  local_58 = DAT_14cb74340;
  FUN_1448075d0(local_48);
  plVar3 = (longlong *)FUN_144a06846(param_2,local_48);
  if (*plVar3 == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_14000584e(*plVar3,1);
  }
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe | bVar1;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = DAT_14cb74360;
  local_58 = DAT_14cb74358;
  FUN_1448075d0(local_48);
  plVar3 = (longlong *)FUN_144a06846(param_2,local_48);
  if (*plVar3 == 0) {
    bVar1 = 2;
  }
  else {
    cVar2 = FUN_14000584e(*plVar3,1);
    bVar1 = cVar2 * '\x02';
  }
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfd | bVar1;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = DAT_14cb74378;
  local_58 = DAT_14cb74370;
  FUN_1448075d0(local_48);
  uVar5 = FUN_144a06846(param_2,local_48);
  local_60 = 0;
  FUN_1400bc2c2(uVar5,&local_58);
  *(undefined8 *)(param_1 + 0x1c) = local_58;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (((ulonglong)local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880039a FUN_14880039a body=216 status=ok
// SIG undefined FUN_14880039a(void)

undefined8 * FUN_14880039a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xf8);
  memset(puVar1 + 1,0,0xf0);
  *puVar1 = &PTR_FUN_14b00bc40;
  puVar1[3] = &PTR_FUN_14b00bdf8;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  puVar1[0xd] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0x8c) = 0x404;
  puVar1[4] = &DAT_14a176f00;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xb9) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xc1) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xcc) = 0x3f800000;
  *(undefined8 *)((longlong)puVar1 + 0xd4) = 0x3f0000003f000000;
  *(undefined1 *)(puVar1 + 0x1c) = 1;
  *(undefined8 *)((longlong)puVar1 + 0xe9) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
  return puVar1;
}



// FUNCTION 148800472 FUN_148800472 body=431 status=ok
// SIG undefined FUN_148800472(void)

undefined8 FUN_148800472(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong *in_RAX;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  
  if (*param_2 == 0) {
    plVar4 = &DAT_14c9a1308;
  }
  else {
    in_RAX = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar4 = in_RAX;
  }
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar4 != 0) {
    uVar2 = FUN_14000584e(*plVar4,uVar2 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar2;
  plVar4 = &DAT_14c9a1308;
  puVar3 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar3 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74410);
  }
  FUN_147095300(puVar3,param_1 + 0x20);
  if (*param_2 != 0) {
    plVar4 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb74418);
  }
  if (*plVar4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14000584e(*plVar4,0);
  }
  *(undefined1 *)(param_1 + 200) = uVar1;
  puVar5 = &DAT_14c9a1308;
  puVar3 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar3 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74420);
  }
  uVar6 = FUN_140b963dc(puVar3,0x3f800000);
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  puVar3 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar3 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74428);
  }
  uVar6 = FUN_140b963dc(puVar3,0);
  *(undefined4 *)(param_1 + 0xd0) = uVar6;
  puVar3 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar3 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74430);
  }
  uVar6 = FUN_140b963dc(puVar3,0);
  *(undefined4 *)(param_1 + 0xdc) = uVar6;
  puVar3 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar3 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74438);
  }
  uVar6 = FUN_140b963dc(puVar3,0x3f000000);
  *(undefined4 *)(param_1 + 0xd4) = uVar6;
  if (*param_2 != 0) {
    puVar5 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74440);
  }
  FUN_140b963dc(puVar5,0x3f000000);
  *(undefined4 *)(param_1 + 0xd8) = extraout_XMM0_Da;
  return 1;
}



// FUNCTION 148800628 FUN_148800628 body=464 status=ok
// SIG undefined FUN_148800628(void)

float FUN_148800628(longlong param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = 0.5;
  fVar1 = (float)FUN_1410dc810(param_1,0x3f000000);
  if (0.1 < ABS(fVar1 - param_2)) {
    fVar5 = 1.0;
    fVar4 = 1.0;
    fVar2 = 0.5;
    fVar6 = 0.0;
    do {
      while( true ) {
        fVar3 = fVar2;
        if (fVar5 < 0.025) {
          return (float)(~-(uint)(param_2 < fVar1) & (uint)fVar4 |
                        (uint)fVar6 & -(uint)(param_2 < fVar1));
        }
        if (((fVar1 <= param_2) || (*(float *)(param_1 + 0xcc) < 1.0)) &&
           ((param_2 <= fVar1 ||
            (1.0 < *(float *)(param_1 + 0xcc) || *(float *)(param_1 + 0xcc) == 1.0)))) break;
        fVar5 = fVar3 - fVar6;
        fVar2 = fVar5 * 0.5 + fVar6;
        fVar1 = (float)FUN_1410dc810(param_1,fVar2,param_3);
        fVar4 = fVar3;
        if (ABS(fVar1 - param_2) <= 0.1) {
          return fVar2;
        }
      }
      fVar5 = fVar4 - fVar3;
      fVar2 = fVar5 * 0.5 + fVar3;
      fVar1 = (float)FUN_1410dc810(param_1,fVar2,param_3);
      fVar6 = fVar3;
    } while (0.1 < ABS(fVar1 - param_2));
  }
  return fVar2;
}



// FUNCTION 1488007fe FUN_1488007fe body=57 status=ok
// SIG undefined FUN_1488007fe(void)

void FUN_1488007fe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b00bcd0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 148800838 FUN_148800838 body=357 status=ok
// SIG undefined FUN_148800838(void)

undefined8 FUN_148800838(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  int local_30;
  longlong *local_28;
  
  plVar2 = (longlong *)(DAT_14c707940 ^ (ulonglong)auStack_88);
  local_28 = plVar2;
  if (*param_2 == 0) {
    plVar5 = &DAT_14c9a1308;
  }
  else {
    plVar2 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar5 = plVar2;
  }
  uVar3 = CONCAT71((int7)((ulonglong)plVar2 >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar5 != 0) {
    uVar3 = FUN_14000584e(*plVar5,uVar3 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar3;
  if (*param_2 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb744d0);
  }
  pbVar1 = (byte *)*puVar4;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(pbVar1 + 8);
  }
  FUN_1400b22c2(&local_68,uVar6);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = local_68;
  local_30 = local_60 + -1;
  if (local_60 == 0) {
    local_30 = 0;
  }
  FUN_14475bf92(&local_58);
  *(undefined4 *)(param_1 + 0x18) = (undefined4)local_58;
  *(undefined4 *)(param_1 + 0x1c) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_50;
  *(undefined4 *)(param_1 + 0x24) = uStack_50._4_4_;
  if ((undefined8 *)(param_1 + 0x18) == &local_58) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x28) = local_48;
    local_48 = 0;
    *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0x34) = uStack_40._4_4_;
    uStack_40 = 0;
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (((ulonglong)local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880099e FUN_14880099e body=217 status=ok
// SIG undefined FUN_14880099e(void)

void FUN_14880099e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar1 = FUN_148800a78(param_1 + 0x18);
    if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
      if (lVar1 == 0) {
        return;
      }
    }
    else {
      FUN_1456cec3c(lVar1);
    }
    lVar2 = FUN_1459d799e();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar2 = FUN_1459d799e();
      if ((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30) {
          lVar3 = lVar1;
        }
      }
      lVar1 = FUN_148800b0f(DAT_14c951640,lVar3);
      if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
        *(longlong *)(param_1 + 0x38) = lVar1;
        if (lVar1 == 0) {
          return;
        }
      }
      else {
        FUN_1456cec3c(lVar1);
        *(longlong *)(param_1 + 0x38) = lVar1;
      }
      FUN_148624938(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148800a78 FUN_148800a78 body=150 status=ok
// SIG undefined FUN_148800a78(void)

undefined8 FUN_148800a78(longlong *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_14475cc44(param_1,&local_20);
    puVar2 = local_20;
    if (local_18 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    uVar1 = FUN_1459d799e();
    local_30 = 0;
    local_38 = 0;
    uVar1 = FUN_141433b6f(uVar1,0,puVar2,0);
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 148800b0f FUN_148800b0f body=185 status=ok
// SIG undefined FUN_148800b0f(void)

undefined8 FUN_148800b0f(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148800bca FUN_148800bca body=36 status=ok
// SIG undefined FUN_148800bca(void)

void FUN_148800bca(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1486248da();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148800c20 FUN_148800c20 body=31 status=ok
// SIG undefined FUN_148800c20(void)

void FUN_148800c20(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x50,0x10);
  FUN_140edf30e(uVar1);
  return;
}



// FUNCTION 148800c40 FUN_148800c40 body=313 status=ok
// SIG undefined FUN_148800c40(void)

undefined8 FUN_148800c40(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  longlong *in_RAX;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 uVar8;
  
  if (*param_2 == 0) {
    plVar7 = &DAT_14c9a1308;
  }
  else {
    in_RAX = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar7 = in_RAX;
  }
  uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar7 != 0) {
    uVar3 = FUN_14000584e(*plVar7,uVar3 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar3;
  plVar7 = &DAT_14c9a1308;
  puVar6 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74560);
  }
  uVar8 = FUN_140b963dc(puVar6,0x41200000);
  *(undefined4 *)(param_1 + 0x18) = uVar8;
  if (*param_2 != 0) {
    plVar7 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb74568);
  }
  if (*plVar7 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_14000584e(*plVar7,0);
  }
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfe | bVar1;
  if (*param_2 == 0) {
    plVar7 = &DAT_14c9a1308;
  }
  else {
    plVar7 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb74570);
  }
  if (*plVar7 == 0) {
    bVar1 = 0;
  }
  else {
    cVar2 = FUN_14000584e(*plVar7,0);
    bVar1 = cVar2 * '\x02';
  }
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfd | bVar1;
  if (*param_2 == 0) {
    plVar7 = &DAT_14c9a1308;
  }
  else {
    plVar7 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb74578);
  }
  if (*plVar7 == 0) {
    bVar1 = 0;
    uVar5 = 0;
  }
  else {
    uVar4 = FUN_14000584e(*plVar7,0);
    uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
    bVar1 = (char)uVar4 << 2;
  }
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfb | bVar1;
  return CONCAT71(uVar5,1);
}



// FUNCTION 148800d80 FUN_148800d80 body=80 status=ok
// SIG undefined FUN_148800d80(void)

void FUN_148800d80(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *(undefined4 *)((longlong)puVar2 + 0xf) = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14b015fb0;
  *(undefined1 *)(puVar2 + 3) = 1;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  *(undefined4 *)(puVar2 + 7) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x3c) = 0;
  return;
}



// FUNCTION 148800dd6 FUN_148800dd6 body=56 status=ok
// SIG undefined FUN_148800dd6(void)

void FUN_148800dd6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_14b016030;
  *(undefined4 *)(puVar1 + 3) = 0x3f800000;
  return;
}



// FUNCTION 148800e0e FUN_148800e0e body=176 status=ok
// SIG undefined FUN_148800e0e(void)

undefined8 FUN_148800e0e(longlong param_1,longlong *param_2)

{
  longlong *in_RAX;
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  
  if (*param_2 == 0) {
    plVar3 = &DAT_14c9a1308;
  }
  else {
    in_RAX = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar3 = in_RAX;
  }
  uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar3 != 0) {
    uVar1 = FUN_14000584e(*plVar3,uVar1 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar1;
  puVar4 = &DAT_14c9a1308;
  puVar2 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar2 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb746a0);
  }
  uVar5 = FUN_140b963dc(puVar2,0x3f800000);
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  if (*param_2 != 0) {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb746a8);
  }
  FUN_140b963dc(puVar4,0);
  *(undefined4 *)(param_1 + 0x1c) = extraout_XMM0_Da;
  return 1;
}



// FUNCTION 148800ec4 FUN_148800ec4 body=49 status=ok
// SIG undefined FUN_148800ec4(void)

void FUN_148800ec4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_14b0160b0;
  return;
}



// FUNCTION 148800ef6 FUN_148800ef6 body=124 status=ok
// SIG undefined FUN_148800ef6(void)

undefined4 FUN_148800ef6(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 extraout_XMM0_Da;
  
  if (*param_2 == 0) {
    plVar2 = &DAT_14c9a1308;
  }
  else {
    plVar2 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
  }
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  if (*plVar2 != 0) {
    uVar1 = FUN_14000584e(*plVar2,uVar1);
  }
  *(undefined1 *)(param_1 + 0x11) = uVar1;
  if (*param_2 == 0) {
    puVar3 = &DAT_14c9a1308;
  }
  else {
    puVar3 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74830);
  }
  FUN_140b963dc(puVar3,0x428c0000);
  *(undefined4 *)(param_1 + 0x18) = extraout_XMM0_Da;
  return 1;
}



// FUNCTION 148800f8a FUN_148800f8a body=140 status=ok
// SIG undefined FUN_148800f8a(void)

void FUN_148800f8a(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14b016130;
  *(undefined1 *)((longlong)puVar2 + 0x1c) = 1;
  puVar2[7] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  puVar2[5] = DAT_14c8464e0;
  puVar2[6] = uVar1;
  puVar2[10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  puVar2[8] = DAT_14c8464e0;
  puVar2[9] = uVar1;
  uVar1 = DAT_14c8464e8;
  puVar2[0xb] = DAT_14c8464e0;
  puVar2[0xc] = uVar1;
  puVar2[0xd] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  puVar2[0xe] = DAT_14c8464e0;
  puVar2[0xf] = uVar1;
  puVar2[0x10] = DAT_14c8464f0;
  return;
}



// FUNCTION 14880101c FUN_14880101c body=76 status=ok
// SIG undefined FUN_14880101c(void)

void FUN_14880101c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar1[3] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b0161b0;
  *(undefined4 *)(puVar1 + 3) = 0x3f800000;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0x3ff0000000000000;
  return;
}



// FUNCTION 148801068 FUN_148801068 body=273 status=ok
// SIG undefined FUN_148801068(void)

undefined8 FUN_148801068(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *local_20;
  
  plVar1 = (longlong *)(DAT_14c707940 ^ (ulonglong)auStack_78);
  local_20 = plVar1;
  if (*param_2 == 0) {
    plVar4 = &DAT_14c9a1308;
  }
  else {
    plVar1 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar4 = plVar1;
  }
  uVar2 = CONCAT71((int7)((ulonglong)plVar1 >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar4 != 0) {
    uVar2 = FUN_14000584e(*plVar4,uVar2 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar2;
  puVar5 = &DAT_14c9a1308;
  puVar3 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar3 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74980);
  }
  uVar6 = FUN_140b963dc(puVar3,0x3f800000);
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  if (*param_2 != 0) {
    puVar5 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74988);
  }
  FUN_140009d60(&local_38,puVar5,&local_58);
  *(undefined4 *)(param_1 + 0x20) = local_38;
  *(undefined4 *)(param_1 + 0x24) = uStack_34;
  *(undefined4 *)(param_1 + 0x28) = uStack_30;
  *(undefined4 *)(param_1 + 0x2c) = uStack_2c;
  *(undefined8 *)(param_1 + 0x30) = local_28;
  *(undefined8 *)(param_1 + 0x38) = 0x3ff0000000000000;
  if (((ulonglong)local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0x3ff0000000000001;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148801186 FUN_148801186 body=31 status=ok
// SIG undefined FUN_148801186(void)

void FUN_148801186(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1e8,0x10);
  FUN_1410fd622(uVar1);
  return;
}



// FUNCTION 1488011a6 FUN_1488011a6 body=386 status=ok
// SIG undefined FUN_1488011a6(void)

void FUN_1488011a6(undefined1 *param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  if (*param_2 == 0) {
    plVar2 = &DAT_14c9a1308;
  }
  else {
    plVar2 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb74a20);
  }
  if (*plVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14000584e(*plVar2,0);
  }
  *param_1 = uVar1;
  plVar2 = &DAT_14c9a1308;
  puVar3 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar3 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74a28);
  }
  uVar5 = FUN_140b963dc(puVar3,0);
  *(undefined4 *)(param_1 + 4) = uVar5;
  puVar3 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar3 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74a30);
  }
  uVar5 = FUN_140b963dc(puVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar5;
  if (*param_2 != 0) {
    plVar2 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb74a38);
  }
  if (*plVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14000584e(*plVar2,0);
  }
  param_1[0xc] = uVar1;
  if (*param_2 == 0) {
    plVar2 = &DAT_14c9a1308;
  }
  else {
    plVar2 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb74a40);
  }
  if (*plVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14000584e(*plVar2,0);
  }
  param_1[0xd] = uVar1;
  puVar4 = &DAT_14c9a1308;
  puVar3 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar3 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74a48);
  }
  uVar5 = FUN_140b963dc(puVar3,0x41200000);
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  if (*param_2 != 0) {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74a50);
  }
  uVar5 = FUN_140b963dc(puVar4,0);
  *(undefined4 *)(param_1 + 200) = uVar5;
  return;
}



// FUNCTION 148801328 FUN_148801328 body=324 status=ok
// SIG undefined FUN_148801328(void)

undefined8 FUN_148801328(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong *in_RAX;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (*param_2 == 0) {
    plVar4 = &DAT_14c9a1308;
  }
  else {
    in_RAX = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar4 = in_RAX;
  }
  uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar4 != 0) {
    uVar3 = FUN_14000584e(*plVar4,uVar3 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar3;
  if (*param_2 == 0) {
    plVar4 = &DAT_14c9a1308;
  }
  else {
    plVar4 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb74a58);
  }
  if (*plVar4 == 0) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_14000584e(*plVar4,0);
    uVar2 = (uint)bVar1;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe | uVar2;
  if (*param_2 == 0) {
    plVar4 = &DAT_14c9a1308;
  }
  else {
    plVar4 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb74a60);
  }
  if (*plVar4 == 0) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_14000584e(*plVar4,0);
    uVar2 = (uint)bVar1 * 2;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffd | uVar2;
  puVar6 = &DAT_14c9a1308;
  puVar5 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar5 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74a68);
  }
  FUN_1488011a6(param_1 + 0x20,puVar5);
  if (*param_2 != 0) {
    puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74a70);
  }
  FUN_1488011a6(param_1 + 0x100,puVar6);
  return 1;
}



// FUNCTION 148801474 FUN_148801474 body=52 status=ok
// SIG undefined FUN_148801474(void)

void FUN_148801474(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b016230;
  *(undefined4 *)(puVar1 + 3) = 0x41000000;
  return;
}



// FUNCTION 1488014ae FUN_1488014ae body=74 status=ok
// SIG undefined FUN_1488014ae(void)

void FUN_1488014ae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined4 *)((longlong)puVar1 + 0xf) = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b3f16e0;
  puVar1[3] = 0x42a00000c2a00000;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x24) = 0;
  *(undefined2 *)(puVar1 + 2) = 0x101;
  return;
}



// FUNCTION 1488014f8 FUN_1488014f8 body=285 status=ok
// SIG undefined FUN_1488014f8(void)

undefined8 FUN_1488014f8(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong *in_RAX;
  ulonglong uVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  
  if (*param_2 == 0) {
    plVar5 = &DAT_14c9a1308;
  }
  else {
    in_RAX = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar5 = in_RAX;
  }
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar5 != 0) {
    uVar2 = FUN_14000584e(*plVar5,uVar2 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar2;
  puVar6 = &DAT_14c9a1308;
  puVar4 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74b80);
  }
  uVar9 = FUN_140b963dc(puVar4,0xc2a00000);
  *(undefined4 *)(param_1 + 0x18) = uVar9;
  puVar4 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74b88);
  }
  uVar9 = FUN_140b963dc(puVar4,0x42a00000);
  *(undefined4 *)(param_1 + 0x1c) = uVar9;
  if (*param_2 != 0) {
    puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74b90);
  }
  pbVar1 = (byte *)*puVar6;
  if (pbVar1 == (byte *)0x0) {
    *(undefined1 *)(param_1 + 0x24) = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)pbVar1 >> 8);
    bVar7 = (*pbVar1 & 3) != 0;
    bVar8 = (*pbVar1 & 0x68) == 0;
    *(bool *)(param_1 + 0x24) = bVar8 && bVar7;
    if (bVar8 && bVar7) {
      if (*param_2 == 0) {
        puVar4 = &DAT_14c9a1308;
      }
      else {
        puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74b90);
      }
      uVar9 = FUN_140b963dc(puVar4,0);
      *(undefined4 *)(param_1 + 0x20) = uVar9;
      uVar3 = extraout_var;
    }
  }
  return CONCAT71(uVar3,1);
}



// FUNCTION 14880161c FUN_14880161c body=31 status=ok
// SIG undefined FUN_14880161c(void)

void FUN_14880161c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x90,0x10);
  FUN_140e6d4da(uVar1);
  return;
}



// FUNCTION 14880163c FUN_14880163c body=171 status=ok
// SIG undefined FUN_14880163c(void)

ulonglong FUN_14880163c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  byte *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar4 = (undefined8 *)FUN_144a06846();
  local_28 = (byte *)*puVar4;
  local_20 = (longlong *)puVar4[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  if ((local_28 == (byte *)0x0) || ((*local_28 & 0x68) != 0 || (*local_28 & 3) == 0)) {
    uVar5 = 0;
  }
  else {
    FUN_1470e5c44(param_3,&local_28);
    uVar5 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  }
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
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
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488016e8 FUN_1488016e8 body=310 status=ok
// SIG undefined FUN_1488016e8(void)

void FUN_1488016e8(undefined4 *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  plVar3 = &DAT_14c9a1308;
  puVar2 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar2 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74c80);
  }
  uVar5 = FUN_140b963dc(puVar2,0x3f800000);
  *param_1 = uVar5;
  if (*param_2 != 0) {
    plVar3 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb74c88);
  }
  if (*plVar3 == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    cVar1 = FUN_14000584e(*plVar3,0);
    *(char *)(param_1 + 1) = cVar1;
    if (cVar1 != '\0') {
      puVar4 = &DAT_14c9a1308;
      puVar2 = &DAT_14c9a1308;
      if (*param_2 != 0) {
        puVar2 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74c90);
      }
      uVar5 = FUN_140b963dc(puVar2,0);
      param_1[2] = uVar5;
      puVar2 = &DAT_14c9a1308;
      if (*param_2 != 0) {
        puVar2 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74c98);
      }
      uVar5 = FUN_140b963dc(puVar2,0);
      param_1[3] = uVar5;
      puVar2 = &DAT_14c9a1308;
      if (*param_2 != 0) {
        puVar2 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74ca0);
      }
      uVar5 = FUN_140b963dc(puVar2,0);
      param_1[4] = uVar5;
      if (*param_2 != 0) {
        puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74ca8);
      }
      uVar5 = FUN_140b963dc(puVar4,0x3dcccccd);
      param_1[5] = uVar5;
    }
  }
  return;
}



// FUNCTION 148801824 FUN_148801824 body=41 status=ok
// SIG undefined FUN_148801824(void)

void FUN_148801824(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b0162b0;
  return;
}


