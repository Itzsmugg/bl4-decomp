// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149527af8 FUN_149527af8 body=631 status=ok
// SIG undefined FUN_149527af8(void)

undefined8 * FUN_149527af8(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar6 != 0) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar6);
    }
    FUN_1495284ea(param_2,uVar6);
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
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar5)) {
      *(int *)(param_2 + 9) = iVar5;
      FUN_1495282da(param_2);
    }
  }
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    do {
      uVar3 = *(ulonglong *)(*local_90 + (longlong)iStack_74 * 0x18);
      plVar4 = *(longlong **)(*local_90 + 8 + (longlong)iStack_74 * 0x18);
      local_a0 = uVar3;
      local_98 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      }
      uVar6 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      iVar5 = FUN_149527dec(param_3,uVar6 >> 0x10 ^ uVar6,&local_a0);
      plVar4 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (iVar5 == -1) {
        FUN_149527ed0(param_2,&local_68,(longlong)iStack_74 * 0x18 + *local_90);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < (int)local_80[3]);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149527d72 FUN_149527d72 body=122 status=ok
// SIG undefined FUN_149527d72(void)

longlong FUN_149527d72(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_149528686(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 149527dec FUN_149527dec body=228 status=ok
// SIG undefined FUN_149527dec(void)

int FUN_149527dec(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x18);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x18);
      if (plVar6 != (longlong *)0x0) {
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
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x10 + lVar8 * 0x18);
    }
  }
  return -1;
}



// FUNCTION 149527ed0 FUN_149527ed0 body=413 status=ok
// SIG undefined FUN_149527ed0(void)

undefined4 * FUN_149527ed0(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14952806e(param_1,local_48);
  uVar9 = *param_3;
  *local_40 = uVar9;
  uVar3 = param_3[1];
  local_40[1] = uVar3;
  if (uVar3 == 0) {
    *(undefined4 *)(local_40 + 2) = 0xffffffff;
    local_4c = local_48[0];
  }
  else {
    LOCK();
    *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1;
    UNLOCK();
    plVar4 = (longlong *)local_40[1];
    *(undefined4 *)(local_40 + 2) = 0xffffffff;
    local_4c = local_48[0];
    uVar9 = *local_40;
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
  }
  uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  cVar6 = FUN_149528154(param_1,uVar7,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x14) = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_1495282da(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952806e FUN_14952806e body=230 status=ok
// SIG undefined FUN_14952806e(void)

int * FUN_14952806e(longlong *param_1,int *param_2)

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



// FUNCTION 149528154 FUN_149528154 body=274 status=ok
// SIG undefined FUN_149528154(void)

undefined8 FUN_149528154(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar8 = FUN_149527dec(param_1,param_2,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar8 = FUN_149527dec(param_1);
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
    if (iVar8 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x18);
      plVar4 = *(longlong **)(puVar3 + 2);
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
      uVar5 = *(undefined4 *)((longlong)param_3 + 4);
      uVar6 = *(undefined4 *)(param_3 + 1);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
      *puVar3 = *(undefined4 *)param_3;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      FUN_149528268(param_1,*param_4);
      *param_4 = iVar8;
      uVar9 = 1;
      goto LAB_14952817c;
    }
  }
  uVar9 = 0;
LAB_14952817c:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149528268 FUN_149528268 body=114 status=ok
// SIG undefined FUN_149528268(void)

void FUN_149528268(longlong *param_1,int param_2)

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



// FUNCTION 1495282da FUN_1495282da body=527 status=ok
// SIG undefined FUN_1495282da(void)

void FUN_1495282da(longlong *param_1)

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



// FUNCTION 1495284ea FUN_1495284ea body=411 status=ok
// SIG undefined FUN_1495284ea(void)

void FUN_1495284ea(longlong *param_1,uint param_2)

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



// FUNCTION 149528686 FUN_149528686 body=218 status=ok
// SIG undefined FUN_149528686(void)

longlong * FUN_149528686(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_149524720(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar5);
          *(longlong *)(lVar4 + 8 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x10 + lVar5) = *(undefined8 *)(lVar2 + 0x10 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 149528760 FUN_149528760 body=891 status=ok
// SIG undefined FUN_149528760(void)

undefined4
FUN_149528760(longlong *param_1,undefined8 *param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 auStack_e8 [40];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_149525546(param_1 + 0x9c,&local_60,param_2);
  if (local_60 != (longlong *)0x0) goto LAB_149528858;
  local_80 = *param_2;
  local_78 = param_2[1];
  if (local_78 != 0) {
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_70,&local_80);
  plVar1 = local_58;
  plVar2 = local_68;
  local_60 = local_70;
  if (local_68 == (longlong *)0x0) {
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)0x0;
LAB_149528a99:
      local_60 = local_70;
      LOCK();
      plVar2 = plVar1 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
joined_r0x000149528a85:
        if (iVar4 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    if (local_68 == local_58) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar1 = plVar2;
        goto joined_r0x000149528a85;
      }
    }
    else {
      bVar6 = local_58 != (longlong *)0x0;
      local_58 = local_68;
      if (bVar6) goto LAB_149528a99;
    }
  }
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
LAB_149528858:
  plVar1 = local_60;
  (**(code **)(*local_60 + 0x10))(local_60,param_3);
  local_90 = plVar1;
  local_88 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  local_a0 = *param_2;
  local_98 = param_2[1];
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
    UNLOCK();
  }
  FUN_149526d5a(param_1 + 0x9c,&local_a0,&local_90);
  plVar1 = local_60;
  (**(code **)(*local_60 + 0x58))(local_60,&local_70);
  *(byte *)(local_70 + 6) = *(byte *)(local_70 + 6) | 0x80;
  FUN_1405d299c(local_70,param_5);
  if (param_3 < param_4) {
    local_b0 = plVar1;
    local_a8 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FUN_146af67c8(param_1,&local_b0);
  }
  else {
    local_b0 = plVar1;
    local_a8 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FUN_146af6a2a(param_1,&local_b0);
  }
  plVar1 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_a8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((*(byte *)((longlong)local_70 + 0x39) & 0x19) == 0) {
    local_bc = (float)DAT_14c8463f8;
    local_c0 = (float)DAT_14c8463f0;
  }
  else {
    FUN_144b013c4(local_70,&local_c0);
  }
  local_b8 = local_c0;
  local_b4 = local_bc;
  FUN_146af3580(&local_b0,*(undefined4 *)((longlong)param_1 + 0x3ec));
  uVar5 = local_b0._4_4_;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)local_68 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149528adc FUN_149528adc body=91 status=ok
// SIG undefined FUN_149528adc(void)

void FUN_149528adc(longlong param_1)

{
  FUN_149525f90(param_1 + 0xc0,param_1 + 0xa8);
  FUN_14951ff11(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) == 0) {
    return;
  }
  FUN_14952659e(param_1 + 0xa8,0);
  return;
}



// FUNCTION 149528b38 FUN_149528b38 body=134 status=ok
// SIG undefined FUN_149528b38(void)

void FUN_149528b38(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_2;
    local_18 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (**(code **)(*param_1 + 0x60))();
  }
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149528bc0 FUN_149528bc0 body=359 status=ok
// SIG undefined FUN_149528bc0(void)

longlong FUN_149528bc0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_30,"TableView.Row",1);
  uVar3 = FUN_145817f3a(lVar2,local_30,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  *(longlong *)(param_1 + 0x1b0) = lVar2;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x238) = 1;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined2 *)(param_1 + 0x250) = 1;
  *(undefined1 *)(param_1 + 0x252) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined8 *)(param_1 + 600) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x260) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149528d28 FUN_149528d28 body=125 status=ok
// SIG undefined FUN_149528d28(void)

longlong * FUN_149528d28(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  FUN_14952d5f2(param_1[2],*param_1,param_3);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 149528da6 FUN_149528da6 body=160 status=ok
// SIG undefined FUN_149528da6(void)

void FUN_149528da6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x260);
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
  FUN_1449db362(param_1 + 0x240);
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x208);
  FUN_1449db362(param_1 + 0x1f8);
  FUN_1449db362(param_1 + 0x1e8);
  FUN_1449db362(param_1 + 0x1d8);
  FUN_1449db362(param_1 + 0x1c8);
  FUN_1449db362(param_1 + 0x1b8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 149528e46 FUN_149528e46 body=333 status=ok
// SIG undefined FUN_149528e46(void)

longlong * FUN_149528e46(longlong *param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_3;
  plVar3 = (longlong *)FUN_14001cc68(0x390,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bd36670;
  plVar4 = plVar3 + 2;
  FUN_149528f94(plVar4);
  local_38 = plVar4;
  local_30 = plVar3;
  FUN_14952d546(&local_38,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_149528f23;
    param_1[1] = 0;
LAB_149528eeb:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_149528f23;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_149528f23;
      goto LAB_149528eeb;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_149528f23;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_149528f23:
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x380;
  FUN_140a52e78(*param_1 + 8,"STableRow<ItemType>",
                "Runtime\\Slate\\Public\\Widgets/Views/SListView.h",param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149528f94 FUN_149528f94 body=202 status=ok
// SIG undefined FUN_149528f94(void)

undefined8 * FUN_149528f94(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_149f0e360;
  FUN_140a55e66(param_1 + 1);
  *param_1 = &PTR_LAB_14bd36690;
  param_1[1] = &PTR_FUN_14bd36730;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((longlong)param_1 + 700) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 2;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 4;
  return param_1;
}



// FUNCTION 14952905e FUN_14952905e body=9 status=ok
// SIG undefined FUN_14952905e(void)

void FUN_14952905e(longlong param_1)

{
  FUN_14952c600(param_1 + 0x10);
  return;
}



// FUNCTION 149529068 FUN_149529068 body=29 status=ok
// SIG undefined FUN_149529068(void)

undefined8 FUN_149529068(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14952909a FUN_14952909a body=149 status=ok
// SIG undefined FUN_14952909a(void)

byte FUN_14952909a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_1495290d6;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_1495290d6:
  lVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar6);
    plVar9 = (longlong *)(uVar7 & 0xffffffff);
  }
  if (!bVar3) {
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
  return lVar6 != 0 & (byte)plVar9;
}



// FUNCTION 149529130 FUN_149529130 body=248 status=ok
// SIG undefined FUN_149529130(void)

void FUN_149529130(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14952917f;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14952917f:
  cVar4 = (**(code **)(*plVar9 + 0x68))(plVar9,*(undefined4 *)(param_1 + 0x2b8));
  if ((cVar4 != '\0') &&
     (puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,param_1),
     puVar7 != (undefined8 *)0x0)) {
    uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,puVar7);
    local_38 = *puVar7;
    local_30 = puVar7[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar9 + 0x50))(plVar9,&local_38,uVar6 ^ 1);
  }
  if (!bVar2) {
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14952922a FUN_14952922a body=149 status=ok
// SIG undefined FUN_14952922a(void)

byte FUN_14952922a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_149529266;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_149529266:
  lVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,lVar6);
    plVar9 = (longlong *)(uVar7 & 0xffffffff);
  }
  if (!bVar3) {
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
  return lVar6 != 0 & (byte)plVar9;
}



// FUNCTION 1495292c0 FUN_1495292c0 body=124 status=ok
// SIG undefined FUN_1495292c0(void)

undefined4 FUN_1495292c0(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_1495292f9;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_1495292f9:
  uVar5 = (**(code **)(*plVar7 + 0x88))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
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
  return uVar5;
}



// FUNCTION 14952933c FUN_14952933c body=124 status=ok
// SIG undefined FUN_14952933c(void)

undefined1 FUN_14952933c(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_149529376;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar5 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_149529376:
  uVar4 = (**(code **)(*plVar7 + 0x68))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
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
  return uVar4;
}



// FUNCTION 1495293b8 FUN_1495293b8 body=144 status=ok
// SIG undefined FUN_1495293b8(void)

longlong FUN_1495293b8(longlong param_1,longlong param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_1495293f4;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_1495293f4:
  uVar5 = (**(code **)(*plVar7 + 0x90))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_144a69486(param_2,uVar5);
  if (!bVar2) {
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
  return param_2;
}



// FUNCTION 149529448 FUN_149529448 body=126 status=ok
// SIG undefined FUN_149529448(void)

undefined4 FUN_149529448(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_149529482;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_149529482:
  uVar5 = (**(code **)(*plVar7 + 0x98))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
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
  return uVar5;
}



// FUNCTION 1495294c6 FUN_1495294c6 body=154 status=ok
// SIG undefined FUN_1495294c6(void)

longlong * FUN_1495294c6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 == (longlong *)0x0) {
LAB_14952954f:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14952954f;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x10) + -8;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar7 = 0;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
    lVar6 = lVar7 + 8;
    if (lVar7 == 0) {
      lVar6 = 0;
    }
    *param_2 = lVar6;
    param_2[1] = (longlong)plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1495295c4 FUN_1495295c4 body=248 status=ok
// SIG undefined FUN_1495295c4(void)

void FUN_1495295c4(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_149529613;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_149529613:
  cVar4 = (**(code **)(*plVar9 + 0x68))(plVar9,*(undefined4 *)(param_1 + 0x2b8));
  if ((cVar4 != '\0') &&
     (puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,param_1),
     puVar7 != (undefined8 *)0x0)) {
    uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,puVar7);
    local_38 = *puVar7;
    local_30 = puVar7[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,&local_38,uVar6 ^ 1);
  }
  if (!bVar2) {
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495296cc FUN_1495296cc body=114 status=ok
// SIG undefined FUN_1495296cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1495296cc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x2b0);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0xb8))();
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149529737. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(_DAT_00000000 + 0xb8))(0);
  return uVar7;
}



// FUNCTION 14952973e FUN_14952973e body=1464 status=ok
// SIG undefined FUN_14952973e(void)

void FUN_14952973e(longlong param_1,uint param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_6d8 [32];
  undefined1 *local_6b8;
  longlong local_6b0;
  undefined1 local_6a1;
  undefined1 local_6a0 [8];
  longlong *local_698;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined1 local_678;
  undefined8 local_670;
  undefined4 local_668;
  undefined4 local_660;
  undefined1 local_65c;
  undefined8 local_658;
  undefined8 uStack_650;
  longlong local_648;
  longlong *plStack_640;
  longlong *local_630;
  undefined8 local_628;
  longlong *local_620;
  undefined2 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  longlong *local_5f0;
  undefined8 local_5e8;
  longlong *local_5e0;
  undefined8 local_5d8;
  longlong *local_5d0;
  undefined8 local_5c8;
  longlong *local_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined1 local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined1 local_590 [192];
  undefined1 local_4d0 [424];
  undefined8 local_328;
  undefined1 local_318 [24];
  undefined1 local_300 [16];
  undefined2 local_2f0;
  undefined1 auStack_2e8 [16];
  undefined1 local_2d8 [192];
  undefined1 local_218 [440];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  *(undefined8 *)(param_1 + 0x368) = *param_4;
  plVar6 = (longlong *)param_4[1];
  plVar8 = *(longlong **)(param_1 + 0x370);
  if (plVar8 != plVar6) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar6;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  if (param_2 < 2) {
    local_5a8 = *(undefined1 *)(param_3 + 4);
    local_5b8 = *param_3;
    uStack_5b4 = param_3[1];
    uStack_5b0 = param_3[2];
    uStack_5ac = param_3[3];
    local_5a0 = 0;
    local_598 = 0;
    FUN_140a58be0(&local_5a0,param_3 + 6);
    uVar4 = FUN_140a58d14(param_1 + 0x220,&local_5b8);
    FUN_140a58896(uVar4,param_4);
    lVar5 = param_1 + 0x200;
  }
  else {
    FUN_140a5296a(local_218);
    FUN_140a50426(local_2d8);
    lVar5 = FUN_140a52578(local_2d8);
    *(undefined4 *)(lVar5 + 0x40) = 3;
    *(undefined1 *)(lVar5 + 0x44) = 1;
    *(undefined4 *)(lVar5 + 0x48) = 0;
    *(undefined1 *)(lVar5 + 0x4c) = 1;
    FUN_146a2b81a(local_4d0);
    local_328 = *(undefined8 *)(param_1 + 0x2d0);
    local_610 = CONCAT11(1,*(undefined1 *)(param_1 + 0x37c));
    local_608 = 0;
    uStack_600 = 0;
    local_2f0 = local_610;
    FUN_144a450dc(auStack_2e8,&local_608);
    FUN_1449db362(&local_608);
    plVar6 = *(longlong **)(param_1 + 0x18);
    if (plVar6 == (longlong *)0x0) {
LAB_149529916:
      local_648 = 0;
      plStack_640 = (longlong *)0x0;
    }
    else {
      iVar3 = (int)plVar6[1];
      do {
        if (iVar3 == 0) goto LAB_149529916;
        LOCK();
        iVar2 = (int)plVar6[1];
        bVar9 = iVar3 == iVar2;
        if (bVar9) {
          *(int *)(plVar6 + 1) = iVar3 + 1;
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
        UNLOCK();
      } while (!bVar9);
      local_648 = *(longlong *)(param_1 + 0x10) + -8;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        local_648 = 0;
      }
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      plStack_640 = plVar6;
      if ((int)*plVar8 == 0) {
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
    local_630 = &local_648;
    FUN_14952c424(&local_628);
    if (local_620 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_620 + 1) = (int)local_620[1] + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(param_1 + 0x2e0);
    *(undefined8 *)(param_1 + 0x2d8) = local_628;
    *(longlong **)(param_1 + 0x2e0) = local_620;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    FUN_14952c3ac(&local_628,&local_5f8,local_4d0);
    local_5e8 = local_5f8;
    local_5e0 = local_5f0;
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5f0 + 1) = (int)local_5f0[1] + 1;
      UNLOCK();
    }
    local_6b0 = param_1 + 0x1e8;
    uVar4 = FUN_140a4fe8e(lVar5,&local_5e8);
    uVar4 = FUN_140a52392(local_218,uVar4);
    FUN_140a50426(local_590);
    local_660 = 0x3f800000;
    local_65c = 1;
    local_658 = 0;
    uStack_650 = 0;
    plVar6 = (longlong *)FUN_140a5475a(local_590);
    lVar5 = *plVar6;
    local_688 = *param_3;
    uStack_684 = param_3[1];
    uStack_680 = param_3[2];
    uStack_67c = param_3[3];
    local_678 = *(undefined1 *)(param_3 + 4);
    local_670 = 0;
    local_668 = 0;
    FUN_140a58be0(&local_670,param_3 + 6);
    *(undefined1 *)(plVar6 + 5) = local_678;
    *(undefined4 *)(plVar6 + 3) = local_688;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_684;
    *(undefined4 *)(plVar6 + 4) = uStack_680;
    *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_67c;
    FUN_144a450dc(plVar6 + 6,&local_670);
    FUN_1449db362(&local_670);
    uVar7 = FUN_146a07044(plVar6,param_4);
    uVar4 = FUN_140a52392(uVar4,uVar7);
    local_6b8 = &local_6a1;
    FUN_140a541dc(local_6a0,"SHorizontalBox","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",
                  0xc3);
    FUN_140a50ec6(local_6a0,&local_5d8,uVar4);
    local_5c8 = local_5d8;
    local_5c0 = local_5d0;
    if (local_5d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5d0 + 1) = (int)local_5d0[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(local_6b0,&local_5c8);
    plVar6 = local_5c0;
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5c0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_5d0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_5d0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_5d0)(local_5d0);
        LOCK();
        piVar1 = (int *)((longlong)local_5d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5d0 + 0x10))(local_5d0);
        }
      }
    }
    if (local_698 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_698 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_698)(local_698);
        LOCK();
        piVar1 = (int *)((longlong)local_698 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_698 + 0x10))(local_698);
        }
      }
    }
    FUN_140a509a6(local_590);
    plVar6 = local_5e0;
    if (local_5e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5e0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_5e0)(local_5e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_5f0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_5f0)(local_5f0);
        LOCK();
        piVar1 = (int *)((longlong)local_5f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5f0 + 0x10))(local_5f0);
        }
      }
    }
    if (local_620 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_620 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_620)(local_620);
        LOCK();
        piVar1 = (int *)((longlong)local_620 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_620 + 0x10))(local_620);
        }
      }
    }
    plVar6 = plStack_640;
    if (plStack_640 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_640 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plStack_640)(plStack_640);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    FUN_1449db362(auStack_2e8);
    FUN_1449db362(local_300);
    FUN_1449db362(local_318);
    FUN_140a4ff8c(local_4d0);
    FUN_140a509a6(local_2d8);
    FUN_145ab33da(local_218);
  }
  *(longlong *)(param_1 + 0x360) = lVar5;
  if ((local_60 ^ (ulonglong)auStack_6d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149529cf8 FUN_149529cf8 body=1060 status=ok
// SIG undefined FUN_149529cf8(void)

int FUN_149529cf8(longlong param_1,int param_2,undefined8 param_3,ulonglong *param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,float *param_8)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  float *local_110;
  float *local_108;
  undefined4 local_100;
  float *local_f8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  ulonglong local_b4;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar13 = *(longlong **)(param_1 + 0x2b0);
  bVar8 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar10 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_149529d7b;
      }
      LOCK();
      iVar9 = (int)plVar13[1];
      bVar16 = iVar10 == iVar9;
      if (bVar16) {
        *(int *)(plVar13 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
    } while (!bVar16);
    plVar14 = *(longlong **)(param_1 + 0x2a8);
    bVar8 = false;
  }
LAB_149529d7b:
  lVar15 = 0x890;
  if (param_2 == 2) {
    lVar15 = 0x940;
  }
  lVar12 = 0x7e0;
  if (param_2 != 0) {
    lVar12 = lVar15;
  }
  lVar12 = lVar12 + *(longlong *)(param_1 + 0x2c8);
  iVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
  if (iVar10 == 1) {
    pfVar11 = (float *)(lVar12 + 8);
    cVar6 = *(char *)(lVar12 + 0x18);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar6 == '\x03') {
        pfVar11 = param_8 + 8;
      }
      else {
        pfVar11 = param_8 + 4;
      }
    }
    local_d8 = pfVar11[3] * param_8[3];
    local_dc = pfVar11[2] * param_8[2];
    local_e0 = pfVar11[1] * param_8[1];
    local_e4 = *pfVar11 * *param_8;
    local_110 = &local_e4;
    local_b4 = *param_4;
    local_c8 = *(undefined8 *)((longlong)param_4 + 0xc);
    local_c0 = *(float *)(param_4 + 1);
    local_bc = 0;
    local_ac = *(float *)((longlong)param_4 + 0x1c);
    fStack_a8 = *(float *)(param_4 + 4);
    fStack_a4 = *(float *)((longlong)param_4 + 0x24);
    fStack_a0 = *(float *)(param_4 + 5);
    local_9c = *(undefined8 *)((longlong)param_4 + 0x2c);
    local_94 = local_94 & 0xfc | *(char *)((longlong)param_4 + 0x34) * '\x02' & 2U;
    local_118 = 0;
    FUN_140239bd2(param_6,param_7,&local_c8,lVar12);
  }
  else {
    uVar7 = *param_4;
    fVar20 = (float)(uVar7 >> 0x20) * 0.5;
    fVar19 = (float)uVar7 * 0.5;
    fVar18 = fVar20 - fVar19;
    fVar17 = fVar19 - fVar20;
    pfVar11 = (float *)(lVar12 + 8);
    cVar6 = *(char *)(lVar12 + 0x18);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar6 == '\x03') {
        pfVar11 = param_8 + 8;
      }
      else {
        pfVar11 = param_8 + 4;
      }
    }
    local_d8 = pfVar11[3] * param_8[3];
    local_dc = pfVar11[2] * param_8[2];
    local_e0 = pfVar11[1] * param_8[1];
    local_e4 = *pfVar11 * *param_8;
    local_f8 = &local_e4;
    local_108 = &local_d4;
    local_cc = 1;
    local_c0 = *(float *)(param_4 + 1);
    fVar2 = *(float *)((longlong)param_4 + 0x1c);
    local_c8 = CONCAT44(fVar18 * local_c0 + *(float *)(param_4 + 2),
                        fVar17 * local_c0 + *(float *)((longlong)param_4 + 0xc));
    local_b4 = uVar7 << 0x20 | uVar7 >> 0x20;
    fVar3 = *(float *)(param_4 + 4);
    fVar4 = *(float *)(param_4 + 5);
    fVar5 = *(float *)((longlong)param_4 + 0x24);
    fStack_a0 = fVar3 * 0.0 + fVar4;
    fStack_a4 = fVar2 * 0.0 + fVar5;
    fStack_a8 = fVar4 * 0.0 + fVar3;
    local_ac = fVar5 * 0.0 + fVar2;
    local_bc = 0;
    local_9c = CONCAT44(fVar17 * fVar3 + fVar18 * fVar4 + *(float *)(param_4 + 6),
                        fVar17 * fVar2 + fVar18 * fVar5 + *(float *)((longlong)param_4 + 0x2c));
    local_94 = local_94 & 0xfc | *(char *)((longlong)param_4 + 0x34) * '\x02' & 2U;
    local_100 = 0;
    local_110 = (float *)CONCAT44(local_110._4_4_,0xbfc90fdb);
    local_118 = 0;
    local_d4 = fVar20;
    local_d0 = fVar19;
    FUN_14695471e(param_6,param_7,&local_c8,lVar12);
  }
  if (!bVar8) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_7 + 1;
}



// FUNCTION 14952a11e FUN_14952a11e body=216 status=ok
// SIG undefined FUN_14952a11e(void)

void FUN_14952a11e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x368) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar3 = *(longlong **)(param_1 + 0x370);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar2;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1456f28da(param_1 + 8,&local_30);
  plVar2 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952a1f8 FUN_14952a1f8 body=802 status=ok
// SIG undefined FUN_14952a1f8(void)

longlong FUN_14952a1f8(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_88 [47];
  char local_59;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar13 = (longlong *)param_1[0x56];
  bVar3 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar8 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_14952a252;
      }
      LOCK();
      iVar9 = (int)plVar13[1];
      bVar15 = iVar8 == iVar9;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar8 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
      UNLOCK();
    } while (!bVar15);
    plVar14 = (longlong *)param_1[0x55];
    bVar3 = false;
  }
LAB_14952a252:
  (**(code **)(*plVar14 + 0xe8))(plVar14,&local_58);
  cVar4 = (**(code **)(*local_58 + 0x198))();
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_50 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  cVar5 = (**(code **)(*plVar14 + 0x68))(plVar14,(int)param_1[0x57]);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1e650) && (FUN_144b3d300(&DAT_14cc1e650), DAT_14cc1e650 == -1)) {
    FUN_1446ddc76(&DAT_14cc1e648,"GenericWhiteBox",1);
    _Init_thread_footer(&DAT_14cc1e650);
  }
  plVar10 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = DAT_14c96b350;
  }
  lVar12 = 0;
  (**(code **)(*plVar10 + 0x50))(plVar10,DAT_14cc1e648,0,0);
  lVar11 = (**(code **)(*plVar14 + 0x48))(plVar14,param_1);
  if (lVar11 == 0) goto LAB_14952a417;
  local_59 = cVar4;
  cVar4 = (**(code **)(*plVar14 + 0x10))(plVar14,lVar11);
  cVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,lVar11);
  iVar8 = (**(code **)(*param_1 + 0x78))(param_1);
  uVar2 = *(uint *)(param_1 + 0x57);
  if (cVar4 == '\0') {
    if (cVar6 == '\0') goto LAB_14952a3c1;
    lVar12 = param_1[0x59];
    if (local_59 == '\0') {
      if (*(char *)((longlong)param_1 + 0x43) == '\0') {
        lVar12 = lVar12 + 0xaa0;
        goto LAB_14952a417;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x43) == '\0') {
      lVar12 = lVar12 + 0x9f0;
      goto LAB_14952a417;
    }
    if ((uVar2 & 1) != 0) goto LAB_14952a410;
  }
  else {
    if (*(char *)((longlong)param_1 + 700) == '\x01') {
      lVar12 = param_1[0x59];
      if (local_59 == '\0') {
        if (*(char *)((longlong)param_1 + 0x43) == '\0') {
          lVar12 = lVar12 + 0x2d0;
        }
        else {
          lVar12 = lVar12 + 0x220;
        }
      }
      else if (*(char *)((longlong)param_1 + 0x43) == '\0') {
        lVar12 = lVar12 + 0x170;
      }
      else {
        lVar12 = lVar12 + 0xc0;
      }
      goto LAB_14952a417;
    }
LAB_14952a3c1:
    if (((cVar5 != '\0') && (*(char *)(param_1[0x59] + 0x380) == '\x01')) &&
       (iVar9 = (**(code **)(*param_1 + 0x38))(param_1), iVar9 == 0)) {
      if (*(char *)((longlong)param_1 + 0x43) == '\x01') {
        lVar12 = param_1[0x59] + 0x440;
      }
      else {
        lVar12 = param_1[0x59] + 0x390;
      }
      goto LAB_14952a417;
    }
    bVar7 = iVar8 != 0 & *(byte *)((longlong)param_1 + 0x43);
    lVar12 = param_1[0x59];
    if ((uVar2 & 1) != 0) {
      if (bVar7 == 0) {
        lVar12 = lVar12 + 0x700;
        goto LAB_14952a417;
      }
LAB_14952a410:
      lVar12 = lVar12 + 0x650;
      goto LAB_14952a417;
    }
    if (bVar7 == 0) {
      lVar12 = lVar12 + 0x5a0;
      goto LAB_14952a417;
    }
  }
  lVar12 = lVar12 + 0x4f0;
LAB_14952a417:
  if (!bVar3) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar12;
}



// FUNCTION 14952a51c FUN_14952a51c body=45 status=ok
// SIG undefined FUN_14952a51c(void)

longlong FUN_14952a51c(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14952c600(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14952a54a FUN_14952a54a body=1300 status=ok
// SIG undefined FUN_14952a54a(void)

undefined1 * FUN_14952a54a(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  undefined4 uVar12;
  undefined8 unaff_RBP;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_1a8 [36];
  undefined4 local_184;
  longlong local_180;
  longlong local_178;
  longlong *plStack_170;
  undefined1 local_168 [16];
  longlong local_158;
  longlong *plStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0;
  undefined1 local_d8 [136];
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar13 = *(longlong **)(param_1 + 0x2a8);
  uVar12 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_14952a5ac;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar15 = iVar6 == iVar5;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar15);
    plVar14 = *(longlong **)(param_1 + 0x2a0);
    uVar12 = 0;
  }
LAB_14952a5ac:
  *(undefined2 *)(param_1 + 0x370) = 0;
  lVar10 = *(longlong *)(param_4 + 0x40);
  plVar3 = *(longlong **)(param_4 + 0x50);
  local_180 = param_4;
  if (plVar3 == (longlong *)0x0) {
    lVar4 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar4 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
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
  if (((lVar10 != lVar4) ||
      (iVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0x78))((longlong *)(param_1 + -8)),
      iVar6 == 0)) ||
     (puVar8 = (undefined8 *)(**(code **)(*plVar14 + 0x48))(plVar14), puVar8 == (undefined8 *)0x0))
  {
    cVar11 = (char)uVar12;
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_14952a7f2;
  }
  local_184 = uVar12;
  uVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
  if (iVar6 == 3) {
    if ((*(ushort *)(local_180 + 8) & 3) == 0) {
      if ((*(ushort *)(local_180 + 8) & 0xc) == 0) goto LAB_14952a6d1;
      local_120 = *puVar8;
      local_118 = puVar8[1];
      if (local_118 != 0) {
        LOCK();
        *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar14 + 0x28))(plVar14,&local_120,uVar7 ^ 1,1);
    }
    else {
      local_110 = *puVar8;
      local_108 = puVar8[1];
      if (local_108 != 0) {
        LOCK();
        *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar14 + 0x38))(plVar14);
    }
    *(undefined1 *)(param_1 + 0x370) = 1;
    if (*(int *)(param_1 + 0x2b8) == 1) {
      (**(code **)(*plVar14 + 0x40))(plVar14);
    }
  }
LAB_14952a6d1:
  if ((((char)uVar7 == '\0') || (*(char *)(param_1 + 0x373) != '\0')) &&
     (*(char *)(param_1 + 0x370) == '\0')) {
    (**(code **)(*plVar14 + 0x30))(plVar14);
    local_130 = *puVar8;
    local_128 = puVar8[1];
    if (local_128 != 0) {
      LOCK();
      *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar14 + 0x28))(plVar14,&local_130,1,1);
    *(undefined1 *)(param_1 + 0x370) = 1;
    if (*(int *)(param_1 + 0x2b8) == 1) {
      (**(code **)(*plVar14 + 0x40))(plVar14);
    }
  }
  local_100[0] = 1;
  local_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  memset(local_d8,0,0x88);
  local_50 = 0x20702;
  local_4c = 0;
  local_148 = (undefined4)DAT_14c966e98;
  uStack_144 = DAT_14c966e98._4_4_;
  uStack_140 = (undefined4)DAT_14c966ea0;
  uStack_13c = DAT_14c966ea0._4_4_;
  local_138 = DAT_14c966ea8;
  if (DAT_14c966ea8 != 0) {
    LOCK();
    *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_14952a84c:
    local_158 = 0;
    plStack_150 = (longlong *)0x0;
    bVar15 = true;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14952a84c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar15 = iVar6 == iVar5;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar15);
    lVar10 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar10 = 0;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
    local_158 = lVar10 + 8;
    if (lVar10 == 0) {
      local_158 = 0;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    bVar15 = false;
    plStack_150 = plVar3;
  }
  plVar3 = plStack_150;
  uVar9 = FUN_1407c9a0c(local_100,&local_158,&local_148);
  (**(code **)(*plVar14 + 0xe8))(plVar14,local_168);
  uVar9 = FUN_140592b68(uVar9,local_168,0,0);
  plVar14 = *(longlong **)(param_1 + 0x10);
  if (plVar14 == (longlong *)0x0) {
LAB_14952a909:
    local_178 = 0;
    plStack_170 = (longlong *)0x0;
    bVar16 = true;
  }
  else {
    iVar6 = (int)plVar14[1];
    do {
      if (iVar6 == 0) goto LAB_14952a909;
      LOCK();
      iVar5 = (int)plVar14[1];
      bVar16 = iVar6 == iVar5;
      if (bVar16) {
        *(int *)(plVar14 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar16);
    lVar10 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar10 = 0;
    }
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
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
    local_178 = lVar10 + 8;
    if (lVar10 == 0) {
      local_178 = 0;
    }
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    bVar16 = false;
    plStack_170 = plVar14;
  }
  plVar14 = plStack_170;
  uVar9 = FUN_140592a6e(uVar9,&local_178);
  FUN_1403d4c6e(param_2,uVar9);
  if (!bVar16) {
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
  plVar14 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (!bVar15) {
    LOCK();
    plVar14 = plVar3 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  FUN_14493db24(local_100);
  cVar11 = (char)local_184;
LAB_14952a7f2:
  if (cVar11 == '\0') {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14952aa60 FUN_14952aa60 body=1907 status=ok
// SIG undefined FUN_14952aa60(void)

undefined1 * FUN_14952aa60(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1b8 [36];
  undefined4 local_194;
  undefined1 *local_190;
  longlong *local_188;
  float *local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  ulonglong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_88;
  undefined1 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar16 = *(longlong **)(param_1 + 0x2a8);
  local_190 = param_2;
  local_180 = param_3;
  if (plVar16 == (longlong *)0x0) {
    local_194 = (undefined4)CONCAT71((int7)(local_80 >> 8),1);
LAB_14952ab27:
    plVar12 = (longlong *)0x0;
    plVar15 = (longlong *)0x0;
    plVar16 = (longlong *)0x0;
  }
  else {
    uVar10 = (ulonglong)*(uint *)(plVar16 + 1);
    do {
      uVar8 = (uint)uVar10;
      if (uVar8 == 0) {
        local_194 = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
        goto LAB_14952ab27;
      }
      LOCK();
      uVar3 = *(uint *)(plVar16 + 1);
      if (uVar8 == uVar3) {
        *(uint *)(plVar16 + 1) = uVar8 + 1;
      }
      else {
        uVar10 = (ulonglong)uVar3;
      }
      UNLOCK();
    } while (uVar8 != uVar3);
    plVar15 = *(longlong **)(param_1 + 0x2a0);
    plVar12 = plVar15 + -0x9b;
    if (plVar15 == (longlong *)0x0) {
      plVar12 = (longlong *)0x0;
    }
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar16 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
      local_194 = 0;
    }
    else {
      local_194 = 0;
    }
  }
  local_188 = (longlong *)(param_1 + -8);
  lVar14 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  if (plVar4 == (longlong *)0x0) {
    if (lVar14 == DAT_14c966e98) goto LAB_14952ab99;
LAB_14952ae47:
    puVar13 = local_190;
    if ((lVar14 != DAT_14c966fa0) || (cVar6 = FUN_146af41be(plVar12), cVar6 != '\0'))
    goto LAB_14952af8d;
LAB_14952aecb:
    iVar9 = (**(code **)(*local_188 + 0x78))();
    if ((2 < iVar9 - 1U) ||
       (puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15),
       puVar11 == (undefined8 *)0x0)) goto LAB_14952af8d;
    cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar11);
    if (cVar6 == '\0') {
      (**(code **)(*plVar15 + 0x30))(plVar15);
      local_168 = *puVar11;
      local_160 = puVar11[1];
      if (local_160 != 0) {
        LOCK();
        *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar15 + 0x28))(plVar15,&local_168,1,1);
      (**(code **)(*plVar15 + 0x40))(plVar15,2);
    }
    local_178 = *puVar11;
    local_170 = puVar11[1];
    if (local_170 != 0) {
      LOCK();
      *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar15 + 0xa0))(plVar15,&local_178,param_4);
    *puVar13 = 1;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c966e98;
    UNLOCK();
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
    puVar13 = local_190;
    if (lVar14 != lVar5) {
      lVar14 = *(longlong *)(param_4 + 0x40);
      plVar4 = *(longlong **)(param_4 + 0x50);
      if (plVar4 == (longlong *)0x0) goto LAB_14952ae47;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (lVar14 == DAT_14c966fa0) {
        cVar6 = FUN_146af41be(plVar12);
        puVar13 = local_190;
        LOCK();
        plVar12 = plVar4 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        if (cVar6 == '\0') goto LAB_14952aecb;
      }
      else {
        LOCK();
        plVar12 = plVar4 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
      goto LAB_14952af8d;
    }
LAB_14952ab99:
    local_138 = local_138 & 0xffffffffffffff00;
    local_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    memset(local_110,0,0x88);
    puVar13 = local_190;
    local_88 = 0x20702;
    local_100 = 0;
    uStack_f8 = 0;
    local_84 = 1;
    FUN_1403d4c6e(local_190);
    FUN_14493db24(&local_138);
    if (*(char *)(param_1 + 0x370) == '\x01') {
      local_138 = CONCAT71(local_138._1_7_,1);
      local_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      memset(local_110,0,0x88);
      puVar13 = local_190;
      local_88 = 0x20702;
      local_100 = 0;
      uStack_f8 = 0;
      local_84 = 1;
      FUN_1402c17c2(local_190,&local_138);
      FUN_14493db24(&local_138);
    }
    fVar18 = local_180[8] * 0.0;
    fVar19 = local_180[7] * 0.0;
    fVar17 = local_180[10] * 0.0;
    fVar20 = local_180[9] * 0.0;
    local_138 = CONCAT44(fVar17 + fVar18 + local_180[0xc],fVar20 + fVar19 + local_180[0xb]);
    local_130 = CONCAT44(*local_180 * local_180[8] + fVar17,*local_180 * local_180[7] + fVar20);
    uStack_128 = CONCAT44(local_180[10] * local_180[1] + fVar18,local_180[1] * local_180[9] + fVar19
                         );
    cVar6 = FUN_1402b2a42();
    cVar7 = FUN_140591fd6(param_1);
    if (cVar7 != '\0') {
      if ((cVar6 != '\0') && (*(char *)(param_1 + 0x371) == '\0')) {
        iVar9 = (**(code **)(*local_188 + 0x78))();
        if (iVar9 == 3) {
          if ((((*(char *)(param_1 + 0x370) == '\0') && ((*(byte *)(param_4 + 8) & 0xf) == 0)) &&
              (puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15,local_188),
              puVar11 != (undefined8 *)0x0)) &&
             ((cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar11), cVar6 != '\0' &&
              (iVar9 = (**(code **)(*plVar15 + 0x70))(plVar15), 1 < iVar9)))) {
            (**(code **)(*plVar15 + 0x30))(plVar15);
            local_148 = *puVar11;
            local_140 = puVar11[1];
            if (local_140 != 0) {
              LOCK();
              *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
              UNLOCK();
            }
            (**(code **)(*plVar15 + 0x28))(plVar15,&local_148,1,1);
            (**(code **)(*plVar15 + 0x40))(plVar15);
            goto LAB_14952b0ca;
          }
        }
        else if (iVar9 == 2) {
          if (*(char *)(param_1 + 0x370) == '\0') {
            (**(code **)(*plVar15 + 0x30))(plVar15);
            (**(code **)(*plVar15 + 0x40))(plVar15);
          }
LAB_14952b0ca:
          local_138 = CONCAT71(local_138._1_7_,1);
          local_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          memset(local_110,0,0x88);
          puVar13 = local_190;
          local_88 = 0x20702;
          local_100 = 0;
          uStack_f8 = 0;
          local_84 = 1;
          FUN_1402c17c2(local_190,&local_138);
          FUN_14493db24(&local_138);
        }
      }
      puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15,local_188);
      if (puVar11 != (undefined8 *)0x0) {
        local_158 = *puVar11;
        local_150 = puVar11[1];
        if (local_150 != 0) {
          LOCK();
          *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar15 + 0xa8))(plVar15);
        if (cVar6 != '\0') {
          local_138 = CONCAT71(local_138._1_7_,1);
          local_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          memset(local_110,0,0x88);
          puVar13 = local_190;
          local_88 = 0x20702;
          local_100 = 0;
          uStack_f8 = 0;
          local_84 = 1;
          FUN_1402c17c2(local_190,&local_138);
          FUN_14493db24(&local_138);
        }
      }
      if (((*(char *)(param_1 + 0x370) == '\x01') && (*(char *)(param_1 + 0x371) == '\0')) &&
         (*(int *)(param_1 + 0x2b8) == 0)) {
        (**(code **)(*plVar15 + 0x40))(plVar15,2);
      }
      goto LAB_14952afbf;
    }
    FUN_14493db24(puVar13);
LAB_14952af8d:
    *puVar13 = 0;
  }
  puVar13[0x20] = 0;
  *(undefined8 *)(puVar13 + 8) = 0;
  *(undefined8 *)(puVar13 + 0x10) = 0;
  memset(puVar13 + 0x28,0,0x88);
  *(undefined4 *)(puVar13 + 0xb0) = 0x20702;
  puVar13[0xb4] = 0;
LAB_14952afbf:
  if ((char)local_194 == '\0') {
    LOCK();
    plVar12 = plVar16 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    LOCK();
    plVar12 = plVar16 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar13;
}



// FUNCTION 14952b1d4 FUN_14952b1d4 body=426 status=ok
// SIG undefined FUN_14952b1d4(void)

undefined1 * FUN_14952b1d4(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_4 + 0x40);
  plVar9 = *(longlong **)(param_4 + 0x50);
  lVar4 = DAT_14c966e98;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    lVar4 = DAT_14c966e98;
    UNLOCK();
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (lVar2 == lVar4) {
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = true;
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      plVar10 = (longlong *)0x0;
      do {
        if (iVar7 == 0) {
          plVar9 = (longlong *)0x0;
          goto LAB_14952b27c;
        }
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar11 = iVar7 == iVar5;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar11);
      plVar10 = *(longlong **)(param_1 + 0x2a0);
      bVar3 = false;
    }
LAB_14952b27c:
    puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x48))(plVar10);
    if (puVar8 != (undefined8 *)0x0) {
      local_48 = *puVar8;
      local_40 = puVar8[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      cVar6 = (**(code **)(*plVar10 + 0xb0))(plVar10);
      if (cVar6 == '\0') {
        (**(code **)(*(longlong *)(param_1 + -8) + 0x28))((longlong *)(param_1 + -8));
      }
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
    }
    if (!bVar3) {
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (puVar8 != (undefined8 *)0x0) goto LAB_14952b351;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14952b351:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14952b380 FUN_14952b380 body=637 status=ok
// SIG undefined FUN_14952b380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_14952b380(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 0x372) == '\x01') {
    *(undefined1 *)(param_1 + 0x372) = 0;
    local_e8[0] = 1;
    local_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    memset(local_c0,0,0x88);
    local_38 = 0x20702;
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    if (plVar7 == (longlong *)0x0) {
LAB_14952b522:
      (**(code **)(_DAT_00000000 + 0xe8))(0,local_f8);
      uVar6 = FUN_140592a6e(local_e8,local_f8);
      FUN_1403d4c6e(param_2,uVar6);
    }
    else {
      iVar5 = (int)plVar7[1];
      do {
        if (iVar5 == 0) goto LAB_14952b522;
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar8);
      (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0xe8))
                (*(longlong **)(param_1 + 0x2a0),local_f8);
      uVar6 = FUN_140592a6e(local_e8,local_f8);
      FUN_1403d4c6e(param_2,uVar6);
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    FUN_14493db24(local_e8);
  }
  else {
    cVar4 = FUN_140591fd6(param_1);
    if (((cVar4 != '\0') &&
        (*(undefined1 *)(param_1 + 0x371) = 1, *(char *)(param_1 + 0x370) == '\x01')) &&
       (*(int *)(param_1 + 0x2b8) == 0)) {
      plVar7 = *(longlong **)(param_1 + 0x2a8);
      if (plVar7 == (longlong *)0x0) {
LAB_14952b5ec:
        (**(code **)(_DAT_00000000 + 0x40))(0);
      }
      else {
        iVar5 = (int)plVar7[1];
        do {
          if (iVar5 == 0) goto LAB_14952b5ec;
          LOCK();
          iVar3 = (int)plVar7[1];
          bVar8 = iVar5 == iVar3;
          if (bVar8) {
            *(int *)(plVar7 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar8);
        (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x40))();
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
    }
    if (((*(int *)(param_1 + 800) != 0) && (*(longlong **)(param_1 + 0x318) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x318) + 0x30))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 800) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x318);
      }
      (**(code **)(*plVar7 + 0x58))(plVar7,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_118);
    }
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14952b604 FUN_14952b604 body=90 status=ok
// SIG undefined FUN_14952b604(void)

void FUN_14952b604(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x330) != 0) && (*(longlong **)(param_1 + 0x328) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x330) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x328);
      }
                    /* WARNING: Could not recover jumptable at 0x00014952b64f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 14952b65e FUN_14952b65e body=106 status=ok
// SIG undefined FUN_14952b65e(void)

void FUN_14952b65e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x314) == '\x01') {
    *(undefined1 *)(param_1 + 0x314) = 0;
  }
  if ((*(int *)(param_1 + 0x340) != 0) && (*(longlong **)(param_1 + 0x338) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x338) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x340) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x338);
      }
                    /* WARNING: Could not recover jumptable at 0x00014952b6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14952b6c8 FUN_14952b6c8 body=1078 status=ok
// SIG undefined FUN_14952b6c8(void)

undefined1 *
FUN_14952b6c8(longlong param_1,undefined1 *param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  byte *pbVar11;
  longlong *plVar12;
  byte *pbVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1a8 [40];
  int local_180 [2];
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined3 uStack_118;
  undefined4 local_115;
  undefined1 uStack_111;
  undefined3 uStack_110;
  undefined4 uStack_10d;
  undefined4 uStack_109;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  byte local_e4 [4];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((*(int *)(param_1 + 0x2e8) == 0) || (*(longlong **)(param_1 + 0x2e0) == (longlong *)0x0)) ||
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x30))(), cVar9 == '\0')) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_14952b7a4;
  }
  plVar14 = *(longlong **)(param_1 + 0x2a8);
  bVar6 = true;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
    plVar12 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)plVar14[1];
    plVar12 = (longlong *)0x0;
    do {
      if (iVar10 == 0) {
        plVar14 = (longlong *)0x0;
        goto LAB_14952b842;
      }
      LOCK();
      iVar8 = (int)plVar14[1];
      bVar15 = iVar10 == iVar8;
      if (bVar15) {
        *(int *)(plVar14 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar15);
    plVar12 = *(longlong **)(param_1 + 0x2a0);
    bVar6 = false;
  }
LAB_14952b842:
  fVar16 = *(float *)(param_4 + 0x20);
  fVar2 = *(float *)(param_4 + 0x24);
  fVar18 = *(float *)((longlong)param_3 + 0x1c);
  fVar17 = *(float *)(param_3 + 4);
  fVar3 = *(float *)((longlong)param_3 + 0x24);
  fVar19 = *(float *)(param_3 + 5);
  fVar20 = 1.0 / (fVar18 * fVar19 - fVar3 * fVar17);
  fVar4 = *(float *)(param_3 + 6);
  fVar5 = *(float *)((longlong)param_3 + 0x2c);
  iVar10 = (**(code **)(*plVar12 + 0xc0))();
  if (iVar10 == 0) {
    fVar18 = -fVar3 * fVar20;
    fVar19 = fVar19 * fVar20;
    fVar17 = -fVar5 * fVar19 - fVar4 * fVar18;
    fVar16 = fVar16 * fVar19 + fVar18 * fVar2;
  }
  else {
    fVar18 = fVar18 * fVar20;
    fVar20 = -fVar17 * fVar20;
    fVar17 = -fVar5 * fVar20 - fVar4 * fVar18;
    fVar16 = fVar16 * fVar20 + fVar18 * fVar2;
  }
  fVar2 = (float)((ulonglong)*param_3 >> 0x20);
  if (iVar10 == 0) {
    fVar2 = (float)*param_3;
  }
  fVar18 = fVar2 * 0.25;
  if (10.0 <= fVar18) {
    fVar18 = 10.0;
  }
  if (fVar18 <= 3.0) {
    fVar18 = 3.0;
  }
  local_180[0] = 0;
  if (fVar18 <= fVar16 + fVar17) {
    local_180[0] = (fVar2 - fVar18 < fVar16 + fVar17) + 1;
  }
  local_170 = *(undefined8 *)(param_4 + 8);
  uStack_168 = *(undefined8 *)(param_4 + 0x10);
  local_160 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 0x20);
  uStack_150 = *(undefined8 *)(param_4 + 0x28);
  local_148 = *(undefined8 *)(param_4 + 0x30);
  uStack_140 = *(undefined8 *)(param_4 + 0x38);
  local_138 = *(undefined8 *)(param_4 + 0x40);
  local_130 = *(undefined8 *)(param_4 + 0x48);
  local_128 = *(longlong *)(param_4 + 0x50);
  if (local_128 != 0) {
    LOCK();
    *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
    UNLOCK();
  }
  uStack_120 = *(undefined8 *)(param_4 + 0x58);
  uVar7 = *(undefined8 *)(param_4 + 0x60);
  uStack_10d = *(undefined4 *)(param_4 + 0x6b);
  uStack_109 = *(undefined4 *)(param_4 + 0x6f);
  uStack_118 = (undefined3)uVar7;
  local_115 = (undefined4)((ulonglong)uVar7 >> 0x18);
  uStack_110 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uStack_111 = (undefined1)((ulonglong)uVar7 >> 0x38);
  local_178 = &PTR_FUN_149efe1e0;
  local_100 = *(undefined8 *)(param_4 + 0x78);
  local_f8 = *(longlong *)(param_4 + 0x80);
  if (local_f8 != 0) {
    LOCK();
    *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
    UNLOCK();
  }
  local_f0 = param_1 + -8;
  FUN_14952c708(local_180,&local_e8);
  pbVar11 = local_e4;
  if (&local_e8 == (undefined4 *)(param_1 + 0x310)) {
    if ((local_e4[0] & 1) != 0) goto LAB_14952ba79;
  }
  else {
    pbVar13 = (byte *)(param_1 + 0x314);
    if ((local_e4[0] & 1) == 0) {
      pbVar11 = pbVar13;
      if (*pbVar13 != 1) goto LAB_14952ba7c;
    }
    else {
      *(undefined4 *)(param_1 + 0x310) = local_e8;
      *pbVar13 = 1;
    }
LAB_14952ba79:
    *pbVar11 = 0;
  }
LAB_14952ba7c:
  FUN_1469ac82c(&local_178);
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (!bVar6) {
    LOCK();
    plVar12 = plVar14 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
LAB_14952b7a4:
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14952bb00 FUN_14952bb00 body=207 status=ok
// SIG undefined FUN_14952bb00(void)

undefined8 FUN_14952bb00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  char local_e0 [184];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = param_1 + -8;
  local_f0 = param_3;
  local_e8 = param_4;
  FUN_14952c812(&local_f8,local_e0);
  if (((local_e0[0] == '\0') && (*(int *)(param_1 + 0x350) != 0)) &&
     (*(longlong **)(param_1 + 0x348) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x348) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x350) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x348);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_4);
      goto LAB_14952bb5b;
    }
  }
  FUN_1403d4c6e(param_2,local_e0);
LAB_14952bb5b:
  FUN_14493db24(local_e0);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952bbd0 FUN_14952bbd0 body=394 status=ok
// SIG undefined FUN_14952bbd0(void)

undefined8 FUN_14952bbd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong *plStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0;
  undefined1 local_b8 [136];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined1 *)(param_1 + 0x372) = 1;
  local_e0[0] = 1;
  local_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  memset(local_b8,0,0x88);
  local_30 = 0x20702;
  local_f8 = (undefined4)DAT_14c966e98;
  uStack_f4 = DAT_14c966e98._4_4_;
  uStack_f0 = (undefined4)DAT_14c966ea0;
  uStack_ec = DAT_14c966ea0._4_4_;
  local_e8 = DAT_14c966ea8;
  if (DAT_14c966ea8 != 0) {
    LOCK();
    *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14952bcb1:
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_14952bcb1;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar8 = 0;
    }
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
    local_108 = lVar8 + 8;
    if (lVar8 == 0) {
      local_108 = 0;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    bVar9 = false;
    plStack_100 = plVar4;
  }
  plVar4 = plStack_100;
  uVar7 = FUN_1407c9a0c(local_e0,&local_108,&local_f8);
  FUN_1403d4c6e(param_2,uVar7);
  plVar1 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_100 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (!bVar9) {
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
  FUN_14493db24(local_e0);
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14952bd5c FUN_14952bd5c body=644 status=ok
// SIG undefined FUN_14952bd5c(void)

undefined1 * FUN_14952bd5c(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (*(char *)(param_1 + 0x372) != '\x01') goto LAB_14952bfb2;
  plVar1 = (longlong *)(param_1 + -8);
  *(undefined1 *)(param_1 + 0x372) = 0;
  plVar12 = *(longlong **)(param_1 + 0x2a8);
  bVar3 = true;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar12[1];
    plVar11 = (longlong *)0x0;
    do {
      if (iVar6 == 0) {
        plVar12 = (longlong *)0x0;
        goto LAB_14952be07;
      }
      LOCK();
      iVar4 = (int)plVar12[1];
      bVar13 = iVar6 == iVar4;
      if (bVar13) {
        *(int *)(plVar12 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar13);
    plVar11 = *(longlong **)(param_1 + 0x2a0);
    bVar3 = false;
  }
LAB_14952be07:
  puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x48))(plVar11,plVar1);
  if (puVar8 != (undefined8 *)0x0) {
    uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1);
    if (uVar7 != 0) {
      cVar5 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar8);
      if (cVar5 == '\0') {
        if (uVar7 != 3) {
          (**(code **)(*plVar11 + 0x30))(plVar11);
        }
        local_108 = *puVar8;
        local_100 = puVar8[1];
        if (local_100 != 0) {
          LOCK();
          *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
          UNLOCK();
        }
        lVar9 = *plVar11;
        puVar10 = &local_108;
      }
      else {
        if ((uVar7 & 0xfffffffe) != 2) goto LAB_14952bf12;
        local_118 = *puVar8;
        local_110 = puVar8[1];
        if (local_110 != 0) {
          LOCK();
          *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
          UNLOCK();
        }
        lVar9 = *plVar11;
        puVar10 = &local_118;
      }
      (**(code **)(lVar9 + 0x28))(plVar11,puVar10,1,1);
      (**(code **)(*plVar11 + 0x40))(plVar11);
      local_f8[0] = 1;
      local_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      memset(local_d0,0,0x88);
      local_48 = 0x20702;
      local_44 = 0;
      FUN_1403d4924(param_2,local_f8);
      FUN_14493db24(local_f8);
    }
LAB_14952bf12:
    local_128 = *puVar8;
    local_120 = puVar8[1];
    if (local_120 != 0) {
      LOCK();
      *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
      UNLOCK();
    }
    cVar5 = (**(code **)(*plVar11 + 0xa8))(plVar11);
    if (cVar5 != '\0') {
      local_f8[0] = 1;
      local_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      memset(local_d0,0,0x88);
      local_48 = 0x20702;
      local_44 = 0;
      FUN_1403d4924(param_2,local_f8);
      FUN_14493db24(local_f8);
    }
  }
  if (!bVar3) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
LAB_14952bfb2:
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14952bfe2 FUN_14952bfe2 body=494 status=ok
// SIG undefined FUN_14952bfe2(void)

longlong * FUN_14952bfe2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_14001cc68(0x70,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_14952c020:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar4 = (int)plVar2[1];
    do {
      if (iVar4 == 0) goto LAB_14952c020;
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar8 = 0;
    }
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    local_48 = lVar8 + 8;
    if (lVar8 == 0) {
      local_48 = 0;
    }
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_14952cc78(lVar5,&local_48);
  *param_2 = lVar5;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149ef0b50;
  plVar6[2] = lVar5;
  param_2[1] = (longlong)plVar6;
  if ((lVar5 == 0) ||
     (((*(longlong *)(lVar5 + 8) != 0 && (*(longlong *)(lVar5 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar5 + 0x10) + 8))))) goto LAB_14952c17d;
  if (plVar6 == (longlong *)0x0) {
    *(longlong *)(lVar5 + 8) = lVar5;
    plVar7 = *(longlong **)(lVar5 + 0x10);
    if (plVar7 == (longlong *)0x0) goto LAB_14952c17d;
LAB_14952c0c3:
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    *(longlong **)(lVar5 + 0x10) = plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_14952c17d;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong *)(lVar5 + 8) = lVar5;
    if (*(longlong **)(lVar5 + 0x10) != plVar6) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(lVar5 + 0x10);
      if (plVar7 != (longlong *)0x0) goto LAB_14952c0c3;
      *(longlong **)(lVar5 + 0x10) = plVar6;
    }
  }
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
LAB_14952c17d:
  if (!bVar9) {
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14952c1d4 FUN_14952c1d4 body=173 status=ok
// SIG undefined FUN_14952c1d4(void)

void FUN_14952c1d4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14952d206(param_1 + -8,param_3,param_5,param_6,param_7);
  uVar1 = FUN_14023976a(param_1,param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
  FUN_14952d456(param_1 + -8,param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
  return;
}



// FUNCTION 14952c282 FUN_14952c282 body=297 status=ok
// SIG undefined FUN_14952c282(void)

void FUN_14952c282(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x360) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar6 = *(longlong **)(param_1 + 0x368);
  if (plVar6 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x368);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x368) = plVar2;
  }
  lVar3 = *(longlong *)(param_1 + 0x358);
  if (lVar3 == 0) {
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_1456f28da(param_1,&local_30);
  }
  else {
    FUN_14149270a(lVar3);
    uVar4 = *param_2;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar2 = *(longlong **)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x10) = uVar4;
    *(longlong *)(lVar3 + 0x18) = lVar5;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    FUN_140a5503c(lVar3);
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952c3ac FUN_14952c3ac body=119 status=ok
// SIG undefined FUN_14952c3ac(void)

longlong * FUN_14952c3ac(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14952c578(param_1[2],*param_1,param_3);
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



// FUNCTION 14952c424 FUN_14952c424 body=338 status=ok
// SIG undefined FUN_14952c424(void)

longlong * FUN_14952c424(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x2d8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f0e410;
  plVar1 = plVar4 + 2;
  FUN_146aec4be(plVar1);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_146a2ba86(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    *param_1 = (longlong)local_38;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14952c507;
    param_1[1] = 0;
LAB_14952c4d1:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14952c507;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_38;
    plVar4 = (longlong *)param_1[1];
    if (local_30 != plVar4) {
      param_1[1] = (longlong)local_30;
      if (plVar4 == (longlong *)0x0) goto LAB_14952c507;
      goto LAB_14952c4d1;
    }
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14952c507;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_14952c507:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_48 = 0x2c8;
  FUN_140a52e78(*param_1,"SExpanderArrow","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",0xca);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952c578 FUN_14952c578 body=134 status=ok
// SIG undefined FUN_14952c578(void)

void FUN_14952c578(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)*param_1;
  local_18 = (longlong *)((undefined8 *)*param_1)[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_146aec5c0(param_2,param_3,&local_20);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952c600 FUN_14952c600 body=263 status=ok
// SIG undefined FUN_14952c600(void)

void FUN_14952c600(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bd36690;
  param_1[1] = &PTR_FUN_14bd36730;
  plVar3 = (longlong *)param_1[0x6e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1449db362(param_1 + 0x6a);
  FUN_1449db362(param_1 + 0x68);
  FUN_1449db362(param_1 + 0x66);
  FUN_1449db362(param_1 + 100);
  if (*(char *)((longlong)param_1 + 0x31c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  }
  FUN_1449db362(param_1 + 0x61);
  FUN_1449db362(param_1 + 0x5f);
  FUN_1449db362(param_1 + 0x5d);
  plVar3 = (longlong *)param_1[0x5c];
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
  plVar3 = (longlong *)param_1[0x56];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  param_1[1] = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x40);
  FUN_140c057ec(param_1 + 1);
  return;
}



// FUNCTION 14952c708 FUN_14952c708 body=265 status=ok
// SIG undefined FUN_14952c708(void)

longlong FUN_14952c708(undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x24);
  plVar8 = *(longlong **)(lVar2 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14952c763;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    plVar7 = *(longlong **)(lVar2 + 0x2a8);
    bVar3 = false;
  }
LAB_14952c763:
  puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x48))(plVar7,lVar2);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  else {
    local_40 = *puVar6;
    local_38 = puVar6[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    if (*(int *)(lVar2 + 0x2f0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(lVar2 + 0x2e8);
    }
    local_48 = &local_40;
    (**(code **)(*plVar7 + 0x58))(plVar7,param_2,param_1 + 2,*param_1);
  }
  if (!bVar3) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14952c812 FUN_14952c812 body=1125 status=ok
// SIG undefined FUN_14952c812(void)

undefined1 * FUN_14952c812(longlong *param_1,undefined1 *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 unaff_RBP;
  ulonglong uVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  uint local_1d4;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  int local_1b0;
  byte local_1ac;
  undefined8 local_1a8;
  longlong local_1a0;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar5 = *param_1;
  if (((*(int *)(lVar5 + 0x300) != 0) && (*(longlong **)(lVar5 + 0x2f8) != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(**(longlong **)(lVar5 + 0x2f8) + 0x30))(), cVar8 != '\0')) {
    plVar14 = *(longlong **)(lVar5 + 0x2b0);
    uVar13 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)0x0;
      plVar12 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar14[1];
      plVar12 = (longlong *)0x0;
      do {
        if (iVar9 == 0) {
          plVar14 = (longlong *)0x0;
          goto LAB_14952c8f9;
        }
        LOCK();
        iVar7 = (int)plVar14[1];
        bVar15 = iVar9 == iVar7;
        if (bVar15) {
          *(int *)(plVar14 + 1) = iVar9 + 1;
          iVar7 = iVar9;
        }
        iVar9 = iVar7;
        UNLOCK();
      } while (!bVar15);
      plVar12 = *(longlong **)(lVar5 + 0x2a8);
      uVar13 = 0;
    }
LAB_14952c8f9:
    if (*(char *)(lVar5 + 0x31c) == '\x01') {
      *(undefined1 *)(lVar5 + 0x31c) = 0;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x48))(plVar12);
    bVar15 = true;
    if (puVar10 != (undefined8 *)0x0) {
      lVar6 = param_1[1];
      fVar17 = *(float *)(param_1[2] + 0x20);
      fVar16 = *(float *)(param_1[2] + 0x24);
      fVar19 = *(float *)(lVar6 + 0x1c);
      fVar18 = *(float *)(lVar6 + 0x20);
      fVar2 = *(float *)(lVar6 + 0x24);
      fVar20 = *(float *)(lVar6 + 0x28);
      fVar21 = 1.0 / (fVar19 * fVar20 - fVar2 * fVar18);
      fVar3 = *(float *)(lVar6 + 0x30);
      fVar4 = *(float *)(lVar6 + 0x2c);
      iVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      local_1d4 = (uint)uVar13;
      if (iVar9 == 0) {
        fVar19 = -fVar2 * fVar21;
        fVar20 = fVar20 * fVar21;
        fVar18 = -fVar4 * fVar20 - fVar3 * fVar19;
        fVar17 = fVar17 * fVar20 + fVar19 * fVar16;
      }
      else {
        fVar19 = fVar19 * fVar21;
        fVar21 = -fVar18 * fVar21;
        fVar18 = -fVar4 * fVar21 - fVar3 * fVar19;
        fVar17 = fVar17 * fVar21 + fVar19 * fVar16;
      }
      uVar13 = *(ulonglong *)param_1[1] >> 0x20;
      if (iVar9 == 0) {
        uVar13 = *(ulonglong *)param_1[1];
      }
      fVar16 = (float)uVar13 * 0.25;
      if (10.0 <= fVar16) {
        fVar16 = 10.0;
      }
      if (fVar16 <= 3.0) {
        fVar16 = 3.0;
      }
      iVar9 = 0;
      if (fVar16 <= fVar17 + fVar18) {
        iVar9 = ((float)uVar13 - fVar16 < fVar17 + fVar18) + 1;
      }
      if (((*(int *)(lVar5 + 0x2f0) == 0) || (*(longlong **)(lVar5 + 0x2e8) == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(**(longlong **)(lVar5 + 0x2e8) + 0x30))(), cVar8 == '\0')) {
        local_1ac = 1;
        local_1b0 = iVar9;
      }
      else {
        local_1a8 = *puVar10;
        local_1a0 = puVar10[1];
        if (local_1a0 != 0) {
          LOCK();
          *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
          UNLOCK();
        }
        if (*(int *)(lVar5 + 0x2f0) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(lVar5 + 0x2e8);
        }
        local_1e8 = &local_1a8;
        (**(code **)(*plVar11 + 0x58))(plVar11,&local_1b0,param_1[2],iVar9);
        if ((local_1ac & 1) == 0) {
          uVar13 = (ulonglong)local_1d4;
          goto LAB_14952cb88;
        }
      }
      local_1c0 = *puVar10;
      local_1b8 = puVar10[1];
      uVar13 = (ulonglong)local_1d4;
      if (local_1b8 != 0) {
        LOCK();
        *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + 1;
        UNLOCK();
      }
      if (*(int *)(lVar5 + 0x300) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(lVar5 + 0x2f8);
      }
      local_1e8 = &local_1c0;
      (**(code **)(*plVar11 + 0x58))(plVar11,&local_1a8,param_1[2],local_1b0);
      if (((char)local_1a8 == '\x01') && (local_1b0 == 1)) {
        local_1d0 = *puVar10;
        local_1c8 = puVar10[1];
        if (local_1c8 != 0) {
          LOCK();
          *(int *)(local_1c8 + 8) = *(int *)(local_1c8 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar12 + 0x50))(plVar12,&local_1d0,1);
      }
      FUN_1428fd920(param_2);
      FUN_14493db24(&local_1a8);
      if (local_1ac == 1) {
        local_1ac = 0;
      }
      bVar15 = false;
    }
LAB_14952cb88:
    if ((char)uVar13 == '\0') {
      LOCK();
      plVar12 = plVar14 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    if (!bVar15) goto LAB_14952cbe1;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14952cbe1:
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14952cc78 FUN_14952cc78 body=143 status=ok
// SIG undefined FUN_14952cc78(void)

undefined8 * FUN_14952cc78(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28,0xd);
  *param_1 = &PTR_FUN_14bd36980;
  param_1[0xd] = &PTR_FUN_14bd36a70;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952cd08 FUN_14952cd08 body=38 status=ok
// SIG undefined FUN_14952cd08(void)

undefined8 FUN_14952cd08(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14952cd34 FUN_14952cd34 body=505 status=ok
// SIG undefined FUN_14952cd34(void)

void FUN_14952cd34(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar8 = *(longlong **)(param_1 + -0x48), plVar8 != (longlong *)0x0)) && (0 < (int)plVar8[1])
     ) {
    lVar10 = 0;
    iVar4 = (int)plVar8[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14952cdc0;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar11 = iVar3 == iVar4;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar11);
    lVar10 = *(longlong *)(param_1 + -0x50) + -8;
    if (*(longlong *)(param_1 + -0x50) == 0) {
      lVar10 = 0;
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
LAB_14952cdc0:
    if (((*(longlong *)(lVar10 + 0x2a8) != 0) &&
        (plVar7 = *(longlong **)(lVar10 + 0x2b0), plVar7 != (longlong *)0x0)) &&
       (0 < (int)plVar7[1])) {
      plVar9 = (longlong *)0x0;
      iVar4 = (int)plVar7[1];
      do {
        iVar5 = iVar4;
        if (iVar5 == 0) {
          plVar7 = (longlong *)0x0;
          goto LAB_14952ce0e;
        }
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar11 = iVar5 == iVar4;
        if (bVar11) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        UNLOCK();
      } while (!bVar11);
      plVar9 = *(longlong **)(lVar10 + 0x2a8);
LAB_14952ce0e:
      (**(code **)(*plVar9 + 0xe8))(plVar9,&local_50);
      (**(code **)(*local_50 + 0x198))();
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,lVar10);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,puVar6);
        (**(code **)(*plVar9 + 0x30))(plVar9);
        local_60 = *puVar6;
        local_58 = puVar6[1];
        if (local_58 != 0) {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar9 + 0x28))(plVar9,&local_60,1,1);
        (**(code **)(*plVar9 + 0x40))(plVar9,3);
      }
      if (iVar5 != 0) {
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    if (iVar3 != 0) {
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14952cf32 FUN_14952cf32 body=166 status=ok
// SIG undefined FUN_14952cf32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14952cf32(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014952cfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(_DAT_00000000 + 0x30))(0);
        return uVar7;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    plVar8 = (longlong *)(*(longlong *)(param_1 + -0x50) + -8);
    if (*(longlong *)(param_1 + -0x50) == 0) {
      plVar8 = (longlong *)0x0;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
    uVar6 = (**(code **)(*plVar8 + 0x30))(plVar8);
    uVar7 = (ulonglong)uVar6;
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  return uVar7;
}



// FUNCTION 14952cfd8 FUN_14952cfd8 body=556 status=ok
// SIG undefined FUN_14952cfd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14952cfd8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar7 = *(longlong **)(param_1 + -0x48), plVar7 != (longlong *)0x0)) && (0 < (int)plVar7[1])
     ) {
    lVar8 = 0;
    iVar6 = (int)plVar7[1];
    do {
      iVar5 = iVar6;
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_14952d064;
      }
      LOCK();
      iVar6 = (int)plVar7[1];
      bVar9 = iVar5 == iVar6;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + -0x50) + -8;
    if (*(longlong *)(param_1 + -0x50) == 0) {
      lVar8 = 0;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
LAB_14952d064:
    if (((*(longlong *)(lVar8 + 0x2a8) == 0) ||
        (plVar3 = *(longlong **)(lVar8 + 0x2b0), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
       ) {
      bVar9 = false;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) {
          (**(code **)(_DAT_00000000 + 0xe8))(0,&local_48);
          goto LAB_14952d13c;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar9);
      (**(code **)(**(longlong **)(lVar8 + 0x2a8) + 0xe8))(*(longlong **)(lVar8 + 0x2a8),&local_48);
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
LAB_14952d13c:
      local_68 = local_48;
      local_60 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      FUN_146974758(&local_58,&local_68);
      *param_2 = local_58;
      param_2[1] = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      }
      plVar3 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
      bVar9 = true;
    }
    if (iVar5 != 0) {
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (bVar9) goto LAB_14952d100;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14952d100:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14952d206 FUN_14952d206 body=590 status=ok
// SIG undefined FUN_14952d206(void)

int FUN_14952d206(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4,float *param_5
                 )

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  float *local_a0;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar10 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar10[1];
    plVar11 = (longlong *)0x0;
    do {
      if (iVar9 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_14952d26f;
      }
      LOCK();
      iVar5 = (int)plVar10[1];
      bVar12 = iVar9 == iVar5;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar9 + 1;
        iVar5 = iVar9;
      }
      iVar9 = iVar5;
      UNLOCK();
    } while (!bVar12);
    plVar11 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_14952d26f:
  local_98 = param_3;
  (**(code **)(*plVar11 + 0xe8))(plVar11,&local_80);
  cVar6 = (**(code **)(*local_80 + 0x198))();
  plVar4 = (longlong *)CONCAT44(uStack_74,local_78);
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
  lVar7 = (**(code **)(*plVar11 + 0x48))(plVar11,param_1);
  iVar9 = param_4;
  if (((cVar6 == '\x01' && lVar7 != 0) && (cVar6 = (**(code **)*plVar11)(plVar11), cVar6 != '\0'))
     && (cVar6 = (**(code **)(*plVar11 + 8))(plVar11,lVar7), cVar6 != '\0')) {
    lVar7 = *(longlong *)(param_1 + 0x2c8);
    pfVar8 = (float *)(lVar7 + 0x18);
    cVar6 = *(char *)(lVar7 + 0x28);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar8 = (float *)FUN_1400c06fe(pfVar8);
        lVar7 = *(longlong *)(param_1 + 0x2c8);
      }
      else if (cVar6 == '\x03') {
        pfVar8 = param_5 + 8;
      }
      else {
        pfVar8 = param_5 + 4;
      }
    }
    local_84 = pfVar8[3] * param_5[3];
    local_88 = pfVar8[2] * param_5[2];
    local_8c = pfVar8[1] * param_5[1];
    local_90 = *pfVar8 * *param_5;
    local_a0 = &local_90;
    local_6c = *param_2;
    local_80 = *(longlong **)((longlong)param_2 + 0xc);
    local_78 = *(undefined4 *)(param_2 + 1);
    uStack_74 = 0;
    uStack_70 = 0;
    local_64 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_60 = *(undefined4 *)(param_2 + 4);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_58 = *(undefined4 *)(param_2 + 5);
    local_54 = *(undefined8 *)((longlong)param_2 + 0x2c);
    local_4c = local_4c & 0xfc | *(char *)((longlong)param_2 + 0x34) * '\x02' & 2U;
    iVar9 = param_4 + 1;
    local_a8 = 0;
    FUN_140239bd2(local_98,param_4,&local_80,lVar7 + 0x10);
  }
  if (!bVar3) {
    LOCK();
    plVar11 = plVar10 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 14952d456 FUN_14952d456 body=239 status=ok
// SIG undefined FUN_14952d456(void)

ulonglong FUN_14952d456(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,uint param_6,undefined8 param_7,undefined1 param_8)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (*(char *)((longlong)param_1 + 0x31c) == '\x01') {
    if ((((int)param_1[0x62] != 0) && ((longlong *)param_1[0x61] != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*(longlong *)param_1[0x61] + 0x30))(), cVar1 != '\0')) {
      if ((int)param_1[0x62] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)param_1[0x61];
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))
                        (plVar3,(int)param_1[99],param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
      return uVar2;
    }
    uVar2 = (**(code **)(*param_1 + 0x88))
                      (param_1,(int)param_1[99],param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
  }
  else {
    uVar2 = (ulonglong)param_6;
  }
  return uVar2;
}



// FUNCTION 14952d546 FUN_14952d546 body=171 status=ok
// SIG undefined FUN_14952d546(void)

void FUN_14952d546(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_14952d5c5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_14952d5c5;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14952d5c5:
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
                    /* WARNING: Could not recover jumptable at 0x00014952d5e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14952d5f2 FUN_14952d5f2 body=198 status=ok
// SIG undefined FUN_14952d5f2(void)

void FUN_14952d5f2(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)*param_1;
  local_30 = (undefined8 *)((longlong *)*param_1)[1];
  if (local_30 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = *(int *)(local_30 + 1) + 1;
    UNLOCK();
    puVar3 = local_30;
  }
  local_38 = lVar2;
  FUN_14952d6cc(param_2,param_3,&local_38);
  (**(code **)(*param_2 + 0x80))
            (param_2,*(undefined4 *)(lVar2 + 0x270),param_3 + 0x228,param_3 + 600);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952d6cc FUN_14952d6cc body=488 status=ok
// SIG undefined FUN_14952d6cc(void)

void FUN_14952d6cc(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined1 local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x37a) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x1b0);
  local_78 = 0;
  local_70 = 1;
  local_58 = (code *)&LAB_14952d8b6;
  local_50 = 0;
  FUN_14952daac(local_68,param_1,&local_58);
  FUN_145ab4d4e(param_1 + 8,&local_78);
  local_a0 = 0x3f800000;
  uStack_9c = 0;
  uStack_98 = 0x3f800000;
  uStack_94 = 0x3f800000;
  local_90 = 0;
  local_8c = 1;
  local_58 = FUN_14952d8c4;
  local_50 = 0;
  FUN_14952df9e(local_88,param_1,&local_58);
  FUN_140a5c8a2(param_1 + 600,param_1 + 8,&local_a0);
  FUN_1449db362(local_88);
  FUN_14952e4c0(param_1 + 0x2e8,param_2 + 0x1b8);
  FUN_14952e544(param_1 + 0x2f8,param_2 + 0x1c8);
  FUN_145767132(param_1 + 800,param_2 + 0x1e8);
  FUN_14697937e(param_1 + 0x330,param_2 + 0x1f8);
  FUN_14697937e(param_1 + 0x340,param_2 + 0x208);
  FUN_146979402(param_1 + 0x350,param_2 + 0x218);
  local_b0 = *param_3;
  local_a8 = param_3[1];
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
    UNLOCK();
  }
  FUN_14952d9c6(param_1,&local_b0);
  *(undefined1 *)(param_1 + 700) = *(undefined1 *)(param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x254);
  *(undefined1 *)(param_1 + 0x37c) = *(undefined1 *)(param_2 + 0x251);
  *(undefined1 *)(param_1 + 0x37b) = *(undefined1 *)(param_2 + 0x252);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952d8c4 FUN_14952d8c4 body=257 status=ok
// SIG undefined FUN_14952d8c4(void)

undefined8 * FUN_14952d8c4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  bool bVar15;
  
  plVar3 = *(longlong **)(param_1 + 0x2b0);
  if (plVar3 == (longlong *)0x0) {
LAB_14952d99a:
    lVar5 = *(longlong *)(param_1 + 0x2c8);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar5 + 0x7c0);
    uVar9 = *(undefined8 *)(lVar5 + 0x7b8);
    *param_2 = *(undefined8 *)(lVar5 + 0x7b0);
    param_2[1] = uVar9;
  }
  else {
    iVar12 = (int)plVar3[1];
    do {
      if (iVar12 == 0) goto LAB_14952d99a;
      LOCK();
      iVar10 = (int)plVar3[1];
      bVar15 = iVar12 == iVar10;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar12 + 1;
        iVar10 = iVar12;
      }
      iVar12 = iVar10;
      UNLOCK();
    } while (!bVar15);
    plVar4 = *(longlong **)(param_1 + 0x2a8);
    lVar5 = *(longlong *)(param_1 + 0x2c8);
    puVar14 = (undefined4 *)(lVar5 + 0x7b0);
    if ((plVar4 != (longlong *)0x0 & *(byte *)(param_1 + 700)) == 1) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      lVar13 = (**(code **)(*plVar4 + 0x48))(plVar4);
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
      if (lVar13 != 0) {
        cVar11 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar13);
        if (cVar11 != '\0') {
          puVar14 = (undefined4 *)(lVar5 + 0x7c4);
        }
      }
    }
    *(undefined4 *)(param_2 + 2) = puVar14[4];
    uVar6 = puVar14[1];
    uVar7 = puVar14[2];
    uVar8 = puVar14[3];
    *(undefined4 *)param_2 = *puVar14;
    *(undefined4 *)((longlong)param_2 + 4) = uVar6;
    *(undefined4 *)(param_2 + 1) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  return param_2;
}



// FUNCTION 14952d9c6 FUN_14952d9c6 body=229 status=ok
// SIG undefined FUN_14952d9c6(void)

void FUN_14952d9c6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    lVar5 = lVar2 + 0x4d8;
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    *(longlong *)(param_1 + 0x2a8) = lVar5;
    plVar4 = *(longlong **)(param_1 + 0x2b0);
    if (plVar4 == (longlong *)0x0) goto LAB_14952da74;
LAB_14952da14:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    *(longlong **)(param_1 + 0x2b0) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_14952da74;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar5 = lVar2 + 0x4d8;
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    *(longlong *)(param_1 + 0x2a8) = lVar5;
    if (*(longlong **)(param_1 + 0x2b0) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x2b0);
      if (plVar4 != (longlong *)0x0) goto LAB_14952da14;
      *(longlong **)(param_1 + 0x2b0) = plVar3;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14952da74:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014952da9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14952daac FUN_14952daac body=397 status=ok
// SIG undefined FUN_14952daac(void)

longlong * FUN_14952daac(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_14952dbc8:
    *puVar5 = &PTR_LAB_149f056a0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar10;
    *puVar5 = &PTR_FUN_14bd36aa0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14952dbc8;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar9 = *(longlong *)(param_2 + 0x10) + -8;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar9 = 0;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f056a0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14bd36aa0;
    puVar5[3] = lVar9;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14952dc3a FUN_14952dc3a body=64 status=ok
// SIG undefined FUN_14952dc3a(void)

undefined8 * FUN_14952dc3a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bd36aa0;
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



// FUNCTION 14952dc7e FUN_14952dc7e body=81 status=ok
// SIG undefined FUN_14952dc7e(void)

undefined8 FUN_14952dc7e(longlong param_1)

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



// FUNCTION 14952dcd6 FUN_14952dcd6 body=89 status=ok
// SIG undefined FUN_14952dcd6(void)

bool FUN_14952dcd6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14952dd21;
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
LAB_14952dd21:
  return lVar6 == param_2;
}



// FUNCTION 14952dd4c FUN_14952dd4c body=118 status=ok
// SIG undefined FUN_14952dd4c(void)

void FUN_14952dd4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36aa0;
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



// FUNCTION 14952ddc2 FUN_14952ddc2 body=118 status=ok
// SIG undefined FUN_14952ddc2(void)

void FUN_14952ddc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36aa0;
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



// FUNCTION 14952de38 FUN_14952de38 body=156 status=ok
// SIG undefined FUN_14952de38(void)

void FUN_14952de38(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f056a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd36aa0;
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
                    /* WARNING: Could not recover jumptable at 0x00014952dec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14952ded4 FUN_14952ded4 body=102 status=ok
// SIG undefined FUN_14952ded4(void)

undefined8 FUN_14952ded4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar7) {
        uVar6 = (**(code **)(param_1 + 0x28))
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        return uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014952df36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar6;
}



// FUNCTION 14952df3a FUN_14952df3a body=100 status=ok
// SIG undefined FUN_14952df3a(void)

ulonglong FUN_14952df3a(longlong param_1)

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
LAB_14952df93:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14952df93;
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



// FUNCTION 14952df9e FUN_14952df9e body=397 status=ok
// SIG undefined FUN_14952df9e(void)

longlong * FUN_14952df9e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_14952e0ba:
    *puVar5 = &PTR_LAB_149f05990;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar10;
    *puVar5 = &PTR_FUN_14bd36b10;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14952e0ba;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar9 = *(longlong *)(param_2 + 0x10) + -8;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar9 = 0;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05990;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14bd36b10;
    puVar5[3] = lVar9;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14952e12c FUN_14952e12c body=64 status=ok
// SIG undefined FUN_14952e12c(void)

undefined8 * FUN_14952e12c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bd36b10;
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



// FUNCTION 14952e170 FUN_14952e170 body=81 status=ok
// SIG undefined FUN_14952e170(void)

undefined8 FUN_14952e170(longlong param_1)

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



// FUNCTION 14952e1c8 FUN_14952e1c8 body=89 status=ok
// SIG undefined FUN_14952e1c8(void)

bool FUN_14952e1c8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14952e213;
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
LAB_14952e213:
  return lVar6 == param_2;
}



// FUNCTION 14952e23e FUN_14952e23e body=118 status=ok
// SIG undefined FUN_14952e23e(void)

void FUN_14952e23e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36b10;
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



// FUNCTION 14952e2b4 FUN_14952e2b4 body=118 status=ok
// SIG undefined FUN_14952e2b4(void)

void FUN_14952e2b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36b10;
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



// FUNCTION 14952e32a FUN_14952e32a body=156 status=ok
// SIG undefined FUN_14952e32a(void)

void FUN_14952e32a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd36b10;
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
                    /* WARNING: Could not recover jumptable at 0x00014952e3b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14952e3c6 FUN_14952e3c6 body=105 status=ok
// SIG undefined FUN_14952e3c6(void)

undefined8 FUN_14952e3c6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14952e41a:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14952e41a;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 14952e430 FUN_14952e430 body=143 status=ok
// SIG undefined FUN_14952e430(void)

ulonglong FUN_14952e430(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [44];
  undefined1 local_2c [20];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14952e49e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14952e49e;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_2c);
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14952e4c0 FUN_14952e4c0 body=130 status=ok
// SIG undefined FUN_14952e4c0(void)

void FUN_14952e4c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952e544 FUN_14952e544 body=130 status=ok
// SIG undefined FUN_14952e544(void)

void FUN_14952e544(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952e5c8 FUN_14952e5c8 body=843 status=ok
// SIG undefined FUN_14952e5c8(void)

longlong * FUN_14952e5c8(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *param_3;
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (((*(int *)(param_1 + 0x810) == 0) || (*(longlong **)(param_1 + 0x808) == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x808) + 0x30))(), cVar3 == '\0'))
  goto LAB_14952e652;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0x810) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x808);
  }
  local_68 = lVar4;
  local_60 = plVar6;
  cVar3 = (**(code **)(*plVar5 + 0x58))();
  if (cVar3 != '\0') goto LAB_14952e652;
  if (*(longlong **)(param_1 + 0x8b0) == (longlong *)0x0) {
    local_78 = 0;
    local_70 = 0;
    uVar8 = 0xffffffff;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x8b0) + 8))();
    uVar8 = 0xffffffff;
    if ((longlong)local_70 != 0) {
      lVar7 = 0;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        if (*(longlong *)(local_78 + lVar7) == lVar4) break;
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 0x10;
        uVar8 = 0xffffffff;
      } while ((longlong)local_70 * 0x10 != lVar7);
    }
  }
  iVar11 = 1;
  if (*(int *)(param_1 + 0x708) - *(int *)(param_1 + 0x734) == 1) {
    local_60 = (longlong *)(param_1 + 0x710);
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (*(int *)(param_1 + 0x728) == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      lVar4 = (longlong)local_58._4_4_;
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x700) + lVar4 * 0x18);
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 8 + lVar4 * 0x18);
    if (plVar5 == (longlong *)0x0) {
      if (lVar7 != 0) goto LAB_14952e7a3;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      if (lVar7 == 0) {
        iVar11 = 1;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
LAB_14952e7a3:
        iVar11 = -1;
        if ((longlong)local_70 != 0) {
          lVar4 = 0;
          iVar10 = 0;
          do {
            iVar11 = iVar10;
            if (*(longlong *)(local_78 + lVar4) == lVar7) break;
            iVar10 = iVar10 + 1;
            lVar4 = lVar4 + 0x10;
            iVar11 = -1;
          } while ((longlong)local_70 * 0x10 != lVar4);
        }
        if (plVar5 == (longlong *)0x0) {
          iVar11 = (uint)(iVar11 < (int)uVar8) * 2 + -1;
          goto LAB_14952e859;
        }
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        iVar11 = (uint)(iVar11 < (int)uVar8) * 2 + -1;
      }
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
LAB_14952e859:
  do {
    uVar8 = uVar8 + iVar11;
    if (((int)uVar8 < 0) || (local_70 <= (int)uVar8)) {
      *param_2 = -1;
      param_2[1] = 0;
      if (plVar6 == (longlong *)0x0) goto LAB_14952e683;
      goto LAB_14952e666;
    }
    lVar4 = *(longlong *)(local_78 + (ulonglong)uVar8 * 0x10);
    plVar5 = *(longlong **)(local_78 + 8 + (ulonglong)uVar8 * 0x10);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)();
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0x810) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x808);
    }
    local_68 = lVar4;
    local_60 = plVar5;
    cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,&local_68);
    plVar6 = plVar5;
  } while (cVar3 == '\0');
LAB_14952e652:
  *param_2 = lVar4;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
LAB_14952e666:
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
LAB_14952e683:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14952e914 FUN_14952e914 body=141 status=ok
// SIG undefined FUN_14952e914(void)

void FUN_14952e914(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x869) = 1;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1495256f4(param_1,&local_28);
  puVar2 = (undefined8 *)param_2[1];
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



// FUNCTION 14952e9b2 FUN_14952e9b2 body=88 status=ok
// SIG undefined FUN_14952e9b2(void)

void FUN_14952e9b2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14952ea0a(param_1 + 0x700);
  FUN_14952ea4e(param_1,param_2);
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014952e9fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14952ea0a FUN_14952ea0a body=67 status=ok
// SIG undefined FUN_14952ea0a(void)

void FUN_14952ea0a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_149524720(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1495282da(param_1);
    return;
  }
  FUN_14952eb1a(param_1);
  FUN_149524720(param_1,0);
  return;
}



// FUNCTION 14952ea4e FUN_14952ea4e body=202 status=ok
// SIG undefined FUN_14952ea4e(void)

void FUN_14952ea4e(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x3a0) != 0) && (*(longlong **)(param_1 + 0x398) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x398);
      }
      iVar2 = (**(code **)(*plVar3 + 0x58))();
      *(int *)(param_1 + 0x390) = iVar2;
      goto LAB_14952eab0;
    }
  }
  iVar2 = *(int *)(param_1 + 0x390);
LAB_14952eab0:
  if (iVar2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x4d8);
    local_28 = *param_2;
    local_20 = param_2[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_28,1,1);
    (**(code **)(*plVar3 + 0x40))(plVar3,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952eb1a FUN_14952eb1a body=322 status=ok
// SIG undefined FUN_14952eb1a(void)

void FUN_14952eb1a(longlong *param_1)

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



// FUNCTION 14952ec5e FUN_14952ec5e body=391 status=ok
// SIG undefined FUN_14952ec5e(void)

void FUN_14952ec5e(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = *param_2;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (ulonglong *)((longlong)plVar7 + uVar8 * 4);
      do {
        puVar9 = (ulonglong *)((longlong)iVar6 * 0x18 + *param_1);
        uVar8 = *param_2;
        plVar7 = (longlong *)param_2[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        uVar3 = *puVar9;
        plVar4 = (longlong *)puVar9[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
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
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar7 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if (uVar3 == uVar8) {
          FUN_14952ede6(param_1,(int)*puVar10);
          break;
        }
        iVar6 = (int)puVar9[2];
        puVar10 = puVar9 + 2;
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014952ecac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14952ede6 FUN_14952ede6 body=87 status=ok
// SIG undefined FUN_14952ede6(void)

void FUN_14952ede6(longlong *param_1,int param_2)

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
  FUN_14952ee3e();
  return;
}



// FUNCTION 14952ee3e FUN_14952ee3e body=78 status=ok
// SIG undefined FUN_14952ee3e(void)

void FUN_14952ee3e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 8 + (longlong)param_2 * 0x18);
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
  FUN_149528268(param_1,param_2);
  return;
}



// FUNCTION 14952ee8c FUN_14952ee8c body=134 status=ok
// SIG undefined FUN_14952ee8c(void)

void FUN_14952ee8c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_2;
    local_18 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (**(code **)(*param_1 + 0x60))();
  }
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952ef14 FUN_14952ef14 body=152 status=ok
// SIG undefined FUN_14952ef14(void)

ulonglong FUN_14952ef14(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte unaff_BL;
  byte bVar4;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_1[1] == 0) || (param_1 = (longlong *)*param_1, param_1 == (longlong *)0x0)) {
    bVar4 = 0;
    uVar5 = 0;
  }
  else {
    local_30 = *param_2;
    local_28 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    unaff_BL = (**(code **)(*param_1 + 0x60))();
    uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
    bVar4 = 1;
  }
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71(uVar5,bVar4 & unaff_BL) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952efae FUN_14952efae body=167 status=ok
// SIG undefined FUN_14952efae(void)

void FUN_14952efae(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14952f029;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14952f029;
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
LAB_14952f029:
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
                    /* WARNING: Could not recover jumptable at 0x00014952f049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14952f056 FUN_14952f056 body=386 status=ok
// SIG undefined FUN_14952f056(void)

longlong * FUN_14952f056(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14952f167:
    *puVar5 = &PTR_LAB_14bd36bf0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14bd36b80;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14952f167;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14bd36bf0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14bd36b80;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14952f1d8 FUN_14952f1d8 body=64 status=ok
// SIG undefined FUN_14952f1d8(void)

undefined8 * FUN_14952f1d8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bd36b80;
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



// FUNCTION 14952f21c FUN_14952f21c body=81 status=ok
// SIG undefined FUN_14952f21c(void)

undefined8 FUN_14952f21c(longlong param_1)

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



// FUNCTION 14952f274 FUN_14952f274 body=89 status=ok
// SIG undefined FUN_14952f274(void)

bool FUN_14952f274(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14952f2bf;
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
LAB_14952f2bf:
  return lVar6 == param_2;
}



// FUNCTION 14952f2f6 FUN_14952f2f6 body=118 status=ok
// SIG undefined FUN_14952f2f6(void)

void FUN_14952f2f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd36bf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36b80;
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



// FUNCTION 14952f36c FUN_14952f36c body=118 status=ok
// SIG undefined FUN_14952f36c(void)

void FUN_14952f36c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd36bf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36b80;
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



// FUNCTION 14952f3e2 FUN_14952f3e2 body=156 status=ok
// SIG undefined FUN_14952f3e2(void)

void FUN_14952f3e2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bd36bf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd36b80;
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
                    /* WARNING: Could not recover jumptable at 0x00014952f46e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14952f47e FUN_14952f47e body=232 status=ok
// SIG undefined FUN_14952f47e(void)

undefined8 FUN_14952f47e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x20);
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar8[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14952f4cc;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar7 = *(longlong *)(param_1 + 0x18);
    bVar4 = false;
  }
LAB_14952f4cc:
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x30);
  local_38 = *param_3;
  local_30 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  (*pcVar3)(iVar6 + lVar7,param_2);
  if (!bVar4) {
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
  plVar8 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14952f568 FUN_14952f568 body=293 status=ok
// SIG undefined FUN_14952f568(void)

ulonglong FUN_14952f568(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14952f645;
      iVar1 = iVar8 + 1;
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (lVar5 != 0) {
      pcVar6 = *(code **)(param_1 + 0x28);
      iVar8 = *(int *)(param_1 + 0x30);
      local_30 = *param_2;
      local_28 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar6)(lVar5 + iVar8,local_40);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_38 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar3 = (int *)((longlong)local_38 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
          }
        }
      }
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      uVar9 = CONCAT71((int7)((ulonglong)local_38 >> 8),1);
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
      goto LAB_14952f647;
    }
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4,iVar1,param_3,param_3);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_14952f645:
  uVar9 = 0;
LAB_14952f647:
  plVar4 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14952f690 FUN_14952f690 body=386 status=ok
// SIG undefined FUN_14952f690(void)

longlong * FUN_14952f690(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14952f7a1:
    *puVar5 = &PTR_LAB_14bd36cd0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14bd36c60;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14952f7a1;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14bd36cd0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14bd36c60;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14952f812 FUN_14952f812 body=64 status=ok
// SIG undefined FUN_14952f812(void)

undefined8 * FUN_14952f812(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bd36c60;
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



// FUNCTION 14952f856 FUN_14952f856 body=81 status=ok
// SIG undefined FUN_14952f856(void)

undefined8 FUN_14952f856(longlong param_1)

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



// FUNCTION 14952f8ae FUN_14952f8ae body=89 status=ok
// SIG undefined FUN_14952f8ae(void)

bool FUN_14952f8ae(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14952f8f9;
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
LAB_14952f8f9:
  return lVar6 == param_2;
}



// FUNCTION 14952f930 FUN_14952f930 body=118 status=ok
// SIG undefined FUN_14952f930(void)

void FUN_14952f930(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd36cd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36c60;
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



// FUNCTION 14952f9a6 FUN_14952f9a6 body=118 status=ok
// SIG undefined FUN_14952f9a6(void)

void FUN_14952f9a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd36cd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36c60;
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



// FUNCTION 14952fa1c FUN_14952fa1c body=156 status=ok
// SIG undefined FUN_14952fa1c(void)

void FUN_14952fa1c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bd36cd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd36c60;
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
                    /* WARNING: Could not recover jumptable at 0x00014952faa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14952fab8 FUN_14952fab8 body=219 status=ok
// SIG undefined FUN_14952fab8(void)

void FUN_14952fab8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x20);
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar8[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14952fb01;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar7 = *(longlong *)(param_1 + 0x18);
    bVar4 = false;
  }
LAB_14952fb01:
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x30);
  local_30 = *param_2;
  local_28 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)(iVar6 + lVar7);
  if (!bVar4) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14952fb94 FUN_14952fb94 body=241 status=ok
// SIG undefined FUN_14952fb94(void)

ulonglong FUN_14952fb94(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_14952fc3d;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      pcVar5 = *(code **)(param_1 + 0x28);
      iVar7 = *(int *)(param_1 + 0x30);
      local_30 = *param_2;
      local_28 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar5)(lVar4 + iVar7);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
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
      goto LAB_14952fc3f;
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
LAB_14952fc3d:
  uVar8 = 0;
LAB_14952fc3f:
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14952fc88 FUN_14952fc88 body=2293 status=ok
// SIG undefined FUN_14952fc88(void)

void FUN_14952fc88(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_5c8 [32];
  undefined1 *local_5a8;
  longlong local_5a0;
  undefined4 local_598;
  longlong local_590;
  undefined8 local_588;
  undefined1 local_580;
  undefined2 local_570;
  undefined8 local_568;
  undefined4 local_560;
  undefined8 local_558;
  longlong *local_550;
  undefined8 uStack_548;
  undefined1 local_539;
  undefined8 local_538;
  longlong *plStack_530;
  undefined8 uStack_528;
  longlong *local_520 [2];
  undefined1 local_510 [16];
  undefined1 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  longlong *local_4e0;
  longlong local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  longlong *plStack_4c0;
  undefined1 local_4b0 [8];
  longlong *local_4a8;
  longlong *local_4a0;
  undefined8 uStack_498;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5c8;
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0xa2);
  FUN_149530946((longlong *)(param_1 + 0x690),param_2 + 0x1b0);
  FUN_149530946(param_1 + 0x6a0,param_2 + 0x1c0);
  FUN_1495309ca(param_1 + 0x680,param_2 + 0x1d0);
  FUN_146a3ba92(param_1 + 0x6d0,param_2 + 0x1e0);
  FUN_149530a4e(param_1 + 0x6e0,param_2 + 0x200);
  FUN_14009d848(param_1 + 0x6f0,param_2 + 0x210);
  plVar9 = *(longlong **)(param_1 + 0x10);
  if (plVar9 == (longlong *)0x0) {
LAB_14952fd3a:
    local_4c8 = 0;
    plStack_4c0 = (longlong *)0x0;
    bVar11 = true;
  }
  else {
    iVar7 = (int)plVar9[1];
    do {
      if (iVar7 == 0) goto LAB_14952fd3a;
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar11 = iVar7 == iVar4;
      if (bVar11) {
        *(int *)(plVar9 + 1) = iVar7 + 1;
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      UNLOCK();
    } while (!bVar11);
    uVar8 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    bVar11 = false;
    local_4c8 = uVar8;
    plStack_4c0 = plVar9;
  }
  plVar9 = plStack_4c0;
  FUN_149530690(param_2,local_4b0,&local_4c8);
  FUN_14953057e(param_1,local_4b0);
  if (!bVar11) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  FUN_146a3c65e(param_1 + 0x370,param_2 + 0x270);
  FUN_14009d848(param_1 + 0x380,param_2 + 0x280);
  FUN_149531596(param_1 + 0x818,param_2 + 0x290);
  FUN_149531596(param_1 + 0x828,param_2 + 0x2a0);
  FUN_14953161a(param_1 + 0x7f8,param_2 + 0x2b0);
  FUN_14953169e(param_1 + 0x808,param_2 + 0x2c0);
  *(undefined1 *)(param_1 + 0x394) = *(undefined1 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x2d0);
  FUN_146a3c86e(param_1 + 0x398,param_2 + 0x2d8);
  *(undefined1 *)(param_1 + 0x864) = *(undefined1 *)(param_2 + 0x2f8);
  *(undefined1 *)(param_1 + 0x4c8) = *(undefined1 *)(param_2 + 0x341);
  *(undefined1 *)(param_1 + 0x4c9) = *(undefined1 *)(param_2 + 0x351);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x354);
  *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_2 + 0x358);
  *(undefined1 *)(param_1 + 0x865) = *(undefined1 *)(param_2 + 0x36c);
  *(undefined1 *)(param_1 + 0x866) = *(undefined1 *)(param_2 + 0x36d);
  *(undefined1 *)(param_1 + 0x867) = *(undefined1 *)(param_2 + 0x36e);
  *(undefined2 *)(param_1 + 0x848) = *(undefined2 *)(param_2 + 0x370);
  FUN_14096c7c0(param_1 + 0x850,param_2 + 0x378);
  *(undefined1 *)(param_1 + 0x868) = *(undefined1 *)(param_2 + 0x388);
  *(undefined1 *)(param_1 + 0x2d8) = *(undefined1 *)(param_2 + 0x315);
  if ((undefined8 *)(param_2 + 0x318) != (undefined8 *)(param_1 + 0x2c8)) {
    if (*(char *)(param_2 + 800) == '\x01') {
      *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x318);
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x2d0) != '\x01') goto LAB_14952feea;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x2d0) = uVar6;
  }
LAB_14952feea:
  *(undefined1 *)(param_1 + 0x7f0) = *(undefined1 *)(param_2 + 0x314);
  if (*(longlong **)(param_2 + 0x390) != (longlong *)0x0 && *(int *)(param_2 + 0x398) != 0) {
    cVar5 = (**(code **)(**(longlong **)(param_2 + 0x390) + 0x30))();
    if (cVar5 != '\0') {
      local_4a8 = (longlong *)0x0;
      local_4a0 = (longlong *)((ulonglong)local_4a0 & 0xffffffff00000000);
      FUN_149531722(&local_4a8,param_2 + 0x390);
      goto LAB_14952ffb6;
    }
  }
  local_4a8 = (longlong *)0x0;
  local_4a0._0_4_ = 0;
  FUN_1446efa72(&local_4a8,0,2,0x10);
  local_4a0 = (longlong *)CONCAT44(local_4a0._4_4_,2);
  *local_4a8 = (longlong)&PTR_LAB_14bd36f60;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_4a8[2] = lVar10;
  *local_4a8 = (longlong)&PTR_FUN_14bd36ef0;
  local_4a8[3] = (longlong)FUN_1495317a6;
LAB_14952ffb6:
  FUN_149531722(param_1 + 0x6b0,&local_4a8);
  FUN_1449db362(&local_4a8);
  FUN_14009d848(param_1 + 0x6c0,param_2 + 0x3a0);
  FUN_14603678a(param_1 + 0x838,param_2 + 0x3b0);
  FUN_149530850(param_1,*(undefined8 *)(param_2 + 0x1a8));
  *(undefined1 *)(param_1 + 0x87c) = *(undefined1 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x878) = *(undefined4 *)(param_2 + 600);
  FUN_146a24854(param_1 + 0x880,param_2 + 0x260);
  *(undefined1 *)(param_1 + 0x894) = *(undefined1 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x890) = *(undefined4 *)(param_2 + 600);
  FUN_146a24854(param_1 + 0x898,param_2 + 0x260);
  uVar8 = *(undefined8 *)(param_2 + 0x364);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x35c);
  *(undefined8 *)(param_1 + 0x2b0) = uVar8;
  local_4d8 = 0;
  uStack_4d0 = 0;
  if (((*(int *)(param_1 + 0x698) == 0) ||
      (plVar9 = *(longlong **)(param_1 + 0x690), plVar9 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*plVar9 + 0x30))(), cVar5 == '\0')) {
    FUN_1400020e8(&local_4d8,L"Please specify an OnGenerateRow. \n",0x22);
  }
  if (*(longlong *)(param_1 + 0x8b0) == 0) {
    FUN_1400020e8(&local_4d8,L"Please specify a ListItemsSource. \n",0x23);
  }
  if ((int)uStack_4d0 - 2U < 0x7fffffff) {
    *(undefined1 **)(param_1 + 0x228) = &DAT_200000002;
    FUN_140a570d8(&local_4a8);
    FUN_140009b9a(local_520,&local_4d8);
    FUN_14023423e(local_510,local_520);
    local_500 = 1;
    local_4f8 = 0;
    uStack_4f0 = 0;
    uVar8 = FUN_140a54906(&local_4a8,local_510);
    local_5a8 = &local_539;
    FUN_140a54526(&local_538,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x122)
    ;
    FUN_140a52852(&local_538,&local_4e8,uVar8);
    local_558 = local_4e8;
    local_550 = local_4e0;
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4e0 + 1) = (int)local_4e0[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(param_1 + 0x1e0,&local_558);
    plVar9 = local_550;
    if (local_550 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_550 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_550)(local_550);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_4e0 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_4e0)(local_4e0);
        LOCK();
        piVar2 = (int *)((longlong)local_4e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_4e0 + 0x10))(local_4e0);
        }
      }
    }
    plVar9 = plStack_530;
    if (plStack_530 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_530 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_530)(plStack_530);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_520[0] != (longlong *)0x0) {
      (**(code **)(*local_520[0] + 0x10))();
    }
    FUN_140a59ae6(&local_4a8);
  }
  else {
    local_580 = *(undefined1 *)(param_2 + 0x350);
    local_588 = *(undefined8 *)(param_2 + 0x348);
    local_590 = param_2 + 0x1f0;
    local_598 = *(undefined4 *)(param_2 + 0x310);
    local_5a0 = param_2 + 0x300;
    local_5a8 = (undefined1 *)(param_2 + 0x2e8);
    local_4a8 = (longlong *)CONCAT62(local_4a8._2_6_,0x103);
    local_4a0 = (longlong *)0x0;
    uStack_498 = 0;
    local_538 = CONCAT35((int3)((ulonglong)local_538 >> 0x28),0x100000000);
    plStack_530 = (longlong *)0x0;
    uStack_528 = 0;
    local_558 = CONCAT35(local_558._5_3_,0x100000000);
    local_550 = (longlong *)0x0;
    uStack_548 = 0;
    FUN_1429092be(param_1,&local_558,&local_538,&local_4a8);
    FUN_1449db362(&local_550);
    FUN_1449db362(&plStack_530);
    FUN_1449db362(&local_4a0);
    if (*(longlong *)(param_1 + 0x298) != 0) {
      FUN_146a92d5a(*(longlong *)(param_1 + 0x298),*(undefined1 *)(param_2 + 0x340));
      lVar3 = *(longlong *)(param_1 + 0x298);
      local_570 = *(undefined2 *)(param_2 + 0x328);
      local_568 = 0;
      local_560 = 0;
      FUN_140fe25fc(&local_568,param_2 + 0x330);
      *(undefined1 *)(lVar3 + 0x2a0) = (undefined1)local_570;
      *(undefined1 *)(lVar3 + 0x2a1) = local_570._1_1_;
      FUN_140fe25fc(lVar3 + 0x2a8,&local_568);
      FUN_1449db362(&local_568);
    }
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_14953046e:
      local_538 = 0;
      plStack_530 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_14953046e;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar11 = iVar7 == iVar4;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar4 = iVar7;
        }
        iVar7 = iVar4;
        UNLOCK();
      } while (!bVar11);
      local_538 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_530 = plVar9;
      if ((int)*plVar1 == 0) {
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
    plVar9 = (longlong *)FUN_14001cc68(0x28,0x10);
    FUN_149531a9e(plVar9,&local_538);
    local_4a8 = plVar9 + 2;
    local_4a0 = plVar9;
    FUN_1495308c8(param_1);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    plVar9 = plStack_530;
    if (plStack_530 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_530 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_530)(plStack_530);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  if (local_4d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_5c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14953057e FUN_14953057e body=273 status=ok
// SIG undefined FUN_14953057e(void)

void FUN_14953057e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if ((*(byte *)((longlong)param_1 + 0x31) & 4) == 0) {
    param_1 = param_1 + 0x116;
    if (param_1 != param_2) {
      puVar3 = (undefined8 *)*param_1;
      *param_1 = *param_2;
      *param_2 = 0;
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  else {
    (**(code **)(param_1[0x9b] + 0x30))(param_1 + 0x9b);
    *(undefined4 *)(param_1 + 0xfb) = 0;
    *(undefined1 *)((longlong)param_1 + 0x869) = 0;
    param_1[0xf9] = 0;
    plVar4 = (longlong *)param_1[0xfa];
    if (plVar4 != (longlong *)0x0) {
      param_1[0xfa] = 0;
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
    FUN_146af6b36(param_1);
    plVar4 = param_1 + 0x116;
    if (plVar4 != param_2) {
      puVar3 = (undefined8 *)*plVar4;
      *plVar4 = *param_2;
      *param_2 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    (**(code **)(*param_1 + 0x248))(param_1);
  }
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149530683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,1);
  return;
}



// FUNCTION 149530690 FUN_149530690 body=445 status=ok
// SIG undefined FUN_149530690(void)

undefined8 * FUN_149530690(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x220);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x228);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x230);
      if (lVar3 == 0) {
        *param_2 = 0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x238);
        if (plVar4 == (longlong *)0x0) {
          uVar6 = FUN_14001cc68(0x30,0x10);
          local_38 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          uVar6 = FUN_14001cc68(0x30,0x10);
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_38 = plVar4;
        }
        local_50 = *param_3;
        local_48 = param_3[1];
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
        }
        local_40 = lVar3;
        FUN_14953109a(uVar6,&local_50,&local_40);
        *param_2 = uVar6;
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
    }
    else {
      uVar6 = FUN_14001cc68(0x28,0x10);
      local_40 = *param_3;
      local_38 = (longlong *)param_3[1];
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      FUN_149530b0c(uVar6,&local_40,lVar3);
      *param_2 = uVar6;
    }
  }
  else {
    puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar5 = &PTR_FUN_14bd36d40;
    puVar5[1] = lVar3;
    *param_2 = puVar5;
  }
  plVar4 = (longlong *)param_3[1];
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
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149530850 FUN_149530850 body=119 status=ok
// SIG undefined FUN_149530850(void)

void FUN_149530850(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x870) = param_2;
  if (param_2 == 0) {
    local_38 = FUN_141319416();
  }
  else {
    local_38 = param_2 + 0x10;
  }
  local_30 = 1;
  local_28 = 0;
  uStack_20 = 0;
  FUN_146af67b6(param_1,&local_38);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495308c8 FUN_1495308c8 body=125 status=ok
// SIG undefined FUN_1495308c8(void)

void FUN_1495308c8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = (longlong *)param_2[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_14287bbd4(param_1,&local_20);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149530946 FUN_149530946 body=130 status=ok
// SIG undefined FUN_149530946(void)

void FUN_149530946(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495309ca FUN_1495309ca body=130 status=ok
// SIG undefined FUN_1495309ca(void)

void FUN_1495309ca(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149530a4e FUN_149530a4e body=130 status=ok
// SIG undefined FUN_149530a4e(void)

void FUN_149530a4e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149530ad2 FUN_149530ad2 body=29 status=ok
// SIG undefined FUN_149530ad2(void)

undefined8 FUN_149530ad2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149530b0c FUN_149530b0c body=175 status=ok
// SIG undefined FUN_149530b0c(void)

undefined8 * FUN_149530b0c(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bd36d60;
  param_1[1] = param_3;
  param_1[2] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  FUN_149530bbc(param_3 + 0x10,&local_28,param_1);
  param_1[4] = local_28;
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
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149530bbc FUN_149530bbc body=228 status=ok
// SIG undefined FUN_149530bbc(void)

undefined8 FUN_149530bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14bd36df0;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14bd36d80;
  local_38[3] = param_3;
  local_38[4] = FUN_149530ca2;
  FUN_149530d44(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149530ca2 FUN_149530ca2 body=91 status=ok
// SIG undefined FUN_149530ca2(void)

void FUN_149530ca2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
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
    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x240))();
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
                    /* WARNING: Could not recover jumptable at 0x000149530cf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149530cfe FUN_149530cfe body=38 status=ok
// SIG undefined FUN_149530cfe(void)

undefined8 FUN_149530cfe(undefined8 param_1,int param_2)

{
  FUN_149531050();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149530d44 FUN_149530d44 body=230 status=ok
// SIG undefined FUN_149530d44(void)

undefined8 * FUN_149530d44(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 149530e2c FUN_149530e2c body=29 status=ok
// SIG undefined FUN_149530e2c(void)

undefined8 FUN_149530e2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149530e72 FUN_149530e72 body=93 status=ok
// SIG undefined FUN_149530e72(void)

void FUN_149530e72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd36df0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149530ed0 FUN_149530ed0 body=93 status=ok
// SIG undefined FUN_149530ed0(void)

void FUN_149530ed0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd36df0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149530f2e FUN_149530f2e body=126 status=ok
// SIG undefined FUN_149530f2e(void)

void FUN_149530f2e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bd36df0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd36d80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149530f9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149530fac FUN_149530fac body=79 status=ok
// SIG undefined FUN_149530fac(void)

void FUN_149530fac(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149530ffc FUN_149530ffc body=81 status=ok
// SIG undefined FUN_149530ffc(void)

undefined8 FUN_149530ffc(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149531050 FUN_149531050 body=74 status=ok
// SIG undefined FUN_149531050(void)

void FUN_149531050(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bd36d60;
  if (param_1[4] != 0) {
    FUN_14480f766(param_1[1] + 0x10);
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014953108f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14953109a FUN_14953109a body=240 status=ok
// SIG undefined FUN_14953109a(void)

undefined8 * FUN_14953109a(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14bd36e60;
  param_1[1] = *param_3;
  lVar3 = param_3[1];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = *param_2;
  lVar3 = param_2[1];
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[5] = 0;
  FUN_14953118c(*param_3 + 0x10,&local_30,param_1);
  param_1[5] = local_30;
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953118c FUN_14953118c body=228 status=ok
// SIG undefined FUN_14953118c(void)

undefined8 FUN_14953118c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14bd36df0;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14bd36e80;
  local_38[3] = param_3;
  local_38[4] = FUN_149531272;
  FUN_149530d44(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149531272 FUN_149531272 body=91 status=ok
// SIG undefined FUN_149531272(void)

void FUN_149531272(longlong param_1)

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
    do {
      if (iVar5 == 0) {
        return;
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
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x240))();
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
                    /* WARNING: Could not recover jumptable at 0x0001495312c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1495312ce FUN_1495312ce body=38 status=ok
// SIG undefined FUN_1495312ce(void)

undefined8 FUN_1495312ce(undefined8 param_1,int param_2)

{
  FUN_149531526();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149531310 FUN_149531310 body=29 status=ok
// SIG undefined FUN_149531310(void)

undefined8 FUN_149531310(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14953134a FUN_14953134a body=93 status=ok
// SIG undefined FUN_14953134a(void)

void FUN_14953134a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd36df0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36e80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1495313a8 FUN_1495313a8 body=93 status=ok
// SIG undefined FUN_1495313a8(void)

void FUN_1495313a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd36df0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36e80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149531406 FUN_149531406 body=126 status=ok
// SIG undefined FUN_149531406(void)

void FUN_149531406(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bd36df0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd36e80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149531475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149531484 FUN_149531484 body=79 status=ok
// SIG undefined FUN_149531484(void)

void FUN_149531484(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495314d4 FUN_1495314d4 body=81 status=ok
// SIG undefined FUN_1495314d4(void)

undefined8 FUN_1495314d4(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149531526 FUN_149531526 body=112 status=ok
// SIG undefined FUN_149531526(void)

void FUN_149531526(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd36e60;
  if (param_1[5] != 0) {
    FUN_14480f766(param_1[1] + 0x10);
  }
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014953158b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149531596 FUN_149531596 body=130 status=ok
// SIG undefined FUN_149531596(void)

void FUN_149531596(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953161a FUN_14953161a body=130 status=ok
// SIG undefined FUN_14953161a(void)

void FUN_14953161a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953169e FUN_14953169e body=130 status=ok
// SIG undefined FUN_14953169e(void)

void FUN_14953169e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149531722 FUN_149531722 body=130 status=ok
// SIG undefined FUN_149531722(void)

void FUN_149531722(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495317a6 FUN_1495317a6 body=100 status=ok
// SIG undefined FUN_1495317a6(void)

undefined8 FUN_1495317a6(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_2 == 0) {
    FUN_140056680(param_1,&DAT_149e2b65a);
  }
  else {
    FUN_140002266(param_1,L"0x%08llx");
  }
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
  return param_1;
}



// FUNCTION 14953180a FUN_14953180a body=29 status=ok
// SIG undefined FUN_14953180a(void)

undefined8 FUN_14953180a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14953184a FUN_14953184a body=93 status=ok
// SIG undefined FUN_14953184a(void)

void FUN_14953184a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd36f60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36ef0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1495318a8 FUN_1495318a8 body=93 status=ok
// SIG undefined FUN_1495318a8(void)

void FUN_1495318a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd36f60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36ef0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 149531906 FUN_149531906 body=126 status=ok
// SIG undefined FUN_149531906(void)

void FUN_149531906(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bd36f60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd36ef0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149531975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149531984 FUN_149531984 body=132 status=ok
// SIG undefined FUN_149531984(void)

undefined8 FUN_149531984(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar3 = *(code **)(param_1 + 0x18);
  local_28 = *param_3;
  local_20 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  (*pcVar3)(param_2);
  plVar4 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149531a0a FUN_149531a0a body=145 status=ok
// SIG undefined FUN_149531a0a(void)

undefined8 FUN_149531a0a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar3 = *(code **)(param_1 + 0x18);
  local_28 = *param_2;
  local_20 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)(local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149531a9e FUN_149531a9e body=150 status=ok
// SIG undefined FUN_149531a9e(void)

undefined8 * FUN_149531a9e(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14bd36fd0;
  plVar3 = (longlong *)param_2[1];
  lVar4 = *param_2 + 0x4d8;
  if (*param_2 == 0) {
    lVar4 = 0;
  }
  if (plVar3 == (longlong *)0x0) {
    param_1[2] = &PTR_FUN_14bd36ff0;
    param_1[3] = lVar4;
    param_1[4] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[2] = &PTR_FUN_14bd36ff0;
    param_1[3] = lVar4;
    param_1[4] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
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
  return param_1;
}



// FUNCTION 149531b56 FUN_149531b56 body=29 status=ok
// SIG undefined FUN_149531b56(void)

undefined8 FUN_149531b56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149531b74 FUN_149531b74 body=64 status=ok
// SIG undefined FUN_149531b74(void)

undefined8 * FUN_149531b74(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bd36ff0;
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



// FUNCTION 149531bb4 FUN_149531bb4 body=49 status=ok
// SIG undefined FUN_149531bb4(void)

bool FUN_149531bb4(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  
  FUN_149531d6a();
  bVar2 = true;
  if (DAT_14cc1e658 != *param_2) {
    plVar1 = (longlong *)FUN_146a3cf3e();
    bVar2 = *plVar1 == *param_2;
  }
  return bVar2;
}



// FUNCTION 149531be6 FUN_149531be6 body=386 status=ok
// SIG undefined FUN_149531be6(void)

longlong * FUN_149531be6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_149531c4d;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    plVar4 = *(longlong **)(param_1 + 8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0xd0))(plVar4,&local_50);
      iVar8 = 0;
      if ((longlong)local_48 != 0) {
        lVar9 = (longlong)local_48 << 4;
        lVar10 = local_50;
        do {
          (**(code **)(*plVar4 + 0xd8))(plVar4,&local_60,lVar10);
          if (local_60 != 0) {
            iVar8 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
              FUN_146a3d014(param_2,iVar8);
            }
            lVar5 = *param_2;
            *(longlong *)(lVar5 + (longlong)iVar8 * 0x10) = local_60;
            *(longlong **)(lVar5 + 8 + (longlong)iVar8 * 0x10) = local_58;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_58 + 1) = (int)local_58[1] + 1;
              UNLOCK();
            }
          }
          plVar6 = local_58;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_58 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          lVar10 = lVar10 + 0x10;
          lVar9 = lVar9 + -0x10;
          iVar8 = local_48;
        } while (lVar9 != 0);
      }
      FUN_14951ff11(local_50,iVar8);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_149531c4d:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149531d6a FUN_149531d6a body=104 status=ok
// SIG undefined FUN_149531d6a(void)

void FUN_149531d6a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1e660) {
    FUN_144b3d300(&DAT_14cc1e660);
    if (DAT_14cc1e660 == -1) {
      FUN_1446f470e(&DAT_14cc1e658,L"TTableViewMetadata",1);
      _Init_thread_footer(&DAT_14cc1e660);
      return;
    }
  }
  return;
}



// FUNCTION 149531dd2 FUN_149531dd2 body=62 status=ok
// SIG undefined FUN_149531dd2(void)

void FUN_149531dd2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149531e98(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 149531e10 FUN_149531e10 body=136 status=ok
// SIG undefined FUN_149531e10(void)

void FUN_149531e10(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 149531e98 FUN_149531e98 body=93 status=ok
// SIG undefined FUN_149531e98(void)

ulonglong FUN_149531e98(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 149531ef6 FUN_149531ef6 body=56 status=ok
// SIG undefined FUN_149531ef6(void)

void FUN_149531ef6(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000149531f23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149531f2e FUN_149531f2e body=29 status=ok
// SIG undefined FUN_149531f2e(void)

undefined8 FUN_149531f2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149531f4c FUN_149531f4c body=304 status=ok
// SIG undefined FUN_149531f4c(void)

longlong * FUN_149531f4c(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x400,0x10);
  FUN_14953207e(plVar3);
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_149536ae0(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14953200b;
    param_1[1] = 0;
LAB_149531fd5:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14953200b;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_14953200b;
      goto LAB_149531fd5;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14953200b;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_14953200b:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x3f0;
  FUN_140a52e78(*param_1 + 8,"SProviderPollRow",
                ".\\../Plugins/Animation/LiveLink/Source/LiveLink/Private/SLiveLinkMessageBusSourceFactory.cpp"
                ,0xc4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953207e FUN_14953207e body=170 status=ok
// SIG undefined FUN_14953207e(void)

undefined8 * FUN_14953207e(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14bd37030;
  memset(param_1 + 2,0,0x3f0);
  FUN_1495351bc(param_1 + 2);
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[2] = &PTR_LAB_14bd37050;
  param_1[3] = &PTR_FUN_14bd37100;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  return param_1;
}



// FUNCTION 149532132 FUN_149532132 body=29 status=ok
// SIG undefined FUN_149532132(void)

undefined8 FUN_149532132(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149532164 FUN_149532164 body=149 status=ok
// SIG undefined FUN_149532164(void)

byte FUN_149532164(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_1495321a0;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_1495321a0:
  lVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar6);
    plVar9 = (longlong *)(uVar7 & 0xffffffff);
  }
  if (!bVar3) {
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
  return lVar6 != 0 & (byte)plVar9;
}



// FUNCTION 1495321fa FUN_1495321fa body=248 status=ok
// SIG undefined FUN_1495321fa(void)

void FUN_1495321fa(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_149532249;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_149532249:
  cVar4 = (**(code **)(*plVar9 + 0x68))(plVar9,*(undefined4 *)(param_1 + 0x2b8));
  if ((cVar4 != '\0') &&
     (puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,param_1),
     puVar7 != (undefined8 *)0x0)) {
    uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,puVar7);
    local_38 = *puVar7;
    local_30 = puVar7[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar9 + 0x50))(plVar9,&local_38,uVar6 ^ 1);
  }
  if (!bVar2) {
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495322f4 FUN_1495322f4 body=149 status=ok
// SIG undefined FUN_1495322f4(void)

byte FUN_1495322f4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_149532330;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_149532330:
  lVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,lVar6);
    plVar9 = (longlong *)(uVar7 & 0xffffffff);
  }
  if (!bVar3) {
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
  return lVar6 != 0 & (byte)plVar9;
}



// FUNCTION 14953238a FUN_14953238a body=124 status=ok
// SIG undefined FUN_14953238a(void)

undefined4 FUN_14953238a(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_1495323c3;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_1495323c3:
  uVar5 = (**(code **)(*plVar7 + 0x88))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
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
  return uVar5;
}



// FUNCTION 149532406 FUN_149532406 body=124 status=ok
// SIG undefined FUN_149532406(void)

undefined1 FUN_149532406(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_149532440;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar5 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_149532440:
  uVar4 = (**(code **)(*plVar7 + 0x68))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
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
  return uVar4;
}



// FUNCTION 149532482 FUN_149532482 body=144 status=ok
// SIG undefined FUN_149532482(void)

longlong FUN_149532482(longlong param_1,longlong param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_1495324be;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_1495324be:
  uVar5 = (**(code **)(*plVar7 + 0x90))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_144a69486(param_2,uVar5);
  if (!bVar2) {
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
  return param_2;
}



// FUNCTION 149532512 FUN_149532512 body=126 status=ok
// SIG undefined FUN_149532512(void)

undefined4 FUN_149532512(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14953254c;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14953254c:
  uVar5 = (**(code **)(*plVar7 + 0x98))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
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
  return uVar5;
}



// FUNCTION 149532590 FUN_149532590 body=154 status=ok
// SIG undefined FUN_149532590(void)

longlong * FUN_149532590(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 == (longlong *)0x0) {
LAB_149532619:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_149532619;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x10) + -8;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar7 = 0;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
    lVar6 = lVar7 + 8;
    if (lVar7 == 0) {
      lVar6 = 0;
    }
    *param_2 = lVar6;
    param_2[1] = (longlong)plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 14953268e FUN_14953268e body=248 status=ok
// SIG undefined FUN_14953268e(void)

void FUN_14953268e(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_1495326dd;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_1495326dd:
  cVar4 = (**(code **)(*plVar9 + 0x68))(plVar9,*(undefined4 *)(param_1 + 0x2b8));
  if ((cVar4 != '\0') &&
     (puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,param_1),
     puVar7 != (undefined8 *)0x0)) {
    uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,puVar7);
    local_38 = *puVar7;
    local_30 = puVar7[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,&local_38,uVar6 ^ 1);
  }
  if (!bVar2) {
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149532796 FUN_149532796 body=114 status=ok
// SIG undefined FUN_149532796(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_149532796(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x2b0);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0xb8))();
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149532801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(_DAT_00000000 + 0xb8))(0);
  return uVar7;
}



// FUNCTION 149532808 FUN_149532808 body=207 status=ok
// SIG undefined FUN_149532808(void)

void FUN_149532808(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x368) = *param_4;
  plVar2 = (longlong *)param_4[1];
  plVar4 = *(longlong **)(param_1 + 0x370);
  if (plVar4 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar2;
  }
  local_48 = *(undefined1 *)(param_3 + 4);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_40 = 0;
  local_38 = 0;
  FUN_140a58be0(&local_40,param_3 + 6);
  uVar3 = FUN_140a58d14(param_1 + 0x220,&local_58);
  FUN_140a58896(uVar3,param_4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495328d8 FUN_1495328d8 body=1060 status=ok
// SIG undefined FUN_1495328d8(void)

int FUN_1495328d8(longlong param_1,int param_2,undefined8 param_3,ulonglong *param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,float *param_8)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  float *local_110;
  float *local_108;
  undefined4 local_100;
  float *local_f8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  ulonglong local_b4;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar13 = *(longlong **)(param_1 + 0x2b0);
  bVar8 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar10 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_14953295b;
      }
      LOCK();
      iVar9 = (int)plVar13[1];
      bVar16 = iVar10 == iVar9;
      if (bVar16) {
        *(int *)(plVar13 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
    } while (!bVar16);
    plVar14 = *(longlong **)(param_1 + 0x2a8);
    bVar8 = false;
  }
LAB_14953295b:
  lVar15 = 0x890;
  if (param_2 == 2) {
    lVar15 = 0x940;
  }
  lVar12 = 0x7e0;
  if (param_2 != 0) {
    lVar12 = lVar15;
  }
  lVar12 = lVar12 + *(longlong *)(param_1 + 0x2c8);
  iVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
  if (iVar10 == 1) {
    pfVar11 = (float *)(lVar12 + 8);
    cVar6 = *(char *)(lVar12 + 0x18);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar6 == '\x03') {
        pfVar11 = param_8 + 8;
      }
      else {
        pfVar11 = param_8 + 4;
      }
    }
    local_d8 = pfVar11[3] * param_8[3];
    local_dc = pfVar11[2] * param_8[2];
    local_e0 = pfVar11[1] * param_8[1];
    local_e4 = *pfVar11 * *param_8;
    local_110 = &local_e4;
    local_b4 = *param_4;
    local_c8 = *(undefined8 *)((longlong)param_4 + 0xc);
    local_c0 = *(float *)(param_4 + 1);
    local_bc = 0;
    local_ac = *(float *)((longlong)param_4 + 0x1c);
    fStack_a8 = *(float *)(param_4 + 4);
    fStack_a4 = *(float *)((longlong)param_4 + 0x24);
    fStack_a0 = *(float *)(param_4 + 5);
    local_9c = *(undefined8 *)((longlong)param_4 + 0x2c);
    local_94 = local_94 & 0xfc | *(char *)((longlong)param_4 + 0x34) * '\x02' & 2U;
    local_118 = 0;
    FUN_140239bd2(param_6,param_7,&local_c8,lVar12);
  }
  else {
    uVar7 = *param_4;
    fVar20 = (float)(uVar7 >> 0x20) * 0.5;
    fVar19 = (float)uVar7 * 0.5;
    fVar18 = fVar20 - fVar19;
    fVar17 = fVar19 - fVar20;
    pfVar11 = (float *)(lVar12 + 8);
    cVar6 = *(char *)(lVar12 + 0x18);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar6 == '\x03') {
        pfVar11 = param_8 + 8;
      }
      else {
        pfVar11 = param_8 + 4;
      }
    }
    local_d8 = pfVar11[3] * param_8[3];
    local_dc = pfVar11[2] * param_8[2];
    local_e0 = pfVar11[1] * param_8[1];
    local_e4 = *pfVar11 * *param_8;
    local_f8 = &local_e4;
    local_108 = &local_d4;
    local_cc = 1;
    local_c0 = *(float *)(param_4 + 1);
    fVar2 = *(float *)((longlong)param_4 + 0x1c);
    local_c8 = CONCAT44(fVar18 * local_c0 + *(float *)(param_4 + 2),
                        fVar17 * local_c0 + *(float *)((longlong)param_4 + 0xc));
    local_b4 = uVar7 << 0x20 | uVar7 >> 0x20;
    fVar3 = *(float *)(param_4 + 4);
    fVar4 = *(float *)(param_4 + 5);
    fVar5 = *(float *)((longlong)param_4 + 0x24);
    fStack_a0 = fVar3 * 0.0 + fVar4;
    fStack_a4 = fVar2 * 0.0 + fVar5;
    fStack_a8 = fVar4 * 0.0 + fVar3;
    local_ac = fVar5 * 0.0 + fVar2;
    local_bc = 0;
    local_9c = CONCAT44(fVar17 * fVar3 + fVar18 * fVar4 + *(float *)(param_4 + 6),
                        fVar17 * fVar2 + fVar18 * fVar5 + *(float *)((longlong)param_4 + 0x2c));
    local_94 = local_94 & 0xfc | *(char *)((longlong)param_4 + 0x34) * '\x02' & 2U;
    local_100 = 0;
    local_110 = (float *)CONCAT44(local_110._4_4_,0xbfc90fdb);
    local_118 = 0;
    local_d4 = fVar20;
    local_d0 = fVar19;
    FUN_14695471e(param_6,param_7,&local_c8,lVar12);
  }
  if (!bVar8) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_7 + 1;
}



// FUNCTION 149532cfe FUN_149532cfe body=216 status=ok
// SIG undefined FUN_149532cfe(void)

void FUN_149532cfe(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x368) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar3 = *(longlong **)(param_1 + 0x370);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar2;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1456f28da(param_1 + 8,&local_30);
  plVar2 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149532dd8 FUN_149532dd8 body=802 status=ok
// SIG undefined FUN_149532dd8(void)

longlong FUN_149532dd8(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_88 [47];
  char local_59;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar13 = (longlong *)param_1[0x56];
  bVar3 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar8 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_149532e32;
      }
      LOCK();
      iVar9 = (int)plVar13[1];
      bVar15 = iVar8 == iVar9;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar8 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
      UNLOCK();
    } while (!bVar15);
    plVar14 = (longlong *)param_1[0x55];
    bVar3 = false;
  }
LAB_149532e32:
  (**(code **)(*plVar14 + 0xe8))(plVar14,&local_58);
  cVar4 = (**(code **)(*local_58 + 0x198))();
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_50 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  cVar5 = (**(code **)(*plVar14 + 0x68))(plVar14,(int)param_1[0x57]);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1e670) && (FUN_144b3d300(&DAT_14cc1e670), DAT_14cc1e670 == -1)) {
    FUN_1446ddc76(&DAT_14cc1e668,"GenericWhiteBox",1);
    _Init_thread_footer(&DAT_14cc1e670);
  }
  plVar10 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = DAT_14c96b350;
  }
  lVar12 = 0;
  (**(code **)(*plVar10 + 0x50))(plVar10,DAT_14cc1e668,0,0);
  lVar11 = (**(code **)(*plVar14 + 0x48))(plVar14,param_1);
  if (lVar11 == 0) goto LAB_149532ff7;
  local_59 = cVar4;
  cVar4 = (**(code **)(*plVar14 + 0x10))(plVar14,lVar11);
  cVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,lVar11);
  iVar8 = (**(code **)(*param_1 + 0x78))(param_1);
  uVar2 = *(uint *)(param_1 + 0x57);
  if (cVar4 == '\0') {
    if (cVar6 == '\0') goto LAB_149532fa1;
    lVar12 = param_1[0x59];
    if (local_59 == '\0') {
      if (*(char *)((longlong)param_1 + 0x43) == '\0') {
        lVar12 = lVar12 + 0xaa0;
        goto LAB_149532ff7;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x43) == '\0') {
      lVar12 = lVar12 + 0x9f0;
      goto LAB_149532ff7;
    }
    if ((uVar2 & 1) != 0) goto LAB_149532ff0;
  }
  else {
    if (*(char *)((longlong)param_1 + 700) == '\x01') {
      lVar12 = param_1[0x59];
      if (local_59 == '\0') {
        if (*(char *)((longlong)param_1 + 0x43) == '\0') {
          lVar12 = lVar12 + 0x2d0;
        }
        else {
          lVar12 = lVar12 + 0x220;
        }
      }
      else if (*(char *)((longlong)param_1 + 0x43) == '\0') {
        lVar12 = lVar12 + 0x170;
      }
      else {
        lVar12 = lVar12 + 0xc0;
      }
      goto LAB_149532ff7;
    }
LAB_149532fa1:
    if (((cVar5 != '\0') && (*(char *)(param_1[0x59] + 0x380) == '\x01')) &&
       (iVar9 = (**(code **)(*param_1 + 0x38))(param_1), iVar9 == 0)) {
      if (*(char *)((longlong)param_1 + 0x43) == '\x01') {
        lVar12 = param_1[0x59] + 0x440;
      }
      else {
        lVar12 = param_1[0x59] + 0x390;
      }
      goto LAB_149532ff7;
    }
    bVar7 = iVar8 != 0 & *(byte *)((longlong)param_1 + 0x43);
    lVar12 = param_1[0x59];
    if ((uVar2 & 1) != 0) {
      if (bVar7 == 0) {
        lVar12 = lVar12 + 0x700;
        goto LAB_149532ff7;
      }
LAB_149532ff0:
      lVar12 = lVar12 + 0x650;
      goto LAB_149532ff7;
    }
    if (bVar7 == 0) {
      lVar12 = lVar12 + 0x5a0;
      goto LAB_149532ff7;
    }
  }
  lVar12 = lVar12 + 0x4f0;
LAB_149532ff7:
  if (!bVar3) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar12;
}



// FUNCTION 1495330fc FUN_1495330fc body=559 status=ok
// SIG undefined FUN_1495330fc(void)

undefined8 * FUN_1495330fc(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_558 [32];
  undefined1 *local_538;
  undefined1 local_528 [16];
  undefined1 local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined1 local_4f9;
  undefined1 local_4f8 [8];
  longlong *local_4f0;
  longlong *local_4e0 [2];
  undefined1 local_4d0 [16];
  undefined1 local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  longlong *local_4a0;
  undefined1 local_498 [1136];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_558;
  if (*param_3 == DAT_14cc1e598) {
    FUN_140a570d8(local_498);
    FUN_140009b9a(local_4e0,*(longlong *)(param_1 + 0x3e0) + 0x10);
    FUN_14023423e(local_4d0,local_4e0);
    local_4c0 = 1;
    local_4b8 = 0;
    uStack_4b0 = 0;
    uVar4 = FUN_140a54906(local_498,local_4d0);
    uVar5 = 0x3d;
  }
  else {
    if (*param_3 != DAT_14cc1e5a0) {
      *param_2 = DAT_14c98dec8;
      lVar3 = DAT_14c98ded0;
      param_2[1] = DAT_14c98ded0;
      if (lVar3 != 0) {
        LOCK();
        piVar2 = (int *)(lVar3 + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      goto LAB_14953324c;
    }
    FUN_140a570d8(local_498);
    FUN_140009b9a(local_4e0,*(longlong *)(param_1 + 0x3e0) + 0x20);
    FUN_14023423e(local_528,local_4e0);
    local_518 = 1;
    local_510 = 0;
    uStack_508 = 0;
    uVar4 = FUN_140a54906(local_498,local_528);
    uVar5 = 0x42;
  }
  local_538 = &local_4f9;
  FUN_140a54526(local_4f8,"STextBlock",
                ".\\../Plugins/Animation/LiveLink/Source/LiveLink/Private/SLiveLinkMessageBusSourceFactory.cpp"
                ,uVar5);
  FUN_140a52852(local_4f8,&local_4a8,uVar4);
  *param_2 = local_4a8;
  param_2[1] = local_4a0;
  if (local_4a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4a0 + 1) = (int)local_4a0[1] + 1;
    UNLOCK();
    if (local_4a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_4a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_4a0)(local_4a0);
        LOCK();
        piVar2 = (int *)((longlong)local_4a0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_4a0 + 0x10))(local_4a0);
        }
      }
    }
  }
  if (local_4f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4f0)(local_4f0);
      LOCK();
      piVar2 = (int *)((longlong)local_4f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_4f0 + 0x10))(local_4f0);
      }
    }
  }
  if (local_4e0[0] != (longlong *)0x0) {
    (**(code **)(*local_4e0[0] + 0x10))();
  }
  FUN_140a59ae6(local_498);
LAB_14953324c:
  if ((local_28 ^ (ulonglong)auStack_558) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953332c FUN_14953332c body=45 status=ok
// SIG undefined FUN_14953332c(void)

longlong FUN_14953332c(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_149535bcc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14953335a FUN_14953335a body=1300 status=ok
// SIG undefined FUN_14953335a(void)

undefined1 * FUN_14953335a(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  undefined4 uVar12;
  undefined8 unaff_RBP;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_1a8 [36];
  undefined4 local_184;
  longlong local_180;
  longlong local_178;
  longlong *plStack_170;
  undefined1 local_168 [16];
  longlong local_158;
  longlong *plStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0;
  undefined1 local_d8 [136];
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar13 = *(longlong **)(param_1 + 0x2a8);
  uVar12 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_1495333bc;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar15 = iVar6 == iVar5;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar15);
    plVar14 = *(longlong **)(param_1 + 0x2a0);
    uVar12 = 0;
  }
LAB_1495333bc:
  *(undefined2 *)(param_1 + 0x370) = 0;
  lVar10 = *(longlong *)(param_4 + 0x40);
  plVar3 = *(longlong **)(param_4 + 0x50);
  local_180 = param_4;
  if (plVar3 == (longlong *)0x0) {
    lVar4 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar4 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
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
  if (((lVar10 != lVar4) ||
      (iVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0x78))((longlong *)(param_1 + -8)),
      iVar6 == 0)) ||
     (puVar8 = (undefined8 *)(**(code **)(*plVar14 + 0x48))(plVar14), puVar8 == (undefined8 *)0x0))
  {
    cVar11 = (char)uVar12;
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_149533602;
  }
  local_184 = uVar12;
  uVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
  if (iVar6 == 3) {
    if ((*(ushort *)(local_180 + 8) & 3) == 0) {
      if ((*(ushort *)(local_180 + 8) & 0xc) == 0) goto LAB_1495334e1;
      local_120 = *puVar8;
      local_118 = puVar8[1];
      if (local_118 != 0) {
        LOCK();
        *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar14 + 0x28))(plVar14,&local_120,uVar7 ^ 1,1);
    }
    else {
      local_110 = *puVar8;
      local_108 = puVar8[1];
      if (local_108 != 0) {
        LOCK();
        *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar14 + 0x38))(plVar14);
    }
    *(undefined1 *)(param_1 + 0x370) = 1;
    if (*(int *)(param_1 + 0x2b8) == 1) {
      (**(code **)(*plVar14 + 0x40))(plVar14);
    }
  }
LAB_1495334e1:
  if ((((char)uVar7 == '\0') || (*(char *)(param_1 + 0x373) != '\0')) &&
     (*(char *)(param_1 + 0x370) == '\0')) {
    (**(code **)(*plVar14 + 0x30))(plVar14);
    local_130 = *puVar8;
    local_128 = puVar8[1];
    if (local_128 != 0) {
      LOCK();
      *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar14 + 0x28))(plVar14,&local_130,1,1);
    *(undefined1 *)(param_1 + 0x370) = 1;
    if (*(int *)(param_1 + 0x2b8) == 1) {
      (**(code **)(*plVar14 + 0x40))(plVar14);
    }
  }
  local_100[0] = 1;
  local_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  memset(local_d8,0,0x88);
  local_50 = 0x20702;
  local_4c = 0;
  local_148 = (undefined4)DAT_14c966e98;
  uStack_144 = DAT_14c966e98._4_4_;
  uStack_140 = (undefined4)DAT_14c966ea0;
  uStack_13c = DAT_14c966ea0._4_4_;
  local_138 = DAT_14c966ea8;
  if (DAT_14c966ea8 != 0) {
    LOCK();
    *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_14953365c:
    local_158 = 0;
    plStack_150 = (longlong *)0x0;
    bVar15 = true;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14953365c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar15 = iVar6 == iVar5;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar15);
    lVar10 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar10 = 0;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
    local_158 = lVar10 + 8;
    if (lVar10 == 0) {
      local_158 = 0;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    bVar15 = false;
    plStack_150 = plVar3;
  }
  plVar3 = plStack_150;
  uVar9 = FUN_1407c9a0c(local_100,&local_158,&local_148);
  (**(code **)(*plVar14 + 0xe8))(plVar14,local_168);
  uVar9 = FUN_140592b68(uVar9,local_168,0,0);
  plVar14 = *(longlong **)(param_1 + 0x10);
  if (plVar14 == (longlong *)0x0) {
LAB_149533719:
    local_178 = 0;
    plStack_170 = (longlong *)0x0;
    bVar16 = true;
  }
  else {
    iVar6 = (int)plVar14[1];
    do {
      if (iVar6 == 0) goto LAB_149533719;
      LOCK();
      iVar5 = (int)plVar14[1];
      bVar16 = iVar6 == iVar5;
      if (bVar16) {
        *(int *)(plVar14 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar16);
    lVar10 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar10 = 0;
    }
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
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
    local_178 = lVar10 + 8;
    if (lVar10 == 0) {
      local_178 = 0;
    }
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    bVar16 = false;
    plStack_170 = plVar14;
  }
  plVar14 = plStack_170;
  uVar9 = FUN_140592a6e(uVar9,&local_178);
  FUN_1403d4c6e(param_2,uVar9);
  if (!bVar16) {
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
  plVar14 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (!bVar15) {
    LOCK();
    plVar14 = plVar3 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  FUN_14493db24(local_100);
  cVar11 = (char)local_184;
LAB_149533602:
  if (cVar11 == '\0') {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149533870 FUN_149533870 body=1907 status=ok
// SIG undefined FUN_149533870(void)

undefined1 * FUN_149533870(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1b8 [36];
  undefined4 local_194;
  undefined1 *local_190;
  longlong *local_188;
  float *local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  ulonglong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_88;
  undefined1 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar16 = *(longlong **)(param_1 + 0x2a8);
  local_190 = param_2;
  local_180 = param_3;
  if (plVar16 == (longlong *)0x0) {
    local_194 = (undefined4)CONCAT71((int7)(local_80 >> 8),1);
LAB_149533937:
    plVar12 = (longlong *)0x0;
    plVar15 = (longlong *)0x0;
    plVar16 = (longlong *)0x0;
  }
  else {
    uVar10 = (ulonglong)*(uint *)(plVar16 + 1);
    do {
      uVar8 = (uint)uVar10;
      if (uVar8 == 0) {
        local_194 = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
        goto LAB_149533937;
      }
      LOCK();
      uVar3 = *(uint *)(plVar16 + 1);
      if (uVar8 == uVar3) {
        *(uint *)(plVar16 + 1) = uVar8 + 1;
      }
      else {
        uVar10 = (ulonglong)uVar3;
      }
      UNLOCK();
    } while (uVar8 != uVar3);
    plVar15 = *(longlong **)(param_1 + 0x2a0);
    plVar12 = plVar15 + -0x9b;
    if (plVar15 == (longlong *)0x0) {
      plVar12 = (longlong *)0x0;
    }
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar16 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
      local_194 = 0;
    }
    else {
      local_194 = 0;
    }
  }
  local_188 = (longlong *)(param_1 + -8);
  lVar14 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  if (plVar4 == (longlong *)0x0) {
    if (lVar14 == DAT_14c966e98) goto LAB_1495339a9;
LAB_149533c57:
    puVar13 = local_190;
    if ((lVar14 != DAT_14c966fa0) || (cVar6 = FUN_146af41be(plVar12), cVar6 != '\0'))
    goto LAB_149533d9d;
LAB_149533cdb:
    iVar9 = (**(code **)(*local_188 + 0x78))();
    if ((2 < iVar9 - 1U) ||
       (puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15),
       puVar11 == (undefined8 *)0x0)) goto LAB_149533d9d;
    cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar11);
    if (cVar6 == '\0') {
      (**(code **)(*plVar15 + 0x30))(plVar15);
      local_168 = *puVar11;
      local_160 = puVar11[1];
      if (local_160 != 0) {
        LOCK();
        *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar15 + 0x28))(plVar15,&local_168,1,1);
      (**(code **)(*plVar15 + 0x40))(plVar15,2);
    }
    local_178 = *puVar11;
    local_170 = puVar11[1];
    if (local_170 != 0) {
      LOCK();
      *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar15 + 0xa0))(plVar15,&local_178,param_4);
    *puVar13 = 1;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c966e98;
    UNLOCK();
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
    puVar13 = local_190;
    if (lVar14 != lVar5) {
      lVar14 = *(longlong *)(param_4 + 0x40);
      plVar4 = *(longlong **)(param_4 + 0x50);
      if (plVar4 == (longlong *)0x0) goto LAB_149533c57;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (lVar14 == DAT_14c966fa0) {
        cVar6 = FUN_146af41be(plVar12);
        puVar13 = local_190;
        LOCK();
        plVar12 = plVar4 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        if (cVar6 == '\0') goto LAB_149533cdb;
      }
      else {
        LOCK();
        plVar12 = plVar4 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
      goto LAB_149533d9d;
    }
LAB_1495339a9:
    local_138 = local_138 & 0xffffffffffffff00;
    local_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    memset(local_110,0,0x88);
    puVar13 = local_190;
    local_88 = 0x20702;
    local_100 = 0;
    uStack_f8 = 0;
    local_84 = 1;
    FUN_1403d4c6e(local_190);
    FUN_14493db24(&local_138);
    if (*(char *)(param_1 + 0x370) == '\x01') {
      local_138 = CONCAT71(local_138._1_7_,1);
      local_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      memset(local_110,0,0x88);
      puVar13 = local_190;
      local_88 = 0x20702;
      local_100 = 0;
      uStack_f8 = 0;
      local_84 = 1;
      FUN_1402c17c2(local_190,&local_138);
      FUN_14493db24(&local_138);
    }
    fVar18 = local_180[8] * 0.0;
    fVar19 = local_180[7] * 0.0;
    fVar17 = local_180[10] * 0.0;
    fVar20 = local_180[9] * 0.0;
    local_138 = CONCAT44(fVar17 + fVar18 + local_180[0xc],fVar20 + fVar19 + local_180[0xb]);
    local_130 = CONCAT44(*local_180 * local_180[8] + fVar17,*local_180 * local_180[7] + fVar20);
    uStack_128 = CONCAT44(local_180[10] * local_180[1] + fVar18,local_180[1] * local_180[9] + fVar19
                         );
    cVar6 = FUN_1402b2a42();
    cVar7 = FUN_140591fd6(param_1);
    if (cVar7 != '\0') {
      if ((cVar6 != '\0') && (*(char *)(param_1 + 0x371) == '\0')) {
        iVar9 = (**(code **)(*local_188 + 0x78))();
        if (iVar9 == 3) {
          if ((((*(char *)(param_1 + 0x370) == '\0') && ((*(byte *)(param_4 + 8) & 0xf) == 0)) &&
              (puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15,local_188),
              puVar11 != (undefined8 *)0x0)) &&
             ((cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar11), cVar6 != '\0' &&
              (iVar9 = (**(code **)(*plVar15 + 0x70))(plVar15), 1 < iVar9)))) {
            (**(code **)(*plVar15 + 0x30))(plVar15);
            local_148 = *puVar11;
            local_140 = puVar11[1];
            if (local_140 != 0) {
              LOCK();
              *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
              UNLOCK();
            }
            (**(code **)(*plVar15 + 0x28))(plVar15,&local_148,1,1);
            (**(code **)(*plVar15 + 0x40))(plVar15);
            goto LAB_149533eda;
          }
        }
        else if (iVar9 == 2) {
          if (*(char *)(param_1 + 0x370) == '\0') {
            (**(code **)(*plVar15 + 0x30))(plVar15);
            (**(code **)(*plVar15 + 0x40))(plVar15);
          }
LAB_149533eda:
          local_138 = CONCAT71(local_138._1_7_,1);
          local_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          memset(local_110,0,0x88);
          puVar13 = local_190;
          local_88 = 0x20702;
          local_100 = 0;
          uStack_f8 = 0;
          local_84 = 1;
          FUN_1402c17c2(local_190,&local_138);
          FUN_14493db24(&local_138);
        }
      }
      puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15,local_188);
      if (puVar11 != (undefined8 *)0x0) {
        local_158 = *puVar11;
        local_150 = puVar11[1];
        if (local_150 != 0) {
          LOCK();
          *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar15 + 0xa8))(plVar15);
        if (cVar6 != '\0') {
          local_138 = CONCAT71(local_138._1_7_,1);
          local_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          memset(local_110,0,0x88);
          puVar13 = local_190;
          local_88 = 0x20702;
          local_100 = 0;
          uStack_f8 = 0;
          local_84 = 1;
          FUN_1402c17c2(local_190,&local_138);
          FUN_14493db24(&local_138);
        }
      }
      if (((*(char *)(param_1 + 0x370) == '\x01') && (*(char *)(param_1 + 0x371) == '\0')) &&
         (*(int *)(param_1 + 0x2b8) == 0)) {
        (**(code **)(*plVar15 + 0x40))(plVar15,2);
      }
      goto LAB_149533dcf;
    }
    FUN_14493db24(puVar13);
LAB_149533d9d:
    *puVar13 = 0;
  }
  puVar13[0x20] = 0;
  *(undefined8 *)(puVar13 + 8) = 0;
  *(undefined8 *)(puVar13 + 0x10) = 0;
  memset(puVar13 + 0x28,0,0x88);
  *(undefined4 *)(puVar13 + 0xb0) = 0x20702;
  puVar13[0xb4] = 0;
LAB_149533dcf:
  if ((char)local_194 == '\0') {
    LOCK();
    plVar12 = plVar16 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    LOCK();
    plVar12 = plVar16 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar13;
}



// FUNCTION 149533fe4 FUN_149533fe4 body=426 status=ok
// SIG undefined FUN_149533fe4(void)

undefined1 * FUN_149533fe4(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_4 + 0x40);
  plVar9 = *(longlong **)(param_4 + 0x50);
  lVar4 = DAT_14c966e98;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    lVar4 = DAT_14c966e98;
    UNLOCK();
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (lVar2 == lVar4) {
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = true;
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      plVar10 = (longlong *)0x0;
      do {
        if (iVar7 == 0) {
          plVar9 = (longlong *)0x0;
          goto LAB_14953408c;
        }
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar11 = iVar7 == iVar5;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar11);
      plVar10 = *(longlong **)(param_1 + 0x2a0);
      bVar3 = false;
    }
LAB_14953408c:
    puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x48))(plVar10);
    if (puVar8 != (undefined8 *)0x0) {
      local_48 = *puVar8;
      local_40 = puVar8[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      cVar6 = (**(code **)(*plVar10 + 0xb0))(plVar10);
      if (cVar6 == '\0') {
        (**(code **)(*(longlong *)(param_1 + -8) + 0x28))((longlong *)(param_1 + -8));
      }
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
    }
    if (!bVar3) {
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (puVar8 != (undefined8 *)0x0) goto LAB_149534161;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_149534161:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149534190 FUN_149534190 body=637 status=ok
// SIG undefined FUN_149534190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_149534190(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 0x372) == '\x01') {
    *(undefined1 *)(param_1 + 0x372) = 0;
    local_e8[0] = 1;
    local_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    memset(local_c0,0,0x88);
    local_38 = 0x20702;
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    if (plVar7 == (longlong *)0x0) {
LAB_149534332:
      (**(code **)(_DAT_00000000 + 0xe8))(0,local_f8);
      uVar6 = FUN_140592a6e(local_e8,local_f8);
      FUN_1403d4c6e(param_2,uVar6);
    }
    else {
      iVar5 = (int)plVar7[1];
      do {
        if (iVar5 == 0) goto LAB_149534332;
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar8);
      (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0xe8))
                (*(longlong **)(param_1 + 0x2a0),local_f8);
      uVar6 = FUN_140592a6e(local_e8,local_f8);
      FUN_1403d4c6e(param_2,uVar6);
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    FUN_14493db24(local_e8);
  }
  else {
    cVar4 = FUN_140591fd6(param_1);
    if (((cVar4 != '\0') &&
        (*(undefined1 *)(param_1 + 0x371) = 1, *(char *)(param_1 + 0x370) == '\x01')) &&
       (*(int *)(param_1 + 0x2b8) == 0)) {
      plVar7 = *(longlong **)(param_1 + 0x2a8);
      if (plVar7 == (longlong *)0x0) {
LAB_1495343fc:
        (**(code **)(_DAT_00000000 + 0x40))(0);
      }
      else {
        iVar5 = (int)plVar7[1];
        do {
          if (iVar5 == 0) goto LAB_1495343fc;
          LOCK();
          iVar3 = (int)plVar7[1];
          bVar8 = iVar5 == iVar3;
          if (bVar8) {
            *(int *)(plVar7 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar8);
        (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x40))();
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
    }
    if (((*(int *)(param_1 + 800) != 0) && (*(longlong **)(param_1 + 0x318) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x318) + 0x30))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 800) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x318);
      }
      (**(code **)(*plVar7 + 0x58))(plVar7,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_118);
    }
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149534414 FUN_149534414 body=90 status=ok
// SIG undefined FUN_149534414(void)

void FUN_149534414(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x330) != 0) && (*(longlong **)(param_1 + 0x328) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x330) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x328);
      }
                    /* WARNING: Could not recover jumptable at 0x00014953445f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 14953446e FUN_14953446e body=106 status=ok
// SIG undefined FUN_14953446e(void)

void FUN_14953446e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x314) == '\x01') {
    *(undefined1 *)(param_1 + 0x314) = 0;
  }
  if ((*(int *)(param_1 + 0x340) != 0) && (*(longlong **)(param_1 + 0x338) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x338) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x340) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x338);
      }
                    /* WARNING: Could not recover jumptable at 0x0001495344c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1495344d8 FUN_1495344d8 body=1078 status=ok
// SIG undefined FUN_1495344d8(void)

undefined1 *
FUN_1495344d8(longlong param_1,undefined1 *param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  byte *pbVar11;
  longlong *plVar12;
  byte *pbVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1a8 [40];
  int local_180 [2];
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined3 uStack_118;
  undefined4 local_115;
  undefined1 uStack_111;
  undefined3 uStack_110;
  undefined4 uStack_10d;
  undefined4 uStack_109;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  byte local_e4 [4];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((*(int *)(param_1 + 0x2e8) == 0) || (*(longlong **)(param_1 + 0x2e0) == (longlong *)0x0)) ||
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x30))(), cVar9 == '\0')) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_1495345b4;
  }
  plVar14 = *(longlong **)(param_1 + 0x2a8);
  bVar6 = true;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
    plVar12 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)plVar14[1];
    plVar12 = (longlong *)0x0;
    do {
      if (iVar10 == 0) {
        plVar14 = (longlong *)0x0;
        goto LAB_149534652;
      }
      LOCK();
      iVar8 = (int)plVar14[1];
      bVar15 = iVar10 == iVar8;
      if (bVar15) {
        *(int *)(plVar14 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar15);
    plVar12 = *(longlong **)(param_1 + 0x2a0);
    bVar6 = false;
  }
LAB_149534652:
  fVar16 = *(float *)(param_4 + 0x20);
  fVar2 = *(float *)(param_4 + 0x24);
  fVar18 = *(float *)((longlong)param_3 + 0x1c);
  fVar17 = *(float *)(param_3 + 4);
  fVar3 = *(float *)((longlong)param_3 + 0x24);
  fVar19 = *(float *)(param_3 + 5);
  fVar20 = 1.0 / (fVar18 * fVar19 - fVar3 * fVar17);
  fVar4 = *(float *)(param_3 + 6);
  fVar5 = *(float *)((longlong)param_3 + 0x2c);
  iVar10 = (**(code **)(*plVar12 + 0xc0))();
  if (iVar10 == 0) {
    fVar18 = -fVar3 * fVar20;
    fVar19 = fVar19 * fVar20;
    fVar17 = -fVar5 * fVar19 - fVar4 * fVar18;
    fVar16 = fVar16 * fVar19 + fVar18 * fVar2;
  }
  else {
    fVar18 = fVar18 * fVar20;
    fVar20 = -fVar17 * fVar20;
    fVar17 = -fVar5 * fVar20 - fVar4 * fVar18;
    fVar16 = fVar16 * fVar20 + fVar18 * fVar2;
  }
  fVar2 = (float)((ulonglong)*param_3 >> 0x20);
  if (iVar10 == 0) {
    fVar2 = (float)*param_3;
  }
  fVar18 = fVar2 * 0.25;
  if (10.0 <= fVar18) {
    fVar18 = 10.0;
  }
  if (fVar18 <= 3.0) {
    fVar18 = 3.0;
  }
  local_180[0] = 0;
  if (fVar18 <= fVar16 + fVar17) {
    local_180[0] = (fVar2 - fVar18 < fVar16 + fVar17) + 1;
  }
  local_170 = *(undefined8 *)(param_4 + 8);
  uStack_168 = *(undefined8 *)(param_4 + 0x10);
  local_160 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 0x20);
  uStack_150 = *(undefined8 *)(param_4 + 0x28);
  local_148 = *(undefined8 *)(param_4 + 0x30);
  uStack_140 = *(undefined8 *)(param_4 + 0x38);
  local_138 = *(undefined8 *)(param_4 + 0x40);
  local_130 = *(undefined8 *)(param_4 + 0x48);
  local_128 = *(longlong *)(param_4 + 0x50);
  if (local_128 != 0) {
    LOCK();
    *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
    UNLOCK();
  }
  uStack_120 = *(undefined8 *)(param_4 + 0x58);
  uVar7 = *(undefined8 *)(param_4 + 0x60);
  uStack_10d = *(undefined4 *)(param_4 + 0x6b);
  uStack_109 = *(undefined4 *)(param_4 + 0x6f);
  uStack_118 = (undefined3)uVar7;
  local_115 = (undefined4)((ulonglong)uVar7 >> 0x18);
  uStack_110 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uStack_111 = (undefined1)((ulonglong)uVar7 >> 0x38);
  local_178 = &PTR_FUN_149efe1e0;
  local_100 = *(undefined8 *)(param_4 + 0x78);
  local_f8 = *(longlong *)(param_4 + 0x80);
  if (local_f8 != 0) {
    LOCK();
    *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
    UNLOCK();
  }
  local_f0 = param_1 + -8;
  FUN_149535ca2(local_180,&local_e8);
  pbVar11 = local_e4;
  if (&local_e8 == (undefined4 *)(param_1 + 0x310)) {
    if ((local_e4[0] & 1) != 0) goto LAB_149534889;
  }
  else {
    pbVar13 = (byte *)(param_1 + 0x314);
    if ((local_e4[0] & 1) == 0) {
      pbVar11 = pbVar13;
      if (*pbVar13 != 1) goto LAB_14953488c;
    }
    else {
      *(undefined4 *)(param_1 + 0x310) = local_e8;
      *pbVar13 = 1;
    }
LAB_149534889:
    *pbVar11 = 0;
  }
LAB_14953488c:
  FUN_1469ac82c(&local_178);
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (!bVar6) {
    LOCK();
    plVar12 = plVar14 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
LAB_1495345b4:
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149534910 FUN_149534910 body=207 status=ok
// SIG undefined FUN_149534910(void)

undefined8 FUN_149534910(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  char local_e0 [184];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = param_1 + -8;
  local_f0 = param_3;
  local_e8 = param_4;
  FUN_149535dac(&local_f8,local_e0);
  if (((local_e0[0] == '\0') && (*(int *)(param_1 + 0x350) != 0)) &&
     (*(longlong **)(param_1 + 0x348) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x348) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x350) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x348);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_4);
      goto LAB_14953496b;
    }
  }
  FUN_1403d4c6e(param_2,local_e0);
LAB_14953496b:
  FUN_14493db24(local_e0);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495349e0 FUN_1495349e0 body=394 status=ok
// SIG undefined FUN_1495349e0(void)

undefined8 FUN_1495349e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong *plStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0;
  undefined1 local_b8 [136];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined1 *)(param_1 + 0x372) = 1;
  local_e0[0] = 1;
  local_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  memset(local_b8,0,0x88);
  local_30 = 0x20702;
  local_f8 = (undefined4)DAT_14c966e98;
  uStack_f4 = DAT_14c966e98._4_4_;
  uStack_f0 = (undefined4)DAT_14c966ea0;
  uStack_ec = DAT_14c966ea0._4_4_;
  local_e8 = DAT_14c966ea8;
  if (DAT_14c966ea8 != 0) {
    LOCK();
    *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_149534ac1:
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_149534ac1;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar8 = 0;
    }
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
    local_108 = lVar8 + 8;
    if (lVar8 == 0) {
      local_108 = 0;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    bVar9 = false;
    plStack_100 = plVar4;
  }
  plVar4 = plStack_100;
  uVar7 = FUN_1407c9a0c(local_e0,&local_108,&local_f8);
  FUN_1403d4c6e(param_2,uVar7);
  plVar1 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_100 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (!bVar9) {
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
  FUN_14493db24(local_e0);
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149534b6c FUN_149534b6c body=644 status=ok
// SIG undefined FUN_149534b6c(void)

undefined1 * FUN_149534b6c(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (*(char *)(param_1 + 0x372) != '\x01') goto LAB_149534dc2;
  plVar1 = (longlong *)(param_1 + -8);
  *(undefined1 *)(param_1 + 0x372) = 0;
  plVar12 = *(longlong **)(param_1 + 0x2a8);
  bVar3 = true;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar12[1];
    plVar11 = (longlong *)0x0;
    do {
      if (iVar6 == 0) {
        plVar12 = (longlong *)0x0;
        goto LAB_149534c17;
      }
      LOCK();
      iVar4 = (int)plVar12[1];
      bVar13 = iVar6 == iVar4;
      if (bVar13) {
        *(int *)(plVar12 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar13);
    plVar11 = *(longlong **)(param_1 + 0x2a0);
    bVar3 = false;
  }
LAB_149534c17:
  puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x48))(plVar11,plVar1);
  if (puVar8 != (undefined8 *)0x0) {
    uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1);
    if (uVar7 != 0) {
      cVar5 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar8);
      if (cVar5 == '\0') {
        if (uVar7 != 3) {
          (**(code **)(*plVar11 + 0x30))(plVar11);
        }
        local_108 = *puVar8;
        local_100 = puVar8[1];
        if (local_100 != 0) {
          LOCK();
          *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
          UNLOCK();
        }
        lVar9 = *plVar11;
        puVar10 = &local_108;
      }
      else {
        if ((uVar7 & 0xfffffffe) != 2) goto LAB_149534d22;
        local_118 = *puVar8;
        local_110 = puVar8[1];
        if (local_110 != 0) {
          LOCK();
          *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
          UNLOCK();
        }
        lVar9 = *plVar11;
        puVar10 = &local_118;
      }
      (**(code **)(lVar9 + 0x28))(plVar11,puVar10,1,1);
      (**(code **)(*plVar11 + 0x40))(plVar11);
      local_f8[0] = 1;
      local_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      memset(local_d0,0,0x88);
      local_48 = 0x20702;
      local_44 = 0;
      FUN_1403d4924(param_2,local_f8);
      FUN_14493db24(local_f8);
    }
LAB_149534d22:
    local_128 = *puVar8;
    local_120 = puVar8[1];
    if (local_120 != 0) {
      LOCK();
      *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
      UNLOCK();
    }
    cVar5 = (**(code **)(*plVar11 + 0xa8))(plVar11);
    if (cVar5 != '\0') {
      local_f8[0] = 1;
      local_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      memset(local_d0,0,0x88);
      local_48 = 0x20702;
      local_44 = 0;
      FUN_1403d4924(param_2,local_f8);
      FUN_14493db24(local_f8);
    }
  }
  if (!bVar3) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
LAB_149534dc2:
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149534df2 FUN_149534df2 body=494 status=ok
// SIG undefined FUN_149534df2(void)

longlong * FUN_149534df2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_14001cc68(0x70,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_149534e30:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar4 = (int)plVar2[1];
    do {
      if (iVar4 == 0) goto LAB_149534e30;
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar8 = 0;
    }
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    local_48 = lVar8 + 8;
    if (lVar8 == 0) {
      local_48 = 0;
    }
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_149536212(lVar5,&local_48);
  *param_2 = lVar5;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149ef0b50;
  plVar6[2] = lVar5;
  param_2[1] = (longlong)plVar6;
  if ((lVar5 == 0) ||
     (((*(longlong *)(lVar5 + 8) != 0 && (*(longlong *)(lVar5 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar5 + 0x10) + 8))))) goto LAB_149534f8d;
  if (plVar6 == (longlong *)0x0) {
    *(longlong *)(lVar5 + 8) = lVar5;
    plVar7 = *(longlong **)(lVar5 + 0x10);
    if (plVar7 == (longlong *)0x0) goto LAB_149534f8d;
LAB_149534ed3:
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    *(longlong **)(lVar5 + 0x10) = plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_149534f8d;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong *)(lVar5 + 8) = lVar5;
    if (*(longlong **)(lVar5 + 0x10) != plVar6) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(lVar5 + 0x10);
      if (plVar7 != (longlong *)0x0) goto LAB_149534ed3;
      *(longlong **)(lVar5 + 0x10) = plVar6;
    }
  }
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
LAB_149534f8d:
  if (!bVar9) {
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149534fe4 FUN_149534fe4 body=173 status=ok
// SIG undefined FUN_149534fe4(void)

void FUN_149534fe4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1495367a0(param_1 + -8,param_3,param_5,param_6,param_7);
  uVar1 = FUN_14023976a(param_1,param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
  FUN_1495369f0(param_1 + -8,param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
  return;
}



// FUNCTION 149535092 FUN_149535092 body=297 status=ok
// SIG undefined FUN_149535092(void)

void FUN_149535092(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x360) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar6 = *(longlong **)(param_1 + 0x368);
  if (plVar6 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x368);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x368) = plVar2;
  }
  lVar3 = *(longlong *)(param_1 + 0x358);
  if (lVar3 == 0) {
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_1456f28da(param_1,&local_30);
  }
  else {
    FUN_14149270a(lVar3);
    uVar4 = *param_2;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar2 = *(longlong **)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x10) = uVar4;
    *(longlong *)(lVar3 + 0x18) = lVar5;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    FUN_140a5503c(lVar3);
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495351bc FUN_1495351bc body=202 status=ok
// SIG undefined FUN_1495351bc(void)

undefined8 * FUN_1495351bc(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_149f0e360;
  FUN_140a55e66(param_1 + 1);
  *param_1 = &PTR_LAB_14bd37650;
  param_1[1] = &PTR_FUN_14bd376f0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((longlong)param_1 + 700) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 2;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 4;
  return param_1;
}



// FUNCTION 149535288 FUN_149535288 body=1464 status=ok
// SIG undefined FUN_149535288(void)

void FUN_149535288(longlong param_1,uint param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_6d8 [32];
  undefined1 *local_6b8;
  longlong local_6b0;
  undefined1 local_6a1;
  undefined1 local_6a0 [8];
  longlong *local_698;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined1 local_678;
  undefined8 local_670;
  undefined4 local_668;
  undefined4 local_660;
  undefined1 local_65c;
  undefined8 local_658;
  undefined8 uStack_650;
  longlong local_648;
  longlong *plStack_640;
  longlong *local_630;
  undefined8 local_628;
  longlong *local_620;
  undefined2 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  longlong *local_5f0;
  undefined8 local_5e8;
  longlong *local_5e0;
  undefined8 local_5d8;
  longlong *local_5d0;
  undefined8 local_5c8;
  longlong *local_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined1 local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined1 local_590 [192];
  undefined1 local_4d0 [424];
  undefined8 local_328;
  undefined1 local_318 [24];
  undefined1 local_300 [16];
  undefined2 local_2f0;
  undefined1 auStack_2e8 [16];
  undefined1 local_2d8 [192];
  undefined1 local_218 [440];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  *(undefined8 *)(param_1 + 0x368) = *param_4;
  plVar6 = (longlong *)param_4[1];
  plVar8 = *(longlong **)(param_1 + 0x370);
  if (plVar8 != plVar6) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar6;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  if (param_2 < 2) {
    local_5a8 = *(undefined1 *)(param_3 + 4);
    local_5b8 = *param_3;
    uStack_5b4 = param_3[1];
    uStack_5b0 = param_3[2];
    uStack_5ac = param_3[3];
    local_5a0 = 0;
    local_598 = 0;
    FUN_140a58be0(&local_5a0,param_3 + 6);
    uVar4 = FUN_140a58d14(param_1 + 0x220,&local_5b8);
    FUN_140a58896(uVar4,param_4);
    lVar5 = param_1 + 0x200;
  }
  else {
    FUN_140a5296a(local_218);
    FUN_140a50426(local_2d8);
    lVar5 = FUN_140a52578(local_2d8);
    *(undefined4 *)(lVar5 + 0x40) = 3;
    *(undefined1 *)(lVar5 + 0x44) = 1;
    *(undefined4 *)(lVar5 + 0x48) = 0;
    *(undefined1 *)(lVar5 + 0x4c) = 1;
    FUN_146a2b81a(local_4d0);
    local_328 = *(undefined8 *)(param_1 + 0x2d0);
    local_610 = CONCAT11(1,*(undefined1 *)(param_1 + 0x37c));
    local_608 = 0;
    uStack_600 = 0;
    local_2f0 = local_610;
    FUN_144a450dc(auStack_2e8,&local_608);
    FUN_1449db362(&local_608);
    plVar6 = *(longlong **)(param_1 + 0x18);
    if (plVar6 == (longlong *)0x0) {
LAB_149535460:
      local_648 = 0;
      plStack_640 = (longlong *)0x0;
    }
    else {
      iVar3 = (int)plVar6[1];
      do {
        if (iVar3 == 0) goto LAB_149535460;
        LOCK();
        iVar2 = (int)plVar6[1];
        bVar9 = iVar3 == iVar2;
        if (bVar9) {
          *(int *)(plVar6 + 1) = iVar3 + 1;
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
        UNLOCK();
      } while (!bVar9);
      local_648 = *(longlong *)(param_1 + 0x10) + -8;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        local_648 = 0;
      }
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      plStack_640 = plVar6;
      if ((int)*plVar8 == 0) {
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
    local_630 = &local_648;
    FUN_1495358e8(&local_628);
    if (local_620 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_620 + 1) = (int)local_620[1] + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(param_1 + 0x2e0);
    *(undefined8 *)(param_1 + 0x2d8) = local_628;
    *(longlong **)(param_1 + 0x2e0) = local_620;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    FUN_149535870(&local_628,&local_5f8,local_4d0);
    local_5e8 = local_5f8;
    local_5e0 = local_5f0;
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5f0 + 1) = (int)local_5f0[1] + 1;
      UNLOCK();
    }
    local_6b0 = param_1 + 0x1e8;
    uVar4 = FUN_140a4fe8e(lVar5,&local_5e8);
    uVar4 = FUN_140a52392(local_218,uVar4);
    FUN_140a50426(local_590);
    local_660 = 0x3f800000;
    local_65c = 1;
    local_658 = 0;
    uStack_650 = 0;
    plVar6 = (longlong *)FUN_140a5475a(local_590);
    lVar5 = *plVar6;
    local_688 = *param_3;
    uStack_684 = param_3[1];
    uStack_680 = param_3[2];
    uStack_67c = param_3[3];
    local_678 = *(undefined1 *)(param_3 + 4);
    local_670 = 0;
    local_668 = 0;
    FUN_140a58be0(&local_670,param_3 + 6);
    *(undefined1 *)(plVar6 + 5) = local_678;
    *(undefined4 *)(plVar6 + 3) = local_688;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_684;
    *(undefined4 *)(plVar6 + 4) = uStack_680;
    *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_67c;
    FUN_144a450dc(plVar6 + 6,&local_670);
    FUN_1449db362(&local_670);
    uVar7 = FUN_146a07044(plVar6,param_4);
    uVar4 = FUN_140a52392(uVar4,uVar7);
    local_6b8 = &local_6a1;
    FUN_140a541dc(local_6a0,"SHorizontalBox","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",
                  0xc3);
    FUN_140a50ec6(local_6a0,&local_5d8,uVar4);
    local_5c8 = local_5d8;
    local_5c0 = local_5d0;
    if (local_5d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5d0 + 1) = (int)local_5d0[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(local_6b0,&local_5c8);
    plVar6 = local_5c0;
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5c0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_5d0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_5d0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_5d0)(local_5d0);
        LOCK();
        piVar1 = (int *)((longlong)local_5d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5d0 + 0x10))(local_5d0);
        }
      }
    }
    if (local_698 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_698 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_698)(local_698);
        LOCK();
        piVar1 = (int *)((longlong)local_698 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_698 + 0x10))(local_698);
        }
      }
    }
    FUN_140a509a6(local_590);
    plVar6 = local_5e0;
    if (local_5e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5e0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_5e0)(local_5e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_5f0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_5f0)(local_5f0);
        LOCK();
        piVar1 = (int *)((longlong)local_5f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5f0 + 0x10))(local_5f0);
        }
      }
    }
    if (local_620 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_620 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_620)(local_620);
        LOCK();
        piVar1 = (int *)((longlong)local_620 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_620 + 0x10))(local_620);
        }
      }
    }
    plVar6 = plStack_640;
    if (plStack_640 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_640 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plStack_640)(plStack_640);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    FUN_1449db362(auStack_2e8);
    FUN_1449db362(local_300);
    FUN_1449db362(local_318);
    FUN_140a4ff8c(local_4d0);
    FUN_140a509a6(local_2d8);
    FUN_145ab33da(local_218);
  }
  *(longlong *)(param_1 + 0x360) = lVar5;
  if ((local_60 ^ (ulonglong)auStack_6d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149535842 FUN_149535842 body=45 status=ok
// SIG undefined FUN_149535842(void)

longlong FUN_149535842(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_149535ac4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149535870 FUN_149535870 body=119 status=ok
// SIG undefined FUN_149535870(void)

longlong * FUN_149535870(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_149535a3c(param_1[2],*param_1,param_3);
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



// FUNCTION 1495358e8 FUN_1495358e8 body=338 status=ok
// SIG undefined FUN_1495358e8(void)

longlong * FUN_1495358e8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x2d8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f0e410;
  plVar1 = plVar4 + 2;
  FUN_146aec4be(plVar1);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_146a2ba86(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    *param_1 = (longlong)local_38;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1495359cb;
    param_1[1] = 0;
LAB_149535995:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1495359cb;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_38;
    plVar4 = (longlong *)param_1[1];
    if (local_30 != plVar4) {
      param_1[1] = (longlong)local_30;
      if (plVar4 == (longlong *)0x0) goto LAB_1495359cb;
      goto LAB_149535995;
    }
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1495359cb;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1495359cb:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_48 = 0x2c8;
  FUN_140a52e78(*param_1,"SExpanderArrow","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",0xca);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149535a3c FUN_149535a3c body=134 status=ok
// SIG undefined FUN_149535a3c(void)

void FUN_149535a3c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)*param_1;
  local_18 = (longlong *)((undefined8 *)*param_1)[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_146aec5c0(param_2,param_3,&local_20);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149535ac4 FUN_149535ac4 body=263 status=ok
// SIG undefined FUN_149535ac4(void)

void FUN_149535ac4(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bd37650;
  param_1[1] = &PTR_FUN_14bd376f0;
  plVar3 = (longlong *)param_1[0x6e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1449db362(param_1 + 0x6a);
  FUN_1449db362(param_1 + 0x68);
  FUN_1449db362(param_1 + 0x66);
  FUN_1449db362(param_1 + 100);
  if (*(char *)((longlong)param_1 + 0x31c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  }
  FUN_1449db362(param_1 + 0x61);
  FUN_1449db362(param_1 + 0x5f);
  FUN_1449db362(param_1 + 0x5d);
  plVar3 = (longlong *)param_1[0x5c];
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
  plVar3 = (longlong *)param_1[0x56];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  param_1[1] = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x40);
  FUN_140c057ec(param_1 + 1);
  return;
}



// FUNCTION 149535bcc FUN_149535bcc body=85 status=ok
// SIG undefined FUN_149535bcc(void)

void FUN_149535bcc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bd37050;
  param_1[1] = &PTR_FUN_14bd37100;
  plVar3 = (longlong *)param_1[0x7d];
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
  FUN_149535c22(param_1);
  return;
}



// FUNCTION 149535c22 FUN_149535c22 body=127 status=ok
// SIG undefined FUN_149535c22(void)

void FUN_149535c22(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bd37350;
  param_1[1] = &PTR_LAB_14bd37400;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_147da3520(param_1 + 0x72);
  plVar3 = (longlong *)param_1[0x71];
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
  FUN_149535ac4(param_1);
  return;
}



// FUNCTION 149535ca2 FUN_149535ca2 body=265 status=ok
// SIG undefined FUN_149535ca2(void)

longlong FUN_149535ca2(undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x24);
  plVar8 = *(longlong **)(lVar2 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_149535cfd;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    plVar7 = *(longlong **)(lVar2 + 0x2a8);
    bVar3 = false;
  }
LAB_149535cfd:
  puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x48))(plVar7,lVar2);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  else {
    local_40 = *puVar6;
    local_38 = puVar6[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    if (*(int *)(lVar2 + 0x2f0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(lVar2 + 0x2e8);
    }
    local_48 = &local_40;
    (**(code **)(*plVar7 + 0x58))(plVar7,param_2,param_1 + 2,*param_1);
  }
  if (!bVar3) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149535dac FUN_149535dac body=1125 status=ok
// SIG undefined FUN_149535dac(void)

undefined1 * FUN_149535dac(longlong *param_1,undefined1 *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 unaff_RBP;
  ulonglong uVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  uint local_1d4;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  int local_1b0;
  byte local_1ac;
  undefined8 local_1a8;
  longlong local_1a0;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar5 = *param_1;
  if (((*(int *)(lVar5 + 0x300) != 0) && (*(longlong **)(lVar5 + 0x2f8) != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(**(longlong **)(lVar5 + 0x2f8) + 0x30))(), cVar8 != '\0')) {
    plVar14 = *(longlong **)(lVar5 + 0x2b0);
    uVar13 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)0x0;
      plVar12 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar14[1];
      plVar12 = (longlong *)0x0;
      do {
        if (iVar9 == 0) {
          plVar14 = (longlong *)0x0;
          goto LAB_149535e93;
        }
        LOCK();
        iVar7 = (int)plVar14[1];
        bVar15 = iVar9 == iVar7;
        if (bVar15) {
          *(int *)(plVar14 + 1) = iVar9 + 1;
          iVar7 = iVar9;
        }
        iVar9 = iVar7;
        UNLOCK();
      } while (!bVar15);
      plVar12 = *(longlong **)(lVar5 + 0x2a8);
      uVar13 = 0;
    }
LAB_149535e93:
    if (*(char *)(lVar5 + 0x31c) == '\x01') {
      *(undefined1 *)(lVar5 + 0x31c) = 0;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x48))(plVar12);
    bVar15 = true;
    if (puVar10 != (undefined8 *)0x0) {
      lVar6 = param_1[1];
      fVar17 = *(float *)(param_1[2] + 0x20);
      fVar16 = *(float *)(param_1[2] + 0x24);
      fVar19 = *(float *)(lVar6 + 0x1c);
      fVar18 = *(float *)(lVar6 + 0x20);
      fVar2 = *(float *)(lVar6 + 0x24);
      fVar20 = *(float *)(lVar6 + 0x28);
      fVar21 = 1.0 / (fVar19 * fVar20 - fVar2 * fVar18);
      fVar3 = *(float *)(lVar6 + 0x30);
      fVar4 = *(float *)(lVar6 + 0x2c);
      iVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      local_1d4 = (uint)uVar13;
      if (iVar9 == 0) {
        fVar19 = -fVar2 * fVar21;
        fVar20 = fVar20 * fVar21;
        fVar18 = -fVar4 * fVar20 - fVar3 * fVar19;
        fVar17 = fVar17 * fVar20 + fVar19 * fVar16;
      }
      else {
        fVar19 = fVar19 * fVar21;
        fVar21 = -fVar18 * fVar21;
        fVar18 = -fVar4 * fVar21 - fVar3 * fVar19;
        fVar17 = fVar17 * fVar21 + fVar19 * fVar16;
      }
      uVar13 = *(ulonglong *)param_1[1] >> 0x20;
      if (iVar9 == 0) {
        uVar13 = *(ulonglong *)param_1[1];
      }
      fVar16 = (float)uVar13 * 0.25;
      if (10.0 <= fVar16) {
        fVar16 = 10.0;
      }
      if (fVar16 <= 3.0) {
        fVar16 = 3.0;
      }
      iVar9 = 0;
      if (fVar16 <= fVar17 + fVar18) {
        iVar9 = ((float)uVar13 - fVar16 < fVar17 + fVar18) + 1;
      }
      if (((*(int *)(lVar5 + 0x2f0) == 0) || (*(longlong **)(lVar5 + 0x2e8) == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(**(longlong **)(lVar5 + 0x2e8) + 0x30))(), cVar8 == '\0')) {
        local_1ac = 1;
        local_1b0 = iVar9;
      }
      else {
        local_1a8 = *puVar10;
        local_1a0 = puVar10[1];
        if (local_1a0 != 0) {
          LOCK();
          *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
          UNLOCK();
        }
        if (*(int *)(lVar5 + 0x2f0) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(lVar5 + 0x2e8);
        }
        local_1e8 = &local_1a8;
        (**(code **)(*plVar11 + 0x58))(plVar11,&local_1b0,param_1[2],iVar9);
        if ((local_1ac & 1) == 0) {
          uVar13 = (ulonglong)local_1d4;
          goto LAB_149536122;
        }
      }
      local_1c0 = *puVar10;
      local_1b8 = puVar10[1];
      uVar13 = (ulonglong)local_1d4;
      if (local_1b8 != 0) {
        LOCK();
        *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + 1;
        UNLOCK();
      }
      if (*(int *)(lVar5 + 0x300) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(lVar5 + 0x2f8);
      }
      local_1e8 = &local_1c0;
      (**(code **)(*plVar11 + 0x58))(plVar11,&local_1a8,param_1[2],local_1b0);
      if (((char)local_1a8 == '\x01') && (local_1b0 == 1)) {
        local_1d0 = *puVar10;
        local_1c8 = puVar10[1];
        if (local_1c8 != 0) {
          LOCK();
          *(int *)(local_1c8 + 8) = *(int *)(local_1c8 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar12 + 0x50))(plVar12,&local_1d0,1);
      }
      FUN_1428fd920(param_2);
      FUN_14493db24(&local_1a8);
      if (local_1ac == 1) {
        local_1ac = 0;
      }
      bVar15 = false;
    }
LAB_149536122:
    if ((char)uVar13 == '\0') {
      LOCK();
      plVar12 = plVar14 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    if (!bVar15) goto LAB_14953617b;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14953617b:
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149536212 FUN_149536212 body=143 status=ok
// SIG undefined FUN_149536212(void)

undefined8 * FUN_149536212(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28,0xd);
  *param_1 = &PTR_FUN_14bd37940;
  param_1[0xd] = &PTR_FUN_14bd37a30;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495362a2 FUN_1495362a2 body=38 status=ok
// SIG undefined FUN_1495362a2(void)

undefined8 FUN_1495362a2(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495362ce FUN_1495362ce body=505 status=ok
// SIG undefined FUN_1495362ce(void)

void FUN_1495362ce(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar8 = *(longlong **)(param_1 + -0x48), plVar8 != (longlong *)0x0)) && (0 < (int)plVar8[1])
     ) {
    lVar10 = 0;
    iVar4 = (int)plVar8[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14953635a;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar11 = iVar3 == iVar4;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar11);
    lVar10 = *(longlong *)(param_1 + -0x50) + -8;
    if (*(longlong *)(param_1 + -0x50) == 0) {
      lVar10 = 0;
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
LAB_14953635a:
    if (((*(longlong *)(lVar10 + 0x2a8) != 0) &&
        (plVar7 = *(longlong **)(lVar10 + 0x2b0), plVar7 != (longlong *)0x0)) &&
       (0 < (int)plVar7[1])) {
      plVar9 = (longlong *)0x0;
      iVar4 = (int)plVar7[1];
      do {
        iVar5 = iVar4;
        if (iVar5 == 0) {
          plVar7 = (longlong *)0x0;
          goto LAB_1495363a8;
        }
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar11 = iVar5 == iVar4;
        if (bVar11) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        UNLOCK();
      } while (!bVar11);
      plVar9 = *(longlong **)(lVar10 + 0x2a8);
LAB_1495363a8:
      (**(code **)(*plVar9 + 0xe8))(plVar9,&local_50);
      (**(code **)(*local_50 + 0x198))();
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,lVar10);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,puVar6);
        (**(code **)(*plVar9 + 0x30))(plVar9);
        local_60 = *puVar6;
        local_58 = puVar6[1];
        if (local_58 != 0) {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar9 + 0x28))(plVar9,&local_60,1,1);
        (**(code **)(*plVar9 + 0x40))(plVar9,3);
      }
      if (iVar5 != 0) {
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    if (iVar3 != 0) {
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495364cc FUN_1495364cc body=166 status=ok
// SIG undefined FUN_1495364cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1495364cc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014953656e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(_DAT_00000000 + 0x30))(0);
        return uVar7;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    plVar8 = (longlong *)(*(longlong *)(param_1 + -0x50) + -8);
    if (*(longlong *)(param_1 + -0x50) == 0) {
      plVar8 = (longlong *)0x0;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
    uVar6 = (**(code **)(*plVar8 + 0x30))(plVar8);
    uVar7 = (ulonglong)uVar6;
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  return uVar7;
}



// FUNCTION 149536572 FUN_149536572 body=556 status=ok
// SIG undefined FUN_149536572(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149536572(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar7 = *(longlong **)(param_1 + -0x48), plVar7 != (longlong *)0x0)) && (0 < (int)plVar7[1])
     ) {
    lVar8 = 0;
    iVar6 = (int)plVar7[1];
    do {
      iVar5 = iVar6;
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_1495365fe;
      }
      LOCK();
      iVar6 = (int)plVar7[1];
      bVar9 = iVar5 == iVar6;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + -0x50) + -8;
    if (*(longlong *)(param_1 + -0x50) == 0) {
      lVar8 = 0;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
LAB_1495365fe:
    if (((*(longlong *)(lVar8 + 0x2a8) == 0) ||
        (plVar3 = *(longlong **)(lVar8 + 0x2b0), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
       ) {
      bVar9 = false;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) {
          (**(code **)(_DAT_00000000 + 0xe8))(0,&local_48);
          goto LAB_1495366d6;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar9);
      (**(code **)(**(longlong **)(lVar8 + 0x2a8) + 0xe8))(*(longlong **)(lVar8 + 0x2a8),&local_48);
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
LAB_1495366d6:
      local_68 = local_48;
      local_60 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      FUN_146974758(&local_58,&local_68);
      *param_2 = local_58;
      param_2[1] = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      }
      plVar3 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
      bVar9 = true;
    }
    if (iVar5 != 0) {
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (bVar9) goto LAB_14953669a;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14953669a:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1495367a0 FUN_1495367a0 body=590 status=ok
// SIG undefined FUN_1495367a0(void)

int FUN_1495367a0(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4,float *param_5
                 )

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  float *local_a0;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar10 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar10[1];
    plVar11 = (longlong *)0x0;
    do {
      if (iVar9 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_149536809;
      }
      LOCK();
      iVar5 = (int)plVar10[1];
      bVar12 = iVar9 == iVar5;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar9 + 1;
        iVar5 = iVar9;
      }
      iVar9 = iVar5;
      UNLOCK();
    } while (!bVar12);
    plVar11 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_149536809:
  local_98 = param_3;
  (**(code **)(*plVar11 + 0xe8))(plVar11,&local_80);
  cVar6 = (**(code **)(*local_80 + 0x198))();
  plVar4 = (longlong *)CONCAT44(uStack_74,local_78);
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
  lVar7 = (**(code **)(*plVar11 + 0x48))(plVar11,param_1);
  iVar9 = param_4;
  if (((cVar6 == '\x01' && lVar7 != 0) && (cVar6 = (**(code **)*plVar11)(plVar11), cVar6 != '\0'))
     && (cVar6 = (**(code **)(*plVar11 + 8))(plVar11,lVar7), cVar6 != '\0')) {
    lVar7 = *(longlong *)(param_1 + 0x2c8);
    pfVar8 = (float *)(lVar7 + 0x18);
    cVar6 = *(char *)(lVar7 + 0x28);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar8 = (float *)FUN_1400c06fe(pfVar8);
        lVar7 = *(longlong *)(param_1 + 0x2c8);
      }
      else if (cVar6 == '\x03') {
        pfVar8 = param_5 + 8;
      }
      else {
        pfVar8 = param_5 + 4;
      }
    }
    local_84 = pfVar8[3] * param_5[3];
    local_88 = pfVar8[2] * param_5[2];
    local_8c = pfVar8[1] * param_5[1];
    local_90 = *pfVar8 * *param_5;
    local_a0 = &local_90;
    local_6c = *param_2;
    local_80 = *(longlong **)((longlong)param_2 + 0xc);
    local_78 = *(undefined4 *)(param_2 + 1);
    uStack_74 = 0;
    uStack_70 = 0;
    local_64 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_60 = *(undefined4 *)(param_2 + 4);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_58 = *(undefined4 *)(param_2 + 5);
    local_54 = *(undefined8 *)((longlong)param_2 + 0x2c);
    local_4c = local_4c & 0xfc | *(char *)((longlong)param_2 + 0x34) * '\x02' & 2U;
    iVar9 = param_4 + 1;
    local_a8 = 0;
    FUN_140239bd2(local_98,param_4,&local_80,lVar7 + 0x10);
  }
  if (!bVar3) {
    LOCK();
    plVar11 = plVar10 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 1495369f0 FUN_1495369f0 body=239 status=ok
// SIG undefined FUN_1495369f0(void)

ulonglong FUN_1495369f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,uint param_6,undefined8 param_7,undefined1 param_8)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (*(char *)((longlong)param_1 + 0x31c) == '\x01') {
    if ((((int)param_1[0x62] != 0) && ((longlong *)param_1[0x61] != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*(longlong *)param_1[0x61] + 0x30))(), cVar1 != '\0')) {
      if ((int)param_1[0x62] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)param_1[0x61];
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))
                        (plVar3,(int)param_1[99],param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
      return uVar2;
    }
    uVar2 = (**(code **)(*param_1 + 0x88))
                      (param_1,(int)param_1[99],param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
  }
  else {
    uVar2 = (ulonglong)param_6;
  }
  return uVar2;
}



// FUNCTION 149536ae0 FUN_149536ae0 body=171 status=ok
// SIG undefined FUN_149536ae0(void)

void FUN_149536ae0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_149536b5f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_149536b5f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_149536b5f:
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
                    /* WARNING: Could not recover jumptable at 0x000149536b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 149536b8c FUN_149536b8c body=462 status=ok
// SIG undefined FUN_149536b8c(void)

void FUN_149536b8c(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_318 [40];
  undefined1 local_2f0 [4];
  undefined1 local_2ec [4];
  undefined2 local_2e8 [4];
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined1 *local_2d0;
  undefined1 *puStack_2c8;
  undefined1 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  wchar_t *local_2a8;
  undefined4 local_2a0;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined1 local_68 [40];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_318;
  uVar3 = *(undefined8 *)(param_2 + 0x1a8);
  lVar4 = *(longlong *)(param_2 + 0x1b0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 1000);
  *(undefined8 *)(param_1 + 0x3e0) = uVar3;
  *(longlong *)(param_1 + 1000) = lVar4;
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
  FUN_149537154(&local_2a8);
  local_2d0 = &DAT_3f8000003f800000;
  puStack_2c8 = &DAT_3f8000003f800000;
  local_2c0 = 1;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_70 = 1;
  local_80 = 0x3f800000;
  uStack_7c = 0x3f800000;
  uStack_78 = 0x3f800000;
  uStack_74 = 0x3f800000;
  FUN_144a450dc(local_68,&local_2b8);
  FUN_1449db362(&local_2b8);
  FUN_149536d5c(param_1,&local_2a8,param_3);
  FUN_1495372bc(&local_2a8);
  if (*(char *)(*(longlong *)(param_1 + 0x3e0) + 0x38) == '\0') {
    local_2e8[0] = 0x100;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_140a52028(param_1 + 0x42,param_1 + 8,local_2e8);
    FUN_1449db362(&local_2e0);
    local_2a8 = L"InvalidProvider";
    local_2a0 = 0xf;
    FUN_1446e940c(local_2ec,&local_2a8);
    local_2a8 = L"LiveLinkMessageBusSourceEditor";
    local_2a0 = 0x1e;
    FUN_1446e940c(local_2f0,&local_2a8);
    FUN_140208bae(&local_2a8,local_2f0,local_2ec,
                  L"This provider is invalid because it was built with an older version of Unreal Engine. You must upgrade your provider to UE5 to continue using it."
                 );
    FUN_14697e8c0(param_1 + 8,&local_2a8);
    if (local_2a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_2a8 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149536d5c FUN_149536d5c body=1015 status=ok
// SIG undefined FUN_149536d5c(void)

void FUN_149536d5c(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_4e8 [32];
  undefined1 *local_4c8;
  undefined1 local_4b1;
  longlong local_4b0;
  longlong *local_4a8;
  undefined8 local_498;
  longlong *local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined1 local_478;
  undefined8 local_470;
  undefined4 local_468;
  code *local_458;
  undefined4 local_450;
  longlong local_2a0;
  longlong *local_298;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined1 auStack_60 [16];
  undefined1 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  FUN_149537154(&local_2a0);
  local_f8 = *(undefined8 *)(param_2 + 0x1a8);
  local_f0 = *(undefined8 *)(param_2 + 0x1b0);
  local_478 = *(undefined1 *)(param_2 + 0x238);
  local_488 = *(undefined4 *)(param_2 + 0x228);
  uStack_484 = *(undefined4 *)(param_2 + 0x22c);
  uStack_480 = *(undefined4 *)(param_2 + 0x230);
  uStack_47c = *(undefined4 *)(param_2 + 0x234);
  local_470 = 0;
  local_468 = 0;
  FUN_140a58be0(&local_470,param_2 + 0x240);
  local_68 = local_478;
  local_78 = local_488;
  uStack_74 = uStack_484;
  uStack_70 = uStack_480;
  uStack_6c = uStack_47c;
  FUN_144a450dc(auStack_60,&local_470);
  FUN_1449db362(&local_470);
  local_50 = *(undefined1 *)(param_2 + 0x250);
  FUN_149538b88(auStack_e8,param_2 + 0x1b8);
  FUN_149538c0c(auStack_d8,param_2 + 0x1c8);
  FUN_145767132(auStack_b8,param_2 + 0x1e8);
  FUN_14697937e(auStack_a8,param_2 + 0x1f8);
  FUN_14697937e(auStack_98,param_2 + 0x208);
  FUN_146979402(auStack_88,param_2 + 0x218);
  FUN_140a5296a(&local_458);
  local_4c8 = &local_4b1;
  FUN_140a541dc(&local_4b0,"SHorizontalBox","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",
                0x538);
  if (local_4a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4a8 + 1) = (int)local_4a8[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0x71];
  param_1[0x70] = local_4b0;
  param_1[0x71] = (longlong)local_4a8;
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
  FUN_140a50ec6(&local_4b0,&local_498,&local_458);
  plVar1 = local_40;
  plVar4 = local_490;
  if (local_490 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_490 + 1) = (int)local_490[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_490 + 1) = (int)local_490[1] + 1;
    UNLOCK();
  }
  local_48 = local_498;
  local_40 = local_490;
  if (plVar1 != (longlong *)0x0) {
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
  FUN_149537d94(param_1,&local_2a0,param_3);
  (**(code **)(*param_1 + 0x80))(param_1,*(undefined4 *)(*param_3 + 0x270),&local_78,&local_48);
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
  if (local_490 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_490 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_490)(local_490);
      LOCK();
      piVar2 = (int *)((longlong)local_490 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_490 + 0x10))(local_490);
      }
    }
  }
  plVar4 = local_4a8;
  if (local_4a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4a8)(local_4a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_145ab33da(&local_458);
  FUN_1495372bc(&local_2a0);
  FUN_146af5c44(*param_3,&local_4b0);
  lVar5 = local_4b0 + 0x2e8;
  local_458 = FUN_14953735c;
  local_450 = 0;
  FUN_149538c90(&local_2a0,param_1,&local_458);
  FUN_146afcdca(lVar5,&local_458,&local_2a0);
  FUN_1449db362(&local_2a0);
  plVar4 = local_4a8;
  local_2a0 = local_4b0;
  local_298 = local_4a8;
  if (local_4a8 == (longlong *)0x0) {
    FUN_14953735c(param_1,&local_2a0);
  }
  else {
    LOCK();
    *(int *)(local_4a8 + 1) = (int)local_4a8[1] + 1;
    UNLOCK();
    FUN_14953735c(param_1);
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
  if (local_4a8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_4a8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_4a8)(local_4a8);
      LOCK();
      piVar2 = (int *)((longlong)local_4a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_4a8 + 0x10))(local_4a8);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_4e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149537154 FUN_149537154 body=359 status=ok
// SIG undefined FUN_149537154(void)

longlong FUN_149537154(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_30,"TableView.Row",1);
  uVar3 = FUN_145817f3a(lVar2,local_30,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  *(longlong *)(param_1 + 0x1b0) = lVar2;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x238) = 1;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined2 *)(param_1 + 0x250) = 1;
  *(undefined1 *)(param_1 + 0x252) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined8 *)(param_1 + 600) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x260) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495372bc FUN_1495372bc body=160 status=ok
// SIG undefined FUN_1495372bc(void)

void FUN_1495372bc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x260);
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
  FUN_1449db362(param_1 + 0x240);
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x208);
  FUN_1449db362(param_1 + 0x1f8);
  FUN_1449db362(param_1 + 0x1e8);
  FUN_1449db362(param_1 + 0x1d8);
  FUN_1449db362(param_1 + 0x1c8);
  FUN_1449db362(param_1 + 0x1b8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14953735c FUN_14953735c body=2614 status=ok
// SIG undefined FUN_14953735c(void)

void FUN_14953735c(longlong *param_1,undefined8 *param_2)

{
  longlong **pplVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  longlong **pplVar14;
  uint uVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined1 auStack_548 [32];
  undefined8 *local_528;
  undefined1 *local_518;
  undefined4 *local_510;
  longlong *local_508;
  longlong *local_500;
  undefined1 local_4f1;
  undefined8 local_4f0;
  longlong *local_4e8;
  undefined4 local_4d8;
  undefined1 local_4d4;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c0;
  longlong *local_4b8;
  undefined4 local_4b0;
  undefined1 local_4ac;
  longlong *local_4a8;
  undefined8 uStack_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  longlong *local_478;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_468;
  undefined4 local_460;
  longlong *local_458;
  longlong **pplStack_450;
  longlong *local_448;
  longlong **applStack_440 [8];
  undefined4 local_400;
  undefined1 local_3fc;
  undefined4 local_3f8;
  undefined1 local_3f4;
  undefined1 local_3a6;
  undefined4 local_2a0;
  undefined4 local_29c;
  longlong *local_270;
  longlong **local_268;
  undefined4 local_260 [2];
  undefined1 local_258 [184];
  undefined4 local_1a0;
  undefined1 local_19c;
  longlong *local_198;
  undefined8 uStack_190;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_548;
  FUN_146977a00(param_1[0x70]);
  plVar9 = (longlong *)FUN_146af054a(*param_2);
  lVar7 = plVar9[1];
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  if (0 < (longlong)(int)lVar7) {
    local_500 = param_1 + 0x79;
    local_510 = local_260;
    local_518 = local_258;
    lVar16 = 0;
    local_508 = param_1;
    do {
      plVar4 = *(longlong **)(*plVar9 + lVar16 * 8);
      cVar8 = FUN_146af0cd6(*param_2,plVar4);
      pplVar14 = DAT_14c98ded0;
      if (cVar8 != '\0') {
        if ((int)param_1[0x73] != *(int *)((longlong)param_1 + 0x3c4)) {
          lVar5 = *plVar4;
          uVar6 = (uint)((ulonglong)lVar5 >> 0x10);
          uVar15 = (uint)lVar5 & 0xffff;
          plVar10 = (longlong *)param_1[0x7a];
          if ((longlong *)param_1[0x7a] == (longlong *)0x0) {
            plVar10 = local_500;
          }
          iVar12 = *(int *)((longlong)plVar10 +
                           (ulonglong)
                           ((int)param_1[0x7b] - 1U &
                           (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar15) +
                           (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar15 >> 4)) * 4);
          if (iVar12 != -1) {
            do {
              lVar13 = param_1[0x72] + (longlong)iVar12 * 0x20;
              if (*(longlong *)(param_1[0x72] + (longlong)iVar12 * 0x20) == lVar5)
              goto LAB_1495374b7;
              iVar12 = *(int *)(lVar13 + 0x18);
            } while (iVar12 != -1);
          }
        }
        lVar13 = 0;
LAB_1495374b7:
        plVar10 = (longlong *)(lVar13 + 8);
        if (lVar13 == 0) {
          plVar10 = (longlong *)0x0;
        }
        local_458 = DAT_14c98dec8;
        pplStack_450 = DAT_14c98ded0;
        if (DAT_14c98ded0 != (longlong **)0x0) {
          LOCK();
          *(int *)(DAT_14c98ded0 + 1) = *(int *)(DAT_14c98ded0 + 1) + 1;
          UNLOCK();
        }
        if (plVar10 == (longlong *)0x0) {
          (**(code **)(*param_1 + 0xa0))(param_1,&local_448,plVar4);
          pplVar14 = pplStack_450;
          plVar10 = local_458;
          local_458 = local_448;
          pplStack_450 = applStack_440[0];
          local_448 = plVar10;
          applStack_440[0] = pplVar14;
          if (pplVar14 != (longlong **)0x0) {
            LOCK();
            pplVar1 = pplVar14 + 1;
            *(int *)pplVar1 = *(int *)pplVar1 + -1;
            UNLOCK();
            if (*(int *)pplVar1 == 0) {
              (*(code *)**pplVar14)(pplVar14);
              LOCK();
              piVar2 = (int *)((longlong)pplVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                plVar10 = *pplVar14;
LAB_149537598:
                (*(code *)plVar10[2])(pplVar14);
              }
            }
          }
        }
        else {
          local_458 = (longlong *)*plVar10;
          pplStack_450 = (longlong **)plVar10[1];
          if (pplStack_450 != (longlong **)0x0) {
            LOCK();
            *(int *)(pplStack_450 + 1) = *(int *)(pplStack_450 + 1) + 1;
            UNLOCK();
          }
          if (pplVar14 != (longlong **)0x0) {
            LOCK();
            pplVar1 = pplVar14 + 1;
            *(int *)pplVar1 = *(int *)pplVar1 + -1;
            UNLOCK();
            if (*(int *)pplVar1 == 0) {
              (*(code *)**pplVar14)(pplVar14);
              LOCK();
              piVar2 = (int *)((longlong)pplVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                plVar10 = *pplVar14;
                goto LAB_149537598;
              }
            }
          }
        }
        if (local_458 != DAT_14c98dec8) {
          FUN_140cbdc98(local_458,4);
        }
        iVar12 = (int)plVar4[0x16];
        if (iVar12 - 2U < 2) {
          local_4b0 = 0xbf800000;
          local_4ac = 0;
          local_4a8 = (longlong *)0x0;
          uStack_4a0 = 0;
          local_448 = (longlong *)0x0;
          applStack_440[0] = (longlong **)((ulonglong)applStack_440[0] & 0xffffffff00000000);
          FUN_1446efa72(&local_448,0,2,0x10);
          applStack_440[0] = (longlong **)CONCAT44(applStack_440[0]._4_4_,2);
          *local_448 = (longlong)&PTR_LAB_149f201b0;
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 1;
          lVar5 = DAT_14c758608 + 1;
          if (lVar13 == 0) {
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 2;
            lVar5 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar5;
          local_448[2] = lVar13;
          *local_448 = (longlong)&PTR_FUN_14bd37cf0;
          local_448[3] = (longlong)plVar4;
          local_4ac = 1;
          FUN_144a450dc(&local_4a8,&local_448);
          FUN_1449db362(&local_448);
          FUN_146a24608(param_1[0x70],&local_1a0,0xffffffff);
          uVar11 = FUN_140a52578(&local_198);
          FUN_140a53a96(&local_448);
          local_4d8 = local_4b0;
          local_4d4 = local_4ac;
          local_4d0 = 0;
          local_4c8 = 0;
          FUN_140a58922(&local_4d0,&local_4a8);
          *(undefined1 *)(local_510 + 1) = local_4d4;
          *local_510 = local_4d8;
          FUN_144a450dc(local_518,&local_4d0);
          FUN_1449db362(&local_4d0);
          pplVar14 = local_268;
          local_2a0 = (undefined4)plVar4[0x21];
          local_29c = *(undefined4 *)((longlong)plVar4 + 0x10c);
          local_3a6 = 4;
          if (pplStack_450 != (longlong **)0x0) {
            LOCK();
            *(int *)(pplStack_450 + 1) = *(int *)(pplStack_450 + 1) + 1;
            UNLOCK();
          }
          local_270 = local_458;
          local_268 = pplStack_450;
          if (pplVar14 != (longlong **)0x0) {
            LOCK();
            pplVar1 = pplVar14 + 1;
            *(int *)pplVar1 = *(int *)pplVar1 + -1;
            UNLOCK();
            if (*(int *)pplVar1 == 0) {
              (*(code *)**pplVar14)(pplVar14);
              LOCK();
              piVar2 = (int *)((longlong)pplVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*pplVar14)[2])(pplVar14);
              }
            }
          }
          local_528 = (undefined8 *)&local_4f1;
          FUN_140a53d66(&local_4f0,&DAT_149efe19f,
                        "Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",0x59f);
          FUN_140a50bf4(&local_4f0,&local_4c0,&local_448);
          param_1 = local_508;
          local_480 = local_4c0;
          local_478 = local_4b8;
          if (local_4b8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_4b8 + 1) = (int)local_4b8[1] + 1;
            UNLOCK();
          }
          FUN_140a4fe8e(uVar11,&local_480);
          plVar10 = local_478;
          if (local_478 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_478 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_478)(local_478);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          plVar10 = local_4b8;
          pplVar14 = &local_4a8;
          if (local_4b8 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_4b8 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_4b8)(local_4b8);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          plVar10 = local_4e8;
          if (local_4e8 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_4e8 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_4e8)(local_4e8);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          FUN_140a5660c(&local_448);
          FUN_146a071ac(&local_1a0);
LAB_1495379ff:
          FUN_1449db362(pplVar14);
        }
        else if (iVar12 == 1) {
          FUN_146a24608(param_1[0x70],&local_1a0,0xffffffff);
          uVar11 = FUN_140a52578(&local_198);
          FUN_140a53a96(&local_448);
          if ((((int)plVar4[0x12] != 0) && ((longlong *)plVar4[0x11] != (longlong *)0x0)) &&
             (cVar8 = (**(code **)(*(longlong *)plVar4[0x11] + 0x30))(), cVar8 != '\0')) {
            if ((int)plVar4[0x12] == 0) {
              plVar10 = (longlong *)0x0;
            }
            else {
              plVar10 = (longlong *)plVar4[0x11];
            }
            uVar17 = (**(code **)(*plVar10 + 0x58))();
            *(undefined4 *)(plVar4 + 0x10) = uVar17;
          }
          local_498 = (undefined4)plVar4[0x10];
          local_494 = 1;
          local_490 = 0;
          uStack_488 = 0;
          *(undefined1 *)(local_510 + 1) = 1;
          *local_510 = local_498;
          FUN_144a450dc(local_518,&local_490);
          FUN_1449db362(&local_490);
          pplVar14 = local_268;
          local_2a0 = (undefined4)plVar4[0x21];
          local_29c = *(undefined4 *)((longlong)plVar4 + 0x10c);
          local_3a6 = 4;
          if (pplStack_450 != (longlong **)0x0) {
            LOCK();
            *(int *)(pplStack_450 + 1) = *(int *)(pplStack_450 + 1) + 1;
            UNLOCK();
          }
          local_270 = local_458;
          local_268 = pplStack_450;
          if (pplVar14 != (longlong **)0x0) {
            LOCK();
            pplVar1 = pplVar14 + 1;
            *(int *)pplVar1 = *(int *)pplVar1 + -1;
            UNLOCK();
            if (*(int *)pplVar1 == 0) {
              (*(code *)**pplVar14)(pplVar14);
              LOCK();
              piVar2 = (int *)((longlong)pplVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*pplVar14)[2])(pplVar14);
              }
            }
          }
          local_528 = &local_4c0;
          FUN_140a53d66(&local_4b0,&DAT_149efe19f,
                        "Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",0x584);
          FUN_140a50bf4(&local_4b0,&local_480,&local_448);
          local_4f0 = local_480;
          local_4e8 = local_478;
          if (local_478 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_478 + 1) = (int)local_478[1] + 1;
            UNLOCK();
          }
          FUN_140a4fe8e(uVar11,&local_4f0);
          plVar10 = local_4e8;
          if (local_4e8 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_4e8 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_4e8)(local_4e8);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          plVar10 = local_478;
          if (local_478 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_478 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_478)(local_478);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          plVar10 = local_4a8;
          if (local_4a8 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_4a8 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_4a8)(local_4a8);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          FUN_140a5660c(&local_448);
          FUN_146a071ac(&local_1a0);
        }
        else if (iVar12 == 0) {
          local_1a0 = 0;
          pplVar14 = &local_198;
          local_198 = (longlong *)0x0;
          uStack_190 = 0;
          local_19c = 1;
          FUN_1446efa72(pplVar14,0,3,0x10);
          uStack_190 = CONCAT44(uStack_190._4_4_,3);
          *local_198 = (longlong)&PTR_LAB_149f05210;
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 1;
          lVar5 = DAT_14c758608 + 1;
          if (lVar13 == 0) {
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 2;
            lVar5 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar5;
          local_198[2] = lVar13;
          *local_198 = (longlong)&PTR_FUN_149f20140;
          local_198[3] = (longlong)plVar4;
          local_198[4] = (longlong)FUN_146af18b8;
          FUN_146a24608(param_1[0x70],&local_448,0xffffffff);
          local_400 = (undefined4)plVar4[0x21];
          local_3fc = 1;
          local_3f8 = *(undefined4 *)((longlong)plVar4 + 0x10c);
          local_3f4 = 1;
          local_470 = local_1a0;
          local_46c = local_19c;
          local_468 = 0;
          local_460 = 0;
          FUN_140a52b3c(&local_468,pplVar14);
          uVar11 = FUN_140a5475a(applStack_440,&local_470);
          FUN_146a07044(uVar11,&local_458);
          FUN_146a071ac(&local_448);
          goto LAB_1495379ff;
        }
        applStack_440[0] = &local_458;
        local_448 = plVar4;
        FUN_147da36e8(&local_c8,&local_1a0,&local_448,0);
        pplVar14 = pplStack_450;
        if (pplStack_450 != (longlong **)0x0) {
          LOCK();
          pplVar1 = pplStack_450 + 1;
          *(int *)pplVar1 = *(int *)pplVar1 + -1;
          UNLOCK();
          if (*(int *)pplVar1 == 0) {
            (*(code *)**pplStack_450)(pplStack_450);
            LOCK();
            piVar2 = (int *)((longlong)pplVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*pplVar14)[2])(pplVar14);
            }
          }
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != (int)lVar7);
  }
  FUN_147da3c88(param_1 + 0x72,&local_c8);
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_147da3520(&local_c8);
  if ((local_60 ^ (ulonglong)auStack_548) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149537d94 FUN_149537d94 body=488 status=ok
// SIG undefined FUN_149537d94(void)

void FUN_149537d94(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined1 local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x37a) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x1b0);
  local_78 = 0;
  local_70 = 1;
  local_58 = (code *)&LAB_149537f7e;
  local_50 = 0;
  FUN_149538174(local_68,param_1,&local_58);
  FUN_145ab4d4e(param_1 + 8,&local_78);
  local_a0 = 0x3f800000;
  uStack_9c = 0;
  uStack_98 = 0x3f800000;
  uStack_94 = 0x3f800000;
  local_90 = 0;
  local_8c = 1;
  local_58 = FUN_149537f8c;
  local_50 = 0;
  FUN_149538666(local_88,param_1,&local_58);
  FUN_140a5c8a2(param_1 + 600,param_1 + 8,&local_a0);
  FUN_1449db362(local_88);
  FUN_149538b88(param_1 + 0x2e8,param_2 + 0x1b8);
  FUN_149538c0c(param_1 + 0x2f8,param_2 + 0x1c8);
  FUN_145767132(param_1 + 800,param_2 + 0x1e8);
  FUN_14697937e(param_1 + 0x330,param_2 + 0x1f8);
  FUN_14697937e(param_1 + 0x340,param_2 + 0x208);
  FUN_146979402(param_1 + 0x350,param_2 + 0x218);
  local_b0 = *param_3;
  local_a8 = param_3[1];
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
    UNLOCK();
  }
  FUN_14953808e(param_1,&local_b0);
  *(undefined1 *)(param_1 + 700) = *(undefined1 *)(param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x254);
  *(undefined1 *)(param_1 + 0x37c) = *(undefined1 *)(param_2 + 0x251);
  *(undefined1 *)(param_1 + 0x37b) = *(undefined1 *)(param_2 + 0x252);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149537f8c FUN_149537f8c body=257 status=ok
// SIG undefined FUN_149537f8c(void)

undefined8 * FUN_149537f8c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  bool bVar15;
  
  plVar3 = *(longlong **)(param_1 + 0x2b0);
  if (plVar3 == (longlong *)0x0) {
LAB_149538062:
    lVar5 = *(longlong *)(param_1 + 0x2c8);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar5 + 0x7c0);
    uVar9 = *(undefined8 *)(lVar5 + 0x7b8);
    *param_2 = *(undefined8 *)(lVar5 + 0x7b0);
    param_2[1] = uVar9;
  }
  else {
    iVar12 = (int)plVar3[1];
    do {
      if (iVar12 == 0) goto LAB_149538062;
      LOCK();
      iVar10 = (int)plVar3[1];
      bVar15 = iVar12 == iVar10;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar12 + 1;
        iVar10 = iVar12;
      }
      iVar12 = iVar10;
      UNLOCK();
    } while (!bVar15);
    plVar4 = *(longlong **)(param_1 + 0x2a8);
    lVar5 = *(longlong *)(param_1 + 0x2c8);
    puVar14 = (undefined4 *)(lVar5 + 0x7b0);
    if ((plVar4 != (longlong *)0x0 & *(byte *)(param_1 + 700)) == 1) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      lVar13 = (**(code **)(*plVar4 + 0x48))(plVar4);
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
      if (lVar13 != 0) {
        cVar11 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar13);
        if (cVar11 != '\0') {
          puVar14 = (undefined4 *)(lVar5 + 0x7c4);
        }
      }
    }
    *(undefined4 *)(param_2 + 2) = puVar14[4];
    uVar6 = puVar14[1];
    uVar7 = puVar14[2];
    uVar8 = puVar14[3];
    *(undefined4 *)param_2 = *puVar14;
    *(undefined4 *)((longlong)param_2 + 4) = uVar6;
    *(undefined4 *)(param_2 + 1) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  return param_2;
}



// FUNCTION 14953808e FUN_14953808e body=229 status=ok
// SIG undefined FUN_14953808e(void)

void FUN_14953808e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    lVar5 = lVar2 + 0x4d8;
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    *(longlong *)(param_1 + 0x2a8) = lVar5;
    plVar4 = *(longlong **)(param_1 + 0x2b0);
    if (plVar4 == (longlong *)0x0) goto LAB_14953813c;
LAB_1495380dc:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    *(longlong **)(param_1 + 0x2b0) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_14953813c;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar5 = lVar2 + 0x4d8;
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    *(longlong *)(param_1 + 0x2a8) = lVar5;
    if (*(longlong **)(param_1 + 0x2b0) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x2b0);
      if (plVar4 != (longlong *)0x0) goto LAB_1495380dc;
      *(longlong **)(param_1 + 0x2b0) = plVar3;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14953813c:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000149538166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149538174 FUN_149538174 body=397 status=ok
// SIG undefined FUN_149538174(void)

longlong * FUN_149538174(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_149538290:
    *puVar5 = &PTR_LAB_149f056a0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar10;
    *puVar5 = &PTR_FUN_14bd37ba0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_149538290;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar9 = *(longlong *)(param_2 + 0x10) + -8;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar9 = 0;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f056a0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14bd37ba0;
    puVar5[3] = lVar9;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 149538302 FUN_149538302 body=64 status=ok
// SIG undefined FUN_149538302(void)

undefined8 * FUN_149538302(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bd37ba0;
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



// FUNCTION 149538346 FUN_149538346 body=81 status=ok
// SIG undefined FUN_149538346(void)

undefined8 FUN_149538346(longlong param_1)

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



// FUNCTION 14953839e FUN_14953839e body=89 status=ok
// SIG undefined FUN_14953839e(void)

bool FUN_14953839e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1495383e9;
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
LAB_1495383e9:
  return lVar6 == param_2;
}



// FUNCTION 149538414 FUN_149538414 body=118 status=ok
// SIG undefined FUN_149538414(void)

void FUN_149538414(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd37ba0;
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



// FUNCTION 14953848a FUN_14953848a body=118 status=ok
// SIG undefined FUN_14953848a(void)

void FUN_14953848a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd37ba0;
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



// FUNCTION 149538500 FUN_149538500 body=156 status=ok
// SIG undefined FUN_149538500(void)

void FUN_149538500(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f056a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd37ba0;
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
                    /* WARNING: Could not recover jumptable at 0x00014953858c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14953859c FUN_14953859c body=102 status=ok
// SIG undefined FUN_14953859c(void)

undefined8 FUN_14953859c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar7) {
        uVar6 = (**(code **)(param_1 + 0x28))
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        return uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001495385fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar6;
}



// FUNCTION 149538602 FUN_149538602 body=100 status=ok
// SIG undefined FUN_149538602(void)

ulonglong FUN_149538602(longlong param_1)

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
LAB_14953865b:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14953865b;
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



// FUNCTION 149538666 FUN_149538666 body=397 status=ok
// SIG undefined FUN_149538666(void)

longlong * FUN_149538666(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_149538782:
    *puVar5 = &PTR_LAB_149f05990;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar10;
    *puVar5 = &PTR_FUN_14bd37c10;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_149538782;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar9 = *(longlong *)(param_2 + 0x10) + -8;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar9 = 0;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05990;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14bd37c10;
    puVar5[3] = lVar9;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1495387f4 FUN_1495387f4 body=64 status=ok
// SIG undefined FUN_1495387f4(void)

undefined8 * FUN_1495387f4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bd37c10;
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



// FUNCTION 149538838 FUN_149538838 body=81 status=ok
// SIG undefined FUN_149538838(void)

undefined8 FUN_149538838(longlong param_1)

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



// FUNCTION 149538890 FUN_149538890 body=89 status=ok
// SIG undefined FUN_149538890(void)

bool FUN_149538890(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1495388db;
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
LAB_1495388db:
  return lVar6 == param_2;
}



// FUNCTION 149538906 FUN_149538906 body=118 status=ok
// SIG undefined FUN_149538906(void)

void FUN_149538906(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd37c10;
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



// FUNCTION 14953897c FUN_14953897c body=118 status=ok
// SIG undefined FUN_14953897c(void)

void FUN_14953897c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd37c10;
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



// FUNCTION 1495389f2 FUN_1495389f2 body=156 status=ok
// SIG undefined FUN_1495389f2(void)

void FUN_1495389f2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd37c10;
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
                    /* WARNING: Could not recover jumptable at 0x000149538a7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149538a8e FUN_149538a8e body=105 status=ok
// SIG undefined FUN_149538a8e(void)

undefined8 FUN_149538a8e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_149538ae2:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_149538ae2;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 149538af8 FUN_149538af8 body=143 status=ok
// SIG undefined FUN_149538af8(void)

ulonglong FUN_149538af8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [44];
  undefined1 local_2c [20];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_149538b66:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_149538b66;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_2c);
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 149538b88 FUN_149538b88 body=130 status=ok
// SIG undefined FUN_149538b88(void)

void FUN_149538b88(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149538c0c FUN_149538c0c body=130 status=ok
// SIG undefined FUN_149538c0c(void)

void FUN_149538c0c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149538c90 FUN_149538c90 body=397 status=ok
// SIG undefined FUN_149538c90(void)

longlong * FUN_149538c90(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_149538dac:
    *puVar5 = &PTR_LAB_14aaf94e0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar10;
    *puVar5 = &PTR_FUN_14bd37c80;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_149538dac;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar9 = *(longlong *)(param_2 + 0x10) + -8;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar9 = 0;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14aaf94e0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14bd37c80;
    puVar5[3] = lVar9;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}


