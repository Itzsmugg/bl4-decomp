// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145798e54 FUN_145798e54 body=112 status=ok
// SIG undefined FUN_145798e54(void)

void FUN_145798e54(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 145798ec4 FUN_145798ec4 body=503 status=ok
// SIG undefined FUN_145798ec4(void)

void FUN_145798ec4(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  double dVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  undefined4 *local_78;
  undefined1 *local_70;
  undefined4 **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(char *)(param_1 + 0x1e8) == '\x01') && (*(longlong *)(param_1 + 0x1990) != 0)) {
    lVar6 = FUN_140ce64d6();
    *(double *)(param_1 + 0x1f0) = *(double *)(lVar6 + 0x30) + *(double *)(param_1 + 0x1f0);
    *(double *)(param_1 + 0x1f8) = *(double *)(lVar6 + 0x38) + *(double *)(param_1 + 0x1f8);
    *(double *)(param_1 + 0x200) = *(double *)(lVar6 + 0x40) + *(double *)(param_1 + 0x200);
  }
  plVar4 = *(longlong **)(param_1 + 0x118);
  if (plVar4 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar4 + 0x7b8))(plVar4,0,1,0xffffffff);
    if (lVar6 != 0) {
      local_78 = &local_98;
      local_98 = (undefined4)DAT_14c8464e0;
      uStack_94 = DAT_14c8464e0._4_4_;
      uStack_90 = (undefined4)DAT_14c8464e8;
      uStack_8c = DAT_14c8464e8._4_4_;
      local_88 = DAT_14c8464f0;
      local_68 = &local_78;
      local_70 = &LAB_143620548;
      FUN_1448e6002(lVar6 + 0x138);
      fVar8 = *(float *)(param_1 + 0x1e4);
      if (fVar8 <= 0.0) {
        fVar8 = 1.0;
      }
      else {
        fVar7 = (float)FUN_1401edbbc(lVar6);
        fVar8 = fVar8 / fVar7;
      }
      lVar6 = FUN_1411cfb7f();
      dVar1 = *(double *)(lVar6 + 0x100);
      dVar2 = *(double *)(lVar6 + 0x108);
      dVar3 = *(double *)(lVar6 + 0x110);
      lVar6 = FUN_1411cfb7f();
      dVar5 = (double)(*(float *)(lVar6 + 0x118) / fVar8);
      *(double *)(param_1 + 0x220) =
           (dVar1 / (double)CONCAT44(uStack_94,local_98)) * dVar5 * *(double *)(param_1 + 0x220);
      *(double *)(param_1 + 0x228) =
           (dVar2 / (double)CONCAT44(uStack_8c,uStack_90)) * dVar5 * *(double *)(param_1 + 0x228);
      *(double *)(param_1 + 0x230) = (dVar3 / local_88) * dVar5 * *(double *)(param_1 + 0x230);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457990bc FUN_1457990bc body=254 status=ok
// SIG undefined FUN_1457990bc(void)

undefined8
FUN_1457990bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b4024f0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b95f2c0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140d0180e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457991bc FUN_1457991bc body=254 status=ok
// SIG undefined FUN_1457991bc(void)

undefined8
FUN_1457991bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14ac89870;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b95f3a0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140d0168e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457992bc FUN_1457992bc body=254 status=ok
// SIG undefined FUN_1457992bc(void)

undefined8
FUN_1457992bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3e9ef0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b95f330;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1403524de(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457993bc FUN_1457993bc body=781 status=ok
// SIG undefined FUN_1457993bc(void)

void FUN_1457993bc(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 **local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78 [3];
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = FUN_1447210f0();
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
    lVar6 = FUN_1403ca142();
    if (((*(longlong *)(lVar5 + 0x1f0) != 0) &&
        (((lVar6 != 0 && (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x1f0) + 0x10), lVar5 != 0))
         && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      iVar4 = FUN_140d01982();
      if (iVar4 == 1) {
        lVar6 = FUN_1403ca227();
        local_a0 = 0;
        FUN_14485c47a(&local_a0,param_1);
        uVar3 = local_a0;
        lVar7 = FUN_14050fd64();
        local_78[2] = 0;
        local_60 = 0;
        local_58 = (undefined8 *)0x0;
        uStack_50 = 0;
        FUN_1446efa72(&local_58,0,2,0x10);
        uStack_50 = 2;
        *local_58 = &PTR_LAB_149e020b0;
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
        local_58[2] = lVar8;
        *local_58 = &PTR_FUN_14b95f890;
        local_58[3] = uVar3;
        FUN_144a450dc(local_78 + 2,&local_58);
        FUN_1449db362(&local_58);
        FUN_140d01986();
        local_78[0] = 0;
        local_78[1] = 0;
        local_58 = *(undefined8 **)(lVar6 + 0x398);
        uStack_50 = *(undefined4 *)(lVar6 + 0x3a0);
        uStack_4c = *(undefined4 *)(lVar6 + 0x3a4);
        local_48 = (void *)0x0;
        local_40 = *(int *)(lVar6 + 0x3b0);
        lVar5 = (longlong)local_40;
        _Src = *(void **)(lVar6 + 0x3a8);
        if (lVar5 == 0) {
          local_3c = 0;
        }
        else {
          FUN_1446dd670(&local_48,local_40,0);
          memcpy(local_48,_Src,lVar5 * 2);
        }
        local_90 = &local_38;
        local_98 = &local_58;
        FUN_140a1e2b2(&local_88);
        local_c0 = local_78;
        local_c8 = 0;
        local_d0 = 0;
        local_d8 = 0;
        FUN_140421d62(lVar7 + 0x1e8,local_b0,&local_88,local_78 + 2);
        FUN_140861e20(local_88,local_80);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_48 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        FUN_1449db362(local_78 + 2);
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar2 = (int *)((longlong)local_a8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_a8 + 0x10))(local_a8);
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457996ca FUN_1457996ca body=671 status=ok
// SIG undefined FUN_1457996ca(void)

void FUN_1457996ca(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80 [48];
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)(param_1 + 0x538);
  FUN_14579a09a(param_1,plVar2);
  puVar3 = (undefined8 *)(param_1 + 0x1b60);
  cVar5 = FUN_1404fa388(puVar3);
  if (cVar5 != '\0') {
    FUN_140bd765a(puVar3,0,0);
  }
  if (*(longlong *)(param_1 + 0x1a00) == 0) goto LAB_1457997db;
  lVar8 = *(longlong *)(param_1 + 0x540);
  if (lVar8 == 0) {
    uVar6 = FUN_140aff5aa();
    lVar8 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x540) = lVar8;
  }
  lVar9 = *(longlong *)(param_1 + 0x548);
  if (lVar9 == 0) {
    if ((lVar8 == 0) || (*plVar2 == 0)) goto LAB_1457997db;
    plVar4 = *(longlong **)(lVar8 + 0xb8);
    if (plVar4 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar5 != '\0') {
        uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar9 = FUN_144aff482(uVar6,plVar2);
        *(longlong *)(param_1 + 0x548) = lVar9;
        if (lVar9 == 0) goto LAB_1457997db;
        lVar8 = *(longlong *)(param_1 + 0x540);
        goto LAB_14579973e;
      }
    }
    *(undefined8 *)(param_1 + 0x548) = 0;
    goto LAB_1457997db;
  }
LAB_14579973e:
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1588);
  if (lVar8 == 0) {
    uVar7 = FUN_140aff5aa();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x540) = lVar8;
    lVar9 = *(longlong *)(param_1 + 0x548);
    if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*plVar2 != 0)) {
      plVar4 = *(longlong **)(lVar8 + 0xb8);
      if (plVar4 == (longlong *)0x0) {
LAB_145799966:
        lVar9 = 0;
      }
      else {
        cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
        if (cVar5 == '\0') goto LAB_145799966;
        uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar9 = FUN_144aff482(uVar7,plVar2);
      }
      *(longlong *)(param_1 + 0x548) = lVar9;
    }
  }
  FUN_1412bd664(local_80,lVar9 + 0xb0);
  local_88 = 0;
  FUN_140f7fb5b(&local_50,param_1,local_80,uVar6);
  if (puVar3 != &local_50) {
    *(undefined8 *)(param_1 + 0x1b60) = local_50;
    local_50 = 0;
    plVar2 = *(longlong **)(param_1 + 0x1b68);
    *(longlong **)(param_1 + 0x1b68) = local_48;
    local_48 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1b70) = local_40;
  *(undefined4 *)(param_1 + 0x1b74) = uStack_3c;
  *(undefined4 *)(param_1 + 0x1b78) = uStack_38;
  *(undefined4 *)(param_1 + 0x1b7c) = uStack_34;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
LAB_1457997db:
  if (*(longlong *)(param_1 + 0x1700) != 0) {
    FUN_140d0198e();
  }
  FUN_1447f69b6(param_1 + 0x1ed0);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579996a FUN_14579996a body=109 status=ok
// SIG undefined FUN_14579996a(void)

void FUN_14579996a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1457999d8(param_1,iVar1);
    }
    FUN_140d01a4c((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148f056b6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1457999d8 FUN_1457999d8 body=132 status=ok
// SIG undefined FUN_1457999d8(void)

void FUN_1457999d8(longlong param_1,int param_2)

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



// FUNCTION 145799a5c FUN_145799a5c body=455 status=ok
// SIG undefined FUN_145799a5c(void)

longlong * FUN_145799a5c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    lVar8 = (longlong)*(int *)(param_1 + 0xe0) * 0x28;
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0xd8) + 8);
    do {
      plVar1 = plVar7 + -1;
      lVar5 = FUN_14479d2ce(plVar1);
      if (lVar5 == 0) {
        if (*plVar7 != 0) {
          lVar5 = FUN_140007850();
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar5 == 0) || (cVar4 == '\0')) {
            FUN_14485c47a(plVar1,lVar5);
            if (lVar5 == 0) goto LAB_145799b6a;
          }
          else {
            uVar3 = *(uint *)(lVar5 + 0xc);
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar6 = 0;
            }
            if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(plVar1,lVar5);
            }
          }
          if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_145799aad;
        }
      }
      else {
LAB_145799aad:
        lVar6 = FUN_144a797b2();
        if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
            (lVar6 = FUN_140789e1e(), lVar6 != 0)) &&
           (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) {
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar9 = lVar5;
          }
          if ((lVar9 == 0) || (DAT_14c950c29 == '\0')) {
            if (lVar9 == 0) goto LAB_145799b6a;
          }
          else {
            FUN_1456cec3c(lVar9);
          }
          lVar6 = FUN_140789e1e();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            iVar2 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
              FUN_140789f3e(param_2,iVar2);
            }
            *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar5;
            if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar5);
            }
          }
        }
      }
LAB_145799b6a:
      plVar7 = plVar7 + 5;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
  }
  return param_2;
}



// FUNCTION 145799c24 FUN_145799c24 body=978 status=ok
// SIG undefined FUN_145799c24(void)

longlong * FUN_145799c24(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = DAT_14cb259f8;
  if (((param_3 == 0) || (param_4 == 0)) || (DAT_14cb259f8 == 0)) goto LAB_145799e79;
  if ((*param_2 == 0) || (0xfffffffd < (int)param_2[1] - 1U)) {
LAB_145799c83:
    plVar5 = (longlong *)FUN_14001cc68(800);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b95f2a0;
    plVar8 = plVar5 + 2;
    memset(plVar8,0,0x310);
    FUN_14126c416(plVar8);
    plVar5[2] = (longlong)&PTR_FUN_14b8e1730;
    *(undefined4 *)(plVar5 + 0x62) = 0;
    local_78 = plVar8;
    local_70 = plVar5;
    FUN_145799ff8(&local_78,plVar8);
    plVar5[7] = param_4;
    FUN_14078c658(&local_50,param_3);
    *(undefined4 *)(plVar5 + 5) = local_50;
    *(undefined4 *)((longlong)plVar5 + 0x2c) = uStack_4c;
    *(undefined4 *)(plVar5 + 6) = uStack_48;
    *(undefined4 *)((longlong)plVar5 + 0x34) = uStack_44;
    FUN_14485c47a(plVar5 + 8,param_4);
    if (plVar5 == (longlong *)0x0) {
      *param_1 = 0x10;
      plVar8 = (longlong *)param_1[1];
      if (plVar8 != (longlong *)0x0) {
        param_1[1] = 0;
LAB_145799f09:
        LOCK();
        plVar5 = plVar8 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000145799f42:
          if (iVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *param_1 = (longlong)plVar8;
      plVar8 = (longlong *)param_1[1];
      if (plVar5 == plVar8) {
        LOCK();
        plVar8 = plVar5 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar8 = plVar5;
          goto joined_r0x000145799f42;
        }
      }
      else {
        param_1[1] = (longlong)plVar5;
        if (plVar8 != (longlong *)0x0) goto LAB_145799f09;
      }
    }
    plVar8 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_70 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_145799e79;
  }
  else {
    uVar6 = FUN_140e56edc();
    local_68 = *param_2;
    local_60 = (undefined4)param_2[1];
    local_58 = 0;
    local_98 = param_4;
    FUN_140e775d2(&local_50,&local_68,uVar6,param_3);
    lVar7 = CONCAT44(uStack_4c,local_50);
    if (lVar7 != 0) {
      uVar6 = FUN_140e56edc();
      cVar4 = FUN_1448093f4(lVar7,uVar6);
      if (cVar4 != '\0') {
        plVar8 = (longlong *)CONCAT44(uStack_44,uStack_48);
        if (plVar8 == (longlong *)0x0) {
          *param_1 = CONCAT44(uStack_4c,local_50);
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          plVar5 = (longlong *)param_1[1];
          *param_1 = CONCAT44(uStack_4c,local_50);
          if (plVar8 == plVar5) {
            LOCK();
            plVar5 = plVar8 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar7 = *plVar8;
LAB_145799fce:
                (**(code **)(lVar7 + 0x10))(plVar8);
              }
            }
          }
          else {
            param_1[1] = (longlong)plVar8;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar5 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  lVar7 = *plVar5;
                  plVar8 = plVar5;
                  goto LAB_145799fce;
                }
              }
            }
          }
        }
        lVar7 = CONCAT44(uStack_4c,local_50);
        if ((*(longlong *)(lVar7 + 0x40) != *param_2) || (*(int *)(lVar7 + 0x48) != (int)param_2[1])
           ) {
          *(longlong *)(lVar7 + 0x40) = *param_2;
          *(int *)(lVar7 + 0x48) = (int)param_2[1];
          *(undefined8 *)(lVar7 + 0x50) = 0;
        }
      }
    }
    plVar8 = (longlong *)CONCAT44(uStack_44,uStack_48);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_145799c83;
  }
  plVar8 = (longlong *)param_1[1];
  local_88 = lVar7;
  if (plVar8 == (longlong *)0x0) {
    local_80 = (longlong *)0x0;
    FUN_1408f6a5c(lVar3);
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_80 = plVar8;
    FUN_1408f6a5c(lVar3);
    LOCK();
    plVar5 = plVar8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_140d01a6a(*param_1);
LAB_145799e79:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145799ff8 FUN_145799ff8 body=162 status=ok
// SIG undefined FUN_145799ff8(void)

void FUN_145799ff8(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14579a037;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14579a037;
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
LAB_14579a037:
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
                    /* WARNING: Could not recover jumptable at 0x00014579a096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14579a09a FUN_14579a09a body=819 status=ok
// SIG undefined FUN_14579a09a(void)

void FUN_14579a09a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar6 = FUN_140aff5aa();
    lVar7 = FUN_14477b664(uVar6);
    param_2[1] = lVar7;
  }
  if (param_2[2] == 0) {
    if ((lVar7 == 0) || (*param_2 == 0)) goto LAB_14579a25d;
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
      param_2[2] = 0;
      goto LAB_14579a25d;
    }
    uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar7 = FUN_144aff482(uVar6,param_2);
    param_2[2] = lVar7;
    if (lVar7 == 0) goto LAB_14579a25d;
  }
  if ((*(longlong *)(param_1 + 0x550) != 0) && (*(longlong *)(param_1 + 0x560) != 0)) {
    FUN_140ccfb62();
  }
  uVar6 = FUN_14050fd64();
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar8 = FUN_140aff5aa();
    lVar7 = FUN_14477b664(uVar8);
    param_2[1] = lVar7;
  }
  lVar9 = param_2[2];
  if (((lVar9 == 0) && (lVar9 = 0, lVar7 != 0)) && (*param_2 != 0)) {
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
      lVar9 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar9 = FUN_144aff482(uVar8,param_2);
    }
    param_2[2] = lVar9;
  }
  local_68 = 0;
  FUN_14088df30(uVar6,&local_40,lVar9,0);
  plVar3 = local_38;
  if ((undefined8 **)(param_1 + 0x550) != &local_40) {
    *(undefined8 **)(param_1 + 0x550) = local_40;
    local_40 = (undefined8 *)0x0;
    plVar2 = *(longlong **)(param_1 + 0x558);
    if (local_38 != plVar2) {
      local_38 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x558) = plVar3;
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_40 = (undefined8 *)0x0;
  local_38 = (longlong *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar4 = local_40;
  local_38 = (longlong *)CONCAT44(local_38._4_4_,3);
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_40[2] = lVar9;
  *local_40 = &PTR_FUN_14b95f5f0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_1);
  *(undefined4 *)(puVar4 + 5) = 0;
  puVar4[4] = FUN_145ae3442;
  uVar6 = *(undefined8 *)(param_1 + 0x550);
  local_58 = 0;
  local_50 = 0;
  FUN_14009d848(&local_58,&local_40);
  FUN_140844560(uVar6,&local_48,&local_58);
  *(undefined8 *)(param_1 + 0x560) = local_48;
  FUN_1449db362(&local_40);
LAB_14579a25d:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14579a3ce FUN_14579a3ce body=1583 status=ok
// SIG undefined FUN_14579a3ce(void)

void FUN_14579a3ce(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_e8 [40];
  undefined8 *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_68;
  longlong lStack_60;
  undefined1 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar20 = param_1 + 0x25a8;
  if (*(int *)(param_1 + 0x25b0) != *(int *)(param_1 + 0x25dc)) {
    FUN_14579ab1c(lVar20);
    FUN_14579a9fe(lVar20);
  }
  lVar11 = *(longlong *)(param_1 + 0x1a00);
  if (lVar11 != 0) {
    if ((longlong)*(int *)(lVar11 + 0x1738) != 0) {
      lVar14 = *(longlong *)(lVar11 + 0x1730);
      local_a0 = lVar14 + (longlong)*(int *)(lVar11 + 0x1738) * 0x28;
      do {
        lVar11 = FUN_140d02256(lVar14);
        if (lVar11 != 0) {
          lVar11 = FUN_140d02256(lVar14);
          if ((longlong)*(int *)(lVar11 + 0x38) != 0) {
            local_b8 = *(longlong **)(lVar11 + 0x30);
            local_a8 = local_b8 + *(int *)(lVar11 + 0x38);
            local_b0 = lVar20;
            do {
              lVar20 = *local_b8;
              if (lVar20 != 0) {
                uStack_88 = 0;
                uStack_80 = (undefined1 *)0x0;
                local_98 = (longlong *)0x0;
                uStack_90 = 0;
                uStack_78 = 0;
                FUN_1400bbfae(&local_68);
                uStack_90 = local_68;
                uStack_88 = lStack_60;
                if (uStack_80 != (undefined1 *)0x0) {
                  FUN_1400020a8();
                }
                uStack_80 = local_58;
                uStack_78 = CONCAT44(uStack_4c,uStack_50);
                cVar8 = (*(code *)PTR_FUN_14c758760)();
                if (cVar8 == '\0') {
LAB_14579a835:
                  FUN_14485c47a(&local_98);
                }
                else {
                  uVar10 = *(uint *)(lVar20 + 0xc);
                  if ((int)uVar10 < DAT_14c9647dc) {
                    lVar22 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
                  }
                  else {
                    lVar22 = 0;
                  }
                  if ((*(uint *)(lVar22 + 8) & 0x8400000) == 0) goto LAB_14579a835;
                  local_98 = (longlong *)0x0;
                }
                iVar13 = *(int *)(lVar20 + 0x38);
                if ((longlong)iVar13 != 0) {
                  local_c0 = *(undefined8 **)(lVar20 + 0x30);
                  lVar20 = 0;
                  do {
                    local_68 = *(undefined8 *)((longlong)local_c0 + lVar20);
                    uVar10 = (uint)((ulonglong)local_68 >> 0x10);
                    uVar17 = (uint)local_68 & 0xffff;
                    lVar22 = FUN_140d01a7c(local_b0,((uint)local_68 << 0x10 | uVar17) +
                                                    (int)((ulonglong)local_68 >> 0x20) +
                                                    (uVar10 << 0x13 | uVar10 & 0xffff) +
                                                    (uVar17 >> 4),&local_68);
                    lVar12 = (longlong)*(int *)(lVar22 + 0x30);
                    uVar10 = *(int *)(lVar22 + 0x30) + 1;
                    *(uint *)(lVar22 + 0x30) = uVar10;
                    if (*(uint *)(lVar22 + 0x34) < uVar10) {
                      FUN_148cd07a6(lVar22);
                    }
                    puVar7 = uStack_80;
                    if (*(longlong *)(lVar22 + 0x28) != 0) {
                      lVar22 = *(longlong *)(lVar22 + 0x28);
                    }
                    *(longlong **)(lVar22 + lVar12 * 0x28) = local_98;
                    puVar1 = (undefined4 *)(lVar22 + 8 + lVar12 * 0x28);
                    *puVar1 = (undefined4)uStack_90;
                    puVar1[1] = uStack_90._4_4_;
                    puVar1[2] = (undefined4)uStack_88;
                    puVar1[3] = uStack_88._4_4_;
                    *(undefined8 *)(lVar22 + 0x18 + lVar12 * 0x28) = 0;
                    lVar21 = (longlong)(int)uStack_78;
                    *(int *)(lVar22 + 0x20 + lVar12 * 0x28) = (int)uStack_78;
                    if (lVar21 == 0) {
                      *(undefined4 *)(lVar12 * 0x28 + lVar22 + 0x24) = 0;
                    }
                    else {
                      puVar16 = (undefined8 *)(lVar22 + 0x18 + lVar12 * 0x28);
                      FUN_1446dd670(puVar16,uStack_78 & 0xffffffff,0);
                      memcpy((void *)*puVar16,puVar7,lVar21 * 2);
                    }
                    lVar20 = lVar20 + 8;
                  } while ((longlong)iVar13 * 8 != lVar20);
                }
                if (uStack_80 != (undefined1 *)0x0) {
                  FUN_1400020a8();
                }
              }
              local_b8 = local_b8 + 1;
              lVar20 = local_b0;
            } while (local_b8 != local_a8);
          }
          lVar22 = lVar11 + 0x50;
          local_68 = 0x100000000;
          local_58 = &DAT_ffffffff;
          uStack_50 = 0;
          lStack_60 = lVar22;
          if (*(int *)(lVar11 + 0x68) == 0) {
            iVar13 = 0;
          }
          else {
            FUN_1449c0562(&local_68);
            iVar13 = *(int *)(lVar11 + 0x68);
          }
          plVar18 = (longlong *)(lVar11 + 0x40);
          uStack_78 = CONCAT44(uStack_4c,uStack_50);
          uStack_80 = local_58;
          puVar7 = uStack_80;
          uStack_90 = local_68;
          uStack_88 = lStack_60;
          uStack_80._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          iVar9 = uStack_80._4_4_;
          local_98 = plVar18;
          if ((uStack_80._4_4_ != iVar13) || (uStack_80 = puVar7, lStack_60 != lVar22)) {
            do {
              uStack_80 = puVar7;
              local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,iVar13);
              lVar11 = *local_98 + (longlong)iVar9 * 0x38;
              uVar2 = *(undefined8 *)(*local_98 + (longlong)iVar9 * 0x38);
              uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
              uVar17 = (uint)uVar2 & 0xffff;
              lVar12 = FUN_140d01a7c(lVar20,((uint)uVar2 << 0x10 | uVar17) +
                                            (int)((ulonglong)uVar2 >> 0x20) +
                                            (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar17 >> 4),
                                     lVar11);
              iVar13 = *(int *)(lVar12 + 0x30);
              lVar21 = (longlong)iVar13;
              *(uint *)(lVar12 + 0x30) = iVar13 + 1U;
              if (*(uint *)(lVar12 + 0x34) < iVar13 + 1U) {
                FUN_148cd07a6(lVar12,iVar13);
              }
              if (*(longlong *)(lVar12 + 0x28) != 0) {
                lVar12 = *(longlong *)(lVar12 + 0x28);
              }
              *(undefined8 *)(lVar12 + lVar21 * 0x28) = *(undefined8 *)(lVar11 + 8);
              uVar4 = *(undefined4 *)(lVar11 + 0x14);
              uVar5 = *(undefined4 *)(lVar11 + 0x18);
              uVar6 = *(undefined4 *)(lVar11 + 0x1c);
              puVar1 = (undefined4 *)(lVar12 + 8 + lVar21 * 0x28);
              *puVar1 = *(undefined4 *)(lVar11 + 0x10);
              puVar1[1] = uVar4;
              puVar1[2] = uVar5;
              puVar1[3] = uVar6;
              *(undefined8 *)(lVar12 + 0x18 + lVar21 * 0x28) = 0;
              iVar13 = *(int *)(lVar11 + 0x28);
              pvVar3 = *(void **)(lVar11 + 0x20);
              *(int *)(lVar12 + 0x20 + lVar21 * 0x28) = iVar13;
              if ((longlong)iVar13 == 0) {
                *(undefined4 *)(lVar21 * 0x28 + lVar12 + 0x24) = 0;
              }
              else {
                puVar16 = (undefined8 *)(lVar12 + 0x18 + lVar21 * 0x28);
                FUN_1446dd670(puVar16,iVar13,0);
                memcpy((void *)*puVar16,pvVar3,(longlong)iVar13 * 2);
              }
              uStack_80 = (undefined1 *)CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_90._4_4_)
              ;
              FUN_1449c0562(&uStack_90);
              iVar9 = uStack_80._4_4_;
              puVar7 = uStack_80;
              iVar13 = (int)local_c0;
            } while (((uStack_80._4_4_ != (int)local_c0) || (uStack_88 != lVar22)) ||
                    (local_98 != plVar18));
          }
        }
        lVar14 = lVar14 + 0x28;
      } while (lVar14 != local_a0);
      lVar11 = *(longlong *)(param_1 + 0x1a00);
    }
    if ((longlong)*(int *)(lVar11 + 0x1748) != 0) {
      puVar16 = *(undefined8 **)(lVar11 + 0x1740);
      local_c0 = puVar16 + (longlong)*(int *)(lVar11 + 0x1748) * 5;
      do {
        lVar11 = FUN_14096f566(puVar16);
        if ((lVar11 != 0) && ((longlong)*(int *)(lVar11 + 0x38) != 0)) {
          puVar15 = *(undefined8 **)(lVar11 + 0x30);
          lVar11 = (longlong)*(int *)(lVar11 + 0x38) << 3;
          do {
            uVar2 = *puVar15;
            uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
            uVar17 = (uint)uVar2 & 0xffff;
            lVar14 = FUN_140d01a7c(lVar20,((uint)uVar2 << 0x10 | uVar17) +
                                          (int)((ulonglong)uVar2 >> 0x20) +
                                          (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar17 >> 4),puVar15
                                  );
            iVar13 = *(int *)(lVar14 + 0x30);
            lVar22 = (longlong)iVar13;
            *(uint *)(lVar14 + 0x30) = iVar13 + 1U;
            if (*(uint *)(lVar14 + 0x34) < iVar13 + 1U) {
              FUN_148cd07a6(lVar14,iVar13);
            }
            if (*(longlong *)(lVar14 + 0x28) != 0) {
              lVar14 = *(longlong *)(lVar14 + 0x28);
            }
            *(undefined8 *)(lVar14 + lVar22 * 0x28) = *puVar16;
            uVar4 = *(undefined4 *)((longlong)puVar16 + 0xc);
            uVar5 = *(undefined4 *)(puVar16 + 2);
            uVar6 = *(undefined4 *)((longlong)puVar16 + 0x14);
            puVar1 = (undefined4 *)(lVar14 + 8 + lVar22 * 0x28);
            *puVar1 = *(undefined4 *)(puVar16 + 1);
            puVar1[1] = uVar4;
            puVar1[2] = uVar5;
            puVar1[3] = uVar6;
            *(undefined8 *)(lVar14 + 0x18 + lVar22 * 0x28) = 0;
            iVar13 = *(int *)(puVar16 + 4);
            pvVar3 = (void *)puVar16[3];
            *(int *)(lVar14 + 0x20 + lVar22 * 0x28) = iVar13;
            if ((longlong)iVar13 == 0) {
              *(undefined4 *)(lVar14 + lVar22 * 0x28 + 0x24) = 0;
            }
            else {
              puVar19 = (undefined8 *)(lVar14 + lVar22 * 0x28 + 0x18);
              FUN_1446dd670(puVar19,iVar13,0);
              memcpy((void *)*puVar19,pvVar3,(longlong)iVar13 * 2);
            }
            puVar15 = puVar15 + 1;
            lVar11 = lVar11 + -8;
          } while (lVar11 != 0);
        }
        puVar16 = puVar16 + 5;
      } while (puVar16 != local_c0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14579a9fe FUN_14579a9fe body=285 status=ok
// SIG undefined FUN_14579a9fe(void)

void FUN_14579a9fe(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_140d01c8a(*local_60 + (longlong)iStack_44 * 0x48 + 8);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1403af08a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579ab1c FUN_14579ab1c body=325 status=ok
// SIG undefined FUN_14579ab1c(void)

void FUN_14579ab1c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x44 + (longlong)iVar4 * 0x48) * 4) =
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



// FUNCTION 14579ac62 FUN_14579ac62 body=878 status=ok
// SIG undefined FUN_14579ac62(void)

void FUN_14579ac62(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Src;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 *local_e0;
  int local_d4;
  longlong local_d0;
  undefined1 local_c1;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_98 = 0;
  uStack_90 = 0;
  lVar11 = *(longlong *)(param_1 + 0x1a00);
  if ((lVar11 != 0) && ((longlong)*(int *)(lVar11 + 0x1738) != 0)) {
    lVar14 = *(longlong *)(lVar11 + 0x1730);
    local_d0 = lVar14 + (longlong)*(int *)(lVar11 + 0x1738) * 0x28;
    do {
      lVar11 = FUN_140d02256(lVar14);
      if (lVar11 != 0) {
        lVar12 = FUN_140d02256(lVar14);
        lVar11 = lVar12 + 0x50;
        local_88 = (longlong *)&DAT_100000000;
        local_78 = 0xffffffff;
        uStack_70 = 0;
        uStack_80 = lVar11;
        if (*(int *)(lVar12 + 0x68) == 0) {
          iVar13 = 0;
        }
        else {
          FUN_1449c0562(&local_88);
          iVar13 = *(int *)(lVar12 + 0x68);
        }
        plVar15 = (longlong *)(lVar12 + 0x40);
        uStack_a0 = CONCAT44(uStack_6c,uStack_70);
        local_a8 = local_78;
        uVar8 = local_a8;
        local_b8 = local_88;
        uStack_b0 = (undefined4)uStack_80;
        uStack_ac = uStack_80._4_4_;
        local_a8._4_4_ = (int)((ulonglong)local_78 >> 0x20);
        iVar9 = local_a8._4_4_;
        local_c0 = plVar15;
        if ((local_a8._4_4_ != iVar13) || (local_a8 = uVar8, uStack_80 != lVar11)) {
          do {
            local_d4 = iVar13;
            local_a8 = uVar8;
            uVar7 = uStack_90;
            lVar12 = *local_c0;
            if (*(longlong *)(lVar12 + 0x10 + (longlong)iVar9 * 0x38) != 0) {
              lVar16 = (longlong)(int)uStack_90;
              uVar10 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
              if (uStack_90._4_4_ < uVar10) {
                FUN_1406f071e(&local_98,uVar7 & 0xffffffff);
              }
              lVar12 = lVar12 + (longlong)iVar9 * 0x38;
              lVar16 = lVar16 * 0x20;
              uVar4 = *(undefined4 *)(lVar12 + 0x14);
              uVar5 = *(undefined4 *)(lVar12 + 0x18);
              uVar6 = *(undefined4 *)(lVar12 + 0x1c);
              puVar2 = (undefined4 *)(local_98 + lVar16);
              *puVar2 = *(undefined4 *)(lVar12 + 0x10);
              puVar2[1] = uVar4;
              puVar2[2] = uVar5;
              puVar2[3] = uVar6;
              *(undefined8 *)(local_98 + 0x10 + lVar16) = 0;
              iVar13 = *(int *)(lVar12 + 0x28);
              _Src = *(void **)(lVar12 + 0x20);
              *(int *)(local_98 + 0x18 + lVar16) = iVar13;
              if ((longlong)iVar13 == 0) {
                *(undefined4 *)(local_98 + lVar16 + 0x1c) = 0;
              }
              else {
                puVar17 = (undefined8 *)(lVar16 + local_98 + 0x10);
                FUN_1446dd670(puVar17,iVar13,0);
                memcpy((void *)*puVar17,_Src,(longlong)iVar13 * 2);
              }
            }
            local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
            FUN_1449c0562(&local_b8);
            iVar9 = local_a8._4_4_;
            uVar8 = local_a8;
            iVar13 = local_d4;
          } while (((local_a8._4_4_ != local_d4) || (CONCAT44(uStack_ac,uStack_b0) != lVar11)) ||
                  (local_c0 != plVar15));
        }
      }
      lVar14 = lVar14 + 0x28;
    } while (lVar14 != local_d0);
  }
  lVar11 = FUN_14050fd64();
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  local_e0 = &local_c1;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  FUN_1457028c8(lVar11 + 0x1e8,&local_c0,&local_98);
  plVar15 = local_b8;
  if ((longlong **)(param_1 + 0x25f8) != &local_c0) {
    *(longlong **)(param_1 + 0x25f8) = local_c0;
    local_c0 = (longlong *)0x0;
    plVar3 = *(longlong **)(param_1 + 0x2600);
    if (local_b8 != plVar3) {
      local_b8 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x2600) = plVar15;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar3 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
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
  plVar15 = local_b8;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_b8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  FUN_1449db362(&local_88);
  FUN_140861e20(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579afd2 FUN_14579afd2 body=1094 status=ok
// SIG undefined FUN_14579afd2(void)

longlong FUN_14579afd2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  FUN_140d02528();
  FUN_140d02432(param_1 + 0x10,param_2 + 0x10);
  FUN_140d02528(param_1 + 0x60,param_2 + 0x60);
  FUN_140d02432(param_1 + 0x70,param_2 + 0x70);
  FUN_140d02432(param_1 + 0xc0,param_2 + 0xc0);
  FUN_140d02432(param_1 + 0x110,param_2 + 0x110);
  FUN_140d02432(param_1 + 0x160,param_2 + 0x160);
  FUN_140d02432(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_140d02432(param_1 + 0x200,param_2 + 0x200);
  FUN_140d02432(param_1 + 0x250,param_2 + 0x250);
  FUN_140d02432(param_1 + 0x2a0,param_2 + 0x2a0);
  FUN_140d02432(param_1 + 0x2f0,param_2 + 0x2f0);
  FUN_140d02432(param_1 + 0x340,param_2 + 0x340);
  *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(param_2 + 0x390);
  FUN_140d02432(param_1 + 0x398,param_2 + 0x398);
  FUN_140d02432(param_1 + 1000,param_2 + 1000);
  uVar1 = *(undefined4 *)(param_2 + 0x43c);
  uVar2 = *(undefined4 *)(param_2 + 0x440);
  uVar3 = *(undefined4 *)(param_2 + 0x444);
  *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_2 + 0x438);
  *(undefined4 *)(param_1 + 0x43c) = uVar1;
  *(undefined4 *)(param_1 + 0x440) = uVar2;
  *(undefined4 *)(param_1 + 0x444) = uVar3;
  *(undefined2 *)(param_1 + 0x4bc) = *(undefined2 *)(param_2 + 0x4bc);
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_2 + 0x4b8);
  FUN_14093c00e(param_1 + 0x4c0,param_2 + 0x4c0);
  *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(param_2 + 0x4d0);
  uVar1 = *(undefined4 *)(param_2 + 0x4dc);
  uVar2 = *(undefined4 *)(param_2 + 0x4e0);
  uVar3 = *(undefined4 *)(param_2 + 0x4e4);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x4d8);
  *(undefined4 *)(param_1 + 0x4dc) = uVar1;
  *(undefined4 *)(param_1 + 0x4e0) = uVar2;
  *(undefined4 *)(param_1 + 0x4e4) = uVar3;
  FUN_144a787a6(param_1 + 0x4e8,param_2 + 0x4e8);
  FUN_140d024ce(param_1 + 0x4f8,param_2 + 0x4f8);
  FUN_140d024ce(param_1 + 0x508,param_2 + 0x508);
  FUN_140d024ce(param_1 + 0x518,param_2 + 0x518);
  FUN_140d024ce(param_1 + 0x528,param_2 + 0x528);
  FUN_140d024ce(param_1 + 0x538,param_2 + 0x538);
  FUN_140d024ce(param_1 + 0x548,param_2 + 0x548);
  FUN_140d024ce(param_1 + 0x558,param_2 + 0x558);
  FUN_140d024ce(param_1 + 0x568,param_2 + 0x568);
  FUN_140d024ce(param_1 + 0x578,param_2 + 0x578);
  FUN_140d024ce(param_1 + 0x588,param_2 + 0x588);
  *(undefined1 *)(param_1 + 0x598) = *(undefined1 *)(param_2 + 0x598);
  FUN_140d02432(param_1 + 0x5a0,param_2 + 0x5a0);
  *(undefined8 *)(param_1 + 0x5f0) = *(undefined8 *)(param_2 + 0x5f0);
  FUN_140d02528(param_1 + 0x5f8,param_2 + 0x5f8);
  FUN_140d02432(param_1 + 0x608,param_2 + 0x608);
  FUN_140d02528(param_1 + 0x658,param_2 + 0x658);
  FUN_140d02432(param_1 + 0x668,param_2 + 0x668);
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_2 + 0x728);
  *(undefined2 *)(param_1 + 0x72c) = *(undefined2 *)(param_2 + 0x72c);
  FUN_14093c00e(param_1 + 0x730,param_2 + 0x730);
  *(undefined8 *)(param_1 + 0x740) = *(undefined8 *)(param_2 + 0x740);
  uVar1 = *(undefined4 *)(param_2 + 0x74c);
  uVar2 = *(undefined4 *)(param_2 + 0x750);
  uVar3 = *(undefined4 *)(param_2 + 0x754);
  *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(param_2 + 0x748);
  *(undefined4 *)(param_1 + 0x74c) = uVar1;
  *(undefined4 *)(param_1 + 0x750) = uVar2;
  *(undefined4 *)(param_1 + 0x754) = uVar3;
  FUN_144a787a6(param_1 + 0x758,param_2 + 0x758);
  puVar9 = (undefined8 *)(param_2 + 0x768);
  puVar10 = (undefined8 *)(param_1 + 0x768);
  for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(param_2 + 0x7a8);
  FUN_140d02432(param_1 + 0x7b0,param_2 + 0x7b0);
  FUN_140d02432(param_1 + 0x800,param_2 + 0x800);
  *(undefined4 *)(param_1 + 0x8c0) = *(undefined4 *)(param_2 + 0x8c0);
  *(undefined2 *)(param_1 + 0x8c4) = *(undefined2 *)(param_2 + 0x8c4);
  FUN_14093c00e(param_1 + 0x8c8,param_2 + 0x8c8);
  *(undefined8 *)(param_1 + 0x8d8) = *(undefined8 *)(param_2 + 0x8d8);
  uVar1 = *(undefined4 *)(param_2 + 0x8e4);
  uVar2 = *(undefined4 *)(param_2 + 0x8e8);
  uVar3 = *(undefined4 *)(param_2 + 0x8ec);
  *(undefined4 *)(param_1 + 0x8e0) = *(undefined4 *)(param_2 + 0x8e0);
  *(undefined4 *)(param_1 + 0x8e4) = uVar1;
  *(undefined4 *)(param_1 + 0x8e8) = uVar2;
  *(undefined4 *)(param_1 + 0x8ec) = uVar3;
  FUN_144a787a6(param_1 + 0x8f0,param_2 + 0x8f0);
  uVar1 = *(undefined4 *)(param_2 + 0x904);
  uVar2 = *(undefined4 *)(param_2 + 0x908);
  uVar3 = *(undefined4 *)(param_2 + 0x90c);
  uVar4 = *(undefined4 *)(param_2 + 0x910);
  uVar5 = *(undefined4 *)(param_2 + 0x914);
  uVar6 = *(undefined4 *)(param_2 + 0x918);
  uVar7 = *(undefined4 *)(param_2 + 0x91c);
  *(undefined4 *)(param_1 + 0x900) = *(undefined4 *)(param_2 + 0x900);
  *(undefined4 *)(param_1 + 0x904) = uVar1;
  *(undefined4 *)(param_1 + 0x908) = uVar2;
  *(undefined4 *)(param_1 + 0x90c) = uVar3;
  *(undefined4 *)(param_1 + 0x910) = uVar4;
  *(undefined4 *)(param_1 + 0x914) = uVar5;
  *(undefined4 *)(param_1 + 0x918) = uVar6;
  *(undefined4 *)(param_1 + 0x91c) = uVar7;
  *(undefined4 *)(param_1 + 0x990) = *(undefined4 *)(param_2 + 0x990);
  *(undefined2 *)(param_1 + 0x994) = *(undefined2 *)(param_2 + 0x994);
  FUN_14093c00e(param_1 + 0x998,param_2 + 0x998);
  *(undefined8 *)(param_1 + 0x9a8) = *(undefined8 *)(param_2 + 0x9a8);
  uVar1 = *(undefined4 *)(param_2 + 0x9b4);
  uVar2 = *(undefined4 *)(param_2 + 0x9b8);
  uVar3 = *(undefined4 *)(param_2 + 0x9bc);
  *(undefined4 *)(param_1 + 0x9b0) = *(undefined4 *)(param_2 + 0x9b0);
  *(undefined4 *)(param_1 + 0x9b4) = uVar1;
  *(undefined4 *)(param_1 + 0x9b8) = uVar2;
  *(undefined4 *)(param_1 + 0x9bc) = uVar3;
  FUN_144a787a6(param_1 + 0x9c0,param_2 + 0x9c0);
  uVar1 = *(undefined4 *)(param_2 + 0x9d4);
  uVar2 = *(undefined4 *)(param_2 + 0x9d8);
  uVar3 = *(undefined4 *)(param_2 + 0x9dc);
  uVar4 = *(undefined4 *)(param_2 + 0x9e0);
  uVar5 = *(undefined4 *)(param_2 + 0x9e4);
  uVar6 = *(undefined4 *)(param_2 + 0x9e8);
  uVar7 = *(undefined4 *)(param_2 + 0x9ec);
  *(undefined4 *)(param_1 + 0x9d0) = *(undefined4 *)(param_2 + 0x9d0);
  *(undefined4 *)(param_1 + 0x9d4) = uVar1;
  *(undefined4 *)(param_1 + 0x9d8) = uVar2;
  *(undefined4 *)(param_1 + 0x9dc) = uVar3;
  *(undefined4 *)(param_1 + 0x9e0) = uVar4;
  *(undefined4 *)(param_1 + 0x9e4) = uVar5;
  *(undefined4 *)(param_1 + 0x9e8) = uVar6;
  *(undefined4 *)(param_1 + 0x9ec) = uVar7;
  *(undefined4 *)(param_1 + 0x9f0) = *(undefined4 *)(param_2 + 0x9f0);
  FUN_14579b418(param_1 + 0x9f8,param_2 + 0x9f8);
  return param_1;
}



// FUNCTION 14579b418 FUN_14579b418 body=427 status=ok
// SIG undefined FUN_14579b418(void)

longlong FUN_14579b418(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  FUN_144a67f5c();
  FUN_144a67f5c(param_1 + 0x10,param_2 + 0x10);
  puVar12 = (undefined8 *)(param_2 + 0x20);
  puVar13 = (undefined8 *)(param_1 + 0x20);
  for (lVar11 = 8; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  FUN_140d02912(param_1 + 0x68,param_2 + 0x68);
  uVar8 = *(undefined8 *)(param_2 + 0x80);
  uVar9 = *(undefined8 *)(param_2 + 0x88);
  uVar10 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = uVar8;
  *(undefined8 *)(param_1 + 0x88) = uVar9;
  *(undefined8 *)(param_1 + 0x90) = uVar10;
  memcpy((void *)(param_1 + 0x98),(void *)(param_2 + 0x98),0x84);
  FUN_140d02912(param_1 + 0x120,param_2 + 0x120);
  uVar1 = *(undefined4 *)(param_2 + 0x134);
  uVar2 = *(undefined4 *)(param_2 + 0x138);
  uVar3 = *(undefined4 *)(param_2 + 0x13c);
  uVar4 = *(undefined4 *)(param_2 + 0x140);
  uVar5 = *(undefined4 *)(param_2 + 0x144);
  uVar6 = *(undefined4 *)(param_2 + 0x148);
  uVar7 = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = uVar1;
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  *(undefined4 *)(param_1 + 0x13c) = uVar3;
  *(undefined4 *)(param_1 + 0x140) = uVar4;
  *(undefined4 *)(param_1 + 0x144) = uVar5;
  *(undefined4 *)(param_1 + 0x148) = uVar6;
  *(undefined4 *)(param_1 + 0x14c) = uVar7;
  FUN_140d02912(param_1 + 0x150,param_2 + 0x150);
  uVar1 = *(undefined4 *)(param_2 + 0x164);
  uVar2 = *(undefined4 *)(param_2 + 0x168);
  uVar3 = *(undefined4 *)(param_2 + 0x16c);
  uVar4 = *(undefined4 *)(param_2 + 0x170);
  uVar5 = *(undefined4 *)(param_2 + 0x174);
  uVar6 = *(undefined4 *)(param_2 + 0x178);
  uVar7 = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x164) = uVar1;
  *(undefined4 *)(param_1 + 0x168) = uVar2;
  *(undefined4 *)(param_1 + 0x16c) = uVar3;
  *(undefined4 *)(param_1 + 0x170) = uVar4;
  *(undefined4 *)(param_1 + 0x174) = uVar5;
  *(undefined4 *)(param_1 + 0x178) = uVar6;
  *(undefined4 *)(param_1 + 0x17c) = uVar7;
  FUN_144a67f5c(param_1 + 0x180,param_2 + 0x180);
  puVar12 = (undefined8 *)(param_2 + 400);
  puVar13 = (undefined8 *)(param_1 + 400);
  for (lVar11 = 10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  FUN_140d02912(param_1 + 0x1e0,param_2 + 0x1e0);
  uVar8 = *(undefined8 *)(param_2 + 0x1f8);
  uVar9 = *(undefined8 *)(param_2 + 0x200);
  uVar10 = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f8) = uVar8;
  *(undefined8 *)(param_1 + 0x200) = uVar9;
  *(undefined8 *)(param_1 + 0x208) = uVar10;
  uVar1 = *(undefined4 *)(param_2 + 0x214);
  uVar2 = *(undefined4 *)(param_2 + 0x218);
  uVar3 = *(undefined4 *)(param_2 + 0x21c);
  uVar4 = *(undefined4 *)(param_2 + 0x220);
  uVar5 = *(undefined4 *)(param_2 + 0x224);
  uVar6 = *(undefined4 *)(param_2 + 0x228);
  uVar7 = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x214) = uVar1;
  *(undefined4 *)(param_1 + 0x218) = uVar2;
  *(undefined4 *)(param_1 + 0x21c) = uVar3;
  *(undefined4 *)(param_1 + 0x220) = uVar4;
  *(undefined4 *)(param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x228) = uVar6;
  *(undefined4 *)(param_1 + 0x22c) = uVar7;
  FUN_140d02912(param_1 + 0x230,param_2 + 0x230);
  uVar8 = *(undefined8 *)(param_2 + 0x248);
  uVar9 = *(undefined8 *)(param_2 + 0x250);
  uVar10 = *(undefined8 *)(param_2 + 600);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x248) = uVar8;
  *(undefined8 *)(param_1 + 0x250) = uVar9;
  *(undefined8 *)(param_1 + 600) = uVar10;
  uVar8 = *(undefined8 *)(param_2 + 0x268);
  uVar9 = *(undefined8 *)(param_2 + 0x270);
  uVar10 = *(undefined8 *)(param_2 + 0x278);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  *(undefined8 *)(param_1 + 0x268) = uVar8;
  *(undefined8 *)(param_1 + 0x270) = uVar9;
  *(undefined8 *)(param_1 + 0x278) = uVar10;
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
  return param_1;
}



// FUNCTION 14579b5c4 FUN_14579b5c4 body=94 status=ok
// SIG undefined FUN_14579b5c4(void)

void FUN_14579b5c4(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_140d08692(param_1);
    FUN_140d087d8(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    FUN_1408be2c4(param_1 + 0x50,0);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 14579b622 FUN_14579b622 body=47 status=ok
// SIG undefined FUN_14579b622(void)

void FUN_14579b622(longlong *param_1)

{
  FUN_140e6c696();
  if ((char)param_1[0x137] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014579b643. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x670))(param_1);
    return;
  }
  return;
}



// FUNCTION 14579b652 FUN_14579b652 body=26 status=ok
// SIG undefined FUN_14579b652(void)

void FUN_14579b652(undefined8 param_1)

{
  FUN_14579b66c();
  FUN_140cef0ca(param_1);
  return;
}



// FUNCTION 14579b66c FUN_14579b66c body=244 status=ok
// SIG undefined FUN_14579b66c(void)

void FUN_14579b66c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *(undefined8 **)(param_1 + 0xb0);
  iVar1 = FUN_140d09bd2((uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
  lVar2 = (longlong)iVar1 * 0x20 + DAT_14cb7c370;
  if (lVar2 != 0 && iVar1 != -1) {
    local_38 = 0;
    FUN_14485c47a(&local_38,param_1);
    local_30 = &local_38;
    FUN_14579bb66(lVar2 + 8);
    if (*(int *)(lVar2 + 0x10) == 0) {
      FUN_14579b946(*(undefined8 *)(param_1 + 0xb0));
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  local_40 = 0;
  FUN_14485c47a(&local_40,lVar2);
  FUN_14579b762(local_40);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579b762 FUN_14579b762 body=261 status=ok
// SIG undefined FUN_14579b762(void)

void FUN_14579b762(undefined8 param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar4 = DAT_14cb7c3c0;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7c3c8 != DAT_14cb7c3f4) {
    puVar6 = &DAT_14cb7c3f8;
    if (DAT_14cb7c400 != (undefined *)0x0) {
      puVar6 = DAT_14cb7c400;
    }
    uVar5 = (longlong)(int)((uint)((ulonglong)param_1 >> 0x20) ^ (uint)param_1) &
            (longlong)DAT_14cb7c408 - 1U;
    lVar3 = (longlong)*(int *)(puVar6 + uVar5 * 4);
    if (lVar3 != -1) {
      local_38 = *(undefined8 *)(DAT_14cb7c3c0 + lVar3 * 0x18);
      local_40 = param_1;
      cVar2 = FUN_140434a50();
      if (cVar2 == '\0') {
        puVar1 = (undefined8 *)(lVar4 + lVar3 * 0x18);
        do {
          puVar7 = puVar1;
          lVar4 = (longlong)*(int *)(puVar7 + 2);
          if (lVar4 == -1) goto LAB_14579b7f9;
          puVar1 = (undefined8 *)(DAT_14cb7c3c0 + lVar4 * 0x18);
          local_38 = *puVar1;
          local_40 = param_1;
          cVar2 = FUN_140434a50(&local_38,&local_40);
        } while (cVar2 == '\0');
        puVar7 = puVar7 + 2;
      }
      else {
        puVar7 = (undefined8 *)(puVar6 + uVar5 * 4);
      }
      FUN_14579b868(*(undefined4 *)puVar7);
    }
  }
LAB_14579b7f9:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579b868 FUN_14579b868 body=92 status=ok
// SIG undefined FUN_14579b868(void)

void FUN_14579b868(int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  longlong lVar5;
  
  puVar3 = &DAT_14cb7c3f8;
  if (DAT_14cb7c400 != (undefined *)0x0) {
    puVar3 = DAT_14cb7c400;
  }
  lVar1 = DAT_14cb7c3c0 + (longlong)param_1 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)(puVar3 + lVar5 * 4);
  if (iVar2 == param_1) {
    piVar4 = (int *)(puVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(DAT_14cb7c3c0 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_1);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_14579b8c4();
  return;
}



// FUNCTION 14579b8c4 FUN_14579b8c4 body=130 status=ok
// SIG undefined FUN_14579b8c4(void)

void FUN_14579b8c4(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb7c3c0;
  if (DAT_14cb7c3f4 != 0) {
    *(int *)(DAT_14cb7c3c0 + (longlong)DAT_14cb7c3f0 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7c3f4) {
    iVar4 = DAT_14cb7c3f0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cb7c3f4 = DAT_14cb7c3f4 + 1;
  puVar3 = &DAT_14cb7c3d0;
  if (DAT_14cb7c3e0 != (undefined *)0x0) {
    puVar3 = DAT_14cb7c3e0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb7c3f0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14579b946 FUN_14579b946 body=261 status=ok
// SIG undefined FUN_14579b946(void)

void FUN_14579b946(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar1 = DAT_14cb7c370;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7c378 != DAT_14cb7c3a4) {
    puVar4 = &DAT_14cb7c3a8;
    if (DAT_14cb7c3b0 != (undefined *)0x0) {
      puVar4 = DAT_14cb7c3b0;
    }
    uVar3 = (longlong)(int)((uint)((ulonglong)param_1 >> 0x20) ^ (uint)param_1) &
            (longlong)DAT_14cb7c3b8 - 1U;
    if ((longlong)*(int *)(puVar4 + uVar3 * 4) != -1) {
      lVar6 = (longlong)*(int *)(puVar4 + uVar3 * 4) * 0x20;
      local_38 = *(undefined8 *)(DAT_14cb7c370 + lVar6);
      local_40 = param_1;
      cVar2 = FUN_140d09c9e();
      if (cVar2 == '\0') {
        lVar1 = lVar1 + lVar6;
        do {
          lVar5 = lVar1;
          lVar6 = (longlong)*(int *)(lVar5 + 0x18);
          if (lVar6 == -1) goto LAB_14579b9dd;
          lVar6 = lVar6 * 0x20;
          lVar1 = DAT_14cb7c370 + lVar6;
          local_38 = *(undefined8 *)(DAT_14cb7c370 + lVar6);
          local_40 = param_1;
          cVar2 = FUN_140d09c9e(&local_38,&local_40);
        } while (cVar2 == '\0');
        puVar7 = (undefined4 *)(lVar5 + 0x18);
      }
      else {
        puVar7 = (undefined4 *)(puVar4 + uVar3 * 4);
      }
      FUN_14579ba4c(*puVar7);
    }
  }
LAB_14579b9dd:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579ba4c FUN_14579ba4c body=96 status=ok
// SIG undefined FUN_14579ba4c(void)

void FUN_14579ba4c(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  longlong lVar4;
  
  puVar2 = &DAT_14cb7c3a8;
  if (DAT_14cb7c3b0 != (undefined *)0x0) {
    puVar2 = DAT_14cb7c3b0;
  }
  lVar4 = (longlong)*(int *)(DAT_14cb7c370 + 0x1c + (longlong)param_1 * 0x20);
  iVar1 = *(int *)(puVar2 + lVar4 * 4);
  if (iVar1 == param_1) {
    piVar3 = (int *)(puVar2 + lVar4 * 4);
  }
  else {
    do {
      piVar3 = (int *)(DAT_14cb7c370 + (longlong)iVar1 * 0x20 + 0x18);
      iVar1 = *piVar3;
    } while (iVar1 != param_1);
  }
  *piVar3 = *(int *)(DAT_14cb7c370 + (longlong)param_1 * 0x20 + 0x18);
  FUN_14579baac();
  return;
}



// FUNCTION 14579baac FUN_14579baac body=48 status=ok
// SIG undefined FUN_14579baac(void)

void FUN_14579baac(int param_1)

{
  if (*(longlong *)(DAT_14cb7c370 + 8 + (longlong)param_1 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14579badc(param_1);
  return;
}



// FUNCTION 14579badc FUN_14579badc body=137 status=ok
// SIG undefined FUN_14579badc(void)

void FUN_14579badc(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  
  lVar2 = DAT_14cb7c370;
  if (DAT_14cb7c3a4 != 0) {
    *(int *)(DAT_14cb7c370 + (longlong)DAT_14cb7c3a0 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar3 = -1;
  if (0 < DAT_14cb7c3a4) {
    iVar3 = DAT_14cb7c3a0;
  }
  *(int *)(lVar2 + (longlong)param_1 * 0x20 + 4) = iVar3;
  DAT_14cb7c3a4 = DAT_14cb7c3a4 + 1;
  puVar4 = &DAT_14cb7c380;
  if (DAT_14cb7c390 != (undefined *)0x0) {
    puVar4 = DAT_14cb7c390;
  }
  iVar3 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar3 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb7c3a0 = param_1;
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14579bb66 FUN_14579bb66 body=273 status=ok
// SIG undefined FUN_14579bb66(void)

void FUN_14579bb66(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar13 = (longlong)(int)uVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_14579bc78(lVar2);
    uVar7 = 0;
    uVar8 = 0;
    do {
      uVar11 = (ulonglong)uVar8;
      uVar3 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar1) {
        uVar3 = uVar1;
      }
      lVar12 = lVar2 + 8 + uVar11 * 8;
      uVar9 = uVar8;
      uVar6 = uVar11;
      do {
        uVar6 = uVar6 + 1;
        uVar10 = uVar3;
        if (lVar13 <= (longlong)uVar6) break;
        bVar5 = FUN_14579bc78(lVar12,*param_2);
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + 8;
        uVar10 = uVar9;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (uVar7 != uVar8) {
          memmove((void *)(lVar2 + (longlong)(int)uVar7 * 8),(void *)(lVar2 + uVar11 * 8),
                  (longlong)(int)(uVar10 - uVar8) << 3);
        }
        uVar7 = uVar7 + (uVar10 - uVar8);
      }
      uVar8 = uVar10;
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar6 < lVar13);
    *(uint *)(param_1 + 1) = uVar7;
  }
  return;
}



// FUNCTION 14579bc78 FUN_14579bc78 body=55 status=ok
// SIG undefined FUN_14579bc78(void)

ulonglong FUN_14579bc78(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14579bcb0 FUN_14579bcb0 body=38 status=ok
// SIG undefined FUN_14579bcb0(void)

void FUN_14579bcb0(longlong param_1)

{
  FUN_140d09dae();
  if (*(char *)(param_1 + 0x618) == '\x01') {
    *(undefined4 *)(param_1 + 0x418) = 0;
  }
  return;
}



// FUNCTION 14579bcd6 FUN_14579bcd6 body=177 status=ok
// SIG undefined FUN_14579bcd6(void)

undefined8 FUN_14579bcd6(undefined8 param_1)

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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_144a78c84();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579bd88 FUN_14579bd88 body=418 status=ok
// SIG undefined FUN_14579bd88(void)

undefined4 * FUN_14579bd88(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  double dVar11;
  double *pdVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar15 = param_3;
  plVar10 = (longlong *)FUN_144a545f2(param_3,*(undefined8 *)(param_1 + 0x24),param_4);
  uVar13 = (undefined4)lVar15;
  dVar11 = 0.0;
  if (plVar10 != (longlong *)0x0) {
    plVar16 = plVar10;
    dVar11 = (double)(**(code **)(*plVar10 + 0x4c8))(plVar10,*(undefined8 *)(param_1 + 0x24));
    uVar13 = SUB84(plVar16,0);
    if (SUB81(dVar11,0) != '\0') {
      (**(code **)(*plVar10 + 0x4b8))(plVar10,param_2,*(undefined8 *)(param_1 + 0x24));
      goto LAB_14579bdf6;
    }
  }
  lVar15 = *(longlong *)(param_3 + 0x1c8);
  if (lVar15 == 0) {
    *(double *)(param_2 + 4) = DAT_14c846508;
    uVar8 = DAT_14c846500._4_4_;
    uVar7 = (undefined4)DAT_14c846500;
    uVar13 = DAT_14c8464f8._4_4_;
    *param_2 = (undefined4)DAT_14c8464f8;
    param_2[1] = uVar13;
    param_2[2] = uVar7;
    param_2[3] = uVar8;
    if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  dVar3 = *(double *)(lVar15 + 0x240);
  dVar4 = *(double *)(lVar15 + 0x248);
  dVar5 = *(double *)(lVar15 + 0x250);
  dVar6 = *(double *)(lVar15 + 600);
  pdVar12 = *(double **)(lVar15 + 0x228);
  local_88 = dVar3;
  uStack_80 = dVar4;
  local_78 = dVar5;
  uStack_70 = dVar6;
  if (pdVar12 == (double *)0x0) {
    uVar13 = 0x40;
    pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
    dVar11 = DAT_14c8463d8;
    *pdVar12 = DAT_14c8463d0;
    pdVar12[1] = dVar11;
    dVar11 = DAT_14c8463e8;
    pdVar12[2] = DAT_14c8463e0;
    pdVar12[3] = dVar11;
    dVar11 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
    pdVar12[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
    pdVar12[5] = dVar11;
    dVar11 = DAT_14c846508;
    pdVar12[6] = DAT_14c846508;
    *(double **)(lVar15 + 0x228) = pdVar12;
  }
  auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar12[1]);
  auVar1._0_8_ = -(ulonglong)(dVar3 != *pdVar12);
  auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar12[1]) >> 0x20);
  iVar9 = movmskpd(SUB84(dVar11,0),auVar1);
  auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar12[3]);
  auVar2._0_8_ = -(ulonglong)(dVar5 != pdVar12[2]);
  auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar12[3]) >> 0x20);
  uVar14 = movmskpd(uVar13,auVar2);
  if ((uVar14 & 0x3fffffff) != 0 || iVar9 != 0) {
    *(undefined4 *)(pdVar12 + 2) = (undefined4)local_78;
    *(undefined4 *)((longlong)pdVar12 + 0x14) = local_78._4_4_;
    *(undefined4 *)(pdVar12 + 3) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)pdVar12 + 0x1c) = uStack_70._4_4_;
    *(undefined4 *)pdVar12 = (undefined4)local_88;
    *(undefined4 *)((longlong)pdVar12 + 4) = local_88._4_4_;
    *(undefined4 *)(pdVar12 + 1) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)pdVar12 + 0xc) = uStack_80._4_4_;
    FUN_1448052ee(&local_88,&local_68);
    pdVar12[6] = local_58;
    pdVar12[4] = local_68;
    pdVar12[5] = dStack_60;
  }
  *(double *)(param_2 + 4) = pdVar12[6];
  uVar13 = *(undefined4 *)((longlong)pdVar12 + 0x24);
  uVar7 = *(undefined4 *)(pdVar12 + 5);
  uVar8 = *(undefined4 *)((longlong)pdVar12 + 0x2c);
  *param_2 = *(undefined4 *)(pdVar12 + 4);
  param_2[1] = uVar13;
  param_2[2] = uVar7;
  param_2[3] = uVar8;
LAB_14579bdf6:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14579bf2c FUN_14579bf2c body=25 status=ok
// SIG undefined FUN_14579bf2c(void)

undefined8 FUN_14579bf2c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14579bf72 FUN_14579bf72 body=21 status=ok
// SIG undefined FUN_14579bf72(void)

undefined8 FUN_14579bf72(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14579bf88 FUN_14579bf88 body=25 status=ok
// SIG undefined FUN_14579bf88(void)

undefined8 FUN_14579bf88(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14579bfa2 FUN_14579bfa2 body=154 status=ok
// SIG undefined FUN_14579bfa2(void)

bool FUN_14579bfa2(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 14579c098 FUN_14579c098 body=103 status=ok
// SIG undefined FUN_14579c098(void)

ulonglong FUN_14579c098(longlong param_1)

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
LAB_14579c0e2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14579c0e2;
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



// FUNCTION 14579c108 FUN_14579c108 body=149 status=ok
// SIG undefined FUN_14579c108(void)

void FUN_14579c108(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  if ((*(int *)(param_1 + 0x1a8) != 0) && (*(longlong **)(param_1 + 0x1a0) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x60))();
  }
  FUN_140d111f0(param_1 + 0xf0,param_1);
  *(undefined1 *)(param_1 + 0x180) = *(undefined1 *)(param_2 + 0x30);
  if ((longlong)*(int *)(param_1 + 0x140) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x138);
    lVar2 = (longlong)*(int *)(param_1 + 0x140) * 0xa8;
    do {
      if (*(char *)(lVar1 + 0x91) == '\x01') {
        FUN_14128cdea(lVar1);
        FUN_140d10d50(lVar1 + 0x18,lVar1);
      }
      lVar1 = lVar1 + 0xa8;
      lVar2 = lVar2 + -0xa8;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14579c19e FUN_14579c19e body=124 status=ok
// SIG undefined FUN_14579c19e(void)

longlong FUN_14579c19e(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_50 = *param_1;
    FUN_1446dcdd4(local_48);
    lVar1 = FUN_141894c24(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579c222 FUN_14579c222 body=1 status=ok
// SIG undefined FUN_14579c222(void)

void FUN_14579c222(void)

{
  return;
}



// FUNCTION 14579c224 FUN_14579c224 body=135 status=ok
// SIG undefined FUN_14579c224(void)

void FUN_14579c224(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x150;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x14c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x150 + 0x148);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x148);
  FUN_140a31f9c(*param_1 + lVar2 + 8);
  FUN_14579c2ac(param_1,param_2);
  return;
}



// FUNCTION 14579c2ac FUN_14579c2ac body=124 status=ok
// SIG undefined FUN_14579c2ac(void)

void FUN_14579c2ac(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x150) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x150) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x150 + 4) = uVar5;
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



// FUNCTION 14579c328 FUN_14579c328 body=113 status=ok
// SIG undefined FUN_14579c328(void)

void FUN_14579c328(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 14579c39a FUN_14579c39a body=392 status=ok
// SIG undefined FUN_14579c39a(void)

undefined4 FUN_14579c39a(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  uVar9 = FUN_140d23eea();
  uVar8 = FUN_140005cc6(param_1,&local_58,uVar9,param_3);
  uVar9 = FUN_1400014c6(&local_58);
  lVar6 = local_58;
  if (local_58 == 0) {
LAB_14579c4ae:
    local_70 = 0;
  }
  else {
    uVar10 = FUN_140d23eea();
    cVar7 = FUN_1448093f4(lVar6,uVar10);
    if (cVar7 == '\0') goto LAB_14579c4ae;
    local_70 = local_58;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      local_68 = plStack_50;
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      bVar4 = false;
      goto LAB_14579c440;
    }
  }
  local_68 = (longlong *)0x0;
  bVar4 = true;
LAB_14579c440:
  plVar5 = local_68;
  local_60 = 0;
  FUN_14485c47a(&local_60,uVar9);
  FUN_14029d0b6(param_2,&local_70);
  plVar1 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (!bVar4) {
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
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579c524 FUN_14579c524 body=566 status=ok
// SIG undefined FUN_14579c524(void)

undefined8 * FUN_14579c524(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  void **ppvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = FUN_145971716(param_2);
  puVar1 = param_1 + 1;
  ppvVar2 = (void **)(param_1 + 3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_1400bbfc4(&local_58,lVar7);
    *(undefined4 *)puVar1 = local_58;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_54;
    *(undefined4 *)(param_1 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_4c;
    if (puVar1 == (undefined8 *)&local_58) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*ppvVar2 != (void *)0x0) {
        FUN_1400020a8();
      }
      param_1[3] = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 4) = local_40;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_3c;
    }
    cVar6 = (*(code *)PTR_FUN_14c758760)();
    if (cVar6 != '\0') {
      uVar3 = *(uint *)(lVar7 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) {
        *param_1 = 0;
        goto LAB_14579c5db;
      }
    }
    FUN_14485c47a(param_1,lVar7);
  }
LAB_14579c5db:
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  if (param_1[1] == 0) {
    local_78 = *(undefined4 *)(param_2 + 8);
    uStack_74 = *(undefined4 *)(param_2 + 0xc);
    uStack_70 = *(undefined4 *)(param_2 + 0x10);
    uStack_6c = *(undefined4 *)(param_2 + 0x14);
    local_68 = (void *)0x0;
    local_60 = *(int *)(param_2 + 0x20);
    lVar7 = (longlong)local_60;
    pvVar4 = *(void **)(param_2 + 0x18);
    if (lVar7 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,pvVar4,lVar7 * 2);
    }
    iVar5 = local_60;
    pvVar4 = local_68;
    *param_1 = 0;
    *(undefined4 *)puVar1 = local_78;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_74;
    *(undefined4 *)(param_1 + 2) = uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_6c;
    if (ppvVar2 != &local_68) {
      lVar7 = (longlong)local_60;
      *(int *)(param_1 + 4) = local_60;
      if (local_60 == 0 && *(int *)((longlong)param_1 + 0x24) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(ppvVar2,local_60);
        if (iVar5 != 0) {
          memcpy(*ppvVar2,pvVar4,lVar7 * 2);
        }
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579c75c FUN_14579c75c body=12 status=ok
// SIG undefined FUN_14579c75c(void)

void FUN_14579c75c(longlong param_1)

{
  FUN_14579c7a0(param_1 + 0x668);
  return;
}



// FUNCTION 14579c768 FUN_14579c768 body=47 status=ok
// SIG undefined FUN_14579c768(void)

void FUN_14579c768(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cbadb08);
                    /* WARNING: Could not recover jumptable at 0x00014579c794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 14579c798 FUN_14579c798 body=7 status=ok
// SIG undefined FUN_14579c798(void)

undefined1 FUN_14579c798(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x448);
}



// FUNCTION 14579c7a0 FUN_14579c7a0 body=164 status=ok
// SIG undefined FUN_14579c7a0(void)

void FUN_14579c7a0(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14579c825;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14579c825:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14579c844 FUN_14579c844 body=429 status=ok
// SIG undefined FUN_14579c844(void)

void FUN_14579c844(undefined8 param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 *local_60;
  undefined4 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_1401b2ade();
  if (plVar3 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar3 + 0x6c8))(plVar3);
    if (cVar2 != '\0') {
      lVar4 = FUN_1447210f0(param_1);
      if (lVar4 != 0) {
        lVar5 = FUN_1400f6f32(lVar4);
        if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x68), lVar5 != 0)) {
          lVar4 = FUN_1400f6f32(lVar4);
          if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0)) {
            lVar6 = FUN_1403ca102(param_1);
            if (lVar6 != 0) {
              lVar6 = FUN_140d27a2a(lVar6);
              if ((byte)(*(char *)(lVar6 + 0xb0) - 5U) < 2) {
                local_60 = (undefined8 *)0x0;
                local_58 = 0;
                FUN_1446efa72(&local_60,0,3,0x10);
                puVar1 = local_60;
                local_58 = 3;
                *local_60 = &PTR_LAB_149e06450;
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
                local_60[2] = lVar5;
                *local_60 = &PTR_FUN_14b996b20;
                local_60[3] = 0;
                FUN_14485c47a(local_60 + 3,param_1);
                puVar1[4] = param_1;
                FUN_140c6314c(lVar6,local_68,&local_60);
                FUN_1449db362(&local_60);
              }
              else {
                FUN_14042af24(lVar5,&local_60,param_1);
                if (-1 < (short)local_60) {
                  FUN_14579c9f2(lVar4,local_50,&local_60);
                  if (local_38 != 0) {
                    FUN_1400020a8();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579c9f2 FUN_14579c9f2 body=186 status=ok
// SIG undefined FUN_14579c9f2(void)

undefined8 FUN_14579c9f2(undefined8 param_1,undefined8 param_2,short *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_3 < 0) {
    FUN_1447a97f4(param_2,&DAT_14c9485f0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0xffff;
  lVar1 = FUN_140b9fe48(0,param_3);
  if (lVar1 == 0) {
    FUN_1447a97f4(param_2,&DAT_14c9485f0);
  }
  else {
    uVar2 = FUN_144a8232a(&DAT_14cb8dd48);
    FUN_140d28120(lVar1,param_2,&local_38,uVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579cab0 FUN_14579cab0 body=152 status=ok
// SIG undefined FUN_14579cab0(void)

undefined8 * FUN_14579cab0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = 2;
  param_1[6] = param_2;
  *(undefined1 *)((longlong)param_1 + 0x46) = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  uVar1 = FUN_1403ca102(param_2);
  FUN_14485c47a(param_1 + 7,uVar1);
  FUN_14579cb48(param_1);
  return param_1;
}



// FUNCTION 14579cb48 FUN_14579cb48 body=167 status=ok
// SIG undefined FUN_14579cb48(void)

void FUN_14579cb48(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144729dda(param_1 + 0x38);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x50) == 0)) {
    uVar2 = FUN_14479d2ce(param_1 + 0x38);
    lVar3 = FUN_140d27a2a(uVar2);
    FUN_14579cbf0(lVar3,&local_28,param_1,FUN_1461b74fa);
    *(undefined8 *)(param_1 + 0x50) = local_28;
    FUN_14579cbf0(lVar3 + 0x18,&local_28,param_1,FUN_1461b75c6);
    *(undefined8 *)(param_1 + 0x58) = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579cbf0 FUN_14579cbf0 body=228 status=ok
// SIG undefined FUN_14579cbf0(void)

undefined8
FUN_14579cbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14b994650;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_140c6314c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579ccd6 FUN_14579ccd6 body=417 status=ok
// SIG undefined FUN_14579ccd6(void)

undefined8 * FUN_14579ccd6(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  FUN_14485c47a((longlong)param_1 + 100);
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbf) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x360);
    }
    lVar2 = FUN_141221176(uVar3);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x78) != 3) {
        FUN_1446efa72((longlong *)(lVar2 + 0x70),0,3,0x10);
        *(undefined4 *)(lVar2 + 0x78) = 3;
      }
      puVar1 = *(undefined8 **)(lVar2 + 0x70);
      *puVar1 = &PTR_LAB_14b9821b0;
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
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14b97e2d0;
      puVar1[3] = param_1;
      puVar1[4] = FUN_1414e8c44;
    }
  }
  return param_1;
}



// FUNCTION 14579ce8c FUN_14579ce8c body=806 status=ok
// SIG undefined FUN_14579ce8c(void)

void FUN_14579ce8c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  PSRWLOCK SRWLock;
  longlong lVar17;
  double dVar18;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  PSRWLOCK local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  double local_88;
  longlong *local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar11 = FUN_1400d7050();
  if (lVar11 != 0) {
    lVar12 = FUN_144a5dd5e();
    if (((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) &&
       (plVar4 = *(longlong **)(lVar11 + 0x2500), plVar4 != (longlong *)0x0)) {
      FUN_1449027d0(param_1 + -0x30,&local_88);
      lVar12 = *(longlong *)((longlong)local_88 + 0x50);
      SRWLock = (PSRWLOCK)(lVar12 + 0x200);
      AcquireSRWLockExclusive(SRWLock);
      plVar10 = local_80;
      *(int *)(lVar12 + 0x1f8) = *(int *)(lVar12 + 0x1f8) + 1;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      *(int *)(lVar12 + 0x40) = *(int *)(lVar12 + 0x40) + 1;
      lVar15 = lVar12 + 0x30;
      FUN_140f9ed8d(*(undefined8 *)(lVar12 + 0x30),*(undefined4 *)(lVar12 + 0x38));
      *(undefined4 *)(lVar12 + 0x38) = 0;
      if (*(int *)(lVar12 + 0x3c) != 0) {
        FUN_140f9edf6(lVar15,0);
      }
      (**(code **)(*plVar4 + 0x730))(plVar4,&local_88);
      lVar16 = lVar11 + 0x3530;
      if (*(longlong *)(lVar11 + 0x38f0) != 0) {
        lVar16 = *(longlong *)(lVar11 + 0x38f0);
      }
      if ((longlong)*(int *)(lVar11 + 0x38f8) != 0) {
        local_a8 = (longlong)*(int *)(lVar11 + 0x38f8) * 0x78;
        lVar17 = 0;
        local_a0 = SRWLock;
        do {
          lVar5 = *(longlong *)(lVar16 + 0x38 + lVar17);
          if (lVar5 != 0) {
            *(int *)(lVar12 + 0x40) = *(int *)(lVar12 + 0x40) + 1;
            local_b0 = lVar15;
            puVar13 = (undefined8 *)FUN_140e0b57a(lVar15);
            uVar14 = FUN_1410050b8();
            *puVar13 = uVar14;
            puVar13[1] = (ulonglong)*(uint *)(lVar16 + 0x40 + lVar17);
            puVar13[5] = *(undefined8 *)(lVar16 + 0x28 + lVar17);
            puVar3 = (undefined4 *)(lVar16 + 0x18 + lVar17);
            uVar7 = puVar3[1];
            uVar8 = puVar3[2];
            uVar9 = puVar3[3];
            *(undefined4 *)(puVar13 + 3) = *puVar3;
            *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar7;
            *(undefined4 *)(puVar13 + 4) = uVar8;
            *(undefined4 *)((longlong)puVar13 + 0x24) = uVar9;
            *(undefined1 *)(puVar13 + 2) = 4;
            lVar15 = FUN_1402735c8();
            uVar7 = *(undefined4 *)(lVar15 + 0x69c);
            uVar8 = *(undefined4 *)(lVar15 + 0x6a0);
            uVar9 = *(undefined4 *)(lVar15 + 0x6a4);
            *(undefined4 *)(puVar13 + 8) = *(undefined4 *)(lVar15 + 0x698);
            *(undefined4 *)((longlong)puVar13 + 0x44) = uVar7;
            *(undefined4 *)(puVar13 + 9) = uVar8;
            *(undefined4 *)((longlong)puVar13 + 0x4c) = uVar9;
            puVar13[10] = *(undefined8 *)(lVar15 + 0x6a8);
            FUN_1400021e4(lVar5 + 0x40,&local_98);
            lVar15 = local_b0;
            if (puVar13 + 0xc == &local_98) {
              if (local_98 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (puVar13[0xc] != 0) {
                FUN_1400020a8();
              }
              puVar13[0xc] = local_98;
              local_98 = 0;
              *(undefined4 *)(puVar13 + 0xd) = local_90;
              *(undefined4 *)((longlong)puVar13 + 0x6c) = local_8c;
              lVar15 = local_b0;
            }
            *(undefined1 *)((longlong)puVar13 + 0x83) = 0;
            dVar6 = *(double *)(lVar16 + 0x18 + lVar17) - local_88;
            dVar18 = *(double *)(lVar16 + 0x20 + lVar17) - (double)local_80;
            dVar6 = SQRT(dVar18 * dVar18 + dVar6 * dVar6) / 100.0;
            *(float *)(puVar13 + 0xb) =
                 (float)(int)((ulonglong)(longlong)ROUND(dVar6 + dVar6 + 0.5) >> 1);
            if (*(longlong *)(lVar11 + 0x2210) != 0) {
              *(bool *)((longlong)puVar13 + 0x81) =
                   *(char *)(*(longlong *)(lVar11 + 0x2210) + 0x7e) == '\x02';
            }
            FUN_140390f7a(lVar5 + 0x18,puVar13 + 0xe);
          }
          lVar17 = lVar17 + 0x78;
          SRWLock = local_a0;
        } while (local_a8 != lVar17);
      }
      *(bool *)(param_1 + 0x30) = 0 < *(int *)(lVar12 + 0x38);
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14579d1b4 FUN_14579d1b4 body=101 status=ok
// SIG undefined FUN_14579d1b4(void)

void FUN_14579d1b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x00014579d215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14579d21a FUN_14579d21a body=115 status=ok
// SIG undefined FUN_14579d21a(void)

void FUN_14579d21a(undefined8 param_1)

{
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 **local_28;
  code *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141499196();
  local_30 = &local_39;
  local_28 = &local_38;
  local_38 = &LAB_143dafe6a;
  local_18 = &local_28;
  local_20 = FUN_140d2dc84;
  FUN_140d2d8de(param_1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579d28e FUN_14579d28e body=147 status=ok
// SIG undefined FUN_14579d28e(void)

void FUN_14579d28e(longlong param_1,int param_2)

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



// FUNCTION 14579d32e FUN_14579d32e body=169 status=ok
// SIG undefined FUN_14579d32e(void)

longlong FUN_14579d32e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14490b2fc(param_1 + 4);
  lVar1 = FUN_14001cc68(0x140,0x10);
  FUN_14579d3d8(lVar1,param_3,param_4);
  lVar2 = FUN_140ab89e0(param_2,param_1,lVar1 + 0x14,*(undefined8 *)(lVar1 + 0x60),0xff,
                        *(undefined4 *)(lVar1 + 0x60),*(undefined4 *)(lVar1 + 100),DAT_14c967818,
                        *(undefined4 *)(lVar1 + 0x10));
  *(longlong *)(lVar1 + 0x68) = lVar2;
  *(longlong *)(param_1 + 0x1d8 + (longlong)*(int *)(lVar2 + 0x70) * 8) = lVar1;
  FUN_144a6a7be(param_1 + 4);
  return lVar1;
}



// FUNCTION 14579d3d8 FUN_14579d3d8 body=295 status=ok
// SIG undefined FUN_14579d3d8(void)

void FUN_14579d3d8(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  *param_1 = &PTR_LAB_14a334190;
  param_1[1] = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 1);
  puVar8 = (undefined4 *)((longlong)param_1 + 0x14);
  for (lVar5 = 0x12; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *param_3;
    param_3 = param_3 + 1;
    puVar8 = puVar8 + 1;
  }
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x400;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = &DAT_14c7585e0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x400;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = &DAT_14c7585e0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  uVar1 = (ulonglong)
          (*(int *)((longlong)param_1 + 0xc) + -1 + (uint)(*(int *)((longlong)param_1 + 0xc) == 0))
          * 2 + 1;
  lVar5 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  uVar1 = (ulonglong)(*(int *)(param_1 + 1) + -1 + (uint)(*(int *)(param_1 + 1) == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = (uint)lVar5;
  uVar6 = (uint)lVar2;
  uVar9 = uVar6;
  if (uVar6 < uVar3) {
    uVar9 = uVar3;
  }
  *(uint *)((longlong)param_1 + 0x5c) = uVar9;
  iVar7 = uVar6 - *(int *)(param_1 + 2);
  iVar4 = uVar3 - *(int *)(param_1 + 2);
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  param_1[0xc] = CONCAT44(1 << ((byte)iVar4 & 0x1f),1 << ((byte)iVar7 & 0x1f));
  return;
}



// FUNCTION 14579d500 FUN_14579d500 body=181 status=ok
// SIG undefined FUN_14579d500(void)

longlong FUN_14579d500(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x40;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x40) == *param_3) {
          if (lVar3 != 0) goto LAB_14579d598;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x38);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14579d676(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x40 + *param_1;
LAB_14579d598:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x28;
}



// FUNCTION 14579d5b6 FUN_14579d5b6 body=90 status=ok
// SIG undefined FUN_14579d5b6(void)

undefined8 * FUN_14579d5b6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_14579d610(param_1 + 1,iVar1);
    FUN_140d3a090(param_1[1],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14579d610 FUN_14579d610 body=101 status=ok
// SIG undefined FUN_14579d610(void)

undefined8 FUN_14579d610(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x98,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xd79435e50d79435f),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x98)) {
    uVar5 = uVar2 / 0x98 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x98,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 14579d676 FUN_14579d676 body=276 status=ok
// SIG undefined FUN_14579d676(void)

undefined4 * FUN_14579d676(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14579d85a(param_1,local_48);
  FUN_1447a97f4(local_40,*param_4);
  *(undefined8 *)(local_40 + 0x28) = 0;
  *(undefined8 *)(local_40 + 0x30) = 0;
  *(undefined4 *)(local_40 + 0x38) = 0xffffffff;
  cVar1 = FUN_14579d78c(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x3c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x38) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14579da98(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579d78c FUN_14579d78c body=205 status=ok
// SIG undefined FUN_14579d78c(void)

undefined8 FUN_14579d78c(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar16 != -1) {
      do {
        piVar2 = (int *)(*param_1 + (longlong)iVar16 * 0x40);
        if (*(int *)(*param_1 + (longlong)iVar16 * 0x40) == *param_3) {
          plVar15 = *(longlong **)(piVar2 + 0xc);
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))();
            }
          }
          if (*(longlong *)(piVar2 + 6) != 0) {
            FUN_1400020a8();
          }
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          iVar7 = param_3[4];
          iVar8 = param_3[5];
          iVar9 = param_3[6];
          iVar10 = param_3[7];
          iVar11 = param_3[8];
          iVar12 = param_3[9];
          iVar13 = param_3[10];
          iVar14 = param_3[0xb];
          *(undefined8 *)(piVar2 + 0xc) = *(undefined8 *)(param_3 + 0xc);
          piVar2[8] = iVar11;
          piVar2[9] = iVar12;
          piVar2[10] = iVar13;
          piVar2[0xb] = iVar14;
          piVar2[4] = iVar7;
          piVar2[5] = iVar8;
          piVar2[6] = iVar9;
          piVar2[7] = iVar10;
          *piVar2 = iVar3;
          piVar2[1] = iVar4;
          piVar2[2] = iVar5;
          piVar2[3] = iVar6;
          FUN_14860ba2c(param_1,*param_4);
          *param_4 = iVar16;
          return 1;
        }
        iVar16 = piVar2[0xe];
      } while (iVar16 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14579d85a FUN_14579d85a body=230 status=ok
// SIG undefined FUN_14579d85a(void)

int * FUN_14579d85a(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 14579d940 FUN_14579d940 body=62 status=ok
// SIG undefined FUN_14579d940(void)

void FUN_14579d940(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ae05a4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14579d97e FUN_14579d97e body=147 status=ok
// SIG undefined FUN_14579d97e(void)

void FUN_14579d97e(longlong param_1,int param_2)

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



// FUNCTION 14579da12 FUN_14579da12 body=132 status=ok
// SIG undefined FUN_14579da12(void)

void FUN_14579da12(longlong param_1,int param_2)

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



// FUNCTION 14579da98 FUN_14579da98 body=431 status=ok
// SIG undefined FUN_14579da98(void)

void FUN_14579da98(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 14579dc48 FUN_14579dc48 body=132 status=ok
// SIG undefined FUN_14579dc48(void)

void FUN_14579dc48(longlong param_1,int param_2)

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



// FUNCTION 14579dcce FUN_14579dcce body=353 status=ok
// SIG undefined FUN_14579dcce(void)

undefined4 * FUN_14579dcce(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14579def0(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar9 = *(undefined8 *)*param_3;
  *local_40 = uVar9;
  local_40[1] = *puVar1;
  lVar7 = puVar1[1];
  local_40[2] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
    uVar9 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar4 = (uint)uVar9 & 0xffff;
  uVar8 = ((uint)uVar9 << 0x10 | uVar4) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_14579de30(param_1,uVar8,local_40,&local_4c);
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
      FUN_140d3ca92(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579de30 FUN_14579de30 body=191 status=ok
// SIG undefined FUN_14579de30(void)

undefined8 FUN_14579de30(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_14579e10c(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 14579def0 FUN_14579def0 body=239 status=ok
// SIG undefined FUN_14579def0(void)

int * FUN_14579def0(longlong *param_1,int *param_2)

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



// FUNCTION 14579dfe0 FUN_14579dfe0 body=132 status=ok
// SIG undefined FUN_14579dfe0(void)

void FUN_14579dfe0(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_14579e064(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14579e064 FUN_14579e064 body=89 status=ok
// SIG undefined FUN_14579e064(void)

void FUN_14579e064(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14579e0be();
  return;
}



// FUNCTION 14579e0be FUN_14579e0be body=78 status=ok
// SIG undefined FUN_14579e0be(void)

void FUN_14579e0be(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_14579e10c(param_1,param_2);
  return;
}



// FUNCTION 14579e10c FUN_14579e10c body=114 status=ok
// SIG undefined FUN_14579e10c(void)

void FUN_14579e10c(longlong *param_1,int param_2)

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



// FUNCTION 14579e17e FUN_14579e17e body=237 status=ok
// SIG undefined FUN_14579e17e(void)

undefined8
FUN_14579e17e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14afe31f0;
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
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14afe3180;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_14579e26c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579e26c FUN_14579e26c body=216 status=ok
// SIG undefined FUN_14579e26c(void)

undefined8 * FUN_14579e26c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
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



// FUNCTION 14579e356 FUN_14579e356 body=489 status=ok
// SIG undefined FUN_14579e356(void)

undefined8 FUN_14579e356(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 auStack_d8 [32];
  longlong local_b8 [4];
  longlong local_98 [2];
  longlong local_88 [2];
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if (lVar1 == 0) {
    puVar5 = (undefined2 *)0x0;
    iVar4 = 0;
  }
  else {
    FUN_1400021e4(param_1 + 1,local_98);
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar1 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(lVar1 + 8);
    }
    local_b8[0] = 0;
    local_b8[1] = 0;
    FUN_1400b2348(puVar2,local_b8,1);
    FUN_144a882a8(local_b8 + 2,local_b8,&DAT_149e01f60);
    FUN_1401c7f3e(local_88,local_b8 + 2,local_98);
    FUN_144a882a8(&local_78,local_88,L"_Forecast");
    puVar5 = local_78;
    iVar4 = (int)local_70;
    local_68 = local_78;
    local_78 = (undefined2 *)0x0;
    uStack_60 = local_70;
    local_70 = 0;
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_b8[2] != 0) {
      FUN_1400020a8();
    }
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)((longlong)param_1 + 0xed) == '\x01') {
    FUN_140b1283a(&local_78,L"WorldTimeOfDayActor_",&local_68);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_68 = local_78;
    uStack_60 = local_70;
    puVar5 = local_78;
    iVar4 = (int)local_70;
  }
  puVar3 = &DAT_149dfb77a;
  if (iVar4 != 0) {
    puVar3 = puVar5;
  }
  FUN_1446f470e(param_2,puVar3,1);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579e540 FUN_14579e540 body=353 status=ok
// SIG undefined FUN_14579e540(void)

undefined4 * FUN_14579e540(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14579e762(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar9 = *(undefined8 *)*param_3;
  *local_40 = uVar9;
  local_40[1] = *puVar1;
  lVar7 = puVar1[1];
  local_40[2] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
    uVar9 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar4 = (uint)uVar9 & 0xffff;
  uVar8 = ((uint)uVar9 << 0x10 | uVar4) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_14579e6a2(param_1,uVar8,local_40,&local_4c);
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
      FUN_14579e852(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579e6a2 FUN_14579e6a2 body=191 status=ok
// SIG undefined FUN_14579e6a2(void)

undefined8 FUN_14579e6a2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_14860bda2(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 14579e762 FUN_14579e762 body=239 status=ok
// SIG undefined FUN_14579e762(void)

int * FUN_14579e762(longlong *param_1,int *param_2)

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



// FUNCTION 14579e852 FUN_14579e852 body=476 status=ok
// SIG undefined FUN_14579e852(void)

void FUN_14579e852(longlong *param_1)

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



// FUNCTION 14579ea30 FUN_14579ea30 body=68 status=ok
// SIG undefined FUN_14579ea30(void)

undefined8 * FUN_14579ea30(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8a0050;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14579ea74(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14579ea74 FUN_14579ea74 body=104 status=ok
// SIG undefined FUN_14579ea74(void)

void FUN_14579ea74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b89fba0;
  FUN_140d46fcd(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x18] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x18] + 0x10))();
  }
  if ((longlong *)param_1[0x16] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x16] + 0x10))();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 14579eadc FUN_14579eadc body=135 status=ok
// SIG undefined FUN_14579eadc(void)

void FUN_14579eadc(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 5) {
      uVar4 = 4;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x5c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x14,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x14)) {
        uVar4 = uVar3 / 0x14 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x5c) = (int)uVar4;
    FUN_14579eb64(param_1,param_2,uVar4,0x14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14579eb64 FUN_14579eb64 body=140 status=ok
// SIG undefined FUN_14579eb64(void)

void FUN_14579eb64(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x50);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x14);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x50,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 * 0x14);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,param_3,param_4);
  return;
}



// FUNCTION 14579ebf0 FUN_14579ebf0 body=38 status=ok
// SIG undefined FUN_14579ebf0(void)

undefined8 FUN_14579ebf0(undefined8 param_1,int param_2)

{
  FUN_14579ec16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14579ec16 FUN_14579ec16 body=557 status=ok
// SIG undefined FUN_14579ec16(void)

void FUN_14579ec16(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_14aba03c0;
  FUN_140457ffc(&DAT_14caf6fb0,param_1);
  FUN_140457ffc(&DAT_14c9647a0,param_1);
  uVar5 = FUN_140c61bfa();
  FUN_140457ffc(uVar5,param_1);
  if (param_1[0xba] != 0) {
    FUN_140457ffc(&DAT_14cb1cfb0,param_1);
    FUN_140457ffc(&DAT_14cb1cfc8,param_1);
    FUN_140457ffc(&DAT_14cb1c7f0,param_1);
    FUN_140457ffc(&DAT_14cb1c808,param_1);
    param_1[0xba] = 0;
    plVar3 = (longlong *)param_1[0xbb];
    if (plVar3 != (longlong *)0x0) {
      param_1[0xbb] = 0;
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
  }
  FUN_14579f400(param_1 + 0x6f);
  FUN_140d4b1c4();
  if (param_1[0xb3] != 0) {
    FUN_140896aa8(param_1 + 0xb5);
    lVar4 = param_1[0xb3];
    if (lVar4 != 0) {
      FUN_14579f894(lVar4);
      FUN_1400020a8(lVar4);
    }
    param_1[0xb3] = 0;
  }
  plVar3 = (longlong *)param_1[0xbb];
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
  if (param_1[0xb7] != 0) {
    FUN_1400020a8();
  }
  FUN_1413495c2(param_1 + 0xb5);
  FUN_14579f00e(param_1 + 0x8e);
  FUN_14579f4ea(param_1 + 0x77);
  FUN_140d4ac2e(param_1[0x75],*(undefined4 *)(param_1 + 0x76));
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_14579ee4e(param_1 + 0x6f);
  FUN_14579ef06(param_1 + 0x5e);
  FUN_14579f2a0(param_1 + 0x40);
  FUN_14579f1c2(param_1 + 0x18);
  FUN_14579ee8a(param_1 + 0xb);
  param_1[4] = &PTR_FUN_14a1b6cf0;
  FUN_1449db362(param_1 + 9);
  FUN_144760f98(param_1 + 4);
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014579ee3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14579ee44 FUN_14579ee44 body=9 status=ok
// SIG undefined FUN_14579ee44(void)

void FUN_14579ee44(longlong param_1)

{
  FUN_140fb7440(param_1 + 0x10);
  return;
}



// FUNCTION 14579ee4e FUN_14579ee4e body=59 status=ok
// SIG undefined FUN_14579ee4e(void)

void FUN_14579ee4e(longlong param_1)

{
  FUN_140d4abe5(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14579ee8a FUN_14579ee8a body=70 status=ok
// SIG undefined FUN_14579ee8a(void)

void FUN_14579ee8a(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14579eed0(param_1 + 2);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14579eed0 FUN_14579eed0 body=53 status=ok
// SIG undefined FUN_14579eed0(void)

void FUN_14579eed0(longlong *param_1)

{
  FUN_14579f6ac();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14579ef06 FUN_14579ef06 body=122 status=ok
// SIG undefined FUN_14579ef06(void)

void FUN_14579ef06(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_14579ef80(param_1 + 0x28);
  FUN_140d4ac79(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_140d4aca8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14579ef80 FUN_14579ef80 body=53 status=ok
// SIG undefined FUN_14579ef80(void)

void FUN_14579ef80(longlong *param_1)

{
  FUN_14579efb6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14579efb6 FUN_14579efb6 body=88 status=ok
// SIG undefined FUN_14579efb6(void)

void FUN_14579efb6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14579f00e FUN_14579f00e body=151 status=ok
// SIG undefined FUN_14579f00e(void)

void FUN_14579f00e(longlong param_1)

{
  FUN_140d4ad0d(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_14579f0a6(param_1 + 0x98);
  FUN_140d4af13(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14579f0dc(param_1 + 8);
  return;
}



// FUNCTION 14579f0a6 FUN_14579f0a6 body=53 status=ok
// SIG undefined FUN_14579f0a6(void)

void FUN_14579f0a6(longlong *param_1)

{
  FUN_14579f112();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14579f0dc FUN_14579f0dc body=53 status=ok
// SIG undefined FUN_14579f0dc(void)

void FUN_14579f0dc(longlong *param_1)

{
  FUN_14579f16a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14579f112 FUN_14579f112 body=88 status=ok
// SIG undefined FUN_14579f112(void)

void FUN_14579f112(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14579f16a FUN_14579f16a body=88 status=ok
// SIG undefined FUN_14579f16a(void)

void FUN_14579f16a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14579f1c2 FUN_14579f1c2 body=165 status=ok
// SIG undefined FUN_14579f1c2(void)

void FUN_14579f1c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar6 = *(longlong *)(param_1 + 8);
    lVar5 = (longlong)*(int *)(param_1 + 0x10) << 3;
    do {
      lVar4 = FUN_14479d2ce(lVar6);
      if (lVar4 != 0) {
        FUN_147e3e5f0(lVar4);
      }
      lVar6 = lVar6 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
    FUN_147e43ece(param_1 + 8);
  }
  plVar3 = *(longlong **)(param_1 + 0x128);
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
  FUN_14579feae(param_1 + 0x20);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14579f268 FUN_14579f268 body=55 status=ok
// SIG undefined FUN_14579f268(void)

void FUN_14579f268(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014579f29b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14579f2a0 FUN_14579f2a0 body=209 status=ok
// SIG undefined FUN_14579f2a0(void)

void FUN_14579f2a0(longlong param_1)

{
  FUN_140b25c15(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0));
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_14579f372(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_14579ef80(param_1 + 0x28);
  FUN_140d4b26b(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_140d4b29a(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14579f372 FUN_14579f372 body=53 status=ok
// SIG undefined FUN_14579f372(void)

void FUN_14579f372(longlong *param_1)

{
  FUN_14579f3a8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14579f3a8 FUN_14579f3a8 body=88 status=ok
// SIG undefined FUN_14579f3a8(void)

void FUN_14579f3a8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14579f400 FUN_14579f400 body=234 status=ok
// SIG undefined FUN_14579f400(void)

void FUN_14579f400(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x20);
  uVar5 = 0;
  if ((longlong)iVar1 != 0) {
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar6 + lVar7) != 0) {
        LOCK();
        *(undefined4 *)(*(longlong *)(lVar6 + lVar7) + 0x18) = 1;
        uVar4 = DAT_14cb1ccf0;
        UNLOCK();
        lVar8 = (longlong)(int)DAT_14cb1ccf0;
        DAT_14cb1ccf0 = DAT_14cb1ccf0 + 1;
        if (DAT_14cb1ccf4 < DAT_14cb1ccf0) {
          FUN_146421db6(&DAT_14cb1cce8,uVar4);
        }
        lVar3 = DAT_14cb1cce8;
        *(undefined8 *)(DAT_14cb1cce8 + lVar8 * 0x10) = *(undefined8 *)(lVar6 + lVar7);
        lVar2 = *(longlong *)(lVar6 + 8 + lVar7);
        *(longlong *)(lVar3 + 8 + lVar8 * 0x10) = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    lVar6 = *(longlong *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(param_1 + 0x24);
  FUN_140d4abe5(lVar6,uVar5);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x24) != 0)) {
    FUN_147e450da(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 14579f4ea FUN_14579f4ea body=300 status=ok
// SIG undefined FUN_14579f4ea(void)

void FUN_14579f4ea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xb0));
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      **(undefined8 **)(*(longlong *)(param_1 + 0x18) + lVar4) = 0;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < *(int *)(param_1 + 0x20));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_14039a828(param_1 + 0x58);
  plVar3 = *(longlong **)(param_1 + 0x50);
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
  FUN_14579f65f(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_14579f616(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014579f5c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14579f616 FUN_14579f616 body=73 status=ok
// SIG undefined FUN_14579f616(void)

void FUN_14579f616(longlong param_1,int param_2)

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



// FUNCTION 14579f65f FUN_14579f65f body=77 status=ok
// SIG undefined FUN_14579f65f(void)

void FUN_14579f65f(longlong param_1,int param_2)

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



// FUNCTION 14579f6ac FUN_14579f6ac body=319 status=ok
// SIG undefined FUN_14579f6ac(void)

void FUN_14579f6ac(longlong *param_1)

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
      FUN_14579f7ec((longlong)iStack_4c * 0xf8 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14579fe3a(param_1,0);
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



// FUNCTION 14579f7ec FUN_14579f7ec body=167 status=ok
// SIG undefined FUN_14579f7ec(void)

void FUN_14579f7ec(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  
  plVar2 = *(longlong **)(param_1 + 0xe8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  plVar2 = *(longlong **)(param_1 + 0xd8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)(param_1 + 0x78);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x98) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar4 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0x90)) {
      plVar4 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar4);
  }
  if (*(ushort *)(param_1 + 0x90) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar2);
  return;
}



// FUNCTION 14579f894 FUN_14579f894 body=340 status=ok
// SIG undefined FUN_14579f894(void)

void FUN_14579f894(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x198);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x198) = 0;
    FUN_144b46620(*(longlong *)(*plVar1 + 0x78) + 0x18,plVar1);
    FUN_1400020a8(plVar1);
  }
  FUN_14579fb6e(param_1 + 0x78);
  puVar2 = *(undefined8 **)(param_1 + 0x248);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_14579fa8c(param_1 + 0x230);
  FUN_14579fc6a(param_1 + 0x1a0);
  plVar1 = *(longlong **)(param_1 + 0x198);
  if (plVar1 != (longlong *)0x0) {
    FUN_144b46620(*(longlong *)(*plVar1 + 0x78) + 0x18,plVar1);
    FUN_1400020a8(plVar1);
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  FUN_1456c3d4c(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  FUN_14579f9e8(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x98);
  FUN_14579fb2e(param_1 + 0x78);
  FUN_14579fa1e(param_1);
  return;
}



// FUNCTION 14579f9e8 FUN_14579f9e8 body=53 status=ok
// SIG undefined FUN_14579f9e8(void)

void FUN_14579f9e8(longlong *param_1)

{
  FUN_14579fc10();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14579fa1e FUN_14579fa1e body=55 status=ok
// SIG undefined FUN_14579fa1e(void)

void FUN_14579fa1e(longlong param_1)

{
  FUN_14579fbd0(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14579fa56(param_1 + 8);
  return;
}



// FUNCTION 14579fa56 FUN_14579fa56 body=53 status=ok
// SIG undefined FUN_14579fa56(void)

void FUN_14579fa56(longlong *param_1)

{
  FUN_140d4b306();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14579fa8c FUN_14579fa8c body=63 status=ok
// SIG undefined FUN_14579fa8c(void)

void FUN_14579fa8c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14579facc();
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014579fac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14579facc FUN_14579facc body=97 status=ok
// SIG undefined FUN_14579facc(void)

void FUN_14579facc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_144b3f230();
    *param_1 = 0;
  }
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014579fb29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14579fb2e FUN_14579fb2e body=63 status=ok
// SIG undefined FUN_14579fb2e(void)

void FUN_14579fb2e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14579fb6e();
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014579fb69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14579fb6e FUN_14579fb6e body=97 status=ok
// SIG undefined FUN_14579fb6e(void)

void FUN_14579fb6e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_144b3f230();
    *param_1 = 0;
  }
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014579fbcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14579fbd0 FUN_14579fbd0 body=63 status=ok
// SIG undefined FUN_14579fbd0(void)

void FUN_14579fbd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145c48878();
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014579fc0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14579fc10 FUN_14579fc10 body=89 status=ok
// SIG undefined FUN_14579fc10(void)

void FUN_14579fc10(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 14579fc6a FUN_14579fc6a body=96 status=ok
// SIG undefined FUN_14579fc6a(void)

void FUN_14579fc6a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_14579fcca(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_140d4b2dd(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14579fcca FUN_14579fcca body=53 status=ok
// SIG undefined FUN_14579fcca(void)

void FUN_14579fcca(longlong *param_1)

{
  FUN_14579fd00();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14579fd00 FUN_14579fd00 body=313 status=ok
// SIG undefined FUN_14579fd00(void)

void FUN_14579fd00(longlong *param_1)

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
      FUN_1401f8392(*local_68 + (longlong)iStack_4c * 0x28 + 8);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579fe3a FUN_14579fe3a body=116 status=ok
// SIG undefined FUN_14579fe3a(void)

void FUN_14579fe3a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf8,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xf8)) {
      uVar2 = uVar1 / 0xf8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xf8,8);
  }
  return;
}



// FUNCTION 14579feae FUN_14579feae body=478 status=ok
// SIG undefined FUN_14579feae(void)

void FUN_14579feae(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
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
  if (param_1[0x16] != 0) {
    plVar6 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar7 = 0;
    local_60 = plVar6;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
      iVar7 = (int)param_1[5];
    }
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if ((local_78._4_4_ != iVar7) || (local_60 != plVar6)) {
      iVar3 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar1 = *local_90;
        pcVar2 = (code *)param_1[0x16];
        plVar5 = (longlong *)param_1[0x18];
        if ((longlong *)param_1[0x18] == (longlong *)0x0) {
          plVar5 = param_1 + 0x1a;
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        (*pcVar2)(uVar4,lVar1 + (longlong)iVar3 * 0x20,lVar1 + (longlong)iVar3 * 0x20 + 8);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar3 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != param_1 || (local_80 != plVar6 || local_78._4_4_ != iVar7));
    }
    local_78 = uVar4;
    if (param_1[0x16] != 0) {
      plVar6 = param_1 + 0x1a;
      if ((longlong *)param_1[0x18] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[0x18];
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (param_1[0xe] != 0) {
    plVar6 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1457a008e(param_1);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a008e FUN_1457a008e body=53 status=ok
// SIG undefined FUN_1457a008e(void)

void FUN_1457a008e(longlong *param_1)

{
  FUN_1457a00c4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a00c4 FUN_1457a00c4 body=354 status=ok
// SIG undefined FUN_1457a00c4(void)

void FUN_1457a00c4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
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
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a0228 FUN_1457a0228 body=160 status=ok
// SIG undefined FUN_1457a0228(void)

undefined8 FUN_1457a0228(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x28) == param_2) {
          FUN_14048c9d0(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1457a02c8 FUN_1457a02c8 body=746 status=ok
// SIG undefined FUN_1457a02c8(void)

undefined8 FUN_1457a02c8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  longlong local_f8;
  longlong *plStack_f0;
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  longlong *plStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar3 = FUN_140d4c980(*(undefined8 *)(param_1 + 0x10),&DAT_14cb79040);
  if (cVar3 != '\0') {
    FUN_140d4cbc4(local_e8,*(undefined8 *)(param_1 + 0x10));
    if (local_e0 == 0) {
LAB_1457a04c4:
      *(undefined1 *)(param_1 + 0x20) = 1;
      uVar5 = 1;
      goto LAB_1457a04ca;
    }
    plVar6 = (longlong *)(local_e0 + 8);
    if (0xf < *(ulonglong *)(local_e0 + 0x20)) {
      plVar6 = (longlong *)*plVar6;
    }
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1446ddda2(&local_88,plVar6,0);
    if (DAT_14cb790c8 == 0) {
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar4 = FUN_144837462(DAT_14cb790c8,&local_88);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (lVar4 != 0) {
        *(longlong *)(param_1 + 0x28) = lVar4;
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        FUN_14009b010(&local_88,3,0);
        FUN_1446dcc2e((longlong *)(param_1 + 0x30),&local_88);
        plVar6 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        FUN_140d4cb8c(local_e8,&local_88);
        if (plStack_80 != (longlong *)0x0) {
          do {
            plVar1 = plStack_80;
            plVar6 = plStack_80 + 1;
            if (0xf < (ulonglong)plStack_80[4]) {
              plVar6 = (longlong *)*plVar6;
            }
            local_b8 = 0;
            uStack_b0 = 0;
            local_a8 = 0;
            local_a0 = 0;
            uStack_98 = 0;
            FUN_1446ddda2(&local_b8,plVar6,0);
            local_f8 = 0;
            plStack_f0 = (longlong *)0x0;
            FUN_14009b010(&local_f8,1);
            lVar4 = plVar1[9];
            if (lVar4 != 0) {
              plVar6 = (longlong *)(lVar4 + 8);
              if (0xf < *(ulonglong *)(lVar4 + 0x20)) {
                plVar6 = (longlong *)*plVar6;
              }
              if ((local_f8 != 0) && ((*(byte *)(local_f8 + 1) & 2) == 0)) {
                FUN_140126aca(local_f8,plVar6);
              }
            }
            lVar4 = *(longlong *)(param_1 + 0x30);
            if (lVar4 != 0) {
              local_108 = 0;
              FUN_14014191c(lVar4,&local_b8,&local_f8,0);
            }
            FUN_140bdd98c(&local_88);
            plVar6 = plStack_f0;
            if (plStack_f0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_f0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_f0)(plStack_f0);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
            if (local_a0 != 0) {
              FUN_1400020a8();
            }
          } while (plStack_80 != (longlong *)0x0);
        }
        goto LAB_1457a04c4;
      }
    }
  }
  uVar5 = 0;
LAB_1457a04ca:
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a05ca FUN_1457a05ca body=125 status=ok
// SIG undefined FUN_1457a05ca(void)

void FUN_1457a05ca(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (0 < param_2) {
    param_2 = param_2 + 1;
    do {
      iVar2 = *(int *)(param_1 + 0xa8);
      if (iVar2 < 1) {
        return;
      }
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x50) + 0xc0);
      if (cVar1 == '\0') {
LAB_1457a05fc:
        iVar2 = iVar2 + -1;
LAB_1457a05fe:
        *(int *)(param_1 + 0xa8) = iVar2;
        FUN_1401fef06(param_1 + 0xa0);
      }
      else if (cVar1 == '\x01') {
        if (iVar2 - 1U != 0) {
          memmove(*(void **)(param_1 + 0xa0),(void *)((longlong)*(void **)(param_1 + 0xa0) + 4),
                  (ulonglong)(iVar2 - 1U) << 2);
          iVar2 = *(int *)(param_1 + 0xa8);
          goto LAB_1457a05fc;
        }
        iVar2 = 0;
        goto LAB_1457a05fe;
      }
      param_2 = param_2 + -1;
    } while (1 < param_2);
  }
  return;
}



// FUNCTION 1457a0648 FUN_1457a0648 body=26 status=ok
// SIG undefined FUN_1457a0648(void)

void FUN_1457a0648(undefined8 param_1)

{
  FUN_140ce1a80();
  FUN_140ce1ef4(param_1);
  return;
}



// FUNCTION 1457a0662 FUN_1457a0662 body=147 status=ok
// SIG undefined FUN_1457a0662(void)

void FUN_1457a0662(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
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



// FUNCTION 1457a06f6 FUN_1457a06f6 body=549 status=ok
// SIG undefined FUN_1457a06f6(void)

void FUN_1457a06f6(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
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
        lVar4 = *local_90;
        lVar6 = (longlong)iVar12;
        uVar10 = *(ulonglong *)(lVar4 + lVar6 * 0x18);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar6 * 0x18);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        lVar4 = lVar4 + lVar6 * 0x18;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457a092a FUN_1457a092a body=120 status=ok
// SIG undefined FUN_1457a092a(void)

undefined8 FUN_1457a092a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_140328a42(&local_30,param_3);
  FUN_140ca2242(param_1 + 0x5a0,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a09a3 FUN_1457a09a3 body=257 status=ok
// SIG undefined FUN_1457a09a3(void)

undefined8
FUN_1457a09a3(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

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
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_140d640c4();
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
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a0aa6 FUN_1457a0aa6 body=149 status=ok
// SIG undefined FUN_1457a0aa6(void)

void FUN_1457a0aa6(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (0 < (int)param_1[0x22]) {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x1a);
    if ((int)*(uint *)(param_1 + 0x1a) < 1) {
      uVar1 = 0;
    }
    lVar2 = (uVar1 + (longlong)*(int *)((longlong)param_1 + 0xcc)) * 0x28 + param_1[0x21];
    FUN_144a787a6(param_1 + 0xf,lVar2);
    uVar1 = (ulonglong)((int)param_1[0x10] - 1);
    if ((int)param_1[0x10] == 0) {
      uVar1 = 0;
    }
    (**(code **)(*param_1 + 0x2a8))(param_1,uVar1);
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
    FUN_144a787a6(param_1 + 0x12,lVar2);
    FUN_144a787a6(param_1 + 0x14,lVar2);
    return;
  }
  return;
}



// FUNCTION 1457a0b3c FUN_1457a0b3c body=497 status=ok
// SIG undefined FUN_1457a0b3c(void)

void FUN_1457a0b3c(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong local_78 [6];
  undefined8 *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar6 = param_1 + 0xd;
  local_48[0] = param_2;
  FUN_140c8411c(plVar6);
  iVar2 = (int)param_1[0xe];
  *(uint *)(param_1 + 0xe) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x74) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar6,iVar2);
  }
  lVar3 = *plVar6;
  lVar5 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar5);
  *(undefined8 *)(lVar3 + lVar5) = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(lVar3 + 8 + lVar5) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  FUN_1457a0d2e(param_1);
  local_88 = 1;
  FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0);
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  FUN_140002266(local_48,L"\n>>> %s <<<",puVar7);
  (**(code **)(*param_1 + 0x2c0))(param_1,local_48);
  if (local_48[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = FUN_140d66c9c();
  if (param_1[7] == 0) {
    if ((lVar3 == 0) || (lVar5 = FUN_140fe13cc(lVar3,0), lVar5 == 0)) {
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        plVar4 = (longlong *)param_1[4];
      }
      else {
        plVar4 = (longlong *)0x0;
      }
      plVar6 = local_78;
      (**(code **)(*plVar4 + 0x330))(plVar4,plVar6,param_2);
    }
    else {
      plVar4 = (longlong *)FUN_140fe13cc(lVar3,0);
      plVar6 = local_78 + 2;
      (**(code **)(*plVar4 + 0xd40))(plVar4,plVar6,param_2,1);
    }
  }
  else {
    plVar4 = *(longlong **)(param_1[7] + 0x30);
    plVar6 = local_78 + 4;
    (**(code **)(*plVar4 + 0xd40))(plVar4,plVar6,param_2,1);
  }
  if (*plVar6 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a0d2e FUN_1457a0d2e body=110 status=ok
// SIG undefined FUN_1457a0d2e(void)

void FUN_1457a0d2e(longlong param_1)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(uint *)(param_1 + 0x70) < 0x33) {
    return;
  }
  iVar3 = *(uint *)(param_1 + 0x70) - 0x32;
  _Dst = *(void **)(param_1 + 0x68);
  FUN_1447a1747(_Dst,iVar3);
  iVar1 = *(int *)(param_1 + 0x70) - iVar3;
  iVar2 = iVar3;
  if (iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)iVar3 * 0x10 + (longlong)_Dst),(longlong)iVar1 << 4);
    iVar2 = *(int *)(param_1 + 0x70);
  }
  *(int *)(param_1 + 0x70) = iVar2 - iVar3;
  FUN_140b12644(param_1 + 0x68);
  return;
}



// FUNCTION 1457a0da4 FUN_1457a0da4 body=38 status=ok
// SIG undefined FUN_1457a0da4(void)

void FUN_1457a0da4(longlong *param_1,longlong param_2)

{
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x2d0))(param_1);
  }
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 1;
  return;
}



// FUNCTION 1457a0dca FUN_1457a0dca body=98 status=ok
// SIG undefined FUN_1457a0dca(void)

void FUN_1457a0dca(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 == 0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    else {
      plVar3 = (longlong *)0x0;
    }
    uVar1 = (**(code **)(*plVar3 + 0x180))();
    lVar2 = FUN_140d673e2(DAT_14cb0d2b0,uVar1);
    if (lVar2 == 0) {
      return;
    }
  }
  if ((*(longlong *)(lVar2 + 0x30) != 0) &&
     (plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x30) + 0x508), plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001457a0e1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x2a0))();
    return;
  }
  return;
}



// FUNCTION 1457a0e2c FUN_1457a0e2c body=176 status=ok
// SIG undefined FUN_1457a0e2c(void)

void FUN_1457a0e2c(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_1a8 [40];
  undefined1 local_180 [296];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_180[0] = DAT_14c96b238;
  local_58 = 0;
  local_50 = 0x400000000;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = (**(code **)(*(longlong *)param_1[0xe4] + 8))();
  (**(code **)(*param_1 + 0x150))(param_1,uVar1,local_180,param_2);
  FUN_1447fa21a(local_180);
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a0ede FUN_1457a0ede body=155 status=ok
// SIG undefined FUN_1457a0ede(void)

byte FUN_1457a0ede(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_4 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_4;
  }
  FUN_140056680(local_38,puVar3);
  lVar2 = FUN_14052bcbc(param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  bVar1 = (byte)local_38[0];
  if (lVar2 != 0) {
    bVar1 = FUN_1457a13dc(lVar2,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 != 0 & bVar1;
}



// FUNCTION 1457a0f7a FUN_1457a0f7a body=142 status=ok
// SIG undefined FUN_1457a0f7a(void)

undefined8 FUN_1457a0f7a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(*(longlong *)(param_1 + 0x10) + 0xe8,&local_28);
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = FUN_140d69f9e();
  FUN_140002266(param_2,L"%sUnreal Engine/Engine/Config/User%s.ini",uVar1,puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1457a100a FUN_1457a100a body=302 status=ok
// SIG undefined FUN_1457a100a(void)

undefined4 *
FUN_1457a100a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
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
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1457a12f0(param_1,local_58);
  FUN_1457a113a(param_4,local_50);
  *(undefined4 *)(local_50 + 0xb0) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1457a1248(param_1,param_3,local_50,local_58);
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
      *(uint *)(local_50 + 0xb4) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0xb0) =
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
      FUN_1457a15b0(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a113a FUN_1457a113a body=151 status=ok
// SIG undefined FUN_1457a113a(void)

undefined8 FUN_1457a113a(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [44];
  undefined8 local_94;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined8 local_44;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(local_c0,0,0xa0);
  local_94 = 0xffffffff00000080;
  local_50 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_44 = 0xffffffff00000080;
  FUN_1457a11d2(param_2,0,*param_1,local_c0);
  FUN_140d69dce(local_c0);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a11d2 FUN_1457a11d2 body=117 status=ok
// SIG undefined FUN_1457a11d2(void)

undefined8 *
FUN_1457a11d2(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

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
  FUN_140d692d6(param_1 + 2,param_4);
  FUN_140d69258(param_1 + 0xc,param_4 + 0x50);
  return param_1;
}



// FUNCTION 1457a1248 FUN_1457a1248 body=168 status=ok
// SIG undefined FUN_1457a1248(void)

void FUN_1457a1248(longlong *param_1,undefined8 param_2,void *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar4 = FUN_140b7f766();
    if (iVar4 != -1) {
      lVar2 = *param_1;
      plVar1 = (longlong *)(lVar2 + (longlong)iVar4 * 0xb8);
      FUN_140d69dce(plVar1 + 2);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      memmove((void *)(lVar2 + (longlong)iVar4 * 0xb8),param_3,0xb0);
      FUN_14680ab8e(param_1,*param_4,1);
      *param_4 = iVar4;
      uVar3 = 1;
      goto LAB_1457a126b;
    }
  }
  uVar3 = 0;
LAB_1457a126b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 1457a12f0 FUN_1457a12f0 body=236 status=ok
// SIG undefined FUN_1457a12f0(void)

int * FUN_1457a12f0(longlong *param_1,int *param_2)

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
      FUN_140d69e26(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xb8);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xb8) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0xb8 + *param_1;
  return param_2;
}



// FUNCTION 1457a13dc FUN_1457a13dc body=467 status=ok
// SIG undefined FUN_1457a13dc(void)

undefined8 FUN_1457a13dc(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(&local_40);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  puVar9 = local_40;
  if (local_38 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  uVar11 = 0;
  uVar8 = (ulonglong)(local_38 - 1);
  if (local_38 == 0) {
    uVar8 = uVar11;
  }
  uVar3 = FUN_144a49b4a(uVar8,puVar9);
  iVar4 = FUN_14052bbf0(param_1,uVar3,&local_40);
  if (iVar4 != -1) {
    uVar11 = (longlong)iVar4 * 0xc0 + *param_1;
  }
  plVar10 = (longlong *)(uVar11 + 0x10);
  if (uVar11 == 0) {
    plVar10 = (longlong *)0x0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((plVar10 != (longlong *)0x0) && ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34))) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar7 = (uint)param_3 & 0xffff;
    plVar5 = plVar10 + 7;
    if ((longlong *)plVar10[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar10[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)plVar10[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar7) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*plVar10 + (longlong)iVar4 * 0x40) == param_3) {
          FUN_1406e05e8(plVar10,param_3);
          lVar1 = param_1[0x1a];
          if (lVar1 != 0) {
            FUN_140056680(&local_40,param_2);
            puVar9 = local_40;
            if (local_38 == 0) {
              puVar9 = &DAT_149dfb77a;
            }
            iVar4 = local_38 + -1;
            if (local_38 == 0) {
              iVar4 = 0;
            }
            uVar3 = FUN_144a49b4a(iVar4,puVar9);
            uVar6 = FUN_140d68dce(lVar1,uVar3,&local_40);
            if (local_40 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1406e05e8(uVar6,param_3);
          }
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
          uVar6 = 1;
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x40 + *plVar10 + 0x38);
        uVar6 = 0;
      } while (iVar4 != -1);
      goto LAB_1457a1576;
    }
  }
  uVar6 = 0;
LAB_1457a1576:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1457a15b0 FUN_1457a15b0 body=494 status=ok
// SIG undefined FUN_1457a15b0(void)

void FUN_1457a15b0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
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
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar11 = (longlong)iVar12 * 0xb8;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0xb4 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xb0 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
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



// FUNCTION 1457a17a0 FUN_1457a17a0 body=102 status=ok
// SIG undefined FUN_1457a17a0(void)

undefined8 FUN_1457a17a0(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8c270c) {
    FUN_144b3d300(&DAT_14c8c270c);
    if (DAT_14c8c270c == -1) {
      FUN_140d6d780();
      _Init_thread_footer(&DAT_14c8c270c);
    }
  }
  uVar1 = 0x104;
  if (DAT_14c8c2708 != '\0') {
    uVar1 = 0x7fff;
  }
  return uVar1;
}



// FUNCTION 1457a1806 FUN_1457a1806 body=858 status=ok
// SIG undefined FUN_1457a1806(void)

undefined8 FUN_1457a1806(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  ulonglong uStack_a0;
  undefined2 *local_98;
  ulonglong uStack_90;
  undefined2 *local_88;
  uint local_80;
  undefined2 *local_78;
  uint local_70;
  undefined2 *local_68;
  int local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140d6d7c8(&local_78,param_1);
  if (local_70 < 2) {
    FUN_1400021e4(*(longlong *)(param_1 + 0x10) + 0xe8,&local_88);
    puVar3 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar3 = local_88;
    }
    FUN_140d6aad2(&local_98);
    puVar4 = &DAT_149dfb77a;
    if ((int)uStack_90 != 0) {
      puVar4 = local_98;
    }
    FUN_140002266(&local_68,L"%sDefault%s.ini",puVar4,puVar3);
    FUN_14052bb92(param_2,&local_68);
    puVar3 = local_68;
    goto LAB_1457a18b8;
  }
  FUN_1457d3d7a(&local_68,local_78);
  cVar1 = FUN_145ec9a30(&local_68);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar3 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar3 = local_78;
  }
  FUN_140d6aad2(&local_68);
  puVar4 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar4 = local_68;
  }
  FUN_140002266(&local_88,L"%s%s",puVar4,puVar3);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar3 = local_88;
  local_98 = (undefined2 *)0x0;
  lVar5 = (longlong)(int)local_80;
  uStack_90 = CONCAT44(uStack_90._4_4_,local_80);
  if (lVar5 == 0) {
    uStack_90 = (ulonglong)local_80;
LAB_1457a1a0a:
    puVar3 = &DAT_149dfb77a;
  }
  else {
    FUN_1446dd670(&local_98,local_80,0);
    memcpy(local_98,puVar3,lVar5 * 2);
    puVar3 = local_88;
    if (local_80 == 0) goto LAB_1457a1a0a;
  }
  FUN_140056680(&local_68,puVar3);
  cVar2 = FUN_145ec9a30(&local_68);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (cVar2 == '\0' && cVar1 == '\x01') {
    puVar3 = local_78;
    if (local_70 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1457d3df4(&local_b8,puVar3);
    local_68 = local_b8;
    local_60 = local_b0 + -1;
    if (local_b0 == 0) {
      local_60 = 0;
    }
    local_58 = L"Config";
    local_50 = 6;
    FUN_140bee87a(&local_a8,&local_68,2);
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_98 = local_a8;
    uStack_90 = uStack_a0;
    local_a8 = (undefined2 *)0x0;
    uStack_a0 = 0;
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(*(longlong *)(param_1 + 0x10) + 0xe8,&local_a8);
  local_c8 = &DAT_149dfb77a;
  if ((int)uStack_a0 != 0) {
    local_c8 = local_a8;
  }
  puVar3 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar3 = local_78;
  }
  puVar4 = &DAT_149dfb77a;
  if ((int)uStack_90 != 0) {
    puVar4 = local_98;
  }
  FUN_140002266(&local_68,L"%s/%s%s.ini",puVar4,puVar3);
  FUN_14052bb92(param_2,&local_68);
  puVar3 = local_a8;
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
    puVar3 = local_a8;
  }
LAB_1457a18b8:
  if (puVar3 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1457a1b61 FUN_1457a1b61 body=326 status=ok
// SIG undefined FUN_1457a1b61(void)

void FUN_1457a1b61(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457a1ca8(&local_40);
  FUN_140beea4a(&local_30,&local_40);
  if (CONCAT44(uStack_3c,local_40) != 0) {
    FUN_1400020a8();
  }
  FUN_140d6dd3e(&local_30);
  if (iStack_28 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)CONCAT44(uStack_2c,local_30);
  }
  FUN_14106fda4(&local_40,puVar3);
  if (CONCAT44(uStack_2c,local_30) != 0) {
    FUN_1400020a8();
  }
  local_30 = local_40;
  uStack_2c = uStack_3c;
  iStack_28 = iStack_38;
  uStack_24 = uStack_34;
  FUN_1400b22c2(&local_40,L"/Disabled");
  iVar2 = 0;
  if (iStack_38 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)CONCAT44(uStack_3c,local_40);
    iVar2 = iStack_38 + -1;
  }
  cVar1 = FUN_144a38768(&local_30,puVar3,iVar2,1);
  if (CONCAT44(uStack_3c,local_40) != 0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') {
    FUN_1400020e8(&local_30,&DAT_149e065c6,1);
  }
  iVar2 = iStack_28 + -1;
  if (iStack_28 == 0) {
    iVar2 = 0;
  }
  FUN_1402980a2(param_1,CONCAT44(uStack_2c,local_30),iVar2);
  if (CONCAT44(uStack_2c,local_30) != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457a1ca8 FUN_1457a1ca8 body=118 status=ok
// SIG undefined FUN_1457a1ca8(void)

undefined8 * FUN_1457a1ca8(undefined8 *param_1)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG _Src;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_1401aee1c();
  EnterCriticalSection(lpCriticalSection);
  *param_1 = 0;
  iVar1 = lpCriticalSection[1].LockCount;
  _Src = lpCriticalSection[1].DebugInfo;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return param_1;
}



// FUNCTION 1457a1d1e FUN_1457a1d1e body=63 status=ok
// SIG undefined FUN_1457a1d1e(void)

void FUN_1457a1d1e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1457a1d5e(param_1);
    FUN_140d6deb8(param_1);
    return;
  }
  FUN_140d6deb8(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1410ff6f8(param_1);
  return;
}



// FUNCTION 1457a1d5e FUN_1457a1d5e body=335 status=ok
// SIG undefined FUN_1457a1d5e(void)

void FUN_1457a1d5e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 100 + (longlong)iVar4 * 0x68) * 4) =
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



// FUNCTION 1457a1eae FUN_1457a1eae body=216 status=ok
// SIG undefined FUN_1457a1eae(void)

void FUN_1457a1eae(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_1 + 0x12f8) = 0;
  if (*(int *)(param_1 + 0x12fc) < 0) {
    FUN_14481578e(param_1 + 0x12f0,0);
  }
  lVar1 = param_1 + 0x11d0;
  FUN_140d714a4(lVar1);
  FUN_140d714f8(param_1 + 0xf90,param_1 + 0x10b0,lVar1);
  local_68 = 0;
  local_58 = &PTR_LAB_14b996d70;
  local_78 = FUN_1442034a2;
  local_50 = param_1;
  FUN_140d71668(lVar1);
  FUN_1458ef448(param_1 + 0x10b0,param_1 + 0xf90);
  FUN_140d715b4(param_1 + 0x12f0);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a1f88 FUN_1457a1f88 body=147 status=ok
// SIG undefined FUN_1457a1f88(void)

void FUN_1457a1f88(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457a201c FUN_1457a201c body=1309 status=ok
// SIG undefined FUN_1457a201c(void)

void FUN_1457a201c(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  longlong local_78;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar2 = *(int *)(param_1 + 0x28);
  uVar8 = (ulonglong)iVar2;
  if (0 < (longlong)uVar8) {
    local_90 = *(undefined8 **)(param_1 + 0x20);
    uVar17 = 0;
    puVar18 = local_90;
    do {
      if ((uVar17 + 1 < uVar8) && (*(int *)(puVar18 + 4) < *(int *)(puVar18 + 1))) {
        local_58 = puVar18[2];
        uVar5 = *puVar18;
        uVar6 = puVar18[1];
        puVar18[2] = puVar18[5];
        *puVar18 = puVar18[3];
        puVar18[1] = puVar18[4];
        puVar18[5] = local_58;
        local_68._0_4_ = (undefined4)uVar5;
        local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_60._0_4_ = (undefined4)uVar6;
        uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        *(undefined4 *)(puVar18 + 3) = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar18 + 0x1c) = local_68._4_4_;
        *(undefined4 *)(puVar18 + 4) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)puVar18 + 0x24) = uStack_60._4_4_;
        local_68 = uVar5;
        uStack_60 = uVar6;
      }
      uVar17 = uVar17 + 2;
      puVar18 = puVar18 + 6;
    } while (uVar17 < uVar8);
    if (2 < iVar2) {
      iVar16 = 2;
      do {
        iVar4 = iVar16 * 2;
        local_78 = (longlong)iVar4;
        lVar20 = 0;
        do {
          iVar13 = iVar2 - (int)lVar20;
          if (iVar4 <= iVar13) {
            iVar13 = iVar4;
          }
          if ((iVar16 < iVar13) && (0 < iVar16)) {
            local_88 = local_90 + lVar20 * 3;
            iVar12 = 0;
            iVar15 = iVar16;
            while( true ) {
              local_80 = (undefined8 *)CONCAT44(local_80._4_4_,iVar15);
              iVar14 = 0;
              if (iVar15 - iVar12 != 0 && iVar12 <= iVar15) {
                iVar14 = 0;
                uVar22 = iVar15 - iVar12;
                do {
                  iVar9 = (uVar22 >> 1) + iVar14;
                  if (*(int *)(local_88 + (longlong)iVar12 * 3 + (longlong)iVar9 * 3 + 1) <=
                      *(int *)(local_88 + (longlong)iVar15 * 3 + 1)) {
                    iVar14 = iVar9 + (uVar22 & 1);
                  }
                  bVar3 = 1 < uVar22;
                  uVar22 = uVar22 >> 1;
                } while (bVar3);
              }
              iVar14 = iVar14 + iVar12;
              if (iVar15 - iVar14 == 0 || iVar15 < iVar14) break;
              uVar22 = iVar13 - iVar15;
              if (uVar22 == 0 || iVar13 < iVar15) {
                local_98 = 0;
              }
              else {
                puVar18 = local_88 + (longlong)iVar14 * 3;
                local_6c = *(int *)(puVar18 + 1);
                local_98 = 0;
                uVar17 = (ulonglong)uVar22;
                do {
                  uVar17 = uVar17 >> 1;
                  uVar10 = (int)local_98 + (uint)uVar17;
                  if (*(int *)(local_88 + (longlong)iVar15 * 3 + (ulonglong)uVar10 * 3 + 1) <
                      local_6c) {
                    local_98 = (ulonglong)(uVar10 + (uVar22 & 1));
                  }
                  bVar3 = 1 < uVar22;
                  uVar22 = (uint)uVar17;
                } while (bVar3);
                iVar12 = iVar15 + (int)local_98;
                local_80 = (undefined8 *)CONCAT44(local_80._4_4_,iVar12);
                if (0 < (int)local_98) {
                  puVar21 = puVar18 + (longlong)(iVar12 - iVar14) * 3;
                  puVar11 = puVar18 + (longlong)(iVar15 - iVar14) * 3;
                  puVar19 = puVar18 + (longlong)(iVar15 - iVar14) * 3;
                  do {
                    while( true ) {
                      puVar1 = puVar11 + 3;
                      local_58 = puVar18[2];
                      uVar5 = *puVar18;
                      uVar6 = puVar18[1];
                      puVar18[2] = puVar11[2];
                      uVar7 = puVar11[1];
                      *puVar18 = *puVar11;
                      puVar18[1] = uVar7;
                      puVar18 = puVar18 + 3;
                      puVar11[2] = local_58;
                      local_68._0_4_ = (undefined4)uVar5;
                      local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
                      uStack_60._0_4_ = (undefined4)uVar6;
                      uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
                      *(undefined4 *)puVar11 = (undefined4)local_68;
                      *(undefined4 *)((longlong)puVar11 + 4) = local_68._4_4_;
                      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_60;
                      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_60._4_4_;
                      if (puVar1 == puVar21) break;
                      puVar11 = puVar1;
                      if (puVar18 == puVar19) {
                        puVar19 = puVar1;
                      }
                    }
                    puVar11 = puVar19;
                    local_68 = uVar5;
                    uStack_60 = uVar6;
                  } while (puVar18 != puVar19);
                }
              }
              if ((iVar13 <= (int)local_80) ||
                 (iVar12 = iVar14 + (int)local_98 + 1, iVar15 = (int)local_80,
                 (int)local_80 <= iVar12)) break;
            }
          }
          lVar20 = lVar20 + local_78;
        } while (lVar20 < (longlong)uVar8);
        iVar16 = iVar4;
      } while (iVar4 < iVar2);
    }
  }
  iVar2 = *(int *)(param_1 + 0x38);
  uVar8 = (ulonglong)iVar2;
  if (0 < (longlong)uVar8) {
    local_80 = *(undefined8 **)(param_1 + 0x30);
    uVar17 = 0;
    puVar18 = local_80;
    do {
      if ((uVar17 + 1 < uVar8) && (*(int *)(puVar18 + 4) < *(int *)(puVar18 + 1))) {
        local_58 = puVar18[2];
        uVar5 = *puVar18;
        uVar6 = puVar18[1];
        puVar18[2] = puVar18[5];
        *puVar18 = puVar18[3];
        puVar18[1] = puVar18[4];
        puVar18[5] = local_58;
        local_68._0_4_ = (undefined4)uVar5;
        local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_60._0_4_ = (undefined4)uVar6;
        uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        *(undefined4 *)(puVar18 + 3) = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar18 + 0x1c) = local_68._4_4_;
        *(undefined4 *)(puVar18 + 4) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)puVar18 + 0x24) = uStack_60._4_4_;
        local_68 = uVar5;
        uStack_60 = uVar6;
      }
      uVar17 = uVar17 + 2;
      puVar18 = puVar18 + 6;
    } while (uVar17 < uVar8);
    if (2 < iVar2) {
      iVar16 = 2;
      do {
        iVar4 = iVar16 * 2;
        local_78 = (longlong)iVar4;
        lVar20 = 0;
        do {
          iVar13 = iVar2 - (int)lVar20;
          if (iVar4 <= iVar13) {
            iVar13 = iVar4;
          }
          if ((iVar16 < iVar13) && (0 < iVar16)) {
            local_88 = local_80 + lVar20 * 3;
            iVar12 = 0;
            iVar15 = iVar16;
            while( true ) {
              iVar14 = 0;
              uVar22 = iVar15 - iVar12;
              if (uVar22 != 0 && iVar12 <= iVar15) {
                iVar14 = 0;
                uVar17 = (ulonglong)uVar22;
                do {
                  uVar17 = uVar17 >> 1;
                  iVar9 = (uint)uVar17 + iVar14;
                  if (*(int *)(local_88 + (longlong)iVar12 * 3 + (longlong)iVar9 * 3 + 1) <=
                      *(int *)(local_88 + (longlong)iVar15 * 3 + 1)) {
                    iVar14 = iVar9 + (uVar22 & 1);
                  }
                  bVar3 = 1 < uVar22;
                  uVar22 = (uint)uVar17;
                } while (bVar3);
              }
              iVar14 = iVar14 + iVar12;
              iVar12 = iVar15 - iVar14;
              if (iVar12 == 0 || iVar15 < iVar14) break;
              if (iVar13 - iVar15 == 0 || iVar13 < iVar15) {
                local_90 = (undefined8 *)0x0;
              }
              else {
                puVar18 = local_88 + (longlong)iVar14 * 3;
                local_98 = CONCAT44(local_98._4_4_,*(int *)(puVar18 + 1));
                local_90 = (undefined8 *)0x0;
                uVar22 = iVar13 - iVar15;
                do {
                  uVar10 = (int)local_90 + (uVar22 >> 1);
                  if (*(int *)(local_88 + (longlong)iVar15 * 3 + (ulonglong)uVar10 * 3 + 1) <
                      *(int *)(puVar18 + 1)) {
                    local_90 = (undefined8 *)(ulonglong)(uVar10 + (uVar22 & 1));
                  }
                  bVar3 = 1 < uVar22;
                  uVar22 = uVar22 >> 1;
                } while (bVar3);
                iVar15 = iVar15 + (int)local_90;
                if (0 < (int)local_90) {
                  puVar11 = puVar18 + (longlong)(iVar15 - iVar14) * 3;
                  puVar19 = puVar18 + (longlong)iVar12 * 3;
                  puVar21 = puVar18 + (longlong)iVar12 * 3;
                  do {
                    while( true ) {
                      puVar1 = puVar19 + 3;
                      local_58 = puVar18[2];
                      uVar5 = *puVar18;
                      uVar6 = puVar18[1];
                      puVar18[2] = puVar19[2];
                      uVar7 = puVar19[1];
                      *puVar18 = *puVar19;
                      puVar18[1] = uVar7;
                      puVar18 = puVar18 + 3;
                      puVar19[2] = local_58;
                      local_68._0_4_ = (undefined4)uVar5;
                      local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
                      uStack_60._0_4_ = (undefined4)uVar6;
                      uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
                      *(undefined4 *)puVar19 = (undefined4)local_68;
                      *(undefined4 *)((longlong)puVar19 + 4) = local_68._4_4_;
                      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_60;
                      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_60._4_4_;
                      if (puVar1 == puVar11) break;
                      puVar19 = puVar1;
                      if (puVar18 == puVar21) {
                        puVar21 = puVar1;
                      }
                    }
                    puVar19 = puVar21;
                    local_68 = uVar5;
                    uStack_60 = uVar6;
                  } while (puVar18 != puVar21);
                }
              }
              if ((iVar13 <= iVar15) || (iVar12 = iVar14 + (int)local_90 + 1, iVar15 <= iVar12))
              break;
            }
          }
          lVar20 = lVar20 + local_78;
        } while (lVar20 < (longlong)uVar8);
        iVar16 = iVar4;
      } while (iVar4 < iVar2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457a253a FUN_1457a253a body=143 status=ok
// SIG undefined FUN_1457a253a(void)

void FUN_1457a253a(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *param_2;
  local_48 = (undefined4)param_2[1];
  local_40 = 0;
  local_1c = 1;
  local_20 = local_48;
  FUN_140008118(local_38,param_1);
  if ((*param_2 != local_38[0]) || ((int)param_2[1] != -0xfffff30)) {
    *param_2 = local_38[0];
    *(undefined4 *)(param_2 + 1) = 0xf00000d0;
    param_2[2] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a25ca FUN_1457a25ca body=229 status=ok
// SIG undefined FUN_1457a25ca(void)

void FUN_1457a25ca(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x37) = 3;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  if ((*param_1 != 0) && (lVar1 = *(longlong *)(&DAT_00006850 + *param_1), lVar1 != 0)) {
    local_28 = *(undefined8 *)(lVar1 + 0x138);
    local_38 = *(undefined8 *)(lVar1 + 0x128);
    uStack_30 = *(undefined8 *)(lVar1 + 0x130);
    *(undefined4 *)(lVar1 + 0x128) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(lVar1 + 300) = uVar2;
    *(undefined4 *)(lVar1 + 0x130) = uVar3;
    *(undefined4 *)(lVar1 + 0x134) = uVar4;
    *(undefined8 *)(lVar1 + 0x138) = DAT_14c8464f0;
    FUN_1409df526(lVar1,&DAT_14cbcb2d8);
    FUN_140d735ec(lVar1);
    *(undefined8 *)(lVar1 + 0x138) = local_28;
    *(undefined4 *)(lVar1 + 0x128) = (undefined4)local_38;
    *(undefined4 *)(lVar1 + 300) = local_38._4_4_;
    *(undefined4 *)(lVar1 + 0x130) = (undefined4)uStack_30;
    *(undefined4 *)(lVar1 + 0x134) = uStack_30._4_4_;
  }
  if (((param_1[0x58] != 0) && (*param_1 != 0)) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a26c2 FUN_1457a26c2 body=625 status=ok
// SIG undefined FUN_1457a26c2(void)

undefined4 FUN_1457a26c2(longlong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined4 uVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 unaff_RBX;
  byte bVar13;
  double dVar14;
  longlong lVar15;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar12 = param_1;
  dVar9 = (double)(**(code **)(*param_1 + 0x7c0))(param_1,0);
  uVar8 = SUB84(plVar12,0);
  if (param_1[0x3e] == 0) {
    uVar8 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    lVar15 = param_1[0x22];
    local_a8 = *(undefined8 *)(lVar15 + 0x260);
    uStack_a0 = *(undefined8 *)(lVar15 + 0x268);
    local_98 = *(undefined8 *)(lVar15 + 0x270);
    dVar14 = (double)param_1[0x16];
    if ((double)param_1[0x16] == 0.0) {
      plVar12 = param_1;
      dVar9 = (double)FUN_1448abda6();
      uVar8 = SUB84(plVar12,0);
      lVar15 = param_1[0x22];
      dVar14 = dVar9;
    }
    dVar3 = *(double *)(lVar15 + 0x240);
    dVar4 = *(double *)(lVar15 + 0x248);
    dVar5 = *(double *)(lVar15 + 0x250);
    dVar6 = *(double *)(lVar15 + 600);
    pdVar10 = *(double **)(lVar15 + 0x228);
    local_88 = dVar3;
    uStack_80 = dVar4;
    local_78 = dVar5;
    uStack_70 = dVar6;
    if (pdVar10 == (double *)0x0) {
      uVar8 = 0x40;
      pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
      dVar9 = DAT_14c8463d8;
      *pdVar10 = DAT_14c8463d0;
      pdVar10[1] = dVar9;
      dVar9 = DAT_14c8463e8;
      pdVar10[2] = DAT_14c8463e0;
      pdVar10[3] = dVar9;
      dVar9 = DAT_14c846500;
      pdVar10[4] = DAT_14c8464f8;
      pdVar10[5] = dVar9;
      dVar9 = DAT_14c846508;
      pdVar10[6] = DAT_14c846508;
      *(double **)(lVar15 + 0x228) = pdVar10;
    }
    auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar10[1]);
    auVar1._0_8_ = -(ulonglong)(dVar3 != *pdVar10);
    auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar10[1]) >> 0x20);
    iVar7 = movmskpd(SUB84(dVar9,0),auVar1);
    auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar10[3]);
    auVar2._0_8_ = -(ulonglong)(dVar5 != pdVar10[2]);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar10[3]) >> 0x20);
    uVar11 = movmskpd(uVar8,auVar2);
    if ((uVar11 & 0x3fffffff) != 0 || iVar7 != 0) {
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
      pdVar10[4] = local_68;
      pdVar10[5] = dStack_60;
    }
    local_b8 = pdVar10[6];
    local_c8 = *(undefined4 *)(pdVar10 + 4);
    uStack_c4 = *(undefined4 *)((longlong)pdVar10 + 0x24);
    uStack_c0 = *(undefined4 *)(pdVar10 + 5);
    uStack_bc = *(undefined4 *)((longlong)pdVar10 + 0x2c);
    uVar8 = FUN_140d7405c(dVar14,param_1[0x3e],&local_a8);
    if ((char)uVar8 == '\0') {
      (**(code **)(*param_1 + 0x7c0))(param_1,1);
    }
    else {
      local_d8 = 0;
      FUN_1413dd462(param_1[0x3e],&local_a8,0,0);
    }
  }
  bVar13 = (byte)uVar8 ^ 1;
  if (*(char *)((longlong)param_1 + 0x291) == '\x02' && bVar13 == 0) {
    uVar11 = 1;
    if ((char)*(uint *)(param_1 + 0xb5) != '\x02') {
      uVar11 = *(uint *)(param_1 + 0xb5);
    }
    uVar11 = uVar11 & 0xff;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x291) == '\x02' || (byte)uVar8 != 0) goto LAB_1457a2806;
    uVar11 = 2;
  }
  (**(code **)(*param_1 + 0x5d0))(param_1,uVar11,0);
LAB_1457a2806:
  *(byte *)((longlong)param_1 + 0x5b6) = *(byte *)((longlong)param_1 + 0x5b6) & 0xef | bVar13 << 4;
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a2934 FUN_1457a2934 body=352 status=ok
// SIG undefined FUN_1457a2934(void)

void FUN_1457a2934(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    local_90 = 0;
    FUN_14485c47a(&local_90,param_1);
    uVar1 = local_90;
    FUN_1446efa72(&local_88,0,2,0x10);
    local_80 = 2;
    *local_88 = &PTR_LAB_14a1c8830;
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
    local_88[2] = lVar4;
    *local_88 = &PTR_FUN_14b977e50;
    local_88[3] = uVar1;
    lVar2 = FUN_1447210f0(param_1);
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar3;
    local_78 = 0;
    local_70 = 0;
    FUN_14487d8d8(&local_78,&local_88);
    local_38 = 1;
    FUN_14016fdb0(uVar1,local_98,&local_78);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
    FUN_1449db362(&local_88);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a2a96 FUN_1457a2a96 body=132 status=ok
// SIG undefined FUN_1457a2a96(void)

void FUN_1457a2a96(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 2) {
      uVar5 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 4)) {
        uVar5 = uVar3 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar5;
    FUN_1404dd288(param_1,param_2,uVar5,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457a2b22 FUN_1457a2b22 body=233 status=ok
// SIG undefined FUN_1457a2b22(void)

undefined8 FUN_1457a2b22(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = DAT_14cb85d40;
  local_58 = DAT_14cb85d38;
  FUN_1448075d0(local_48);
  uVar2 = FUN_144a06846(param_2,local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  cVar1 = FUN_140d79686(uVar2);
  if (cVar1 != '\0') {
    puVar3 = (undefined1 *)FUN_1488f805e(param_1 + 0x28);
    *puVar3 = 0;
    uVar2 = FUN_140625082(uVar2,&DAT_14c9a12e0);
    FUN_1447325ac(uVar2,&local_60,1);
    if ((*(longlong *)(puVar3 + 8) != local_60) || (*(int *)(puVar3 + 0x10) != 0x4000)) {
      *(longlong *)(puVar3 + 8) = local_60;
      *(undefined4 *)(puVar3 + 0x10) = 0x4000;
      *(undefined8 *)(puVar3 + 0x18) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a2c0c FUN_1457a2c0c body=40 status=ok
// SIG undefined FUN_1457a2c0c(void)

undefined8 FUN_1457a2c0c(undefined8 param_1,int param_2)

{
  FUN_140d79f6c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457a2c34 FUN_1457a2c34 body=145 status=ok
// SIG undefined FUN_1457a2c34(void)

undefined8 * FUN_1457a2c34(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
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
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_140bb2e20(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 1457a2cc6 FUN_1457a2cc6 body=127 status=ok
// SIG undefined FUN_1457a2cc6(void)

void FUN_1457a2cc6(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x11) {
      uVar4 = 0x10;
    }
    else {
      lVar3 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_1457a2d46(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1457a2d46 FUN_1457a2d46 body=141 status=ok
// SIG undefined FUN_1457a2d46(void)

void FUN_1457a2d46(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 1457a2dd4 FUN_1457a2dd4 body=132 status=ok
// SIG undefined FUN_1457a2dd4(void)

void FUN_1457a2dd4(longlong param_1,int param_2)

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



// FUNCTION 1457a2e5e FUN_1457a2e5e body=157 status=ok
// SIG undefined FUN_1457a2e5e(void)

undefined8 * FUN_1457a2e5e(undefined8 *param_1)

{
  FUN_1457a2efc();
  *param_1 = &PTR_FUN_14b35c330;
  FUN_140d7ec9e(param_1 + 0x1f);
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  FUN_140d7ec9e(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x32) = 0xff7fffff;
  *(undefined1 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x33] = 0;
  return param_1;
}



// FUNCTION 1457a2efc FUN_1457a2efc body=64 status=ok
// SIG undefined FUN_1457a2efc(void)

undefined8 * FUN_1457a2efc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b35c240;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  FUN_140d7ef6a(param_1 + 5);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return param_1;
}



// FUNCTION 1457a2f3c FUN_1457a2f3c body=157 status=ok
// SIG undefined FUN_1457a2f3c(void)

void FUN_1457a2f3c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1457a2f76;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1457a2f76;
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
LAB_1457a2f76:
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
                    /* WARNING: Could not recover jumptable at 0x0001457a2fd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1457a2fec FUN_1457a2fec body=48 status=ok
// SIG undefined FUN_1457a2fec(void)

void FUN_1457a2fec(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1457a301c FUN_1457a301c body=159 status=ok
// SIG undefined FUN_1457a301c(void)

undefined8 * FUN_1457a301c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = FUN_1459aa106();
  uVar3 = FUN_1403d4194(uVar4);
  FUN_140d2f368(&local_28,uVar3);
  *param_1 = local_28;
  param_1[1] = local_20;
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a30be FUN_1457a30be body=754 status=ok
// SIG undefined FUN_1457a30be(void)

void FUN_1457a30be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_14479d2ce(param_1 + 0x88);
  if (lVar6 != 0) {
    uVar7 = FUN_140d80eca();
    lVar6 = FUN_144718840(lVar6,uVar7);
    if (lVar6 != 0) {
      FUN_140d7ffec(param_1,lVar6);
      goto LAB_1457a3112;
    }
  }
  cVar4 = FUN_140fec400(param_1);
  if (cVar4 == '\0') {
    FUN_1457a4302(param_1);
  }
LAB_1457a3112:
  cVar4 = FUN_140fec400(param_1);
  if (cVar4 == '\0') {
    uVar7 = FUN_14479d2ce(param_1 + 0x88);
    lVar6 = FUN_14048be0a(uVar7);
    if (lVar6 != 0) {
      FUN_1457a3ab0(&local_40,param_1,FUN_1461b60fe);
      FUN_14577054c(lVar6 + 0x6b8,local_48,&local_40);
      FUN_1449db362(&local_40);
      FUN_1457a3ab0(&local_40,param_1,FUN_14890cecc);
      FUN_14577054c(lVar6 + 0x6d0,local_48,&local_40);
      FUN_1449db362(&local_40);
      FUN_140cc68fa(lVar6);
      lVar8 = *(longlong *)(lVar6 + 0x6a8);
      plVar10 = *(longlong **)(lVar6 + 0x6b0);
      if (plVar10 == (longlong *)0x0) {
        FUN_1457a446e(&local_40,param_1);
        FUN_1457a3c50(lVar8 + 0x30,local_48,&local_40);
        FUN_1449db362(&local_40);
      }
      else {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        FUN_1457a446e(&local_40,param_1);
        FUN_1457a3c50(lVar8 + 0x30,local_48,&local_40);
        FUN_1449db362(&local_40);
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      FUN_1457a33b2(param_1);
      FUN_140cc68fa(lVar6);
      lVar8 = *(longlong *)(lVar6 + 0x6a8);
      plVar10 = *(longlong **)(lVar6 + 0x6b0);
      if (plVar10 == (longlong *)0x0) {
        lVar8 = FUN_14479d2ce(lVar8 + 0x60);
      }
      else {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        lVar8 = FUN_14479d2ce(lVar8 + 0x60);
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      if (lVar8 != 0) {
        uVar7 = FUN_140d80bda(param_1);
        FUN_140937dea(&local_40,uVar7);
        if (local_38 != (longlong *)0x0) {
          iVar5 = (int)local_38[1];
          do {
            if (iVar5 == 0) {
              plVar10 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar3 = (int)local_38[1];
            bVar11 = iVar5 == iVar3;
            if (bVar11) {
              *(int *)(local_38 + 1) = iVar5 + 1;
              iVar3 = iVar5;
            }
            iVar5 = iVar3;
            UNLOCK();
            plVar10 = local_38;
          } while (!bVar11);
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_38 + 0x10))();
          }
          if (plVar10 != (longlong *)0x0) {
            if ((local_40 != 0) && (lVar9 = FUN_1409a83ae(local_40,lVar8), lVar9 == lVar6)) {
              FUN_1461b6198(param_1,lVar8);
            }
            LOCK();
            plVar1 = plVar10 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457a33b2 FUN_1457a33b2 body=47 status=ok
// SIG undefined FUN_1457a33b2(void)

void FUN_1457a33b2(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_140fec400();
  if (cVar1 == '\0') {
    uVar2 = FUN_1457a4044(param_1);
    FUN_1457a3d2a(param_1,uVar2);
    return;
  }
  return;
}



// FUNCTION 1457a33e2 FUN_1457a33e2 body=901 status=ok
// SIG undefined FUN_1457a33e2(void)

void FUN_1457a33e2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar10 = (longlong *)FUN_140f7f1be();
  if (plVar10 != (longlong *)0x0) {
    lVar3 = param_1 + 0x110;
    *(undefined1 *)(param_1 + 0x110) = 0xb;
    FUN_140c25b54(lVar3);
    local_f0 = (undefined4)plVar10[6];
    local_f8 = plVar10[5];
    FUN_144928d62(param_1 + 0x120,0);
    uVar11 = FUN_140d80fb0(param_1);
    FUN_140d84843(lVar3,param_1 + 0x18,&DAT_14c948618,uVar11);
    local_b8 = (longlong *)0x0;
    local_88 = 0;
    local_78 = (longlong *)0x0;
    local_dc = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_c8 = 0;
    uVar11 = FUN_140d80fb0(param_1);
    uStack_d0 = (undefined4)uVar11;
    uStack_cc = (undefined4)((ulonglong)uVar11 >> 0x20);
    local_e0 = *(undefined4 *)(param_1 + 0x20);
    local_e8 = *(undefined8 *)(param_1 + 0x18);
    uVar9 = 1;
    if ((int)plVar10[4] != 0) {
      FUN_1457a3910(&local_130,param_1,FUN_14890d41c);
      uVar11 = FUN_140d80fb0(param_1);
      local_168 = &local_130;
      FUN_141323de6(param_1 + 0xf8,plVar10 + 3,uVar11,&local_e8);
      FUN_1449db362(&local_130);
      uVar9 = FUN_140a262da(param_1 + 0xf8);
    }
    FUN_140d8114c(param_1,uVar9);
    plVar4 = *(longlong **)(param_1 + 0xf0);
    if (plVar4 != (longlong *)0x0) {
      iVar8 = (int)plVar4[1];
      do {
        if (iVar8 == 0) goto LAB_1457a35db;
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar12 = iVar8 == iVar6;
        if (bVar12) {
          *(int *)(plVar4 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar12);
      lVar5 = *(longlong *)(param_1 + 0xe8);
      if (lVar5 != 0) {
        uVar7 = (**(code **)(*plVar10 + 0x18))(plVar10);
        FUN_140ac173c(&local_158,lVar3);
        local_130 = local_158;
        local_128 = local_150;
        local_124 = local_14c;
        local_11c = local_144;
        local_118 = local_140;
        local_110 = local_138;
        local_10c = uVar7;
        FUN_140d81074(lVar5,&local_108);
        if (local_108 != 0) {
          FUN_1457a3910(&local_130,param_1,&LAB_145cc3364);
          FUN_1448b6402(local_108 + 0x108,&local_158,&local_130);
          FUN_1449db362(&local_130);
        }
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_100 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar2 = (int *)((longlong)local_100 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_100 + 0x10))(local_100);
            }
          }
        }
      }
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
LAB_1457a35db:
    if ((int)plVar10[0xc] != 0) {
      FUN_1457a3910(&local_130,param_1,FUN_14890d440);
      uVar11 = FUN_140f7f142(param_1);
      local_168 = &local_130;
      FUN_1411cff2e(param_1 + 0x180,plVar10 + 0xb,uVar11,&local_e8);
      FUN_1449db362(&local_130);
      uVar9 = FUN_140a262da(param_1 + 0x180);
      FUN_14597b13e(param_1,uVar9);
    }
    if (local_88 != 0) {
      plVar10 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar10 = local_68;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (local_c8 != 0) {
      plVar10 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar10 = local_a8;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457a3768 FUN_1457a3768 body=423 status=ok
// SIG undefined FUN_1457a3768(void)

longlong * FUN_1457a3768(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1457a383f:
    *puVar3 = &PTR_LAB_14b3fc100;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b210;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_145a2da3a;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1457a383f;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b3fc100;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b210;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_145a2da3a;
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
  return param_1;
}



// FUNCTION 1457a3910 FUN_1457a3910 body=416 status=ok
// SIG undefined FUN_1457a3910(void)

longlong * FUN_1457a3910(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1457a39e7:
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b1a0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1457a39e7;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b1a0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
  return param_1;
}



// FUNCTION 1457a3ab0 FUN_1457a3ab0 body=416 status=ok
// SIG undefined FUN_1457a3ab0(void)

longlong * FUN_1457a3ab0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1457a3b87:
    *puVar3 = &PTR_LAB_14b40d390;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41ad00;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1457a3b87;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b40d390;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41ad00;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
  return param_1;
}



// FUNCTION 1457a3c50 FUN_1457a3c50 body=216 status=ok
// SIG undefined FUN_1457a3c50(void)

undefined8 * FUN_1457a3c50(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
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



// FUNCTION 1457a3d2a FUN_1457a3d2a body=331 status=ok
// SIG undefined FUN_1457a3d2a(void)

void FUN_1457a3d2a(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x100) != param_2) {
    *(char *)(param_1 + 0x100) = param_2;
    cVar4 = FUN_140fec400();
    if (cVar4 == '\0') {
      FUN_14890ce2a(&local_38);
      if (local_38 != 0) {
        FUN_1458228e2(param_1,&local_60);
        *(undefined4 *)(local_38 + 0x18) = (undefined4)uStack_58;
        *(longlong *)(local_38 + 0x10) = local_60;
        FUN_140ac173c(&local_60,param_1 + 0x30);
        *(undefined4 *)(local_38 + 0x1c) = (undefined4)local_60;
        *(undefined4 *)(local_38 + 0x20) = local_60._4_4_;
        *(undefined4 *)(local_38 + 0x24) = (undefined4)uStack_58;
        *(undefined4 *)(local_38 + 0x28) = uStack_58._4_4_;
        *(undefined4 *)(local_38 + 0x2c) = local_50;
        *(undefined4 *)(local_38 + 0x30) = uStack_4c;
        *(undefined4 *)(local_38 + 0x34) = uStack_48;
        *(undefined4 *)(local_38 + 0x38) = uStack_44;
        *(undefined4 *)(local_38 + 0x3c) = local_40;
        *(char *)(local_38 + 0x40) = param_2;
        local_60 = local_38;
        uStack_58 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        uVar5 = FUN_140d80bda(param_1);
        FUN_141000642(uVar5,&local_60);
        plVar1 = uStack_58;
        if (uStack_58 != (longlong *)0x0) {
          LOCK();
          plVar3 = uStack_58 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*uStack_58)(uStack_58);
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
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
    }
    FUN_140d8066a(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a3e76 FUN_1457a3e76 body=176 status=ok
// SIG undefined FUN_1457a3e76(void)

longlong * FUN_1457a3e76(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x118,0x10);
  FUN_1457a3f2a(plVar4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1457a3fa6(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
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



// FUNCTION 1457a3f2a FUN_1457a3f2a body=124 status=ok
// SIG undefined FUN_1457a3f2a(void)

undefined8 * FUN_1457a3f2a(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b41b560;
  memset(param_1 + 6,0,0xe8);
  param_1[2] = &PTR_FUN_14b35c240;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  FUN_140d7ef6a(param_1 + 7);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[2] = &PTR_FUN_14b35c350;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 1457a3fa6 FUN_1457a3fa6 body=157 status=ok
// SIG undefined FUN_1457a3fa6(void)

void FUN_1457a3fa6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1457a3fe0;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1457a3fe0;
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
LAB_1457a3fe0:
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
                    /* WARNING: Could not recover jumptable at 0x0001457a403f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1457a4044 FUN_1457a4044 body=403 status=ok
// SIG undefined FUN_1457a4044(void)

ulonglong FUN_1457a4044(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_14479d2ce(param_1 + 0x88);
  lVar6 = FUN_14048be0a(uVar5);
  if (lVar6 != 0) {
    FUN_140cc68fa(lVar6);
    lVar7 = *(longlong *)(lVar6 + 0x6a8);
    plVar8 = *(longlong **)(lVar6 + 0x6b0);
    if (plVar8 == (longlong *)0x0) {
      lVar7 = FUN_14479d2ce(lVar7 + 0x60);
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      lVar7 = FUN_14479d2ce(lVar7 + 0x60);
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    if (lVar7 != 0) {
      uVar5 = FUN_140d80bda(param_1);
      FUN_140937dea(&local_38,uVar5);
      if (local_30 != (longlong *)0x0) {
        iVar4 = (int)local_30[1];
        do {
          if (iVar4 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)local_30[1];
          bVar10 = iVar4 == iVar3;
          if (bVar10) {
            *(int *)(local_30 + 1) = iVar4 + 1;
            iVar3 = iVar4;
          }
          iVar4 = iVar3;
          UNLOCK();
          plVar8 = local_30;
        } while (!bVar10);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
        if (plVar8 != (longlong *)0x0) {
          if ((local_38 != 0) && (lVar7 = FUN_1409a83ae(local_38,lVar7), lVar7 != lVar6)) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            uVar9 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
            goto LAB_1457a40bd;
          }
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
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
      }
    }
  }
  uVar9 = 0;
LAB_1457a40bd:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1457a41d8 FUN_1457a41d8 body=298 status=ok
// SIG undefined FUN_1457a41d8(void)

longlong * FUN_1457a41d8(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_149e020b0;
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
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b41b0c0;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = FUN_140fec1fc;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
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
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b41b0c0;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_140fec1fc;
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
  return param_1;
}



// FUNCTION 1457a4302 FUN_1457a4302 body=362 status=ok
// SIG undefined FUN_1457a4302(void)

void FUN_1457a4302(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  undefined1 local_60 [32];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_14479d2ce(param_1 + 0x88);
  if (lVar3 != 0) {
    lVar4 = FUN_140929c72();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) && (lVar3 = *(longlong *)(lVar3 + 0x410), lVar3 != 0)) {
      FUN_1448c1924(lVar3,&local_70);
      if (local_70 != 0) {
        local_40 = (undefined1 *)0x0;
        local_38 = 0x400000000;
        FUN_148847290(local_70,0,local_60);
        puVar5 = local_40;
        if (local_40 == (undefined1 *)0x0) {
          puVar5 = local_60;
        }
        lVar4 = (longlong)(int)local_38;
        if (lVar4 != 0) {
          lVar6 = 0;
          do {
            FUN_1461b6198(param_1,*(undefined8 *)(puVar5 + lVar6));
            lVar6 = lVar6 + 8;
          } while (lVar4 * 8 != lVar6);
        }
        if (local_40 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)local_68 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
          }
        }
      }
      FUN_14891411a(local_60,param_1);
      FUN_14885086e(lVar3 + 0x9a8,&local_70,local_60);
      FUN_1449db362(local_60);
      FUN_140fec47c(param_1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457a446e FUN_1457a446e body=423 status=ok
// SIG undefined FUN_1457a446e(void)

longlong * FUN_1457a446e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1457a4545:
    *puVar3 = &PTR_LAB_14b41ade0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41ad70;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = &LAB_146154fd8;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1457a4545;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b41ade0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41ad70;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_146154fd8;
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
  return param_1;
}



// FUNCTION 1457a4616 FUN_1457a4616 body=293 status=ok
// SIG undefined FUN_1457a4616(void)

void FUN_1457a4616(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = FUN_1457a4790();
  if (lVar1 != 0) {
    local_a8 = (longlong *)0x0;
    local_78 = 0;
    local_68 = (longlong *)0x0;
    local_cc = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_b8 = 0;
    local_d8 = *(undefined8 *)(param_1 + 0x18);
    local_d0 = *(undefined4 *)(param_1 + 0x20);
    uVar2 = FUN_140d80fb0(param_1);
    uStack_c0 = (undefined4)uVar2;
    uStack_bc = (undefined4)((ulonglong)uVar2 >> 0x20);
    FUN_1457a4b36(local_e8,param_1);
    uVar2 = FUN_140d80fb0(param_1);
    local_f8 = local_e8;
    FUN_141323de6(param_1 + 0xf8,lVar1 + 0x18,uVar2,&local_d8);
    FUN_1449db362(local_e8);
    FUN_1457a473c(param_1);
    if (local_78 != 0) {
      plVar3 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar3 = local_58;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_b8 != 0) {
      plVar3 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar3 = local_98;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a473c FUN_1457a473c body=83 status=ok
// SIG undefined FUN_1457a473c(void)

void FUN_1457a473c(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  cVar2 = FUN_140a262da(param_1 + 0xf8);
  if (cVar2 != '\0') {
    uVar1 = FUN_140d80fb0(param_1);
    plVar3 = (longlong *)FUN_14153cdbc(uVar1);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001457a478c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x68))(plVar3,param_1 + 0x18,*(undefined4 *)(param_1 + 0x28),0);
      return;
    }
  }
  return;
}



// FUNCTION 1457a4790 FUN_1457a4790 body=170 status=ok
// SIG undefined FUN_1457a4790(void)

longlong * FUN_1457a4790(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x98);
  plVar3 = *(longlong **)(param_1 + 0xa0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (plVar2 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar5 = FUN_1457a483a();
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      plVar6 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        plVar6 = plVar2;
      }
      goto LAB_1457a47ee;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_1457a47ee:
  if (plVar3 != (longlong *)0x0) {
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
  return plVar6;
}



// FUNCTION 1457a483a FUN_1457a483a body=55 status=ok
// SIG undefined FUN_1457a483a(void)

void FUN_1457a483a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c3c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c3c8 = FUN_140002ddd(FUN_146530f76,uVar1,L"MissionGiverType_FactConditionBase");
  }
  return;
}



// FUNCTION 1457a4872 FUN_1457a4872 body=520 status=ok
// SIG undefined FUN_1457a4872(void)

void FUN_1457a4872(longlong param_1,int *param_2,uint *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  void *_Dst;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = *param_3;
  if (param_3[2] != 0) {
    uVar8 = FUN_144a78877(uVar8);
  }
  uVar9 = param_3[3];
  if (param_3[5] != 0) {
    uVar9 = FUN_144a78877(uVar9);
  }
  uVar10 = param_3[6];
  if (param_3[8] != 0) {
    uVar10 = FUN_144a78877(uVar10);
  }
  iVar7 = FUN_140d7f9b6((longlong *)(param_1 + 0x98),(byte)param_3[9] ^ uVar10 ^ uVar9 ^ uVar8,
                        param_3);
  if (iVar7 != -1) {
    lVar3 = *(longlong *)(param_1 + 0x98);
    lVar11 = lVar3 + (longlong)iVar7 * 0x40;
    if ((lVar11 != 0) && (lVar3 + (longlong)iVar7 * 0x40 != -0x28)) {
      lVar3 = *(longlong *)(lVar11 + 0x28);
      local_50 = *(longlong **)(lVar11 + 0x30);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      uVar13 = (ulonglong)*(int *)(lVar3 + 0xe8);
      local_58 = lVar3;
      if (0 < (longlong)uVar13) {
        iVar7 = -*(int *)(lVar3 + 0xe8);
        lVar11 = uVar13 * 0x30;
        do {
          lVar12 = lVar11 + -0x30;
          lVar4 = *(longlong *)(lVar3 + 0xe0);
          if ((*(int *)(lVar4 + 8 + lVar12) == *param_2) &&
             (*(int *)(lVar4 + 0x10 + lVar12) == param_2[2])) {
            FUN_1408256d2(lVar4 + lVar12 + 0x20);
            lVar4 = *(longlong *)(lVar3 + 0xe0);
            _Dst = (void *)(lVar4 + lVar12);
            FUN_140e7523c(_Dst,1);
            uVar8 = *(uint *)(lVar3 + 0xe8);
            if (uVar13 != uVar8) {
              memmove(_Dst,(void *)(lVar11 + lVar4),(longlong)(int)(uVar8 + iVar7) * 0x30);
              uVar8 = *(uint *)(lVar3 + 0xe8);
            }
            *(uint *)(lVar3 + 0xe8) = uVar8 - 1;
          }
          iVar7 = iVar7 + 1;
          bVar5 = 1 < uVar13;
          uVar13 = uVar13 - 1;
          lVar11 = lVar12;
        } while (bVar5);
      }
      FUN_1457a4a7c(param_1,&local_58);
      plVar6 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457a4a7c FUN_1457a4a7c body=185 status=ok
// SIG undefined FUN_1457a4a7c(void)

void FUN_1457a4a7c(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = (**(code **)(*(longlong *)*param_2 + 0x20))();
  if (cVar2 != '\0') {
    uVar1 = *(undefined1 *)(*param_2 + 0x28);
    FUN_140ac173c(&local_54,*param_2 + 0x30);
    local_80 = local_54;
    local_78 = local_4c;
    local_74 = local_48;
    local_6c = local_40;
    local_68 = local_3c;
    local_60 = local_34;
    local_5c = uVar1;
    FUN_14117f806(*param_2);
    FUN_1457a55c4(param_1 + 0x98,&local_80);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a4b36 FUN_1457a4b36 body=423 status=ok
// SIG undefined FUN_1457a4b36(void)

longlong * FUN_1457a4b36(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1457a4c0d:
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b580;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1457a473c;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1457a4c0d;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b580;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1457a473c;
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
  return param_1;
}



// FUNCTION 1457a4cde FUN_1457a4cde body=86 status=ok
// SIG undefined FUN_1457a4cde(void)

void FUN_1457a4cde(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
  uVar3 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1457a503d FUN_1457a503d body=150 status=ok
// SIG undefined FUN_1457a503d(void)

undefined8 FUN_1457a503d(undefined8 param_1)

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
  uVar1 = FUN_1410b752a();
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



// FUNCTION 1457a50d4 FUN_1457a50d4 body=416 status=ok
// SIG undefined FUN_1457a50d4(void)

longlong * FUN_1457a50d4(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1457a51ab:
    *puVar3 = &PTR_LAB_14b412de0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b360;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1457a51ab;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b412de0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b360;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
  return param_1;
}



// FUNCTION 1457a5274 FUN_1457a5274 body=423 status=ok
// SIG undefined FUN_1457a5274(void)

longlong * FUN_1457a5274(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1457a534b:
    *puVar3 = &PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b280;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = &LAB_14890d464;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1457a534b;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b280;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_14890d464;
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
  return param_1;
}



// FUNCTION 1457a541c FUN_1457a541c body=423 status=ok
// SIG undefined FUN_1457a541c(void)

longlong * FUN_1457a541c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1457a54f3:
    *puVar3 = &PTR_LAB_14a1c7440;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b2f0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = &LAB_1459ce016;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1457a54f3;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14a1c7440;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b2f0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_1459ce016;
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
  return param_1;
}



// FUNCTION 1457a55c4 FUN_1457a55c4 body=302 status=ok
// SIG undefined FUN_1457a55c4(void)

void FUN_1457a55c4(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = *param_2;
    if (param_2[2] != 0) {
      uVar4 = FUN_144a78877(uVar4);
    }
    uVar5 = param_2[3];
    if (param_2[5] != 0) {
      uVar5 = FUN_144a78877(uVar5);
    }
    uVar6 = param_2[6];
    if (param_2[8] != 0) {
      uVar6 = FUN_144a78877(uVar6);
    }
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar10 = (longlong)(int)((byte)param_2[9] ^ uVar6 ^ uVar5 ^ uVar4) &
             (longlong)(int)param_1[9] - 1U;
    lVar7 = (longlong)*(int *)((longlong)plVar8 + uVar10 * 4);
    if (lVar7 != -1) {
      lVar11 = *param_1;
      lVar7 = lVar7 * 0x40;
      lVar1 = lVar7 + lVar11;
      cVar3 = FUN_140ac16b0(lVar1,param_2);
      if ((cVar3 == '\0') || (*(char *)(lVar11 + 0x24 + lVar7) != (char)param_2[9])) {
        do {
          lVar7 = lVar1;
          lVar11 = (longlong)*(int *)(lVar7 + 0x38);
          if (lVar11 == -1) {
            return;
          }
          lVar2 = *param_1;
          lVar11 = lVar11 * 0x40;
          lVar1 = lVar2 + lVar11;
          cVar3 = FUN_140ac16b0(lVar1,param_2);
        } while ((cVar3 == '\0') || (*(char *)(lVar2 + 0x24 + lVar11) != (char)param_2[9]));
        puVar9 = (undefined4 *)(lVar7 + 0x38);
      }
      else {
        puVar9 = (undefined4 *)((longlong)plVar8 + uVar10 * 4);
      }
      FUN_1457a56f2(param_1,*puVar9);
      return;
    }
  }
  return;
}



// FUNCTION 1457a56f2 FUN_1457a56f2 body=89 status=ok
// SIG undefined FUN_1457a56f2(void)

void FUN_1457a56f2(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x3c + (longlong)param_2 * 0x40);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x40 + 0x38);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x40 + 0x38);
  FUN_1457a574c();
  return;
}



// FUNCTION 1457a574c FUN_1457a574c body=80 status=ok
// SIG undefined FUN_1457a574c(void)

void FUN_1457a574c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x30 + (longlong)param_2 * 0x40);
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
  FUN_1457a579c(param_1,param_2);
  return;
}



// FUNCTION 1457a579c FUN_1457a579c body=116 status=ok
// SIG undefined FUN_1457a579c(void)

void FUN_1457a579c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 1457a5810 FUN_1457a5810 body=159 status=ok
// SIG undefined FUN_1457a5810(void)

undefined8 * FUN_1457a5810(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = FUN_1459aa13e();
  uVar3 = FUN_1403d4194(uVar4);
  FUN_140d2f368(&local_28,uVar3);
  *param_1 = local_28;
  param_1[1] = local_20;
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a58b2 FUN_1457a58b2 body=266 status=ok
// SIG undefined FUN_1457a58b2(void)

void FUN_1457a58b2(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_1 + 0xa8) != 0) &&
      (cVar2 = FUN_144729dda(param_1 + 0xa0), cVar2 != '\0')) &&
     (lVar4 = FUN_140d80daa(*(undefined8 *)(param_1 + 0xa8)), lVar4 == param_2)) {
    FUN_140d7ffec(param_1,0);
  }
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar5 = 0;
    lVar4 = 1;
    do {
      cVar2 = FUN_14069eaf4(*(longlong *)(param_1 + 0x90) + lVar5,param_2);
      if (cVar2 != '\0') {
        FUN_140457ffc(param_2 + 0x2b8,param_1);
        iVar3 = *(int *)(param_1 + 0x98);
        if (iVar3 != (int)lVar4) {
          memmove((void *)(*(longlong *)(param_1 + 0x90) + lVar4 * 8 + -8),
                  (void *)(*(longlong *)(param_1 + 0x90) + lVar4 * 8),
                  (longlong)(iVar3 - (int)lVar4) << 3);
          iVar3 = *(int *)(param_1 + 0x98);
        }
        *(int *)(param_1 + 0x98) = iVar3 + -1;
        FUN_1457a59bc((longlong *)(param_1 + 0x90));
        break;
      }
      lVar5 = lVar5 + 8;
      bVar1 = lVar4 < *(int *)(param_1 + 0x98);
      lVar4 = lVar4 + 1;
    } while (bVar1);
  }
  FUN_1461b62a4(param_1);
  return;
}



// FUNCTION 1457a59bc FUN_1457a59bc body=62 status=ok
// SIG undefined FUN_1457a59bc(void)

void FUN_1457a59bc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1457a59fa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1457a59fa FUN_1457a59fa body=89 status=ok
// SIG undefined FUN_1457a59fa(void)

ulonglong FUN_1457a59fa(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 1457a5a54 FUN_1457a5a54 body=53 status=ok
// SIG undefined FUN_1457a5a54(void)

void FUN_1457a5a54(longlong *param_1)

{
  FUN_1457a5a8a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a5a8a FUN_1457a5a8a body=88 status=ok
// SIG undefined FUN_1457a5a8a(void)

void FUN_1457a5a8a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1457a5ae2 FUN_1457a5ae2 body=95 status=ok
// SIG undefined FUN_1457a5ae2(void)

void FUN_1457a5ae2(longlong param_1,uint param_2)

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



// FUNCTION 1457a5b42 FUN_1457a5b42 body=73 status=ok
// SIG undefined FUN_1457a5b42(void)

void FUN_1457a5b42(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457a5b8c FUN_1457a5b8c body=71 status=ok
// SIG undefined FUN_1457a5b8c(void)

void FUN_1457a5b8c(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1406419cc((longlong *)(param_1 + 8),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_1457a5c1c();
  return;
}



// FUNCTION 1457a5bd4 FUN_1457a5bd4 body=71 status=ok
// SIG undefined FUN_1457a5bd4(void)

void FUN_1457a5bd4(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1406419cc((longlong *)(param_1 + 8),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_1457a5cfa();
  return;
}



// FUNCTION 1457a5c1c FUN_1457a5c1c body=137 status=ok
// SIG undefined FUN_1457a5c1c(void)

undefined8 FUN_1457a5c1c(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = FUN_140d8a438();
  FUN_140005f6c(param_1,uVar3,0,0);
  FUN_1457a5ca6(param_1,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a5ca6 FUN_1457a5ca6 body=83 status=ok
// SIG undefined FUN_1457a5ca6(void)

longlong * FUN_1457a5ca6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140d8a438();
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



// FUNCTION 1457a5cfa FUN_1457a5cfa body=137 status=ok
// SIG undefined FUN_1457a5cfa(void)

undefined8 FUN_1457a5cfa(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = FUN_140d8a472();
  FUN_140005f6c(param_1,uVar3,0,0);
  FUN_1457a5d84(param_1,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a5d84 FUN_1457a5d84 body=83 status=ok
// SIG undefined FUN_1457a5d84(void)

longlong * FUN_1457a5d84(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140d8a472();
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



// FUNCTION 1457a5dd8 FUN_1457a5dd8 body=146 status=ok
// SIG undefined FUN_1457a5dd8(void)

longlong FUN_1457a5dd8(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_2 + 0x54);
  if (*(int *)(param_2 + 0x5c) != 0) {
    uVar3 = FUN_144a78877(uVar3);
  }
  uVar4 = *(uint *)(param_2 + 0x60);
  if (*(int *)(param_2 + 0x68) != 0) {
    uVar4 = FUN_144a78877(uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x6c);
  if (*(int *)(param_2 + 0x74) != 0) {
    uVar1 = FUN_144a78877(uVar1);
  }
  iVar2 = FUN_140ac163e((longlong *)(param_1 + 0x528),uVar4 ^ uVar3 ^ uVar1,param_2 + 0x54);
  if (iVar2 == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)iVar2 * 0xb0 + *(longlong *)(param_1 + 0x528);
  }
  lVar5 = lVar6 + 0x28;
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 1457a5e6a FUN_1457a5e6a body=146 status=ok
// SIG undefined FUN_1457a5e6a(void)

longlong FUN_1457a5e6a(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_2 + 0x54);
  if (*(int *)(param_2 + 0x5c) != 0) {
    uVar3 = FUN_144a78877(uVar3);
  }
  uVar4 = *(uint *)(param_2 + 0x60);
  if (*(int *)(param_2 + 0x68) != 0) {
    uVar4 = FUN_144a78877(uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x6c);
  if (*(int *)(param_2 + 0x74) != 0) {
    uVar1 = FUN_144a78877(uVar1);
  }
  iVar2 = FUN_140ac163e((longlong *)(param_1 + 0x528),uVar4 ^ uVar3 ^ uVar1,param_2 + 0x54);
  if (iVar2 == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)iVar2 * 0xb0 + *(longlong *)(param_1 + 0x528);
  }
  lVar5 = lVar6 + 0x28;
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 1457a5efc FUN_1457a5efc body=340 status=ok
// SIG undefined FUN_1457a5efc(void)

undefined4 * FUN_1457a5efc(undefined4 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457a60ea(local_40);
  puVar2 = (undefined8 *)param_2[1];
  *local_38 = *(undefined8 *)*param_2;
  local_38[1] = *puVar2;
  bVar1 = *(byte *)(puVar2 + 3);
  *(byte *)(local_38 + 4) = bVar1;
  (*(code *)(&PTR_LAB_14a183130)[bVar1])(local_38 + 2,puVar2 + 1);
  *(undefined4 *)((longlong)local_38 + 0x24) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)*local_38 >> 0x20) ^ (uint)*local_38;
  cVar5 = FUN_1457a6052(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c9a3b88 - DAT_14c9a3bb4;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c9a3bc8)) {
      uVar10 = DAT_14c9a3bc8 - 1U & uVar10;
      *(uint *)(local_38 + 5) = uVar10;
      puVar7 = DAT_14c9a3bc0;
      if (DAT_14c9a3bc0 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a3bb8;
      }
      *(undefined4 *)((longlong)local_38 + 0x24) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a3bc8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c9a3bc0;
      if (DAT_14c9a3bc0 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a3bb8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a3bc8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c9a3bc8 = iVar9;
      FUN_1457a61f4();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a6052 FUN_1457a6052 body=150 status=ok
// SIG undefined FUN_1457a6052(void)

undefined8 FUN_1457a6052(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c9a3b88 - DAT_14c9a3bb4 != 1) {
    local_28 = *param_2;
    iVar11 = FUN_140d8b8d4();
    lVar10 = DAT_14c9a3b80;
    if (iVar11 != -1) {
      lVar13 = (longlong)iVar11 * 0x2c;
      uVar2 = *(undefined4 *)param_2;
      uVar3 = *(undefined4 *)((longlong)param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar6 = *(undefined4 *)(param_2 + 2);
      uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar8 = *(undefined4 *)(param_2 + 3);
      uVar9 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(DAT_14c9a3b80 + 0x20 + lVar13) = *(undefined4 *)(param_2 + 4);
      puVar1 = (undefined4 *)(lVar10 + 0x10 + lVar13);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(lVar10 + lVar13);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_1470aff8c(*param_3);
      *param_3 = iVar11;
      uVar12 = 1;
      goto LAB_1457a6096;
    }
  }
  uVar12 = 0;
LAB_1457a6096:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a60ea FUN_1457a60ea body=266 status=ok
// SIG undefined FUN_1457a60ea(void)

int * FUN_1457a60ea(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9a3bb0;
  iVar3 = DAT_14c9a3b88;
  if (DAT_14c9a3bb4 == 0) {
    iVar2 = DAT_14c9a3b88 + 1;
    bVar7 = DAT_14c9a3b8c == DAT_14c9a3b88;
    DAT_14c9a3b88 = iVar2;
    if (bVar7) {
      FUN_1458dc740(&DAT_14c9a3b80,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9a3b90,1);
    puVar4 = DAT_14c9a3ba0;
    if (DAT_14c9a3ba0 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a3b90;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c9a3bb0;
    DAT_14c9a3bb0 = *(int *)(DAT_14c9a3b80 + 4 + lVar6 * 0x2c);
    DAT_14c9a3bb4 = DAT_14c9a3bb4 + -1;
    if (DAT_14c9a3bb4 != 0) {
      *(undefined4 *)(DAT_14c9a3b80 + (longlong)DAT_14c9a3bb0 * 0x2c) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a3b90;
  if (DAT_14c9a3ba0 != (undefined *)0x0) {
    puVar4 = DAT_14c9a3ba0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x2c + DAT_14c9a3b80;
  return param_1;
}



// FUNCTION 1457a61f4 FUN_1457a61f4 body=486 status=ok
// SIG undefined FUN_1457a61f4(void)

void FUN_1457a61f4(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
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
  if (DAT_14c9a3bc0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a3bc0,0,0,4);
  }
  uVar2 = DAT_14c9a3bc8;
  uVar3 = local_50;
  if (DAT_14c9a3bc8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c9a3bb8,0,DAT_14c9a3bc8,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14c9a3bc0;
        if (DAT_14c9a3bc0 == (undefined *)0x0) {
          puVar5 = &DAT_14c9a3bb8;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14c9a3bc8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9a3b90;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9a3ba8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9a3b80;
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
        lVar6 = (longlong)iVar4 * 0x2c;
        uVar9 = (longlong)
                (int)((uint)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20) ^
                     (uint)*(undefined8 *)(lVar1 + lVar6)) & (longlong)(int)DAT_14c9a3bc8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x28 + lVar6) = iVar8;
        puVar5 = DAT_14c9a3bc0;
        if (DAT_14c9a3bc0 == (undefined *)0x0) {
          puVar5 = &DAT_14c9a3bb8;
        }
        *(undefined4 *)(lVar1 + 0x24 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14c9a3bc8 - 1U & uVar9) * 4);
        puVar5 = DAT_14c9a3bc0;
        if (DAT_14c9a3bc0 == (undefined *)0x0) {
          puVar5 = &DAT_14c9a3bb8;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14c9a3bc8 - 1U) * 4) = iVar4;
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



// FUNCTION 1457a63dc FUN_1457a63dc body=171 status=ok
// SIG undefined FUN_1457a63dc(void)

void FUN_1457a63dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0xb0) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x50));
  }
  if ((*(longlong *)(param_1 + 0x80) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x50));
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
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
                    /* WARNING: Could not recover jumptable at 0x0001457a6448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457a6488 FUN_1457a6488 body=96 status=ok
// SIG undefined FUN_1457a6488(void)

void FUN_1457a6488(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 1457a64e8 FUN_1457a64e8 body=158 status=ok
// SIG undefined FUN_1457a64e8(void)

bool FUN_1457a64e8(longlong param_1,undefined8 param_2)

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



// FUNCTION 1457a6588 FUN_1457a6588 body=140 status=ok
// SIG undefined FUN_1457a6588(void)

void FUN_1457a6588(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_1457a6614();
  if (lVar3 != 0) {
    lVar4 = FUN_1457a6680(param_1,param_2);
    if (lVar4 != 0) {
      FUN_140d8ee42(param_1,lVar4,lVar3);
    }
    lVar4 = FUN_1457a6710(param_1,param_2);
    if (lVar4 != 0) {
      FUN_140d8ee42(param_1,lVar4,lVar3);
    }
    cVar1 = *(char *)(lVar3 + 0xfd);
    iVar2 = FUN_140d8dbd3();
    if (cVar1 < iVar2 && -1 < cVar1) {
      FUN_141008cba(param_1,(int)cVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1457a6614 FUN_1457a6614 body=108 status=ok
// SIG undefined FUN_1457a6614(void)

undefined8 FUN_1457a6614(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        uVar3 = FUN_140d8df70(lVar1,param_2);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1457a6680 FUN_1457a6680 body=143 status=ok
// SIG undefined FUN_1457a6680(void)

undefined8 FUN_1457a6680(undefined8 param_1,int *param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*param_2 != -1) {
    plVar3 = (longlong *)FUN_141181ea8();
    lVar1 = *plVar3;
    SRWLock = (PSRWLOCK)(lVar1 + 0x1c0);
    AcquireSRWLockShared(SRWLock);
    cVar2 = FUN_140d8deee(lVar1,param_2);
    ReleaseSRWLockShared(SRWLock);
    if (cVar2 != '\0') {
      plVar3 = (longlong *)FUN_141181ea8(param_1);
      lVar1 = *plVar3;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1c0));
      *(int *)(lVar1 + 0x1b8) = *(int *)(lVar1 + 0x1b8) + 1;
      uVar4 = FUN_140d8de74(lVar1,param_2);
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1c0));
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1457a6710 FUN_1457a6710 body=222 status=ok
// SIG undefined FUN_1457a6710(void)

longlong FUN_1457a6710(undefined8 param_1,int *param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_2 != -1) {
    plVar1 = (longlong *)FUN_1457a67ee();
    lVar2 = *plVar1;
    SRWLock = (PSRWLOCK)(lVar2 + 0x88);
    AcquireSRWLockShared(SRWLock);
    if ((longlong)*(int *)(lVar2 + 0x48) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0x40);
      lVar2 = (longlong)*(int *)(lVar2 + 0x48) * 0x430;
      do {
        if (*param_2 == *(int *)(lVar4 + 8)) {
          ReleaseSRWLockShared(SRWLock);
          if (lVar4 == 0) {
            return 0;
          }
          plVar1 = (longlong *)FUN_1457a67ee(param_1);
          lVar2 = *plVar1;
          AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x88));
          *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + 1;
          *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + 1;
          if ((longlong)*(int *)(lVar2 + 0x48) == 0) goto LAB_1457a67de;
          lVar4 = *(longlong *)(lVar2 + 0x40);
          lVar3 = (longlong)*(int *)(lVar2 + 0x48) * 0x430;
          goto LAB_1457a67c9;
        }
        lVar4 = lVar4 + 0x430;
        lVar2 = lVar2 + -0x430;
      } while (lVar2 != 0);
    }
    ReleaseSRWLockShared(SRWLock);
  }
  return 0;
  while( true ) {
    lVar4 = lVar4 + 0x430;
    lVar3 = lVar3 + -0x430;
    if (lVar3 == 0) break;
LAB_1457a67c9:
    if (*param_2 == *(int *)(lVar4 + 8)) goto LAB_1457a67e0;
  }
LAB_1457a67de:
  lVar4 = 0;
LAB_1457a67e0:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x88));
  return lVar4;
}



// FUNCTION 1457a67ee FUN_1457a67ee body=116 status=ok
// SIG undefined FUN_1457a67ee(void)

longlong FUN_1457a67ee(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1449027d0(param_1,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x4c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a6864 FUN_1457a6864 body=336 status=ok
// SIG undefined FUN_1457a6864(void)

void FUN_1457a6864(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  PSRWLOCK SRWLock;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined8 local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbd5900 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    lVar3 = FUN_14011c349();
    lVar1 = *(longlong *)(param_2 + 0xf0);
    if (lVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)(lVar1 + 0xb8);
    }
    if (lVar5 == *(longlong *)(lVar3 + 0x60)) {
      local_3c = *(undefined4 *)(param_2 + 0xf8);
      plVar4 = (longlong *)FUN_141181ea8(param_1);
      lVar5 = *plVar4;
      SRWLock = (PSRWLOCK)(lVar5 + 0x1c0);
      AcquireSRWLockExclusive(SRWLock);
      *(int *)(lVar5 + 0x1b8) = *(int *)(lVar5 + 0x1b8) + 1;
      lVar5 = lVar5 + 8;
      local_48 = *(undefined8 *)(lVar3 + 0x60);
    }
    else {
      if (lVar5 != *(longlong *)(lVar3 + 0x48)) goto LAB_1457a6939;
      local_3c = *(undefined4 *)(param_2 + 0xf8);
      plVar4 = (longlong *)FUN_141181ea8(param_1);
      lVar5 = *plVar4;
      SRWLock = (PSRWLOCK)(lVar5 + 0x1c0);
      AcquireSRWLockExclusive(SRWLock);
      *(int *)(lVar5 + 0x1b8) = *(int *)(lVar5 + 0x1b8) + 1;
      lVar5 = lVar5 + 0x50;
      local_48 = *(undefined8 *)(lVar3 + 0x48);
    }
    uVar2 = FUN_145a9ec3a(param_1);
    local_58 = &local_3c;
    FUN_140d8e4e0(param_1,lVar1,uVar2,lVar5);
    ReleaseSRWLockExclusive(SRWLock);
  }
LAB_1457a6939:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a69ca FUN_1457a69ca body=69 status=ok
// SIG undefined FUN_1457a69ca(void)

longlong FUN_1457a69ca(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145917388(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x430 + *param_1;
  FUN_1457a6a0f(lVar2,1);
  return lVar2;
}



// FUNCTION 1457a6a0f FUN_1457a6a0f body=41 status=ok
// SIG undefined FUN_1457a6a0f(void)

void FUN_1457a6a0f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140d8e6ac(param_1);
    param_1 = param_1 + 0x430;
  }
  return;
}



// FUNCTION 1457a6a38 FUN_1457a6a38 body=80 status=ok
// SIG undefined FUN_1457a6a38(void)

void FUN_1457a6a38(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_14cb92fb8;
  if (DAT_14cb92fb8 != 0) {
    lVar2 = FUN_14479d2ce(param_1 + 4);
    if (lVar2 != 0) {
      FUN_140d8f56e(param_1,0);
      FUN_1457a6a88(lVar1,*(undefined8 *)(lVar2 + 0x378),param_1 + 0x18);
      *(undefined1 *)(param_1 + 0x76) = 1;
    }
  }
  return;
}



// FUNCTION 1457a6a88 FUN_1457a6a88 body=146 status=ok
// SIG undefined FUN_1457a6a88(void)

void FUN_1457a6a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (code *)&LAB_143ebe812;
  local_48 = param_2;
  local_38 = &local_58;
  FUN_140d8f6cc(param_1,&local_40,0);
  local_40 = FUN_143ebe820;
  local_58 = &local_48;
  local_50 = param_3;
  local_38 = &local_58;
  FUN_140d8f6cc(param_1,&local_40,1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457a6b1b FUN_1457a6b1b body=45 status=ok
// SIG undefined FUN_1457a6b1b(void)

void FUN_1457a6b1b(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1457a6b48 FUN_1457a6b48 body=52 status=ok
// SIG undefined FUN_1457a6b48(void)

void FUN_1457a6b48(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1457a6b7c(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 1457a6b7c FUN_1457a6b7c body=63 status=ok
// SIG undefined FUN_1457a6b7c(void)

longlong FUN_1457a6b7c(longlong param_1,longlong param_2)

{
  FUN_1457a6bbc();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 2;
  if (param_2 != param_1) {
    FUN_140704fa0(param_1 + 0x18,param_2 + 0x18);
  }
  return param_1;
}


