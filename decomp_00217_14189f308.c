// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14189f308 FUN_14189f308 body=150 status=ok
// SIG undefined FUN_14189f308(void)

undefined8 * FUN_14189f308(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x20);
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18);
  local_30 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x98);
  local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x90);
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_144928d62(param_2,0);
  FUN_144928d62(param_2,1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14189f3c0 FUN_14189f3c0 body=143 status=ok
// SIG undefined FUN_14189f3c0(void)

undefined8 * FUN_14189f3c0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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



// FUNCTION 14189f450 FUN_14189f450 body=269 status=ok
// SIG undefined FUN_14189f450(void)

void FUN_14189f450(longlong param_1,int param_2)

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



// FUNCTION 14189f55e FUN_14189f55e body=306 status=ok
// SIG undefined FUN_14189f55e(void)

void FUN_14189f55e(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14189f5c0;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_14189f5c0:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 14189f690 FUN_14189f690 body=93 status=ok
// SIG undefined FUN_14189f690(void)

void FUN_14189f690(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b41cc10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14189f6ee FUN_14189f6ee body=29 status=ok
// SIG undefined FUN_14189f6ee(void)

undefined8 FUN_14189f6ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189f70c FUN_14189f70c body=638 status=ok
// SIG undefined FUN_14189f70c(void)

void FUN_14189f70c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar8 = FUN_1401cb356();
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,4,0x10);
  local_38 = 4;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_14189f89c:
    *local_40 = &PTR_LAB_149e02020;
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
    local_40[2] = lVar9;
    *local_40 = &PTR_FUN_14b41cd20;
    local_40[3] = 0;
    local_40[4] = 0;
    local_40[5] = FUN_1410ea1a6;
    *(undefined4 *)(local_40 + 6) = 0;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_14189f89c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
    uVar4 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_40 = &PTR_LAB_149e02020;
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
    local_40[2] = lVar9;
    *local_40 = &PTR_FUN_14b41cd20;
    local_40[3] = uVar4;
    local_40[4] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_40[5] = FUN_1410ea1a6;
    *(undefined4 *)(local_40 + 6) = 0;
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
  local_48 = 0x800000;
  FUN_1405f67fc(uVar8,local_30,&local_40,L"FMissionActionSequenceThread_OneOff");
  if (local_28 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_28 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if (local_38 != 0) {
    if (local_40 == (undefined8 *)0x0) goto LAB_14189f84b;
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14189f84b:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14189f98c FUN_14189f98c body=66 status=ok
// SIG undefined FUN_14189f98c(void)

undefined8 * FUN_14189f98c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41cd20;
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



// FUNCTION 14189f9ce FUN_14189f9ce body=118 status=ok
// SIG undefined FUN_14189f9ce(void)

void FUN_14189f9ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41cd20;
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



// FUNCTION 14189fa44 FUN_14189fa44 body=353 status=ok
// SIG undefined FUN_14189fa44(void)

void FUN_14189fa44(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14189facb;
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
LAB_14189facb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14189fba6 FUN_14189fba6 body=29 status=ok
// SIG undefined FUN_14189fba6(void)

undefined8 FUN_14189fba6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189fbc4 FUN_14189fbc4 body=118 status=ok
// SIG undefined FUN_14189fbc4(void)

void FUN_14189fbc4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b41d790;
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



// FUNCTION 14189fc3a FUN_14189fc3a body=95 status=ok
// SIG undefined FUN_14189fc3a(void)

ulonglong FUN_14189fc3a(longlong param_1)

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
LAB_14189fc7c:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14189fc7c;
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



// FUNCTION 14189fc9a FUN_14189fc9a body=29 status=ok
// SIG undefined FUN_14189fc9a(void)

undefined8 FUN_14189fc9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189fcb8 FUN_14189fcb8 body=84 status=ok
// SIG undefined FUN_14189fcb8(void)

void FUN_14189fcb8(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b00be30;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afff080;
  FUN_1403d9eef(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14189fd0c FUN_14189fd0c body=29 status=ok
// SIG undefined FUN_14189fd0c(void)

undefined8 FUN_14189fd0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189fd2a FUN_14189fd2a body=29 status=ok
// SIG undefined FUN_14189fd2a(void)

undefined8 FUN_14189fd2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189fd48 FUN_14189fd48 body=111 status=ok
// SIG undefined FUN_14189fd48(void)

void FUN_14189fd48(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b39b820;
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afff080;
  FUN_1403d9eef(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14189fdb8 FUN_14189fdb8 body=29 status=ok
// SIG undefined FUN_14189fdb8(void)

undefined8 FUN_14189fdb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189fdd6 FUN_14189fdd6 body=29 status=ok
// SIG undefined FUN_14189fdd6(void)

undefined8 FUN_14189fdd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189fdf4 FUN_14189fdf4 body=96 status=ok
// SIG undefined FUN_14189fdf4(void)

void FUN_14189fdf4(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b008da0;
  FUN_1447cd778(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afff080;
  FUN_1403d9eef(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14189fe54 FUN_14189fe54 body=29 status=ok
// SIG undefined FUN_14189fe54(void)

undefined8 FUN_14189fe54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189fe72 FUN_14189fe72 body=29 status=ok
// SIG undefined FUN_14189fe72(void)

undefined8 FUN_14189fe72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189fe90 FUN_14189fe90 body=29 status=ok
// SIG undefined FUN_14189fe90(void)

undefined8 FUN_14189fe90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189feae FUN_14189feae body=29 status=ok
// SIG undefined FUN_14189feae(void)

undefined8 FUN_14189feae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189fecc FUN_14189fecc body=9 status=ok
// SIG undefined FUN_14189fecc(void)

void FUN_14189fecc(longlong param_1)

{
  FUN_140d97ce8(param_1 + 0x10);
  return;
}



// FUNCTION 14189fed6 FUN_14189fed6 body=29 status=ok
// SIG undefined FUN_14189fed6(void)

undefined8 FUN_14189fed6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189ff0e FUN_14189ff0e body=29 status=ok
// SIG undefined FUN_14189ff0e(void)

undefined8 FUN_14189ff0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189ff2c FUN_14189ff2c body=133 status=ok
// SIG undefined FUN_14189ff2c(void)

void FUN_14189ff2c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  FUN_140ec3a0d(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014189ffad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14189ffb2 FUN_14189ffb2 body=29 status=ok
// SIG undefined FUN_14189ffb2(void)

undefined8 FUN_14189ffb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189ffd0 FUN_14189ffd0 body=57 status=ok
// SIG undefined FUN_14189ffd0(void)

void FUN_14189ffd0(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afff080;
  FUN_1403d9eef(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418a000a FUN_1418a000a body=29 status=ok
// SIG undefined FUN_1418a000a(void)

undefined8 FUN_1418a000a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a0028 FUN_1418a0028 body=57 status=ok
// SIG undefined FUN_1418a0028(void)

void FUN_1418a0028(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afff080;
  FUN_1403d9eef(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418a0062 FUN_1418a0062 body=29 status=ok
// SIG undefined FUN_1418a0062(void)

undefined8 FUN_1418a0062(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a0080 FUN_1418a0080 body=57 status=ok
// SIG undefined FUN_1418a0080(void)

void FUN_1418a0080(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afff080;
  FUN_1403d9eef(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418a00ba FUN_1418a00ba body=29 status=ok
// SIG undefined FUN_1418a00ba(void)

undefined8 FUN_1418a00ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a00d8 FUN_1418a00d8 body=1842 status=ok
// SIG undefined FUN_1418a00d8(void)

void FUN_1418a00d8(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  longlong param_5)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = *param_3;
  local_50 = *(undefined4 *)(param_3 + 1);
  local_68 = *param_2;
  local_60 = *(undefined4 *)(param_2 + 1);
  local_c8 = (undefined2 *)param_5;
  FUN_140d22372();
  lVar9 = param_5 + 0x1d0;
  lVar7 = FUN_140d22434(lVar9);
  *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(lVar7 + 0x18) = *param_2;
  *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(param_2 + 1);
  FUN_1408226d0(param_3,&local_98,1);
  puVar11 = local_98;
  if (local_90 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  if (param_5 == 0) {
    local_b0 = 0;
  }
  else {
    puVar14 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_5 + 8) != (undefined4 *)0x0) {
      puVar14 = *(undefined4 **)(param_5 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar10 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar10);
      DAT_14c947fe0 = lVar10;
    }
    FUN_140045924(DAT_14c947fe0,&local_b0,puVar14,1);
  }
  FUN_1400021e4(&local_b0,&local_a8);
  puVar12 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar12 = local_a8;
  }
  local_c8 = puVar11;
  FUN_140002266(&local_88,L"__%s_%d_%s_SpawnedActor",puVar12,param_4);
  uStack_70 = 0;
  uStack_6c = 0;
  puVar11 = &DAT_149dfb77a;
  if (local_80 != 0) {
    puVar11 = local_88;
  }
  FUN_1405f0d29(&local_74,puVar11,0);
  *(undefined4 *)(lVar7 + 0x2c) = uStack_6c;
  *(ulonglong *)(lVar7 + 0x24) = CONCAT44(uStack_70,local_74);
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_c0 = lVar9;
  lVar7 = FUN_140b9c2d2(lVar9,param_3);
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar14 = (undefined4 *)(lVar9 + 0xc7c);
  uVar4 = *puVar14;
  pbVar2 = (byte *)(lVar9 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar14 = 0xffffffff;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x458);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b41dc70;
  memset(plVar8 + 3,0,0x420);
  plVar8[2] = (longlong)&PTR_FUN_14b1787d0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  *(undefined4 *)(plVar8 + 10) = 0;
  *(undefined1 *)(plVar8 + 0xb) = 1;
  *(undefined4 *)(plVar8 + 0xc) = 0;
  *(undefined1 *)(plVar8 + 0x86) = 0;
  plVar8[0xe] = 0;
  plVar8[0xf] = 0;
  plVar8[0x10] = 0;
  plVar8[0x11] = 0;
  plVar8[0x87] = 0;
  plVar8[0x88] = 0;
  plVar8[0x89] = 0;
  plVar8[0x8a] = 0;
  if ((bVar3 & 1) != 0) {
    *puVar14 = uVar4;
    *pbVar2 = 1;
  }
  local_b8 = (undefined8 *)(param_1 + 8);
  *(undefined1 *)(plVar8 + 5) = *(undefined1 *)(param_1 + 0x38);
  iVar5 = *(int *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x40) != 0 || iVar5 != 0) {
    plVar8[6] = *(longlong *)(param_1 + 0x40);
    *(int *)(plVar8 + 7) = iVar5;
    plVar8[8] = 0;
  }
  *(undefined4 *)(plVar8 + 10) = *(undefined4 *)(param_1 + 0x60);
  plVar8[9] = *(longlong *)(param_1 + 0x58);
  *(undefined1 *)((longlong)plVar8 + 0x5a) = 1;
  *(undefined4 *)((longlong)plVar8 + 100) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)((longlong)plVar8 + 0x5c) = *local_b8;
  *(undefined1 *)((longlong)plVar8 + 0x59) = *(undefined1 *)(param_1 + 0x30);
  *(undefined1 *)(plVar8 + 0xd) = 1;
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_140136f76(param_1 + 0x70,&local_88);
    plVar6 = (longlong *)CONCAT44(uStack_7c,local_80);
    if (plVar6 == (longlong *)0x0) {
      plVar8[0xe] = (longlong)local_88;
      plVar13 = (longlong *)plVar8[0xf];
      if (plVar13 != (longlong *)0x0) {
        plVar8[0xf] = 0;
LAB_1418a074c:
        LOCK();
        plVar6 = plVar13 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
joined_r0x0001418a077f:
          if (iVar5 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      plVar8[0xe] = (longlong)local_88;
      plVar13 = (longlong *)plVar8[0xf];
      if (plVar6 == plVar13) {
        LOCK();
        plVar13 = plVar6 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
          plVar13 = plVar6;
          goto joined_r0x0001418a077f;
        }
      }
      else {
        plVar8[0xf] = (longlong)plVar6;
        if (plVar13 != (longlong *)0x0) goto LAB_1418a074c;
      }
    }
    plVar6 = (longlong *)CONCAT44(uStack_7c,local_80);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar6 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    plVar6 = plVar8 + 0x12;
    if ((longlong *)(param_1 + 0xe0) != plVar6) {
      if ((char)plVar8[0x81] == '\x01') {
        FUN_140315562(plVar6);
      }
      FUN_1457ddc2a(plVar6,(longlong *)(param_1 + 0xe0));
      *(undefined1 *)(plVar8 + 0x81) = 1;
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar5 = *(int *)(lVar7 + 0x50);
  *(uint *)(lVar7 + 0x50) = iVar5 + 1U;
  if (*(uint *)(lVar7 + 0x54) < iVar5 + 1U) {
    FUN_140822376((longlong *)(lVar7 + 0x48),iVar5);
  }
  lVar10 = local_c0;
  lVar9 = *(longlong *)(lVar7 + 0x48);
  *(longlong **)(lVar9 + (longlong)iVar5 * 0x10) = plVar8 + 2;
  *(longlong **)(lVar9 + 8 + (longlong)iVar5 * 0x10) = plVar8;
  if (plVar8 == (longlong *)0x0) {
    FUN_140d22200(local_c0,lVar7 + 0x18);
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    FUN_140d22200(lVar10,lVar7 + 0x18);
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (*(char *)(param_1 + 0xa8) == '\0') {
    if ((*(longlong *)(param_1 + 0xb0) == 0) || (0xfffffffd < *(int *)(param_1 + 0xb8) - 1U))
    goto LAB_1418a0472;
  }
  else if (*(int *)(param_1 + 200) == 0) goto LAB_1418a0472;
  lVar9 = FUN_140b9c2d2(lVar10,local_b8);
  uVar4 = *puVar14;
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar14 = 0xffffffff;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b41dec0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[2] = (longlong)&PTR_FUN_14b008e20;
  plVar8[8] = 0;
  if ((bVar3 & 1) != 0) {
    *puVar14 = uVar4;
    *pbVar2 = 1;
  }
  *(undefined1 *)(plVar8 + 5) = *(undefined1 *)(param_1 + 0xa8);
  iVar5 = *(int *)(param_1 + 0xb8);
  if ((*(longlong *)(param_1 + 0xb0) != 0) || (iVar5 != 0)) {
    plVar8[6] = *(longlong *)(param_1 + 0xb0);
    *(int *)(plVar8 + 7) = iVar5;
    plVar8[8] = 0;
  }
  *(undefined4 *)(plVar8 + 10) = *(undefined4 *)(param_1 + 0xd0);
  plVar8[9] = *(longlong *)(param_1 + 200);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar5 = *(int *)(lVar9 + 0x50);
  *(uint *)(lVar9 + 0x50) = iVar5 + 1U;
  if (*(uint *)(lVar9 + 0x54) < iVar5 + 1U) {
    FUN_140822376((longlong *)(lVar9 + 0x48),iVar5);
  }
  lVar7 = *(longlong *)(lVar9 + 0x48);
  *(longlong **)(lVar7 + (longlong)iVar5 * 0x10) = plVar8 + 2;
  *(longlong **)(lVar7 + 8 + (longlong)iVar5 * 0x10) = plVar8;
  if (plVar8 == (longlong *)0x0) {
    FUN_140d22200(lVar10,lVar9 + 0x18);
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    FUN_140d22200(lVar10,lVar9 + 0x18);
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_1418a0472:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a080c FUN_1418a080c body=94 status=ok
// SIG undefined FUN_1418a080c(void)

void FUN_1418a080c(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  FUN_14008482a(param_1 + 400,&local_20);
  FUN_14008482a(param_1 + 0x1a0,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a086c FUN_1418a086c body=632 status=ok
// SIG undefined FUN_1418a086c(void)

void FUN_1418a086c(longlong *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(int *)((longlong)param_1 + 0x2c) == 0) ||
       (uVar1 = *(uint *)(param_1 + 5), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)((longlong)param_1 + 0x2c))) ||
      ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_1418a0a32;
  if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
    lVar5 = *plVar6;
  }
  else {
    lVar5 = 0;
  }
  plVar6 = *(longlong **)(lVar5 + 0x1f0);
  if (plVar6 == (longlong *)0x0) goto LAB_1418a0a32;
  if (DAT_14cb5e538 == 0) {
    local_40 = &local_20;
    local_20 = &LAB_1417c5d06;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_1417ad04a;
    local_48 = &LAB_1486a7af7;
    local_50 = &LAB_1464e1631;
    local_58 = &DAT_149e063b2;
    local_60 = 0;
    local_68 = 0x1000000c;
    local_70 = 8;
    local_78 = 0x420;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
  }
  if ((*(int *)(plVar6[2] + 0x38) < *(int *)(DAT_14cb5e538 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8)
      != DAT_14cb5e538 + 0x30)) goto LAB_1418a0a32;
  bVar2 = (**(code **)(*plVar6 + 0x498))(plVar6);
  if (5 < bVar2) {
    cVar3 = (**(code **)(*plVar6 + 0x498))(plVar6);
    if (2 < (byte)(cVar3 - 6U)) goto LAB_1418a0a32;
  }
  if (((*(int *)((longlong)param_1 + 0x2c) == 0) || (uVar1 = *(uint *)(param_1 + 5), (int)uVar1 < 0)
      ) || (DAT_14c9647dc <= (int)uVar1)) {
LAB_1418a09ac:
    (**(code **)(*param_1 + 0x2d0))(param_1);
  }
  else {
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != *(int *)((longlong)param_1 + 0x2c))) ||
       (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (*plVar6 == 0)))) goto LAB_1418a09ac;
    iVar4 = FUN_14490d72a();
    if (iVar4 != 3) goto LAB_1418a09ac;
  }
  if (((*(int *)((longlong)param_1 + 0x2c) != 0) &&
      (uVar1 = *(uint *)(param_1 + 5), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)((longlong)param_1 + 0x2c))) &&
        ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (*plVar6 != 0)) {
      iVar4 = FUN_14490d72a();
      if (iVar4 == 1) {
LAB_1418a0a32:
        if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 1418a0b0c FUN_1418a0b0c body=253 status=ok
// SIG undefined FUN_1418a0b0c(void)

void FUN_1418a0b0c(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_34 = param_2;
    uVar1 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_34);
    if ((DAT_14c761388 != 0) &&
       ((lVar2 = param_1[0x16], lVar2 != 0 || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)))) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        lVar3 = lVar2 + 0x460;
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf8);
      }
      FUN_140e65914(lVar3,param_1,*(undefined4 *)(lVar2 + 0x6f4));
    }
  }
  FUN_1403f7b72(param_1 + 0x22,param_2);
  FUN_1403f7a8a(param_1 + 0x22);
  *(undefined1 *)(param_1 + 0x23) = 0;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418a0c0a FUN_1418a0c0a body=40 status=ok
// SIG undefined FUN_1418a0c0a(void)

void FUN_1418a0c0a(longlong param_1)

{
  FUN_140115e24();
  FUN_1402d7906(param_1 + 0x3a0,param_1 + 0x398);
  return;
}



// FUNCTION 1418a0c32 FUN_1418a0c32 body=40 status=ok
// SIG undefined FUN_1418a0c32(void)

void FUN_1418a0c32(longlong param_1)

{
  FUN_1405f1eac();
  FUN_1407c0b34(param_1 + 0x3a0,param_1 + 0x398,param_1);
  return;
}



// FUNCTION 1418a0c66 FUN_1418a0c66 body=123 status=ok
// SIG undefined FUN_1418a0c66(void)

void FUN_1418a0c66(undefined8 param_1,longlong *param_2)

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
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001418a0cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x218))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_1c8,&DAT_14b41e878);
}



// FUNCTION 1418a0ce2 FUN_1418a0ce2 body=171 status=ok
// SIG undefined FUN_1418a0ce2(void)

void FUN_1418a0ce2(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_11);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  local_28 = 0xe96da779;
  uStack_24 = 0xa70046a2;
  uStack_20 = 0xae0e98b1;
  uStack_1c = 0x2fcef5a5;
  iVar2 = FUN_1448a256a(param_1);
  if (iVar2 < 0) {
    FUN_140608954(param_1 + 7,param_1 + 0x17);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a0d8e FUN_1418a0d8e body=491 status=ok
// SIG undefined FUN_1418a0d8e(void)

void FUN_1418a0d8e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  int local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((((*(longlong *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 0x2c) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0)))) &&
     (((int)plVar6[2] == *(int *)(param_1 + 0x2c) &&
      (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar2 = *plVar6, lVar2 != 0)))))) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar5 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar5;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_a0 = (undefined8 *)0x0;
    local_98 = 0;
    FUN_1446efa72(&local_a0,0,2,0x10);
    local_98 = 2;
    *local_a0 = &PTR_LAB_14a1c8830;
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
    local_a0[2] = lVar7;
    *local_a0 = &PTR_FUN_14b41f610;
    local_a0[3] = uVar4;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_a0);
    local_48 = 1;
    FUN_14016fdb0(uVar3,&local_90,&local_88);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    *(undefined8 *)(param_1 + 0x20) = local_90;
    if (local_98 != 0) {
      if (local_a0 == (undefined8 *)0x0) goto LAB_1418a0db5;
      (**(code **)*local_a0)(local_a0,0);
      FUN_1446efa72(&local_a0,0,0,0x10);
      local_98 = 0;
    }
    if (local_a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1418a0db5:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a0f80 FUN_1418a0f80 body=73 status=ok
// SIG undefined FUN_1418a0f80(void)

void FUN_1418a0f80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x390) + 0x718) + 0x38))
                    (*(longlong *)(param_1 + 0x390) + 0x718);
  if (lVar1 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x390) + 0xa78))
              (*(longlong **)(param_1 + 0x390),*(undefined8 *)(lVar1 + 0xe0));
  }
  FUN_1401b2056(param_1);
  return;
}



// FUNCTION 1418a0fca FUN_1418a0fca body=134 status=ok
// SIG undefined FUN_1418a0fca(void)

void FUN_1418a0fca(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_1401a021e();
  if ((*(char *)((longlong)param_1 + 0x9c) < '\0') &&
     (plVar1 = (longlong *)param_1[0x15], plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 8) & 1) != 0)) {
      FUN_140c7ce82(plVar1,1);
      (**(code **)(*plVar1 + 0x2c0))(plVar1,1);
    }
  }
  if ((param_1[0x141] != 0) && ((*(byte *)(param_1[0x141] + 0x9c) & 1) == 0)) {
    FUN_140b506a4();
    return;
  }
  return;
}



// FUNCTION 1418a1050 FUN_1418a1050 body=57 status=ok
// SIG undefined FUN_1418a1050(void)

void FUN_1418a1050(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0xa08) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0xa08) + 0x9c) & 1) != 0)) {
    FUN_1401bf202();
  }
  FUN_1447c0e7a(param_1);
  *(byte *)(param_1 + 0x674) = *(byte *)(param_1 + 0x674) & 0xf7;
  return;
}



// FUNCTION 1418a108a FUN_1418a108a body=33 status=ok
// SIG undefined FUN_1418a108a(void)

void FUN_1418a108a(longlong param_1)

{
  FUN_1400f7e48();
  FUN_1408196e4(param_1 + 0x598,param_1);
  return;
}



// FUNCTION 1418a10ac FUN_1418a10ac body=651 status=ok
// SIG undefined FUN_1418a10ac(void)

void FUN_1418a10ac(undefined8 *param_1,longlong param_2,ulonglong *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined1 local_138;
  uint local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  undefined1 local_d0 [24];
  ulonglong local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_90 [14];
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_2 != 0) {
    if ((*(byte *)(param_1 + 3) & 1) == 0) {
      uVar4 = *param_1;
      lVar7 = *(longlong *)(param_2 + 0xb0);
      if (lVar7 == 0) {
        lVar7 = FUN_1448abda6(param_2);
      }
      local_150 = CONCAT71(local_150._1_7_,1);
      local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffffffffff00);
      uVar4 = FUN_1405837ac(lVar7,uVar4,param_3,1);
    }
    else {
      local_b8[0] = *param_3;
      local_b8[1] = param_3[1];
      local_a8 = (undefined4)param_3[2];
      uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x14);
      uStack_a0 = (undefined4)param_3[3];
      uStack_9c = *(undefined4 *)((longlong)param_3 + 0x1c);
      FUN_141706cfc(local_d0);
      local_e8 = param_3[4];
      uStack_e0 = param_3[5];
      local_d8 = param_3[6];
      local_138 = 1;
      local_148 = 1;
      local_140 = 0;
      local_150 = CONCAT44(local_150._4_4_,1);
      local_158 = local_d0;
      uVar4 = FUN_140a44468(*param_1,param_2,*(undefined8 *)((longlong)param_1 + 0x1c));
    }
    local_b8[0] = local_b8[0] & 0xffffffffffffff00;
    local_90[0] = 0;
    FUN_1456bb102(local_b8,param_2);
    local_130 = (uint)param_1[1];
    uStack_12c = (undefined4)((ulonglong)param_1[1] >> 0x20);
    local_128 = *(undefined4 *)(param_1 + 2);
    FUN_140e99737(uVar4,&local_130,local_b8);
    FUN_1448173f8(local_90);
    if (((char)local_b8[0] == '\x03') &&
       (plVar3 = (longlong *)CONCAT44(uStack_a4,local_a8), plVar3 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    uVar2 = *(ulonglong *)(param_2 + 0xa8);
    puVar8 = local_b8;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *param_3;
      param_3 = param_3 + 1;
      puVar8 = puVar8 + 1;
    }
    local_58 = 0x3f800000;
    local_50 = 0;
    local_4c = 0;
    uVar4 = param_1[0x12];
    uVar5 = FUN_14477b664(param_1[0x13]);
    uVar6 = FUN_14477b664(uVar5);
    uVar5 = param_1[0x14];
    local_130 = local_130 & 0xffffff00;
    uStack_12c = 0;
    local_128 = 0;
    local_120 = uVar4;
    uVar4 = FUN_14477b664(uVar6);
    local_118 = FUN_14477b664(uVar4);
    local_108 = 0;
    lVar7 = *(longlong *)(param_2 + 0xb0);
    local_110 = uVar5;
    if (lVar7 == 0) {
      lVar7 = FUN_1448abda6(param_2);
    }
    local_150 = 0;
    local_158 = (undefined1 *)uVar2;
    FUN_140cb5d65(&local_100,lVar7,&local_130,local_b8);
    local_100 = 0;
    local_f8 = 0xffffffffffffffff;
    if ((local_108 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_108 + 0x50));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a1338 FUN_1418a1338 body=52 status=ok
// SIG undefined FUN_1418a1338(void)

void FUN_1418a1338(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xfb0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x420))(plVar1,param_2);
  }
  FUN_14067484e(param_1,param_2);
  return;
}



// FUNCTION 1418a136c FUN_1418a136c body=5461 status=ok
// SIG undefined FUN_1418a136c(void)

double * FUN_1418a136c(byte *param_1,double *param_2,double *param_3,longlong *param_4,
                      longlong *param_5,double param_6)

{
  int *piVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 uVar11;
  double *pdVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined8 ****ppppuVar16;
  undefined8 *puVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 ****ppppuVar26;
  undefined8 ***pppuVar27;
  undefined1 auVar28 [16];
  undefined8 ***pppuVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined8 **local_188;
  double dStack_180;
  double local_178;
  undefined8 local_168;
  undefined8 **ppuStack_160;
  double local_158;
  ushort uStack_150;
  undefined6 uStack_14e;
  byte local_148;
  undefined8 ***local_138;
  double dStack_130;
  undefined1 local_128 [16];
  undefined4 local_110 [2];
  undefined8 ***local_108;
  double dStack_100;
  double local_f8;
  ushort local_f0;
  undefined6 uStack_ee;
  byte local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  param_2[2] = param_3[2];
  dVar19 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar19;
  if (param_4 == (longlong *)0x0) goto LAB_1418a141a;
  uVar14 = *param_1 - 1;
  if (0x13 < uVar14) goto LAB_1418a141a;
  iVar15 = (&switchD_1418a161f::switchdataD_14b41f870)[uVar14] + 0x4b41f870;
  dVar19 = DAT_14c8464f0;
  switch((uint)*param_1) {
  case 1:
    plVar10 = (longlong *)param_4[0x39];
    if (*param_5 == 0) {
      if (plVar10 == (longlong *)0x0) goto LAB_1418a240b;
      ppppuVar16 = (undefined8 ****)plVar10[0x48];
      dVar19 = (double)plVar10[0x49];
      dVar37 = *(double *)*(undefined1 (*) [16])(plVar10 + 0x4a);
      dVar34 = (double)plVar10[0x4b];
      local_128 = *(undefined1 (*) [16])(plVar10 + 0x4a);
      pdVar12 = (double *)plVar10[0x45];
      local_138 = ppppuVar16;
      dStack_130 = dVar19;
      if (pdVar12 == (double *)0x0) {
        iVar15 = 0x40;
        pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
        dVar20 = DAT_14c8463d8;
        *pdVar12 = DAT_14c8463d0;
        pdVar12[1] = dVar20;
        dVar20 = DAT_14c8463e8;
        pdVar12[2] = DAT_14c8463e0;
        pdVar12[3] = dVar20;
        dVar20 = DAT_14c846500;
        pdVar12[4] = (double)DAT_14c8464f8;
        pdVar12[5] = dVar20;
        param_6 = DAT_14c846508;
        pdVar12[6] = DAT_14c846508;
        plVar10[0x45] = (longlong)pdVar12;
      }
      auVar4._8_4_ = (int)-(ulonglong)(dVar19 != pdVar12[1]);
      auVar4._0_8_ = -(ulonglong)((double)ppppuVar16 != *pdVar12);
      auVar4._12_4_ = (int)(-(ulonglong)(dVar19 != pdVar12[1]) >> 0x20);
      iVar9 = movmskpd(SUB84(param_6,0),auVar4);
      auVar6._8_4_ = (int)-(ulonglong)(dVar34 != pdVar12[3]);
      auVar6._0_8_ = -(ulonglong)(dVar37 != pdVar12[2]);
      auVar6._12_4_ = (int)(-(ulonglong)(dVar34 != pdVar12[3]) >> 0x20);
      uVar14 = movmskpd(iVar15,auVar6);
      if ((uVar14 & 0x3fffffff) != 0 || iVar9 != 0) {
        *(undefined4 *)(pdVar12 + 2) = local_128._0_4_;
        *(undefined4 *)((longlong)pdVar12 + 0x14) = local_128._4_4_;
        *(undefined4 *)(pdVar12 + 3) = local_128._8_4_;
        *(undefined4 *)((longlong)pdVar12 + 0x1c) = local_128._12_4_;
        *pdVar12 = (double)local_138;
        pdVar12[1] = dStack_130;
        FUN_1448052ee(&local_138,&local_108);
        pdVar12[6] = local_f8;
        pdVar12[4] = (double)local_108;
        pdVar12[5] = dStack_100;
      }
      local_178 = pdVar12[6];
      local_188 = (undefined8 ***)pdVar12[4];
      dStack_180 = pdVar12[5];
    }
    else {
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x4b8))(plVar10,&local_108);
        ppppuVar16 = &local_138;
        goto LAB_1418a1f74;
      }
LAB_1418a240b:
      local_178 = DAT_14c846508;
      local_188 = DAT_14c8464f8;
      dStack_180 = DAT_14c846500;
    }
    ppppuVar16 = (undefined8 ****)&local_188;
    ppppuVar26 = (undefined8 ****)&local_168;
    goto LAB_1418a1df0;
  case 2:
    plVar10 = (longlong *)param_4[0x39];
    if (*param_5 != 0) {
      if (plVar10 == (longlong *)0x0) goto LAB_1418a243b;
      (**(code **)(*plVar10 + 0x4b8))(plVar10,&local_108);
      FUN_144a76660(&local_108,&local_138);
      uVar30 = SUB84(dStack_130,0);
      uVar31 = (undefined4)((ulonglong)dStack_130 >> 0x20);
      goto LAB_1418a1643;
    }
    if (plVar10 == (longlong *)0x0) {
LAB_1418a243b:
      local_178 = DAT_14c846508;
      local_188 = DAT_14c8464f8;
      dStack_180 = DAT_14c846500;
    }
    else {
      ppppuVar16 = (undefined8 ****)plVar10[0x48];
      dVar19 = (double)plVar10[0x49];
      dVar37 = *(double *)*(undefined1 (*) [16])(plVar10 + 0x4a);
      dVar34 = (double)plVar10[0x4b];
      local_128 = *(undefined1 (*) [16])(plVar10 + 0x4a);
      pdVar12 = (double *)plVar10[0x45];
      local_138 = ppppuVar16;
      dStack_130 = dVar19;
      if (pdVar12 == (double *)0x0) {
        iVar15 = 0x40;
        pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
        dVar20 = DAT_14c8463d8;
        *pdVar12 = DAT_14c8463d0;
        pdVar12[1] = dVar20;
        dVar20 = DAT_14c8463e8;
        pdVar12[2] = DAT_14c8463e0;
        pdVar12[3] = dVar20;
        dVar20 = DAT_14c846500;
        pdVar12[4] = (double)DAT_14c8464f8;
        pdVar12[5] = dVar20;
        param_6 = DAT_14c846508;
        pdVar12[6] = DAT_14c846508;
        plVar10[0x45] = (longlong)pdVar12;
      }
      auVar3._8_4_ = (int)-(ulonglong)(dVar19 != pdVar12[1]);
      auVar3._0_8_ = -(ulonglong)((double)ppppuVar16 != *pdVar12);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar19 != pdVar12[1]) >> 0x20);
      iVar9 = movmskpd(SUB84(param_6,0),auVar3);
      auVar5._8_4_ = (int)-(ulonglong)(dVar34 != pdVar12[3]);
      auVar5._0_8_ = -(ulonglong)(dVar37 != pdVar12[2]);
      auVar5._12_4_ = (int)(-(ulonglong)(dVar34 != pdVar12[3]) >> 0x20);
      uVar14 = movmskpd(iVar15,auVar5);
      if ((uVar14 & 0x3fffffff) != 0 || iVar9 != 0) {
        *(undefined4 *)(pdVar12 + 2) = local_128._0_4_;
        *(undefined4 *)((longlong)pdVar12 + 0x14) = local_128._4_4_;
        *(undefined4 *)(pdVar12 + 3) = local_128._8_4_;
        *(undefined4 *)((longlong)pdVar12 + 0x1c) = local_128._12_4_;
        *pdVar12 = (double)local_138;
        pdVar12[1] = dStack_130;
        FUN_1448052ee(&local_138,&local_108);
        pdVar12[6] = local_f8;
        pdVar12[4] = (double)local_108;
        pdVar12[5] = dStack_100;
      }
      local_178 = pdVar12[6];
      local_188 = (undefined8 ***)pdVar12[4];
      dStack_180 = pdVar12[5];
    }
    FUN_144a76660(&local_188,&local_168);
    ppppuVar16 = (undefined8 ****)CONCAT44(local_168._4_4_,(float)local_168);
    uVar30 = SUB84(ppuStack_160,0);
    uVar31 = (undefined4)((ulonglong)ppuStack_160 >> 0x20);
    goto LAB_1418a1815;
  case 3:
    plVar10 = (longlong *)param_4[0x39];
    if (*param_5 == 0) {
      if (plVar10 == (longlong *)0x0) goto LAB_1418a247e;
      ppppuVar16 = (undefined8 ****)plVar10[0x48];
      dVar19 = (double)plVar10[0x49];
      dVar37 = *(double *)*(undefined1 (*) [16])(plVar10 + 0x4a);
      dVar34 = (double)plVar10[0x4b];
      local_128 = *(undefined1 (*) [16])(plVar10 + 0x4a);
      pdVar12 = (double *)plVar10[0x45];
      local_138 = ppppuVar16;
      dStack_130 = dVar19;
      if (pdVar12 == (double *)0x0) {
        iVar15 = 0x40;
        pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
        dVar20 = DAT_14c8463d8;
        *pdVar12 = DAT_14c8463d0;
        pdVar12[1] = dVar20;
        dVar20 = DAT_14c8463e8;
        pdVar12[2] = DAT_14c8463e0;
        pdVar12[3] = dVar20;
        dVar20 = DAT_14c846500;
        pdVar12[4] = (double)DAT_14c8464f8;
        pdVar12[5] = dVar20;
        param_6 = DAT_14c846508;
        pdVar12[6] = DAT_14c846508;
        plVar10[0x45] = (longlong)pdVar12;
      }
      auVar38._8_4_ = (int)-(ulonglong)(dVar19 != pdVar12[1]);
      auVar38._0_8_ = -(ulonglong)((double)ppppuVar16 != *pdVar12);
      auVar38._12_4_ = (int)(-(ulonglong)(dVar19 != pdVar12[1]) >> 0x20);
      iVar9 = movmskpd(SUB84(param_6,0),auVar38);
      auVar28._8_4_ = (int)-(ulonglong)(dVar34 != pdVar12[3]);
      auVar28._0_8_ = -(ulonglong)(dVar37 != pdVar12[2]);
      auVar28._12_4_ = (int)(-(ulonglong)(dVar34 != pdVar12[3]) >> 0x20);
      uVar14 = movmskpd(iVar15,auVar28);
      if ((uVar14 & 0x3fffffff) != 0 || iVar9 != 0) {
        *(undefined4 *)(pdVar12 + 2) = local_128._0_4_;
        *(undefined4 *)((longlong)pdVar12 + 0x14) = local_128._4_4_;
        *(undefined4 *)(pdVar12 + 3) = local_128._8_4_;
        *(undefined4 *)((longlong)pdVar12 + 0x1c) = local_128._12_4_;
        *pdVar12 = (double)local_138;
        pdVar12[1] = dStack_130;
        FUN_1448052ee(&local_138,&local_108);
        pdVar12[6] = local_f8;
        pdVar12[4] = (double)local_108;
        pdVar12[5] = dStack_100;
      }
      local_178 = pdVar12[6];
      local_188 = (undefined8 ***)pdVar12[4];
      dStack_180 = pdVar12[5];
    }
    else {
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x4b8))(plVar10,&local_108);
        ppppuVar16 = &local_138;
        goto LAB_1418a1fb5;
      }
LAB_1418a247e:
      local_178 = DAT_14c846508;
      local_188 = DAT_14c8464f8;
      dStack_180 = DAT_14c846500;
    }
    FUN_144a76660(&local_188,&local_168);
    uVar30 = (undefined4)((ulonglong)local_158 >> 0x20);
    uVar31 = SUB84(local_158,0);
    pppuVar27 = (undefined8 ***)CONCAT44(local_168._4_4_,(float)local_168);
    pppuVar29 = (undefined8 ***)ppuStack_160;
    goto LAB_1418a1fd7;
  case 4:
    (**(code **)(*param_4 + 0x328))(param_4,&local_138);
    dVar19 = (double)local_128._0_8_ * (double)local_128._0_8_ +
             (double)local_138 * (double)local_138 + dStack_130 * dStack_130;
    if (((dVar19 != 1.0) ||
        (dVar37 = dStack_130, ppppuVar26 = (undefined8 ****)local_138,
        dVar34 = (double)local_128._0_8_, NAN(dVar19))) &&
       (dVar37 = DAT_14c8464e8, ppppuVar26 = DAT_14c8464e0, dVar34 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar19)) {
      dVar19 = 1.0 / SQRT(dVar19);
      dVar34 = (double)local_128._0_8_ * dVar19;
      dVar37 = dStack_130 * dVar19;
      ppppuVar26 = (undefined8 ****)((double)local_138 * dVar19);
    }
    goto LAB_1418a1695;
  case 5:
    (**(code **)(*param_4 + 0x328))(param_4,&local_138);
LAB_1418a1638:
    uVar30 = SUB84(dStack_130,0);
    uVar31 = (undefined4)((ulonglong)dStack_130 >> 0x20);
LAB_1418a1643:
    dVar19 = (double)local_138 * (double)local_138 +
             (double)CONCAT44(uVar31,uVar30) * (double)CONCAT44(uVar31,uVar30);
    ppppuVar16 = (undefined8 ****)local_138;
    if ((dVar19 != 1.0) || (NAN(dVar19))) goto LAB_1418a1667;
    dVar34 = (double)local_128._0_8_;
    goto LAB_1418a2387;
  case 6:
    (**(code **)(*param_4 + 0x328))(param_4,&local_138);
    dVar19 = (double)local_128._0_8_ * (double)local_128._0_8_ +
             (double)local_138 * (double)local_138 + dStack_130 * dStack_130;
    if (((dVar19 != 1.0) ||
        (dVar34 = (double)local_128._0_8_, ppppuVar26 = (undefined8 ****)local_138,
        dVar37 = dStack_130, NAN(dVar19))) &&
       (dVar34 = DAT_14c8464f0, ppppuVar26 = DAT_14c8464e0, dVar37 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar19)) {
      dVar19 = 1.0 / SQRT(dVar19);
      dVar34 = (double)local_128._0_8_ * dVar19;
      dVar37 = dStack_130 * dVar19;
      ppppuVar26 = (undefined8 ****)((double)local_138 * dVar19);
    }
    goto LAB_1418a1c74;
  case 7:
    (**(code **)(*param_4 + 0x328))(param_4,&local_138);
    uVar30 = SUB84(dStack_130,0);
    uVar31 = (undefined4)((ulonglong)dStack_130 >> 0x20);
    dVar19 = (double)local_138 * (double)local_138 + dStack_130 * dStack_130;
    ppppuVar16 = (undefined8 ****)local_138;
    if ((dVar19 != 1.0) || (NAN(dVar19))) goto LAB_1418a204d;
    dVar37 = (double)local_128._0_8_;
LAB_1418a1c67:
    dVar34 = (double)(-(ulonglong)(dVar37 == 0.0) & (ulonglong)dVar37);
    ppppuVar26 = ppppuVar16;
    dVar37 = (double)CONCAT44(uVar31,uVar30);
    goto LAB_1418a1c74;
  case 8:
    uVar14 = rand();
    uVar8 = rand();
    local_108 = (undefined8 ***)(double)(((float)(uVar8 & 0x7fff) / 32767.0) * 360.0 + 0.0);
    dStack_100 = (double)(((float)(uVar14 & 0x7fff) / 32767.0) * 360.0 + 0.0);
    goto LAB_1418a1de8;
  case 9:
    uVar14 = rand();
    uVar8 = rand();
    local_108 = (undefined8 ***)(double)(((float)(uVar8 & 0x7fff) / 32767.0) * 180.0 + 0.0);
    dStack_100 = (double)(((float)(uVar14 & 0x7fff) / 32767.0) * 360.0 + 0.0);
    goto LAB_1418a1de8;
  case 10:
    uVar14 = rand();
    uVar8 = rand();
    local_108 = (undefined8 ***)(double)(((float)(uVar8 & 0x7fff) / 32767.0) * 180.0 + -180.0);
    dStack_100 = (double)(((float)(uVar14 & 0x7fff) / 32767.0) * 360.0 + 0.0);
    goto LAB_1418a1de8;
  case 0xb:
    uVar14 = rand();
    local_108 = (undefined8 ****)0x0;
    dStack_100 = (double)(((float)(uVar14 & 0x7fff) / 32767.0) * 360.0 + 0.0);
LAB_1418a1de8:
    local_f8 = 0.0;
    ppppuVar16 = &local_108;
    ppppuVar26 = &local_138;
LAB_1418a1df0:
    FUN_144a76660(ppppuVar16,ppppuVar26);
    param_2[2] = (double)ppppuVar26[2];
    pppuVar27 = *ppppuVar26;
    pppuVar29 = ppppuVar26[1];
LAB_1418a1e05:
    *param_2 = (double)pppuVar27;
    param_2[1] = (double)pppuVar29;
    break;
  case 0xc:
    *param_2 = 0.0;
    param_2[1] = 0.0;
    dVar19 = 1.0;
    goto LAB_1418a1e7c;
  case 0xd:
    *param_2 = 0.0;
    param_2[1] = 0.0;
    dVar19 = -1.0;
LAB_1418a1e7c:
    param_2[2] = dVar19;
    break;
  case 0xe:
    if (param_6 == 0.0) {
      plVar10 = (longlong *)FUN_147f5e040(param_4);
      if (plVar10 == (longlong *)0x0) break;
      uVar11 = (**(code **)(*plVar10 + 0x30))(plVar10);
      FUN_14069fc2e(uVar11,&local_138);
      plVar10 = (longlong *)param_4[0x39];
      if (*param_5 == 0) {
        if (plVar10 == (longlong *)0x0) {
LAB_1418a2662:
          local_f8 = DAT_14c8464f0;
          local_108 = DAT_14c8464e0;
          dStack_100 = DAT_14c8464e8;
        }
        else {
          local_108 = (undefined8 ***)plVar10[0x4c];
          dStack_100 = (double)plVar10[0x4d];
          local_f8 = (double)plVar10[0x4e];
        }
      }
      else {
        if (plVar10 == (longlong *)0x0) goto LAB_1418a2662;
        (**(code **)(*plVar10 + 0x4b0))(plVar10,&local_108);
      }
      FUN_140519d92(&local_138,&local_168,0);
      dVar19 = local_158 - local_f8;
      dVar37 = (double)ppuStack_160 - dStack_100;
      ppppuVar16 = (undefined8 ****)
                   ((double)CONCAT44(local_168._4_4_,(float)local_168) - (double)local_108);
    }
    else {
      lVar13 = *(longlong *)((longlong)param_6 + 0x1c8);
      if (lVar13 == 0) {
        puVar17 = &DAT_14c8464e0;
      }
      else {
        dVar19 = *(double *)(lVar13 + 0x270);
        puVar17 = (undefined8 *)(lVar13 + 0x260);
      }
      uVar30 = *(undefined4 *)puVar17;
      uVar31 = *(undefined4 *)((longlong)puVar17 + 4);
      uVar32 = *(undefined4 *)(puVar17 + 1);
      uVar33 = *(undefined4 *)((longlong)puVar17 + 0xc);
      lVar13 = param_4[0x39];
LAB_1418a24f9:
      if (lVar13 == 0) {
        pdVar12 = (double *)&DAT_14c8464e0;
        dVar37 = DAT_14c8464f0;
      }
      else {
        dVar37 = *(double *)(lVar13 + 0x270);
        pdVar12 = (double *)(lVar13 + 0x260);
      }
      dVar19 = dVar19 - dVar37;
      ppppuVar16 = (undefined8 ****)((double)CONCAT44(uVar31,uVar30) - *pdVar12);
      dVar37 = (double)CONCAT44(uVar33,uVar32) - pdVar12[1];
    }
    dVar34 = dVar19 * dVar19 + (double)ppppuVar16 * (double)ppppuVar16 + dVar37 * dVar37;
    if (((dVar34 != 1.0) || (ppppuVar26 = ppppuVar16, dVar20 = dVar19, dVar21 = dVar37, NAN(dVar34))
        ) && (ppppuVar26 = DAT_14c8464e0, dVar20 = DAT_14c8464f0, dVar21 = DAT_14c8464e8,
             9.99999993922529e-09 <= dVar34)) {
      dVar34 = 1.0 / SQRT(dVar34);
      ppppuVar26 = (undefined8 ****)((double)ppppuVar16 * dVar34);
      dVar20 = dVar19 * dVar34;
      dVar21 = dVar37 * dVar34;
    }
    *param_2 = (double)ppppuVar26;
    param_2[1] = dVar21;
    param_2[2] = dVar20;
    break;
  case 0xf:
    if (param_6 != 0.0) {
      lVar13 = param_4[0x39];
      if (lVar13 == 0) {
        puVar17 = &DAT_14c8464e0;
      }
      else {
        dVar19 = *(double *)(lVar13 + 0x270);
        puVar17 = (undefined8 *)(lVar13 + 0x260);
      }
      uVar30 = *(undefined4 *)puVar17;
      uVar31 = *(undefined4 *)((longlong)puVar17 + 4);
      uVar32 = *(undefined4 *)(puVar17 + 1);
      uVar33 = *(undefined4 *)((longlong)puVar17 + 0xc);
      lVar13 = *(longlong *)((longlong)param_6 + 0x1c8);
      goto LAB_1418a24f9;
    }
    plVar10 = (longlong *)FUN_147f5e040(param_4);
    if (plVar10 != (longlong *)0x0) {
      uVar11 = (**(code **)(*plVar10 + 0x30))(plVar10);
      FUN_14069fc2e(uVar11,&local_138);
      lVar13 = param_4[0x39];
      if (lVar13 == 0) {
        pdVar12 = (double *)&DAT_14c8464e0;
        uVar30 = SUB84(DAT_14c8464f0,0);
        uVar31 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar30 = (undefined4)*(undefined8 *)(lVar13 + 0x270);
        uVar31 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x270) >> 0x20);
        pdVar12 = (double *)(lVar13 + 0x260);
      }
      dVar19 = *pdVar12;
      dVar37 = pdVar12[1];
      FUN_140519d92(&local_138,&local_108,0);
      dVar34 = (double)CONCAT44(uVar31,uVar30) - local_f8;
      dVar37 = dVar37 - dStack_100;
      ppppuVar16 = (undefined8 ****)(dVar19 - (double)local_108);
      dVar19 = dVar34 * dVar34 + (double)ppppuVar16 * (double)ppppuVar16 + dVar37 * dVar37;
      if (((dVar19 != 1.0) ||
          (dVar20 = dVar34, ppppuVar26 = ppppuVar16, dVar21 = dVar37, NAN(dVar19))) &&
         (dVar20 = DAT_14c8464f0, ppppuVar26 = DAT_14c8464e0, dVar21 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar19)) {
        dVar19 = 1.0 / SQRT(dVar19);
        dVar20 = dVar34 * dVar19;
        ppppuVar26 = (undefined8 ****)((double)ppppuVar16 * dVar19);
        dVar21 = dVar37 * dVar19;
      }
      *param_2 = (double)ppppuVar26;
      param_2[1] = dVar21;
      param_2[2] = dVar20;
    }
    break;
  case 0x10:
    (**(code **)(*param_4 + 0x588))(param_4,&local_138,&local_108);
    ppppuVar16 = (undefined8 ****)&local_168;
LAB_1418a1f74:
    FUN_144a76660(&local_108,ppppuVar16);
    param_2[2] = (double)ppppuVar16[2];
    pppuVar27 = *ppppuVar16;
    pppuVar29 = ppppuVar16[1];
    goto LAB_1418a1e05;
  case 0x11:
    (**(code **)(*param_4 + 0x588))(param_4,&local_138,&local_108);
    ppppuVar16 = (undefined8 ****)&local_168;
LAB_1418a1fb5:
    FUN_144a76660(&local_108,ppppuVar16);
    uVar30 = (undefined4)((ulonglong)ppppuVar16[2] >> 0x20);
    uVar31 = SUB84(ppppuVar16[2],0);
    pppuVar27 = *ppppuVar16;
    pppuVar29 = ppppuVar16[1];
LAB_1418a1fd7:
    *param_2 = -(double)pppuVar27;
    param_2[1] = -(double)pppuVar29;
    param_2[2] = -(double)CONCAT44(uVar30,uVar31);
    break;
  case 0x12:
    (**(code **)(*param_4 + 0x588))(param_4,&local_138,&local_108);
    FUN_144a76660(&local_108,&local_168);
    ppppuVar16 = (undefined8 ****)CONCAT44(local_168._4_4_,(float)local_168);
    uVar30 = SUB84(ppuStack_160,0);
    uVar31 = (undefined4)((ulonglong)ppuStack_160 >> 0x20);
LAB_1418a1815:
    dVar19 = (double)ppppuVar16 * (double)ppppuVar16 +
             (double)CONCAT44(uVar31,uVar30) * (double)CONCAT44(uVar31,uVar30);
    if ((dVar19 != 1.0) || (dVar34 = local_158, NAN(dVar19))) {
LAB_1418a1667:
      dVar37 = DAT_14c8464e8;
      ppppuVar26 = DAT_14c8464e0;
      dVar34 = DAT_14c8464f0;
      if (9.99999993922529e-09 <= dVar19) {
        dVar37 = (double)CONCAT44(uVar31,uVar30) * (1.0 / SQRT(dVar19));
        ppppuVar26 = (undefined8 ****)((double)ppppuVar16 * (1.0 / SQRT(dVar19)));
        dVar34 = 0.0;
      }
    }
    else {
LAB_1418a2387:
      dVar37 = (double)CONCAT44(uVar31,uVar30);
      ppppuVar26 = ppppuVar16;
      dVar34 = (double)(-(ulonglong)(dVar34 == 0.0) & (ulonglong)dVar34);
    }
LAB_1418a1695:
    *param_2 = (double)ppppuVar26;
    param_2[1] = dVar37;
    param_2[2] = dVar34;
    break;
  case 0x13:
    (**(code **)(*param_4 + 0x588))(param_4,&local_138,&local_108);
    FUN_144a76660(&local_108,&local_168);
    ppppuVar16 = (undefined8 ****)CONCAT44(local_168._4_4_,(float)local_168);
    uVar30 = SUB84(ppuStack_160,0);
    uVar31 = (undefined4)((ulonglong)ppuStack_160 >> 0x20);
    dVar19 = (double)ppppuVar16 * (double)ppppuVar16 + (double)ppuStack_160 * (double)ppuStack_160;
    if ((dVar19 == 1.0) && (dVar37 = local_158, !NAN(dVar19))) goto LAB_1418a1c67;
LAB_1418a204d:
    dVar34 = DAT_14c8464f0;
    ppppuVar26 = DAT_14c8464e0;
    dVar37 = DAT_14c8464e8;
    if (9.99999993922529e-09 <= dVar19) {
      dVar34 = 0.0;
      ppppuVar26 = (undefined8 ****)((double)ppppuVar16 * (1.0 / SQRT(dVar19)));
      dVar37 = (double)CONCAT44(uVar31,uVar30) * (1.0 / SQRT(dVar19));
    }
LAB_1418a1c74:
    *param_2 = -(double)ppppuVar26;
    param_2[1] = -dVar37;
    param_2[2] = -dVar34;
    break;
  case 0x14:
    lVar13 = FUN_144a7cacc();
    if (((*(int *)(lVar13 + 0x38) <= *(int *)(param_4[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_4[2] + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
         lVar13 + 0x30)) && (param_4[0x86] != 0)) {
      FUN_144b21218(param_4[0x86],&local_138);
      goto LAB_1418a1638;
    }
  }
LAB_1418a141a:
  dVar19 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x58),0);
  dVar19 = (double)(~-(ulonglong)(dVar19 < 0.0) & (ulonglong)dVar19 |
                   (ulonglong)(dVar19 + 360.0) & -(ulonglong)(dVar19 < 0.0));
  if ((dVar19 == 0.0) && (!NAN(dVar19))) {
    dVar19 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x60),0);
    dVar19 = (double)(~-(ulonglong)(dVar19 < 0.0) & (ulonglong)dVar19 |
                     (ulonglong)(dVar19 + 360.0) & -(ulonglong)(dVar19 < 0.0));
    if ((dVar19 == 0.0) && (!NAN(dVar19))) {
      dVar19 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x68));
      dVar19 = (double)(~-(ulonglong)(dVar19 < 0.0) & (ulonglong)dVar19 |
                       (ulonglong)(dVar19 + 360.0) & -(ulonglong)(dVar19 < 0.0));
      if ((dVar19 == 0.0) && (!NAN(dVar19))) goto LAB_1418a14d6;
    }
  }
  FUN_144a79a9c(param_2,local_1b8);
  FUN_144a7484c(local_1b8,&local_108);
  FUN_144a7484c(param_1 + 0x58,&local_168);
  dVar37 = (double)CONCAT44(local_168._4_4_,(float)local_168);
  dVar34 = (double)CONCAT62(uStack_14e,uStack_150);
  local_138 = (undefined8 ***)
              ((double)ppuStack_160 * local_f8 * -1.0 +
              local_158 * dStack_100 +
              (double)local_108 * dVar34 * 1.0 + (double)CONCAT62(uStack_ee,local_f0) * dVar37);
  dStack_130 = dVar37 * local_f8 * 1.0 +
               dVar34 * dStack_100 +
               (double)local_108 * local_158 * -1.0 +
               (double)CONCAT62(uStack_ee,local_f0) * (double)ppuStack_160;
  dVar19 = local_158 * local_f8 * -1.0 +
           (((double)local_108 * dVar37 * -1.0 + (double)CONCAT62(uStack_ee,local_f0) * dVar34) -
           dStack_100 * (double)ppuStack_160);
  local_128._8_4_ = SUB84(dVar19,0);
  local_128._0_8_ =
       dVar34 * local_f8 * 1.0 +
       (((double)local_108 * (double)ppuStack_160 * 1.0 +
        (double)CONCAT62(uStack_ee,local_f0) * local_158) - dStack_100 * dVar37);
  local_128._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  FUN_1448052ee(&local_138,local_1a0);
  FUN_144a76660(local_1a0,&local_188);
  param_2[2] = local_178;
  *param_2 = (double)local_188;
  param_2[1] = dStack_180;
LAB_1418a14d6:
  local_138 = (undefined8 ***)((ulonglong)local_138 & 0xffffffffffffff00);
  local_110[0] = 0;
  FUN_1456bb102(&local_138,param_4);
  puVar17 = &local_168;
  FUN_1448729ea(param_1 + 8,puVar17,&local_138);
  if (local_148 == 3) {
    uVar14 = 3;
    fVar35 = (float)local_168;
  }
  else {
    FUN_1400b56fe(&local_108,&local_168,3);
    fVar35 = 0.0;
    if (local_e8 != 0) {
      fVar35 = local_108._0_4_;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar16 = &local_108;
      if (0x18 < local_f0) {
        ppppuVar16 = (undefined8 ****)local_108;
      }
      (*pcVar2)(ppppuVar16);
    }
    if (0x18 < local_f0) {
      FUN_1400020a8(local_108);
    }
    uVar14 = (uint)local_148;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar14 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < uStack_150) {
      puVar17 = (undefined8 *)CONCAT44(local_168._4_4_,(float)local_168);
    }
    (*pcVar2)(puVar17);
  }
  if (0x18 < uStack_150) {
    FUN_1400020a8(CONCAT44(local_168._4_4_,(float)local_168));
  }
  FUN_1448173f8(local_110);
  if (((char)local_138 == '\x03') && ((longlong *)local_128._0_8_ != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)(local_128._0_8_ + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)local_128._0_8_ + 0x10))();
    }
  }
  if (0.0001 < fVar35) {
    uVar14 = rand();
    fVar36 = (float)(uVar14 & 0x7fff) / -32767.0 + 0.5;
    fVar18 = 1.0 - (fVar36 + fVar36) * (fVar36 + fVar36);
    if (fVar18 < 0.0) {
      fVar18 = sqrtf(fVar18);
    }
    else {
      fVar18 = SQRT(fVar18);
    }
    auVar38 = blendps(ZEXT416((uint)(fVar36 * fVar35)),ZEXT816(0),0xe);
    auVar38 = roundps(ZEXT816(0),auVar38,3);
    uVar14 = rand();
    auVar28 = blendps(ZEXT416((uint)(((float)(uVar14 & 0x7fff) / -32767.0 + 0.5) * fVar18 * fVar35))
                      ,ZEXT816(0),0xe);
    auVar28 = roundps(auVar28,auVar28,3);
    local_138 = (undefined8 ***)(double)auVar28._0_4_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_128._8_8_;
    local_128 = auVar7 << 0x40;
    dStack_130 = (double)auVar38._0_4_;
    FUN_144a79a9c(param_2,&local_108);
    dVar19 = (double)local_108 * 0.01745329238474369;
    dVar37 = dStack_100 * 0.01745329238474369;
    dVar34 = local_f8 * 0.01745329238474369;
    dVar20 = sin(dVar19);
    dVar21 = sin(dVar37);
    dVar22 = sin(dVar34);
    sin(0.0);
    dVar23 = cos(dVar19);
    dVar24 = cos(dVar37);
    dVar25 = cos(dVar34);
    cos(0.0);
    dVar34 = DAT_14c8464e8;
    ppppuVar16 = DAT_14c8464e0;
    dVar19 = DAT_14c8464f0 * 0.0;
    FUN_144a76660(&local_138,&local_168);
    dVar37 = (double)CONCAT44(local_168._4_4_,(float)local_168);
    *param_2 = (double)ppppuVar16 * 0.0 +
               local_158 * -(dVar20 * dVar25 * dVar24 + dVar21 * dVar22) +
               (double)ppuStack_160 * (dVar20 * dVar22 * dVar24 - dVar21 * dVar25) +
               dVar37 * dVar23 * dVar24;
    param_2[1] = dVar34 * 0.0 +
                 local_158 * (dVar24 * dVar22 - dVar21 * dVar20 * dVar25) +
                 (double)ppuStack_160 * (dVar20 * dVar22 * dVar21 + dVar24 * dVar25) +
                 dVar37 * dVar21 * dVar23;
    param_2[2] = (dVar20 * dVar37 - dVar23 * dVar22 * (double)ppuStack_160) +
                 dVar23 * dVar25 * local_158 + dVar19;
  }
  if ((local_e0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418a28c2 FUN_1418a28c2 body=574 status=ok
// SIG undefined FUN_1418a28c2(void)

undefined8 FUN_1418a28c2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_1447262c2(param_3);
  if (plVar3 != (longlong *)0x0) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
      pcVar2 = *(code **)(*plVar3 + 0x5e8);
      if (pcVar2 == FUN_140972dde) {
        if (plVar3[0x76] == 0) {
          pcVar2 = *(code **)(*plVar3 + 0x5f8);
          if (pcVar2 == FUN_144784df4) {
            if (*(code **)(plVar3[0x784] + 0x18) == (code *)&LAB_144904684) {
              if (((((*(int *)((longlong)plVar3 + 0x75b4) != 0) &&
                    (uVar1 = *(uint *)(plVar3 + 0xeb6), -1 < (int)uVar1)) &&
                   ((int)uVar1 < DAT_14c9647dc)) &&
                  ((plVar6 = (longlong *)
                             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                   plVar6 != (longlong *)0x0 &&
                   ((int)plVar6[2] == *(int *)((longlong)plVar3 + 0x75b4))))) &&
                 ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
                if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
                  lVar4 = *plVar6;
                }
                else {
                  lVar4 = 0;
                }
                lVar4 = lVar4 + 0x110;
                goto LAB_1418a2a1c;
              }
            }
            else {
              lVar4 = (**(code **)(plVar3[0x784] + 0x18))(plVar3 + 0x784);
LAB_1418a2a1c:
              if (lVar4 != 0) {
                lVar4 = *(longlong *)(lVar4 + 0x20);
                goto LAB_1418a2a25;
              }
            }
          }
          else {
            lVar4 = (*pcVar2)(plVar3);
LAB_1418a2a25:
            if (lVar4 != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x3b0);
              goto LAB_1418a2a31;
            }
          }
          goto LAB_1418a29d5;
        }
      }
      else {
        lVar4 = (*pcVar2)(plVar3);
LAB_1418a2a31:
        uVar5 = 1;
        if (lVar4 != 0) goto LAB_1418a2916;
LAB_1418a29d5:
        plVar6 = (longlong *)plVar3[0x36];
        if ((plVar6 == plVar3 || plVar6 == (longlong *)0x0) ||
           (lVar4 = (**(code **)(*plVar6 + 0x5e8))(), lVar4 == 0)) goto LAB_1418a2914;
      }
      uVar5 = 1;
      goto LAB_1418a2916;
    }
  }
LAB_1418a2914:
  uVar5 = 0;
LAB_1418a2916:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1418a2b02 FUN_1418a2b02 body=452 status=ok
// SIG undefined FUN_1418a2b02(void)

byte FUN_1418a2b02(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (lVar4 = *(longlong *)(lVar2 + 0x1f0), lVar4 != 0)) {
    if (DAT_14cb5e538 == 0) {
      local_40 = &local_28;
      local_28 = &LAB_1417c5d06;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1417ad04a;
      local_48 = &LAB_1486a7af7;
      local_50 = &LAB_1464e1631;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
      lVar4 = *(longlong *)(lVar2 + 0x1f0);
      if (lVar4 == 0) goto LAB_1418a2cbb;
    }
    bVar1 = 0;
    if ((DAT_14cb5e538 == 0) || (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 == 0))
    goto LAB_1418a2bef;
    if (((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
        (((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8)
           == DAT_14cb5e538 + 0x30 && (*(longlong *)(lVar4 + 0x1e0) != 0)) &&
         (lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x1e0) + 0x68), lVar2 != 0)))) &&
       (-1 < *(short *)(param_2 + 0x18))) {
      plVar3 = (longlong *)FUN_140d71416(lVar2,param_2 + 0x18);
      bVar1 = (byte)lVar2;
      if (plVar3 != (longlong *)0x0) {
        bVar1 = (**(code **)(*plVar3 + 0x760))(plVar3,param_4,param_5);
      }
      bVar1 = plVar3 != (longlong *)0x0 & bVar1;
      goto LAB_1418a2bef;
    }
  }
LAB_1418a2cbb:
  bVar1 = 0;
LAB_1418a2bef:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a2cc8 FUN_1418a2cc8 body=153 status=ok
// SIG undefined FUN_1418a2cc8(void)

void FUN_1418a2cc8(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x30)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x30,8);
      uVar3 = uVar3 / 0x30;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x30,8);
    }
  }
  return;
}



// FUNCTION 1418a2d62 FUN_1418a2d62 body=679 status=ok
// SIG undefined FUN_1418a2d62(void)

void FUN_1418a2d62(longlong *param_1)

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
  uint uVar16;
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
        lVar13 = (longlong)iVar7 * 0x40;
        uVar2 = *(undefined8 *)(lVar14 + 8 + lVar13);
        uVar4 = ((uint)(*(ulonglong *)(lVar14 + lVar13) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar14 + lVar13) >> 4)) * -0x7a143595;
        uVar16 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar16 = uVar16 >> 0x10 ^ uVar16;
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4) + uVar16 * 0x40 +
                       (uVar16 >> 2) + 0x9e3779b9 ^ uVar16) & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x3c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x38 + lVar13) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_1418a2fc0;
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
LAB_1418a2fc0:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a300a FUN_1418a300a body=451 status=ok
// SIG undefined FUN_1418a300a(void)

undefined8 FUN_1418a300a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x1f0), lVar2 != 0)) {
    if (DAT_14cb5e538 == 0) {
      local_50 = &local_30;
      local_30 = &LAB_1417c5d06;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1417ad04a;
      local_58 = &LAB_1486a7af7;
      local_60 = &LAB_1464e1631;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x1000000c;
      local_80 = 8;
      local_88 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
      lVar2 = *(longlong *)(lVar1 + 0x1f0);
      if (lVar2 == 0) goto LAB_1418a31c0;
    }
    if (((((DAT_14cb5e538 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
         (*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8)
          == DAT_14cb5e538 + 0x30 && (*(longlong *)(lVar2 + 0x1e0) != 0)))) &&
       ((lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x1e0) + 0x68), lVar1 != 0 &&
        ((-1 < *(short *)(param_2 + 0x18) &&
         (lVar1 = FUN_140d71416(lVar1,param_2 + 0x18), lVar1 != 0)))))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
  }
LAB_1418a31c0:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1418a31ea FUN_1418a31ea body=193 status=ok
// SIG undefined FUN_1418a31ea(void)

void FUN_1418a31ea(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140500a24();
  if ((bool)DAT_14cb89770 != ((*(byte *)(param_1 + 0x39a) >> 3 & 1) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    if (lVar3 != 0) {
      lVar2 = FUN_1449f3324();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_1487c48de(lVar3);
        return;
      }
    }
    FUN_14893175e(param_1);
    if (*(longlong *)(param_1 + 0x408) != 0) {
      lVar3 = FUN_140e7a652();
      plVar1 = *(longlong **)(param_1 + 0x408);
      if ((((plVar1 != (longlong *)0x0) && (lVar3 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
         ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)))) {
                    /* WARNING: Could not recover jumptable at 0x0001418a32a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x8d8))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1418a32ab FUN_1418a32ab body=128 status=ok
// SIG undefined FUN_1418a32ab(void)

byte FUN_1418a32ab(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1 != (longlong *)0x0) && ((char)param_1[0x2f] == '\x03')) &&
     ((*(byte *)(param_1 + 0x84) & 2) != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar1 != '\0') {
      local_1c = 0;
      bVar2 = FUN_14016169c(param_1,&local_1c);
      bVar2 = bVar2 ^ 1 | local_1c == 0;
      goto LAB_1418a32d3;
    }
  }
  bVar2 = 0;
LAB_1418a32d3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a332c FUN_1418a332c body=408 status=ok
// SIG undefined FUN_1418a332c(void)

undefined1 *
FUN_1418a332c(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1447262c2(param_4);
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_1418a3387;
  }
  lVar1 = 0;
LAB_1418a3387:
  lVar1 = FUN_140d8fbfc(lVar1);
  if (lVar1 == 0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0xa08);
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    if (lVar1 != 0) {
      *(undefined4 *)(param_2 + 0x38) = 1;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      FUN_1456bb102(param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418a34c6 FUN_1418a34c6 body=153 status=ok
// SIG undefined FUN_1418a34c6(void)

undefined4 FUN_1418a34c6(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448729ea(param_1 + 0x18,local_40,param_2);
  uVar2 = FUN_1405d5f74(local_40);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_40;
    if (0x18 < local_28) {
      pppuVar3 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a3560 FUN_1418a3560 body=765 status=ok
// SIG undefined FUN_1418a3560(void)

undefined8 * FUN_1418a3560(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar2 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_58[2] = lVar6;
  *local_58 = (longlong)&PTR_FUN_14b421010;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar4;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar2 + 0x1c) = iVar8;
  plVar2[4] = param_4;
  *param_2 = 0;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_58 + 0x30))(), cVar3 == '\0')) {
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_1418a370c;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_1418a36f6;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar8 = (int)param_1[1];
      iVar4 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar4;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
        if (0 < iVar8) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar4 = (int)param_1[1];
          } while (iVar7 < iVar4);
        }
        iVar7 = 2;
        if (2 < iVar4 * 2) {
          iVar7 = iVar4 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar8) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    uVar5 = 0;
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,&local_48);
      uVar5 = local_48;
    }
    *param_2 = uVar5;
    iVar8 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
      FUN_1447a71f6(param_1,iVar8);
    }
    lVar9 = *param_1;
    lVar6 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar9 + lVar6) = 0;
    *(undefined4 *)(lVar9 + 8 + lVar6) = 0;
    *(longlong **)(lVar9 + lVar6) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar9 + 8 + lVar6) = local_50;
LAB_1418a36f6:
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1418a370c:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418a386e FUN_1418a386e body=140 status=ok
// SIG undefined FUN_1418a386e(void)

undefined4 FUN_1418a386e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  uVar3 = 0;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    lVar4 = 0;
    do {
      FUN_14893536e(param_1,*(undefined8 *)(lVar2 + lVar4));
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    uVar3 = *(undefined4 *)(param_1 + 0xb8);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_14893bf9e(param_1 + 0xb0,0);
  }
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  *(char *)(param_1 + 0xc0) = *(char *)(param_1 + 0xc0) + '\x01';
  FUN_1410cebe2(param_1 + 0x60,param_1);
  return uVar3;
}



// FUNCTION 1418a38fa FUN_1418a38fa body=99 status=ok
// SIG undefined FUN_1418a38fa(void)

undefined8 FUN_1418a38fa(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  wchar_t *pwVar3;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 == '\x02') {
    bVar2 = *(char *)(param_1 + 0x29) - 1;
    if (bVar2 < 5) {
      pwVar3 = (wchar_t *)(&PTR_u_Light_Projectile_Damage_Causer_14b4216d8)[bVar2];
      goto LAB_1418a3946;
    }
  }
  else {
    if (cVar1 == '\0') {
      pwVar3 = L"Light Projectile Location";
      goto LAB_1418a3946;
    }
    if (cVar1 == '\x01') {
      pwVar3 = L"Light Projectile Rotation";
      goto LAB_1418a3946;
    }
  }
  pwVar3 = L"Invalid";
LAB_1418a3946:
  FUN_1446f470e(param_2,pwVar3,1);
  return param_2;
}



// FUNCTION 1418a395e FUN_1418a395e body=1446 status=ok
// SIG undefined FUN_1418a395e(void)

uint * FUN_1418a395e(longlong param_1,uint *param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  double dVar13;
  undefined8 *puVar14;
  double *pdVar15;
  uint uVar16;
  uint *puVar17;
  ushort uVar18;
  longlong lVar19;
  uint uVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined2 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_2 + 8) = 0;
  lVar19 = param_1;
  if (param_3 == 0) {
LAB_1418a39ca:
    uVar24 = (undefined4)lVar19;
    cVar1 = *(char *)(param_1 + 0x28);
    if (cVar1 != '\x02') {
      if (cVar1 != '\x01') {
        if (cVar1 != '\0') goto LAB_1418a3a5b;
        lVar19 = *(longlong *)(param_3 + 0x1c8);
        if (lVar19 == 0) {
          puVar14 = &DAT_14c8464e0;
          uVar24 = (undefined4)DAT_14c8464f0;
          uVar25 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar24 = (undefined4)*(undefined8 *)(lVar19 + 0x270);
          uVar25 = (undefined4)((ulonglong)*(undefined8 *)(lVar19 + 0x270) >> 0x20);
          puVar14 = (undefined8 *)(lVar19 + 0x260);
        }
        uVar9 = *puVar14;
        uVar10 = puVar14[1];
        if ((byte)param_2[8] == 4) {
          *(undefined8 *)param_2 = uVar9;
          *(undefined8 *)(param_2 + 2) = uVar10;
          *(ulonglong *)(param_2 + 4) = CONCAT44(uVar25,uVar24);
          goto LAB_1418a3a5b;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)param_2[8] * 0x120));
        uVar18 = (ushort)param_2[6];
        if (pcVar2 != (code *)0x0) {
          puVar17 = param_2;
          if (0x18 < uVar18) {
            puVar17 = *(uint **)param_2;
          }
          (*pcVar2)(puVar17);
          uVar18 = (ushort)param_2[6];
        }
        if (0x18 < uVar18) {
          FUN_1400020a8(*(undefined8 *)param_2);
        }
        *(undefined2 *)(param_2 + 6) = 0x18;
        *(undefined8 *)param_2 = uVar9;
        *(undefined8 *)(param_2 + 2) = uVar10;
        *(ulonglong *)(param_2 + 4) = CONCAT44(uVar25,uVar24);
LAB_1418a3dc8:
        *(undefined1 *)(param_2 + 8) = 4;
        goto LAB_1418a3a5b;
      }
      lVar19 = *(longlong *)(param_3 + 0x1c8);
      if (lVar19 == 0) {
        local_98 = DAT_14c846508;
        uVar16 = (uint)DAT_14c8464f8;
        uVar20 = DAT_14c8464f8._4_4_;
        uVar22 = (uint)DAT_14c846500;
        uVar23 = DAT_14c846500._4_4_;
      }
      else {
        dVar5 = *(double *)(lVar19 + 0x240);
        dVar6 = *(double *)(lVar19 + 0x248);
        dVar7 = *(double *)(lVar19 + 0x250);
        dVar8 = *(double *)(lVar19 + 600);
        pdVar15 = *(double **)(lVar19 + 0x228);
        dVar13 = 4.94065645841247e-324;
        local_88 = dVar5;
        uStack_80 = dVar6;
        local_78 = dVar7;
        uStack_70 = dVar8;
        if (pdVar15 == (double *)0x0) {
          uVar24 = 0x40;
          pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
          dVar13 = DAT_14c8463d8;
          *pdVar15 = DAT_14c8463d0;
          pdVar15[1] = dVar13;
          dVar13 = DAT_14c8463e8;
          pdVar15[2] = DAT_14c8463e0;
          pdVar15[3] = dVar13;
          dVar13 = (double)CONCAT44(DAT_14c846500._4_4_,(uint)DAT_14c846500);
          pdVar15[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(uint)DAT_14c8464f8);
          pdVar15[5] = dVar13;
          dVar13 = DAT_14c846508;
          pdVar15[6] = DAT_14c846508;
          *(double **)(lVar19 + 0x228) = pdVar15;
        }
        auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar15[1]);
        auVar3._0_8_ = -(ulonglong)(dVar5 != *pdVar15);
        auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar15[1]) >> 0x20);
        iVar11 = movmskpd(SUB84(dVar13,0),auVar3);
        auVar4._8_4_ = (int)-(ulonglong)(dVar8 != pdVar15[3]);
        auVar4._0_8_ = -(ulonglong)(dVar7 != pdVar15[2]);
        auVar4._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar15[3]) >> 0x20);
        uVar16 = movmskpd(uVar24,auVar4);
        if ((uVar16 & 0x3fffffff) != 0 || iVar11 != 0) {
          *(undefined4 *)(pdVar15 + 2) = (undefined4)local_78;
          *(undefined4 *)((longlong)pdVar15 + 0x14) = local_78._4_4_;
          *(undefined4 *)(pdVar15 + 3) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)pdVar15 + 0x1c) = uStack_70._4_4_;
          *(uint *)pdVar15 = (uint)local_88;
          *(uint *)((longlong)pdVar15 + 4) = local_88._4_4_;
          *(uint *)(pdVar15 + 1) = (uint)uStack_80;
          *(uint *)((longlong)pdVar15 + 0xc) = uStack_80._4_4_;
          FUN_1448052ee(&local_88,&local_68);
          pdVar15[6] = local_58;
          pdVar15[4] = local_68;
          pdVar15[5] = dStack_60;
        }
        local_98 = pdVar15[6];
        uVar16 = *(uint *)(pdVar15 + 4);
        uVar20 = *(uint *)((longlong)pdVar15 + 0x24);
        uVar22 = *(uint *)(pdVar15 + 5);
        uVar23 = *(uint *)((longlong)pdVar15 + 0x2c);
      }
      local_a8 = uVar16;
      uStack_a4 = uVar20;
      uStack_a0 = uVar22;
      uStack_9c = uVar23;
      if ((byte)param_2[8] != 5) {
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)param_2[8] * 0x120));
        uVar18 = (ushort)param_2[6];
        if (pcVar2 != (code *)0x0) {
          puVar17 = param_2;
          if (0x18 < uVar18) {
            puVar17 = *(uint **)param_2;
          }
          (*pcVar2)(puVar17);
          uVar18 = (ushort)param_2[6];
        }
        if (0x18 < uVar18) {
          FUN_1400020a8(*(undefined8 *)param_2);
        }
        *(double *)(param_2 + 4) = local_98;
        *param_2 = local_a8;
        param_2[1] = uStack_a4;
        param_2[2] = uStack_a0;
        param_2[3] = uStack_9c;
        *(undefined2 *)(param_2 + 6) = 0x18;
LAB_1418a3cfb:
        *(undefined1 *)(param_2 + 8) = 5;
        goto LAB_1418a3a5b;
      }
      *(double *)(param_2 + 4) = local_98;
LAB_1418a3c2c:
      *param_2 = uVar16;
      param_2[1] = uVar20;
      param_2[2] = uVar22;
      param_2[3] = uVar23;
      goto LAB_1418a3a5b;
    }
    if ((byte)param_2[8] == 7) {
LAB_1418a3d38:
      FUN_14485c47a(param_2,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)param_2[8] * 0x120));
    uVar18 = (ushort)param_2[6];
    if (pcVar2 != (code *)0x0) {
      puVar17 = param_2;
      if (0x18 < uVar18) {
        puVar17 = *(uint **)param_2;
      }
      (*pcVar2)(puVar17);
      uVar18 = (ushort)param_2[6];
    }
    if (0x18 < uVar18) {
      FUN_1400020a8(*(undefined8 *)param_2);
    }
    *(undefined2 *)(param_2 + 6) = 8;
    param_2[1] = 0;
    if (param_3 == 0) {
      *param_2 = 0;
      uVar16 = 0;
    }
    else {
      uVar16 = *(uint *)(param_3 + 0xc);
      *param_2 = uVar16;
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      uVar16 = *(uint *)(lVar19 + 0x10);
      if (*(uint *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        uVar20 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar20);
        }
        LOCK();
        uVar16 = *(uint *)(lVar19 + 0x10);
        bVar21 = uVar16 == 0;
        if (bVar21) {
          *(uint *)(lVar19 + 0x10) = uVar20;
          uVar16 = 0;
        }
        UNLOCK();
        if (bVar21) {
          uVar16 = uVar20;
        }
      }
    }
    param_2[1] = uVar16;
  }
  else {
    lVar12 = FUN_14069ec50();
    lVar19 = *(longlong *)(param_3 + 0x10);
    if ((*(int *)(lVar19 + 0x38) < *(int *)(lVar12 + 0x38)) ||
       (lVar19 = *(longlong *)(lVar19 + 0x30),
       *(longlong *)(lVar19 + (longlong)*(int *)(lVar12 + 0x38) * 8) != lVar12 + 0x30))
    goto LAB_1418a39ca;
    lVar19 = FUN_1488e5d12(param_3,*(undefined4 *)(param_4 + 4));
    if (lVar19 == 0) goto LAB_1418a3a5b;
    cVar1 = *(char *)(param_1 + 0x28);
    if (cVar1 != '\x02') {
      if (cVar1 != '\x01') {
        if (cVar1 != '\0') goto LAB_1418a3a5b;
        pdVar15 = (double *)(lVar19 + 0x3e0);
        if ((byte)param_2[8] == 4) goto LAB_1418a3d6a;
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)param_2[8] * 0x120));
        if (pcVar2 != (code *)0x0) {
          puVar17 = param_2;
          if (0x18 < (ushort)param_2[6]) {
            puVar17 = *(uint **)param_2;
          }
          (*pcVar2)(puVar17);
        }
        if (0x18 < (ushort)param_2[6]) {
          FUN_1400020a8(*(undefined8 *)param_2);
        }
        local_78 = *(double *)(lVar19 + 0x3f0);
        dVar5 = *pdVar15;
        dVar6 = *(double *)(lVar19 + 1000);
        *(undefined2 *)(param_2 + 6) = 0x18;
        local_88._0_4_ = SUB84(dVar5,0);
        local_88._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
        uStack_80._0_4_ = SUB84(dVar6,0);
        uStack_80._4_4_ = (uint)((ulonglong)dVar6 >> 0x20);
        *param_2 = (uint)local_88;
        param_2[1] = local_88._4_4_;
        param_2[2] = (uint)uStack_80;
        param_2[3] = uStack_80._4_4_;
        *(double *)(param_2 + 4) = local_78;
        local_88 = dVar5;
        uStack_80 = dVar6;
        goto LAB_1418a3dc8;
      }
      pdVar15 = (double *)(lVar19 + 0x410);
      if ((byte)param_2[8] != 5) {
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)param_2[8] * 0x120));
        if (pcVar2 != (code *)0x0) {
          puVar17 = param_2;
          if (0x18 < (ushort)param_2[6]) {
            puVar17 = *(uint **)param_2;
          }
          (*pcVar2)(puVar17);
        }
        if (0x18 < (ushort)param_2[6]) {
          FUN_1400020a8(*(undefined8 *)param_2);
        }
        local_78 = *(double *)(lVar19 + 0x420);
        dVar5 = *pdVar15;
        dVar6 = *(double *)(lVar19 + 0x418);
        *(undefined2 *)(param_2 + 6) = 0x18;
        local_88._0_4_ = SUB84(dVar5,0);
        local_88._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
        uStack_80._0_4_ = SUB84(dVar6,0);
        uStack_80._4_4_ = (uint)((ulonglong)dVar6 >> 0x20);
        *param_2 = (uint)local_88;
        param_2[1] = local_88._4_4_;
        param_2[2] = (uint)uStack_80;
        param_2[3] = uStack_80._4_4_;
        *(double *)(param_2 + 4) = local_78;
        local_88 = dVar5;
        uStack_80 = dVar6;
        goto LAB_1418a3cfb;
      }
LAB_1418a3d6a:
      *(double *)(param_2 + 4) = pdVar15[2];
      uVar16 = *(uint *)pdVar15;
      uVar20 = *(uint *)((longlong)pdVar15 + 4);
      uVar22 = *(uint *)(pdVar15 + 1);
      uVar23 = *(uint *)((longlong)pdVar15 + 0xc);
      goto LAB_1418a3c2c;
    }
    param_3 = FUN_1488e1a76(lVar19,*(undefined1 *)(param_1 + 0x29));
    if ((byte)param_2[8] == 7) goto LAB_1418a3d38;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)param_2[8] * 0x120));
    if (pcVar2 != (code *)0x0) {
      puVar17 = param_2;
      if (0x18 < (ushort)param_2[6]) {
        puVar17 = *(uint **)param_2;
      }
      (*pcVar2)(puVar17);
    }
    if (0x18 < (ushort)param_2[6]) {
      FUN_1400020a8(*(undefined8 *)param_2);
    }
    *(undefined2 *)(param_2 + 6) = 8;
    param_2[0] = 0;
    param_2[1] = 0;
    FUN_14485c47a(param_2,param_3);
  }
  *(undefined1 *)(param_2 + 8) = 7;
LAB_1418a3a5b:
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418a3f0a FUN_1418a3f0a body=93 status=ok
// SIG undefined FUN_1418a3f0a(void)

void FUN_1418a3f0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b420430;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418a3f68 FUN_1418a3f68 body=29 status=ok
// SIG undefined FUN_1418a3f68(void)

undefined8 FUN_1418a3f68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a3f86 FUN_1418a3f86 body=68 status=ok
// SIG undefined FUN_1418a3f86(void)

undefined8 * FUN_1418a3f86(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b420960;
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



// FUNCTION 1418a3fca FUN_1418a3fca body=118 status=ok
// SIG undefined FUN_1418a3fca(void)

void FUN_1418a3fca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b421670;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b420960;
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



// FUNCTION 1418a4040 FUN_1418a4040 body=29 status=ok
// SIG undefined FUN_1418a4040(void)

undefined8 FUN_1418a4040(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a405e FUN_1418a405e body=68 status=ok
// SIG undefined FUN_1418a405e(void)

undefined8 * FUN_1418a405e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b420c20;
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



// FUNCTION 1418a40a2 FUN_1418a40a2 body=118 status=ok
// SIG undefined FUN_1418a40a2(void)

void FUN_1418a40a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b420b80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b420c20;
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



// FUNCTION 1418a4118 FUN_1418a4118 body=29 status=ok
// SIG undefined FUN_1418a4118(void)

undefined8 FUN_1418a4118(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a4136 FUN_1418a4136 body=68 status=ok
// SIG undefined FUN_1418a4136(void)

undefined8 * FUN_1418a4136(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b420d60;
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



// FUNCTION 1418a417a FUN_1418a417a body=93 status=ok
// SIG undefined FUN_1418a417a(void)

void FUN_1418a417a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b421010;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418a41d8 FUN_1418a41d8 body=93 status=ok
// SIG undefined FUN_1418a41d8(void)

void FUN_1418a41d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b420b80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4210f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418a4236 FUN_1418a4236 body=353 status=ok
// SIG undefined FUN_1418a4236(void)

void FUN_1418a4236(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418a42bb;
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
LAB_1418a42bb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418a4398 FUN_1418a4398 body=353 status=ok
// SIG undefined FUN_1418a4398(void)

void FUN_1418a4398(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418a441d;
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
LAB_1418a441d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418a44fa FUN_1418a44fa body=29 status=ok
// SIG undefined FUN_1418a44fa(void)

undefined8 FUN_1418a44fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a4518 FUN_1418a4518 body=169 status=ok
// SIG undefined FUN_1418a4518(void)

void FUN_1418a4518(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14082b622(param_1 + 0x3a0);
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  lVar3 = *(longlong *)(param_1 + 0x4b0);
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0x4b8) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x4b8) * 0x18;
    do {
      plVar1 = (longlong *)FUN_1412ba9fc(lVar3);
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
    uVar2 = *(undefined4 *)(param_1 + 0x4b8);
    lVar3 = *(longlong *)(param_1 + 0x4b0);
  }
  FUN_14068a6c6(lVar3,uVar2);
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  if (*(int *)(param_1 + 0x4bc) != 0) {
    FUN_1488e537c(param_1 + 0x4b0,0);
  }
  FUN_1401c3216(param_1,param_2);
  return;
}



// FUNCTION 1418a45c2 thunk_FUN_140b3d268 body=5 status=ok
// SIG undefined thunk_FUN_140b3d268(void)

void thunk_FUN_140b3d268(longlong param_1,double *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  float fVar7;
  double dVar8;
  
  *(undefined8 *)(param_1 + 0x11a8) = DAT_14c872be0;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    *(double *)(param_1 + 0x1178) = param_2[2];
    dVar8 = param_2[1];
    *(double *)(param_1 + 0x1168) = *param_2;
    *(double *)(param_1 + 0x1170) = dVar8;
    bVar3 = *(char *)(param_1 + 0x1160) + 1;
    bVar6 = 1;
    if (1 < bVar3) {
      bVar6 = bVar3;
    }
    *(byte *)(param_1 + 0x1160) = bVar6;
  }
  if (*(longlong *)(param_1 + 0xe38) != 0) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0xe38) + 0x180);
    *pbVar1 = *pbVar1 & 0xf7;
    *(undefined4 *)(*(longlong *)(param_1 + 0xe38) + 0x178) = 0;
    lVar4 = *(longlong *)(param_1 + 0xe38);
    *(double *)(lVar4 + 0x138) = param_2[2];
    dVar8 = param_2[1];
    *(double *)(lVar4 + 0x128) = *param_2;
    *(double *)(lVar4 + 0x130) = dVar8;
    lVar4 = *(longlong *)(param_1 + 0xe38);
    if (*(float *)(lVar4 + 0x4f4) <= 0.0001) {
      *(float *)(lVar4 + 0x4f4) =
           (float)SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
      lVar4 = *(longlong *)(param_1 + 0xe38);
    }
    fVar7 = *(float *)(lVar4 + 0x17c);
    if (0.0 < fVar7) {
      dVar8 = SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
      if ((double)fVar7 <= dVar8) {
        fVar7 = (float)dVar8;
      }
      *(float *)(lVar4 + 0x17c) = fVar7;
      lVar4 = *(longlong *)(param_1 + 0xe38);
    }
    if (lVar4 != 0) {
      lVar5 = FUN_140b3d448();
      lVar4 = *(longlong *)(param_1 + 0xe38);
      if ((((lVar4 != 0) && (lVar5 != 0)) && (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 != 0)) &&
         ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)))) {
        fVar7 = (float)SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1])
        ;
        if (fVar7 <= *(float *)(lVar4 + 0x17c)) {
          fVar7 = *(float *)(lVar4 + 0x17c);
        }
        *(float *)(lVar4 + 0x524) = fVar7;
      }
    }
  }
  return;
}



// FUNCTION 1418a45c8 FUN_1418a45c8 body=360 status=ok
// SIG undefined FUN_1418a45c8(void)

void FUN_1418a45c8(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448ef896();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb89e30) {
    FUN_144b3d300(&DAT_14cb89e30);
    if (DAT_14cb89e30 == -1) {
      FUN_1446f470e(&local_28,L"HealthState",1);
      uVar1 = FUN_140d12354();
      FUN_140d12354();
      DAT_14cb89e28 = FUN_140f1fabf(uVar1,local_28);
      _Init_thread_footer(&DAT_14cb89e30);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998000) {
    FUN_144b3d300(&DAT_14c998000);
    if (DAT_14c998000 == -1) {
      FUN_145984cc0(&DAT_14c997f90);
      atexit((_func_5014 *)&LAB_142a64008);
      _Init_thread_footer(&DAT_14c998000);
    }
  }
  if (0 < *(int *)(DAT_14cb89e28 + 0x30)) {
    iVar2 = 0;
    do {
      FUN_1448ef1fe(&DAT_14c997f90,param_1,*(int *)(DAT_14cb89e28 + 0x40) + iVar2,
                    *(undefined1 *)(param_1 + 0x938));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(DAT_14cb89e28 + 0x30));
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a4738 FUN_1418a4738 body=308 status=ok
// SIG undefined FUN_1418a4738(void)

void FUN_1418a4738(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406c9d00(param_1 + 0x88,&local_38);
  if (local_30 == 0) {
    uVar5 = FUN_140927942();
    local_30 = FUN_14477b664(uVar5);
  }
  if (local_28 == (longlong *)0x0) {
    if ((((local_30 == 0) || (local_38 == 0)) ||
        (plVar1 = *(longlong **)(local_30 + 0xb8), plVar1 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) goto LAB_1418a47dd;
    uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
    local_28 = (longlong *)FUN_144aff482(uVar5,&local_38);
    if (local_28 == (longlong *)0x0) goto LAB_1418a47dd;
  }
  plVar1 = local_28;
  lVar3 = (**(code **)(*local_28 + 8))(local_28);
  lVar4 = FUN_140a4bdd4();
  if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
       lVar4 + 0x30 && ((char)param_1[0x1c1] == '\0')))) {
    *(undefined1 *)(param_1 + 0x1c1) = 1;
    param_1[0x1c2] = (longlong)plVar1;
    (**(code **)(*param_1 + 0x680))(param_1);
    FUN_14472eae2(param_1,0x4000000);
  }
LAB_1418a47dd:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418a486e FUN_1418a486e body=39 status=ok
// SIG undefined FUN_1418a486e(void)

bool FUN_1418a486e(longlong param_1)

{
  FUN_1405f85e0(param_1 + 0x440);
  return (byte)(*(char *)(param_1 + 0x541) - 3U) < 2;
}



// FUNCTION 1418a4896 FUN_1418a4896 body=90 status=ok
// SIG undefined FUN_1418a4896(void)

void FUN_1418a4896(longlong *param_1)

{
  if (((*(byte *)(param_1 + 0x1db) & 6) == 4) &&
     ((((char)param_1[0x2f] == '\x03' || ((*(byte *)(param_1 + 0xc) & 1) != 0)) ||
      ((*(byte *)((longlong)param_1 + 0x61) & 1) != 0)))) {
    *(undefined1 *)((longlong)param_1 + 0x1152) = 1;
    (**(code **)(*param_1 + 0x6c0))(param_1);
  }
  if ((*(byte *)(param_1 + 0x69) & 2) == 0) {
    FUN_1457be1ae(param_1);
    return;
  }
  return;
}



// FUNCTION 1418a48f0 FUN_1418a48f0 body=374 status=ok
// SIG undefined FUN_1418a48f0(void)

void FUN_1418a48f0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98 [3];
  longlong local_80;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = *(longlong *)(param_1 + 0xa60);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x168);
  }
  local_40 = 0;
  lStack_38 = 0;
  uVar2 = FUN_140927942();
  lVar3 = FUN_14477b664(uVar2);
  lVar4 = FUN_140927942();
  uVar2 = FUN_140927942();
  FUN_1402d1bfa(local_98,uVar2,lVar6);
  if (local_98[0] != 0) {
    lStack_38 = 0;
  }
  local_48 = local_98[0];
  lVar5 = FUN_140927942();
  if (lVar4 != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
      goto LAB_1418a49a8;
    }
    if ((*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_1418a49a8;
  }
  lVar5 = lVar4;
LAB_1418a49a8:
  if (lVar3 != lVar5) {
    lStack_38 = 0;
  }
  uVar2 = FUN_14477b664(lVar5);
  local_40 = FUN_14477b664(uVar2);
  if (local_40 != 0 && local_98[0] != 0) {
    lStack_38 = lVar6;
  }
  FUN_14031575e(local_98,&local_48);
  FUN_14042b1ec(param_2,local_98,1);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a4a68 FUN_1418a4a68 body=193 status=ok
// SIG undefined FUN_1418a4a68(void)

void FUN_1418a4a68(longlong param_1,longlong param_2,undefined4 param_3)

{
  float fVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_78 [36];
  undefined1 local_54 [12];
  undefined8 local_48;
  ulonglong local_40;
  float fVar2;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + -0x238) == '\x03') {
    fVar1 = *(float *)(param_2 + 0x84);
    fVar2 = *(float *)(param_2 + 0x84);
    local_48 = *(undefined8 *)(param_2 + 0x68);
    FUN_1401533ba(local_54,&local_48,1);
    FUN_140bfca4e(param_1 + 0x1000,local_54,param_2 + 0x78,
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),fVar2 <= 0.0 && fVar1 != 0.0) &
                  0xffffffff);
  }
  FUN_1449bd2b2(param_1 + 0x1a0,param_2,param_3);
  FUN_1409d1ca6(param_1 + 0x3c0,param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a4b2a FUN_1418a4b2a body=624 status=ok
// SIG undefined FUN_1418a4b2a(void)

undefined1 FUN_1418a4b2a(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(char *)(param_1 + 0x178) == '\x03') || ((*(byte *)(param_1 + 0x60) & 1) != 0)) {
    if (param_2 == 0) {
LAB_1418a4bab:
      uVar1 = *param_3;
      goto LAB_1418a4bad;
    }
    if (param_2 != param_1) {
      if (DAT_14cb56270 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_148630fef;
        local_60 = FUN_1464b6a91;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar3 = (longlong *)FUN_144718840(param_2,DAT_14cb56270);
      if (DAT_14cacf818 == 0) {
        local_50 = &local_30;
        local_30 = FUN_141030f22;
        local_40 = FUN_14081d0ea;
        local_48 = (code *)&LAB_1463b216c;
        local_58 = &LAB_1479977e3;
        local_60 = (code *)&LAB_1463b2171;
        local_68 = L"Game";
        local_70 = 0;
        local_78 = 0x10000004;
        local_80 = 0x10;
        local_88 = 0x750;
        FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
      }
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cacf818 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) != DAT_14cacf818 + 0x30)) {
        if (plVar3 == (longlong *)0x0) goto LAB_1418a4bab;
        if ((param_3[1] == '\x01') &&
           ((param_3[4] != '\0' || (cVar2 = (**(code **)(*plVar3 + 0x40))(plVar3), cVar2 == '\0'))))
        {
          cVar2 = (**(code **)(*plVar3 + 0xa0))(plVar3,param_1);
          goto joined_r0x0001418a4c1a;
        }
      }
      else if (param_3[5] == '\x01') {
        if (plVar3 == (longlong *)0x0) goto LAB_1418a4d81;
        cVar2 = (**(code **)(*plVar3 + 0xa0))(plVar3,param_1);
joined_r0x0001418a4c1a:
        if (cVar2 != '\0') {
LAB_1418a4d81:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
        }
      }
    }
  }
  uVar1 = 0;
LAB_1418a4bad:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a4db6 FUN_1418a4db6 body=1135 status=ok
// SIG undefined FUN_1418a4db6(void)

void FUN_1418a4db6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((((*(byte *)(param_1 + 0xed8) & 1) != 0) ||
       (lVar11 = *(longlong *)(param_1 + 0xe10), lVar11 == 0)) ||
      (*(longlong *)(lVar11 + 0x2e8) == 0)) || (0xfffffffd < *(int *)(lVar11 + 0x2f0) - 1U))
  goto LAB_1418a50b4;
  FUN_1405fab15(&local_70);
  lVar11 = param_1;
  if ((*(byte *)(*(longlong *)(param_1 + 0xe10) + 0x286) & 1) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x1b0);
  }
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    lVar11 = param_1;
  }
  if (0.0 < *(float *)(param_1 + 0xe40)) {
    *(float *)(local_70 + 8) = *(float *)(param_1 + 0xe40);
    *(undefined1 *)(local_70 + 0xc) = 1;
  }
  else if (*(char *)(local_70 + 0xc) == '\x01') {
    *(undefined1 *)(local_70 + 0xc) = 0;
  }
  uVar6 = (**(code **)(*(longlong *)(param_1 + 0x3c8) + 0x18))(param_1 + 0x3c8);
  *(undefined8 *)(local_70 + 0x10) = uVar6;
  if (local_70 + 0x18 != param_1 + 0xe78) {
    lVar9 = param_1 + 0xe78;
    if (*(longlong *)(param_1 + 0xea8) != 0) {
      lVar9 = *(longlong *)(param_1 + 0xea8);
    }
    FUN_1400709d4(local_70 + 0x18,lVar9,*(undefined4 *)(param_1 + 0xeb0),
                  *(undefined4 *)(local_70 + 0x54));
  }
  lVar9 = local_70;
  if (param_1 == 0) {
    *(undefined4 *)(local_70 + 0x1d8) = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_70 + 0x1d8) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar5 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar5 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar5 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar10;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar5 = iVar10;
      }
    }
  }
  *(int *)(lVar9 + 0x1dc) = iVar5;
  if (lVar11 != param_1) {
    lVar9 = *(longlong *)(param_1 + 0x1c8);
    if (lVar9 == 0) {
      puVar8 = &DAT_14c8464e0;
      uVar6 = DAT_14c8464f0;
    }
    else {
      puVar8 = (undefined8 *)(lVar9 + 0x260);
      uVar6 = *(undefined8 *)(lVar9 + 0x270);
    }
    uVar7 = puVar8[1];
    *(undefined8 *)(local_70 + 0x1e0) = *puVar8;
    *(undefined8 *)(local_70 + 0x1e8) = uVar7;
    *(undefined8 *)(local_70 + 0x1f0) = uVar6;
    *(undefined1 *)(local_70 + 0x1f8) = 1;
  }
  if (0.0 < *(float *)(param_1 + 0xe44)) {
    *(float *)(local_70 + 0x78) = *(float *)(param_1 + 0xe44);
    *(undefined1 *)(local_70 + 0x7c) = 1;
  }
  else if (*(char *)(local_70 + 0x7c) == '\x01') {
    *(undefined1 *)(local_70 + 0x7c) = 0;
  }
  fVar3 = *(float *)(param_1 + 0xe48);
  if ((fVar3 != 0.0) || (NAN(fVar3))) {
    *(float *)(local_70 + 0x1c0) = fVar3;
    *(undefined1 *)(local_70 + 0x1c4) = 1;
  }
  else if (*(char *)(local_70 + 0x1c4) == '\x01') {
    *(undefined1 *)(local_70 + 0x1c4) = 0;
  }
  if ((*(longlong *)(local_70 + 0x290) != *(longlong *)(param_1 + 0xf10)) ||
     (*(int *)(local_70 + 0x298) != *(int *)(param_1 + 0xf18))) {
    *(longlong *)(local_70 + 0x290) = *(longlong *)(param_1 + 0xf10);
    *(undefined4 *)(local_70 + 0x298) = *(undefined4 *)(param_1 + 0xf18);
    *(undefined8 *)(local_70 + 0x2a0) = 0;
  }
  FUN_1403e0f94(local_70 + 0x280,param_1 + 0xe50);
  lVar9 = local_70;
  (**(code **)(*(longlong *)(local_70 + 0x58) + 0x20))(local_70 + 0x58,0);
  *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)(param_1 + 0xec0);
  FUN_1406022fe(lVar9 + 0x68,param_1 + 0xec8);
  if ((*(char *)(param_1 + 0x1118) == '\0') && (*(char *)(param_1 + 0x1119) != '\x01')) {
LAB_1418a501d:
    uVar6 = 0;
  }
  else {
    lVar9 = param_1 + 0x10d0;
    lVar12 = FUN_14485cccc(lVar9);
    if ((lVar12 == 0) || (lVar12 = FUN_14485cccc(lVar9), (*(byte *)(lVar12 + 0x62) & 4) == 0))
    goto LAB_1418a501d;
    memcpy((void *)(local_70 + 0xa0),(void *)(param_1 + 0x1018),0x100);
    uVar6 = FUN_14485cccc(lVar9);
  }
  local_80 = local_70;
  local_78 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
  }
  local_60 = *(undefined8 *)(*(longlong *)(param_1 + 0xe10) + 0x2e8);
  FUN_1446dcdd4(local_58);
  if (DAT_14cb77e00 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_144837462(DAT_14cb77e00,local_58);
  }
  local_88 = 0;
  FUN_1405fd19a(lVar11,uVar7,uVar6,&local_80);
  if (local_40 != 0) {
    FUN_1400020a8();
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
LAB_1418a50b4:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418a5226 FUN_1418a5226 body=405 status=ok
// SIG undefined FUN_1418a5226(void)

void FUN_1418a5226(longlong *param_1,code *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != (code *)0x0) {
    local_28 = param_2;
    uVar2 = FUN_14477b072(param_1,DAT_14cac9ae0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_28);
    if (((byte)param_2[0x62] & 4) != 0) {
      if (DAT_14cb56270 == 0) {
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148630fef;
        local_50 = FUN_1464b6a91;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        local_40 = &local_28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      lVar3 = FUN_144718840(param_2,DAT_14cb56270);
      if ((lVar3 != 0) && ((code *)param_1[0x36] != param_2)) {
        uVar4 = 0xdd8;
        if ((param_1[0x176] != 0) && (((short)param_1[0x177] < 0 || (param_1[0x178] != 0)))) {
          uVar1 = FUN_14486116a(param_1 + 0x172,param_2);
          if (2 < uVar1) goto LAB_1418a5277;
          uVar4 = (ulonglong)(uVar1 * -0x10 + 0xde8);
        }
        local_28 = param_2;
        FUN_1447cd2ec((longlong)param_1 + uVar4);
      }
    }
  }
LAB_1418a5277:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418a5434 FUN_1418a5434 body=1323 status=ok
// SIG undefined FUN_1418a5434(void)

void FUN_1418a5434(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14cb89e4c == DAT_14c948034) && (DAT_14cb89e48 != DAT_14c948030)) {
    FUN_14011791e(&local_78,DAT_14cb89e48,DAT_14cb89e4c >> 0x20);
    DAT_14cb89e4c = CONCAT44(uStack_74,local_78);
  }
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb89e4c);
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  local_78 = 0x447a0000;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0xf00000d0;
  local_38 = 0;
  local_30 = 0x3f800000;
  if ((DAT_14cb89e64 == DAT_14c948034) && (DAT_14cb89e60 != DAT_14c948030)) {
    FUN_14011791e(&local_28,DAT_14cb89e60,DAT_14cb89e64 >> 0x20);
    DAT_14cb89e64 = local_28;
  }
  uVar1 = FUN_14026189c(param_2,&DAT_14cb89e64,&local_78);
  *(undefined2 *)(param_1 + 0xba) = uVar1;
  if ((DAT_14cb89e7c == DAT_14c948034) && (DAT_14cb89e78 != DAT_14c948030)) {
    FUN_14011791e(&local_78,DAT_14cb89e78,DAT_14cb89e7c >> 0x20);
    DAT_14cb89e7c = CONCAT44(uStack_74,local_78);
  }
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb89e7c);
  *(undefined2 *)(param_1 + 0xbc) = uVar1;
  if ((DAT_14cb89e94 == DAT_14c948034) && (DAT_14cb89e90 != DAT_14c948030)) {
    FUN_14011791e(&local_78,DAT_14cb89e90,DAT_14cb89e94 >> 0x20);
    DAT_14cb89e94 = CONCAT44(uStack_74,local_78);
  }
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb89e94);
  *(undefined2 *)(param_1 + 0xc0) = uVar1;
  if ((DAT_14cb89eac == DAT_14c948034) && (DAT_14cb89ea8 != DAT_14c948030)) {
    FUN_14011791e(&local_78,DAT_14cb89ea8,DAT_14cb89eac >> 0x20);
    DAT_14cb89eac = CONCAT44(uStack_74,local_78);
  }
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb89eac);
  *(undefined2 *)(param_1 + 0xc2) = uVar1;
  if ((DAT_14cb89ec4 == DAT_14c948034) && (DAT_14cb89ec0 != DAT_14c948030)) {
    FUN_14011791e(&local_78,DAT_14cb89ec0,DAT_14cb89ec4 >> 0x20);
    DAT_14cb89ec4 = CONCAT44(uStack_74,local_78);
  }
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb89ec4);
  *(undefined2 *)(param_1 + 0x27a) = uVar1;
  if ((DAT_14cb89edc == DAT_14c948034) && (DAT_14cb89ed8 != DAT_14c948030)) {
    FUN_14011791e(&local_78,DAT_14cb89ed8,DAT_14cb89edc >> 0x20);
    DAT_14cb89edc = CONCAT44(uStack_74,local_78);
  }
  uVar1 = FUN_14026189c(param_2,&DAT_14cb89edc,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x27e) = uVar1;
  if ((DAT_14cb89ef4 == DAT_14c948034) && (DAT_14cb89ef0 != DAT_14c948030)) {
    FUN_14011791e(&local_78,DAT_14cb89ef0,DAT_14cb89ef4 >> 0x20);
    DAT_14cb89ef4 = CONCAT44(uStack_74,local_78);
  }
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb89ef4);
  *(undefined2 *)(param_1 + 0x280) = uVar1;
  if ((DAT_14cb89f0c == DAT_14c948034) && (DAT_14cb89f08 != DAT_14c948030)) {
    FUN_14011791e(&local_78,DAT_14cb89f08,DAT_14cb89f0c >> 0x20);
    DAT_14cb89f0c = CONCAT44(uStack_74,local_78);
  }
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb89f0c);
  *(undefined2 *)(param_1 + 0x282) = uVar1;
  if ((DAT_14cb89f24 == DAT_14c948034) && (DAT_14cb89f20 != DAT_14c948030)) {
    FUN_14011791e(&local_78,DAT_14cb89f20,DAT_14cb89f24 >> 0x20);
    DAT_14cb89f24 = CONCAT44(uStack_74,local_78);
  }
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb89f24);
  *(undefined2 *)(param_1 + 0x284) = uVar1;
  if ((DAT_14cb89f3c == DAT_14c948034) && (DAT_14cb89f38 != DAT_14c948030)) {
    FUN_14011791e(&local_78,DAT_14cb89f38,DAT_14cb89f3c >> 0x20);
    DAT_14cb89f3c = CONCAT44(uStack_74,local_78);
  }
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb89f3c);
  *(undefined2 *)(param_1 + 0x288) = uVar1;
  if ((DAT_14cb89f54 == DAT_14c948034) && (DAT_14cb89f50 != DAT_14c948030)) {
    FUN_14011791e(&local_78,DAT_14cb89f50,DAT_14cb89f54 >> 0x20);
    DAT_14cb89f54 = CONCAT44(uStack_74,local_78);
  }
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb89f54);
  *(undefined2 *)(param_1 + 0x28a) = uVar1;
  if ((DAT_14cb89f6c == DAT_14c948034) && (DAT_14cb89f68 != DAT_14c948030)) {
    FUN_14011791e(&local_78,DAT_14cb89f68,DAT_14cb89f6c >> 0x20);
    DAT_14cb89f6c = CONCAT44(uStack_74,local_78);
  }
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb89f6c);
  *(undefined2 *)(param_1 + 0x302) = uVar1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a5960 FUN_1418a5960 body=459 status=ok
// SIG undefined FUN_1418a5960(void)

void FUN_1418a5960(float *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auStack_98 [40];
  char local_70;
  longlong *local_60;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0.0 < *param_1) {
    *(float *)(param_2 + 0xe40) = *param_1;
  }
  if (0.0 < param_1[0x18]) {
    *(float *)(param_2 + 0xe44) = param_1[0x18];
  }
  local_70 = '\0';
  local_48[0] = 0;
  fVar4 = (float)FUN_140a8b8c6(param_1 + 0x1a);
  FUN_1448173f8(local_48);
  if ((local_70 == '\x03') && (local_60 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    *(float *)(param_2 + 0xe48) = fVar4;
  }
  lVar2 = FUN_1405faa04(param_1 + 2);
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x3c8) + 0x28))(param_2 + 0x3c8);
  }
  if (0 < (int)param_1[0x16]) {
    pfVar3 = *(float **)(param_1 + 0x14);
    if (*(float **)(param_1 + 0x14) == (float *)0x0) {
      pfVar3 = param_1 + 8;
    }
    if ((*(longlong *)pfVar3 != 0) && ((int)pfVar3[2] - 1U < 0xfffffffe)) {
      FUN_14118c70e(param_2 + 0xe78);
    }
  }
  if ((*(longlong *)(param_1 + 0x2e) != 0) && ((longlong)(int)param_1[0x32] != 0)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar2) != 0) {
        (**(code **)(*(longlong *)(param_2 + 0xeb8) + 0x20))(param_2 + 0xeb8,0);
        *(undefined8 *)(param_2 + 0xec0) = *(undefined8 *)(param_1 + 0x2e);
        FUN_1406022fe(param_2 + 0xec8,param_1 + 0x30);
        break;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)(int)param_1[0x32] * 8 != lVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418a5b2c FUN_1418a5b2c body=231 status=ok
// SIG undefined FUN_1418a5b2c(void)

ulonglong FUN_1418a5b2c(float *param_1)

{
  int *piVar1;
  longlong lVar2;
  float *pfVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  float fVar5;
  undefined1 auStack_78 [32];
  char local_58 [16];
  longlong *local_48;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((*param_1 <= 0.0) && (param_1[0x18] <= 0.0)) &&
     (lVar2 = FUN_1405faa04(param_1 + 2), lVar2 == 0)) {
    if (0 < (int)param_1[0x16]) {
      pfVar3 = param_1 + 8;
      if (*(float **)(param_1 + 0x14) != (float *)0x0) {
        pfVar3 = *(float **)(param_1 + 0x14);
      }
      if ((*(longlong *)pfVar3 != 0) && ((int)pfVar3[2] - 1U < 0xfffffffe)) goto LAB_1418a5bc9;
    }
    local_58[0] = '\0';
    local_30[0] = 0;
    fVar5 = (float)FUN_140a8b8c6(param_1 + 0x1a,local_58);
    uVar4 = (ulonglong)(-(uint)(fVar5 != 0.0) & 1);
    FUN_1448173f8(local_30);
    if ((local_58[0] == '\x03') && (local_48 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
LAB_1418a5bc9:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1418a5c14 FUN_1418a5c14 body=143 status=ok
// SIG undefined FUN_1418a5c14(void)

longlong FUN_1418a5c14(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if ((char)param_1[7] != '\0') {
    return 0;
  }
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140c52150();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  if (param_1[2] != 0) {
    return param_1[2];
  }
  if (lVar4 == 0) {
    return 0;
  }
  if (*param_1 != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,param_1);
    }
    param_1[2] = lVar4;
    return lVar4;
  }
  return 0;
}



// FUNCTION 1418a5ca4 FUN_1418a5ca4 body=22 status=ok
// SIG undefined FUN_1418a5ca4(void)

undefined8 FUN_1418a5ca4(int *param_1)

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
  
  plVar4 = DAT_14cb8a358;
  if (DAT_14cb8a358 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb8a358 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8a358 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb8a358[0x3a] <= *(int *)((longlong)DAT_14cb8a358 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb8a358 + 0x300))(DAT_14cb8a358);
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



// FUNCTION 1418a5cba FUN_1418a5cba body=1159 status=ok
// SIG undefined FUN_1418a5cba(void)

void FUN_1418a5cba(undefined4 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  wchar_t wVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  byte *pbVar8;
  size_t sVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  uint uVar16;
  wchar_t *_Str;
  int iVar17;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  longlong *local_130;
  longlong local_128;
  longlong *plStack_120;
  byte *local_118;
  longlong *plStack_110;
  undefined **local_108;
  uint local_fc;
  undefined *local_f8;
  longlong *local_f0;
  undefined **local_78;
  undefined **local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pbVar8 = (byte *)*param_2;
  if ((pbVar8 == (byte *)0x0) || ((~*pbVar8 & 3) != 0)) {
    FUN_14009b010(param_2,3,0);
    pbVar8 = (byte *)*param_2;
    if (pbVar8 == (byte *)0x0) goto LAB_1418a5d61;
  }
  if ((~*pbVar8 & 3) == 0) {
    lVar4 = *(longlong *)(pbVar8 + 8);
    local_f0 = &local_128;
    local_128 = CONCAT44(local_128._4_4_,1);
    local_f8 = &DAT_14cb8a0e0;
    FUN_14049fede(lVar4 + 0x18,&local_118,&local_f8,0);
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x28 + (longlong)(int)local_118 * 0x40);
    if (lVar4 != 0) {
      FUN_1404a8912(lVar4,*param_1);
    }
  }
LAB_1418a5d61:
  if (param_1[4] != 0) {
    local_118 = (byte *)0x0;
    plStack_110 = (longlong *)0x0;
    FUN_14009b010(&local_118,2,0);
    puVar11 = &DAT_14c9a1270;
    if ((local_118 != (byte *)0x0) && ((*local_118 & 2) != 0)) {
      puVar11 = *(undefined8 **)(local_118 + 8);
    }
    iVar17 = param_1[4];
    if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar17);
    }
    local_130 = param_2;
    if (*(int *)((longlong)puVar11 + 0x14) < iVar17) {
      FUN_14009b4be();
      iVar17 = param_1[4];
    }
    if (iVar17 != 0) {
      puVar11 = *(undefined8 **)(param_1 + 2);
      puVar13 = puVar11 + (longlong)iVar17 * 2;
      do {
        local_128 = 0;
        plStack_120 = (longlong *)0x0;
        FUN_14009b010(&local_128,1,0);
        _Str = L"";
        if (*(int *)(puVar11 + 1) != 0) {
          _Str = (wchar_t *)*puVar11;
        }
        local_78 = (undefined **)0x0;
        if (_Str == (wchar_t *)0x0) {
          local_70 = (undefined **)0x0;
          local_68 = 0;
        }
        else {
          sVar9 = wcslen(_Str);
          local_fc = 0;
          local_108 = (undefined **)CONCAT44(local_108._4_4_,0x7fffffff);
          uVar12 = sVar9 & 0xffffffff;
          pwVar15 = _Str;
          do {
            iVar17 = (int)uVar12;
            if (iVar17 < 1) {
LAB_1418a5e79:
              local_68 = local_fc;
              uVar10 = local_fc + 1;
              if (uVar10 < 0x81) goto LAB_1418a5e92;
              FUN_1446efa72(&local_78,0,uVar10,1);
              local_108 = local_78;
              goto LAB_1418a5e94;
            }
            wVar3 = *pwVar15;
            uVar10 = (uint)(ushort)wVar3;
            pwVar14 = pwVar15 + 1;
            uVar16 = iVar17 - 1;
            if ((wVar3 & 0xfc00U) == 0xd800) {
              if (iVar17 == 1) {
                cVar7 = FUN_140024707(uVar10,&local_fc);
                if (cVar7 != '\0') goto LAB_1418a5e79;
                break;
              }
              if (((ushort)*pwVar14 & 0xfc00) == 0xdc00) {
                uVar10 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar14 + 0xfca02400;
                pwVar14 = pwVar15 + 2;
                uVar16 = iVar17 - 2;
              }
            }
            cVar7 = FUN_140024707(uVar10,&local_fc,&local_108);
            uVar12 = (ulonglong)uVar16;
            pwVar15 = pwVar14;
          } while (cVar7 != '\0');
          local_68 = 0xffffffff;
          uVar10 = 0;
LAB_1418a5e92:
          local_108 = (undefined **)0x0;
LAB_1418a5e94:
          if (local_108 == (undefined **)0x0) {
            local_108 = &local_f8;
          }
          iVar17 = (int)sVar9 + 1;
          local_fc = uVar10;
          local_70 = local_108;
          do {
            if (iVar17 < 1) break;
            wVar3 = *_Str;
            uVar10 = (uint)(ushort)wVar3;
            pwVar15 = _Str + 1;
            iVar6 = iVar17 + -1;
            if ((wVar3 & 0xfc00U) == 0xd800) {
              if (iVar17 == 1) {
                FUN_1400247af(uVar10,&local_108);
                break;
              }
              if (((ushort)*pwVar15 & 0xfc00) == 0xdc00) {
                uVar10 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar15 + 0xfca02400;
                pwVar15 = _Str + 2;
                iVar6 = iVar17 + -2;
              }
            }
            iVar17 = iVar6;
            cVar7 = FUN_1400247af(uVar10,&local_108);
            _Str = pwVar15;
          } while (cVar7 != '\0');
        }
        if ((local_128 != 0) && ((*(byte *)(local_128 + 1) & 2) == 0)) {
          FUN_140126aca(local_128,local_70);
        }
        if (local_78 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        if (local_118 != (byte *)0x0) {
          local_138 = 0;
          FUN_140141db6(local_118,&local_128,0,0);
        }
        plVar5 = plStack_120;
        if (plStack_120 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_120 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_120)(plStack_120);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar13);
    }
    if (*local_130 != 0) {
      local_138 = 0;
      FUN_14014191c(*local_130,&DAT_14cb8a108,&local_118,0);
    }
    plVar5 = plStack_110;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_110 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_110)(plStack_110);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418a6142 FUN_1418a6142 body=281 status=ok
// SIG undefined FUN_1418a6142(void)

undefined8 * FUN_1418a6142(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
    uVar4 = FUN_140c52150();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x20) = lVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
  if (lVar6 == 0) {
    if ((lVar5 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) goto LAB_1418a61a2;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_1418a61a2;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x18));
    *(longlong *)(param_1 + 0x28) = lVar6;
    if (lVar6 == 0) goto LAB_1418a61a2;
  }
  iVar1 = *(int *)(lVar6 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(lVar6 + 0x18);
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar5 + lVar6);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x68))(plVar2,param_2);
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
LAB_1418a61a2:
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    lVar6 = *(longlong *)(param_1 + 0x30) + 8;
    do {
      FUN_140b7fa3a(param_2,lVar6);
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  return param_2;
}



// FUNCTION 1418a625b FUN_1418a625b body=35 status=ok
// SIG undefined FUN_1418a625b(void)

undefined8 FUN_1418a625b(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_140dfc108();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418a6273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1418a627e FUN_1418a627e body=156 status=ok
// SIG undefined FUN_1418a627e(void)

undefined8 * FUN_1418a627e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b023a30;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x3b);
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a631a FUN_1418a631a body=101 status=ok
// SIG undefined FUN_1418a631a(void)

void FUN_1418a631a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b422510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418a6380 FUN_1418a6380 body=101 status=ok
// SIG undefined FUN_1418a6380(void)

void FUN_1418a6380(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4225a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418a63e6 FUN_1418a63e6 body=101 status=ok
// SIG undefined FUN_1418a63e6(void)

void FUN_1418a63e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8da20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b422610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418a644c FUN_1418a644c body=245 status=ok
// SIG undefined FUN_1418a644c(void)

undefined4 * FUN_1418a644c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  puVar6 = param_2 + 8;
  if (*(undefined4 **)(param_2 + 0x14) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(param_2 + 0x14);
  }
  FUN_1400709d4(param_1 + 8,puVar6,param_2[0x16],0);
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  param_1[0x1c] = param_2[0x1c];
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x22) = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x26);
  uVar1 = param_2[0x28];
  uVar2 = param_2[0x29];
  uVar3 = param_2[0x2a];
  uVar4 = param_2[0x2b];
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = uVar5;
  param_1[0x28] = uVar1;
  param_1[0x29] = uVar2;
  param_1[0x2a] = uVar3;
  param_1[0x2b] = uVar4;
  *(undefined2 **)(param_1 + 0x2c) = &DAT_14a171d50;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
  FUN_1406022fe(param_1 + 0x30,param_2 + 0x30);
  *(undefined ***)(param_1 + 0x2c) = &PTR_FUN_14b0394b0;
  return param_1;
}



// FUNCTION 1418a6542 FUN_1418a6542 body=29 status=ok
// SIG undefined FUN_1418a6542(void)

undefined8 FUN_1418a6542(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a6560 FUN_1418a6560 body=777 status=ok
// SIG undefined FUN_1418a6560(void)

void FUN_1418a6560(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  puVar3 = (uint *)*param_2;
  lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar15 = *(longlong *)(lVar4 + 0x20);
  local_e0 = lVar15 + (ulonglong)puVar3[5];
  local_e8 = lVar15 + (ulonglong)puVar3[4];
  lVar7 = 0;
  local_100 = lVar15 + (ulonglong)puVar3[1];
  if ((ulonglong)puVar3[1] == 0xffffffff) {
    local_100 = lVar7;
  }
  local_f8 = lVar15 + (ulonglong)puVar3[2];
  if ((ulonglong)puVar3[2] == 0xffffffff) {
    local_f8 = lVar7;
  }
  local_f0 = lVar15 + (ulonglong)puVar3[3];
  if ((ulonglong)puVar3[3] == 0xffffffff) {
    local_f0 = lVar7;
  }
  lVar13 = local_e8;
  if ((ulonglong)puVar3[4] == 0xffffffff) {
    lVar13 = lVar7;
  }
  lVar12 = local_e0;
  if ((ulonglong)puVar3[5] == 0xffffffff) {
    lVar12 = lVar7;
  }
  local_108 = lVar15 + (ulonglong)puVar3[6];
  if ((ulonglong)puVar3[6] == 0xffffffff) {
    local_108 = lVar7;
  }
  lVar15 = lVar15 + (ulonglong)*puVar3;
  if ((ulonglong)*puVar3 == 0xffffffff) {
    lVar15 = lVar7;
  }
  uVar9 = (ulonglong)*(ushort *)(lVar4 + 0xe);
  if (uVar9 != 0) {
    uVar8 = 0;
    do {
      plVar5 = *(longlong **)(param_3 + 8);
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        uVar6 = *(ulonglong *)(lVar15 + uVar8 * 8);
        uVar11 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        plVar14 = plVar5 + 7;
        if ((longlong *)plVar5[8] != (longlong *)0x0) {
          plVar14 = (longlong *)plVar5[8];
        }
        iVar10 = *(int *)((longlong)plVar14 +
                         (ulonglong)((int)plVar5[9] - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
        if (iVar10 != -1) {
          do {
            puVar1 = (ulonglong *)(*plVar5 + (longlong)iVar10 * 0x18);
            if (*puVar1 == uVar6) {
              if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
                uVar18 = 0;
                uVar19 = 0;
                uVar16 = 0;
                uVar17 = 0;
                if (local_108 != 0) {
                  uVar2 = *(undefined8 *)(local_108 + uVar8 * 8);
                  uVar16 = (undefined4)uVar2;
                  uVar17 = (undefined4)((ulonglong)uVar2 >> 0x20);
                }
                if (lVar12 != 0) {
                  uVar2 = *(undefined8 *)(lVar12 + uVar8 * 8);
                  uVar18 = (undefined4)uVar2;
                  uVar19 = (undefined4)((ulonglong)uVar2 >> 0x20);
                }
                local_98 = 0;
                uVar20 = 0;
                uVar21 = 0;
                if (lVar13 != 0) {
                  uVar2 = *(undefined8 *)(lVar13 + uVar8 * 8);
                  uVar20 = (undefined4)uVar2;
                  uVar21 = (undefined4)((ulonglong)uVar2 >> 0x20);
                }
                if (local_100 != 0) {
                  local_98 = *(undefined8 *)(local_100 + uVar8 * 8);
                }
                local_a8 = 0;
                local_a0 = 0;
                if (local_f0 != 0) {
                  local_a0 = *(undefined8 *)(local_f0 + uVar8 * 8);
                }
                if (local_f8 != 0) {
                  local_a8 = *(undefined8 *)(local_f8 + uVar8 * 8);
                }
                local_c8 = puVar1[1];
                local_d8 = 0;
                uStack_d0 = 0;
                FUN_1401c9a0e(&local_a8,&local_c0,&local_d8);
                if (lVar13 != 0) {
                  *(double *)(lVar13 + uVar8 * 8) = (double)CONCAT44(uVar21,uVar20) + local_c0;
                }
                if (lVar12 != 0) {
                  *(double *)(lVar12 + uVar8 * 8) = (double)CONCAT44(uVar19,uVar18) + local_b8;
                }
                if (local_108 != 0) {
                  *(double *)(local_108 + uVar8 * 8) = (double)CONCAT44(uVar17,uVar16) + local_b0;
                }
              }
              break;
            }
            iVar10 = (int)puVar1[2];
          } while (iVar10 != -1);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar9);
  }
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418a686a FUN_1418a686a body=97 status=ok
// SIG undefined FUN_1418a686a(void)

undefined8 * FUN_1418a686a(undefined8 *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  _Src = *(void **)((longlong)param_2 + 0x100);
  if (*(void **)((longlong)param_2 + 0x100) == (void *)0x0) {
    _Src = param_2;
  }
  iVar1 = *(int *)((longlong)param_2 + 0x108);
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_144a06ca8(param_1,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
    }
  }
  return param_1;
}



// FUNCTION 1418a68cc FUN_1418a68cc body=253 status=ok
// SIG undefined FUN_1418a68cc(void)

void FUN_1418a68cc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(char *)(param_1 + 10) == '\x01') &&
      (((*(int *)(param_1 + 0x2c) != 0 || *(int *)(param_1 + 0x28) != 0) ||
       *(int *)(param_1 + 0x30) != 0) || *(int *)(param_1 + 0x34) != 0)) &&
     (lVar6 = *(longlong *)(param_1 + 0x38), lVar6 != 0)) {
    local_38 = *(longlong **)(param_1 + 0x40);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    iVar4 = *(int *)(param_1 + 0x68);
    local_40 = lVar6;
    if (0 < iVar4) {
      lVar6 = 8;
      uVar5 = 0;
      do {
        if (*(char *)(*(longlong *)(param_1 + 0x60) + lVar6) == '\0') {
          local_48 = 1;
          FUN_141149ee6(param_1,uVar5 & 0xffffffff,param_1 + 0x28,&local_40);
          iVar4 = *(int *)(param_1 + 0x68);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x38;
      } while ((longlong)uVar5 < (longlong)iVar4);
    }
    plVar3 = local_38;
    *(undefined1 *)(param_1 + 10) = 0;
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
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418a69ca FUN_1418a69ca body=1844 status=ok
// SIG undefined FUN_1418a69ca(void)

void FUN_1418a69ca(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == '\0') {
    lVar12 = *(longlong *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x68);
    lVar8 = (longlong)iVar3;
    if (lVar8 != 0) {
      lVar7 = lVar8 * 0x38;
      lVar6 = lVar12;
      do {
        if ((*(int *)(lVar6 + 0x10) == 0) || (uVar13 = *(uint *)(lVar6 + 0xc), (int)uVar13 < 0)) {
LAB_1418a6fde:
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = (longlong *)0x0;
          if ((int)uVar13 < DAT_14c9647dc) {
            puVar15 = (undefined8 *)
                      ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
            if (((puVar15 == (undefined8 *)0x0) || (*(int *)(puVar15 + 2) != *(int *)(lVar6 + 0x10))
                ) || ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)) goto LAB_1418a6fde;
            plVar14 = (longlong *)*puVar15;
          }
        }
        if (plVar14 == param_2) {
          if (lVar6 != 0) goto LAB_1418a6f96;
          break;
        }
        lVar6 = lVar6 + 0x38;
        lVar7 = lVar7 + -0x38;
      } while (lVar7 != 0);
    }
    plVar14 = (longlong *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x68) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x6c) < iVar3 + 1U) {
      FUN_140b249d6(plVar14,iVar3);
      lVar12 = *plVar14;
    }
    lVar8 = lVar8 * 0x38;
    puVar15 = (undefined8 *)(lVar12 + 0x20 + lVar8);
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15 = (undefined8 *)(lVar12 + 0x10 + lVar8);
    *puVar15 = 0;
    puVar15[1] = 0;
    *(undefined8 *)(lVar12 + lVar8) = 0;
    ((undefined8 *)(lVar12 + lVar8))[1] = 0;
    *(undefined8 *)(lVar12 + 0x30 + lVar8) = 0;
    lVar12 = *plVar14;
    puVar11 = (uint *)(lVar12 + lVar8 + 0xc);
    if (param_2 == (longlong *)0x0) {
      *puVar11 = 0;
      iVar5 = 0;
    }
    else {
      uVar13 = *(uint *)((longlong)param_2 + 0xc);
      *puVar11 = uVar13;
      if ((int)uVar13 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar5 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar5 = *(int *)(lVar6 + 0x10);
        bVar17 = iVar5 == 0;
        if (bVar17) {
          *(int *)(lVar6 + 0x10) = iVar9;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iVar5 = iVar9;
        }
      }
    }
    *(int *)(lVar12 + lVar8 + 0x10) = iVar5;
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar8) = 0xffffffff;
    lVar12 = *(longlong *)(param_1 + 0x38);
    if (lVar12 != 0) {
      plVar14 = *(longlong **)(param_1 + 0x40);
      local_58 = lVar12;
      plStack_50 = plVar14;
      if (plVar14 == (longlong *)0x0) {
        local_68 = 0;
        FUN_141149ee6(param_1,iVar3,param_1 + 0x28,&local_58);
      }
      else {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        local_68 = 0;
        FUN_141149ee6(param_1,iVar3,param_1 + 0x28);
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar14 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar14)(plVar14);
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
    FUN_1410f6e3a(param_1,param_2[0x15],1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  if ((param_2 != (longlong *)0x0) && ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) {
    iVar3 = *(int *)(param_1 + 0x68);
    if ((longlong)iVar3 != 0) {
      lVar12 = *(longlong *)(param_1 + 0x60);
      lVar8 = 0;
      do {
        iVar5 = *(int *)(lVar12 + 0x10 + lVar8);
        if ((iVar5 == 0) || (uVar13 = *(uint *)(lVar12 + 0xc + lVar8), (int)uVar13 < 0)) {
LAB_1418a6fd6:
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = (longlong *)0x0;
          if ((int)uVar13 < DAT_14c9647dc) {
            puVar15 = (undefined8 *)
                      ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
            if (((puVar15 == (undefined8 *)0x0) || (*(int *)(puVar15 + 2) != iVar5)) ||
               ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)) goto LAB_1418a6fd6;
            plVar14 = (longlong *)*puVar15;
          }
        }
        if (plVar14 == param_2) {
          uVar16 = (lVar8 >> 3) * 0x6db6db6db6db6db7;
          iVar5 = 0;
          local_58 = 0;
          plStack_50 = (longlong *)0x0;
          bVar17 = true;
          uVar13 = (uint)uVar16;
          if ((-1 < (int)uVar13) && ((int)uVar13 < iVar3)) {
            piVar2 = (int *)(lVar12 + (ulonglong)(uVar13 & 0x7fffffff) * 0x38);
            iVar3 = *piVar2;
            iVar5 = piVar2[1];
            FUN_14054c6c4(&local_58);
            FUN_1410f6d26(param_1 + 0x60,uVar16 & 0xffffffff);
            FUN_1410f6da4(param_1 + 0x60);
            bVar17 = iVar3 == -1;
          }
          goto LAB_1418a6cd4;
        }
        lVar8 = lVar8 + 0x38;
      } while ((longlong)iVar3 * 0x38 - lVar8 != 0);
    }
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar17 = true;
    iVar5 = 0;
LAB_1418a6cd4:
    if (((*(int *)(param_1 + 0xe4) != 0) && (uVar13 = *(uint *)(param_1 + 0xe0), -1 < (int)uVar13))
       && (((int)uVar13 < DAT_14c9647dc &&
           (((plVar14 = (longlong *)
                        ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
             plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(param_1 + 0xe4))) &&
            ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))))) {
      if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
        lVar12 = *plVar14;
      }
      else {
        lVar12 = 0;
      }
      lVar6 = (**(code **)(*param_2 + 0x658))(param_2);
      lVar8 = local_58;
      if (lVar12 == lVar6) {
        (**(code **)(*param_2 + 0x660))(param_2,0);
      }
      else {
        lVar12 = (longlong)(int)plStack_50;
        if (lVar12 != 0) {
          lVar6 = 0;
          do {
            uVar4 = *(undefined4 *)(lVar8 + lVar6);
            lVar7 = FUN_140ddba74(param_2,uVar4);
            if ((*(int *)(param_1 + 0xe4) == 0) ||
               (uVar13 = *(uint *)(param_1 + 0xe0), (int)uVar13 < 0)) {
LAB_1418a702d:
              lVar10 = 0;
            }
            else {
              lVar10 = 0;
              if ((int)uVar13 < DAT_14c9647dc) {
                plVar14 = (longlong *)
                          ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
                if (((plVar14 == (longlong *)0x0) || ((int)plVar14[2] != *(int *)(param_1 + 0xe4)))
                   || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) goto LAB_1418a702d;
                lVar10 = *plVar14;
              }
            }
            if (lVar7 == lVar10) {
              FUN_140ddc36e(param_2,uVar4);
            }
            lVar6 = lVar6 + 4;
          } while (lVar12 * 4 != lVar6);
        }
      }
    }
    if (((((*(int *)(param_1 + 0xf4) != 0) && (uVar13 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar13)
          ) && ((int)uVar13 < DAT_14c9647dc)) &&
        ((plVar14 = (longlong *)
                    ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
         plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(param_1 + 0xf4))))) &&
       ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
        lVar12 = *plVar14;
      }
      else {
        lVar12 = 0;
      }
      lVar6 = (**(code **)(*param_2 + 0x648))(param_2);
      lVar8 = local_58;
      if (lVar12 == lVar6) {
        (**(code **)(*param_2 + 0x650))(param_2,0);
      }
      else {
        lVar12 = (longlong)(int)plStack_50;
        if (lVar12 != 0) {
          lVar6 = 0;
          do {
            uVar4 = *(undefined4 *)(lVar8 + lVar6);
            lVar7 = FUN_140ddba2e(param_2,uVar4);
            if ((*(int *)(param_1 + 0xf4) == 0) ||
               (uVar13 = *(uint *)(param_1 + 0xf0), (int)uVar13 < 0)) {
LAB_1418a7035:
              lVar10 = 0;
            }
            else {
              lVar10 = 0;
              if ((int)uVar13 < DAT_14c9647dc) {
                plVar14 = (longlong *)
                          ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
                if (((plVar14 == (longlong *)0x0) || ((int)plVar14[2] != *(int *)(param_1 + 0xf4)))
                   || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) goto LAB_1418a7035;
                lVar10 = *plVar14;
              }
            }
            if (lVar7 == lVar10) {
              FUN_140ddbc00(param_2,uVar4);
            }
            lVar6 = lVar6 + 4;
          } while (lVar12 * 4 != lVar6);
        }
      }
    }
    if (*(int *)(param_1 + 0x104) != 0) {
      uVar13 = *(uint *)(param_1 + 0x100);
      if (((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) &&
         ((lVar12 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8), lVar12 != 0 &&
          ((*(int *)(lVar12 + 0x10) == *(int *)(param_1 + 0x104) &&
           ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)))))) {
        lVar8 = FUN_14479d2ce((uint *)(param_1 + 0x100));
        lVar12 = param_2[0xc6];
        if (lVar12 == 0) {
          if (*(code **)(*param_2 + 0xa68) == (code *)&LAB_14470a070) {
            lVar12 = 0;
          }
          else {
            lVar12 = (**(code **)(*param_2 + 0xa68))(param_2);
          }
        }
        if (lVar8 == lVar12) {
          FUN_14054853a(param_2,0);
        }
      }
    }
    if (!bVar17) {
      FUN_1410f714c(param_2,iVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1418a6f96:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418a7118 FUN_1418a7118 body=210 status=ok
// SIG undefined FUN_1418a7118(void)

void FUN_1418a7118(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar5 = FUN_1406d203e(param_2,param_2 + 0x18);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x18) = 0;
    if (((*(int *)(lVar5 + 0xc) != 0 || *(int *)(lVar5 + 8) != 0) || *(int *)(lVar5 + 0x10) != 0) ||
        *(int *)(lVar5 + 0x14) != 0) {
      (**(code **)(*param_3 + 0xf8))(param_3,(undefined8 *)(lVar5 + 8));
      *(undefined8 *)(lVar5 + 8) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0;
    }
    lVar6 = 0;
    bVar4 = true;
    do {
      bVar8 = bVar4;
      iVar1 = *(int *)(lVar5 + 0x24 + lVar6 * 8);
      if (((iVar1 != 0) && (uVar2 = *(uint *)(lVar5 + 0x20 + lVar6 * 8), -1 < (int)uVar2)) &&
         ((int)uVar2 < DAT_14c9647dc)) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == iVar1)) &&
           (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
            (plVar3 = (longlong *)*plVar7, plVar3 != (longlong *)0x0)))) {
          (**(code **)(*plVar3 + 0xaa8))(plVar3,CONCAT71((int7)((ulonglong)plVar7 >> 8),1));
          (**(code **)(*plVar3 + 0x2b0))(plVar3);
        }
      }
      lVar6 = 1;
      bVar4 = false;
    } while (bVar8);
  }
  return;
}



// FUNCTION 1418a71ea FUN_1418a71ea body=340 status=ok
// SIG undefined FUN_1418a71ea(void)

void FUN_1418a71ea(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  ulonglong uStack_80;
  longlong local_70;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c1d3e0();
  local_88 = 0x15db08df;
  uStack_84 = 0x99294fec;
  uStack_80 = 0x1924ee928c1d6b4a;
  FUN_1448a256a(param_1);
  local_38 = 0x3d54fbbc;
  uStack_34 = 0xb9d04157;
  uStack_30 = 0xbf76cafd;
  uStack_2c = 0xdf898316;
  iVar5 = FUN_1448a256a(param_1);
  if (iVar5 < 0) {
    FUN_14894e9a2(param_1);
  }
  else if (iVar5 != 0) goto LAB_1418a724a;
  if (*(longlong *)(param_1 + 0xfc) != 0) {
    *(undefined8 *)(param_1 + 0xfc) = 0;
    FUN_143e1554e(param_1);
  }
LAB_1418a724a:
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar4 = uStack_80;
  if (lVar2 != 0) {
    local_88 = *(undefined4 *)(lVar2 + 0x108);
    uStack_84 = *(undefined4 *)(lVar2 + 0x10c);
    uVar4 = *(ulonglong *)(lVar2 + 0x110);
    uStack_80._0_1_ = (char)*(undefined4 *)(lVar2 + 0x110);
    if (((char)uStack_80 != '\x02') && ((char)uStack_80 == '\0')) {
      uStack_80 = (uVar4 & 0xffffffff00000000) - 0xffffffff;
      FUN_14756db80(lVar2,&local_88,0);
      uVar4 = uStack_80;
    }
  }
  uStack_80 = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x130);
  FUN_140851e80(&local_88,param_1);
  FUN_14085123a(uVar3,&local_88,0,1);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a7340 FUN_1418a7340 body=735 status=ok
// SIG undefined FUN_1418a7340(void)

void FUN_1418a7340(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong lStack_100;
  undefined8 local_f8;
  int iStack_f4;
  longlong lStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  void *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined4 local_88;
  undefined5 uStack_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  void *local_60;
  uint local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f8 = 0;
  lStack_f0 = 0;
  local_108 = 0;
  lStack_100 = 0;
  local_e8 = 0xffffffff;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  lStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = (longlong *)0x0;
  uStack_90 = 0;
  uStack_8f = 0;
  local_88 = 0;
  uStack_84 = 0;
  FUN_140851e80(&local_78,param_1 + -0xe8);
  _Src = local_60;
  local_e0 = local_78;
  local_d8 = local_70;
  uStack_d4 = uStack_6c;
  uStack_d0 = uStack_68;
  uStack_cc = uStack_64;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,local_58);
  if (local_58 == 0 && uStack_c0._4_4_ == 0) {
    uStack_c0 = (ulonglong)local_58;
  }
  else {
    FUN_1446dd670(&local_c8,local_58);
    if (local_58 != 0) {
      memcpy(local_c8,_Src,(longlong)(int)local_58 * 2);
    }
  }
  if (local_b8 != local_50) {
    local_a8 = 0;
  }
  local_b8 = local_50;
  if (lStack_b0 != local_48) {
    local_a8 = 0;
  }
  uVar3 = FUN_14477b664();
  lStack_b0 = FUN_14477b664(uVar3);
  plVar2 = local_98;
  local_a8 = local_40;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
  }
  uStack_a0 = local_38;
  local_98 = local_30;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_108 = *(undefined8 *)(param_1 + 0x1c);
  if (lStack_f0 != *(longlong *)(param_1 + 0x38)) {
    local_e8 = *(undefined4 *)(param_1 + 0x40);
    lStack_f0 = *(longlong *)(param_1 + 0x38);
  }
  iVar4 = *(int *)(param_1 + 0x68);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iStack_f4 < iVar4) {
    FUN_1402191ca(&lStack_100);
    iVar4 = *(int *)(param_1 + 0x68);
  }
  if (iVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x60);
    lVar6 = (longlong)iVar4 << 4;
    do {
      FUN_140721fbe(&lStack_100,lVar5);
      lVar5 = lVar5 + 0x10;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  FUN_140ab6af6(param_2,&local_108);
  FUN_14072ffb2(CONCAT71(uStack_8f,uStack_90),local_88);
  if (CONCAT71(uStack_8f,uStack_90) != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (lStack_100 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a7620 FUN_1418a7620 body=41 status=ok
// SIG undefined FUN_1418a7620(void)

void FUN_1418a7620(longlong param_1)

{
  FUN_14087332c(param_1 + 0x2e0);
  FUN_140873278(param_1);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1418a764a FUN_1418a764a body=476 status=ok
// SIG undefined FUN_1418a764a(void)

longlong * FUN_1418a764a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [24];
  longlong local_68;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = FUN_14008df84(param_1 + -0xb0);
  if (((cVar4 == '\0') && (*(longlong *)(param_1 + -0x40) != 0)) &&
     (*(int *)(*(longlong *)(param_1 + -0x40) + 0x158) != 0)) {
    FUN_14053d784(param_1 + 0x80,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  }
  if (DAT_14cb8a518 != 0) goto LAB_1418a769a;
  uVar5 = FUN_140861c56();
  FUN_14042b5a6(local_80,uVar5);
  FUN_1413e5462(&local_30,local_80);
  plVar1 = local_28;
  plVar6 = DAT_14cb8a520;
  DAT_14cb8a518 = local_30;
  if (local_28 == (longlong *)0x0) {
    if (DAT_14cb8a520 != (longlong *)0x0) {
      DAT_14cb8a520 = (longlong *)0x0;
LAB_1418a77a9:
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x0001418a77d4:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    plVar6 = DAT_14cb8a520;
    UNLOCK();
    if (local_28 == DAT_14cb8a520) {
      LOCK();
      plVar6 = local_28 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar6 = plVar1;
        goto joined_r0x0001418a77d4;
      }
    }
    else {
      DAT_14cb8a520 = local_28;
      if (plVar6 != (longlong *)0x0) goto LAB_1418a77a9;
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_28 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_38 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_1418a769a:
  *param_2 = DAT_14cb8a518;
  plVar6 = DAT_14cb8a520;
  param_2[1] = (longlong)DAT_14cb8a520;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar6 + 1;
    *(int *)plVar6 = (int)*plVar6 + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418a7828 FUN_1418a7828 body=127 status=ok
// SIG undefined FUN_1418a7828(void)

void FUN_1418a7828(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140851e80(local_68,param_1 + -0xb0);
  FUN_14042b1ec(param_2,local_68,1);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a78a8 FUN_1418a78a8 body=94 status=ok
// SIG undefined FUN_1418a78a8(void)

void FUN_1418a78a8(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b42389c);
  FUN_1402d084a(param_1,param_2);
  iVar1 = FUN_1448332aa(param_2,&DAT_14b42389c);
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x4fc) != 0)) {
    *(undefined1 *)(param_1 + 0x4d0) = 1;
    *(byte *)(param_1 + 0x3cc) = *(byte *)(param_1 + 0x3cc) | 1;
  }
  return;
}



// FUNCTION 1418a7912 FUN_1418a7912 body=265 status=ok
// SIG undefined FUN_1418a7912(void)

void FUN_1418a7912(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  ulonglong uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_5;
  FUN_14063fe71(param_1 + 0x168);
  if ((*(int *)(param_1 + 0xb4) != 0) && (*(char *)(param_1 + 0x88) == '\x01')) {
    uVar1 = DAT_14cb8a554;
    if ((DAT_14cb8a554 == DAT_14c948034) && (uVar1 = DAT_14c948034, DAT_14cb8a550 != DAT_14c948030))
    {
      FUN_14011791e(&local_48,DAT_14cb8a550,DAT_14cb8a554 >> 0x20);
      DAT_14cb8a554 = local_48;
      uVar1 = local_48;
    }
    if (*param_2 == uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a7a3c FUN_1418a7a3c body=492 status=ok
// SIG undefined FUN_1418a7a3c(void)

void FUN_1418a7a3c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + -0x78);
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  else {
    local_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    local_78 = 0;
    if (lVar5 == 0) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      goto LAB_1418a7afc;
    }
  }
  local_98 = 0;
  FUN_1400bbfc4(&local_40,lVar5);
  uStack_90 = CONCAT44(uStack_3c,local_40);
  local_88 = CONCAT44(uStack_34,uStack_38);
  uStack_80 = CONCAT44(uStack_2c,local_30);
  local_78 = CONCAT44(uStack_24,uStack_28);
  cVar3 = (*(code *)PTR_FUN_14c758760)();
  uVar2 = *(uint *)(lVar5 + 0xc);
  if (cVar3 != '\0') {
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
      local_98 = 0;
      goto LAB_1418a7afc;
    }
  }
  local_98 = CONCAT44(local_98._4_4_,uVar2);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar5 = 0;
  }
  iVar4 = *(int *)(lVar5 + 0x10);
  if (*(int *)(lVar5 + 0x10) == 0) {
    LOCK();
    iVar4 = DAT_14c964868 + 1;
    UNLOCK();
    iVar6 = DAT_14c964868 + 1;
    bVar7 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar4;
    if (bVar7) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar4 = *(int *)(lVar5 + 0x10);
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(lVar5 + 0x10) = iVar6;
      iVar4 = 0;
    }
    UNLOCK();
    if (bVar7) {
      iVar4 = iVar6;
    }
  }
  local_98 = CONCAT44(iVar4,(undefined4)local_98);
LAB_1418a7afc:
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_50 = (longlong *)0x0;
  FUN_14042b1ec(param_2,&local_98,1);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if (uStack_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418a7c2a FUN_1418a7c2a body=156 status=ok
// SIG undefined FUN_1418a7c2a(void)

undefined4 * FUN_1418a7c2a(undefined4 *param_1,undefined4 *param_2)

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
  
  *param_1 = *param_2;
  lVar8 = *(longlong *)(param_2 + 2);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 2);
    }
  }
  *(longlong *)(param_1 + 2) = lVar8;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  uVar5 = param_2[9];
  uVar6 = param_2[10];
  uVar7 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  if ((*(longlong *)(param_1 + 0xe) != *(longlong *)(param_2 + 0xe)) ||
     (param_1[0x10] != param_2[0x10])) {
    *(longlong *)(param_1 + 0xe) = *(longlong *)(param_2 + 0xe);
    param_1[0x10] = param_2[0x10];
    *(undefined8 *)(param_1 + 0x12) = 0;
  }
  FUN_1411abf02(param_1 + 0x14,param_2 + 0x14);
  puVar9 = (undefined8 *)(param_2 + 0x18);
  puVar10 = (undefined8 *)(param_1 + 0x18);
  for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  return param_1;
}



// FUNCTION 1418a7cc6 FUN_1418a7cc6 body=117 status=ok
// SIG undefined FUN_1418a7cc6(void)

ulonglong FUN_1418a7cc6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar4 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x10 + lVar4) == '\0') goto LAB_1418a7d2f;
      lVar4 = lVar4 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0x80) * 0x18 != lVar4);
  }
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x68);
    lVar2 = (longlong)*(int *)(param_1 + 0x70) * 0xc;
    do {
      cVar1 = FUN_144729dda(lVar4);
      if ((cVar1 != '\0') && (*(char *)(lVar4 + 8) != '\x01')) goto LAB_1418a7d2f;
      lVar4 = lVar4 + 0xc;
      lVar2 = lVar2 + -0xc;
    } while (lVar2 != 0);
  }
LAB_1418a7d31:
  return uVar3 & 0xffffffff;
LAB_1418a7d2f:
  uVar3 = 0;
  goto LAB_1418a7d31;
}



// FUNCTION 1418a7d3c FUN_1418a7d3c body=40 status=ok
// SIG undefined FUN_1418a7d3c(void)

void FUN_1418a7d3c(undefined8 param_1)

{
  FUN_14080e450(param_1,1);
  FUN_140c16dfe(param_1,1);
  FUN_140c16d2a(param_1,1);
  return;
}



// FUNCTION 1418a7d64 FUN_1418a7d64 body=126 status=ok
// SIG undefined FUN_1418a7d64(void)

void FUN_1418a7d64(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    uVar2 = FUN_14098e156();
    plVar3 = (longlong *)FUN_144718840(param_2,uVar2);
    if ((plVar3 != (longlong *)0x0) && (lVar1 = *(longlong *)(param_1 + 0x270), lVar1 != 0)) {
      lVar4 = FUN_14098e070();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x0001418a7ddf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x20))(plVar3,lVar1,param_3,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1418a7de2 FUN_1418a7de2 body=80 status=ok
// SIG undefined FUN_1418a7de2(void)

undefined8 * FUN_1418a7de2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b423b70;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a7e32 FUN_1418a7e32 body=29 status=ok
// SIG undefined FUN_1418a7e32(void)

undefined8 FUN_1418a7e32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a7e50 FUN_1418a7e50 body=29 status=ok
// SIG undefined FUN_1418a7e50(void)

undefined8 FUN_1418a7e50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a7e6e FUN_1418a7e6e body=513 status=ok
// SIG undefined FUN_1418a7e6e(void)

void FUN_1418a7e6e(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x48);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 9) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 8;
    _Src = *(void **)((longlong)param_1 + 0x40);
joined_r0x0001418a7ff3:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (8 < *(uint *)((longlong)param_1 + 0x4c)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_1418a7ef1;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_1418a7ef1:
    uVar8 = uVar8 >> 3;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x40);
    }
    else {
      *(uint *)((longlong)param_1 + 0x4c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x40);
      if (uVar6 < 9) goto joined_r0x0001418a7ff3;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x40,0,uVar8,8);
      memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,uVar8,8);
  return;
}



// FUNCTION 1418a8070 FUN_1418a8070 body=513 status=ok
// SIG undefined FUN_1418a8070(void)

void FUN_1418a8070(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x48);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 9) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 8;
    _Src = *(void **)((longlong)param_1 + 0x40);
joined_r0x0001418a81f5:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (8 < *(uint *)((longlong)param_1 + 0x4c)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_1418a80f3;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_1418a80f3:
    uVar8 = uVar8 >> 3;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x40);
    }
    else {
      *(uint *)((longlong)param_1 + 0x4c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x40);
      if (uVar6 < 9) goto joined_r0x0001418a81f5;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x40,0,uVar8,8);
      memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,uVar8,8);
  return;
}



// FUNCTION 1418a8272 FUN_1418a8272 body=101 status=ok
// SIG undefined FUN_1418a8272(void)

void FUN_1418a8272(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b424980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418a82d8 FUN_1418a82d8 body=97 status=ok
// SIG undefined FUN_1418a82d8(void)

undefined8 * FUN_1418a82d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_LAB_14b425740;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b425800;
  puVar2[2] = puVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 1418a833a FUN_1418a833a body=138 status=ok
// SIG undefined FUN_1418a833a(void)

void FUN_1418a833a(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  uVar1 = DAT_14cb8a5dc;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x868) != 0) {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_28 = DAT_14cb8a5dc;
    uStack_24 = 0xffffffff;
    local_48 = CONCAT44(0xffffffff,DAT_14cb8a5dc);
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    FUN_140b8797e();
    local_5c = uVar1;
    FUN_140e06640(param_1 + 0x10,&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a83c6 FUN_1418a83c6 body=460 status=ok
// SIG undefined FUN_1418a83c6(void)

void FUN_1418a83c6(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 uStack_58;
  undefined5 uStack_50;
  undefined3 local_4b;
  undefined5 uStack_48;
  undefined8 uStack_43;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_3 + 0x94);
  if ((-1 < (longlong)iVar4) && (iVar4 < *(int *)(param_1 + 0x78))) {
    lVar7 = (longlong)iVar4 * 0x10;
    if (*(longlong *)(*(longlong *)(param_1 + 0x70) + lVar7) != 0) {
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + lVar7);
      cVar3 = *(char *)(puVar12 + 1);
      if (cVar3 != '\0') {
        if (cVar3 == '\x01') {
          if (*(int *)(param_3 + 0x30) != 0) goto LAB_1418a84f6;
        }
        else if ((cVar3 != '\x02') || (*(int *)(param_3 + 0x30) != 1)) goto LAB_1418a84f6;
      }
      uStack_48 = 0;
      uStack_43 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      local_4b = 0;
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      FUN_1405e06c2(*param_2,&local_78,param_3,param_3 + 0x90);
      if ((longlong)local_70 != 0) {
        lVar7 = 0;
        do {
          uVar5 = *(ulonglong *)(local_78 + lVar7);
          if ((uVar5 >> 0x20 == 0) || (uVar11 = (uint)uVar5, (int)uVar11 < 0)) {
LAB_1418a852a:
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            if ((int)uVar11 < DAT_14c9647dc) {
              puVar10 = (undefined8 *)
                        ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0xd & 0x3fff8)));
              if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != (int)(uVar5 >> 0x20))
                  ) || ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_1418a852a;
              uVar9 = *puVar10;
            }
          }
          lVar8 = FUN_140e1d22c(uVar9);
          if (lVar8 != 0) {
            plVar6 = (longlong *)*puVar12;
            (**(code **)(*plVar6 + 0x2b0))(plVar6,lVar8,0,&local_68);
          }
          plVar6 = plStack_60;
          lVar7 = lVar7 + 8;
        } while ((longlong)local_70 * 8 != lVar7);
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_60)(plStack_60);
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
  }
LAB_1418a84f6:
  plVar6 = (longlong *)param_2[1];
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
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418a8594 FUN_1418a8594 body=631 status=ok
// SIG undefined FUN_1418a8594(void)

void FUN_1418a8594(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 uStack_88;
  undefined5 uStack_80;
  undefined3 local_7b;
  undefined5 uStack_78;
  undefined8 uStack_73;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x10) == 0) goto LAB_1418a8754;
  cVar3 = *(char *)(param_1 + 0x18);
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      if (*(int *)(param_3 + 0x30) != 0) goto LAB_1418a8754;
    }
    else if ((cVar3 != '\x02') || (*(int *)(param_3 + 0x30) != 1)) goto LAB_1418a8754;
  }
  uStack_78 = 0;
  uStack_73 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_7b = 0;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  lVar6 = *(longlong *)(param_3 + 0x28);
  iVar4 = *(int *)(param_3 + 0x20);
  fVar15 = *(float *)(param_3 + 0x24) - *(float *)(param_3 + 0x18);
  iVar5 = *(int *)(param_3 + 0x14);
  auVar14._0_8_ = FUN_1405e06c2(*param_2,&local_a8,param_3,param_3 + 0x90);
  auVar14._8_8_ = extraout_XMM0_Qb;
  if ((longlong)local_a0 != 0) {
    auVar14 = roundps(auVar14,ZEXT416((uint)fVar15),1);
    fVar15 = (fVar15 - auVar14._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar15) {
      fVar15 = 0.99999994;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    lVar13 = 0;
    do {
      uVar7 = *(ulonglong *)(local_a8 + lVar13);
      if ((uVar7 >> 0x20 == 0) || (uVar12 = (uint)uVar7, (int)uVar12 < 0)) {
LAB_1418a879c:
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        if ((int)uVar12 < DAT_14c9647dc) {
          puVar11 = (undefined8 *)
                    ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0xd & 0x3fff8)));
          if (((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) != (int)(uVar7 >> 0x20))) ||
             ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_1418a879c;
          uVar10 = *puVar11;
        }
      }
      lVar9 = FUN_140e1d22c(uVar10);
      if (lVar9 != 0) {
        local_b8 = &local_98;
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x2c0))
                  (*(longlong **)(param_1 + 0x10),lVar9,0,
                   ((float)((lVar6 >> 0x20) * (longlong)((int)auVar14._0_4_ + (iVar4 - iVar5))) +
                   (float)(int)((ulonglong)lVar6 >> 0x20) * fVar15) / (float)(int)lVar6);
      }
      plVar8 = plStack_90;
      lVar13 = lVar13 + 8;
    } while ((longlong)local_a0 * 8 != lVar13);
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_90)(plStack_90);
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
LAB_1418a8754:
  plVar8 = (longlong *)param_2[1];
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
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418a880c FUN_1418a880c body=123 status=ok
// SIG undefined FUN_1418a880c(void)

undefined8 FUN_1418a880c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0xffff;
  uVar2 = 0;
  cVar1 = FUN_1406edc20(param_2,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_1406edcf6(param_1 + 0x58,*(undefined2 *)(param_1 + 0x50),&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418a8888 FUN_1418a8888 body=113 status=ok
// SIG undefined FUN_1418a8888(void)

undefined8 FUN_1418a8888(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (((param_2 == 0) || (*(longlong *)(param_2 + 0x20) != *(longlong *)(param_1 + 0x10))) ||
     (*(char *)(param_2 + 0x29) == '\0')) {
    uVar1 = 0;
  }
  else {
    FUN_1447715ec(param_3,&DAT_14c9485f0);
    *(undefined4 *)(param_3 + 0x28) = 0xffffffff;
    puVar2 = *(undefined4 **)(param_2 + 8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = &DAT_14c9485f0;
    }
    FUN_1447715ec(param_3,puVar2);
    uVar1 = 1;
    if (*(short *)(param_1 + 0x50) <= *(short *)(param_2 + 0x2a)) {
      *(short *)(param_3 + 0x28) = *(short *)(param_2 + 0x2a);
    }
  }
  return uVar1;
}



// FUNCTION 1418a88fa FUN_1418a88fa body=212 status=ok
// SIG undefined FUN_1418a88fa(void)

void FUN_1418a88fa(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)puVar1 = 0;
  FUN_14026ccd7(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1408f7a70(param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_14026cd08(param_1 + 0xb8,0);
  }
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (0x80 < *(uint *)(param_1 + 0xe4)) {
    *(undefined4 *)(param_1 + 0xe4) = 0x80;
    FUN_1446efbd8(param_1 + 200,0);
  }
  puVar1 = (undefined8 *)(param_1 + 0xe8);
  if (0xf < *(ulonglong *)(param_1 + 0x100)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)puVar1 = 0;
  return;
}



// FUNCTION 1418a89ce FUN_1418a89ce body=119 status=ok
// SIG undefined FUN_1418a89ce(void)

void FUN_1418a89ce(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140be38f6(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
      FUN_1418a8b78(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1418a8a46 FUN_1418a8a46 body=76 status=ok
// SIG undefined FUN_1418a8a46(void)

void FUN_1418a8a46(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)((longlong)puVar1 + 0xc) = 0xffff;
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined2 *)(puVar1 + 6) = 0xffff;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 1418a8a92 FUN_1418a8a92 body=55 status=ok
// SIG undefined FUN_1418a8a92(void)

undefined8 FUN_1418a8a92(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140dea44c(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = param_2;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 1418a8aca FUN_1418a8aca body=48 status=ok
// SIG undefined FUN_1418a8aca(void)

undefined8 FUN_1418a8aca(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1406f625c();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418a8aef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x308))(plVar1,param_2,*(code **)(*plVar1 + 0x308));
    return uVar2;
  }
  return 0;
}



// FUNCTION 1418a8afa FUN_1418a8afa body=71 status=ok
// SIG undefined FUN_1418a8afa(void)

void FUN_1418a8afa(longlong param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  
  lVar1 = FUN_1400796d0(*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x10),
                        *(undefined8 *)(param_1 + 8),1);
  if (lVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_2 + 8) + 0x248);
                    /* WARNING: Could not recover jumptable at 0x0001418a8b37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(longlong **)(param_2 + 8),lVar1,0,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



// FUNCTION 1418a8b5a FUN_1418a8b5a body=29 status=ok
// SIG undefined FUN_1418a8b5a(void)

undefined8 FUN_1418a8b5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a8b78 FUN_1418a8b78 body=143 status=ok
// SIG undefined FUN_1418a8b78(void)

void FUN_1418a8b78(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
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



// FUNCTION 1418a8c08 FUN_1418a8c08 body=29 status=ok
// SIG undefined FUN_1418a8c08(void)

undefined8 FUN_1418a8c08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a8c26 FUN_1418a8c26 body=66 status=ok
// SIG undefined FUN_1418a8c26(void)

undefined8 * FUN_1418a8c26(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4268d0;
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



// FUNCTION 1418a8c68 FUN_1418a8c68 body=118 status=ok
// SIG undefined FUN_1418a8c68(void)

void FUN_1418a8c68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426b70;
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



// FUNCTION 1418a8cde FUN_1418a8cde body=48 status=ok
// SIG undefined FUN_1418a8cde(void)

void FUN_1418a8cde(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1418a8d0e FUN_1418a8d0e body=29 status=ok
// SIG undefined FUN_1418a8d0e(void)

undefined8 FUN_1418a8d0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a8d2c FUN_1418a8d2c body=124 status=ok
// SIG undefined FUN_1418a8d2c(void)

void FUN_1418a8d2c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b242780;
  FUN_1410691c9(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0));
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0xb0);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b2431f0;
  FUN_141069212(param_1 + 0x68);
  FUN_140d8c2c6(param_1 + 0x10);
  return;
}



// FUNCTION 1418a8da8 FUN_1418a8da8 body=29 status=ok
// SIG undefined FUN_1418a8da8(void)

undefined8 FUN_1418a8da8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a8dc6 FUN_1418a8dc6 body=118 status=ok
// SIG undefined FUN_1418a8dc6(void)

void FUN_1418a8dc6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b427140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426d60;
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



// FUNCTION 1418a8e3c FUN_1418a8e3c body=29 status=ok
// SIG undefined FUN_1418a8e3c(void)

undefined8 FUN_1418a8e3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a8e5a FUN_1418a8e5a body=269 status=ok
// SIG undefined FUN_1418a8e5a(void)

void FUN_1418a8e5a(longlong param_1,int param_2)

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



// FUNCTION 1418a8f82 FUN_1418a8f82 body=64 status=ok
// SIG undefined FUN_1418a8f82(void)

void FUN_1418a8f82(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 1) == 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 | 1;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 1418a8fc2 FUN_1418a8fc2 body=126 status=ok
// SIG undefined FUN_1418a8fc2(void)

float FUN_1418a8fc2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if (((*(int *)(param_1 + 0x44) != 0) && (uVar1 = *(uint *)(param_1 + 0x40), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x44))) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar4;
      }
      else {
        uVar3 = 0;
      }
      lVar2 = FUN_1447210f0(uVar3);
      if (lVar2 != 0) {
        fVar5 = (float)*(double *)(lVar2 + 0x6d0);
      }
    }
  }
  return fVar5;
}



// FUNCTION 1418a9040 FUN_1418a9040 body=107 status=ok
// SIG undefined FUN_1418a9040(void)

void FUN_1418a9040(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1412bfed2(param_1,0);
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x48);
    if (cVar1 != '\0') {
      lVar2 = FUN_14479d2ce(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x60) != 0) {
        lVar3 = lVar2 + 0x3f0;
        if (*(char *)(lVar2 + 0x178) != '\x03') {
          lVar3 = lVar2 + 0x9d8;
        }
        FUN_14480f766(lVar3);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 1418a90ac FUN_1418a90ac body=64 status=ok
// SIG undefined FUN_1418a90ac(void)

void FUN_1418a90ac(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 1) == 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 | 1;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 1418a90ec FUN_1418a90ec body=64 status=ok
// SIG undefined FUN_1418a90ec(void)

void FUN_1418a90ec(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 1) != 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 & 0xfe;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 1418a9164 FUN_1418a9164 body=46 status=ok
// SIG undefined FUN_1418a9164(void)

void FUN_1418a9164(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x94) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x94) = 0;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  FUN_140df59dc(param_1);
  return;
}



// FUNCTION 1418a9192 FUN_1418a9192 body=64 status=ok
// SIG undefined FUN_1418a9192(void)

void FUN_1418a9192(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 1) == 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 | 1;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 1418a91d2 FUN_1418a91d2 body=64 status=ok
// SIG undefined FUN_1418a91d2(void)

void FUN_1418a91d2(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 1) != 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 & 0xfe;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 1418a9212 FUN_1418a9212 body=76 status=ok
// SIG undefined FUN_1418a9212(void)

undefined8 FUN_1418a9212(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140df5408(param_1,param_2 + 0x10);
  if (lVar1 != 0) {
    FUN_14053c012(lVar1 + 0x58,param_3);
    return 1;
  }
  uVar2 = FUN_143e2f022(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 1418a925e FUN_1418a925e body=217 status=ok
// SIG undefined FUN_1418a925e(void)

longlong * FUN_1418a925e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)FUN_14001cc68(0x50,0x10);
  local_20[1] = (longlong)&DAT_100000001;
  *local_20 = (longlong)&PTR_FUN_14b429090;
  local_28 = local_20 + 2;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  local_20[2] = (longlong)&PTR_FUN_14b4290b0;
  local_20[8] = 0;
  local_20[9] = 0;
  FUN_141264872(&local_28);
  plVar3 = local_20;
  *param_1 = (longlong)local_28;
  param_1[1] = (longlong)local_20;
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
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
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



// FUNCTION 1418a9338 FUN_1418a9338 body=856 status=ok
// SIG undefined FUN_1418a9338(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1418a9338(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
  if (plVar5 == (longlong *)0x0) {
    local_60 = *param_3;
    local_50 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
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
    local_60 = *param_3;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_50 = plVar5;
  }
  local_58 = lVar4;
  FUN_140f360c6(lVar4,&local_48,&local_60);
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
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
  plVar5 = local_40;
  if (local_48 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_1418a94cf;
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  lVar4 = param_3[1];
  plVar6 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b429210;
  plVar1 = plVar6 + 2;
  bVar3 = *(byte *)(local_48 + 0x28);
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 2;
  plVar6[8] = lVar4;
  *(byte *)(plVar6 + 9) = bVar3 & 2;
  plVar6[2] = (longlong)&PTR_FUN_14b429230;
  plVar6[10] = local_48;
  plVar6[0xb] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if ((plVar1 == (longlong *)0x0) ||
     (((plVar6[3] != 0 && (plVar6[4] != 0)) && (0 < *(int *)(plVar6[4] + 8))))) {
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) goto LAB_1418a94b2;
  }
  else if (plVar6 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar8 = (longlong *)&DAT_00000020;
    plVar7 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_1418a95ef:
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      *plVar8 = (longlong)plVar6;
      if (plVar6 != (longlong *)0x0) goto LAB_1418a94a1;
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar6;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar6[3] = (longlong)plVar1;
    if ((longlong *)plVar6[4] != plVar6) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar6[4] != (longlong *)0x0) {
        plVar8 = plVar6 + 4;
        plVar7 = (longlong *)plVar6[4];
        goto LAB_1418a95ef;
      }
      plVar6[4] = (longlong)plVar6;
    }
LAB_1418a94a1:
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar6;
LAB_1418a94b2:
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
LAB_1418a94cf:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418a9694 FUN_1418a9694 body=831 status=ok
// SIG undefined FUN_1418a9694(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1418a9694(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = (**(code **)(*(longlong *)*param_3 + 0x18))();
  bVar4 = FUN_140d137fe(uVar5,param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x28);
  plVar6 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b4299e0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x2c) = 0;
  *(byte *)(plVar6 + 7) = (bVar4 ^ bVar2 ^ 1) * '\x02';
  plVar9 = plVar6 + 2;
  *plVar9 = (longlong)&PTR_FUN_14b429a00;
  *(byte *)(plVar6 + 8) = bVar2;
  if (plVar9 != (longlong *)0x0) {
    if (plVar6 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar10 = (longlong *)&DAT_00000020;
      plVar7 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_1418a9925:
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        *plVar10 = (longlong)plVar6;
        if (plVar6 != (longlong *)0x0) goto LAB_1418a975f;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      plVar6[3] = (longlong)plVar9;
      if ((longlong *)plVar6[4] != plVar6) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar6[4] != (longlong *)0x0) {
          plVar10 = plVar6 + 4;
          plVar7 = (longlong *)plVar6[4];
          goto LAB_1418a9925;
        }
        plVar6[4] = (longlong)plVar6;
      }
LAB_1418a975f:
      LOCK();
      plVar10 = plVar6 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
  plVar10 = (longlong *)*param_3;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,4,0x10);
  local_48 = 4;
  if (plVar6 == (longlong *)0x0) {
    *local_50 = &PTR_LAB_14b429a90;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_50[2] = lVar8;
    *local_50 = &PTR_FUN_14b429a20;
    local_50[3] = 0x10;
    local_50[4] = 0;
    local_50[5] = FUN_1405a25b2;
    *(undefined4 *)(local_50 + 6) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *local_50 = &PTR_LAB_14b429a90;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_50[2] = lVar8;
    *local_50 = &PTR_FUN_14b429a20;
    local_50[3] = plVar9;
    local_50[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    local_50[5] = FUN_1405a25b2;
    *(undefined4 *)(local_50 + 6) = 0;
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  (**(code **)(*plVar10 + 0x30))(plVar10,param_1 + 0x10,&local_50);
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_1418a9833;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1418a9833:
  *param_2 = plVar9;
  param_2[1] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418a99d4 FUN_1418a99d4 body=994 status=ok
// SIG undefined FUN_1418a99d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1418a99d4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b429bb0;
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(plVar5 + 7) = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x2c) = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b429bd0;
  plVar5[8] = *(longlong *)(param_1 + 0x10);
  uVar6 = FUN_14477b664(*(undefined8 *)(param_1 + 0x18));
  lVar7 = FUN_14477b664(uVar6);
  plVar5[9] = lVar7;
  plVar5[10] = *(longlong *)(param_1 + 0x20);
  *(undefined1 *)(plVar5 + 0xb) = uVar2;
  *(undefined4 *)((longlong)plVar5 + 0x5c) = uVar3;
  plVar10 = plVar5 + 2;
  if (plVar10 != (longlong *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar11 = (longlong *)&DAT_00000020;
      plVar8 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_1418a9d01:
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        *plVar11 = (longlong)plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_1418a9aab;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      plVar5[3] = (longlong)plVar10;
      if ((longlong *)plVar5[4] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar5[4] != (longlong *)0x0) {
          plVar11 = plVar5 + 4;
          plVar8 = (longlong *)plVar5[4];
          goto LAB_1418a9d01;
        }
        plVar5[4] = (longlong)plVar5;
      }
LAB_1418a9aab:
      LOCK();
      plVar11 = plVar5 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
  }
  plVar11 = (longlong *)*param_3;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  if (plVar5 == (longlong *)0x0) {
    *local_58 = &PTR_LAB_14b42a650;
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
    local_58[2] = lVar9;
    *local_58 = &PTR_FUN_14b429bf0;
    local_58[3] = 0x10;
    local_58[4] = 0;
    local_58[5] = FUN_140ac0ab2;
    *(undefined4 *)(local_58 + 6) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *local_58 = &PTR_LAB_14b42a650;
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
    local_58[2] = lVar9;
    *local_58 = &PTR_FUN_14b429bf0;
    local_58[3] = plVar10;
    local_58[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    local_58[5] = FUN_140ac0ab2;
    *(undefined4 *)(local_58 + 6) = 0;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (lVar7 == 0) {
    uVar6 = FUN_140e391b0();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x18) = lVar7;
  }
  lVar9 = *(longlong *)(param_1 + 0x20);
  if (((lVar9 == 0) && (lVar9 = 0, lVar7 != 0)) && (*(longlong *)(param_1 + 0x10) != 0)) {
    plVar8 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
      lVar9 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar8 + 0x110))(plVar8);
      lVar9 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0x10));
    }
    *(longlong *)(param_1 + 0x20) = lVar9;
  }
  (**(code **)(*plVar11 + 0x40))(plVar11,lVar9,&local_58);
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1418a9b95;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1418a9b95:
  *param_2 = plVar10;
  param_2[1] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar5 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418a9db8 FUN_1418a9db8 body=119 status=ok
// SIG undefined FUN_1418a9db8(void)

void FUN_1418a9db8(int *param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)((longlong)param_2 + 0x1c);
  if (lVar1 != DAT_14cb8ae40) {
    if (lVar1 == DAT_14cb8ae48) {
      param_1 = param_1 + 3;
    }
    else {
      if (lVar1 != DAT_14cb8ae50) {
        return;
      }
      param_1 = param_1 + 6;
    }
  }
  if (param_1 != (int *)0x0) {
    *param_1 = *param_1 + 1;
    fVar2 = 0.0;
    if ((*(longlong *)(*param_2 + 0x40) != 0) && (lVar1 = FUN_1447210f0(), lVar1 != 0)) {
      fVar2 = (float)*(double *)(lVar1 + 0x6d0);
    }
    param_1[1] = (int)fVar2;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



// FUNCTION 1418a9e30 FUN_1418a9e30 body=110 status=ok
// SIG undefined FUN_1418a9e30(void)

undefined8 * FUN_1418a9e30(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b42a490;
  puVar2[2] = 0;
  puVar2[3] = 0;
  param_1[2] = puVar2 + 2;
  param_1[3] = puVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1418a9e9e FUN_1418a9e9e body=29 status=ok
// SIG undefined FUN_1418a9e9e(void)

undefined8 FUN_1418a9e9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a9ebc FUN_1418a9ebc body=168 status=ok
// SIG undefined FUN_1418a9ebc(void)

void FUN_1418a9ebc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b427e40;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_14b427e80;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    plVar3 = (longlong *)(param_1 + 0xf0);
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0xe0);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 0xc0);
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
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b427e90;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b427ed0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1 + 0x10);
  return;
}



// FUNCTION 1418a9f64 FUN_1418a9f64 body=29 status=ok
// SIG undefined FUN_1418a9f64(void)

undefined8 FUN_1418a9f64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418a9f82 FUN_1418a9f82 body=131 status=ok
// SIG undefined FUN_1418a9f82(void)

void FUN_1418a9f82(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b427f70;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_14b427fb0;
  plVar3 = *(longlong **)(param_1 + 0xc0);
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
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b42a830;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b42a870;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1 + 0x10);
  return;
}



// FUNCTION 1418aa006 FUN_1418aa006 body=29 status=ok
// SIG undefined FUN_1418aa006(void)

undefined8 FUN_1418aa006(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418aa024 FUN_1418aa024 body=118 status=ok
// SIG undefined FUN_1418aa024(void)

void FUN_1418aa024(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b427fc0;
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



// FUNCTION 1418aa09a FUN_1418aa09a body=66 status=ok
// SIG undefined FUN_1418aa09a(void)

void FUN_1418aa09a(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b242940;
  FUN_140d8c315(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_140d8c2c6(param_1 + 0x10);
  return;
}



// FUNCTION 1418aa0dc FUN_1418aa0dc body=29 status=ok
// SIG undefined FUN_1418aa0dc(void)

undefined8 FUN_1418aa0dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418aa0fa FUN_1418aa0fa body=118 status=ok
// SIG undefined FUN_1418aa0fa(void)

void FUN_1418aa0fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b428c20;
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



// FUNCTION 1418aa170 FUN_1418aa170 body=29 status=ok
// SIG undefined FUN_1418aa170(void)

undefined8 FUN_1418aa170(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418aa18e FUN_1418aa18e body=173 status=ok
// SIG undefined FUN_1418aa18e(void)

void FUN_1418aa18e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b428d10;
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
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar3 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1418aa1e5;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1418aa1e5:
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418aa1fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1418aa23c FUN_1418aa23c body=29 status=ok
// SIG undefined FUN_1418aa23c(void)

undefined8 FUN_1418aa23c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418aa25a FUN_1418aa25a body=66 status=ok
// SIG undefined FUN_1418aa25a(void)

undefined8 * FUN_1418aa25a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b428d30;
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



// FUNCTION 1418aa29c FUN_1418aa29c body=29 status=ok
// SIG undefined FUN_1418aa29c(void)

undefined8 FUN_1418aa29c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418aa2fe FUN_1418aa2fe body=530 status=ok
// SIG undefined FUN_1418aa2fe(void)

bool FUN_1418aa2fe(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_3 == '\0') {
    iVar8 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar8 + 1U) {
      FUN_140f36142((longlong *)(param_1 + 0x30),iVar8);
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    *(longlong *)(lVar3 + (longlong)iVar8 * 0x10) = *param_2;
    lVar9 = param_2[1];
    *(longlong *)(lVar3 + 8 + (longlong)iVar8 * 0x10) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    lVar3 = *param_2;
    if (*(int *)(lVar3 + 0x20) != 4) {
      FUN_1446efa72((longlong *)(lVar3 + 0x18),0,4,0x10);
      *(undefined4 *)(lVar3 + 0x20) = 4;
    }
    puVar4 = *(undefined8 **)(lVar3 + 0x18);
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
LAB_1418aa439:
      *puVar4 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      puVar4[2] = lVar9;
      *puVar4 = &PTR_FUN_14b4290d0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = &LAB_1407a56e6;
      *(undefined4 *)(puVar4 + 6) = 0;
    }
    else {
      iVar8 = (int)plVar5[1];
      do {
        if (iVar8 == 0) goto LAB_1418aa439;
        LOCK();
        iVar7 = (int)plVar5[1];
        bVar10 = iVar8 == iVar7;
        if (bVar10) {
          *(int *)(plVar5 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
      } while (!bVar10);
      uVar6 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *puVar4 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      puVar4[2] = lVar9;
      *puVar4 = &PTR_FUN_14b4290d0;
      puVar4[3] = uVar6;
      puVar4[4] = plVar5;
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      puVar4[5] = &LAB_1407a56e6;
      *(undefined4 *)(puVar4 + 6) = 0;
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
  }
  return param_3 == '\0';
}



// FUNCTION 1418aa510 FUN_1418aa510 body=29 status=ok
// SIG undefined FUN_1418aa510(void)

undefined8 FUN_1418aa510(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418aa56a FUN_1418aa56a body=29 status=ok
// SIG undefined FUN_1418aa56a(void)

undefined8 FUN_1418aa56a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418aa588 FUN_1418aa588 body=437 status=ok
// SIG undefined FUN_1418aa588(void)

void FUN_1418aa588(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (*(int *)(lVar3 + 0x20) != 4) {
    FUN_1446efa72((longlong *)(lVar3 + 0x18),0,4,0x10);
    *(undefined4 *)(lVar3 + 0x20) = 4;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0x18);
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 == (longlong *)0x0) {
LAB_1418aa663:
    *puVar4 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    puVar4[2] = lVar9;
    *puVar4 = &PTR_FUN_14b429270;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = &LAB_1406e37f0;
    *(undefined4 *)(puVar4 + 6) = 0;
  }
  else {
    iVar8 = (int)plVar5[1];
    do {
      if (iVar8 == 0) goto LAB_1418aa663;
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar5 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    uVar6 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    puVar4[2] = lVar9;
    *puVar4 = &PTR_FUN_14b429270;
    puVar4[3] = uVar6;
    puVar4[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = &LAB_1406e37f0;
    *(undefined4 *)(puVar4 + 6) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001418aa725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1418aa73e FUN_1418aa73e body=173 status=ok
// SIG undefined FUN_1418aa73e(void)

void FUN_1418aa73e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b429680;
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
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar3 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1418aa795;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1418aa795:
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418aa7ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1418aa7ec FUN_1418aa7ec body=29 status=ok
// SIG undefined FUN_1418aa7ec(void)

undefined8 FUN_1418aa7ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418aa80a FUN_1418aa80a body=36 status=ok
// SIG undefined FUN_1418aa80a(void)

void FUN_1418aa80a(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140b0b25e(*(undefined8 *)(param_1 + 0x30),param_1 + 0x70);
  FUN_1402a7054(param_1,uVar1);
  return;
}



// FUNCTION 1418aa82e FUN_1418aa82e body=66 status=ok
// SIG undefined FUN_1418aa82e(void)

undefined8 * FUN_1418aa82e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4296a0;
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



// FUNCTION 1418aa870 FUN_1418aa870 body=29 status=ok
// SIG undefined FUN_1418aa870(void)

undefined8 FUN_1418aa870(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418aa88e FUN_1418aa88e body=68 status=ok
// SIG undefined FUN_1418aa88e(void)

undefined8 * FUN_1418aa88e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b429a20;
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



// FUNCTION 1418aa8d2 FUN_1418aa8d2 body=29 status=ok
// SIG undefined FUN_1418aa8d2(void)

undefined8 FUN_1418aa8d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418aa8f0 FUN_1418aa8f0 body=118 status=ok
// SIG undefined FUN_1418aa8f0(void)

void FUN_1418aa8f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b429b40;
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



// FUNCTION 1418aa966 FUN_1418aa966 body=29 status=ok
// SIG undefined FUN_1418aa966(void)

undefined8 FUN_1418aa966(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418aa984 FUN_1418aa984 body=118 status=ok
// SIG undefined FUN_1418aa984(void)

void FUN_1418aa984(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a650;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b429bf0;
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



// FUNCTION 1418aa9fa FUN_1418aa9fa body=93 status=ok
// SIG undefined FUN_1418aa9fa(void)

void FUN_1418aa9fa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b42a5e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418aaa58 FUN_1418aaa58 body=48 status=ok
// SIG undefined FUN_1418aaa58(void)

void FUN_1418aaa58(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1418aaa88 FUN_1418aaa88 body=48 status=ok
// SIG undefined FUN_1418aaa88(void)

void FUN_1418aaa88(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1418aaab8 FUN_1418aaab8 body=353 status=ok
// SIG undefined FUN_1418aaab8(void)

void FUN_1418aaab8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418aab3d;
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
LAB_1418aab3d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418aac1a FUN_1418aac1a body=45 status=ok
// SIG undefined FUN_1418aac1a(void)

void FUN_1418aac1a(longlong param_1)

{
  FUN_140f98103(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418aac48 FUN_1418aac48 body=29 status=ok
// SIG undefined FUN_1418aac48(void)

undefined8 FUN_1418aac48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418aac66 FUN_1418aac66 body=118 status=ok
// SIG undefined FUN_1418aac66(void)

void FUN_1418aac66(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b42a550;
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



// FUNCTION 1418aacec FUN_1418aacec body=70 status=ok
// SIG undefined FUN_1418aacec(void)

void FUN_1418aacec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_141232168(param_2,2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418aad34 FUN_1418aad34 body=149 status=ok
// SIG undefined FUN_1418aad34(void)

void FUN_1418aad34(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x20c) & 1) == 0)) {
    if ((*(byte *)(param_2 + 0x248) & 1) != 0) {
      local_30 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      local_28 = &local_30;
      FUN_14120b094(param_1 + 0x38);
    }
    FUN_14120afa8(param_1,param_2,1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418aadca FUN_1418aadca body=22 status=ok
// SIG undefined FUN_1418aadca(void)

undefined8 FUN_1418aadca(int *param_1)

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
  
  plVar4 = DAT_14cb8b8f8;
  if (DAT_14cb8b8f8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb8b8f8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8b8f8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb8b8f8[0x3a] <= *(int *)((longlong)DAT_14cb8b8f8 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb8b8f8 + 0x300))(DAT_14cb8b8f8);
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



// FUNCTION 1418aade0 FUN_1418aade0 body=342 status=ok
// SIG undefined FUN_1418aade0(void)

undefined8 FUN_1418aade0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  if (DAT_14cb63988 == (code *)0x0) {
    local_d0 = &local_b8;
    local_b8 = FUN_1449e2820;
    local_c0 = FUN_14081d0ea;
    local_c8 = FUN_14081d0ea;
    local_d8 = &LAB_1486f5f94;
    local_e0 = &LAB_14106aa88;
    local_e8 = L"Engine";
    local_f0 = 0;
    local_f8 = 0x10000000;
    local_100 = 8;
    local_108 = 0x250;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkill",&DAT_14cb63988,FUN_1464fe9ca);
  }
  local_b8 = DAT_14cb63988;
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
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418aaf38 FUN_1418aaf38 body=127 status=ok
// SIG undefined FUN_1418aaf38(void)

void FUN_1418aaf38(longlong param_1)

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



// FUNCTION 1418aafcc FUN_1418aafcc body=130 status=ok
// SIG undefined FUN_1418aafcc(void)

void FUN_1418aafcc(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (((*(int *)(param_2 + 0xc) != 0) && (uVar1 = *(uint *)(param_2 + 8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_2 + 0xc))) &&
       (((*(uint *)(lVar2 + 8) & 0x10200000) == 0 && (*(char *)(param_2 + 0x40) == '\a')))) {
      lVar2 = FUN_14030a32e(param_2 + 0x18);
      if (lVar2 != 0) {
        if (*(longlong *)(param_2 + 0x70) != 0) {
          FUN_14480f766(lVar2 + 0x2d0);
        }
        *(undefined8 *)(param_2 + 0x70) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1418ab04e FUN_1418ab04e body=443 status=ok
// SIG undefined FUN_1418ab04e(void)

void FUN_1418ab04e(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(int *)(param_2 + 0xc) != 0) && (uVar1 = *(uint *)(param_2 + 8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)(param_2 + 0xc))) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
      if (*(int *)(param_1 + 0x28) != 0) {
        uVar1 = *(uint *)(param_1 + 0x24);
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if ((lVar7 != 0) &&
             (((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x28) &&
               ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) && (*(char *)(param_2 + 0x40) == '\a'))))
          {
            lVar7 = FUN_14030a32e(param_2 + 0x18);
            if (lVar7 != 0) {
              uVar2 = *(undefined8 *)(param_2 + 8);
              uVar5 = FUN_14479d2ce((uint *)(param_1 + 0x24));
              local_48 = (undefined8 *)0x0;
              local_40 = 0;
              FUN_1446efa72(&local_48,0,3,0x10);
              puVar3 = local_48;
              local_40 = 3;
              *local_48 = &PTR_LAB_14a1c7440;
              LOCK();
              UNLOCK();
              lVar6 = DAT_14c758608 + 1;
              lVar4 = DAT_14c758608 + 1;
              if (lVar6 == 0) {
                LOCK();
                UNLOCK();
                lVar6 = DAT_14c758608 + 2;
                lVar4 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar4;
              local_48[2] = lVar6;
              *local_48 = &PTR_FUN_14b42bba0;
              local_48[3] = 0;
              FUN_14485c47a(local_48 + 3,uVar5);
              puVar3[4] = uVar2;
              puVar3[5] = param_1;
              FUN_140725f8c(lVar7 + 0x2d0,&local_50,&local_48);
              FUN_1449db362(&local_48);
              *(undefined8 *)(param_2 + 0x70) = local_50;
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ab20a FUN_1418ab20a body=22 status=ok
// SIG undefined FUN_1418ab20a(void)

undefined8 FUN_1418ab20a(int *param_1)

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
  
  plVar4 = DAT_14cb8b9b8;
  if (DAT_14cb8b9b8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb8b9b8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8b9b8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb8b9b8[0x3a] <= *(int *)((longlong)DAT_14cb8b9b8 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb8b9b8 + 0x300))(DAT_14cb8b9b8);
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



// FUNCTION 1418ab220 FUN_1418ab220 body=65 status=ok
// SIG undefined FUN_1418ab220(void)

void FUN_1418ab220(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1400796d0(param_1[2],*param_2,1);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418ab257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x248))(param_1,lVar1,0,*(code **)(*param_1 + 0x248));
    return;
  }
  return;
}



// FUNCTION 1418ab262 FUN_1418ab262 body=26 status=ok
// SIG undefined FUN_1418ab262(void)

void FUN_1418ab262(longlong param_1)

{
  FUN_1408a74b4();
  *(byte *)(param_1 + 0xd7) = *(byte *)(param_1 + 0xd7) | 5;
  return;
}



// FUNCTION 1418ab27c FUN_1418ab27c body=474 status=ok
// SIG undefined FUN_1418ab27c(void)

undefined8 * FUN_1418ab27c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = *(longlong *)(param_1 + 0x18);
  if (lVar8 == 0) {
    uVar6 = FUN_145cd95b4();
    lVar8 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x18) = lVar8;
  }
  lVar7 = *(longlong *)(param_1 + 0x20);
  if (lVar7 != 0) {
LAB_1418ab317:
    uVar6 = *(undefined8 *)(lVar7 + 0x18);
    plVar4 = *(longlong **)(lVar7 + 0x20);
    if (plVar4 == (longlong *)0x0) {
      local_48 = *param_3;
      local_38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      local_48 = *param_3;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_38 = plVar4;
    }
    local_40 = uVar6;
    FUN_140f360c6(uVar6,param_2,&local_48);
    plVar1 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if ((lVar8 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    plVar4 = *(longlong **)(lVar8 + 0xb8);
    if (plVar4 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar5 != '\0') {
        uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar7 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x20) = lVar7;
        if (lVar7 != 0) goto LAB_1418ab317;
        goto LAB_1418ab3b3;
      }
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
LAB_1418ab3b3:
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1418ab45a FUN_1418ab45a body=151 status=ok
// SIG undefined FUN_1418ab45a(void)

void FUN_1418ab45a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      local_68 = *(undefined8 *)(lVar2 + lVar4);
      FUN_1446dcdd4(local_60,&local_68);
      uVar3 = FUN_1400d6974(local_60);
      (**(code **)(*param_2 + 0x10))(param_2,uVar3);
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ab4f2 FUN_1418ab4f2 body=28 status=ok
// SIG undefined FUN_1418ab4f2(void)

void FUN_1418ab4f2(undefined8 param_1)

{
  FUN_140ce01e8(param_1,0);
  FUN_140d2f778(param_1);
  return;
}



// FUNCTION 1418ab50e FUN_1418ab50e body=196 status=ok
// SIG undefined FUN_1418ab50e(void)

void FUN_1418ab50e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [47];
  undefined1 local_89;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  undefined1 *local_58;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar1 = (longlong)*(int *)(param_1 + 0x48) << 5;
    do {
      local_89 = 0;
      local_78 = 0;
      local_68 = &PTR_LAB_14b42c0f0;
      local_88[0] = &LAB_143e3a378;
      local_60 = param_1;
      local_58 = &local_89;
      local_50 = lVar2;
      (**(code **)(**(longlong **)(lVar2 + 8) + 8))(*(longlong **)(lVar2 + 8),local_88);
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  FUN_141145156(param_1,0);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418ab5e2 FUN_1418ab5e2 body=119 status=ok
// SIG undefined FUN_1418ab5e2(void)

void FUN_1418ab5e2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b273730;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_140fbfaa9(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b2629f0;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418ab655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1418ab65a FUN_1418ab65a body=29 status=ok
// SIG undefined FUN_1418ab65a(void)

undefined8 FUN_1418ab65a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ab678 FUN_1418ab678 body=118 status=ok
// SIG undefined FUN_1418ab678(void)

void FUN_1418ab678(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42b0c0;
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



// FUNCTION 1418ab6ee FUN_1418ab6ee body=294 status=ok
// SIG undefined FUN_1418ab6ee(void)

undefined8 FUN_1418ab6ee(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 uStack_27;
  undefined6 uStack_26;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1418ab80e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1418ab80e;
    }
    FUN_140192332(param_1 + 0x28,&local_28,0);
    lVar7 = CONCAT62(uStack_26,CONCAT11(uStack_27,local_28));
  }
  else {
LAB_1418ab80e:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1418ab7bc;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x2c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))) {
      uStack_27 = 1;
      (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(param_1 + 0x18));
      uVar6 = 1;
      goto LAB_1418ab7bc;
    }
  }
  uVar6 = 0;
LAB_1418ab7bc:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ab816 FUN_1418ab816 body=269 status=ok
// SIG undefined FUN_1418ab816(void)

void FUN_1418ab816(longlong param_1,int param_2)

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



// FUNCTION 1418ab924 FUN_1418ab924 body=66 status=ok
// SIG undefined FUN_1418ab924(void)

undefined8 * FUN_1418ab924(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42b670;
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



// FUNCTION 1418ab966 FUN_1418ab966 body=275 status=ok
// SIG undefined FUN_1418ab966(void)

void FUN_1418ab966(longlong param_1,int param_2)

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



// FUNCTION 1418aba7a FUN_1418aba7a body=453 status=ok
// SIG undefined FUN_1418aba7a(void)

void FUN_1418aba7a(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xa8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 0xb) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 10;
    _Src = *(void **)((longlong)param_1 + 0xa0);
joined_r0x0001418abbaf:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = (ulonglong)(int)uVar1;
    if (10 < *(uint *)((longlong)param_1 + 0xac)) {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar4 = uVar2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar2 & (uVar4 + uVar2) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
    uVar4 = uVar4 >> 4;
    uVar3 = (uint)uVar4;
    if ((int)uVar3 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0xac) = 0x7fffffff;
      uVar4 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0xa0);
    }
    else {
      *(uint *)((longlong)param_1 + 0xac) = uVar3;
      _Src = *(void **)((longlong)param_1 + 0xa0);
      if (uVar3 < 0xb) goto joined_r0x0001418abbaf;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0xa0,0,uVar4,0x10);
      memmove(*(void **)((longlong)param_1 + 0xa0),param_1,(longlong)param_2 << 4);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0xa0,param_2,uVar4,0x10);
  return;
}



// FUNCTION 1418abc40 FUN_1418abc40 body=503 status=ok
// SIG undefined FUN_1418abc40(void)

void FUN_1418abc40(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x58);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0xb) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 10;
    _Src = *(void **)((longlong)param_1 + 0x50);
joined_r0x0001418abdba:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (10 < *(uint *)((longlong)param_1 + 0x5c)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_1418abcce;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_1418abcce:
    uVar8 = uVar8 >> 3;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x5c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x50);
    }
    else {
      *(uint *)((longlong)param_1 + 0x5c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x50);
      if (uVar6 < 0xb) goto joined_r0x0001418abdba;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x50,0,uVar8,8);
      memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,uVar8,8);
  return;
}



// FUNCTION 1418abe38 FUN_1418abe38 body=596 status=ok
// SIG undefined FUN_1418abe38(void)

void FUN_1418abe38(longlong *param_1)

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
            if (iVar2 - lVar11 == lVar10) goto LAB_1418ac02e;
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
LAB_1418ac02e:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ac08e FUN_1418ac08e body=29 status=ok
// SIG undefined FUN_1418ac08e(void)

undefined8 FUN_1418ac08e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ac0ac FUN_1418ac0ac body=255 status=ok
// SIG undefined FUN_1418ac0ac(void)

void FUN_1418ac0ac(longlong param_1,int param_2)

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



// FUNCTION 1418ac1ac FUN_1418ac1ac body=66 status=ok
// SIG undefined FUN_1418ac1ac(void)

undefined8 * FUN_1418ac1ac(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42bac0;
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



// FUNCTION 1418ac1ee FUN_1418ac1ee body=373 status=ok
// SIG undefined FUN_1418ac1ee(void)

void FUN_1418ac1ee(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418ac277;
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
LAB_1418ac277:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 1418ac364 FUN_1418ac364 body=57 status=ok
// SIG undefined FUN_1418ac364(void)

void FUN_1418ac364(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = 0xffffffffffffffff;
  iVar1 = *(int *)(param_1 + 3);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != iVar1) {
    FUN_14481578e(param_1 + 2);
    return;
  }
  return;
}



// FUNCTION 1418ac39e FUN_1418ac39e body=134 status=ok
// SIG undefined FUN_1418ac39e(void)

void FUN_1418ac39e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    uVar3 = FUN_140feeb70();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x10) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    return;
  }
  return;
}



// FUNCTION 1418ac434 FUN_1418ac434 body=20 status=ok
// SIG undefined FUN_1418ac434(void)

undefined8 FUN_1418ac434(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 != 0) {
    uVar1 = FUN_14480f766(param_1 + 0x28);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1418ac448 FUN_1418ac448 body=181 status=ok
// SIG undefined FUN_1418ac448(void)

void FUN_1418ac448(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  *(int *)(param_1 + 0x3c) = iVar1 + 1;
  uVar6 = (ulonglong)*(int *)(param_1 + 0x30);
  if ((longlong)uVar6 < 1) {
    *(int *)(param_1 + 0x3c) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar6 * 0x10 + -8;
    uVar9 = uVar6;
    while (((lVar2 = *(longlong *)(param_1 + 0x28), *(int *)(lVar2 + lVar8) != 0 &&
            (plVar3 = *(longlong **)(lVar2 + -8 + lVar8), plVar3 != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2), cVar5 != '\0'))) {
      lVar8 = lVar8 + -0x10;
      bVar4 = uVar9 < 2;
      uVar9 = uVar9 - 1;
      if (bVar4) {
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_1418ac4e3;
      }
    }
    uVar6 = uVar9 - 1;
    bVar7 = true;
  } while (1 < uVar9);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
LAB_1418ac4e3:
  FUN_14474d06a((longlong *)(param_1 + 0x28),0);
  return;
}



// FUNCTION 1418ac4fe FUN_1418ac4fe body=155 status=ok
// SIG undefined FUN_1418ac4fe(void)

undefined8 FUN_1418ac4fe(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x13c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x138);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x13c))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      if ((*(longlong *)(lVar3 + 0x40) != 0) && (lVar3 = FUN_1447210f0(), lVar3 != 0)) {
        if (*(longlong *)(lVar3 + 0x1f0) == 0) {
          puVar4 = (undefined8 *)(lVar3 + 0x458);
        }
        else {
          puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
        }
        return *puVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 1418ac59a FUN_1418ac59a body=415 status=ok
// SIG undefined FUN_1418ac59a(void)

longlong * FUN_1418ac59a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_1418ac670:
    *puVar3 = &PTR_LAB_14a1c8830;
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
    *puVar3 = &PTR_FUN_14b42de90;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1418ac670;
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
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14a1c8830;
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
    *puVar3 = &PTR_FUN_14b42de90;
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



// FUNCTION 1418ac73a FUN_1418ac73a body=265 status=ok
// SIG undefined FUN_1418ac73a(void)

void FUN_1418ac73a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(lVar1 + 0x10 + lVar8);
      if (lVar7 == 0) {
        uVar5 = FUN_140e391b0();
        lVar7 = FUN_14477b664(uVar5);
        *(longlong *)(lVar1 + 0x10 + lVar8) = lVar7;
      }
      lVar6 = *(longlong *)(lVar1 + 0x18 + lVar8);
      if (lVar6 == 0) {
        if ((lVar7 != 0) && (*(longlong *)(lVar1 + 8 + lVar8) != 0)) {
          plVar2 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
            *(undefined8 *)(lVar1 + 0x18 + lVar8) = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar5,lVar1 + 8 + lVar8);
            *(longlong *)(lVar1 + 0x18 + lVar8) = lVar6;
            if (lVar6 != 0) goto LAB_1418ac787;
          }
        }
      }
      else {
LAB_1418ac787:
        cVar4 = *(char *)(lVar1 + lVar8);
        if (cVar4 == '\0') {
          FUN_1410b1524(param_1);
        }
        else if (cVar4 == '\x01') {
          FUN_14109b7da(param_1);
        }
        else {
          if (cVar4 != '\x02') {
            return;
          }
          FUN_143e3c7b4(param_1,lVar6);
        }
      }
      lVar8 = lVar8 + 0x20;
    } while ((longlong)(int)lVar3 * 0x20 != lVar8);
  }
  return;
}



// FUNCTION 1418ac844 FUN_1418ac844 body=32 status=ok
// SIG undefined FUN_1418ac844(void)

undefined8 FUN_1418ac844(undefined8 param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,&DAT_14cb8bf58);
  return param_2;
}



// FUNCTION 1418ac864 FUN_1418ac864 body=73 status=ok
// SIG undefined FUN_1418ac864(void)

undefined8 * FUN_1418ac864(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_1402b5374(param_2,0,DAT_14cb8bf80);
  FUN_1402b5374(param_2,1,*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 1418ac8ae FUN_1418ac8ae body=44 status=ok
// SIG undefined FUN_1418ac8ae(void)

void FUN_1418ac8ae(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  FUN_1446e7478(param_3,param_2,uVar1,1);
  return;
}



// FUNCTION 1418ac8da FUN_1418ac8da body=22 status=ok
// SIG undefined FUN_1418ac8da(void)

ulonglong FUN_1418ac8da(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14cb8bff0;
  if (DAT_14cb8bff0 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cb8bff0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8bff0 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cb8bff0 + 0x1fc) < (int)DAT_14cb8bff0[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14cb8bff0 + 0x300))(DAT_14cb8bff0);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 1418ac8f0 FUN_1418ac8f0 body=42 status=ok
// SIG undefined FUN_1418ac8f0(void)

bool FUN_1418ac8f0(longlong param_1)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x988) == '\0') {
    FUN_140b8e10e();
    bVar1 = *(char *)(param_1 + 0x988) != '\0';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 1418ac91a FUN_1418ac91a body=167 status=ok
// SIG undefined FUN_1418ac91a(void)

void FUN_1418ac91a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x700) == 2) {
    FUN_1407bf826(param_1);
  }
  if (*(char *)(param_1 + 0x988) == '\x02') {
    if ((((*param_2 != 0) && (param_2[1] != 0)) && (-1 < (int)param_2[2])) &&
       ((param_2[3] != 0 && (param_2[4] != 0)))) {
      *(int *)(param_1 + 0x9b4) = *(int *)(param_1 + 0x9b4) + 1;
    }
    lVar1 = param_1 + 0x990;
    plVar3 = (longlong *)FUN_140512bb0(lVar1);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0xa50))(plVar3,param_2);
    }
    cVar2 = FUN_140512f86(lVar1);
    if ((cVar2 != '\0') && (*(char *)(param_1 + 0x968) == '\x02')) {
      FUN_147e247dc(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1418ac9c2 FUN_1418ac9c2 body=234 status=ok
// SIG undefined FUN_1418ac9c2(void)

void FUN_1418ac9c2(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong *local_30;
  longlong lStack_28;
  ulonglong local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (longlong *)0x0;
  lStack_28 = 0;
  local_20 = 0;
  local_a0 = DAT_14cb8c198;
  local_18 = 1;
  local_88 = 0;
  local_80 = 0;
  FUN_140ab6af6(param_2,&local_a0);
  FUN_14072ffb2(lStack_28,local_20 & 0xffffffff);
  if (lStack_28 != 0) {
    FUN_1400020a8();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418acaae FUN_1418acaae body=325 status=ok
// SIG undefined FUN_1418acaae(void)

undefined8 * FUN_1418acaae(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = *(longlong *)(param_1 + -0x80);
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      FUN_1407be904(lVar1,param_2,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418acbf4 FUN_1418acbf4 body=84 status=ok
// SIG undefined FUN_1418acbf4(void)

void FUN_1418acbf4(longlong param_1)

{
  longlong lVar1;
  
  FUN_140115e24();
  FUN_1402d7906(param_1 + 0x520,param_1 + 0x4a0);
  lVar1 = param_1;
  while( true ) {
    if (lVar1 == 0) {
      FUN_14071049e(param_1 + 0x4b0,param_1);
      return;
    }
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x20);
  }
  return;
}



// FUNCTION 1418acc48 FUN_1418acc48 body=108 status=ok
// SIG undefined FUN_1418acc48(void)

void FUN_1418acc48(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    puVar1 = &DAT_14cb7c580;
    if (param_2 != '\0') {
      puVar1 = &DAT_14cb7c588;
    }
    local_10 = *puVar1;
    FUN_140bfca4e(param_1 + 0x520,&DAT_14cb7bde0,&local_10,0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418accb6 FUN_1418accb6 body=118 status=ok
// SIG undefined FUN_1418accb6(void)

void FUN_1418accb6(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    cVar1 = FUN_140d0050e();
    puVar2 = &DAT_14cb7c580;
    if (cVar1 != '\0') {
      puVar2 = &DAT_14cb7c588;
    }
    local_18 = *puVar2;
    FUN_140bfca4e(param_1 + 0x520,&DAT_14cb8c1a0,&local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418acd2e FUN_1418acd2e body=65 status=ok
// SIG undefined FUN_1418acd2e(void)

void FUN_1418acd2e(longlong param_1)

{
  longlong lVar1;
  
  FUN_140115e24();
  lVar1 = param_1;
  while( true ) {
    if (lVar1 == 0) {
      FUN_14071049e(param_1 + 0x448,param_1);
      return;
    }
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x20);
  }
  return;
}



// FUNCTION 1418acd70 FUN_1418acd70 body=176 status=ok
// SIG undefined FUN_1418acd70(void)

undefined8 * FUN_1418acd70(longlong param_1,undefined8 *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  undefined8 local_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = param_4[1];
  if (iVar1 == 0) {
    local_30[0] = 0;
    goto LAB_1418acde0;
  }
  if ((*param_4 == 0) || (*param_4 == DAT_14c948000)) {
LAB_1418ace04:
    local_38 = DAT_14c948620;
    local_40 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (param_4[9] < 1)) {
      param_4 = param_4 + 2;
    }
    else {
      param_4 = *(int **)(param_4 + 6);
    }
    if (iVar1 < 1) goto LAB_1418ace04;
    local_38 = param_4[2];
    local_40 = *(undefined8 *)param_4;
  }
  FUN_140f4ea62(param_1 + 0x18,local_30,param_3,&local_40);
LAB_1418acde0:
  *param_2 = local_30[0];
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ace22 FUN_1418ace22 body=88 status=ok
// SIG undefined FUN_1418ace22(void)

void FUN_1418ace22(longlong param_1)

{
  FUN_14010ed74();
  FUN_14071060c(param_1 + 0xc58,param_1);
  FUN_140710650(param_1 + 0xe68,*(undefined8 *)(param_1 + 0xa8));
  if ((*(uint *)(param_1 + 8) & 0x30) == 0) {
    FUN_1402d7906(param_1 + 0xd10,param_1 + 0xc30);
    return;
  }
  return;
}


