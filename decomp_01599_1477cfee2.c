// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1477cfee2 FUN_1477cfee2 body=229 status=ok
// SIG undefined FUN_1477cfee2(void)

undefined8 FUN_1477cfee2(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar3 = (longlong *)param_3[1];
    local_38 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      iVar7 = FUN_1477cffc8(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar7 = FUN_1477cffc8(param_1);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (iVar7 != -1) {
      puVar2 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x18);
      plVar3 = *(longlong **)(puVar2 + 2);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      uVar4 = *(undefined4 *)((longlong)param_3 + 4);
      uVar5 = *(undefined4 *)(param_3 + 1);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
      *puVar2 = *(undefined4 *)param_3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_1477d0134(param_1,*param_4);
      *param_4 = iVar7;
      uVar8 = 1;
      goto LAB_1477cff08;
    }
  }
  uVar8 = 0;
LAB_1477cff08:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477cffc8 FUN_1477cffc8 body=364 status=ok
// SIG undefined FUN_1477cffc8(void)

int FUN_1477cffc8(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  bool bVar13;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar9 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar10 = *(longlong *)(*param_1 + lVar8 * 0x18);
      plVar4 = *(longlong **)(*param_1 + 8 + lVar8 * 0x18);
      if (plVar4 == (longlong *)0x0) {
LAB_1477d006f:
        plVar11 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        iVar6 = (int)plVar4[1];
        do {
          if (iVar6 == 0) goto LAB_1477d006f;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar12 = iVar6 == iVar5;
          if (bVar12) {
            *(int *)(plVar4 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
          plVar11 = plVar4;
        } while (!bVar12);
      }
      bVar12 = true;
      if (plVar7 != (longlong *)0x0) {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_1477d00ae;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar13 = iVar6 == iVar5;
          if (bVar13) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar13);
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
        bVar12 = false;
      }
LAB_1477d00ae:
      if (plVar11 == (longlong *)0x0) {
        lVar10 = 0;
      }
      else {
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      if (bVar12) {
        lVar9 = 0;
      }
      if (lVar10 == lVar9) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x10 + lVar8 * 0x18);
    }
  }
  return -1;
}



// FUNCTION 1477d0134 FUN_1477d0134 body=114 status=ok
// SIG undefined FUN_1477d0134(void)

void FUN_1477d0134(longlong *param_1,int param_2)

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



// FUNCTION 1477d01a6 FUN_1477d01a6 body=503 status=ok
// SIG undefined FUN_1477d01a6(void)

void FUN_1477d01a6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
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
  uVar7 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar7 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
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
      iVar11 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar5 = (longlong)iVar11;
        uVar9 = *(ulonglong *)(lVar3 + lVar5 * 0x18);
        plVar6 = *(longlong **)(lVar3 + 8 + lVar5 * 0x18);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
          UNLOCK();
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
        }
        lVar3 = lVar3 + lVar5 * 0x18;
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar3 + 0x14) = iVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar11 = local_70._4_4_;
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



// FUNCTION 1477d039e FUN_1477d039e body=411 status=ok
// SIG undefined FUN_1477d039e(void)

void FUN_1477d039e(longlong *param_1,uint param_2)

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



// FUNCTION 1477d053a FUN_1477d053a body=218 status=ok
// SIG undefined FUN_1477d053a(void)

longlong * FUN_1477d053a(longlong *param_1,longlong *param_2)

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
    FUN_1477cf4ba(param_1,(ulonglong)uVar1);
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
            *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
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



// FUNCTION 1477d0614 FUN_1477d0614 body=115 status=ok
// SIG undefined FUN_1477d0614(void)

void FUN_1477d0614(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc0,8);
    iVar2 = (int)(uVar1 / 0xc0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477d0687 FUN_1477d0687 body=74 status=ok
// SIG undefined FUN_1477d0687(void)

void FUN_1477d0687(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined1 *)(param_1 + -8) = *(undefined1 *)(param_2 + -8);
      FUN_1477d06d2(param_1,param_2);
      param_1 = param_1 + 0xc0;
      param_2 = param_2 + 0xc0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1477d06d2 FUN_1477d06d2 body=158 status=ok
// SIG undefined FUN_1477d06d2(void)

undefined1 * FUN_1477d06d2(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar5 = DAT_14c950c29;
  lVar1 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar1;
  if ((lVar1 != 0 & bVar5) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  FUN_140501b78(param_1 + 0x30,param_2 + 0x30);
  lVar1 = *(longlong *)(param_2 + 0xb0);
  *(longlong *)(param_1 + 0xb0) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1477d0770 FUN_1477d0770 body=90 status=ok
// SIG undefined FUN_1477d0770(void)

void FUN_1477d0770(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xa8);
    do {
      plVar1[-0xe] = (longlong)&DAT_14a176f00;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1[-0xe] = (longlong)&PTR_FUN_14a177080;
      FUN_144a78a1a(plVar1 + -0xd);
      plVar1 = plVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1477d07e2 FUN_1477d07e2 body=29 status=ok
// SIG undefined FUN_1477d07e2(void)

undefined8 FUN_1477d07e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477d07ff FUN_1477d07ff body=73 status=ok
// SIG undefined FUN_1477d07ff(void)

void FUN_1477d07ff(longlong param_1,int param_2)

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



// FUNCTION 1477d0848 FUN_1477d0848 body=14 status=ok
// SIG undefined FUN_1477d0848(void)

void FUN_1477d0848(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
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



// FUNCTION 1477d0856 FUN_1477d0856 body=29 status=ok
// SIG undefined FUN_1477d0856(void)

undefined8 FUN_1477d0856(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477d0874 FUN_1477d0874 body=132 status=ok
// SIG undefined FUN_1477d0874(void)

void FUN_1477d0874(longlong param_1,int param_2)

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



// FUNCTION 1477d08f9 FUN_1477d08f9 body=58 status=ok
// SIG undefined FUN_1477d08f9(void)

void FUN_1477d08f9(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1477d0933 FUN_1477d0933 body=41 status=ok
// SIG undefined FUN_1477d0933(void)

void FUN_1477d0933(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1477d095c(param_1);
    param_1 = param_1 + 0x540;
  }
  return;
}



// FUNCTION 1477d095c FUN_1477d095c body=676 status=ok
// SIG undefined FUN_1477d095c(void)

void FUN_1477d095c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x518);
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
  plVar3 = *(longlong **)(param_1 + 0x508);
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
  plVar3 = *(longlong **)(param_1 + 0x4f0);
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
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x3b0);
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
  plVar3 = *(longlong **)(param_1 + 0x3a0);
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
  plVar3 = *(longlong **)(param_1 + 0x390);
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
  plVar3 = *(longlong **)(param_1 + 0x380);
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
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1400020a8();
  }
  FUN_1477cb5a3(*(undefined8 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0;
  do {
    if (*(longlong *)(param_1 + 0x100 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x20);
  FUN_1477c99d7(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x0001477d0bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477d0c00 FUN_1477d0c00 body=41 status=ok
// SIG undefined FUN_1477d0c00(void)

void FUN_1477d0c00(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1477d28f4(param_1);
    param_1 = param_1 + 0x330;
  }
  return;
}



// FUNCTION 1477d0c29 FUN_1477d0c29 body=73 status=ok
// SIG undefined FUN_1477d0c29(void)

void FUN_1477d0c29(longlong param_1,int param_2)

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



// FUNCTION 1477d0c72 FUN_1477d0c72 body=112 status=ok
// SIG undefined FUN_1477d0c72(void)

void FUN_1477d0c72(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x60,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,0x10);
  }
  return;
}



// FUNCTION 1477d0ce2 FUN_1477d0ce2 body=48 status=ok
// SIG undefined FUN_1477d0ce2(void)

void FUN_1477d0ce2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1477d0d12 FUN_1477d0d12 body=95 status=ok
// SIG undefined FUN_1477d0d12(void)

void FUN_1477d0d12(longlong param_1,uint param_2)

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



// FUNCTION 1477d0d72 FUN_1477d0d72 body=132 status=ok
// SIG undefined FUN_1477d0d72(void)

void FUN_1477d0d72(longlong param_1,int param_2)

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



// FUNCTION 1477d0df8 FUN_1477d0df8 body=48 status=ok
// SIG undefined FUN_1477d0df8(void)

void FUN_1477d0df8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x330,0x10);
  }
  return;
}



// FUNCTION 1477d0e28 FUN_1477d0e28 body=146 status=ok
// SIG undefined FUN_1477d0e28(void)

void FUN_1477d0e28(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x330,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x330)) {
      uVar5 = uVar4 / 0x330 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x330,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477d0ebb FUN_1477d0ebb body=41 status=ok
// SIG undefined FUN_1477d0ebb(void)

void FUN_1477d0ebb(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1477d0f78(param_1);
    param_1 = param_1 + 0x540;
  }
  return;
}



// FUNCTION 1477d0ee4 FUN_1477d0ee4 body=146 status=ok
// SIG undefined FUN_1477d0ee4(void)

void FUN_1477d0ee4(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x540,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 6;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x540,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477d0f78 FUN_1477d0f78 body=1114 status=ok
// SIG undefined FUN_1477d0f78(void)

undefined8 * FUN_1477d0f78(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_147034b3a(param_1 + 0xf,0);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  FUN_147035484(param_1 + 0x2a);
  FUN_147035822(param_1 + 0x32);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x46] = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x44] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x45] = uVar2;
  uVar2 = DAT_14c8463e8;
  param_1[0x4a] = DAT_14c8463e0;
  param_1[0x4b] = uVar2;
  uVar2 = DAT_14c8463d8;
  param_1[0x48] = DAT_14c8463d0;
  param_1[0x49] = uVar2;
  param_1[0x4e] = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x4c] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x4d] = uVar2;
  param_1[0x51] = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x4f] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x50] = uVar2;
  uVar2 = DAT_14c8463e8;
  param_1[0x54] = DAT_14c8463e0;
  param_1[0x55] = uVar2;
  uVar2 = DAT_14c8463d8;
  param_1[0x52] = DAT_14c8463d0;
  param_1[0x53] = uVar2;
  uVar2 = DAT_14c8463e8;
  param_1[0x58] = DAT_14c8463e0;
  param_1[0x59] = uVar2;
  uVar2 = DAT_14c8463d8;
  param_1[0x56] = DAT_14c8463d0;
  param_1[0x57] = uVar2;
  param_1[0x5c] = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x5a] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x5b] = uVar2;
  param_1[0x5f] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x5d) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = uVar3;
  *(undefined4 *)(param_1 + 0x5e) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = uVar5;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x62] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  local_68 = 0x41200000473b8000;
  local_60 = 0x242c80000;
  local_58 = 1;
  local_54 = 0x40a00000;
  FUN_147034930(param_1 + 0x68);
  puVar6 = (undefined8 *)FUN_14001cc68(400);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_FUN_14a5713d0;
  puVar1 = puVar6 + 2;
  memset(puVar1,0,0x180);
  FUN_1477cafba(puVar1);
  param_1[0x6f] = puVar1;
  param_1[0x70] = puVar6;
  puVar6 = (undefined8 *)FUN_14001cc68(400);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_FUN_14a5713d0;
  puVar1 = puVar6 + 2;
  memset(puVar1,0,0x180);
  FUN_1477cafba(puVar1);
  param_1[0x71] = puVar1;
  param_1[0x72] = puVar6;
  puVar6 = (undefined8 *)FUN_14001cc68(400);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_FUN_14a5713d0;
  puVar1 = puVar6 + 2;
  memset(puVar1,0,0x180);
  FUN_1477cafba(puVar1);
  param_1[0x73] = puVar1;
  param_1[0x74] = puVar6;
  puVar6 = (undefined8 *)FUN_14001cc68(400);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_FUN_14a5713d0;
  puVar1 = puVar6 + 2;
  memset(puVar1,0,0x180);
  FUN_1477cafba(puVar1);
  param_1[0x75] = puVar1;
  param_1[0x76] = puVar6;
  param_1[0x7c] = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x7a] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x7b] = uVar2;
  uVar2 = DAT_14c8463e8;
  param_1[0x80] = DAT_14c8463e0;
  param_1[0x81] = uVar2;
  uVar2 = DAT_14c8463d8;
  param_1[0x7e] = DAT_14c8463d0;
  param_1[0x7f] = uVar2;
  param_1[0x84] = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x82] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x83] = uVar2;
  param_1[0x87] = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x85] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x86] = uVar2;
  uVar2 = DAT_14c8463e8;
  param_1[0x8a] = DAT_14c8463e0;
  param_1[0x8b] = uVar2;
  uVar2 = DAT_14c8463d8;
  param_1[0x88] = DAT_14c8463d0;
  param_1[0x89] = uVar2;
  uVar2 = DAT_14c8463e8;
  param_1[0x8e] = DAT_14c8463e0;
  param_1[0x8f] = uVar2;
  uVar2 = DAT_14c8463d8;
  param_1[0x8c] = DAT_14c8463d0;
  param_1[0x8d] = uVar2;
  param_1[0x92] = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x90] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x91] = uVar2;
  param_1[0x95] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x93) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x49c) = uVar3;
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = uVar5;
  param_1[0x98] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d13d4 FUN_1477d13d4 body=48 status=ok
// SIG undefined FUN_1477d13d4(void)

void FUN_1477d13d4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1477d1404 FUN_1477d1404 body=38 status=ok
// SIG undefined FUN_1477d1404(void)

undefined8 FUN_1477d1404(undefined8 param_1,int param_2)

{
  FUN_140187f4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477d1438 FUN_1477d1438 body=77 status=ok
// SIG undefined FUN_1477d1438(void)

void FUN_1477d1438(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  
  uVar3 = *param_1;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 1);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)(param_1 + 2));
  FUN_14334e584(uVar3,uVar4 & 0xffffffff,uVar2,uVar1);
  FUN_14334ef88(uVar3,uVar4 & 0xffffffff,uVar2,uVar1);
  FUN_14334ff96(uVar3,uVar4 & 0xffffffff,uVar2,uVar1);
  return;
}



// FUNCTION 1477d1486 FUN_1477d1486 body=132 status=ok
// SIG undefined FUN_1477d1486(void)

void FUN_1477d1486(longlong param_1,int param_2)

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



// FUNCTION 1477d150c FUN_1477d150c body=118 status=ok
// SIG undefined FUN_1477d150c(void)

void FUN_1477d150c(longlong *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = *param_2;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)(uVar1 * 0x40 + param_2[1] + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1)
                    & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x20;
        if ((*(uint *)(lVar3 + lVar5) == uVar1) && (*(uint *)(lVar3 + 4 + lVar5) == param_2[1])) {
          FUN_1477d1582();
          return;
        }
        iVar2 = *(int *)(lVar5 + lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1477d1582 FUN_1477d1582 body=90 status=ok
// SIG undefined FUN_1477d1582(void)

void FUN_1477d1582(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1477d15dc();
  return;
}



// FUNCTION 1477d15dc FUN_1477d15dc body=78 status=ok
// SIG undefined FUN_1477d15dc(void)

void FUN_1477d15dc(longlong *param_1,int param_2)

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
  FUN_1477d162a(param_1,param_2);
  return;
}



// FUNCTION 1477d162a FUN_1477d162a body=114 status=ok
// SIG undefined FUN_1477d162a(void)

void FUN_1477d162a(longlong *param_1,int param_2)

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



// FUNCTION 1477d169c FUN_1477d169c body=132 status=ok
// SIG undefined FUN_1477d169c(void)

void FUN_1477d169c(longlong param_1,int param_2)

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



// FUNCTION 1477d1722 FUN_1477d1722 body=24 status=ok
// SIG undefined FUN_1477d1722(void)

void FUN_1477d1722(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477d1736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1477d173a FUN_1477d173a body=29 status=ok
// SIG undefined FUN_1477d173a(void)

undefined8 FUN_1477d173a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477d1758 FUN_1477d1758 body=132 status=ok
// SIG undefined FUN_1477d1758(void)

void FUN_1477d1758(longlong param_1,int param_2)

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



// FUNCTION 1477d17de FUN_1477d17de body=48 status=ok
// SIG undefined FUN_1477d17de(void)

void FUN_1477d17de(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1477d180e FUN_1477d180e body=48 status=ok
// SIG undefined FUN_1477d180e(void)

void FUN_1477d180e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1477d183e FUN_1477d183e body=41 status=ok
// SIG undefined FUN_1477d183e(void)

void FUN_1477d183e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_1477d1886(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1477d1868 FUN_1477d1868 body=29 status=ok
// SIG undefined FUN_1477d1868(void)

undefined8 FUN_1477d1868(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477d1886 FUN_1477d1886 body=111 status=ok
// SIG undefined FUN_1477d1886(void)

void FUN_1477d1886(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1477d18f6(param_1 + 0x22);
  FUN_1459d2d3c(param_1 + 0xd);
  lVar1 = 0x40;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x20);
  lVar1 = 0x20;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477d18f6 FUN_1477d18f6 body=90 status=ok
// SIG undefined FUN_1477d18f6(void)

void FUN_1477d18f6(longlong *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  FUN_1477d1950(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  FUN_1477d1950(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477d1950 FUN_1477d1950 body=38 status=ok
// SIG undefined FUN_1477d1950(void)

void FUN_1477d1950(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145be9032(param_1);
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 1477d1976 FUN_1477d1976 body=98 status=ok
// SIG undefined FUN_1477d1976(void)

void FUN_1477d1976(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477d19d8 FUN_1477d19d8 body=45 status=ok
// SIG undefined FUN_1477d19d8(void)

void FUN_1477d19d8(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1477d1a06 FUN_1477d1a06 body=118 status=ok
// SIG undefined FUN_1477d1a06(void)

undefined8 * FUN_1477d1a06(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    param_1[1] = param_2[1];
    param_2[1] = 0;
    plVar2 = (longlong *)param_2[2];
    plVar3 = (longlong *)param_1[2];
    if (plVar2 != plVar3) {
      param_2[2] = 0;
      param_1[2] = plVar2;
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
    }
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 1477d1a7c FUN_1477d1a7c body=152 status=ok
// SIG undefined FUN_1477d1a7c(void)

void FUN_1477d1a7c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x60);
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
  FUN_1477c9821(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1477c9821(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x0001477d1b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477d1b14 FUN_1477d1b14 body=80 status=ok
// SIG undefined FUN_1477d1b14(void)

longlong * FUN_1477d1b14(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1477cb5a3(*param_1,(int)param_1[1]);
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



// FUNCTION 1477d1b64 FUN_1477d1b64 body=95 status=ok
// SIG undefined FUN_1477d1b64(void)

undefined8 * FUN_1477d1b64(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1477cdc92(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477d211c(param_1,iVar1);
      FUN_1477d217e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477d1bc4 FUN_1477d1bc4 body=132 status=ok
// SIG undefined FUN_1477d1bc4(void)

void FUN_1477d1bc4(longlong param_1,int param_2)

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



// FUNCTION 1477d1c4a FUN_1477d1c4a body=340 status=ok
// SIG undefined FUN_1477d1c4a(void)

undefined4 * FUN_1477d1c4a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1477d1da0(param_1,local_40);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_38 = uVar6;
  local_38[1] = *puVar1;
  uVar2 = puVar1[1];
  local_38[2] = uVar2;
  if (uVar2 == 0) {
    uVar5 = (uint)(uVar6 >> 0x20);
  }
  else {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar6 = (ulonglong)(uint)*local_38;
    uVar5 = *(uint *)((longlong)local_38 + 4);
  }
  *(uint *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar9 = (uint)uVar6;
  uVar9 = (uVar9 >> 2) + uVar9 * 0x40 + uVar5 + 0x9e3779b9 ^ uVar9;
  cVar4 = FUN_1477d1e86(param_1,uVar9,local_38,&local_44);
  uVar3 = local_44;
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
      *(uint *)((longlong)local_38 + 0x1c) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(uint *)(local_38 + 3) =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1477d1f4e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d1da0 FUN_1477d1da0 body=229 status=ok
// SIG undefined FUN_1477d1da0(void)

int * FUN_1477d1da0(longlong *param_1,int *param_2)

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



// FUNCTION 1477d1e86 FUN_1477d1e86 body=199 status=ok
// SIG undefined FUN_1477d1e86(void)

undefined8 FUN_1477d1e86(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      lVar4 = *param_1;
      do {
        lVar11 = (longlong)iVar10 * 0x20;
        piVar3 = (int *)(lVar4 + lVar11);
        if ((*(int *)(lVar4 + lVar11) == *param_3) && (*(int *)(lVar4 + 4 + lVar11) == param_3[1]))
        {
          plVar9 = *(longlong **)(piVar3 + 4);
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
          iVar5 = *param_3;
          iVar6 = param_3[1];
          iVar7 = param_3[2];
          iVar8 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar5;
          piVar3[1] = iVar6;
          piVar3[2] = iVar7;
          piVar3[3] = iVar8;
          FUN_1477d162a(param_1,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = piVar3[6];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477d1f4e FUN_1477d1f4e body=461 status=ok
// SIG undefined FUN_1477d1f4e(void)

void FUN_1477d1f4e(longlong *param_1)

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
        uVar2 = *(uint *)(lVar3 + lVar7);
        uVar10 = (longlong)
                 (int)(uVar2 * 0x40 + *(int *)(lVar3 + 4 + lVar7) + (uVar2 >> 2) + 0x9e3779b9 ^
                      uVar2) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1477d211c FUN_1477d211c body=98 status=ok
// SIG undefined FUN_1477d211c(void)

void FUN_1477d211c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477d217e FUN_1477d217e body=45 status=ok
// SIG undefined FUN_1477d217e(void)

void FUN_1477d217e(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1477d21ac FUN_1477d21ac body=132 status=ok
// SIG undefined FUN_1477d21ac(void)

void FUN_1477d21ac(longlong param_1,int param_2)

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



// FUNCTION 1477d2232 FUN_1477d2232 body=340 status=ok
// SIG undefined FUN_1477d2232(void)

undefined4 * FUN_1477d2232(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1477d1da0(param_1,local_40);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_38 = uVar6;
  local_38[1] = *puVar1;
  uVar2 = puVar1[1];
  local_38[2] = uVar2;
  if (uVar2 == 0) {
    uVar5 = (uint)(uVar6 >> 0x20);
  }
  else {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar6 = (ulonglong)(uint)*local_38;
    uVar5 = *(uint *)((longlong)local_38 + 4);
  }
  *(uint *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar9 = (uint)uVar6;
  uVar9 = (uVar9 >> 2) + uVar9 * 0x40 + uVar5 + 0x9e3779b9 ^ uVar9;
  cVar4 = FUN_1477d1e86(param_1,uVar9,local_38,&local_44);
  uVar3 = local_44;
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
      *(uint *)((longlong)local_38 + 0x1c) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(uint *)(local_38 + 3) =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1477d1f4e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d2388 FUN_1477d2388 body=225 status=ok
// SIG undefined FUN_1477d2388(void)

void FUN_1477d2388(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = *(int *)(param_1 + 1);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    piVar2 = (int *)*param_1;
    iVar5 = 0;
    bVar10 = ((int *)*param_2)[1] == piVar2[1] && *piVar2 == *(int *)*param_2;
    iVar7 = 0;
    do {
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (((int *)*param_2)[1] == piVar2[lVar6 * 2 + 1] &&
                         piVar2[lVar6 * 2] == *(int *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(piVar2 + (longlong)iVar5 * 2,piVar2 + (longlong)iVar7 * 2,
                  (longlong)(iVar9 - iVar7) << 3);
        }
        iVar5 = iVar5 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 1477d246a FUN_1477d246a body=118 status=ok
// SIG undefined FUN_1477d246a(void)

void FUN_1477d246a(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  iVar5 = ~param_2 + iVar4;
  if (iVar5 != 0) {
    iVar6 = 1;
    if (iVar5 < 1) {
      iVar6 = iVar5;
    }
    memmove((void *)(lVar2 + (longlong)(int)param_2 * 0x28),
            (void *)(lVar2 + (longlong)(iVar4 - iVar6) * 0x28),(longlong)iVar6 * 0x28);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 1477d24e0 FUN_1477d24e0 body=95 status=ok
// SIG undefined FUN_1477d24e0(void)

undefined8 * FUN_1477d24e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1477cb5a3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477d1976(param_1,iVar1);
      FUN_1477d19d8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477d2540 FUN_1477d2540 body=147 status=ok
// SIG undefined FUN_1477d2540(void)

void FUN_1477d2540(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477d25d4 FUN_1477d25d4 body=126 status=ok
// SIG undefined FUN_1477d25d4(void)

longlong * FUN_1477d25d4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((char)param_1[0xc] == '\x01') && (*param_1 != 0)) {
    plVar4 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  lVar1 = param_2[4];
  lVar2 = param_2[5];
  lVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar3;
  param_1[4] = lVar1;
  param_1[5] = lVar2;
  if (*param_1 != 0) {
    *param_2 = 0;
  }
  param_1[10] = param_2[10];
  lVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = lVar1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return param_1;
}



// FUNCTION 1477d2652 FUN_1477d2652 body=136 status=ok
// SIG undefined FUN_1477d2652(void)

void FUN_1477d2652(longlong *param_1,uint param_2)

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



// FUNCTION 1477d26da FUN_1477d26da body=132 status=ok
// SIG undefined FUN_1477d26da(void)

void FUN_1477d26da(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477d2760 FUN_1477d2760 body=404 status=ok
// SIG undefined FUN_1477d2760(void)

undefined8 *
FUN_1477d2760(undefined8 *param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = param_3 * param_4 * 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(int *)(param_1 + 0x44) = iVar5;
  *(undefined1 *)((longlong)param_1 + 0x224) = 0;
  memset(param_1 + 4,0,(longlong)iVar5);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(int *)(param_1 + 0x4a) = param_3;
  *(int *)((longlong)param_1 + 0x254) = param_5;
  *(int *)(param_1 + 0x4b) = param_4;
  param_1[0x4c] = param_2;
  *(undefined2 *)(param_1 + 0x4d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x26a) = 0;
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  uVar1 = DAT_14c8463d8;
  param_1[0x50] = DAT_14c8463d0;
  param_1[0x51] = uVar1;
  uVar4 = DAT_14c8463e8._4_4_;
  uVar3 = (undefined4)DAT_14c8463e8;
  uVar2 = DAT_14c8463e0._4_4_;
  *(undefined4 *)(param_1 + 0x52) = (undefined4)DAT_14c8463e0;
  *(undefined4 *)((longlong)param_1 + 0x294) = uVar2;
  *(undefined4 *)(param_1 + 0x53) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x29c) = uVar4;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  uVar7 = param_5 * param_4;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(uint *)(param_1 + 0x47) = uVar7;
  iVar6 = 0;
  if (uVar7 != 0) {
    FUN_145ca0cd4(param_1 + 0x46,0);
    iVar5 = *(int *)((longlong)param_1 + 0x24c);
    if (iVar5 < 0) {
      *(undefined4 *)(param_1 + 0x49) = 0;
      FUN_1470345fa(param_1 + 0x48,0);
      iVar6 = *(int *)(param_1 + 0x49);
      iVar5 = *(int *)((longlong)param_1 + 0x24c);
    }
  }
  *(uint *)(param_1 + 0x49) = iVar6 + uVar7;
  if ((uint)(iVar5 - iVar6) < uVar7) {
    FUN_145ca0cd4(param_1 + 0x48,iVar6);
  }
  return param_1;
}



// FUNCTION 1477d28f4 FUN_1477d28f4 body=151 status=ok
// SIG undefined FUN_1477d28f4(void)

void FUN_1477d28f4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[100];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x61) = 0;
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_1477e7956(param_1 + 0x58);
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477d298c FUN_1477d298c body=1374 status=ok
// SIG undefined FUN_1477d298c(void)

void FUN_1477d298c(longlong param_1,int *param_2)

{
  undefined8 **ppuVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 **ppuVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(char *)(param_1 + 0x269) = (char)param_2[6];
  *(undefined1 *)(param_1 + 0x26a) = *(undefined1 *)((longlong)param_2 + 0x19);
  iVar7 = param_2[1];
  *(int *)(param_1 + 600) = iVar7;
  iVar12 = *param_2;
  *(int *)(param_1 + 0x250) = iVar12;
  iVar7 = iVar7 * iVar12 * 4;
  *(int *)(param_1 + 0x220) = iVar7;
  iVar12 = 0;
  memset((void *)(param_1 + 0x20),0,(longlong)iVar7);
  memset((void *)(param_1 + 0x120),0,(longlong)*(int *)(param_1 + 0x220));
  *(undefined1 *)(param_1 + 0x224) = 0;
  iVar7 = *(int *)(param_1 + 0x23c);
  if (iVar7 < 0) {
    *(undefined4 *)(param_1 + 0x238) = 0;
    FUN_1470345fa(param_1 + 0x230,0);
    iVar12 = *(int *)(param_1 + 0x238);
    iVar7 = *(int *)(param_1 + 0x23c);
  }
  uVar11 = *(int *)(param_1 + 600) * *(int *)(param_1 + 0x254);
  *(uint *)(param_1 + 0x238) = uVar11 + iVar12;
  if ((uint)(iVar7 - iVar12) < uVar11) {
    FUN_145ca0cd4(param_1 + 0x230);
  }
  iVar7 = *(int *)(param_1 + 0x24c);
  iVar12 = 0;
  if (iVar7 < 0) {
    *(undefined4 *)(param_1 + 0x248) = 0;
    FUN_1470345fa(param_1 + 0x240,0);
    iVar12 = *(int *)(param_1 + 0x248);
    iVar7 = *(int *)(param_1 + 0x24c);
  }
  uVar11 = *(int *)(param_1 + 600) * *(int *)(param_1 + 0x254);
  *(uint *)(param_1 + 0x248) = uVar11 + iVar12;
  if ((uint)(iVar7 - iVar12) < uVar11) {
    FUN_145ca0cd4(param_1 + 0x240);
  }
  lVar13 = param_1 + 0x2c0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x2c8) != *(int *)(param_1 + 0x2f4)) {
    FUN_1477e8fd4(lVar13);
    FUN_1477e9118(lVar13);
  }
  plVar2 = (longlong *)(param_1 + 800);
  puVar3 = *(undefined8 **)(param_1 + 800);
  if (puVar3 != (undefined8 *)0x0) {
    *plVar2 = 0;
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined1 *)(param_1 + 0x268) = 1;
  if (*(char *)((longlong)param_2 + 0x1a) == '\x01') {
    FUN_1477b2577(&local_70,*(undefined8 *)(param_1 + 0x260));
    if (plVar2 != &local_70) {
      puVar3 = (undefined8 *)*plVar2;
      *plVar2 = (longlong)local_70;
      local_70 = (undefined8 *)0x0;
      if (puVar3 == (undefined8 *)0x0) goto LAB_1477d2b21;
      (**(code **)*puVar3)(puVar3,1);
    }
    if (local_70 != (undefined8 *)0x0) {
      (**(code **)*local_70)(local_70,1);
    }
  }
LAB_1477d2b21:
  if ((longlong)param_2[4] != 0) {
    lVar4 = *(longlong *)(param_2 + 2);
    local_a0 = (longlong)param_2[4] << 4;
    lVar14 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(lVar4 + lVar14) + 0x160);
      plVar5 = *(longlong **)(*(longlong *)(lVar4 + lVar14) + 0x1c0);
      if (plVar2 == (longlong *)0x0) {
        FUN_1470459da(local_54);
      }
      else {
        (**(code **)(*plVar2 + 8))(plVar2,local_54);
      }
      local_4c = (**(code **)(*plVar5 + 8))(plVar5);
      uVar8 = FUN_144a78877(local_4c,local_50);
      ppuVar9 = (undefined8 **)FUN_1477e9234(lVar13,uVar8,local_54);
      plVar2 = *(longlong **)(*(longlong *)(lVar4 + lVar14) + 0x160);
      local_60 = *(longlong *)(*(longlong *)(lVar4 + lVar14) + 0xa8);
      if (local_60 == 0) {
        local_64 = 0;
        local_68 = 0;
      }
      else {
        local_64 = *(undefined4 *)(local_60 + 0x7c);
        local_68 = (undefined4)(longlong)(float)*(int *)(local_60 + 0x74);
      }
      local_70 = (undefined8 *)CONCAT44(*(undefined4 *)(param_1 + 0x250),1);
      plVar5 = *(longlong **)(*(longlong *)(lVar4 + lVar14) + 0x1c0);
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_78);
      ppuVar1 = ppuVar9 + 2;
      if (ppuVar1 == &local_78) {
LAB_1477d2c37:
        if (local_78 != (undefined8 *)0x0) {
          (**(code **)*local_78)(local_78,1);
        }
      }
      else {
        puVar3 = *ppuVar1;
        *ppuVar1 = local_78;
        local_78 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
          goto LAB_1477d2c37;
        }
      }
      if (*(char *)((longlong)param_2 + 0x1a) == '\x01') {
        (**(code **)(*plVar2 + 8))(plVar2,&local_78);
        FUN_1477b24ff(&local_80);
        if (local_78 == local_80) {
          *(undefined1 *)(ppuVar9 + 4) = 1;
        }
        else {
          uVar10 = FUN_1477b262d();
          local_b0 = lVar13;
          FUN_1477b24ff(&local_88);
          lVar13 = local_b0;
          cVar6 = (**(code **)(*plVar2 + 0x40))(plVar2,local_88,uVar10);
          if (cVar6 != '\0') {
            local_a8 = ppuVar9[2];
            (**(code **)(*plVar2 + 8))(plVar2,&local_90);
            uVar10 = FUN_1477b262d();
            FUN_1477b24ff(&local_98);
            local_b8 = &local_70;
            local_c0 = local_a8;
            local_c8 = local_90;
            (**(code **)(*plVar2 + 0x20))(plVar2,&local_78,local_98,uVar10);
            ppuVar1 = ppuVar9 + 1;
            if (ppuVar1 != &local_78) {
              puVar3 = *ppuVar1;
              *ppuVar1 = local_78;
              local_78 = (undefined8 *)0x0;
              lVar13 = local_b0;
              if (puVar3 == (undefined8 *)0x0) goto LAB_1477d2c80;
              (**(code **)*puVar3)(puVar3,1);
            }
            lVar13 = local_b0;
            if (local_78 != (undefined8 *)0x0) {
              (**(code **)*local_78)(local_78,1);
              lVar13 = local_b0;
            }
          }
        }
      }
      else {
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_78,&local_70,ppuVar9[2]);
        if (ppuVar9 != &local_78) {
          puVar3 = *ppuVar9;
          *ppuVar9 = local_78;
          local_78 = (undefined8 *)0x0;
          if (puVar3 == (undefined8 *)0x0) goto LAB_1477d2c80;
          (**(code **)*puVar3)(puVar3,1);
        }
        if (local_78 != (undefined8 *)0x0) {
          (**(code **)*local_78)(local_78,1);
        }
      }
LAB_1477d2c80:
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_78);
      ppuVar9 = ppuVar9 + 3;
      if (ppuVar9 == &local_78) {
LAB_1477d2cc3:
        if (local_78 != (undefined8 *)0x0) {
          (**(code **)*local_78)(local_78,1);
        }
      }
      else {
        puVar3 = *ppuVar9;
        *ppuVar9 = local_78;
        local_78 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
          goto LAB_1477d2cc3;
        }
      }
      lVar14 = lVar14 + 0x10;
    } while (local_a0 != lVar14);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477d2eec FUN_1477d2eec body=8 status=ok
// SIG undefined FUN_1477d2eec(void)

undefined8 FUN_1477d2eec(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



// FUNCTION 1477d2ef4 FUN_1477d2ef4 body=273 status=ok
// SIG undefined FUN_1477d2ef4(void)

void FUN_1477d2ef4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 600) = param_2;
  iVar2 = param_2 * *(int *)(param_1 + 0x250) * 4;
  *(int *)(param_1 + 0x220) = iVar2;
  iVar3 = 0;
  memset((void *)(param_1 + 0x20),0,(longlong)iVar2);
  memset((void *)(param_1 + 0x120),0,(longlong)*(int *)(param_1 + 0x220));
  *(undefined1 *)(param_1 + 0x224) = 0;
  iVar2 = *(int *)(param_1 + 0x23c);
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x238) = 0;
    FUN_1470345fa(param_1 + 0x230,0);
    iVar3 = *(int *)(param_1 + 0x238);
    iVar2 = *(int *)(param_1 + 0x23c);
  }
  uVar1 = *(int *)(param_1 + 600) * *(int *)(param_1 + 0x254);
  *(uint *)(param_1 + 0x238) = uVar1 + iVar3;
  if ((uint)(iVar2 - iVar3) < uVar1) {
    FUN_145ca0cd4(param_1 + 0x230);
  }
  iVar2 = *(int *)(param_1 + 0x24c);
  iVar3 = 0;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x248) = 0;
    FUN_1470345fa(param_1 + 0x240,0);
    iVar3 = *(int *)(param_1 + 0x248);
    iVar2 = *(int *)(param_1 + 0x24c);
  }
  uVar1 = *(int *)(param_1 + 600) * *(int *)(param_1 + 0x254);
  *(uint *)(param_1 + 0x248) = uVar1 + iVar3;
  if (uVar1 <= (uint)(iVar2 - iVar3)) {
    return;
  }
  FUN_145ca0cd4(param_1 + 0x240);
  return;
}



// FUNCTION 1477d3006 FUN_1477d3006 body=342 status=ok
// SIG undefined FUN_1477d3006(void)

ulonglong FUN_1477d3006(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  void **local_58;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_1 + 0x220);
  uVar3 = (int)uVar1 >> 2;
  if (*(uint *)(param_2 + 1) == uVar3) {
    pvVar2 = (void *)*param_2;
    memcpy((void *)(param_1 + 0x120),pvVar2,(longlong)(int)uVar1);
    if (*(char *)(param_1 + 0x224) == '\0') {
      memcpy((void *)(param_1 + 0x20),pvVar2,(longlong)*(int *)(param_1 + 0x220));
      *(undefined1 *)(param_1 + 0x224) = 1;
    }
    uVar4 = 0;
  }
  else {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),*(char *)(param_1 + 0x269));
    if (*(char *)(param_1 + 0x269) == '\x01') {
      uStack_40 = (ulonglong)uVar3;
      if (3 < uVar1) {
        FUN_145ca0cd4(&local_48);
      }
      memset(local_48,0,(longlong)(int)uVar3 << 2);
    }
    else {
      local_58 = &local_48;
      FUN_143343e04(*(undefined1 *)(param_1 + 0x26a),*(uint *)(param_1 + 0x250),
                    (ulonglong)uVar3 / (ulonglong)*(uint *)(param_1 + 0x250),param_3);
    }
    pvVar2 = local_48;
    memcpy((void *)(param_1 + 0x120),local_48,(longlong)*(int *)(param_1 + 0x220));
    if (*(char *)(param_1 + 0x224) == '\0') {
      memcpy((void *)(param_1 + 0x20),pvVar2,(longlong)*(int *)(param_1 + 0x220));
      *(undefined1 *)(param_1 + 0x224) = 1;
    }
    if (pvVar2 != (void *)0x0) {
      FUN_1400020a8(pvVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1477d315e FUN_1477d315e body=154 status=ok
// SIG undefined FUN_1477d315e(void)

void FUN_1477d315e(longlong param_1,longlong param_2)

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
  
  if ((*(longlong *)(param_1 + 0x18) != 0) || (*(longlong *)(param_1 + 0x10) != 0)) {
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    uVar10 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x298) = uVar10;
    *(undefined8 *)(param_1 + 0x280) = uVar8;
    *(undefined8 *)(param_1 + 0x288) = uVar9;
    uVar1 = *(undefined4 *)(param_2 + 0x74);
    uVar2 = *(undefined4 *)(param_2 + 0x78);
    uVar3 = *(undefined4 *)(param_2 + 0x7c);
    uVar4 = *(undefined4 *)(param_2 + 0x80);
    uVar5 = *(undefined4 *)(param_2 + 0x84);
    uVar6 = *(undefined4 *)(param_2 + 0x88);
    uVar7 = *(undefined4 *)(param_2 + 0x8c);
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)(param_1 + 0x2a4) = uVar1;
    *(undefined4 *)(param_1 + 0x2a8) = uVar2;
    *(undefined4 *)(param_1 + 0x2ac) = uVar3;
    *(undefined4 *)(param_1 + 0x2b0) = uVar4;
    *(undefined4 *)(param_1 + 0x2b4) = uVar5;
    *(undefined4 *)(param_1 + 0x2b8) = uVar6;
    *(undefined4 *)(param_1 + 700) = uVar7;
    if ((*(char *)(param_1 + 0x269) == '\x01') && (*(char *)(param_1 + 0x268) == '\0')) {
      FUN_1477d31f8(param_1);
    }
    else {
      FUN_1477d3254(param_1);
      *(undefined1 *)(param_1 + 0x268) = 0;
    }
    if (*(int *)(param_1 + 0x2c8) != *(int *)(param_1 + 0x2f4)) {
      FUN_1477d329a(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1477d31f8 FUN_1477d31f8 body=91 status=ok
// SIG undefined FUN_1477d31f8(void)

void FUN_1477d31f8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1477d35d0(param_1,*(longlong *)(param_1 + 0x10),param_1 + 0x230);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1477d35d0(param_1,*(longlong *)(param_1 + 0x18),param_1 + 0x240);
  }
  memcpy((void *)(param_1 + 0x20),(void *)(param_1 + 0x120),(longlong)*(int *)(param_1 + 0x220));
  return;
}



// FUNCTION 1477d3254 FUN_1477d3254 body=69 status=ok
// SIG undefined FUN_1477d3254(void)

void FUN_1477d3254(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1477d3a06(param_1,*(longlong *)(param_1 + 0x10),param_1 + 0x230);
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1477d3a06(param_1,*(longlong *)(param_1 + 0x18),param_1 + 0x240);
  return;
}



// FUNCTION 1477d329a FUN_1477d329a body=820 status=ok
// SIG undefined FUN_1477d329a(void)

void FUN_1477d329a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x250);
  uVar10 = *(undefined4 *)(param_2 + 0x74);
  uVar11 = *(undefined4 *)(param_2 + 0x78);
  uVar12 = *(undefined4 *)(param_2 + 0x7c);
  uVar13 = *(undefined4 *)(param_2 + 0x80);
  uVar4 = *(undefined4 *)(param_2 + 0x84);
  uVar5 = *(undefined4 *)(param_2 + 0x88);
  uVar6 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x284) = uVar10;
  *(undefined4 *)(param_1 + 0x288) = uVar11;
  *(undefined4 *)(param_1 + 0x28c) = uVar12;
  *(undefined4 *)(param_1 + 0x290) = uVar13;
  *(undefined4 *)(param_1 + 0x294) = uVar4;
  *(undefined4 *)(param_1 + 0x298) = uVar5;
  *(undefined4 *)(param_1 + 0x29c) = uVar6;
  lVar1 = param_1 + 0x310;
  *(undefined4 *)(param_1 + 0x318) = 0;
  if (*(int *)(param_1 + 0x31c) < 0) {
    FUN_1477cce96(lVar1,0);
  }
  if (*(char *)(param_1 + 0x269) == '\x01') {
    if (*(int *)(param_1 + 0x250) == 2) {
      uStack_78 = 0x3f80000000000000;
      local_80 = (longlong *)0x0;
      FUN_14335950c(param_2 + 0xb0,(longlong)&local_80 + 4);
      iVar9 = *(int *)(param_1 + 0x318);
      *(uint *)(param_1 + 0x318) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x31c) < iVar9 + 1U) {
        FUN_1477ccef6(lVar1,iVar9);
      }
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x310) + (longlong)iVar9 * 0x10);
      *puVar3 = (undefined4)local_80;
      puVar3[1] = local_80._4_4_;
      puVar3[2] = (undefined4)uStack_78;
      puVar3[3] = uStack_78._4_4_;
      local_58 = 0;
      uStack_54 = 0;
      uStack_50._0_4_ = 0;
      uStack_50._4_4_ = 0x3f800000;
      FUN_14335950c(param_2 + 200,&uStack_54,&uStack_50);
      iVar9 = *(int *)(param_1 + 0x318);
      *(uint *)(param_1 + 0x318) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x31c) < iVar9 + 1U) {
        FUN_1477ccef6(lVar1,iVar9);
      }
      lVar8 = *(longlong *)(param_1 + 0x310);
      uVar10 = local_58;
      uVar11 = uStack_54;
      uVar12 = (undefined4)uStack_50;
      uVar13 = uStack_50._4_4_;
    }
    else {
      if (*(int *)(param_1 + 0x250) != 1) goto LAB_1477d3453;
      uStack_78 = uStack_78 & 0xffffffff00000000;
      local_80 = (longlong *)0x2;
      FUN_14335950c(param_2 + 0x40,(longlong)&local_80 + 4,&uStack_78,(longlong)&uStack_78 + 4);
      uStack_78 = CONCAT44(*(undefined4 *)(param_2 + 0xe0),(undefined4)uStack_78);
      iVar9 = *(int *)(param_1 + 0x318);
      *(uint *)(param_1 + 0x318) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x31c) < iVar9 + 1U) {
        FUN_1477ccef6(lVar1,iVar9);
      }
      lVar8 = *(longlong *)(param_1 + 0x310);
      uVar10 = (undefined4)local_80;
      uVar11 = local_80._4_4_;
      uVar12 = (undefined4)uStack_78;
      uVar13 = uStack_78._4_4_;
    }
    puVar3 = (undefined4 *)(lVar8 + (longlong)iVar9 * 0x10);
    *puVar3 = uVar10;
    puVar3[1] = uVar11;
    puVar3[2] = uVar12;
    puVar3[3] = uVar13;
    *(longlong *)(param_1 + 0x278) = lVar1;
  }
LAB_1477d3453:
  if (*(int *)(param_1 + 0x318) == 0) {
    uVar7 = FUN_1477bb002(*(undefined8 *)(param_1 + 0x260),*(undefined4 *)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x278) = uVar7;
  }
  plVar2 = (longlong *)(param_1 + 0x2c0);
  lVar1 = param_1 + 0x2d0;
  local_58 = 0;
  uStack_54 = 1;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar1;
  if (*(int *)(param_1 + 0x2e8) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar9 = *(int *)(param_1 + 0x2e8);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  uStack_78 = CONCAT44(uStack_54,local_58);
  local_80 = plVar2;
  local_70 = uStack_50;
  if ((iStack_44 != iVar9) || (uStack_50 != lVar1)) {
    do {
      lVar8 = *local_80 + (longlong)iStack_64 * 0x40 + 0x10;
      if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1477d3dfa(param_1,lVar8);
      }
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_1477d3dfa(param_1,lVar8);
      }
      local_68 = local_68 & ~uStack_78._4_4_;
      FUN_1449c0562(&uStack_78);
      local_70 = local_70;
    } while (local_80 != plVar2 || (local_70 != lVar1 || iStack_64 != iVar9));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477d35d0 FUN_1477d35d0 body=791 status=ok
// SIG undefined FUN_1477d35d0(void)

void FUN_1477d35d0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  longlong local_b8;
  uint local_b0;
  float local_ac;
  undefined **local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  uVar4 = DAT_14c8463e8;
  uVar3 = DAT_14c8463e0;
  uVar2 = DAT_14c8463d8;
  uVar5 = DAT_14c8463d0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 800) == 0) {
    iVar1 = *(int *)(param_1 + 0x250);
    if (iVar1 == 2) {
      switch(*(undefined4 *)(param_1 + 600)) {
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      case 4:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      case 6:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      case 8:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      }
    }
    else {
      if (iVar1 != 1) {
        local_d8 = param_1 + 0x20;
        local_d0 = param_1 + 0x120;
        FUN_14702f2d7(iVar1,*(undefined4 *)(param_1 + 600),param_2,param_3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      }
      switch(*(undefined4 *)(param_1 + 600)) {
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      case 4:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      case 6:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      case 8:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      }
    }
  }
  else {
    local_a8 = &PTR_FUN_14a566450;
    local_a0 = 0;
    uStack_98 = 0;
    if (&local_a0 != param_2) {
      local_a0 = *param_2;
      *param_2 = 0;
      uStack_98 = param_2[1];
      param_2[1] = 0;
    }
    local_90 = *(undefined4 *)(param_1 + 0x250);
    local_58 = uVar3;
    uStack_50 = uVar4;
    local_68 = uVar5;
    uStack_60 = uVar2;
    local_88 = *(undefined8 *)(param_1 + 0x2a0);
    uStack_80 = *(undefined8 *)(param_1 + 0x2a8);
    local_78 = *(undefined8 *)(param_1 + 0x2b0);
    uStack_70 = *(undefined8 *)(param_1 + 0x2b8);
    *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 600);
    uVar5 = FUN_1477bb002(*(undefined8 *)(param_1 + 0x260));
    *(undefined8 *)(param_1 + 0x278) = uVar5;
    local_b0 = *(uint *)(param_2 + 1) / *(uint *)(param_1 + 0x250);
    local_ac = (float)*(int *)(*(longlong *)(param_1 + 0x260) + 0x74);
    local_c8 = param_3;
    local_c0 = &local_a8;
    local_b8 = param_1 + 0x270;
    (**(code **)(**(longlong **)(param_1 + 800) + 8))(*(longlong **)(param_1 + 800),&local_c0);
    if (&local_a0 == param_2) {
      local_a8 = &PTR_FUN_14a566450;
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_a0;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_98;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_98._4_4_;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d3a06 FUN_1477d3a06 body=750 status=ok
// SIG undefined FUN_1477d3a06(void)

void FUN_1477d3a06(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_c8;
  undefined ***local_c0;
  longlong local_b8;
  uint local_b0;
  float local_ac;
  undefined **local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  uVar4 = DAT_14c8463e8;
  uVar3 = DAT_14c8463e0;
  uVar2 = DAT_14c8463d8;
  uVar5 = DAT_14c8463d0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 800) == 0) {
    iVar1 = *(int *)(param_1 + 0x250);
    if (iVar1 == 2) {
      switch(*(undefined4 *)(param_1 + 600)) {
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      case 4:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      case 6:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      case 8:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      }
    }
    else {
      if (iVar1 != 1) {
        local_d8 = param_1 + 0x120;
        FUN_14702f221(iVar1,*(undefined4 *)(param_1 + 600),param_2,param_3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      }
      switch(*(undefined4 *)(param_1 + 600)) {
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      case 4:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      case 6:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      case 8:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
      }
    }
  }
  else {
    local_a8 = &PTR_FUN_14a566450;
    local_a0 = 0;
    uStack_98 = 0;
    if (&local_a0 != param_2) {
      local_a0 = *param_2;
      *param_2 = 0;
      uStack_98 = param_2[1];
      param_2[1] = 0;
    }
    local_90 = *(undefined4 *)(param_1 + 0x250);
    local_58 = uVar3;
    uStack_50 = uVar4;
    local_68 = uVar5;
    uStack_60 = uVar2;
    local_88 = *(undefined8 *)(param_1 + 0x2a0);
    uStack_80 = *(undefined8 *)(param_1 + 0x2a8);
    local_78 = *(undefined8 *)(param_1 + 0x2b0);
    uStack_70 = *(undefined8 *)(param_1 + 0x2b8);
    *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 600);
    uVar5 = FUN_1477bb002(*(undefined8 *)(param_1 + 0x260));
    *(undefined8 *)(param_1 + 0x278) = uVar5;
    local_b0 = *(uint *)(param_2 + 1) / *(uint *)(param_1 + 0x250);
    local_ac = (float)*(int *)(*(longlong *)(param_1 + 0x260) + 0x74);
    local_c8 = param_3;
    local_c0 = &local_a8;
    local_b8 = param_1 + 0x270;
    (**(code **)(**(longlong **)(param_1 + 800) + 8))(*(longlong **)(param_1 + 800),&local_c0);
    if (&local_a0 == param_2) {
      local_a8 = &PTR_FUN_14a566450;
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_a0;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_98;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_98._4_4_;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d3dfa FUN_1477d3dfa body=509 status=ok
// SIG undefined FUN_1477d3dfa(void)

void FUN_1477d3dfa(longlong param_1,longlong *param_2,undefined **param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined **local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*(longlong *)param_2[3] + 0x18))();
  uVar12 = DAT_14c8463e8;
  uVar11 = DAT_14c8463e0;
  uVar10 = DAT_14c8463d8;
  uVar13 = DAT_14c8463d0;
  plVar14 = (longlong *)param_2[1];
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)*param_2;
    if (plVar14 == (longlong *)0x0) {
      if ((char)param_2[4] == '\x01') {
        lVar1 = param_2[3];
        FUN_14702fcb4(lVar1 + 8,param_3);
        *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(param_1 + 0x250);
        *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(lVar1 + 0x30);
        *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(lVar1 + 0x38);
        *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(lVar1 + 0x20);
        *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar1 + 0x28);
        uVar3 = *(undefined4 *)(param_1 + 0x2a4);
        uVar4 = *(undefined4 *)(param_1 + 0x2a8);
        uVar5 = *(undefined4 *)(param_1 + 0x2ac);
        uVar6 = *(undefined4 *)(param_1 + 0x2b0);
        uVar7 = *(undefined4 *)(param_1 + 0x2b4);
        uVar8 = *(undefined4 *)(param_1 + 0x2b8);
        uVar9 = *(undefined4 *)(param_1 + 700);
        *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_1 + 0x2a0);
        *(undefined4 *)(lVar1 + 0x24) = uVar3;
        *(undefined4 *)(lVar1 + 0x28) = uVar4;
        *(undefined4 *)(lVar1 + 0x2c) = uVar5;
        *(undefined4 *)(lVar1 + 0x30) = uVar6;
        *(undefined4 *)(lVar1 + 0x34) = uVar7;
        *(undefined4 *)(lVar1 + 0x38) = uVar8;
        *(undefined4 *)(lVar1 + 0x3c) = uVar9;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
      }
    }
    else {
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,*(undefined4 *)(param_1 + 0x250));
      uStack_98 = (undefined *)param_2[2];
      local_90 = param_1 + 0x270;
      local_a8 = param_3;
      (**(code **)(*plVar14 + 8))(plVar14,&local_a8,param_2[3]);
    }
  }
  else {
    local_a8 = &PTR_FUN_14a566450;
    local_a0 = (undefined *)0x0;
    uStack_98 = (undefined *)0x0;
    if (&local_a0 != param_3) {
      local_a0 = *param_3;
      *param_3 = (undefined *)0x0;
      uStack_98 = param_3[1];
      param_3[1] = (undefined *)0x0;
      plVar14 = (longlong *)param_2[1];
    }
    local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(param_1 + 0x250));
    local_58 = uVar11;
    uStack_50 = uVar12;
    local_68 = uVar13;
    uStack_60 = uVar10;
    local_88 = *(undefined8 *)(param_1 + 0x2a0);
    uStack_80 = *(undefined8 *)(param_1 + 0x2a8);
    local_78 = *(undefined8 *)(param_1 + 0x2b0);
    uStack_70 = *(undefined8 *)(param_1 + 0x2b8);
    lVar1 = param_2[2];
    lVar2 = param_2[3];
    uVar13 = FUN_1477b262d();
    local_b8 = lVar1;
    (**(code **)(*plVar14 + 8))(plVar14,&local_a8,uVar13,lVar2);
    if (&local_a0 == param_3) {
      local_a8 = &PTR_FUN_14a566450;
      if (local_a0 != (undefined *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != (undefined *)0x0) {
        FUN_1400020a8();
      }
      *param_3 = local_a0;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_98;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_98._4_4_;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d3ffe FUN_1477d3ffe body=44 status=ok
// SIG undefined FUN_1477d3ffe(void)

void FUN_1477d3ffe(longlong param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)(param_3 == 0) * 0x10;
  FUN_1421c4d00(*(undefined8 *)(lVar1 + 0x230 + param_1),*param_4,
                *(undefined4 *)(lVar1 + 0x238 + param_1),param_2);
  return;
}



// FUNCTION 1477d402a FUN_1477d402a body=128 status=ok
// SIG undefined FUN_1477d402a(void)

void FUN_1477d402a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1470345fa(param_1,0);
  }
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_145ca0cd4(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 4 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 2);
    return;
  }
  return;
}



// FUNCTION 1477d40aa FUN_1477d40aa body=256 status=ok
// SIG undefined FUN_1477d40aa(void)

undefined8 FUN_1477d40aa(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  uVar1 = FUN_144a78877((int)param_2[1],*(undefined4 *)((longlong)param_2 + 4));
  if (*(int *)(param_1 + 0x2c8) != *(int *)(param_1 + 0x2f4)) {
    lVar2 = *(longlong *)(param_1 + 0x300);
    if (*(longlong *)(param_1 + 0x300) == 0) {
      lVar2 = param_1 + 0x2f8;
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x308) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x2c0);
      while ((lVar5 = (longlong)iVar4 * 0x40, *(longlong *)(lVar2 + lVar5) != *param_2 ||
             (*(int *)(lVar2 + 8 + lVar5) != (int)param_2[1]))) {
        iVar4 = *(int *)(lVar5 + lVar2 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      uVar1 = FUN_144a78877();
      if (*(int *)(param_1 + 0x2c8) != *(int *)(param_1 + 0x2f4)) {
        lVar2 = param_1 + 0x2f8;
        if (*(longlong *)(param_1 + 0x300) != 0) {
          lVar2 = *(longlong *)(param_1 + 0x300);
        }
        iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x308) - 1U & uVar1) * 4);
        if (iVar4 != -1) {
          lVar2 = *(longlong *)(param_1 + 0x2c0);
          do {
            lVar3 = (longlong)iVar4 * 0x40;
            lVar5 = lVar2 + lVar3;
            if ((*(longlong *)(lVar2 + lVar3) == *param_2) &&
               (*(int *)(lVar2 + 8 + lVar3) == (int)param_2[1])) goto LAB_1477d4151;
            iVar4 = *(int *)(lVar5 + 0x38);
          } while (iVar4 != -1);
        }
      }
      lVar5 = 0;
LAB_1477d4151:
      return *(undefined8 *)(lVar5 + 0x28);
    }
  }
  return 0;
}



// FUNCTION 1477d41aa FUN_1477d41aa body=78 status=ok
// SIG undefined FUN_1477d41aa(void)

longlong FUN_1477d41aa(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_1477d41f8(param_1,0);
  return param_1;
}



// FUNCTION 1477d41f8 FUN_1477d41f8 body=143 status=ok
// SIG undefined FUN_1477d41f8(void)

void FUN_1477d41f8(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_1[0xb] = 0;
    uVar1 = 0;
  }
  else {
    param_1[0xb] = param_2;
    uVar1 = FUN_1477bfa34(param_2);
  }
  *param_1 = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xbf800000bf800000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xbf800000bf800000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xbf800000bf800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0xffffffff;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0x80;
  LOCK();
  *(undefined4 *)(param_1 + 0xe) = 0;
  UNLOCK();
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x12) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x13) = 0x7f7fffff;
  if (*(int *)(param_1 + 2) == *(int *)((longlong)param_1 + 0x3c)) {
    return;
  }
  FUN_1477e9824(param_1 + 1);
  FUN_1477e9968(param_1 + 1);
  return;
}



// FUNCTION 1477d4288 FUN_1477d4288 body=395 status=ok
// SIG undefined FUN_1477d4288(void)

undefined4 FUN_1477d4288(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 *local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar8 = FUN_1477c5944(*param_1,(longlong)param_1 + 0x9c);
  if ((char)uVar8 != '\0') {
    uVar6 = (ushort)*(undefined4 *)(param_1 + 0x14) & 0xffef |
            (ushort)*(byte *)(param_2 + 0x2a5) << 4;
    *(ushort *)(param_1 + 0x14) = uVar6;
    uVar7 = uVar6 & 0xffdf | (ushort)*(byte *)(param_2 + 0x2a6) << 5;
    *(ushort *)(param_1 + 0x14) = uVar7;
    uVar6 = (ushort)*(byte *)(param_2 + 0x2a7) << 6;
    *(ushort *)(param_1 + 0x14) = uVar7 & 0xffbf | uVar6;
    *(ushort *)(param_1 + 0x14) =
         (uVar7 & 0xffb7 | uVar6) + (ushort)(*(int *)(param_2 + 0x48) != -1) * 8;
    if (0 < *(int *)(param_2 + 0x20)) {
      lVar10 = 0;
      do {
        lVar3 = *(longlong *)(param_2 + 0x18);
        plVar4 = *(longlong **)(lVar3 + 8 + lVar10 * 0x28);
        if (plVar4 != (longlong *)0x0) {
          iVar9 = (int)plVar4[1];
          do {
            if (iVar9 == 0) goto LAB_1477d4398;
            LOCK();
            iVar5 = (int)plVar4[1];
            bVar11 = iVar9 == iVar5;
            if (bVar11) {
              *(int *)(plVar4 + 1) = iVar9 + 1;
              iVar5 = iVar9;
            }
            iVar9 = iVar5;
            UNLOCK();
          } while (!bVar11);
          lVar3 = *(longlong *)(lVar3 + lVar10 * 0x28);
          if (lVar3 != 0) {
            local_58 = lVar10 * 0x28 + *(longlong *)(param_2 + 0x18);
            local_64 = *(undefined4 *)(lVar3 + 0x20);
            local_60 = &local_64;
            FUN_1477e9a8e(param_1 + 1,local_4c,&local_60);
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
LAB_1477d4398:
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(param_2 + 0x20));
    }
    LOCK();
    *(undefined4 *)(param_1 + 0xe) = 0;
    UNLOCK();
    FUN_1477c59a2(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1477d4414 FUN_1477d4414 body=38 status=ok
// SIG undefined FUN_1477d4414(void)

void FUN_1477d4414(undefined8 *param_1,float param_2)

{
  if ((*(float *)((longlong)param_1 + 0x74) == param_2) &&
     (!NAN(*(float *)((longlong)param_1 + 0x74)) && !NAN(param_2))) {
    return;
  }
  *(float *)((longlong)param_1 + 0x74) = param_2;
  FUN_1477c67fc(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),param_2);
  return;
}



// FUNCTION 1477d443a FUN_1477d443a body=38 status=ok
// SIG undefined FUN_1477d443a(void)

void FUN_1477d443a(undefined8 *param_1,float param_2)

{
  if ((*(float *)(param_1 + 0xf) == param_2) && (!NAN(*(float *)(param_1 + 0xf)) && !NAN(param_2)))
  {
    return;
  }
  *(float *)(param_1 + 0xf) = param_2;
  FUN_1477c688a(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),param_2);
  return;
}



// FUNCTION 1477d4460 FUN_1477d4460 body=38 status=ok
// SIG undefined FUN_1477d4460(void)

void FUN_1477d4460(undefined8 *param_1,float param_2)

{
  if ((*(float *)((longlong)param_1 + 0x7c) == param_2) &&
     (!NAN(*(float *)((longlong)param_1 + 0x7c)) && !NAN(param_2))) {
    return;
  }
  *(float *)((longlong)param_1 + 0x7c) = param_2;
  FUN_1477c6918(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),param_2);
  return;
}



// FUNCTION 1477d4486 FUN_1477d4486 body=44 status=ok
// SIG undefined FUN_1477d4486(void)

void FUN_1477d4486(undefined8 *param_1,float param_2)

{
  if ((*(float *)((longlong)param_1 + 0x84) == param_2) &&
     (!NAN(*(float *)((longlong)param_1 + 0x84)) && !NAN(param_2))) {
    return;
  }
  *(float *)((longlong)param_1 + 0x84) = param_2;
  FUN_1477c6c4a(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),param_2);
  return;
}



// FUNCTION 1477d44b2 FUN_1477d44b2 body=44 status=ok
// SIG undefined FUN_1477d44b2(void)

void FUN_1477d44b2(undefined8 *param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x11) == param_2) && (!NAN(*(float *)(param_1 + 0x11)) && !NAN(param_2))
     ) {
    return;
  }
  *(float *)(param_1 + 0x11) = param_2;
  FUN_1477c6cd8(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),param_2);
  return;
}



// FUNCTION 1477d44de FUN_1477d44de body=44 status=ok
// SIG undefined FUN_1477d44de(void)

void FUN_1477d44de(undefined8 *param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x12) == param_2) && (!NAN(*(float *)(param_1 + 0x12)) && !NAN(param_2))
     ) {
    return;
  }
  *(float *)(param_1 + 0x12) = param_2;
  FUN_1477c73e2(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),param_2);
  return;
}



// FUNCTION 1477d450a FUN_1477d450a body=44 status=ok
// SIG undefined FUN_1477d450a(void)

void FUN_1477d450a(undefined8 *param_1,float param_2)

{
  if ((*(float *)((longlong)param_1 + 0x8c) == param_2) &&
     (!NAN(*(float *)((longlong)param_1 + 0x8c)) && !NAN(param_2))) {
    return;
  }
  *(float *)((longlong)param_1 + 0x8c) = param_2;
  FUN_1477c7470(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),param_2);
  return;
}



// FUNCTION 1477d4536 FUN_1477d4536 body=44 status=ok
// SIG undefined FUN_1477d4536(void)

void FUN_1477d4536(undefined8 *param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x13) == param_2) && (!NAN(*(float *)(param_1 + 0x13)) && !NAN(param_2))
     ) {
    return;
  }
  *(float *)(param_1 + 0x13) = param_2;
  FUN_1477c6df4(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),param_2);
  return;
}



// FUNCTION 1477d4562 FUN_1477d4562 body=44 status=ok
// SIG undefined FUN_1477d4562(void)

void FUN_1477d4562(undefined8 *param_1,float param_2)

{
  if ((*(float *)((longlong)param_1 + 0x94) == param_2) &&
     (!NAN(*(float *)((longlong)param_1 + 0x94)) && !NAN(param_2))) {
    return;
  }
  *(float *)((longlong)param_1 + 0x94) = param_2;
  FUN_1477c6d66(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),param_2);
  return;
}



// FUNCTION 1477d458e FUN_1477d458e body=20 status=ok
// SIG undefined FUN_1477d458e(void)

void FUN_1477d458e(undefined8 *param_1,undefined8 param_2)

{
  FUN_1477c6e82(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),param_2);
  return;
}



// FUNCTION 1477d45a2 FUN_1477d45a2 body=23 status=ok
// SIG undefined FUN_1477d45a2(void)

void FUN_1477d45a2(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1477c7308(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),param_2,param_3);
  return;
}



// FUNCTION 1477d45ba FUN_1477d45ba body=51 status=ok
// SIG undefined FUN_1477d45ba(void)

void FUN_1477d45ba(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  FUN_1477c6aa2(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 1477d45ee FUN_1477d45ee body=20 status=ok
// SIG undefined FUN_1477d45ee(void)

void FUN_1477d45ee(undefined8 *param_1,undefined8 param_2)

{
  FUN_1477c69a6(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),param_2);
  return;
}



// FUNCTION 1477d4602 FUN_1477d4602 body=36 status=ok
// SIG undefined FUN_1477d4602(void)

void FUN_1477d4602(undefined8 *param_1)

{
  *(ushort *)(param_1 + 0x14) = (ushort)*(undefined4 *)(param_1 + 0x14) & 0xfff9 | 2;
  FUN_1477c6774(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c));
  return;
}



// FUNCTION 1477d4626 FUN_1477d4626 body=17 status=ok
// SIG undefined FUN_1477d4626(void)

void FUN_1477d4626(undefined8 *param_1)

{
  FUN_1477c77d8(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c));
  return;
}



// FUNCTION 1477d464a FUN_1477d464a body=554 status=ok
// SIG undefined FUN_1477d464a(void)

/* WARNING: Removing unreachable block (ram,0x0001477d4860) */
/* WARNING: Removing unreachable block (ram,0x0001477d486a) */

void FUN_1477d464a(undefined8 *param_1,longlong *param_2,float param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_c8 [44];
  undefined4 local_9c;
  longlong local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  float fStack_88;
  undefined1 uStack_84;
  int local_80;
  undefined8 local_78;
  undefined4 *local_68;
  longlong *local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_1477d47fe;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    lVar4 = *param_2;
    if (lVar4 != 0) {
      if (*(int *)(param_1 + 2) != *(int *)((longlong)param_1 + 0x3c)) {
        puVar9 = param_1 + 8;
        if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
          puVar9 = (undefined8 *)param_1[9];
        }
        iVar8 = *(int *)((longlong)puVar9 +
                        (ulonglong)(*(int *)(param_1 + 10) - 1U & *(uint *)(lVar4 + 0x20)) * 4);
        if (iVar8 != -1) {
          lVar5 = param_1[1];
          do {
            lVar2 = lVar5 + (longlong)iVar8 * 0x38;
            if (*(uint *)(lVar5 + (longlong)iVar8 * 0x38) == *(uint *)(lVar4 + 0x20)) {
              if ((lVar2 != 0) && (lVar2 != -8)) {
                if ((1e-08 < ABS(*(float *)(lVar2 + 0x18) - param_3)) ||
                   (*(int *)(lVar2 + 0x20) != param_4)) {
                  *(float *)(lVar2 + 0x18) = param_3;
                  *(int *)(lVar2 + 0x20) = param_4;
                  FUN_1477c74fe(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c));
                }
                goto LAB_1477d47e1;
              }
              break;
            }
            iVar8 = *(int *)(lVar2 + 0x30);
          } while (iVar8 != -1);
        }
      }
      local_78 = 0;
      lVar5 = param_2[1];
      if (lVar5 == 0) {
        uStack_90 = 0;
        uStack_8b = 0;
      }
      else {
        LOCK();
        *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
        UNLOCK();
        uStack_90 = (undefined5)lVar5;
        uStack_8b = (undefined3)((ulonglong)lVar5 >> 0x28);
      }
      uStack_84 = 0;
      local_9c = *(undefined4 *)(lVar4 + 0x20);
      local_68 = &local_9c;
      local_98 = lVar4;
      fStack_88 = param_3;
      local_80 = param_4;
      local_60 = &local_98;
      FUN_1477e9a8e(param_1 + 1,local_54);
      FUN_1477c74fe(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),&local_98);
      plVar6 = (longlong *)CONCAT35(uStack_8b,uStack_90);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
    }
LAB_1477d47e1:
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
LAB_1477d47fe:
    plVar3 = (longlong *)param_2[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d4876 FUN_1477d4876 body=258 status=ok
// SIG undefined FUN_1477d4876(void)

void FUN_1477d4876(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  bool bVar10;
  
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1477d48c9;
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    lVar5 = *param_2;
    if ((lVar5 != 0) && (*(int *)(param_1 + 2) != *(int *)((longlong)param_1 + 0x3c))) {
      puVar9 = param_1 + 8;
      if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)param_1[9];
      }
      iVar8 = *(int *)((longlong)puVar9 +
                      (ulonglong)(*(int *)(param_1 + 10) - 1U & *(uint *)(lVar5 + 0x20)) * 4);
      if (iVar8 != -1) {
        lVar6 = param_1[1];
        do {
          lVar3 = lVar6 + (longlong)iVar8 * 0x38;
          if (*(uint *)(lVar6 + (longlong)iVar8 * 0x38) == *(uint *)(lVar5 + 0x20)) {
            if (lVar3 != -8 && lVar3 != 0) {
              FUN_1477c761c(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c));
              FUN_1477e9f78(param_1 + 1,*(undefined4 *)(lVar5 + 0x20));
            }
            break;
          }
          iVar8 = *(int *)(lVar3 + 0x30);
        } while (iVar8 != -1);
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
LAB_1477d48c9:
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001477d48e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477d4978 FUN_1477d4978 body=46 status=ok
// SIG undefined FUN_1477d4978(void)

void FUN_1477d4978(longlong param_1,byte param_2,byte param_3,byte param_4)

{
  *(ushort *)(param_1 + 0xa0) =
       (ushort)param_4 << 6 | (ushort)param_3 << 5 | (ushort)param_2 << 4 |
       (ushort)*(undefined4 *)(param_1 + 0xa0) & 0xff8f;
  return;
}



// FUNCTION 1477d49a6 FUN_1477d49a6 body=56 status=ok
// SIG undefined FUN_1477d49a6(void)

void FUN_1477d49a6(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(ushort *)(param_1 + 0x14) & 0x10) != 0) {
    uVar1 = param_4;
  }
  FUN_1477c773a(*param_1,*(undefined4 *)((longlong)param_1 + 0x9c),param_2,param_3,uVar1);
  return;
}



// FUNCTION 1477d49de FUN_1477d49de body=1099 status=ok
// SIG undefined FUN_1477d49de(void)

undefined8 * FUN_1477d49de(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14a571958;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar2 = DAT_14cabb624 + 1;
  *(int *)(param_1 + 4) = DAT_14cabb624;
  DAT_14cabb624 = iVar2;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  uVar1 = DAT_14c8463e8;
  param_1[0x34] = DAT_14c8463e0;
  param_1[0x35] = uVar1;
  uVar1 = DAT_14c8463d8;
  param_1[0x32] = DAT_14c8463d0;
  param_1[0x33] = uVar1;
  param_1[0x3a] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3b));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3b),4000);
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  FUN_147064cec(param_1 + 0x4e);
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x52) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x3f800000;
  param_1[0x53] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(400);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14a5713d0;
  puVar4 = puVar3 + 2;
  memset(puVar4,0,0x180);
  FUN_1477cafba(puVar4);
  param_1[0x54] = puVar4;
  param_1[0x55] = puVar3;
  puVar3 = (undefined8 *)FUN_14001cc68(400);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14a5713d0;
  puVar4 = puVar3 + 2;
  memset(puVar4,0,0x180);
  FUN_1477cafba(puVar4);
  param_1[0x56] = puVar4;
  param_1[0x57] = puVar3;
  puVar3 = (undefined8 *)FUN_14001cc68(400);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14a5713d0;
  puVar4 = puVar3 + 2;
  memset(puVar4,0,0x180);
  FUN_1477cafba(puVar4);
  param_1[0x58] = puVar4;
  param_1[0x59] = puVar3;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0xc3200000;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x3f800000;
  param_1[0x5c] = &DAT_3f8000003f800000;
  FUN_1470332de(param_1 + 0x61);
  *(undefined4 *)(param_1 + 0x6e) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x6f),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x74));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x74),4000);
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = 0;
  puVar4[4] = 0;
  param_1[0x81] = puVar4;
  param_1[0x80] = puVar4;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x84));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x84),4000);
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  *(byte *)((longlong)param_1 + 0x45c) = *(byte *)((longlong)param_1 + 0x45c) & 0xe0 | 4;
  param_1[0x8c] = 0x3fb999999999999a;
  param_1[0x8d] = 0xbff0000000000000;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x94),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x99));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x99),4000);
  param_1[0x9e] = 0;
  FUN_1477b96d4(param_1 + 0x9f);
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x59c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5a4) = 0;
  param_1[0xb6] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  return param_1;
}



// FUNCTION 1477d4e2a FUN_1477d4e2a body=529 status=ok
// SIG undefined FUN_1477d4e2a(void)

void FUN_1477d4e2a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar11;
  undefined1 auStack_c8 [40];
  LPCRITICAL_SECTION local_a0;
  longlong local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x4c8);
  EnterCriticalSection(lpCriticalSection);
  local_98 = 0;
  uStack_90 = 0;
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x88);
    plVar10 = plVar7 + (longlong)*(int *)(param_1 + 0x90) * 6;
    local_a0 = lpCriticalSection;
    do {
      lVar11 = *plVar7;
      lVar3 = plVar7[1];
      if ((longlong)(int)lVar3 == 0) {
        uVar6 = 0;
      }
      else {
        lVar8 = 0;
        do {
          uVar4 = uStack_90;
          if (*(longlong *)(lVar11 + lVar8) != 0) {
            lVar9 = (longlong)(int)uStack_90;
            uVar5 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar5);
            if (uStack_90._4_4_ < uVar5) {
              FUN_1477cc91a(&local_98,uVar4 & 0xffffffff);
            }
            *(undefined8 *)(local_98 + lVar9 * 0x10) = *(undefined8 *)(lVar11 + lVar8);
            lVar2 = *(longlong *)(lVar11 + 8 + lVar8);
            *(longlong *)(local_98 + 8 + lVar9 * 0x10) = lVar2;
            if (lVar2 != 0) {
              LOCK();
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
              UNLOCK();
            }
          }
          lVar8 = lVar8 + 0x10;
        } while ((longlong)(int)lVar3 * 0x10 != lVar8);
        uVar6 = (undefined4)plVar7[1];
        lVar11 = *plVar7;
      }
      iVar1 = *(int *)((longlong)plVar7 + 0xc);
      FUN_1477cc8d1(lVar11,uVar6);
      *(undefined4 *)(plVar7 + 1) = 0;
      if ((iVar1 < 0) && (*(int *)((longlong)plVar7 + 0xc) != 0)) {
        FUN_1477eb422(plVar7);
      }
      lVar11 = local_98;
      lpCriticalSection = local_a0;
      plVar7 = plVar7 + 6;
    } while (plVar7 != plVar10);
    iVar1 = (int)uStack_90;
    if ((int)uStack_90 != 0) {
      local_54 = uStack_90._4_4_;
      local_98 = 0;
      uStack_90 = 0;
      local_78 = 0;
      local_68 = &PTR_LAB_14a57c600;
      local_60 = lVar11;
      local_58 = iVar1;
      local_88 = FUN_14336066e;
      FUN_1407461b0(1);
      FUN_1477cc8d1(0,0);
    }
  }
  *(undefined4 *)(param_1 + 0x458) = 0;
  iVar1 = *(int *)(param_1 + 0x94);
  FUN_1477ea05d(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x94) != 0)) {
    FUN_1477ea0f0(param_1 + 0x88);
  }
  FUN_1477cc8d1(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d503c FUN_1477d503c body=61 status=ok
// SIG undefined FUN_1477d503c(void)

void FUN_1477d503c(longlong *param_1)

{
  if (param_1[10] != 0) {
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



// FUNCTION 1477d507a FUN_1477d507a body=146 status=ok
// SIG undefined FUN_1477d507a(void)

void FUN_1477d507a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_147064d18(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_145be9032(param_1);
  return;
}



// FUNCTION 1477d510c FUN_1477d510c body=155 status=ok
// SIG undefined FUN_1477d510c(void)

void FUN_1477d510c(longlong param_1)

{
  undefined8 *puVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  FUN_1477e7c92(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477d519d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1477d51a8 FUN_1477d51a8 body=510 status=ok
// SIG undefined FUN_1477d51a8(void)

/* WARNING: Removing unreachable block (ram,0x0001477d52be) */
/* WARNING: Removing unreachable block (ram,0x0001477d52ca) */
/* WARNING: Removing unreachable block (ram,0x0001477d52ce) */

void FUN_1477d51a8(longlong param_1,longlong param_2,char param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    local_80 = *(undefined8 *)(param_2 + 0x18);
    FUN_1400021e4(&local_80,&local_90);
    if ((longlong *)(param_1 + 0x10) == &local_90) {
      if (local_90 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x10) = local_90;
      local_90 = 0;
      *(undefined4 *)(param_1 + 0x18) = local_88;
      *(undefined4 *)(param_1 + 0x1c) = local_84;
    }
    lVar4 = param_1 + 0x4f0;
    cVar2 = FUN_144729dda(lVar4);
    if (cVar2 == '\0') {
      FUN_14485c47a(lVar4,param_2);
      FUN_143359c8e(param_1);
    }
    else if (param_3 == '\0') {
      lVar4 = FUN_14479d2ce(lVar4);
      if (lVar4 != 0) {
        lVar5 = FUN_145b5ad08();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          uVar6 = FUN_147d3f032(lVar4);
          uVar7 = FUN_147d3f138(lVar4);
          FUN_147d3f212(lVar4,&local_90);
          FUN_1477d53a8(param_1,uVar7,&local_90,uVar6);
          if (local_90 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
    else {
      local_58 = &PTR_LAB_14a57c500;
      uStack_50 = param_1;
      puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      *puVar3 = 0;
      puVar3[2] = &LAB_14335fe1e;
      puVar3[4] = 0;
      local_68 = 0;
      *(undefined4 *)(puVar3 + 6) = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar3 + 0x34) = local_58._4_4_;
      *(undefined4 *)(puVar3 + 7) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_50._4_4_;
      *(undefined4 *)(puVar3 + 8) = local_48;
      *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_44;
      *(undefined4 *)(puVar3 + 9) = uStack_40;
      *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_3c;
      local_78 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)(param_1 + 0x400);
        *(undefined8 **)(param_1 + 0x400) = puVar3;
        *puVar1 = puVar3;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477d53a8 FUN_1477d53a8 body=491 status=ok
// SIG undefined FUN_1477d53a8(void)

void FUN_1477d53a8(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 **ppuVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  if (param_4 == (longlong *)0x0) goto LAB_1477d53e8;
  FUN_1477d5842(param_1 + 0x160);
  *(longlong **)(param_1 + 0x160) = param_4;
  *(undefined8 *)(param_1 + 0x150) = 0;
  (**(code **)(*param_2 + 0x2a0))(param_2,&local_50);
  puVar8 = local_50;
  ppuVar1 = (undefined8 **)(param_1 + 0x1c0);
  if (ppuVar1 == &local_50) {
LAB_1477d5458:
    if (local_50 != (undefined8 *)0x0) {
      (**(code **)*local_50)(local_50,1);
    }
    puVar8 = *ppuVar1;
  }
  else {
    puVar3 = *ppuVar1;
    *ppuVar1 = local_50;
    local_50 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
      goto LAB_1477d5458;
    }
  }
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)(*param_4 + 0x28))(param_4,&local_50);
    puVar8 = local_50;
    ppuVar1 = (undefined8 **)(param_1 + 0x1b0);
    if (ppuVar1 == &local_50) {
LAB_1477d54c1:
      if (local_50 != (undefined8 *)0x0) {
        (**(code **)*local_50)(local_50,1);
      }
      puVar8 = *ppuVar1;
    }
    else {
      puVar3 = *ppuVar1;
      *ppuVar1 = local_50;
      local_50 = (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
        goto LAB_1477d54c1;
      }
    }
    if (puVar8 != (undefined8 *)0x0) {
      lVar7 = param_3[1];
      if ((longlong)(int)lVar7 != 0) {
        lVar4 = *param_3;
        local_58 = (longlong *)(param_1 + 0x1c8);
        lVar9 = 0;
        do {
          lVar5 = *(longlong *)(lVar4 + lVar9);
          if (lVar5 != 0) {
            uVar6 = *(undefined8 *)(param_1 + 0x1c0);
            iVar2 = *(int *)(param_1 + 0x1d0);
            *(uint *)(param_1 + 0x1d0) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x1d4) < iVar2 + 1U) {
              FUN_1477eb682(local_58,iVar2);
            }
            FUN_1477eb582((longlong)iVar2 * 0x10 + *local_58,uVar6,lVar5);
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)(int)lVar7 * 8 != lVar9);
      }
      FUN_1477d69ac(param_1);
      FUN_1477d7142(param_1);
      goto LAB_1477d53e8;
    }
  }
  FUN_1477d823a(param_1);
LAB_1477d53e8:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477d5594 FUN_1477d5594 body=345 status=ok
// SIG undefined FUN_1477d5594(void)

void FUN_1477d5594(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1477d8376(param_1 + 0x200);
  if (param_2 == (longlong *)0x0) goto LAB_1477d5697;
  if (param_3 == (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2);
    if (plVar2 == (longlong *)0x0) goto LAB_1477d5697;
    (**(code **)(*plVar2 + 0x2a0))(plVar2);
    puVar3 = (undefined8 *)CONCAT44(uStack_3c,local_40);
  }
  else {
    (**(code **)(*param_3 + 0x2a0))(param_3);
    puVar3 = (undefined8 *)CONCAT44(uStack_3c,local_40);
  }
  if (puVar3 == (undefined8 *)0x0) goto LAB_1477d5697;
  local_30 = *(longlong *)(param_1 + 0xa8);
  if (local_30 == 0) {
    local_34 = 0;
    uStack_3c = 0;
    local_38 = 0;
  }
  else {
    local_34 = *(undefined4 *)(local_30 + 0x7c);
    uStack_3c = *(undefined4 *)(local_30 + 0xcb8);
    local_38 = (undefined4)(longlong)(float)*(int *)(local_30 + 0x74);
  }
  local_40 = 1;
  (**(code **)(*param_2 + 0x10))(param_2,&local_48,&local_40,puVar3);
  ppuVar4 = (undefined8 **)(param_1 + 0x218);
  if (ppuVar4 == &local_48) {
LAB_1477d5676:
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  else {
    puVar1 = *ppuVar4;
    *ppuVar4 = local_48;
    local_48 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      goto LAB_1477d5676;
    }
  }
  (**(code **)*puVar3)(puVar3,1);
LAB_1477d5697:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d56ee FUN_1477d56ee body=339 status=ok
// SIG undefined FUN_1477d56ee(void)

void FUN_1477d56ee(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1477d8376(param_1 + 0x200);
  if (param_3 == (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x88))(param_2);
    if (plVar2 == (longlong *)0x0) goto LAB_1477d57e8;
    (**(code **)(*plVar2 + 0x2a0))(plVar2);
    puVar3 = (undefined8 *)CONCAT44(uStack_3c,local_40);
  }
  else {
    (**(code **)(*param_3 + 0x2a0))(param_3);
    puVar3 = (undefined8 *)CONCAT44(uStack_3c,local_40);
  }
  if (puVar3 == (undefined8 *)0x0) goto LAB_1477d57e8;
  local_30 = *(longlong *)(param_1 + 0xa8);
  if (local_30 == 0) {
    local_34 = 0;
    uStack_3c = 0;
    local_38 = 0;
  }
  else {
    local_34 = *(undefined4 *)(local_30 + 0x7c);
    uStack_3c = *(undefined4 *)(local_30 + 0xcb8);
    local_38 = (undefined4)(longlong)(float)*(int *)(local_30 + 0x74);
  }
  local_40 = 1;
  (**(code **)(*param_2 + 0x78))(param_2,&local_48,&local_40,puVar3);
  ppuVar4 = (undefined8 **)(param_1 + 0x220);
  if (ppuVar4 == &local_48) {
LAB_1477d57c7:
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  else {
    puVar1 = *ppuVar4;
    *ppuVar4 = local_48;
    local_48 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      goto LAB_1477d57c7;
    }
  }
  (**(code **)*puVar3)(puVar3,1);
LAB_1477d57e8:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d5842 FUN_1477d5842 body=112 status=ok
// SIG undefined FUN_1477d5842(void)

void FUN_1477d5842(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    param_1[2] = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    param_1[10] = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0xc];
  if (puVar1 != (undefined8 *)0x0) {
    param_1[0xc] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001477d58a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1477d58b2 FUN_1477d58b2 body=134 status=ok
// SIG undefined FUN_1477d58b2(void)

void FUN_1477d58b2(undefined4 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = local_48;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_143343e04(0,param_1,param_3,0);
  local_58 = (longlong *)local_48[0];
  FUN_14702f221(param_1,param_3 & 0xffffffff,param_2,param_4);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d593a FUN_1477d593a body=760 status=ok
// SIG undefined FUN_1477d593a(void)

/* WARNING: Removing unreachable block (ram,0x0001477d5bb0) */
/* WARNING: Removing unreachable block (ram,0x0001477d5bbc) */
/* WARNING: Removing unreachable block (ram,0x0001477d5bc0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x0001477d5b19 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1477d593a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar8 = *(longlong **)(param_1 + 0x30);
  if (plVar8 == (longlong *)0x0) {
LAB_1477d5981:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) goto LAB_1477d5981;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar13 = iVar5 == iVar4;
      if (bVar13) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar13);
  }
  lVar12 = *(longlong *)(param_1 + 0x28);
  plVar10 = (longlong *)param_2[1];
  if (plVar10 == (longlong *)0x0) {
    lVar9 = 0;
  }
  else {
    iVar5 = (int)plVar10[1];
    lVar9 = 0;
    do {
      if (iVar5 == 0) goto LAB_1477d59cd;
      LOCK();
      iVar4 = (int)plVar10[1];
      bVar13 = iVar5 == iVar4;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar13);
    lVar9 = *param_2;
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
LAB_1477d59cd:
  if (plVar8 == (longlong *)0x0) {
    lVar12 = 0;
  }
  else {
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
  if (lVar12 != lVar9) {
    plVar8 = *(longlong **)(param_1 + 0x30);
    bVar13 = true;
    if (plVar8 == (longlong *)0x0) {
LAB_1477d5b23:
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar8[1];
      do {
        if (iVar5 == 0) goto LAB_1477d5b23;
        LOCK();
        iVar4 = (int)plVar8[1];
        bVar14 = iVar5 == iVar4;
        if (bVar14) {
          *(int *)(plVar8 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar14);
      lVar12 = *(longlong *)(param_1 + 0x28);
      if (lVar12 != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x20);
        local_d0 = *param_2;
        lVar9 = param_2[1];
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + 1;
          UNLOCK();
        }
        local_88 = (undefined1 *)0x0;
        puVar6 = (undefined8 *)FUN_14001cc68(0x28,8);
        *puVar6 = &PTR_FUN_14a57c540;
        plVar10 = puVar6 + 1;
        *plVar10 = param_1;
        *(undefined4 *)(puVar6 + 2) = uVar3;
        puVar6[3] = local_d0;
        puVar6[4] = lVar9;
        if (plVar10 == (longlong *)0x0) {
          puVar11 = (undefined1 *)0x0;
        }
        else {
          puVar11 = &LAB_143360088;
          local_88 = &LAB_143360088;
        }
        puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        *puVar7 = 0;
        puVar7[2] = puVar11;
        puVar7[4] = puVar6;
        local_78 = 0;
        *(undefined4 *)(puVar7 + 8) = local_58;
        *(undefined4 *)((longlong)puVar7 + 0x44) = uStack_54;
        *(undefined4 *)(puVar7 + 9) = uStack_50;
        *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_4c;
        *(undefined4 *)(puVar7 + 6) = local_68;
        *(undefined4 *)((longlong)puVar7 + 0x34) = uStack_64;
        *(undefined4 *)(puVar7 + 7) = uStack_60;
        *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_5c;
        if (plVar10 != (longlong *)0x0) {
          local_88 = (undefined1 *)0x0;
        }
        if (puVar7 != (undefined8 *)0x0) {
          puVar6 = *(undefined8 **)(lVar12 + 0x400);
          *(undefined8 **)(lVar12 + 0x400) = puVar7;
          *puVar6 = puVar7;
          if (local_88 != (undefined1 *)0x0) {
            (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
          }
        }
      }
      bVar13 = false;
    }
    local_98 = *param_2;
    uStack_90 = param_2[1];
    if (uStack_90 != 0) {
      LOCK();
      *(int *)(uStack_90 + 0xc) = *(int *)(uStack_90 + 0xc) + 1;
      UNLOCK();
    }
    local_a8 = &PTR_LAB_14a57c560;
    uStack_a0 = param_1;
    puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar6 = 0;
    puVar6[2] = FUN_14336015c;
    puVar6[4] = 0;
    local_b8 = 0;
    *(undefined4 *)(puVar6 + 6) = (undefined4)local_a8;
    *(undefined4 *)((longlong)puVar6 + 0x34) = local_a8._4_4_;
    *(undefined4 *)(puVar6 + 7) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = uStack_a0._4_4_;
    *(undefined4 *)(puVar6 + 8) = (undefined4)local_98;
    *(undefined4 *)((longlong)puVar6 + 0x44) = local_98._4_4_;
    *(undefined4 *)(puVar6 + 9) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_90._4_4_;
    local_c8 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x400);
      *(undefined8 **)(param_1 + 0x400) = puVar6;
      *puVar7 = puVar6;
    }
    if (!bVar13) {
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
  }
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d5c34 FUN_1477d5c34 body=238 status=ok
// SIG undefined FUN_1477d5c34(void)

/* WARNING: Removing unreachable block (ram,0x0001477d5cda) */
/* WARNING: Removing unreachable block (ram,0x0001477d5ce6) */
/* WARNING: Removing unreachable block (ram,0x0001477d5cea) */

void FUN_1477d5c34(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *param_2;
  uStack_20 = param_2[1];
  if (uStack_20 != 0) {
    LOCK();
    *(int *)(uStack_20 + 0xc) = *(int *)(uStack_20 + 0xc) + 1;
    UNLOCK();
  }
  local_38 = &PTR_LAB_14a57c580;
  uStack_30 = param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = FUN_143360234;
  puVar4[4] = 0;
  local_48 = 0;
  *(undefined4 *)(puVar4 + 6) = (undefined4)local_38;
  *(undefined4 *)((longlong)puVar4 + 0x34) = local_38._4_4_;
  *(undefined4 *)(puVar4 + 7) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_30._4_4_;
  *(undefined4 *)(puVar4 + 8) = (undefined4)local_28;
  *(undefined4 *)((longlong)puVar4 + 0x44) = local_28._4_4_;
  *(undefined4 *)(puVar4 + 9) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_20._4_4_;
  local_58 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x400);
    *(undefined8 **)(param_1 + 0x400) = puVar4;
    *puVar2 = puVar4;
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477d5d24 FUN_1477d5d24 body=296 status=ok
// SIG undefined FUN_1477d5d24(void)

/* WARNING: Removing unreachable block (ram,0x0001477d5de6) */
/* WARNING: Removing unreachable block (ram,0x0001477d5df2) */
/* WARNING: Removing unreachable block (ram,0x0001477d5df6) */

void FUN_1477d5d24(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1477d5e19;
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
    if (*param_2 != 0) {
      local_38 = *(undefined4 *)(*param_2 + 0x20);
      local_48 = &PTR_LAB_14a57c5a0;
      uStack_40 = param_1;
      puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      *puVar7 = 0;
      puVar7[2] = &LAB_143360386;
      puVar7[4] = 0;
      local_58 = 0;
      *(undefined4 *)(puVar7 + 6) = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar7 + 0x34) = local_48._4_4_;
      *(undefined4 *)(puVar7 + 7) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_40._4_4_;
      *(undefined4 *)(puVar7 + 8) = local_38;
      *(undefined4 *)((longlong)puVar7 + 0x44) = uStack_34;
      *(undefined4 *)(puVar7 + 9) = uStack_30;
      *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_2c;
      local_68 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)(param_1 + 0x400);
        *(undefined8 **)(param_1 + 0x400) = puVar7;
        *puVar4 = puVar7;
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
LAB_1477d5e19:
    plVar3 = (longlong *)param_2[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d5e4e FUN_1477d5e4e body=319 status=ok
// SIG undefined FUN_1477d5e4e(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x0001477d5f57 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1477d5e4e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [24];
  code *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uStack_98 = *param_2;
  local_a0 = param_1;
  FUN_1470383f0(local_90,param_3);
  local_78 = (code *)0x0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,8);
  *puVar1 = &PTR_FUN_14a57c5c0;
  *(undefined4 *)(puVar1 + 1) = (undefined4)local_a0;
  *(undefined4 *)((longlong)puVar1 + 0xc) = local_a0._4_4_;
  *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_98;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_98._4_4_;
  FUN_1470383f0(puVar1 + 3,local_90);
  if (puVar1 == (undefined8 *)&DAT_fffffffffffffff8) {
    pcVar3 = (code *)0x0;
  }
  else {
    pcVar3 = FUN_1433603e0;
    local_78 = FUN_1433603e0;
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar2 = 0;
  puVar2[2] = pcVar3;
  puVar2[4] = puVar1;
  local_68 = 0;
  *(undefined4 *)(puVar2 + 8) = local_48;
  *(undefined4 *)((longlong)puVar2 + 0x44) = uStack_44;
  *(undefined4 *)(puVar2 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar2 + 6) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_54;
  *(undefined4 *)(puVar2 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_4c;
  if (puVar1 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78 = (code *)0x0;
  }
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x400);
    *(undefined8 **)(param_1 + 0x400) = puVar2;
    *puVar1 = puVar2;
    if (local_78 != (code *)0x0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  FUN_145be9032(local_90);
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477d5f8e FUN_1477d5f8e body=194 status=ok
// SIG undefined FUN_1477d5f8e(void)

/* WARNING: Removing unreachable block (ram,0x0001477d601e) */
/* WARNING: Removing unreachable block (ram,0x0001477d602a) */
/* WARNING: Removing unreachable block (ram,0x0001477d602e) */

void FUN_1477d5f8e(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *param_2;
  local_38 = &PTR_LAB_14a57c5e0;
  uStack_30 = param_1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar2 = 0;
  puVar2[2] = &LAB_143360586;
  puVar2[4] = 0;
  local_48 = 0;
  *(undefined4 *)(puVar2 + 6) = (undefined4)local_38;
  *(undefined4 *)((longlong)puVar2 + 0x34) = local_38._4_4_;
  *(undefined4 *)(puVar2 + 7) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_30._4_4_;
  *(undefined4 *)(puVar2 + 8) = (undefined4)local_28;
  *(undefined4 *)((longlong)puVar2 + 0x44) = local_28._4_4_;
  *(undefined4 *)(puVar2 + 9) = uStack_20;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_1c;
  local_58 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x400);
    *(undefined8 **)(param_1 + 0x400) = puVar2;
    *puVar1 = puVar2;
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477d6052 FUN_1477d6052 body=99 status=ok
// SIG undefined FUN_1477d6052(void)

void FUN_1477d6052(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 *local_20;
  undefined4 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_28;
  local_18 = &local_30;
  local_30 = param_3;
  local_2c = param_4;
  local_28 = param_2;
  FUN_1477eae16(param_1 + 0xb0,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d60b6 FUN_1477d60b6 body=169 status=ok
// SIG undefined FUN_1477d60b6(void)

ulonglong FUN_1477d60b6(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  int iVar5;
  longlong lVar6;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xb8);
  if (*(uint *)(param_1 + 0xb8) != *(uint *)(param_1 + 0xe4)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar3 = param_1 + 0xe8;
    if (*(ulonglong *)(param_1 + 0xf0) != 0) {
      uVar3 = *(ulonglong *)(param_1 + 0xf0);
    }
    iVar5 = *(int *)(uVar3 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar5 != -1) {
      puVar4 = (ulonglong *)(param_1 + 0xb0);
      uVar3 = *puVar4;
      do {
        puVar1 = (ulonglong *)(uVar3 + (longlong)iVar5 * 0x18);
        if (*puVar1 == param_2) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffff7) == 0) {
            return uVar3;
          }
          if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
            uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
            uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
            lVar6 = param_1 + 0xe8;
            if (*(longlong *)(param_1 + 0xf0) != 0) {
              lVar6 = *(longlong *)(param_1 + 0xf0);
            }
            iVar5 = *(int *)(lVar6 + ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) &
                                     (longlong)*(int *)(param_1 + 0xf8) - 1U) * 4);
            if (iVar5 != -1) {
              do {
                if (*(ulonglong *)(*puVar4 + (longlong)iVar5 * 0x18) == param_2) {
                  FUN_1477eb3ca(puVar4,iVar5);
                  return 1;
                }
                iVar5 = *(int *)(*puVar4 + (longlong)iVar5 * 0x18 + 0x10);
              } while (iVar5 != -1);
              return 0;
            }
            return 0;
          }
          return 0;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
    }
  }
  return uVar3;
}



// FUNCTION 1477d6160 FUN_1477d6160 body=524 status=ok
// SIG undefined FUN_1477d6160(void)

void FUN_1477d6160(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c8));
  plVar4 = *(longlong **)(param_1 + 0x88);
  iVar2 = *(int *)(param_1 + 0x90);
  lVar3 = (longlong)iVar2;
  lVar7 = lVar3 * 0x30;
  if (lVar3 == 0) {
    *(int *)(param_1 + 0x458) = *(int *)(param_1 + 0x458) + 1;
  }
  else {
    plVar5 = plVar4;
    do {
      if ((longlong)(int)plVar5[1] != 0) {
        lVar6 = 0;
        do {
          if ((*(longlong *)(*plVar5 + lVar6) != 0) &&
             (*(int *)(*(longlong *)(*plVar5 + lVar6) + 0x54) == *(int *)(*param_2 + 0x54)))
          goto LAB_1477d62cc;
          lVar6 = lVar6 + 0x10;
        } while ((longlong)(int)plVar5[1] * 0x10 != lVar6);
      }
      plVar5 = plVar5 + 6;
    } while (plVar5 != plVar4 + lVar3 * 6);
    *(int *)(param_1 + 0x458) = *(int *)(param_1 + 0x458) + 1;
    if (0 < iVar2) {
      lVar3 = lVar3 * 0x30;
      do {
        if (*(char *)((longlong)plVar4 + 0x2c) == '\x01') {
          iVar2 = (int)plVar4[1];
          *(uint *)(plVar4 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
            FUN_1477cc91a(plVar4,iVar2);
          }
          lVar3 = *plVar4;
          *(longlong *)(lVar3 + (longlong)iVar2 * 0x10) = *param_2;
          lVar7 = param_2[1];
          *(longlong *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = lVar7;
          goto LAB_1477d62c3;
        }
        plVar4 = plVar4 + 6;
        lVar3 = lVar3 + -0x30;
      } while (lVar3 != 0);
      goto LAB_1477d62cc;
    }
  }
  *(uint *)(param_1 + 0x90) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar2 + 1U) {
    FUN_1477ea184((undefined8 *)(param_1 + 0x88));
    plVar4 = *(longlong **)(param_1 + 0x88);
  }
  plVar4[lVar3 * 6] = 0;
  (plVar4 + lVar3 * 6)[1] = 0;
  plVar4[lVar3 * 6 + 2] = (longlong)&DAT_3f8000003f800000;
  plVar4[lVar3 * 6 + 3] = 0;
  (plVar4 + lVar3 * 6 + 3)[1] = 0;
  *(undefined4 *)(plVar4 + lVar3 * 6 + 5) = 0x3f800000;
  *(undefined2 *)((longlong)plVar4 + lVar7 + 0x2c) = 0;
  FUN_1477cc8d1(0,0);
  *(undefined1 *)((longlong)plVar4 + lVar7 + 0x2c) = 1;
  plVar4[lVar3 * 6 + 2] = (longlong)&DAT_3f8000003f800000;
  plVar4[lVar3 * 6 + 3] = 0;
  (plVar4 + lVar3 * 6 + 3)[1] = 0;
  *(undefined4 *)(plVar4 + lVar3 * 6 + 5) = 0x3f800000;
  iVar2 = (int)plVar4[lVar3 * 6 + 1];
  *(uint *)(plVar4 + lVar3 * 6 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar4 + lVar7 + 0xc) < iVar2 + 1U) {
    FUN_1477cc91a(plVar4 + lVar3 * 6,iVar2);
  }
  lVar3 = plVar4[lVar3 * 6];
  *(longlong *)(lVar3 + (longlong)iVar2 * 0x10) = *param_2;
  lVar7 = param_2[1];
  *(longlong *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = lVar7;
LAB_1477d62c3:
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
LAB_1477d62cc:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c8));
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001477d630b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477d636c FUN_1477d636c body=195 status=ok
// SIG undefined FUN_1477d636c(void)

void FUN_1477d636c(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c8));
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x88);
    plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x90) * 6;
    do {
      if ((longlong)(int)plVar3[1] != 0) {
        lVar2 = *plVar3;
        lVar5 = 0;
        do {
          if ((*(longlong *)(lVar2 + lVar5) != 0) &&
             (*(int *)(*(longlong *)(lVar2 + lVar5) + 0x54) == param_2)) {
            *(undefined8 *)(lVar2 + lVar5) = 0;
            plVar3 = *(longlong **)(lVar2 + 8 + lVar5);
            if (plVar3 != (longlong *)0x0) {
              *(undefined8 *)(lVar2 + 8 + lVar5) = 0;
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
            *(int *)(param_1 + 0x458) = *(int *)(param_1 + 0x458) + -1;
            goto LAB_1477d641e;
          }
          lVar5 = lVar5 + 0x10;
        } while ((longlong)(int)plVar3[1] * 0x10 != lVar5);
      }
      plVar3 = plVar3 + 6;
    } while (plVar3 != plVar4);
  }
LAB_1477d641e:
                    /* WARNING: Could not recover jumptable at 0x0001477d6428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c8));
  return;
}



// FUNCTION 1477d6430 FUN_1477d6430 body=152 status=ok
// SIG undefined FUN_1477d6430(void)

void FUN_1477d6430(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x88);
    lVar6 = 0;
    do {
      if (*(char *)(lVar3 + 0x2c + lVar6) == '\x01') {
        if ((int)param_2 < 0) {
          return;
        }
        if (*(int *)(lVar3 + 8 + lVar6) <= (int)param_2) {
          return;
        }
        if (*(longlong *)(*(longlong *)(lVar3 + lVar6) + (ulonglong)param_2 * 0x10) == 0) {
          return;
        }
        puVar5 = (undefined8 *)(*(longlong *)(lVar3 + lVar6) + (ulonglong)param_2 * 0x10);
        *puVar5 = 0;
        plVar4 = (longlong *)puVar5[1];
        if (plVar4 != (longlong *)0x0) {
          puVar5[1] = 0;
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
        *(int *)(param_1 + 0x458) = *(int *)(param_1 + 0x458) + -1;
        return;
      }
      lVar6 = lVar6 + 0x30;
    } while ((longlong)*(int *)(param_1 + 0x90) * 0x30 != lVar6);
  }
  return;
}



// FUNCTION 1477d64c8 FUN_1477d64c8 body=315 status=ok
// SIG undefined FUN_1477d64c8(void)

void FUN_1477d64c8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c8));
  iVar2 = *(int *)(param_1 + 0x90);
  iVar5 = 0;
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x88);
    lVar4 = 0;
    do {
      *(undefined1 *)(lVar3 + 0x2c + lVar4) = 0;
      FUN_147973c16(lVar3 + 0x10 + lVar4,0,param_3);
      lVar4 = lVar4 + 0x30;
    } while ((longlong)iVar2 * 0x30 != lVar4);
    iVar5 = *(int *)(param_1 + 0x90);
  }
  *(uint *)(param_1 + 0x90) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar5 + 1U) {
    FUN_1477ea184((longlong *)(param_1 + 0x88),iVar5);
  }
  lVar3 = *(longlong *)(param_1 + 0x88);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar5 * 0x30);
  puVar6 = puVar1 + 2;
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar6 = &DAT_3f8000003f800000;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  *(undefined2 *)((longlong)puVar1 + 0x2c) = 0;
  FUN_1477cc8d1(0,0);
  *(undefined1 *)((longlong)puVar1 + 0x2c) = 1;
  *puVar6 = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  FUN_147973c16(puVar6,0x3f800000,param_3);
  FUN_1477d6604(lVar3 + (longlong)iVar5 * 0x30,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001477d65fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c8));
  return;
}



// FUNCTION 1477d6604 FUN_1477d6604 body=95 status=ok
// SIG undefined FUN_1477d6604(void)

undefined8 * FUN_1477d6604(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1477cc8d1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477cde40(param_1,iVar1);
      FUN_1477cdea2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477d6664 FUN_1477d6664 body=157 status=ok
// SIG undefined FUN_1477d6664(void)

void FUN_1477d6664(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c8));
  iVar2 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x88);
    lVar4 = 0;
    do {
      cVar1 = *(char *)(lVar3 + 0x2d + lVar4);
      uVar5 = 0x3f800000;
      if (cVar1 == '\0') {
        uVar5 = 0;
      }
      *(char *)(lVar3 + 0x2c + lVar4) = cVar1;
      FUN_147973c16(lVar3 + 0x10 + lVar4,uVar5,param_2);
      lVar4 = lVar4 + 0x30;
    } while ((longlong)iVar2 * 0x30 != lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001477d66fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c8));
  return;
}



// FUNCTION 1477d6702 FUN_1477d6702 body=236 status=ok
// SIG undefined FUN_1477d6702(void)

void FUN_1477d6702(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c8));
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x88);
    lVar6 = 0;
    do {
      if (*(char *)(lVar3 + 0x2c + lVar6) == '\x01') {
        if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar3 + 8 + lVar6))) {
          puVar7 = (undefined8 *)((ulonglong)param_2 * 0x10 + *(longlong *)(lVar3 + lVar6));
          uVar5 = *param_3;
          lVar3 = param_3[1];
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar4 = (longlong *)puVar7[1];
          *puVar7 = uVar5;
          puVar7[1] = lVar3;
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
        break;
      }
      lVar6 = lVar6 + 0x30;
    } while ((longlong)*(int *)(param_1 + 0x90) * 0x30 != lVar6);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c8));
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
                    /* WARNING: Could not recover jumptable at 0x0001477d6785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477d67ee FUN_1477d67ee body=190 status=ok
// SIG undefined FUN_1477d67ee(void)

/* WARNING: Removing unreachable block (ram,0x0001477d687a) */
/* WARNING: Removing unreachable block (ram,0x0001477d6886) */
/* WARNING: Removing unreachable block (ram,0x0001477d688a) */

void FUN_1477d67ee(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = &PTR_LAB_14a57c640;
  local_28 = CONCAT31(local_28._1_3_,param_2);
  uStack_30 = param_1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar2 = 0;
  puVar2[2] = &LAB_14336080a;
  puVar2[4] = 0;
  local_48 = 0;
  *(undefined4 *)(puVar2 + 6) = (undefined4)local_38;
  *(undefined4 *)((longlong)puVar2 + 0x34) = local_38._4_4_;
  *(undefined4 *)(puVar2 + 7) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_30._4_4_;
  *(undefined4 *)(puVar2 + 8) = local_28;
  *(undefined4 *)((longlong)puVar2 + 0x44) = uStack_24;
  *(undefined4 *)(puVar2 + 9) = uStack_20;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_1c;
  local_58 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x400);
    *(undefined8 **)(param_1 + 0x400) = puVar2;
    *puVar1 = puVar2;
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477d68ae FUN_1477d68ae body=254 status=ok
// SIG undefined FUN_1477d68ae(void)

void FUN_1477d68ae(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  uVar2 = (longlong)(int)param_1[1] / (longlong)(int)param_2;
  iVar4 = *(int *)((longlong)param_3 + 0xc);
  iVar8 = 0;
  if (iVar4 < 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    FUN_1470345fa(param_3);
    iVar8 = (int)param_3[1];
    iVar4 = *(int *)((longlong)param_3 + 0xc);
  }
  uVar3 = (uint)uVar2;
  *(uint *)(param_3 + 1) = iVar8 + uVar3;
  if ((uint)(iVar4 - iVar8) < uVar3) {
    FUN_145ca0cd4(param_3);
  }
  memset((void *)((longlong)iVar8 * 4 + *param_3),0,(longlong)(int)uVar3 << 2);
  lVar7 = *param_1;
  fVar9 = (float)(int)param_2;
  lVar1 = *param_3;
  if (fVar9 < 0.0) {
    fVar9 = sqrtf(fVar9);
  }
  else {
    fVar9 = SQRT(fVar9);
  }
  if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      if (0 < (int)param_2) {
        fVar10 = *(float *)(lVar1 + uVar5 * 4);
        uVar6 = 0;
        do {
          fVar10 = fVar10 + *(float *)(lVar7 + uVar6 * 4) * (1.0 / fVar9);
          *(float *)(lVar1 + uVar5 * 4) = fVar10;
          uVar6 = uVar6 + 1;
        } while (param_2 != uVar6);
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + (ulonglong)param_2 * 4;
    } while (uVar5 != (uVar2 & 0xffffffff));
  }
  return;
}



// FUNCTION 1477d69ac FUN_1477d69ac body=260 status=ok
// SIG undefined FUN_1477d69ac(void)

void FUN_1477d69ac(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x38);
  lVar2 = param_1 + 0x48;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x60);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (uStack_48 != lVar2)) {
    do {
      FUN_1477d6ab2(param_1,*local_78 + (longlong)iStack_5c * 0x38 + 8);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d6ab2 FUN_1477d6ab2 body=702 status=ok
// SIG undefined FUN_1477d6ab2(void)

void FUN_1477d6ab2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  plVar10 = (longlong *)param_2[1];
  local_30 = plVar10;
  if (plVar10 == (longlong *)0x0) {
LAB_1477d6b15:
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar10[1];
    do {
      if (iVar6 == 0) {
        local_30 = (longlong *)0x0;
        goto LAB_1477d6b15;
      }
      LOCK();
      iVar4 = (int)plVar10[1];
      bVar11 = iVar6 == iVar4;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar11);
    if (plVar10 == (longlong *)0x0) goto LAB_1477d6b15;
    local_38 = *param_2;
  }
  lVar3 = local_38;
  if (local_38 == 0) goto LAB_1477d6cc9;
  if (*(longlong *)(local_38 + 0x160) == 0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x160) + 0x50))();
    if (cVar5 != '\0') {
      local_40 = *(longlong *)(param_1 + 0xa8);
      if (local_40 == 0) {
        local_44 = 0;
        uVar7 = 0;
        local_48 = 0;
      }
      else {
        local_44 = *(undefined4 *)(local_40 + 0x7c);
        uVar7 = *(undefined4 *)(local_40 + 0xcb8);
        local_48 = (undefined4)(longlong)(float)*(int *)(local_40 + 0x74);
      }
      local_50 = (undefined8 *)CONCAT44(uVar7,1);
      (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))
                (*(longlong **)(param_1 + 0x160),&local_58,&local_50,
                 *(undefined8 *)(param_1 + 0x1c0));
      ppuVar9 = (undefined8 **)(param_2 + 2);
      puVar8 = local_58;
      if (ppuVar9 != &local_58) {
        puVar8 = *ppuVar9;
        *ppuVar9 = local_58;
        local_58 = (undefined8 *)0x0;
        if (puVar8 == (undefined8 *)0x0) goto LAB_1477d6bfb;
        (**(code **)*puVar8)(puVar8,1);
        puVar8 = local_58;
      }
      goto LAB_1477d6bdc;
    }
    if (*(longlong *)(lVar3 + 0x160) != 0) goto LAB_1477d6d22;
  }
  else {
LAB_1477d6d22:
    FUN_1477d6d72(param_1,&local_50,&local_38);
    param_2 = param_2 + 3;
    puVar8 = local_50;
    if (param_2 != &local_50) {
      puVar8 = (undefined8 *)*param_2;
      *param_2 = (longlong)local_50;
      local_50 = (undefined8 *)0x0;
      if (puVar8 == (undefined8 *)0x0) goto LAB_1477d6bfb;
      (**(code **)*puVar8)(puVar8,1);
      puVar8 = local_50;
    }
LAB_1477d6bdc:
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
LAB_1477d6bfb:
  lVar3 = *(longlong *)(param_1 + 0x168);
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x160) + 0x50))();
  if ((lVar3 == 0) && (cVar5 == '\0')) {
    ppuVar9 = (undefined8 **)(param_1 + 0x168);
    local_40 = *(longlong *)(param_1 + 0xa8);
    if (local_40 == 0) {
      local_44 = 0;
      uVar7 = 0;
      local_48 = 0;
    }
    else {
      local_44 = *(undefined4 *)(local_40 + 0x7c);
      uVar7 = *(undefined4 *)(local_40 + 0xcb8);
      local_48 = (undefined4)(longlong)(float)*(int *)(local_40 + 0x74);
    }
    local_50 = (undefined8 *)CONCAT44(uVar7,1);
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))
              (*(longlong **)(param_1 + 0x160),&local_58,&local_50,*(undefined8 *)(param_1 + 0x1c0))
    ;
    if (ppuVar9 != &local_58) {
      puVar8 = *ppuVar9;
      *ppuVar9 = local_58;
      local_58 = (undefined8 *)0x0;
      if (puVar8 == (undefined8 *)0x0) goto LAB_1477d6cc9;
      (**(code **)*puVar8)(puVar8,1);
    }
    if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,1);
    }
  }
LAB_1477d6cc9:
  if (plVar10 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477d6d72 FUN_1477d6d72 body=974 status=ok
// SIG undefined FUN_1477d6d72(void)

undefined8 * FUN_1477d6d72(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 *local_a8;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar5 = *(longlong **)(param_1 + 0x160);
  if (plVar5 == (longlong *)0x0) {
    FUN_1470459da(&local_60);
  }
  else {
    (**(code **)(*plVar5 + 8))(plVar5,&local_60);
  }
  plVar5 = *(longlong **)(*param_3 + 0x160);
  if (plVar5 == (longlong *)0x0) {
    FUN_1470459da(&local_40);
  }
  else {
    (**(code **)(*plVar5 + 8))(plVar5,&local_40);
  }
  if (CONCAT44(uStack_5c,local_60) == local_40) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x160) + 0x38))
                      (*(longlong **)(param_1 + 0x160),*(undefined8 *)(*param_3 + 0x1c0),
                       *(undefined8 *)(param_1 + 0x1c0));
    if (cVar2 == '\0') {
LAB_1477d70a5:
      *param_2 = 0;
      goto LAB_1477d6faa;
    }
    local_50 = *(longlong *)(param_1 + 0xa8);
    if (local_50 == 0) {
      local_54 = 0;
      uStack_5c = 0;
      local_58 = 0;
    }
    else {
      local_54 = *(undefined4 *)(local_50 + 0x7c);
      uStack_5c = *(undefined4 *)(local_50 + 0xcb8);
      local_58 = (undefined4)(longlong)(float)*(int *)(local_50 + 0x74);
    }
    local_60 = 1;
    plVar5 = *(longlong **)(param_1 + 0x160);
    uVar3 = *(undefined8 *)(param_1 + 0x1c0);
    (**(code **)(*plVar5 + 8))(plVar5,local_90);
    plVar1 = *(longlong **)(*param_3 + 0x160);
    uVar4 = *(undefined8 *)(*param_3 + 0x1c0);
    if (plVar1 == (longlong *)0x0) {
      FUN_1470459da(&local_98);
      local_88 = local_98;
    }
    else {
      (**(code **)(*plVar1 + 8))(plVar1,&local_98);
      local_88 = local_98;
    }
  }
  else {
    plVar5 = *(longlong **)(*param_3 + 0x160);
    uVar3 = *(undefined8 *)(*param_3 + 0x1c0);
    plVar1 = *(longlong **)(param_1 + 0x160);
    if (plVar5 == (longlong *)0x0) {
      FUN_1470459da(&local_48);
    }
    else {
      (**(code **)(*plVar5 + 8))(plVar5,&local_48);
    }
    cVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,local_48,uVar3);
    if (cVar2 == '\0') {
      plVar1 = *(longlong **)(param_1 + 0x160);
      uVar3 = *(undefined8 *)(param_1 + 0x1c0);
      if (plVar1 == (longlong *)0x0) {
        FUN_1470459da(&local_78);
      }
      else {
        (**(code **)(*plVar1 + 8))(plVar1,&local_78);
      }
      cVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,local_78,uVar3);
      if (cVar2 == '\0') goto LAB_1477d70a5;
      local_50 = *(longlong *)(param_1 + 0xa8);
      if (local_50 == 0) {
        local_54 = 0;
        uStack_5c = 0;
        local_58 = 0;
      }
      else {
        local_54 = *(undefined4 *)(local_50 + 0x7c);
        uStack_5c = *(undefined4 *)(local_50 + 0xcb8);
        local_58 = (undefined4)(longlong)(float)*(int *)(local_50 + 0x74);
      }
      local_60 = 1;
      uVar3 = *(undefined8 *)(param_1 + 0x1c0);
      (**(code **)(**(longlong **)(param_1 + 0x160) + 8))(*(longlong **)(param_1 + 0x160),local_80);
      plVar1 = *(longlong **)(*param_3 + 0x160);
      uVar4 = *(undefined8 *)(*param_3 + 0x1c0);
      if (plVar1 == (longlong *)0x0) {
        FUN_1470459da(&local_88);
      }
      else {
        (**(code **)(*plVar1 + 8))(plVar1,&local_88);
      }
    }
    else {
      local_50 = *(longlong *)(param_1 + 0xa8);
      if (local_50 == 0) {
        local_54 = 0;
        uStack_5c = 0;
        local_58 = 0;
      }
      else {
        local_54 = *(undefined4 *)(local_50 + 0x7c);
        uStack_5c = *(undefined4 *)(local_50 + 0xcb8);
        local_58 = (undefined4)(longlong)(float)*(int *)(local_50 + 0x74);
      }
      local_60 = 1;
      plVar5 = *(longlong **)(param_1 + 0x160);
      uVar3 = *(undefined8 *)(param_1 + 0x1c0);
      (**(code **)(*plVar5 + 8))(plVar5,local_68);
      plVar1 = *(longlong **)(*param_3 + 0x160);
      uVar4 = *(undefined8 *)(*param_3 + 0x1c0);
      if (plVar1 == (longlong *)0x0) {
        FUN_1470459da(&local_70);
        local_88 = local_70;
      }
      else {
        (**(code **)(*plVar1 + 8))(plVar1,&local_70);
        local_88 = local_70;
      }
    }
  }
  local_a8 = &local_60;
  local_b0 = uVar3;
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2,local_88,uVar4);
LAB_1477d6faa:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1477d7142 FUN_1477d7142 body=374 status=ok
// SIG undefined FUN_1477d7142(void)

void FUN_1477d7142(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 **ppuVar12;
  bool bVar13;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) goto LAB_1477d71a5;
  iVar10 = (int)plVar3[1];
  do {
    if (iVar10 == 0) goto LAB_1477d71a5;
    LOCK();
    iVar9 = (int)plVar3[1];
    bVar13 = iVar10 == iVar9;
    if (bVar13) {
      *(int *)(plVar3 + 1) = iVar10 + 1;
      iVar9 = iVar10;
    }
    iVar10 = iVar9;
    UNLOCK();
  } while (!bVar13);
  lVar4 = *(longlong *)(param_1 + 0x28);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x160) == 0)) {
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(lVar4 + 0x150);
    uVar11 = FUN_1477bb002(*(undefined8 *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0x188) = uVar11;
    uVar11 = DAT_14c8463d8;
    *(undefined8 *)(param_1 + 400) = DAT_14c8463d0;
    *(undefined8 *)(param_1 + 0x198) = uVar11;
    uVar8 = DAT_14c8463e8._4_4_;
    uVar7 = (undefined4)DAT_14c8463e8;
    uVar6 = DAT_14c8463e0._4_4_;
    *(undefined4 *)(param_1 + 0x1a0) = (undefined4)DAT_14c8463e0;
    *(undefined4 *)(param_1 + 0x1a4) = uVar6;
    *(undefined4 *)(param_1 + 0x1a8) = uVar7;
    *(undefined4 *)(param_1 + 0x1ac) = uVar8;
    local_28 = *(longlong *)(param_1 + 0xa8);
    if (local_28 == 0) {
      local_2c = 0;
      local_34 = 0;
      local_30 = 0;
    }
    else {
      local_2c = *(undefined4 *)(local_28 + 0x7c);
      local_34 = *(undefined4 *)(local_28 + 0xcb8);
      local_30 = (undefined4)(longlong)(float)*(int *)(local_28 + 0x74);
    }
    local_38 = 1;
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x18))
              (*(longlong **)(param_1 + 0x160),&local_40,&local_38,*(undefined8 *)(param_1 + 0x1c0))
    ;
    ppuVar12 = (undefined8 **)(param_1 + 0x170);
    if (ppuVar12 != &local_40) {
      puVar5 = *ppuVar12;
      *ppuVar12 = local_40;
      local_40 = (undefined8 *)0x0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_1477d7188;
      (**(code **)*puVar5)(puVar5,1);
    }
    if (local_40 != (undefined8 *)0x0) {
      (**(code **)*local_40)(local_40,1);
    }
  }
LAB_1477d7188:
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
LAB_1477d71a5:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477d72ba FUN_1477d72ba body=567 status=ok
// SIG undefined FUN_1477d72ba(void)

void FUN_1477d72ba(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong **pplVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) goto LAB_1477d73ad;
  iVar17 = (int)plVar4[1];
  do {
    if (iVar17 == 0) goto LAB_1477d73ad;
    LOCK();
    iVar16 = (int)plVar4[1];
    bVar18 = iVar17 == iVar16;
    if (bVar18) {
      *(int *)(plVar4 + 1) = iVar17 + 1;
      iVar16 = iVar17;
    }
    iVar17 = iVar16;
    UNLOCK();
  } while (!bVar18);
  lVar5 = *param_2;
  if (lVar5 != 0) {
    plVar6 = *(longlong **)(lVar5 + 0x160);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)(param_1 + 0x100);
      FUN_14702dc6a(plVar6);
      uVar3 = *(uint *)(lVar5 + 0x154);
      iVar17 = *(int *)(param_1 + 0x108);
      *(uint *)(param_1 + 0x108) = iVar17 + uVar3;
      if ((uint)(*(int *)(param_1 + 0x10c) - iVar17) < uVar3) {
        FUN_145ca0cd4(plVar6);
      }
      memset((void *)((longlong)iVar17 * 4 + *plVar6),0,(longlong)(int)uVar3 << 2);
      lVar8 = param_2[2];
      FUN_14335aae6(lVar5,plVar6);
      if (lVar8 != 0) {
        local_60 = *(undefined4 *)(lVar5 + 0x150);
        local_58 = *(undefined8 *)(param_1 + 0x1c0);
        local_50 = param_1 + 0x180;
        local_68 = plVar6;
        (**(code **)(*(longlong *)param_2[2] + 0x10))((longlong *)param_2[2],&local_68,param_3);
      }
    }
    else if (param_2[3] == 0) {
      FUN_14335be22(lVar5,param_3);
    }
    else {
      plVar7 = (longlong *)param_2[4];
      if (plVar7 == (longlong *)0x0) {
        pplVar2 = (longlong **)(param_2 + 4);
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_68);
        if (pplVar2 != &local_68) {
          plVar6 = *pplVar2;
          *pplVar2 = local_68;
          local_68 = (longlong *)0x0;
          if (plVar6 == (longlong *)0x0) goto LAB_1477d7341;
          (**(code **)*plVar6)(plVar6,1);
        }
        if (local_68 != (longlong *)0x0) {
          (**(code **)*local_68)(local_68,1);
        }
      }
      else {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
LAB_1477d7341:
      FUN_14335be22(lVar5,param_2[4]);
      local_78 = *(undefined8 *)(param_1 + 0x1c0);
      (**(code **)(*(longlong *)param_2[3] + 0x10))
                ((longlong *)param_2[3],param_2[4],*(undefined8 *)(lVar5 + 0x1c0),param_3);
    }
    uVar9 = *(undefined4 *)(lVar5 + 400);
    uVar10 = *(undefined4 *)(lVar5 + 0x194);
    uVar11 = *(undefined4 *)(lVar5 + 0x198);
    uVar12 = *(undefined4 *)(lVar5 + 0x19c);
    uVar13 = *(undefined4 *)(lVar5 + 0x1a4);
    uVar14 = *(undefined4 *)(lVar5 + 0x1a8);
    uVar15 = *(undefined4 *)(lVar5 + 0x1ac);
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar5 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1a4) = uVar13;
    *(undefined4 *)(param_1 + 0x1a8) = uVar14;
    *(undefined4 *)(param_1 + 0x1ac) = uVar15;
    *(undefined4 *)(param_1 + 400) = uVar9;
    *(undefined4 *)(param_1 + 0x194) = uVar10;
    *(undefined4 *)(param_1 + 0x198) = uVar11;
    *(undefined4 *)(param_1 + 0x19c) = uVar12;
  }
  LOCK();
  plVar6 = plVar4 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1477d73ad:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477d74f2 FUN_1477d74f2 body=179 status=ok
// SIG undefined FUN_1477d74f2(void)

void FUN_1477d74f2(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = (code *)0x0;
  local_58 = (longlong *)0x0;
  cVar2 = FUN_1403c1b2e(param_1 + 0x400,local_68);
  if (cVar2 != '\0') {
    do {
      pcVar1 = local_68[0];
      plVar4 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar4 = local_48;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar3);
      cVar2 = FUN_1403c1b2e(param_1 + 0x400,local_68);
    } while (cVar2 != '\0');
  }
  if (local_68[0] != (code *)0x0) {
    plVar4 = local_48;
    if (local_58 != (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d75a6 FUN_1477d75a6 body=12 status=ok
// SIG undefined FUN_1477d75a6(void)

void FUN_1477d75a6(longlong param_1)

{
  FUN_144729dda(param_1 + 0x4f0);
  return;
}



// FUNCTION 1477d75b2 FUN_1477d75b2 body=760 status=ok
// SIG undefined FUN_1477d75b2(void)

ulonglong FUN_1477d75b2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 unaff_RSI;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  double dVar16;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong lStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar12 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(byte *)(param_1 + 0x45c) & 4) != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x420);
    EnterCriticalSection(lpCriticalSection);
    if ((longlong)*(int *)(param_1 + 0x418) != 0) {
      plVar13 = *(longlong **)(param_1 + 0x410);
      plVar14 = plVar13 + (longlong)*(int *)(param_1 + 0x418) * 2;
      do {
        plVar4 = (longlong *)plVar13[1];
        if (plVar4 != (longlong *)0x0) {
          iVar9 = (int)plVar4[1];
          do {
            if (iVar9 == 0) goto LAB_1477d7681;
            LOCK();
            iVar10 = (int)plVar4[1];
            bVar15 = iVar9 == iVar10;
            if (bVar15) {
              *(int *)(plVar4 + 1) = iVar9 + 1;
              iVar10 = iVar9;
            }
            iVar9 = iVar10;
            UNLOCK();
          } while (!bVar15);
          if (((longlong *)*plVar13 != (longlong *)0x0) &&
             (cVar8 = (**(code **)(*(longlong *)*plVar13 + 0x10))(), cVar8 != '\0')) {
            LOCK();
            plVar13 = plVar4 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
            LeaveCriticalSection(lpCriticalSection);
            goto LAB_1477d75db;
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
LAB_1477d7681:
        plVar13 = plVar13 + 2;
      } while (plVar13 != plVar14);
    }
    LeaveCriticalSection(lpCriticalSection);
    if (((((*(byte *)(*(longlong *)(param_1 + 0xa8) + 0x598) & 0x20) == 0) ||
         (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x110) == 0)) ||
        ((cVar8 = FUN_147d35236(param_1 + 0x2b0), cVar8 == '\0' &&
         (cVar8 = FUN_147d35236(param_1 + 0x2a0), cVar8 == '\0')))) &&
       (((*(int *)(param_1 + 0xb8) == *(int *)(param_1 + 0xe4) &&
         (0.0 <= *(double *)(param_1 + 0x468))) &&
        (dVar16 = *(double *)(*(longlong *)(param_1 + 0xa8) + 0x5a0) - *(double *)(param_1 + 0x468),
        *(double *)(param_1 + 0x460) <= dVar16 && dVar16 != *(double *)(param_1 + 0x460))))) {
      plVar13 = (longlong *)(param_1 + 0x38);
      lVar3 = param_1 + 0x48;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      lStack_58 = lVar3;
      if (*(int *)(param_1 + 0x60) == 0) {
        iVar9 = 0;
      }
      else {
        FUN_1449c0562(&local_60);
        iVar9 = *(int *)(param_1 + 0x60);
      }
      uStack_68 = CONCAT44(uStack_44,uStack_48);
      local_70 = local_50;
      uVar7 = local_70;
      local_80 = local_60;
      lStack_78 = lStack_58;
      local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      local_88 = plVar13;
      if ((local_70._4_4_ != iVar9) || (lStack_58 != lVar3)) {
        iVar10 = local_70._4_4_;
        local_70 = uVar7;
        do {
          lVar5 = *local_88;
          plVar14 = *(longlong **)(lVar5 + 0x10 + (longlong)iVar10 * 0x38);
          if (plVar14 != (longlong *)0x0) {
            iVar11 = (int)plVar14[1];
            do {
              if (iVar11 == 0) goto LAB_1477d782e;
              LOCK();
              iVar6 = (int)plVar14[1];
              bVar15 = iVar11 == iVar6;
              if (bVar15) {
                *(int *)(plVar14 + 1) = iVar11 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
              UNLOCK();
            } while (!bVar15);
            if ((*(longlong *)(lVar5 + (longlong)iVar10 * 0x38 + 8) != 0) &&
               (cVar8 = FUN_1477d75b2(), cVar8 != '\0')) {
              LOCK();
              plVar13 = plVar14 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              uVar12 = CONCAT71((int7)((ulonglong)&local_80 >> 8),1);
              if ((int)*plVar13 == 0) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar2 = (int *)((longlong)plVar14 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                }
              }
              goto LAB_1477d75db;
            }
            LOCK();
            plVar4 = plVar14 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
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
LAB_1477d782e:
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
          FUN_1449c0562(&local_80);
          iVar10 = local_70._4_4_;
          uVar7 = local_70;
        } while (local_88 != plVar13 || (lStack_78 != lVar3 || local_70._4_4_ != iVar9));
      }
      local_70 = uVar7;
      uVar12 = 0;
    }
  }
LAB_1477d75db:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1477d78ac FUN_1477d78ac body=357 status=ok
// SIG undefined FUN_1477d78ac(void)

void FUN_1477d78ac(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
  iVar1 = *(int *)(param_1 + 0x418);
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x410);
    bVar4 = true;
    if ((*plVar2 != 0) && (plVar2[1] != 0)) {
      bVar4 = *(int *)(plVar2[1] + 8) < 1;
    }
    iVar10 = 0;
    iVar5 = 0;
LAB_1477d7918:
    do {
      if (iVar5 + 1 < iVar1) {
        lVar6 = (longlong)iVar5;
        lVar12 = lVar6 + 2;
        plVar7 = plVar2 + lVar6 * 2 + 3;
        bVar3 = true;
        lVar9 = -1;
        do {
          iVar8 = (int)lVar9;
          if ((plVar7[-1] == 0) || (*plVar7 == 0)) {
            if (!bVar4) {
              iVar11 = iVar5 - iVar8;
              iVar8 = -iVar8;
              goto LAB_1477d79b5;
            }
          }
          else if ((bool)(*(int *)(*plVar7 + 8) < 1 ^ bVar4)) {
            iVar11 = iVar5 - iVar8;
            break;
          }
          bVar3 = lVar12 < lVar13;
          lVar9 = lVar9 + -1;
          lVar12 = lVar12 + 1;
          plVar7 = plVar7 + 2;
          iVar11 = iVar1;
        } while (lVar6 - lVar13 != lVar9);
      }
      else {
        bVar3 = false;
        iVar11 = iVar5 + 1;
      }
      iVar8 = iVar11 - iVar5;
      if (bVar4) {
        FUN_1477ea093(plVar2 + (longlong)iVar5 * 2,iVar8);
        bVar4 = false;
        iVar5 = iVar11;
        if (!bVar3) break;
        goto LAB_1477d7918;
      }
LAB_1477d79b5:
      if (iVar10 != iVar5) {
        memmove(plVar2 + (longlong)iVar10 * 2,plVar2 + (longlong)iVar5 * 2,(longlong)iVar8 << 4);
      }
      iVar10 = iVar10 + iVar8;
      bVar4 = true;
      iVar5 = iVar11;
    } while (bVar3);
    *(int *)(param_1 + 0x418) = iVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x0001477d7a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
  return;
}



// FUNCTION 1477d7a12 FUN_1477d7a12 body=450 status=ok
// SIG undefined FUN_1477d7a12(void)

void FUN_1477d7a12(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
  iVar3 = *(int *)(param_1 + 0x418);
  lVar12 = (longlong)iVar3;
  if (lVar12 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x410);
    plVar5 = (longlong *)plVar4[1];
    iVar10 = 0;
    if (plVar5 == (longlong *)0x0) {
      lVar14 = 0;
    }
    else {
      iVar7 = (int)plVar5[1];
      lVar14 = 0;
      do {
        if (iVar7 == 0) goto LAB_1477d7aa0;
        LOCK();
        iVar8 = (int)plVar5[1];
        bVar15 = iVar7 == iVar8;
        if (bVar15) {
          *(int *)(plVar5 + 1) = iVar7 + 1;
          iVar8 = iVar7;
        }
        iVar7 = iVar8;
        UNLOCK();
      } while (!bVar15);
      lVar14 = *plVar4;
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
LAB_1477d7aa0:
    iVar7 = 0;
    bVar15 = lVar14 == param_2;
    do {
      lVar13 = (longlong)iVar7;
      lVar14 = lVar13;
      iVar8 = iVar7 + 1;
      if (iVar7 + 1 < iVar3) {
        iVar8 = iVar3;
      }
      do {
        lVar14 = lVar14 + 1;
        if (lVar12 <= lVar14) goto LAB_1477d7b47;
        plVar5 = (longlong *)plVar4[lVar14 * 2 + 1];
        if (plVar5 == (longlong *)0x0) {
LAB_1477d7b31:
          lVar11 = 0;
        }
        else {
          iVar9 = (int)plVar5[1];
          do {
            if (iVar9 == 0) goto LAB_1477d7b31;
            LOCK();
            iVar6 = (int)plVar5[1];
            bVar16 = iVar9 == iVar6;
            if (bVar16) {
              *(int *)(plVar5 + 1) = iVar9 + 1;
              iVar6 = iVar9;
            }
            iVar9 = iVar6;
            UNLOCK();
          } while (!bVar16);
          lVar11 = plVar4[lVar14 * 2];
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
      } while (bVar15 == (lVar11 == param_2));
      iVar8 = (int)lVar14;
LAB_1477d7b47:
      iVar9 = iVar8 - iVar7;
      if (bVar15 == false) {
        if (iVar10 != iVar7) {
          memmove(plVar4 + (longlong)iVar10 * 2,plVar4 + lVar13 * 2,(longlong)iVar9 << 4);
        }
        iVar10 = iVar10 + iVar9;
      }
      else {
        FUN_1477ea093(plVar4 + lVar13 * 2,iVar9);
      }
      iVar7 = iVar8;
      bVar15 = (bool)(bVar15 ^ 1);
    } while (lVar14 < lVar12);
    *(int *)(param_1 + 0x418) = iVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x0001477d7bcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
  return;
}



// FUNCTION 1477d7bd4 FUN_1477d7bd4 body=1446 status=ok
// SIG undefined FUN_1477d7bd4(void)

void FUN_1477d7bd4(longlong param_1)

{
  undefined8 **ppuVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  longlong lVar16;
  float fVar17;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined8 **local_78;
  undefined8 *local_68 [3];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong **)(param_1 + 0x218) != (longlong *)0x0) {
    cVar8 = (**(code **)(**(longlong **)(param_1 + 0x218) + 8))();
    if (cVar8 == '\0') {
      iVar9 = *(int *)(param_1 + 0x234);
      iVar15 = 0;
      *(undefined4 *)(param_1 + 0x230) = 0;
      if (iVar9 < 0) {
        FUN_1470345fa(param_1 + 0x228,0);
        iVar15 = *(int *)(param_1 + 0x230);
        iVar9 = *(int *)(param_1 + 0x234);
      }
      uVar11 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0xcb8) *
               *(int *)(*(longlong *)(param_1 + 0xa8) + 0x7c);
      *(uint *)(param_1 + 0x230) = uVar11 + iVar15;
      if ((uint)(iVar9 - iVar15) < uVar11) {
        FUN_145ca0cd4(param_1 + 0x228,iVar15);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x160);
  if (plVar5 == (longlong *)0x0) {
    lVar2 = param_1 + 0x228;
    iVar9 = *(int *)(param_1 + 0x234);
    iVar15 = 0;
    *(undefined4 *)(param_1 + 0x230) = 0;
    if (iVar9 < 0) {
      FUN_1470345fa(lVar2,0);
      iVar15 = *(int *)(param_1 + 0x230);
      iVar9 = *(int *)(param_1 + 0x234);
    }
    lVar3 = param_1 + 0x200;
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa8) + 0xcb8) *
             (longlong)*(int *)(*(longlong *)(param_1 + 0xa8) + 0x7c);
    uVar11 = (uint)lVar16;
    *(uint *)(param_1 + 0x230) = uVar11 + iVar15;
    if ((uint)(iVar9 - iVar15) < uVar11) {
      FUN_145ca0cd4(lVar2);
    }
    memset((void *)((longlong)iVar15 * 4 + *(longlong *)(param_1 + 0x228)),0,lVar16 * 4);
    FUN_14335aae6(param_1,lVar2);
    cVar8 = FUN_147038528(lVar3);
    if (cVar8 == '\0') {
      local_88 = param_1 + 0x268;
      FUN_147043d56(*(undefined8 *)(param_1 + 0x218),local_68,
                    (float)*(int *)(*(longlong *)(param_1 + 0xa8) + 0x7c) /
                    (float)*(int *)(*(longlong *)(param_1 + 0xa8) + 0x74),param_1 + 0x26c);
      FUN_147038416(lVar3,local_68);
      FUN_145be9032(local_68);
      fVar17 = (float)*(int *)(*(longlong *)(param_1 + 0xa8) + 0x74);
      if (1e-08 < ABS(*(float *)(param_1 + 0x26c) - fVar17)) {
        fVar17 = *(float *)(param_1 + 0x26c) / fVar17;
        FUN_147064d4e(param_1 + 0x270,4,fVar17,*(undefined4 *)(param_1 + 0x150));
        *(undefined1 *)(param_1 + 0x278) = 1;
        iVar9 = *(int *)(param_1 + 0x244);
        iVar15 = 0;
        if (iVar9 < 0) {
          *(undefined4 *)(param_1 + 0x240) = 0;
          FUN_1470345fa(param_1 + 0x238,0);
          iVar15 = *(int *)(param_1 + 0x240);
          iVar9 = *(int *)(param_1 + 0x244);
        }
        uVar11 = (uint)((float)*(int *)(param_1 + 0x230) * fVar17 + 16.0);
        *(uint *)(param_1 + 0x240) = iVar15 + uVar11;
        if ((uint)(iVar9 - iVar15) < uVar11) {
          FUN_145ca0cd4(param_1 + 0x238);
        }
      }
    }
    iVar9 = *(int *)(param_1 + 0x230);
    local_68[0] = (undefined8 *)CONCAT44(local_68[0]._4_4_,iVar9 / *(int *)(param_1 + 0x150));
    if (*(char *)(param_1 + 0x278) == '\x01') {
      local_80 = *(undefined4 *)(param_1 + 0x240);
      local_88 = *(longlong *)(param_1 + 0x238);
      local_78 = local_68;
      FUN_147064d5c(param_1 + 0x270,*(undefined8 *)(param_1 + 0x228),iVar9,0);
    }
    else {
      if (*(longlong *)(param_1 + 0x238) != 0) {
        FUN_1400020a8();
        iVar9 = *(int *)(param_1 + 0x230);
      }
      *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x228);
      *(undefined8 *)(param_1 + 0x228) = 0;
      *(undefined8 *)(param_1 + 0x230) = 0;
      *(int *)(param_1 + 0x240) = iVar9;
      *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_1 + 0x234);
    }
    iVar9 = *(int *)(param_1 + 0x150);
    iVar15 = *(int *)(param_1 + 0x268);
    if (iVar15 == iVar9) {
      if (*(longlong *)(param_1 + 0x248) != 0) {
        FUN_1400020a8();
      }
      uVar14 = *(undefined8 *)(param_1 + 0x238);
      *(undefined8 *)(param_1 + 0x248) = uVar14;
      *(undefined8 *)(param_1 + 0x238) = 0;
      uVar4 = *(undefined4 *)(param_1 + 0x240);
      *(undefined4 *)(param_1 + 0x250) = uVar4;
      *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_1 + 0x244);
      *(undefined8 *)(param_1 + 0x240) = 0;
    }
    else {
      lVar2 = param_1 + 0x248;
      iVar10 = *(int *)(param_1 + 0x254);
      iVar13 = 0;
      iVar12 = iVar15;
      if (iVar10 < 0) {
        *(undefined4 *)(param_1 + 0x250) = 0;
        FUN_1470345fa(lVar2,0);
        iVar12 = *(int *)(param_1 + 0x268);
        iVar13 = *(int *)(param_1 + 0x250);
        iVar10 = *(int *)(param_1 + 0x254);
      }
      *(int *)(param_1 + 0x250) = iVar12 * (int)local_68[0] + iVar13;
      if ((uint)(iVar10 - iVar13) < (uint)(iVar12 * (int)local_68[0])) {
        FUN_145ca0cd4(lVar2);
      }
      *(undefined4 *)(param_1 + 0x260) = 0;
      if (*(int *)(param_1 + 0x264) < 0) {
        FUN_1470345fa(param_1 + 600,0);
      }
      local_88 = param_1 + 600;
      FUN_143343e04(0,*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x268),0);
      FUN_1477d58b2(*(undefined4 *)(param_1 + 0x150),param_1 + 0x238,
                    *(undefined4 *)(param_1 + 0x268),lVar2);
      uVar4 = *(undefined4 *)(param_1 + 0x250);
      uVar14 = *(undefined8 *)(param_1 + 0x248);
    }
    FUN_14703849e(lVar3,uVar14,uVar4);
    FUN_147043e02(*(undefined8 *)(param_1 + 0x218));
    if (iVar15 == iVar9) {
      if (*(longlong *)(param_1 + 0x238) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x248);
      *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_1 + 0x250);
      *(undefined8 *)(param_1 + 0x248) = 0;
      *(undefined8 *)(param_1 + 0x250) = 0;
    }
    if (*(char *)(param_1 + 0x278) == '\0') {
      if (*(longlong *)(param_1 + 0x228) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_1 + 0x238);
      *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x240);
      *(undefined8 *)(param_1 + 0x238) = 0;
      *(undefined8 *)(param_1 + 0x240) = 0;
    }
    goto LAB_1477d7c7b;
  }
  ppuVar1 = (undefined8 **)(param_1 + 0x280);
  plVar6 = *(longlong **)(param_1 + 0x280);
  if (plVar6 == (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5,local_68);
    if (ppuVar1 != local_68) {
      puVar7 = *ppuVar1;
      *ppuVar1 = local_68[0];
      local_68[0] = (undefined8 *)0x0;
      if (puVar7 == (undefined8 *)0x0) goto LAB_1477d7c41;
      (**(code **)*puVar7)(puVar7,1);
    }
    if (local_68[0] != (undefined8 *)0x0) {
      (**(code **)*local_68[0])(local_68[0],1);
    }
  }
  else {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
LAB_1477d7c41:
  FUN_14335be22(param_1,*(undefined8 *)(param_1 + 0x280));
  iVar9 = FUN_1470455f0(*(undefined8 *)(param_1 + 0x220));
  if (0 < iVar9) {
    FUN_14704557c(*(undefined8 *)(param_1 + 0x220),ppuVar1);
  }
  FUN_147045606(*(undefined8 *)(param_1 + 0x220));
LAB_1477d7c7b:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d819a FUN_1477d819a body=151 status=ok
// SIG undefined FUN_1477d819a(void)

undefined8 * FUN_1477d819a(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c8));
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x88);
    lVar2 = 0;
    do {
      if ((*(char *)(lVar1 + 0x2c + lVar2) == '\x01') && (param_3 < *(int *)(lVar1 + 8 + lVar2))) {
        lVar1 = *(longlong *)(lVar1 + lVar2);
        *param_2 = *(undefined8 *)(lVar1 + (longlong)param_3 * 0x10);
        lVar1 = *(longlong *)(lVar1 + 8 + (longlong)param_3 * 0x10);
        param_2[1] = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
        }
        goto LAB_1477d81f5;
      }
      lVar2 = lVar2 + 0x30;
    } while ((longlong)*(int *)(param_1 + 0x90) * 0x30 != lVar2);
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1477d81f5:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c8));
  return param_2;
}



// FUNCTION 1477d8232 FUN_1477d8232 body=8 status=ok
// SIG undefined FUN_1477d8232(void)

void FUN_1477d8232(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x160) = param_2;
  return;
}



// FUNCTION 1477d823a FUN_1477d823a body=315 status=ok
// SIG undefined FUN_1477d823a(void)

void FUN_1477d823a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1477d5842(param_1 + 0x160);
  plVar1 = (longlong *)(param_1 + 0x38);
  lVar2 = param_1 + 0x48;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar5 = *(int *)(param_1 + 0x60);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar5) || (uStack_48 != lVar2)) {
    do {
      lVar3 = *local_78 + (longlong)iStack_5c * 0x38;
      puVar4 = *(undefined8 **)(*local_78 + 0x18 + (longlong)iStack_5c * 0x38);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar3 + 0x18) = 0;
        (**(code **)*puVar4)(puVar4,1);
      }
      puVar4 = *(undefined8 **)(lVar3 + 0x20);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar3 + 0x20) = 0;
        (**(code **)*puVar4)(puVar4,1);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar5));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d8376 FUN_1477d8376 body=238 status=ok
// SIG undefined FUN_1477d8376(void)

void FUN_1477d8376(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x34) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_1470345fa(param_1 + 0x28,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 0x44) < 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_1470345fa(param_1 + 0x38,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x54) < 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_1470345fa(param_1 + 0x48,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 100) < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_1470345fa(param_1 + 0x58,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001477d83fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1477d8464 FUN_1477d8464 body=127 status=ok
// SIG undefined FUN_1477d8464(void)

void FUN_1477d8464(longlong param_1,float param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x450) = 0;
  if (*(int *)(param_1 + 0x454) < 0) {
    FUN_1470345fa(param_1 + 0x448,0);
  }
  iVar1 = FUN_1477bfa30(*(undefined8 *)(param_1 + 0xa8));
  iVar1 = (int)((float)iVar1 * param_2);
  if (-1 < iVar1) {
    if (*(int *)(param_1 + 0x454) < iVar1) {
      FUN_1470345fa(param_1 + 0x448);
    }
    *(byte *)(param_1 + 0x45c) = *(byte *)(param_1 + 0x45c) | 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 1477d84e4 FUN_1477d84e4 body=105 status=ok
// SIG undefined FUN_1477d84e4(void)

longlong FUN_1477d84e4(longlong param_1,float *param_2,float *param_3)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
  *(byte *)(param_1 + 0x45c) = *(byte *)(param_1 + 0x45c) & 0xfe;
  *param_2 = (float)*(int *)(param_1 + 0x150);
  iVar1 = FUN_1477bfa30(*(undefined8 *)(param_1 + 0xa8));
  *param_3 = (float)iVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
  return param_1 + 0x448;
}



// FUNCTION 1477d854e FUN_1477d854e body=231 status=ok
// SIG undefined FUN_1477d854e(void)

void FUN_1477d854e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
  plStack_40 = *(longlong **)(param_2 + 0x10);
  if (plStack_40 == (longlong *)0x0) {
LAB_1477d858d:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar6 = true;
  }
  else {
    iVar5 = (int)plStack_40[1];
    do {
      if (iVar5 == 0) goto LAB_1477d858d;
      LOCK();
      iVar4 = (int)plStack_40[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plStack_40 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_48 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)((longlong)plStack_40 + 0xc) = *(int *)((longlong)plStack_40 + 0xc) + 1;
    UNLOCK();
    bVar6 = false;
  }
  plVar3 = plStack_40;
  FUN_1477eb708(param_1 + 0x410,&local_48);
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_40 + 0x10))();
    }
  }
  if (!bVar6) {
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477d8636 FUN_1477d8636 body=195 status=ok
// SIG undefined FUN_1477d8636(void)

void FUN_1477d8636(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
  local_38 = *param_2;
  local_30 = (longlong *)param_2[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
  }
  FUN_1477eb708(param_1 + 0x410,&local_38);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
  plVar3 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d86fa FUN_1477d86fa body=240 status=ok
// SIG undefined FUN_1477d86fa(void)

void FUN_1477d86fa(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
  plStack_40 = *(longlong **)(param_2 + 0x10);
  if (plStack_40 == (longlong *)0x0) {
LAB_1477d8739:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar6 = true;
  }
  else {
    iVar5 = (int)plStack_40[1];
    do {
      if (iVar5 == 0) goto LAB_1477d8739;
      LOCK();
      iVar4 = (int)plStack_40[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plStack_40 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_48 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)((longlong)plStack_40 + 0xc) = *(int *)((longlong)plStack_40 + 0xc) + 1;
    UNLOCK();
    bVar6 = false;
  }
  plVar3 = plStack_40;
  local_38 = &local_48;
  FUN_1477eb8e2(param_1 + 0x410);
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_40 + 0x10))();
    }
  }
  if (!bVar6) {
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477d87ec FUN_1477d87ec body=201 status=ok
// SIG undefined FUN_1477d87ec(void)

int FUN_1477d87ec(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_68 [36];
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x470);
  if (iVar1 == 0) {
    local_34 = 2;
    local_30 = 1;
    local_2c = 0x40a00000;
    iVar1 = FUN_1477bfa30(*(undefined8 *)(param_1 + 0xa8));
    local_44 = (float)iVar1;
    local_3c = (float)param_2;
    local_40 = *(undefined4 *)(param_1 + 0x150);
    local_38 = (float)param_3;
    FUN_1470333d2(param_1 + 0x308,&local_44);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    LOCK();
    iVar1 = *(int *)(param_1 + 0x470);
    *(int *)(param_1 + 0x470) = 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d88b6 FUN_1477d88b6 body=104 status=ok
// SIG undefined FUN_1477d88b6(void)

void FUN_1477d88b6(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  FUN_1403350f6(param_1 + 0x478,&local_28);
  FUN_144a7b126(param_1 + 0x478,&local_11,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d8920 FUN_1477d8920 body=107 status=ok
// SIG undefined FUN_1477d8920(void)

void FUN_1477d8920(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  FUN_140805e68(param_1 + 0x478,&local_28,1);
  FUN_144a7b126(param_1 + 0x478,&local_11,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d898c FUN_1477d898c body=335 status=ok
// SIG undefined FUN_1477d898c(void)

void FUN_1477d898c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0xbf800000;
  FUN_1477e7f38(&local_a8);
  uStack_90 = *(undefined8 *)(param_2 + 0x18);
  local_88 = *(undefined4 *)(param_2 + 0x20);
  local_98 = (float)*(undefined8 *)(param_2 + 0x10);
  if (30.0 <= local_98) {
    local_98 = 30.0;
  }
  if (local_98 <= 1.0) {
    local_98 = 1.0;
  }
  uStack_94 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  local_58 = CONCAT44(1.0 / local_98,(undefined4)local_58);
  local_48 = *param_3;
  local_40 = param_3[1];
  FUN_1403350f6(&local_80);
  FUN_144a7b126(&local_80,&local_31,1);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a0));
  iVar1 = *(int *)(param_1 + 0x490);
  *(uint *)(param_1 + 0x490) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x494) < iVar1 + 1U) {
    FUN_1477ebb52((longlong *)(param_1 + 0x488),iVar1);
  }
  FUN_1477ebac0((longlong)iVar1 * 0x58 + *(longlong *)(param_1 + 0x488),&local_a8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a0));
  FUN_1477d8adc(&local_a8);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d8adc FUN_1477d8adc body=80 status=ok
// SIG undefined FUN_1477d8adc(void)

void FUN_1477d8adc(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477d8b2c FUN_1477d8b2c body=309 status=ok
// SIG undefined FUN_1477d8b2c(void)

void FUN_1477d8b2c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a0));
  if ((longlong)*(int *)(param_1 + 0x490) != 0) {
    plVar1 = (longlong *)(param_1 + 0x488);
    lVar6 = (longlong)*(int *)(param_1 + 0x490) * 0x58;
    lVar8 = *(longlong *)(param_1 + 0x488) + 0x28;
    do {
      cVar2 = FUN_1468fcae8(lVar8,param_2);
      if (cVar2 != '\0') {
        local_60 = *param_2;
        local_58 = param_2[1];
        FUN_140805e68(lVar8,&local_60,1);
        FUN_144a7b126(lVar8,&local_49,1);
      }
      lVar8 = lVar8 + 0x58;
      lVar6 = lVar6 + -0x58;
    } while (lVar6 != 0);
    iVar4 = *(int *)(param_1 + 0x490);
    if (0 < iVar4) {
      uVar7 = 0;
      bVar3 = false;
      do {
        uVar7 = (ulonglong)(int)uVar7;
        piVar5 = (int *)(*plVar1 + uVar7 * 0x58 + 0x30);
        while (0 < *piVar5) {
          uVar7 = uVar7 + 1;
          piVar5 = piVar5 + 0x16;
          if ((longlong)iVar4 <= (longlong)uVar7) {
            if (!bVar3) goto LAB_1477d8c0f;
            goto LAB_1477d8c58;
          }
        }
        FUN_1477ebcee(plVar1,uVar7 & 0xffffffff);
        iVar4 = *(int *)(param_1 + 0x490);
        bVar3 = true;
      } while ((int)uVar7 < iVar4);
LAB_1477d8c58:
      FUN_1477ebcb0(plVar1);
    }
  }
LAB_1477d8c0f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a0));
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d8c62 FUN_1477d8c62 body=1122 status=ok
// SIG undefined FUN_1477d8c62(void)

void FUN_1477d8c62(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  undefined1 auStack_108 [32];
  uint local_e8;
  uint local_e4;
  LPCRITICAL_SECTION local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined1 local_94 [4];
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80 [2];
  undefined2 local_7e;
  undefined4 local_7c;
  undefined4 local_78;
  float fStack_74;
  float local_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_146269f19();
  LOCK();
  *(undefined4 *)(param_1 + 0x498) = 1;
  UNLOCK();
  uVar5 = *param_2;
  *(undefined8 *)(param_1 + 0x3c8) = uVar5;
  uVar15 = (int)uVar5 - 1;
  local_80[0] = (byte)((ulonglong)uVar5 >> 8);
  cVar8 = (char)((ulonglong)uVar5 >> 0x10);
  local_7e = 0x200;
  if ((byte)uVar15 < 6) {
    local_7e = *(undefined2 *)(&DAT_14a57d378 + (ulonglong)(uVar15 & 0xff) * 2);
  }
  if (3 < local_80[0]) {
    local_80[0] = 0;
  }
  local_7c = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_e8 = (uint)(byte)(2 - (cVar8 == '\x01'));
  if (cVar8 == '\0') {
    local_e8 = 0;
  }
  bVar9 = (byte)((ulonglong)uVar5 >> 0x18);
  local_e4 = 3;
  if (bVar9 < 3) {
    local_e4 = (uint)bVar9;
  }
  local_e0 = (LPCRITICAL_SECTION)(param_1 + 0x3a0);
  EnterCriticalSection(local_e0);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x74);
  plVar10 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14a57c660;
  FUN_14703a5c2(plVar10 + 2,local_80,(float)iVar4);
  if (plVar10 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x3d0) = 0x10;
    plVar16 = *(longlong **)(param_1 + 0x3d8);
    if (plVar16 == (longlong *)0x0) goto LAB_1477d8dfe;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
LAB_1477d8dbd:
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    if (plVar10 == (longlong *)0x0) goto LAB_1477d8dfe;
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x3d0) = plVar10 + 2;
    plVar16 = *(longlong **)(param_1 + 0x3d8);
    if (plVar10 == plVar16) {
      LOCK();
      plVar16 = plVar10 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x3d8) = plVar10;
      if (plVar16 != (longlong *)0x0) goto LAB_1477d8dbd;
    }
  }
  LOCK();
  plVar16 = plVar10 + 1;
  *(int *)plVar16 = (int)*plVar16 + -1;
  UNLOCK();
  if ((int)*plVar16 == 0) {
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar2 = (int *)((longlong)plVar10 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
LAB_1477d8dfe:
  if ((longlong)*(int *)(param_1 + 0x490) != 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x488);
    local_d8 = puVar13 + (longlong)*(int *)(param_1 + 0x490) * 0xb;
    do {
      local_94[0] = (undefined1)local_e8;
      local_90 = *(undefined4 *)((longlong)puVar13 + 0x14);
      local_8c = *(undefined1 *)(puVar13 + 3);
      local_8b = *(undefined1 *)((longlong)puVar13 + 0x19);
      local_88 = *(undefined4 *)(puVar13 + 4);
      local_84 = *(undefined4 *)((longlong)puVar13 + 0x1c);
      FUN_147039a12(&local_d0,local_94);
      puVar11 = local_d0;
      plVar10 = puVar13 + 7;
      if (plVar10 == &local_d0) {
LAB_1477d8ea9:
        if (local_d0 != (undefined8 *)0x0) {
          (**(code **)*local_d0)(local_d0,1);
        }
        puVar11 = (undefined8 *)*plVar10;
      }
      else {
        puVar6 = (undefined8 *)*plVar10;
        *plVar10 = (longlong)local_d0;
        local_d0 = (undefined8 *)0x0;
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,1);
          goto LAB_1477d8ea9;
        }
      }
      if ((puVar11 != (undefined8 *)0x0) && ((longlong)*(int *)(puVar13 + 1) != 0)) {
        puVar14 = (undefined4 *)*puVar13;
        puVar17 = puVar14 + (longlong)*(int *)(puVar13 + 1) * 4;
        do {
          local_a0[0] = (undefined1)local_e4;
          _local_9c = CONCAT44(puVar14[3],*puVar14);
          (**(code **)(*(longlong *)puVar13[7] + 0x28))((longlong *)puVar13[7],local_a0);
          local_78 = 0x473b8000;
          fStack_74 = 10.0;
          local_70 = 100.0;
          uStack_6c = 2;
          local_68 = 1;
          local_64 = 0x40a00000;
          FUN_147034930(&local_d0,&local_78);
          uStack_6c = 2;
          local_68 = 1;
          local_64 = 0x40a00000;
          local_78 = *(undefined4 *)(puVar13 + 2);
          fStack_74 = (float)(int)puVar14[1];
          local_70 = (float)(int)puVar14[2];
          FUN_1470315fc(&local_d0,&local_78);
          iVar4 = *(int *)(puVar13 + 9);
          *(uint *)(puVar13 + 9) = iVar4 + 1U;
          if (*(uint *)((longlong)puVar13 + 0x4c) < iVar4 + 1U) {
            FUN_1477ebde6(puVar13 + 8,iVar4);
          }
          lVar7 = puVar13[8];
          lVar12 = (longlong)iVar4 * 0x30;
          puVar11 = (undefined8 *)(lVar7 + 0x20 + lVar12);
          *puVar11 = local_b0;
          puVar11[1] = uStack_a8;
          puVar11 = (undefined8 *)(lVar7 + 0x10 + lVar12);
          *puVar11 = local_c0;
          puVar11[1] = uStack_b8;
          puVar3 = (undefined4 *)(lVar7 + lVar12);
          *puVar3 = (undefined4)local_d0;
          puVar3[1] = local_d0._4_4_;
          puVar3[2] = uStack_c8;
          puVar3[3] = uStack_c4;
          puVar14 = puVar14 + 4;
        } while (puVar14 != puVar17);
      }
      puVar13 = puVar13 + 0xb;
    } while (puVar13 != local_d8);
  }
  LeaveCriticalSection(local_e0);
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477d90c6 FUN_1477d90c6 body=119 status=ok
// SIG undefined FUN_1477d90c6(void)

void FUN_1477d90c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_146269f19();
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a0));
  LOCK();
  *(undefined4 *)(param_1 + 0x498) = 0;
  UNLOCK();
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x3d8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x3d8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001477d9136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a0));
  return;
}



// FUNCTION 1477d913e FUN_1477d913e body=68 status=ok
// SIG undefined FUN_1477d913e(void)

void FUN_1477d913e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147d35818(param_1 + 0x2a0);
  FUN_147d35818(param_1 + 0x2c0,param_3);
  FUN_147d35818(param_1 + 0x2b0,param_4);
  return;
}



// FUNCTION 1477d9182 FUN_1477d9182 body=8 status=ok
// SIG undefined FUN_1477d9182(void)

longlong FUN_1477d9182(longlong param_1)

{
  return param_1 + 0x2a0;
}



// FUNCTION 1477d918a FUN_1477d918a body=8 status=ok
// SIG undefined FUN_1477d918a(void)

longlong FUN_1477d918a(longlong param_1)

{
  return param_1 + 0x2c0;
}



// FUNCTION 1477d9192 FUN_1477d9192 body=1171 status=ok
// SIG undefined FUN_1477d9192(void)

void FUN_1477d9192(longlong param_1)

{
  longlong *plVar1;
  void *_Src;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar5;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  LPCRITICAL_SECTION local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined4 local_b4;
  longlong *local_a8;
  undefined8 uStack_a0;
  LARGE_INTEGER local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x470) != 0) {
    local_c8 = (void *)0x0;
    uStack_c0 = (void *)0x0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
    if (0 < *(int *)(param_1 + 0x370)) {
      uStack_c0 = (void *)CONCAT44(uStack_c0._4_4_,*(int *)(param_1 + 0x370));
      FUN_14475e4ac(&local_c8,0);
      memcpy(local_c8,(void *)(param_1 + 0x2e8),(longlong)*(int *)(param_1 + 0x370) << 2);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
    if (0 < *(int *)(param_1 + 0x480)) {
      FUN_147d3c8e2(param_1 + 0x478,&local_c8);
    }
    if (local_c8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_1 + 0x498) != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x3a0);
    EnterCriticalSection(lpCriticalSection);
    if ((0 < *(int *)(param_1 + 0x490)) && (*(longlong *)(param_1 + 0x3d0) != 0)) {
      local_a8 = (longlong *)0x0;
      uStack_a0 = 0;
      local_d8 = *(longlong *)(param_1 + 0x3d0);
      local_d0 = lpCriticalSection;
      FUN_14703a6a4();
      if ((longlong)*(int *)(param_1 + 0x490) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x488);
        lVar9 = (longlong)*(int *)(param_1 + 0x490) * 0x58;
        do {
          local_c8 = (void *)0x0;
          uStack_c0 = (void *)0x0;
          QueryPerformanceCounter(&local_98);
          fVar10 = (float)((((double)CONCAT44(0x43300000,local_98.s.LowPart) - 4503599627370496.0) +
                           ((double)CONCAT44(0x45300000,local_98.s.HighPart) -
                           1.9342813113834067e+25)) * DAT_14c83f418);
          if ((*(float *)(lVar8 + 0x50) <= 0.0) ||
             (*(float *)(lVar8 + 0x54) <= fVar10 - *(float *)(lVar8 + 0x50))) {
            *(float *)(lVar8 + 0x50) = fVar10;
            if (*(longlong *)(lVar8 + 0x38) != 0) {
              FUN_14703a69a(*(undefined8 *)(param_1 + 0x3d0),*(longlong *)(lVar8 + 0x38),&local_c8);
            }
            uVar4 = uStack_a0;
            lVar6 = (longlong)(int)uStack_a0;
            uVar3 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar3);
            if (uStack_a0._4_4_ < uVar3) {
              FUN_1477ebeaa(&local_a8,uVar4 & 0xffffffff);
            }
            local_a8[lVar6 * 3] = lVar8;
            local_a8[lVar6 * 3 + 1] = 0;
            local_a8[lVar6 * 3 + 1] = (longlong)local_c8;
            local_c8 = (void *)0x0;
            *(undefined4 *)(local_a8 + lVar6 * 3 + 2) = (undefined4)uStack_c0;
            *(undefined4 *)((longlong)local_a8 + lVar6 * 0x18 + 0x14) = uStack_c0._4_4_;
            uStack_c0 = (void *)0x0;
          }
          if (local_c8 != (void *)0x0) {
            FUN_1400020a8();
          }
          lVar8 = lVar8 + 0x58;
          lVar9 = lVar9 + -0x58;
        } while (lVar9 != 0);
      }
      lVar8 = *(longlong *)(local_d8 + 8);
      if (((*(byte *)(lVar8 + 0x11) & 1) != 0) && (*(longlong *)(lVar8 + 0xd8) != 0)) {
        FUN_14703a484(lVar8 + 0x80);
        *(undefined8 *)(lVar8 + 0xd0) = 0;
        *(undefined8 *)(lVar8 + 0xd8) = 0;
      }
      uVar4 = 0;
      if ((longlong)(int)uStack_a0 != 0) {
        plVar1 = local_a8 + (longlong)(int)uStack_a0 * 3;
        plVar5 = local_a8;
        do {
          pvVar7 = (void *)*plVar5;
          uStack_c0 = (void *)0x0;
          local_b8 = (int)plVar5[2];
          lVar8 = (longlong)local_b8;
          _Src = (void *)plVar5[1];
          local_c8 = pvVar7;
          if (lVar8 == 0) {
            local_b4 = 0;
          }
          else {
            FUN_1447c510a(&uStack_c0,local_b8,0);
            memcpy(uStack_c0,_Src,lVar8 << 2);
            pvVar7 = local_c8;
            if (0 < local_b8) {
              lVar9 = 0;
              lVar8 = 0;
              iVar2 = local_b8;
              do {
                if (lVar8 < *(int *)((longlong)pvVar7 + 0x48)) {
                  lVar6 = *(longlong *)((longlong)pvVar7 + 0x40);
                  fVar10 = *(float *)((longlong)uStack_c0 + lVar8 * 4);
                  iVar2 = *(int *)(lVar6 + 0x1c + lVar9);
                  if (iVar2 == 0) {
                    fVar10 = fVar10 * fVar10 * *(float *)(lVar6 + 0x2c + lVar9) +
                             *(float *)(lVar6 + 0x28 + lVar9) * *(float *)(lVar6 + 0x20 + lVar9);
                    *(float *)(lVar6 + 0x20 + lVar9) = fVar10;
                  }
                  else if (iVar2 == 1) {
                    fVar10 = fVar10 * fVar10 * *(float *)(lVar6 + 0x2c + lVar9) +
                             *(float *)(lVar6 + 0x28 + lVar9) * *(float *)(lVar6 + 0x20 + lVar9);
                    *(float *)(lVar6 + 0x20 + lVar9) = fVar10;
                    if (fVar10 < 0.0) {
                      fVar10 = sqrtf(fVar10);
                    }
                    else {
                      fVar10 = SQRT(fVar10);
                    }
                  }
                  else if (iVar2 == 2) {
                    fVar10 = ABS(fVar10);
                  }
                  fVar11 = *(float *)(lVar6 + 0x18 + lVar9) - fVar10;
                  fVar10 = fVar11 * *(float *)(lVar6 + lVar9 + 4 + (ulonglong)(0.0 < fVar11) * 8) +
                           fVar10;
                  *(float *)(lVar6 + 0x18 + lVar9) = fVar10;
                  *(float *)((longlong)uStack_c0 + lVar8 * 4) = fVar10;
                  iVar2 = local_b8;
                }
                lVar8 = lVar8 + 1;
                lVar9 = lVar9 + 0x30;
              } while (lVar8 < iVar2);
            }
          }
          if (0 < *(int *)((longlong)pvVar7 + 0x30)) {
            FUN_147d3c943((longlong)pvVar7 + 0x28,&uStack_c0);
          }
          if (uStack_c0 != (void *)0x0) {
            FUN_1400020a8();
          }
          plVar5 = plVar5 + 3;
        } while (plVar5 != plVar1);
        uVar4 = uStack_a0 & 0xffffffff;
      }
      FUN_1477ebe7a(local_a8,uVar4);
      lpCriticalSection = local_d0;
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_90 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477d962a FUN_1477d962a body=334 status=ok
// SIG undefined FUN_1477d962a(void)

void FUN_1477d962a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined4 local_20;
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
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FUN_1479b9adc(*(longlong *)(param_1 + 0x8d8),local_1c,local_20,local_21);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d977a FUN_1477d977a body=424 status=ok
// SIG undefined FUN_1477d977a(void)

void FUN_1477d977a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x8d8);
  if (plVar1 != (longlong *)0x0) {
    local_38 = local_25;
    (**(code **)(*plVar1 + 0x5d8))(plVar1,local_1c,local_20,local_24);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d9924 FUN_1477d9924 body=338 status=ok
// SIG undefined FUN_1477d9924(void)

void FUN_1477d9924(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined4 local_20;
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
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x8d8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x5e0))(plVar1,local_1c,local_20,local_21);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d9a78 FUN_1477d9a78 body=279 status=ok
// SIG undefined FUN_1477d9a78(void)

void FUN_1477d9a78(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_79 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_79);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_79);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x8d8) == 0) {
    local_58 = 0;
    local_50 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_4c = 0xffffffff00000080;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
  }
  else {
    FUN_1479bb03c(*(longlong *)(param_1 + 0x8d8),&local_78,local_79);
  }
  FUN_1477d9b90(param_3,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1477ebf3e(&local_78);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d9b90 FUN_1477d9b90 body=93 status=ok
// SIG undefined FUN_1477d9b90(void)

longlong FUN_1477d9b90(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1477ebff6(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 1477d9bf2 FUN_1477d9bf2 body=68 status=ok
// SIG undefined FUN_1477d9bf2(void)

void FUN_1477d9bf2(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(param_1 + 0x8d8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2a8) + 0xa8))(lVar1 + 0x2a8);
  }
  *param_3 = uVar2;
  return;
}



// FUNCTION 1477d9c36 FUN_1477d9c36 body=251 status=ok
// SIG undefined FUN_1477d9c36(void)

void FUN_1477d9c36(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FUN_1479bc04c(*(longlong *)(param_1 + 0x8d8),local_20,local_24);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d9d32 FUN_1477d9d32 body=251 status=ok
// SIG undefined FUN_1477d9d32(void)

void FUN_1477d9d32(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FUN_1479bc15e(*(longlong *)(param_1 + 0x8d8),local_20,local_24);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d9e32 FUN_1477d9e32 body=168 status=ok
// SIG undefined FUN_1477d9e32(void)

void FUN_1477d9e32(longlong param_1,longlong param_2)

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
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FUN_14342dcb4(*(longlong *)(param_1 + 0x8d8),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d9edc FUN_1477d9edc body=160 status=ok
// SIG undefined FUN_1477d9edc(void)

void FUN_1477d9edc(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x5d8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477d9f7e FUN_1477d9f7e body=406 status=ok
// SIG undefined FUN_1477d9f7e(void)

void FUN_1477d9f7e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [46];
  undefined1 local_7a;
  undefined1 local_79;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_79 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_79);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_79);
  }
  local_7a = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7a);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FUN_1479bc89e(*(longlong *)(param_1 + 0x8d8),puVar1,local_79,local_7a);
  }
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1477ebf3e(&local_78);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477da11a FUN_1477da11a body=168 status=ok
// SIG undefined FUN_1477da11a(void)

void FUN_1477da11a(longlong param_1,longlong param_2)

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
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FUN_14342ddd2(*(longlong *)(param_1 + 0x8d8),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477da1c4 FUN_1477da1c4 body=251 status=ok
// SIG undefined FUN_1477da1c4(void)

void FUN_1477da1c4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FUN_1479bcfa8(*(longlong *)(param_1 + 0x8d8),local_20,local_24);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477da2c0 FUN_1477da2c0 body=251 status=ok
// SIG undefined FUN_1477da2c0(void)

void FUN_1477da2c0(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FUN_1479bd0ba(*(longlong *)(param_1 + 0x8d8),local_20,local_24);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477da3bc FUN_1477da3bc body=251 status=ok
// SIG undefined FUN_1477da3bc(void)

void FUN_1477da3bc(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FUN_14342dfd0(*(longlong *)(param_1 + 0x8d8),local_20,local_24);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477da4b8 FUN_1477da4b8 body=165 status=ok
// SIG undefined FUN_1477da4b8(void)

void FUN_1477da4b8(longlong param_1,longlong param_2)

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
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FUN_14342e4a4(*(longlong *)(param_1 + 0x8d8),local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477da574 FUN_1477da574 body=671 status=ok
// SIG undefined FUN_1477da574(void)

void FUN_1477da574(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if ((*(byte *)(param_1 + 0x9e) & 0x10) == 0) {
    FUN_14335cb60(param_1,0xffffffff);
    if ((*(longlong *)(param_1 + 0x8d0) != 0) &&
       (lVar3 = *(longlong *)(param_1 + 0x8d8), lVar3 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x2b0);
      if (DAT_14c950c29 == 1) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_1 + 0x2b0);
        }
      }
      *(longlong *)(lVar3 + 0x4e0) = lVar2;
      *(byte *)(*(longlong *)(param_1 + 0x8d8) + 0x490) =
           *(byte *)(*(longlong *)(param_1 + 0x8d8) + 0x490) & 0xef |
           *(char *)(param_1 + 0x2a8) * '\x02' & 0x10U;
      *(byte *)(*(longlong *)(param_1 + 0x8d8) + 0x490) =
           *(byte *)(*(longlong *)(param_1 + 0x8d8) + 0x490) & 0xbf |
           (*(byte *)(param_1 + 0x890) & 1) << 6;
      *(byte *)(*(longlong *)(param_1 + 0x8d8) + 0x492) =
           *(byte *)(*(longlong *)(param_1 + 0x8d8) + 0x492) & 0xf7 |
           (*(byte *)(param_1 + 0x890) & 2) << 2;
      *(byte *)(*(longlong *)(param_1 + 0x8d8) + 0x490) =
           *(byte *)(*(longlong *)(param_1 + 0x8d8) + 0x490) & 0xf7 |
           *(char *)(param_1 + 0x2a8) * '\x02' & 8U;
      FUN_1477db3d8(*(longlong *)(param_1 + 0x8d8) + 0x8c0,param_1 + 0x690);
      FUN_1477db452(*(longlong *)(param_1 + 0x8d8) + 0x4e8,param_1 + 0x2b8);
      lVar3 = *(longlong *)(param_1 + 0x848);
      lVar2 = *(longlong *)(param_1 + 0x8d8);
      if (DAT_14c950c29 == 1) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_1 + 0x848);
        }
      }
      *(longlong *)(lVar2 + 0x488) = lVar3;
      *(undefined4 *)(*(longlong *)(param_1 + 0x8d8) + 0x4b4) = *(undefined4 *)(param_1 + 0x894);
      *(undefined4 *)(*(longlong *)(param_1 + 0x8d8) + 0x4b8) = *(undefined4 *)(param_1 + 0x898);
      lVar3 = *(longlong *)(param_1 + 0x8d8);
      FUN_1477e8570(lVar3 + 0x920,param_1 + 0x6e0);
      *(undefined4 *)(lVar3 + 0xa80) = *(undefined4 *)(param_1 + 0x840);
      lVar3 = *(longlong *)(param_1 + 0x8d0);
      lVar2 = *(longlong *)(param_1 + 0x2b0);
      if (DAT_14c950c29 == 1) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_1 + 0x2b0);
        }
      }
      bVar1 = DAT_14c950c29;
      *(longlong *)(lVar3 + 0x110) = lVar2;
      lVar3 = *(longlong *)(param_1 + 0x850);
      lVar2 = *(longlong *)(param_1 + 0x8d0);
      if ((bVar1 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_1 + 0x850);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(lVar2 + 0x130) = lVar3;
      lVar3 = *(longlong *)(param_1 + 0x858);
      lVar2 = *(longlong *)(param_1 + 0x8d0);
      if ((bVar1 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_1 + 0x858);
        }
      }
      *(longlong *)(lVar2 + 0x118) = lVar3;
      FUN_1477daebe(*(longlong *)(param_1 + 0x8d0) + 0x120,param_1 + 0x860);
      uVar4 = *(undefined8 *)(param_1 + 0x8d0);
      FUN_1479bcde8(*(undefined8 *)(param_1 + 0x8d8),uVar4);
      (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x5e8))(*(longlong **)(param_1 + 0x8d8),0);
      uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),
                       *(undefined1 *)(*(longlong *)(param_1 + 0x8d8) + 0x9e)) & 0xffffffffffffff10;
      FUN_1402a37f2(param_1,CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 4));
      *(undefined1 *)(param_1 + 0x8e0) = 1;
    }
  }
  return;
}



// FUNCTION 1477da874 FUN_1477da874 body=75 status=ok
// SIG undefined FUN_1477da874(void)

void FUN_1477da874(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14010df0a(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477da8c6 FUN_1477da8c6 body=60 status=ok
// SIG undefined FUN_1477da8c6(void)

void FUN_1477da8c6(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x440);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x440);
                    /* WARNING: Could not recover jumptable at 0x0001477da8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x600))(plVar2);
    return;
  }
  return;
}



// FUNCTION 1477da902 FUN_1477da902 body=60 status=ok
// SIG undefined FUN_1477da902(void)

void FUN_1477da902(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x440);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x440);
                    /* WARNING: Could not recover jumptable at 0x0001477da930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x608))(plVar2);
    return;
  }
  return;
}



// FUNCTION 1477da93e FUN_1477da93e body=76 status=ok
// SIG undefined FUN_1477da93e(void)

undefined8 * FUN_1477da93e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x440);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar2 = FUN_14479d2ce(param_1 + 0x440);
    FUN_14335ca68(uVar2,param_2,param_3);
  }
  return param_2;
}



// FUNCTION 1477da990 FUN_1477da990 body=170 status=ok
// SIG undefined FUN_1477da990(void)

void FUN_1477da990(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *(int *)(param_1 + 0x8a8)) {
    local_34 = param_4;
    FUN_1447cd2ec(param_1 + 0x8a0);
  }
  if ((longlong)*(int *)(param_1 + 0x8b8) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x8b0) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x8b0) + lVar1) != 0)) {
        FUN_1477ec088(param_1 + 0x8b0,param_2,param_4);
        break;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x8b8) * 0x10 != lVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477daa3c FUN_1477daa3c body=79 status=ok
// SIG undefined FUN_1477daa3c(void)

void FUN_1477daa3c(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  if (((char)param_2 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x2f0))(param_1), cVar1 == '\0'))
  {
    return;
  }
  FUN_1477da574(param_1);
  if ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0) {
    return;
  }
  FUN_1477daa8c((longlong)param_1 + 0xba,param_1,param_2);
  return;
}



// FUNCTION 1477daa8c FUN_1477daa8c body=129 status=ok
// SIG undefined FUN_1477daa8c(void)

void FUN_1477daa8c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140845556(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1479b6f4b(local_30,param_2,param_3);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dab0e FUN_1477dab0e body=64 status=ok
// SIG undefined FUN_1477dab0e(void)

void FUN_1477dab0e(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2f0))();
  if (cVar1 == '\0') {
    FUN_1458cf7c2(param_1);
    if ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0) {
      FUN_1477dab4e((longlong)param_1 + 0xbb,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1477dab4e FUN_1477dab4e body=121 status=ok
// SIG undefined FUN_1477dab4e(void)

void FUN_1477dab4e(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1402b62fa(param_1,&local_28);
  if (local_28 != 0) {
    FUN_1479b6f8e(local_28,param_2);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dabc8 FUN_1477dabc8 body=508 status=ok
// SIG undefined FUN_1477dabc8(void)

void FUN_1477dabc8(longlong param_1)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x8d8);
  if (lVar3 == 0) {
    lVar3 = FUN_1477daf84(param_1);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(param_1 + 0x8d8) = lVar3;
    *(undefined1 *)(lVar3 + 0xb9) = *(undefined1 *)(param_1 + 0xb9);
    local_30 = FUN_1477da990;
    local_28 = 0;
    FUN_1477db034(*(longlong *)(param_1 + 0x8d8) + 0xb38,local_20,param_1);
    lVar3 = *(longlong *)(param_1 + 0x8d8);
    if (*(longlong *)(lVar3 + 0x120) == 0) {
      cVar2 = FUN_1414a8c54(lVar3,param_1);
      if (cVar2 == '\0') {
        if ((*(longlong *)(param_1 + 0xa8) == 0) || (lVar3 = FUN_1447210f0(), lVar3 == 0)) {
          lVar3 = *(longlong *)(param_1 + 0xb0);
          if ((lVar3 == 0) && (lVar3 = FUN_1448abda6(param_1), lVar3 == 0)) {
            FUN_140486fc4(*(undefined8 *)(param_1 + 0x8d8),param_1,0);
          }
          else {
            FUN_140b506dc(*(undefined8 *)(param_1 + 0x8d8),lVar3,0);
            (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x490))
                      (*(longlong **)(param_1 + 0x8d8),param_1,&DAT_14cadad98,0);
          }
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x490))
                    (*(longlong **)(param_1 + 0x8d8),param_1,&DAT_14cadad98,0);
          FUN_140b506a4(*(undefined8 *)(param_1 + 0x8d8));
        }
      }
      lVar3 = *(longlong *)(param_1 + 0x8d8);
    }
    if (lVar3 == 0) goto LAB_1477dac6a;
  }
  *(byte *)(lVar3 + 0x9e) = *(byte *)(lVar3 + 0x9e) & 0xf7;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x8d8) + 0x490);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x8d8) + 0x490);
  *pbVar1 = *pbVar1 | 4;
  *(undefined1 *)(*(longlong *)(param_1 + 0x8d8) + 0x1fb) = 2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x8d8) + 0x4b4) = *(undefined4 *)(param_1 + 0x894);
  *(undefined4 *)(*(longlong *)(param_1 + 0x8d8) + 0x4b8) = *(undefined4 *)(param_1 + 0x898);
  *(byte *)(*(longlong *)(param_1 + 0x8d8) + 0x491) =
       *(byte *)(*(longlong *)(param_1 + 0x8d8) + 0x491) & 0x7f |
       (*(byte *)(param_1 + 0x890) & 4) << 5;
LAB_1477dac6a:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477dadc6 FUN_1477dadc6 body=99 status=ok
// SIG undefined FUN_1477dadc6(void)

undefined8 FUN_1477dadc6(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(param_1);
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x8d8);
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001477dae1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)(lVar2 + 0x2a8) + 0x88))(lVar2 + 0x2a8);
        return uVar1;
      }
      return 0;
    }
  }
  uVar1 = FUN_1479735a4(lVar2 + 0x1d0);
  return uVar1;
}



// FUNCTION 1477dae29 FUN_1477dae29 body=148 status=ok
// SIG undefined FUN_1477dae29(void)

undefined8 FUN_1477dae29(undefined8 param_1)

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
  uVar1 = FUN_1459e6c6c();
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



// FUNCTION 1477daebe FUN_1477daebe body=95 status=ok
// SIG undefined FUN_1477daebe(void)

undefined8 * FUN_1477daebe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458793b1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477ec236(param_1,iVar1);
      FUN_1477ec2ab(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477daf1e FUN_1477daf1e body=93 status=ok
// SIG undefined FUN_1477daf1e(void)

undefined8 * FUN_1477daf1e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1412895b6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477ec2f4(param_1,iVar1);
      FUN_1477ec369(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477daf7c FUN_1477daf7c body=8 status=ok
// SIG undefined FUN_1477daf7c(void)

undefined8 FUN_1477daf7c(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x8d8);
}



// FUNCTION 1477daf84 FUN_1477daf84 body=174 status=ok
// SIG undefined FUN_1477daf84(void)

undefined8 FUN_1477daf84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14117d122();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0x100048;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1477db034 FUN_1477db034 body=199 status=ok
// SIG undefined FUN_1477db034(void)

undefined8
FUN_1477db034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = 0;
  local_50 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_58);
  *puVar3 = &PTR_LAB_14a57c6f0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a57c680;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1477ec3a6(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477db0fc FUN_1477db0fc body=26 status=ok
// SIG undefined FUN_1477db0fc(void)

void FUN_1477db0fc(undefined8 param_1)

{
  FUN_1477dabc8();
  FUN_1401a0912(param_1);
  return;
}



// FUNCTION 1477db116 FUN_1477db116 body=237 status=ok
// SIG undefined FUN_1477db116(void)

void FUN_1477db116(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_1412a62ac();
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if ((lVar3 == 0) || ((*(byte *)(param_1 + 0x2a8) & 2) != 0)) {
    FUN_1458cf7c2(param_1);
  }
  plVar4 = *(longlong **)(param_1 + 0x8d8);
  if ((plVar4 != (longlong *)0x0) && ((*(byte *)((longlong)plVar4 + 0x9f) & 0x40) == 0)) {
    if (lVar3 != 0) {
      lVar3 = FUN_1447210f0(lVar3);
      plVar4 = *(longlong **)(param_1 + 0x8d8);
      if (lVar3 != 0) {
        (**(code **)(*plVar4 + 0x4a0))(plVar4,&DAT_14cadad64);
        FUN_1401bf202(*(undefined8 *)(param_1 + 0x8d8));
        plVar4 = *(longlong **)(param_1 + 0x8d8);
      }
    }
    (**(code **)(*plVar4 + 0x420))(plVar4,0);
    *(undefined8 *)(param_1 + 0x8d8) = 0;
  }
  *(undefined8 *)(param_1 + 0x900) = 0;
  plVar4 = *(longlong **)(param_1 + 0x908);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x908) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001477db1ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477db204 FUN_1477db204 body=57 status=ok
// SIG undefined FUN_1477db204(void)

void FUN_1477db204(longlong param_1,uint param_2)

{
  FUN_1448c4a0e();
  if (((*(longlong *)(param_1 + 0xa8) != 0) && (param_2 < 4)) && (param_2 != 2)) {
    FUN_1458cf7c2(param_1);
    return;
  }
  return;
}



// FUNCTION 1477db23e FUN_1477db23e body=81 status=ok
// SIG undefined FUN_1477db23e(void)

longlong FUN_1477db23e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x848) != 0) {
    return *(longlong *)(param_1 + 0x848);
  }
  plVar1 = (longlong *)FUN_145b54fcc();
  if ((plVar1[0x22] == 0) && ((**(code **)(*plVar1 + 1000))(plVar1), plVar1[0x22] == 0)) {
    return 0;
  }
  lVar2 = FUN_147975464();
  return lVar2;
}



// FUNCTION 1477db290 FUN_1477db290 body=147 status=ok
// SIG undefined FUN_1477db290(void)

ulonglong FUN_1477db290(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  byte extraout_AL;
  uint7 extraout_var;
  byte bVar3;
  undefined8 unaff_RBX;
  uint7 uVar4;
  bool bVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x8d8);
  bVar5 = true;
  uVar4 = (uint7)((ulonglong)unaff_RBX >> 8);
  bVar3 = 1;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x2a8) + 0xa8))(lVar2 + 0x2a8);
    uVar4 = extraout_var & 0xffffff;
    bVar3 = extraout_AL ^ 1;
  }
  lVar2 = *(longlong *)(param_1 + 0x8d0);
  if (lVar2 != 0) {
    LOCK();
    bVar5 = *(char *)(lVar2 + 0x34f) == '\0';
    if (bVar5) {
      *(char *)(lVar2 + 0x34f) = '\x01';
    }
    UNLOCK();
    if (!bVar5) {
      FUN_1447d2058();
    }
    iVar1 = *(int *)(lVar2 + 0x340);
    LOCK();
    bVar5 = *(char *)(lVar2 + 0x34f) == '\x01';
    if (bVar5) {
      *(char *)(lVar2 + 0x34f) = '\0';
    }
    UNLOCK();
    if (!bVar5) {
      FUN_14008cdb0(lVar2 + 0x34f);
    }
    bVar5 = iVar1 < 1;
  }
  return CONCAT71(uVar4,bVar3 & bVar5) & 0xffffffff;
}



// FUNCTION 1477db324 FUN_1477db324 body=179 status=ok
// SIG undefined FUN_1477db324(void)

void FUN_1477db324(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = (code *)0x0;
  local_58 = (longlong *)0x0;
  cVar2 = FUN_1403c1b2e(param_1 + 0x8f0,local_68);
  if (cVar2 != '\0') {
    do {
      pcVar1 = local_68[0];
      plVar4 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar4 = local_48;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar3);
      cVar2 = FUN_1403c1b2e(param_1 + 0x8f0,local_68);
    } while (cVar2 != '\0');
  }
  if (local_68[0] != (code *)0x0) {
    plVar4 = local_48;
    if (local_58 != (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477db3d8 FUN_1477db3d8 body=122 status=ok
// SIG undefined FUN_1477db3d8(void)

longlong FUN_1477db3d8(longlong param_1,longlong param_2)

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
    FUN_1477ec708(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1477db452 FUN_1477db452 body=273 status=ok
// SIG undefined FUN_1477db452(void)

longlong FUN_1477db452(longlong param_1,longlong param_2)

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
  longlong lVar12;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 0x2c);
  uVar10 = *(undefined4 *)(param_2 + 0x30);
  uVar11 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar9;
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  *(undefined4 *)(param_1 + 0x34) = uVar11;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_14115e0ba(param_1 + 0x38,param_2 + 0x38);
  *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_2 + 0xc0);
  lVar12 = *(longlong *)(param_2 + 200);
  if (DAT_14c950c29 == '\x01') {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 200);
    }
  }
  *(longlong *)(param_1 + 200) = lVar12;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  FUN_14115e0ba(param_1 + 0xd8,param_2 + 0xd8);
  FUN_14115e0ba(param_1 + 0x160,param_2 + 0x160);
  memcpy((void *)(param_1 + 0x1e8),(void *)(param_2 + 0x1e8),0x88);
  FUN_14115e0ba(param_1 + 0x270,param_2 + 0x270);
  FUN_1477e7f90(param_1 + 0x2f8,param_2 + 0x2f8);
  FUN_14115e0ba(param_1 + 0x308,param_2 + 0x308);
  FUN_1477e7ff0(param_1 + 0x390,param_2 + 0x390);
  return param_1;
}



// FUNCTION 1477db592 FUN_1477db592 body=112 status=ok
// SIG undefined FUN_1477db592(void)

void FUN_1477db592(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined1 *local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = 0;
  local_28 = &PTR_LAB_14a57c810;
  local_20 = &LAB_14336086c;
  local_48 = &LAB_1477ecc5a;
  FUN_1477dc6ea();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477db604 FUN_1477db604 body=156 status=ok
// SIG undefined FUN_1477db604(void)

void FUN_1477db604(undefined8 param_1,longlong param_2)

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
  FUN_1477db6a2(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477db6a2 FUN_1477db6a2 body=159 status=ok
// SIG undefined FUN_1477db6a2(void)

void FUN_1477db6a2(undefined1 *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 local_14;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    local_28 = &PTR_LAB_14a57c810;
    local_20 = &LAB_14336086c;
    local_48 = &LAB_1477ecc5a;
  }
  else {
    local_10 = *(byte *)(param_2 + 0x30) + 1;
    local_18 = *(undefined4 *)(param_2 + 0xc);
    local_28 = &PTR_LAB_14a57c830;
    local_14 = 1;
    local_48 = &LAB_143360878;
    local_20 = param_1;
  }
  local_38 = 0;
  FUN_1477dc6ea();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477db742 FUN_1477db742 body=156 status=ok
// SIG undefined FUN_1477db742(void)

void FUN_1477db742(undefined8 param_1,longlong param_2)

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
  FUN_1477db7e0(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477db7e0 FUN_1477db7e0 body=155 status=ok
// SIG undefined FUN_1477db7e0(void)

void FUN_1477db7e0(undefined1 *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    local_28 = &PTR_LAB_14a57c810;
    local_20 = &LAB_14336086c;
    local_48 = &LAB_1477ecc5a;
  }
  else {
    local_18 = *(undefined4 *)(param_2 + 0xc);
    local_28 = &PTR_LAB_14a57c830;
    local_14 = 2;
    local_10 = 0;
    local_48 = &LAB_143360878;
    local_20 = param_1;
  }
  local_38 = 0;
  FUN_1477dc6ea();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477db87c FUN_1477db87c body=324 status=ok
// SIG undefined FUN_1477db87c(void)

void FUN_1477db87c(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_e8 [32];
  undefined2 local_c8;
  undefined1 local_c6;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_8c;
  undefined1 local_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_74;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined2 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = 0x200;
  local_c6 = 1;
  local_c4 = 0xc0c0000000000000;
  uStack_bc = 0x412000003fc00000;
  local_b4 = 0x4120000040400000;
  local_ac = 0x42c80000;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 3;
  local_84 = 0;
  local_8c = 0;
  local_80 = 0x41a00000;
  local_78 = 0;
  local_74 = 0x469c4000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  puVar1 = &local_c8;
  if (*(undefined2 **)(param_2 + 0x38) != (undefined2 *)0x0) {
    puVar1 = *(undefined2 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477dc81a(param_1,puVar1);
  local_58 = 0;
  local_48 = &PTR_LAB_14a57c850;
  local_68 = &LAB_1433608e2;
  local_40 = puVar1;
  FUN_1477dc85c(param_1);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477db9c4 FUN_1477db9c4 body=115 status=ok
// SIG undefined FUN_1477db9c4(void)

void FUN_1477db9c4(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  FUN_1477dba38(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dba38 FUN_1477dba38 body=108 status=ok
// SIG undefined FUN_1477dba38(void)

void FUN_1477dba38(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  lVar1 = FUN_144aff0e0();
  if (((*(byte *)(lVar1 + 0x28) & 1) != 0) && ((*(byte *)(param_1 + 0x128) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0xf2) = 1;
    *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) & 0xfe;
  }
  switchD_143c3d4dc::caseD_20(param_1,local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dbaa6 FUN_1477dbaa6 body=341 status=ok
// SIG undefined FUN_1477dbaa6(void)

undefined8 * FUN_1477dbaa6(undefined8 *param_1)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_147d34054();
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0xffffffff00000000;
  *param_1 = &PTR_FUN_14a575550;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000000;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x16),4000);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_147030e2e(param_1 + 0x1d);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_1477ec7f0(local_68,param_1,FUN_1477dbbfc);
  FUN_145ca0b8c(&DAT_14caced90,&local_70,local_68);
  FUN_1401cb1ee(local_68);
  param_1[0x3c] = local_70;
  FUN_1477ec7f0(local_68,param_1,FUN_1477dbd1a);
  FUN_145ca0b8c(&DAT_14cacedd0,&local_70,local_68);
  FUN_1401cb1ee(local_68);
  param_1[0x3d] = local_70;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dbbfc FUN_1477dbbfc body=284 status=ok
// SIG undefined FUN_1477dbbfc(void)

void FUN_1477dbbfc(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined1 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x98) != param_2) goto LAB_1477dbc1f;
  lVar1 = FUN_14479d2ce(param_1 + 0x4c);
  if (lVar1 == 0) {
LAB_1477dbc86:
    local_78 = 0x200;
    local_76 = 1;
    local_74 = 0xc0c0000000000000;
    uStack_6c = 0x412000003fc00000;
    local_64 = 0x4120000040400000;
    local_5c = 0x42c80000;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 3;
    local_34 = 0;
    local_3c = 0;
    local_30 = 0x41a00000;
    local_28 = 0;
    local_24 = 0x469c4000;
  }
  else {
    lVar2 = FUN_145a6a308();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1477dbc86;
    FUN_1477dc272(lVar1,&local_78);
  }
  FUN_1477dc2b2(param_1,&local_78);
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_141092d32(&DAT_14caced90);
  }
LAB_1477dbc1f:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dbd1a FUN_1477dbd1a body=63 status=ok
// SIG undefined FUN_1477dbd1a(void)

void FUN_1477dbd1a(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x98) == param_2) {
    FUN_1477dbfca(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      FUN_141092d32(&DAT_14cacedd0);
      return;
    }
  }
  return;
}



// FUNCTION 1477dbd5a FUN_1477dbd5a body=133 status=ok
// SIG undefined FUN_1477dbd5a(void)

void FUN_1477dbd5a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a575550;
  FUN_1477dbfca(param_1 + 0x14);
  if (param_1[0x3c] != 0) {
    FUN_141092d32(&DAT_14caced90);
  }
  if (param_1[0x3d] != 0) {
    FUN_141092d32(&DAT_14cacedd0);
  }
  FUN_147030fe0(param_1 + 0x1d);
  FUN_1477dbde0(param_1 + 0x14);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1477dbe24(param_1);
  return;
}



// FUNCTION 1477dbde0 FUN_1477dbde0 body=67 status=ok
// SIG undefined FUN_1477dbde0(void)

void FUN_1477dbde0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
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
                    /* WARNING: Could not recover jumptable at 0x0001477dbe1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 1477dbe24 FUN_1477dbe24 body=60 status=ok
// SIG undefined FUN_1477dbe24(void)

void FUN_1477dbe24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a57d248;
  FUN_1477e88c8(param_1 + 0xc);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001477dbe59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 1477dbe60 FUN_1477dbe60 body=196 status=ok
// SIG undefined FUN_1477dbe60(void)

void FUN_1477dbe60(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int7 iVar5;
  undefined8 uVar4;
  int iVar6;
  
  FUN_147031080(param_1 + 0xe8,param_2[4],8);
  *(undefined4 *)(param_1 + 0x98) = *param_2;
  lVar2 = FUN_14479d2ce(param_1 + 0x4c);
  if (lVar2 != 0) {
    lVar3 = FUN_145a6a308();
    iVar6 = *(int *)(lVar3 + 0x38);
    if ((iVar6 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar6 * 8) ==
        lVar3 + 0x30)) {
      iVar5 = (int7)(int3)((uint)iVar6 >> 8);
      if (*(char *)(lVar2 + 0x110) == '\x02') {
        if (*(longlong *)(lVar2 + 0x120) != 0) {
          uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0x120) + 0xc);
          uVar4 = CONCAT71(iVar5,2);
          iVar6 = 0;
          goto LAB_1477dbf19;
        }
      }
      else if ((*(char *)(lVar2 + 0x110) == '\x01') &&
              (lVar2 = *(longlong *)(lVar2 + 0x118), lVar2 != 0)) {
        iVar6 = *(byte *)(lVar2 + 0x30) + 1;
        uVar1 = *(undefined4 *)(lVar2 + 0xc);
        uVar4 = CONCAT71(iVar5,1);
LAB_1477dbf19:
        FUN_1477dbf24(param_1 + 0xa0,uVar4,uVar1,iVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477dbf24 FUN_1477dbf24 body=165 status=ok
// SIG undefined FUN_1477dbf24(void)

void FUN_1477dbf24(char *param_1,char param_2,int param_3,int param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  EnterCriticalSection(lpCriticalSection);
  if (((*param_1 == param_2) && (*(int *)(param_1 + 8) == param_3)) &&
     (*(int *)(param_1 + 4) == param_4)) {
                    /* WARNING: Could not recover jumptable at 0x0001477dbf63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  *param_1 = param_2;
  *(int *)(param_1 + 8) = param_3;
  *(int *)(param_1 + 4) = param_4;
  LeaveCriticalSection(lpCriticalSection);
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
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
                    /* WARNING: Could not recover jumptable at 0x0001477dbfb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477dbfca FUN_1477dbfca body=109 status=ok
// SIG undefined FUN_1477dbfca(void)

void FUN_1477dbfca(undefined1 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
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
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 4) = 0xffffffff00000000;
  *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001477dc030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 1477dc038 FUN_1477dc038 body=568 status=ok
// SIG undefined FUN_1477dc038(void)

void FUN_1477dc038(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [40];
  undefined2 local_80;
  undefined1 local_7e;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  undefined8 local_44;
  undefined1 local_3c;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = FUN_14479d2ce(param_1 + 0x4c);
  if (lVar1 != 0) {
    lVar2 = FUN_145a6a308();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1477dc272(lVar1,&local_80);
      *(byte *)(param_1 + 0x9c) = local_48 >> 2 & 1;
      cVar3 = '\0';
      if ((byte)((char)local_80 - 1U) < 4) {
        cVar3 = (char)local_80;
      }
      goto LAB_1477dc120;
    }
  }
  local_80 = 0x200;
  local_7e = 1;
  local_7c = 0xc0c0000000000000;
  uStack_74 = 0x412000003fc00000;
  local_6c = 0x4120000040400000;
  local_64 = 0x42c80000;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 3;
  local_3c = 0;
  local_44 = 0;
  local_38 = 0x41a00000;
  local_30 = 0;
  local_2c = 0x469c4000;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  cVar3 = '\0';
LAB_1477dc120:
  lVar1 = param_1 + 0xe8;
  FUN_147031c5a(lVar1,cVar3);
  uVar4 = 2;
  if (local_80._1_1_ != '\x02') {
    uVar4 = (ulonglong)(local_80._1_1_ == '\x01');
  }
  FUN_147031c26(lVar1,uVar4);
  FUN_1470316f8(lVar1,(undefined4)local_6c);
  FUN_147031776(lVar1,local_6c._4_4_);
  FUN_147031830(lVar1,local_64);
  FUN_1470318ee(lVar1,local_7c._4_4_);
  FUN_1470319be(lVar1,(undefined4)uStack_74);
  FUN_1470319d4(lVar1,uStack_74._4_4_);
  FUN_1470319ea(lVar1,(undefined4)local_7c);
  FUN_147031b16(lVar1,local_44._4_4_);
  uVar4 = CONCAT71((int7)(uVar4 >> 8),local_48) & 0xffffffffffffff02;
  uVar5 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 1);
  FUN_147031b4a(lVar1,uVar5);
  uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),local_48) & 0xffffffffffffff08;
  uVar5 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 3);
  FUN_147031a16(lVar1,uVar5);
  FUN_147031a1e(lVar1,(undefined4)local_44);
  FUN_147031a4a(lVar1,(undefined4)local_38);
  uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),local_3c) & 0xffffffffffffff01;
  FUN_147031a86(lVar1,uVar4);
  FUN_147031a8e(lVar1,local_38._4_4_);
  FUN_147031ab4(lVar1,(undefined4)local_2c);
  FUN_147031aec(lVar1,CONCAT71((int7)(uVar4 >> 8),local_30) & 0xffffffffffffff01);
  FUN_147031af4(lVar1,local_2c._4_4_);
  FUN_147031b42(lVar1,local_7e);
  FUN_1477dc2b2(param_1,&local_80);
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477dc272 FUN_1477dc272 body=64 status=ok
// SIG undefined FUN_1477dc272(void)

undefined8 FUN_1477dc272(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  FUN_1477e893c(param_2,param_1 + 0x90);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return param_2;
}



// FUNCTION 1477dc2b2 FUN_1477dc2b2 body=74 status=ok
// SIG undefined FUN_1477dc2b2(void)

void FUN_1477dc2b2(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_2 + 0x20);
  iVar4 = 0;
  uVar3 = 0xffffffff;
  if (cVar1 == '\x02') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      uVar3 = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xc);
    }
  }
  else {
    iVar4 = 0;
    if ((cVar1 == '\x01') && (lVar2 = *(longlong *)(param_2 + 0x28), lVar2 != 0)) {
      uVar3 = *(undefined4 *)(lVar2 + 0xc);
      iVar4 = *(byte *)(lVar2 + 0x30) + 1;
    }
  }
  FUN_1477dbf24(param_1 + 0xa0,cVar1,uVar3,iVar4);
  return;
}



// FUNCTION 1477dc2fc FUN_1477dc2fc body=963 status=ok
// SIG undefined FUN_1477dc2fc(void)

ulonglong FUN_1477dc2fc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 unaff_RDI;
  ulonglong uVar12;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xb0);
  EnterCriticalSection(lpCriticalSection);
  cVar4 = *(char *)(param_1 + 0xa0);
  LeaveCriticalSection(lpCriticalSection);
  if (cVar4 != '\0') {
    uVar12 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (*(longlong *)(param_1 + 0xd8) != 0) goto LAB_1477dc696;
    plVar3 = (longlong *)(param_1 + 0xd8);
    EnterCriticalSection(lpCriticalSection);
    cVar4 = *(char *)(param_1 + 0xa0);
    LeaveCriticalSection(lpCriticalSection);
    if (cVar4 == '\x02') {
      lVar9 = FUN_145ef8526();
      if (lVar9 != 0) {
        plVar11 = (longlong *)FUN_147973140(lVar9,*(undefined4 *)(param_1 + 0x98));
        if (plVar11 != (longlong *)0x0) {
          EnterCriticalSection(lpCriticalSection);
          iVar7 = *(int *)(param_1 + 0xa8);
          LeaveCriticalSection(lpCriticalSection);
          if (iVar7 != -1) {
            (**(code **)(*plVar11 + 0xb0))(plVar11,&local_58,iVar7,0x3f800000);
            plVar2 = local_50;
            if (plVar3 != &local_58) {
              *(longlong *)(param_1 + 0xd8) = local_58;
              local_58 = 0;
              plVar8 = *(longlong **)(param_1 + 0xe0);
              if (local_50 != plVar8) {
                local_50 = (longlong *)0x0;
                *(longlong **)(param_1 + 0xe0) = plVar2;
                if (plVar8 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plVar8 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
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
            plVar2 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_50 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
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
            if (*plVar3 != 0) {
              EnterCriticalSection(lpCriticalSection);
              uVar6 = *(undefined4 *)(param_1 + 0xa8);
              LeaveCriticalSection(lpCriticalSection);
              FUN_14334905a(plVar11,&local_58,uVar6);
              plVar3 = local_50;
              if (local_58 != 0) {
                uVar6 = *(undefined4 *)(*(longlong *)(local_58 + 0xa8) + 0xcb8);
                EnterCriticalSection(lpCriticalSection);
                *(undefined4 *)(param_1 + 0xa4) = uVar6;
                LeaveCriticalSection(lpCriticalSection);
                FUN_1470313fa(param_1 + 0xe8,uVar6);
                plVar3 = local_50;
                if (local_50 != (longlong *)0x0) {
                  LOCK();
                  plVar11 = local_50 + 1;
                  *(int *)plVar11 = (int)*plVar11 + -1;
                  UNLOCK();
                  if ((int)*plVar11 == 0) {
                    (**(code **)*local_50)(local_50);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar3 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar3 + 0x10))(plVar3);
                    }
                  }
                }
                goto LAB_1477dc696;
              }
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar11 = local_50 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
                  (**(code **)*local_50)(local_50);
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
        }
      }
    }
    else if (cVar4 == '\x01') {
      lVar9 = FUN_145ef8526();
      if (lVar9 != 0) {
        lVar9 = FUN_147973140(lVar9,*(undefined4 *)(param_1 + 0x98));
        if (lVar9 != 0) {
          EnterCriticalSection(lpCriticalSection);
          uVar5 = *(uint *)(param_1 + 0xa8);
          LeaveCriticalSection(lpCriticalSection);
          if ((ulonglong)uVar5 != 0xffffffff) {
            lVar10 = FUN_1477b91ee(lVar9);
            if (lVar10 != 0) {
              EnterCriticalSection(lpCriticalSection);
              uVar6 = *(undefined4 *)(param_1 + 0xa4);
              LeaveCriticalSection(lpCriticalSection);
              uVar12 = (ulonglong)uVar5 | 0xffffffff00000000;
              FUN_1477b3126(lVar10,uVar12,uVar6,0);
              local_60 = 0x3f800000;
              local_68 = uVar6;
              FUN_1477b3812(lVar10,&local_58,uVar12,*(undefined4 *)(lVar9 + 0x7c));
              plVar11 = local_50;
              if (plVar3 != &local_58) {
                *(longlong *)(param_1 + 0xd8) = local_58;
                local_58 = 0;
                plVar3 = *(longlong **)(param_1 + 0xe0);
                if (local_50 != plVar3) {
                  local_50 = (longlong *)0x0;
                  *(longlong **)(param_1 + 0xe0) = plVar11;
                  if (plVar3 != (longlong *)0x0) {
                    LOCK();
                    plVar11 = plVar3 + 1;
                    *(int *)plVar11 = (int)*plVar11 + -1;
                    UNLOCK();
                    if ((int)*plVar11 == 0) {
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
              plVar3 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar11 = local_50 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
              FUN_1470313fa(param_1 + 0xe8,uVar6);
            }
          }
        }
      }
    }
  }
  uVar12 = 0;
LAB_1477dc696:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dc6ea FUN_1477dc6ea body=303 status=ok
// SIG undefined FUN_1477dc6ea(void)

void FUN_1477dc6ea(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  undefined8 *local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = *param_2;
  local_98[0] = (longlong *)0x0;
  if (local_a8 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)*plVar1)(plVar1,local_98);
  }
  local_68[0] = (undefined1 *)0x0;
  local_58 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *local_58 = &PTR_FUN_14a57c7d0;
  local_58[2] = local_a8;
  local_58[4] = local_98[0];
  local_98[0] = (longlong *)0x0;
  *(undefined4 *)(local_58 + 8) = local_78;
  *(undefined4 *)((longlong)local_58 + 0x44) = uStack_74;
  *(undefined4 *)(local_58 + 9) = uStack_70;
  *(undefined4 *)((longlong)local_58 + 0x4c) = uStack_6c;
  *(undefined4 *)(local_58 + 6) = local_88;
  *(undefined4 *)((longlong)local_58 + 0x34) = uStack_84;
  *(undefined4 *)(local_58 + 7) = uStack_80;
  *(undefined4 *)((longlong)local_58 + 0x3c) = uStack_7c;
  if (local_a8 != 0) {
    local_a8 = 0;
  }
  if (local_58 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_68[0] = &LAB_1477ec9bc;
  }
  FUN_1477dc85c(param_1,local_68);
  if (local_a8 != 0) {
    plVar1 = local_98[0];
    if (local_98[0] == (longlong *)0x0) {
      plVar1 = (longlong *)&local_88;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dc81a FUN_1477dc81a body=66 status=ok
// SIG undefined FUN_1477dc81a(void)

void FUN_1477dc81a(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  FUN_1477e883c(param_1 + 0x90,param_2);
  FUN_147d3448e(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001477dc855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 1477dc85c FUN_1477dc85c body=235 status=ok
// SIG undefined FUN_1477dc85c(void)

void FUN_1477dc85c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    plVar10 = plVar9 + (longlong)*(int *)(param_1 + 0x30) * 2;
    do {
      plVar2 = (longlong *)plVar9[1];
      if (plVar2 != (longlong *)0x0) {
        iVar6 = (int)plVar2[1];
        do {
          if (iVar6 == 0) goto LAB_1477dc8f4;
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar2 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar3 = *plVar9;
        if (lVar3 != 0) {
          pcVar4 = (code *)*param_2;
          plVar8 = (longlong *)param_2[2];
          if ((longlong *)param_2[2] == (longlong *)0x0) {
            plVar8 = param_2 + 4;
          }
          uVar7 = (**(code **)(*plVar8 + 8))();
          (*pcVar4)(uVar7,lVar3);
        }
        LOCK();
        plVar8 = plVar2 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
LAB_1477dc8f4:
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (*param_2 == 0) {
    return;
  }
  plVar9 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar9 = (longlong *)param_2[2];
  }
                    /* WARNING: Could not recover jumptable at 0x0001477dc931. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x10))(plVar9);
  return;
}



// FUNCTION 1477dc94e FUN_1477dc94e body=180 status=ok
// SIG undefined FUN_1477dc94e(void)

void FUN_1477dc94e(undefined8 param_1,longlong param_2)

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
  FUN_1477dd398(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dca06 FUN_1477dca06 body=166 status=ok
// SIG undefined FUN_1477dca06(void)

undefined8 * FUN_1477dca06(undefined8 *param_1)

{
  FUN_147d34054();
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0xffffffff00000000;
  *param_1 = &PTR_FUN_14a575d50;
  param_1[0x15] = 0x4000000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1a),4000);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 1477dcaac FUN_1477dcaac body=138 status=ok
// SIG undefined FUN_1477dcaac(void)

void FUN_1477dcaac(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xac) = 0x41000000;
  iVar4 = 4;
  do {
    iVar2 = *(int *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x94) < iVar2 + 1U) {
      FUN_1477eccac((longlong *)(param_1 + 0x88),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x88);
    *(undefined1 *)(lVar3 + (longlong)iVar2 * 0x18) = 1;
    puVar1 = (undefined8 *)(lVar3 + 8 + (longlong)iVar2 * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_1470346f5(0,0);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 1477dcb36 FUN_1477dcb36 body=119 status=ok
// SIG undefined FUN_1477dcb36(void)

undefined8 * FUN_1477dcb36(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x98);
  _Src = *(void **)(param_1 + 0x90);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1477e8c40(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return param_2;
}



// FUNCTION 1477dcbae FUN_1477dcbae body=61 status=ok
// SIG undefined FUN_1477dcbae(void)

void FUN_1477dcbae(undefined1 *param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  *param_1 = 1;
  FUN_1477e8ca2(param_1 + 8,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001477dcbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1477dcbec FUN_1477dcbec body=835 status=ok
// SIG undefined FUN_1477dcbec(void)

void FUN_1477dcbec(longlong param_1)

{
  float **ppfVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  float *_Src;
  char cVar6;
  float *pfVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  int local_b4;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined5 uStack_60;
  float *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_58 = (float *)0x0;
  uStack_50 = 0;
  cVar6 = FUN_1477dd34a(param_1 + 0xb8,&local_58);
  _Src = local_58;
  if (cVar6 == '\0') {
    if (*(char *)(param_1 + 0xb0) != '\0') goto LAB_1477dceb8;
  }
  else {
    iVar12 = (int)uStack_50;
    if ((longlong)(int)uStack_50 != 0) {
      pfVar7 = local_58;
      do {
        fVar14 = *pfVar7;
        fVar15 = pfVar7[1];
        if (20000.0 <= fVar14) {
          fVar14 = 20000.0;
        }
        if (fVar14 <= 20.0) {
          fVar14 = 20.0;
        }
        *pfVar7 = fVar14;
        if (2.0 <= fVar15) {
          fVar15 = 2.0;
        }
        if (fVar15 <= 0.1) {
          fVar15 = 0.1;
        }
        pfVar7[1] = fVar15;
        pfVar7 = pfVar7 + 4;
      } while (pfVar7 != local_58 + (longlong)(int)uStack_50 * 4);
    }
    ppfVar1 = (float **)(param_1 + 0x108);
    if (ppfVar1 != &local_58) {
      lVar10 = (longlong)(int)uStack_50;
      *(int *)(param_1 + 0x110) = (int)uStack_50;
      if ((int)uStack_50 == 0 && *(int *)(param_1 + 0x114) == 0) {
        *(undefined4 *)(param_1 + 0x114) = 0;
      }
      else {
        FUN_1477e8c40(ppfVar1,uStack_50 & 0xffffffff);
        if (iVar12 != 0) {
          memcpy(*ppfVar1,_Src,lVar10 << 4);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
  local_98 = (longlong)*(int *)(param_1 + 0x90);
  if (0 < local_98) {
    uVar4 = *(uint *)(param_1 + 0x110);
    local_b0 = (longlong)(int)uVar4;
    local_a0 = (ulonglong)uVar4;
    local_b4 = -uVar4;
    local_a8 = local_b0 * 0x30;
    lVar10 = local_a0 * 0x30;
    lVar11 = 0;
    do {
      lVar13 = *(longlong *)(param_1 + 0x88);
      puVar2 = (undefined1 *)(lVar13 + lVar11 * 0x18);
      plVar9 = (longlong *)(puVar2 + 8);
      *puVar2 = 1;
      iVar12 = *(int *)(puVar2 + 0x10);
      uVar8 = local_a0;
      local_90 = lVar11;
      if (iVar12 < (int)local_a0) {
        lVar13 = lVar13 + lVar11 * 0x18;
        iVar12 = (int)local_a0 - iVar12;
        do {
          FUN_147030660(local_88);
          uVar4 = *(uint *)(lVar13 + 0x10);
          *(uint *)(lVar13 + 0x10) = uVar4 + 1;
          if (*(uint *)(lVar13 + 0x14) < uVar4 + 1) {
            uVar8 = (ulonglong)uVar4;
            FUN_14703472e(plVar9,uVar8);
          }
          lVar11 = *plVar9;
          lVar5 = (longlong)(int)uVar4 * 0x30;
          *(undefined ***)(lVar11 + lVar5) = &PTR_FUN_14a1354f0;
          puVar3 = (undefined4 *)(lVar11 + 8 + lVar5);
          *puVar3 = local_80;
          puVar3[1] = uStack_7c;
          puVar3[2] = uStack_78;
          puVar3[3] = uStack_74;
          puVar3 = (undefined4 *)(lVar11 + 0x18 + lVar5);
          *puVar3 = local_70;
          puVar3[1] = uStack_6c;
          puVar3[2] = uStack_68;
          puVar3[3] = uStack_64;
          *(ulonglong *)(lVar11 + 0x25 + lVar5) = CONCAT53(uStack_60,uStack_64._1_3_);
          FUN_147030684(local_88);
          local_c8 = 0;
          local_d0 = 0x40000000;
          local_d8 = 0x469c4000;
          FUN_14703069c(lVar5 + *plVar9,*(undefined4 *)(param_1 + 0xa8),2,4);
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      else if ((int)local_b0 < iVar12) {
        iVar12 = iVar12 + local_b4;
        lVar11 = local_a8;
        do {
          uVar8 = 0;
          FUN_147033650(*plVar9 + lVar11,0);
          lVar11 = lVar11 + 0x30;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      if (0 < (int)local_b0) {
        lVar13 = 0xc;
        lVar11 = 0;
        do {
          lVar5 = *(longlong *)(param_1 + 0x108);
          FUN_147033650(*plVar9 + lVar11,
                        CONCAT71((int7)(uVar8 >> 8),*(undefined1 *)(lVar5 + lVar13)) &
                        0xffffffffffffff01);
          local_d8 = *(undefined4 *)(lVar5 + -4 + lVar13);
          uVar8 = 0;
          FUN_1470305d4(*plVar9 + lVar11,4,*(undefined4 *)(lVar5 + -0xc + lVar13),
                        *(undefined4 *)(lVar5 + -8 + lVar13));
          lVar11 = lVar11 + 0x30;
          lVar13 = lVar13 + 0x10;
        } while (lVar10 != lVar11);
      }
      lVar11 = local_90 + 1;
    } while (lVar11 != local_98);
  }
LAB_1477dceb8:
  if (local_58 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477dcf30 FUN_1477dcf30 body=1048 status=ok
// SIG undefined FUN_1477dcf30(void)

undefined8 FUN_1477dcf30(longlong param_1,longlong param_2)

{
  float **ppfVar1;
  float *_Src;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_108 [32];
  float *local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = (float *)0x0;
  uStack_e0 = 0;
  fVar8 = *(float *)(param_2 + 0x10);
  fVar6 = *(float *)(param_2 + 0x14);
  if (20000.0 <= fVar8) {
    fVar8 = 20000.0;
  }
  if (fVar8 <= 20.0) {
    fVar8 = 20.0;
  }
  fVar7 = *(float *)(param_2 + 0x18);
  if (2.0 <= fVar7) {
    fVar7 = 2.0;
  }
  if (fVar7 <= 0.1) {
    fVar7 = 0.1;
  }
  if (7.94 <= fVar6) {
    fVar6 = 7.94;
  }
  if (fVar6 <= 0.001) {
    fVar6 = 0.001;
  }
  if (fVar6 <= 1e-08) {
    fVar6 = 1e-08;
  }
  fVar6 = logf(fVar6);
  uStack_e0._0_4_ = 1;
  FUN_1477ecd40(&local_e8,0);
  *local_e8 = fVar8;
  local_e8[1] = fVar7;
  local_e8[2] = (fVar6 / 2.3025851) * 20.0;
  local_e8[3] = 1.4013e-45;
  fVar8 = *(float *)(param_2 + 0x1c);
  fVar6 = *(float *)(param_2 + 0x20);
  if (20000.0 <= fVar8) {
    fVar8 = 20000.0;
  }
  if (fVar8 <= 20.0) {
    fVar8 = 20.0;
  }
  fVar7 = *(float *)(param_2 + 0x24);
  if (2.0 <= fVar7) {
    fVar7 = 2.0;
  }
  if (fVar7 <= 0.1) {
    fVar7 = 0.1;
  }
  if (7.94 <= fVar6) {
    fVar6 = 7.94;
  }
  if (fVar6 <= 0.001) {
    fVar6 = 0.001;
  }
  if (fVar6 <= 1e-08) {
    fVar6 = 1e-08;
  }
  fVar6 = logf(fVar6);
  iVar2 = (uint)uStack_e0;
  lVar5 = (longlong)(int)(uint)uStack_e0;
  uStack_e0._0_4_ = (uint)uStack_e0 + 1;
  if (uStack_e0._4_4_ < (uint)uStack_e0) {
    FUN_1477ecd40(&local_e8,iVar2);
  }
  local_e8[lVar5 * 4] = fVar8;
  local_e8[lVar5 * 4 + 1] = fVar7;
  local_e8[lVar5 * 4 + 2] = (fVar6 / 2.3025851) * 20.0;
  local_e8[lVar5 * 4 + 3] = 1.4013e-45;
  fVar8 = *(float *)(param_2 + 0x28);
  fVar6 = *(float *)(param_2 + 0x2c);
  if (20000.0 <= fVar8) {
    fVar8 = 20000.0;
  }
  if (fVar8 <= 20.0) {
    fVar8 = 20.0;
  }
  fVar7 = *(float *)(param_2 + 0x30);
  if (2.0 <= fVar7) {
    fVar7 = 2.0;
  }
  if (fVar7 <= 0.1) {
    fVar7 = 0.1;
  }
  if (7.94 <= fVar6) {
    fVar6 = 7.94;
  }
  if (fVar6 <= 0.001) {
    fVar6 = 0.001;
  }
  if (fVar6 <= 1e-08) {
    fVar6 = 1e-08;
  }
  fVar6 = logf(fVar6);
  uVar3 = (uint)uStack_e0;
  lVar5 = (longlong)(int)(uint)uStack_e0;
  uStack_e0._0_4_ = (uint)uStack_e0 + 1;
  if (uStack_e0._4_4_ < (uint)uStack_e0) {
    FUN_1477ecd40(&local_e8,uVar3);
  }
  local_e8[lVar5 * 4] = fVar8;
  local_e8[lVar5 * 4 + 1] = fVar7;
  local_e8[lVar5 * 4 + 2] = (fVar6 / 2.3025851) * 20.0;
  local_e8[lVar5 * 4 + 3] = 1.4013e-45;
  fVar8 = *(float *)(param_2 + 0x34);
  fVar6 = *(float *)(param_2 + 0x38);
  if (20000.0 <= fVar8) {
    fVar8 = 20000.0;
  }
  if (fVar8 <= 20.0) {
    fVar8 = 20.0;
  }
  fVar7 = *(float *)(param_2 + 0x3c);
  if (2.0 <= fVar7) {
    fVar7 = 2.0;
  }
  if (fVar7 <= 0.1) {
    fVar7 = 0.1;
  }
  if (7.94 <= fVar6) {
    fVar6 = 7.94;
  }
  if (fVar6 <= 0.001) {
    fVar6 = 0.001;
  }
  if (fVar6 <= 1e-08) {
    fVar6 = 1e-08;
  }
  fVar6 = logf(fVar6);
  uVar3 = (uint)uStack_e0;
  lVar5 = (longlong)(int)(uint)uStack_e0;
  uStack_e0._0_4_ = (uint)uStack_e0 + 1;
  if (uStack_e0._4_4_ < (uint)uStack_e0) {
    FUN_1477ecd40(&local_e8,uVar3);
  }
  local_e8[lVar5 * 4] = fVar8;
  local_e8[lVar5 * 4 + 1] = fVar7;
  local_e8[lVar5 * 4 + 2] = (fVar6 / 2.3025851) * 20.0;
  local_e8[lVar5 * 4 + 3] = 1.4013e-45;
  ppfVar1 = (float **)(param_1 + 0xf8);
  cVar4 = FUN_14335d29b(ppfVar1,&local_e8);
  _Src = local_e8;
  if (cVar4 == '\0') {
    if (ppfVar1 != &local_e8) {
      iVar2 = (uint)uStack_e0;
      lVar5 = (longlong)(int)(uint)uStack_e0;
      *(uint *)(param_1 + 0x100) = (uint)uStack_e0;
      if ((uint)uStack_e0 == 0 && *(int *)(param_1 + 0x104) == 0) {
        *(undefined4 *)(param_1 + 0x104) = 0;
      }
      else {
        FUN_1477e8c40(ppfVar1,uStack_e0 & 0xffffffff);
        if (iVar2 != 0) {
          memcpy(*ppfVar1,_Src,lVar5 << 4);
        }
      }
    }
    FUN_1477dcbae(param_1 + 0xb8,ppfVar1);
  }
  if (local_e8 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dd34a FUN_1477dd34a body=78 status=ok
// SIG undefined FUN_1477dd34a(void)

ulonglong FUN_1477dd34a(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 unaff_RBX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    *param_1 = '\0';
    FUN_1477e8ca2(param_2,param_1 + 8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff;
}



// FUNCTION 1477dd398 FUN_1477dd398 body=66 status=ok
// SIG undefined FUN_1477dd398(void)

void FUN_1477dd398(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  FUN_1477e8ca2(param_1 + 0x90,param_2);
  FUN_147d3448e(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001477dd3d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 1477dd3ea FUN_1477dd3ea body=230 status=ok
// SIG undefined FUN_1477dd3ea(void)

void FUN_1477dd3ea(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined8 local_54;
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_54 = 0x3f63d70a3be56042;
  local_4c = 0x3d4ccccd;
  local_48 = 0;
  local_44 = 0x3fbeb8523dcccccd;
  uStack_3c = 0x3f59999a3f59999a;
  local_34 = 0x3f547ae13f7e76c9;
  uStack_2c = 0x3fa147ae;
  local_24 = 0x3e99999a;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477dd926(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dd4d2 FUN_1477dd4d2 body=308 status=ok
// SIG undefined FUN_1477dd4d2(void)

void FUN_1477dd4d2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477dd608(param_1,local_20,local_24,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dd608 FUN_1477dd608 body=192 status=ok
// SIG undefined FUN_1477dd608(void)

void FUN_1477dd608(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0x28);
    *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_1 + 0x104) = param_3;
    *(undefined4 *)(param_1 + 0x108) = param_4;
    FUN_147d3448e();
    return;
  }
  return;
}



// FUNCTION 1477dd6cc FUN_1477dd6cc body=304 status=ok
// SIG undefined FUN_1477dd6cc(void)

undefined8 * FUN_1477dd6cc(undefined8 *param_1)

{
  FUN_147d34054();
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0xffffffff00000000;
  *param_1 = &PTR_FUN_14a576bb0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_147038fa0((longlong)param_1 + 0x94);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x19),4000);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x20),4000);
  param_1[0x25] = 0xbf800000bf800000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x1ac) = 0x404;
  param_1[0x28] = &DAT_14a176f00;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  return param_1;
}



// FUNCTION 1477dd7fc FUN_1477dd7fc body=296 status=ok
// SIG undefined FUN_1477dd7fc(void)

void FUN_1477dd7fc(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147038fa0();
  if (*(longlong *)(param_1 + 0x88) == 0) {
    lVar2 = 0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 200);
    EnterCriticalSection(lpCriticalSection);
    if (*(char *)(param_1 + 0x90) == '\0') {
      LeaveCriticalSection(lpCriticalSection);
    }
    else {
      *(undefined1 *)(param_1 + 0x90) = 0;
      local_38 = *(undefined4 *)(param_1 + 0xc4);
      local_68 = *(undefined4 *)(param_1 + 0x94);
      uStack_64 = *(undefined4 *)(param_1 + 0x98);
      uStack_60 = *(undefined4 *)(param_1 + 0x9c);
      uStack_5c = *(undefined4 *)(param_1 + 0xa0);
      local_58 = *(undefined4 *)(param_1 + 0xa4);
      uStack_54 = *(undefined4 *)(param_1 + 0xa8);
      uStack_50 = *(undefined4 *)(param_1 + 0xac);
      uStack_4c = *(undefined4 *)(param_1 + 0xb0);
      local_48 = *(undefined4 *)(param_1 + 0xb4);
      uStack_44 = *(undefined4 *)(param_1 + 0xb8);
      uStack_40 = *(undefined4 *)(param_1 + 0xbc);
      uStack_3c = *(undefined4 *)(param_1 + 0xc0);
      LeaveCriticalSection(lpCriticalSection);
      FUN_14703906a(*(undefined8 *)(param_1 + 0x88),&local_68);
    }
    lVar2 = *(longlong *)(param_1 + 0x88);
  }
  cVar3 = '\0';
  if (DAT_14cabb898 == 0) {
    cVar3 = '\x02' - (DAT_14cabb880 == 0);
  }
  if (lVar2 != 0) {
    puVar1 = (undefined4 *)FUN_1470391c2();
    if (*(char *)((longlong)puVar1 + 0x32) != cVar3) {
      local_68 = *puVar1;
      uStack_64 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_5c = puVar1[3];
      local_58 = puVar1[4];
      uStack_54 = puVar1[5];
      uStack_50 = puVar1[6];
      uStack_4c = puVar1[7];
      local_48 = puVar1[8];
      uStack_44 = puVar1[9];
      uStack_40 = puVar1[10];
      uStack_3c = puVar1[0xb];
      local_38._3_1_ = (undefined1)((uint)puVar1[0xc] >> 0x18);
      local_38._0_3_ = CONCAT12(cVar3,(short)puVar1[0xc]);
      FUN_14703906a(*(undefined8 *)(param_1 + 0x88));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dd926 FUN_1477dd926 body=94 status=ok
// SIG undefined FUN_1477dd926(void)

void FUN_1477dd926(longlong param_1,undefined4 *param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  uVar13 = param_2[0xd];
  uVar14 = param_2[0xe];
  uVar15 = param_2[0xf];
  *(undefined4 *)(param_1 + 0xc0) = param_2[0xc];
  *(undefined4 *)(param_1 + 0xc4) = uVar13;
  *(undefined4 *)(param_1 + 200) = uVar14;
  *(undefined4 *)(param_1 + 0xcc) = uVar15;
  *(undefined4 *)(param_1 + 0xb0) = uVar9;
  *(undefined4 *)(param_1 + 0xb4) = uVar10;
  *(undefined4 *)(param_1 + 0xb8) = uVar11;
  *(undefined4 *)(param_1 + 0xbc) = uVar12;
  *(undefined4 *)(param_1 + 0xa0) = uVar5;
  *(undefined4 *)(param_1 + 0xa4) = uVar6;
  *(undefined4 *)(param_1 + 0xa8) = uVar7;
  *(undefined4 *)(param_1 + 0xac) = uVar8;
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  FUN_147d3448e(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001477dd97d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 1477dd988 FUN_1477dd988 body=8 status=ok
// SIG undefined FUN_1477dd988(void)

void FUN_1477dd988(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x54) = param_3;
  return;
}



// FUNCTION 1477dd990 FUN_1477dd990 body=391 status=ok
// SIG undefined FUN_1477dd990(void)

void FUN_1477dd990(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_c8 [40];
  LPCRITICAL_SECTION local_a0;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = (LPCRITICAL_SECTION)(param_1 + 0x28);
  EnterCriticalSection(local_a0);
  plVar1 = (longlong *)(param_1 + 0x58);
  lVar2 = param_1 + 0x68;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = lVar2;
  if (*(int *)(param_1 + 0x80) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar7 = *(int *)(param_1 + 0x80);
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = plVar1;
  if ((iStack_5c != iVar7) || (uStack_68 != lVar2)) {
    do {
      plVar3 = (longlong *)(*local_98 + 0x30 + (longlong)iStack_7c * 0x60);
      pcVar4 = (code *)plVar3[-4];
      plVar6 = (longlong *)plVar3[-2];
      if ((longlong *)plVar3[-2] == (longlong *)0x0) {
        plVar6 = plVar3;
      }
      local_70 = param_2;
      local_4c = param_3;
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar4)(uVar5,&local_70,&local_4c);
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while (local_98 != plVar1 || (CONCAT44(uStack_84,uStack_88) != lVar2 || iStack_7c != iVar7));
  }
  LeaveCriticalSection(local_a0);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


